// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// StaticStruct @ 14d5269a0

UScriptStruct * __cdecl FStateTreeEditorPropertyPath::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeEditorPropertyPath.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeEditorPropertyPath.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEditorPropertyPath,(UObject *)pUVar1,
                         L"StateTreeEditorPropertyPath");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeEditorPropertyPath.OuterSingleton;
}

