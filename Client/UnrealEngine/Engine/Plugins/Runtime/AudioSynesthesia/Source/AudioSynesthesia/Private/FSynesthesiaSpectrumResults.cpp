// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 1

// StaticStruct @ 14d814740

UScriptStruct * __cdecl FSynesthesiaSpectrumResults::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSynesthesiaSpectrumResults.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioSynesthesia();
    Z_Registration_Info_UScriptStruct_FSynesthesiaSpectrumResults.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSynesthesiaSpectrumResults,(UObject *)pUVar1,
                         L"SynesthesiaSpectrumResults");
  }
  return Z_Registration_Info_UScriptStruct_FSynesthesiaSpectrumResults.OuterSingleton;
}

