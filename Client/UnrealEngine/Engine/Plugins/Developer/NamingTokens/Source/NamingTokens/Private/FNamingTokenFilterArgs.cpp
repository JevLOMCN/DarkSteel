// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokens
// Functions: 1

// StaticStruct @ 14d0d1130

UScriptStruct * __cdecl FNamingTokenFilterArgs::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNamingTokenFilterArgs.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NamingTokens();
    Z_Registration_Info_UScriptStruct_FNamingTokenFilterArgs.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNamingTokenFilterArgs,(UObject *)pUVar1,
                         L"NamingTokenFilterArgs");
  }
  return Z_Registration_Info_UScriptStruct_FNamingTokenFilterArgs.OuterSingleton;
}

