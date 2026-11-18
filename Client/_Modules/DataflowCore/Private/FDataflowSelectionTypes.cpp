// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 1

// StaticStruct @ 1443dd330

UScriptStruct * __cdecl FDataflowSelectionTypes::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSelectionTypes.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowSelectionTypes.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSelectionTypes,(UObject *)pUVar1,
                         L"DataflowSelectionTypes");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowSelectionTypes.OuterSingleton;
}

