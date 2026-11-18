// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 1

// StaticStruct @ 14dab9c00

UScriptStruct * __cdecl FDataflowFunctionProperty::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowFunctionProperty.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FDataflowFunctionProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowFunctionProperty,(UObject *)pUVar1,
                         L"DataflowFunctionProperty");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowFunctionProperty.OuterSingleton;
}

