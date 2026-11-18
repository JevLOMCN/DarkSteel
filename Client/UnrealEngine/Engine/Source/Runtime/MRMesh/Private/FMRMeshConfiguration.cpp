// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MRMesh
// Functions: 1

// StaticStruct @ 146c62250

UScriptStruct * __cdecl FMRMeshConfiguration::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMRMeshConfiguration.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MRMesh();
    Z_Registration_Info_UScriptStruct_FMRMeshConfiguration.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMRMeshConfiguration,(UObject *)pUVar1,
                         L"MRMeshConfiguration");
  }
  return Z_Registration_Info_UScriptStruct_FMRMeshConfiguration.OuterSingleton;
}

