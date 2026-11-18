// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 1

// operator[] @ 14dc36c90

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int>::operator[]
          (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  
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
      pTVar4 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

