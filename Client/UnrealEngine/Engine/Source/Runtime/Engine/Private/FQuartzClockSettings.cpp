// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 1473360c0

UScriptStruct * __cdecl FQuartzClockSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FQuartzClockSettings.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FQuartzClockSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FQuartzClockSettings,(UObject *)pUVar1,
                         L"QuartzClockSettings");
  }
  return Z_Registration_Info_UScriptStruct_FQuartzClockSettings.OuterSingleton;
}

