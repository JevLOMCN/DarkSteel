// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// Reset @ 141eb6ca0

void __thiscall
TUniquePtr<TDirectoryTree<FMountPoint_*>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<FMountPoint_*>::FTreeNode_[0]>_>
::Reset(TUniquePtr<TDirectoryTree<FMountPoint_*>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<FMountPoint_*>::FTreeNode_[0]>_>
        *this,void *param_1)

{
  uint *puVar1;
  undefined6 in_register_00000012;
  FTreeNode *pFVar2;
  longlong lVar3;
  
  pFVar2 = this->Ptr;
  this->Ptr = (FTreeNode *)CONCAT62(in_register_00000012,param_1);
  if (pFVar2 != (FTreeNode *)0x0) {
    puVar1 = &pFVar2[-1].NumChildNodesAndFlags;
    lVar3 = *(longlong *)puVar1;
    pFVar2 = pFVar2 + lVar3;
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      pFVar2 = pFVar2 + -1;
      TDirectoryTree<FMountPoint_*>::FTreeNode::~FTreeNode(pFVar2);
    }
    operator_delete__(puVar1,*(longlong *)puVar1 * 0x20 + 8);
  }
  return;
}

// operator= @ 1420a52b0

TUniquePtr<UPackage::FAdditionalInfo,TDefaultDelete<UPackage::FAdditionalInfo>_> * __thiscall
TUniquePtr<UPackage::FAdditionalInfo,TDefaultDelete<UPackage::FAdditionalInfo>_>::operator=
          (TUniquePtr<UPackage::FAdditionalInfo,TDefaultDelete<UPackage::FAdditionalInfo>_> *this,
          TUniquePtr<UPackage::FAdditionalInfo,TDefaultDelete<UPackage::FAdditionalInfo>_> *param_1)

{
  FAdditionalInfo *pFVar1;
  FWorldTileInfo *pFVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    pFVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FAdditionalInfo *)0x0;
    if (pFVar1 != (FAdditionalInfo *)0x0) {
      pFVar2 = (pFVar1->WorldTileInfo).Ptr;
      if (pFVar2 != (FWorldTileInfo *)0x0) {
        pFVar3 = (pFVar2->LODList).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        pFVar3 = (pFVar2->ParentTilePackageName).Data.AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        pFVar3 = (pFVar2->Layer).Name.Data.AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        ::operator_delete(pFVar2,0xa8);
      }
      pFVar3 = (pFVar1->LinkerCustomVersion).Versions.AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      ::operator_delete(pFVar1,0x38);
    }
    return this;
  }
  return this;
}

// operator= @ 14225a0c0

TUniquePtr<FObjectInitializer::FOverrides,TDefaultDelete<FObjectInitializer::FOverrides>_> *
__thiscall
TUniquePtr<FObjectInitializer::FOverrides,TDefaultDelete<FObjectInitializer::FOverrides>_>::
operator=(TUniquePtr<FObjectInitializer::FOverrides,TDefaultDelete<FObjectInitializer::FOverrides>_>
          *this,TUniquePtr<FObjectInitializer::FOverrides,TDefaultDelete<FObjectInitializer::FOverrides>_>
                *param_1)

{
  FOverride *pFVar1;
  FName FVar2;
  
  if (this != param_1) {
    pFVar1 = (FOverride *)this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FOverrides *)0x0;
    if (pFVar1 != (FOverride *)0x0) {
      FVar2 = pFVar1[8].ComponentName;
      if (pFVar1[8].ComponentName == (FName)0x0) {
        FVar2 = (FName)pFVar1;
      }
      DestructItems<FObjectInitializer::FOverrides::FOverride,int>
                ((FOverride *)FVar2,*(int *)&pFVar1[8].ComponentClass);
      if (pFVar1[8].ComponentName != (FName)0x0) {
        FMemory::Free((void *)pFVar1[8].ComponentName);
      }
      ::operator_delete(pFVar1,0x110);
    }
    return this;
  }
  return this;
}

