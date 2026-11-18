// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// StaticStruct @ 1469657c0

UScriptStruct * __cdecl FRichImageRow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRichImageRow.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UScriptStruct_FRichImageRow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRichImageRow,(UObject *)pUVar1,L"RichImageRow");
  }
  return Z_Registration_Info_UScriptStruct_FRichImageRow.OuterSingleton;
}

