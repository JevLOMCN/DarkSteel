// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 1

// operator[] @ 14640dc50

TTransform<double> * __thiscall
FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::operator[]
          (FBasePose<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this,
          FCompactPoseBoneIndex *param_1)

{
  FCompactPoseBoneIndex FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TTransform<double> *pTVar5;
  
  FVar1 = *param_1;
  uVar4 = 0;
  if ((int)FVar1 < (this->Bones).ArrayNum) {
    uVar4 = ~(uint)FVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TTransform<double> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (this->Bones).AllocatorInstance.Data + (int)FVar1;
}

