// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 51

// SMultiBoxWidget @ 1427b5b20

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

SMultiBoxWidget * __thiscall SMultiBoxWidget::SMultiBoxWidget(SMultiBoxWidget *this)

{
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  (this->DragPreview).InsertIndex = -1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MultiBox).Object = (FMultiBox *)0x0;
  (this->MultiBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->TileViewWidgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TileViewWidgets).ArrayNum = 0;
  (this->TileViewWidgets).ArrayMax = 0;
  (this->MainHorizontalBox).Object = (SHorizontalBox *)0x0;
  (this->MainHorizontalBox).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MainVerticalBox).Object = (SVerticalBox *)0x0;
  (this->MainVerticalBox).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MainPanelBox).Object = (SPanel *)0x0;
  (this->MainPanelBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->ClippedHorizontalBox).Object = (SClippingHorizontalBox *)0x0;
  (this->ClippedHorizontalBox).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ClippedVerticalBox).Object = (SClippingVerticalBox *)0x0;
  (this->ClippedVerticalBox).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->UniformToolbarPanel).Object = (SUniformWrapPanel *)0x0;
  (this->UniformToolbarPanel).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DragPreview).BlockName.ComparisonIndex = 0;
  (this->DragPreview).BlockName.Number = 0;
  (this->DragPreview).BlockType = None;
  (this->DragPreview).PreviewBlock.Object = (FDropPreviewBlock *)0x0;
  (this->DragPreview).PreviewBlock.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->MultiBoxWidgets = 0;
  *(undefined8 *)&(this->MultiBoxWidgets).field_0x8 = 0;
  *(undefined8 *)&(this->MultiBoxWidgets).field_0x20 = 0;
  this->_padding_ = (longlong)&___7SMultiBoxWidget__6B_;
  *(undefined4 *)&(this->MultiBoxWidgets).field_0x28 = 0;
  *(undefined4 *)&(this->MultiBoxWidgets).field_0x2c = 0x80;
  *(undefined4 *)&(this->MultiBoxWidgets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MultiBoxWidgets).field_0x34 = 0;
  *(undefined8 *)&(this->MultiBoxWidgets).field_0x40 = 0;
  *(undefined4 *)&(this->MultiBoxWidgets).field_0x48 = 0;
  *(undefined8 *)&this->FinalMultiBoxWidgets = 0;
  *(undefined8 *)&(this->FinalMultiBoxWidgets).field_0x8 = 0;
  *(undefined8 *)&(this->FinalMultiBoxWidgets).field_0x20 = 0;
  *(undefined4 *)&(this->FinalMultiBoxWidgets).field_0x28 = 0;
  *(undefined4 *)&(this->FinalMultiBoxWidgets).field_0x2c = 0x80;
  *(undefined4 *)&(this->FinalMultiBoxWidgets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FinalMultiBoxWidgets).field_0x34 = 0;
  *(undefined8 *)&(this->FinalMultiBoxWidgets).field_0x40 = 0;
  *(undefined4 *)&(this->FinalMultiBoxWidgets).field_0x48 = 0;
  *(undefined8 *)&this->FlattenSearchableBlocks = 0;
  *(undefined8 *)&(this->FlattenSearchableBlocks).field_0x8 = 0;
  *(undefined8 *)&(this->FlattenSearchableBlocks).field_0x20 = 0;
  *(undefined4 *)&(this->FlattenSearchableBlocks).field_0x28 = 0;
  *(undefined4 *)&(this->FlattenSearchableBlocks).field_0x2c = 0x80;
  *(undefined4 *)&(this->FlattenSearchableBlocks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FlattenSearchableBlocks).field_0x34 = 0;
  *(undefined8 *)&(this->FlattenSearchableBlocks).field_0x40 = 0;
  *(undefined4 *)&(this->FlattenSearchableBlocks).field_0x48 = 0;
  this->bDidFlattenSearchableBlocks = false;
  *(undefined8 *)&this->FlattenSearchableWidgets = 0;
  *(undefined8 *)&(this->FlattenSearchableWidgets).field_0x8 = 0;
  *(undefined8 *)&(this->FlattenSearchableWidgets).field_0x20 = 0;
  *(undefined4 *)&(this->FlattenSearchableWidgets).field_0x28 = 0;
  *(undefined4 *)&(this->FlattenSearchableWidgets).field_0x2c = 0x80;
  *(undefined4 *)&(this->FlattenSearchableWidgets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FlattenSearchableWidgets).field_0x34 = 0;
  *(undefined8 *)&(this->FlattenSearchableWidgets).field_0x40 = 0;
  *(undefined4 *)&(this->FlattenSearchableWidgets).field_0x48 = 0;
  *(undefined8 *)&(this->VisibleFlattenHierarchyTips).Elements = 0;
  *(undefined8 *)&(this->VisibleFlattenHierarchyTips).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VisibleFlattenHierarchyTips).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->VisibleFlattenHierarchyTips).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VisibleFlattenHierarchyTips).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VisibleFlattenHierarchyTips).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VisibleFlattenHierarchyTips).Elements.field_0x34 = 0;
  (this->VisibleFlattenHierarchyTips).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VisibleFlattenHierarchyTips).HashSize = 0;
  (this->SearchTextWidget).Object = (SSearchBox *)0x0;
  (this->SearchTextWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SearchBlockWidget).Object = (SWidget *)0x0;
  (this->SearchBlockWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FText::FText(&this->SearchText);
  this->SummonedMenuTime = 0.0;
  (this->MaxHeight).Value = 0.0;
  (this->MaxHeight).bIsSet = false;
  *(undefined8 *)&(this->MaxHeight).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MaxHeight).Getter = 0;
  *(undefined8 *)&(this->MaxHeight).Getter.field_0x8 = 0;
  (this->LinkedBoxManager).Object = (FLinkedBoxManager *)0x0;
  (this->LinkedBoxManager).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~SMultiBoxWidget @ 1427ba7a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SMultiBoxWidget::~SMultiBoxWidget(SMultiBoxWidget *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  ITextData *pIVar4;
  ForElementType<FSetElementId> FVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LinkedBoxManager).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MaxHeight).Getter);
  pvVar3 = *(void **)&(this->MaxHeight).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MaxHeight).Getter);
  pIVar4 = (this->SearchText).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SearchBlockWidget).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SearchTextWidget).SharedReferenceCount.ReferenceController);
  (this->VisibleFlattenHierarchyTips).HashSize = 0;
  FVar5 = (this->VisibleFlattenHierarchyTips).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->VisibleFlattenHierarchyTips).Elements);
  *(undefined4 *)&(this->FlattenSearchableWidgets).field_0x48 = 0;
  pvVar3 = *(void **)&(this->FlattenSearchableWidgets).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<SWidget,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<SWidget,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<SWidget,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FlattenSearchableWidgets);
  *(undefined4 *)&(this->FlattenSearchableBlocks).field_0x48 = 0;
  pvVar3 = *(void **)&(this->FlattenSearchableBlocks).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FlattenSearchableBlocks);
  *(undefined4 *)&(this->FinalMultiBoxWidgets).field_0x48 = 0;
  pvVar3 = *(void **)&(this->FinalMultiBoxWidgets).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FinalMultiBoxWidgets);
  *(undefined4 *)&(this->MultiBoxWidgets).field_0x48 = 0;
  pvVar3 = *(void **)&(this->MultiBoxWidgets).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MultiBoxWidgets);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DragPreview).PreviewBlock.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UniformToolbarPanel).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClippedVerticalBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClippedHorizontalBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MainPanelBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MainVerticalBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MainHorizontalBox).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<SWidget,1>,int>
            ((TSharedPtr<SWidget,1> *)(this->TileViewWidgets).AllocatorInstance.Data,
             (this->TileViewWidgets).ArrayNum);
  pFVar6 = (this->TileViewWidgets).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MultiBox).SharedReferenceCount.ReferenceController);
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 1427bcca0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

EVisibility __thiscall `SMultiBoxWidget::AddBlockWidget'::__l21::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TEnumAsByte<EVisibility::Private> TVar4;
  TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1> *pTVar5;
  uchar *in_RDX;
  TSharedPtr<FMultiBlock_const_,1> local_18;
  
  local_18.Object = *(FMultiBlock **)((longlong)this + 8);
  lVar1 = *(longlong *)this;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = TMapBase<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,0>_>
           ::Find((TMapBase<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,0>_>
                   *)(lVar1 + 0x400),&local_18);
  if (pTVar5->Object == (FFlattenSearchableBlockInfo *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Value = (*pcVar2)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar4.Value;
    }
  }
  *in_RDX = (pTVar5->Object->HierarchyTipVisibility).Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// operator() @ 1427bcd30

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMenuEntryResizeParams * __thiscall
`SMultiBoxWidget::BuildMultiBoxWidget'::__l23::<lambda_1>::operator()
          (void *this,FMenuEntryResizeParams *__return_storage_ptr__,TSharedRef<SWidget,1> *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  SWidget *pSVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FMenuEntryResizeParams *pFVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  int iVar16;
  undefined1 local_res8 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  lVar4 = *(longlong *)this;
  iVar16 = 0;
  uVar8 = 1;
  iVar14 = 0;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar4 + 0x3c0);
  iVar3 = *(int *)(lVar4 + 0x3d8);
  iVar9 = 0;
  if (iVar3 != 0) {
    pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0x3d0);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0x3d0) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar1;
    }
    uVar13 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar16;
      iVar14 = iVar14 + 0x20;
      iVar16 = iVar16 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1427bcddd;
      uVar13 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uVar8 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar9 = (int)lVar11 + -1 + iVar14;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_1427bcddd:
  uVar13 = *(uint *)(lVar4 + 0x3d8);
  uVar12 = uVar13 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar8,iVar16);
  TStack_68.CurrentBitIndex = iVar9;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iVar9;
  TStack_68.BaseBitIndex = iVar14;
  uStack_48 = CONCAT44(uStack_74,*(int *)(lVar4 + 0x3b8) - *(int *)(lVar4 + 0x3e4));
  TStack_68.Array = pTVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FMenuEntryResizeParams *)(*pcVar6)();
    return pFVar10;
  }
  uVar8 = *(uint *)(lVar4 + 0x3d8);
  if (uVar13 != uVar8) {
    pTVar15 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0x3d0);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar4 + 0x3d0) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) &
             *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar16;
      uVar12 = uVar12 + 0x20;
      iVar16 = iVar16 + 1;
      uVar13 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1427bcee1;
      uVar13 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_1427bcee1:
  while( true ) {
    if (*(int *)(lVar4 + 0x3b8) - *(int *)(lVar4 + 0x3e4) != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar13) && (TStack_68.Array == pTVar1)) break;
    lVar11 = *(longlong *)(lVar4 + 0x3b0) + (longlong)TStack_68.CurrentBitIndex * 0x28;
    pSVar5 = *(SWidget **)
              (*(longlong *)(lVar4 + 0x3b0) + (longlong)TStack_68.CurrentBitIndex * 0x28);
    if ((pSVar5 != (SWidget *)0x0) && (pSVar5 == param_1->Object)) {
      if ((*(longlong *)(lVar11 + 0x10) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FMenuEntryResizeParams *)(*pcVar6)();
        return pFVar10;
      }
      pFVar10 = TAttribute<FMenuEntryResizeParams>::Get
                          ((TAttribute<FMenuEntryResizeParams> *)
                           (*(longlong *)(lVar11 + 0x10) + 0xe0));
      FMenuEntryResizeParams::FMenuEntryResizeParams(__return_storage_ptr__,pFVar10);
      return __return_storage_ptr__;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  memset(__return_storage_ptr__,0,200);
  return __return_storage_ptr__;
}

// AddBlockWidget @ 1427c4810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SMultiBoxWidget::AddBlockWidget
          (SMultiBoxWidget *this,FMultiBlock *param_1,TSharedPtr<SHorizontalBox,1> *param_2,
          TSharedPtr<SVerticalBox,1> *param_3,TSharedPtr<SPanel,1> *param_4,Type param_5,
          bool param_6,TSharedPtr<FToolBarComboButtonBlock_const_,1> *param_7)

