// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 2

// StartupModule @ 14a9faf40

void __thiscall FMutableRuntimeModule::StartupModule(FMutableRuntimeModule *this)

{
  if (SInitialized == 0) {
    SInitialized = 1;
    SFinalized = 0;
    miro::initialize();
    return;
  }
  return;
}

// ShutdownModule @ 14a9faf70

void __thiscall FMutableRuntimeModule::ShutdownModule(FMutableRuntimeModule *this)

{
  if ((SInitialized != 0) && (SFinalized == 0)) {
    miro::finalize();
    SFinalized = 1;
    SInitialized = 0;
  }
  return;
}

