// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// StaticStruct @ 1471b6960

UScriptStruct * __cdecl FMassRelation::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassRelation,(UObject *)pUVar1,L"MassRelation");
  }
  return Z_Registration_Info_UScriptStruct_FMassRelation.OuterSingleton;
}

