// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 1

// StaticStruct @ 142c84470

UScriptStruct * __cdecl FTypedElementU64IntValueCacheColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTypedElementU64IntValueCacheColumn.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTypedElementU64IntValueCacheColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementU64IntValueCacheColumn,
                         (UObject *)pUVar1,L"TypedElementU64IntValueCacheColumn");
  }
  return Z_Registration_Info_UScriptStruct_FTypedElementU64IntValueCacheColumn.OuterSingleton;
}

