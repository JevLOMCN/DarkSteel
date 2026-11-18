// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// StaticStruct @ 14cea73b0

UScriptStruct * __cdecl FComputeDistanceFieldSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FComputeDistanceFieldSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UScriptStruct_FComputeDistanceFieldSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FComputeDistanceFieldSettings,(UObject *)pUVar1,
                         L"ComputeDistanceFieldSettings");
  }
  return Z_Registration_Info_UScriptStruct_FComputeDistanceFieldSettings.OuterSingleton;
}

