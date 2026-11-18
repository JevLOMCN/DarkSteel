// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 1

// StaticStruct @ 1463e8b90

UScriptStruct * __cdecl FModifyCurveAnimNodeReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FModifyCurveAnimNodeReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FModifyCurveAnimNodeReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FModifyCurveAnimNodeReference,(UObject *)pUVar1,
                         L"ModifyCurveAnimNodeReference");
  }
  return Z_Registration_Info_UScriptStruct_FModifyCurveAnimNodeReference.OuterSingleton;
}

