// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ARUtilities
// Functions: 1

// StaticStruct @ 14cfc64e0

UScriptStruct * __cdecl FARKitPoseTrackingConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FARKitPoseTrackingConfig.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ARUtilities();
    Z_Registration_Info_UScriptStruct_FARKitPoseTrackingConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FARKitPoseTrackingConfig,(UObject *)pUVar1,
                         L"ARKitPoseTrackingConfig");
  }
  return Z_Registration_Info_UScriptStruct_FARKitPoseTrackingConfig.OuterSingleton;
}

