// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 147d55240

UScriptStruct * __cdecl FQuaternionSpringState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FQuaternionSpringState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FQuaternionSpringState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FQuaternionSpringState,(UObject *)pUVar1,
                         L"QuaternionSpringState");
  }
  return Z_Registration_Info_UScriptStruct_FQuaternionSpringState.OuterSingleton;
}

