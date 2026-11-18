// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// FItemData @ 146f29670

FItemData * __thiscall EQSDebug::FItemData::FItemData(FItemData *this,FItemData *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  ::FString::FString(&this->Desc,&param_1->Desc);
  pTVar1 = &this->TestValues;
  this->ItemIdx = param_1->ItemIdx;
  this->TotalScore = param_1->TotalScore;
  piVar2 = &(this->TestValues).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->TestValues).ArrayNum;
  pFVar4 = (param_1->TestValues).AllocatorInstance.Data;
  (this->TestValues).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  pTVar1 = &this->TestScores;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TestScores).ArrayMax;
  iVar3 = (param_1->TestScores).ArrayNum;
  pFVar4 = (param_1->TestScores).AllocatorInstance.Data;
  (this->TestScores).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  return this;
}

