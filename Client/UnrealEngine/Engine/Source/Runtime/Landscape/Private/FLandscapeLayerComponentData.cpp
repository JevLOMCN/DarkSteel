// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// StaticStruct @ 145f23e30

UScriptStruct * __cdecl FLandscapeLayerComponentData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLandscapeLayerComponentData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UScriptStruct_FLandscapeLayerComponentData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeLayerComponentData,(UObject *)pUVar1,
                         L"LandscapeLayerComponentData");
  }
  return Z_Registration_Info_UScriptStruct_FLandscapeLayerComponentData.OuterSingleton;
}

