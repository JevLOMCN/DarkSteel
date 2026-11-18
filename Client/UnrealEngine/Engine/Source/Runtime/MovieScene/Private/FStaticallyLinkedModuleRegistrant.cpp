// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// InitializeModule @ 146220d60

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FMovieSceneModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x78);
  if (pIVar1 != (IModuleInterface *)0x0) {
    pIVar1[7] = (IModuleInterface)0x0;
    pIVar1[8] = (IModuleInterface)0x0;
    pIVar1[0xc] = (IModuleInterface)0x0;
    pIVar1[0xe] = (IModuleInterface)0x0;
    pIVar1[1] = (IModuleInterface)0x0;
    pIVar1[2] = (IModuleInterface)0x0;
    *pIVar1 = (IModuleInterface)&___7FMovieSceneModule__6B_;
    pIVar1[3] = (IModuleInterface)0x0;
    pIVar1[4] = (IModuleInterface)0x0;
    pIVar1[5] = (IModuleInterface)0x0;
    pIVar1[6] = (IModuleInterface)0x0;
    pIVar1[9] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 10) = 0;
    *(undefined4 *)&pIVar1[10].field_0x4 = 0x80;
    *(undefined4 *)(pIVar1 + 0xb) = 0xffffffff;
    *(undefined4 *)&pIVar1[0xb].field_0x4 = 0;
    pIVar1[0xd] = (IModuleInterface)0x0;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

