// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionDepNodes
// Functions: 2

// StartupModule @ 14e969f20

void __thiscall
IGeometryCollectionDepNodesPlugin::StartupModule(IGeometryCollectionDepNodesPlugin *this)

{
  FName FVar1;
  UPackage *pUVar2;
  FName local_res10 [3];
  FString local_18;
  
  ::FString::FString(&local_18,
                     "Transfer a named scalar attribute from the Source Collection to the Target Collection"
                    );
  ::FName::FName(local_res10,"FGeometryCollectionTransferVertexScalarAttributeNode");
  FVar1 = local_res10[0];
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionDepNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode
                         ,(UObject *)pUVar2,L"GeometryCollectionTransferVertexScalarAttributeNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexScalarAttributeNode.
             OuterSingleton,FVar1,"TransferVertexScalarAttribute","GeometryCollection",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FGeometryCollectionTransferVertexScalarAttributeNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(local_res10,"FSetVertexColorInCollectionFromVertexSelectionDataflowNode");
  FVar1 = local_res10[0];
  if (Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionDepNodes();
    Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode
                         ,(UObject *)pUVar2,
                         L"SetVertexColorInCollectionFromVertexSelectionDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromVertexSelectionDataflowNode
             .OuterSingleton,FVar1,"SetVertexColorInCollectionFromVertexSelection",
             "Collection|Utilities",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FSetVertexColorInCollectionFromVertexSelectionDataflowNode>'::__l2
             ::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(local_res10,"FSetVertexColorInCollectionFromFloatArrayDataflowNode");
  if (Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionDepNodes();
    Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode
                         ,(UObject *)pUVar2,L"SetVertexColorInCollectionFromFloatArrayDataflowNode")
    ;
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FSetVertexColorInCollectionFromFloatArrayDataflowNode
             .OuterSingleton,local_res10[0],"SetVertexColorInCollectionFromFloatArray",
             "Collection|Utilities",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FSetVertexColorInCollectionFromFloatArrayDataflowNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ShutdownModule @ 14e96a0f0

void __thiscall
IGeometryCollectionDepNodesPlugin::ShutdownModule(IGeometryCollectionDepNodesPlugin *this)

{
  return;
}

