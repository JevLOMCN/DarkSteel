// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 1

// StaticStruct @ 142d51f70

UScriptStruct * __cdecl FWidgetDoubleClickedColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWidgetDoubleClickedColumn.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ToolWidgets();
    Z_Registration_Info_UScriptStruct_FWidgetDoubleClickedColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetDoubleClickedColumn,(UObject *)pUVar1,
                         L"WidgetDoubleClickedColumn");
  }
  return Z_Registration_Info_UScriptStruct_FWidgetDoubleClickedColumn.OuterSingleton;
}

