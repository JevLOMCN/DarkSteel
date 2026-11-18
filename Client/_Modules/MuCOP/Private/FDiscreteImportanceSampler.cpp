// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCOP
// Functions: 3

// FDiscreteImportanceSampler @ 14d367700

FDiscreteImportanceSampler * __thiscall
CustomizableObjectPopulation::FDiscreteImportanceSampler::FDiscreteImportanceSampler
          (FDiscreteImportanceSampler *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  ::`anonymous_namespace'::ComputeCumulativeWeights(&this->CumulativeWeights,param_1);
  return this;
}

// IsValidSampler @ 14d36a4d0

bool __thiscall
CustomizableObjectPopulation::FDiscreteImportanceSampler::IsValidSampler
          (FDiscreteImportanceSampler *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  iVar1 = (this->CumulativeWeights).ArrayNum;
  if (1 < iVar1) {
    uVar5 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar5 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (0 < *(int *)((this->CumulativeWeights).AllocatorInstance.Data +
                    (longlong)(this->CumulativeWeights).ArrayNum * 4 + -4)) {
      return true;
    }
  }
  return false;
}

// Sample @ 14d36ab50

int __thiscall
CustomizableObjectPopulation::FDiscreteImportanceSampler::Sample
          (FDiscreteImportanceSampler *this,FRandomStream *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  bVar2 = IsValidSampler(this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidSampler()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\MutablePopulation\\Source\\CustomizableObjectPopulation\\Private\\MuCOP\\CustomizableObjectPopulationSamplers.cpp"
                       ,0x53,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = (this->CumulativeWeights).ArrayNum;
  uVar6 = iVar3 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar3) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  lVar7 = (longlong)(int)uVar6 * 4;
  iVar3 = *(int *)((this->CumulativeWeights).AllocatorInstance.Data + lVar7);
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  else {
    uVar4 = param_1->Seed * 0xbb38435 + 0x3619636b;
    param_1->Seed = uVar4;
    iVar3 = (int)(((float)(uVar4 >> 9 | 0x3f800000) - __real_3f800000) * (float)iVar3);
  }
  do {
    lVar7 = lVar7 + -4;
    uVar5 = -uVar6;
    uVar6 = uVar6 - 1;
    uVar4 = 0;
    if ((int)uVar6 < (this->CumulativeWeights).ArrayNum) {
      uVar4 = uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  } while (iVar3 < *(int *)((this->CumulativeWeights).AllocatorInstance.Data + lVar7));
  return uVar6;
}

