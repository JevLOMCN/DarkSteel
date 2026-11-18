// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 1

// StaticStruct @ 14aca6680

UScriptStruct * __cdecl FUIParticleRandomFactor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUIParticleRandomFactor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EasyParticleModule();
    Z_Registration_Info_UScriptStruct_FUIParticleRandomFactor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUIParticleRandomFactor,(UObject *)pUVar1,
                         L"UIParticleRandomFactor");
  }
  return Z_Registration_Info_UScriptStruct_FUIParticleRandomFactor.OuterSingleton;
}

