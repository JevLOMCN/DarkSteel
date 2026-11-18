// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineMessages
// Functions: 1

// StaticStruct @ 144638c40

UScriptStruct * __cdecl FTraceControlPause::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlPause.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EngineMessages();
    Z_Registration_Info_UScriptStruct_FTraceControlPause.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlPause,(UObject *)pUVar1,
                         L"TraceControlPause");
  }
  return Z_Registration_Info_UScriptStruct_FTraceControlPause.OuterSingleton;
}

