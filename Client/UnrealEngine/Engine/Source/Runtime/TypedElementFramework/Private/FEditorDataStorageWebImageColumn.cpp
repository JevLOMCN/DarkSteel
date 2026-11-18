// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 1

// StaticStruct @ 142c81ff0

UScriptStruct * __cdecl FEditorDataStorageWebImageColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEditorDataStorageWebImageColumn.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FEditorDataStorageWebImageColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEditorDataStorageWebImageColumn,
                         (UObject *)pUVar1,L"EditorDataStorageWebImageColumn");
  }
  return Z_Registration_Info_UScriptStruct_FEditorDataStorageWebImageColumn.OuterSingleton;
}