{
  TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  int *piVar2;
  TArray<TSharedPtr<SWidget,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  STextBlock *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  FSharedReferencer<1> FVar11;
  FSharedReferencer<1> FVar12;
  SWidget *pSVar13;
  bool bVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  FMultiBox *pFVar18;
  bool *pbVar19;
  FToolBarComboButtonBlock *this_00;
  TSharedRef<SWidget,1> *pTVar20;
  TSharedRef<IMultiBlockBaseWidget,1> *pTVar21;
  undefined8 *puVar22;
  TSharedRef<FTagMetaData,1> *pTVar23;
  TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1> *pTVar24;
  FSlot *pFVar25;
  FSizeParam *pFVar26;
  FArguments *pFVar27;
  ulong64 uVar28;
  FArguments *pFVar29;
  FText *pFVar30;
  TSharedRef<STextBlock,1> *pTVar31;
  TSharedRef<SBox,1> *pTVar32;
  FArguments *pFVar33;
  TSharedRef<SVerticalBox,1> *pTVar34;
  FFlattenSearchableBlockInfo *pFVar35;
  FFlattenSearchableBlockInfo *pFVar36;
  FMultiBlock *pFVar37;
  FName *pFVar38;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar39;
  FSlotArguments *pFVar40;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_01;
  SHorizontalBox *this_02;
  TAttribute<float> *pTVar41;
  FName FVar42;
  FMenuEntryResizeParams *pFVar43;
  FToolBarStyle *pFVar44;
  SPrioritizedWrapBox *this_03;
  TAttribute<bool> *pTVar45;
  TAttribute<int> *pTVar46;
  TAttribute<UE::Slate::PrioritizedWrapBox::EWrapMode> *pTVar47;
  FSlotArguments *pFVar48;
  TOptional<FSizeParam> *pTVar49;
  ESizeRule *pEVar50;
  TOptional<float> *pTVar51;
  TAttribute<float> *pTVar52;
  SUniformWrapPanel *pSVar53;
  FScopedWidgetSlotArguments *pFVar54;
  SVerticalBox *pSVar55;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> *pFVar56;
  FSlotArguments *pFVar57;
  TAttribute<FText> *pTVar58;
  FArguments *pFVar59;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SHorizontalBox,1> *pTVar60;
  uint uVar61;
  longlong *plVar62;
  FSharedReferencer<1> FVar63;
  FMultiBlock *this_05;
  undefined1 *puVar64;
  FSharedReferencer<1> FVar65;
  TOptional<float> *pTVar66;
  atomic<int> *paVar67;
  TSharedPtr<SHorizontalBox,1> *pTVar68;
  EVerticalAlignment EVar69;
  FMultiBlock *pFVar70;
  undefined1 auStackY_33b8 [32];
  FStaticCastTag local_3367 [7];
  TSharedPtr<SHorizontalBox,1> *local_3360;
  TSharedRef<SWidget,1> local_3358;
  TSharedRef<FMultiBlock_const_,1> local_3348;
  TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1> *local_3338;
  TSharedPtr<SWidget,1> local_3330;
  T0RequiredArgs local_3320;
  T0RequiredArgs local_331f;
  T0RequiredArgs local_331e;
  T0RequiredArgs local_331d;
  T0RequiredArgs local_331c;
  T0RequiredArgs local_331b [3];
  SVerticalBox *local_3318;
  TReferenceControllerBase<1> *pTStack_3310;
  TSharedPtr<SVerticalBox,1> *local_3308;
  FMultiBlock *local_3300;
  SVerticalBox *local_32f8;
  undefined8 local_32f0;
  FLLMScope local_32e8;
  FLLMScope local_32e4;
  TSharedPtr<SPanel,1> *local_32e0;
  TSharedPtr<FToolBarComboButtonBlock_const_,1> *local_32d8;
  SWidget *local_32d0;
  TReferenceControllerBase<1> *local_32c8;
  undefined1 local_32c0 [8];
  undefined1 local_32b8 [8];
  TOptional<float> local_32b0;
  FArguments *local_32a8;
  SWidget *local_3298;
  FSharedReferencer<1> FStack_3290;
  SWidget *local_3288;
  TReferenceControllerBase<1> *pTStack_3280;
  SVerticalBox *local_3278;
  FSharedReferencer<1> local_3270;
  TSharedPtr<SWidget_const_,1> local_3268;
  undefined8 local_3258;
  FSharedReferencer<1> local_3250;
  TSharedPtr<SPrioritizedWrapBox,1> local_3248;
  TPairInitializer<TSharedRef<SWidget,1>_&,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>_&>
  local_3238;
  TPairInitializer<TSharedPtr<SWidget,1>_const_&,TSharedPtr<FMultiBlock_const_,1>_&&> local_3228;
  TPairInitializer<TSharedPtr<SWidget,1>_const_&,TSharedPtr<FMultiBlock_const_,1>_&&> local_3218;
  FMultiBlock *local_3208;
  FName local_3200;
  FMemScope local_31f8;
  FName local_31f0;
  FMemScope local_31e8;
  FMultiBlock *local_31e0;
  FName local_31d8;
  FMemScope local_31d0;
  FName local_31c8;
  FName local_31c0;
  TSharedRef<SWidget,1> local_31b8;
  undefined8 local_31a8;
  FSharedReferencer<1> local_31a0;
  undefined8 local_3198;
  FSharedReferencer<1> local_3190;
  TSharedRef<ISlateMetaData,1> local_3188;
  undefined8 local_3178;
  FSharedReferencer<1> local_3170;
  undefined8 local_3168;
  FSharedReferencer<1> local_3160;
  SVerticalBox *local_3158;
  TReferenceControllerBase<1> *local_3150;
  SWidget *local_3148;
  TReferenceControllerBase<1> *local_3140;
  TSharedRef<SWidget,1> local_3138;
  TAttribute<EVisibility> local_3128;
  uchar local_3108 [8];
  undefined8 local_3100;
  undefined8 uStack_30f8;
  undefined8 local_30f0;
  TAttribute<EVisibility> local_30e8;
  undefined8 local_30c8;
  undefined8 uStack_30c0;
  undefined1 local_30b8;
  undefined1 local_30b0 [8];
  void *pvStack_30a8;
  undefined8 local_30a0;
  TSharedPtr<SWidget,1> *local_3098;
  FMultiBlock **local_3090;
  TSharedRef<SWidget,1> local_3088;
  FMultiBlock *local_3078;
  FArguments *pFStack_3070;
  TSharedRef<SMultiBoxWidget,1> local_3068;
  TSharedRef<SMultiBoxWidget,1> local_3058;
  SVerticalBox **local_3048;
  TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1> *local_3040;
  TSharedPtr<SWidget,1> local_3038;
  TSharedPtr<FMultiBlock_const_,1> local_3028;
  TSharedPtr<SWidget,1> local_3018;
  TSharedPtr<FMultiBlock_const_,1> local_3008;
  TSharedPtr<SWidget,1> local_2ff8;
  TSharedPtr<SWidget,1> local_2fe8;
  TSharedPtr<FMultiBlock_const_,1> local_2fd8;
  TSharedPtr<SWidget,1> *local_2fc8;
  FMultiBlock **local_2fc0;
  FMultiBlock *local_2fb8;
  FArguments *pFStack_2fb0;
  TSharedRef<SWidget,1> local_2fa8;
  TSharedPtr<FMultiBlock_const_,1> local_2f98;
  FLinearColor_u_0 local_2f88;
  undefined1 local_2f78;
  undefined1 local_2f74;
  undefined8 local_2f70;
  undefined8 uStack_2f68;
  undefined8 local_2f60;
  FLinearColor_u_0 local_2f58;
  undefined1 local_2f48;
  undefined1 local_2f44;
  undefined8 local_2f40;
  undefined8 uStack_2f38;
  undefined8 local_2f30;
  FDestructionSentinel local_2f28;
  longlong *local_2f10;
  TAttribute<bool> local_2f08;
  TAttribute<FMargin> local_2ee8;
  TAttribute<FText> local_2eb8;
  TAttribute<FText> local_2e88;
  TSharedPtr<FMultiBlock_const_,1> local_2e58;
  TSharedRef<SVerticalBox,1> local_2e48;
  TSharedRef<SBox,1> local_2e38;
  TSharedRef<STextBlock,1> local_2e28;
  FText local_2e18;
  TSharedRef<SWidget,1> local_2e08;
  TSharedRef<SVerticalBox,1> local_2df8;
  TSharedRef<STextBlock,1> local_2de8;
  FText local_2dd8;
  TSharedRef<SWidget,1> local_2dc8;
  TSharedRef<SHorizontalBox,1> local_2db8;
  TSharedRef<SWidget,1> local_2da8;
  TSharedRef<STextBlock,1> local_2d98;
  FText local_2d88;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2d78;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_2d60;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_2d48;
  FReadAccessScope local_2d30;
  FName local_2d18 [2];
  FName local_2d08;
  TSharedRef<SWidget,1> local_2d00;
  TSharedPtr<SWidget,1> local_2cf0;
  undefined1 local_2ce0 [8];
  TReferenceControllerBase<1> *local_2cd8;
  TSharedRef<IMultiBlockBaseWidget,1> local_2cd0;
  TSharedRef<SWidget,1> local_2cc0;
  TSharedPtr<SWidget,1> local_2ca8;
  TSharedRef<IMultiBlockBaseWidget,1> local_2c98;
  TSharedRef<FTagMetaData,1> local_2c88;
  FMenuEntryStyleParams local_2c78;
  FMenuEntryStyleParams local_2bb0;
  undefined1 local_2ae8 [16];
  undefined1 local_2ad8 [32];
  undefined1 local_2ab8 [24];
  undefined1 local_2aa0 [16];
  undefined1 local_2a90 [32];
  undefined1 local_2a70 [24];
  TAttribute<float> local_2a58;
  TAttribute<float> local_2a38;
  TAttribute<float> local_2a18;
  TAttribute<bool> local_29f8;
  FReadAccessScope local_29d8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_29c0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_29a8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_2990;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_2978;
  TAttribute<int> local_2960;
  TAttribute<int> local_2940;
  TAttribute<int> local_2920;
  undefined1 local_2900 [32];
  undefined1 local_28e0 [32];
  undefined1 local_28c0 [32];
  FMenuEntryResizeParams local_28a0;
  undefined8 *local_27d8;
  SVerticalBox *local_27d0;
  FSharedReferencer<1> local_27c8 [4];
  undefined1 local_27a8 [40];
  FSlotArgumentsMixin local_2780;
  undefined8 *local_26f0;
  SBox *local_26e8;
  FSharedReferencer<1> local_26e0 [4];
  undefined1 local_26c0 [40];
  FSlotArgumentsMixin local_2698;
  undefined1 local_2608 [32];
  FSlotArgumentsMixin local_25e8;
  EHorizontalAlignment local_25b8;
  undefined1 local_25b4;
  EVerticalAlignment local_25b0;
  undefined1 local_25ac;
  TAttribute<float> local_2508;
  TAttribute<float> local_24e8;
  TAttribute<float> local_24c8;
  TAttribute<float> local_24a8;
  TAttribute<float> local_2488;
  TAttribute<bool> local_2468;
  TAttribute<float> local_2448;
  TAttribute<float> local_2428;
  FStretch local_2408;
  FStretchContent local_23c0;
  FAuto local_2378;
  TAttribute<FText> local_2330;
  TOptional<FSizeParam> local_2300;
  TOptional<FSizeParam> local_22b0;
  TOptional<FSizeParam> local_2260;
  FArguments local_2210;
  FArguments local_2008;
  FSlotArguments local_1e00;
  FSlotArguments local_1d18;
  FSlotArguments local_1c30;
  FSlotArguments local_1b48;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_1a60;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_1960;
  FArguments local_1860;
  FArguments local_1658;
  FArguments local_1318;
  FArguments local_dc0;
  FArguments local_868;
  code *local_308;
  longlong local_2f8 [3];
  longlong *local_2e0;
  undefined1 local_2d8 [72];
  FSlotArgumentsMixin local_290;
  FSlotArgumentsMixin local_280;
  EVerticalOverflowBehavior local_190;
  bool local_184;
  bool local_183;
  FScopedWidgetSlotArguments local_138;
  FScopedWidgetSlotArguments local_c8;
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x1427c482f;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_33b8;
  pFVar70 = (FMultiBlock *)0x0;
  local_32e0 = param_4;
  local_32d8 = param_7;
  local_3360 = param_2;
  local_3308 = param_3;
  local_3300 = param_1;
  if (((this->MultiBox).Object == (FMultiBox *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("MultiBox.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
                          ,0x2d8,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (param_1->Type == Separator) {
    if (((this->MultiBox).Object == (FMultiBox *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pTVar68 = local_3360;
    if ((((this->MultiBox).Object)->Type == UniformToolBar) ||
       (pFVar18 = TSharedPtr<FMultiBox,1>::operator->(&this->MultiBox), pTVar68 = local_3360,
       pFVar18->Type == SlimHorizontalUniformToolBar)) goto LAB_1427c6b35;
  }
  pbVar19 = TAttribute<bool>::Get(&FMultiBoxSettings::DisplayMultiboxHooks);
  if ((*pbVar19 == false) || (bVar14 = true, param_1->ExtensionHook == (FName)0x0)) {
    bVar14 = false;
  }
  local_3298 = (SWidget *)0x0;
  FStack_3290.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2ca8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (local_32d8->Object != (FToolBarComboButtonBlock *)0x0) {
    this_00 = TSharedPtr<FToolBarComboButtonBlock_const_,1>::operator->(local_32d8);
    local_2cf0.Object = (SWidget *)0x0;
    local_2cf0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar20 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2d00);
    local_3068.Object = (SMultiBoxWidget *)pTVar20->Object;
    local_3068.SharedReferenceCount.ReferenceController =
         (pTVar20->SharedReferenceCount).ReferenceController;
    if (local_3068.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3068.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3068.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d00.SharedReferenceCount.ReferenceController);
    pTVar21 = FMultiBlock::MakeWidget
                        ((FMultiBlock *)this_00,&local_2cd0,&local_3068,None,param_6,&local_2cf0);
    puVar22 = (undefined8 *)
              (**(code **)((longlong)*pTVar21->Object + 8))(pTVar21->Object,local_2ce0);
    local_3190.ReferenceController = (TReferenceControllerBase<1> *)puVar22[1];
    local_3298 = (SWidget *)*puVar22;
    if (local_3190.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3190.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_3190.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3198 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_3290,&local_3190);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3190.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2cd8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2cd0.SharedReferenceCount.ReferenceController);
    local_2ca8.SharedReferenceCount.ReferenceController = FStack_3290.ReferenceController;
  }
  if (local_2ca8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2ca8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_2ca8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FStack_3290.ReferenceController = local_2ca8.SharedReferenceCount.ReferenceController;
  local_2ca8.Object = local_3298;
  pTVar20 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2cc0);
  local_3058.Object = (SMultiBoxWidget *)pTVar20->Object;
  local_3058.SharedReferenceCount.ReferenceController =
       (pTVar20->SharedReferenceCount).ReferenceController;
  if (local_3058.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3058.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3058.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2cc0.SharedReferenceCount.ReferenceController);
  pTVar21 = FMultiBlock::MakeWidget(param_1,&local_2c98,&local_3058,param_5,param_6,&local_2ca8);
  (**(code **)((longlong)*pTVar21->Object + 8))(pTVar21->Object,&local_3318);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c98.SharedReferenceCount.ReferenceController);
  pSVar55 = local_3318;
  local_3218.Value = *(TSharedPtr<FMultiBlock_const_,1> **)&param_1->TutorialHighlightName;
  if ((FName)local_3218.Value != (FName)0x0) {
    pTVar23 = MakeShared<FTagMetaData,1,FName_&>(&local_2c88,(FName *)&local_3218.Value);
    local_3188.Object = (ISlateMetaData *)pTVar23->Object;
    local_3188.SharedReferenceCount.ReferenceController =
         (pTVar23->SharedReferenceCount).ReferenceController;
    if (local_3188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SWidget::AddMetadataInternal((SWidget *)pSVar55,&local_3188);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3188.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2c88.SharedReferenceCount.ReferenceController);
  }
  TSharedFromThis<FMultiBlock,1>::AsShared
            ((TSharedFromThis<FMultiBlock,1> *)&param_1->_padding_,&local_3348);
  FVar12.ReferenceController = local_3348.SharedReferenceCount.ReferenceController;
  local_2e58.Object = local_3348.Object;
  local_2e58.SharedReferenceCount.ReferenceController =
       local_3348.SharedReferenceCount.ReferenceController;
  if ((FArguments *)local_3348.SharedReferenceCount.ReferenceController != (FArguments *)0x0) {
    LOCK();
    (local_3348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar24 = TMapBase<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,0>_>
            ::Find((TMapBase<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,0>_>
                    *)&this->FlattenSearchableBlocks,&local_2e58);
  local_3338 = pTVar24;
  if (pTVar24 != (TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1> *)0x0) {
    local_32f8 = (SVerticalBox *)SVerticalBox::FArguments::FArguments(&local_2210);
    pFVar25 = ::operator_new(0x58);
    local_3208 = pFVar70;
    if (pFVar25 != (FSlot *)0x0) {
      *(undefined8 *)pFVar25 = 0;
      *(undefined8 *)&pFVar25->field_0x8 = 0;
      *(undefined8 *)&pFVar25->field_0x10 = 0;
      *(undefined8 *)&pFVar25->field_0x18 = 0;
      *(undefined8 *)&pFVar25->field_0x20 = 0;
      *(undefined8 *)&pFVar25->field_0x28 = 0;
      *(undefined8 *)&pFVar25->field_0x30 = 0;
      *(undefined8 *)&pFVar25->field_0x38 = 0;
      *(undefined8 *)&pFVar25->field_0x40 = 0;
      *(undefined8 *)&pFVar25->field_0x48 = 0;
      *(undefined8 *)&pFVar25->field_0x50 = 0;
      local_3208 = (FMultiBlock *)SVerticalBox::FSlot::FSlot(pFVar25);
    }
    SVerticalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)&local_26f0,(FSlot *)&local_3208);
    pFVar26 = (FSizeParam *)FAuto::FAuto((FAuto *)local_2ae8);
    TOptional<FSizeParam>::operator=(&local_2698._SizeParam,pFVar26);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ab8);
    if ((void *)local_2ab8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2ab8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2ab8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ad8);
    if ((void *)local_2ad8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2ad8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2ad8);
    pFVar27 = SBox::FArguments::FArguments(&local_1658);
    local_2ee8.bIsSet = true;
    local_2ee8.Getter._16_8_ = 0;
    local_2ee8.Value.Left = ___xmm_0000000040a000000000000040a00000;
    local_2ee8.Value.Top = _UNK_150957994;
    local_2ee8.Value.Right = _UNK_150957998;
    local_2ee8.Value.Bottom = _UNK_15095799c;
    local_2ee8.Getter._0_8_ = 0;
    local_2ee8.Getter._8_8_ = 0;
    pFVar27 = SBox::FArguments::Padding(pFVar27,&local_2ee8);
    local_32a8 = (FArguments *)FVar12.ReferenceController;
    if ((FArguments *)FVar12.ReferenceController == (FArguments *)0x0) {
      paVar67 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar67 = &(FVar12.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar67 = (atomic<int>)((int)*paVar67 + 1);
      UNLOCK();
    }
    local_308 = (code *)0x0;
    local_2e0 = FMemory::Malloc(0x20,8);
    local_2e0[1] = (longlong)this;
    *local_2e0 = (longlong)
                 &UE::Core::Private::Function::
                  TFunction_OwnedObject<`SMultiBoxWidget::AddBlockWidget'::`21'::<lambda_1>,0,1>::
                  _vftable_;
    local_2e0[2] = (longlong)local_3348.Object;
    local_2e0[3] = (longlong)FVar12.ReferenceController;
    if ((FArguments *)FVar12.ReferenceController != (FArguments *)0x0) {
      LOCK();
      *paVar67 = (atomic<int>)((int)*paVar67 + 1);
      UNLOCK();
    }
    if (local_2e0 != (longlong *)&DAT_fffffffffffffff8) {
      local_308 = UE::Core::Private::Function::
                  TFunctionRefCaller<`SMultiBoxWidget::AddBlockWidget'::__l21::<lambda_1>,EVisibility>
                  ::Call;
    }
    *(undefined1 *)((longlong)&pFVar27->_padding_ + 1) = 1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar27->_padding_,
               (FWriteAccessScope *)&local_2f28);
    local_2f10 = &pFVar27->_padding_;
    puVar22 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_2f10);
    if (puVar22 != (undefined8 *)0x0) {
      *puVar22 = &
                 ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar28 = FDelegateHandle::GenerateNewID();
      puVar22[2] = uVar28;
      *puVar22 = &
                 ___7__TBaseFunctorDelegateInstance___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUEVisibility__XZ____V__6B_
      ;
      puVar22[4] = local_308;
      puVar22[9] = 0;
      if (local_308 != (code *)0x0) {
        plVar62 = local_2f8;
        if (local_2e0 != (longlong *)0x0) {
          plVar62 = local_2e0;
        }
        (**(code **)*plVar62)();
      }
    }
    if (local_2f28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2f28.Accessor,&local_2f28);
    }
    pFVar29 = STextBlock::FArguments::FArguments(&local_dc0);
    if ((pTVar24->Object == (FFlattenSearchableBlockInfo *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar30 = UE::MultiBoxUtils::GetSearchHierarchyInfoText
                        (&local_2e18,&pTVar24->Object->SearchableTextHierarchyComponents);
    FText::FText(&local_2eb8.Value,pFVar30);
    local_2eb8.bIsSet = true;
    local_2eb8.Getter._16_8_ = 0;
    local_2eb8.Getter._0_8_ = 0;
    local_2eb8.Getter._8_8_ = 0;
    pFVar29 = STextBlock::FArguments::Text(pFVar29,&local_2eb8);
    FLLMScope::FLLMScope
              ((FLLMScope *)((longlong)&local_32f0 + 4),LLMTagDeclaration_UI_Slate.UniqueName,false,
               None,Default,true);
    local_3200 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_31f8,&local_3200,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_2d48,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
               ,0x2fc,&local_3320);
    FMemScope::~FMemScope(&local_31f8);
    FLLMScope::~FLLMScope((FLLMScope *)((longlong)&local_32f0 + 4));
    pTVar31 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_2d48,&local_2e28,pFVar29);
    pTVar5 = (pTVar31->SharedReferenceCount).ReferenceController;
    pSVar6 = pTVar31->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3288 = (pFVar27->_Content).Widget.Object;
    pTStack_3280 = (pFVar27->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar27->_Content).Widget.Object = (SWidget *)pSVar6;
    (pFVar27->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_3280);
    FLLMScope::FLLMScope(&local_32e8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_31f0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_31e8,&local_31f0,true);
    TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
              (&local_2d60,"SBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
               ,0x2f8,&local_331f);
    FMemScope::~FMemScope(&local_31e8);
    FLLMScope::~FLLMScope(&local_32e8);
    pTVar32 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_2d60,&local_2e38,pFVar27);
    pTVar7 = (pTVar32->SharedReferenceCount).ReferenceController;
    local_26e8 = pTVar32->Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3258 = 0;
    local_3250.ReferenceController = pTVar7;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_26e0,&local_3250);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3250.ReferenceController);
    pFVar33 = SVerticalBox::FArguments::operator+
                        ((FArguments *)local_32f8,(FSlotArguments *)&local_26f0);
    pFVar25 = ::operator_new(0x58);
    local_31e0 = pFVar70;
    if (pFVar25 != (FSlot *)0x0) {
      *(undefined8 *)pFVar25 = 0;
      *(undefined8 *)&pFVar25->field_0x8 = 0;
      *(undefined8 *)&pFVar25->field_0x10 = 0;
      *(undefined8 *)&pFVar25->field_0x18 = 0;
      *(undefined8 *)&pFVar25->field_0x20 = 0;
      *(undefined8 *)&pFVar25->field_0x28 = 0;
      *(undefined8 *)&pFVar25->field_0x30 = 0;
      *(undefined8 *)&pFVar25->field_0x38 = 0;
      *(undefined8 *)&pFVar25->field_0x40 = 0;
      *(undefined8 *)&pFVar25->field_0x48 = 0;
      *(undefined8 *)&pFVar25->field_0x50 = 0;
      local_31e0 = (FMultiBlock *)SVerticalBox::FSlot::FSlot(pFVar25);
    }
    SVerticalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)&local_27d8,(FSlot *)&local_31e0);
    pFVar26 = (FSizeParam *)FAuto::FAuto((FAuto *)local_2aa0);
    TOptional<FSizeParam>::operator=(&local_2780._SizeParam,pFVar26);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2a70);
    if ((void *)local_2a70._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2a70._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2a70);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2a90);
    if ((void *)local_2a90._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2a90._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2a90);
    local_3170.ReferenceController = pTStack_3310;
    if (pTStack_3310 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_3310->SharedReferenceCount =
           (atomic<int>)((int)pTStack_3310->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_27d0 = local_3318;
    local_3178 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_27c8,&local_3170);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3170.ReferenceController);
    pFVar33 = SVerticalBox::FArguments::operator+(pFVar33,(FSlotArguments *)&local_27d8);
    FLLMScope::FLLMScope(&local_32e4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_31d8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_31d0,&local_31d8,true);
    TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
              (&local_2d78,"SVerticalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
               ,0x2f4,&local_331e);
    FMemScope::~FMemScope(&local_31d0);
    FLLMScope::~FLLMScope(&local_32e4);
    pTVar34 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_2d78,&local_2e48,pFVar33);
    pTVar8 = (pTVar34->SharedReferenceCount).ReferenceController;
    pSVar55 = pTVar34->Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_32f8 = pSVar55;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e48.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d78._Widget.SharedReferenceCount.ReferenceController);
    TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_2780);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_27a8);
    if ((void *)local_27a8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_27a8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_27a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_27c8[0].ReferenceController);
    if (local_27d8 != (undefined8 *)0x0) {
      (**(code **)*local_27d8)(local_27d8,1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e38.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d60._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e28.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d48._Widget.SharedReferenceCount.ReferenceController);
    if (local_2e18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2e18.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_dc0);
    if (local_308 != (code *)0x0) {
      plVar62 = local_2f8;
      if (local_2e0 != (longlong *)0x0) {
        plVar62 = local_2e0;
      }
      (**(code **)(*plVar62 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_32a8);
    SBox::FArguments::~FArguments(&local_1658);
    TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_2698);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_26c0);
    if ((void *)local_26c0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_26c0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_26c0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_26e0[0].ReferenceController);
    if (local_26f0 != (undefined8 *)0x0) {
      (**(code **)*local_26f0)(local_26f0,1);
    }
    DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_2210._Slots.AllocatorInstance.Data,local_2210._Slots.ArrayNum
              );
    if ((FSlotArguments *)local_2210._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_2210._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2210);
    pTVar24 = local_3338;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3278 = pSVar55;
    local_3270.ReferenceController = pTVar8;
    pFVar35 = TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>::operator->(local_3338);
    FVar63.ReferenceController = pTVar8;
    if (&pFVar35->Widget != (TSharedPtr<SWidget,1> *)&local_3278) {
      (pFVar35->Widget).Object = (SWidget *)pSVar55;
      local_3278 = (SVerticalBox *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar35->Widget).SharedReferenceCount,&local_3270);
      FVar63.ReferenceController = local_3270.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar63.ReferenceController);
    local_3048 = &local_3318;
    local_3040 = pTVar24;
    TSet<TTuple<TSharedPtr<SWidget,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TSharedRef<SWidget,1>_&,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>_&>_>
              ((TSet<TTuple<TSharedPtr<SWidget,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,0>,FDefaultSetAllocator>
                *)&this->FlattenSearchableWidgets,&local_3238,(bool *)&local_3048);
    local_3108[1] = 1;
    local_3100 = 0;
    uStack_30f8 = 0;
    local_3108[0] = (uchar)EVisibility::Collapsed.Value.Value;
    local_30f0 = 0;
    (**(code **)(*(longlong *)&pSVar55->field_0x0 + 0x1c8))(pSVar55,local_3108);
    pTVar5 = pTStack_3310;
    local_3268.Object = (SWidget *)local_3318;
    local_3268.SharedReferenceCount.ReferenceController = pTStack_3310;
    if (pTStack_3310 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_3310->SharedReferenceCount =
           (atomic<int>)((int)pTStack_3310->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTStack_3310->SharedReferenceCount =
           (atomic<int>)((int)pTStack_3310->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTStack_3310->SharedReferenceCount =
           (atomic<int>)((int)pTStack_3310->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar61 = ((uint)((ulonglong)local_3318 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_3318 >> 4)) *
             -0x7a143595;
    uVar61 = (uVar61 >> 0xd ^ uVar61) * -0x3d4d51cb;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_3310);
    iVar17 = TSet<TTuple<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<TSharedPtr<SWidget_const_,1>_>
                       ((TSet<TTuple<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                         *)&this->MultiBoxWidgets,uVar61 >> 0x10 ^ uVar61,&local_3268);
    if (iVar17 == -1) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
LAB_1427c54fc:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    }
    else {
      lVar4 = *(longlong *)&(this->MultiBoxWidgets).field_0x0 + (longlong)iVar17 * 0x28;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      if (lVar4 == 0) goto LAB_1427c54fc;
      pFVar35 = (FFlattenSearchableBlockInfo *)(lVar4 + 0x10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      if ((pFVar35 != (FFlattenSearchableBlockInfo *)0x0) &&
         (pFVar36 = TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>::operator->
                              (local_3338), pFVar35 != pFVar36)) {
        DestructItems<FText,int>
                  ((FText *)(pFVar35->SearchableTextHierarchyComponents).AllocatorInstance.Data,
                   *(int *)(lVar4 + 0x18));
        TArray<FText,TSizedDefaultAllocator<32>_>::CopyToEmpty<FText,int>
                  ((TArray<FText,TSizedDefaultAllocator<32>_> *)pFVar35,
                   (FText *)(pFVar36->SearchableTextHierarchyComponents).AllocatorInstance.Data,
                   (pFVar36->SearchableTextHierarchyComponents).ArrayNum,*(int *)(lVar4 + 0x1c));
      }
    }
    pTVar5 = pTStack_3310;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3318 = local_32f8;
    pTStack_3310 = pTVar8;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    param_1 = local_3300;
  }
  if (((this->MultiBox).Object == (FMultiBox *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar18 = (this->MultiBox).Object;
  pTVar24 = (TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1> *)pFVar18->StyleSet;
  local_3330.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3338 = pTVar24;
  if ((pFVar18 == (FMultiBox *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar18 = (this->MultiBox).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar18->ModifyBlockWidgetAfterMake,&local_2d30);
  if (((*(int *)&(pFVar18->ModifyBlockWidgetAfterMake).field_0x10 == 0) ||
      (plVar62 = *(longlong **)&(pFVar18->ModifyBlockWidgetAfterMake).field_0x8,
      plVar62 == (longlong *)0x0)) || (cVar16 = (**(code **)(*plVar62 + 0x38))(), cVar16 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2d30);
    local_31a0.ReferenceController = pTStack_3310;
    if (pTStack_3310 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_3310->SharedReferenceCount =
           (atomic<int>)((int)pTStack_3310->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3330.Object = (SWidget *)local_3318;
    local_31a8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_3330.SharedReferenceCount,&local_31a0);
    FVar63.ReferenceController = local_31a0.ReferenceController;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2d30);
    pFVar18 = TSharedPtr<FMultiBox,1>::operator->(&this->MultiBox);
    pTVar20 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2e08);
    local_3148 = pTVar20->Object;
    local_3140 = (pTVar20->SharedReferenceCount).ReferenceController;
    if (local_3140 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_3140->SharedReferenceCount = (atomic<int>)((int)local_3140->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e08.SharedReferenceCount.ReferenceController);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar18->ModifyBlockWidgetAfterMake,&local_29d8);
    pFVar37 = pFVar70;
    if (*(int *)&(pFVar18->ModifyBlockWidgetAfterMake).field_0x10 != 0) {
      pFVar37 = *(FMultiBlock **)&(pFVar18->ModifyBlockWidgetAfterMake).field_0x8;
    }
    (**(code **)(pFVar37->_padding_ + 0x60))(pFVar37,&local_3158,&local_3148);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_29d8);
    local_3160.ReferenceController = local_3150;
    if (local_3150 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_3150->SharedReferenceCount = (atomic<int>)((int)local_3150->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3330.Object = (SWidget *)local_3158;
    local_3168 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_3330.SharedReferenceCount,&local_3160);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3160.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3150);
    FVar63.ReferenceController = local_3140;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar63.ReferenceController);
  local_3358.Object = SNullWidget::NullWidget.Object;
  local_3358.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (bVar14) {
    pFVar33 = SVerticalBox::FArguments::FArguments(&local_2008);
    pFVar37 = (FMultiBlock *)SVerticalBox::Slot(&local_1d18);
    pTVar1 = &(pFVar37->DirectActions).GetActionCheckState;
    if ((TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *)&local_3238.Value !=
        pTVar1) {
      *(undefined4 *)pTVar1 = 2;
      (pFVar37->DirectActions).GetActionCheckState.field_0x4 = 1;
    }
    this_05 = pFVar70;
    if (pTVar1 != (TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
      this_05 = pFVar37;
    }
    local_3300 = (FMultiBlock *)
                 SVerticalBox::FSlot::FSlotArguments::AutoHeight((FSlotArguments *)this_05);
    pFVar29 = STextBlock::FArguments::FArguments(&local_868);
    local_30e8.Value = (EVisibility)EVisibility::Visible.Value.Value;
    local_30e8.bIsSet = true;
    local_30e8.Getter._0_8_ = 0;
    local_30e8.Getter._8_8_ = 0;
    local_30e8.Getter._16_8_ = 0;
    pFVar29 = TSlateBaseNamedArgs<STextBlock>::Visibility
                        ((TSlateBaseNamedArgs<STextBlock> *)pFVar29,&local_30e8);
    pcVar10 = *(code **)((longlong)*(ISlateStyle *)local_3338 + 0x38);
    pFVar38 = ::FName::FName(local_2d18,"MultiboxHookColor");
    puVar22 = (undefined8 *)(*pcVar10)(local_3338,*pFVar38,0,&FStyleDefaults::DefaultColor);
    local_2f88._0_8_ = *puVar22;
    local_2f88._8_8_ = puVar22[1];
    local_2f78 = 0;
    local_2f60 = 0;
    local_2f74 = 1;
    local_2f70 = 0;
    uStack_2f68 = 0;
    pFVar29 = STextBlock::FArguments::ColorAndOpacity
                        (pFVar29,(TAttribute<FSlateColor> *)&local_2f88._s_0);
    local_31c8 = param_1->ExtensionHook;
    pFVar30 = FText::FromName(&local_2dd8,&local_31c8);
    FText::FText(&local_2e88.Value,pFVar30);
    local_2e88.bIsSet = true;
    local_2e88.Getter._16_8_ = 0;
    local_2e88.Getter._0_8_ = 0;
    local_2e88.Getter._8_8_ = 0;
    pFVar29 = STextBlock::FArguments::Text(pFVar29,&local_2e88);
    pTVar39 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_29a8,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
                         ,0x32f,&local_331d);
    pTVar31 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar39,&local_2de8,pFVar29);
    local_31b8.Object = (SWidget *)pTVar31->Object;
    local_31b8.SharedReferenceCount.ReferenceController =
         (pTVar31->SharedReferenceCount).ReferenceController;
    if (local_31b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_31b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_31b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar40 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)local_3300,&local_31b8);
    pFVar33 = SVerticalBox::FArguments::operator+(pFVar33,pFVar40);
    pFVar40 = SVerticalBox::Slot(&local_1e00);
    if (((SVerticalBox *)local_3330.Object == (SVerticalBox *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FVar65.ReferenceController = local_3330.SharedReferenceCount.ReferenceController;
    local_3138.Object = local_3330.Object;
    local_3138.SharedReferenceCount.ReferenceController =
         local_3330.SharedReferenceCount.ReferenceController;
    if (local_3330.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3330.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3330.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((SVerticalBox *)local_3330.Object == (SVerticalBox *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar40 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar40,&local_3138);
    pFVar33 = SVerticalBox::FArguments::operator+(pFVar33,pFVar40);
    this_01 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                        (&local_29c0,"SVerticalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
                         ,0x32a,(T0RequiredArgs *)local_3367);
    pTVar34 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_01,&local_2df8,pFVar33);
    FVar11.ReferenceController = local_3358.SharedReferenceCount.ReferenceController;
    FVar63.ReferenceController = (pTVar34->SharedReferenceCount).ReferenceController;
    local_3358.Object = (SWidget *)pTVar34->Object;
    if (FVar63.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar63.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar63.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3358.SharedReferenceCount.ReferenceController = FVar63.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar11.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2df8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_29c0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar65.ReferenceController);
    SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1e00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_31b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2de8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_29a8._Widget.SharedReferenceCount.ReferenceController);
    if (local_2dd8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2dd8.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_868);
    SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1d18);
    DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_2008._Slots.AllocatorInstance.Data,local_2008._Slots.ArrayNum
              );
    if ((FSlotArguments *)local_2008._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_2008._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2008);
    pTVar24 = local_3338;
  }
  else {
    if (((SVerticalBox *)local_3330.Object == (SVerticalBox *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FVar63.ReferenceController = local_3330.SharedReferenceCount.ReferenceController;
    pSVar13 = local_3330.Object;
    if (local_3330.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3330.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3330.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((SVerticalBox *)local_3330.Object == (SVerticalBox *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FVar65.ReferenceController = local_3358.SharedReferenceCount.ReferenceController;
    local_3358.Object = pSVar13;
    local_3358.SharedReferenceCount.ReferenceController = FVar63.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar65.ReferenceController);
  }
  if (((this->MultiBox).Object == (FMultiBox *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar68 = local_3360;
  switch(((this->MultiBox).Object)->Type) {
  case MenuBar:
  case ToolBar:
  case SlimHorizontalToolBar:
    FMenuEntryStyleParams::FMenuEntryStyleParams(&local_2bb0);
    cVar16 = (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_2bb0);
    pTVar68 = local_3360;
    this_02 = TSharedPtr<SHorizontalBox,1>::operator->(local_3360);
    SHorizontalBox::AddSlot(this_02,(FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_2608)
    ;
    pFVar57 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        (&local_25e8,0.0);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar57,&local_3358);
    local_3028.Object = local_3348.Object;
    local_3028.SharedReferenceCount.ReferenceController =
         local_3348.SharedReferenceCount.ReferenceController;
    if ((FArguments *)FVar12.ReferenceController != (FArguments *)0x0) {
      LOCK();
      (FVar12.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3038.Object = local_3358.Object;
    local_3038.SharedReferenceCount.ReferenceController =
         local_3358.SharedReferenceCount.ReferenceController;
    if (FVar63.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar63.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar63.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TMapBase<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,0>_>
    ::Emplace<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>_>
              ((TMapBase<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,0>_>
                *)&this->FinalMultiBoxWidgets,&local_3038,&local_3028);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3038.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3028.SharedReferenceCount.ReferenceController);
    SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)(local_2608 + 8));
    if (cVar16 != '\0') {
      local_25b0 = VAlign_Fill;
      if (local_2bb0.VerticalAlignment.bIsSet != false) {
        local_25b0 = local_2bb0.VerticalAlignment.TypedValue;
      }
      local_25b8 = local_2bb0.HorizontalAlignment;
      local_25b4 = 1;
      local_25ac = 1;
      if (local_2bb0.SizeRule.bIsSet != false) {
        pEVar50 = TOptional<enum_FSizeParam::ESizeRule>::GetValue(&local_2bb0.SizeRule);
        if (*pEVar50 == SizeRule_Stretch) {
          local_32b0.TypedValue = 1.0;
          pTVar51 = &local_2bb0.FillSize;
          if (local_2bb0.FillSize.bIsSet == false) {
            pTVar51 = &local_32b0;
          }
          pTVar52 = TAttribute<float>::TAttribute<float><float>(&local_2508,&pTVar51->TypedValue);
          SHorizontalBox::FSlot::FSlotArguments::FillWidth
                    ((FSlotArguments *)(local_2608 + 8),pTVar52);
        }
        else if (*pEVar50 == SizeRule_StretchContent) {
          local_32c0._0_4_ = 1.0;
          pTVar51 = &local_2bb0.FillSize;
          if (local_2bb0.FillSize.bIsSet == false) {
            pTVar51 = (TOptional<float> *)local_32c0;
          }
          pTVar66 = &local_2bb0.FillSizeMin;
          if (local_2bb0.FillSizeMin.bIsSet == false) {
            pTVar66 = pTVar51;
          }
          pTVar52 = TAttribute<float>::TAttribute<float><float>(&local_24e8,&pTVar66->TypedValue);
          local_32c0._4_4_ = 0x3f800000;
          pTVar51 = &local_2bb0.FillSize;
          if (local_2bb0.FillSize.bIsSet == false) {
            pTVar51 = (TOptional<float> *)(local_32c0 + 4);
          }
          pTVar41 = TAttribute<float>::TAttribute<float><float>(&local_24c8,&pTVar51->TypedValue);
          SHorizontalBox::FSlot::FSlotArguments::FillContentWidth
                    ((FSlotArguments *)(local_2608 + 8),pTVar41,pTVar52);
        }
      }
      if ((local_2bb0.MinimumSize.bIsSet != false) ||
         (bVar14 = TAttribute<float>::IsBound(&local_2bb0.MinimumSize), bVar14)) {
        pTVar52 = TAttribute<float>::TAttribute<float>(&local_24a8,&local_2bb0.MinimumSize);
        SHorizontalBox::FSlot::FSlotArguments::MinWidth((FSlotArguments *)(local_2608 + 8),pTVar52);
      }
      if ((local_2bb0.MaximumSize.bIsSet != false) ||
         (bVar14 = TAttribute<float>::IsBound(&local_2bb0.MaximumSize), bVar14)) {
        pTVar52 = TAttribute<float>::TAttribute<float>(&local_2488,&local_2bb0.MaximumSize);
        SHorizontalBox::FSlot::FSlotArguments::MaxWidth((FSlotArguments *)(local_2608 + 8),pTVar52);
      }
    }
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
              ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_2608);
    FMenuEntryStyleParams::~FMenuEntryStyleParams(&local_2bb0);
    goto switchD_1427c5c0d_default;
  case VerticalToolBar:
    if ((this->UniformToolbarPanel).Object == (SUniformWrapPanel *)0x0) {
      pSVar55 = TSharedPtr<SVerticalBox,1>::operator->(local_3308);
      pFVar56 = SVerticalBox::AddSlot(pSVar55,&local_1a60);
      pFVar40 = SVerticalBox::FSlot::FSlotArguments::AutoHeight
                          ((FSlotArguments *)&pFVar56->_padding_);
      TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar40,&local_3358);
      SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
      ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_1a60);
    }
    else {
      pSVar53 = TSharedPtr<SUniformWrapPanel,1>::operator->(&this->UniformToolbarPanel);
      pFVar54 = SUniformWrapPanel::AddSlot(pSVar53,&local_c8);
      TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
                ((FSlotArguments *)pFVar54,&local_3358);
      TPanelChildren<SUniformWrapPanel::FSlot>::FScopedWidgetSlotArguments::
      ~FScopedWidgetSlotArguments(&local_c8);
    }
    local_2f98.Object = local_3348.Object;
    local_2f98.SharedReferenceCount.ReferenceController =
         local_3348.SharedReferenceCount.ReferenceController;
    if ((FArguments *)FVar12.ReferenceController != (FArguments *)0x0) {
      LOCK();
      (FVar12.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2ff8.Object = local_3358.Object;
    local_2ff8.SharedReferenceCount.ReferenceController =
         local_3358.SharedReferenceCount.ReferenceController;
    if (FVar63.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar63.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar63.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TMapBase<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,0>_>
    ::Emplace<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>_>
              ((TMapBase<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,0>_>
                *)&this->FinalMultiBoxWidgets,&local_2ff8,&local_2f98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2ff8.SharedReferenceCount.ReferenceController);
    FVar65.ReferenceController = local_2f98.SharedReferenceCount.ReferenceController;
    break;
  case UniformToolBar:
  case SlimHorizontalUniformToolBar:
    pSVar53 = TSharedPtr<SUniformWrapPanel,1>::operator->(&this->UniformToolbarPanel);
    pFVar54 = SUniformWrapPanel::AddSlot(pSVar53,&local_138);
    TSlotBase<SUniformWrapPanel::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar54,&local_3358);
    TPanelChildren<SUniformWrapPanel::FSlot>::FScopedWidgetSlotArguments::
    ~FScopedWidgetSlotArguments(&local_138);
    local_2fd8.Object = local_3348.Object;
    local_2fd8.SharedReferenceCount.ReferenceController =
         local_3348.SharedReferenceCount.ReferenceController;
    if ((FArguments *)FVar12.ReferenceController != (FArguments *)0x0) {
      LOCK();
      (FVar12.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2fe8.Object = local_3358.Object;
    local_2fe8.SharedReferenceCount.ReferenceController =
         local_3358.SharedReferenceCount.ReferenceController;
    if (FVar63.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar63.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar63.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TMapBase<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,0>_>
    ::Emplace<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>_>
              ((TMapBase<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,0>_>
                *)&this->FinalMultiBoxWidgets,&local_2fe8,&local_2fd8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2fe8.SharedReferenceCount.ReferenceController);
    FVar65.ReferenceController = local_2fd8.SharedReferenceCount.ReferenceController;
    break;
  case Menu:
    pSVar55 = TSharedPtr<SVerticalBox,1>::operator->(local_3308);
    pFVar56 = SVerticalBox::AddSlot(pSVar55,&local_1960);
    local_32f8 = (SVerticalBox *)
                 SVerticalBox::FSlot::FSlotArguments::AutoHeight
                           ((FSlotArguments *)&pFVar56->_padding_);
    local_30b8 = 1;
    local_30a0 = 0;
    (&local_32f8->field_0x18)[0x10] = 1;
    local_30c8 = 0;
    uStack_30c0 = 0;
    local_30b0 = (undefined1  [8])0x0;
    pvStack_30a8 = (void *)0x0;
    *(undefined8 *)&local_32f8->field_0x18 = 0;
    *(undefined8 *)(&local_32f8->field_0x18 + 8) = 0;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_32f8->field_0x30,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_30b0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_30b0);
    if (pvStack_30a8 != (void *)0x0) {
      FMemory::Free(pvStack_30a8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_30b0);
    local_32a8 = SHorizontalBox::FArguments::FArguments(&local_1860);
    pFVar57 = SHorizontalBox::Slot(&local_1c30);
    pFVar37 = (FMultiBlock *)SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar57);
    puVar64 = &(pFVar37->DirectActions).GetActionCheckState.field_0x8;
    if (&local_3228.Value != (TSharedPtr<FMultiBlock_const_,1> **)puVar64) {
      *(undefined4 *)puVar64 = 2;
      (pFVar37->DirectActions).GetActionCheckState.field_0xc = 1;
    }
    local_3300 = pFVar70;
    if (pFVar37 != (FMultiBlock *)0xffffffffffffffb8) {
      local_3300 = pFVar37;
    }
    pFVar29 = STextBlock::FArguments::FArguments(&local_1318);
    local_3128.bIsSet = true;
    local_3128.Value = EVisibility::Collapsed;
    if (bVar14) {
      local_3128.Value = EVisibility::Visible;
    }
    local_3128.Getter._0_8_ = 0;
    local_3128.Getter._8_8_ = 0;
    local_3128.Getter._16_8_ = 0;
    pFVar29 = TSlateBaseNamedArgs<STextBlock>::Visibility
                        ((TSlateBaseNamedArgs<STextBlock> *)pFVar29,&local_3128);
    pcVar10 = *(code **)((longlong)*(ISlateStyle *)local_3338 + 0x38);
    pFVar38 = ::FName::FName(&local_2d08,"MultiboxHookColor");
    puVar22 = (undefined8 *)(*pcVar10)(local_3338,*pFVar38,0,&FStyleDefaults::DefaultColor);
    local_2f58._0_8_ = *puVar22;
    local_2f58._8_8_ = puVar22[1];
    local_2f48 = 0;
    local_2f30 = 0;
    local_2f44 = 1;
    local_2f40 = 0;
    uStack_2f38 = 0;
    pFVar29 = STextBlock::FArguments::ColorAndOpacity
                        (pFVar29,(TAttribute<FSlateColor> *)&local_2f58._s_0);
    local_31c0 = param_1->ExtensionHook;
    pFVar30 = FText::FromName(&local_2d88,&local_31c0);
    pTVar58 = TAttribute<FText>::TAttribute<FText>(&local_2330,pFVar30);
    pFVar29 = STextBlock::FArguments::Text(pFVar29,pTVar58);
    pTVar39 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_2978,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
                         ,0x3f8,&local_331c);
    pTVar31 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar39,&local_2d98,pFVar29);
    pTVar5 = (pTVar31->SharedReferenceCount).ReferenceController;
    local_2fa8.Object = (SWidget *)pTVar31->Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2fa8.SharedReferenceCount.ReferenceController = pTVar5;
    pFVar57 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)local_3300,&local_2fa8);
    pFVar59 = SHorizontalBox::FArguments::operator+(local_32a8,pFVar57);
    pFVar57 = SHorizontalBox::Slot(&local_1b48);
    pTVar20 = TSharedPtr<SWidget,1>::ToSharedRef(&local_3330,&local_2da8);
    pFVar57 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar57,pTVar20);
    pFVar59 = SHorizontalBox::FArguments::operator+(pFVar59,pFVar57);
    this_04 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_2990,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
                         ,0x3f3,local_331b);
    pTVar60 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_04,&local_2db8,pFVar59);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_3088,pTVar60);
    TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)local_32f8,&local_3088);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3088.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2db8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2990._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2da8.SharedReferenceCount.ReferenceController);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1b48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d98.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2978._Widget.SharedReferenceCount.ReferenceController);
    FText::~FText(&local_2d88);
    STextBlock::FArguments::~FArguments(&local_1318);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1c30);
    SHorizontalBox::FArguments::~FArguments(&local_1860);
    SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_1960);
    local_3078 = local_3348.Object;
    pFStack_3070 = (FArguments *)local_3348.SharedReferenceCount.ReferenceController;
    if ((FArguments *)FVar12.ReferenceController != (FArguments *)0x0) {
      LOCK();
      (FVar12.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3098 = &local_3330;
    local_3090 = &local_3078;
    TSet<TTuple<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TSharedPtr<SWidget,1>_const_&,TSharedPtr<FMultiBlock_const_,1>_&&>_>
              ((TSet<TTuple<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,0>,FDefaultSetAllocator>
                *)&this->FinalMultiBoxWidgets,&local_3218,(bool *)&local_3098);
    FVar65.ReferenceController = (TReferenceControllerBase<1> *)pFStack_3070;
    break;
  case ButtonRow:
    pTVar3 = &this->TileViewWidgets;
    pTVar20 = TSharedPtr<SWidget,1>::ToSharedRef(&local_3330,&local_2dc8);
    local_32d0 = pTVar20->Object;
    local_32c8 = (pTVar20->SharedReferenceCount).ReferenceController;
    if (local_32c8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_32c8->SharedReferenceCount = (atomic<int>)((int)local_32c8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar9 <= (FScriptContainerElement *)&local_32d0) &&
        ((FScriptContainerElement *)&local_32d0 <
         pFVar9 + (longlong)(this->TileViewWidgets).ArrayMax * 0x10)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar17 = (this->TileViewWidgets).ArrayNum;
    piVar2 = &(this->TileViewWidgets).ArrayMax;
    if (iVar17 == *piVar2) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar3->AllocatorInstance,piVar2);
    }
    (this->TileViewWidgets).ArrayNum = iVar17 + 1;
    pFVar9 = (pTVar3->AllocatorInstance).Data;
    *(SWidget **)(pFVar9 + (longlong)iVar17 * 0x10) = local_32d0;
    *(TReferenceControllerBase<1> **)(pFVar9 + (longlong)iVar17 * 0x10 + 8) = local_32c8;
    local_32c8 = (TReferenceControllerBase<1> *)0x0;
    local_32d0 = (SWidget *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2dc8.SharedReferenceCount.ReferenceController);
    local_2fb8 = local_3348.Object;
    pFStack_2fb0 = (FArguments *)local_3348.SharedReferenceCount.ReferenceController;
    if ((FArguments *)FVar12.ReferenceController != (FArguments *)0x0) {
      LOCK();
      (FVar12.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2fc8 = &local_3330;
    local_2fc0 = &local_2fb8;
    TSet<TTuple<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TSharedPtr<SWidget,1>_const_&,TSharedPtr<FMultiBlock_const_,1>_&&>_>
              ((TSet<TTuple<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,0>,FDefaultSetAllocator>
                *)&this->FinalMultiBoxWidgets,&local_3228,(bool *)&local_2fc8);
    FVar65.ReferenceController = (TReferenceControllerBase<1> *)pFStack_2fb0;
    break;
  case SlimWrappingToolBar:
    FMenuEntryStyleParams::FMenuEntryStyleParams(&local_2c78);
    cVar16 = (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_2c78);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&PrioritizedWrapBoxTypeName,"SPrioritizedWrapBox");
      _Init_thread_footer(&::_TSS0);
    }
    if ((local_32e0->Object == (SPanel *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FVar42 = SWidget::GetType((SWidget *)local_32e0->Object);
    if (*(FName *)FVar42 == PrioritizedWrapBoxTypeName) {
      TSharedPtr<SPrioritizedWrapBox,1>::TSharedPtr<SPrioritizedWrapBox,1><SPanel>
                (&local_3248,local_32e0,local_3367[0]);
      if (local_3248.Object != (SPrioritizedWrapBox *)0x0) {
        pFVar43 = TAttribute<FMenuEntryResizeParams>::Get(&param_1->ResizeParams);
        FMenuEntryResizeParams::FMenuEntryResizeParams(&local_28a0,pFVar43);
        TAttribute<bool>::TAttribute<bool>(&local_2f08,&local_28a0.Wrapping.Allow);
        if (local_2f08.bIsSet == false) {
          pFVar18 = TSharedPtr<FMultiBox,1>::operator->(&this->MultiBox);
          bVar14 = ISlateStyle::HasWidgetStyle<FToolBarStyle>
                             ((ISlateStyle *)pTVar24,pFVar18->StyleName,(char *)0x0);
          if (bVar14) {
            pFVar18 = TSharedPtr<FMultiBox,1>::operator->(&this->MultiBox);
            pFVar44 = ISlateStyle::GetWidgetStyle<FToolBarStyle>
                                ((ISlateStyle *)pTVar24,pFVar18->StyleName,(char *)0x0,
                                 (FToolBarStyle *)0x0);
            TAttribute<bool>::TAttribute<bool><bool>(&local_29f8,&pFVar44->bAllowWrappingDefault);
            TAttribute<bool>::operator=(&local_2f08,&local_29f8);
            TAttribute<bool>::~TAttribute<bool>(&local_29f8);
          }
        }
        this_03 = TSharedPtr<SPrioritizedWrapBox,1>::operator->(&local_3248);
        SPrioritizedWrapBox::AddSlot(this_03,(FScopedWidgetSlotArguments *)local_2d8);
        pTVar45 = TAttribute<bool>::TAttribute<bool>(&local_2468,&local_2f08);
        SPrioritizedWrapBox::FSlot::FSlotArguments::AllowWrapping
                  ((FSlotArguments *)local_2d8,pTVar45);
        if (local_28a0.Wrapping.Priority.bIsSet == false) {
          pTVar46 = TAttribute<int>::TAttribute<int><int>
                              (&local_2920,&FMenuEntryResizeParams::FWrappingParams::DefaultPriority
                              );
          pTVar46 = TAttribute<int>::TAttribute<int>(&local_2940,pTVar46);
          SPrioritizedWrapBox::FSlot::FSlotArguments::WrapPriority
                    ((FSlotArguments *)local_2d8,pTVar46);
          pTVar46 = &local_2920;
        }
        else {
          pTVar46 = TAttribute<int>::TAttribute<int>(&local_2960,&local_28a0.Wrapping.Priority);
          pTVar46 = TAttribute<int>::TAttribute<int>(&local_2940,pTVar46);
          SPrioritizedWrapBox::FSlot::FSlotArguments::WrapPriority
                    ((FSlotArguments *)local_2d8,pTVar46);
          pTVar46 = &local_2960;
        }
        TAttribute<int>::~TAttribute<int>(pTVar46);
        if (local_28a0.Wrapping.Mode.bIsSet == false) {
          pTVar47 = TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>::
                    TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode><enum_UE::Slate::PrioritizedWrapBox::EWrapMode>
                              (local_28c0,&FMenuEntryResizeParams::FWrappingParams::DefaultMode);
          pTVar47 = TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>::
                    TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>(local_28e0,pTVar47);
          SPrioritizedWrapBox::FSlot::FSlotArguments::WrapMode((FSlotArguments *)local_2d8,pTVar47);
          puVar64 = local_28c0;
        }
        else {
          pTVar47 = TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>::
                    TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>
                              (local_2900,&local_28a0.Wrapping.Mode);
          pTVar47 = TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>::
                    TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>(local_28e0,pTVar47);
          SPrioritizedWrapBox::FSlot::FSlotArguments::WrapMode((FSlotArguments *)local_2d8,pTVar47);
          puVar64 = local_2900;
        }
        TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>::
        ~TAttribute<enum_UE::Slate::PrioritizedWrapBox::EWrapMode>(puVar64);
        local_190 = Clip;
        if (local_28a0.Wrapping.VerticalOverflowBehavior.bIsSet != false) {
          local_190 = local_28a0.Wrapping.VerticalOverflowBehavior.TypedValue;
        }
        local_184 = (bool)Clip;
        if (local_28a0.Wrapping.ForceNewLine.bIsSet != false) {
          local_184 = local_28a0.Wrapping.ForceNewLine.TypedValue;
        }
        local_183 = param_1->Type == Separator;
        pFVar48 = TPaddingWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::FSlotArgumentsMixin::Padding
                            ((FSlotArgumentsMixin *)(local_2d8 + 0x18),0.0);
        TSlotBase<SPrioritizedWrapBox::FSlot>::FSlotArguments::operator[]
                  ((FSlotArguments *)pFVar48,&local_3358);
        TSharedPtr<FMultiBlock_const_,1>::TSharedPtr<FMultiBlock_const_,1><FMultiBlock_const_>
                  (&local_3008,&local_3348);
        TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SWidget>(&local_3018,&local_3358);
        TMapBase<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,0>_>
        ::Emplace<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>_>
                  ((TMapBase<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,0>_>
                    *)&this->FinalMultiBoxWidgets,&local_3018,&local_3008);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3018.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3008.SharedReferenceCount.ReferenceController);
        pFVar26 = (FSizeParam *)FAuto::FAuto(&local_2378);
        pTVar49 = TOptional<FSizeParam>::TOptional<FSizeParam>(&local_2300,pFVar26);
        TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::FSlotArgumentsMixin::SizeParam
                  (&local_280,pTVar49);
        FAuto::~FAuto(&local_2378);
        if (cVar16 != '\0') {
          pFVar48 = TAlignmentWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::FSlotArgumentsMixin::
                    HAlign(&local_290,local_2c78.HorizontalAlignment);
          EVar69 = VAlign_Fill;
          if (local_2c78.VerticalAlignment.bIsSet != false) {
            EVar69 = local_2c78.VerticalAlignment.TypedValue;
          }
          TAlignmentWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::FSlotArgumentsMixin::VAlign
                    ((FSlotArgumentsMixin *)&pFVar48->_padding_,EVar69);
          if (local_2c78.SizeRule.bIsSet != false) {
            pEVar50 = TOptional<enum_FSizeParam::ESizeRule>::GetValue(&local_2c78.SizeRule);
            if (*pEVar50 == SizeRule_Stretch) {
              local_32b8._0_4_ = 1.0;
              pTVar51 = &local_2c78.FillSize;
              if (local_2c78.FillSize.bIsSet == false) {
                pTVar51 = (TOptional<float> *)local_32b8;
              }
              TAttribute<float>::TAttribute<float><float>(&local_2a58,&pTVar51->TypedValue);
              pFVar26 = (FSizeParam *)FStretch::FStretch(&local_2408,&local_2a58);
              pTVar49 = TOptional<FSizeParam>::TOptional<FSizeParam>(&local_22b0,pFVar26);
              TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::FSlotArgumentsMixin::SizeParam
                        (&local_280,pTVar49);
              FStretch::~FStretch(&local_2408);
              pTVar52 = &local_2a58;
            }
            else {
              if (*pEVar50 != SizeRule_StretchContent) goto LAB_1427c6390;
              local_32b8._4_4_ = 0x3f800000;
              pTVar51 = &local_2c78.FillSize;
              if (local_2c78.FillSize.bIsSet == false) {
                pTVar51 = (TOptional<float> *)(local_32b8 + 4);
              }
              pTVar66 = &local_2c78.FillSizeMin;
              if (local_2c78.FillSizeMin.bIsSet == false) {
                pTVar66 = pTVar51;
              }
              TAttribute<float>::TAttribute<float><float>(&local_2a18,&pTVar66->TypedValue);
              local_32f0._0_4_ = 1.0;
              pTVar51 = &local_2c78.FillSize;
              if (local_2c78.FillSize.bIsSet == false) {
                pTVar51 = (TOptional<float> *)&local_32f0;
              }
              TAttribute<float>::TAttribute<float><float>(&local_2a38,&pTVar51->TypedValue);
              pFVar26 = (FSizeParam *)
                        FStretchContent::FStretchContent(&local_23c0,&local_2a38,&local_2a18);
              pTVar49 = TOptional<FSizeParam>::TOptional<FSizeParam>(&local_2260,pFVar26);
              TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::FSlotArgumentsMixin::SizeParam
                        (&local_280,pTVar49);
              FStretchContent::~FStretchContent(&local_23c0);
              TAttribute<float>::~TAttribute<float>(&local_2a38);
              pTVar52 = &local_2a18;
            }
            TAttribute<float>::~TAttribute<float>(pTVar52);
          }
LAB_1427c6390:
          if ((local_2c78.MinimumSize.bIsSet != false) ||
             (bVar14 = TAttribute<float>::IsBound(&local_2c78.MinimumSize), bVar14)) {
            pTVar52 = TAttribute<float>::TAttribute<float>(&local_2448,&local_2c78.MinimumSize);
            TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::FSlotArgumentsMixin::MinSize
                      (&local_280,pTVar52);
          }
          if ((local_2c78.MaximumSize.bIsSet != false) ||
             (bVar14 = TAttribute<float>::IsBound(&local_2c78.MaximumSize), bVar14)) {
            pTVar52 = TAttribute<float>::TAttribute<float>(&local_2428,&local_2c78.MaximumSize);
            TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::FSlotArgumentsMixin::MaxSize
                      (&local_280,pTVar52);
          }
        }
        TPanelChildren<SPrioritizedWrapBox::FSlot>::FScopedWidgetSlotArguments::
        ~FScopedWidgetSlotArguments((FScopedWidgetSlotArguments *)local_2d8);
        TAttribute<bool>::~TAttribute<bool>(&local_2f08);
        FMenuEntryResizeParams::~FMenuEntryResizeParams(&local_28a0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3248.SharedReferenceCount.ReferenceController);
    }
    FMenuEntryStyleParams::~FMenuEntryStyleParams(&local_2c78);
    pTVar68 = local_3360;
  default:
    goto switchD_1427c5c0d_default;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar65.ReferenceController);
  pTVar68 = local_3360;
switchD_1427c5c0d_default:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar63.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3330.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_3310);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_3290.ReferenceController);
  param_4 = local_32e0;
LAB_1427c6b35:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar68->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_3308->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_32d8->SharedReferenceCount).ReferenceController);
  return;
}

// AddElement @ 1427c7720

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SMultiBoxWidget::AddElement
          (SMultiBoxWidget *this,TSharedPtr<SWidget,1> *param_1,FText *param_2,bool param_3)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 local_res20 [8];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FText local_38;
  TSharedPtr<SWidget,1> *local_28;
  ForAnyElementType *local_20;
  
  if (!param_3) {
    pFVar3 = FText::GetEmpty();
    pIVar1 = (param_2->TextData).Reference;
    pIVar2 = (pFVar3->TextData).Reference;
    if (pIVar1 != pIVar2) {
      (param_2->TextData).Reference = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res20);
      }
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      }
    }
    param_2->Flags = pFVar3->Flags;
  }
  local_38.TextData.Reference = (param_2->TextData).Reference;
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 8))
              (local_38.TextData.Reference,local_res20);
  }
  local_38.Flags = param_2->Flags;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_48,1,&local_3c);
  ConstructItems<FText,FText,int>(local_48.Data,&local_38,1);
  local_20 = &local_48;
  local_28 = param_1;
  TSet<TTuple<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TSharedPtr<SWidget,1>_const_&,TArray<FText,TSizedDefaultAllocator<32>_>_&&>_>
            ((TSet<TTuple<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->MultiBoxWidgets,
             (TPairInitializer<TSharedPtr<SWidget,1>_const_&,TArray<FText,TSizedDefaultAllocator<32>_>_&&>
              *)local_res20,(bool *)&local_28);
  DestructItems<FText,int>((FText *)local_48.Data,local_40);
  if ((FText *)local_48.Data != (FText *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// AddSearchElement @ 1427c9600

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SMultiBoxWidget::AddSearchElement
          (SMultiBoxWidget *this,TSharedPtr<SWidget,1> *param_1,FText *param_2)

{
  uint uVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FText local_48;
  SWidget *local_38;
  TReferenceControllerBase<1> *local_30;
  SWidget **local_28;
  ForAnyElementType *local_20;
  
  pIVar2 = (param_2->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  local_38 = param_1->Object;
  uVar1 = param_2->Flags;
  local_30 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 1;
  local_48.Flags = uVar1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_58,1,&local_4c);
  ConstructItems<FText,FText,int>(local_58.Data,&local_48,1);
  local_28 = &local_38;
  local_20 = &local_58;
  TSet<TTuple<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TSharedPtr<SWidget,1>_const_&,TArray<FText,TSizedDefaultAllocator<32>_>_&&>_>
            ((TSet<TTuple<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->MultiBoxWidgets,
             (TPairInitializer<TSharedPtr<SWidget,1>_const_&,TArray<FText,TSizedDefaultAllocator<32>_>_&&>
              *)local_res8,(bool *)&local_28);
  DestructItems<FText,int>((FText *)local_58.Data,local_50);
  if ((FText *)local_58.Data != (FText *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  pIVar2 = (param_2->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return;
}

// BeginSearch @ 1427d4550

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiBoxWidget::BeginSearch(SMultiBoxWidget *this,wchar_t param_1)

{
  SWidget *pSVar1;
  FSlateApplication *this_00;
  SSearchBox *this_01;
  FText *pFVar2;
  FString local_78;
  TSharedPtr<SWidget,1> local_68;
  FDestructionSentinel local_58;
  undefined8 local_40;
  undefined1 local_38 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  if (0x1f < (ushort)param_1) {
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    ::FString::AppendChar(&local_78,param_1);
    if (((this->SearchTextWidget).Object != (SSearchBox *)0x0) &&
       (pSVar1 = (this->SearchBlockWidget).Object, pSVar1 != (SWidget *)0x0)) {
      local_58.AccessType._1_1_ = 1;
      local_58.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
      local_58.bDestroyed = false;
      local_58._17_7_ = 0;
      local_58.AccessType._0_1_ = EVisibility::Visible.Value.Value;
      local_40 = 0;
      (**(code **)(pSVar1->_padding_ + 0x1c8))(pSVar1,&local_58);
      this_00 = FSlateApplication::Get();
      local_68.SharedReferenceCount.ReferenceController =
           (this->SearchTextWidget).SharedReferenceCount.ReferenceController;
      local_68.Object = (SWidget *)(this->SearchTextWidget).Object;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FSlateApplication::SetUserFocus(this_00,0,&local_68,SetDirectly);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      this_01 = TSharedPtr<SSearchBox,1>::operator->(&this->SearchTextWidget);
      pFVar2 = FText::FromString((FText *)&local_68,&local_78);
      FText::FText((FText *)local_38,pFVar2);
      local_38[0x10] = true;
      local_10 = 0;
      local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_18.Data = (FScriptContainerElement *)0x0;
      SEditableTextBox::SetText((SEditableTextBox *)this_01,(TAttribute<FText> *)local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_20,(FWriteAccessScope *)&local_58);
      if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_18.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
        local_10 = local_10 & 0xffffffff00000000;
      }
      if (local_58.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
      }
      if (FStack_18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
      if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
      }
      if ((SSearchBox *)local_68.Object != (SSearchBox *)0x0) {
        (**(code **)((local_68.Object)->_padding_ + 0x10))();
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// BuildMultiBoxWidget @ 1427e75f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SMultiBoxWidget::BuildMultiBoxWidget(SMultiBoxWidget *this)

{
  TSharedPtr<FMultiBox,1> *this_00;
  TSharedPtr<SClippingHorizontalBox,1> *pTVar1;
  undefined1 *puVar2;
  TMap<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,0>_>
  *pTVar3;
  float fVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  FName FVar7;
  SClippingHorizontalBox *this_01;
  SClippingVerticalBox *this_02;
  code *pcVar8;
  TBitArray<FDefaultBitArrayAllocator> *pTVar9;
  TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  FToolBarComboButtonBlock *pFVar11;
  FSharedReferencer<1> FVar12;
  SBorder *this_03;
  FSlateBrush *pFVar13;
  undefined4 uVar14;
  FMultiBlock *pFVar15;
  TMap<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,0>_>
  *pTVar16;
  FMenuSpacerBlock *pFVar17;
  bool bVar18;
  bool bVar19;
  char cVar20;
  char cVar21;
  int iVar22;
  uint extraout_EAX;
  uint extraout_EAX_00;
  FMultiBox *pFVar23;
  FToolBarStyle *pFVar24;
  FMultiBox *pFVar25;
  FArguments *pFVar26;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SHorizontalBox,1> *pTVar27;
  FArguments *pFVar28;
  bool *pbVar29;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *pTVar30;
  TSharedRef<SClippingHorizontalBox,1> *pTVar31;
  FArguments *pFVar32;
  float *pfVar33;
  TSlateDecl<SPrioritizedWrapBox,RequiredArgs::T0RequiredArgs> *this_05;
  TSharedRef<SPrioritizedWrapBox,1> *pTVar34;
  TSharedPtr<SPanel,1> *pTVar35;
  FMultiBox *extraout_RAX;
  FArguments *pFVar36;
  TSlateDecl<SClippingVerticalBox,RequiredArgs::T0RequiredArgs> *this_06;
  TSharedRef<SClippingVerticalBox,1> *pTVar37;
  TSharedPtr<SClippingVerticalBox,1> *pTVar38;
  FMultiBox *extraout_RAX_00;
  FMargin *pFVar39;
  FMultiBox *extraout_RAX_01;
  FArguments *pFVar40;
  FSlotArguments *pFVar41;
  FArguments *pFVar42;
  TAttribute<EHorizontalAlignment> *pTVar43;
  TAttribute<float> *pTVar44;
  TAttribute<int> *pTVar45;
  TAttribute<FMargin> *pTVar46;
  TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs> *pTVar47;
  TSharedRef<SUniformWrapPanel,1> *pTVar48;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *pTVar49;
  TSharedRef<SVerticalBox,1> *pTVar50;
  TSharedPtr<SVerticalBox,1> *pTVar51;
  FMultiBox *extraout_RAX_02;
  FArguments *pFVar52;
  TAttribute<ESelectionMode::Type> *pTVar53;
  STileView<TSharedPtr<SWidget,1>_> *pSVar54;
  STileView<TSharedPtr<SWidget,1>_> *pSVar55;
  FMultiBox *extraout_RAX_03;
  FArguments *pFVar56;
  FSlotArguments *pFVar57;
  FArguments *pFVar58;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> *pTVar59;
  TSharedRef<SScrollBox,1> *pTVar60;
  FMultiBox *extraout_RAX_04;
  FMultiBox *extraout_RAX_05;
  longlong lVar61;
  SWidget *pSVar62;
  undefined8 *puVar63;
  TSharedRef<SWidget_const_,1> *pTVar64;
  ulong64 uVar65;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar66;
  FSlateBrush *pFVar67;
  ISlateStyle *pIVar68;
  FArguments *pFVar69;
  TSharedRef<SBorder,1> *pTVar70;
  ulonglong uVar71;
  uint uVar72;
  longlong lVar73;
  FSharedReferencer<1> FVar74;
  TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_> *pTVar75;
  undefined4 uVar76;
  FSharedReferencer<1> FVar77;
  uint uVar78;
  float fVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 auStackY_3908 [32];
  uint local_38c8;
  SClippingHorizontalBox *local_38b8;
  FSharedReferencer<1> FStack_38b0;
  undefined1 local_38a8 [2];
  TOptional<bool> local_38a6;
  uint local_38a4;
  uint local_38a0;
  uint local_389c;
  TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_> *local_3898;
  code *local_3888;
  undefined4 uStack_3880;
  uint uStack_387c;
  SWidget *local_3878;
  T0RequiredArgs local_3870;
  T0RequiredArgs local_386f;
  T0RequiredArgs local_386e;
  T0RequiredArgs local_386d;
  T0RequiredArgs local_386c;
  T0RequiredArgs local_386b;
  T0RequiredArgs local_386a;
  T0RequiredArgs local_3869;
  T0RequiredArgs local_3868;
  T0RequiredArgs local_3867;
  T0RequiredArgs local_3866;
  T0RequiredArgs local_3865;
  T0RequiredArgs local_3864;
  T0RequiredArgs local_3863;
  T0RequiredArgs local_3862 [2];
  FToolBarComboButtonBlock *local_3860;
  FSharedReferencer<1> FStack_3858;
  TSharedPtr<SWidget,1> local_3850;
  int local_3840;
  FToolBarComboButtonBlock *local_3838;
  longlong local_3830;
  TSharedPtr<SVerticalBox,1> local_3828;
  TReferenceControllerBase<1> *local_3818;
  FLLMScope local_3810;
  FLLMScope local_380c;
  FLLMScope local_3808 [2];
  longlong local_3800;
  TReferenceControllerBase<1> *local_37f8;
  TSharedPtr<SWidget,1> local_37e8;
  EHorizontalAlignment local_37d8;
  float local_37d4;
  Type local_37d0;
  float local_37cc;
  float local_37c8;
  EHorizontalAlignment local_37c4;
  float local_37c0;
  float local_37bc;
  SBorder *local_37b8;
  FSharedReferencer<1> local_37b0;
  undefined1 local_37a8 [8];
  FDelegateAllocation local_37a0;
  TSlateDecl<STileView<TSharedPtr<SWidget,1>_>,RequiredArgs::T0RequiredArgs> local_3790;
  TReferenceControllerBase<1> *local_3778;
  FSlateBrush *local_3770;
  SClippingHorizontalBox *local_3768;
  FSharedReferencer<1> local_3760;
  undefined8 local_3758;
  undefined8 uStack_3750;
  undefined4 local_3748;
  STileView<TSharedPtr<SWidget,1>_> *local_3738;
  FSharedReferencer<1> FStack_3730;
  undefined1 local_3728 [16];
  TDelegateBase<FNotThreadSafeDelegateMode> local_3718;
  float local_3700;
  float fStack_36fc;
  float fStack_36f8;
  float fStack_36f4;
  undefined1 local_36f0;
  undefined1 local_36e8 [8];
  void *pvStack_36e0;
  undefined8 local_36d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_36d0;
  FSlateBrush *local_36b0;
  undefined1 local_36a8;
  undefined1 local_36a0 [8];
  void *pvStack_3698;
  undefined8 local_3690;
  undefined8 local_3688;
  undefined8 uStack_3680;
  undefined4 local_3678;
  undefined1 local_3674;
  undefined1 local_3670 [8];
  void *pvStack_3668;
  undefined8 local_3660;
  SMultiBoxWidget *local_3658;
  TReferenceControllerBase<1> *local_3650;
  FMultiBlock *local_3648;
  undefined8 local_3640;
  FSharedReferencer<1> local_3638;
  undefined8 local_3630;
  FSharedReferencer<1> local_3628;
  undefined8 local_3620;
  FSharedReferencer<1> local_3618;
  undefined8 local_3610;
  FSharedReferencer<1> local_3608;
  undefined8 local_3600;
  FSharedReferencer<1> local_35f8;
  TReferenceControllerBase<1> *local_35f0;
  undefined8 local_35e8;
  FSharedReferencer<1> local_35e0;
  FName local_35d8;
  TSharedRef<SVerticalBox,1> local_35d0;
  FMemScope local_35c0;
  undefined8 local_35b8;
  FSharedReferencer<1> local_35b0;
  FName local_35a8;
  FMemScope local_35a0;
  undefined1 local_3598 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3590;
  FDelegateAllocation FStack_3588;
  <lambda_2> local_3578;
  FName local_3570;
  FMemScope local_3568;
  TMap<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,0>_>
  *local_3560;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3558;
  undefined8 uStack_3538;
  TSharedPtr<FMultiBlock_const_,1> local_3530;
  TSharedRef<SWidget,1> local_3520;
  TSharedPtr<SWidget,1> local_3508;
  TSharedPtr<SWidget,1> local_34f8;
  TSharedRef<SWidget,1> local_34e8;
  TSharedRef<SWidget,1> local_34d8;
  TSharedPtr<SWidget,1> local_34c8;
  TSharedRef<SWidget,1> local_34b8;
  TSharedPtr<FToolBarComboButtonBlock_const_,1> local_34a8;
  TSharedPtr<FMultiBlock_const_,1> local_3498;
  TSharedPtr<FToolBarComboButtonBlock_const_,1> local_3488;
  TSharedRef<FMenuSpacerBlock,1> local_3478;
  TSharedPtr<FToolBarComboButtonBlock_const_,1> local_3468;
  TSharedPtr<SWidget,1> local_3458;
  TSharedPtr<SPanel,1> local_3448;
  TSharedPtr<SWidget,1> local_3438;
  TSharedPtr<SVerticalBox,1> local_3428;
  TSharedPtr<SClippingVerticalBox,1> local_3418;
  TSharedPtr<SWidget,1> local_3408;
  TSharedPtr<SVerticalBox,1> local_33f8;
  TSharedRef<SWidget,1> local_33e8;
  TSharedPtr<SWidget,1> local_33d8;
  TSharedPtr<SVerticalBox,1> local_33c8;
  undefined1 local_33b8 [40];
  int local_3390;
  undefined4 uStack_338c;
  FDestructionSentinel local_3388;
  FDelegateAllocation *local_3370;
  FDestructionSentinel local_3368;
  FDelegateAllocation *local_3350;
  TSharedRef<SVerticalBox,1> local_3348;
  TSharedRef<SScrollBox,1> local_3338;
  TSharedRef<SVerticalBox,1> local_3328;
  TSharedRef<SScrollBox,1> local_3318;
  FName local_3308 [2];
  TSharedPtr<SPanel,1> local_32f8;
  TSharedPtr<SVerticalBox,1> local_32e8;
  TSharedPtr<SHorizontalBox,1> local_32d8;
  TSharedPtr<SPanel,1> local_32c8;
  TSharedPtr<SVerticalBox,1> local_32b8;
  TSharedPtr<SHorizontalBox,1> local_32a8;
  TSharedPtr<FUICommandList_const_,1> local_3298;
  TSharedPtr<FUICommandInfo_const_,1> local_3288;
  TSharedRef<SWidget_const_,1> local_3278;
  TSharedPtr<SPanel,1> local_3268;
  TSharedPtr<SVerticalBox,1> local_3258;
  TSharedPtr<SHorizontalBox,1> local_3248;
  TSharedPtr<FToolBarComboButtonBlock_const_,1> local_3238;
  TSharedPtr<SPanel,1> local_3228;
  TSharedPtr<SVerticalBox,1> local_3218;
  TSharedPtr<SHorizontalBox,1> local_3208;
  SWidget *local_31f8;
  TReferenceControllerBase<1> *pTStack_31f0;
  TSharedRef<SBorder,1> local_31e8;
  longlong local_31d8;
  TReferenceControllerBase<1> *pTStack_31d0;
  SHorizontalBox *local_31c8;
  TReferenceControllerBase<1> *pTStack_31c0;
  SVerticalBox *local_31b8;
  TReferenceControllerBase<1> *pTStack_31b0;
  SPanel *local_31a8;
  TReferenceControllerBase<1> *pTStack_31a0;
  TSharedRef<SHorizontalBox,1> local_3198;
  code *local_3188;
  longlong lStack_3180;
  TSharedRef<SClippingHorizontalBox,1> local_3178;
  TSlateDecl<SClippingHorizontalBox,RequiredArgs::T0RequiredArgs> local_3168;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_3150;
  TSharedRef<SPrioritizedWrapBox,1> local_3138;
  code *local_3128;
  longlong lStack_3120;
  TSharedRef<SClippingVerticalBox,1> local_3118;
  TSharedRef<SVerticalBox,1> local_3108;
  TSharedRef<SUniformWrapPanel,1> local_30f8;
  TSharedRef<SVerticalBox,1> local_30e8;
  TSharedRef<SUniformWrapPanel,1> local_30d8;
  code *local_30c8;
  longlong lStack_30c0;
  code *local_30b8;
  longlong lStack_30b0;
  code *local_30a8;
  longlong lStack_30a0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3098;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> local_3080;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3068;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> local_3050;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3038;
  TSlateDecl<SPrioritizedWrapBox,RequiredArgs::T0RequiredArgs> local_3020;
  TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs> local_3008;
  TSlateDecl<SClippingVerticalBox,RequiredArgs::T0RequiredArgs> local_2ff0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2fd8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2fc0;
  TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs> local_2fa8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_2f90;
  longlong local_2f70;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2f68;
  undefined8 local_2f60;
  undefined8 uStack_2f58;
  FMargin local_2f48;
  FMargin local_2f38;
  undefined1 local_2f28 [24];
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> local_2f10;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> local_2ef8;
  TAttribute<float> local_2ee0;
  TAttribute<float> local_2ec0;
  undefined1 local_2ea0 [32];
  TAttribute<float> local_2e80;
  TAttribute<float> local_2e60;
  TAttribute<float> local_2e40;
  TAttribute<float> local_2e20;
  undefined1 local_2e00 [32];
  TAttribute<float> local_2de0;
  TAttribute<int> local_2dc0;
  undefined1 local_2da0 [32];
  TAttribute<float> local_2d80;
  TAttribute<float> local_2d60;
  TAttribute<FMargin> local_2d40;
  TAttribute<FMargin> local_2d10;
  TAttribute<FMargin> local_2ce0;
  undefined1 local_2cb0 [512];
  undefined1 local_2ab0 [48];
  undefined1 local_2a80 [24];
  FSlotArguments local_2a68;
  FSlotArguments local_2980;
  FSlotArguments local_2898;
  FSlotArguments local_27b0;
  FSlotArguments local_26c8;
  FArguments local_25e0;
  FArguments local_23d8;
  FArguments local_21d0;
  FArguments local_1fc8;
  FArguments local_1dc0;
  FArguments local_1bb8;
  FArguments local_19b0;
  FArguments local_1758;
  FArguments local_14f0;
  FArguments local_1228;
  FArguments local_f60;
  FArguments local_c48;
  FArguments local_930;
  FArguments local_550;
  TFunction<int___cdecl(void)> local_c8;
  ulonglong local_98;
  undefined8 uStack_30;
  
  uStack_30 = 0x1427e760a;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_3908;
  this_00 = &this->MultiBox;
  local_38a4 = 0;
  local_3658 = this;
  if (this_00->Object == (FMultiBox *)0x0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("MultiBox.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
                        ,0x460,L"");
    if (bVar18) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((this_00->Object == (FMultiBox *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar18)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar75 = &this_00->Object->Blocks;
  local_3898 = pTVar75;
  if ((this_00->Object->Blocks).ArrayNum == 0) {
    iVar22 = (**(code **)this->_padding_)(&this->_padding_);
    if (iVar22 < 1) {
      return;
    }
    if ((SWidget *)this->_padding_ == SNullWidget::NullWidget.Object) {
      return;
    }
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_,&SNullWidget::NullWidget);
    return;
  }
  CreateSearchTextWidget(this);
  pFVar23 = TSharedPtr<FMultiBox,1>::operator->(this_00);
  pIVar68 = pFVar23->StyleSet;
  pFVar23 = TSharedPtr<FMultiBox,1>::operator->(this_00);
  fVar82 = 0.0;
  fVar83 = 0.0;
  fVar84 = 0.0;
  fVar85 = 0.0;
  bVar18 = ISlateStyle::HasWidgetStyle<FToolBarStyle>(pIVar68,pFVar23->StyleName,(char *)0x0);
  if (bVar18) {
    pFVar24 = ISlateStyle::GetWidgetStyle<FToolBarStyle>
                        (pIVar68,pFVar23->StyleName,(char *)0x0,(FToolBarStyle *)0x0);
    fVar82 = (pFVar24->BackgroundPadding).Left;
    fVar83 = (pFVar24->BackgroundPadding).Top;
    fVar84 = (pFVar24->BackgroundPadding).Right;
    fVar85 = (pFVar24->BackgroundPadding).Bottom;
    local_3770 = &pFVar24->BackgroundBrush;
  }
  else {
    pcVar8 = *(code **)((longlong)*pIVar68 + 0x58);
    FStyleDefaults::GetNoBrush();
    local_3770 = (FSlateBrush *)(*pcVar8)(pIVar68,pFVar23->StyleName);
  }
  local_3850 = (TSharedPtr<SWidget,1>)ZEXT816(0);
  local_3828.Object = (SVerticalBox *)0x0;
  local_3828.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_38b8 = (SClippingHorizontalBox *)0x0;
  FStack_38b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3738 = (STileView<TSharedPtr<SWidget,1>_> *)0x0;
  FStack_3730.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_37e8 = local_3850;
  pFVar25 = TSharedPtr<FMultiBox,1>::operator->(this_00);
  switch(pFVar25->Type) {
  case MenuBar:
    pFVar26 = SHorizontalBox::FArguments::FArguments(&local_25e0);
    this_04 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_3038,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
                         ,0x495,&local_3870);
    pTVar27 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_04,&local_3198,pFVar26);
    local_3628.ReferenceController = (pTVar27->SharedReferenceCount).ReferenceController;
    local_38b8 = (SClippingHorizontalBox *)pTVar27->Object;
    if (local_3628.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3628.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_3628.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3630 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_38b0,&local_3628);
    FVar77.ReferenceController = FStack_38b0.ReferenceController;
    local_3638.ReferenceController = FStack_38b0.ReferenceController;
    if (FStack_38b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_38b0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_38b0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3850.Object = (SWidget *)local_38b8;
    local_3640 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_3850.SharedReferenceCount,&local_3638);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3638.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3628.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3198.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3038._Widget.SharedReferenceCount.ReferenceController);
    SHorizontalBox::FArguments::~FArguments(&local_25e0);
    local_389c = extraout_EAX;
    goto LAB_1427e8baa;
  case ToolBar:
  case SlimHorizontalToolBar:
    pFVar28 = SClippingHorizontalBox::FArguments::FArguments((FArguments *)local_2cb0);
    pFVar25 = TSharedPtr<FMultiBox,1>::operator->(this_00);
    local_38a6.bIsSet = (pFVar25->bAllowWrapButton).bIsSet;
    if (local_38a6.bIsSet != false) {
      local_38a6.TypedValue = (pFVar25->bAllowWrapButton).TypedValue;
    }
    if (&local_38a6 != &pFVar28->_AllowWrapButton) {
      if (local_38a6.bIsSet == false) {
        if ((pFVar28->_AllowWrapButton).bIsSet != false) {
          (pFVar28->_AllowWrapButton).bIsSet = false;
        }
      }
      else {
        pbVar29 = TOptional<bool>::GetValue(&local_38a6);
        (pFVar28->_AllowWrapButton).TypedValue = *pbVar29;
        (pFVar28->_AllowWrapButton).bIsSet = true;
      }
    }
    local_3888 = OnWrapButtonClicked;
    uStack_3880 = 0;
    lStack_3180 = (ulonglong)uStack_387c << 0x20;
    local_3188 = OnWrapButtonClicked;
    pTVar30 = TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
              CreateSP<SMultiBoxWidget>(&local_2f10,this,(pmf_0886907d *)&local_3188);
    TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&pFVar28->_OnWrapButtonClicked,pTVar30);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar30);
    if (*(void **)&pTVar30->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar30->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)pTVar30);
    local_37a8 = (undefined1  [8])0x0;
    local_37a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_37a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_37a8,
               (FWriteAccessScope *)&local_3388);
    local_3370 = &local_37a0;
    puVar63 = UE::Core::Private::DelegateAllocate(0x20,&local_37a0);
    if (puVar63 != (undefined8 *)0x0) {
      *puVar63 = &
                 ___7__TCommonDelegateInstanceState___A6A_AUFMenuEntryResizeParams__AEBV__TSharedRef_VSWidget___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar65 = FDelegateHandle::GenerateNewID();
      puVar63[2] = uVar65;
      *puVar63 = &TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy,`SMultiBoxWidget::BuildMultiBoxWidget'::`23'::<lambda_1>_>
                  ::_vftable_;
      puVar63[3] = this;
    }
    if (local_3388.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3388.Accessor,&local_3388);
    }
    TDelegate<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
    ::operator=(&pFVar28->_OnGetWidgetResizeParams,
                (TDelegate<FMenuEntryResizeParams___cdecl(TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
                 *)local_37a8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_37a8);
    if (local_37a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_37a0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_37a8);
    pFVar25 = TSharedPtr<FMultiBox,1>::operator->(this_00);
    pFVar28->_IsFocusable = pFVar25->bIsFocusable;
    pFVar28->_StyleSet = pIVar68;
    pFVar28->_StyleName = pFVar23->StyleName;
    FLLMScope::FLLMScope(&local_3810,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_35a8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_35a0,&local_35a8,true);
    TSlateDecl<SClippingHorizontalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SClippingHorizontalBox,RequiredArgs::T0RequiredArgs>
              (&local_3168,"SClippingHorizontalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
               ,0x49b,&local_386f);
    FMemScope::~FMemScope(&local_35a0);
    FLLMScope::~FLLMScope(&local_3810);
    pTVar31 = TSlateDecl<SClippingHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_3168,&local_3178,pFVar28);
    local_3760.ReferenceController = (pTVar31->SharedReferenceCount).ReferenceController;
    local_3768 = pTVar31->Object;
    if (local_3760.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3760.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_3760.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = &this->ClippedHorizontalBox;
    if (pTVar1 != (TSharedPtr<SClippingHorizontalBox,1> *)&local_3768) {
      pTVar1->Object = local_3768;
      local_3768 = (SClippingHorizontalBox *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ClippedHorizontalBox).SharedReferenceCount,&local_3760);
    }
    FVar74.ReferenceController = local_3760.ReferenceController;
    local_3608.ReferenceController =
         (this->ClippedHorizontalBox).SharedReferenceCount.ReferenceController;
    local_38b8 = pTVar1->Object;
    if (local_3608.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3608.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_3608.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3610 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_38b0,&local_3608);
    FVar77.ReferenceController = FStack_38b0.ReferenceController;
    local_3618.ReferenceController = FStack_38b0.ReferenceController;
    if (FStack_38b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_38b0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_38b0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3850.Object = (SWidget *)local_38b8;
    local_3620 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_3850.SharedReferenceCount,&local_3618);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3618.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3608.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar74.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3178.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3168._Widget.SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2a80);
    if ((void *)local_2a80._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2a80._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2a80);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2ab0);
    if ((void *)local_2ab0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_2ab0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2ab0);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2cb0);
    local_389c = extraout_EAX_00;
    goto LAB_1427e8baa;
  case VerticalToolBar:
    pFVar36 = SClippingVerticalBox::FArguments::FArguments(&local_1758);
    uStack_3880 = 0;
    local_3888 = OnWrapButtonClicked;
    lStack_3120 = (ulonglong)uStack_387c << 0x20;
    local_3128 = OnWrapButtonClicked;
    pTVar30 = TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
              CreateSP<SMultiBoxWidget>(&local_2ef8,this,(pmf_0886907d *)&local_3128);
    pFVar36 = SClippingVerticalBox::FArguments::OnWrapButtonClicked(pFVar36,pTVar30);
    pFVar25 = TSharedPtr<FMultiBox,1>::operator->(&this->MultiBox);
    pFVar36->_IsFocusable = pFVar25->bIsFocusable;
    local_3578.__this = this;
    TFunction<int___cdecl(void)>::
    TFunction<int___cdecl(void)><_SMultiBoxWidget::BuildMultiBoxWidget_::__l25::<lambda_2>_>
              (&local_c8,&local_3578);
    pFVar36 = SClippingVerticalBox::FArguments::SelectedIndex_Lambda(pFVar36,&local_c8);
    pFVar36->_StyleSet = pIVar68;
    pFVar36->_StyleName = pFVar23->StyleName;
    this_06 = MakeTDecl<SClippingVerticalBox,RequiredArgs::T0RequiredArgs>
                        (&local_2ff0,"SClippingVerticalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
                         ,0x4bd,&local_386d);
    pTVar37 = TSlateDecl<SClippingVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_06,&local_3118,pFVar36);
    TSharedPtr<SClippingVerticalBox,1>::TSharedPtr<SClippingVerticalBox,1><SClippingVerticalBox>
              (&local_3418,pTVar37);
    pTVar38 = TSharedPtr<SClippingVerticalBox,1>::operator=(&this->ClippedVerticalBox,&local_3418);
    TSharedPtr<SVerticalBox,1>::TSharedPtr<SVerticalBox,1><SClippingVerticalBox>
              (&local_3428,pTVar38);
    pTVar51 = TSharedPtr<SVerticalBox,1>::operator=(&local_3828,&local_3428);
    TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SVerticalBox>(&local_3438,pTVar51);
    TSharedPtr<SWidget,1>::operator=(&local_3850,&local_3438);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3438.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3428.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3418.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3118.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2ff0._Widget.SharedReferenceCount.ReferenceController);
    TFunction<int___cdecl(void)>::~TFunction<int___cdecl(void)>(&local_c8);
    SClippingVerticalBox::FArguments::~FArguments(&local_1758);
    pFVar25 = extraout_RAX_00;
    break;
  case UniformToolBar:
    pFVar40 = SVerticalBox::FArguments::FArguments(&local_23d8);
    pFVar41 = SVerticalBox::Slot(&local_2a68);
    fVar79 = __real_40000000;
    pFVar39 = FMargin::FMargin(&local_2f48,0.0,__real_40000000);
    pTVar46 = TAttribute<FMargin>::TAttribute<FMargin>(&local_2d40,pFVar39);
    pFVar41 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar41->field_0x18,pTVar46);
    pFVar41 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar41);
    pFVar42 = SUniformWrapPanel::FArguments::FArguments(&local_f60);
    local_37c4 = HAlign_Left;
    pTVar43 = TAttribute<enum_EHorizontalAlignment>::TAttribute<enum_EHorizontalAlignment>
                        (local_2da0,&local_37c4);
    pFVar42 = SUniformWrapPanel::FArguments::HAlign(pFVar42,pTVar43);
    local_37cc = 50.0;
    pTVar44 = TAttribute<float>::TAttribute<float>(&local_2d80,&local_37cc);
    pFVar42 = SUniformWrapPanel::FArguments::MinDesiredSlotWidth(pFVar42,pTVar44);
    local_37c8 = 43.0;
    pTVar44 = TAttribute<float>::TAttribute<float>(&local_2d60,&local_37c8);
    pFVar42 = SUniformWrapPanel::FArguments::MinDesiredSlotHeight(pFVar42,pTVar44);
    local_37c0 = 50.0;
    pTVar44 = TAttribute<float>::TAttribute<float>(&local_2ee0,&local_37c0);
    pFVar42 = SUniformWrapPanel::FArguments::MaxDesiredSlotWidth(pFVar42,pTVar44);
    local_37bc = 43.0;
    pTVar44 = TAttribute<float>::TAttribute<float>(&local_2ec0,&local_37bc);
    pFVar42 = SUniformWrapPanel::FArguments::MaxDesiredSlotHeight(pFVar42,pTVar44);
    pFVar39 = FMargin::FMargin(&local_2f38,fVar79,__real_3f800000);
    pTVar46 = TAttribute<FMargin>::TAttribute<FMargin>(&local_2d10,pFVar39);
    pFVar42 = SUniformWrapPanel::FArguments::SlotPadding(pFVar42,pTVar46);
    pTVar47 = MakeTDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>
                        (&local_3008,"SUniformWrapPanel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
                         ,0x4d0,&local_386c);
    pTVar47 = TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>::Expose<SUniformWrapPanel>
                        (pTVar47,&this->UniformToolbarPanel);
    pTVar48 = TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar47,&local_30f8,pFVar42);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SUniformWrapPanel>(&local_33e8,pTVar48);
    pFVar41 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar41,&local_33e8);
    pFVar40 = SVerticalBox::FArguments::operator+(pFVar40,pFVar41);
    pTVar49 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                        (&local_2fc0,"SVerticalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
                         ,0x4ca,&local_386b);
    pTVar50 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar49,&local_3108,pFVar40);
    TSharedPtr<SVerticalBox,1>::TSharedPtr<SVerticalBox,1><SVerticalBox>(&local_33f8,pTVar50);
    pTVar51 = TSharedPtr<SVerticalBox,1>::operator=(&local_3828,&local_33f8);
    TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SVerticalBox>(&local_3408,pTVar51);
    TSharedPtr<SWidget,1>::operator=(&local_3850,&local_3408);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3408.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_33f8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3108.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2fc0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_33e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30f8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3008._Widget.SharedReferenceCount.ReferenceController);
    SUniformWrapPanel::FArguments::~FArguments(&local_f60);
    SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2a68);
    SVerticalBox::FArguments::~FArguments(&local_23d8);
    pFVar25 = extraout_RAX_01;
    pTVar75 = local_3898;
    break;
  case Menu:
    if ((this->MaxHeight).bIsSet == false) {
      pFVar56 = SScrollBox::FArguments::FArguments(&local_1228);
      pFVar57 = SScrollBox::Slot(&local_26c8);
      pFVar40 = SVerticalBox::FArguments::FArguments(&local_1bb8);
      pTVar49 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                          (&local_2f90,"SVerticalBox",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
                           ,0x510,&local_3864);
      pTVar49 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::Expose<SVerticalBox>
                          (pTVar49,&local_3828);
      pTVar50 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar49,&local_35d0,pFVar40);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_34b8,pTVar50);
      pFVar57 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                          ((FSlotArguments *)pFVar57,&local_34b8);
      pFVar56 = SScrollBox::FArguments::operator+(pFVar56,pFVar57);
      pTVar59 = MakeTDecl<SScrollBox,RequiredArgs::T0RequiredArgs>
                          (&local_3050,"SScrollBox",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
                           ,0x50d,&local_3863);
      pTVar60 = TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar59,&local_3318,pFVar56);
      TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SScrollBox>(&local_34c8,pTVar60);
      TSharedPtr<SWidget,1>::operator=(&local_3850,&local_34c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_34c8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3318.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3050._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_34b8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_35d0.SharedReferenceCount.ReferenceController._4_4_,
                          local_35d0.SharedReferenceCount.ReferenceController._0_4_));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2f90._Widget.SharedReferenceCount.ReferenceController);
      SVerticalBox::FArguments::~FArguments(&local_1bb8);
      SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_26c8);
      SScrollBox::FArguments::~FArguments(&local_1228);
      pFVar25 = extraout_RAX_05;
      pTVar75 = local_3898;
    }
    else {
      pFVar40 = SVerticalBox::FArguments::FArguments(&local_1dc0);
      pFVar41 = SVerticalBox::Slot(&local_27b0);
      pTVar44 = TAttribute<float>::TAttribute<float>(&local_2de0,&this->MaxHeight);
      pFVar41 = SVerticalBox::FSlot::FSlotArguments::MaxHeight(pFVar41,pTVar44);
      pFVar56 = SScrollBox::FArguments::FArguments(&local_14f0);
      pFVar57 = SScrollBox::Slot(&local_2898);
      pFVar58 = SVerticalBox::FArguments::FArguments(&local_1fc8);
      pTVar49 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                          (&local_3068,"SVerticalBox",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
                           ,0x506,&local_3867);
      pTVar49 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::Expose<SVerticalBox>
                          (pTVar49,&local_3828);
      pTVar50 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar49,&local_3328,pFVar58);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_34d8,pTVar50);
      pFVar57 = TSlotBase<SScrollBox::FSlot>::FSlotArguments::operator[]
                          ((FSlotArguments *)pFVar57,&local_34d8);
      pFVar56 = SScrollBox::FArguments::operator+(pFVar56,pFVar57);
      pTVar59 = MakeTDecl<SScrollBox,RequiredArgs::T0RequiredArgs>
                          (&local_3080,"SScrollBox",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
                           ,0x503,&local_3866);
      pTVar60 = TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar59,&local_3338,pFVar56);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SScrollBox>(&local_34e8,pTVar60);
      pFVar41 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                          ((FSlotArguments *)pFVar41,&local_34e8);
      pFVar40 = SVerticalBox::FArguments::operator+(pFVar40,pFVar41);
      pTVar49 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                          (&local_3098,"SVerticalBox",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
                           ,0x4fe,&local_3865);
      pTVar50 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar49,&local_3348,pFVar40);
      TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SVerticalBox>(&local_34f8,pTVar50);
      TSharedPtr<SWidget,1>::operator=(&local_3850,&local_34f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_34f8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3348.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3098._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_34e8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3338.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3080._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_34d8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3328.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3068._Widget.SharedReferenceCount.ReferenceController);
      SVerticalBox::FArguments::~FArguments(&local_1fc8);
      SScrollBox::FSlot::FSlotArguments::~FSlotArguments(&local_2898);
      SScrollBox::FArguments::~FArguments(&local_14f0);
      SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_27b0);
      SVerticalBox::FArguments::~FArguments(&local_1dc0);
      pFVar25 = extraout_RAX_04;
      pTVar75 = local_3898;
    }
    break;
  case ButtonRow:
    pFVar52 = STileView<TSharedPtr<SWidget,1>_>::FArguments::FArguments(&local_550);
    uStack_3880 = 0;
    local_3888 = GenerateTiles;
    lStack_30c0 = (ulonglong)uStack_387c << 0x20;
    local_30c8 = GenerateTiles;
    pFVar52 = STileView<TSharedPtr<SWidget,1>_>::FArguments::OnGenerateTile<SMultiBoxWidget>
                        (pFVar52,this,(pmf_d4879530 *)&local_30c8);
    pFVar52 = STileView<TSharedPtr<SWidget,1>_>::FArguments::ListItemsSource
                        (pFVar52,&this->TileViewWidgets);
    uStack_3880 = 0;
    local_3888 = GetItemWidth;
    lStack_30b0 = (ulonglong)uStack_387c << 0x20;
    local_30b8 = GetItemWidth;
    pFVar52 = STileView<TSharedPtr<SWidget,1>_>::FArguments::ItemWidth<SMultiBoxWidget>
                        (pFVar52,this,(pmf_e276b5bc *)&local_30b8);
    uStack_3880 = 0;
    local_3888 = GetItemHeight;
    lStack_30a0 = (ulonglong)uStack_387c << 0x20;
    local_30a8 = GetItemHeight;
    pFVar52 = STileView<TSharedPtr<SWidget,1>_>::FArguments::ItemHeight<SMultiBoxWidget>
                        (pFVar52,this,(pmf_e276b5bc *)&local_30a8);
    local_37d0 = None;
    pTVar53 = TAttribute<enum_ESelectionMode::Type>::TAttribute<enum_ESelectionMode::Type>
                        (local_2e00,&local_37d0);
    pFVar52 = STileView<TSharedPtr<SWidget,1>_>::FArguments::SelectionMode(pFVar52,pTVar53);
    FLLMScope::FLLMScope(&local_380c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_3570 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_3568,&local_3570,true);
    TSlateDecl<STileView<TSharedPtr<SWidget,1>_>,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STileView<TSharedPtr<SWidget,1>_>,RequiredArgs::T0RequiredArgs>
              (&local_3790,"STileView< TSharedPtr<SWidget> >",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
               ,0x4f2,&local_3868);
    FMemScope::~FMemScope(&local_3568);
    FLLMScope::~FLLMScope(&local_380c);
    pSVar54 = TSharedPtr<STileView<TSharedPtr<SWidget,1>_>,1>::operator->(&local_3790._Widget);
    SWidget::SWidgetConstruct((SWidget *)pSVar54,(FSlateBaseNamedArgs *)pFVar52);
    pSVar54 = local_3790._Widget.Object;
    STileView<TSharedPtr<SWidget,1>_>::Construct(local_3790._Widget.Object,pFVar52);
    pSVar55 = TSharedPtr<STileView<TSharedPtr<SWidget,1>_>,1>::operator->(&local_3790._Widget);
    SWidget::CacheVolatility((SWidget *)pSVar55);
    pSVar55 = TSharedPtr<STileView<TSharedPtr<SWidget,1>_>,1>::operator->(&local_3790._Widget);
    pSVar55->field_0x31 = pSVar55->field_0x31 | 4;
    if ((local_3790._Widget.Object == (STileView<TSharedPtr<SWidget,1>_> *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L""), bVar18)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar77.ReferenceController = local_3790._Widget.SharedReferenceCount.ReferenceController;
    local_3790._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    local_3790._Widget.Object = (STileView<TSharedPtr<SWidget,1>_> *)0x0;
    if ((pSVar54 == (STileView<TSharedPtr<SWidget,1>_> *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar18)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_35b0.ReferenceController = FVar77.ReferenceController;
    if (FVar77.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar77.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar77.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3738 = pSVar54;
    local_35b8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_3730,&local_35b0);
    local_3508.Object = (SWidget *)local_3738;
    local_3508.SharedReferenceCount.ReferenceController = FStack_3730.ReferenceController;
    if (FStack_3730.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_3730.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_3730.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TSharedPtr<SWidget,1>::operator=(&local_3850,&local_3508);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3508.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_35b0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar77.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    STileView<TSharedPtr<SWidget,1>_>::FArguments::~FArguments(&local_550);
    pFVar25 = extraout_RAX_03;
    break;
  case SlimHorizontalUniformToolBar:
    pFVar23 = TSharedPtr<FMultiBox,1>::operator->(this_00);
    pFVar24 = ISlateStyle::GetWidgetStyle<FToolBarStyle>
                        (pIVar68,pFVar23->StyleName,(char *)0x0,(FToolBarStyle *)0x0);
    pFVar40 = SVerticalBox::FArguments::FArguments(&local_21d0);
    pFVar41 = SVerticalBox::Slot(&local_2980);
    pFVar41 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar41->field_0x18,0.0);
    pFVar41 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar41);
    pFVar42 = SUniformWrapPanel::FArguments::FArguments(&local_c48);
    local_37d8 = HAlign_Fill;
    pTVar43 = TAttribute<enum_EHorizontalAlignment>::TAttribute<enum_EHorizontalAlignment>
                        (local_2ea0,&local_37d8);
    pFVar42 = SUniformWrapPanel::FArguments::HAlign(pFVar42,pTVar43);
    pTVar44 = TAttribute<float>::TAttribute<float><float>(&local_2e80,&pFVar24->UniformBlockWidth);
    pFVar42 = SUniformWrapPanel::FArguments::MinDesiredSlotWidth(pFVar42,pTVar44);
    pTVar44 = TAttribute<float>::TAttribute<float><float>(&local_2e60,&pFVar24->UniformBlockHeight);
    pFVar42 = SUniformWrapPanel::FArguments::MinDesiredSlotHeight(pFVar42,pTVar44);
    pTVar44 = TAttribute<float>::TAttribute<float><float>(&local_2e40,&pFVar24->UniformBlockWidth);
    pFVar42 = SUniformWrapPanel::FArguments::MaxDesiredSlotWidth(pFVar42,pTVar44);
    pTVar44 = TAttribute<float>::TAttribute<float><float>(&local_2e20,&pFVar24->UniformBlockHeight);
    pFVar42 = SUniformWrapPanel::FArguments::MaxDesiredSlotHeight(pFVar42,pTVar44);
    pTVar45 = TAttribute<int>::TAttribute<int><int>(&local_2dc0,&pFVar24->NumColumns);
    pFVar42 = SUniformWrapPanel::FArguments::NumColumnsOverride(pFVar42,pTVar45);
    local_37d4 = 0.0;
    pTVar46 = TAttribute<FMargin>::TAttribute<FMargin><float>(&local_2ce0,&local_37d4);
    pFVar42 = SUniformWrapPanel::FArguments::SlotPadding(pFVar42,pTVar46);
    pTVar47 = MakeTDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>
                        (&local_2fa8,"SUniformWrapPanel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
                         ,0x4e5,&local_386a);
    pTVar47 = TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>::Expose<SUniformWrapPanel>
                        (pTVar47,&this->UniformToolbarPanel);
    pTVar48 = TSlateDecl<SUniformWrapPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar47,&local_30d8,pFVar42);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SUniformWrapPanel>(&local_3520,pTVar48);
    pFVar41 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar41,&local_3520);
    pFVar40 = SVerticalBox::FArguments::operator+(pFVar40,pFVar41);
    pTVar49 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                        (&local_2fd8,"SVerticalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
                         ,0x4df,&local_3869);
    pTVar50 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar49,&local_30e8,pFVar40);
    TSharedPtr<SVerticalBox,1>::TSharedPtr<SVerticalBox,1><SVerticalBox>(&local_33c8,pTVar50);
    pTVar51 = TSharedPtr<SVerticalBox,1>::operator=(&local_3828,&local_33c8);
    TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SVerticalBox>(&local_33d8,pTVar51);
    TSharedPtr<SWidget,1>::operator=(&local_3850,&local_33d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_33d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_33c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2fd8._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3520.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2fa8._Widget.SharedReferenceCount.ReferenceController);
    SUniformWrapPanel::FArguments::~FArguments(&local_c48);
    SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2980);
    SVerticalBox::FArguments::~FArguments(&local_21d0);
    pFVar25 = extraout_RAX_02;
    break;
  case SlimWrappingToolBar:
    pFVar23 = TSharedPtr<FMultiBox,1>::operator->(&this->MultiBox);
    pFVar24 = ISlateStyle::GetWidgetStyle<FToolBarStyle>
                        (pIVar68,pFVar23->StyleName,(char *)0x0,(FToolBarStyle *)0x0);
    fVar79 = *(float *)&(pFVar24->IconSize).field_0x4 + (pFVar24->ButtonStyle).NormalPadding.Top +
             (pFVar24->ButtonStyle).NormalPadding.Bottom;
    pFVar32 = SPrioritizedWrapBox::FArguments::FArguments(&local_19b0);
    local_3718._0_16_ = ZEXT816(0);
    local_3728[4] = true;
    local_3728[8] = true;
    local_3718._16_8_ = 0;
    local_3728._0_4_ = fVar79;
    if ((TAttribute<TOptional<float>_> *)local_3728 != &pFVar32->_MinLineHeight) {
      pfVar33 = TOptional<float>::GetValue((TOptional<float> *)local_3728);
      (pFVar32->_MinLineHeight).Value.TypedValue = *pfVar33;
      (pFVar32->_MinLineHeight).Value.bIsSet = true;
    }
    (pFVar32->_MinLineHeight).bIsSet = local_3728[8];
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar32->_MinLineHeight).Getter,
               &local_3718);
    TAttribute<TOptional<float>_>::~TAttribute<TOptional<float>_>
              ((TAttribute<TOptional<float>_> *)local_3728);
    fVar79 = (pFVar24->BackgroundPadding).Bottom;
    fVar4 = (pFVar24->BackgroundPadding).Top;
    pFVar32->_GroupedWrapping = true;
    pFVar32->_LinePadding = fVar79 + fVar4;
    this_05 = MakeTDecl<SPrioritizedWrapBox,RequiredArgs::T0RequiredArgs>
                        (&local_3020,"SPrioritizedWrapBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
                         ,0x4b5,&local_386e);
    pTVar34 = TSlateDecl<SPrioritizedWrapBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_05,&local_3138,pFVar32);
    TSharedPtr<SPanel,1>::TSharedPtr<SPanel,1><SPrioritizedWrapBox>(&local_3448,pTVar34);
    pTVar35 = TSharedPtr<SPanel,1>::operator=((TSharedPtr<SPanel,1> *)&local_37e8,&local_3448);
    TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SPanel>(&local_3458,pTVar35);
    TSharedPtr<SWidget,1>::operator=(&local_3850,&local_3458);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3458.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3448.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3138.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3020._Widget.SharedReferenceCount.ReferenceController);
    SPrioritizedWrapBox::FArguments::~FArguments(&local_19b0);
    pFVar25 = extraout_RAX;
  }
  local_389c = (uint)pFVar25;
  FVar77.ReferenceController = FStack_38b0.ReferenceController;
