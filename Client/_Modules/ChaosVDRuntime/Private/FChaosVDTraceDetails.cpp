// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 1

// StaticStruct @ 1436cad50

UScriptStruct * __cdecl FChaosVDTraceDetails::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDTraceDetails.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDTraceDetails.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDTraceDetails,(UObject *)pUVar1,
                         L"ChaosVDTraceDetails");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDTraceDetails.OuterSingleton;
}

