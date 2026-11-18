// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 1

// GetElementBase @ 1443a41b0

TTransform<double> * __thiscall
TMeshAttributeArrayBase<UE::Math::TTransform<double>_>::GetElementBase
          (TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTransform<double> *pTVar4;
  uint uVar5;
  
  uVar5 = param_1 * this->Extent;
  uVar3 = 0;
  if ((int)uVar5 < (this->Container).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TTransform<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TTransform<double> *)
         ((this->Container).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x60);
}

