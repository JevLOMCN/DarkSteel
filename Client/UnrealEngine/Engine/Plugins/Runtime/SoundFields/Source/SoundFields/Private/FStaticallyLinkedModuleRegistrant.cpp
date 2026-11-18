// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SoundFields
// Functions: 1

// InitializeModule @ 14f09d4e0

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *pIVar1 = (IModuleInterface)&___7FSoundFieldsModule__6B_;
    *(ISoundfieldFactory *)(pIVar1 + 1) = (ISoundfieldFactory)&___7FAmbisonicsSoundfieldFormat__6B_;
    ISoundfieldFactory::RegisterSoundfieldFormat((ISoundfieldFactory *)(pIVar1 + 1));
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

