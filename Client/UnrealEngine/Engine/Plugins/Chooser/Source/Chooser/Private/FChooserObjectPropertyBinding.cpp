// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 1

// StaticStruct @ 14a870290

UScriptStruct * __cdecl FChooserObjectPropertyBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserObjectPropertyBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserObjectPropertyBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserObjectPropertyBinding,(UObject *)pUVar1,
                         L"ChooserObjectPropertyBinding");
  }
  return Z_Registration_Info_UScriptStruct_FChooserObjectPropertyBinding.OuterSingleton;
}

