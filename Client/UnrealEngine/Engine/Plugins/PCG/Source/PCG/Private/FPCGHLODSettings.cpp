// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// StaticStruct @ 149ce4520

UScriptStruct * __cdecl FPCGHLODSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGHLODSettings.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGHLODSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGHLODSettings,(UObject *)pUVar1,
                         L"PCGHLODSettings");
  }
  return Z_Registration_Info_UScriptStruct_FPCGHLODSettings.OuterSingleton;
}

