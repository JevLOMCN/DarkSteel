// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 1

// StaticStruct @ 146302cb0

UScriptStruct * __cdecl FChaosVDRelayTraceStatusMessage::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDRelayTraceStatusMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosVDRelayTraceStatusMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDRelayTraceStatusMessage,(UObject *)pUVar1
                         ,L"ChaosVDRelayTraceStatusMessage");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDRelayTraceStatusMessage.OuterSingleton;
}

