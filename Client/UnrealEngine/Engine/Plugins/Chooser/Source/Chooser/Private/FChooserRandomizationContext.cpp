// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 1

// StaticStruct @ 14a86d7d0

UScriptStruct * __cdecl FChooserRandomizationContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserRandomizationContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserRandomizationContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserRandomizationContext,(UObject *)pUVar1,
                         L"ChooserRandomizationContext");
  }
  return Z_Registration_Info_UScriptStruct_FChooserRandomizationContext.OuterSingleton;
}

