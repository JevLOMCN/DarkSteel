// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// StaticStruct @ 14d49ec20

UScriptStruct * __cdecl FStateTreeObjectEqualsConditionInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData,
                         (UObject *)pUVar1,L"StateTreeObjectEqualsConditionInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData.
         OuterSingleton;
}

