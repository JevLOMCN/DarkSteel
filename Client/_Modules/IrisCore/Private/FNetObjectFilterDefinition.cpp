// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// StaticStruct @ 14421f370

UScriptStruct * __cdecl FNetObjectFilterDefinition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetObjectFilterDefinition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IrisCore();
    Z_Registration_Info_UScriptStruct_FNetObjectFilterDefinition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNetObjectFilterDefinition,(UObject *)pUVar1,
                         L"NetObjectFilterDefinition");
  }
  return Z_Registration_Info_UScriptStruct_FNetObjectFilterDefinition.OuterSingleton;
}

