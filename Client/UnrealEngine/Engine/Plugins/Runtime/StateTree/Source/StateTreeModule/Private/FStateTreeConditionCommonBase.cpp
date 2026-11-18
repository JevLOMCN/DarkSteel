// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// StaticStruct @ 14d49f840

UScriptStruct * __cdecl FStateTreeConditionCommonBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeConditionCommonBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeConditionCommonBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConditionCommonBase,(UObject *)pUVar1,
                         L"StateTreeConditionCommonBase");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeConditionCommonBase.OuterSingleton;
}

