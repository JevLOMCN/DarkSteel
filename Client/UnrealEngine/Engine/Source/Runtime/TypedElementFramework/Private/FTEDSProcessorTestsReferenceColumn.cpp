// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 1

// StaticStruct @ 142c876a0

UScriptStruct * __cdecl FTEDSProcessorTestsReferenceColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTEDSProcessorTestsReferenceColumn.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTEDSProcessorTestsReferenceColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTEDSProcessorTestsReferenceColumn,
                         (UObject *)pUVar1,L"TEDSProcessorTestsReferenceColumn");
  }
  return Z_Registration_Info_UScriptStruct_FTEDSProcessorTestsReferenceColumn.OuterSingleton;
}

