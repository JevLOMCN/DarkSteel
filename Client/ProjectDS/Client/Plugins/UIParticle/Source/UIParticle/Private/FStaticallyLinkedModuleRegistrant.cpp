// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 1

// InitializeModule @ 14ac9afa0

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FUIParticleModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x28);
  if (pIVar1 != (IModuleInterface *)0x0) {
    pIVar1[1] = (IModuleInterface)0x0;
    pIVar1[2] = (IModuleInterface)0x0;
    pIVar1[3] = (IModuleInterface)0x0;
    pIVar1[4] = (IModuleInterface)0x0;
    *pIVar1 = (IModuleInterface)&___7FUIParticleModule__6B_;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

