// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationWarpingRuntime
// Functions: 1

// StaticStruct @ 14a713d60

UScriptStruct * __cdecl FFootPlacementInterpolationSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFootPlacementInterpolationSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UScriptStruct_FFootPlacementInterpolationSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings,
                         (UObject *)pUVar1,L"FootPlacementInterpolationSettings");
  }
  return Z_Registration_Info_UScriptStruct_FFootPlacementInterpolationSettings.OuterSingleton;
}

