// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineD3D11RHI
// Functions: 1

// InitializeModule @ 14de66ca0

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FStreamlineD3D11RHIModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(8);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *pIVar1 = (IModuleInterface)&___7FStreamlineD3D11RHIModule__6B_;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

