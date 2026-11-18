// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// FEnvQueryItemDetails @ 146f29240

FEnvQueryItemDetails * __thiscall
FEnvQueryItemDetails::FEnvQueryItemDetails(FEnvQueryItemDetails *this,FEnvQueryItemDetails *param_1)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  piVar1 = &(this->TestResults).ArrayMax;
  (this->TestResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->TestResults).ArrayNum;
  pFVar4 = (param_1->TestResults).AllocatorInstance.Data;
  (this->TestResults).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((this->TestResults).AllocatorInstance.Data,pFVar4,(longlong)iVar3 << 2);
  }
  pTVar2 = &this->TestWeightedScores;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->TestWeightedScores).ArrayMax;
  iVar3 = (param_1->TestWeightedScores).ArrayNum;
  pFVar4 = (param_1->TestWeightedScores).AllocatorInstance.Data;
  (this->TestWeightedScores).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  this->FailedTestIndex = param_1->FailedTestIndex;
  this->ItemIndex = param_1->ItemIndex;
  ::FString::FString(&this->FailedDescription,&param_1->FailedDescription);
  return this;
}

