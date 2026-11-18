// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// GetContext @ 141f816e0

FContextSupplier * __thiscall
FFeedbackContextImportDefaults::GetContext(FFeedbackContextImportDefaults *this)

{
  return this->Context;
}

// SetContext @ 141fa96f0

void __thiscall
FFeedbackContextImportDefaults::SetContext
          (FFeedbackContextImportDefaults *this,FContextSupplier *param_1)

{
  this->Context = param_1;
  return;
}

