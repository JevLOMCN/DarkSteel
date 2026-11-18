// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CinematicCamera
// Functions: 1

// StaticStruct @ 146ab1a40

UScriptStruct * __cdecl FCameraTrackingFocusSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraTrackingFocusSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CinematicCamera();
    Z_Registration_Info_UScriptStruct_FCameraTrackingFocusSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings,(UObject *)pUVar1,
                         L"CameraTrackingFocusSettings");
  }
  return Z_Registration_Info_UScriptStruct_FCameraTrackingFocusSettings.OuterSingleton;
}

