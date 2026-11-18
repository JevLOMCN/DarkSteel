// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 1

// StaticStruct @ 148c09e90

UScriptStruct * __cdecl FClothConstraintSetup_Legacy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClothConstraintSetup_Legacy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
    Z_Registration_Info_UScriptStruct_FClothConstraintSetup_Legacy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy,(UObject *)pUVar1,
                         L"ClothConstraintSetup_Legacy");
  }
  return Z_Registration_Info_UScriptStruct_FClothConstraintSetup_Legacy.OuterSingleton;
}

