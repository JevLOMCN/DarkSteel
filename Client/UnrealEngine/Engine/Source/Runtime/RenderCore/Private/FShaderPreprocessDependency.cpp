// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// FShaderPreprocessDependency @ 145e42a80

FShaderPreprocessDependency * __thiscall
FShaderPreprocessDependency::FShaderPreprocessDependency
          (FShaderPreprocessDependency *this,FShaderPreprocessDependency *param_1)

{
  TArray<char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  pTVar1 = &this->PathInSource;
  (this->PathInSourceHash).Hash = (param_1->PathInSourceHash).Hash;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->PathInSource).ArrayMax;
  iVar3 = (param_1->PathInSource).ArrayNum;
  pFVar4 = (param_1->PathInSource).AllocatorInstance.Data;
  (this->PathInSource).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3);
  }
  pTVar1 = &this->ParentPath;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ParentPath).ArrayMax;
  iVar3 = (param_1->ParentPath).ArrayNum;
  pFVar4 = (param_1->ParentPath).AllocatorInstance.Data;
  (this->ParentPath).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3);
  }
  pTVar1 = &this->ResultPath;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ResultPath).ArrayMax;
  iVar3 = (param_1->ResultPath).ArrayNum;
  pFVar4 = (param_1->ResultPath).AllocatorInstance.Data;
  (this->ResultPath).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3);
  }
  this->ResultPathHash = param_1->ResultPathHash;
  this->ResultPathUniqueIndex = param_1->ResultPathUniqueIndex;
  (this->StrippedSource).Object = (param_1->StrippedSource).Object;
  pTVar5 = (param_1->StrippedSource).SharedReferenceCount.ReferenceController;
  (this->StrippedSource).SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

