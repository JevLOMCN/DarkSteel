// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// StaticStruct @ 14d57aee0

UScriptStruct * __cdecl FBlueprintCameraDirectorEvaluationParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintCameraDirectorEvaluationParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FBlueprintCameraDirectorEvaluationParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintCameraDirectorEvaluationParams,
                         (UObject *)pUVar1,L"BlueprintCameraDirectorEvaluationParams");
  }
  return Z_Registration_Info_UScriptStruct_FBlueprintCameraDirectorEvaluationParams.OuterSingleton;
}

