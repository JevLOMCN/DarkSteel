// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 4

// operator[] @ 142add000

FString * __thiscall
TArrayView<FString_const_,int>::operator[](TArrayView<FString_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  
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
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// TArrayView<FDependsNode_*_const,int><TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>_&,TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>_> @ 142b39c70

TArrayView<FDependsNode_*_const,int> * __thiscall
TArrayView<FDependsNode_*_const,int>::
TArrayView<FDependsNode_*_const,int><TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>_&,TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FDependsNode_*_const,int> *this,
          TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FDependsNode_*_const,int> *pTVar4;
  
  this->DataPtr = (FDependsNode **)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<FDependsNode_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_> @ 142b39ce0

TArrayView<int_const_,int> * __thiscall
TArrayView<int_const_,int>::
TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_>
          (TArrayView<int_const_,int> *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<int_const_,int> *pTVar4;
  
  this->DataPtr = (int *)(param_1->AllocatorInstance).Data;
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
    pTVar4 = (TArrayView<int_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// TArrayView<FDependsNode_*_const,int> @ 142b4de40

TArrayView<FDependsNode_*_const,int> * __thiscall
TArrayView<FDependsNode_*_const,int>::TArrayView<FDependsNode_*_const,int>
          (TArrayView<FDependsNode_*_const,int> *this,
          initializer_list<FDependsNode_*_const> *param_1)

{
  this->DataPtr = param_1->_First;
  this->ArrayNum = (int)((longlong)param_1->_Last - (longlong)param_1->_First >> 3);
  return this;
}

