// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 14732cde0

UScriptStruct * __cdecl FSoundTimecodeOffset::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSoundTimecodeOffset.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSoundTimecodeOffset.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSoundTimecodeOffset,(UObject *)pUVar1,
                         L"SoundTimecodeOffset");
  }
  return Z_Registration_Info_UScriptStruct_FSoundTimecodeOffset.OuterSingleton;
}

