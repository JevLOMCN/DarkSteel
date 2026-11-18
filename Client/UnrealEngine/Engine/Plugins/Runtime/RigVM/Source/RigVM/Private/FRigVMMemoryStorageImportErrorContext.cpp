// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 1

// Serialize @ 14a10e0c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigVMMemoryStorageImportErrorContext::Serialize
          (FRigVMMemoryStorageImportErrorContext *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  if ((this->bLogErrors != false) && (1 < (byte)LogRigVM._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
    this->NumErrors = this->NumErrors + 1;
    return;
  }
  this->NumErrors = this->NumErrors + 1;
  return;
}

