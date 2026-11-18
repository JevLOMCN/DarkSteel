// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FCachedVariables @ 149274530

FCachedVariables * __thiscall
NiagaraDebugLocal::FCachedVariables::FCachedVariables
          (FCachedVariables *this,FCachedVariables *param_1)

{
  (this->WeakNiagaraSystem).WeakPtr = (param_1->WeakNiagaraSystem).WeakPtr;
  (this->EngineVariables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EngineVariables).AllocatorInstance.Data = (param_1->EngineVariables).AllocatorInstance.Data
  ;
  (param_1->EngineVariables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EngineVariables).ArrayNum = (param_1->EngineVariables).ArrayNum;
  (this->EngineVariables).ArrayMax = (param_1->EngineVariables).ArrayMax;
  (param_1->EngineVariables).ArrayNum = 0;
  (param_1->EngineVariables).ArrayMax = 0;
  (this->SystemVariables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SystemVariables).AllocatorInstance.Data = (param_1->SystemVariables).AllocatorInstance.Data
  ;
  (param_1->SystemVariables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SystemVariables).ArrayNum = (param_1->SystemVariables).ArrayNum;
  (this->SystemVariables).ArrayMax = (param_1->SystemVariables).ArrayMax;
  (param_1->SystemVariables).ArrayNum = 0;
  (param_1->SystemVariables).ArrayMax = 0;
  (this->ParameterStoreVariables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterStoreVariables).AllocatorInstance.Data =
       (param_1->ParameterStoreVariables).AllocatorInstance.Data;
  (param_1->ParameterStoreVariables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterStoreVariables).ArrayNum = (param_1->ParameterStoreVariables).ArrayNum;
  (this->ParameterStoreVariables).ArrayMax = (param_1->ParameterStoreVariables).ArrayMax;
  (param_1->ParameterStoreVariables).ArrayNum = 0;
  (param_1->ParameterStoreVariables).ArrayMax = 0;
  (this->ParticleVariables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticleVariables).AllocatorInstance.Data =
       (param_1->ParticleVariables).AllocatorInstance.Data;
  (param_1->ParticleVariables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticleVariables).ArrayNum = (param_1->ParticleVariables).ArrayNum;
  (this->ParticleVariables).ArrayMax = (param_1->ParticleVariables).ArrayMax;
  (param_1->ParticleVariables).ArrayNum = 0;
  (param_1->ParticleVariables).ArrayMax = 0;
  (this->ParticlePositionAccessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticlePositionAccessors).AllocatorInstance.Data =
       (param_1->ParticlePositionAccessors).AllocatorInstance.Data;
  (param_1->ParticlePositionAccessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticlePositionAccessors).ArrayNum = (param_1->ParticlePositionAccessors).ArrayNum;
  (this->ParticlePositionAccessors).ArrayMax = (param_1->ParticlePositionAccessors).ArrayMax;
  (param_1->ParticlePositionAccessors).ArrayNum = 0;
  (param_1->ParticlePositionAccessors).ArrayMax = 0;
  return this;
}

// ~FCachedVariables @ 149279ba0

void __thiscall NiagaraDebugLocal::FCachedVariables::~FCachedVariables(FCachedVariables *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ParticlePositionAccessors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<FNiagaraDataSetDebugAccessor,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FNiagaraDataSetDebugAccessor,TSizedDefaultAllocator<32>_> *)
             (this->ParticleVariables).AllocatorInstance.Data,(this->ParticleVariables).ArrayNum);
  pFVar1 = (this->ParticleVariables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParameterStoreVariables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SystemVariables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EngineVariables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

