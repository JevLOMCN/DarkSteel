// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 14727dd70

UScriptStruct * __cdecl FClusterNode_DEPRECATED::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClusterNode_DEPRECATED.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FClusterNode_DEPRECATED.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusterNode_DEPRECATED,(UObject *)pUVar1,
                         L"ClusterNode_DEPRECATED");
  }
  return Z_Registration_Info_UScriptStruct_FClusterNode_DEPRECATED.OuterSingleton;
}

