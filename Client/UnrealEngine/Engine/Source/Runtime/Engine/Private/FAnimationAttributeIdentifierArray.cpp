// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 147512350

UScriptStruct * __cdecl FAnimationAttributeIdentifierArray::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimationAttributeIdentifierArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimationAttributeIdentifierArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimationAttributeIdentifierArray,
                         (UObject *)pUVar1,L"AnimationAttributeIdentifierArray");
  }
  return Z_Registration_Info_UScriptStruct_FAnimationAttributeIdentifierArray.OuterSingleton;
}

