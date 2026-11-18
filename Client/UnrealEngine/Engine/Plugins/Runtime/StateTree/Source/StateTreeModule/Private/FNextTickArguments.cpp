// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// FNextTickArguments @ 14d4e9dd0

FNextTickArguments * __thiscall
FStateTreeExecutionExtension::FNextTickArguments::FNextTickArguments
          (FNextTickArguments *this,ETickReason param_1)

{
  this->Reason = param_1;
  return this;
}

// FNextTickArguments @ 14d4e9de0

FNextTickArguments * __thiscall
FStateTreeExecutionExtension::FNextTickArguments::FNextTickArguments(FNextTickArguments *this)

{
  this->Reason = None;
  return this;
}

