// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// InitializeModule @ 149f51130

IModuleInterface * __cdecl FStaticallyLinkedModuleRegistrant<FPCGModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x128);
  if (pIVar1 != (IModuleInterface *)0x0) {
    pIVar1[9] = (IModuleInterface)0x0;
    pIVar1[10] = (IModuleInterface)0x0;
    pIVar1[0xe] = (IModuleInterface)0x0;
    memset(&pIVar1[0x10].field_0x4,0,0xa4);
    *pIVar1 = (IModuleInterface)&___7FPCGModule__6B_;
    pIVar1[2] = (IModuleInterface)0x0;
    pIVar1[1] = (IModuleInterface)&___7FPCGGetDataFunctionRegistry__6B_;
    pIVar1[3] = (IModuleInterface)0x0;
    pIVar1[4] = (IModuleInterface)0x0;
    pIVar1[5] = (IModuleInterface)0x0;
    pIVar1[6] = (IModuleInterface)0x0;
    pIVar1[7] = (IModuleInterface)0x0;
    pIVar1[8] = (IModuleInterface)0x0;
    pIVar1[0xb] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0xc) = 0;
    *(undefined4 *)&pIVar1[0xc].field_0x4 = 0x80;
    *(undefined4 *)(pIVar1 + 0xd) = 0xffffffff;
    *(undefined4 *)&pIVar1[0xd].field_0x4 = 0;
    pIVar1[0xf] = (IModuleInterface)0x0;
    *(undefined4 *)(pIVar1 + 0x10) = 0;
    FPCGDataTypeRegistry::FPCGDataTypeRegistry((FPCGDataTypeRegistry *)(pIVar1 + 0x11));
    pIVar1[0x1c] = (IModuleInterface)0x0;
    pIVar1[0x1d] = (IModuleInterface)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar1 + 0x1e),4000);
    pIVar1[0x23] = (IModuleInterface)0x0;
    pIVar1[0x24] = (IModuleInterface)0x0;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

