// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 6

// TSharedPtr<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1><STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_> @ 14e72fa70

TSharedPtr<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1> *
__thiscall
TSharedPtr<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>::
TSharedPtr<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1><STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_>
          (TSharedPtr<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
           *this,TSharedRef<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
                 *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TSharedPtr<SInterchangeGenericAssetSkeletonConflictWidget,1><SInterchangeGenericAssetSkeletonConflictWidget> @ 14e72faa0

TSharedPtr<SInterchangeGenericAssetSkeletonConflictWidget,1> * __thiscall
TSharedPtr<SInterchangeGenericAssetSkeletonConflictWidget,1>::
TSharedPtr<SInterchangeGenericAssetSkeletonConflictWidget,1><SInterchangeGenericAssetSkeletonConflictWidget>
          (TSharedPtr<SInterchangeGenericAssetSkeletonConflictWidget,1> *this,
          TSharedRef<SInterchangeGenericAssetSkeletonConflictWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// operator= @ 14e76d260

TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> * __thiscall
TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>::operator=
          (TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> *this,
          TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FListItem *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator= @ 14e76d2b0

TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> * __thiscall
TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>::operator=
          (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *this,
          TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSkeletonJoint *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pFVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator= @ 14e76d300

TSharedPtr<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1> *
__thiscall
TSharedPtr<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>::operator=
          (TSharedPtr<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
           *this,TSharedPtr<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
                 *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object =
         (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 14e76d830

FSkeletonJoint * __thiscall
TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>::operator->
          (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FSkeletonJoint *pFVar3;
  
  if (this->Object != (FSkeletonJoint *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSkeletonJoint *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

