// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CinematicCamera
// Functions: 1

// StaticStruct @ 146ab1940

UScriptStruct * __cdecl FCameraLensSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraLensSettings.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_CinematicCamera();
    Z_Registration_Info_UScriptStruct_FCameraLensSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraLensSettings,(UObject *)pUVar1,
                         L"CameraLensSettings");
  }
  return Z_Registration_Info_UScriptStruct_FCameraLensSettings.OuterSingleton;
}

