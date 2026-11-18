// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// DoWork @ 141aa4c30

/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall FMicrosoftReadRequestWorker::DoWork(FMicrosoftReadRequestWorker *this)

{
  FMicrosoftReadRequest::PerformRequest(this->ReadRequest);
  return;
}

