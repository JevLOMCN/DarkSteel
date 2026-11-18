// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 1

// StaticStruct @ 142c7a450

UScriptStruct * __cdecl FTypedElementLevelColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTypedElementLevelColumn.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTypedElementLevelColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementLevelColumn,(UObject *)pUVar1,
                         L"TypedElementLevelColumn");
  }
  return Z_Registration_Info_UScriptStruct_FTypedElementLevelColumn.OuterSingleton;
}

