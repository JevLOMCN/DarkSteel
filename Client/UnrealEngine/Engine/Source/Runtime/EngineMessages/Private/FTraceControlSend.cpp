// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineMessages
// Functions: 1

// StaticStruct @ 144638b40

UScriptStruct * __cdecl FTraceControlSend::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlSend.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EngineMessages();
    Z_Registration_Info_UScriptStruct_FTraceControlSend.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlSend,(UObject *)pUVar1,
                         L"TraceControlSend");
  }
  return Z_Registration_Info_UScriptStruct_FTraceControlSend.OuterSingleton;
}

