// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FEventData @ 1419cd950

FEventData * __thiscall FEventData::FEventData(FEventData *this,FEventData *param_1)

{
  int *piVar1;
  TArray<FStatNameAndInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  piVar1 = &(this->WaitStackStats).ArrayMax;
  (this->WaitStackStats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->WaitStackStats).ArrayNum;
  pFVar4 = (param_1->WaitStackStats).AllocatorInstance.Data;
  (this->WaitStackStats).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((this->WaitStackStats).AllocatorInstance.Data,pFVar4,(longlong)iVar3 << 3);
  }
  pTVar2 = &this->TriggerStackStats;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->TriggerStackStats).ArrayMax;
  iVar3 = (param_1->TriggerStackStats).ArrayNum;
  pFVar4 = (param_1->TriggerStackStats).AllocatorInstance.Data;
  (this->TriggerStackStats).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 3);
  }
  this->Frame = param_1->Frame;
  this->Duration = param_1->Duration;
  this->DurationMS = param_1->DurationMS;
  return this;
}

