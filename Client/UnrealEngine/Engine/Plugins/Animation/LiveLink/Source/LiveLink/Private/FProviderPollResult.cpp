// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// StaticStruct @ 14cff6610

UScriptStruct * __cdecl FProviderPollResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FProviderPollResult.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_LiveLink();
    Z_Registration_Info_UScriptStruct_FProviderPollResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FProviderPollResult,(UObject *)pUVar1,
                         L"ProviderPollResult");
  }
  return Z_Registration_Info_UScriptStruct_FProviderPollResult.OuterSingleton;
}

