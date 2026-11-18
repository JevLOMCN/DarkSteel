// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 1

// StaticStruct @ 14966f270

UScriptStruct * __cdecl FGizmoFloatParameterChange::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGizmoFloatParameterChange.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UScriptStruct_FGizmoFloatParameterChange.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGizmoFloatParameterChange,(UObject *)pUVar1,
                         L"GizmoFloatParameterChange");
  }
  return Z_Registration_Info_UScriptStruct_FGizmoFloatParameterChange.OuterSingleton;
}

