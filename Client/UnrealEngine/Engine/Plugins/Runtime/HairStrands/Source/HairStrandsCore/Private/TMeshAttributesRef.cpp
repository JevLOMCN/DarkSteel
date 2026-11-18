// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// operator[]<FStrandID,0> @ 14dfe4f00

int * __thiscall
TMeshAttributesRef<FStrandID,int_const_>::operator[]<FStrandID,0>
          (TMeshAttributesRef<FStrandID,int_const_> *this,FStrandID param_1)

{
  FMeshAttributeArraySetBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  FMeshAttributeArraySetBase *pFVar7;
  
  pFVar1 = this->ArrayPtr;
  if ((int)pFVar1[2].Type < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      piVar4 = (int *)(*pcVar2)();
      return piVar4;
    }
  }
  pFVar7 = (FMeshAttributeArraySetBase *)pFVar1[2]._padding_;
  if ((FMeshAttributeArraySetBase *)pFVar1[2]._padding_ == (FMeshAttributeArraySetBase *)0x0) {
    pFVar7 = pFVar1 + 1;
  }
  uVar5 = (int)param_1 * pFVar7->NumElements;
  uVar6 = 0;
  if ((int)uVar5 < (int)pFVar7->Type) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      piVar4 = (int *)(*pcVar2)();
      return piVar4;
    }
  }
  return (int *)(pFVar7->_padding_ + (longlong)(int)uVar5 * 4);
}

