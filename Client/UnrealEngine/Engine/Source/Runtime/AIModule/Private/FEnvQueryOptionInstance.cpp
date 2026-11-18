// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// StaticStruct @ 146f10830

UScriptStruct * __cdecl FEnvQueryOptionInstance::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEnvQueryOptionInstance.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FEnvQueryOptionInstance.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEnvQueryOptionInstance,(UObject *)pUVar1,
                         L"EnvQueryOptionInstance");
  }
  return Z_Registration_Info_UScriptStruct_FEnvQueryOptionInstance.OuterSingleton;
}

