// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// FPtrTableBase @ 145d0aba0

FPtrTableBase * __thiscall FPtrTableBase::FPtrTableBase(FPtrTableBase *this,FPtrTableBase *param_1)

{
  int *piVar1;
  TArray<FPtrTableBase::FPatchOffset,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  piVar1 = &(this->PatchLists).ArrayMax;
  (this->PatchLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->PatchLists).ArrayNum;
  pFVar4 = (param_1->PatchLists).AllocatorInstance.Data;
  (this->PatchLists).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((this->PatchLists).AllocatorInstance.Data,pFVar4,(longlong)iVar3 << 3);
  }
  pTVar2 = &this->PatchOffsets;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PatchOffsets).ArrayMax;
  iVar3 = (param_1->PatchOffsets).ArrayNum;
  pFVar4 = (param_1->PatchOffsets).AllocatorInstance.Data;
  (this->PatchOffsets).ArrayNum = iVar3;
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

