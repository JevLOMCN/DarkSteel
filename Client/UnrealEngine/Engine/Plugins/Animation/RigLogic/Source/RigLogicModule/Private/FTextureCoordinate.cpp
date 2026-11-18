// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 1

// StaticStruct @ 14a65bee0

UScriptStruct * __cdecl FTextureCoordinate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTextureCoordinate.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UScriptStruct_FTextureCoordinate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTextureCoordinate,(UObject *)pUVar1,
                         L"TextureCoordinate");
  }
  return Z_Registration_Info_UScriptStruct_FTextureCoordinate.OuterSingleton;
}

