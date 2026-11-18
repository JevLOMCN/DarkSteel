// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LandscapePatch
// Functions: 1

// StaticStruct @ 14db0a250

UScriptStruct * __cdecl FLandscapeTexturePatchEncodingSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLandscapeTexturePatchEncodingSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LandscapePatch();
    Z_Registration_Info_UScriptStruct_FLandscapeTexturePatchEncodingSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings,
                         (UObject *)pUVar1,L"LandscapeTexturePatchEncodingSettings");
  }
  return Z_Registration_Info_UScriptStruct_FLandscapeTexturePatchEncodingSettings.OuterSingleton;
}

