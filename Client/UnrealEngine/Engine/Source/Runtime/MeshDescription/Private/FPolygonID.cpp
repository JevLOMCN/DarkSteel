// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 1

// StaticStruct @ 143632a20

UScriptStruct * __cdecl FPolygonID::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPolygonID.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshDescription();
    Z_Registration_Info_UScriptStruct_FPolygonID.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPolygonID,(UObject *)pUVar1,L"PolygonID");
  }
  return Z_Registration_Info_UScriptStruct_FPolygonID.OuterSingleton;
}

