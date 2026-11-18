// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 1

// StaticStruct @ 146c476c0

UScriptStruct * __cdecl FLevelSequenceBindingReferenceArray::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReferenceArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LevelSequence();
    Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReferenceArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray,
                         (UObject *)pUVar1,L"LevelSequenceBindingReferenceArray");
  }
  return Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReferenceArray.OuterSingleton;
}

