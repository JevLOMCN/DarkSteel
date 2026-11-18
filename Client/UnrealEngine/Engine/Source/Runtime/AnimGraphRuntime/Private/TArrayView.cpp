// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 2

// operator[] @ 14640dcd0

FBoneTransform * __thiscall
TArrayView<FBoneTransform_const_,int>::operator[]
          (TArrayView<FBoneTransform_const_,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBoneTransform *pFVar4;
  
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
      pFVar4 = (FBoneTransform *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 14640dd50

FRBFEntry * __thiscall
TArrayView<FRBFEntry,int>::operator[](TArrayView<FRBFEntry,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRBFEntry *pFVar4;
  
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
      pFVar4 = (FRBFEntry *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

