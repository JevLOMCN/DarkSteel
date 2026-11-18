// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 1

// StaticStruct @ 146abeba0

UScriptStruct * __cdecl FGameplayTagContainerNetSerializerConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagContainerNetSerializerConfig.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UScriptStruct_FGameplayTagContainerNetSerializerConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig,
                         (UObject *)pUVar1,L"GameplayTagContainerNetSerializerConfig");
  }
  return Z_Registration_Info_UScriptStruct_FGameplayTagContainerNetSerializerConfig.OuterSingleton;
}

