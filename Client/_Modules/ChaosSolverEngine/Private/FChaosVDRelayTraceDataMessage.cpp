// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 1

// StaticStruct @ 146302c70

UScriptStruct * __cdecl FChaosVDRelayTraceDataMessage::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDRelayTraceDataMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosVDRelayTraceDataMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDRelayTraceDataMessage,(UObject *)pUVar1,
                         L"ChaosVDRelayTraceDataMessage");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDRelayTraceDataMessage.OuterSingleton;
}

