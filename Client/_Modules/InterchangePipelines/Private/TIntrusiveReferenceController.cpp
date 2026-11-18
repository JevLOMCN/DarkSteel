// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 12

// DestroyObject @ 14e79fc30

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>::
DestroyObject(TIntrusiveReferenceController<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>
              *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14e79fc80

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>
                *this)

{
  SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
  ~SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
            ((SListView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14e79fc90

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>
                *this)

{
  STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
  ~STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
            ((STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14e79fca0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
                *this)

{
  STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
  ~STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
            ((STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14e79fcb0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
                *this)

{
  STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
  ~STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
            ((STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14e79fcc0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,1>
                *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
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
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 14e79fd10

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
                *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
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
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 14e79fd60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SInterchangeCompareSkeletonTreeViewItem,1>::
DestroyObject(TIntrusiveReferenceController<SInterchangeCompareSkeletonTreeViewItem,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x400));
  STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
  ~STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
            ((STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14e79fd90

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SInterchangeGenericAssetMaterialConflictListRow,1>::DestroyObject
          (TIntrusiveReferenceController<SInterchangeGenericAssetMaterialConflictListRow,1> *this)

{
  void *pvVar1;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x460));
  (this->ObjectStorage).Pad[0x450] = '\0';
  (this->ObjectStorage).Pad[0x451] = '\0';
  (this->ObjectStorage).Pad[0x452] = '\0';
  (this->ObjectStorage).Pad[0x453] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x448);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x408));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x400));
  STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>::
  ~STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
            ((STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14e79fe00

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SInterchangeGenericAssetMaterialConflictWidget,1>::DestroyObject
          (TIntrusiveReferenceController<SInterchangeGenericAssetMaterialConflictWidget,1> *this)

{
  SInterchangeGenericAssetMaterialConflictWidget::~SInterchangeGenericAssetMaterialConflictWidget
            ((SInterchangeGenericAssetMaterialConflictWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e79fe10

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SInterchangeGenericAssetSkeletonConflictWidget,1>::DestroyObject
          (TIntrusiveReferenceController<SInterchangeGenericAssetSkeletonConflictWidget,1> *this)

{
  SInterchangeGenericAssetSkeletonConflictWidget::~SInterchangeGenericAssetSkeletonConflictWidget
            ((SInterchangeGenericAssetSkeletonConflictWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e79fe20

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget,1>
::DestroyObject(TIntrusiveReferenceController<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget,1>
                *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c0));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2b0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

