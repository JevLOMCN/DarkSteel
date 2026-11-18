// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 1

// StaticStruct @ 14d813ad0

UScriptStruct * __cdecl FLoudnessResults::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLoudnessResults.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioSynesthesia();
    Z_Registration_Info_UScriptStruct_FLoudnessResults.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLoudnessResults,(UObject *)pUVar1,
                         L"LoudnessResults");
  }
  return Z_Registration_Info_UScriptStruct_FLoudnessResults.OuterSingleton;
}

