// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 1

// StaticStruct @ 142379450

UScriptStruct * __cdecl FEulerTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEulerTransform.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationCore();
    Z_Registration_Info_UScriptStruct_FEulerTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEulerTransform,(UObject *)pUVar1,
                         L"EulerTransform");
  }
  return Z_Registration_Info_UScriptStruct_FEulerTransform.OuterSingleton;
}

