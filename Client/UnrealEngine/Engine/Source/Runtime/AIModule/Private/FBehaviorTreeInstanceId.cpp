// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// FBehaviorTreeInstanceId @ 146e802f0

FBehaviorTreeInstanceId * __thiscall
FBehaviorTreeInstanceId::FBehaviorTreeInstanceId
          (FBehaviorTreeInstanceId *this,FBehaviorTreeInstanceId *param_1)

{
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  UBehaviorTree *pUVar5;
  UBTCompositeNode *pUVar6;
  FScriptContainerElement *pFVar7;
  
  pUVar5 = (param_1->TreeAsset).field0_0x0.DebugPtr;
  (this->TreeAsset).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UBehaviorTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar6 = (param_1->RootNode).field0_0x0.DebugPtr;
  (this->RootNode).field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UBTCompositeNode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pTVar1 = &this->Path;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Path).ArrayMax;
  iVar4 = (param_1->Path).ArrayNum;
  pFVar7 = (param_1->Path).AllocatorInstance.Data;
  (this->Path).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar7,(longlong)iVar4 * 2);
  }
  pTVar3 = &this->InstanceMemory;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->InstanceMemory).ArrayMax;
  iVar4 = (param_1->InstanceMemory).ArrayNum;
  pFVar7 = (param_1->InstanceMemory).AllocatorInstance.Data;
  (this->InstanceMemory).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar4);
  }
  this->FirstNodeInstance = param_1->FirstNodeInstance;
  return this;
}

