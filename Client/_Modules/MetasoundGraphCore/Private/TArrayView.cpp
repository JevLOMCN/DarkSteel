// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 1

// TArrayView<TTuple<int,int>_const_,int><TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_>_const_&,TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_>_> @ 14ad28d50

TArrayView<TTuple<int,int>_const_,int> * __thiscall
TArrayView<TTuple<int,int>_const_,int>::
TArrayView<TTuple<int,int>_const_,int><TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_>_const_&,TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_>_>
          (TArrayView<TTuple<int,int>_const_,int> *this,
          TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TTuple<int,int>_const_,int> *pTVar4;
  
  this->DataPtr = (TTuple<int,int> *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TTuple<int,int>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

