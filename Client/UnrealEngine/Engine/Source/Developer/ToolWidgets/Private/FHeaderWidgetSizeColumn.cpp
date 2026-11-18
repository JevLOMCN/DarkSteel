// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 1

// StaticStruct @ 142d52590

UScriptStruct * __cdecl FHeaderWidgetSizeColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHeaderWidgetSizeColumn.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ToolWidgets();
    Z_Registration_Info_UScriptStruct_FHeaderWidgetSizeColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHeaderWidgetSizeColumn,(UObject *)pUVar1,
                         L"HeaderWidgetSizeColumn");
  }
  return Z_Registration_Info_UScriptStruct_FHeaderWidgetSizeColumn.OuterSingleton;
}

