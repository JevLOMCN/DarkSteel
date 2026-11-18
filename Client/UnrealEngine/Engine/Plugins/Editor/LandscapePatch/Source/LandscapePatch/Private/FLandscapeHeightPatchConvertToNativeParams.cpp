// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LandscapePatch
// Functions: 1

// StaticStruct @ 14db09740

UScriptStruct * __cdecl FLandscapeHeightPatchConvertToNativeParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LandscapePatch();
    Z_Registration_Info_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams,
                         (UObject *)pUVar1,L"LandscapeHeightPatchConvertToNativeParams");
  }
  return Z_Registration_Info_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams.OuterSingleton
  ;
}

