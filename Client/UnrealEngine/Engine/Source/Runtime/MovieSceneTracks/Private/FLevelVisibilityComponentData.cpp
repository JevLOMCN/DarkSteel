// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// StaticStruct @ 1465896f0

UScriptStruct * __cdecl FLevelVisibilityComponentData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLevelVisibilityComponentData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FLevelVisibilityComponentData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLevelVisibilityComponentData,(UObject *)pUVar1,
                         L"LevelVisibilityComponentData");
  }
  return Z_Registration_Info_UScriptStruct_FLevelVisibilityComponentData.OuterSingleton;
}

