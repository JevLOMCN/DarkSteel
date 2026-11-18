// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 1

// StaticStruct @ 14da57250

UScriptStruct * __cdecl FPVDebugSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPVDebugSettings.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProceduralVegetation();
    Z_Registration_Info_UScriptStruct_FPVDebugSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPVDebugSettings,(UObject *)pUVar1,
                         L"PVDebugSettings");
  }
  return Z_Registration_Info_UScriptStruct_FPVDebugSettings.OuterSingleton;
}

