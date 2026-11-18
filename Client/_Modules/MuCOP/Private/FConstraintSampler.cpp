// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCOP
// Functions: 2

// FConstraintSampler @ 14d3672d0

FConstraintSampler * __thiscall
CustomizableObjectPopulation::FConstraintSampler::FConstraintSampler
          (FConstraintSampler *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2,
          TArray<CustomizableObjectPopulation::FConstraintIndex,TSizedDefaultAllocator<32>_>
          *param_3)

{
  TArray<CustomizableObjectPopulation::FConstraintIndex,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  ::`anonymous_namespace'::ComputeCumulativeWeights
            ((TArray<int,TSizedDefaultAllocator<32>_> *)this,param_1);
  ::FString::FString(&this->ParameterName,param_2);
  pTVar1 = &this->Samplers;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Samplers).ArrayMax;
  iVar3 = param_3->ArrayNum;
  _Src = (param_3->AllocatorInstance).Data;
  (this->Samplers).ArrayNum = iVar3;
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

// GetSamplerID @ 14d36a2a0

FConstraintIndex * __thiscall
CustomizableObjectPopulation::FConstraintSampler::GetSamplerID(FConstraintSampler *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConstraintIndex *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Samplers).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConstraintIndex *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FConstraintIndex *)((this->Samplers).AllocatorInstance.Data + (longlong)param_1 * 8);
}

