// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// StaticStruct @ 1471b90f0

UScriptStruct * __cdecl FMassChunkFragment::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMassChunkFragment.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassChunkFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassChunkFragment,(UObject *)pUVar1,
                         L"MassChunkFragment");
  }
  return Z_Registration_Info_UScriptStruct_FMassChunkFragment.OuterSingleton;
}

