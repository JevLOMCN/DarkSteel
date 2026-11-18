// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StudioTelemetry
// Functions: 1

// InitializeModule @ 14ea1bad0

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FStudioTelemetry>::InitializeModule(void)

{
  FStudioTelemetry *pFVar1;
  
  pFVar1 = ::operator_new(0x100);
  if (pFVar1 != (FStudioTelemetry *)0x0) {
    memset(pFVar1,0,0x100);
    pFVar1 = FStudioTelemetry::FStudioTelemetry(pFVar1);
    return (IModuleInterface *)pFVar1;
  }
  return (IModuleInterface *)0x0;
}

