// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 1

// StaticStruct @ 142d52200

UScriptStruct * __cdecl FWidgetEnterEditModeColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWidgetEnterEditModeColumn.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ToolWidgets();
    Z_Registration_Info_UScriptStruct_FWidgetEnterEditModeColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetEnterEditModeColumn,(UObject *)pUVar1,
                         L"WidgetEnterEditModeColumn");
  }
  return Z_Registration_Info_UScriptStruct_FWidgetEnterEditModeColumn.OuterSingleton;
}

