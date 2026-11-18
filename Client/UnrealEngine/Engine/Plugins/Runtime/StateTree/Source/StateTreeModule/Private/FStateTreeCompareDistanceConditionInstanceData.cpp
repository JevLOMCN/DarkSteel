// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// StaticStruct @ 14d4a7790

UScriptStruct * __cdecl FStateTreeCompareDistanceConditionInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeCompareDistanceConditionInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeCompareDistanceConditionInstanceData.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCompareDistanceConditionInstanceData,
                           (UObject *)pUVar1,L"StateTreeCompareDistanceConditionInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeCompareDistanceConditionInstanceData.
         OuterSingleton;
}

