// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 1

// StaticStruct @ 14a86e1c0

UScriptStruct * __cdecl FChooserOutputEnumRowData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserOutputEnumRowData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserOutputEnumRowData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserOutputEnumRowData,(UObject *)pUVar1,
                         L"ChooserOutputEnumRowData");
  }
  return Z_Registration_Info_UScriptStruct_FChooserOutputEnumRowData.OuterSingleton;
}

