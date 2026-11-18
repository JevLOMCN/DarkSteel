// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FNDIParticleRead_RenderInstanceData @ 1491ab4f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNDIParticleRead_RenderInstanceData * __thiscall
FNDIParticleRead_RenderInstanceData::FNDIParticleRead_RenderInstanceData
          (FNDIParticleRead_RenderInstanceData *this,FNDIParticleRead_RenderInstanceData *param_1)

{
  FNiagaraDataSet *pFVar1;
  uint uVar2;
  
  this->SourceEmitterGPUContext = param_1->SourceEmitterGPUContext;
  (this->DebugSourceName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugSourceName).Data.AllocatorInstance.Data =
       (param_1->DebugSourceName).Data.AllocatorInstance.Data;
  (param_1->DebugSourceName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugSourceName).Data.ArrayNum = (param_1->DebugSourceName).Data.ArrayNum;
  (this->DebugSourceName).Data.ArrayMax = (param_1->DebugSourceName).Data.ArrayMax;
  (param_1->DebugSourceName).Data.ArrayNum = 0;
  (param_1->DebugSourceName).Data.ArrayMax = 0;
  pFVar1 = param_1->CachedDataSet;
  (this->AttributeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->CachedDataSet = pFVar1;
  (this->AttributeIndices).AllocatorInstance.Data =
       (param_1->AttributeIndices).AllocatorInstance.Data;
  (param_1->AttributeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeIndices).ArrayNum = (param_1->AttributeIndices).ArrayNum;
  (this->AttributeIndices).ArrayMax = (param_1->AttributeIndices).ArrayMax;
  (param_1->AttributeIndices).ArrayNum = 0;
  (param_1->AttributeIndices).ArrayMax = 0;
  (this->AttributeCompressed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeCompressed).AllocatorInstance.Data =
       (param_1->AttributeCompressed).AllocatorInstance.Data;
  (param_1->AttributeCompressed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeCompressed).ArrayNum = (param_1->AttributeCompressed).ArrayNum;
  (this->AttributeCompressed).ArrayMax = (param_1->AttributeCompressed).ArrayMax;
  (param_1->AttributeCompressed).ArrayNum = 0;
  (param_1->AttributeCompressed).ArrayMax = 0;
  this->IsLocalSpace = param_1->IsLocalSpace;
  this->AcquireTagRegisterIndex = param_1->AcquireTagRegisterIndex;
  uVar2 = (this->bSourceEmitterNotGPUErrorShown ^ param_1->bSourceEmitterNotGPUErrorShown) & 1 ^
          *(uint *)&this->field_0x48;
  *(uint *)&this->field_0x48 = uVar2;
  *(uint *)&this->field_0x48 = (uVar2 ^ *(uint *)&param_1->field_0x48) & 2 ^ uVar2;
  return this;
}

