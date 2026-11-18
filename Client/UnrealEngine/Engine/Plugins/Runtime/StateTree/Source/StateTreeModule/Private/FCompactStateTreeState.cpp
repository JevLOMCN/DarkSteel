// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// StaticStruct @ 14d527770

UScriptStruct * __cdecl FCompactStateTreeState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCompactStateTreeState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FCompactStateTreeState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCompactStateTreeState,(UObject *)pUVar1,
                         L"CompactStateTreeState");
  }
  return Z_Registration_Info_UScriptStruct_FCompactStateTreeState.OuterSingleton;
}

