// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 1

// StaticStruct @ 14a870160

UScriptStruct * __cdecl FChooserEnumPropertyBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserEnumPropertyBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserEnumPropertyBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserEnumPropertyBinding,(UObject *)pUVar1,
                         L"ChooserEnumPropertyBinding");
  }
  return Z_Registration_Info_UScriptStruct_FChooserEnumPropertyBinding.OuterSingleton;
}

