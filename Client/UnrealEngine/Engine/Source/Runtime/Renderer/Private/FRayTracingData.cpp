// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FRayTracingData @ 1447f5180

FRayTracingData * __thiscall
FViewInfo::FRayTracingData::FRayTracingData(FRayTracingData *this,FRayTracingData *param_1)

{
  FRayTracingPipelineState *pFVar1;
  
  pFVar1 = param_1->PipelineState;
  (this->ShaderBindingTable).Reference = (FRHIShaderBindingTable *)0x0;
  this->PipelineState = pFVar1;
  (this->ShaderBindingTable).Reference = (param_1->ShaderBindingTable).Reference;
  (param_1->ShaderBindingTable).Reference = (FRHIShaderBindingTable *)0x0;
  (this->MaterialBindings).AllocatorInstance.Data = (FRayTracingLocalShaderBindingWriter **)0x0;
  (this->MaterialBindings).AllocatorInstance.Data =
       (param_1->MaterialBindings).AllocatorInstance.Data;
  (param_1->MaterialBindings).AllocatorInstance.Data = (FRayTracingLocalShaderBindingWriter **)0x0;
  (this->MaterialBindings).ArrayNum = (param_1->MaterialBindings).ArrayNum;
  (this->MaterialBindings).ArrayMax = (param_1->MaterialBindings).ArrayMax;
  (param_1->MaterialBindings).ArrayNum = 0;
  (param_1->MaterialBindings).ArrayMax = 0;
  (this->CallableBindings).AllocatorInstance.Data = (FRayTracingLocalShaderBindingWriter **)0x0;
  (this->CallableBindings).AllocatorInstance.Data =
       (param_1->CallableBindings).AllocatorInstance.Data;
  (param_1->CallableBindings).AllocatorInstance.Data = (FRayTracingLocalShaderBindingWriter **)0x0;
  (this->CallableBindings).ArrayNum = (param_1->CallableBindings).ArrayNum;
  (this->CallableBindings).ArrayMax = (param_1->CallableBindings).ArrayMax;
  (param_1->CallableBindings).ArrayNum = 0;
  (param_1->CallableBindings).ArrayMax = 0;
  (this->MaterialBindingsMemory).Top = (uchar *)0x0;
  (this->MaterialBindingsMemory).End = (uchar *)0x0;
  (this->MaterialBindingsMemory).TopChunk = (FTaggedMemory *)0x0;
  (this->MaterialBindingsMemory).TopMark = (FMemMark *)0x0;
  (this->MaterialBindingsMemory).NumMarks = 0;
  (this->MaterialBindingsMemory).PageSize = Small;
  (this->MaterialBindingsMemory).bShouldEnforceAllocMarks = false;
  FMemStackBase::FreeChunks(&this->MaterialBindingsMemory,(FTaggedMemory *)0x0);
  (this->MaterialBindingsMemory).Top = (param_1->MaterialBindingsMemory).Top;
  (this->MaterialBindingsMemory).End = (param_1->MaterialBindingsMemory).End;
  (this->MaterialBindingsMemory).TopChunk = (param_1->MaterialBindingsMemory).TopChunk;
  (this->MaterialBindingsMemory).TopMark = (param_1->MaterialBindingsMemory).TopMark;
  (this->MaterialBindingsMemory).NumMarks = (param_1->MaterialBindingsMemory).NumMarks;
  (this->MaterialBindingsMemory).bShouldEnforceAllocMarks =
       (param_1->MaterialBindingsMemory).bShouldEnforceAllocMarks;
  (param_1->MaterialBindingsMemory).Top = (uchar *)0x0;
  (param_1->MaterialBindingsMemory).End = (uchar *)0x0;
  (param_1->MaterialBindingsMemory).TopChunk = (FTaggedMemory *)0x0;
  (param_1->MaterialBindingsMemory).NumMarks = 0;
  (param_1->MaterialBindingsMemory).bShouldEnforceAllocMarks = false;
  return this;
}

// ~FRayTracingData @ 1447f6930

void __thiscall FViewInfo::FRayTracingData::~FRayTracingData(FRayTracingData *this)

{
  FRayTracingLocalShaderBindingWriter **ppFVar1;
  FRHIShaderBindingTable *this_00;
  code *pcVar2;
  bool bVar3;
  
  if ((!GIsCriticalError) && ((this->MaterialBindingsMemory).NumMarks != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(GIsCriticalError || !NumMarks)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FMemStackBase::FreeChunks(&this->MaterialBindingsMemory,(FTaggedMemory *)0x0);
  ppFVar1 = (this->CallableBindings).AllocatorInstance.Data;
  if (ppFVar1 != (FRayTracingLocalShaderBindingWriter **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar1);
  }
  ppFVar1 = (this->MaterialBindings).AllocatorInstance.Data;
  if (ppFVar1 != (FRayTracingLocalShaderBindingWriter **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar1);
  }
  this_00 = (this->ShaderBindingTable).Reference;
  if (this_00 != (FRHIShaderBindingTable *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  return;
}

