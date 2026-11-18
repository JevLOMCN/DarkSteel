// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// StaticStruct @ 14d574c70

UScriptStruct * __cdecl FDoubleCameraRigParameterOverride::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDoubleCameraRigParameterOverride.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FDoubleCameraRigParameterOverride.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDoubleCameraRigParameterOverride,
                         (UObject *)pUVar1,L"DoubleCameraRigParameterOverride");
  }
  return Z_Registration_Info_UScriptStruct_FDoubleCameraRigParameterOverride.OuterSingleton;
}

