// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// StaticStruct @ 14e11b950

UScriptStruct * __cdecl FOptimusLoopTerminalInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusLoopTerminalInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusLoopTerminalInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusLoopTerminalInfo,(UObject *)pUVar1,
                         L"OptimusLoopTerminalInfo");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusLoopTerminalInfo.OuterSingleton;
}

