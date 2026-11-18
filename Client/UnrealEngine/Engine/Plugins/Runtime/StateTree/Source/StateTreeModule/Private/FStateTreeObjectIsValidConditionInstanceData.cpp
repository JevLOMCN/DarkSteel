// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// StaticStruct @ 14d49e850

UScriptStruct * __cdecl FStateTreeObjectIsValidConditionInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData,
                         (UObject *)pUVar1,L"StateTreeObjectIsValidConditionInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData.
         OuterSingleton;
}

