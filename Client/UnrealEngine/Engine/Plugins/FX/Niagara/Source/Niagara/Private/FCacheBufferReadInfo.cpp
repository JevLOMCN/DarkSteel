// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// FCacheBufferReadInfo @ 149385d10

FCacheBufferReadInfo * __thiscall
FNiagaraSimCacheDataBuffersLayout::FCacheBufferReadInfo::FCacheBufferReadInfo
          (FCacheBufferReadInfo *this,FCacheBufferReadInfo *param_1)

{
  int *piVar1;
  TArray<FNiagaraSimCacheDataBuffersLayout::FVariableCopyMapping,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  piVar1 = &(this->ComponentMappingsToDataBuffer).ArrayMax;
  (this->ComponentMappingsToDataBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ComponentMappingsToDataBuffer).ArrayNum;
  pFVar4 = (param_1->ComponentMappingsToDataBuffer).AllocatorInstance.Data;
  (this->ComponentMappingsToDataBuffer).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((this->ComponentMappingsToDataBuffer).AllocatorInstance.Data,pFVar4,(longlong)iVar3 * 2);
  }
  pTVar2 = &this->VariableCopyMappingsToDataBuffer;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->VariableCopyMappingsToDataBuffer).ArrayMax;
  iVar3 = (param_1->VariableCopyMappingsToDataBuffer).ArrayNum;
  pFVar4 = (param_1->VariableCopyMappingsToDataBuffer).AllocatorInstance.Data;
  (this->VariableCopyMappingsToDataBuffer).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 4);
  }
  return this;
}

// operator= @ 14938aff0

FCacheBufferReadInfo * __thiscall
FNiagaraSimCacheDataBuffersLayout::FCacheBufferReadInfo::operator=
          (FCacheBufferReadInfo *this,FCacheBufferReadInfo *param_1)

{
  TArray<FNiagaraSimCacheDataBuffersLayout::FVariableCopyMapping,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  TArray<FNiagaraSimCacheDataBuffersLayout::FVariableCopyMapping,TSizedDefaultAllocator<32>_>
  *pTVar3;
  
  if (this != param_1) {
    pFVar2 = (this->ComponentMappingsToDataBuffer).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (this->ComponentMappingsToDataBuffer).AllocatorInstance.Data =
         (param_1->ComponentMappingsToDataBuffer).AllocatorInstance.Data;
    (param_1->ComponentMappingsToDataBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    (this->ComponentMappingsToDataBuffer).ArrayNum =
         (param_1->ComponentMappingsToDataBuffer).ArrayNum;
    (this->ComponentMappingsToDataBuffer).ArrayMax =
         (param_1->ComponentMappingsToDataBuffer).ArrayMax;
    (param_1->ComponentMappingsToDataBuffer).ArrayNum = 0;
    (param_1->ComponentMappingsToDataBuffer).ArrayMax = 0;
  }
  pTVar3 = &param_1->VariableCopyMappingsToDataBuffer;
  pTVar1 = &this->VariableCopyMappingsToDataBuffer;
  if (pTVar1 != pTVar3) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->VariableCopyMappingsToDataBuffer).ArrayNum =
         (param_1->VariableCopyMappingsToDataBuffer).ArrayNum;
    (this->VariableCopyMappingsToDataBuffer).ArrayMax =
         (param_1->VariableCopyMappingsToDataBuffer).ArrayMax;
    (param_1->VariableCopyMappingsToDataBuffer).ArrayNum = 0;
    (param_1->VariableCopyMappingsToDataBuffer).ArrayMax = 0;
  }
  return this;
}

// operator= @ 14938b090

FCacheBufferReadInfo * __thiscall
FNiagaraSimCacheDataBuffersLayout::FCacheBufferReadInfo::operator=
          (FCacheBufferReadInfo *this,FCacheBufferReadInfo *param_1)

{
  TArray<FNiagaraSimCacheDataBuffersLayout::FVariableCopyMapping,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  TArray<unsigned_short,TSizedDefaultAllocator<32>_>::operator=
            (&this->ComponentMappingsToDataBuffer,&param_1->ComponentMappingsToDataBuffer);
  pTVar1 = &this->VariableCopyMappingsToDataBuffer;
  if (pTVar1 != &param_1->VariableCopyMappingsToDataBuffer) {
    iVar3 = (param_1->VariableCopyMappingsToDataBuffer).ArrayNum;
    piVar2 = &(this->VariableCopyMappingsToDataBuffer).ArrayMax;
    _Src = (param_1->VariableCopyMappingsToDataBuffer).AllocatorInstance.Data;
    (this->VariableCopyMappingsToDataBuffer).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      if (iVar3 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
      }
    }
  }
  return this;
}

