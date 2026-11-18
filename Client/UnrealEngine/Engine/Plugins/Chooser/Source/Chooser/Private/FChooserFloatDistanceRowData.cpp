// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 1

// StaticStruct @ 14a86b650

UScriptStruct * __cdecl FChooserFloatDistanceRowData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserFloatDistanceRowData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserFloatDistanceRowData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserFloatDistanceRowData,(UObject *)pUVar1,
                         L"ChooserFloatDistanceRowData");
  }
  return Z_Registration_Info_UScriptStruct_FChooserFloatDistanceRowData.OuterSingleton;
}

