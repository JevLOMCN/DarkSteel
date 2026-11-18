// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 1

// StaticStruct @ 146302960

UScriptStruct * __cdecl FChaosVDSessionPing::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDSessionPing.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ChaosSolverEngine();
    Z_Registration_Info_UScriptStruct_FChaosVDSessionPing.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDSessionPing,(UObject *)pUVar1,
                         L"ChaosVDSessionPing");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDSessionPing.OuterSingleton;
}

