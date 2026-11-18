// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// StaticStruct @ 14d5278f0

UScriptStruct * __cdecl FStateTreeTransitionIdToIndex::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeTransitionIdToIndex.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeTransitionIdToIndex.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTransitionIdToIndex,(UObject *)pUVar1,
                         L"StateTreeTransitionIdToIndex");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeTransitionIdToIndex.OuterSingleton;
}

