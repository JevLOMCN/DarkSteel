// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 1

// InitializeModule @ 14cef3b60

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FPCGGeometryScriptInteropModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x18);
  if (pIVar1 != (IModuleInterface *)0x0) {
    pIVar1[1] = (IModuleInterface)0xffffffffffffffff;
    *pIVar1 = (IModuleInterface)&___7FPCGGeometryScriptInteropModule__6B_;
    pIVar1[2] = (IModuleInterface)0xffffffffffffffff;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

