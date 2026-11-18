// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 1

// StaticStruct @ 146ac0410

UScriptStruct * __cdecl FGameplayTagNetSerializerConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagNetSerializerConfig.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UScriptStruct_FGameplayTagNetSerializerConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig,(UObject *)pUVar1
                         ,L"GameplayTagNetSerializerConfig");
  }
  return Z_Registration_Info_UScriptStruct_FGameplayTagNetSerializerConfig.OuterSingleton;
}

