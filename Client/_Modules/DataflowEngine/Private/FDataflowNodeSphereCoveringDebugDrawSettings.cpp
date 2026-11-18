// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 1

// StaticStruct @ 1462c0b00

UScriptStruct * __cdecl FDataflowNodeSphereCoveringDebugDrawSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowNodeSphereCoveringDebugDrawSettings.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowNodeSphereCoveringDebugDrawSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowNodeSphereCoveringDebugDrawSettings,
                         (UObject *)pUVar1,L"DataflowNodeSphereCoveringDebugDrawSettings");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowNodeSphereCoveringDebugDrawSettings.
         OuterSingleton;
}

