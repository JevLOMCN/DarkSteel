// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 2

// StartupModule @ 14daba870

void __thiscall IDataflowNodesPlugin::StartupModule(IDataflowNodesPlugin *this)

{
  FName FVar1;
  UPackage *pUVar2;
  FNodeFactory *this_00;
  FName *pFVar3;
  UClass *pUVar4;
  TSet<TTuple<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>,0>,FDefaultSetAllocator>
  *this_01;
  TPairInitializer<FName_&&,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>_&&>
  local_res10;
  undefined1 local_res20 [8];
  undefined1 local_28 [16];
  
  UE::Dataflow::RegisterSkeletalMeshNodes();
  ::FString::FString((FString *)local_28,"Static Mesh");
  ::FName::FName((FName *)&local_res10,"FGetStaticMeshDataflowNode");
  pFVar3 = local_res10.Key;
  if (Z_Registration_Info_UScriptStruct_FGetStaticMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FGetStaticMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode,(UObject *)pUVar2,
                         L"GetStaticMeshDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FGetStaticMeshDataflowNode.OuterSingleton,
             (FName)pFVar3,"StaticMesh","General",(FString *)local_28,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetStaticMeshDataflowNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"Bounds Size Dimensions Extents Center");
  ::FName::FName((FName *)&local_res10,"FGetStaticMeshBoundingBoxDataflowNode");
  pFVar3 = local_res10.Key;
  if (Z_Registration_Info_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode,
                         (UObject *)pUVar2,L"GetStaticMeshBoundingBoxDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FGetStaticMeshBoundingBoxDataflowNode.OuterSingleton,
             (FName)pFVar3,"GetStaticMeshBoundingBox","Static Mesh",(FString *)local_28,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FGetStaticMeshBoundingBoxDataflowNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  this_00 = UE::Dataflow::FNodeFactory::GetInstance();
  pFVar3 = ::FName::FName((FName *)&local_res10,"FGetStaticMeshDataflowNode");
  FVar1 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UStaticMesh_NoRegister();
  UE::Dataflow::FNodeFactory::RegisterGetterNodeForAssetType(this_00,(FName)pUVar4->_padding_,FVar1)
  ;
  ::FString::FString((FString *)local_28,"");
  ::FName::FName((FName *)&local_res10,"FSelectionSetDataflowNode");
  pFVar3 = local_res10.Key;
  if (Z_Registration_Info_UScriptStruct_FSelectionSetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FSelectionSetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSelectionSetDataflowNode,(UObject *)pUVar2,
                         L"SelectionSetDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FSelectionSetDataflowNode.OuterSingleton,
             (FName)pFVar3,"SelectionSet","Dataflow",(FString *)local_28,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSelectionSetDataflowNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"");
  ::FName::FName((FName *)&local_res10,"FFloatOverrideDataflowNode");
  pFVar3 = local_res10.Key;
  if (Z_Registration_Info_UScriptStruct_FFloatOverrideDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FFloatOverrideDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatOverrideDataflowNode,(UObject *)pUVar2,
                         L"FloatOverrideDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FFloatOverrideDataflowNode.OuterSingleton,
             (FName)pFVar3,"FloatOverride","Dataflow",(FString *)local_28,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FFloatOverrideDataflowNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"");
  ::FName::FName((FName *)&local_res10,"FMakeAttributeKeyDataflowNode");
  pFVar3 = local_res10.Key;
  if (Z_Registration_Info_UScriptStruct_FMakeAttributeKeyDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FMakeAttributeKeyDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode,(UObject *)pUVar2,
                         L"MakeAttributeKeyDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FMakeAttributeKeyDataflowNode.OuterSingleton,
             (FName)pFVar3,"MakeAttributeKey","GeometryCollection",(FString *)local_28,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FMakeAttributeKeyDataflowNode>'::__l2
             ::<lambda_1>::<lambda_invoker_cdecl>);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"");
  ::FName::FName((FName *)&local_res10,"FBreakAttributeKeyDataflowNode");
  pFVar3 = local_res10.Key;
  if (Z_Registration_Info_UScriptStruct_FBreakAttributeKeyDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FBreakAttributeKeyDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBreakAttributeKeyDataflowNode,(UObject *)pUVar2,
                         L"BreakAttributeKeyDataflowNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FBreakAttributeKeyDataflowNode.OuterSingleton,
             (FName)pFVar3,"BreakAttributeKey","Dataflow",(FString *)local_28,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FBreakAttributeKeyDataflowNode>'::
             __l2::<lambda_1>::<lambda_invoker_cdecl>);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"Paint a weight map and save it to collection");
  ::FName::FName((FName *)&local_res10,"FDataflowCollectionAddScalarVertexPropertyNode");
  pFVar3 = local_res10.Key;
  if (Z_Registration_Info_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode,
                           (UObject *)pUVar2,L"DataflowCollectionAddScalarVertexPropertyNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode.
             OuterSingleton,(FName)pFVar3,"PaintWeightMap","Collection",(FString *)local_28,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FDataflowCollectionAddScalarVertexPropertyNode>'::__l2::<lambda_1>
             ::<lambda_invoker_cdecl>);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"Edit skin weights and save it to collection");
  ::FName::FName((FName *)&local_res10,"FDataflowCollectionEditSkinWeightsNode");
  pFVar3 = local_res10.Key;
  if (Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkinWeightsNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkinWeightsNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollectionEditSkinWeightsNode,
                         (UObject *)pUVar2,L"DataflowCollectionEditSkinWeightsNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkinWeightsNode.OuterSingleton
             ,(FName)pFVar3,"EditSkinWeights","Collection",(FString *)local_28,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FDataflowCollectionEditSkinWeightsNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"Edit skeleton bones");
  ::FName::FName((FName *)&local_res10,"FDataflowCollectionEditSkeletonBonesNode");
  pFVar3 = local_res10.Key;
  if (Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkeletonBonesNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkeletonBonesNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollectionEditSkeletonBonesNode,
                         (UObject *)pUVar2,L"DataflowCollectionEditSkeletonBonesNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkeletonBonesNode.
             OuterSingleton,(FName)pFVar3,"EditSkeletonBones","Collection",(FString *)local_28,
             `UE::Dataflow::FNodeFactory::
             RegisterNodeFromType<FDataflowCollectionEditSkeletonBonesNode>'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"");
  ::FName::FName((FName *)&local_res10,"FDataflowCollectionSetSkinningSkeletalMesh");
  pFVar3 = local_res10.Key;
  if (Z_Registration_Info_UScriptStruct_FDataflowCollectionSetSkinningSkeletalMesh.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FDataflowCollectionSetSkinningSkeletalMesh.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollectionSetSkinningSkeletalMesh,
                         (UObject *)pUVar2,L"DataflowCollectionSetSkinningSkeletalMesh");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowCollectionSetSkinningSkeletalMesh.
             OuterSingleton,(FName)pFVar3,"SetSkinningSkeletalMesh","Collection",(FString *)local_28
             ,`UE::Dataflow::FNodeFactory::
              RegisterNodeFromType<FDataflowCollectionSetSkinningSkeletalMesh>'::__l2::<lambda_1>::
              <lambda_invoker_cdecl>);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FString::FString((FString *)local_28,"");
  ::FName::FName((FName *)&local_res10,"FSkeletonAssetTerminalNode");
  if (Z_Registration_Info_UScriptStruct_FSkeletonAssetTerminalNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FSkeletonAssetTerminalNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletonAssetTerminalNode,(UObject *)pUVar2,
                         L"SkeletonAssetTerminalNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FSkeletonAssetTerminalNode.OuterSingleton,
             (FName)local_res10.Key,"SkeletonAssetTerminal","Terminal",(FString *)local_28,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FSkeletonAssetTerminalNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  ::FName::FName((FName *)&local_res10,"FDataflowTerminalNode");
  UE::Dataflow::RegisterNodeFilter((FName *)&local_res10);
  this_01 = (TSet<TTuple<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>,0>,FDefaultSetAllocator>
             *)FDataflowAddScalarVertexPropertyCallbackRegistry::Get();
  local_res10.Value = ::operator_new(8);
  if (local_res10.Value ==
      (TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>
       *)0x0) {
    local_res10.Value =
         (TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>
          *)0x0;
  }
  else {
    (local_res10.Value)->Ptr =
         (IDataflowAddScalarVertexPropertyCallbacks *)
         &___7FGeometryCollectionAddScalarVertexPropertyCallbacks__6B_;
  }
  local_28._0_8_ = (*(code *)(local_res10.Value)->Ptr[1])(local_res10.Value,local_res20);
  local_28._8_8_ = &local_res10.Value;
  TSet<TTuple<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_&&,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>_&&>_>
            (this_01,&local_res10,(bool *)local_28);
  if (local_res10.Value !=
      (TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>
       *)0x0) {
    (*(code *)*(local_res10.Value)->Ptr)(local_res10.Value,1);
  }
  return;
}

// ShutdownModule @ 14dabaf60

void __thiscall IDataflowNodesPlugin::ShutdownModule(IDataflowNodesPlugin *this)

{
  FName FVar1;
  uint uVar2;
  TSet<TTuple<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>,0>,FDefaultSetAllocator>
  *this_00;
  FName local_res10 [3];
  
  this_00 = (TSet<TTuple<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>,0>,FDefaultSetAllocator>
             *)FDataflowAddScalarVertexPropertyCallbackRegistry::Get();
  FVar1 = FGeometryCollectionAddScalarVertexPropertyCallbacks::Name;
  local_res10[0] = FGeometryCollectionAddScalarVertexPropertyCallbacks::Name;
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    uVar2 = ::GetTypeHash(FGeometryCollectionAddScalarVertexPropertyCallbacks::Name.ComparisonIndex.
                          Value);
    TSet<TTuple<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<IDataflowAddScalarVertexPropertyCallbacks,TDefaultDelete<IDataflowAddScalarVertexPropertyCallbacks>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>(this_00,FVar1.Number + uVar2,local_res10);
  }
  return;
}

