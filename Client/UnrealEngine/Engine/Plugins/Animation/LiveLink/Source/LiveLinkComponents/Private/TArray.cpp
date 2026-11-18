// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkComponents
// Functions: 1

// Find @ 14d092f00

int __thiscall
TArray<TSubclassOf<ULiveLinkRole>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TSubclassOf<ULiveLinkRole>,TSizedDefaultAllocator<32>_> *this,
          TSubclassOf<ULiveLinkRole> *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  UClass *pUVar8;
  
  pFVar3 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  pFVar7 = pFVar3;
  do {
    if (pFVar7 == pFVar3 + (longlong)iVar1 * 8) {
      return -1;
    }
    pUVar8 = *(UClass **)pFVar7;
    if ((pUVar8 == (UClass *)0x0) ||
       (pUVar5 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar5 == (UClass *)0x0)) {
LAB_14d092f68:
      pUVar8 = (UClass *)0x0;
    }
    else {
      iVar2 = (int)pUVar5->_padding_;
      if (((int)pUVar8->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_14d092f68;
    }
    pUVar5 = (param_1->Class).field0_0x0.DebugPtr;
    if ((pUVar5 == (UClass *)0x0) ||
       (pUVar6 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar6 == (UClass *)0x0)) {
LAB_14d092fa5:
      pUVar5 = (UClass *)0x0;
    }
    else {
      iVar2 = (int)pUVar6->_padding_;
      if (((int)pUVar5->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_14d092fa5;
      pUVar5 = (param_1->Class).field0_0x0.DebugPtr;
    }
    if (pUVar8 == pUVar5) {
      return (int)((longlong)pFVar7 - (longlong)pFVar3 >> 3);
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

