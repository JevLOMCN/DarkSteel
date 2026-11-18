// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CUDA
// Functions: 1

// InitializeModule @ 148cfcb00

IModuleInterface * __cdecl FStaticallyLinkedModuleRegistrant<FCUDAModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0xac8);
  if (pIVar1 != (IModuleInterface *)0x0) {
    memset(pIVar1 + 5,0,0xa50);
    pIVar1[0x151] = (IModuleInterface)0x0;
    pIVar1[0x152] = (IModuleInterface)0x0;
    pIVar1[0x156] = (IModuleInterface)0x0;
    pIVar1[0x158] = (IModuleInterface)0x0;
    *pIVar1 = (IModuleInterface)&___7FCUDAModule__6B_;
    pIVar1[1] = (IModuleInterface)0x0;
    pIVar1[2] = (IModuleInterface)0x0;
    pIVar1[3] = (IModuleInterface)0x0;
    pIVar1[0x14f] = (IModuleInterface)0x0;
    pIVar1[0x150] = (IModuleInterface)0x0;
    pIVar1[0x153] = (IModuleInterface)0x0;
    pIVar1[4] = (IModuleInterface)0x2;
    *(undefined4 *)(pIVar1 + 0x154) = 0;
    *(undefined4 *)&pIVar1[0x154].field_0x4 = 0x80;
    *(undefined4 *)&pIVar1[0x155].field_0x4 = 0;
    *(undefined4 *)(pIVar1 + 0x155) = 0xffffffff;
    pIVar1[0x157] = (IModuleInterface)0x0;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

