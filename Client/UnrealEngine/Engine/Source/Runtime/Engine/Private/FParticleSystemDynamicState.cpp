// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 1473226a0

UScriptStruct * __cdecl FParticleSystemDynamicState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FParticleSystemDynamicState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FParticleSystemDynamicState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FParticleSystemDynamicState,(UObject *)pUVar1,
                         L"ParticleSystemDynamicState");
  }
  return Z_Registration_Info_UScriptStruct_FParticleSystemDynamicState.OuterSingleton;
}

