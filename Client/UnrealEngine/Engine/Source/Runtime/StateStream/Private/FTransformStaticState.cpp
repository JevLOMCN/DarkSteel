// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateStream
// Functions: 1

// StaticStruct @ 143125030

UScriptStruct * __cdecl FTransformStaticState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransformStaticState.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_StateStream();
    Z_Registration_Info_UScriptStruct_FTransformStaticState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransformStaticState,(UObject *)pUVar1,
                         L"TransformStaticState");
  }
  return Z_Registration_Info_UScriptStruct_FTransformStaticState.OuterSingleton;
}

