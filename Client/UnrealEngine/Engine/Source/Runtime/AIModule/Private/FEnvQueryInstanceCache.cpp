// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// StaticStruct @ 146f0f8a0

UScriptStruct * __cdecl FEnvQueryInstanceCache::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEnvQueryInstanceCache.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FEnvQueryInstanceCache.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEnvQueryInstanceCache,(UObject *)pUVar1,
                         L"EnvQueryInstanceCache");
  }
  return Z_Registration_Info_UScriptStruct_FEnvQueryInstanceCache.OuterSingleton;
}

