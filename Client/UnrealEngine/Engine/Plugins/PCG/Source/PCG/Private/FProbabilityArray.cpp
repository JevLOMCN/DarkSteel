// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// operator[] @ 149ad4cc0

TArrayView<double,int> * __thiscall
PCGClusterElement::FClusteringData::FExpectationMaximizationData::FProbabilityArray::operator[]
          (FProbabilityArray *this,TArrayView<double,int> *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TArrayView<double,int> *pTVar6;
  ForElementType<double> FVar7;
  uint uVar8;
  
  piVar1 = &(this->Array).ArrayNum;
  iVar4 = param_1 * this->NumCentroids;
  if ((iVar4 < 0) || (*piVar1 <= iVar4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Array.IsValidIndex(Index * NumCentroids)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGClusterElement.h"
                       ,0x8a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<double,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  iVar4 = this->NumCentroids;
  uVar8 = iVar4 * param_1;
  uVar5 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<double,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  FVar7 = (this->Array).AllocatorInstance.SecondaryData;
  __return_storage_ptr__->ArrayNum = iVar4;
  if (FVar7 == (ForElementType<double>)0x0) {
    FVar7 = (ForElementType<double>)&this->Array;
  }
  __return_storage_ptr__->DataPtr = (double *)((longlong)FVar7 + (longlong)(int)uVar8 * 8);
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArrayView<double,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

