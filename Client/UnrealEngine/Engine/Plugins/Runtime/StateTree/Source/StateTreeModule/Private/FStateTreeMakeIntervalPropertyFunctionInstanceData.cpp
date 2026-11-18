// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// StaticStruct @ 14d4a5570

UScriptStruct * __cdecl FStateTreeMakeIntervalPropertyFunctionInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData
                         ,(UObject *)pUVar1,L"StateTreeMakeIntervalPropertyFunctionInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeMakeIntervalPropertyFunctionInstanceData.
         OuterSingleton;
}

