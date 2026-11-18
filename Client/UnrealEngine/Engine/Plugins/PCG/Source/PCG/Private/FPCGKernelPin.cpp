// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// StaticStruct @ 14978b390

UScriptStruct * __cdecl FPCGKernelPin::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGKernelPin.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGKernelPin.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGKernelPin,(UObject *)pUVar1,L"PCGKernelPin");
  }
  return Z_Registration_Info_UScriptStruct_FPCGKernelPin.OuterSingleton;
}

