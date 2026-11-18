// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 1

// StaticStruct @ 14438b980

UScriptStruct * __cdecl FSourceGeometryPartID::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSourceGeometryPartID.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_SkeletalMeshDescription();
    Z_Registration_Info_UScriptStruct_FSourceGeometryPartID.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSourceGeometryPartID,(UObject *)pUVar1,
                         L"SourceGeometryPartID");
  }
  return Z_Registration_Info_UScriptStruct_FSourceGeometryPartID.OuterSingleton;
}

