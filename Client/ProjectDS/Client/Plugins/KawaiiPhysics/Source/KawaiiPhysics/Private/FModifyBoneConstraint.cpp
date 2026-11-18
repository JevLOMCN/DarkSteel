// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: KawaiiPhysics
// Functions: 1

// StaticStruct @ 14de3b550

UScriptStruct * __cdecl FModifyBoneConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FModifyBoneConstraint.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_KawaiiPhysics();
    Z_Registration_Info_UScriptStruct_FModifyBoneConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FModifyBoneConstraint,(UObject *)pUVar1,
                         L"ModifyBoneConstraint");
  }
  return Z_Registration_Info_UScriptStruct_FModifyBoneConstraint.OuterSingleton;
}

