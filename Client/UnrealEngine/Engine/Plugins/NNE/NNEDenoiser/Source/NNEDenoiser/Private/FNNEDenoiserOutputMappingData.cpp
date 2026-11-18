// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 1

// StaticStruct @ 14ead96a0

UScriptStruct * __cdecl FNNEDenoiserOutputMappingData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNNEDenoiserOutputMappingData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NNEDenoiser();
    Z_Registration_Info_UScriptStruct_FNNEDenoiserOutputMappingData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNNEDenoiserOutputMappingData,(UObject *)pUVar1,
                         L"NNEDenoiserOutputMappingData");
  }
  return Z_Registration_Info_UScriptStruct_FNNEDenoiserOutputMappingData.OuterSingleton;
}

