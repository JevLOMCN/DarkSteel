// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FNiagaraGpuProfileEvent @ 1492d1060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNiagaraGpuProfileEvent * __thiscall
FNiagaraGpuProfileEvent::FNiagaraGpuProfileEvent
          (FNiagaraGpuProfileEvent *this,FNiagaraComputeInstanceData *param_1,
          FNiagaraSimStageData *param_2,bool param_3)

{
  FNiagaraComputeExecutionContext *pFVar1;
  uint uVar2;
  uint uVar3;
  undefined8 local_res8;
  
  uVar3 = 0;
  (this->OwnerComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerEmitter).Emitter.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->OwnerEmitter,(FObjectPtr)&local_res8);
  (this->OwnerEmitter).Version.A = 0;
  (this->OwnerEmitter).Version.B = 0;
  (this->OwnerEmitter).Version.C = 0;
  (this->OwnerEmitter).Version.D = 0;
  (this->StageName).ComparisonIndex = 0;
  (this->StageName).Number = 0;
  if ((param_2->bSetDataToRender != 0) && (param_3)) {
    uVar3 = 1;
  }
  this->bUniqueInstance = 0;
  *(uint *)this = *(uint *)this | uVar3;
  (this->OwnerComponent).WeakPtr = (param_1->Context->ProfilingComponentPtr).WeakPtr;
  pFVar1 = param_1->Context;
  uVar3 = (pFVar1->ProfilingEmitterPtr).Version.A;
  uVar2 = (pFVar1->ProfilingEmitterPtr).Version.B;
  (this->OwnerEmitter).Emitter.WeakPtr = (pFVar1->ProfilingEmitterPtr).Emitter.WeakPtr;
  (this->OwnerEmitter).Version.A = uVar3;
  (this->OwnerEmitter).Version.B = uVar2;
  uVar3 = (pFVar1->ProfilingEmitterPtr).Version.D;
  (this->OwnerEmitter).Version.C = (pFVar1->ProfilingEmitterPtr).Version.C;
  (this->OwnerEmitter).Version.D = uVar3;
  this->StageName = param_2->StageMetaData->SimulationStageName;
  return this;
}

// FNiagaraGpuProfileEvent @ 1492d1120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraGpuProfileEvent * __thiscall
FNiagaraGpuProfileEvent::FNiagaraGpuProfileEvent
          (FNiagaraGpuProfileEvent *this,FNiagaraComputeInstanceData *param_1,FName param_2)

{
  FNiagaraComputeExecutionContext *pFVar1;
  uint uVar2;
  uint uVar3;
  undefined8 local_res8;
  
  (this->OwnerComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->OwnerEmitter).Emitter.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->OwnerEmitter,(FObjectPtr)&local_res8);
  (this->OwnerEmitter).Version.A = 0;
  (this->OwnerEmitter).Version.B = 0;
  (this->OwnerEmitter).Version.C = 0;
  (this->OwnerEmitter).Version.D = 0;
  this->bUniqueInstance = 0;
  (this->StageName).ComparisonIndex = 0;
  (this->StageName).Number = 0;
  (this->OwnerComponent).WeakPtr = (param_1->Context->ProfilingComponentPtr).WeakPtr;
  pFVar1 = param_1->Context;
  uVar2 = (pFVar1->ProfilingEmitterPtr).Version.A;
  uVar3 = (pFVar1->ProfilingEmitterPtr).Version.B;
  (this->OwnerEmitter).Emitter.WeakPtr = (pFVar1->ProfilingEmitterPtr).Emitter.WeakPtr;
  (this->OwnerEmitter).Version.A = uVar2;
  (this->OwnerEmitter).Version.B = uVar3;
  uVar2 = (pFVar1->ProfilingEmitterPtr).Version.C;
  uVar3 = (pFVar1->ProfilingEmitterPtr).Version.D;
  this->StageName = param_2;
  (this->OwnerEmitter).Version.C = uVar2;
  (this->OwnerEmitter).Version.D = uVar3;
  return this;
}

