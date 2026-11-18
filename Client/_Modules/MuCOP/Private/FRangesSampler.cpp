// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCOP
// Functions: 3

// FRangesSampler @ 14d3677f0

FRangesSampler * __thiscall
CustomizableObjectPopulation::FRangesSampler::FRangesSampler
          (FRangesSampler *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TTuple<float,float>,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<TTuple<float,float>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  ::`anonymous_namespace'::ComputeCumulativeWeights
            ((TArray<int,TSizedDefaultAllocator<32>_> *)this,param_1);
  pTVar1 = &this->RangeValues;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->RangeValues).ArrayMax;
  iVar3 = param_2->ArrayNum;
  _Src = (param_2->AllocatorInstance).Data;
  (this->RangeValues).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  return this;
}

// IsValidSampler @ 14d36a580

bool __thiscall CustomizableObjectPopulation::FRangesSampler::IsValidSampler(FRangesSampler *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  iVar1 = (this->DiscreteSampler).CumulativeWeights.ArrayNum;
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
    if (0 < *(int *)((this->DiscreteSampler).CumulativeWeights.AllocatorInstance.Data +
                    (longlong)(this->DiscreteSampler).CumulativeWeights.ArrayNum * 4 + -4)) {
      return true;
    }
  }
  return false;
}

// Sample @ 14d36ad00

float __thiscall
CustomizableObjectPopulation::FRangesSampler::Sample(FRangesSampler *this,FRandomStream *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  bVar3 = FDiscreteImportanceSampler::IsValidSampler(&this->DiscreteSampler);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidSampler()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\MutablePopulation\\Source\\CustomizableObjectPopulation\\Private\\MuCOP\\CustomizableObjectPopulationSamplers.cpp"
                       ,0xa8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  uVar4 = FDiscreteImportanceSampler::Sample(&this->DiscreteSampler,param_1);
  uVar5 = 0;
  if ((int)uVar4 < (this->RangeValues).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  fVar6 = *(float *)((this->RangeValues).AllocatorInstance.Data + (longlong)(int)uVar4 * 8 + 4);
  uVar5 = 0;
  if ((int)uVar4 < (this->RangeValues).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  fVar1 = *(float *)((this->RangeValues).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
  uVar5 = param_1->Seed * 0xbb38435 + 0x3619636b;
  param_1->Seed = uVar5;
  return ((float)(uVar5 >> 9 | 0x3f800000) - __real_3f800000) * (fVar6 - fVar1) + fVar1;
}

