// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LauncherChunkInstaller
// Functions: 1

// InitializeModule @ 14f00b390

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FLauncherChunkInstallerModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  IModuleInterface IVar2;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 == (IModuleInterface *)0x0) {
    return (IModuleInterface *)0x0;
  }
  *pIVar1 = (IModuleInterface)&___7FLauncherChunkInstallerModule__6B_;
  IVar2 = (IModuleInterface)::operator_new(0x48);
  if (IVar2 != (IModuleInterface)0x0) {
    *(undefined8 *)((longlong)IVar2 + 8) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x10) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x18) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x28) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x30) = 0;
    *(undefined8 *)((longlong)IVar2 + 0x38) = 0;
    *(undefined ***)IVar2 = &___7FLauncherChunkInstaller__6B_;
    *(undefined8 *)((longlong)IVar2 + 0x20) = 2;
    *(undefined8 *)((longlong)IVar2 + 0x40) = 2;
    pIVar1[1] = IVar2;
    return pIVar1;
  }
  pIVar1[1] = (IModuleInterface)0x0;
  return pIVar1;
}

