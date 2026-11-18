// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// StaticStruct @ 149ee0410

UScriptStruct * __cdecl FPCGAssetExporterParameters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGAssetExporterParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGAssetExporterParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGAssetExporterParameters,(UObject *)pUVar1,
                         L"PCGAssetExporterParameters");
  }
  return Z_Registration_Info_UScriptStruct_FPCGAssetExporterParameters.OuterSingleton;
}

