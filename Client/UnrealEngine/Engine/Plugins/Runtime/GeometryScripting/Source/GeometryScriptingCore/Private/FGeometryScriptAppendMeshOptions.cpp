// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 2

// StaticStruct @ 14cd97140

UScriptStruct * __cdecl FGeometryScriptAppendMeshOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryScriptAppendMeshOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryScriptingCore();
    Z_Registration_Info_UScriptStruct_FGeometryScriptAppendMeshOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptAppendMeshOptions,
                         (UObject *)pUVar1,L"GeometryScriptAppendMeshOptions");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryScriptAppendMeshOptions.OuterSingleton;
}

// UpdateAttributesForCombineMode @ 14cde9810

void __thiscall
FGeometryScriptAppendMeshOptions::UpdateAttributesForCombineMode
          (FGeometryScriptAppendMeshOptions *this,FDynamicMesh3 *param_1,FDynamicMesh3 *param_2)

{
  if (this->CombineMode == EnableAllMatching) {
    UE::Geometry::FDynamicMesh3::EnableMatchingAttributes(param_1,param_2,false,false);
    return;
  }
  if (this->CombineMode == UseSource) {
    UE::Geometry::FDynamicMesh3::EnableMatchingAttributes(param_1,param_2,false,true);
    return;
  }
  return;
}

