// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GPUTextureTransfer
// Functions: 1

// InitializeModule @ 14d75a370

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FGPUTextureTransferModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x90);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *(undefined4 *)&pIVar1[2].field_0x1 = 0;
    *(undefined2 *)&pIVar1[2].field_0x5 = 0;
    pIVar1[2].field_0x7 = 0;
    pIVar1[5] = (IModuleInterface)0x0;
    *pIVar1 = (IModuleInterface)&___7FGPUTextureTransferModule__6B_;
    pIVar1[1] = (IModuleInterface)0x0;
    *(undefined1 *)(pIVar1 + 2) = 0;
    pIVar1[3] = (IModuleInterface)0x0;
    pIVar1[4] = (IModuleInterface)0x0;
    pIVar1[6] = (IModuleInterface)0x0;
    pIVar1[7] = (IModuleInterface)0x0;
    pIVar1[8] = (IModuleInterface)0x0;
    pIVar1[9] = (IModuleInterface)0x0;
    pIVar1[10] = (IModuleInterface)0x0;
    pIVar1[0xb] = (IModuleInterface)0x0;
    pIVar1[0xc] = (IModuleInterface)0x0;
    pIVar1[0xd] = (IModuleInterface)0x0;
    pIVar1[0xe] = (IModuleInterface)0x0;
    pIVar1[0xf] = (IModuleInterface)0x0;
    pIVar1[0x10] = (IModuleInterface)0x0;
    pIVar1[0x11] = (IModuleInterface)0x0;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

