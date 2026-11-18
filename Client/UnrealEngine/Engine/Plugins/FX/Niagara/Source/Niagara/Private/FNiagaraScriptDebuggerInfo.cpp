// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FNiagaraScriptDebuggerInfo @ 149386d10

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraScriptDebuggerInfo * __thiscall
FNiagaraScriptDebuggerInfo::FNiagaraScriptDebuggerInfo
          (FNiagaraScriptDebuggerInfo *this,FName param_1,ENiagaraScriptUsage param_2,FGuid *param_3
          )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this->HandleName = param_1;
  this->Usage = param_2;
  uVar1 = param_3->A;
  uVar2 = param_3->B;
  uVar3 = param_3->C;
  uVar4 = param_3->D;
  this->FrameLastWriteId = -1;
  (this->UsageId).A = uVar1;
  (this->UsageId).B = uVar2;
  (this->UsageId).C = uVar3;
  (this->UsageId).D = uVar4;
  FNiagaraDataSet::FNiagaraDataSet(&this->Frame);
  FNiagaraParameterStore::FNiagaraParameterStore(&this->Parameters);
  this->bWritten = (TAtomic<bool>)0x0;
  this->bWaitForGPU = param_2 == ParticleGPUComputeScript;
  return this;
}

// FNiagaraScriptDebuggerInfo @ 149386d70

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraScriptDebuggerInfo * __thiscall
FNiagaraScriptDebuggerInfo::FNiagaraScriptDebuggerInfo(FNiagaraScriptDebuggerInfo *this)

{
  this->bWaitForGPU = false;
  (this->HandleName).ComparisonIndex = 0;
  (this->HandleName).Number = 0;
  this->Usage = Function;
  (this->UsageId).A = 0;
  (this->UsageId).B = 0;
  (this->UsageId).C = 0;
  (this->UsageId).D = 0;
  this->FrameLastWriteId = -1;
  FNiagaraDataSet::FNiagaraDataSet(&this->Frame);
  FNiagaraParameterStore::FNiagaraParameterStore(&this->Parameters);
  this->bWritten = (TAtomic<bool>)0x0;
  return this;
}

