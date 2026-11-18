// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 1

// StaticStruct @ 146c44730

UScriptStruct * __cdecl FLevelSequenceLegacyObjectReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceLegacyObjectReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LevelSequence();
    Z_Registration_Info_UScriptStruct_FLevelSequenceLegacyObjectReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceLegacyObjectReference,
                         (UObject *)pUVar1,L"LevelSequenceLegacyObjectReference");
  }
  return Z_Registration_Info_UScriptStruct_FLevelSequenceLegacyObjectReference.OuterSingleton;
}

