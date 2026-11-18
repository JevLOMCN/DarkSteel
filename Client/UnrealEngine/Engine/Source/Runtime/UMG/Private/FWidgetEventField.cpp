// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// StaticStruct @ 1468de120

UScriptStruct * __cdecl FWidgetEventField::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWidgetEventField.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UScriptStruct_FWidgetEventField.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetEventField,(UObject *)pUVar1,
                         L"WidgetEventField");
  }
  return Z_Registration_Info_UScriptStruct_FWidgetEventField.OuterSingleton;
}

