// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 1

// StaticStruct @ 142d51b40

UScriptStruct * __cdecl FExternalWidgetSelectionColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FExternalWidgetSelectionColumn.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ToolWidgets();
    Z_Registration_Info_UScriptStruct_FExternalWidgetSelectionColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FExternalWidgetSelectionColumn,(UObject *)pUVar1,
                         L"ExternalWidgetSelectionColumn");
  }
  return Z_Registration_Info_UScriptStruct_FExternalWidgetSelectionColumn.OuterSingleton;
}

