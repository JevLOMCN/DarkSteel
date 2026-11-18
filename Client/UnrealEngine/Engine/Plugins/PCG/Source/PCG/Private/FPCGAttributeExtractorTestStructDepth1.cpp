// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// StaticStruct @ 149f72e00

UScriptStruct * __cdecl FPCGAttributeExtractorTestStructDepth1::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGAttributeExtractorTestStructDepth1.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGAttributeExtractorTestStructDepth1.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGAttributeExtractorTestStructDepth1,
                         (UObject *)pUVar1,L"PCGAttributeExtractorTestStructDepth1");
  }
  return Z_Registration_Info_UScriptStruct_FPCGAttributeExtractorTestStructDepth1.OuterSingleton;
}

