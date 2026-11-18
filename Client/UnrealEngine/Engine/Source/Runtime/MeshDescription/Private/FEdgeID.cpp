// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 1

// StaticStruct @ 1436328e0

UScriptStruct * __cdecl FEdgeID::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEdgeID.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshDescription();
    Z_Registration_Info_UScriptStruct_FEdgeID.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEdgeID,(UObject *)pUVar1,L"EdgeID");
  }
  return Z_Registration_Info_UScriptStruct_FEdgeID.OuterSingleton;
}

