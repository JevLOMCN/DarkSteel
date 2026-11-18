// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 2

// operator= @ 142adb640

/* WARNING: Enum "EOptionalBool": Some values do not have unique names */

TUniquePtr<FDiskCachedAssetData_[0],TDefaultDelete<FDiskCachedAssetData_[0]>_> * __thiscall
TUniquePtr<FDiskCachedAssetData_[0],TDefaultDelete<FDiskCachedAssetData_[0]>_>::operator=
          (TUniquePtr<FDiskCachedAssetData_[0],TDefaultDelete<FDiskCachedAssetData_[0]>_> *this,
          TUniquePtr<FDiskCachedAssetData_[0],TDefaultDelete<FDiskCachedAssetData_[0]>_> *param_1)

{
  bool *pbVar1;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar2;
  FDiskCachedAssetData *pFVar3;
  FScriptContainerElement *pFVar4;
  TArray<FAssetData,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  
  if (this != param_1) {
    pFVar3 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FDiskCachedAssetData *)0x0;
    if (pFVar3 != (FDiskCachedAssetData *)0x0) {
      lVar6 = *(longlong *)&pFVar3[-1].DependencyData.bHasPackageData;
      pbVar1 = &pFVar3[-1].DependencyData.bHasPackageData;
      if (lVar6 != 0) {
        pTVar5 = &pFVar3[lVar6].AssetDataList;
        do {
          pTVar2 = pTVar5 + -0x11;
          lVar6 = lVar6 + -1;
          FPackageDependencyData::~FPackageDependencyData
                    ((FPackageDependencyData *)(pTVar5 + -0x10));
          DestructItems<FAssetData,int>
                    ((FAssetData *)(pTVar2->AllocatorInstance).Data,
                     *(int *)((longlong)(pTVar5 + -0x11) + 8));
          pFVar4 = (pTVar2->AllocatorInstance).Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          pTVar5 = pTVar2;
        } while (lVar6 != 0);
      }
      operator_delete__(pbVar1,*(longlong *)pbVar1 * 0x110 + 8);
    }
  }
  return this;
}

// Reset @ 142b173b0

void __thiscall
TUniquePtr<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode_[0]>_>
::Reset(TUniquePtr<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode_[0]>_>
        *this,void *param_1)

{
  FTreeNode *pFVar1;
  undefined6 in_register_00000012;
  longlong lVar2;
  FTreeNode *this_00;
  
  pFVar1 = this->Ptr;
  this->Ptr = (FTreeNode *)CONCAT62(in_register_00000012,param_1);
  if (pFVar1 != (FTreeNode *)0x0) {
    lVar2 = *(longlong *)&pFVar1[-1].NumChildNodesAndFlags;
    this_00 = pFVar1 + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      this_00 = this_00 + -1;
      TDirectoryTree<TSharedPtr<UE::AssetDataGather::Private::FDirectoryReadTaskData,1>_>::FTreeNode
      ::~FTreeNode(this_00);
    }
    operator_delete__(&pFVar1[-1].NumChildNodesAndFlags,
                      *(longlong *)&pFVar1[-1].NumChildNodesAndFlags * 0x28 + 8);
  }
  return;
}

