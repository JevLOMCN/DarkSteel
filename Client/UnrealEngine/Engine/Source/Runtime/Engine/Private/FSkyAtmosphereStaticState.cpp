// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 14732aff0

UScriptStruct * __cdecl FSkyAtmosphereStaticState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkyAtmosphereStaticState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSkyAtmosphereStaticState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkyAtmosphereStaticState,(UObject *)pUVar1,
                         L"SkyAtmosphereStaticState");
  }
  return Z_Registration_Info_UScriptStruct_FSkyAtmosphereStaticState.OuterSingleton;
}

