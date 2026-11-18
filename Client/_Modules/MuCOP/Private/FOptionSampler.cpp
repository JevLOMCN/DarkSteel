// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCOP
// Functions: 2

// FOptionSampler @ 14d367740

FOptionSampler * __thiscall
CustomizableObjectPopulation::FOptionSampler::FOptionSampler
          (FOptionSampler *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  ::`anonymous_namespace'::ComputeCumulativeWeights
            ((TArray<int,TSizedDefaultAllocator<32>_> *)this,param_1);
  pTVar1 = &this->OptionNames;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->OptionNames).ArrayMax;
  iVar3 = param_2->ArrayNum;
  pFVar4 = (param_2->AllocatorInstance).Data;
  (this->OptionNames).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
  }
  return this;
}

// GetOptionName @ 14d36a010

FString * __thiscall
CustomizableObjectPopulation::FOptionSampler::GetOptionName(FOptionSampler *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->OptionNames).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FString *)((this->OptionNames).AllocatorInstance.Data + (longlong)param_1 * 0x10);
}

