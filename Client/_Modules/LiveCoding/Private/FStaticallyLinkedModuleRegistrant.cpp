// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveCoding
// Functions: 1

// InitializeModule @ 146cdc970

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FLiveCodingModule>::InitializeModule(void)

{
  FLiveCodingModule *pFVar1;
  
  pFVar1 = ::operator_new(0x1c8);
  if (pFVar1 != (FLiveCodingModule *)0x0) {
    pFVar1 = FLiveCodingModule::FLiveCodingModule(pFVar1);
    return (IModuleInterface *)pFVar1;
  }
  return (IModuleInterface *)0x0;
}

