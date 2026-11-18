// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 1

// InitializeModule @ 145985940

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FD3D11DynamicRHIModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x148);
  if (pIVar1 != (IModuleInterface *)0x0) {
    memset(pIVar1 + 2,0,0x138);
    pIVar1[1] = (IModuleInterface)0x0;
    *pIVar1 = (IModuleInterface)&___7FD3D11DynamicRHIModule__6B_;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

