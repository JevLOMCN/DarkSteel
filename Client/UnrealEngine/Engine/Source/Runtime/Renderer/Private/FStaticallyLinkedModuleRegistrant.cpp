// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// InitializeModule @ 145443620

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FRendererModule>::InitializeModule(void)

{
  FRendererModule *pFVar1;
  
  pFVar1 = ::operator_new(0xc0);
  if (pFVar1 != (FRendererModule *)0x0) {
    pFVar1 = FRendererModule::FRendererModule(pFVar1);
    return (IModuleInterface *)pFVar1;
  }
  return (IModuleInterface *)0x0;
}

