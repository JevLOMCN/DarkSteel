// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 1

// StaticStruct @ 14a77fbe0

UScriptStruct * __cdecl FRichTextIconData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRichTextIconData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CommonUI();
    Z_Registration_Info_UScriptStruct_FRichTextIconData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRichTextIconData,(UObject *)pUVar1,
                         L"RichTextIconData");
  }
  return Z_Registration_Info_UScriptStruct_FRichTextIconData.OuterSingleton;
}

