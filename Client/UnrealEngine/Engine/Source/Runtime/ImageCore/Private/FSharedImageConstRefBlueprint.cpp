// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageCore
// Functions: 1

// StaticStruct @ 142343aa0

UScriptStruct * __cdecl FSharedImageConstRefBlueprint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSharedImageConstRefBlueprint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ImageCore();
    Z_Registration_Info_UScriptStruct_FSharedImageConstRefBlueprint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSharedImageConstRefBlueprint,(UObject *)pUVar1,
                         L"SharedImageConstRefBlueprint");
  }
  return Z_Registration_Info_UScriptStruct_FSharedImageConstRefBlueprint.OuterSingleton;
}

