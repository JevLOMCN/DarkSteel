// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 2

// Reset @ 148cdafc0

void __thiscall
TUniquePtr<TDirectoryTree<FString>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<FString>::FTreeNode_[0]>_>
::Reset(TUniquePtr<TDirectoryTree<FString>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<FString>::FTreeNode_[0]>_>
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
      TDirectoryTree<FString>::FTreeNode::~FTreeNode(this_00);
    }
    operator_delete__(&pFVar1[-1].NumChildNodesAndFlags,
                      *(longlong *)&pFVar1[-1].NumChildNodesAndFlags * 0x28 + 8);
  }
  return;
}

// Reset @ 148cdb040

void __thiscall
TUniquePtr<FStorageServerConnection,TDefaultDelete<FStorageServerConnection>_>::Reset
          (TUniquePtr<FStorageServerConnection,TDefaultDelete<FStorageServerConnection>_> *this,
          FStorageServerConnection *param_1)

{
  FStorageServerConnection *pFVar1;
  FScriptContainerElement *pFVar2;
  ICacheStrategy *pIVar3;
  IStorageServerHttpClient *pIVar4;
  
  pFVar1 = this->Ptr;
  if ((pFVar1 != param_1) && (this->Ptr = param_1, pFVar1 != (FStorageServerConnection *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->AsyncQueryLatestServerChunkInfo).SharedReferenceCount.ReferenceController);
    pFVar2 = (pFVar1->CurrentHostAddr).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->BaseURI).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pIVar3 = (pFVar1->CacheStrategy).Ptr;
    if (pIVar3 != (ICacheStrategy *)0x0) {
      (**(code **)pIVar3->_padding_)(pIVar3,1);
    }
    pIVar4 = (pFVar1->HttpClient).Ptr;
    if (pIVar4 != (IStorageServerHttpClient *)0x0) {
      (**(code **)*pIVar4)(pIVar4,1);
    }
    ::operator_delete(pFVar1,0x68);
    return;
  }
  return;
}

