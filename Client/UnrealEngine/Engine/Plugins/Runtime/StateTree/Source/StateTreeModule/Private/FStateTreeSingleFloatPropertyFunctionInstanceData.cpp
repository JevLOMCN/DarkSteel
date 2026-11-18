// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// StaticStruct @ 14d4a3f50

UScriptStruct * __cdecl FStateTreeSingleFloatPropertyFunctionInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeSingleFloatPropertyFunctionInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeSingleFloatPropertyFunctionInstanceData.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeSingleFloatPropertyFunctionInstanceData
                         ,(UObject *)pUVar1,L"StateTreeSingleFloatPropertyFunctionInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeSingleFloatPropertyFunctionInstanceData.
         OuterSingleton;
}

