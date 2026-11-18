// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 148337660

UScriptStruct * __cdecl FViewTargetTransitionParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FViewTargetTransitionParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FViewTargetTransitionParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FViewTargetTransitionParams,(UObject *)pUVar1,
                         L"ViewTargetTransitionParams");
  }
  return Z_Registration_Info_UScriptStruct_FViewTargetTransitionParams.OuterSingleton;
}

