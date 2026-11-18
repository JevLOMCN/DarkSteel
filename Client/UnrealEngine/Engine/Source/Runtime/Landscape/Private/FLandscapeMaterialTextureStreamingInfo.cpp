// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// StaticStruct @ 145ef1d10

UScriptStruct * __cdecl FLandscapeMaterialTextureStreamingInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLandscapeMaterialTextureStreamingInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UScriptStruct_FLandscapeMaterialTextureStreamingInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo,
                         (UObject *)pUVar1,L"LandscapeMaterialTextureStreamingInfo");
  }
  return Z_Registration_Info_UScriptStruct_FLandscapeMaterialTextureStreamingInfo.OuterSingleton;
}

