// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 1

// StaticStruct @ 14ac8aa50

UScriptStruct * __cdecl FUIParticleEmitterInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUIParticleEmitterInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UIParticle();
    Z_Registration_Info_UScriptStruct_FUIParticleEmitterInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUIParticleEmitterInfo,(UObject *)pUVar1,
                         L"UIParticleEmitterInfo");
  }
  return Z_Registration_Info_UScriptStruct_FUIParticleEmitterInfo.OuterSingleton;
}

