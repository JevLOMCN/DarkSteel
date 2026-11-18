// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// Reset @ 142a99e00

void __thiscall
TUniquePtr<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FTreeNode_[0]>_>
::Reset(TUniquePtr<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>::FTreeNode_[0]>_>
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
      TDirectoryTree<TMap<FUtf8String,FPakEntryLocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUtf8String,FPakEntryLocation,0>_>_>
      ::FTreeNode::~FTreeNode(this_00);
    }
    operator_delete__(&pFVar1[-1].NumChildNodesAndFlags,
                      *(longlong *)&pFVar1[-1].NumChildNodesAndFlags * 0x68 + 8);
  }
  return;
}