LAB_1427e8baa:
  iVar22 = pTVar75->ArrayNum;
  local_389c = local_389c & 0xffffff00;
  local_3840 = 0;
  bVar18 = false;
  local_38c8 = 0;
  uVar78 = 0xffffffff;
  if (0 < iVar22) {
    local_3800 = -1;
    local_3830 = 0;
    uVar76 = local_35d0.SharedReferenceCount.ReferenceController._4_4_;
    do {
      pTVar10 = local_3898;
      lVar61 = local_3800;
      if ((int)uVar78 < (int)local_38c8) {
        lVar61 = local_3800 + 1;
        bVar18 = false;
        uVar78 = uVar78 + 1;
        if ((int)uVar78 < iVar22) {
          lVar73 = lVar61 * 0x10;
          local_3800 = lVar61;
          do {
            uVar72 = 0;
            if ((int)uVar78 < iVar22) {
              uVar72 = ~uVar78 >> 0x1f;
            }
            if ((uVar72 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            plVar5 = *(longlong **)((pTVar10->AllocatorInstance).Data + lVar73);
            if ((bVar18 == false) &&
               (cVar20 = (**(code **)(*plVar5 + 0x20))(plVar5), cVar20 != '\0')) {
              bVar18 = true;
            }
            pTVar75 = local_3898;
            this = local_3658;
            FVar77.ReferenceController = FStack_38b0.ReferenceController;
            uVar76 = local_35d0.SharedReferenceCount.ReferenceController._4_4_;
            if ((char)plVar5[0x15] == '\x05') break;
            iVar22 = pTVar10->ArrayNum;
            uVar78 = uVar78 + 1;
            lVar61 = lVar61 + 1;
            lVar73 = lVar73 + 0x10;
          } while ((int)uVar78 < iVar22);
        }
      }
      local_3800 = lVar61;
      lVar61 = local_3830;
      uVar72 = 0;
      if ((int)local_38c8 < pTVar75->ArrayNum) {
        uVar72 = ~local_38c8 >> 0x1f;
      }
      if ((uVar72 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_3818 = (TReferenceControllerBase<1> *)CONCAT44(local_3818._4_4_,0xffffffff);
      local_3878 = *(SWidget **)((pTVar75->AllocatorInstance).Data + lVar61 * 0x10);
      if (*(char *)&(local_3878->PersistentState).AllottedGeometry.Scale == '\x05') {
        local_3840 = local_3840 + 1;
        if (local_3840 < 2) goto LAB_1427e8d6b;
      }
      else {
        local_3840 = 0;
LAB_1427e8d6b:
        iVar22 = local_38c8 + 1;
        local_3860 = (FToolBarComboButtonBlock *)0x0;
        FStack_3858.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if ((-1 < iVar22) && (iVar22 < pTVar75->ArrayNum)) {
          if ((iVar22 < 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar6 = (pTVar75->AllocatorInstance).Data;
          local_35f8.ReferenceController =
               *(TReferenceControllerBase<1> **)(pFVar6 + (lVar61 + 1) * 0x10 + 8);
          local_3860 = *(FToolBarComboButtonBlock **)(pFVar6 + (lVar61 + 1) * 0x10);
          if (local_35f8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_35f8.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_35f8.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_3600 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_3858,&local_35f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_35f8.ReferenceController);
        }
        pSVar62 = local_3878;
        cVar20 = (**(code **)(local_3878->_padding_ + 0x10))();
        if (cVar20 == '\0') {
          pSVar62 = local_3878;
          cVar20 = (**(code **)(local_3878->_padding_ + 0x18))();
          local_389c = local_389c & 0xff;
          if (cVar20 != '\0') {
            local_389c = 0;
          }
        }
        else {
          local_389c = CONCAT31(local_389c._1_3_,1);
        }
        pFVar11 = local_3860;
        uVar71 = (ulonglong)pSVar62 & 0xffffffffffffff00;
        local_3838 = (FToolBarComboButtonBlock *)CONCAT44(local_3838._4_4_,(int)uVar71);
        local_38a0 = local_38a0 & 0xffffff00;
        if (local_3860 != (FToolBarComboButtonBlock *)0x0) {
          if ((local_3860 == (FToolBarComboButtonBlock *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          cVar20 = (**(code **)(pFVar11->_padding_ + 0x18))(pFVar11);
          local_38a0 = local_38a0 & 0xff;
          if (cVar20 != '\0') {
            local_38a0 = 1;
          }
          uVar71 = (ulonglong)local_3838 & 0xffffffff;
        }
        cVar20 = (char)uVar71;
        if (0 < (int)local_38c8) {
          local_37f8 = (TReferenceControllerBase<1> *)(local_3830 + -1);
          uVar72 = 0;
          if ((int)(local_38c8 - 1) < pTVar75->ArrayNum) {
            uVar72 = ~(local_38c8 - 1) >> 0x1f;
          }
          if ((uVar72 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          cVar21 = (**(code **)(**(longlong **)
                                  ((pTVar75->AllocatorInstance).Data + (longlong)local_37f8 * 0x10)
                               + 0x10))();
          cVar20 = (char)local_3838;
          if (cVar21 != '\0') {
            cVar20 = '\x01';
          }
        }
        if ((char)local_389c != '\0') {
          if (cVar20 == '\0') {
            iVar22 = 1;
            if ((char)local_38a0 != '\0') {
              iVar22 = 2;
            }
          }
          else {
            bVar19 = (char)local_38a0 != '\0';
            local_38a0 = CONCAT31(local_38a0._1_3_,-(char)local_38a0);
            iVar22 = -(uint)bVar19;
          }
          local_3818 = (TReferenceControllerBase<1> *)CONCAT44(local_3818._4_4_,iVar22);
        }
        local_3838 = (FToolBarComboButtonBlock *)0x0;
        local_37f8 = (TReferenceControllerBase<1> *)0x0;
        FVar74.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pFVar11 != (FToolBarComboButtonBlock *)0x0) {
          if ((pFVar11 == (FToolBarComboButtonBlock *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar12.ReferenceController = FStack_3858.ReferenceController;
          FVar74.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if ((char)pFVar11->_padding_ == '\a') {
            if (FStack_3858.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FStack_3858.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FStack_3858.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            FVar74.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            if (pFVar11->bSimpleComboBox != false) {
              if (FStack_3858.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (FStack_3858.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(FStack_3858.ReferenceController)->SharedReferenceCount + 1)
                ;
                UNLOCK();
              }
              local_37f8 = FStack_3858.ReferenceController;
              local_3838 = pFVar11;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              local_38c8 = local_38c8 + 1;
              local_3830 = local_3830 + 1;
              FVar74.ReferenceController = FVar12.ReferenceController;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_3858.ReferenceController);
          }
        }
        if (((((this->DragPreview).BlockName != (FName)0x0) &&
             ((this->DragPreview).BlockType != None)) &&
            ((this->DragPreview).PreviewBlock.Object != (FDropPreviewBlock *)0x0)) &&
           ((uVar72 = (this->DragPreview).InsertIndex, uVar72 != 0xffffffff &&
            (uVar72 == local_38c8)))) {
          local_34a8.Object = local_3838;
          if (FVar74.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar74.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar74.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_32f8.Object = (SPanel *)local_37e8.Object;
          local_32f8.SharedReferenceCount.ReferenceController =
               local_37e8.SharedReferenceCount.ReferenceController;
          if (local_37e8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_37e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_37e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_32e8.Object = local_3828.Object;
          local_32e8.SharedReferenceCount.ReferenceController =
               local_3828.SharedReferenceCount.ReferenceController;
          if (local_3828.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_3828.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_3828.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_32d8.Object = (SHorizontalBox *)local_38b8;
          local_32d8.SharedReferenceCount.ReferenceController = FStack_38b0.ReferenceController;
          if (FVar77.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar77.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar77.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_34a8.SharedReferenceCount.ReferenceController = FVar74.ReferenceController;
          if (((this->DragPreview).PreviewBlock.Object == (FDropPreviewBlock *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          AddBlockWidget(this,(FMultiBlock *)(this->DragPreview).PreviewBlock.Object,&local_32d8,
                         &local_32e8,&local_32f8,None,bVar18,&local_34a8);
        }
        uVar72 = 0;
        if ((int)local_38c8 < local_3898->ArrayNum) {
          uVar72 = ~local_38c8 >> 0x1f;
        }
        if ((uVar72 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (local_3898->AllocatorInstance).Data;
        local_3498.Object = *(FMultiBlock **)(pFVar6 + local_3830 * 0x10);
        local_3498.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar6 + local_3830 * 0x10 + 8);
        if (local_3498.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_3498.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_3498.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
               );
          UNLOCK();
        }
        bVar19 = IsBlockBeingDragged(this,&local_3498);
        if (!bVar19) {
          local_3488.Object = local_3838;
          if (FVar74.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar74.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar74.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_32c8.Object = (SPanel *)local_37e8.Object;
          local_32c8.SharedReferenceCount.ReferenceController =
               local_37e8.SharedReferenceCount.ReferenceController;
          if (local_37e8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_37e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_37e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_32b8.Object = local_3828.Object;
          local_32b8.SharedReferenceCount.ReferenceController =
               local_3828.SharedReferenceCount.ReferenceController;
          if (local_3828.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_3828.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_3828.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_32a8.Object = (SHorizontalBox *)local_38b8;
          local_32a8.SharedReferenceCount.ReferenceController = FStack_38b0.ReferenceController;
          if (FVar77.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar77.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar77.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_3488.SharedReferenceCount.ReferenceController = FVar74.ReferenceController;
          AddBlockWidget(this,(FMultiBlock *)local_3878,&local_32a8,&local_32b8,&local_32c8,
                         (Type)local_3818,bVar18,&local_3488);
        }
        if (local_38c8 == 0) {
          if (((this->MultiBox).Object == (FMultiBox *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((((this->MultiBox).Object)->bHasSearchWidget != false) &&
             (pFVar11 != (FToolBarComboButtonBlock *)0x0)) {
            if ((pFVar11 == (FToolBarComboButtonBlock *)0x0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar19)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (((((char)pFVar11->_padding_ != '\x05') &&
                 (cVar20 = (**(code **)(pFVar11->_padding_ + 0x10))(pFVar11), cVar20 == '\0')) &&
                ((char)pFVar11->_padding_ != '\x03')) &&
               (*(char *)((longlong)&pFVar11->_padding_ + 5) == '\0')) {
              FVar7 = *(FName *)&(local_3878->PersistentState).AllottedGeometry.Size;
              pSVar62 = ::operator_new(0x1d8);
              local_3878 = pSVar62;
              if (pSVar62 == (SWidget *)0x0) {
                pSVar62 = (SWidget *)0x0;
              }
              else {
                *(undefined4 *)&pSVar62->_padding_ = 1;
                *(undefined4 *)((longlong)&pSVar62->_padding_ + 4) = 1;
                pSVar62->_padding_ =
                     (longlong)
                     &
                     ___7__TIntrusiveReferenceController_VFMenuSpacerBlock___00_SharedPointerInternals__6B_
                ;
                local_3288 = (TSharedPtr<FUICommandInfo_const_,1>)ZEXT816(0);
                local_3298.Object = (FUICommandList *)0x0;
                local_3298.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
                FMultiBlock::FMultiBlock
                          ((FMultiBlock *)&pSVar62->_padding_,&local_3288,&local_3298,FVar7,
                           Separator,true);
                pSVar62->_padding_ = (longlong)&___7FMenuSpacerBlock__6B_;
                *(undefined1 *)
                 &(pSVar62->PersistentState).AllottedGeometry.AccumulatedRenderTransform.Trans.
                  field0_0x0 = 0;
                pSVar62 = local_3878;
              }
              TSharedRef<FMenuSpacerBlock,1>::TSharedRef<FMenuSpacerBlock,1>
                        (&local_3478,(FMenuSpacerBlock *)&pSVar62->_padding_,
                         (TReferenceControllerBase<1> *)pSVar62);
              pFVar17 = local_3478.Object;
              local_3648 = (FMultiBlock *)local_3478.Object;
              local_35f0 = local_3478.SharedReferenceCount.ReferenceController;
              if (local_3478.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_3478.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_3478.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_3478.SharedReferenceCount.ReferenceController);
              if (((FMultiBlock *)pFVar17 == (FMultiBlock *)0x0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar19)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              local_3598[0] = (TEnumAsByte<EVisibility::Private>)0x19;
              local_3598[1] = true;
              FStack_3588.DelegateSize = 0;
              local_3590.AccessDetector.State =
                   (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
              FStack_3588.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        (&local_3590,(FWriteAccessScope *)&local_3368);
              local_3350 = &FStack_3588;
              puVar63 = UE::Core::Private::DelegateAllocate(0x38,&FStack_3588);
              uVar72 = local_38a4;
              if (puVar63 != (undefined8 *)0x0) {
                uStack_3880 = 0;
                local_3888 = GetSearchBoxVisibility;
                uStack_387c = uVar76;
                pTVar64 = TSharedFromThis<SWidget,1>::AsShared
                                    ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3278);
                local_3878 = pTVar64->Object;
                local_3818 = (pTVar64->SharedReferenceCount).ReferenceController;
                if (local_3818 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_3818->SharedReferenceCount =
                       (atomic<int>)((int)local_3818->SharedReferenceCount + 1);
                  UNLOCK();
                  LOCK();
                  local_3818->SharedReferenceCount =
                       (atomic<int>)((int)local_3818->SharedReferenceCount + 1);
                  UNLOCK();
                }
                *puVar63 = &
                           ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
                ;
                local_38a4 = uVar72 | 7;
                local_3778 = local_3818;
                local_3650 = local_3818;
                uVar65 = FDelegateHandle::GenerateNewID();
                puVar63[2] = uVar65;
                *puVar63 = &
                           ___7__TBaseSPMethodDelegateInstance__00__CBVSMultiBoxWidget___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
                ;
                puVar63[3] = local_3878;
                puVar63[4] = local_3818;
                if (local_3818 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  local_3818->WeakReferenceCount =
                       (atomic<int>)((int)local_3818->WeakReferenceCount + 1);
                  UNLOCK();
                }
                puVar63[5] = local_3888;
                puVar63[6] = CONCAT44(uStack_387c,uStack_3880);
                uVar72 = uVar72 | 7;
              }
              if ((uVar72 & 4) != 0) {
                uVar72 = uVar72 & 0xfffffffb;
                local_38a4 = uVar72;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_3778);
              }
              if ((uVar72 & 2) != 0) {
                uVar72 = uVar72 & 0xfffffffd;
                local_38a4 = uVar72;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_3650);
              }
              if ((uVar72 & 1) != 0) {
                local_38a4 = uVar72 & 0xfffffffe;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_3278.SharedReferenceCount.ReferenceController);
              }
              if (local_3368.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3368.Accessor,&local_3368);
              }
              pFVar15 = local_3648;
              FMultiBlock::SetVisibilityOverride(local_3648,(TAttribute<EVisibility> *)local_3598);
              FVar74.ReferenceController = local_37f8;
              local_3468.Object = local_3838;
              local_3468.SharedReferenceCount.ReferenceController = local_37f8;
              if (local_37f8 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                local_37f8->SharedReferenceCount =
                     (atomic<int>)((int)local_37f8->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_3268.Object = (SPanel *)local_37e8.Object;
              local_3268.SharedReferenceCount.ReferenceController =
                   local_37e8.SharedReferenceCount.ReferenceController;
              if (local_37e8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_37e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_37e8.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              local_3258.Object = local_3828.Object;
              local_3258.SharedReferenceCount.ReferenceController =
                   local_3828.SharedReferenceCount.ReferenceController;
              if (local_3828.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_3828.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_3828.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              local_3248.Object = (SHorizontalBox *)local_38b8;
              local_3248.SharedReferenceCount.ReferenceController = FStack_38b0.ReferenceController;
              if (FVar77.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (FVar77.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(FVar77.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              if ((pFVar15 == (FMultiBlock *)0x0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x44d,L""), bVar19)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              AddBlockWidget(this,pFVar15,&local_3248,&local_3258,&local_3268,None,bVar18,
                             &local_3468);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_35f0);
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar74.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_3858.ReferenceController);
        lVar61 = local_3830;
        pTVar75 = local_3898;
      }
      iVar22 = pTVar75->ArrayNum;
      local_38c8 = local_38c8 + 1;
      local_3830 = lVar61 + 1;
    } while ((int)local_38c8 < iVar22);
  }
  puVar2 = &(this->FlattenSearchableBlocks).field_0x10;
  local_36d0._padding_._4_4_ = 1;
  pTVar3 = &this->FlattenSearchableBlocks;
  local_36d0._padding_._0_4_ = 0;
  local_36d0.UnvisitedBitMask = 0xffffffff;
  local_36d0.CurrentBitIndex = 0;
  local_36d0.BaseBitIndex = 0;
  local_36d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if (*(int *)&(this->FlattenSearchableBlocks).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_36d0);
  }
  TStack_3558._padding_ = CONCAT44(local_36d0._padding_._4_4_,(undefined4)local_36d0._padding_);
  TStack_3558.CurrentBitIndex = local_36d0.CurrentBitIndex;
  TStack_3558.UnvisitedBitMask = local_36d0.UnvisitedBitMask;
  TStack_3558._28_4_ = local_36d0._28_4_;
  TStack_3558.BaseBitIndex = local_36d0.BaseBitIndex;
  local_3390 = *(int *)&(this->FlattenSearchableBlocks).field_0x8 -
               *(int *)&(this->FlattenSearchableBlocks).field_0x34;
  local_33b8._16_8_ = local_36d0.Array;
  uStack_3538 = CONCAT44(uStack_338c,local_3390);
  TStack_3558.Array = local_36d0.Array;
  local_3560 = pTVar3;
  local_33b8._0_8_ = pTVar3;
  local_33b8._8_8_ = TStack_3558._padding_;
  local_33b8._24_8_ = TStack_3558._16_8_;
  local_33b8._32_8_ = TStack_3558._24_8_;
  pTVar66 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_33b8,
                       (TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                       *(int *)&(this->FlattenSearchableBlocks).field_0x28);
  local_2f70 = pTVar66->_padding_;
  pTVar9 = pTVar66->Array;
  uVar80._0_4_ = pTVar66->UnvisitedBitMask;
  uVar80._4_4_ = pTVar66->CurrentBitIndex;
  uStack_2f58 = *(undefined8 *)&pTVar66->BaseBitIndex;
  pTStack_2f68 = pTVar9;
  local_2f60 = uVar80;
  while( true ) {
    pTVar16 = local_3560;
    if (*(int *)&local_3560->field_0x8 - *(int *)&local_3560->field_0x34 != (int)uStack_3538) {
      local_38a8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_38a8);
    }
    lVar61 = (longlong)TStack_3558.CurrentBitIndex;
    if (((TStack_3558.CurrentBitIndex == uVar80._4_4_) && (TStack_3558.Array == pTVar9)) &&
       (pTVar16 == pTVar3)) break;
    lVar73 = *(longlong *)pTVar16;
    local_3530.Object = *(FMultiBlock **)(lVar73 + lVar61 * 0x28);
    local_3530.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(lVar73 + 8 + lVar61 * 0x28);
    if (local_3530.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3530.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_3530.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar18 = IsBlockBeingDragged(this,&local_3530);
    if (!bVar18) {
      local_3228.Object = (SPanel *)local_37e8.Object;
      local_3228.SharedReferenceCount.ReferenceController =
           local_37e8.SharedReferenceCount.ReferenceController;
      local_3238.Object = (FToolBarComboButtonBlock *)0x0;
      local_3238.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (local_37e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_37e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_37e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_3218.Object = local_3828.Object;
      local_3218.SharedReferenceCount.ReferenceController =
           local_3828.SharedReferenceCount.ReferenceController;
      if (local_3828.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_3828.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_3828.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_3208.Object = (SHorizontalBox *)local_38b8;
      local_3208.SharedReferenceCount.ReferenceController = FStack_38b0.ReferenceController;
      if (FVar77.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar77.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar77.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((*(longlong *)(lVar73 + lVar61 * 0x28) == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      AddBlockWidget(this,*(FMultiBlock **)(lVar73 + lVar61 * 0x28),&local_3208,&local_3218,
                     &local_3228,None,false,&local_3238);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    TStack_3558.UnvisitedBitMask = TStack_3558.UnvisitedBitMask & ~TStack_3558._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3558);
  }
  this_01 = (this->ClippedHorizontalBox).Object;
  if (this_01 != (SClippingHorizontalBox *)0x0) {
    SClippingHorizontalBox::AddWrapButton(this_01);
  }
  this_02 = (this->ClippedVerticalBox).Object;
  if (this_02 != (SClippingVerticalBox *)0x0) {
    SClippingVerticalBox::AddWrapButton(this_02);
  }
  pFVar67 = FStyleDefaults::GetNoBrush();
  uVar81 = _UNK_15090c6d8;
  uVar80 = ___xmm_3f8000003f800000000000003f800000;
  local_3748 = CONCAT22(local_3748._2_2_,2);
  local_3758 = ___xmm_3f8000003f800000000000003f800000;
  uStack_3750 = _UNK_15090c6d8;
  local_37b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (((this->MultiBox).Object == (FMultiBox *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar13 = local_3770;
  if (((this->MultiBox).Object)->Type == Menu) {
    fVar84 = 0.0;
    fVar82 = 0.0;
    fStack_36f4 = __real_41000000;
    fStack_36fc = __real_41000000;
  }
  else {
    pIVar68 = FAppStyle::Get();
    pcVar8 = *(code **)((longlong)*pIVar68 + 0x40);
    ::FName::FName(local_3308,"DefaultForeground");
    puVar63 = (undefined8 *)(*pcVar8)(pIVar68,local_2f28);
    uVar80 = *puVar63;
    uVar81 = puVar63[1];
    local_3748 = *(undefined4 *)(puVar63 + 2);
    pFVar67 = pFVar13;
    fStack_36f4 = fVar85;
    fStack_36fc = fVar83;
    local_3758 = uVar80;
    uStack_3750 = uVar81;
  }
  uVar76 = local_3748;
  pFVar69 = SBorder::FArguments::FArguments(&local_930);
  local_36f0 = 1;
  local_36e8 = (undefined1  [8])0x0;
  pvStack_36e0 = (void *)0x0;
  local_36d8 = 0;
  (pFVar69->_Padding).Value.Left = fVar82;
  (pFVar69->_Padding).Value.Top = fStack_36fc;
  (pFVar69->_Padding).Value.Right = fVar84;
  (pFVar69->_Padding).Value.Bottom = fStack_36f4;
  (pFVar69->_Padding).bIsSet = true;
  local_3700 = fVar82;
  fStack_36f8 = fVar84;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar69->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_36e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_36e8);
  if (pvStack_36e0 != (void *)0x0) {
    FMemory::Free(pvStack_36e0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_36e8);
  local_36a8 = 1;
  local_3690 = 0;
  local_36a0 = (undefined1  [8])0x0;
  pvStack_3698 = (void *)0x0;
  (pFVar69->_BorderImage).Value = pFVar67;
  (pFVar69->_BorderImage).bIsSet = true;
  local_36b0 = pFVar67;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar69->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_36a0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_36a0);
  if (pvStack_3698 != (void *)0x0) {
    FMemory::Free(pvStack_3698);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_36a0);
  uVar14 = local_3748;
  local_3674 = 1;
  local_3660 = 0;
  local_3670 = (undefined1  [8])0x0;
  pvStack_3668 = (void *)0x0;
  *(undefined8 *)&(pFVar69->_ForegroundColor).Value.SpecifiedColor.field0_0x0 = uVar80;
  *(undefined8 *)((longlong)&(pFVar69->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uVar81;
  local_3748._0_1_ = (undefined1)uVar76;
  local_3748._1_1_ = SUB41(uVar76,1);
  local_3748._2_2_ = SUB42(uVar76,2);
  (pFVar69->_ForegroundColor).Value.ColorUseRule = (undefined1)local_3748;
  (pFVar69->_ForegroundColor).Value.ColorTableId = local_3748._1_1_;
  *(undefined2 *)&(pFVar69->_ForegroundColor).Value.field_0x12 = local_3748._2_2_;
  (pFVar69->_ForegroundColor).bIsSet = true;
  local_3748 = uVar14;
  local_3688 = uVar80;
  uStack_3680 = uVar81;
  local_3678 = uVar76;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar69->_ForegroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3670);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3670);
  if (pvStack_3668 != (void *)0x0) {
    FMemory::Free(pvStack_3668);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3670);
  pSVar62 = local_3850.Object;
  if ((local_3850.Object == (SWidget *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar77.ReferenceController = local_3850.SharedReferenceCount.ReferenceController;
  if (local_3850.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3850.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3850.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar62 == (SWidget *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (FVar77.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar77.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar77.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_31f8 = (pFVar69->_Content).Widget.Object;
  pTStack_31f0 = (pFVar69->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar69->_Content).Widget.Object = pSVar62;
  (pFVar69->_Content).Widget.SharedReferenceCount.ReferenceController = FVar77.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_31f0);
  FLLMScope::FLLMScope(local_3808,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_35d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_35c0,&local_35d8,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_3150,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
             ,0x5de,local_3862);
  FMemScope::~FMemScope(&local_35c0);
  FLLMScope::~FLLMScope(local_3808);
  pTVar70 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_3150,&local_31e8,pFVar69);
  local_35e0.ReferenceController = (pTVar70->SharedReferenceCount).ReferenceController;
  local_37b8 = pTVar70->Object;
  if (local_35e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_35e0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_35e0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_35e8 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_37b0,&local_35e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_35e0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_31e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3150._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar77.ReferenceController);
  SBorder::FArguments::~FArguments(&local_930);
  this_03 = local_37b8;
  if ((local_37b8 == (SBorder *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  SWidget::EnableToolTipForceField((SWidget *)this_03,true);
  if ((this_03 == (SBorder *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar77.ReferenceController = local_37b0.ReferenceController;
  if (local_37b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_37b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_37b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_03 == (SBorder *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->_padding_);
  if (FVar77.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar77.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar77.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_31d8 = this->_padding_;
  pTStack_31d0 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)this_03;
  this->_padding_ = (longlong)FVar77.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_31d0);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar77.ReferenceController);
  if (FStack_38b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_38b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_38b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_31c8 = (this->MainHorizontalBox).Object;
  pTStack_31c0 = (this->MainHorizontalBox).SharedReferenceCount.ReferenceController;
  (this->MainHorizontalBox).Object = (SHorizontalBox *)local_38b8;
  (this->MainHorizontalBox).SharedReferenceCount.ReferenceController =
       FStack_38b0.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_31c0);
  if (local_3828.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3828.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3828.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_31b8 = (this->MainVerticalBox).Object;
  pTStack_31b0 = (this->MainVerticalBox).SharedReferenceCount.ReferenceController;
  (this->MainVerticalBox).Object = local_3828.Object;
  (this->MainVerticalBox).SharedReferenceCount.ReferenceController =
       local_3828.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_31b0);
  if (local_37e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_37e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_37e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_31a8 = (this->MainPanelBox).Object;
  pTStack_31a0 = (this->MainPanelBox).SharedReferenceCount.ReferenceController;
  (this->MainPanelBox).Object = (SPanel *)local_37e8.Object;
  (this->MainPanelBox).SharedReferenceCount.ReferenceController =
       local_37e8.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_31a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_37b0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_3730.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_37e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_38b0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3850.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3828.SharedReferenceCount.ReferenceController);
  return;
}

// Construct @ 1427ef2b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SMultiBoxWidget::Construct(SMultiBoxWidget *this,FArguments *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FLinkedBoxManager *pFVar7;
  FLinkedBoxManager *local_78;
  FSharedReferencer<1> local_70;
  FDestructionSentinel local_68;
  TVector2<double>_u_0 local_50;
  undefined1 local_40;
  undefined1 local_38 [8];
  ForAnyElementType FStack_30;
  int local_28;
  
  pTVar6 = ::operator_new(0x88);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pFVar7 = (FLinkedBoxManager *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFLinkedBoxManager___00_SharedPointerInternals__6B_;
    FLinkedBoxManager::FLinkedBoxManager((FLinkedBoxManager *)(pTVar6 + 1));
    pFVar7 = (FLinkedBoxManager *)(pTVar6 + 1);
    if (pFVar7 == (FLinkedBoxManager *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_1427ef3b9;
    }
  }
  if (((pFVar7->_padding_ == 0) || (pFVar7->_padding_ == 0)) ||
     (*(int *)(pFVar7->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar7->_padding_ = (longlong)pFVar7;
    if (pTVar6 != (TReferenceControllerBase<1> *)pFVar7->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar7->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pFVar7->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_1427ef3b9:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = pFVar7;
  local_70.ReferenceController = pTVar6;
  if (&this->LinkedBoxManager != (TSharedPtr<FLinkedBoxManager,1> *)&local_78) {
    (this->LinkedBoxManager).Object = pFVar7;
    local_78 = (FLinkedBoxManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LinkedBoxManager).SharedReferenceCount,&local_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  local_50._s_0.X = (param_1->_ContentScale).Value.field0_0x0._s_0.X;
  local_50._s_0.Y = (param_1->_ContentScale).Value.field0_0x0._s_0.Y;
  local_40 = (param_1->_ContentScale).bIsSet;
  local_28 = 0;
  local_38 = (undefined1  [8])0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *)
             local_38,&(param_1->_ContentScale).Getter);
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->_padding_,(SWidget *)this,
           (TAttribute<UE::Math::TVector2<double>_> *)&local_50._s_0,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_68);
  if ((local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  return;
}

// CreateSearchTextWidget @ 1427ff780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SMultiBoxWidget::CreateSearchTextWidget(SMultiBoxWidget *this)

{
  byte *pbVar1;
  SWidget *pSVar2;
  SSearchBox *pSVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  FSharedReferencer<1> FVar8;
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  FArguments *pFVar13;
  FText *pFVar14;
  undefined8 *puVar15;
  TSharedRef<SWidget,1> *pTVar16;
  ulong64 uVar17;
  FArguments *pFVar18;
  TSharedRef<SWidget_const_,1> *pTVar19;
  FText *pFVar20;
  TIntrusiveReferenceController<FWidgetBlock,1> *pTVar21;
  TIntrusiveReferenceController<FWidgetBlock,1> *pTVar22;
  FMultiBox *pFVar23;
  TReferenceControllerBase<1> *pTVar24;
  undefined4 local_res8;
  undefined4 uStackX_c;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  undefined1 local_a40 [8];
  ForAnyElementType FStack_a38;
  ulonglong local_a30;
  FName local_a28;
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs> local_a20;
  FText local_a08;
  bool local_9f8;
  undefined1 local_9f0 [8];
  ForAnyElementType FStack_9e8;
  ulonglong local_9e0;
  SSearchBox *local_9d8;
  FSharedReferencer<1> local_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined1 local_9b8;
  undefined1 local_9b0 [8];
  ForAnyElementType FStack_9a8;
  ulonglong local_9a0;
  TSharedRef<FMultiBlock_const_,1> local_998;
  FText local_988;
  FMemScope local_978;
  FName local_970;
  FMemScope local_968;
  code *local_960;
  undefined4 uStack_958;
  uint uStack_954;
  TSharedPtr<FUICommandList_const_,1> local_950;
  TSharedRef<FWidgetBlock,1> local_938;
  TSharedRef<SBox,1> local_928;
  FDestructionSentinel local_918;
  FDestructionSentinel local_900;
  FDestructionSentinel local_8e8;
  FDestructionSentinel local_8d0;
  undefined1 *local_8b8;
  FDestructionSentinel local_8b0;
  undefined1 *local_898;
  FDestructionSentinel local_890;
  longlong *local_878;
  TSharedRef<SWidget,1> local_870;
  TSharedRef<SWidget,1> local_860;
  FText local_850;
  TSharedRef<SWidget_const_,1> local_840;
  SWidget *local_830;
  TReferenceControllerBase<1> *pTStack_828;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_820;
  FMenuEntryStyleParams local_808;
  FArguments local_740;
  FArguments local_400;
  
  pTVar22 = (TIntrusiveReferenceController<FWidgetBlock,1> *)0x0;
  local_res8 = 0;
  if (((this->MultiBox).Object == (FMultiBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->MultiBox).Object)->bHasSearchWidget == false) {
    return;
  }
  if (this->bSearchable == false) {
    return;
  }
  pFVar13 = SSearchBox::FArguments::FArguments(&local_400);
  pFVar14 = FText::AsLocalizable_Advanced_LocText
                      (&local_850,L"MultiBox",L"SearchHintStartTyping",L"Start typing to search");
  FText::FText(&local_a08,pFVar14);
  local_9f8 = true;
  local_9e0 = 0;
  local_9f0 = (undefined1  [8])0x0;
  FStack_9e8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar13->_HintText).Value,&local_a08);
  (pFVar13->_HintText).bIsSet = local_9f8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar13->_HintText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9f0,
             (FWriteAccessScope *)&local_918);
  if (((int)local_9e0 != 0) && (FStack_9e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9e8,0,0,0x10);
    local_9e0 = local_9e0 & 0xffffffff00000000;
  }
  if (local_918.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_918.Accessor,&local_918);
  }
  if (FStack_9e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9f0);
  if (local_a08.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a08.TextData.Reference + 0x10))();
  }
  local_a30 = 0;
  local_a40 = (undefined1  [8])0x0;
  FStack_a38.Data = (FScriptContainerElement *)0x0;
  (pFVar13->_SelectAllTextWhenFocused).Value = false;
  (pFVar13->_SelectAllTextWhenFocused).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar13->_SelectAllTextWhenFocused).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a40,
             (FWriteAccessScope *)&local_900);
  if (((int)local_a30 != 0) && (FStack_a38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a38,0,0,0x10);
    local_a30 = local_a30 & 0xffffffff00000000;
  }
  if (local_900.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_900.Accessor,&local_900);
  }
  if (FStack_a38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar13->_OnTextChanged,
             (FWriteAccessScope *)&local_8d0);
  local_8b8 = &(pFVar13->_OnTextChanged).field_0x8;
  puVar15 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_8b8);
  uVar6 = local_988._12_4_;
  if (puVar15 == (undefined8 *)0x0) {
    pTVar24 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
    pTVar21 = pTVar22;
  }
  else {
    pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_870);
    pTVar24 = (pTVar16->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar16->Object;
    if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar17;
    *puVar15 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSMultiBoxWidget___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar15[3] = pSVar2;
    puVar15[4] = pTVar24;
    if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar24->WeakReferenceCount = (atomic<int>)((int)pTVar24->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar15[5] = OnFilterTextChanged;
    puVar15[6] = (ulonglong)(uint)uVar6 << 0x20;
    pTVar21 = (TIntrusiveReferenceController<FWidgetBlock,1> *)&DAT_00000007;
  }
  if (((ulonglong)pTVar21 & 4) != 0) {
    pTVar21 = (TIntrusiveReferenceController<FWidgetBlock,1> *)
              (ulonglong)((uint)pTVar21 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  }
  if (((ulonglong)pTVar21 & 2) != 0) {
    pTVar21 = (TIntrusiveReferenceController<FWidgetBlock,1> *)
              (ulonglong)((uint)pTVar21 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  }
  if (((ulonglong)pTVar21 & 1) != 0) {
    pTVar21 = (TIntrusiveReferenceController<FWidgetBlock,1> *)
              (ulonglong)((uint)pTVar21 & 0xfffffffe);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_870.SharedReferenceCount.ReferenceController);
  }
  if (local_8d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8d0.Accessor,&local_8d0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar13->_OnTextCommitted,
             (FWriteAccessScope *)&local_8b0);
  local_898 = &(pFVar13->_OnTextCommitted).field_0x8;
  puVar15 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_898);
  uVar6 = local_988._12_4_;
  if (puVar15 == (undefined8 *)0x0) {
    pTVar24 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    pTVar16 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_860);
    pTVar24 = (pTVar16->SharedReferenceCount).ReferenceController;
    local_a28 = (FName)pTVar16->Object;
    if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar21 = (TIntrusiveReferenceController<FWidgetBlock,1> *)(ulonglong)((uint)pTVar21 | 0x38);
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar17;
    *puVar15 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSMultiBoxWidget___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar15 + 3) = local_a28;
    puVar15[4] = pTVar24;
    if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar24->WeakReferenceCount = (atomic<int>)((int)pTVar24->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar15[5] = OnFilterTextCommitted;
    puVar15[6] = (ulonglong)(uint)uVar6 << 0x20;
  }
  if (((ulonglong)pTVar21 & 0x20) != 0) {
    pTVar21 = (TIntrusiveReferenceController<FWidgetBlock,1> *)
              (ulonglong)((uint)pTVar21 & 0xffffffdf);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  }
  if (((ulonglong)pTVar21 & 0x10) != 0) {
    pTVar21 = (TIntrusiveReferenceController<FWidgetBlock,1> *)
              (ulonglong)((uint)pTVar21 & 0xffffffef);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  }
  if (((ulonglong)pTVar21 & 8) != 0) {
    pTVar21 = (TIntrusiveReferenceController<FWidgetBlock,1> *)
              (ulonglong)((uint)pTVar21 & 0xfffffff7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_860.SharedReferenceCount.ReferenceController);
  }
  if (local_8b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8b0.Accessor,&local_8b0);
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_a28 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_978,&local_a28,true);
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSearchBox,RequiredArgs::T0RequiredArgs>
            (&local_a20,"SSearchBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
             ,0x41c,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_978);
  FLLMScope::~FLLMScope(local_res18);
  pSVar3 = local_a20._Widget.Object;
  if ((local_a20._Widget.Object == (SSearchBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_a20._Widget.Object,(FSlateBaseNamedArgs *)pFVar13);
  SSearchBox::Construct(local_a20._Widget.Object,pFVar13);
  if ((local_a20._Widget.Object == (SSearchBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((local_a20._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar11 = (**(code **)((local_a20._Widget.Object)->_padding_ + 0x228))(local_a20._Widget.Object);
    bVar12 = 0;
    if (cVar11 == '\0') goto LAB_1427ffcf3;
  }
  bVar12 = 0x20;
LAB_1427ffcf3:
  *(byte *)&(local_a20._Widget.Object)->_padding_ =
       (byte)(local_a20._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_a20._Widget.Object)->_padding_ =
       (byte)(local_a20._Widget.Object)->_padding_ | bVar12;
  if ((local_a20._Widget.Object == (SSearchBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_a20._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_a20._Widget.Object == (SSearchBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar8.ReferenceController = local_a20._Widget.SharedReferenceCount.ReferenceController;
  local_a20._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_a20._Widget.Object = (SSearchBox *)0x0;
  if ((pSVar3 == (SSearchBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_9d8 = pSVar3;
  local_9d0.ReferenceController = FVar8.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->SearchTextWidget != (TSharedPtr<SSearchBox,1> *)&local_9d8) {
    (this->SearchTextWidget).Object = pSVar3;
    local_9d8 = (SSearchBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SearchTextWidget).SharedReferenceCount,&local_9d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9d0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_850.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_850.TextData.Reference + 0x10))();
  }
  SSearchBox::FArguments::~FArguments(&local_400);
  pFVar18 = SBox::FArguments::FArguments(&local_740);
  uVar7 = _UNK_150925098;
  local_9b8 = 1;
  local_9a0 = 0;
  local_9c8 = ___xmm_00000000410000000000000041000000;
  uStack_9c0 = _UNK_150925098;
  local_9b0 = (undefined1  [8])0x0;
  FStack_9a8.Data = (FScriptContainerElement *)0x0;
  uVar6 = _UNK_150925094;
  (pFVar18->_Padding).Value.Left = (float)___xmm_00000000410000000000000041000000;
  uVar9 = _UNK_150925098;
  (pFVar18->_Padding).Value.Top = (float)uVar6;
  _UNK_150925098 = (undefined4)uVar7;
  _UNK_15092509c = SUB84(uVar7,4);
  uVar6 = _UNK_15092509c;
  (pFVar18->_Padding).Value.Right = (float)_UNK_150925098;
  _UNK_150925098 = uVar9;
  (pFVar18->_Padding).Value.Bottom = (float)uVar6;
  (pFVar18->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9b0,
             (FWriteAccessScope *)&local_8e8);
  if (((int)local_9a0 != 0) && (FStack_9a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9a8,0,0,0x10);
    local_9a0 = local_9a0 & 0xffffffff00000000;
  }
  if (local_8e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8e8.Accessor,&local_8e8);
  }
  if (FStack_9a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9b0);
  *(undefined1 *)((longlong)&pFVar18->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar18->_padding_,
             (FWriteAccessScope *)&local_890);
  local_878 = &pFVar18->_padding_;
  puVar15 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_878);
  if (puVar15 == (undefined8 *)0x0) {
    pTVar24 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_954 = local_988._12_4_;
    local_960 = GetSearchBoxVisibility;
    uStack_958 = 0;
    pTVar19 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_840);
    pTVar24 = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar19->Object;
    if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar21 = (TIntrusiveReferenceController<FWidgetBlock,1> *)(ulonglong)((uint)pTVar21 | 0x1c0);
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar17;
    *puVar15 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSMultiBoxWidget___00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar15[3] = pSVar2;
    puVar15[4] = pTVar24;
    if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar24->WeakReferenceCount = (atomic<int>)((int)pTVar24->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar15[5] = local_960;
    puVar15[6] = CONCAT44(uStack_954,uStack_958);
  }
  if ((uint)pTVar21 >> 8 != 0) {
    pTVar21 = (TIntrusiveReferenceController<FWidgetBlock,1> *)
              (ulonglong)((uint)pTVar21 & 0xfffffeff);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  }
  if ((char)pTVar21 < '\0') {
    pTVar21 = (TIntrusiveReferenceController<FWidgetBlock,1> *)
              (ulonglong)((uint)pTVar21 & 0xffffff7f);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  }
  if (((ulonglong)pTVar21 & 0x40) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_840.SharedReferenceCount.ReferenceController);
  }
  if (local_890.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_890.Accessor,&local_890);
  }
  if (((this->SearchTextWidget).Object == (SSearchBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar24 = (this->SearchTextWidget).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->SearchTextWidget).Object;
  if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar3 == (SSearchBox *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_830 = (pFVar18->_Content).Widget.Object;
  pTStack_828 = (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar18->_Content).Widget.Object = (SWidget *)pSVar3;
  (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar24;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_828);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_970 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_968,&local_970,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_820,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
             ,0x423,local_res10);
  FMemScope::~FMemScope(&local_968);
  FLLMScope::~FLLMScope(local_res20);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(&local_820,&local_928,pFVar18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_820._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  SBox::FArguments::~FArguments(&local_740);
  FMenuEntryStyleParams::FMenuEntryStyleParams(&local_808);
  local_808.bNoIndent = false;
  pFVar14 = FText::FText(&local_988);
  pFVar20 = FText::GetEmpty();
  pTVar21 = ::operator_new(0x348);
  if (pTVar21 != (TIntrusiveReferenceController<FWidgetBlock,1> *)0x0) {
    pTVar22 = SharedPointerInternals::TIntrusiveReferenceController<FWidgetBlock,1>::
              TIntrusiveReferenceController<FWidgetBlock,1><TSharedRef<SBox,1>_&,FText_const_&,FText,FMenuEntryStyleParams_&>
                        (pTVar21,&local_928,pFVar20,pFVar14,&local_808);
  }
  TSharedRef<FWidgetBlock,1>::TSharedRef<FWidgetBlock,1>
            (&local_938,(FWidgetBlock *)&pTVar22->ObjectStorage,
             (TReferenceControllerBase<1> *)pTVar22);
  if (local_988.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_988.TextData.Reference + 0x10))();
  }
  *(undefined1 *)((longlong)&(local_938.Object)->_padding_ + 4) = 0;
  pFVar23 = TSharedPtr<FMultiBox,1>::operator->(&this->MultiBox);
  local_998.Object = (FMultiBlock *)local_938.Object;
  local_998.SharedReferenceCount.ReferenceController =
       local_938.SharedReferenceCount.ReferenceController;
  if (local_938.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_938.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_938.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  lVar4 = (local_938.Object)->_padding_;
  pTVar24 = (TReferenceControllerBase<1> *)(local_938.Object)->_padding_;
  if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  if (lVar4 != 0) {
    local_950.Object = ((local_998.Object)->ActionList).Object;
    local_950.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)((longlong)local_998.Object + 0x98);
    if (local_950.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_950.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_950.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TArray<TSharedPtr<FUICommandList_const_,1>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TSharedPtr<FUICommandList_const_,1>_>(&pFVar23->CommandLists,&local_950);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_950.SharedReferenceCount.ReferenceController);
  }
  TArray<TSharedRef<FMultiBlock_const_,1>,TSizedDefaultAllocator<32>_>::Insert
            (&pFVar23->Blocks,&local_998,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_998.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_938.SharedReferenceCount.ReferenceController);
  FMenuEntryStyleParams::~FMenuEntryStyleParams(&local_808);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_928.SharedReferenceCount.ReferenceController);
  return;
}

// FilterMultiBoxEntries @ 1428087e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiBoxWidget::FilterMultiBoxEntries(SMultiBoxWidget *this)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  TMap<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar1;
  undefined1 *puVar2;
  TSharedPtr<SWidget,1> *this_01;
  ulonglong uVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  EVisibility EVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  FSlateApplication *this_02;
  TSharedRef<SWidget,1> *pTVar13;
  FText *pFVar14;
  FString *pFVar15;
  FString *pFVar16;
  size_t sVar17;
  FFlattenSearchableBlockInfo *pFVar18;
  SWidget *pSVar19;
  longlong lVar20;
  wchar_t *pwVar21;
  uint uVar22;
  TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1> *this_03;
  uint uVar23;
  int iVar24;
  int iVar25;
  undefined1 *puVar26;
  int iVar27;
  uint *puVar28;
  uint *puVar29;
  bool local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_234;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_228;
  undefined8 uStack_208;
  FText local_200;
  TSharedPtr<SWidget,1> local_1f0;
  TSharedPtr<SWidget_const_,1> local_1e0;
  TMap<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,0>_>
  *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c8;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  undefined1 local_19c [4];
  TMap<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,0>_>
  *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  uchar local_170 [8];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  uchar local_150 [8];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  uchar local_130 [8];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  TEnumAsByte<EVisibility::Private> local_110;
  undefined1 local_10f;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  TEnumAsByte<EVisibility::Private> local_f0;
  undefined1 local_ef;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  TSharedRef<SWidget,1> local_d0;
  FText local_c0 [2];
  undefined4 local_94;
  undefined4 local_74;
  undefined4 local_54;
  
  this_00 = &this->VisibleFlattenHierarchyTips;
  bVar9 = 1 < (this->VisibleFlattenHierarchyTips).HashSize;
  if (!bVar9) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this_00->Elements,0,
                    *(int *)&(this->VisibleFlattenHierarchyTips).Elements.field_0x8);
  puVar2 = &(this->VisibleFlattenHierarchyTips).Elements.field_0xc;
  *(undefined4 *)&(this->VisibleFlattenHierarchyTips).Elements.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->VisibleFlattenHierarchyTips).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VisibleFlattenHierarchyTips).Elements.field_0x34 = 0;
  iVar11 = *(int *)&(this->VisibleFlattenHierarchyTips).Elements.field_0x2c;
  *(undefined4 *)&(this->VisibleFlattenHierarchyTips).Elements.field_0x28 = 0;
  if ((iVar11 < 0) || (0x80 < iVar11)) {
    *(undefined4 *)&(this->VisibleFlattenHierarchyTips).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->VisibleFlattenHierarchyTips).Elements.field_0x10,0);
  }
  if (bVar9) {
    (this->VisibleFlattenHierarchyTips).HashSize = 1;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  pTVar1 = &this->MultiBoxWidgets;
  pTVar8 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->MultiBoxWidgets).field_0x10;
  bVar9 = FText::IsEmpty(&this->SearchText);
  if (bVar9) {
    iVar11 = *(int *)&(this->MultiBoxWidgets).field_0x28;
    iVar24 = 0;
    iVar25 = 0;
    iVar27 = 0;
    uVar10 = 1;
    TStack_190.CurrentBitIndex = 0;
    if (iVar11 != 0) {
      puVar28 = *(uint **)&(this->MultiBoxWidgets).field_0x20;
      puVar29 = (uint *)pTVar8;
      if (puVar28 != (uint *)0x0) {
        puVar29 = puVar28;
      }
      uVar10 = *puVar29;
      iVar24 = 0;
      iVar27 = iVar25;
      while (uVar10 == 0) {
        lVar20 = (longlong)iVar24;
        iVar27 = iVar27 + 0x20;
        iVar24 = iVar24 + 1;
        uVar10 = 1;
        TStack_190.CurrentBitIndex = iVar11;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_142808940;
        uVar10 = puVar29[lVar20 + 1];
      }
      uVar10 = -uVar10 & uVar10;
      uVar3 = (ulonglong)uVar10 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_res20 = (int)lVar20;
      TStack_190.CurrentBitIndex = local_res20 + -1 + iVar27;
      if (iVar11 < TStack_190.CurrentBitIndex) {
        TStack_190.CurrentBitIndex = iVar11;
      }
    }
LAB_142808940:
    TStack_190._padding_ = CONCAT44(uVar10,iVar24);
    TStack_190.UnvisitedBitMask = 0xffffffff;
    TStack_190._28_4_ = local_94;
    TStack_190.BaseBitIndex = iVar27;
    local_198 = pTVar1;
    TStack_190.Array = pTVar8;
    if (TStack_190.CurrentBitIndex < *(int *)&(this->MultiBoxWidgets).field_0x28) {
      do {
        lVar20 = *(longlong *)local_198;
        lVar12 = (longlong)TStack_190.CurrentBitIndex;
        if ((*(longlong *)(lVar20 + (longlong)TStack_190.CurrentBitIndex * 0x28) == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar4 = *(longlong **)(lVar20 + lVar12 * 0x28);
        local_170[1] = 1;
        local_168 = 0;
        uStack_160 = 0;
        local_170[0] = (uchar)EVisibility::Visible.Value.Value;
        local_158 = 0;
        (**(code **)(*plVar4 + 0x1c8))(plVar4,local_170);
        TStack_190.UnvisitedBitMask = TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
      } while (TStack_190.CurrentBitIndex < (TStack_190.Array)->NumBits);
    }
    iVar24 = 0;
    puVar2 = &(this->FlattenSearchableBlocks).field_0x10;
    iVar11 = *(int *)&(this->FlattenSearchableBlocks).field_0x28;
    iVar27 = 0;
    if (iVar11 == 0) {
LAB_142808acf:
      uVar10 = 1;
    }
    else {
      puVar28 = *(uint **)&(this->FlattenSearchableBlocks).field_0x20;
      if (puVar28 == (uint *)0x0) {
        puVar28 = (uint *)puVar2;
      }
      uVar10 = *puVar28;
      while (uVar10 == 0) {
        lVar20 = (longlong)iVar25;
        iVar24 = iVar24 + 0x20;
        iVar25 = iVar25 + 1;
        iVar27 = iVar11;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_142808acf;
        uVar10 = puVar28[lVar20 + 1];
      }
      uVar10 = -uVar10 & uVar10;
      uVar3 = (ulonglong)uVar10 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_1a8 = (int)lVar20;
      iVar27 = local_1a8 + -1 + iVar24;
      if (iVar11 < iVar27) {
        iVar27 = iVar11;
      }
    }
    uVar23 = *(uint *)&(this->FlattenSearchableBlocks).field_0x28;
    uVar22 = uVar23 & 0xffffffe0;
    TStack_228._padding_ = CONCAT44(uVar10,iVar25);
    TStack_228.CurrentBitIndex = iVar27;
    TStack_228.UnvisitedBitMask = 0xffffffff;
    iVar27 = (int)uVar23 >> 5;
    TStack_228._28_4_ = local_74;
    TStack_228.BaseBitIndex = iVar24;
    uStack_208 = CONCAT44(uStack_234,
                          *(int *)&(this->FlattenSearchableBlocks).field_0x8 -
                          *(int *)&(this->FlattenSearchableBlocks).field_0x34);
    TStack_228.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar23 < 0) || (iVar11 < (int)uVar23)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar10 = *(uint *)&(this->FlattenSearchableBlocks).field_0x28;
    if (uVar23 != uVar10) {
      puVar26 = *(undefined1 **)&(this->FlattenSearchableBlocks).field_0x20;
      if (puVar26 == (undefined1 *)0x0) {
        puVar26 = puVar2;
      }
      uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar27 * 4);
      while (uVar23 == 0) {
        lVar20 = (longlong)iVar27;
        uVar22 = uVar22 + 0x20;
        iVar27 = iVar27 + 1;
        uVar23 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
        goto LAB_142808be0;
        uVar23 = *(uint *)(puVar26 + lVar20 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_1a4 = (int)lVar20;
      uVar23 = (uVar22 - 1) + local_1a4;
      if ((int)uVar10 < (int)uVar23) {
        uVar23 = uVar10;
      }
    }
LAB_142808be0:
    while( true ) {
      if (*(int *)&(this->FlattenSearchableBlocks).field_0x8 -
          *(int *)&(this->FlattenSearchableBlocks).field_0x34 != (int)uStack_208) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((TStack_228.CurrentBitIndex == uVar23) &&
         (TStack_228.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
      lVar20 = *(longlong *)&this->FlattenSearchableBlocks +
               (longlong)TStack_228.CurrentBitIndex * 0x28;
      if ((*(longlong *)
            (*(longlong *)&this->FlattenSearchableBlocks + 0x10 +
            (longlong)TStack_228.CurrentBitIndex * 0x28) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar12 = *(longlong *)(lVar20 + 0x10);
      if ((*(longlong *)(lVar12 + 0x10) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar4 = *(longlong **)(lVar12 + 0x10);
      local_150[1] = 1;
      local_148 = 0;
      uStack_140 = 0;
      local_150[0] = (uchar)EVisibility::Collapsed.Value.Value;
      local_138 = 0;
      (**(code **)(*plVar4 + 0x1c8))(plVar4,local_150);
      EVar7 = EVisibility::Collapsed;
      if ((*(longlong *)(lVar20 + 0x10) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      ((TEnumAsByte<EVisibility::Private> *)(*(longlong *)(lVar20 + 0x10) + 0x20))->Value =
           (uchar)EVar7.Value.Value;
      TStack_228.UnvisitedBitMask = TStack_228.UnvisitedBitMask & ~TStack_228._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_228);
    }
    this_02 = FSlateApplication::Get();
    pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d0);
    pTVar5 = (pTVar13->SharedReferenceCount).ReferenceController;
    pSVar19 = pTVar13->Object;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d0.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d0.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1f0.Object = pSVar19;
    local_1f0.SharedReferenceCount.ReferenceController = pTVar5;
    FSlateApplication::SetUserFocus(this_02,0,&local_1f0,SetDirectly);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  else {
    FlattenSubMenusRecursive(this,5);
    iVar11 = *(int *)&(this->MultiBoxWidgets).field_0x28;
    iVar24 = 0;
    uVar10 = 1;
    TStack_228.BaseBitIndex = 0;
    TStack_1c8.CurrentBitIndex = 0;
    if (iVar11 != 0) {
      puVar28 = *(uint **)&(this->MultiBoxWidgets).field_0x20;
      puVar29 = (uint *)pTVar8;
      if (puVar28 != (uint *)0x0) {
        puVar29 = puVar28;
      }
      uVar23 = *puVar29;
      while (uVar23 == 0) {
        lVar20 = (longlong)iVar24;
        TStack_228.BaseBitIndex = TStack_228.BaseBitIndex + 0x20;
        iVar24 = iVar24 + 1;
        TStack_1c8.CurrentBitIndex = iVar11;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_142808e11;
        uVar23 = puVar29[lVar20 + 1];
      }
      uVar10 = -uVar23 & uVar23;
      uVar3 = (ulonglong)uVar10 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_1a0 = (int)lVar20;
      TStack_1c8.CurrentBitIndex = local_1a0 + -1 + TStack_228.BaseBitIndex;
      if (iVar11 < TStack_1c8.CurrentBitIndex) {
        TStack_1c8.CurrentBitIndex = iVar11;
      }
    }
LAB_142808e11:
    TStack_228._padding_ = CONCAT44(uVar10,iVar24);
    TStack_228.CurrentBitIndex = TStack_1c8.CurrentBitIndex;
    TStack_228.UnvisitedBitMask = 0xffffffff;
    TStack_1c8._padding_ = TStack_228._padding_;
    TStack_228._28_4_ = local_54;
    TStack_1c8.BaseBitIndex = TStack_228.BaseBitIndex;
    TStack_1c8._28_4_ = local_54;
    TStack_1c8.UnvisitedBitMask = 0xffffffff;
    TStack_228.Array = pTVar8;
    local_1d0 = pTVar1;
    if (TStack_1c8.CurrentBitIndex < *(int *)&(this->MultiBoxWidgets).field_0x28) {
      do {
        pTVar1 = local_1d0;
        iVar11 = *(int *)(*(longlong *)local_1d0 + 0x18 +
                         (longlong)TStack_1c8.CurrentBitIndex * 0x28);
        lVar20 = *(longlong *)local_1d0 + (longlong)TStack_1c8.CurrentBitIndex * 0x28;
        TStack_1c8.Array = pTVar8;
        if (iVar11 == 0) {
          pFVar14 = FText::GetEmpty();
        }
        else {
          uVar10 = 0;
          if ((int)(iVar11 - 1U) < iVar11) {
            uVar10 = ~(iVar11 - 1U) >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          pFVar14 = (FText *)((longlong)(*(int *)(lVar20 + 0x18) + -1) * 0x10 +
                             *(longlong *)(lVar20 + 0x10));
        }
        local_200.TextData.Reference = (pFVar14->TextData).Reference;
        if (local_200.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_200.TextData.Reference + 8))
                    (local_200.TextData.Reference,local_19c);
        }
        local_200.Flags = pFVar14->Flags;
        this_01 = (TSharedPtr<SWidget,1> *)
                  (*(longlong *)pTVar1 + (longlong)TStack_1c8.CurrentBitIndex * 0x28);
        if (this_01->Object != (this->SearchBlockWidget).Object) {
          bVar9 = FText::IsEmpty(&local_200);
          if (bVar9) {
            if (this_01->Object == (SWidget *)0x0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L"");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            local_130[1] = 1;
            local_128 = 0;
            uStack_120 = 0;
            local_130[0] = (uchar)EVisibility::Collapsed.Value.Value;
            local_118 = 0;
            (**(code **)(this_01->Object->_padding_ + 0x1c8))(this_01->Object,local_130);
          }
          else {
            pFVar15 = FText::ToString(&local_200);
            pFVar16 = FText::ToString(&this->SearchText);
            if ((pFVar16->Data).ArrayNum == 0) {
              pwVar21 = L"";
LAB_142808fec:
              sVar17 = wcslen(pwVar21);
              iVar11 = ::FString::Find(pFVar15,pwVar21,(int)sVar17,IgnoreCase,FromStart,-1);
            }
            else {
              pwVar21 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
              if ((FScriptContainerElement *)pwVar21 != (FScriptContainerElement *)0x0)
              goto LAB_142808fec;
              iVar11 = -1;
            }
            pTVar5 = (this_01->SharedReferenceCount).ReferenceController;
            EVar7.Value.Value = EVisibility::Collapsed.Value.Value;
            if (iVar11 != -1) {
              EVar7.Value.Value = EVisibility::Visible.Value.Value;
            }
            local_1e0.Object = this_01->Object;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            uVar10 = ((uint)((ulonglong)local_1e0.Object >> 0x14) & 0xffff ^
                     (uint)((ulonglong)local_1e0.Object >> 4)) * -0x7a143595;
            uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
            local_1e0.SharedReferenceCount.ReferenceController = pTVar5;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            iVar11 = TSet<TTuple<TSharedPtr<SWidget,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<TSharedPtr<SWidget_const_,1>_>
                               ((TSet<TTuple<TSharedPtr<SWidget,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,0>,FDefaultSetAllocator>
                                 *)&this->FlattenSearchableWidgets,uVar10 >> 0x10 ^ uVar10,
                                &local_1e0);
            if (iVar11 == -1) {
              lVar20 = 0;
            }
            else {
              lVar20 = *(longlong *)&this->FlattenSearchableWidgets + (longlong)iVar11 * 0x28;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            this_03 = (TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1> *)(lVar20 + 0x10);
            if (lVar20 == 0) {
              this_03 = (TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1> *)0x0;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            if (this_03 == (TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1> *)0x0) {
              pSVar19 = TSharedPtr<SWidget,1>::operator->(this_01);
              local_ef = 1;
              local_e8 = 0;
              uStack_e0 = 0;
              local_d8 = 0;
              local_f0 = EVar7.Value.Value;
              (**(code **)(pSVar19->_padding_ + 0x1c8))(pSVar19,&local_f0);
            }
            else {
              pFVar18 = TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>::operator->
                                  (this_03);
              pSVar19 = TSharedPtr<SWidget,1>::operator->(&pFVar18->Widget);
              local_10f = 1;
              local_108 = 0;
              uStack_100 = 0;
              local_f8 = 0;
              local_110 = EVar7.Value.Value;
              (**(code **)(pSVar19->_padding_ + 0x1c8))(pSVar19,&local_110);
              pFVar18 = TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>::operator->
                                  (this_03);
              (pFVar18->HierarchyTipVisibility).Value.Value = (uchar)EVar7.Value.Value;
              if (EVar7.Value.Value == EVisibility::Visible.Value.Value) {
                local_res10[0] = false;
                pFVar18 = TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>::operator->
                                    (this_03);
                pFVar14 = UE::MultiBoxUtils::GetSearchHierarchyInfoText
                                    (local_c0,&pFVar18->SearchableTextHierarchyComponents);
                pFVar15 = FText::ToString(pFVar14);
                iVar11 = (pFVar15->Data).ArrayNum;
                if (iVar11 == 0) {
                  pwVar21 = L"";
                  iVar11 = 0;
                }
                else {
                  pwVar21 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
                  iVar11 = iVar11 + -1;
                }
                uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar21);
                TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                FindOrAddByHash<FString_const_&>(this_00,uVar10,pFVar15,local_res10);
                if (local_c0[0].TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_c0[0].TextData.Reference + 0x10))();
                }
                EVar7.Value.Value = EVisibility::Collapsed.Value.Value;
                if (local_res10[0] != false) {
                  pFVar18 = TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>::operator->
                                      (this_03);
                  (pFVar18->HierarchyTipVisibility).Value.Value = (uchar)EVar7.Value.Value;
                }
              }
            }
          }
        }
        if (local_200.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_200.TextData.Reference + 0x10))();
        }
        TStack_1c8.UnvisitedBitMask = TStack_1c8.UnvisitedBitMask & ~TStack_1c8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c8);
        pTVar8 = TStack_1c8.Array;
      } while (TStack_1c8.CurrentBitIndex < (TStack_1c8.Array)->NumBits);
    }
  }
  return;
}

// FlattenSubMenusRecursive @ 142809f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiBoxWidget::FlattenSubMenusRecursive(SMultiBoxWidget *this,uint param_1)

{
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  TMap<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,0>_>
  *pTVar3;
  longlong *plVar4;
  ulonglong uVar5;
  SSearchBox *pSVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar11;
  SWidget *pSVar12;
  TMap<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar13;
  TMap<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,0>_>
  *pTVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  FString *pFVar21;
  FText *pFVar22;
  SMenuEntryBlock *this_00;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar23;
  TReferenceControllerBase<1> *pTVar24;
  wchar_t *pwVar25;
  longlong lVar26;
  TReferenceControllerBase<1> *pTVar27;
  FScriptContainerElement *pFVar28;
  uint uVar29;
  uint uVar30;
  undefined1 *puVar32;
  uint *puVar33;
  TReferenceControllerBase<1> *pTVar34;
  uint uVar35;
  undefined1 local_res8 [8];
  uint local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  ForAnyElementType local_2d8;
  int local_2d0;
  int local_2cc;
  TMap<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,0>_>
  *local_2c8;
  undefined8 uStack_2c0;
  TBitArray<FDefaultBitArrayAllocator> *local_2b8;
  uint uStack_2b0;
  uint uStack_2ac;
  uint local_2a8;
  undefined4 uStack_2a4;
  int iStack_2a0;
  undefined4 uStack_29c;
  FText local_298;
  TArray<FText,TSizedDefaultAllocator<32>_> *local_288;
  TReferenceControllerBase<1> *pTStack_280;
  ulonglong local_278;
  int local_270;
  TReferenceControllerBase<1> *local_268;
  TBitArray<FDefaultBitArrayAllocator> *local_260;
  longlong local_258;
  TReferenceControllerBase<1> *local_250;
  TSharedRef<SWidget,1> local_248;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_238;
  undefined1 local_218 [4];
  undefined1 local_214 [20];
  TReferenceControllerBase<1> *local_200;
  TReferenceControllerBase<1> *local_1f8;
  TSharedPtr<SMenuEntryBlock,1> local_1f0;
  FText local_1e0;
  int local_1d0;
  TMap<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,0>_>
  *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c0;
  undefined1 local_1a0 [8];
  TMap<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,0>_>
  *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  undefined8 uStack_170;
  TMap<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,0>_>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  TSharedPtr<SVerticalBox,1> local_138;
  TSharedPtr<SHorizontalBox,1> local_128;
  longlong *local_118;
  TArray<FText,TSizedDefaultAllocator<32>_> **local_110;
  TSharedPtr<FMultiBlock_const_,1> local_108;
  TSharedPtr<SPanel,1> local_f8;
  FString local_e8;
  FString local_d8;
  TSharedPtr<FToolBarComboButtonBlock_const_,1> local_c8 [2];
  undefined4 local_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_98;
  undefined4 local_5c;
  TReferenceControllerBase<1> *pTVar31;
  TReferenceControllerBase<1> *pTVar36;
  
  pTVar31 = (TReferenceControllerBase<1> *)0x0;
  uVar30 = 0;
  uVar35 = 0;
  local_res20 = 0;
  if (((this->bDidFlattenSearchableBlocks == false) && (this->bSearchable != false)) &&
     (param_1 != 0)) {
    local_2c8 = &this->MultiBoxWidgets;
    local_2b8 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->MultiBoxWidgets).field_0x10;
    this->bDidFlattenSearchableBlocks = true;
    pTVar36 = _UNK_150651568;
    pTVar10 = ___xmm_00000000000000000000000000000010;
    uVar20 = *(uint *)&(this->MultiBoxWidgets).field_0x28;
    local_278 = 1;
    pTVar24 = pTVar31;
    uVar16 = 1;
    uVar29 = uVar35;
    local_2a8 = uVar35;
    if (uVar20 != 0) {
      puVar33 = *(uint **)&(this->MultiBoxWidgets).field_0x20;
      pTVar24 = (TReferenceControllerBase<1> *)(ulonglong)uVar20;
      if (puVar33 == (uint *)0x0) {
        puVar33 = (uint *)local_2b8;
      }
      uVar16 = *puVar33;
      pTVar27 = pTVar31;
      pTVar34 = pTVar31;
      local_2a8 = uVar30;
      uVar29 = uVar30;
      while (uVar16 == 0) {
        uVar9._4_4_ = (int)pTVar27;
        local_2a8 = (int)pTVar34 + 0x20;
        pTVar34 = (TReferenceControllerBase<1> *)(ulonglong)local_2a8;
        uVar29 = uVar9._4_4_ + 1;
        pTVar27 = (TReferenceControllerBase<1> *)(ulonglong)uVar29;
        uVar16 = 1;
        if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar29)
        goto LAB_14280a01d;
        uVar16 = puVar33[(longlong)uVar9._4_4_ + 1];
      }
      uVar16 = -uVar16 & uVar16;
      uVar5 = (ulonglong)uVar16 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      local_1d0 = (int)lVar26;
      uVar17 = (local_2a8 - 1) + local_1d0;
      if ((int)uVar20 < (int)uVar17) {
        uVar17 = uVar20;
      }
      pTVar24 = (TReferenceControllerBase<1> *)(ulonglong)uVar17;
    }
LAB_14280a01d:
    uStack_2c0 = CONCAT44(uVar16,uVar29);
    uStack_2ac = (uint)pTVar24;
    uStack_2b0 = 0xffffffff;
    uStack_2a4 = local_9c;
    TStack_1c0._padding_ = uStack_2c0;
    TStack_1c0.BaseBitIndex = local_2a8;
    TStack_1c0._28_4_ = local_9c;
    TStack_1c0.UnvisitedBitMask = 0xffffffff;
    TStack_1c0.CurrentBitIndex = uStack_2ac;
    local_res10 = param_1;
    local_1c8 = local_2c8;
    TStack_1c0.Array = local_2b8;
    if ((int)uStack_2ac < (int)uVar20) {
      do {
        plVar4 = (longlong *)(*(longlong *)local_1c8 + (longlong)(int)pTVar24 * 0x28);
        local_2d8.Data = (FScriptContainerElement *)0x0;
        uVar9._4_4_ = (int)plVar4[3];
        pFVar22 = (FText *)plVar4[2];
        local_2d0 = uVar9._4_4_;
        if (uVar9._4_4_ == 0) {
          local_2cc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,uVar9._4_4_,0,&local_2d8,uVar9._4_4_,&local_2cc);
          ConstructItems<FText,FText,int>(local_2d8.Data,pFVar22,uVar9._4_4_);
        }
        if ((*plVar4 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar21 = SWidget::GetTypeAsString((SWidget *)*plVar4,&local_e8);
        if ((pFVar21->Data).ArrayNum == 0) {
          pwVar25 = L"";
        }
        else {
          pwVar25 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
        }
        uVar9._4_4_ = FGenericPlatformStricmp::Stricmp(pwVar25,L"SMenuEntryBlock");
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (uVar9._4_4_ == 0) {
          if (local_2d0 == 0) {
            pFVar22 = FText::GetEmpty();
          }
          else {
            uVar20 = uVar35;
            if ((int)(local_2d0 - 1U) < local_2d0) {
              uVar20 = ~(local_2d0 - 1U) >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar22 = (FText *)(local_2d8.Data + (longlong)(local_2d0 + -1) * 0x10);
          }
          local_298.TextData.Reference = (pFVar22->TextData).Reference;
          if (local_298.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_298.TextData.Reference + 8))
                      (local_298.TextData.Reference,local_1a0);
          }
          local_298.Flags = pFVar22->Flags;
          bVar15 = FText::IsEmpty(&local_298);
          if (!bVar15) {
            pTVar24 = (TReferenceControllerBase<1> *)plVar4[1];
            pTVar27 = (TReferenceControllerBase<1> *)(*plVar4 + -8);
            if (*plVar4 == 0) {
              pTVar27 = pTVar31;
            }
            if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_1f8 = pTVar24;
            if ((pTVar27 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar15)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_268 = *(TReferenceControllerBase<1> **)&pTVar27[0x2c].SharedReferenceCount;
            lVar26 = pTVar27[0x2c]._padding_;
            if (local_268 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_268->SharedReferenceCount =
                   (atomic<int>)((int)local_268->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((lVar26 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar15)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((((*(char *)(lVar26 + 0xbc) != '\0') && (*(char *)(lVar26 + 0xa8) == '\x04')) &&
                (*(char *)(lVar26 + 0x2b8) != '\0')) && (*(char *)(lVar26 + 0x2b9) != '\0')) {
              if (*plVar4 == 0) {
                local_1f0.Object = (SMenuEntryBlock *)0x0;
              }
              else {
                local_1f0.Object = (SMenuEntryBlock *)(*plVar4 + -8);
              }
              pTVar27 = (TReferenceControllerBase<1> *)plVar4[1];
              if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar27->SharedReferenceCount =
                     (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_1f0.SharedReferenceCount.ReferenceController = pTVar27;
              this_00 = TSharedPtr<SMenuEntryBlock,1>::operator->(&local_1f0);
              SMenuEntryBlock::MakeNewMenuWidget(this_00,&local_248);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar27);
              pFVar21 = SWidget::GetTypeAsString(local_248.Object,&local_d8);
              if ((pFVar21->Data).ArrayNum == 0) {
                pwVar25 = L"";
              }
              else {
                pwVar25 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
              }
              uVar9._4_4_ = FGenericPlatformStricmp::Stricmp(pwVar25,L"SMultiBoxWidget");
              if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d8.Data.AllocatorInstance.Data);
              }
              pSVar12 = local_248.Object;
              if (uVar9._4_4_ == 0) {
                local_200 = local_248.SharedReferenceCount.ReferenceController;
                if (local_248.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_248.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                FlattenSubMenusRecursive((SMultiBoxWidget *)local_248.Object,local_res10 - 1);
                puVar2 = &((TMap<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,0>_>
                            *)((longlong)pSVar12 + 0x360))->field_0x10;
                local_238._padding_._4_4_ = (undefined4)local_278;
                local_238._padding_._0_4_ = 0;
                local_238.UnvisitedBitMask = 0xffffffff;
                local_238.CurrentBitIndex = 0;
                local_238.BaseBitIndex = 0;
                local_238.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
                if (*(int *)&((TMap<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,0>_>
                               *)((longlong)pSVar12 + 0x360))->field_0x28 != 0) {
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_238);
                }
                uStack_2c0 = CONCAT44(local_238._padding_._4_4_,(undefined4)local_238._padding_);
                uStack_2ac = local_238.CurrentBitIndex;
                uStack_2b0 = local_238.UnvisitedBitMask;
                uStack_2a4 = local_238._28_4_;
                local_2a8 = local_238.BaseBitIndex;
                iStack_2a0 = *(int *)&((TMap<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,0>_>
                                        *)((longlong)pSVar12 + 0x360))->field_0x8 -
                             *(int *)&((TMap<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,0>_>
                                        *)((longlong)pSVar12 + 0x360))->field_0x34;
                local_2b8 = local_238.Array;
                uStack_170 = CONCAT44(uStack_29c,iStack_2a0);
                TStack_190.Array = local_238.Array;
                local_2c8 = (TMap<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,0>_>
                             *)((longlong)pSVar12 + 0x360);
                local_198 = (TMap<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,0>_>
                             *)((longlong)pSVar12 + 0x360);
                TStack_190._padding_ = uStack_2c0;
                TStack_190._16_8_ = _uStack_2b0;
                TStack_190._24_8_ = _local_2a8;
                pTVar23 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                          TConstSetBitIterator<FDefaultBitArrayAllocator>
                                    (&local_98,(TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                                     *(int *)&((TMap<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,0>_>
                                                *)((longlong)pSVar12 + 0x360))->field_0x28);
                uStack_2c0 = pTVar23->_padding_;
                local_2b8 = pTVar23->Array;
                uVar9._0_4_ = pTVar23->UnvisitedBitMask;
                uVar9._4_4_ = pTVar23->CurrentBitIndex;
                local_2a8 = pTVar23->BaseBitIndex;
                uStack_2a4 = *(undefined4 *)&pTVar23->field_0x1c;
                local_270 = uVar9._4_4_;
                _uStack_2b0 = uVar9;
                local_260 = local_2b8;
                while( true ) {
                  pTVar13 = local_198;
                  if (*(int *)&local_198->field_0x8 - *(int *)&local_198->field_0x34 !=
                      (int)uStack_170) {
                    local_res8[0] = 0;
                    `TSparseArray<TSparseSetElement<TTuple<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
                  }
                  if (((TStack_190.CurrentBitIndex == uVar9._4_4_) &&
                      (TStack_190.Array == local_260)) &&
                     (pTVar13 ==
                      (TMap<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,0>_>
                       *)((longlong)pSVar12 + 0x360))) break;
                  plVar4 = (longlong *)
                           (*(longlong *)pTVar13 + (longlong)TStack_190.CurrentBitIndex * 0x28);
                  pTVar1 = (TArray<FText,TSizedDefaultAllocator<32>_> *)(plVar4 + 2);
                  UE::MultiBoxUtils::GetBlockWidgetDisplayText(&local_1e0,pTVar1);
                  bVar15 = FText::IsEmpty(&local_1e0);
                  if (bVar15) {
LAB_14280a4e8:
                    bVar15 = true;
                  }
                  else {
                    local_214._12_8_ =
                         (((TSharedPtr<SSearchBox,1> *)((longlong)pSVar12 + 0x4f8))->
                         SharedReferenceCount).ReferenceController;
                    local_res20 = local_res20 | 1;
                    pSVar6 = ((TSharedPtr<SSearchBox,1> *)((longlong)pSVar12 + 0x4f8))->Object;
                    if ((TReferenceControllerBase<1> *)local_214._12_8_ !=
                        (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      ((TReferenceControllerBase<1> *)local_214._12_8_)->SharedReferenceCount =
                           (atomic<int>)
                           ((int)((TReferenceControllerBase<1> *)local_214._12_8_)->
                                 SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    if ((SSearchBox *)*plVar4 == pSVar6) goto LAB_14280a4e8;
                    bVar15 = false;
                  }
                  if ((local_res20 & 1) != 0) {
                    local_res20 = local_res20 & 0xfffffffe;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)local_214._12_8_);
                  }
                  if (!bVar15) {
                    pTVar24 = (TReferenceControllerBase<1> *)plVar4[1];
                    pTVar27 = (TReferenceControllerBase<1> *)(*plVar4 + -8);
                    if (*plVar4 == 0) {
                      pTVar27 = pTVar31;
                    }
                    if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      pTVar24->SharedReferenceCount =
                           (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    if ((pTVar27 == (TReferenceControllerBase<1> *)0x0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    local_258 = pTVar27[0x2c]._padding_;
                    local_250 = *(TReferenceControllerBase<1> **)&pTVar27[0x2c].SharedReferenceCount
                    ;
                    if (local_250 != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      local_250->SharedReferenceCount =
                           (atomic<int>)((int)local_250->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar24);
                    if ((local_258 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    if (*(char *)(local_258 + 0xbc) != '\0') {
                      pTVar24 = ::operator_new(0x38);
                      if (pTVar24 == (TReferenceControllerBase<1> *)0x0) {
                        local_288 = pTVar10;
                        pTStack_280 = pTVar36;
                        pTVar24 = pTVar31;
                      }
                      else {
                        pTVar24->SharedReferenceCount = SUB84(local_278,0);
                        pTVar24->WeakReferenceCount = SUB84(local_278,0);
                        pTVar24->_padding_ =
                             (longlong)
                             &
                             ___7__TIntrusiveReferenceController_UFFlattenSearchableBlockInfo_SMultiBoxWidget___00_SharedPointerInternals__6B_
                        ;
                        *(undefined4 *)((longlong)&pTVar24[3]._padding_ + 1) = 0;
                        *(undefined2 *)((longlong)&pTVar24[3]._padding_ + 5) = 0;
                        *(undefined1 *)((longlong)&pTVar24[3]._padding_ + 7) = 0;
                        pTVar24[1]._padding_ = 0;
                        pTVar24[1].SharedReferenceCount = (atomic<int>)0x0;
                        pTVar24[1].WeakReferenceCount = (atomic<int>)0x0;
                        pTVar24[2]._padding_ = 0;
                        pTVar24[2].SharedReferenceCount = (atomic<int>)0x0;
                        pTVar24[2].WeakReferenceCount = (atomic<int>)0x0;
                        *(TEnumAsByte<EVisibility::Private> *)&pTVar24[3]._padding_ =
                             EVisibility::Collapsed.Value.Value;
                        if (((TArray<FText,TSizedDefaultAllocator<32>_> *)(pTVar24 + 1) ==
                             (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0) &&
                           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                               ("InObject != nullptr",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                ,0x246,L""), bVar15)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        LOCK();
                        pTVar24->SharedReferenceCount =
                             (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
                        UNLOCK();
                        uVar9._4_4_ = local_270;
                        local_288 = (TArray<FText,TSizedDefaultAllocator<32>_> *)(pTVar24 + 1);
                        pTStack_280 = pTVar24;
                      }
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar24);
                      if ((local_288 == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar15)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      pTVar11 = local_288;
                      pFVar22 = (FText *)(local_288->AllocatorInstance).Data;
                      if (((pFVar22 <= &local_298) && (&local_298 < pFVar22 + local_288->ArrayMax))
                         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x7a5,
                                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                ), bVar15)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      iVar18 = pTVar11->ArrayNum;
                      if (iVar18 == pTVar11->ArrayMax) {
                        iVar18 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x810,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
                      }
                      pTVar11->ArrayNum = iVar18 + 1;
                      pFVar28 = (pTVar11->AllocatorInstance).Data + (longlong)iVar18 * 0x10;
                      *(undefined8 *)pFVar28 = 0;
                      *(ITextData **)pFVar28 = local_298.TextData.Reference;
                      if (local_298.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*local_298.TextData.Reference + 8))
                                  (local_298.TextData.Reference,local_218);
                      }
                      *(uint *)(pFVar28 + 8) = local_298.Flags;
                      if ((local_288 == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar15)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      pTVar11 = local_288;
                      if ((local_288 == pTVar1) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(void*)this != (void*)&Source",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x96e,L""), bVar15)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      iVar18 = (int)plVar4[3];
                      if (iVar18 != 0) {
                        iVar19 = UE::Core::Private::
                                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x10,8,iVar18,&pTVar11->AllocatorInstance,
                                            &pTVar11->ArrayNum,&pTVar11->ArrayMax);
                        ConstructItems<FText,FText,int>
                                  ((pTVar11->AllocatorInstance).Data + (longlong)iVar19 * 0x10,
                                   (FText *)(pTVar1->AllocatorInstance).Data,iVar18);
                      }
                      local_118 = &local_258;
                      local_110 = &local_288;
                      TSet<TTuple<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,0>,FDefaultSetAllocator>
                      ::
                      Emplace<TPairInitializer<TSharedPtr<FMultiBlock_const_,1>_&,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>_&&>_>
                                ((TSet<TTuple<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>,0>,FDefaultSetAllocator>
                                  *)&this->FlattenSearchableBlocks,
                                 (TPairInitializer<TSharedPtr<FMultiBlock_const_,1>_&,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>_&&>
                                  *)local_214,(bool *)&local_118);
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTStack_280);
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(local_250);
                  }
                  if (local_1e0.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_1e0.TextData.Reference + 0x10))();
                  }
                  TStack_190.UnvisitedBitMask =
                       TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_200);
                pTVar24 = local_1f8;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_248.SharedReferenceCount.ReferenceController);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_268);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar24);
          }
          if (local_298.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
          }
        }
        DestructItems<FText,int>((FText *)local_2d8.Data,local_2d0);
        if ((FText *)local_2d8.Data != (FText *)0x0) {
          FMemory::Free(local_2d8.Data);
        }
        TStack_1c0.UnvisitedBitMask = TStack_1c0.UnvisitedBitMask & ~TStack_1c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c0);
        pTVar24 = (TReferenceControllerBase<1> *)(ulonglong)(uint)TStack_1c0.CurrentBitIndex;
      } while (TStack_1c0.CurrentBitIndex < (TStack_1c0.Array)->NumBits);
    }
    local_2b8 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->FlattenSearchableBlocks).field_0x10;
    uVar20 = *(uint *)&(this->FlattenSearchableBlocks).field_0x28;
    pTVar3 = &this->FlattenSearchableBlocks;
    uStack_2ac = uVar30;
    if (uVar20 != 0) {
      puVar33 = *(uint **)&(this->FlattenSearchableBlocks).field_0x20;
      if (puVar33 == (uint *)0x0) {
        puVar33 = (uint *)local_2b8;
      }
      uVar16 = *puVar33;
      pTVar36 = pTVar31;
      uVar35 = uVar30;
      while (uVar16 == 0) {
        uVar9._4_4_ = (int)pTVar36;
        uVar30 = (int)pTVar31 + 0x20;
        pTVar31 = (TReferenceControllerBase<1> *)(ulonglong)uVar30;
        uVar35 = uVar9._4_4_ + 1;
        pTVar36 = (TReferenceControllerBase<1> *)(ulonglong)uVar35;
        uStack_2ac = uVar20;
        if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar35)
        goto LAB_14280a95f;
        uVar16 = puVar33[(longlong)uVar9._4_4_ + 1];
      }
      local_278 = (ulonglong)(-uVar16 & uVar16);
      uVar5 = local_278 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      local_214._4_4_ = (undefined4)lVar26;
      uStack_2ac = (uVar30 - 1) + local_214._4_4_;
      if ((int)uVar20 < (int)uStack_2ac) {
        uStack_2ac = uVar20;
      }
    }
LAB_14280a95f:
    uVar20 = *(uint *)&(this->FlattenSearchableBlocks).field_0x28;
    puVar2 = &(this->FlattenSearchableBlocks).field_0x10;
    uVar16 = uVar20 & 0xffffffe0;
    iStack_2a0 = *(int *)&(this->FlattenSearchableBlocks).field_0x8 -
                 *(int *)&(this->FlattenSearchableBlocks).field_0x34;
    uStack_2b0 = 0xffffffff;
    local_res20 = -1 << ((byte)uVar20 & 0x1f);
    uStack_2c0 = CONCAT44((int)local_278,uVar35);
    uStack_2a4 = local_5c;
    local_2a8 = uVar30;
    uVar9._4_4_ = (int)uVar20 >> 5;
    uStack_140 = CONCAT44(uStack_29c,iStack_2a0);
    TStack_160.UnvisitedBitMask = 0xffffffff;
    TStack_160.CurrentBitIndex = uStack_2ac;
    TStack_160.BaseBitIndex = uVar30;
    TStack_160._28_4_ = local_5c;
    local_2c8 = (TMap<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TArray<FText,TSizedDefaultAllocator<32>_>,0>_>
                 *)pTVar3;
    local_168 = pTVar3;
    TStack_160._padding_ = uStack_2c0;
    TStack_160.Array = local_2b8;
    if (((int)uVar20 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar30 = *(uint *)&(this->FlattenSearchableBlocks).field_0x28;
    if (uVar20 != uVar30) {
      puVar7 = *(undefined1 **)&(this->FlattenSearchableBlocks).field_0x20;
      puVar32 = puVar2;
      if (puVar7 != (undefined1 *)0x0) {
        puVar32 = puVar7;
      }
      uVar35 = local_res20 & *(uint *)(puVar32 + (longlong)uVar9._4_4_ * 4);
      while (uVar35 == 0) {
        lVar26 = (longlong)uVar9._4_4_;
        uVar16 = uVar16 + 0x20;
        uVar9._4_4_ = uVar9._4_4_ + 1;
        uVar20 = uVar30;
        if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < uVar9._4_4_)
        goto LAB_14280aaa0;
        uVar35 = *(uint *)(puVar32 + lVar26 * 4 + 4);
      }
      uVar5 = (ulonglong)(-uVar35 & uVar35) * 2 + 1;
      lVar26 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      local_214._8_4_ = (undefined4)lVar26;
      uVar20 = local_214._8_4_ + -1 + uVar16;
      if ((int)uVar30 < (int)uVar20) {
        uVar20 = uVar30;
      }
    }
LAB_14280aaa0:
    while( true ) {
      pTVar14 = local_168;
      if (*(int *)&local_168->field_0x8 - *(int *)&local_168->field_0x34 != (int)uStack_140) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FMultiBlock_const_,1>,TSharedPtr<SMultiBoxWidget::FFlattenSearchableBlockInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_160.CurrentBitIndex == uVar20) &&
          (TStack_160.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar14 == pTVar3)) break;
      lVar26 = *(longlong *)pTVar14;
      plVar4 = (longlong *)(lVar26 + (longlong)TStack_160.CurrentBitIndex * 0x28);
      local_108.Object = *(FMultiBlock **)(lVar26 + (longlong)TStack_160.CurrentBitIndex * 0x28);
      local_108.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)plVar4[1];
      if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar15 = IsBlockBeingDragged(this,&local_108);
      if (!bVar15) {
        local_f8.Object = (this->MainPanelBox).Object;
        local_f8.SharedReferenceCount.ReferenceController =
             (this->MainPanelBox).SharedReferenceCount.ReferenceController;
        local_c8[0].Object = (FToolBarComboButtonBlock *)0x0;
        local_c8[0].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_138.Object = (this->MainVerticalBox).Object;
        local_138.SharedReferenceCount.ReferenceController =
             (this->MainVerticalBox).SharedReferenceCount.ReferenceController;
        if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_128.Object = (this->MainHorizontalBox).Object;
        local_128.SharedReferenceCount.ReferenceController =
             (this->MainHorizontalBox).SharedReferenceCount.ReferenceController;
        if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((*plVar4 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        AddBlockWidget(this,(FMultiBlock *)*plVar4,&local_128,&local_138,&local_f8,None,false,
                       local_c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
    }
  }
  return;
}

// FocusNextWidget @ 14280ac70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __cdecl
SMultiBoxWidget::FocusNextWidget(FReply *__return_storage_ptr__,EUINavigation param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  EVisibility EVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  uint uVar7;
  FSlateApplication *pFVar8;
  FReply *pFVar9;
  ForElementType<FArrangedWidget> FVar10;
  uint uVar11;
  undefined1 auStack_428 [32];
  longlong local_408;
  longlong local_400;
  SWidget *local_3f8;
  TReferenceControllerBase<1> *local_3f0;
  FWeakWidgetPath local_3e8;
  TSharedRef<SWidget_const_,1> local_3c8;
  TSharedRef<SWidget,1> local_3b8;
  FReply local_3a8;
  FWidgetPath local_2f0;
  FWidgetPath local_190;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_428;
  pFVar8 = FSlateApplication::Get();
  (**(code **)(*(longlong *)pFVar8 + 0x98))(pFVar8);
  if (local_3f8 != (SWidget *)0x0) {
    FWidgetPath::FWidgetPath(&local_190);
    pFVar8 = FSlateApplication::Get();
    EVar4 = EVisibility::Visible;
    if ((local_3f8 == (SWidget *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FReply *)(*pcVar3)();
      return pFVar9;
    }
    pTVar5 = local_3f0;
    if (local_3f0 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_3f0->SharedReferenceCount = (atomic<int>)((int)local_3f0->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_3f8 == (SWidget *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FReply *)(*pcVar3)();
      return pFVar9;
    }
    local_3c8.Object = local_3f8;
    local_3c8.SharedReferenceCount.ReferenceController = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::GeneratePathToWidgetUnchecked(pFVar8,&local_3c8,&local_190,EVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    bVar6 = FWidgetPath::IsValid(&local_190);
    if (bVar6) {
      FWeakWidgetPath::FWeakWidgetPath(&local_3e8,&local_190);
      FWeakWidgetPath::ToNextFocusedPath(&local_3e8,&local_2f0,param_1);
      if (0 < local_2f0.Widgets.Array.ArrayNum) {
        FReply::FReply(&local_3a8,true);
        uVar11 = local_2f0.Widgets.Array.ArrayNum - 1;
        uVar7 = 0;
        if ((int)uVar11 < local_2f0.Widgets.Array.ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if (uVar7 == 0) {
          local_408 = (longlong)(int)uVar11;
          local_400 = (longlong)local_2f0.Widgets.Array.ArrayNum;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FReply *)(*pcVar3)();
            return pFVar9;
          }
        }
        FVar10 = (ForElementType<FArrangedWidget>)&local_2f0.Widgets.Array;
        if (local_2f0.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar10 = local_2f0.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        local_3b8.Object =
             *(SWidget **)
              ((longlong)((longlong)FVar10 + -0x10) +
              (longlong)local_2f0.Widgets.Array.ArrayNum * 0x48);
        local_3b8.SharedReferenceCount.ReferenceController =
             ((FSharedReferencer<1> *)((longlong)FVar10 + -8))
             [(longlong)local_2f0.Widgets.Array.ArrayNum * 9].ReferenceController;
        if (local_3b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_3b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_3b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pFVar9 = FReply::SetUserFocus(&local_3a8,&local_3b8,Navigation,false);
        FReply::FReply(__return_storage_ptr__,pFVar9);
        FReply::~FReply(&local_3a8);
        if (local_2f0.VirtualPointerPositions.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f0.VirtualPointerPositions.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2f0.TopLevelWindow.SharedReferenceCount.ReferenceController);
        FVar10 = (ForElementType<FArrangedWidget>)&local_2f0.Widgets.Array;
        if (local_2f0.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar10 = local_2f0.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        DestructItems<FArrangedWidget,int>
                  ((FArrangedWidget *)FVar10,local_2f0.Widgets.Array.ArrayNum);
        if (local_2f0.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FMemory::Free((void *)local_2f0.Widgets.Array.AllocatorInstance.SecondaryData);
        }
        if (local_3e8.Window.WeakReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(local_3e8.Window.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((local_3e8.Window.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_3e8.Window.WeakReferenceCount.ReferenceController,1);
          }
        }
        DestructItems<TWeakPtr<SWidget,1>,int>
                  ((TWeakPtr<SWidget,1> *)local_3e8.Widgets.AllocatorInstance.Data,
                   local_3e8.Widgets.ArrayNum);
        if ((TWeakPtr<SWidget,1> *)local_3e8.Widgets.AllocatorInstance.Data !=
            (TWeakPtr<SWidget,1> *)0x0) {
          FMemory::Free(local_3e8.Widgets.AllocatorInstance.Data);
        }
        if (local_190.VirtualPointerPositions.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.VirtualPointerPositions.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_190.TopLevelWindow.SharedReferenceCount.ReferenceController);
        FVar10 = (ForElementType<FArrangedWidget>)&local_190.Widgets.Array;
        if (local_190.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar10 = local_190.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        DestructItems<FArrangedWidget,int>
                  ((FArrangedWidget *)FVar10,local_190.Widgets.Array.ArrayNum);
        if (local_190.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FMemory::Free((void *)local_190.Widgets.Array.AllocatorInstance.SecondaryData);
        }
        goto LAB_14280b087;
      }
      if (local_2f0.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_2f0.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2f0.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar10 = (ForElementType<FArrangedWidget>)&local_2f0.Widgets.Array;
      if (local_2f0.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar10 = local_2f0.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar10,local_2f0.Widgets.Array.ArrayNum)
      ;
      if (local_2f0.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_2f0.Widgets.Array.AllocatorInstance.SecondaryData);
      }
      if (local_3e8.Window.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_3e8.Window.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_3e8.Window.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_3e8.Window.WeakReferenceCount.ReferenceController,1);
        }
      }
      DestructItems<TWeakPtr<SWidget,1>,int>
                ((TWeakPtr<SWidget,1> *)local_3e8.Widgets.AllocatorInstance.Data,
                 local_3e8.Widgets.ArrayNum);
      if ((TWeakPtr<SWidget,1> *)local_3e8.Widgets.AllocatorInstance.Data !=
          (TWeakPtr<SWidget,1> *)0x0) {
        FMemory::Free(local_3e8.Widgets.AllocatorInstance.Data);
      }
    }
    if (local_190.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_190.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_190.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar10 = (ForElementType<FArrangedWidget>)&local_190.Widgets.Array;
    if (local_190.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar10 = local_190.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar10,local_190.Widgets.Array.ArrayNum);
    if (local_190.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_190.Widgets.Array.AllocatorInstance.SecondaryData);
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
LAB_14280b087:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3f0);
  return __return_storage_ptr__;
}

// GenerateTiles @ 14280bfd0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<ITableRow,1> * __thiscall
SMultiBoxWidget::GenerateTiles
          (SMultiBoxWidget *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<SWidget,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  STableRow<TSharedPtr<SWidget,1>_> *pSVar5;
  bool bVar6;
  FArguments *pFVar7;
  TSharedRef<ITableRow,1> *pTVar8;
  TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1> *pTVar9;
  FLLMScope local_res10 [2];
  FName local_res18;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_res20;
  TSlateDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_398;
  FMemScope local_380;
  undefined8 local_378;
  FSharedReferencer<1> local_370;
  SWidget *local_368;
  TReferenceControllerBase<1> *pTStack_360;
  TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1> local_358;
  TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1> local_348;
  FArguments local_338;
  
  pFVar7 = STableRow<TSharedPtr<SWidget,1>_>::FArguments::FArguments(&local_338);
  if (param_1->Object == (SWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<ITableRow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<ITableRow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_368 = (pFVar7->_Content).Widget.Object;
  pTStack_360 = (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar7->_Content).Widget.Object = pSVar2;
  (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_360);
  local_res20.Arg0 = param_2;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_380,&local_res18,true);
  local_398._RequiredArgs = &local_res20;
  local_398._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = MakeShared<STableRow<TSharedPtr<SWidget,1>_>,1>(&local_358);
  local_370.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
  local_398._Widget.Object = pTVar9->Object;
  if (local_370.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_370.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_370.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_378 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_398._Widget.SharedReferenceCount,&local_370);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_370.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_358.SharedReferenceCount.ReferenceController);
  pSVar5 = local_398._Widget.Object;
  if (local_398._Widget.Object == (STableRow<TSharedPtr<SWidget,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedRef<ITableRow,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&pSVar5->_padding_,"STableRow< TSharedPtr<SWidget> >",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
             ,0x293,0x3f8);
  FMemScope::~FMemScope(&local_380);
  FLLMScope::~FLLMScope(local_res10);
  pTVar9 = TSlateDecl<STableRow<TSharedPtr<SWidget,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
           ::operator<<=(&local_398,&local_348,pFVar7);
  __return_storage_ptr__->Object = (ITableRow *)pTVar9->Object;
  pTVar3 = (pTVar9->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_348.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_398._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  STableRow<TSharedPtr<SWidget,1>_>::FArguments::~FArguments(&local_338);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetCustomizationBorderDragVisibility @ 14280efb0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

EVisibility __thiscall
SMultiBoxWidget::GetCustomizationBorderDragVisibility
          (SMultiBoxWidget *this,FName param_1,EMultiBlockType param_2,bool *param_3)

{
  int iVar1;
  int iVar2;
  FMultiBox *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TEnumAsByte<EVisibility::Private> TVar7;
  EVisibility EVar8;
  uint uVar9;
  undefined7 in_register_00000081;
  longlong lVar10;
  undefined1 *in_stack_00000028;
  
  lVar10 = CONCAT71(in_register_00000081,param_2);
  *in_stack_00000028 = 0;
  EVar8 = EVisibility::Collapsed;
  if ((this->DragPreview).PreviewBlock.Object != (FDropPreviewBlock *)0x0) {
    if (((this->MultiBox).Object == (FMultiBox *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      TVar7.Value = (*pcVar5)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar7.Value;
    }
    pFVar3 = (this->MultiBox).Object;
    iVar1 = (this->DragPreview).InsertIndex;
    EVar8.Value.Value = EVisibility::Collapsed.Value.Value;
    if ((iVar1 < 0) || ((pFVar3->Blocks).ArrayNum <= iVar1)) {
      iVar2 = (pFVar3->Blocks).ArrayNum;
      if ((iVar2 == iVar1) && (0 < iVar2)) {
        uVar9 = 0;
        if ((int)(iVar2 - 1U) < iVar2) {
          uVar9 = ~(iVar2 - 1U) >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          TVar7.Value = (*pcVar5)();
          return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar7.Value;
        }
        iVar1 = (pFVar3->Blocks).ArrayNum;
        EVar8.Value.Value = EVisibility::Collapsed.Value.Value;
        if (*(longlong *)
             (*(longlong *)((pFVar3->Blocks).AllocatorInstance.Data + ((longlong)iVar1 + -1) * 0x10)
             + 0xa0) == lVar10) {
          uVar9 = 0;
          if ((int)(iVar1 - 1U) < iVar1) {
            uVar9 = ~(iVar1 - 1U) >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            TVar7.Value = (*pcVar5)();
            return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar7.Value
            ;
          }
          EVar8.Value.Value = EVisibility::Collapsed.Value.Value;
          if (*(char *)(*(longlong *)
                         ((pFVar3->Blocks).AllocatorInstance.Data +
                         (longlong)(pFVar3->Blocks).ArrayNum * 0x10 + -0x10) + 0xa8) ==
              (char)param_3) {
            *in_stack_00000028 = 1;
            EVar8 = EVisibility::Visible;
          }
        }
      }
    }
    else if (lVar10 != 0) {
      if ((iVar1 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        TVar7.Value = (*pcVar5)();
        return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar7.Value;
      }
      lVar4 = *(longlong *)((pFVar3->Blocks).AllocatorInstance.Data + (longlong)iVar1 * 0x10);
      EVar8.Value.Value = EVisibility::Collapsed.Value.Value;
      if ((*(longlong *)(lVar4 + 0xa0) == lVar10) && (*(char *)(lVar4 + 0xa8) == (char)param_3)) {
        EVar8.Value.Value = EVisibility::Visible.Value.Value;
      }
    }
  }
  *(TEnumAsByte<EVisibility::Private> *)param_1 = EVar8.Value.Value;
  return (EVisibility)param_1.ComparisonIndex.Value._0_1_;
}

// GetCustomizationVisibility @ 14280f1e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

EVisibility __thiscall
SMultiBoxWidget::GetCustomizationVisibility
          (SMultiBoxWidget *this,TWeakPtr<FMultiBlock_const_,1> *param_1,
          TWeakPtr<SWidget,1> *param_2)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  FDropPreviewBlock *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  TEnumAsByte<EVisibility::Private> TVar9;
  char cVar10;
  atomic<int> aVar11;
  UObject *pUVar12;
  longlong *plVar13;
  SWidget *pSVar14;
  SWidget *pSVar15;
  SWidget *pSVar16;
  TReferenceControllerBase<1> *pTVar17;
  longlong *in_R9;
  SWidget *pSVar18;
  bool bVar19;
  uint uStackX_c;
  
  pSVar18 = (SWidget *)0x0;
  if (((this->MultiBox).Object == (FMultiBox *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    TVar9.Value = (*pcVar7)();
    return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar9.Value;
  }
  pUVar12 = FWeakObjectPtr::Get(&(((this->MultiBox).Object)->WeakToolMenu).WeakPtr);
  pSVar16 = pSVar18;
  if (((((pUVar12 == (UObject *)0x0) ||
        (cVar10 = (**(code **)(*(longlong *)pUVar12 + 0x2b0))(pUVar12), cVar10 == '\0')) ||
       (*in_R9 == 0)) || ((in_R9[1] == 0 || (*(int *)(in_R9[1] + 8) < 1)))) ||
     ((param_2->Object == (SWidget *)0x0 ||
      ((pTVar17 = (param_2->WeakReferenceCount).ReferenceController,
       pTVar17 == (TReferenceControllerBase<1> *)0x0 || ((int)pTVar17->SharedReferenceCount < 1)))))
     ) {
    pSVar14 = (SWidget *)((ulonglong)uStackX_c << 0x20);
    pTVar17 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
LAB_14280f38b:
    bVar8 = false;
  }
  else {
    pFVar5 = (this->DragPreview).PreviewBlock.Object;
    if (pFVar5 == (FDropPreviewBlock *)0x0) {
      pSVar14 = (SWidget *)((ulonglong)uStackX_c << 0x20);
      bVar8 = true;
      pTVar17 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    }
    else {
      if (((pFVar5->ActualBlock).Object == (FMultiBlock *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        TVar9.Value = (*pcVar7)();
        return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar9.Value;
      }
      pTVar17 = (pFVar5->ActualBlock).SharedReferenceCount.ReferenceController;
      pSVar16 = (SWidget *)(pFVar5->ActualBlock).Object;
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pSVar16 == (SWidget *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        TVar9.Value = (*pcVar7)();
        return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar9.Value;
      }
      pSVar15 = (SWidget *)(param_2->WeakReferenceCount).ReferenceController;
      pSVar14 = pSVar15;
      if (pSVar15 != (SWidget *)0x0) {
        aVar3 = *(atomic<int> *)&pSVar15->_padding_;
        do {
          pSVar14 = pSVar18;
          if (aVar3 == (atomic<int>)0x0) goto LAB_14280f355;
          LOCK();
          aVar11 = *(atomic<int> *)&pSVar15->_padding_;
          bVar8 = aVar3 == aVar11;
          if (bVar8) {
            *(atomic<int> *)&pSVar15->_padding_ = (atomic<int>)((int)aVar3 + 1);
            aVar11 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar11;
        } while (!bVar8);
        pSVar14 = pSVar15;
        if ((param_2->Object != (SWidget *)0x0) && (param_2->Object == pSVar16)) {
          pSVar16 = (SWidget *)&DAT_00000003;
          goto LAB_14280f38b;
        }
      }
LAB_14280f355:
      bVar8 = true;
      pSVar16 = (SWidget *)&DAT_00000003;
    }
  }
  if (((ulonglong)pSVar16 & 2) != 0) {
    pSVar16 = (SWidget *)(ulonglong)((uint)pSVar16 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar14);
  }
  if (((ulonglong)pSVar16 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
  if (!bVar8) {
    pTVar17 = (param_2->WeakReferenceCount).ReferenceController;
    *(TEnumAsByte<EVisibility::Private> *)&param_1->Object = EVisibility::Collapsed.Value.Value;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar17->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar17->_padding_ + 8))(pTVar17,1);
      }
    }
    plVar13 = (longlong *)in_R9[1];
    goto LAB_14280f568;
  }
  pSVar16 = (SWidget *)(param_2->WeakReferenceCount).ReferenceController;
  pSVar14 = pSVar18;
  pSVar15 = pSVar16;
  if (pSVar16 == (SWidget *)0x0) {
LAB_14280f3f5:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pSVar16 = pSVar15;
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      TVar9.Value = (*pcVar7)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar9.Value;
    }
  }
  else {
    aVar3 = *(atomic<int> *)&pSVar16->_padding_;
    do {
      pSVar15 = pSVar18;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14280f3f5;
      LOCK();
      aVar11 = *(atomic<int> *)&pSVar16->_padding_;
      bVar8 = aVar3 == aVar11;
      if (bVar8) {
        *(atomic<int> *)&pSVar16->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar11 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar11;
    } while (!bVar8);
    pSVar14 = param_2->Object;
    pSVar15 = pSVar16;
    if (pSVar14 == (SWidget *)0x0) goto LAB_14280f3f5;
  }
  pTVar17 = *(TReferenceControllerBase<1> **)
             &(pSVar14->PersistentState).InitialClipState.TypedValue.Flags;
  bVar8 = false;
  lVar6 = *(longlong *)
           &(pSVar14->PersistentState).InitialClipState.TypedValue.ScissorRect.TypedValue.field_0x20
  ;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar6 == 0) {
    pSVar14 = (SWidget *)((ulonglong)uStackX_c << 0x20);
LAB_14280f4d8:
    *(TEnumAsByte<EVisibility::Private> *)&param_1->Object = EVisibility::Collapsed.Value.Value;
    if (bVar8) goto LAB_14280f4e8;
  }
  else {
    bVar8 = true;
    pSVar14 = (SWidget *)in_R9[1];
    pSVar15 = pSVar14;
    if (pSVar14 == (SWidget *)0x0) {
LAB_14280f471:
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      pSVar14 = pSVar15;
      if (bVar19) {
        pcVar7 = (code *)swi(3);
        TVar9.Value = (*pcVar7)();
        return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar9.Value;
      }
    }
    else {
      aVar3 = *(atomic<int> *)&pSVar14->_padding_;
      do {
        pSVar15 = pSVar18;
        if (aVar3 == (atomic<int>)0x0) goto LAB_14280f471;
        LOCK();
        aVar11 = *(atomic<int> *)&pSVar14->_padding_;
        bVar19 = aVar3 == aVar11;
        if (bVar19) {
          *(atomic<int> *)&pSVar14->_padding_ = (atomic<int>)((int)aVar3 + 1);
          aVar11 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar11;
      } while (!bVar19);
      pSVar18 = (SWidget *)*in_R9;
      pSVar15 = pSVar14;
      if (pSVar18 == (SWidget *)0x0) goto LAB_14280f471;
    }
    if ((TEnumAsByte<EVisibility::Private>)*(uchar *)(&pSVar18->field_0x30 + 9) !=
        EVisibility::Visible.Value.Value) goto LAB_14280f4d8;
    *(TEnumAsByte<EVisibility::Private> *)&param_1->Object = EVisibility::Visible.Value.Value;
LAB_14280f4e8:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar14);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar16);
  pTVar17 = (param_2->WeakReferenceCount).ReferenceController;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar17->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar17->_padding_ + 8))(pTVar17,1);
    }
  }
  plVar13 = (longlong *)in_R9[1];
LAB_14280f568:
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar13 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar13 + 8))(plVar13,1);
    }
  }
  return (EVisibility)SUB81(param_1,0);
}

// GetItemHeight @ 142810a10

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

float __thiscall SMultiBoxWidget::GetItemHeight(SMultiBoxWidget *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDeprecateSlateVector2D FVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  uVar6 = 0;
  if ((this->TileViewWidgets).ArrayNum < 1) {
    return 0.0;
  }
  lVar7 = 0;
  fVar8 = 0.0;
  do {
    uVar4 = 0;
    if ((int)uVar6 < (this->TileViewWidgets).ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar8 = (float)(*pcVar2)();
        return fVar8;
      }
    }
    pFVar1 = (this->TileViewWidgets).AllocatorInstance.Data;
    if (*(longlong *)(pFVar1 + lVar7) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar8 = (float)(*pcVar2)();
        return fVar8;
      }
    }
    FVar5 = SWidget::GetDesiredSize(*(SWidget **)(pFVar1 + lVar7));
    uVar6 = uVar6 + 1;
    lVar7 = lVar7 + 0x10;
    fVar9 = *(float *)((longlong)FVar5 + 4);
    if (*(float *)((longlong)FVar5 + 4) <= fVar8) {
      fVar9 = fVar8;
    }
    fVar8 = fVar9;
  } while ((int)uVar6 < (this->TileViewWidgets).ArrayNum);
  return fVar9;
}

// GetItemWidth @ 142810b30

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

float __thiscall SMultiBoxWidget::GetItemWidth(SMultiBoxWidget *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDeprecateSlateVector2D FVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  
  uVar6 = 0;
  fVar8 = 0.0;
  if ((this->TileViewWidgets).ArrayNum < 1) {
    return 0.0;
  }
  lVar7 = 0;
  do {
    uVar4 = 0;
    if ((int)uVar6 < (this->TileViewWidgets).ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar8 = (float)(*pcVar2)();
        return fVar8;
      }
    }
    pFVar1 = (this->TileViewWidgets).AllocatorInstance.Data;
    if (*(longlong *)(pFVar1 + lVar7) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar8 = (float)(*pcVar2)();
        return fVar8;
      }
    }
    FVar5 = SWidget::GetDesiredSize(*(SWidget **)(pFVar1 + lVar7));
    uVar6 = uVar6 + 1;
    lVar7 = lVar7 + 0x10;
    if (fVar8 <= *(float *)FVar5) {
      fVar8 = *(float *)FVar5;
    }
  } while ((int)uVar6 < (this->TileViewWidgets).ArrayNum);
  return fVar8;
}

// GetLinkedBoxManager @ 142811010

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<FLinkedBoxManager,1> * __thiscall
SMultiBoxWidget::GetLinkedBoxManager
          (SMultiBoxWidget *this,TSharedRef<FLinkedBoxManager,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FLinkedBoxManager,1> *pTVar4;
  
  if ((this->LinkedBoxManager).Object == (FLinkedBoxManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FLinkedBoxManager,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = (this->LinkedBoxManager).Object;
  pTVar1 = (this->LinkedBoxManager).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FLinkedBoxManager *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FLinkedBoxManager,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetMultiBox @ 142811250

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<FMultiBox_const_,1> * __thiscall
SMultiBoxWidget::GetMultiBox
          (SMultiBoxWidget *this,TSharedRef<FMultiBox_const_,1> *__return_storage_ptr__)

{
  FMultiBox *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<FMultiBox_const_,1> *pTVar5;
  
  if ((this->MultiBox).Object == (FMultiBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedRef<FMultiBox_const_,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar1 = (this->MultiBox).Object;
  pTVar2 = (this->MultiBox).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar1 == (FMultiBox *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TSharedRef<FMultiBox_const_,1> *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Object = pFVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetSearchBoxVisibility @ 1428140f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

EVisibility __thiscall SMultiBoxWidget::GetSearchBoxVisibility(SMultiBoxWidget *this)

{
  bool bVar1;
  EVisibility EVar2;
  uchar *in_RDX;
  
  bVar1 = FText::IsEmpty(&this->SearchText);
  if (bVar1) {
    bVar1 = ShouldShowMenuSearchField(this);
    if (!bVar1) {
      bVar1 = false;
      goto LAB_142814125;
    }
  }
  bVar1 = true;
LAB_142814125:
  EVar2.Value.Value = EVisibility::Collapsed.Value.Value;
  if (bVar1) {
    EVar2.Value.Value = EVisibility::Visible.Value.Value;
  }
  *in_RDX = (uchar)EVar2.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetSearchText @ 1428144c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FText * __thiscall
SMultiBoxWidget::GetSearchText(SMultiBoxWidget *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->SearchText).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->SearchText).Flags;
  return __return_storage_ptr__;
}

// GetSearchTextWidget @ 142814510

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
SMultiBoxWidget::GetSearchTextWidget
          (SMultiBoxWidget *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (SWidget *)(this->SearchTextWidget).Object;
  pTVar1 = (this->SearchTextWidget).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetSearchable @ 142814550

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall SMultiBoxWidget::GetSearchable(SMultiBoxWidget *this)

{
  return this->bSearchable;
}

// GetStyleSet @ 142815c90

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

ISlateStyle * __thiscall SMultiBoxWidget::GetStyleSet(SMultiBoxWidget *this)

{
  code *pcVar1;
  bool bVar2;
  ISlateStyle *pIVar3;
  
  if ((this->MultiBox).Object != (FMultiBox *)0x0) {
    return ((this->MultiBox).Object)->StyleSet;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ISlateStyle *)(*pcVar1)();
    return pIVar3;
  }
  return ((this->MultiBox).Object)->StyleSet;
}

// GetSummonedMenuTime @ 142815d00

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

double __thiscall SMultiBoxWidget::GetSummonedMenuTime(SMultiBoxWidget *this)

{
  return this->SummonedMenuTime;
}

// IsBlockBeingDragged @ 14281cdd0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
SMultiBoxWidget::IsBlockBeingDragged
          (SMultiBoxWidget *this,TSharedPtr<FMultiBlock_const_,1> *param_1)

{
  FDropPreviewBlock *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMultiBlock *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  
  pFVar1 = (this->DragPreview).PreviewBlock.Object;
  if (pFVar1 == (FDropPreviewBlock *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  if ((pFVar1->ActualBlock).Object == (FMultiBlock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pTVar2 = (pFVar1->ActualBlock).SharedReferenceCount.ReferenceController;
  pFVar3 = (pFVar1->ActualBlock).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar3 == (FMultiBlock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  if ((param_1->Object == (FMultiBlock *)0x0) || (param_1->Object != pFVar3)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar5;
}

// OnCustomCommandDragEnter @ 1428256f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiBoxWidget::OnCustomCommandDragEnter
          (SMultiBoxWidget *this,TSharedRef<FMultiBlock_const_,1> *param_1,FGeometry *param_2,
          FDragDropEvent *param_3)

{
  FDropPreviewBlock *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FUICommandDragDropOp *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  UObject *pUVar7;
  atomic<int> *paVar8;
  TVector2<double>_u_0 local_58;
  TSharedPtr<FUICommandDragDropOp,1> local_48;
  TSharedRef<FMultiBlock_const_,1> local_38;
  
  pFVar1 = (this->DragPreview).PreviewBlock.Object;
  if ((pFVar1 == (FDropPreviewBlock *)0x0) || (pFVar1 != (FDropPreviewBlock *)param_1->Object)) {
    if ((this->MultiBox).Object == (FMultiBox *)0x0) {
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
    pUVar7 = FWeakObjectPtr::Get(&(((this->MultiBox).Object)->WeakToolMenu).WeakPtr);
    if (pUVar7 != (UObject *)0x0) {
      cVar6 = (**(code **)(*(longlong *)pUVar7 + 0x2b0))(pUVar7);
      if (cVar6 != '\0') {
        pTVar2 = (param_3->Content).SharedReferenceCount.ReferenceController;
        pFVar3 = (FUICommandDragDropOp *)(param_3->Content).Object;
        if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
          paVar8 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar8 = &pTVar2->SharedReferenceCount;
          LOCK();
          *paVar8 = (atomic<int>)((int)*paVar8 + 1);
          UNLOCK();
          LOCK();
          *paVar8 = (atomic<int>)((int)*paVar8 + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        local_58._s_0.X = (double)*(float *)&param_3->_padding_;
        local_58._s_0.Y = (double)*(float *)((longlong)&param_3->_padding_ + 4);
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar8 = (atomic<int>)((int)*paVar8 + 1);
          UNLOCK();
        }
        local_38.Object = param_1->Object;
        local_38.SharedReferenceCount.ReferenceController =
             (param_1->SharedReferenceCount).ReferenceController;
        if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_48.Object = pFVar3;
        local_48.SharedReferenceCount.ReferenceController = pTVar2;
        UpdateDropAreaPreviewBlock
                  (this,&local_38,&local_48,param_2,(TVector2<double> *)&local_58._s_0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnCustomCommandDragged @ 142825870

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiBoxWidget::OnCustomCommandDragged
          (SMultiBoxWidget *this,TSharedRef<FMultiBlock_const_,1> *param_1,FGeometry *param_2,
          FDragDropEvent *param_3)

{
  FDropPreviewBlock *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FUICommandDragDropOp *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  UObject *pUVar7;
  atomic<int> *paVar8;
  TVector2<double>_u_0 local_58;
  TSharedPtr<FUICommandDragDropOp,1> local_48;
  TSharedRef<FMultiBlock_const_,1> local_38;
  
  pFVar1 = (this->DragPreview).PreviewBlock.Object;
  if ((pFVar1 == (FDropPreviewBlock *)0x0) || (pFVar1 != (FDropPreviewBlock *)param_1->Object)) {
    if ((this->MultiBox).Object == (FMultiBox *)0x0) {
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
    pUVar7 = FWeakObjectPtr::Get(&(((this->MultiBox).Object)->WeakToolMenu).WeakPtr);
    if (pUVar7 != (UObject *)0x0) {
      cVar6 = (**(code **)(*(longlong *)pUVar7 + 0x2b0))(pUVar7);
      if (cVar6 != '\0') {
        pTVar2 = (param_3->Content).SharedReferenceCount.ReferenceController;
        pFVar3 = (FUICommandDragDropOp *)(param_3->Content).Object;
        if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
          paVar8 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar8 = &pTVar2->SharedReferenceCount;
          LOCK();
          *paVar8 = (atomic<int>)((int)*paVar8 + 1);
          UNLOCK();
          LOCK();
          *paVar8 = (atomic<int>)((int)*paVar8 + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        local_58._s_0.X = (double)*(float *)&param_3->_padding_;
        local_58._s_0.Y = (double)*(float *)((longlong)&param_3->_padding_ + 4);
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar8 = (atomic<int>)((int)*paVar8 + 1);
          UNLOCK();
        }
        local_38.Object = param_1->Object;
        local_38.SharedReferenceCount.ReferenceController =
             (param_1->SharedReferenceCount).ReferenceController;
        if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_48.Object = pFVar3;
        local_48.SharedReferenceCount.ReferenceController = pTVar2;
        UpdateDropAreaPreviewBlock
                  (this,&local_38,&local_48,param_2,(TVector2<double> *)&local_58._s_0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnCustomCommandDropped @ 1428259f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SMultiBoxWidget::OnCustomCommandDropped(SMultiBoxWidget *this)

{
  TSharedPtr<FDropPreviewBlock,1> *pTVar1;
  TSharedPtr<FMultiBox,1> *this_00;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  EMultiBlockType EVar6;
  FMultiBox *pFVar7;
  FMultiBlock *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FSharedReferencer<1> FVar11;
  undefined1 local_res8 [8];
  EMultiBlockType local_res10;
  undefined8 local_res18;
  TSharedRef<FMultiBlock_const_,1> local_68;
  longlong local_58;
  FSharedReferencer<1> FStack_50;
  TSharedPtr<FMultiBlock_const_,1> local_48;
  
  if (((((this->DragPreview).BlockName != (FName)0x0) && ((this->DragPreview).BlockType != None)) &&
      (pTVar1 = &(this->DragPreview).PreviewBlock, pTVar1->Object != (FDropPreviewBlock *)0x0)) &&
     ((this->DragPreview).InsertIndex != -1)) {
    if (((this->MultiBox).Object == (FMultiBox *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar7 = (this->MultiBox).Object;
    EVar6 = (this->DragPreview).BlockType;
    FVar3 = (this->DragPreview).BlockName;
    iVar2 = (pFVar7->Blocks).ArrayNum;
    pFVar10 = (pFVar7->Blocks).AllocatorInstance.Data;
    pFVar9 = pFVar10 + (longlong)iVar2 * 0x10;
    local_res10 = EVar6;
    while( true ) {
      if ((pFVar7->Blocks).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedRef<FMultiBlock_const_,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
        EVar6 = local_res10;
      }
      if (pFVar10 == pFVar9) {
        FVar11.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142825c2c;
      }
      pFVar8 = *(FMultiBlock **)pFVar10;
      if ((pFVar8->ExtensionHook == FVar3) && (pFVar8->Type == EVar6)) break;
      pFVar10 = pFVar10 + 0x10;
    }
    FVar11.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
    if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar11.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar8 != (FMultiBlock *)0x0) {
      this_00 = &this->MultiBox;
      if ((pFVar8->Type == Separator) && (pFVar8->bIsPartOfHeading != false)) {
        pFVar7 = TSharedPtr<FMultiBox,1>::operator->(this_00);
        FMultiBox::FindBlockFromNameAndType(pFVar7,&local_48,(this->DragPreview).BlockName,Heading);
        if (local_48.Object != (FMultiBlock *)0x0) {
          if (local_48.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar11.ReferenceController);
          pFVar8 = local_48.Object;
          FVar11.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
      }
      if ((this_00->Object == (FMultiBox *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = this_00->Object;
      iVar2 = (this->DragPreview).InsertIndex;
      if ((pFVar8 == (FMultiBlock *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (FVar11.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar11.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar11.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68.Object = pFVar8;
      local_68.SharedReferenceCount.ReferenceController = FVar11.ReferenceController;
      if ((pFVar8 == (FMultiBlock *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FMultiBox::InsertCustomMultiBlock(pFVar7,&local_68,iVar2);
    }
LAB_142825c2c:
    local_res18 = 0;
    (this->DragPreview).BlockName.ComparisonIndex = 0;
    (this->DragPreview).BlockName.Number = 0;
    (this->DragPreview).BlockType = None;
    local_58 = 0;
    FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FDropPreviewBlock,1> *)&local_58) {
      pTVar1->Object = (FDropPreviewBlock *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->DragPreview).PreviewBlock.SharedReferenceCount,&FStack_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_50.ReferenceController);
    (this->DragPreview).InsertIndex = -1;
    BuildMultiBoxWidget(this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar11.ReferenceController);
  }
  return;
}

// OnDragOver @ 1428268d0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMultiBoxWidget::OnDragOver
          (SMultiBoxWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FReply *pFVar5;
  UObject *pUVar6;
  TReferenceControllerBase<1> *pTVar7;
  
  pFVar1 = (param_2->Content).Object;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if (pFVar1 != (FDragDropOperation *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    FUICommandDragDropOp::GetTypeId();
    cVar3 = (*pcVar2)(pFVar1);
    if (cVar3 != '\0') {
      pTVar7 = (param_2->Content).SharedReferenceCount.ReferenceController;
      pFVar1 = (param_2->Content).Object;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 != (FDragDropOperation *)0x0) {
        if ((this->MultiBox).Object == (FMultiBox *)0x0) {
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
        pUVar6 = FWeakObjectPtr::Get(&(((this->MultiBox).Object)->WeakToolMenu).WeakPtr);
        if (pUVar6 != (UObject *)0x0) {
          cVar3 = (**(code **)(*(longlong *)pUVar6 + 0x2b0))(pUVar6);
          if (cVar3 != '\0') {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar7);
            bVar4 = true;
            goto LAB_1428269ae;
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  bVar4 = false;
LAB_1428269ae:
  FReply::FReply(__return_storage_ptr__,bVar4);
  return __return_storage_ptr__;
}

// OnDrop @ 142826bf0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMultiBoxWidget::OnDrop
          (SMultiBoxWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  char cVar4;
  bool bVar5;
  
  pFVar1 = (param_2->Content).Object;
  if (pFVar1 == (FDragDropOperation *)0x0) {
LAB_142826c64:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    FUICommandDragDropOp::GetTypeId();
    cVar4 = (*pcVar2)();
    if (cVar4 == '\0') goto LAB_142826c64;
    pTVar3 = (param_2->Content).SharedReferenceCount.ReferenceController;
    pFVar1 = (param_2->Content).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (pFVar1 != (FDragDropOperation *)0x0) {
      OnCustomCommandDropped(this);
      bVar5 = true;
      goto LAB_142826c6d;
    }
  }
  bVar5 = false;
LAB_142826c6d:
  FReply::FReply(__return_storage_ptr__,bVar5);
  return __return_storage_ptr__;
}

// OnDropExternal @ 142826ca0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SMultiBoxWidget::OnDropExternal(SMultiBoxWidget *this)

{
  TSharedPtr<FDropPreviewBlock,1> *pTVar1;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  if (((((this->DragPreview).BlockName != (FName)0x0) && ((this->DragPreview).BlockType != None)) &&
      (pTVar1 = &(this->DragPreview).PreviewBlock, pTVar1->Object != (FDropPreviewBlock *)0x0)) &&
     ((this->DragPreview).InsertIndex != -1)) {
    (this->DragPreview).BlockName.ComparisonIndex = 0;
    (this->DragPreview).BlockName.Number = 0;
    (this->DragPreview).BlockType = None;
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FDropPreviewBlock,1> *)&local_18) {
      pTVar1->Object = (FDropPreviewBlock *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->DragPreview).PreviewBlock.SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    (this->DragPreview).InsertIndex = -1;
    BuildMultiBoxWidget(this);
    return;
  }
  return;
}

// OnFilterTextChanged @ 142826d40

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiBoxWidget::OnFilterTextChanged(SMultiBoxWidget *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  FSlateApplication *pFVar8;
  TSharedRef<SSearchBox,1> *pTVar9;
  SWidget *pSVar10;
  undefined4 local_res8 [2];
  TSharedPtr<SWidget,1> local_48;
  TSharedRef<SSearchBox,1> local_38;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_res8[0] = 0;
  bVar6 = FText::IsEmpty(&this->SearchText);
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->SearchText).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->SearchText).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->SearchText).Flags = param_1->Flags;
  bVar4 = false;
  bVar5 = false;
  if ((this->bSearchable != false) && (bVar4 = false, bVar5 = false, bVar6)) {
    bVar6 = FText::IsEmpty(param_1);
    if (!bVar6) {
      pFVar8 = FSlateApplication::Get();
      pcVar3 = *(code **)(*(longlong *)pFVar8 + 0xf0);
      pTVar9 = TSharedPtr<SSearchBox,1>::ToSharedRef(&this->SearchTextWidget,&local_38);
      local_48.Object = (SWidget *)pTVar9->Object;
      local_48.SharedReferenceCount.ReferenceController =
           (pTVar9->SharedReferenceCount).ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar5 = true;
      bVar4 = true;
      cVar7 = (*pcVar3)(pFVar8,&local_48,0);
      if (cVar7 == '\0') {
        bVar6 = true;
        goto LAB_142826e33;
      }
    }
  }
  bVar6 = false;
LAB_142826e33:
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (((bVar6) && ((this->SearchTextWidget).Object != (SSearchBox *)0x0)) &&
     ((this->SearchBlockWidget).Object != (SWidget *)0x0)) {
    pSVar10 = TSharedPtr<SWidget,1>::operator->(&this->SearchBlockWidget);
    local_38.Object._1_1_ = 1;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    uStack_28 = 0;
    local_38.Object._0_1_ = EVisibility::Visible.Value.Value;
    local_20 = 0;
    (**(code **)(pSVar10->_padding_ + 0x1c8))(pSVar10);
    pFVar8 = FSlateApplication::Get();
    local_48.Object = (SWidget *)(this->SearchTextWidget).Object;
    local_48.SharedReferenceCount.ReferenceController =
         (this->SearchTextWidget).SharedReferenceCount.ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::SetUserFocus(pFVar8,0,&local_48,SetDirectly);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  FilterMultiBoxEntries(this);
  return;
}

// OnFilterTextCommitted @ 142826f20

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SMultiBoxWidget::OnFilterTextCommitted(SMultiBoxWidget *this,FText *param_1,Type param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res18 [16];
  
  if (param_2 == OnCleared) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->SearchText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->SearchText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->SearchText).Flags = param_1->Flags;
    FilterMultiBoxEntries(this);
  }
  return;
}

// OnFocusChanging @ 142826fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiBoxWidget::OnFocusChanging
          (SMultiBoxWidget *this,FWeakWidgetPath *param_1,FWidgetPath *param_2,FFocusEvent *param_3)

{
  bool bVar1;
  TSharedRef<SWidget,1> *pTVar2;
  SSearchBox *pSVar3;
  ForElementType<FArrangedWidget> FVar4;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1c0;
  ForAnyElementType FStack_1b8;
  ulonglong local_1b0;
  FDestructionSentinel local_1a8;
  TSharedRef<SWindow,1> local_190;
  FWidgetPath local_180;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  bVar1 = FWidgetPath::IsValid(param_2);
  if (((bVar1) && (bVar1 = ShouldShowMenuSearchField(this), bVar1)) &&
     ((this->SearchTextWidget).Object != (SSearchBox *)0x0)) {
    FWidgetPath::GetDeepestWindow(param_2,&local_190);
    pTVar2 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                        (TSharedRef<SWidget,1> *)&local_1a8);
    local_1c8 = (undefined1  [8])pTVar2->Object;
    local_1c0.AccessDetector.State =
         (FMRSWRecursiveAccessDetector)(pTVar2->SharedReferenceCount).ReferenceController;
    if (local_1c0.AccessDetector.State != (atomic<unsigned___int64>)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)local_1c0.AccessDetector.State + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)local_1c0.AccessDetector.State + 8) + 1);
      UNLOCK();
    }
    FWidgetPath::GetPathDownTo(param_2,&local_180,(TSharedRef<SWidget_const_,1> *)local_1c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1a8.Accessor);
    bVar1 = FWidgetPath::IsValid(&local_180);
    if ((bVar1) &&
       (bVar1 = FWidgetPath::ContainsWidget(&local_180,(SWidget *)local_190.Object), bVar1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    pSVar3 = TSharedPtr<SSearchBox,1>::operator->(&this->SearchTextWidget);
    local_1c8[1] = true;
    local_1c8[0] = bVar1;
    local_1b0 = 0;
    local_1c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_1b8.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)((longlong)&pSVar3->_padding_ + 2),(SWidget *)pSVar3,(TAttribute<bool> *)local_1c8,
             None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1c0,(FWriteAccessScope *)&local_1a8);
    if (((int)local_1b0 != 0) && (FStack_1b8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1b8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1b8,0,0,0x10);
      local_1b0 = local_1b0 & 0xffffffff00000000;
    }
    if (local_1a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
    }
    if (FStack_1b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1b8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1c0.AccessDetector);
    if (local_180.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_180.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_180.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar4 = (ForElementType<FArrangedWidget>)&local_180.Widgets.Array;
    if (local_180.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar4 = local_180.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar4,local_180.Widgets.Array.ArrayNum);
    if (local_180.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_180.Widgets.Array.AllocatorInstance.SecondaryData);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_190.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnFocusReceived @ 1428271b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMultiBoxWidget::OnFocusReceived
          (SMultiBoxWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent *param_2)

{
  SSearchBox *pSVar1;
  FText *pFVar2;
  undefined1 local_res8 [8];
  FDestructionSentinel local_68;
  undefined1 local_50 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  if ((param_2->Cause != Mouse) &&
     (pSVar1 = (this->SearchTextWidget).Object, pSVar1 != (SSearchBox *)0x0)) {
    pFVar2 = FText::GetEmpty();
    local_50._0_8_ = (pFVar2->TextData).Reference;
    if ((ITextData *)local_50._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_50._0_8_ + 8))(local_50._0_8_,local_res8);
    }
    local_50._8_4_ = pFVar2->Flags;
    local_50[0x10] = true;
    local_28 = 0;
    local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    SEditableTextBox::SetText((SEditableTextBox *)pSVar1,(TAttribute<FText> *)local_50);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_38,(FWriteAccessScope *)&local_68);
    if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
    if ((ITextData *)local_50._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_50._0_8_ + 0x10))();
    }
  }
  pSVar1 = (this->SearchTextWidget).Object;
  if (pSVar1 != (SSearchBox *)0x0) {
    SEditableTextBox::EnableTextInputMethodContext((SEditableTextBox *)pSVar1);
  }
  if (param_2->Cause != Navigation) {
    FReply::FReply(__return_storage_ptr__,false);
    return __return_storage_ptr__;
  }
  FocusNextWidget(__return_storage_ptr__,Next);
  return __return_storage_ptr__;
}

// OnKeyChar @ 142827e30

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMultiBoxWidget::OnKeyChar
          (SMultiBoxWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FCharacterEvent *param_2)

{
  bool bVar1;
  FReply local_c8;
  
  FReply::FReply(__return_storage_ptr__,false);
  if (this->bSearchable != false) {
    bVar1 = FText::IsEmpty(&this->SearchText);
    if (bVar1) {
      BeginSearch(this,param_2->Character);
      FReply::FReply(&local_c8,true);
      FReply::operator=(__return_storage_ptr__,&local_c8);
      FReply::~FReply(&local_c8);
    }
  }
  return __return_storage_ptr__;
}

// OnKeyDown @ 1428280e0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SMultiBoxWidget::OnKeyDown
          (SMultiBoxWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  bool bVar3;
  FReply local_c8;
  
  SWidget::OnKeyDown((SWidget *)this,&local_c8,param_1,param_2);
  FReply::~FReply(&local_c8);
  pTVar1 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->Key).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = FVar2 == EKeys::Up.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar3) {
    FocusNextWidget(__return_storage_ptr__,Previous);
  }
  else {
    pTVar1 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar2 = (param_2->Key).KeyName;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar3 = FVar2 == EKeys::Down.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (bVar3) {
      FocusNextWidget(__return_storage_ptr__,Next);
    }
    else {
      FReply::FReply(__return_storage_ptr__,false);
    }
  }
  return __return_storage_ptr__;
}

// OnVisualizeTooltip @ 14282b7c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
SMultiBoxWidget::OnVisualizeTooltip(SMultiBoxWidget *this,TSharedPtr<SWidget,1> *param_1)

{
  return true;
}

// OnWrapButtonClicked @ 14282b820

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SMultiBoxWidget::OnWrapButtonClicked
          (SMultiBoxWidget *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FMultiBox *pFVar4;
  ISlateStyle *pIVar5;
  FScriptContainerElement *pFVar6;
  SClippingHorizontalBox *pSVar7;
  TWeakPtr<SWidget,1> *pTVar8;
  SClippingVerticalBox *pSVar9;
  TReferenceControllerBase<1> *pTVar10;
  SWidget *pSVar11;
  uint *puVar12;
  undefined1 *puVar13;
  code *pcVar14;
  bool bVar15;
  atomic<int> aVar16;
  TMap<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,0>_>
  *pTVar17;
  TMap<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,0>_>
  *pTVar18;
  bool bVar19;
  atomic<int> aVar20;
  TSharedRef<SWidget,1> *pTVar21;
  FName *pFVar22;
  ForAnyElementType *pFVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  undefined1 *puVar32;
  uint *puVar33;
  TReferenceControllerBase<1> *pTVar34;
  uint local_res18 [2];
  int local_res20;
  TWeakPtr<SWidget,1> *local_2e8;
  ForAnyElementType local_2e0;
  int local_2d8;
  int local_2d4;
  ForAnyElementType local_2d0;
  int local_2c8;
  int iStack_2c4;
  FName local_2c0;
  TWeakPtr<SWidget,1> *local_2b8;
  int local_2b0;
  int local_2ac;
  TMap<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,0>_>
  *local_2a8;
  TWeakPtr<SWidget,1> *local_2a0;
  TSharedPtr<FUICommandList_const_,1> local_298;
  TMap<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,0>_>
  *local_288;
  undefined4 uStack_280;
  uint uStack_27c;
  undefined1 *local_278;
  undefined4 uStack_270;
  int iStack_26c;
  int local_268;
  undefined4 uStack_264;
  int iStack_260;
  undefined4 uStack_25c;
  TMap<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>,0>_>
  *local_258;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_250;
  undefined8 uStack_230;
  FName local_228;
  FUICommandList *local_220;
  TReferenceControllerBase<1> *local_218;
  TSharedPtr<FExtender,1> local_210;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1d4;
  FMenuBuilder local_1d0;
  TReferenceControllerBase<1> *pTVar31;
  
  local_res18[0] = 0;
  local_2c0.ComparisonIndex.Value = 0;
  local_2c0.Number = 0;
  if (((this->MultiBox).Object == (FMultiBox *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar19)) {
    pcVar14 = (code *)swi(3);
    pTVar21 = (TSharedRef<SWidget,1> *)(*pcVar14)();
    return pTVar21;
  }
  pFVar4 = (this->MultiBox).Object;
  local_210.Object = (FExtender *)0x0;
  local_210.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pIVar5 = pFVar4->StyleSet;
  if ((pFVar4 == (FMultiBox *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar19)) {
    pcVar14 = (code *)swi(3);
    pTVar21 = (TSharedRef<SWidget,1> *)(*pcVar14)();
    return pTVar21;
  }
  pFVar4 = (this->MultiBox).Object;
  iVar28 = (pFVar4->CommandLists).ArrayNum;
  if (iVar28 < 1) {
    local_200 = 0;
    uStack_1f8 = 0;
    local_298.Object = (FUICommandList *)0x0;
    local_298.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    uVar30 = 0;
    if ((int)(iVar28 - 1U) < iVar28) {
      uVar30 = ~(iVar28 - 1U) >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar14 = (code *)swi(3);
      pTVar21 = (TSharedRef<SWidget,1> *)(*pcVar14)();
      return pTVar21;
    }
    pFVar6 = (pFVar4->CommandLists).AllocatorInstance.Data;
    lVar25 = (longlong)(pFVar4->CommandLists).ArrayNum;
    local_298.Object = *(FUICommandList **)(pFVar6 + lVar25 * 0x10 + -0x10);
    local_298.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar6 + lVar25 * 0x10 + -8);
    local_220 = local_298.Object;
    local_218 = local_298.SharedReferenceCount.ReferenceController;
    if (local_298.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.SharedReferenceCount.ReferenceController);
  FMenuBuilder::FMenuBuilder(&local_1d0,true,&local_298,&local_210,false,pIVar5,true,local_2c0,true)
  ;
  if ((this->ClippedVerticalBox).Object != (SClippingVerticalBox *)0x0) {
    pFVar22 = ::FName::FName(&local_228,"ClippingVerticalBox.Check");
    local_1d0._padding_ = *(longlong *)pFVar22;
  }
  pSVar7 = (this->ClippedHorizontalBox).Object;
  if (pSVar7 == (SClippingHorizontalBox *)0x0) {
    if (((this->ClippedVerticalBox).Object == (SClippingVerticalBox *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar14 = (code *)swi(3);
      pTVar21 = (TSharedRef<SWidget,1> *)(*pcVar14)();
      return pTVar21;
    }
    pSVar9 = (this->ClippedVerticalBox).Object;
    local_2e0.Data = (FScriptContainerElement *)0x0;
    iVar28 = (pSVar9->ClippedWidgets).ArrayNum;
    pTVar8 = (TWeakPtr<SWidget,1> *)(pSVar9->ClippedWidgets).AllocatorInstance.Data;
    local_2d8 = iVar28;
    if (iVar28 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar28,0,&local_2e0,iVar28,&local_2d4);
      ConstructItems<TWeakPtr<SWidget,1>,TWeakPtr<SWidget,1>,int>(local_2e0.Data,pTVar8,iVar28);
    }
    pFVar23 = &local_2e0;
    bVar15 = false;
    bVar19 = true;
    local_2e8 = (TWeakPtr<SWidget,1> *)local_2e0.Data;
  }
  else {
    local_2d0.Data = (FScriptContainerElement *)0x0;
    iVar28 = (pSVar7->ClippedWidgets).ArrayNum;
    pTVar8 = (TWeakPtr<SWidget,1> *)(pSVar7->ClippedWidgets).AllocatorInstance.Data;
    local_2c8 = iVar28;
    if (iVar28 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar28,0,&local_2d0,iVar28,&iStack_2c4);
      ConstructItems<TWeakPtr<SWidget,1>,TWeakPtr<SWidget,1>,int>(local_2d0.Data,pTVar8,iVar28);
    }
    pFVar23 = &local_2d0;
    bVar15 = true;
    bVar19 = false;
    local_2e8 = (TWeakPtr<SWidget,1> *)local_2d0.Data;
  }
  pFVar23->Data = (FScriptContainerElement *)0x0;
  local_res20 = *(int *)&pFVar23[1].Data;
  lVar25 = (longlong)local_res20;
  pFVar23[1].Data = (FScriptContainerElement *)0x0;
  if ((bVar19) &&
     (DestructItems<TWeakPtr<SWidget,1>,int>((TWeakPtr<SWidget,1> *)local_2e0.Data,local_2d8),
     (TWeakPtr<SWidget,1> *)local_2e0.Data != (TWeakPtr<SWidget,1> *)0x0)) {
    FMemory::Free(local_2e0.Data);
  }
  if ((bVar15) &&
     (DestructItems<TWeakPtr<SWidget,1>,int>((TWeakPtr<SWidget,1> *)local_2d0.Data,local_2c8),
     (TWeakPtr<SWidget,1> *)local_2d0.Data != (TWeakPtr<SWidget,1> *)0x0)) {
    FMemory::Free(local_2d0.Data);
  }
  local_2a0 = local_2e8 + lVar25;
  local_2b8 = local_2e8;
LAB_14282bb6c:
  pTVar31 = (TReferenceControllerBase<1> *)0x0;
  if (local_2b8 == local_2a0) {
    (**(code **)(local_1d0._padding_ + 0x20))(&local_1d0,__return_storage_ptr__,0,1000);
    DestructItems<TWeakPtr<SWidget,1>,int>(local_2e8,local_res20);
    if (local_2e8 != (TWeakPtr<SWidget,1> *)0x0) {
      FMemory::Free(local_2e8);
    }
    FMenuBuilder::~FMenuBuilder(&local_1d0);
    return __return_storage_ptr__;
  }
  pTVar10 = (local_2b8->WeakReferenceCount).ReferenceController;
  pTVar34 = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar16 = pTVar10->SharedReferenceCount;
    do {
      pTVar34 = pTVar31;
      if (aVar16 == (atomic<int>)0x0) goto LAB_14282bba2;
      LOCK();
      aVar20 = pTVar10->SharedReferenceCount;
      bVar19 = aVar16 == aVar20;
      if (bVar19) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar16 + 1);
        aVar20 = aVar16;
      }
      UNLOCK();
      aVar16 = aVar20;
    } while (!bVar19);
    pSVar11 = local_2b8->Object;
    pTVar34 = pTVar10;
    if (pSVar11 != (SWidget *)0x0) {
      local_2a8 = &this->FinalMultiBoxWidgets;
      puVar1 = &(this->FinalMultiBoxWidgets).field_0x10;
      iVar28 = *(int *)&(this->FinalMultiBoxWidgets).field_0x28;
      local_268 = 0;
      uStack_27c = 1;
      iStack_26c = 0;
      if (iVar28 != 0) {
        puVar12 = *(uint **)&(this->FinalMultiBoxWidgets).field_0x20;
        puVar33 = (uint *)puVar1;
        if (puVar12 != (uint *)0x0) {
          puVar33 = puVar12;
        }
        uVar30 = *puVar33;
        while (uVar30 == 0) {
          iVar27 = (int)pTVar31;
          local_268 = local_268 + 0x20;
          uVar30 = iVar27 + 1;
          pTVar31 = (TReferenceControllerBase<1> *)(ulonglong)uVar30;
          iStack_26c = iVar28;
          if ((int)(iVar28 + -1 + (iVar28 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar30)
          goto LAB_14282bc4d;
          uVar30 = puVar33[(longlong)iVar27 + 1];
        }
        uStack_27c = -uVar30 & uVar30;
        uVar2 = (ulonglong)uStack_27c * 2 + 1;
        lVar25 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_2b0 = (int)lVar25;
        iStack_26c = local_268 + -1 + local_2b0;
        if (iVar28 < iStack_26c) {
          iStack_26c = iVar28;
        }
      }
LAB_14282bc4d:
      uStack_264 = local_1d4;
      iStack_260 = *(int *)&(this->FinalMultiBoxWidgets).field_0x8 -
                   *(int *)&(this->FinalMultiBoxWidgets).field_0x34;
      uVar30 = *(uint *)&(this->FinalMultiBoxWidgets).field_0x28;
      uVar29 = uVar30 & 0xffffffe0;
      uStack_280 = SUB84(pTVar31,0);
      TStack_250._padding_ = CONCAT44(uStack_27c,uStack_280);
      uStack_270 = 0xffffffff;
      TStack_250.CurrentBitIndex = iStack_26c;
      TStack_250.UnvisitedBitMask = 0xffffffff;
      iVar27 = (int)uVar30 >> 5;
      TStack_250._28_4_ = local_1d4;
      TStack_250.BaseBitIndex = local_268;
      uStack_230 = CONCAT44(uStack_25c,iStack_260);
      local_288 = local_2a8;
      local_278 = puVar1;
      local_258 = local_2a8;
      TStack_250.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar30 < 0) || (iVar28 < (int)uVar30)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar19)) {
        pcVar14 = (code *)swi(3);
        pTVar21 = (TSharedRef<SWidget,1> *)(*pcVar14)();
        return pTVar21;
      }
      pTVar17 = local_2a8;
      uVar3 = *(uint *)&(this->FinalMultiBoxWidgets).field_0x28;
      if (uVar30 != uVar3) {
        puVar13 = *(undefined1 **)&(this->FinalMultiBoxWidgets).field_0x20;
        puVar32 = puVar1;
        if (puVar13 != (undefined1 *)0x0) {
          puVar32 = puVar13;
        }
        uVar30 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)(puVar32 + (longlong)iVar27 * 4);
        while (uVar30 == 0) {
          lVar25 = (longlong)iVar27;
          uVar29 = uVar29 + 0x20;
          iVar27 = iVar27 + 1;
          uVar30 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
          goto LAB_14282bd61;
          uVar30 = *(uint *)(puVar32 + lVar25 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
        lVar25 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_2ac = (int)lVar25;
        uVar30 = (uVar29 - 1) + local_2ac;
        if ((int)uVar3 < (int)uVar30) {
          uVar30 = uVar3;
        }
      }
LAB_14282bd61:
      do {
        pTVar18 = local_258;
        if (*(int *)&local_258->field_0x8 - *(int *)&local_258->field_0x34 != (int)uStack_230) {
          local_res18[0] = local_res18[0] & 0xffffff00;
          `TSparseArray<TSparseSetElement<TTuple<TSharedPtr<SWidget,1>,TSharedPtr<FMultiBlock_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_250.CurrentBitIndex == uVar30) &&
            (TStack_250.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar18 == pTVar17)) break;
        lVar26 = *(longlong *)pTVar18;
        lVar25 = lVar26 + (longlong)TStack_250.CurrentBitIndex * 0x28;
        if (pSVar11 == *(SWidget **)(lVar26 + (longlong)TStack_250.CurrentBitIndex * 0x28))
        goto LAB_14282bdbf;
        TStack_250.UnvisitedBitMask = TStack_250.UnvisitedBitMask & ~TStack_250._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_250);
      } while( true );
    }
  }
  goto LAB_14282bba2;
LAB_14282bdbf:
  if ((*(longlong *)(lVar25 + 0x10) == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar19)) {
    pcVar14 = (code *)swi(3);
    pTVar21 = (TSharedRef<SWidget,1> *)(*pcVar14)();
    return pTVar21;
  }
  (**(code **)(**(longlong **)(lVar25 + 0x10) + 8))(*(longlong **)(lVar25 + 0x10),&local_1d0);
  if (((this->MultiBox).Object == (FMultiBox *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar19)) {
    pcVar14 = (code *)swi(3);
    pTVar21 = (TSharedRef<SWidget,1> *)(*pcVar14)();
    return pTVar21;
  }
  pFVar4 = (this->MultiBox).Object;
  pTVar31 = (this->MultiBox).SharedReferenceCount.ReferenceController;
  if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar4 == (FMultiBox *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar19)) {
    pcVar14 = (code *)swi(3);
    pTVar21 = (TSharedRef<SWidget,1> *)(*pcVar14)();
    return pTVar21;
  }
  if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  if ((*(longlong *)(lVar25 + 0x10) == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar19)) {
    pcVar14 = (code *)swi(3);
    pTVar21 = (TSharedRef<SWidget,1> *)(*pcVar14)();
    return pTVar21;
  }
  pTVar31 = *(TReferenceControllerBase<1> **)(lVar25 + 0x18);
  lVar25 = *(longlong *)(lVar25 + 0x10);
  if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar25 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar19)) {
    pcVar14 = (code *)swi(3);
    pTVar21 = (TSharedRef<SWidget,1> *)(*pcVar14)();
    return pTVar21;
  }
  pFVar6 = (pFVar4->Blocks).AllocatorInstance.Data;
  for (pFVar24 = pFVar6; pFVar24 != pFVar6 + (longlong)(pFVar4->Blocks).ArrayNum * 0x10;
      pFVar24 = pFVar24 + 0x10) {
    if (*(longlong *)pFVar24 == lVar25) {
      iVar28 = (int)((longlong)pFVar24 - (longlong)pFVar6 >> 4);
      goto LAB_14282bf27;
    }
  }
  iVar28 = -1;
LAB_14282bf27:
  iVar28 = iVar28 + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
  if (iVar28 < (pFVar4->Blocks).ArrayNum) {
    if ((iVar28 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar14 = (code *)swi(3);
      pTVar21 = (TSharedRef<SWidget,1> *)(*pcVar14)();
      return pTVar21;
    }
    pFVar6 = (pFVar4->Blocks).AllocatorInstance.Data;
    lVar26 = (longlong)iVar28;
    lVar25 = *(longlong *)(pFVar6 + lVar26 * 0x10);
    if (*(char *)(lVar25 + 0xa8) == '\a') {
      pTVar31 = *(TReferenceControllerBase<1> **)(pFVar6 + lVar26 * 0x10 + 8);
      if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (*(char *)(lVar25 + 0x2d3) != '\0') {
        (**(code **)(**(longlong **)(pFVar6 + lVar26 * 0x10) + 8))
                  (*(longlong **)(pFVar6 + lVar26 * 0x10),&local_1d0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31);
    }
  }
LAB_14282bba2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar34);
  local_2b8 = local_2b8 + 1;
  goto LAB_14282bb6c;
}

// ResetSearch @ 142832ec0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SMultiBoxWidget::ResetSearch(SMultiBoxWidget *this)

{
  SSearchBox *this_00;
  FText *pFVar1;
  undefined1 local_res8 [8];
  FDestructionSentinel local_58;
  undefined1 local_40 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this_00 = (this->SearchTextWidget).Object;
  if (this_00 != (SSearchBox *)0x0) {
    pFVar1 = FText::GetEmpty();
    local_40._0_8_ = (pFVar1->TextData).Reference;
    if ((ITextData *)local_40._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_40._0_8_ + 8))(local_40._0_8_,local_res8);
    }
    local_40._8_4_ = pFVar1->Flags;
    local_40[0x10] = true;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SEditableTextBox::SetText((SEditableTextBox *)this_00,(TAttribute<FText> *)local_40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_58);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
    if ((ITextData *)local_40._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_40._0_8_ + 0x10))();
    }
  }
  return;
}

// SetMultiBox @ 1428351c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SMultiBoxWidget::SetMultiBox(SMultiBoxWidget *this,TSharedRef<FMultiBox,1> *param_1)

{
  FMultiBox *local_18;
  FSharedReferencer<1> local_10;
  
  local_18 = param_1->Object;
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MultiBox != (TSharedPtr<FMultiBox,1> *)&local_18) {
    (this->MultiBox).Object = local_18;
    local_18 = (FMultiBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MultiBox).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetSearchBlockWidget @ 142835940

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SMultiBoxWidget::SetSearchBlockWidget(SMultiBoxWidget *this,TSharedPtr<SWidget,1> *param_1)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pSVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SearchBlockWidget).SharedReferenceCount.ReferenceController;
  (this->SearchBlockWidget).Object = pSVar1;
  (this->SearchBlockWidget).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetSearchable @ 1428359b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SMultiBoxWidget::SetSearchable(SMultiBoxWidget *this,bool param_1)

{
  this->bSearchable = param_1;
  return;
}

// SetSummonedMenuTime @ 142835a50

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall SMultiBoxWidget::SetSummonedMenuTime(SMultiBoxWidget *this,double param_1)

{
  this->SummonedMenuTime = param_1;
  return;
}

// ShouldShowMenuSearchField @ 142835ca0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall SMultiBoxWidget::ShouldShowMenuSearchField(SMultiBoxWidget *this)

{
  EMultiBlockType EVar1;
  int iVar2;
  FMultiBox *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int *piVar8;
  ForAnyElementType FVar9;
  TSharedRef<FMultiBlock_const_,1> *pTVar10;
  int iVar11;
  int iVar12;
  undefined1 local_res8 [8];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  piVar8 = TAttribute<int>::Get(&FMultiBoxSettings::MenuSearchFieldVisibilityThreshold);
  iVar2 = *piVar8;
  if ((this->MultiBox).Object == (FMultiBox *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pFVar3 = (this->MultiBox).Object;
  iVar11 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  iVar7 = (pFVar3->Blocks).ArrayNum;
  pTVar10 = (TSharedRef<FMultiBlock_const_,1> *)(pFVar3->Blocks).AllocatorInstance.Data;
  local_30 = iVar7;
  if (iVar7 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar7,0,&local_38,iVar7,&local_2c);
    ConstructItems<TSharedRef<FMultiBlock_const_,1>,TSharedRef<FMultiBlock_const_,1>,int>
              (local_38.Data,pTVar10,iVar7);
  }
  iVar7 = local_30;
  pTVar10 = (TSharedRef<FMultiBlock_const_,1> *)(local_38.Data + (longlong)local_30 * 0x10);
  FVar9.Data = local_38.Data;
  iVar12 = local_30;
  while( true ) {
    if (iVar12 != iVar7) {
      `TCheckedPointerIterator<TSharedRef<FMultiBlock_const_,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
      iVar12 = local_30;
    }
    if ((TSharedRef<FMultiBlock_const_,1> *)FVar9.Data == pTVar10) break;
    EVar1 = ((TSharedRef<FMultiBlock_const_,1> *)FVar9.Data)->Object->Type;
    if ((EVar1 != Heading) && (EVar1 != Separator)) {
      iVar11 = iVar11 + 1;
    }
    FVar9.Data = FVar9.Data + 0x10;
  }
  iVar7 = iVar11 + -1;
  if (iVar11 + -1 < 0) {
    iVar7 = 0;
  }
  DestructItems<TSharedRef<FMultiBlock_const_,1>,int>
            ((TSharedRef<FMultiBlock_const_,1> *)local_38.Data,iVar12);
  if ((TSharedRef<FMultiBlock_const_,1> *)local_38.Data != (TSharedRef<FMultiBlock_const_,1> *)0x0)
  {
    FMemory::Free(local_38.Data);
  }
  return iVar2 <= iVar7;
}

// SupportsKeyboardFocus @ 142836700

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall SMultiBoxWidget::SupportsKeyboardFocus(SMultiBoxWidget *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->MultiBox).Object != (FMultiBox *)0x0) {
    return ((this->MultiBox).Object)->bIsFocusable;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return ((this->MultiBox).Object)->bIsFocusable;
}

// UpdateDropAreaPreviewBlock @ 1428395e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SMultiBoxWidget::UpdateDropAreaPreviewBlock
          (SMultiBoxWidget *this,TSharedRef<FMultiBlock_const_,1> *param_1,
          TSharedPtr<FUICommandDragDropOp,1> *param_2,FGeometry *param_3,TVector2<double> *param_4)

{
  EMultiBlockType EVar1;
  int iVar2;
  FName FVar3;
  FUICommandDragDropOp *pFVar4;
  FMultiBox *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  TTransform2<float> *pTVar14;
  FDropPreviewBlock *this_00;
  TSharedRef<SWidget,1> *pTVar15;
  TSharedRef<IMultiBlockBaseWidget,1> *pTVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  FMultiBlock *this_01;
  FScriptContainerElement *pFVar19;
  TReferenceControllerBase<1> *pTVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStackY_188 [32];
  undefined1 local_158;
  char local_157;
  float local_154;
  float fStack_150;
  float local_14c;
  float fStack_148;
  int local_144;
  float local_140;
  float fStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  TSharedRef<FMultiBlock_const_,1> *local_128;
  FName local_120;
  TRawPtrProxy<FDropPreviewBlock> local_118;
  TSharedPtr<FUICommandDragDropOp,1> *local_110;
  TSharedRef<SMultiBoxWidget,1> local_108;
  TSharedRef<SWidget,1> local_f8;
  TSharedPtr<SWidget,1> local_e8;
  TSharedPtr<FUICommandList_const_,1> local_d8;
  TSharedPtr<FUICommandInfo_const_,1> local_c8;
  TSharedRef<IMultiBlockBaseWidget,1> local_b8;
  TTransform2<float> local_a8;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_128 = param_1;
  local_110 = param_2;
  if (param_2->Object == (FUICommandDragDropOp *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FVar3 = param_2->Object->ItemName;
  if (param_2->Object == (FUICommandDragDropOp *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  EVar1 = param_2->Object->BlockType;
  if (param_2->Object == (FUICommandDragDropOp *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar4 = param_2->Object;
  local_120 = pFVar4->OriginMultiBox;
  local_140 = (float)(param_4->field0_0x0)._s_0.X;
  fStack_13c = (float)(param_4->field0_0x0)._s_0.Y;
  pTVar14 = Inverse<TTransform2<float>_>(&local_a8,&param_3->AccumulatedRenderTransform);
  fVar23 = fStack_13c * (pTVar14->M).M[1][0] + local_140 * (pTVar14->M).M[0][0] +
           (pTVar14->Trans).field0_0x0._s_0.X;
  fVar25 = local_140 * (pTVar14->M).M[0][1] + fStack_13c * (pTVar14->M).M[1][1] +
           (pTVar14->Trans).field0_0x0._s_0.Y;
  _local_154 = CONCAT44(fVar25,fVar23);
  local_138 = param_3->Size;
  fVar22 = (float)local_138 * param_3->Scale;
  fVar24 = local_138._4_4_ * param_3->Scale;
  dVar9 = (double)fVar23;
  _local_14c = CONCAT44(fVar24,fVar22);
  dVar8 = (double)fVar25;
  if (pFVar4 == (FUICommandDragDropOp *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_157 = param_2->Object->bIsDraggingSection;
  if (((this->DragPreview).BlockName != FVar3) || ((this->DragPreview).BlockType != EVar1)) {
    if ((this->MultiBox).Object == (FMultiBox *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar5 = (this->MultiBox).Object;
    iVar17 = (pFVar5->Blocks).ArrayNum;
    pFVar19 = (pFVar5->Blocks).AllocatorInstance.Data;
    pFVar18 = pFVar19 + (longlong)iVar17 * 0x10;
    while( true ) {
      if ((pFVar5->Blocks).ArrayNum != iVar17) {
        local_158 = 0;
        `TCheckedPointerIterator<TSharedRef<FMultiBlock_const_,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_158);
      }
      if (pFVar19 == pFVar18) {
        this_01 = (FMultiBlock *)0x0;
        pTVar20 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1428398cd;
      }
      this_01 = *(FMultiBlock **)pFVar19;
      if ((this_01->ExtensionHook == FVar3) && (this_01->Type == EVar1)) break;
      pFVar19 = pFVar19 + 0x10;
    }
    pTVar20 = *(TReferenceControllerBase<1> **)(pFVar19 + 8);
    if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_01 != (FMultiBlock *)0x0) {
      TSharedPtr<FMultiBox,1>::operator->(&this->MultiBox);
      if (local_120 != (FName)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20)
        ;
        goto LAB_142839c49;
      }
    }
    if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
    }
LAB_1428398cd:
    if (this_01 != (FMultiBlock *)0x0) {
      FDraggedMultiBlockPreview::Reset(&this->DragPreview);
      (this->DragPreview).BlockName = FVar3;
      (this->DragPreview).BlockType = EVar1;
      this_00 = ::operator_new(0x1e8);
      if (this_00 == (FDropPreviewBlock *)0x0) {
        this_00 = (FDropPreviewBlock *)0x0;
      }
      else {
        local_e8.Object = (SWidget *)0x0;
        local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        bVar11 = (bool)(**(code **)(this_01->_padding_ + 0x20))(this_01);
        pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_f8);
        local_108.Object = (SMultiBoxWidget *)pTVar15->Object;
        local_108.SharedReferenceCount.ReferenceController =
             (pTVar15->SharedReferenceCount).ReferenceController;
        if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.SharedReferenceCount.ReferenceController);
        pTVar16 = FMultiBlock::MakeWidget(this_01,&local_b8,&local_108,None,bVar11,&local_e8);
        if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_130 = 0;
        local_d8.Object = (FUICommandList *)0x0;
        local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_c8.Object = (FUICommandInfo *)0x0;
        local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        FMultiBlock::FMultiBlock((FMultiBlock *)this_00,&local_c8,&local_d8,(FName)0x0,None,false);
        this_00->_padding_ = (longlong)&___7FDropPreviewBlock__6B_;
        (this_00->ActualBlock).Object = this_01;
        (this_00->ActualBlock).SharedReferenceCount.ReferenceController = pTVar20;
        if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
          UNLOCK();
        }
        (this_00->ActualWidget).Object = pTVar16->Object;
        pTVar6 = (pTVar16->SharedReferenceCount).ReferenceController;
        (this_00->ActualWidget).SharedReferenceCount.ReferenceController = pTVar6;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pTVar16->SharedReferenceCount).ReferenceController);
        if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
           (0 < *(int *)(this_00->_padding_ + 8))) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7a5,L"Trying to share an already-shared object");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
      }
      local_118.Object = this_00;
      TSharedPtr<FDropPreviewBlock,1>::operator=<FDropPreviewBlock>
                (&(this->DragPreview).PreviewBlock,&local_118);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
    param_1 = local_128;
  }
  cVar10 = local_157;
  if ((this->MultiBox).Object == (FMultiBox *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar5 = (this->MultiBox).Object;
  if (pFVar5->Type == ToolBar) {
    dVar8 = (double)fVar22 * __real_3fe0000000000000;
    (this->DragPreview).InsertOrientation = Orient_Horizontal;
    bVar11 = dVar8 == dVar9;
    bVar21 = dVar8 < dVar9;
  }
  else {
    dVar9 = (double)fVar24 * __real_3fe0000000000000;
    (this->DragPreview).InsertOrientation = Orient_Vertical;
    bVar11 = dVar9 == dVar8;
    bVar21 = dVar9 < dVar8;
  }
  (this->DragPreview).InsertIndex = -1;
  if ((this->DragPreview).PreviewBlock.Object != (FDropPreviewBlock *)0x0) {
    if (pFVar5 == (FMultiBox *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar12) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar5 = (this->MultiBox).Object;
    pFVar19 = (pFVar5->Blocks).AllocatorInstance.Data;
    if (pFVar19 != pFVar19 + (longlong)(pFVar5->Blocks).ArrayNum * 0x10) {
      pFVar18 = pFVar19;
      do {
        if (*(FMultiBlock **)pFVar18 == param_1->Object) {
          iVar17 = (int)((longlong)pFVar18 - (longlong)pFVar19 >> 4);
          goto LAB_142839b93;
        }
        pFVar18 = pFVar18 + 0x10;
      } while (pFVar18 != pFVar19 + (longlong)(pFVar5->Blocks).ArrayNum * 0x10);
    }
    iVar17 = -1;
LAB_142839b93:
    local_144 = -1;
    if (pFVar5 == (FMultiBox *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar12) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar13 = FMultiBox::GetSectionEditBounds((this->MultiBox).Object,iVar17,&local_144);
    if (cVar10 == '\0') {
      if (iVar17 != -1) {
        EVar1 = param_1->Object->Type;
        if ((EVar1 == Heading) || (param_1->Object->bIsPartOfHeading != false)) {
          if (EVar1 != Separator) {
            iVar17 = iVar17 + 1;
          }
        }
        else if (bVar21 || bVar11) {
          (this->DragPreview).InsertIndex = iVar17 + 1;
          goto LAB_142839c49;
        }
        (this->DragPreview).InsertIndex = iVar17;
      }
    }
    else {
      iVar2 = (pFVar5->Blocks).ArrayNum;
      if ((iVar17 == iVar2 + -1) && (0 < iVar2)) {
        (this->DragPreview).InsertIndex = iVar2;
      }
      else if ((-1 < iVar13) && (iVar13 < iVar2)) {
        (this->DragPreview).InsertIndex = iVar13;
      }
    }
  }
LAB_142839c49:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_128->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_110->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateMultiBoxWidget @ 142839cb0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SMultiBoxWidget::UpdateMultiBoxWidget(SMultiBoxWidget *this,TSharedRef<FMultiBox,1> *param_1)

{
  TSharedRef<FMultiBox,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SetMultiBox(this,&local_18);
  BuildMultiBoxWidget(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

