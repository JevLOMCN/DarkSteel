// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// StaticStruct @ 14d529570

UScriptStruct * __cdecl FStateTreeDebugTextTaskInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeDebugTextTaskInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeDebugTextTaskInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeDebugTextTaskInstanceData,
                         (UObject *)pUVar1,L"StateTreeDebugTextTaskInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeDebugTextTaskInstanceData.OuterSingleton;
}

