// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FNiagaraQueryCompilationOptions @ 1490226a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraQueryCompilationOptions * __thiscall
FNiagaraQueryCompilationOptions::FNiagaraQueryCompilationOptions
          (FNiagaraQueryCompilationOptions *this)

{
  this->System = (UNiagaraSystem *)0x0;
  this->MaxWaitDuration = 0.125;
  this->bWait = false;
  this->bGenerateTimingsFile = false;
  return this;
}

