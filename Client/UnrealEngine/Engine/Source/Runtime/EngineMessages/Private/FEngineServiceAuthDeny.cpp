// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineMessages
// Functions: 1

// StaticStruct @ 14463a350

UScriptStruct * __cdecl FEngineServiceAuthDeny::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEngineServiceAuthDeny.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EngineMessages();
    Z_Registration_Info_UScriptStruct_FEngineServiceAuthDeny.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEngineServiceAuthDeny,(UObject *)pUVar1,
                         L"EngineServiceAuthDeny");
  }
  return Z_Registration_Info_UScriptStruct_FEngineServiceAuthDeny.OuterSingleton;
}

