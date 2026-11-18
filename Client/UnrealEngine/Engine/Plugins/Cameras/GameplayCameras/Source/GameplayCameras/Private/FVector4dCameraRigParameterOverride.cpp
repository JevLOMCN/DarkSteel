// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// StaticStruct @ 14d574f70

UScriptStruct * __cdecl FVector4dCameraRigParameterOverride::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVector4dCameraRigParameterOverride.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FVector4dCameraRigParameterOverride.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVector4dCameraRigParameterOverride,
                         (UObject *)pUVar1,L"Vector4dCameraRigParameterOverride");
  }
  return Z_Registration_Info_UScriptStruct_FVector4dCameraRigParameterOverride.OuterSingleton;
}

