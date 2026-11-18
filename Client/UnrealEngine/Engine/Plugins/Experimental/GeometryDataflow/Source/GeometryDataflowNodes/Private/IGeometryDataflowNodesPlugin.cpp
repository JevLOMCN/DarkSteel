// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryDataflowNodes
// Functions: 2

// StartupModule @ 14e7fff80

void __thiscall IGeometryDataflowNodesPlugin::StartupModule(IGeometryDataflowNodesPlugin *this)

{
  UPackage *pUVar1;
  FName local_res10 [3];
  FString local_18;
  
  ::FString::FString(&local_18,"");
  ::FName::FName(local_res10,"FMeshBooleanDataflowNode");
  if (Z_Registration_Info_UScriptStruct_FMeshBooleanDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryDataflowNodes();
    Z_Registration_Info_UScriptStruct_FMeshBooleanDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshBooleanDataflowNode,(UObject *)pUVar1,
                         L"MeshBooleanDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FMeshBooleanDataflowNode.OuterSingleton,
             local_res10[0],"MeshBoolean","Mesh|Utilities",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMeshBooleanDataflowNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ShutdownModule @ 14e800030

void __thiscall IGeometryDataflowNodesPlugin::ShutdownModule(IGeometryDataflowNodesPlugin *this)

{
  return;
}

