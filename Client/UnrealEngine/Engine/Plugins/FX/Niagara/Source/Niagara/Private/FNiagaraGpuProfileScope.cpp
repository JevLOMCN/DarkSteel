// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FNiagaraGpuProfileScope @ 1492d11c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNiagaraGpuProfileScope * __thiscall
FNiagaraGpuProfileScope::FNiagaraGpuProfileScope
          (FNiagaraGpuProfileScope *this,FRHICommandList *param_1,
          FNiagaraGpuComputeDispatchInterface *param_2,FNiagaraGpuProfileEvent *param_3)

{
  FNiagaraGPUProfiler *this_00;
  
  this->RHICmdList = param_1;
  this_00 = (FNiagaraGPUProfiler *)(**(code **)(param_2->_padding_ + 0xf0))(param_2);
  this->GPUProfiler = this_00;
  if (this_00 != (FNiagaraGPUProfiler *)0x0) {
    FNiagaraGPUProfiler::BeginDispatch(this_00,this->RHICmdList,param_3);
  }
  return this;
}

// ~FNiagaraGpuProfileScope @ 1492d47f0

void __thiscall FNiagaraGpuProfileScope::~FNiagaraGpuProfileScope(FNiagaraGpuProfileScope *this)

{
  if (this->GPUProfiler != (FNiagaraGPUProfiler *)0x0) {
    FNiagaraGPUProfiler::EndDispatch(this->GPUProfiler,this->RHICmdList);
    return;
  }
  return;
}

