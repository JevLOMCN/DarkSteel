// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// FLandscapeEditReadbackTaskImpl @ 145f42030

FLandscapeEditReadbackTaskImpl * __thiscall
FLandscapeEditReadbackTaskImpl::FLandscapeEditReadbackTaskImpl(FLandscapeEditReadbackTaskImpl *this)

{
  this->TextureResource = (FTextureResource *)0x0;
  (this->ReadbackContext).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadbackContext).ArrayNum = 0;
  (this->ReadbackContext).ArrayMax = 0;
  *(undefined8 *)&this->InitFrameId = 0;
  *(undefined8 *)((longlong)&(this->Size).field0_0x0 + 4) = 0;
  this->Format = PF_Unknown;
  this->StagingTexturesAllocatedSize = 0;
  (this->StagingTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StagingTextures).ArrayNum = 0;
  (this->StagingTextures).ArrayMax = 0;
  (this->ReadbackFence).Reference = (FRHIGPUFence *)0x0;
  this->CompletionState = None;
  (this->Result).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Result).ArrayNum = 0;
  (this->Result).ArrayMax = 0;
  return this;
}

// ~FLandscapeEditReadbackTaskImpl @ 145f43540

void __thiscall
FLandscapeEditReadbackTaskImpl::~FLandscapeEditReadbackTaskImpl
          (FLandscapeEditReadbackTaskImpl *this)

{
  FScriptContainerElement *pFVar1;
  FRHIGPUFence *this_00;
  
  DestructItems<TArray<FColor,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FColor,TSizedDefaultAllocator<32>_> *)(this->Result).AllocatorInstance.Data,
             (this->Result).ArrayNum);
  pFVar1 = (this->Result).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->ReadbackFence).Reference;
  if (this_00 != (FRHIGPUFence *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  DestructItems<TRefCountPtr<FRHITexture>,int>
            ((TRefCountPtr<FRHITexture> *)(this->StagingTextures).AllocatorInstance.Data,
             (this->StagingTextures).ArrayNum);
  pFVar1 = (this->StagingTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ReadbackContext).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

