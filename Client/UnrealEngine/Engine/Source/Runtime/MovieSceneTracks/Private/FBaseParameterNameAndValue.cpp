// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// StaticStruct @ 146724960

UScriptStruct * __cdecl FBaseParameterNameAndValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBaseParameterNameAndValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FBaseParameterNameAndValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBaseParameterNameAndValue,(UObject *)pUVar1,
                         L"BaseParameterNameAndValue");
  }
  return Z_Registration_Info_UScriptStruct_FBaseParameterNameAndValue.OuterSingleton;
}

