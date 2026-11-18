// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 1

// StaticStruct @ 146b92870

UScriptStruct * __cdecl FTranslationChange::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTranslationChange.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TranslationEditor();
    Z_Registration_Info_UScriptStruct_FTranslationChange.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTranslationChange,(UObject *)pUVar1,
                         L"TranslationChange");
  }
  return Z_Registration_Info_UScriptStruct_FTranslationChange.OuterSingleton;
}

