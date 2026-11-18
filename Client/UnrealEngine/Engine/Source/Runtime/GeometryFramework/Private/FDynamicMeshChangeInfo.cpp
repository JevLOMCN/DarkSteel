// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 1

// StaticStruct @ 1496e83a0

UScriptStruct * __cdecl FDynamicMeshChangeInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDynamicMeshChangeInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryFramework();
    Z_Registration_Info_UScriptStruct_FDynamicMeshChangeInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDynamicMeshChangeInfo,(UObject *)pUVar1,
                         L"DynamicMeshChangeInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDynamicMeshChangeInfo.OuterSingleton;
}

