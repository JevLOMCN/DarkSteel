// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineMessages
// Functions: 1

// StaticStruct @ 14463a450

UScriptStruct * __cdecl FEngineServiceTerminate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEngineServiceTerminate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EngineMessages();
    Z_Registration_Info_UScriptStruct_FEngineServiceTerminate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEngineServiceTerminate,(UObject *)pUVar1,
                         L"EngineServiceTerminate");
  }
  return Z_Registration_Info_UScriptStruct_FEngineServiceTerminate.OuterSingleton;
}

