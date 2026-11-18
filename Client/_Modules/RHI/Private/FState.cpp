// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 5

// PopFrameCycles @ 145c6c350

EResult __thiscall FRHIGPUFrameTimeHistory::FState::PopFrameCycles(FState *this,ulong64 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GRHIGPUFrameTimeHistory.CS);
  uVar1 = this->NextIndex;
  if (uVar1 == GRHIGPUFrameTimeHistory.NextIndex) {
    *param_1 = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&GRHIGPUFrameTimeHistory.CS);
    return Empty;
  }
  if ((0xf < GRHIGPUFrameTimeHistory.NextIndex) &&
     (uVar2 = GRHIGPUFrameTimeHistory.NextIndex - 0x10, uVar1 < uVar2)) {
    this->NextIndex = GRHIGPUFrameTimeHistory.NextIndex - 0xf;
    *param_1 = GRHIGPUFrameTimeHistory.History.Elements[(uint)uVar2 & 0xf];
    LeaveCriticalSection((LPCRITICAL_SECTION)&GRHIGPUFrameTimeHistory.CS);
    return Disjoint;
  }
  this->NextIndex = uVar1 + 1;
  *param_1 = GRHIGPUFrameTimeHistory.History.Elements[(uint)uVar1 & 0xf];
  LeaveCriticalSection((LPCRITICAL_SECTION)&GRHIGPUFrameTimeHistory.CS);
  return Ok;
}

// ~FState @ 145cd2b90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FValidationComputeContext::FState::~FState(FState *this)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  longlong lVar3;
  FStaticUniformBuffers *pFVar4;
  
  pFVar1 = (this->ComputePassName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoundUniformBuffers).Buffers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StaticUniformBuffers).Bindings.AllocatorInstance.Data;
  pFVar4 = &this->StaticUniformBuffers;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  lVar3 = 2;
  do {
    piVar2 = (int *)(pFVar4 + -1);
    pFVar4 = (FStaticUniformBuffers *)((longlong)(pFVar4 + -1) + 8);
    lVar3 = lVar3 + -1;
    if (*(void **)(piVar2 + 2) != (void *)0x0) {
      FMemory::Free(*(void **)(piVar2 + 2));
    }
  } while (lVar3 != 0);
  pFVar1 = (this->TrackerInstance).CurrentList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FState @ 145cd2c20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall FValidationContext::FState::~FState(FState *this)

{
  FScriptContainerElement *pFVar1;
  FRHITexture *this_00;
  int *piVar2;
  longlong lVar3;
  FRHIRenderPassInfo *pFVar4;
  FStaticUniformBuffers *pFVar5;
  
  pFVar1 = (this->ComputePassName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviousRenderPassName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RenderPassName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->RenderPassInfo).ShadingRateTexture.Reference;
  pFVar4 = &this->RenderPassInfo;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  lVar3 = 0xc;
  do {
    piVar2 = (int *)(pFVar4 + -1);
    pFVar4 = (FRHIRenderPassInfo *)((longlong)(pFVar4 + -1) + 0xf0);
    lVar3 = lVar3 + -1;
    if (*(void **)(piVar2 + 0x3c) != (void *)0x0) {
      FMemory::Free(*(void **)(piVar2 + 0x3c));
    }
  } while (lVar3 != 0);
  pFVar1 = (this->StaticUniformBuffers).Bindings.AllocatorInstance.Data;
  pFVar5 = &this->StaticUniformBuffers;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  lVar3 = 2;
  do {
    piVar2 = (int *)(pFVar5 + -1);
    pFVar5 = (FStaticUniformBuffers *)((longlong)(pFVar5 + -1) + 8);
    lVar3 = lVar3 + -1;
    if (*(void **)(piVar2 + 2) != (void *)0x0) {
      FMemory::Free(*(void **)(piVar2 + 2));
    }
  } while (lVar3 != 0);
  pFVar1 = (this->TrackerInstance).CurrentList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// Reset @ 145cf0a30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FValidationComputeContext::FState::Reset(FState *this)

{
  ::FString::Reset(&this->ComputePassName,0);
  this->BoundShader = (FRHIComputeShader *)0x0;
  RHIValidation::FTracker::ResetAllUAVState(&this->TrackerInstance);
  RHIValidation::FStaticUniformBuffers::Reset(&this->StaticUniformBuffers);
  RHIValidation::FStageBoundUniformBuffers::Reset(&this->BoundUniformBuffers);
  return;
}

// Reset @ 145cf0a80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall FValidationContext::FState::Reset(FState *this)

{
  FBoundUniformBuffers *this_00;
  
  this->bGfxPSOSet = false;
  this->bInsideBeginRenderPass = false;
  ::FString::Reset(&this->RenderPassName,0);
  ::FString::Reset(&this->PreviousRenderPassName,0);
  ::FString::Reset(&this->ComputePassName,0);
  this->BoundShaders[0] = (FRHIShader *)0x0;
  this->BoundShaders[1] = (FRHIShader *)0x0;
  this->BoundShaders[2] = (FRHIShader *)0x0;
  this->BoundShaders[3] = (FRHIShader *)0x0;
  this->BoundShaders[4] = (FRHIShader *)0x0;
  this->BoundShaders[5] = (FRHIShader *)0x0;
  this->BoundShaders[6] = (FRHIShader *)0x0;
  this->BoundShaders[7] = (FRHIShader *)0x0;
  this->BoundShaders[8] = (FRHIShader *)0x0;
  this->BoundShaders[9] = (FRHIShader *)0x0;
  this->BoundShaders[10] = (FRHIShader *)0x0;
  this->BoundShaders[0xb] = (FRHIShader *)0x0;
  RHIValidation::FTracker::ResetAllUAVState(&this->TrackerInstance);
  RHIValidation::FStaticUniformBuffers::Reset(&this->StaticUniformBuffers);
  for (this_00 = &this->BoundUniformBuffers; (FRHIRenderPassInfo *)this_00 != &this->RenderPassInfo;
      this_00 = (FBoundUniformBuffers *)(&this_00->StageBindings[0].Buffers + 1)) {
    RHIValidation::FStageBoundUniformBuffers::Reset(this_00->StageBindings);
  }
  return;
}

