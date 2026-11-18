// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 1

// StaticStruct @ 146c44620

UScriptStruct * __cdecl FLevelSequenceCameraSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceCameraSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LevelSequence();
    Z_Registration_Info_UScriptStruct_FLevelSequenceCameraSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceCameraSettings,(UObject *)pUVar1,
                         L"LevelSequenceCameraSettings");
  }
  return Z_Registration_Info_UScriptStruct_FLevelSequenceCameraSettings.OuterSingleton;
}

