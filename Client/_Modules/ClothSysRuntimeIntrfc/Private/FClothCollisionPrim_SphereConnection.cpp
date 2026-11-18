// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothSysRuntimeIntrfc
// Functions: 1

// StaticStruct @ 1446450d0

UScriptStruct * __cdecl FClothCollisionPrim_SphereConnection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClothCollisionPrim_SphereConnection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
    Z_Registration_Info_UScriptStruct_FClothCollisionPrim_SphereConnection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection,
                         (UObject *)pUVar1,L"ClothCollisionPrim_SphereConnection");
  }
  return Z_Registration_Info_UScriptStruct_FClothCollisionPrim_SphereConnection.OuterSingleton;
}

