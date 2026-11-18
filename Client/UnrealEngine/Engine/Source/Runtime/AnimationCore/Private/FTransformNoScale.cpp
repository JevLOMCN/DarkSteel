// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 1

// StaticStruct @ 1423785b0

UScriptStruct * __cdecl FTransformNoScale::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransformNoScale.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationCore();
    Z_Registration_Info_UScriptStruct_FTransformNoScale.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransformNoScale,(UObject *)pUVar1,
                         L"TransformNoScale");
  }
  return Z_Registration_Info_UScriptStruct_FTransformNoScale.OuterSingleton;
}

