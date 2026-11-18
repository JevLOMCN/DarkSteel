// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 1

// StaticStruct @ 14ac8d470

UScriptStruct * __cdecl FScalarParamCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FScalarParamCurve.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UIParticle();
    Z_Registration_Info_UScriptStruct_FScalarParamCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FScalarParamCurve,(UObject *)pUVar1,
                         L"ScalarParamCurve");
  }
  return Z_Registration_Info_UScriptStruct_FScalarParamCurve.OuterSingleton;
}

