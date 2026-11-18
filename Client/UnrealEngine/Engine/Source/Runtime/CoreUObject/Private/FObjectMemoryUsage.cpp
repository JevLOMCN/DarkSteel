// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FObjectMemoryUsage @ 1420e9bf0

FObjectMemoryUsage * __thiscall
FObjectMemoryUsage::FObjectMemoryUsage(FObjectMemoryUsage *this,FObjectMemoryUsage *param_1)

{
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar1 = &this->RootReferencer;
  this->InclusiveMemoryUsage = param_1->InclusiveMemoryUsage;
  this->ExclusiveMemoryUsage = param_1->ExclusiveMemoryUsage;
  this->InclusiveResourceSize = param_1->InclusiveResourceSize;
  this->ExclusiveResourceSize = param_1->ExclusiveResourceSize;
  this->Flags = param_1->Flags;
  this->Object = param_1->Object;
  piVar2 = &(this->RootReferencer).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->RootReferencer).ArrayNum;
  pFVar4 = (param_1->RootReferencer).AllocatorInstance.Data;
  (this->RootReferencer).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 3);
  }
  pTVar1 = &this->NonRootReferencer;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->NonRootReferencer).ArrayMax;
  iVar3 = (param_1->NonRootReferencer).ArrayNum;
  pFVar4 = (param_1->NonRootReferencer).AllocatorInstance.Data;
  (this->NonRootReferencer).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 3);
  }
  return this;
}

// operator= @ 1420ec760

FObjectMemoryUsage * __thiscall
FObjectMemoryUsage::operator=(FObjectMemoryUsage *this,FObjectMemoryUsage *param_1)

{
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = &param_1->RootReferencer;
  this->InclusiveMemoryUsage = param_1->InclusiveMemoryUsage;
  pTVar2 = &this->RootReferencer;
  this->ExclusiveMemoryUsage = param_1->ExclusiveMemoryUsage;
  this->InclusiveResourceSize = param_1->InclusiveResourceSize;
  this->ExclusiveResourceSize = param_1->ExclusiveResourceSize;
  this->Flags = param_1->Flags;
  this->Object = param_1->Object;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->RootReferencer).ArrayNum = (param_1->RootReferencer).ArrayNum;
    (this->RootReferencer).ArrayMax = (param_1->RootReferencer).ArrayMax;
    (param_1->RootReferencer).ArrayNum = 0;
    (param_1->RootReferencer).ArrayMax = 0;
  }
  pTVar1 = &param_1->NonRootReferencer;
  pTVar2 = &this->NonRootReferencer;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->NonRootReferencer).ArrayNum = (param_1->NonRootReferencer).ArrayNum;
    (this->NonRootReferencer).ArrayMax = (param_1->NonRootReferencer).ArrayMax;
    (param_1->NonRootReferencer).ArrayNum = 0;
    (param_1->NonRootReferencer).ArrayMax = 0;
  }
  return this;
}

