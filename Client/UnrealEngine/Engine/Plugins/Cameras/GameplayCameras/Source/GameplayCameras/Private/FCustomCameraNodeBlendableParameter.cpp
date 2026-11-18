// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// StaticStruct @ 14d56b680

UScriptStruct * __cdecl FCustomCameraNodeBlendableParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCustomCameraNodeBlendableParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCustomCameraNodeBlendableParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCustomCameraNodeBlendableParameter,
                         (UObject *)pUVar1,L"CustomCameraNodeBlendableParameter");
  }
  return Z_Registration_Info_UScriptStruct_FCustomCameraNodeBlendableParameter.OuterSingleton;
}

