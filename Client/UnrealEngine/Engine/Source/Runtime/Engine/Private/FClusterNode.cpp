// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 14727dec0

UScriptStruct * __cdecl FClusterNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClusterNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FClusterNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusterNode,(UObject *)pUVar1,L"ClusterNode");
  }
  return Z_Registration_Info_UScriptStruct_FClusterNode.OuterSingleton;
}

