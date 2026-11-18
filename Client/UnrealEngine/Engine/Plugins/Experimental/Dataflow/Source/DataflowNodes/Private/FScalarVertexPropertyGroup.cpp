// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 1

// StaticStruct @ 14dac06c0

UScriptStruct * __cdecl FScalarVertexPropertyGroup::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FScalarVertexPropertyGroup.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FScalarVertexPropertyGroup.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FScalarVertexPropertyGroup,(UObject *)pUVar1,
                         L"ScalarVertexPropertyGroup");
  }
  return Z_Registration_Info_UScriptStruct_FScalarVertexPropertyGroup.OuterSingleton;
}

