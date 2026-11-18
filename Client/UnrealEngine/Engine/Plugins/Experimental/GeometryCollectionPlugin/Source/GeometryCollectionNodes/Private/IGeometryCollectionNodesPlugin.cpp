// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 2

// StartupModule @ 14e8af4a0

void __thiscall IGeometryCollectionNodesPlugin::StartupModule(IGeometryCollectionNodesPlugin *this)

{
  FName FVar1;
  UPackage *pUVar2;
  FCategoryRegistry *this_00;
  UClass *pUVar3;
  FName *pFVar4;
  FName local_res10;
  FString local_18;
  
  UE::Dataflow::GeometryCollectionEngineNodes();
  UE::Dataflow::GeometryCollectionEngineAssetNodes();
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res10,"FCloseGeometryOnCollectionDataflowNode");
  FVar1 = local_res10;
  if (Z_Registration_Info_UScriptStruct_FCloseGeometryOnCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCloseGeometryOnCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCloseGeometryOnCollectionDataflowNode,
                         (UObject *)pUVar2,L"CloseGeometryOnCollectionDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FCloseGeometryOnCollectionDataflowNode.OuterSingleton
             ,FVar1,"CloseGeometryOnCollection","GeometryCollection",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FCloseGeometryOnCollectionDataflowNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  UE::Dataflow::GeometryCollectionSelectionNodes();
  UE::Dataflow::GeometryCollectionMeshNodes();
  UE::Dataflow::GeometryCollectionClusteringNodes();
  UE::Dataflow::GeometryCollectionFracturingNodes();
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res10,"FPruneInCollectionDataflowNode");
  FVar1 = local_res10;
  if (Z_Registration_Info_UScriptStruct_FPruneInCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FPruneInCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode,(UObject *)pUVar2,
                         L"PruneInCollectionDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FPruneInCollectionDataflowNode.OuterSingleton,FVar1,
             "PruneInCollection","GeometryCollection|Edit",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FPruneInCollectionDataflowNode>'::
             __l2::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res10,"FSetVisibilityInCollectionDataflowNode");
  FVar1 = local_res10;
  if (Z_Registration_Info_UScriptStruct_FSetVisibilityInCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetVisibilityInCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode,
                         (UObject *)pUVar2,L"SetVisibilityInCollectionDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FSetVisibilityInCollectionDataflowNode.OuterSingleton
             ,FVar1,"SetVisibilityInCollection","GeometryCollection|Edit",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FSetVisibilityInCollectionDataflowNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res10,"FMergeInCollectionDataflowNode");
  FVar1 = local_res10;
  if (Z_Registration_Info_UScriptStruct_FMergeInCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMergeInCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMergeInCollectionDataflowNode,(UObject *)pUVar2,
                         L"MergeInCollectionDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FMergeInCollectionDataflowNode.OuterSingleton,FVar1,
             "MergeInCollection","GeometryCollection|Edit",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMergeInCollectionDataflowNode>'::
             __l2::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  UE::Dataflow::GeometryCollectionUtilityNodes();
  UE::Dataflow::GeometryCollectionMaterialNodes();
  UE::Dataflow::GeometryCollectionFieldNodes();
  UE::Dataflow::GeometryCollectionOverrideNodes();
  UE::Dataflow::GeometryCollectionMakeNodes();
  UE::Dataflow::GeometryCollectionMathNodes();
  UE::Dataflow::GeometryCollectionConversionNodes();
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res10,"FTransformCollectionAttributeDataflowNode");
  FVar1 = local_res10;
  if (Z_Registration_Info_UScriptStruct_FTransformCollectionAttributeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FTransformCollectionAttributeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransformCollectionAttributeDataflowNode,
                         (UObject *)pUVar2,L"TransformCollectionAttributeDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FTransformCollectionAttributeDataflowNode.
             OuterSingleton,FVar1,"TransformCollectionAttribute","GeometryCollection",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FTransformCollectionAttributeDataflowNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  UE::Dataflow::GeometryCollectionArrayNodes();
  UE::Dataflow::GeometryCollectionDebugNodes();
  UE::Dataflow::GeometryCollectionSamplingNodes();
  UE::Dataflow::RegisterGeometryCollectionUVNodes();
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res10,"FBakeTextureFromCollectionDataflowNode");
  FVar1 = local_res10;
  if (Z_Registration_Info_UScriptStruct_FBakeTextureFromCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBakeTextureFromCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBakeTextureFromCollectionDataflowNode,
                         (UObject *)pUVar2,L"BakeTextureFromCollectionDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FBakeTextureFromCollectionDataflowNode.OuterSingleton
             ,FVar1,"BakeTextureFromCollection","GeometryCollection|Texture",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FBakeTextureFromCollectionDataflowNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  UE::Dataflow::RegisterGeometryCollectionMaterialInterfaceNodes();
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res10,"FStaticMeshToCollectionDataflowNode_v2");
  FVar1 = local_res10;
  if (Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode_v2.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode_v2.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode_v2,
                         (UObject *)pUVar2,L"StaticMeshToCollectionDataflowNode_v2");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode_v2.OuterSingleton
             ,FVar1,"StaticMeshToCollection","GeometryCollection|Asset",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FStaticMeshToCollectionDataflowNode_v2>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res10,"FStaticMeshToCollectionDataflowNode");
  FVar1 = local_res10;
  if (Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode,
                         (UObject *)pUVar2,L"StaticMeshToCollectionDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode.OuterSingleton,
             FVar1,"StaticMeshToCollection","GeometryCollection|Asset",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FStaticMeshToCollectionDataflowNode>'
             ::__l2::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res10,"FCreateColorArrayFromFloatArrayDataflowNode");
  FVar1 = local_res10;
  if (Z_Registration_Info_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode,
                         (UObject *)pUVar2,L"CreateColorArrayFromFloatArrayDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FCreateColorArrayFromFloatArrayDataflowNode.
             OuterSingleton,FVar1,"CreateColorArrayFromFloatArray","Collection|Utilities",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FCreateColorArrayFromFloatArrayDataflowNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Collection Vertex Weight Map to Indices");
  ::FName::FName(&local_res10,"FGeometryCollectionVertexScalarToVertexIndicesNode");
  FVar1 = local_res10;
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode
                         ,(UObject *)pUVar2,L"GeometryCollectionVertexScalarToVertexIndicesNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode.
             OuterSingleton,FVar1,"VertexScalarToVertexIndices","GeometryCollection",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FGeometryCollectionVertexScalarToVertexIndicesNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res10,"FSetVertexColorFromFloatArrayDataflowNode");
  FVar1 = local_res10;
  if (Z_Registration_Info_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode,
                         (UObject *)pUVar2,L"SetVertexColorFromFloatArrayDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FSetVertexColorFromFloatArrayDataflowNode.
             OuterSingleton,FVar1,"SetVertexColorFromFloatArray","Collection|Utilities",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FSetVertexColorFromFloatArrayDataflowNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res10,"FSetVertexColorFromVertexIndicesDataflowNode");
  FVar1 = local_res10;
  if (Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode,
                         (UObject *)pUVar2,L"SetVertexColorFromVertexIndicesDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexIndicesDataflowNode.
             OuterSingleton,FVar1,"SetVertexColorFromVertexIndices","Collection|Utilities",&local_18
             ,`UE::Dataflow::FNodeFactory::
              RegisterNodeFromType<FSetVertexColorFromVertexIndicesDataflowNode>'::__l2::<lambda_1>
              ::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res10,"FSetVertexColorFromVertexSelectionDataflowNode");
  FVar1 = local_res10;
  if (Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode,
                           (UObject *)pUVar2,L"SetVertexColorFromVertexSelectionDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FSetVertexColorFromVertexSelectionDataflowNode.
             OuterSingleton,FVar1,"SetVertexColorFromVertexSelection","Collection|Utilities",
             &local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FSetVertexColorFromVertexSelectionDataflowNode>'::__l2::<lambda_1>
             ::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res10,"FSkeletalMeshToCollectionDataflowNode");
  FVar1 = local_res10;
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshToCollectionDataflowNode,
                         (UObject *)pUVar2,L"SkeletalMeshToCollectionDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FSkeletalMeshToCollectionDataflowNode.OuterSingleton,
             FVar1,"SkeletalMeshToCollection","GeometryCollection",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FSkeletalMeshToCollectionDataflowNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res10,"FCollectionToSkeletalMeshDataflowNode");
  FVar1 = local_res10;
  if (Z_Registration_Info_UScriptStruct_FCollectionToSkeletalMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionToSkeletalMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionToSkeletalMeshDataflowNode,
                         (UObject *)pUVar2,L"CollectionToSkeletalMeshDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FCollectionToSkeletalMeshDataflowNode.OuterSingleton,
             FVar1,"CollectionToSkeletalMesh","GeometryCollection",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FCollectionToSkeletalMeshDataflowNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,
                     "Transfer a named vertex attribute from the Source Collection to the Target Collection"
                    );
  ::FName::FName(&local_res10,"FGeometryCollectionTransferVertexAttributeNode");
  FVar1 = local_res10;
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode,
                           (UObject *)pUVar2,L"GeometryCollectionTransferVertexAttributeNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexAttributeNode.
             OuterSingleton,FVar1,"TransferVertexAttribute","GeometryCollection",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FGeometryCollectionTransferVertexAttributeNode>'::__l2::<lambda_1>
             ::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,
                     "Transfer vertex skin weights from the Source Collection to the Target Collection"
                    );
  ::FName::FName(&local_res10,"FGeometryCollectionTransferVertexSkinWeightsNode");
  FVar1 = local_res10;
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode,
                         (UObject *)pUVar2,L"GeometryCollectionTransferVertexSkinWeightsNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FGeometryCollectionTransferVertexSkinWeightsNode.
             OuterSingleton,FVar1,"TransferVertexSkinWeights","GeometryCollection",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FGeometryCollectionTransferVertexSkinWeightsNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Set Vertex Collection to be kinematic");
  ::FName::FName(&local_res10,"FGeometryCollectionSetKinematicVertexSelectionNode");
  FVar1 = local_res10;
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode
                         ,(UObject *)pUVar2,L"GeometryCollectionSetKinematicVertexSelectionNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode.
             OuterSingleton,FVar1,"SetKinematicVertexSelection","GeometryCollection",&local_18,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FGeometryCollectionSetKinematicVertexSelectionNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res10,"FTriangleBoundaryIndicesNode");
  FVar1 = local_res10;
  if (Z_Registration_Info_UScriptStruct_FTriangleBoundaryIndicesNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FTriangleBoundaryIndicesNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTriangleBoundaryIndicesNode,(UObject *)pUVar2,
                         L"TriangleBoundaryIndicesNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FTriangleBoundaryIndicesNode.OuterSingleton,FVar1,
             "TriangleBoundaryIndices","Flesh|Experimental",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FTriangleBoundaryIndicesNode>'::__l2
             ::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(&local_res10,"FSkeletonToCollectionDataflowNode");
  if (Z_Registration_Info_UScriptStruct_FSkeletonToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSkeletonToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode,
                         (UObject *)pUVar2,L"SkeletonToCollectionDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FSkeletonToCollectionDataflowNode.OuterSingleton,
             local_res10,"SkeletonToCollection","GeometryCollection",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSkeletonToCollectionDataflowNode>'::
             __l2::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  UE::Dataflow::RegisterGeometryCollectionNodesColors();
  this_00 = UE::Dataflow::FCategoryRegistry::Get();
  pUVar3 = Z_Construct_UClass_UGeometryCollection_NoRegister();
  FVar1 = (FName)pUVar3->_padding_;
  pFVar4 = ::FName::FName(&local_res10,"GeometryCollection");
  UE::Dataflow::FCategoryRegistry::RegisterCategoryForAssetType(this_00,*pFVar4,FVar1);
  return;
}

// ShutdownModule @ 14e8b0070

void __thiscall IGeometryCollectionNodesPlugin::ShutdownModule(IGeometryCollectionNodesPlugin *this)

{
  return;
}

