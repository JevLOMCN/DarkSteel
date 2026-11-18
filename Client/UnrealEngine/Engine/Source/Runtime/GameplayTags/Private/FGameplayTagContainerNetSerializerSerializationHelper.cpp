// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 1

// StaticStruct @ 146ac2840

UScriptStruct * __cdecl FGameplayTagContainerNetSerializerSerializationHelper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper
                         ,(UObject *)pUVar1,L"GameplayTagContainerNetSerializerSerializationHelper")
    ;
  }
  return Z_Registration_Info_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper.
         OuterSingleton;
}

