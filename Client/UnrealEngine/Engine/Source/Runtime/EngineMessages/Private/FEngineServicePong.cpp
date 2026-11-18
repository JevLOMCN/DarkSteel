// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineMessages
// Functions: 1

// StaticStruct @ 14463a2f0

UScriptStruct * __cdecl FEngineServicePong::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEngineServicePong.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EngineMessages();
    Z_Registration_Info_UScriptStruct_FEngineServicePong.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEngineServicePong,(UObject *)pUVar1,
                         L"EngineServicePong");
  }
  return Z_Registration_Info_UScriptStruct_FEngineServicePong.OuterSingleton;
}

