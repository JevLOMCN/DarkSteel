// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// StaticStruct @ 14269be10

UScriptStruct * __cdecl FCustomizedToolMenuSection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCustomizedToolMenuSection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Slate();
    Z_Registration_Info_UScriptStruct_FCustomizedToolMenuSection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCustomizedToolMenuSection,(UObject *)pUVar1,
                         L"CustomizedToolMenuSection");
  }
  return Z_Registration_Info_UScriptStruct_FCustomizedToolMenuSection.OuterSingleton;
}

