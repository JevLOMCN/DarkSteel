// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 1

// StaticStruct @ 143632960

UScriptStruct * __cdecl FTriangleID::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTriangleID.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshDescription();
    Z_Registration_Info_UScriptStruct_FTriangleID.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTriangleID,(UObject *)pUVar1,L"TriangleID");
  }
  return Z_Registration_Info_UScriptStruct_FTriangleID.OuterSingleton;
}

