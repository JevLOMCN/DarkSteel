// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 147266860

UScriptStruct * __cdecl FCharacterServerMovePackedBits::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCharacterServerMovePackedBits.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCharacterServerMovePackedBits.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCharacterServerMovePackedBits,(UObject *)pUVar1,
                         L"CharacterServerMovePackedBits");
  }
  return Z_Registration_Info_UScriptStruct_FCharacterServerMovePackedBits.OuterSingleton;
}

