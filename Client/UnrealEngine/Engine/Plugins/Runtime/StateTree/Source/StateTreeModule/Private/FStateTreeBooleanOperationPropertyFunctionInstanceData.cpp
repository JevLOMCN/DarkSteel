// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// StaticStruct @ 14d4a06d0

UScriptStruct * __cdecl FStateTreeBooleanOperationPropertyFunctionInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData
                         ,(UObject *)pUVar1,L"StateTreeBooleanOperationPropertyFunctionInstanceData"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeBooleanOperationPropertyFunctionInstanceData.
         OuterSingleton;
}

