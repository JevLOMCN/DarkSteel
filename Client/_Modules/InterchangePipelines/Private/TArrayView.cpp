// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 4

// operator[] @ 14e76d730

TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> * __thiscall
TArrayView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_const_,int>::
operator[](TArrayView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_const_,int>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14e76d7b0

TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> * __thiscall
TArrayView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_const_,int>::operator[]
          (TArrayView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_const_,int>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// Last @ 14e7c9600

TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> * __thiscall
TArrayView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_const_,int>::Last
          (TArrayView<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_const_,int>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ~param_1 + this->ArrayNum;
  uVar3 = 0;
  if ((int)uVar5 < this->ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + ((this->ArrayNum - param_1) + -1);
}

// Last @ 14e7c9690

TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> * __thiscall
TArrayView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_const_,int>::Last
          (TArrayView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_const_,int>
           *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ~param_1 + this->ArrayNum;
  uVar3 = 0;
  if ((int)uVar5 < this->ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + ((this->ArrayNum - param_1) + -1);
}

