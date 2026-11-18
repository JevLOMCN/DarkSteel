// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 1

// StaticStruct @ 142379590

UScriptStruct * __cdecl FConstraintDescription::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConstraintDescription.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationCore();
    Z_Registration_Info_UScriptStruct_FConstraintDescription.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConstraintDescription,(UObject *)pUVar1,
                         L"ConstraintDescription");
  }
  return Z_Registration_Info_UScriptStruct_FConstraintDescription.OuterSingleton;
}

