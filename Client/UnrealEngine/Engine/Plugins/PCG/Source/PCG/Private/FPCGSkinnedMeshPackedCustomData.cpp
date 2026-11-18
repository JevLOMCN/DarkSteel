// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// StaticStruct @ 149ce5770

UScriptStruct * __cdecl FPCGSkinnedMeshPackedCustomData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGSkinnedMeshPackedCustomData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGSkinnedMeshPackedCustomData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGSkinnedMeshPackedCustomData,(UObject *)pUVar1
                         ,L"PCGSkinnedMeshPackedCustomData");
  }
  return Z_Registration_Info_UScriptStruct_FPCGSkinnedMeshPackedCustomData.OuterSingleton;
}

