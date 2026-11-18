// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 1

// StaticStruct @ 14ac63090

UScriptStruct * __cdecl FTemplateSectionPropertyScale::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTemplateSectionPropertyScale.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TemplateSequence();
    Z_Registration_Info_UScriptStruct_FTemplateSectionPropertyScale.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTemplateSectionPropertyScale,(UObject *)pUVar1,
                         L"TemplateSectionPropertyScale");
  }
  return Z_Registration_Info_UScriptStruct_FTemplateSectionPropertyScale.OuterSingleton;
}

