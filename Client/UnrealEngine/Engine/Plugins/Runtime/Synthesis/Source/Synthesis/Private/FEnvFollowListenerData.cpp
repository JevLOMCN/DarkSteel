// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 1

// FEnvFollowListenerData @ 14f0b6780

FEnvFollowListenerData * __thiscall
FSourceEffectEnvFollowerNotifier::FEnvFollowListenerData::FEnvFollowListenerData
          (FEnvFollowListenerData *this,FEnvFollowListenerData *param_1)

{
  int *piVar1;
  TArray<FSourceEffectEnvFollowerNotifier::FInstanceData,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  piVar1 = &(this->Listeners).ArrayMax;
  (this->Listeners).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Listeners).ArrayNum;
  pFVar4 = (param_1->Listeners).AllocatorInstance.Data;
  (this->Listeners).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((this->Listeners).AllocatorInstance.Data,pFVar4,(longlong)iVar3 << 3);
  }
  pTVar2 = &this->InstanceData;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->InstanceData).ArrayMax;
  iVar3 = (param_1->InstanceData).ArrayNum;
  pFVar4 = (param_1->InstanceData).AllocatorInstance.Data;
  (this->InstanceData).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 3);
  }
  return this;
}

