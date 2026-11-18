// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ~FNaniteShadingCommands @ 144e745d0

void __thiscall FNaniteShadingCommands::~FNaniteShadingCommands(FNaniteShadingCommands *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  TIntVector4<unsigned_int> *pTVar4;
  FScriptContainerElement *pFVar5;
  FRHIShaderBundle *this_00;
  
  pFVar3 = (this->BuildCommandsTask).Pimpl.Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar3->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->SetupTask).Pimpl.Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar3->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pTVar4 = (this->MetaBufferData).AllocatorInstance.Data;
  if (pTVar4 != (TIntVector4<unsigned_int> *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pTVar4);
  }
  pFVar5 = (this->CommandLookup).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FNaniteShadingCommand,int>
            ((FNaniteShadingCommand *)(this->Commands).AllocatorInstance.Data,
             (this->Commands).ArrayNum);
  pFVar5 = (this->Commands).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  this_00 = (this->ShaderBundle).Reference;
  if (this_00 != (FRHIShaderBundle *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  return;
}

// FNaniteShadingCommands @ 1453fa040

FNaniteShadingCommands * __thiscall
FNaniteShadingCommands::FNaniteShadingCommands(FNaniteShadingCommands *this)

{
  this->MaxShadingBin = 0;
  this->NumCommands = 0;
  this->BoundTargetMask = 0;
  (this->ShaderBundle).Reference = (FRHIShaderBundle *)0x0;
  (this->Commands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Commands).ArrayNum = 0;
  (this->Commands).ArrayMax = 0;
  (this->CommandLookup).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandLookup).ArrayNum = 0;
  (this->CommandLookup).ArrayMax = 0;
  (this->MetaBufferData).AllocatorInstance.Data = (TIntVector4<unsigned_int> *)0x0;
  (this->MetaBufferData).ArrayNum = 0;
  (this->MetaBufferData).ArrayMax = 0;
  (this->SetupTask).Pimpl.Reference = (FTaskBase *)0x0;
  (this->BuildCommandsTask).Pimpl.Reference = (FTaskBase *)0x0;
  return this;
}

