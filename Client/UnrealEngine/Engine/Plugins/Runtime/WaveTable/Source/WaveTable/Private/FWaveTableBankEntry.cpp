// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WaveTable
// Functions: 1

// StaticStruct @ 14b2bb140

UScriptStruct * __cdecl FWaveTableBankEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWaveTableBankEntry.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_WaveTable();
    Z_Registration_Info_UScriptStruct_FWaveTableBankEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWaveTableBankEntry,(UObject *)pUVar1,
                         L"WaveTableBankEntry");
  }
  return Z_Registration_Info_UScriptStruct_FWaveTableBankEntry.OuterSingleton;
}

