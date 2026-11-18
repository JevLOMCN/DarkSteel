// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// StaticStruct @ 14d644000

UScriptStruct * __cdecl FCameraFramingZoneParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraFramingZoneParameter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraFramingZoneParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraFramingZoneParameter,(UObject *)pUVar1,
                         L"CameraFramingZoneParameter");
  }
  return Z_Registration_Info_UScriptStruct_FCameraFramingZoneParameter.OuterSingleton;
}

