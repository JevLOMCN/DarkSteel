// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 1

// StaticStruct @ 146d38c30

UScriptStruct * __cdecl FGameplayDebuggerCategoryData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerCategoryData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayDebugger();
    Z_Registration_Info_UScriptStruct_FGameplayDebuggerCategoryData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryData,(UObject *)pUVar1,
                         L"GameplayDebuggerCategoryData");
  }
  return Z_Registration_Info_UScriptStruct_FGameplayDebuggerCategoryData.OuterSingleton;
}

