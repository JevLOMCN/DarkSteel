// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// StaticStruct @ 14978bba0

UScriptStruct * __cdecl FPCGParsedCopyElementFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGParsedCopyElementFunction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGParsedCopyElementFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGParsedCopyElementFunction,(UObject *)pUVar1,
                         L"PCGParsedCopyElementFunction");
  }
  return Z_Registration_Info_UScriptStruct_FPCGParsedCopyElementFunction.OuterSingleton;
}

