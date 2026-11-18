// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 1

// StaticStruct @ 14ead9720

UScriptStruct * __cdecl FNNEDenoiserTemporalInputMappingData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNNEDenoiserTemporalInputMappingData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NNEDenoiser();
    Z_Registration_Info_UScriptStruct_FNNEDenoiserTemporalInputMappingData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNNEDenoiserTemporalInputMappingData,
                         (UObject *)pUVar1,L"NNEDenoiserTemporalInputMappingData");
  }
  return Z_Registration_Info_UScriptStruct_FNNEDenoiserTemporalInputMappingData.OuterSingleton;
}

