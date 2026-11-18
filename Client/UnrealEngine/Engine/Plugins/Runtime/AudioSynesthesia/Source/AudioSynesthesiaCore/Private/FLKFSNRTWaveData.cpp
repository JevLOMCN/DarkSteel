// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 1

// StaticStruct @ 14d7eb100

UScriptStruct * __cdecl FLKFSNRTWaveData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLKFSNRTWaveData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioSynesthesiaCore();
    Z_Registration_Info_UScriptStruct_FLKFSNRTWaveData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLKFSNRTWaveData,(UObject *)pUVar1,
                         L"LKFSNRTWaveData");
  }
  return Z_Registration_Info_UScriptStruct_FLKFSNRTWaveData.OuterSingleton;
}

