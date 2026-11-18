// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 210

// `dynamic_initializer_for_'CVarEnableSeamChecks'' @ 1413ed4a0

void __cdecl UE::Chaos::ClothAsset::_dynamic_initializer_for__CVarEnableSeamChecks__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableSeamChecks,L"p.ChaosCloth.EnableSeamChecks",&bEnableSeamChecks,
             L"Enable seam validation checks",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableSeamChecks__);
  return;
}

// `dynamic_initializer_for_'CustomResizingRegionSet'' @ 1413ed4f0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__CustomResizingRegionSet__
          (void)

{
  ::FName::FName(&CustomResizingRegionSet,L"CustomResizingRegionSet");
  return;
}

// `dynamic_initializer_for_'CustomResizingRegionType'' @ 1413ed510

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__CustomResizingRegionType__(void)

{
  ::FName::FName(&CustomResizingRegionType,L"CustomResizingRegionType");
  return;
}

// `dynamic_initializer_for_'CustomResizingRegions'' @ 1413ed530

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionGroup::_dynamic_initializer_for__CustomResizingRegions__(void)

{
  ::FName::FName(&CustomResizingRegions,L"CustomResizingRegions");
  return;
}

// `dynamic_initializer_for_'FabricBendingStiffness'' @ 1413ed550

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__FabricBendingStiffness__
          (void)

{
  ::FName::FName(&FabricBendingStiffness,L"FabricBendingStiffness");
  return;
}

// `dynamic_initializer_for_'FabricBucklingRatio'' @ 1413ed570

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__FabricBucklingRatio__
          (void)

{
  ::FName::FName(&FabricBucklingRatio,L"FabricBucklingRatio");
  return;
}

// `dynamic_initializer_for_'FabricBucklingStiffness'' @ 1413ed590

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__FabricBucklingStiffness__
          (void)

{
  ::FName::FName(&FabricBucklingStiffness,L"FabricBucklingStiffness");
  return;
}

// `dynamic_initializer_for_'FabricCollisionThickness'' @ 1413ed5b0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__FabricCollisionThickness__(void)

{
  ::FName::FName(&FabricCollisionThickness,L"FabricollisionThickness");
  return;
}

// `dynamic_initializer_for_'FabricDamping'' @ 1413ed5d0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__FabricDamping__(void)

{
  ::FName::FName(&FabricDamping,L"FabricClothDamping");
  return;
}

// `dynamic_initializer_for_'FabricDensity'' @ 1413ed5f0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__FabricDensity__(void)

{
  ::FName::FName(&FabricDensity,L"FabricClothDensity");
  return;
}

// `dynamic_initializer_for_'FabricFriction'' @ 1413ed610

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__FabricFriction__(void)

{
  ::FName::FName(&FabricFriction,L"FabricClothFriction");
  return;
}

// `dynamic_initializer_for_'FabricLayer'' @ 1413ed630

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__FabricLayer__(void)

{
  ::FName::FName(&FabricLayer,L"FabricLayer");
  return;
}

// `dynamic_initializer_for_'FabricPressure'' @ 1413ed650

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__FabricPressure__(void)

{
  ::FName::FName(&FabricPressure,L"FabricPressure");
  return;
}

// `dynamic_initializer_for_'FabricStretchStiffness'' @ 1413ed670

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__FabricStretchStiffness__
          (void)

{
  ::FName::FName(&FabricStretchStiffness,L"FabricStretchStiffness");
  return;
}

// `dynamic_initializer_for_'Fabrics'' @ 1413ed690

void __cdecl UE::Chaos::ClothAsset::ClothCollectionGroup::_dynamic_initializer_for__Fabrics__(void)

{
  ::FName::FName(&Fabrics,L"Fabrics");
  return;
}

// `dynamic_initializer_for_'FixedAttributeNamesMap'' @ 1413ed6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_initializer_for__FixedAttributeNamesMap__(void)

{
  undefined1 auStack_148 [32];
  initializer_list<TPairInitializer<FName_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&>_>
  local_128;
  TPairInitializer<FName_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&> local_118;
  FName *local_108;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_100;
  FName *local_f8;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_f0;
  FName *local_e8;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_e0;
  FName *local_d8;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_d0;
  FName *local_c8;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_c0;
  FName *local_b8;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_b0;
  FName *local_a8;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_a0;
  FName *local_98;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_90;
  FName *local_88;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_80;
  FName *local_78;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_70;
  FName *local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_60;
  FName *local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_50;
  FName *local_48;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_40;
  FName *local_38;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_30;
  FName *local_28;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_20;
  TPairInitializer<FName_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&> local_18;
  
  local_18.Key = (FName *)(__security_cookie.value ^ (ulonglong)auStack_148);
  local_118.Key = &ClothCollectionGroup::Lods;
  local_118.Value = &LodsGroupAttributes;
  local_108 = &ClothCollectionGroup::Seams;
  local_100 = &SeamsGroupAttributes;
  local_f8 = &ClothCollectionGroup::SeamStitches;
  local_f0 = &SeamStitchesGroupAttributes;
  local_e8 = &ClothCollectionGroup::SimPatterns;
  local_e0 = &SimPatternsGroupAttributes;
  local_d8 = &ClothCollectionGroup::RenderPatterns;
  local_d0 = &RenderPatternsGroupAttributes;
  local_c8 = &ClothCollectionGroup::SimFaces;
  local_c0 = &SimFacesGroupAttributes;
  local_b8 = &ClothCollectionGroup::SimVertices2D;
  local_b0 = &SimVertices2DGroupAttributes;
  local_a8 = &ClothCollectionGroup::SimVertices3D;
  local_a0 = &SimVertices3DGroupAttributes;
  local_98 = &ClothCollectionGroup::SimMorphTargets;
  local_90 = &SimMorphTargetsGroupAttributes;
  local_88 = &ClothCollectionGroup::SimMorphTargetVertices;
  local_80 = &SimMorphTargetVerticesGroupAttributes;
  local_78 = &ClothCollectionGroup::RenderFaces;
  local_70 = &RenderFacesGroupAttributes;
  local_68 = &ClothCollectionGroup::RenderVertices;
  local_60 = &RenderVerticesGroupAttributes;
  local_58 = &ClothCollectionGroup::Fabrics;
  local_50 = &SimFabricGroupAttributes;
  local_48 = &ClothCollectionGroup::Solvers;
  local_40 = &SolverGroupAttributes;
  local_38 = &ClothCollectionGroup::CustomResizingRegions;
  local_30 = &GroupResizingGroupAttributes;
  local_28 = &ClothCollectionGroup::SimAccessoryMeshes;
  local_20 = &SimAccessoryMeshesGroupAttributes;
  local_128._First = &local_118;
  local_128._Last = &local_18;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  ::
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
            (&FixedAttributeNamesMap,&local_128);
  atexit(_dynamic_atexit_destructor_for__FixedAttributeNamesMap__);
  return;
}

// `dynamic_initializer_for_'FixedAttributePrefixNamesMap'' @ 1413ed890

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_initializer_for__FixedAttributePrefixNamesMap__(void)

{
  TPairInitializer<FName_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&> local_28;
  undefined1 local_18 [24];
  
  local_28.Key = &ClothCollectionGroup::SimVertices3D;
  local_28.Value = &SimAccessoryMeshVertices3DGroupAttributePrefixes;
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_18;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  ::
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
            (&FixedAttributePrefixNamesMap,
             (initializer_list<TPairInitializer<FName_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&>_>
              *)local_18);
  atexit(_dynamic_atexit_destructor_for__FixedAttributePrefixNamesMap__);
  return;
}

// `dynamic_initializer_for_'GroupResizingGroupAttributes'' @ 1413ed8f0

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_initializer_for__GroupResizingGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FName FVar2;
  FName FVar3;
  
  FVar3 = ClothCollectionAttribute::CustomResizingRegionType;
  FVar2 = ClothCollectionAttribute::CustomResizingRegionSet;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,0,&GroupResizingGroupAttributes.AllocatorInstance,2,
             &GroupResizingGroupAttributes.ArrayMax);
  FVar1 = GroupResizingGroupAttributes.AllocatorInstance;
  *(FName *)GroupResizingGroupAttributes.AllocatorInstance.Data = FVar2;
  *(FName *)(FVar1.Data + 8) = FVar3;
  atexit(_dynamic_atexit_destructor_for__GroupResizingGroupAttributes__);
  return;
}

// `dynamic_initializer_for_'Lods'' @ 1413ed970

void __cdecl UE::Chaos::ClothAsset::ClothCollectionGroup::_dynamic_initializer_for__Lods__(void)

{
  ::FName::FName(&Lods,L"Lods");
  return;
}

// `dynamic_initializer_for_'LodsGroupAttributes'' @ 1413ed990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::Chaos::ClothAsset::Private::_dynamic_initializer_for__LodsGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  
  FVar4 = ClothCollectionAttribute::ReferenceBoneName;
  FVar3 = ClothCollectionAttribute::SkeletalMeshSoftObjectPathName;
  FVar2 = ClothCollectionAttribute::PhysicsAssetSoftObjectPathName;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,3,0,&LodsGroupAttributes.AllocatorInstance,3,&LodsGroupAttributes.ArrayMax);
  FVar1 = LodsGroupAttributes.AllocatorInstance;
  *(FName *)LodsGroupAttributes.AllocatorInstance.Data = FVar2;
  *(FName *)(FVar1.Data + 8) = FVar3;
  *(FName *)(FVar1.Data + 0x10) = FVar4;
  atexit(_dynamic_atexit_destructor_for__LodsGroupAttributes__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantChaosClothAsset'' @ 1413eda40

void __cdecl _dynamic_initializer_for__ModuleRegistrantChaosClothAsset__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ChaosClothAsset";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ChaosClothAsset",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<UE::Chaos::ClothAsset::FClothAssetModule>::
             InitializeModule);
  return;
}

// `dynamic_initializer_for_'PhysicsAssetPathName'' @ 1413eda90

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__PhysicsAssetPathName__
          (void)

{
  ::FName::FName(&PhysicsAssetPathName,L"PhysicsAssetPathName");
  return;
}

// `dynamic_initializer_for_'PhysicsAssetSoftObjectPathName'' @ 1413edab0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__PhysicsAssetSoftObjectPathName__(void)

{
  ::FName::FName(&PhysicsAssetSoftObjectPathName,L"PhysicsAssetSoftObjectPathName");
  return;
}

// `dynamic_initializer_for_'PreResizedSimPosition3D'' @ 1413edad0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__PreResizedSimPosition3D__
          (void)

{
  ::FName::FName(&PreResizedSimPosition3D,L"PreResizedSimPosition3D");
  return;
}

// `dynamic_initializer_for_'ReferenceBoneName'' @ 1413edaf0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__ReferenceBoneName__(void)

{
  ::FName::FName(&ReferenceBoneName,L"ReferenceBoneName");
  return;
}

// `dynamic_initializer_for_'RenderBoneIndices'' @ 1413edb10

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__RenderBoneIndices__(void)

{
  ::FName::FName(&RenderBoneIndices,L"RenderBoneIndices");
  return;
}

// `dynamic_initializer_for_'RenderBoneWeights'' @ 1413edb30

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__RenderBoneWeights__(void)

{
  ::FName::FName(&RenderBoneWeights,L"RenderBoneWeights");
  return;
}

// `dynamic_initializer_for_'RenderColor'' @ 1413edb50

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__RenderColor__(void)

{
  ::FName::FName(&RenderColor,L"RenderColor");
  return;
}

// `dynamic_initializer_for_'RenderCustomResizingBlend'' @ 1413edb70

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__RenderCustomResizingBlend__(void)

{
  ::FName::FName(&RenderCustomResizingBlend,L"RenderCustomResizingBlend");
  return;
}

// `dynamic_initializer_for_'RenderDeformerNormalBaryCoordsAndDist'' @ 1413edb90

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__RenderDeformerNormalBaryCoordsAndDist__(void)

{
  ::FName::FName(&RenderDeformerNormalBaryCoordsAndDist,L"RenderDeformerNormalBaryCoordsAndDist");
  return;
}

// `dynamic_initializer_for_'RenderDeformerNumInfluences'' @ 1413edbb0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__RenderDeformerNumInfluences__(void)

{
  ::FName::FName(&RenderDeformerNumInfluences,L"RenderDeformerNumInfluences");
  return;
}

// `dynamic_initializer_for_'RenderDeformerPositionBaryCoordsAndDist'' @ 1413edbd0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__RenderDeformerPositionBaryCoordsAndDist__(void)

{
  ::FName::FName(&RenderDeformerPositionBaryCoordsAndDist,L"RenderDeformerPositionBaryCoordsAndDist"
                );
  return;
}

// `dynamic_initializer_for_'RenderDeformerSimIndices3D'' @ 1413edbf0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__RenderDeformerSimIndices3D__(void)

{
  ::FName::FName(&RenderDeformerSimIndices3D,L"RenderDeformerSimIndices3D");
  return;
}

// `dynamic_initializer_for_'RenderDeformerSkinningBlend'' @ 1413edc10

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__RenderDeformerSkinningBlend__(void)

{
  ::FName::FName(&RenderDeformerSkinningBlend,L"RenderDeformerSkinningBlend");
  return;
}

// `dynamic_initializer_for_'RenderDeformerTangentBaryCoordsAndDist'' @ 1413edc30

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__RenderDeformerTangentBaryCoordsAndDist__(void)

{
  ::FName::FName(&RenderDeformerTangentBaryCoordsAndDist,L"RenderDeformerTangentBaryCoordsAndDist");
  return;
}

// `dynamic_initializer_for_'RenderDeformerWeight'' @ 1413edc50

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__RenderDeformerWeight__
          (void)

{
  ::FName::FName(&RenderDeformerWeight,L"RenderDeformerWeight");
  return;
}

// `dynamic_initializer_for_'RenderFaces'' @ 1413edc70

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionGroup::_dynamic_initializer_for__RenderFaces__(void)

{
  ::FName::FName(&RenderFaces,L"RenderFaces");
  return;
}

// `dynamic_initializer_for_'RenderFacesEnd'' @ 1413edc90

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__RenderFacesEnd__(void)

{
  ::FName::FName(&RenderFacesEnd,L"RenderFacesEnd");
  return;
}

// `dynamic_initializer_for_'RenderFacesGroupAttributes'' @ 1413edcb0

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_initializer_for__RenderFacesGroupAttributes__(void)

{
  FName FVar1;
  
  FVar1 = ClothCollectionAttribute::RenderIndices;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&RenderFacesGroupAttributes.AllocatorInstance,1,
             &RenderFacesGroupAttributes.ArrayMax);
  *(FName *)RenderFacesGroupAttributes.AllocatorInstance.Data = FVar1;
  atexit(_dynamic_atexit_destructor_for__RenderFacesGroupAttributes__);
  return;
}

// `dynamic_initializer_for_'RenderFacesStart'' @ 1413edd20

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__RenderFacesStart__(void)

{
  ::FName::FName(&RenderFacesStart,L"RenderFacesStart");
  return;
}

// `dynamic_initializer_for_'RenderIndices'' @ 1413edd40

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__RenderIndices__(void)

{
  ::FName::FName(&RenderIndices,L"RenderIndices");
  return;
}

// `dynamic_initializer_for_'RenderMaterialPathName'' @ 1413edd60

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__RenderMaterialPathName__
          (void)

{
  ::FName::FName(&RenderMaterialPathName,L"RenderMaterialPathName");
  return;
}

// `dynamic_initializer_for_'RenderMaterialSoftObjectPathName'' @ 1413edd80

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__RenderMaterialSoftObjectPathName__(void)

{
  ::FName::FName(&RenderMaterialSoftObjectPathName,L"RenderMaterialSoftObjectPathName");
  return;
}

// `dynamic_initializer_for_'RenderNormal'' @ 1413edda0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__RenderNormal__(void)

{
  ::FName::FName(&RenderNormal,L"RenderNormal");
  return;
}

// `dynamic_initializer_for_'RenderPatterns'' @ 1413eddc0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionGroup::_dynamic_initializer_for__RenderPatterns__(void)

{
  ::FName::FName(&RenderPatterns,L"RenderPatterns");
  return;
}

// `dynamic_initializer_for_'RenderPatternsGroupAttributes'' @ 1413edde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_initializer_for__RenderPatternsGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  
  FVar7 = ClothCollectionAttribute::RenderDeformerNumInfluences;
  FVar6 = ClothCollectionAttribute::RenderMaterialSoftObjectPathName;
  FVar5 = ClothCollectionAttribute::RenderFacesEnd;
  FVar4 = ClothCollectionAttribute::RenderFacesStart;
  FVar3 = ClothCollectionAttribute::RenderVerticesEnd;
  FVar2 = ClothCollectionAttribute::RenderVerticesStart;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,6,0,&RenderPatternsGroupAttributes.AllocatorInstance,6,
             &RenderPatternsGroupAttributes.ArrayMax);
  FVar1 = RenderPatternsGroupAttributes.AllocatorInstance;
  *(FName *)RenderPatternsGroupAttributes.AllocatorInstance.Data = FVar2;
  *(FName *)(FVar1.Data + 8) = FVar3;
  *(FName *)(FVar1.Data + 0x10) = FVar4;
  *(FName *)(FVar1.Data + 0x18) = FVar5;
  *(FName *)(FVar1.Data + 0x20) = FVar7;
  *(FName *)(FVar1.Data + 0x28) = FVar6;
  atexit(_dynamic_atexit_destructor_for__RenderPatternsGroupAttributes__);
  return;
}

// `dynamic_initializer_for_'RenderPosition'' @ 1413edec0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__RenderPosition__(void)

{
  ::FName::FName(&RenderPosition,L"RenderPosition");
  return;
}

// `dynamic_initializer_for_'RenderTangentU'' @ 1413edee0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__RenderTangentU__(void)

{
  ::FName::FName(&RenderTangentU,L"RenderTangentU");
  return;
}

// `dynamic_initializer_for_'RenderTangentV'' @ 1413edf00

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__RenderTangentV__(void)

{
  ::FName::FName(&RenderTangentV,L"RenderTangentV");
  return;
}

// `dynamic_initializer_for_'RenderUVs'' @ 1413edf20

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__RenderUVs__(void)

{
  ::FName::FName(&RenderUVs,L"RenderUVs");
  return;
}

// `dynamic_initializer_for_'RenderVertices'' @ 1413edf40

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionGroup::_dynamic_initializer_for__RenderVertices__(void)

{
  ::FName::FName(&RenderVertices,L"RenderVertices");
  return;
}

// `dynamic_initializer_for_'RenderVerticesEnd'' @ 1413edf60

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__RenderVerticesEnd__(void)

{
  ::FName::FName(&RenderVerticesEnd,L"RenderVerticesEnd");
  return;
}

// `dynamic_initializer_for_'RenderVerticesGroupAttributes'' @ 1413edf80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_initializer_for__RenderVerticesGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  FName FVar12;
  FName FVar13;
  FName FVar14;
  FName FVar15;
  FName FVar16;
  
  FVar16 = ClothCollectionAttribute::RenderCustomResizingBlend;
  FVar15 = ClothCollectionAttribute::RenderDeformerSkinningBlend;
  FVar14 = ClothCollectionAttribute::RenderDeformerWeight;
  FVar13 = ClothCollectionAttribute::RenderDeformerSimIndices3D;
  FVar12 = ClothCollectionAttribute::RenderDeformerTangentBaryCoordsAndDist;
  FVar11 = ClothCollectionAttribute::RenderDeformerNormalBaryCoordsAndDist;
  FVar10 = ClothCollectionAttribute::RenderDeformerPositionBaryCoordsAndDist;
  FVar9 = ClothCollectionAttribute::RenderBoneWeights;
  FVar8 = ClothCollectionAttribute::RenderBoneIndices;
  FVar7 = ClothCollectionAttribute::RenderColor;
  FVar6 = ClothCollectionAttribute::RenderUVs;
  FVar5 = ClothCollectionAttribute::RenderTangentV;
  FVar4 = ClothCollectionAttribute::RenderTangentU;
  FVar3 = ClothCollectionAttribute::RenderNormal;
  FVar2 = ClothCollectionAttribute::RenderPosition;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,0xf,0,&RenderVerticesGroupAttributes.AllocatorInstance,0xf,
             &RenderVerticesGroupAttributes.ArrayMax);
  FVar1 = RenderVerticesGroupAttributes.AllocatorInstance;
  *(FName *)RenderVerticesGroupAttributes.AllocatorInstance.Data = FVar2;
  *(FName *)(FVar1.Data + 8) = FVar3;
  *(FName *)(FVar1.Data + 0x10) = FVar4;
  *(FName *)(FVar1.Data + 0x18) = FVar5;
  *(FName *)(FVar1.Data + 0x20) = FVar6;
  *(FName *)(FVar1.Data + 0x28) = FVar7;
  *(FName *)(FVar1.Data + 0x30) = FVar8;
  *(FName *)(FVar1.Data + 0x38) = FVar9;
  *(FName *)(FVar1.Data + 0x40) = FVar10;
  *(FName *)(FVar1.Data + 0x48) = FVar11;
  *(FName *)(FVar1.Data + 0x50) = FVar12;
  *(FName *)(FVar1.Data + 0x58) = FVar13;
  *(FName *)(FVar1.Data + 0x60) = FVar14;
  *(FName *)(FVar1.Data + 0x68) = FVar15;
  *(FName *)(FVar1.Data + 0x70) = FVar16;
  atexit(_dynamic_atexit_destructor_for__RenderVerticesGroupAttributes__);
  return;
}

// `dynamic_initializer_for_'RenderVerticesStart'' @ 1413ee110

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__RenderVerticesStart__
          (void)

{
  ::FName::FName(&RenderVerticesStart,L"RenderVerticesStart");
  return;
}

// `dynamic_initializer_for_'SeamStitch2DEndIndices'' @ 1413ee130

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SeamStitch2DEndIndices__
          (void)

{
  ::FName::FName(&SeamStitch2DEndIndices,L"SeamStitch2DEndIndices");
  return;
}

// `dynamic_initializer_for_'SeamStitch3DIndex'' @ 1413ee150

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SeamStitch3DIndex__(void)

{
  ::FName::FName(&SeamStitch3DIndex,L"SeamStitch3DIndex");
  return;
}

// `dynamic_initializer_for_'SeamStitchEnd'' @ 1413ee170

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SeamStitchEnd__(void)

{
  ::FName::FName(&SeamStitchEnd,L"SeamStitchEnd");
  return;
}

// `dynamic_initializer_for_'SeamStitchLookup'' @ 1413ee190

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SeamStitchLookup__(void)

{
  ::FName::FName(&SeamStitchLookup,L"SeamStitchLookup");
  return;
}

// `dynamic_initializer_for_'SeamStitchStart'' @ 1413ee1b0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SeamStitchStart__(void)

{
  ::FName::FName(&SeamStitchStart,L"SeamStitchStart");
  return;
}

// `dynamic_initializer_for_'SeamStitches'' @ 1413ee1d0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionGroup::_dynamic_initializer_for__SeamStitches__(void)

{
  ::FName::FName(&SeamStitches,L"SeamStitches");
  return;
}

// `dynamic_initializer_for_'SeamStitchesGroupAttributes'' @ 1413ee1f0

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_initializer_for__SeamStitchesGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FName FVar2;
  FName FVar3;
  
  FVar3 = ClothCollectionAttribute::SeamStitch3DIndex;
  FVar2 = ClothCollectionAttribute::SeamStitch2DEndIndices;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,0,&SeamStitchesGroupAttributes.AllocatorInstance,2,
             &SeamStitchesGroupAttributes.ArrayMax);
  FVar1 = SeamStitchesGroupAttributes.AllocatorInstance;
  *(FName *)SeamStitchesGroupAttributes.AllocatorInstance.Data = FVar2;
  *(FName *)(FVar1.Data + 8) = FVar3;
  atexit(_dynamic_atexit_destructor_for__SeamStitchesGroupAttributes__);
  return;
}

// `dynamic_initializer_for_'Seams'' @ 1413ee270

void __cdecl UE::Chaos::ClothAsset::ClothCollectionGroup::_dynamic_initializer_for__Seams__(void)

{
  ::FName::FName(&Seams,L"Seams");
  return;
}

// `dynamic_initializer_for_'SeamsGroupAttributes'' @ 1413ee290

void __cdecl UE::Chaos::ClothAsset::Private::_dynamic_initializer_for__SeamsGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FName FVar2;
  FName FVar3;
  
  FVar3 = ClothCollectionAttribute::SeamStitchEnd;
  FVar2 = ClothCollectionAttribute::SeamStitchStart;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,0,&SeamsGroupAttributes.AllocatorInstance,2,&SeamsGroupAttributes.ArrayMax);
  FVar1 = SeamsGroupAttributes.AllocatorInstance;
  *(FName *)SeamsGroupAttributes.AllocatorInstance.Data = FVar2;
  *(FName *)(FVar1.Data + 8) = FVar3;
  atexit(_dynamic_atexit_destructor_for__SeamsGroupAttributes__);
  return;
}

// `dynamic_initializer_for_'SelectionGroup'' @ 1413ee310

void __cdecl UE::Chaos::ClothAsset::Private::_dynamic_initializer_for__SelectionGroup__(void)

{
  ::FName::FName(&SelectionGroup,L"Selection");
  return;
}

// `dynamic_initializer_for_'SelectionSecondaryGroup'' @ 1413ee330

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_initializer_for__SelectionSecondaryGroup__(void)

{
  ::FName::FName(&SelectionSecondaryGroup,L"SelectionSecondary");
  return;
}

// `dynamic_initializer_for_'SimAccessoryMeshBoneIndicesAttribute'' @ 1413ee350

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__SimAccessoryMeshBoneIndicesAttribute__(void)

{
  ::FName::FName(&SimAccessoryMeshBoneIndicesAttribute,L"SimAccessoryMeshBoneIndicesAttribute");
  return;
}

// `dynamic_initializer_for_'SimAccessoryMeshBoneIndicesPrefix'' @ 1413ee370

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__SimAccessoryMeshBoneIndicesPrefix__(void)

{
  ::FName::FName(&SimAccessoryMeshBoneIndicesPrefix,L"SimAccessoryMeshBoneIndices");
  return;
}

// `dynamic_initializer_for_'SimAccessoryMeshBoneWeightsAttribute'' @ 1413ee390

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__SimAccessoryMeshBoneWeightsAttribute__(void)

{
  ::FName::FName(&SimAccessoryMeshBoneWeightsAttribute,L"SimAccessoryMeshBoneWeightsAttribute");
  return;
}

// `dynamic_initializer_for_'SimAccessoryMeshBoneWeightsPrefix'' @ 1413ee3b0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__SimAccessoryMeshBoneWeightsPrefix__(void)

{
  ::FName::FName(&SimAccessoryMeshBoneWeightsPrefix,L"SimAccessoryMeshBoneWeights");
  return;
}

// `dynamic_initializer_for_'SimAccessoryMeshName'' @ 1413ee3d0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SimAccessoryMeshName__
          (void)

{
  ::FName::FName(&SimAccessoryMeshName,L"SimAccessoryMeshName");
  return;
}

// `dynamic_initializer_for_'SimAccessoryMeshNormalAttribute'' @ 1413ee3f0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__SimAccessoryMeshNormalAttribute__(void)

{
  ::FName::FName(&SimAccessoryMeshNormalAttribute,L"SimAccessoryMeshNormalAttribute");
  return;
}

// `dynamic_initializer_for_'SimAccessoryMeshNormalPrefix'' @ 1413ee410

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__SimAccessoryMeshNormalPrefix__(void)

{
  ::FName::FName(&SimAccessoryMeshNormalPrefix,L"SimAccessoryMeshNormal");
  return;
}

// `dynamic_initializer_for_'SimAccessoryMeshPosition3DAttribute'' @ 1413ee430

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__SimAccessoryMeshPosition3DAttribute__(void)

{
  ::FName::FName(&SimAccessoryMeshPosition3DAttribute,L"SimAccessoryMeshPosition3DAttribute");
  return;
}

// `dynamic_initializer_for_'SimAccessoryMeshPosition3DPrefix'' @ 1413ee450

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__SimAccessoryMeshPosition3DPrefix__(void)

{
  ::FName::FName(&SimAccessoryMeshPosition3DPrefix,L"SimAccessoryMeshPosition3D");
  return;
}

// `dynamic_initializer_for_'SimAccessoryMeshVertices3DGroupAttributePrefixes'' @ 1413ee470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Chaos::ClothAsset::Private::
_dynamic_initializer_for__SimAccessoryMeshVertices3DGroupAttributePrefixes__(void)

{
  ForAnyElementType FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  
  FVar5 = ClothCollectionAttribute::SimAccessoryMeshBoneWeightsPrefix;
  FVar4 = ClothCollectionAttribute::SimAccessoryMeshBoneIndicesPrefix;
  FVar3 = ClothCollectionAttribute::SimAccessoryMeshNormalPrefix;
  FVar2 = ClothCollectionAttribute::SimAccessoryMeshPosition3DPrefix;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,4,0,&SimAccessoryMeshVertices3DGroupAttributePrefixes.AllocatorInstance,4,
             &SimAccessoryMeshVertices3DGroupAttributePrefixes.ArrayMax);
  FVar1 = SimAccessoryMeshVertices3DGroupAttributePrefixes.AllocatorInstance;
  *(FName *)SimAccessoryMeshVertices3DGroupAttributePrefixes.AllocatorInstance.Data = FVar2;
  *(FName *)(FVar1.Data + 8) = FVar3;
  *(FName *)(FVar1.Data + 0x10) = FVar4;
  *(FName *)(FVar1.Data + 0x18) = FVar5;
  atexit(_dynamic_atexit_destructor_for__SimAccessoryMeshVertices3DGroupAttributePrefixes__);
  return;
}

// `dynamic_initializer_for_'SimAccessoryMeshes'' @ 1413ee530

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionGroup::_dynamic_initializer_for__SimAccessoryMeshes__(void)

{
  ::FName::FName(&SimAccessoryMeshes,L"SimAccessoryMeshes");
  return;
}

// `dynamic_initializer_for_'SimAccessoryMeshesGroupAttributes'' @ 1413ee550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_initializer_for__SimAccessoryMeshesGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  
  FVar6 = ClothCollectionAttribute::SimAccessoryMeshBoneWeightsAttribute;
  FVar5 = ClothCollectionAttribute::SimAccessoryMeshBoneIndicesAttribute;
  FVar4 = ClothCollectionAttribute::SimAccessoryMeshNormalAttribute;
  FVar3 = ClothCollectionAttribute::SimAccessoryMeshPosition3DAttribute;
  FVar2 = ClothCollectionAttribute::SimAccessoryMeshName;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,5,0,&SimAccessoryMeshesGroupAttributes.AllocatorInstance,5,
             &SimAccessoryMeshesGroupAttributes.ArrayMax);
  FVar1 = SimAccessoryMeshesGroupAttributes.AllocatorInstance;
  *(FName *)SimAccessoryMeshesGroupAttributes.AllocatorInstance.Data = FVar2;
  *(FName *)(FVar1.Data + 8) = FVar3;
  *(FName *)(FVar1.Data + 0x10) = FVar4;
  *(FName *)(FVar1.Data + 0x18) = FVar5;
  *(FName *)(FVar1.Data + 0x20) = FVar6;
  atexit(_dynamic_atexit_destructor_for__SimAccessoryMeshesGroupAttributes__);
  return;
}

// `dynamic_initializer_for_'SimBoneIndices'' @ 1413ee620

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SimBoneIndices__(void)

{
  ::FName::FName(&SimBoneIndices,L"SimBoneIndices");
  return;
}

// `dynamic_initializer_for_'SimBoneWeights'' @ 1413ee640

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SimBoneWeights__(void)

{
  ::FName::FName(&SimBoneWeights,L"SimBoneWeights");
  return;
}

// `dynamic_initializer_for_'SimCustomResizingBlend'' @ 1413ee660

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SimCustomResizingBlend__
          (void)

{
  ::FName::FName(&SimCustomResizingBlend,L"SimCustomResizingBlend");
  return;
}

// `dynamic_initializer_for_'SimFabricGroupAttributes'' @ 1413ee680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_initializer_for__SimFabricGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  
  FVar11 = ClothCollectionAttribute::FabricCollisionThickness;
  FVar10 = ClothCollectionAttribute::FabricLayer;
  FVar9 = ClothCollectionAttribute::FabricPressure;
  FVar8 = ClothCollectionAttribute::FabricDamping;
  FVar7 = ClothCollectionAttribute::FabricFriction;
  FVar6 = ClothCollectionAttribute::FabricDensity;
  FVar5 = ClothCollectionAttribute::FabricBucklingRatio;
  FVar4 = ClothCollectionAttribute::FabricStretchStiffness;
  FVar3 = ClothCollectionAttribute::FabricBucklingStiffness;
  FVar2 = ClothCollectionAttribute::FabricBendingStiffness;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,10,0,&SimFabricGroupAttributes.AllocatorInstance,10,
             &SimFabricGroupAttributes.ArrayMax);
  FVar1 = SimFabricGroupAttributes.AllocatorInstance;
  *(FName *)SimFabricGroupAttributes.AllocatorInstance.Data = FVar2;
  *(FName *)(FVar1.Data + 8) = FVar3;
  *(FName *)(FVar1.Data + 0x10) = FVar4;
  *(FName *)(FVar1.Data + 0x18) = FVar5;
  *(FName *)(FVar1.Data + 0x20) = FVar6;
  *(FName *)(FVar1.Data + 0x28) = FVar7;
  *(FName *)(FVar1.Data + 0x30) = FVar8;
  *(FName *)(FVar1.Data + 0x38) = FVar9;
  *(FName *)(FVar1.Data + 0x40) = FVar10;
  *(FName *)(FVar1.Data + 0x48) = FVar11;
  atexit(_dynamic_atexit_destructor_for__SimFabricGroupAttributes__);
  return;
}

// `dynamic_initializer_for_'SimFaces'' @ 1413ee7b0

void __cdecl UE::Chaos::ClothAsset::ClothCollectionGroup::_dynamic_initializer_for__SimFaces__(void)

{
  ::FName::FName(&SimFaces,L"SimFaces");
  return;
}

// `dynamic_initializer_for_'SimFacesEnd'' @ 1413ee7d0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SimFacesEnd__(void)

{
  ::FName::FName(&SimFacesEnd,L"SimFacesEnd");
  return;
}

// `dynamic_initializer_for_'SimFacesGroupAttributes'' @ 1413ee7f0

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_initializer_for__SimFacesGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FName FVar2;
  FName FVar3;
  
  FVar3 = ClothCollectionAttribute::SimIndices3D;
  FVar2 = ClothCollectionAttribute::SimIndices2D;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,0,&SimFacesGroupAttributes.AllocatorInstance,2,&SimFacesGroupAttributes.ArrayMax)
  ;
  FVar1 = SimFacesGroupAttributes.AllocatorInstance;
  *(FName *)SimFacesGroupAttributes.AllocatorInstance.Data = FVar2;
  *(FName *)(FVar1.Data + 8) = FVar3;
  atexit(_dynamic_atexit_destructor_for__SimFacesGroupAttributes__);
  return;
}

// `dynamic_initializer_for_'SimFacesStart'' @ 1413ee870

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SimFacesStart__(void)

{
  ::FName::FName(&SimFacesStart,L"SimFacesStart");
  return;
}

// `dynamic_initializer_for_'SimImportVertexID'' @ 1413ee890

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SimImportVertexID__(void)

{
  ::FName::FName(&SimImportVertexID,L"SimImportVertexID");
  return;
}

// `dynamic_initializer_for_'SimIndices2D'' @ 1413ee8b0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SimIndices2D__(void)

{
  ::FName::FName(&SimIndices2D,L"SimIndices2D");
  return;
}

// `dynamic_initializer_for_'SimIndices3D'' @ 1413ee8d0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SimIndices3D__(void)

{
  ::FName::FName(&SimIndices3D,L"SimIndices3D");
  return;
}

// `dynamic_initializer_for_'SimMorphTargetName'' @ 1413ee8f0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SimMorphTargetName__
          (void)

{
  ::FName::FName(&SimMorphTargetName,L"SimMorphTargetName");
  return;
}

// `dynamic_initializer_for_'SimMorphTargetPositionDelta'' @ 1413ee910

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__SimMorphTargetPositionDelta__(void)

{
  ::FName::FName(&SimMorphTargetPositionDelta,L"SimMorphTargetPositionDelta");
  return;
}

// `dynamic_initializer_for_'SimMorphTargetSimVertex3DIndex'' @ 1413ee930

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__SimMorphTargetSimVertex3DIndex__(void)

{
  ::FName::FName(&SimMorphTargetSimVertex3DIndex,L"SimMorphTargetSimVertex3DIndex");
  return;
}

// `dynamic_initializer_for_'SimMorphTargetTangentZDelta'' @ 1413ee950

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__SimMorphTargetTangentZDelta__(void)

{
  ::FName::FName(&SimMorphTargetTangentZDelta,L"SimMorphTargetTangentZDelta");
  return;
}

// `dynamic_initializer_for_'SimMorphTargetVertices'' @ 1413ee970

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionGroup::_dynamic_initializer_for__SimMorphTargetVertices__
          (void)

{
  ::FName::FName(&SimMorphTargetVertices,L"SimMorphTargetVertices");
  return;
}

// `dynamic_initializer_for_'SimMorphTargetVerticesEnd'' @ 1413ee990

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__SimMorphTargetVerticesEnd__(void)

{
  ::FName::FName(&SimMorphTargetVerticesEnd,L"SimMorphTargetVerticesEnd");
  return;
}

// `dynamic_initializer_for_'SimMorphTargetVerticesGroupAttributes'' @ 1413ee9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_initializer_for__SimMorphTargetVerticesGroupAttributes__
          (void)

{
  ForAnyElementType FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  
  FVar4 = ClothCollectionAttribute::SimMorphTargetSimVertex3DIndex;
  FVar3 = ClothCollectionAttribute::SimMorphTargetTangentZDelta;
  FVar2 = ClothCollectionAttribute::SimMorphTargetPositionDelta;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,3,0,&SimMorphTargetVerticesGroupAttributes.AllocatorInstance,3,
             &SimMorphTargetVerticesGroupAttributes.ArrayMax);
  FVar1 = SimMorphTargetVerticesGroupAttributes.AllocatorInstance;
  *(FName *)SimMorphTargetVerticesGroupAttributes.AllocatorInstance.Data = FVar2;
  *(FName *)(FVar1.Data + 8) = FVar3;
  *(FName *)(FVar1.Data + 0x10) = FVar4;
  atexit(_dynamic_atexit_destructor_for__SimMorphTargetVerticesGroupAttributes__);
  return;
}

// `dynamic_initializer_for_'SimMorphTargetVerticesStart'' @ 1413eea60

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__SimMorphTargetVerticesStart__(void)

{
  ::FName::FName(&SimMorphTargetVerticesStart,L"SimMorphTargetVerticesStart");
  return;
}

// `dynamic_initializer_for_'SimMorphTargets'' @ 1413eea80

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionGroup::_dynamic_initializer_for__SimMorphTargets__(void)

{
  ::FName::FName(&SimMorphTargets,L"SimMorphTargets");
  return;
}

// `dynamic_initializer_for_'SimMorphTargetsGroupAttributes'' @ 1413eeaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_initializer_for__SimMorphTargetsGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  
  FVar4 = ClothCollectionAttribute::SimMorphTargetVerticesEnd;
  FVar3 = ClothCollectionAttribute::SimMorphTargetVerticesStart;
  FVar2 = ClothCollectionAttribute::SimMorphTargetName;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,3,0,&SimMorphTargetsGroupAttributes.AllocatorInstance,3,
             &SimMorphTargetsGroupAttributes.ArrayMax);
  FVar1 = SimMorphTargetsGroupAttributes.AllocatorInstance;
  *(FName *)SimMorphTargetsGroupAttributes.AllocatorInstance.Data = FVar2;
  *(FName *)(FVar1.Data + 8) = FVar3;
  *(FName *)(FVar1.Data + 0x10) = FVar4;
  atexit(_dynamic_atexit_destructor_for__SimMorphTargetsGroupAttributes__);
  return;
}

// `dynamic_initializer_for_'SimNormal'' @ 1413eeb50

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SimNormal__(void)

{
  ::FName::FName(&SimNormal,L"SimNormal");
  return;
}

// `dynamic_initializer_for_'SimPatternFabric'' @ 1413eeb70

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SimPatternFabric__(void)

{
  ::FName::FName(&SimPatternFabric,L"SimPatternFabric");
  return;
}

// `dynamic_initializer_for_'SimPatterns'' @ 1413eeb90

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionGroup::_dynamic_initializer_for__SimPatterns__(void)

{
  ::FName::FName(&SimPatterns,L"SimPatterns");
  return;
}

// `dynamic_initializer_for_'SimPatternsGroupAttributes'' @ 1413eebb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_initializer_for__SimPatternsGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  
  FVar6 = ClothCollectionAttribute::SimPatternFabric;
  FVar5 = ClothCollectionAttribute::SimFacesEnd;
  FVar4 = ClothCollectionAttribute::SimFacesStart;
  FVar3 = ClothCollectionAttribute::SimVertices2DEnd;
  FVar2 = ClothCollectionAttribute::SimVertices2DStart;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,5,0,&SimPatternsGroupAttributes.AllocatorInstance,5,
             &SimPatternsGroupAttributes.ArrayMax);
  FVar1 = SimPatternsGroupAttributes.AllocatorInstance;
  *(FName *)SimPatternsGroupAttributes.AllocatorInstance.Data = FVar2;
  *(FName *)(FVar1.Data + 8) = FVar3;
  *(FName *)(FVar1.Data + 0x10) = FVar4;
  *(FName *)(FVar1.Data + 0x18) = FVar5;
  *(FName *)(FVar1.Data + 0x20) = FVar6;
  atexit(_dynamic_atexit_destructor_for__SimPatternsGroupAttributes__);
  return;
}

// `dynamic_initializer_for_'SimPosition2D'' @ 1413eec80

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SimPosition2D__(void)

{
  ::FName::FName(&SimPosition2D,L"SimPosition2D");
  return;
}

// `dynamic_initializer_for_'SimPosition3D'' @ 1413eeca0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SimPosition3D__(void)

{
  ::FName::FName(&SimPosition3D,L"SimPosition3D");
  return;
}

// `dynamic_initializer_for_'SimVertex2DLookup'' @ 1413eecc0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SimVertex2DLookup__(void)

{
  ::FName::FName(&SimVertex2DLookup,L"SimVertex2DLookup");
  return;
}

// `dynamic_initializer_for_'SimVertex3DLookup'' @ 1413eece0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SimVertex3DLookup__(void)

{
  ::FName::FName(&SimVertex3DLookup,L"SimVertex3DLookup");
  return;
}

// `dynamic_initializer_for_'SimVertices2D'' @ 1413eed00

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionGroup::_dynamic_initializer_for__SimVertices2D__(void)

{
  ::FName::FName(&SimVertices2D,L"SimVertices2D");
  return;
}

// `dynamic_initializer_for_'SimVertices2DEnd'' @ 1413eed20

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SimVertices2DEnd__(void)

{
  ::FName::FName(&SimVertices2DEnd,L"SimVertices2DEnd");
  return;
}

// `dynamic_initializer_for_'SimVertices2DGroupAttributes'' @ 1413eed40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_initializer_for__SimVertices2DGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  
  FVar4 = ClothCollectionAttribute::SimImportVertexID;
  FVar3 = ClothCollectionAttribute::SimVertex3DLookup;
  FVar2 = ClothCollectionAttribute::SimPosition2D;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,3,0,&SimVertices2DGroupAttributes.AllocatorInstance,3,
             &SimVertices2DGroupAttributes.ArrayMax);
  FVar1 = SimVertices2DGroupAttributes.AllocatorInstance;
  *(FName *)SimVertices2DGroupAttributes.AllocatorInstance.Data = FVar2;
  *(FName *)(FVar1.Data + 8) = FVar3;
  *(FName *)(FVar1.Data + 0x10) = FVar4;
  atexit(_dynamic_atexit_destructor_for__SimVertices2DGroupAttributes__);
  return;
}

// `dynamic_initializer_for_'SimVertices2DStart'' @ 1413eedf0

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SimVertices2DStart__
          (void)

{
  ::FName::FName(&SimVertices2DStart,L"SimVertices2DStart");
  return;
}

// `dynamic_initializer_for_'SimVertices3D'' @ 1413eee10

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionGroup::_dynamic_initializer_for__SimVertices3D__(void)

{
  ::FName::FName(&SimVertices3D,L"SimVertices3D");
  return;
}

// `dynamic_initializer_for_'SimVertices3DGroupAttributes'' @ 1413eee30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_initializer_for__SimVertices3DGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  
  FVar9 = ClothCollectionAttribute::SimCustomResizingBlend;
  FVar8 = ClothCollectionAttribute::SeamStitchLookup;
  FVar7 = ClothCollectionAttribute::SimVertex2DLookup;
  FVar6 = ClothCollectionAttribute::SimBoneWeights;
  FVar5 = ClothCollectionAttribute::SimBoneIndices;
  FVar4 = ClothCollectionAttribute::SimNormal;
  FVar3 = ClothCollectionAttribute::PreResizedSimPosition3D;
  FVar2 = ClothCollectionAttribute::SimPosition3D;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,8,0,&SimVertices3DGroupAttributes.AllocatorInstance,8,
             &SimVertices3DGroupAttributes.ArrayMax);
  FVar1 = SimVertices3DGroupAttributes.AllocatorInstance;
  *(FName *)SimVertices3DGroupAttributes.AllocatorInstance.Data = FVar2;
  *(FName *)(FVar1.Data + 8) = FVar3;
  *(FName *)(FVar1.Data + 0x10) = FVar4;
  *(FName *)(FVar1.Data + 0x18) = FVar5;
  *(FName *)(FVar1.Data + 0x20) = FVar6;
  *(FName *)(FVar1.Data + 0x28) = FVar7;
  *(FName *)(FVar1.Data + 0x30) = FVar8;
  *(FName *)(FVar1.Data + 0x38) = FVar9;
  atexit(_dynamic_atexit_destructor_for__SimVertices3DGroupAttributes__);
  return;
}

// `dynamic_initializer_for_'SkeletalMeshPathName'' @ 1413eef30

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SkeletalMeshPathName__
          (void)

{
  ::FName::FName(&SkeletalMeshPathName,L"SkeletalMeshPathName");
  return;
}

// `dynamic_initializer_for_'SkeletalMeshSoftObjectPathName'' @ 1413eef50

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::
_dynamic_initializer_for__SkeletalMeshSoftObjectPathName__(void)

{
  ::FName::FName(&SkeletalMeshSoftObjectPathName,L"SkeletalMeshSoftObjectPathName");
  return;
}

// `dynamic_initializer_for_'SolverAirDamping'' @ 1413eef70

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SolverAirDamping__(void)

{
  ::FName::FName(&SolverAirDamping,L"SolverAirDamping");
  return;
}

// `dynamic_initializer_for_'SolverGravity'' @ 1413eef90

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SolverGravity__(void)

{
  ::FName::FName(&SolverGravity,L"SolverGravity");
  return;
}

// `dynamic_initializer_for_'SolverGroupAttributes'' @ 1413eefb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::Chaos::ClothAsset::Private::_dynamic_initializer_for__SolverGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  
  FVar5 = ClothCollectionAttribute::SolverTimeStep;
  FVar4 = ClothCollectionAttribute::SolverSubSteps;
  FVar3 = ClothCollectionAttribute::SolverAirDamping;
  FVar2 = ClothCollectionAttribute::SolverGravity;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,4,0,&SolverGroupAttributes.AllocatorInstance,4,&SolverGroupAttributes.ArrayMax);
  FVar1 = SolverGroupAttributes.AllocatorInstance;
  *(FName *)SolverGroupAttributes.AllocatorInstance.Data = FVar2;
  *(FName *)(FVar1.Data + 8) = FVar3;
  *(FName *)(FVar1.Data + 0x10) = FVar4;
  *(FName *)(FVar1.Data + 0x18) = FVar5;
  atexit(_dynamic_atexit_destructor_for__SolverGroupAttributes__);
  return;
}

// `dynamic_initializer_for_'SolverSubSteps'' @ 1413ef070

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SolverSubSteps__(void)

{
  ::FName::FName(&SolverSubSteps,L"SolverSubSteps");
  return;
}

// `dynamic_initializer_for_'SolverTimeStep'' @ 1413ef090

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__SolverTimeStep__(void)

{
  ::FName::FName(&SolverTimeStep,L"SolverTimeStep");
  return;
}

// `dynamic_initializer_for_'Solvers'' @ 1413ef0b0

void __cdecl UE::Chaos::ClothAsset::ClothCollectionGroup::_dynamic_initializer_for__Solvers__(void)

{
  ::FName::FName(&Solvers,L"Solvers");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeGenerateTree'' @ 1413ef0d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeGenerateTree ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeGenerateTree>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeGenerateTree,*pFVar1,
               L"AABBTreeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeInitialTimeSlice'' @ 1413ef160

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeInitialTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeInitialTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeInitialTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeInitialTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeInitialTimeSlice,*pFVar1,
               L"AABBTreeInitialTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeProgressTimeSlice'' @ 1413ef1f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeProgressTimeSlice__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeProgressTimeSlice ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeProgressTimeSlice>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeProgressTimeSlice");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeProgressTimeSlice,*pFVar1,
               L"AABBTreeProgressTimeSlice","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AABBTreeTimeSliceSetup'' @ 1413ef280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Chaos::_dynamic_initializer_for__StatPtr_STAT_AABBTreeTimeSliceSetup__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AABBTreeTimeSliceSetup ==
      (FThreadSafeStaticStat<Chaos::FStat_STAT_AABBTreeTimeSliceSetup>)0x0) {
    pFVar1 = ::FName::FName(local_res8,"STAT_AABBTreeTimeSliceSetup");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AABBTreeTimeSliceSetup,*pFVar1,
               L"AABBTreeTimeSliceSetup","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeAddElement'' @ 1413ef310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeAddElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeAddElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeAddElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeAddElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeAddElement,*pFVar1,
               L"BoundingVolumeAddElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeComputeGlobalBox'' @ 1413ef3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeComputeGlobalBox__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeComputeGlobalBox ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeComputeGlobalBox>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeComputeGlobalBox");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeComputeGlobalBox,*pFVar1,
               L"BoundingVolumeComputeGlobalBox","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeFillGrid'' @ 1413ef430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeFillGrid__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeFillGrid ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeFillGrid>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeFillGrid");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeFillGrid,*pFVar1,
               L"BoundingVolumeFillGrid","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeGenerateTree'' @ 1413ef4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeGenerateTree__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeGenerateTree ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeGenerateTree>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeGenerateTree");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeGenerateTree,*pFVar1,
               L"BoundingVolumeGenerateTree","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeRemoveElement'' @ 1413ef550

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeRemoveElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeRemoveElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeRemoveElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeRemoveElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeRemoveElement,*pFVar1,
               L"BoundingVolumeRemoveElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BoundingVolumeUpdateElement'' @ 1413ef5e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BoundingVolumeUpdateElement__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BoundingVolumeUpdateElement ==
      (FThreadSafeStaticStat<FStat_STAT_BoundingVolumeUpdateElement>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BoundingVolumeUpdateElement");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BoundingVolumeUpdateElement,*pFVar1,
               L"BoundingVolumeUpdateElement","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'TetherKinematicIndex'' @ 1413ef670

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__TetherKinematicIndex__
          (void)

{
  ::FName::FName(&TetherKinematicIndex,L"TetherKinematicIndex");
  return;
}

// `dynamic_initializer_for_'TetherReferenceLength'' @ 1413ef690

void __cdecl
UE::Chaos::ClothAsset::ClothCollectionAttribute::_dynamic_initializer_for__TetherReferenceLength__
          (void)

{
  ::FName::FName(&TetherReferenceLength,L"TetherReferenceLength");
  return;
}

// `dynamic_initializer_for_'UserAccessibleAttributeNamesMap'' @ 1413ef6b0

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_initializer_for__UserAccessibleAttributeNamesMap__(void)

{
  FName FVar1;
  ForAnyElementType local_68;
  undefined4 local_60;
  int local_5c;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FName local_48;
  FName FStack_40;
  initializer_list<TPairInitializer<FName_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&>_>
  local_38;
  TPairInitializer<FName_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&> local_28;
  FName *local_18;
  ForAnyElementType *local_10;
  
  FVar1 = ClothCollectionAttribute::SimCustomResizingBlend;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_58.AllocatorInstance,1,&local_58.ArrayMax);
  *(FName *)local_58.AllocatorInstance.Data = FVar1;
  local_28.Key = &ClothCollectionGroup::SimVertices3D;
  local_28.Value = &local_58;
  local_48 = ClothCollectionAttribute::RenderDeformerSkinningBlend;
  FStack_40 = ClothCollectionAttribute::RenderCustomResizingBlend;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 2;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,0,&local_68,2,&local_5c);
  *(FName *)local_68.Data = local_48;
  *(FName *)(local_68.Data + 8) = FStack_40;
  local_18 = &ClothCollectionGroup::RenderVertices;
  local_10 = &local_68;
  local_38._First = &local_28;
  local_38._Last =
       (TPairInitializer<FName_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&> *)
       &stack0xfffffffffffffff8;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  ::
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
            (&UserAccessibleAttributeNamesMap,&local_38);
  if ((FName *)local_68.Data != (FName *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if ((FName *)local_58.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__UserAccessibleAttributeNamesMap__);
  return;
}

// `scalar_deleting_destructor' @ 14db22fa0

void * __thiscall
UE::Chaos::ClothAsset::FClothAssetModule::_scalar_deleting_destructor_
          (FClothAssetModule *this,uint param_1)

{
  *this = (FClothAssetModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// DefaultConstructItems<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,int> @ 14db287e0

void __cdecl
DefaultConstructItems<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x2c) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined8 *)(lVar1 + 0x3c) = 0;
      lVar1 = lVar1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<UE::Chaos::ClothAsset::Private::FSplittingGroup,int> @ 14db28830

void __cdecl
DefaultConstructItems<UE::Chaos::ClothAsset::Private::FSplittingGroup,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined4 *)(puVar1 + -2) = 0xffffffff;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x24) = 0x80;
      *(undefined4 *)(puVar1 + 5) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
      puVar1[7] = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xd] = 0;
      *(undefined4 *)(puVar1 + 0xe) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x74) = 0x80;
      *(undefined4 *)(puVar1 + 0xf) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x7c) = 0;
      puVar1[0x11] = 0;
      *(undefined4 *)(puVar1 + 0x12) = 0;
      puVar1 = puVar1 + 0x15;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,int> @ 14db288b0

void __cdecl
DestructItems<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FIsland,int>
          (FIsland *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Normals;
    do {
      pFVar1 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FIsland *)(pTVar2 + -3))->Indices).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<ClothingMeshUtils::FMeshToMeshFilterSet,int> @ 14db28930

void __cdecl
DestructItems<ClothingMeshUtils::FMeshToMeshFilterSet,int>
          (FMeshToMeshFilterSet *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->TargetVertices).Hash.SecondaryData;
    do {
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      *(undefined4 *)(pFVar1 + -9) = 0;
      if (pFVar1[-10] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[-10]);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -0x12));
      pFVar1 = pFVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`UE::Chaos::ClothAsset::FCollectionClothSeamFacade::CleanupAndCompact'::__l2::FNewStitches,int> @ 14db289b0

void __cdecl
DestructItems<_UE::Chaos::ClothAsset::FCollectionClothSeamFacade::CleanupAndCompact_::__l2::FNewStitches,int>
          (FNewStitches *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->StitchEnds).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FNewStitches *)(&param_1->StitchEnds + 1);
  }
  return;
}

// DestructItems<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FSeam,int> @ 14db289f0

void __cdecl
DestructItems<UE::Chaos::ClothAsset::Private::SimMeshBuilder::FSeam,int>(FSeam *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Stitches).Hash.SecondaryData;
    do {
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<UE::Math::TIntVector2<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UE::Math::TIntVector2<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<UE::Math::TIntVector2<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      pFVar1 = pFVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::Chaos::ClothAsset::Private::FSplittingGroup,int> @ 14db28a50

void __cdecl
DestructItems<UE::Chaos::ClothAsset::Private::FSplittingGroup,int>
          (FSplittingGroup *param_1,int param_2)

{
  ForElementType<FSetElementId> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->SeamStitches).Hash.SecondaryData;
    do {
      *(undefined4 *)(pFVar1 + 1) = 0;
      if (*pFVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -8));
      *(undefined4 *)(pFVar1 + -9) = 0;
      if (pFVar1[-10] != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)pFVar1[-10]);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(pFVar1 + -0x12));
      pFVar1 = pFVar1 + 0x15;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// EnumHasAnyFlags<enum_UE::Chaos::ClothAsset::EClothCollectionExtendedSchemas> @ 14db29600

bool __cdecl
EnumHasAnyFlags<enum_UE::Chaos::ClothAsset::EClothCollectionExtendedSchemas>
          (EClothCollectionExtendedSchemas param_1,EClothCollectionExtendedSchemas param_2)

{
  return (param_2 & param_1) != None;
}

// GetArrayHash<FLinearColor> @ 14db2b090

uint __cdecl GetArrayHash<FLinearColor>(FLinearColor *param_1,ulong64 param_2,uint param_3)

{
  uint uVar1;
  
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar1 = FCrc::MemCrc_DEPRECATED(param_1,0x10,0);
    param_1 = param_1 + 1;
    param_3 = param_3 ^ uVar1 + 0x9e3779b9 + param_3 * 0x40 + (param_3 >> 2);
  }
  return param_3;
}

// GetArrayHash<FSoftObjectPath> @ 14db2b100

uint __cdecl GetArrayHash<FSoftObjectPath>(FSoftObjectPath *param_1,ulong64 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  if (param_2 != 0) {
    piVar5 = &(param_1->SubPathString).Data.ArrayNum;
    do {
      uVar1 = *(undefined8 *)(piVar5 + -4);
      uVar3 = GetTypeHash((FNameEntryId)(uint)uVar1);
      uVar2 = *(undefined8 *)(piVar5 + -6);
      uVar4 = GetTypeHash((FNameEntryId)(uint)uVar2);
      uVar4 = uVar4 + (int)((ulonglong)uVar2 >> 0x20);
      uVar4 = uVar4 * 0x40 + uVar3 + (int)((ulonglong)uVar1 >> 0x20) + (uVar4 >> 2) + 0x9e3779b9 ^
              uVar4;
      if (1 < *piVar5) {
        uVar3 = FCrc::Strihash_DEPRECATED<char8_t>
                          (*piVar5 + -1,
                           (uchar *)(((TArray<char8_t,TSizedDefaultAllocator<32>_> *)(piVar5 + -2))
                                    ->AllocatorInstance).Data);
        uVar4 = uVar4 ^ uVar3 + uVar4 * 0x40 + -0x61c88647 + (uVar4 >> 2);
      }
      piVar5 = piVar5 + 8;
      param_3 = param_3 ^ param_3 * 0x40 + -0x61c88647 + uVar4 + (param_3 >> 2);
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return param_3;
}

// GetArrayHash<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> @ 14db2b1e0

uint __cdecl
GetArrayHash<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_1,ulong64 param_2,
          uint param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  ulonglong uVar6;
  int *piVar7;
  undefined1 local_res18 [16];
  
  if (param_2 != 0) {
    piVar7 = &param_1->ArrayNum;
    do {
      iVar2 = *piVar7;
      uVar6 = 0;
      pFVar4 = (((TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)(piVar7 + -2))->
               AllocatorInstance).Data;
      pFVar1 = pFVar4 + (longlong)iVar2 * 0xc;
      while( true ) {
        if (*piVar7 != iVar2) {
          `TCheckedPointerIterator<UE::Math::TIntVector3<int>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        uVar5 = (uint)uVar6;
        if (pFVar4 == pFVar1) break;
        uVar3 = FCrc::MemCrc_DEPRECATED(pFVar4,0xc,0);
        uVar6 = (ulonglong)(uVar5 ^ (int)(uVar6 >> 2) + -0x61c88647 + uVar5 * 0x40 + uVar3);
        pFVar4 = pFVar4 + 0xc;
      }
      piVar7 = piVar7 + 4;
      param_3 = param_3 ^ (param_3 >> 2) + 0x9e3779b9 + param_3 * 0x40 + uVar5;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return param_3;
}

// GetArrayHash<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> @ 14db2b2c0

uint __cdecl
GetArrayHash<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1,ulong64 param_2,
          uint param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  ulonglong uVar6;
  int *piVar7;
  undefined1 local_res18 [16];
  
  if (param_2 != 0) {
    piVar7 = &param_1->ArrayNum;
    do {
      pFVar4 = (((TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)(piVar7 + -2))->
               AllocatorInstance).Data;
      uVar6 = 0;
      iVar2 = *piVar7;
      pFVar1 = pFVar4 + (longlong)iVar2 * 8;
      while( true ) {
        if (*piVar7 != iVar2) {
          `TCheckedPointerIterator<UE::Math::TVector2<float>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        uVar5 = (uint)uVar6;
        if (pFVar4 == pFVar1) break;
        uVar3 = FCrc::MemCrc_DEPRECATED(pFVar4,8,0);
        uVar6 = (ulonglong)(uVar5 ^ (int)(uVar6 >> 2) + -0x61c88647 + uVar5 * 0x40 + uVar3);
        pFVar4 = pFVar4 + 8;
      }
      piVar7 = piVar7 + 4;
      param_3 = param_3 ^ (param_3 >> 2) + 0x9e3779b9 + param_3 * 0x40 + uVar5;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return param_3;
}

// GetArrayHash<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> @ 14db2b3a0

uint __cdecl
GetArrayHash<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1,ulong64 param_2,
          uint param_3)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 local_res18 [16];
  
  if (param_2 != 0) {
    piVar5 = &param_1->ArrayNum;
    do {
      iVar1 = *piVar5;
      uVar7 = 0;
      pFVar3 = (((TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)(piVar5 + -2))->
               AllocatorInstance).Data;
      pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
      while( true ) {
        if (*piVar5 != iVar1) {
          `TCheckedPointerIterator<UE::Math::TVector4<float>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        uVar6 = (uint)uVar7;
        if (pFVar3 == pFVar4) break;
        uVar2 = FCrc::MemCrc_DEPRECATED(pFVar3,0x10,0);
        uVar7 = (ulonglong)(uVar6 ^ (int)(uVar7 >> 2) + -0x61c88647 + uVar6 * 0x40 + uVar2);
        pFVar3 = pFVar3 + 0x10;
      }
      piVar5 = piVar5 + 4;
      param_3 = param_3 ^ (param_3 >> 2) + 0x9e3779b9 + param_3 * 0x40 + uVar6;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return param_3;
}

// GetArrayHash<FString> @ 14db2b490

uint __cdecl GetArrayHash<FString>(FString *param_1,ulong64 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  for (; param_2 != 0; param_2 = param_2 - 1) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar4 = L"";
      iVar3 = 0;
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
    param_1 = param_1 + 1;
    param_3 = param_3 ^ (param_3 >> 2) + 0x9e3779b9 + param_3 * 0x40 + uVar2;
  }
  return param_3;
}

// GetTypeHash<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> @ 14db2d9e0

uint __cdecl
GetTypeHash<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  
  iVar2 = param_1->ArrayNum;
  uVar5 = 0;
  pFVar4 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0xc;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TIntVector3<int>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    uVar3 = FCrc::MemCrc_DEPRECATED(pFVar4,0xc,0);
    uVar5 = uVar5 ^ (uVar5 >> 2) + 0x9e3779b9 + uVar5 * 0x40 + uVar3;
    pFVar4 = pFVar4 + 0xc;
  }
  return uVar5;
}

// GetTypeHash<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> @ 14db2da70

uint __cdecl
GetTypeHash<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  
  pFVar4 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  uVar5 = 0;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TVector2<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    uVar3 = FCrc::MemCrc_DEPRECATED(pFVar4,8,0);
    uVar5 = uVar5 ^ (uVar5 >> 2) + 0x9e3779b9 + uVar5 * 0x40 + uVar3;
    pFVar4 = pFVar4 + 8;
  }
  return uVar5;
}

// GetTypeHash<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> @ 14db2daf0

uint __cdecl
GetTypeHash<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  uVar5 = 0;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TVector4<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    uVar2 = FCrc::MemCrc_DEPRECATED(pFVar3,0x10,0);
    uVar5 = uVar5 ^ (uVar5 >> 2) + 0x9e3779b9 + uVar5 * 0x40 + uVar2;
    pFVar3 = pFVar3 + 0x10;
  }
  return uVar5;
}

// HeapSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,`UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize'::__l2::<lambda_1>_>_> @ 14db31bf0

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,_UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize_::__l2::<lambda_1>_>_>
          (TTuple<float,int> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<float,int>,_public:_void___cdecl_UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize(TArrayView<UE::Math::TIntVector2<int>_const_,int>)_::_2_::<lambda_1>_>
          param_4)

{
  TTuple<float,int> TVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14db31d0e:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = 0;
            TVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = TVar1;
            if (1 < iVar5) {
              do {
                iVar8 = iVar7 * 2;
                iVar4 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  if ((*(float *)(param_1 + (longlong)iVar8 + 1) <
                       *(float *)(param_1 + (longlong)iVar8 + 2)) ||
                     ((*(float *)(param_1 + (longlong)iVar8 + 1) <=
                       *(float *)(param_1 + (longlong)iVar8 + 2) &&
                      (*(int *)&param_1[(longlong)iVar8 + 1].field_0x4 <
                       *(int *)&param_1[(longlong)iVar8 + 2].field_0x4)))) {
                    bVar3 = true;
                  }
                  else {
                    bVar3 = false;
                  }
                  if (bVar3) {
                    iVar4 = iVar8;
                  }
                  iVar4 = iVar4 + 1;
                }
                if ((*(float *)(param_1 + iVar7) <= *(float *)(param_1 + iVar4)) &&
                   ((*(float *)(param_1 + iVar7) < *(float *)(param_1 + iVar4) ||
                    (*(int *)&param_1[iVar7].field_0x4 <= *(int *)&param_1[iVar4].field_0x4))))
                break;
                TVar1 = param_1[iVar7];
                param_1[iVar7] = param_1[iVar4];
                param_1[iVar4] = TVar1;
                iVar7 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if ((*(float *)(param_1 + (longlong)iVar5 + 1) < *(float *)(param_1 + (longlong)iVar5 + 2)) ||
         ((*(float *)(param_1 + (longlong)iVar5 + 1) <= *(float *)(param_1 + (longlong)iVar5 + 2) &&
          (*(int *)&param_1[(longlong)iVar5 + 1].field_0x4 <
           *(int *)&param_1[(longlong)iVar5 + 2].field_0x4)))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    if ((*(float *)(param_1 + iVar4) <= *(float *)(param_1 + iVar6)) &&
       ((*(float *)(param_1 + iVar4) < *(float *)(param_1 + iVar6) ||
        (*(int *)&param_1[iVar4].field_0x4 <= *(int *)&param_1[iVar6].field_0x4))))
    goto LAB_14db31d0e;
    TVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = TVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,`UE::Chaos::ClothAsset::Private::WeldTethers'::__l2::<lambda_1>_>_> @ 14db31e00

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,_UE::Chaos::ClothAsset::Private::WeldTethers_::__l2::<lambda_1>_>_>
          (TTuple<float,int> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<float,int>,_void___cdecl_UE::Chaos::ClothAsset::Private::WeldTethers(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_const_&,TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>_const_&,TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int>,TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int>)_::_2_::<lambda_1>_>
          param_4)

{
  TTuple<float,int> TVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14db31f1e:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = 0;
            TVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = TVar1;
            if (1 < iVar5) {
              do {
                iVar8 = iVar7 * 2;
                iVar4 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  if ((*(float *)(param_1 + (longlong)iVar8 + 2) <
                       *(float *)(param_1 + (longlong)iVar8 + 1)) ||
                     ((*(float *)(param_1 + (longlong)iVar8 + 2) <=
                       *(float *)(param_1 + (longlong)iVar8 + 1) &&
                      (*(int *)&param_1[(longlong)iVar8 + 2].field_0x4 <
                       *(int *)&param_1[(longlong)iVar8 + 1].field_0x4)))) {
                    bVar3 = true;
                  }
                  else {
                    bVar3 = false;
                  }
                  if (bVar3) {
                    iVar4 = iVar8;
                  }
                  iVar4 = iVar4 + 1;
                }
                if ((*(float *)(param_1 + iVar4) <= *(float *)(param_1 + iVar7)) &&
                   ((*(float *)(param_1 + iVar4) < *(float *)(param_1 + iVar7) ||
                    (*(int *)&param_1[iVar4].field_0x4 <= *(int *)&param_1[iVar7].field_0x4))))
                break;
                TVar1 = param_1[iVar7];
                param_1[iVar7] = param_1[iVar4];
                param_1[iVar4] = TVar1;
                iVar7 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if ((*(float *)(param_1 + (longlong)iVar5 + 2) < *(float *)(param_1 + (longlong)iVar5 + 1)) ||
         ((*(float *)(param_1 + (longlong)iVar5 + 2) <= *(float *)(param_1 + (longlong)iVar5 + 1) &&
          (*(int *)&param_1[(longlong)iVar5 + 2].field_0x4 <
           *(int *)&param_1[(longlong)iVar5 + 1].field_0x4)))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    if ((*(float *)(param_1 + iVar6) <= *(float *)(param_1 + iVar4)) &&
       ((*(float *)(param_1 + iVar6) < *(float *)(param_1 + iVar4) ||
        (*(int *)&param_1[iVar6].field_0x4 <= *(int *)&param_1[iVar4].field_0x4))))
    goto LAB_14db31f1e;
    TVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = TVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,`UE::Chaos::ClothAsset::Private::SplitTethers'::__l38::<lambda_1>_>_> @ 14db32010

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,_UE::Chaos::ClothAsset::Private::SplitTethers_::__l38::<lambda_1>_>_>
          (TTuple<float,int> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<float,int>,_void___cdecl_UE::Chaos::ClothAsset::Private::SplitTethers(TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>_const_&,TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int>,TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int>)_::_38_::<lambda_1>_>
          param_4)

{
  TTuple<float,int> TVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14db3212e:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = 0;
            TVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = TVar1;
            if (1 < iVar5) {
              do {
                iVar8 = iVar7 * 2;
                iVar4 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  if ((*(float *)(param_1 + (longlong)iVar8 + 2) <
                       *(float *)(param_1 + (longlong)iVar8 + 1)) ||
                     ((*(float *)(param_1 + (longlong)iVar8 + 2) <=
                       *(float *)(param_1 + (longlong)iVar8 + 1) &&
                      (*(int *)&param_1[(longlong)iVar8 + 2].field_0x4 <
                       *(int *)&param_1[(longlong)iVar8 + 1].field_0x4)))) {
                    bVar3 = true;
                  }
                  else {
                    bVar3 = false;
                  }
                  if (bVar3) {
                    iVar4 = iVar8;
                  }
                  iVar4 = iVar4 + 1;
                }
                if ((*(float *)(param_1 + iVar4) <= *(float *)(param_1 + iVar7)) &&
                   ((*(float *)(param_1 + iVar4) < *(float *)(param_1 + iVar7) ||
                    (*(int *)&param_1[iVar4].field_0x4 <= *(int *)&param_1[iVar7].field_0x4))))
                break;
                TVar1 = param_1[iVar7];
                param_1[iVar7] = param_1[iVar4];
                param_1[iVar4] = TVar1;
                iVar7 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if ((*(float *)(param_1 + (longlong)iVar5 + 2) < *(float *)(param_1 + (longlong)iVar5 + 1)) ||
         ((*(float *)(param_1 + (longlong)iVar5 + 2) <= *(float *)(param_1 + (longlong)iVar5 + 1) &&
          (*(int *)&param_1[(longlong)iVar5 + 2].field_0x4 <
           *(int *)&param_1[(longlong)iVar5 + 1].field_0x4)))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    if ((*(float *)(param_1 + iVar6) <= *(float *)(param_1 + iVar4)) &&
       ((*(float *)(param_1 + iVar6) < *(float *)(param_1 + iVar4) ||
        (*(int *)&param_1[iVar6].field_0x4 <= *(int *)&param_1[iVar4].field_0x4))))
    goto LAB_14db3212e;
    TVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = TVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,`UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize'::__l18::<lambda_2>_>_> @ 14db32220

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,_UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize_::__l18::<lambda_2>_>_>
          (TTuple<float,int> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<float,int>,_public:_void___cdecl_UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize(TArrayView<UE::Math::TIntVector2<int>_const_,int>)_::_18_::<lambda_2>_>
          param_4)

{
  TTuple<float,int> TVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14db3233e:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = 0;
            TVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = TVar1;
            if (1 < iVar5) {
              do {
                iVar8 = iVar7 * 2;
                iVar4 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  if ((*(float *)(param_1 + (longlong)iVar8 + 1) <
                       *(float *)(param_1 + (longlong)iVar8 + 2)) ||
                     ((*(float *)(param_1 + (longlong)iVar8 + 1) <=
                       *(float *)(param_1 + (longlong)iVar8 + 2) &&
                      (*(int *)&param_1[(longlong)iVar8 + 1].field_0x4 <
                       *(int *)&param_1[(longlong)iVar8 + 2].field_0x4)))) {
                    bVar3 = true;
                  }
                  else {
                    bVar3 = false;
                  }
                  if (bVar3) {
                    iVar4 = iVar8;
                  }
                  iVar4 = iVar4 + 1;
                }
                if ((*(float *)(param_1 + iVar7) <= *(float *)(param_1 + iVar4)) &&
                   ((*(float *)(param_1 + iVar7) < *(float *)(param_1 + iVar4) ||
                    (*(int *)&param_1[iVar7].field_0x4 <= *(int *)&param_1[iVar4].field_0x4))))
                break;
                TVar1 = param_1[iVar7];
                param_1[iVar7] = param_1[iVar4];
                param_1[iVar4] = TVar1;
                iVar7 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if ((*(float *)(param_1 + (longlong)iVar5 + 1) < *(float *)(param_1 + (longlong)iVar5 + 2)) ||
         ((*(float *)(param_1 + (longlong)iVar5 + 1) <= *(float *)(param_1 + (longlong)iVar5 + 2) &&
          (*(int *)&param_1[(longlong)iVar5 + 1].field_0x4 <
           *(int *)&param_1[(longlong)iVar5 + 2].field_0x4)))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    if ((*(float *)(param_1 + iVar4) <= *(float *)(param_1 + iVar6)) &&
       ((*(float *)(param_1 + iVar4) < *(float *)(param_1 + iVar6) ||
        (*(int *)&param_1[iVar4].field_0x4 <= *(int *)&param_1[iVar6].field_0x4))))
    goto LAB_14db3233e;
    TVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = TVar1;
    iVar4 = iVar6;
  } while( true );
}

// IntroSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,`UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize'::__l2::<lambda_1>_>_> @ 14db34c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,_UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize_::__l2::<lambda_1>_>_>
          (TTuple<float,int> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<float,int>,_public:_void___cdecl_UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize(TArrayView<UE::Math::TIntVector2<int>_const_,int>)_::_2_::<lambda_1>_>
          param_4)

{
  TTuple<float,int> TVar1;
  int iVar2;
  TTuple<float,int> *pTVar3;
  TTuple<float,int> *pTVar4;
  TTuple<float,int> **ppTVar5;
  TTuple<float,int> *pTVar6;
  TTuple<float,int> *pTVar7;
  TTuple<float,int> *pTVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_368 [48];
  int local_338;
  undefined4 uStack_334;
  TTuple<float,int> *local_328;
  TTuple<float,int> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppTVar5 = &local_328;
    do {
      pTVar6 = ppTVar5[1];
      pTVar8 = *ppTVar5;
      local_338 = *(int *)(ppTVar5 + 2);
      uStack_334 = *(undefined4 *)((longlong)ppTVar5 + 0x14);
      iVar2 = (int)((longlong)pTVar6 - (longlong)pTVar8 >> 3) + 1;
      pTVar7 = pTVar8;
      iVar9 = local_338;
      if (local_338 != 0) {
LAB_14db34d10:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          TVar1 = pTVar7[iVar2 >> 1];
          pTVar7[iVar2 >> 1] = *pTVar7;
          pTVar4 = pTVar6 + 1;
          *pTVar7 = TVar1;
          pTVar8 = pTVar7;
LAB_14db34d40:
          pTVar3 = pTVar8;
          pTVar8 = pTVar3 + 1;
          if (pTVar8 <= pTVar6) goto code_r0x00014db34d49;
          goto LAB_14db34d67;
        }
        if (pTVar7 < pTVar6) {
          pTVar8 = pTVar7 + 1;
          do {
            pTVar4 = pTVar7;
            if (pTVar8 <= pTVar6) {
              pTVar3 = pTVar8;
              if (0x1f < ((longlong)pTVar6 + (8 - (longlong)pTVar8) & 0xfffffffffffffff8U)) {
                do {
                  fVar10 = *(float *)pTVar4;
                  fVar11 = *(float *)pTVar3;
                  if ((fVar11 < fVar10) ||
                     ((fVar11 <= fVar10 && (*(int *)&pTVar3->field_0x4 < *(int *)&pTVar4->field_0x4)
                      ))) {
                    pTVar4 = pTVar3;
                    fVar10 = fVar11;
                  }
                  fVar11 = *(float *)(pTVar3 + 1);
                  if ((fVar11 < fVar10) ||
                     ((fVar11 <= fVar10 &&
                      (*(int *)&pTVar3[1].field_0x4 < *(int *)&pTVar4->field_0x4)))) {
                    pTVar4 = pTVar3 + 1;
                  }
                  else {
                    fVar11 = *(float *)pTVar4;
                  }
                  fVar10 = *(float *)(pTVar3 + 2);
                  if ((fVar10 < fVar11) ||
                     ((fVar10 <= fVar11 &&
                      (*(int *)&pTVar3[2].field_0x4 < *(int *)&pTVar4->field_0x4)))) {
                    pTVar4 = pTVar3 + 2;
                    fVar11 = fVar10;
                  }
                  if ((*(float *)(pTVar3 + 3) < fVar11) ||
                     ((*(float *)(pTVar3 + 3) <= fVar11 &&
                      (*(int *)&pTVar3[3].field_0x4 < *(int *)&pTVar4->field_0x4)))) {
                    pTVar4 = pTVar3 + 3;
                  }
                  pTVar3 = pTVar3 + 4;
                } while (pTVar3 <= pTVar6 + -3);
              }
              for (; pTVar3 <= pTVar6; pTVar3 = pTVar3 + 1) {
                if ((*(float *)pTVar3 < *(float *)pTVar4) ||
                   ((*(float *)pTVar3 <= *(float *)pTVar4 &&
                    (*(int *)&pTVar3->field_0x4 < *(int *)&pTVar4->field_0x4)))) {
                  pTVar4 = pTVar3;
                }
              }
            }
            TVar1 = *pTVar4;
            pTVar3 = pTVar6 + -1;
            *pTVar4 = *pTVar6;
            *pTVar6 = TVar1;
            pTVar6 = pTVar3;
          } while (pTVar7 < pTVar3);
        }
        goto LAB_14db34e35;
      }
LAB_14db34e24:
      HeapSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,_UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize_::__l2::<lambda_1>_>_>
                (pTVar8,iVar2,param_3,param_4);
LAB_14db34e35:
      ppTVar5 = ppTVar5 + -3;
    } while (&local_328 <= ppTVar5);
  }
  return;
code_r0x00014db34d49:
  if ((*(float *)pTVar7 <= *(float *)pTVar8) &&
     ((*(float *)pTVar7 < *(float *)pTVar8 ||
      (*(int *)&pTVar7->field_0x4 <= *(int *)&pTVar3[1].field_0x4)))) goto LAB_14db34d40;
LAB_14db34d67:
  while (pTVar3 = pTVar4, pTVar4 = pTVar3 + -1, pTVar7 < pTVar4) {
    if ((*(float *)pTVar7 < *(float *)pTVar4) ||
       ((*(float *)pTVar7 <= *(float *)pTVar4 &&
        (*(int *)&pTVar7->field_0x4 < *(int *)&pTVar3[-1].field_0x4)))) break;
  }
  if (pTVar8 <= pTVar4) {
    TVar1 = *pTVar8;
    *pTVar8 = *pTVar4;
    *pTVar4 = TVar1;
    goto LAB_14db34d40;
  }
  TVar1 = *pTVar7;
  iVar9 = iVar9 + -1;
  *pTVar7 = *pTVar4;
  *pTVar4 = TVar1;
  if ((longlong)((longlong)pTVar4 + (-8 - (longlong)pTVar7) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pTVar6 - (longlong)pTVar8 & 0xfffffffffffffff8U)) {
    if (pTVar8 < pTVar6) {
      *ppTVar5 = pTVar8;
      ppTVar5[1] = pTVar6;
      *(int *)(ppTVar5 + 2) = iVar9;
      ppTVar5 = ppTVar5 + 3;
    }
    if (pTVar4 <= pTVar7 + 1) goto LAB_14db34e35;
    pTVar6 = pTVar3 + -2;
    pTVar8 = pTVar7;
  }
  else {
    if (pTVar7 + 1 < pTVar4) {
      *ppTVar5 = pTVar7;
      ppTVar5[1] = pTVar3 + -2;
      *(int *)(ppTVar5 + 2) = iVar9;
      ppTVar5 = ppTVar5 + 3;
    }
    if (pTVar6 <= pTVar8) goto LAB_14db34e35;
  }
  iVar2 = (int)((longlong)pTVar6 - (longlong)pTVar8 >> 3) + 1;
  pTVar7 = pTVar8;
  if (iVar9 == 0) goto LAB_14db34e24;
  goto LAB_14db34d10;
}

// IntroSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,`UE::Chaos::ClothAsset::Private::WeldTethers'::__l2::<lambda_1>_>_> @ 14db34fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,_UE::Chaos::ClothAsset::Private::WeldTethers_::__l2::<lambda_1>_>_>
          (TTuple<float,int> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<float,int>,_void___cdecl_UE::Chaos::ClothAsset::Private::WeldTethers(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_const_&,TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>_const_&,TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int>,TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int>)_::_2_::<lambda_1>_>
          param_4)

{
  TTuple<float,int> TVar1;
  int iVar2;
  TTuple<float,int> *pTVar3;
  TTuple<float,int> *pTVar4;
  TTuple<float,int> **ppTVar5;
  TTuple<float,int> *pTVar6;
  TTuple<float,int> *pTVar7;
  TTuple<float,int> *pTVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_368 [48];
  int local_338;
  undefined4 uStack_334;
  TTuple<float,int> *local_328;
  TTuple<float,int> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppTVar5 = &local_328;
    do {
      pTVar6 = ppTVar5[1];
      pTVar8 = *ppTVar5;
      local_338 = *(int *)(ppTVar5 + 2);
      uStack_334 = *(undefined4 *)((longlong)ppTVar5 + 0x14);
      iVar2 = (int)((longlong)pTVar6 - (longlong)pTVar8 >> 3) + 1;
      pTVar7 = pTVar8;
      iVar9 = local_338;
      if (local_338 != 0) {
LAB_14db35050:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          TVar1 = pTVar7[iVar2 >> 1];
          pTVar7[iVar2 >> 1] = *pTVar7;
          pTVar4 = pTVar6 + 1;
          *pTVar7 = TVar1;
          pTVar8 = pTVar7;
LAB_14db35080:
          pTVar3 = pTVar8;
          pTVar8 = pTVar3 + 1;
          if (pTVar8 <= pTVar6) goto code_r0x00014db35089;
          goto LAB_14db350a7;
        }
        if (pTVar7 < pTVar6) {
          pTVar8 = pTVar7 + 1;
          do {
            pTVar4 = pTVar7;
            if (pTVar8 <= pTVar6) {
              pTVar3 = pTVar8;
              if (0x1f < ((longlong)pTVar6 + (8 - (longlong)pTVar8) & 0xfffffffffffffff8U)) {
                do {
                  fVar10 = *(float *)pTVar3;
                  fVar11 = *(float *)pTVar4;
                  if ((fVar11 < fVar10) ||
                     ((fVar11 <= fVar10 && (*(int *)&pTVar4->field_0x4 < *(int *)&pTVar3->field_0x4)
                      ))) {
                    pTVar4 = pTVar3;
                    fVar11 = fVar10;
                  }
                  fVar10 = *(float *)(pTVar3 + 1);
                  if ((fVar11 < fVar10) ||
                     ((fVar11 <= fVar10 &&
                      (*(int *)&pTVar4->field_0x4 < *(int *)&pTVar3[1].field_0x4)))) {
                    pTVar4 = pTVar3 + 1;
                  }
                  else {
                    fVar10 = *(float *)pTVar4;
                  }
                  fVar11 = *(float *)(pTVar3 + 2);
                  if ((fVar10 < fVar11) ||
                     ((fVar10 <= fVar11 &&
                      (*(int *)&pTVar4->field_0x4 < *(int *)&pTVar3[2].field_0x4)))) {
                    pTVar4 = pTVar3 + 2;
                    fVar10 = fVar11;
                  }
                  if ((fVar10 < *(float *)(pTVar3 + 3)) ||
                     ((fVar10 <= *(float *)(pTVar3 + 3) &&
                      (*(int *)&pTVar4->field_0x4 < *(int *)&pTVar3[3].field_0x4)))) {
                    pTVar4 = pTVar3 + 3;
                  }
                  pTVar3 = pTVar3 + 4;
                } while (pTVar3 <= pTVar6 + -3);
              }
              for (; pTVar3 <= pTVar6; pTVar3 = pTVar3 + 1) {
                if ((*(float *)pTVar4 < *(float *)pTVar3) ||
                   ((*(float *)pTVar4 <= *(float *)pTVar3 &&
                    (*(int *)&pTVar4->field_0x4 < *(int *)&pTVar3->field_0x4)))) {
                  pTVar4 = pTVar3;
                }
              }
            }
            TVar1 = *pTVar4;
            pTVar3 = pTVar6 + -1;
            *pTVar4 = *pTVar6;
            *pTVar6 = TVar1;
            pTVar6 = pTVar3;
          } while (pTVar7 < pTVar3);
        }
        goto LAB_14db35175;
      }
LAB_14db35164:
      HeapSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,_UE::Chaos::ClothAsset::Private::WeldTethers_::__l2::<lambda_1>_>_>
                (pTVar8,iVar2,param_3,param_4);
LAB_14db35175:
      ppTVar5 = ppTVar5 + -3;
    } while (&local_328 <= ppTVar5);
  }
  return;
code_r0x00014db35089:
  if ((*(float *)pTVar8 <= *(float *)pTVar7) &&
     ((*(float *)pTVar8 < *(float *)pTVar7 ||
      (*(int *)&pTVar3[1].field_0x4 <= *(int *)&pTVar7->field_0x4)))) goto LAB_14db35080;
LAB_14db350a7:
  while (pTVar3 = pTVar4, pTVar4 = pTVar3 + -1, pTVar7 < pTVar4) {
    if ((*(float *)pTVar4 < *(float *)pTVar7) ||
       ((*(float *)pTVar4 <= *(float *)pTVar7 &&
        (*(int *)&pTVar3[-1].field_0x4 < *(int *)&pTVar7->field_0x4)))) break;
  }
  if (pTVar8 <= pTVar4) {
    TVar1 = *pTVar8;
    *pTVar8 = *pTVar4;
    *pTVar4 = TVar1;
    goto LAB_14db35080;
  }
  TVar1 = *pTVar7;
  iVar9 = iVar9 + -1;
  *pTVar7 = *pTVar4;
  *pTVar4 = TVar1;
  if ((longlong)((longlong)pTVar4 + (-8 - (longlong)pTVar7) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pTVar6 - (longlong)pTVar8 & 0xfffffffffffffff8U)) {
    if (pTVar8 < pTVar6) {
      *ppTVar5 = pTVar8;
      ppTVar5[1] = pTVar6;
      *(int *)(ppTVar5 + 2) = iVar9;
      ppTVar5 = ppTVar5 + 3;
    }
    if (pTVar4 <= pTVar7 + 1) goto LAB_14db35175;
    pTVar6 = pTVar3 + -2;
    pTVar8 = pTVar7;
  }
  else {
    if (pTVar7 + 1 < pTVar4) {
      *ppTVar5 = pTVar7;
      ppTVar5[1] = pTVar3 + -2;
      *(int *)(ppTVar5 + 2) = iVar9;
      ppTVar5 = ppTVar5 + 3;
    }
    if (pTVar6 <= pTVar8) goto LAB_14db35175;
  }
  iVar2 = (int)((longlong)pTVar6 - (longlong)pTVar8 >> 3) + 1;
  pTVar7 = pTVar8;
  if (iVar9 == 0) goto LAB_14db35164;
  goto LAB_14db35050;
}

// IntroSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,`UE::Chaos::ClothAsset::Private::SplitTethers'::__l38::<lambda_1>_>_> @ 14db352e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,_UE::Chaos::ClothAsset::Private::SplitTethers_::__l38::<lambda_1>_>_>
          (TTuple<float,int> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<float,int>,_void___cdecl_UE::Chaos::ClothAsset::Private::SplitTethers(TMap<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::Chaos::ClothAsset::Private::FSplittingGroup,TSizedDefaultAllocator<32>_>,0>_>_const_&,TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int>,TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int>)_::_38_::<lambda_1>_>
          param_4)

{
  TTuple<float,int> TVar1;
  int iVar2;
  TTuple<float,int> *pTVar3;
  TTuple<float,int> *pTVar4;
  TTuple<float,int> **ppTVar5;
  TTuple<float,int> *pTVar6;
  TTuple<float,int> *pTVar7;
  TTuple<float,int> *pTVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_368 [48];
  int local_338;
  undefined4 uStack_334;
  TTuple<float,int> *local_328;
  TTuple<float,int> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppTVar5 = &local_328;
    do {
      pTVar6 = ppTVar5[1];
      pTVar8 = *ppTVar5;
      local_338 = *(int *)(ppTVar5 + 2);
      uStack_334 = *(undefined4 *)((longlong)ppTVar5 + 0x14);
      iVar2 = (int)((longlong)pTVar6 - (longlong)pTVar8 >> 3) + 1;
      pTVar7 = pTVar8;
      iVar9 = local_338;
      if (local_338 != 0) {
LAB_14db35390:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          TVar1 = pTVar7[iVar2 >> 1];
          pTVar7[iVar2 >> 1] = *pTVar7;
          pTVar4 = pTVar6 + 1;
          *pTVar7 = TVar1;
          pTVar8 = pTVar7;
LAB_14db353c0:
          pTVar3 = pTVar8;
          pTVar8 = pTVar3 + 1;
          if (pTVar8 <= pTVar6) goto code_r0x00014db353c9;
          goto LAB_14db353e7;
        }
        if (pTVar7 < pTVar6) {
          pTVar8 = pTVar7 + 1;
          do {
            pTVar4 = pTVar7;
            if (pTVar8 <= pTVar6) {
              pTVar3 = pTVar8;
              if (0x1f < ((longlong)pTVar6 + (8 - (longlong)pTVar8) & 0xfffffffffffffff8U)) {
                do {
                  fVar10 = *(float *)pTVar3;
                  fVar11 = *(float *)pTVar4;
                  if ((fVar11 < fVar10) ||
                     ((fVar11 <= fVar10 && (*(int *)&pTVar4->field_0x4 < *(int *)&pTVar3->field_0x4)
                      ))) {
                    pTVar4 = pTVar3;
                    fVar11 = fVar10;
                  }
                  fVar10 = *(float *)(pTVar3 + 1);
                  if ((fVar11 < fVar10) ||
                     ((fVar11 <= fVar10 &&
                      (*(int *)&pTVar4->field_0x4 < *(int *)&pTVar3[1].field_0x4)))) {
                    pTVar4 = pTVar3 + 1;
                  }
                  else {
                    fVar10 = *(float *)pTVar4;
                  }
                  fVar11 = *(float *)(pTVar3 + 2);
                  if ((fVar10 < fVar11) ||
                     ((fVar10 <= fVar11 &&
                      (*(int *)&pTVar4->field_0x4 < *(int *)&pTVar3[2].field_0x4)))) {
                    pTVar4 = pTVar3 + 2;
                    fVar10 = fVar11;
                  }
                  if ((fVar10 < *(float *)(pTVar3 + 3)) ||
                     ((fVar10 <= *(float *)(pTVar3 + 3) &&
                      (*(int *)&pTVar4->field_0x4 < *(int *)&pTVar3[3].field_0x4)))) {
                    pTVar4 = pTVar3 + 3;
                  }
                  pTVar3 = pTVar3 + 4;
                } while (pTVar3 <= pTVar6 + -3);
              }
              for (; pTVar3 <= pTVar6; pTVar3 = pTVar3 + 1) {
                if ((*(float *)pTVar4 < *(float *)pTVar3) ||
                   ((*(float *)pTVar4 <= *(float *)pTVar3 &&
                    (*(int *)&pTVar4->field_0x4 < *(int *)&pTVar3->field_0x4)))) {
                  pTVar4 = pTVar3;
                }
              }
            }
            TVar1 = *pTVar4;
            pTVar3 = pTVar6 + -1;
            *pTVar4 = *pTVar6;
            *pTVar6 = TVar1;
            pTVar6 = pTVar3;
          } while (pTVar7 < pTVar3);
        }
        goto LAB_14db354b5;
      }
LAB_14db354a4:
      HeapSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,_UE::Chaos::ClothAsset::Private::SplitTethers_::__l38::<lambda_1>_>_>
                (pTVar8,iVar2,param_3,param_4);
LAB_14db354b5:
      ppTVar5 = ppTVar5 + -3;
    } while (&local_328 <= ppTVar5);
  }
  return;
code_r0x00014db353c9:
  if ((*(float *)pTVar8 <= *(float *)pTVar7) &&
     ((*(float *)pTVar8 < *(float *)pTVar7 ||
      (*(int *)&pTVar3[1].field_0x4 <= *(int *)&pTVar7->field_0x4)))) goto LAB_14db353c0;
LAB_14db353e7:
  while (pTVar3 = pTVar4, pTVar4 = pTVar3 + -1, pTVar7 < pTVar4) {
    if ((*(float *)pTVar4 < *(float *)pTVar7) ||
       ((*(float *)pTVar4 <= *(float *)pTVar7 &&
        (*(int *)&pTVar3[-1].field_0x4 < *(int *)&pTVar7->field_0x4)))) break;
  }
  if (pTVar8 <= pTVar4) {
    TVar1 = *pTVar8;
    *pTVar8 = *pTVar4;
    *pTVar4 = TVar1;
    goto LAB_14db353c0;
  }
  TVar1 = *pTVar7;
  iVar9 = iVar9 + -1;
  *pTVar7 = *pTVar4;
  *pTVar4 = TVar1;
  if ((longlong)((longlong)pTVar4 + (-8 - (longlong)pTVar7) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pTVar6 - (longlong)pTVar8 & 0xfffffffffffffff8U)) {
    if (pTVar8 < pTVar6) {
      *ppTVar5 = pTVar8;
      ppTVar5[1] = pTVar6;
      *(int *)(ppTVar5 + 2) = iVar9;
      ppTVar5 = ppTVar5 + 3;
    }
    if (pTVar4 <= pTVar7 + 1) goto LAB_14db354b5;
    pTVar6 = pTVar3 + -2;
    pTVar8 = pTVar7;
  }
  else {
    if (pTVar7 + 1 < pTVar4) {
      *ppTVar5 = pTVar7;
      ppTVar5[1] = pTVar3 + -2;
      *(int *)(ppTVar5 + 2) = iVar9;
      ppTVar5 = ppTVar5 + 3;
    }
    if (pTVar6 <= pTVar8) goto LAB_14db354b5;
  }
  iVar2 = (int)((longlong)pTVar6 - (longlong)pTVar8 >> 3) + 1;
  pTVar7 = pTVar8;
  if (iVar9 == 0) goto LAB_14db354a4;
  goto LAB_14db35390;
}

// IntroSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,`UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize'::__l18::<lambda_2>_>_> @ 14db35620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,_UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize_::__l18::<lambda_2>_>_>
          (TTuple<float,int> *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<TTuple<float,int>,_public:_void___cdecl_UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize(TArrayView<UE::Math::TIntVector2<int>_const_,int>)_::_18_::<lambda_2>_>
          param_4)

{
  TTuple<float,int> TVar1;
  int iVar2;
  TTuple<float,int> *pTVar3;
  TTuple<float,int> *pTVar4;
  TTuple<float,int> **ppTVar5;
  TTuple<float,int> *pTVar6;
  TTuple<float,int> *pTVar7;
  TTuple<float,int> *pTVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_368 [48];
  int local_338;
  undefined4 uStack_334;
  TTuple<float,int> *local_328;
  TTuple<float,int> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppTVar5 = &local_328;
    do {
      pTVar6 = ppTVar5[1];
      pTVar8 = *ppTVar5;
      local_338 = *(int *)(ppTVar5 + 2);
      uStack_334 = *(undefined4 *)((longlong)ppTVar5 + 0x14);
      iVar2 = (int)((longlong)pTVar6 - (longlong)pTVar8 >> 3) + 1;
      pTVar7 = pTVar8;
      iVar9 = local_338;
      if (local_338 != 0) {
LAB_14db356d0:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          TVar1 = pTVar7[iVar2 >> 1];
          pTVar7[iVar2 >> 1] = *pTVar7;
          pTVar4 = pTVar6 + 1;
          *pTVar7 = TVar1;
          pTVar8 = pTVar7;
LAB_14db35700:
          pTVar3 = pTVar8;
          pTVar8 = pTVar3 + 1;
          if (pTVar8 <= pTVar6) goto code_r0x00014db35709;
          goto LAB_14db35727;
        }
        if (pTVar7 < pTVar6) {
          pTVar8 = pTVar7 + 1;
          do {
            pTVar4 = pTVar7;
            if (pTVar8 <= pTVar6) {
              pTVar3 = pTVar8;
              if (0x1f < ((longlong)pTVar6 + (8 - (longlong)pTVar8) & 0xfffffffffffffff8U)) {
                do {
                  fVar10 = *(float *)pTVar4;
                  fVar11 = *(float *)pTVar3;
                  if ((fVar11 < fVar10) ||
                     ((fVar11 <= fVar10 && (*(int *)&pTVar3->field_0x4 < *(int *)&pTVar4->field_0x4)
                      ))) {
                    pTVar4 = pTVar3;
                    fVar10 = fVar11;
                  }
                  fVar11 = *(float *)(pTVar3 + 1);
                  if ((fVar11 < fVar10) ||
                     ((fVar11 <= fVar10 &&
                      (*(int *)&pTVar3[1].field_0x4 < *(int *)&pTVar4->field_0x4)))) {
                    pTVar4 = pTVar3 + 1;
                  }
                  else {
                    fVar11 = *(float *)pTVar4;
                  }
                  fVar10 = *(float *)(pTVar3 + 2);
                  if ((fVar10 < fVar11) ||
                     ((fVar10 <= fVar11 &&
                      (*(int *)&pTVar3[2].field_0x4 < *(int *)&pTVar4->field_0x4)))) {
                    pTVar4 = pTVar3 + 2;
                    fVar11 = fVar10;
                  }
                  if ((*(float *)(pTVar3 + 3) < fVar11) ||
                     ((*(float *)(pTVar3 + 3) <= fVar11 &&
                      (*(int *)&pTVar3[3].field_0x4 < *(int *)&pTVar4->field_0x4)))) {
                    pTVar4 = pTVar3 + 3;
                  }
                  pTVar3 = pTVar3 + 4;
                } while (pTVar3 <= pTVar6 + -3);
              }
              for (; pTVar3 <= pTVar6; pTVar3 = pTVar3 + 1) {
                if ((*(float *)pTVar3 < *(float *)pTVar4) ||
                   ((*(float *)pTVar3 <= *(float *)pTVar4 &&
                    (*(int *)&pTVar3->field_0x4 < *(int *)&pTVar4->field_0x4)))) {
                  pTVar4 = pTVar3;
                }
              }
            }
            TVar1 = *pTVar4;
            pTVar3 = pTVar6 + -1;
            *pTVar4 = *pTVar6;
            *pTVar6 = TVar1;
            pTVar6 = pTVar3;
          } while (pTVar7 < pTVar3);
        }
        goto LAB_14db357f5;
      }
LAB_14db357e4:
      HeapSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,_UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize_::__l18::<lambda_2>_>_>
                (pTVar8,iVar2,param_3,param_4);
LAB_14db357f5:
      ppTVar5 = ppTVar5 + -3;
    } while (&local_328 <= ppTVar5);
  }
  return;
code_r0x00014db35709:
  if ((*(float *)pTVar7 <= *(float *)pTVar8) &&
     ((*(float *)pTVar7 < *(float *)pTVar8 ||
      (*(int *)&pTVar7->field_0x4 <= *(int *)&pTVar3[1].field_0x4)))) goto LAB_14db35700;
LAB_14db35727:
  while (pTVar3 = pTVar4, pTVar4 = pTVar3 + -1, pTVar7 < pTVar4) {
    if ((*(float *)pTVar7 < *(float *)pTVar4) ||
       ((*(float *)pTVar7 <= *(float *)pTVar4 &&
        (*(int *)&pTVar7->field_0x4 < *(int *)&pTVar3[-1].field_0x4)))) break;
  }
  if (pTVar8 <= pTVar4) {
    TVar1 = *pTVar8;
    *pTVar8 = *pTVar4;
    *pTVar4 = TVar1;
    goto LAB_14db35700;
  }
  TVar1 = *pTVar7;
  iVar9 = iVar9 + -1;
  *pTVar7 = *pTVar4;
  *pTVar4 = TVar1;
  if ((longlong)((longlong)pTVar4 + (-8 - (longlong)pTVar7) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pTVar6 - (longlong)pTVar8 & 0xfffffffffffffff8U)) {
    if (pTVar8 < pTVar6) {
      *ppTVar5 = pTVar8;
      ppTVar5[1] = pTVar6;
      *(int *)(ppTVar5 + 2) = iVar9;
      ppTVar5 = ppTVar5 + 3;
    }
    if (pTVar4 <= pTVar7 + 1) goto LAB_14db357f5;
    pTVar6 = pTVar3 + -2;
    pTVar8 = pTVar7;
  }
  else {
    if (pTVar7 + 1 < pTVar4) {
      *ppTVar5 = pTVar7;
      ppTVar5[1] = pTVar3 + -2;
      *(int *)(ppTVar5 + 2) = iVar9;
      ppTVar5 = ppTVar5 + 3;
    }
    if (pTVar6 <= pTVar8) goto LAB_14db357f5;
  }
  iVar2 = (int)((longlong)pTVar6 - (longlong)pTVar8 >> 3) + 1;
  pTVar7 = pTVar8;
  if (iVar9 == 0) goto LAB_14db357e4;
  goto LAB_14db356d0;
}

// Reverse<UE::Math::TIntVector2<int>_> @ 14db35c60

void __cdecl AlgoImpl::Reverse<UE::Math::TIntVector2<int>_>(TIntVector2<int> *param_1,int param_2)

{
  TIntVector2<int>_u_0 TVar1;
  TIntVector2<int>_u_0 *pTVar2;
  longlong lVar3;
  
  if (0 < param_2 / 2) {
    lVar3 = 0;
    pTVar2 = &param_1[param_2 + -1].field0_0x0;
    do {
      TVar1 = param_1[lVar3].field0_0x0;
      param_1[lVar3].field0_0x0 = *pTVar2;
      lVar3 = lVar3 + 1;
      *pTVar2 = TVar1;
      pTVar2 = pTVar2 + -1;
    } while (lVar3 < param_2 / 2);
  }
  return;
}

// WeldIndexAndFloatArrays<1,12,`UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize'::__l2::<lambda_1>_> @ 14db37270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Chaos::ClothAsset::Private::
WeldIndexAndFloatArrays<1,12,_UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize_::__l2::<lambda_1>_>
          (TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
           *param_1,TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *param_2,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *param_3,<lambda_1> param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar7;
  longlong *plVar8;
  TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
  *pTVar9;
  bool bVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  ForElementType<FSetElementId> FVar16;
  FIdentityFunctor FVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  int iVar22;
  ForElementType<unsigned_int> FVar23;
  int iVar24;
  uint *puVar25;
  int *piVar26;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar27;
  ForElementType<unsigned_int> FVar28;
  uint uVar29;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar30;
  int *piVar31;
  float fVar32;
  <lambda_1> local_res20 [8];
  undefined1 auStackY_2c8 [32];
  FIdentityFunctor local_278;
  undefined1 local_277 [3];
  float local_274;
  TArray<int,TSizedDefaultAllocator<32>_> *local_270;
  ForAnyElementType local_268;
  undefined8 local_260;
  TArray<float,TSizedDefaultAllocator<32>_> *local_258;
  int *local_250;
  longlong *local_248;
  uint uStack_240;
  uint uStack_23c;
  ForElementType<unsigned_int> local_238;
  undefined4 uStack_230;
  uint uStack_22c;
  uint local_228;
  undefined4 uStack_224;
  int iStack_220;
  undefined4 uStack_21c;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *local_218;
  int *local_210;
  int local_208 [2];
  ForElementType<unsigned_int> local_200;
  int *local_1f8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *local_1f0;
  longlong *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
  *local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b8;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  FScriptContainerElement *local_188;
  longlong *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  undefined4 local_134;
  undefined4 local_114;
  undefined4 local_f4;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  ulonglong local_98;
  
  fVar6 = __real_3f800000;
  fVar5 = __real_322bcc77;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  iVar19 = *(int *)&param_1->field_0x28;
  TStack_1b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  iVar24 = 0;
  uVar11 = 1;
  iVar22 = iVar24;
  TStack_1b8.CurrentBitIndex = 0;
  if (iVar19 != 0) {
    puVar25 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar25 = (uint *)TStack_1b8.Array;
    }
    uVar18 = *puVar25;
    iVar22 = 0;
    iVar24 = 0;
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar24;
      iVar22 = iVar22 + 0x20;
      iVar24 = iVar24 + 1;
      TStack_1b8.CurrentBitIndex = iVar19;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_14db37333;
      uVar18 = puVar25[lVar13 + 1];
    }
    uVar11 = -uVar18 & uVar18;
    uVar12 = (ulonglong)uVar11 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_198 = (int)lVar13;
    TStack_1b8.CurrentBitIndex = local_198 + -1 + iVar22;
    if (iVar19 < TStack_1b8.CurrentBitIndex) {
      TStack_1b8.CurrentBitIndex = iVar19;
    }
  }
LAB_14db37333:
  TStack_1b8._padding_ = CONCAT44(uVar11,iVar24);
  TStack_1b8.UnvisitedBitMask = 0xffffffff;
  TStack_1b8._28_4_ = local_134;
  TStack_1b8.BaseBitIndex = iVar22;
  if (TStack_1b8.CurrentBitIndex < iVar19) {
    local_1f8 = &param_3->ArrayNum;
    piVar26 = local_1f8;
    local_res20[0] = param_4;
    local_218 = param_3;
    local_1f0 = param_2;
    local_1c0 = param_1;
    do {
      uStack_23c = 1;
      local_e8._0_8_ = 0;
      uStack_240 = 0;
      local_e8._8_8_ = 0;
      local_c8 = (uint *)0x0;
      local_c0 = 0;
      lVar20 = (longlong)TStack_1b8.CurrentBitIndex * 0x60;
      local_bc = 0x80;
      local_b8 = 0xffffffff;
      local_b4 = 0;
      local_a8 = (ForElementType<FSetElementId>)0x0;
      local_a0 = 0;
      lVar13 = *(longlong *)local_1c0;
      FVar28 = (ForElementType<unsigned_int>)(lVar13 + 0x18 + lVar20);
      local_210 = (int *)(lVar13 + 8 + lVar20);
      uVar11 = *(int *)((longlong)FVar28 + 0x18);
      uStack_22c = uStack_240;
      local_228 = uStack_240;
      if (uVar11 != 0) {
        FVar23 = FVar28;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar28 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar23 = *(ForElementType<unsigned_int> *)((longlong)FVar28 + 0x10);
        }
        uVar18 = *(uint *)FVar23;
        local_228 = 0;
        uStack_240 = 0;
        while (uVar18 == 0) {
          lVar14 = (longlong)(int)uStack_240;
          local_228 = local_228 + 0x20;
          uStack_240 = uStack_240 + 1;
          uStack_22c = uVar11;
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_240)
          goto LAB_14db374cf;
          uVar18 = ((uint *)((longlong)FVar23 + 4))[lVar14];
        }
        uStack_23c = -uVar18 & uVar18;
        uVar12 = (ulonglong)uStack_23c * 2 + 1;
        lVar14 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_194 = (int)lVar14;
        uStack_22c = (local_228 - 1) + local_194;
        if ((int)uVar11 < (int)uStack_22c) {
          uStack_22c = uVar11;
        }
      }
LAB_14db374cf:
      local_248 = (longlong *)(lVar13 + 8 + lVar20);
      uVar18 = *(uint *)(lVar20 + 0x30 + lVar13);
      uStack_224 = local_114;
      iStack_220 = *(int *)(lVar20 + 0x10 + lVar13) - *(int *)(lVar20 + 0x3c + lVar13);
      TStack_178._padding_ = CONCAT44(uStack_23c,uStack_240);
      uVar29 = uVar18 & 0xffffffe0;
      uStack_230 = 0xffffffff;
      TStack_178.CurrentBitIndex = uStack_22c;
      TStack_178.UnvisitedBitMask = 0xffffffff;
      iVar19 = (int)uVar18 >> 5;
      TStack_178._28_4_ = local_114;
      TStack_178.BaseBitIndex = local_228;
      uStack_158 = CONCAT44(uStack_21c,iStack_220);
      local_238 = FVar28;
      local_200 = FVar28;
      local_180 = local_248;
      TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar28;
      local_270._0_4_ = uVar18;
      if ((((int)uVar18 < 0) || ((int)uVar11 < (int)uVar18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar11 = *(uint *)((longlong)FVar28 + 0x18);
      if (uVar18 != uVar11) {
        FVar23 = FVar28;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar28 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar23 = *(ForElementType<unsigned_int> *)((longlong)FVar28 + 0x10);
        }
        uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)((longlong)FVar23 + (longlong)iVar19 * 4);
        while (uVar18 == 0) {
          lVar13 = (longlong)iVar19;
          uVar29 = uVar29 + 0x20;
          iVar19 = iVar19 + 1;
          uVar18 = uVar11;
          local_270._0_4_ = uVar11;
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
          goto LAB_14db37600;
          uVar18 = ((uint *)((longlong)FVar23 + 4))[lVar13];
        }
        uVar12 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_190 = (int)lVar13;
        uVar18 = local_190 + -1 + uVar29;
        local_270._0_4_ = uVar18;
        if ((int)uVar11 < (int)uVar18) {
          uVar18 = uVar11;
          local_270._0_4_ = uVar11;
        }
      }
LAB_14db37600:
      while( true ) {
        plVar8 = local_180;
        if ((int)local_180[1] - *(int *)((longlong)local_180 + 0x34) != (int)uStack_158) {
          local_278 = (FIdentityFunctor)0x0;
          `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_278);
        }
        iVar19 = TStack_1b8.CurrentBitIndex;
        pTVar9 = local_1c0;
        pTVar7 = local_1f0;
        FVar17 = local_278;
        lVar13 = (longlong)TStack_178.CurrentBitIndex;
        if (((TStack_178.CurrentBitIndex == uVar18) &&
            ((ForElementType<unsigned_int>)TStack_178.Array == FVar28)) &&
           (plVar8 == (longlong *)local_210)) break;
        pTVar30 = (TArray<float,TSizedDefaultAllocator<32>_> *)*plVar8;
        uVar11 = *(uint *)&pTVar30[lVar13].AllocatorInstance.Data;
        uVar18 = 0;
        if ((int)uVar11 < local_1f0->ArrayNum) {
          uVar18 = ~uVar11 >> 0x1f;
        }
        local_258 = pTVar30;
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar18 = *(uint *)&pTVar30[lVar13].AllocatorInstance.Data;
        pTVar27 = pTVar7->DataPtr + (int)uVar11;
        uVar11 = 0;
        if ((int)uVar18 < *local_1f8) {
          uVar11 = ~uVar18 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar30 = local_218->DataPtr + (int)uVar18;
        if ((pTVar27->ArrayNum != pTVar30->ArrayNum) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Indices.Num() == Floats.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                                ,0xa8,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar19 = pTVar27->ArrayNum;
        uVar11 = 0;
        lVar20 = 0;
        if (0 < iVar19) {
          do {
            uVar18 = 0;
            if ((int)uVar11 < iVar19) {
              uVar18 = ~uVar11 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar15 = (pTVar27->AllocatorInstance).Data;
            uVar18 = *(uint *)(pFVar15 + lVar20 * 4);
            if (local_e8._8_4_ != local_b4) {
              FVar16 = (ForElementType<FSetElementId>)local_b0;
              if (local_a8 != (ForElementType<FSetElementId>)0x0) {
                FVar16 = local_a8;
              }
              iVar19 = *(int *)((longlong)FVar16 + (ulonglong)(local_a0 - 1U & uVar18) * 4);
              while (iVar19 != -1) {
                lVar14 = local_e8._0_8_ + (longlong)iVar19 * 0x14;
                if (*(uint *)(local_e8._0_8_ + (longlong)iVar19 * 0x14) == uVar18) {
                  if (lVar14 != 0) goto LAB_14db3782a;
                  break;
                }
                iVar19 = *(int *)(lVar14 + 0xc);
              }
            }
            local_188 = pFVar15 + lVar20 * 4;
            TSet<TTuple<int,TTuple<float,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<float,int>,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                      ((TSet<TTuple<int,TTuple<float,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<float,int>,0>,FDefaultSetAllocator>
                        *)local_e8,(uint)local_208,(TKeyInitializer<int_const_&> *)(ulonglong)uVar18
                       ,(bool *)&local_188);
            lVar14 = local_e8._0_8_ + (longlong)local_208[0] * 0x14;
LAB_14db3782a:
            uVar18 = 0;
            if ((int)uVar11 < pTVar30->ArrayNum) {
              uVar18 = ~uVar11 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar11 = uVar11 + 1;
            lVar2 = lVar20 * 4;
            lVar20 = lVar20 + 1;
            *(float *)(lVar14 + 4) =
                 (float)*(int *)((longlong)&local_258[lVar13].AllocatorInstance.Data + 4) *
                 *(float *)((pTVar30->AllocatorInstance).Data + lVar2) + *(float *)(lVar14 + 4);
            *(int *)(lVar14 + 8) =
                 *(int *)(lVar14 + 8) +
                 *(int *)((longlong)&local_258[lVar13].AllocatorInstance.Data + 4);
            iVar19 = pTVar27->ArrayNum;
          } while ((int)uVar11 < iVar19);
        }
        TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
        piVar26 = local_1f8;
        FVar28 = local_200;
        uVar18 = (uint)local_270;
      }
      uVar11 = *(uint *)((longlong)TStack_1b8.CurrentBitIndex * 0x60 + *(longlong *)local_1c0);
      uVar18 = 0;
      if ((int)uVar11 < local_1f0->ArrayNum) {
        uVar18 = ~uVar11 >> 0x1f;
      }
      local_210 = piVar26;
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar18 = 0;
      local_270 = pTVar7->DataPtr + (int)uVar11;
      uVar11 = *(uint *)((longlong)iVar19 * 0x60 + *(longlong *)pTVar9);
      uVar29 = uVar18;
      if ((int)uVar11 < *piVar26) {
        uVar29 = ~uVar11 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar30 = local_218->DataPtr + (int)uVar11;
      uVar11 = local_e8._8_4_ - local_b4;
      local_258 = pTVar30;
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      piVar26 = &local_270->ArrayMax;
      local_270->ArrayNum = 0;
      if (local_270->ArrayMax < (int)uVar11) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar11,&local_270->AllocatorInstance,0,piVar26);
      }
      uVar11 = local_e8._8_4_ - local_b4;
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      FVar28 = (ForElementType<unsigned_int>)&pTVar30->ArrayMax;
      piVar31 = &pTVar30->ArrayNum;
      *piVar31 = 0;
      local_250 = piVar31;
      local_200 = FVar28;
      if (pTVar30->ArrayMax < (int)uVar11) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar11,&pTVar30->AllocatorInstance,0,(int *)FVar28);
      }
      pTVar27 = local_270;
      fVar32 = 0.0;
      uStack_23c = 1;
      uVar11 = uVar18;
      local_228 = uVar18;
      if (local_c0 != 0) {
        puVar25 = (uint *)(local_e8 + 0x10);
        if (local_c8 != (uint *)0x0) {
          puVar25 = local_c8;
        }
        uVar11 = *puVar25;
        while (uVar11 == 0) {
          lVar13 = (longlong)(int)uVar18;
          local_228 = local_228 + 0x20;
          uVar18 = uVar18 + 1;
          uVar11 = local_c0;
          if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
          goto LAB_14db37acf;
          uVar11 = puVar25[lVar13 + 1];
        }
        uStack_23c = -uVar11 & uVar11;
        uVar12 = (ulonglong)uStack_23c * 2 + 1;
        lVar13 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_18c = (int)lVar13;
        uVar11 = local_18c + -1 + local_228;
        if ((int)local_c0 < (int)uVar11) {
          uVar11 = local_c0;
        }
      }
LAB_14db37acf:
      local_248 = (longlong *)local_e8;
      local_238 = (ForElementType<unsigned_int>)(local_e8 + 0x10);
      uStack_230 = 0xffffffff;
      uStack_224 = local_f4;
      TStack_1e0._padding_ = CONCAT44(uStack_23c,uVar18);
      TStack_1e0.CurrentBitIndex = uVar11;
      TStack_1e0.UnvisitedBitMask = 0xffffffff;
      TStack_1e0._28_4_ = local_f4;
      TStack_1e0.BaseBitIndex = local_228;
      uStack_240 = uVar18;
      uStack_22c = uVar11;
      local_1e8 = local_248;
      TStack_1e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_238;
      if ((int)uVar11 < (int)local_c0) {
        do {
          plVar8 = local_1e8;
          if ((*(int *)(*local_1e8 + 8 + (longlong)(int)uVar11 * 0x14) < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("WeldedDataIter.Value().Get<1>() > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                                  ,0xb7,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar15 = (FScriptContainerElement *)
                    (*plVar8 + (longlong)TStack_1e0.CurrentBitIndex * 0x14);
          pFVar21 = (pTVar27->AllocatorInstance).Data;
          if (((pFVar21 <= pFVar15) && (pFVar15 < pFVar21 + (longlong)*piVar26 * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar19 = pTVar27->ArrayNum;
          if (iVar19 == *piVar26) {
            iVar19 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar27->AllocatorInstance,piVar26);
          }
          pTVar27->ArrayNum = iVar19 + 1;
          *(undefined4 *)((pTVar27->AllocatorInstance).Data + (longlong)iVar19 * 4) =
               *(undefined4 *)pFVar15;
          pFVar15 = (pTVar30->AllocatorInstance).Data;
          lVar13 = *plVar8;
          local_274 = *(float *)(lVar13 + 4 + (longlong)TStack_1e0.CurrentBitIndex * 0x14) /
                      (float)*(int *)(lVar13 + 8 + (longlong)TStack_1e0.CurrentBitIndex * 0x14);
          if (((pFVar15 <= (FScriptContainerElement *)&local_274) &&
              ((FScriptContainerElement *)&local_274 < pFVar15 + (longlong)*(int *)FVar28 * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar19 = *piVar31;
          if (iVar19 == *(int *)FVar28) {
            iVar19 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar30->AllocatorInstance,(int *)FVar28);
          }
          *piVar31 = iVar19 + 1;
          *(float *)((pTVar30->AllocatorInstance).Data + (longlong)iVar19 * 4) = local_274;
          fVar32 = fVar32 + local_274;
          TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
          FVar17 = local_278;
          uVar11 = TStack_1e0.CurrentBitIndex;
        } while (TStack_1e0.CurrentBitIndex < (TStack_1e0.Array)->NumBits);
      }
      pTVar27 = local_270;
      uVar11 = 0;
      if (0xc < local_270->ArrayNum) {
        local_268.Data = (FScriptContainerElement *)0x0;
        local_260 = 0;
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,local_270->ArrayNum,&local_268,0,(int *)((longlong)&local_260 + 4));
        pTVar30 = local_258;
        iVar19 = pTVar27->ArrayNum;
        lVar13 = 0;
        if (0 < iVar19) {
          do {
            uVar18 = 0;
            if ((int)uVar11 < iVar19) {
              uVar18 = ~uVar11 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar15 = (pTVar27->AllocatorInstance).Data;
            uVar18 = 0;
            if ((int)uVar11 < pTVar30->ArrayNum) {
              uVar18 = ~uVar11 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar21 = (pTVar30->AllocatorInstance).Data;
            iVar19 = (int)local_260;
            if ((int)local_260 == local_260._4_4_) {
              iVar19 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&local_268,(int *)((longlong)&local_260 + 4));
            }
            local_260 = CONCAT44(local_260._4_4_,iVar19 + 1);
            uVar11 = uVar11 + 1;
            *(undefined4 *)(local_268.Data + (longlong)iVar19 * 8) =
                 *(undefined4 *)(pFVar21 + lVar13 * 4);
            lVar20 = lVar13 * 4;
            lVar13 = lVar13 + 1;
            *(undefined4 *)(local_268.Data + (longlong)iVar19 * 8 + 4) =
                 *(undefined4 *)(pFVar15 + lVar20);
            iVar19 = pTVar27->ArrayNum;
            FVar28 = local_200;
            piVar31 = local_250;
            FVar17 = local_278;
          } while ((int)uVar11 < iVar19);
        }
        AlgoImpl::
        IntroSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,_UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize_::__l2::<lambda_1>_>_>
                  ((TTuple<float,int> *)local_268.Data,(int)local_260,FVar17,local_res20);
        pTVar27 = local_270;
        iVar19 = local_270->ArrayNum;
        piVar1 = &local_270->ArrayNum;
        if (iVar19 < 0xc) {
          iVar22 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,0xc - iVar19,&local_270->AllocatorInstance,piVar1,piVar26);
          memset((pTVar27->AllocatorInstance).Data + (longlong)iVar22 * 4,0,
                 (longlong)(0xc - iVar19) << 2);
        }
        else if (0xc < iVar19) {
          iVar19 = iVar19 + -0xc;
          if (iVar19 < 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          else if (iVar19 == 0) goto LAB_14db37f35;
          pFVar15 = (pTVar27->AllocatorInstance).Data + 0x30;
          iVar22 = (*piVar1 - iVar19) + -0xc;
          if (iVar22 != 0) {
            memmove(pFVar15,pFVar15 + (longlong)iVar19 * 4,(longlong)iVar22 << 2);
          }
          *piVar1 = *piVar1 - iVar19;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar27->AllocatorInstance,*piVar1,piVar26);
        }
LAB_14db37f35:
        pTVar30 = local_258;
        iVar19 = *piVar31;
        if (iVar19 < 0xc) {
          iVar22 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,0xc - iVar19,&local_258->AllocatorInstance,piVar31,(int *)FVar28);
          memset((pTVar30->AllocatorInstance).Data + (longlong)iVar22 * 4,0,
                 (longlong)(0xc - iVar19) << 2);
        }
        else if (0xc < iVar19) {
          iVar19 = iVar19 + -0xc;
          if (iVar19 < 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          else if (iVar19 == 0) goto LAB_14db38012;
          pTVar30 = local_258;
          pFVar15 = (local_258->AllocatorInstance).Data + 0x30;
          iVar22 = (*piVar31 - iVar19) + -0xc;
          if (iVar22 != 0) {
            memmove(pFVar15,pFVar15 + (longlong)iVar19 * 4,(longlong)iVar22 << 2);
          }
          *piVar31 = *piVar31 - iVar19;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar30->AllocatorInstance,*piVar31,(int *)FVar28);
        }
LAB_14db38012:
        piVar31 = local_250;
        pTVar27 = local_270;
        uVar12 = local_260 & 0xffffffff;
        iVar19 = 0;
        lVar20 = 0;
        lVar13 = 0;
        fVar32 = 0.0;
        do {
          if (((int)uVar12 <= iVar19) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar3 = *(undefined4 *)(local_268.Data + lVar20 + 4);
          if ((pTVar27->ArrayNum <= iVar19) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(undefined4 *)((pTVar27->AllocatorInstance).Data + lVar13) = uVar3;
          if (((int)local_260 <= iVar19) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar3 = *(undefined4 *)(local_268.Data + lVar20);
          if ((*piVar31 <= iVar19) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar30 = local_258;
          *(undefined4 *)((local_258->AllocatorInstance).Data + lVar13) = uVar3;
          uVar12 = (ulonglong)(int)local_260;
          if ((int)local_260 <= iVar19) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar12 = local_260 & 0xffffffff;
          }
          iVar19 = iVar19 + 1;
          lVar13 = lVar13 + 4;
          fVar32 = fVar32 + *(float *)(local_268.Data + lVar20);
          lVar20 = lVar20 + 8;
        } while (iVar19 < 0xc);
        if ((TTuple<float,int> *)local_268.Data != (TTuple<float,int> *)0x0) {
          FMemory::Free(local_268.Data);
        }
      }
      if (fVar32 <= fVar5) {
        fVar32 = 0.0;
      }
      else {
        fVar32 = fVar6 / fVar32;
      }
      pFVar21 = (pTVar30->AllocatorInstance).Data;
      iVar19 = *piVar31;
      pFVar15 = pFVar21 + (longlong)iVar19 * 4;
      while( true ) {
        if (*piVar31 != iVar19) {
          local_277[0] = 0;
          `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_277);
        }
        if (pFVar21 == pFVar15) break;
        *(float *)pFVar21 = fVar32 * *(float *)pFVar21;
        pFVar21 = pFVar21 + 4;
      }
      local_a0 = 0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TTuple<float,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TTuple<float,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,TTuple<float,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
      TStack_1b8.UnvisitedBitMask = TStack_1b8.UnvisitedBitMask & ~TStack_1b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b8);
      piVar26 = local_210;
    } while (TStack_1b8.CurrentBitIndex < (TStack_1b8.Array)->NumBits);
  }
  return;
}

// WeldIndexAndFloatArrays<1,12,`UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize'::__l18::<lambda_2>_> @ 14db382b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Chaos::ClothAsset::Private::
WeldIndexAndFloatArrays<1,12,_UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize_::__l18::<lambda_2>_>
          (TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
           *param_1,TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *param_2,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *param_3,<lambda_2> param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar7;
  longlong *plVar8;
  TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
  *pTVar9;
  bool bVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  ForElementType<FSetElementId> FVar16;
  FIdentityFunctor FVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  int iVar22;
  ForElementType<unsigned_int> FVar23;
  int iVar24;
  uint *puVar25;
  int *piVar26;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar27;
  ForElementType<unsigned_int> FVar28;
  uint uVar29;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar30;
  int *piVar31;
  float fVar32;
  <lambda_2> local_res20 [8];
  undefined1 auStackY_2c8 [32];
  FIdentityFunctor local_278;
  undefined1 local_277 [3];
  float local_274;
  TArray<int,TSizedDefaultAllocator<32>_> *local_270;
  ForAnyElementType local_268;
  undefined8 local_260;
  TArray<float,TSizedDefaultAllocator<32>_> *local_258;
  int *local_250;
  longlong *local_248;
  uint uStack_240;
  uint uStack_23c;
  ForElementType<unsigned_int> local_238;
  undefined4 uStack_230;
  uint uStack_22c;
  uint local_228;
  undefined4 uStack_224;
  int iStack_220;
  undefined4 uStack_21c;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *local_218;
  int *local_210;
  int local_208 [2];
  ForElementType<unsigned_int> local_200;
  int *local_1f8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *local_1f0;
  longlong *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
  *local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b8;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  FScriptContainerElement *local_188;
  longlong *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  undefined4 local_134;
  undefined4 local_114;
  undefined4 local_f4;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  ulonglong local_98;
  
  fVar6 = __real_3f800000;
  fVar5 = __real_322bcc77;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  iVar19 = *(int *)&param_1->field_0x28;
  TStack_1b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  iVar24 = 0;
  uVar11 = 1;
  iVar22 = iVar24;
  TStack_1b8.CurrentBitIndex = 0;
  if (iVar19 != 0) {
    puVar25 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar25 = (uint *)TStack_1b8.Array;
    }
    uVar18 = *puVar25;
    iVar22 = 0;
    iVar24 = 0;
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar24;
      iVar22 = iVar22 + 0x20;
      iVar24 = iVar24 + 1;
      TStack_1b8.CurrentBitIndex = iVar19;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_14db38373;
      uVar18 = puVar25[lVar13 + 1];
    }
    uVar11 = -uVar18 & uVar18;
    uVar12 = (ulonglong)uVar11 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_198 = (int)lVar13;
    TStack_1b8.CurrentBitIndex = local_198 + -1 + iVar22;
    if (iVar19 < TStack_1b8.CurrentBitIndex) {
      TStack_1b8.CurrentBitIndex = iVar19;
    }
  }
LAB_14db38373:
  TStack_1b8._padding_ = CONCAT44(uVar11,iVar24);
  TStack_1b8.UnvisitedBitMask = 0xffffffff;
  TStack_1b8._28_4_ = local_134;
  TStack_1b8.BaseBitIndex = iVar22;
  if (TStack_1b8.CurrentBitIndex < iVar19) {
    local_1f8 = &param_3->ArrayNum;
    piVar26 = local_1f8;
    local_res20[0] = param_4;
    local_218 = param_3;
    local_1f0 = param_2;
    local_1c0 = param_1;
    do {
      uStack_23c = 1;
      local_e8._0_8_ = 0;
      uStack_240 = 0;
      local_e8._8_8_ = 0;
      local_c8 = (uint *)0x0;
      local_c0 = 0;
      lVar20 = (longlong)TStack_1b8.CurrentBitIndex * 0x60;
      local_bc = 0x80;
      local_b8 = 0xffffffff;
      local_b4 = 0;
      local_a8 = (ForElementType<FSetElementId>)0x0;
      local_a0 = 0;
      lVar13 = *(longlong *)local_1c0;
      FVar28 = (ForElementType<unsigned_int>)(lVar13 + 0x18 + lVar20);
      local_210 = (int *)(lVar13 + 8 + lVar20);
      uVar11 = *(int *)((longlong)FVar28 + 0x18);
      uStack_22c = uStack_240;
      local_228 = uStack_240;
      if (uVar11 != 0) {
        FVar23 = FVar28;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar28 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar23 = *(ForElementType<unsigned_int> *)((longlong)FVar28 + 0x10);
        }
        uVar18 = *(uint *)FVar23;
        local_228 = 0;
        uStack_240 = 0;
        while (uVar18 == 0) {
          lVar14 = (longlong)(int)uStack_240;
          local_228 = local_228 + 0x20;
          uStack_240 = uStack_240 + 1;
          uStack_22c = uVar11;
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_240)
          goto LAB_14db3850f;
          uVar18 = ((uint *)((longlong)FVar23 + 4))[lVar14];
        }
        uStack_23c = -uVar18 & uVar18;
        uVar12 = (ulonglong)uStack_23c * 2 + 1;
        lVar14 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_194 = (int)lVar14;
        uStack_22c = (local_228 - 1) + local_194;
        if ((int)uVar11 < (int)uStack_22c) {
          uStack_22c = uVar11;
        }
      }
LAB_14db3850f:
      local_248 = (longlong *)(lVar13 + 8 + lVar20);
      uVar18 = *(uint *)(lVar20 + 0x30 + lVar13);
      uStack_224 = local_114;
      iStack_220 = *(int *)(lVar20 + 0x10 + lVar13) - *(int *)(lVar20 + 0x3c + lVar13);
      TStack_178._padding_ = CONCAT44(uStack_23c,uStack_240);
      uVar29 = uVar18 & 0xffffffe0;
      uStack_230 = 0xffffffff;
      TStack_178.CurrentBitIndex = uStack_22c;
      TStack_178.UnvisitedBitMask = 0xffffffff;
      iVar19 = (int)uVar18 >> 5;
      TStack_178._28_4_ = local_114;
      TStack_178.BaseBitIndex = local_228;
      uStack_158 = CONCAT44(uStack_21c,iStack_220);
      local_238 = FVar28;
      local_200 = FVar28;
      local_180 = local_248;
      TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar28;
      local_270._0_4_ = uVar18;
      if ((((int)uVar18 < 0) || ((int)uVar11 < (int)uVar18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar11 = *(uint *)((longlong)FVar28 + 0x18);
      if (uVar18 != uVar11) {
        FVar23 = FVar28;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar28 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar23 = *(ForElementType<unsigned_int> *)((longlong)FVar28 + 0x10);
        }
        uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)((longlong)FVar23 + (longlong)iVar19 * 4);
        while (uVar18 == 0) {
          lVar13 = (longlong)iVar19;
          uVar29 = uVar29 + 0x20;
          iVar19 = iVar19 + 1;
          uVar18 = uVar11;
          local_270._0_4_ = uVar11;
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
          goto LAB_14db38640;
          uVar18 = ((uint *)((longlong)FVar23 + 4))[lVar13];
        }
        uVar12 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_190 = (int)lVar13;
        uVar18 = local_190 + -1 + uVar29;
        local_270._0_4_ = uVar18;
        if ((int)uVar11 < (int)uVar18) {
          uVar18 = uVar11;
          local_270._0_4_ = uVar11;
        }
      }
LAB_14db38640:
      while( true ) {
        plVar8 = local_180;
        if ((int)local_180[1] - *(int *)((longlong)local_180 + 0x34) != (int)uStack_158) {
          local_278 = (FIdentityFunctor)0x0;
          `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_278);
        }
        iVar19 = TStack_1b8.CurrentBitIndex;
        pTVar9 = local_1c0;
        pTVar7 = local_1f0;
        FVar17 = local_278;
        lVar13 = (longlong)TStack_178.CurrentBitIndex;
        if (((TStack_178.CurrentBitIndex == uVar18) &&
            ((ForElementType<unsigned_int>)TStack_178.Array == FVar28)) &&
           (plVar8 == (longlong *)local_210)) break;
        pTVar30 = (TArray<float,TSizedDefaultAllocator<32>_> *)*plVar8;
        uVar11 = *(uint *)&pTVar30[lVar13].AllocatorInstance.Data;
        uVar18 = 0;
        if ((int)uVar11 < local_1f0->ArrayNum) {
          uVar18 = ~uVar11 >> 0x1f;
        }
        local_258 = pTVar30;
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar18 = *(uint *)&pTVar30[lVar13].AllocatorInstance.Data;
        pTVar27 = pTVar7->DataPtr + (int)uVar11;
        uVar11 = 0;
        if ((int)uVar18 < *local_1f8) {
          uVar11 = ~uVar18 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar30 = local_218->DataPtr + (int)uVar18;
        if ((pTVar27->ArrayNum != pTVar30->ArrayNum) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Indices.Num() == Floats.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                                ,0xa8,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar19 = pTVar27->ArrayNum;
        uVar11 = 0;
        lVar20 = 0;
        if (0 < iVar19) {
          do {
            uVar18 = 0;
            if ((int)uVar11 < iVar19) {
              uVar18 = ~uVar11 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar15 = (pTVar27->AllocatorInstance).Data;
            uVar18 = *(uint *)(pFVar15 + lVar20 * 4);
            if (local_e8._8_4_ != local_b4) {
              FVar16 = (ForElementType<FSetElementId>)local_b0;
              if (local_a8 != (ForElementType<FSetElementId>)0x0) {
                FVar16 = local_a8;
              }
              iVar19 = *(int *)((longlong)FVar16 + (ulonglong)(local_a0 - 1U & uVar18) * 4);
              while (iVar19 != -1) {
                lVar14 = local_e8._0_8_ + (longlong)iVar19 * 0x14;
                if (*(uint *)(local_e8._0_8_ + (longlong)iVar19 * 0x14) == uVar18) {
                  if (lVar14 != 0) goto LAB_14db3886a;
                  break;
                }
                iVar19 = *(int *)(lVar14 + 0xc);
              }
            }
            local_188 = pFVar15 + lVar20 * 4;
            TSet<TTuple<int,TTuple<float,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<float,int>,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                      ((TSet<TTuple<int,TTuple<float,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<float,int>,0>,FDefaultSetAllocator>
                        *)local_e8,(uint)local_208,(TKeyInitializer<int_const_&> *)(ulonglong)uVar18
                       ,(bool *)&local_188);
            lVar14 = local_e8._0_8_ + (longlong)local_208[0] * 0x14;
LAB_14db3886a:
            uVar18 = 0;
            if ((int)uVar11 < pTVar30->ArrayNum) {
              uVar18 = ~uVar11 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar11 = uVar11 + 1;
            lVar2 = lVar20 * 4;
            lVar20 = lVar20 + 1;
            *(float *)(lVar14 + 4) =
                 (float)*(int *)((longlong)&local_258[lVar13].AllocatorInstance.Data + 4) *
                 *(float *)((pTVar30->AllocatorInstance).Data + lVar2) + *(float *)(lVar14 + 4);
            *(int *)(lVar14 + 8) =
                 *(int *)(lVar14 + 8) +
                 *(int *)((longlong)&local_258[lVar13].AllocatorInstance.Data + 4);
            iVar19 = pTVar27->ArrayNum;
          } while ((int)uVar11 < iVar19);
        }
        TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
        piVar26 = local_1f8;
        FVar28 = local_200;
        uVar18 = (uint)local_270;
      }
      uVar11 = *(uint *)((longlong)TStack_1b8.CurrentBitIndex * 0x60 + *(longlong *)local_1c0);
      uVar18 = 0;
      if ((int)uVar11 < local_1f0->ArrayNum) {
        uVar18 = ~uVar11 >> 0x1f;
      }
      local_210 = piVar26;
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar18 = 0;
      local_270 = pTVar7->DataPtr + (int)uVar11;
      uVar11 = *(uint *)((longlong)iVar19 * 0x60 + *(longlong *)pTVar9);
      uVar29 = uVar18;
      if ((int)uVar11 < *piVar26) {
        uVar29 = ~uVar11 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar30 = local_218->DataPtr + (int)uVar11;
      uVar11 = local_e8._8_4_ - local_b4;
      local_258 = pTVar30;
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      piVar26 = &local_270->ArrayMax;
      local_270->ArrayNum = 0;
      if (local_270->ArrayMax < (int)uVar11) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar11,&local_270->AllocatorInstance,0,piVar26);
      }
      uVar11 = local_e8._8_4_ - local_b4;
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      FVar28 = (ForElementType<unsigned_int>)&pTVar30->ArrayMax;
      piVar31 = &pTVar30->ArrayNum;
      *piVar31 = 0;
      local_250 = piVar31;
      local_200 = FVar28;
      if (pTVar30->ArrayMax < (int)uVar11) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar11,&pTVar30->AllocatorInstance,0,(int *)FVar28);
      }
      pTVar27 = local_270;
      fVar32 = 0.0;
      uStack_23c = 1;
      uVar11 = uVar18;
      local_228 = uVar18;
      if (local_c0 != 0) {
        puVar25 = (uint *)(local_e8 + 0x10);
        if (local_c8 != (uint *)0x0) {
          puVar25 = local_c8;
        }
        uVar11 = *puVar25;
        while (uVar11 == 0) {
          lVar13 = (longlong)(int)uVar18;
          local_228 = local_228 + 0x20;
          uVar18 = uVar18 + 1;
          uVar11 = local_c0;
          if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
          goto LAB_14db38b0f;
          uVar11 = puVar25[lVar13 + 1];
        }
        uStack_23c = -uVar11 & uVar11;
        uVar12 = (ulonglong)uStack_23c * 2 + 1;
        lVar13 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_18c = (int)lVar13;
        uVar11 = local_18c + -1 + local_228;
        if ((int)local_c0 < (int)uVar11) {
          uVar11 = local_c0;
        }
      }
LAB_14db38b0f:
      local_248 = (longlong *)local_e8;
      local_238 = (ForElementType<unsigned_int>)(local_e8 + 0x10);
      uStack_230 = 0xffffffff;
      uStack_224 = local_f4;
      TStack_1e0._padding_ = CONCAT44(uStack_23c,uVar18);
      TStack_1e0.CurrentBitIndex = uVar11;
      TStack_1e0.UnvisitedBitMask = 0xffffffff;
      TStack_1e0._28_4_ = local_f4;
      TStack_1e0.BaseBitIndex = local_228;
      uStack_240 = uVar18;
      uStack_22c = uVar11;
      local_1e8 = local_248;
      TStack_1e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_238;
      if ((int)uVar11 < (int)local_c0) {
        do {
          plVar8 = local_1e8;
          if ((*(int *)(*local_1e8 + 8 + (longlong)(int)uVar11 * 0x14) < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("WeldedDataIter.Value().Get<1>() > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                                  ,0xb7,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar15 = (FScriptContainerElement *)
                    (*plVar8 + (longlong)TStack_1e0.CurrentBitIndex * 0x14);
          pFVar21 = (pTVar27->AllocatorInstance).Data;
          if (((pFVar21 <= pFVar15) && (pFVar15 < pFVar21 + (longlong)*piVar26 * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar19 = pTVar27->ArrayNum;
          if (iVar19 == *piVar26) {
            iVar19 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar27->AllocatorInstance,piVar26);
          }
          pTVar27->ArrayNum = iVar19 + 1;
          *(undefined4 *)((pTVar27->AllocatorInstance).Data + (longlong)iVar19 * 4) =
               *(undefined4 *)pFVar15;
          pFVar15 = (pTVar30->AllocatorInstance).Data;
          lVar13 = *plVar8;
          local_274 = *(float *)(lVar13 + 4 + (longlong)TStack_1e0.CurrentBitIndex * 0x14) /
                      (float)*(int *)(lVar13 + 8 + (longlong)TStack_1e0.CurrentBitIndex * 0x14);
          if (((pFVar15 <= (FScriptContainerElement *)&local_274) &&
              ((FScriptContainerElement *)&local_274 < pFVar15 + (longlong)*(int *)FVar28 * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar19 = *piVar31;
          if (iVar19 == *(int *)FVar28) {
            iVar19 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar30->AllocatorInstance,(int *)FVar28);
          }
          *piVar31 = iVar19 + 1;
          *(float *)((pTVar30->AllocatorInstance).Data + (longlong)iVar19 * 4) = local_274;
          fVar32 = fVar32 + local_274;
          TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
          FVar17 = local_278;
          uVar11 = TStack_1e0.CurrentBitIndex;
        } while (TStack_1e0.CurrentBitIndex < (TStack_1e0.Array)->NumBits);
      }
      pTVar27 = local_270;
      uVar11 = 0;
      if (0xc < local_270->ArrayNum) {
        local_268.Data = (FScriptContainerElement *)0x0;
        local_260 = 0;
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,local_270->ArrayNum,&local_268,0,(int *)((longlong)&local_260 + 4));
        pTVar30 = local_258;
        iVar19 = pTVar27->ArrayNum;
        lVar13 = 0;
        if (0 < iVar19) {
          do {
            uVar18 = 0;
            if ((int)uVar11 < iVar19) {
              uVar18 = ~uVar11 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar15 = (pTVar27->AllocatorInstance).Data;
            uVar18 = 0;
            if ((int)uVar11 < pTVar30->ArrayNum) {
              uVar18 = ~uVar11 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar21 = (pTVar30->AllocatorInstance).Data;
            iVar19 = (int)local_260;
            if ((int)local_260 == local_260._4_4_) {
              iVar19 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&local_268,(int *)((longlong)&local_260 + 4));
            }
            local_260 = CONCAT44(local_260._4_4_,iVar19 + 1);
            uVar11 = uVar11 + 1;
            *(undefined4 *)(local_268.Data + (longlong)iVar19 * 8) =
                 *(undefined4 *)(pFVar21 + lVar13 * 4);
            lVar20 = lVar13 * 4;
            lVar13 = lVar13 + 1;
            *(undefined4 *)(local_268.Data + (longlong)iVar19 * 8 + 4) =
                 *(undefined4 *)(pFVar15 + lVar20);
            iVar19 = pTVar27->ArrayNum;
            FVar28 = local_200;
            piVar31 = local_250;
            FVar17 = local_278;
          } while ((int)uVar11 < iVar19);
        }
        AlgoImpl::
        IntroSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,_UE::Chaos::ClothAsset::FCollectionClothSeamFacade::Initialize_::__l18::<lambda_2>_>_>
                  ((TTuple<float,int> *)local_268.Data,(int)local_260,FVar17,local_res20);
        pTVar27 = local_270;
        iVar19 = local_270->ArrayNum;
        piVar1 = &local_270->ArrayNum;
        if (iVar19 < 0xc) {
          iVar22 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,0xc - iVar19,&local_270->AllocatorInstance,piVar1,piVar26);
          memset((pTVar27->AllocatorInstance).Data + (longlong)iVar22 * 4,0,
                 (longlong)(0xc - iVar19) << 2);
        }
        else if (0xc < iVar19) {
          iVar19 = iVar19 + -0xc;
          if (iVar19 < 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          else if (iVar19 == 0) goto LAB_14db38f75;
          pFVar15 = (pTVar27->AllocatorInstance).Data + 0x30;
          iVar22 = (*piVar1 - iVar19) + -0xc;
          if (iVar22 != 0) {
            memmove(pFVar15,pFVar15 + (longlong)iVar19 * 4,(longlong)iVar22 << 2);
          }
          *piVar1 = *piVar1 - iVar19;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar27->AllocatorInstance,*piVar1,piVar26);
        }
LAB_14db38f75:
        pTVar30 = local_258;
        iVar19 = *piVar31;
        if (iVar19 < 0xc) {
          iVar22 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,0xc - iVar19,&local_258->AllocatorInstance,piVar31,(int *)FVar28);
          memset((pTVar30->AllocatorInstance).Data + (longlong)iVar22 * 4,0,
                 (longlong)(0xc - iVar19) << 2);
        }
        else if (0xc < iVar19) {
          iVar19 = iVar19 + -0xc;
          if (iVar19 < 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          else if (iVar19 == 0) goto LAB_14db39052;
          pTVar30 = local_258;
          pFVar15 = (local_258->AllocatorInstance).Data + 0x30;
          iVar22 = (*piVar31 - iVar19) + -0xc;
          if (iVar22 != 0) {
            memmove(pFVar15,pFVar15 + (longlong)iVar19 * 4,(longlong)iVar22 << 2);
          }
          *piVar31 = *piVar31 - iVar19;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar30->AllocatorInstance,*piVar31,(int *)FVar28);
        }
LAB_14db39052:
        piVar31 = local_250;
        pTVar27 = local_270;
        uVar12 = local_260 & 0xffffffff;
        iVar19 = 0;
        lVar20 = 0;
        lVar13 = 0;
        fVar32 = 0.0;
        do {
          if (((int)uVar12 <= iVar19) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar3 = *(undefined4 *)(local_268.Data + lVar20 + 4);
          if ((pTVar27->ArrayNum <= iVar19) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(undefined4 *)((pTVar27->AllocatorInstance).Data + lVar13) = uVar3;
          if (((int)local_260 <= iVar19) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar3 = *(undefined4 *)(local_268.Data + lVar20);
          if ((*piVar31 <= iVar19) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar30 = local_258;
          *(undefined4 *)((local_258->AllocatorInstance).Data + lVar13) = uVar3;
          uVar12 = (ulonglong)(int)local_260;
          if ((int)local_260 <= iVar19) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar12 = local_260 & 0xffffffff;
          }
          iVar19 = iVar19 + 1;
          lVar13 = lVar13 + 4;
          fVar32 = fVar32 + *(float *)(local_268.Data + lVar20);
          lVar20 = lVar20 + 8;
        } while (iVar19 < 0xc);
        if ((TTuple<float,int> *)local_268.Data != (TTuple<float,int> *)0x0) {
          FMemory::Free(local_268.Data);
        }
      }
      if (fVar32 <= fVar5) {
        fVar32 = 0.0;
      }
      else {
        fVar32 = fVar6 / fVar32;
      }
      pFVar21 = (pTVar30->AllocatorInstance).Data;
      iVar19 = *piVar31;
      pFVar15 = pFVar21 + (longlong)iVar19 * 4;
      while( true ) {
        if (*piVar31 != iVar19) {
          local_277[0] = 0;
          `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_277);
        }
        if (pFVar21 == pFVar15) break;
        *(float *)pFVar21 = fVar32 * *(float *)pFVar21;
        pFVar21 = pFVar21 + 4;
      }
      local_a0 = 0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TTuple<float,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TTuple<float,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,TTuple<float,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
      TStack_1b8.UnvisitedBitMask = TStack_1b8.UnvisitedBitMask & ~TStack_1b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b8);
      piVar26 = local_210;
    } while (TStack_1b8.CurrentBitIndex < (TStack_1b8.Array)->NumBits);
  }
  return;
}

// WeldIndexAndFloatArrays<0,4,`UE::Chaos::ClothAsset::Private::WeldTethers'::__l2::<lambda_1>_> @ 14db392f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Chaos::ClothAsset::Private::
WeldIndexAndFloatArrays<0,4,_UE::Chaos::ClothAsset::Private::WeldTethers_::__l2::<lambda_1>_>
          (TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
           *param_1,TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *param_2,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *param_3,<lambda_1> param_4)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar7;
  longlong *plVar8;
  TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
  *pTVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ForElementType<FSetElementId> FVar15;
  FIdentityFunctor FVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar20;
  int iVar21;
  ForElementType<unsigned_int> FVar22;
  int iVar23;
  uint *puVar24;
  int *piVar25;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar26;
  ForElementType<unsigned_int> FVar27;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar28;
  uint uVar29;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar30;
  <lambda_1> local_res20 [8];
  undefined1 auStackY_288 [32];
  FIdentityFunctor local_238 [8];
  ForAnyElementType local_230;
  undefined8 local_228;
  TArray<int,TSizedDefaultAllocator<32>_> *local_220;
  float local_218 [2];
  longlong *local_210;
  uint uStack_208;
  uint uStack_204;
  ForElementType<unsigned_int> local_200;
  undefined4 uStack_1f8;
  uint uStack_1f4;
  uint local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *local_1e0;
  TArray<float,TSizedDefaultAllocator<32>_> *local_1d8;
  int *local_1d0;
  int local_1c8 [2];
  ForElementType<unsigned_int> local_1c0;
  int *local_1b8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *local_1b0;
  longlong *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  TMap<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
  *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  FScriptContainerElement *local_148;
  longlong local_140;
  longlong *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  undefined4 local_ec;
  undefined4 local_cc;
  undefined4 local_ac;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined1 local_70 [8];
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_288;
  iVar18 = *(int *)&param_1->field_0x28;
  TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  iVar23 = 0;
  uVar11 = 1;
  iVar21 = iVar23;
  TStack_178.CurrentBitIndex = 0;
  if (iVar18 != 0) {
    puVar24 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar24 = (uint *)TStack_178.Array;
    }
    uVar17 = *puVar24;
    iVar21 = 0;
    iVar23 = 0;
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar23;
      iVar21 = iVar21 + 0x20;
      iVar23 = iVar23 + 1;
      TStack_178.CurrentBitIndex = iVar18;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar23) goto LAB_14db393b3;
      uVar17 = puVar24[lVar12 + 1];
    }
    uVar11 = -uVar17 & uVar17;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_158 = (int)lVar12;
    TStack_178.CurrentBitIndex = local_158 + -1 + iVar21;
    if (iVar18 < TStack_178.CurrentBitIndex) {
      TStack_178.CurrentBitIndex = iVar18;
    }
  }
LAB_14db393b3:
  TStack_178._padding_ = CONCAT44(uVar11,iVar23);
  TStack_178.UnvisitedBitMask = 0xffffffff;
  TStack_178._28_4_ = local_ec;
  TStack_178.BaseBitIndex = iVar21;
  if (TStack_178.CurrentBitIndex < iVar18) {
    local_1b8 = &param_3->ArrayNum;
    piVar25 = local_1b8;
    local_res20[0] = param_4;
    local_1e0 = param_3;
    local_1b0 = param_2;
    local_180 = param_1;
    do {
      uStack_204 = 1;
      local_a8._0_8_ = 0;
      uStack_208 = 0;
      local_a8._8_8_ = 0;
      local_88 = (uint *)0x0;
      local_80 = 0;
      lVar19 = (longlong)TStack_178.CurrentBitIndex * 0x60;
      local_7c = 0x80;
      local_78 = 0xffffffff;
      local_74 = 0;
      local_68 = (ForElementType<FSetElementId>)0x0;
      local_60 = 0;
      lVar12 = *(longlong *)local_180;
      FVar27 = (ForElementType<unsigned_int>)(lVar12 + 0x18 + lVar19);
      local_1d0 = (int *)(lVar12 + 8 + lVar19);
      uVar11 = *(int *)((longlong)FVar27 + 0x18);
      uStack_1f4 = uStack_208;
      local_1f0 = uStack_208;
      if (uVar11 != 0) {
        FVar22 = FVar27;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar27 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar22 = *(ForElementType<unsigned_int> *)((longlong)FVar27 + 0x10);
        }
        uVar17 = *(uint *)FVar22;
        local_1f0 = 0;
        uStack_208 = 0;
        while (uVar17 == 0) {
          lVar13 = (longlong)(int)uStack_208;
          local_1f0 = local_1f0 + 0x20;
          uStack_208 = uStack_208 + 1;
          uStack_1f4 = uVar11;
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_208)
          goto LAB_14db3950f;
          uVar17 = ((uint *)((longlong)FVar22 + 4))[lVar13];
        }
        uStack_204 = -uVar17 & uVar17;
        uVar3 = (ulonglong)uStack_204 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_154 = (int)lVar13;
        uStack_1f4 = local_154 + -1 + local_1f0;
        if ((int)uVar11 < (int)uStack_1f4) {
          uStack_1f4 = uVar11;
        }
      }
LAB_14db3950f:
      local_210 = (longlong *)(lVar12 + 8 + lVar19);
      uVar17 = *(uint *)(lVar19 + 0x30 + lVar12);
      uStack_1ec = local_cc;
      iStack_1e8 = *(int *)(lVar19 + 0x10 + lVar12) - *(int *)(lVar19 + 0x3c + lVar12);
      TStack_130._padding_ = CONCAT44(uStack_204,uStack_208);
      uVar29 = uVar17 & 0xffffffe0;
      uStack_1f8 = 0xffffffff;
      TStack_130.CurrentBitIndex = uStack_1f4;
      TStack_130.UnvisitedBitMask = 0xffffffff;
      iVar18 = (int)uVar17 >> 5;
      TStack_130._28_4_ = local_cc;
      TStack_130.BaseBitIndex = local_1f0;
      uStack_110 = CONCAT44(uStack_1e4,iStack_1e8);
      local_200 = FVar27;
      local_1c0 = FVar27;
      local_138 = local_210;
      TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar27;
      local_220._0_4_ = uVar17;
      if ((((int)uVar17 < 0) || ((int)uVar11 < (int)uVar17)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar11 = *(uint *)((longlong)FVar27 + 0x18);
      if (uVar17 != uVar11) {
        FVar22 = FVar27;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar27 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar22 = *(ForElementType<unsigned_int> *)((longlong)FVar27 + 0x10);
        }
        uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)((longlong)FVar22 + (longlong)iVar18 * 4);
        while (uVar17 == 0) {
          lVar12 = (longlong)iVar18;
          uVar29 = uVar29 + 0x20;
          iVar18 = iVar18 + 1;
          uVar17 = uVar11;
          local_220._0_4_ = uVar11;
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
          goto LAB_14db39640;
          uVar17 = ((uint *)((longlong)FVar22 + 4))[lVar12];
        }
        uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_150 = (int)lVar12;
        uVar17 = local_150 + -1 + uVar29;
        local_220._0_4_ = uVar17;
        if ((int)uVar11 < (int)uVar17) {
          uVar17 = uVar11;
          local_220._0_4_ = uVar11;
        }
      }
LAB_14db39640:
      while( true ) {
        plVar8 = local_138;
        if ((int)local_138[1] - *(int *)((longlong)local_138 + 0x34) != (int)uStack_110) {
          local_238[0] = (FIdentityFunctor)0x0;
          `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_238);
        }
        iVar18 = TStack_178.CurrentBitIndex;
        pTVar9 = local_180;
        pTVar7 = local_1b0;
        FVar16 = local_238[0];
        if (((TStack_130.CurrentBitIndex == uVar17) &&
            ((ForElementType<unsigned_int>)TStack_130.Array == FVar27)) &&
           (plVar8 == (longlong *)local_1d0)) break;
        lVar12 = *plVar8;
        lVar19 = (longlong)TStack_130.CurrentBitIndex * 0x10;
        uVar11 = *(uint *)(lVar19 + lVar12);
        uVar17 = 0;
        if ((int)uVar11 < local_1b0->ArrayNum) {
          uVar17 = ~uVar11 >> 0x1f;
        }
        local_140 = lVar12;
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar17 = *(uint *)(lVar19 + lVar12);
        pTVar26 = pTVar7->DataPtr + (int)uVar11;
        uVar11 = 0;
        if ((int)uVar17 < *local_1b8) {
          uVar11 = ~uVar17 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar28 = local_1e0->DataPtr + (int)uVar17;
        if ((pTVar26->ArrayNum != pTVar28->ArrayNum) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Indices.Num() == Floats.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                                ,0xa8,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar18 = pTVar26->ArrayNum;
        uVar11 = 0;
        lVar12 = 0;
        if (0 < iVar18) {
          do {
            uVar17 = 0;
            if ((int)uVar11 < iVar18) {
              uVar17 = ~uVar11 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar14 = (pTVar26->AllocatorInstance).Data;
            uVar17 = *(uint *)(pFVar14 + lVar12 * 4);
            if (local_a8._8_4_ != local_74) {
              FVar15 = (ForElementType<FSetElementId>)local_70;
              if (local_68 != (ForElementType<FSetElementId>)0x0) {
                FVar15 = local_68;
              }
              iVar18 = *(int *)((longlong)FVar15 + (ulonglong)(local_60 - 1U & uVar17) * 4);
              while (iVar18 != -1) {
                lVar13 = local_a8._0_8_ + (longlong)iVar18 * 0x14;
                if (*(uint *)(local_a8._0_8_ + (longlong)iVar18 * 0x14) == uVar17) {
                  if (lVar13 != 0) goto LAB_14db3986a;
                  break;
                }
                iVar18 = *(int *)(lVar13 + 0xc);
              }
            }
            local_148 = pFVar14 + lVar12 * 4;
            TSet<TTuple<int,TTuple<float,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<float,int>,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                      ((TSet<TTuple<int,TTuple<float,int>_>,TDefaultMapHashableKeyFuncs<int,TTuple<float,int>,0>,FDefaultSetAllocator>
                        *)local_a8,(uint)local_1c8,(TKeyInitializer<int_const_&> *)(ulonglong)uVar17
                       ,(bool *)&local_148);
            lVar13 = local_a8._0_8_ + (longlong)local_1c8[0] * 0x14;
LAB_14db3986a:
            uVar17 = 0;
            if ((int)uVar11 < pTVar28->ArrayNum) {
              uVar17 = ~uVar11 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar11 = uVar11 + 1;
            lVar2 = lVar12 * 4;
            lVar12 = lVar12 + 1;
            *(float *)(lVar13 + 4) =
                 (float)*(int *)(lVar19 + 4 + local_140) *
                 *(float *)((pTVar28->AllocatorInstance).Data + lVar2) + *(float *)(lVar13 + 4);
            *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + *(int *)(lVar19 + 4 + local_140);
            iVar18 = pTVar26->ArrayNum;
          } while ((int)uVar11 < iVar18);
        }
        TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
        piVar25 = local_1b8;
        FVar27 = local_1c0;
        uVar17 = (uint)local_220;
      }
      uVar11 = *(uint *)((longlong)TStack_178.CurrentBitIndex * 0x60 + *(longlong *)local_180);
      uVar17 = 0;
      if ((int)uVar11 < local_1b0->ArrayNum) {
        uVar17 = ~uVar11 >> 0x1f;
      }
      local_1d0 = piVar25;
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar17 = 0;
      local_220 = pTVar7->DataPtr + (int)uVar11;
      uVar11 = *(uint *)((longlong)iVar18 * 0x60 + *(longlong *)pTVar9);
      uVar29 = uVar17;
      if ((int)uVar11 < *piVar25) {
        uVar29 = ~uVar11 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar28 = local_1e0->DataPtr + (int)uVar11;
      uVar11 = local_a8._8_4_ - local_74;
      local_1d8 = pTVar28;
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      piVar25 = &local_220->ArrayMax;
      local_220->ArrayNum = 0;
      if (local_220->ArrayMax < (int)uVar11) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar11,&local_220->AllocatorInstance,0,piVar25);
      }
      uVar11 = local_a8._8_4_ - local_74;
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      FVar27 = (ForElementType<unsigned_int>)&pTVar28->ArrayMax;
      pTVar28->ArrayNum = 0;
      local_1c0 = FVar27;
      if (pTVar28->ArrayMax < (int)uVar11) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar11,&pTVar28->AllocatorInstance,0,(int *)FVar27);
      }
      pTVar26 = local_220;
      uStack_204 = 1;
      local_1f0 = uVar17;
      uVar11 = uVar17;
      if (local_80 != 0) {
        puVar24 = (uint *)(local_a8 + 0x10);
        if (local_88 != (uint *)0x0) {
          puVar24 = local_88;
        }
        uVar11 = *puVar24;
        while (uVar11 == 0) {
          lVar12 = (longlong)(int)uVar17;
          local_1f0 = local_1f0 + 0x20;
          uVar17 = uVar17 + 1;
          if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
          goto LAB_14db39af9;
          uVar11 = puVar24[lVar12 + 1];
        }
        uStack_204 = -uVar11 & uVar11;
        uVar3 = (ulonglong)uStack_204 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_14c = (int)lVar12;
        uVar11 = local_14c + -1 + local_1f0;
        if ((int)local_80 < (int)uVar11) {
LAB_14db39af9:
          uVar11 = local_80;
        }
      }
      local_210 = (longlong *)local_a8;
      local_200 = (ForElementType<unsigned_int>)(local_a8 + 0x10);
      uStack_1f8 = 0xffffffff;
      uStack_1ec = local_ac;
      TStack_1a0._padding_ = CONCAT44(uStack_204,uVar17);
      TStack_1a0.CurrentBitIndex = uVar11;
      TStack_1a0.UnvisitedBitMask = 0xffffffff;
      TStack_1a0._28_4_ = local_ac;
      TStack_1a0.BaseBitIndex = local_1f0;
      uStack_208 = uVar17;
      uStack_1f4 = uVar11;
      local_1a8 = local_210;
      TStack_1a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_200;
      if ((int)uVar11 < (int)local_80) {
        do {
          plVar8 = local_1a8;
          if ((*(int *)(*local_1a8 + 8 + (longlong)(int)uVar11 * 0x14) < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("WeldedDataIter.Value().Get<1>() > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                                  ,0xb7,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar14 = (FScriptContainerElement *)
                    (*plVar8 + (longlong)TStack_1a0.CurrentBitIndex * 0x14);
          pFVar5 = (pTVar26->AllocatorInstance).Data;
          if (((pFVar5 <= pFVar14) && (pFVar14 < pFVar5 + (longlong)*piVar25 * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar18 = pTVar26->ArrayNum;
          if (iVar18 == *piVar25) {
            iVar18 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar26->AllocatorInstance,piVar25);
          }
          pTVar26->ArrayNum = iVar18 + 1;
          *(undefined4 *)((pTVar26->AllocatorInstance).Data + (longlong)iVar18 * 4) =
               *(undefined4 *)pFVar14;
          pFVar14 = (pTVar28->AllocatorInstance).Data;
          lVar12 = *plVar8;
          local_218[0] = *(float *)(lVar12 + 4 + (longlong)TStack_1a0.CurrentBitIndex * 0x14) /
                         (float)*(int *)(lVar12 + 8 + (longlong)TStack_1a0.CurrentBitIndex * 0x14);
          if (((pFVar14 <= (FScriptContainerElement *)local_218) &&
              ((FScriptContainerElement *)local_218 < pFVar14 + (longlong)*(int *)FVar27 * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar18 = pTVar28->ArrayNum;
          if (iVar18 == *(int *)FVar27) {
            iVar18 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar28->AllocatorInstance,(int *)FVar27);
          }
          pTVar28->ArrayNum = iVar18 + 1;
          *(float *)((pTVar28->AllocatorInstance).Data + (longlong)iVar18 * 4) = local_218[0];
          TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
          FVar16 = local_238[0];
          uVar11 = TStack_1a0.CurrentBitIndex;
        } while (TStack_1a0.CurrentBitIndex < (TStack_1a0.Array)->NumBits);
      }
      pTVar26 = local_220;
      uVar11 = 0;
      if (4 < local_220->ArrayNum) {
        local_230.Data = (FScriptContainerElement *)0x0;
        local_228 = 0;
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,local_220->ArrayNum,&local_230,0,(int *)((longlong)&local_228 + 4));
        iVar18 = pTVar26->ArrayNum;
        lVar12 = 0;
        pTVar20 = pTVar26;
        pTVar30 = pTVar28;
        if (0 < iVar18) {
          do {
            uVar17 = 0;
            if ((int)uVar11 < iVar18) {
              uVar17 = ~uVar11 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar14 = (pTVar26->AllocatorInstance).Data;
            uVar17 = 0;
            if ((int)uVar11 < pTVar28->ArrayNum) {
              uVar17 = ~uVar11 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar5 = (pTVar28->AllocatorInstance).Data;
            iVar18 = (int)local_228;
            if ((int)local_228 == local_228._4_4_) {
              iVar18 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&local_230,(int *)((longlong)&local_228 + 4));
            }
            local_228 = CONCAT44(local_228._4_4_,iVar18 + 1);
            uVar11 = uVar11 + 1;
            *(undefined4 *)(local_230.Data + (longlong)iVar18 * 8) =
                 *(undefined4 *)(pFVar5 + lVar12 * 4);
            lVar19 = lVar12 * 4;
            lVar12 = lVar12 + 1;
            *(undefined4 *)(local_230.Data + (longlong)iVar18 * 8 + 4) =
                 *(undefined4 *)(pFVar14 + lVar19);
            iVar18 = pTVar26->ArrayNum;
            pTVar20 = local_220;
            FVar27 = local_1c0;
            pTVar30 = local_1d8;
            FVar16 = local_238[0];
          } while ((int)uVar11 < iVar18);
        }
        AlgoImpl::
        IntroSortInternal<TTuple<float,int>,int,FIdentityFunctor,TDereferenceWrapper<TTuple<float,int>,_UE::Chaos::ClothAsset::Private::WeldTethers_::__l2::<lambda_1>_>_>
                  ((TTuple<float,int> *)local_230.Data,(int)local_228,FVar16,
                   (<lambda_1> *)local_res20);
        pTVar26 = local_220;
        iVar18 = pTVar20->ArrayNum;
        piVar1 = &pTVar20->ArrayNum;
        if (iVar18 < 4) {
          iVar21 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,4 - iVar18,&local_220->AllocatorInstance,piVar1,piVar25);
          memset((pTVar26->AllocatorInstance).Data + (longlong)iVar21 * 4,0,
                 (longlong)(4 - iVar18) << 2);
        }
        else if (4 < iVar18) {
          iVar18 = iVar18 + -4;
          if (iVar18 < 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else if (iVar18 == 0) goto LAB_14db39f75;
          pFVar14 = (local_220->AllocatorInstance).Data + 0x10;
          iVar21 = (*piVar1 - iVar18) + -4;
          if (iVar21 != 0) {
            memmove(pFVar14,pFVar14 + (longlong)iVar18 * 4,(longlong)iVar21 << 2);
          }
          pTVar26 = local_220;
          *piVar1 = *piVar1 - iVar18;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&local_220->AllocatorInstance,*piVar1,piVar25);
        }
LAB_14db39f75:
        iVar18 = pTVar30->ArrayNum;
        piVar25 = &pTVar30->ArrayNum;
        if (iVar18 < 4) {
          iVar21 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,4 - iVar18,&pTVar30->AllocatorInstance,piVar25,(int *)FVar27);
          memset((pTVar30->AllocatorInstance).Data + (longlong)iVar21 * 4,0,
                 (longlong)(4 - iVar18) << 2);
        }
        else if (4 < iVar18) {
          iVar18 = iVar18 + -4;
          if (iVar18 < 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else if (iVar18 == 0) goto LAB_14db3a04b;
          pFVar14 = (pTVar30->AllocatorInstance).Data + 0x10;
          iVar21 = (*piVar25 - iVar18) + -4;
          if (iVar21 != 0) {
            memmove(pFVar14,pFVar14 + (longlong)iVar18 * 4,(longlong)iVar21 << 2);
          }
          *piVar25 = *piVar25 - iVar18;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar30->AllocatorInstance,*piVar25,(int *)FVar27);
        }
LAB_14db3a04b:
        if (((int)local_228 < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar4 = *(undefined4 *)(local_230.Data + 4);
        if ((*piVar1 < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)(pTVar26->AllocatorInstance).Data = uVar4;
        if (((int)local_228 < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar4 = *(undefined4 *)local_230.Data;
        if ((*piVar25 < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)(pTVar30->AllocatorInstance).Data = uVar4;
        if ((int)local_228 < 1) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (((int)local_228 < 2) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar4 = *(undefined4 *)(local_230.Data + 0xc);
        if ((*piVar1 < 2) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)((pTVar26->AllocatorInstance).Data + 4) = uVar4;
        if (((int)local_228 < 2) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar4 = *(undefined4 *)(local_230.Data + 8);
        if ((*piVar25 < 2) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)((pTVar30->AllocatorInstance).Data + 4) = uVar4;
        if ((int)local_228 < 2) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (((int)local_228 < 3) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar4 = *(undefined4 *)(local_230.Data + 0x14);
        if ((*piVar1 < 3) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)((pTVar26->AllocatorInstance).Data + 8) = uVar4;
        if (((int)local_228 < 3) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar4 = *(undefined4 *)(local_230.Data + 0x10);
        if ((*piVar25 < 3) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)((pTVar30->AllocatorInstance).Data + 8) = uVar4;
        if ((int)local_228 < 3) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (((int)local_228 < 4) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar4 = *(undefined4 *)(local_230.Data + 0x1c);
        if ((*piVar1 < 4) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)((pTVar26->AllocatorInstance).Data + 0xc) = uVar4;
        if (((int)local_228 < 4) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar4 = *(undefined4 *)(local_230.Data + 0x18);
        if ((*piVar25 < 4) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)((pTVar30->AllocatorInstance).Data + 0xc) = uVar4;
        if (((int)local_228 < 4) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((TTuple<float,int> *)local_230.Data != (TTuple<float,int> *)0x0) {
          FMemory::Free(local_230.Data);
        }
      }
      local_60 = 0;
      if (local_68 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_68);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TTuple<float,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TTuple<float,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,TTuple<float,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
      TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
      piVar25 = local_1d0;
    } while (TStack_178.CurrentBitIndex < (TStack_178.Array)->NumBits);
  }
  return;
}

// `scalar_deleting_destructor' @ 14db3d250

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Chaos::ClothAsset::FClothCollection,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Chaos::ClothAsset::FClothCollection,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x298);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14db3d290

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Chaos::ClothAsset::FConstClothCollection,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Chaos::ClothAsset::FConstClothCollection,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x298);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14db3d2d0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TManagedArray<FSoftObjectPath>,SharedPointerInternals::DefaultDeleter<TManagedArray<FSoftObjectPath>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TManagedArray<FSoftObjectPath>,SharedPointerInternals::DefaultDeleter<TManagedArray<FSoftObjectPath>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14db3d310

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>,SharedPointerInternals::DefaultDeleter<TManagedArray<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14db3d350

void * __thiscall
UE::Chaos::ClothAsset::FCollectionClothConstFacade::_scalar_deleting_destructor_
          (FCollectionClothConstFacade *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClothCollection).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14db3d390

void * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricConstFacade::_scalar_deleting_destructor_
          (FCollectionClothFabricConstFacade *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClothCollection).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14db3d3d0

void * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricFacade::_scalar_deleting_destructor_
          (FCollectionClothFabricFacade *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14db3d410

void * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::_scalar_deleting_destructor_
          (FCollectionClothFacade *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14db3d450

void * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::_scalar_deleting_destructor_
          (FCollectionClothRenderPatternConstFacade *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClothCollection).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14db3d490

void * __thiscall
UE::Chaos::ClothAsset::FCollectionClothRenderPatternFacade::_scalar_deleting_destructor_
          (FCollectionClothRenderPatternFacade *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14db3d4d0

void * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSeamConstFacade::_scalar_deleting_destructor_
          (FCollectionClothSeamConstFacade *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClothCollection).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14db3d510

void * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSeamFacade::_scalar_deleting_destructor_
          (FCollectionClothSeamFacade *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14db3d550

void * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionConstFacade::_scalar_deleting_destructor_
          (FCollectionClothSelectionConstFacade *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ManagedArrayCollection).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14db3d590

void * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSelectionFacade::_scalar_deleting_destructor_
          (FCollectionClothSelectionFacade *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14db3d5d0

void * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshConstFacade::_scalar_deleting_destructor_
          (FCollectionClothSimAccessoryMeshConstFacade *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClothCollection).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14db3d610

void * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimAccessoryMeshFacade::_scalar_deleting_destructor_
          (FCollectionClothSimAccessoryMeshFacade *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14db3d650

void * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetConstFacade::_scalar_deleting_destructor_
          (FCollectionClothSimMorphTargetConstFacade *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClothCollection).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14db3d690

void * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetFacade::_scalar_deleting_destructor_
          (FCollectionClothSimMorphTargetFacade *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14db3d6d0

void * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternConstFacade::_scalar_deleting_destructor_
          (FCollectionClothSimPatternConstFacade *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClothCollection).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14db3d710

void * __thiscall
UE::Chaos::ClothAsset::FCollectionClothSimPatternFacade::_scalar_deleting_destructor_
          (FCollectionClothSimPatternFacade *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// IMPLEMENT_MODULE_ChaosClothAsset @ 14db76eb0

void __cdecl IMPLEMENT_MODULE_ChaosClothAsset(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableSeamChecks'' @ 15045c790

void __cdecl UE::Chaos::ClothAsset::_dynamic_atexit_destructor_for__CVarEnableSeamChecks__(void)

{
  CVarEnableSeamChecks._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableSeamChecks);
  return;
}

// `dynamic_atexit_destructor_for_'ClothCollectionGroups'' @ 15045c7b0

void __cdecl
`UE::Chaos::ClothAsset::FCollectionClothFacade::Append'::__l2::
_dynamic_atexit_destructor_for__ClothCollectionGroups__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ClothCollectionGroups.AllocatorInstance.Data;
  if (ClothCollectionGroups.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ClothCollectionGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyString'' @ 15045c7d0

void __cdecl
`UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetPhysicsAssetSoftObjectPathName'::__l2::
_dynamic_atexit_destructor_for__EmptyString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::EmptyString.SubPathString.Data.AllocatorInstance.Data;
  if (::EmptyString.SubPathString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::EmptyString.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyString'' @ 15045c7f0

void __cdecl
`UE::Chaos::ClothAsset::FCollectionClothRenderPatternConstFacade::
GetRenderMaterialSoftObjectPathName'::__l2::_dynamic_atexit_destructor_for__EmptyString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::EmptyString.SubPathString.Data.AllocatorInstance.Data;
  if (::EmptyString.SubPathString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::EmptyString.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyString'' @ 15045c810

void __cdecl
`UE::Chaos::ClothAsset::FCollectionClothSimMorphTargetConstFacade::GetSimMorphTargetName'::__l2::
_dynamic_atexit_destructor_for__EmptyString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::EmptyString.Data.AllocatorInstance.Data;
  if (::EmptyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::EmptyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyString'' @ 15045c830

void __cdecl
`UE::Chaos::ClothAsset::FCollectionClothConstFacade::GetSkeletalMeshSoftObjectPathName'::__l2::
_dynamic_atexit_destructor_for__EmptyString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::EmptyString.SubPathString.Data.AllocatorInstance.Data;
  if (::EmptyString.SubPathString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::EmptyString.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'FixedAttributeNamesMap'' @ 15045c850

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_atexit_destructor_for__FixedAttributeNamesMap__(void)

{
  FixedAttributeNamesMap._72_4_ = 0;
  if (FixedAttributeNamesMap._64_8_ != 0) {
    FMemory::Free((void *)FixedAttributeNamesMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FixedAttributeNamesMap);
  return;
}

// `dynamic_atexit_destructor_for_'FixedAttributePrefixNamesMap'' @ 15045c890

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_atexit_destructor_for__FixedAttributePrefixNamesMap__(void)

{
  FixedAttributePrefixNamesMap._72_4_ = 0;
  if (FixedAttributePrefixNamesMap._64_8_ != 0) {
    FMemory::Free((void *)FixedAttributePrefixNamesMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FixedAttributePrefixNamesMap);
  return;
}

// `dynamic_atexit_destructor_for_'GroupResizingGroupAttributes'' @ 15045c8d0

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_atexit_destructor_for__GroupResizingGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = GroupResizingGroupAttributes.AllocatorInstance.Data;
  if (GroupResizingGroupAttributes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (GroupResizingGroupAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LodsGroupAttributes'' @ 15045c8f0

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_atexit_destructor_for__LodsGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = LodsGroupAttributes.AllocatorInstance.Data;
  if (LodsGroupAttributes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (LodsGroupAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'RenderFacesGroupAttributes'' @ 15045c910

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_atexit_destructor_for__RenderFacesGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RenderFacesGroupAttributes.AllocatorInstance.Data;
  if (RenderFacesGroupAttributes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RenderFacesGroupAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'RenderPatternsGroupAttributes'' @ 15045c930

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_atexit_destructor_for__RenderPatternsGroupAttributes__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RenderPatternsGroupAttributes.AllocatorInstance.Data;
  if (RenderPatternsGroupAttributes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RenderPatternsGroupAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'RenderVerticesGroupAttributes'' @ 15045c950

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_atexit_destructor_for__RenderVerticesGroupAttributes__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RenderVerticesGroupAttributes.AllocatorInstance.Data;
  if (RenderVerticesGroupAttributes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RenderVerticesGroupAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SeamStitchesGroupAttributes'' @ 15045c970

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_atexit_destructor_for__SeamStitchesGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SeamStitchesGroupAttributes.AllocatorInstance.Data;
  if (SeamStitchesGroupAttributes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SeamStitchesGroupAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SeamsGroupAttributes'' @ 15045c990

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_atexit_destructor_for__SeamsGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SeamsGroupAttributes.AllocatorInstance.Data;
  if (SeamsGroupAttributes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SeamsGroupAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SimAccessoryMeshVertices3DGroupAttributePrefixes'' @ 15045c9b0

void __cdecl
UE::Chaos::ClothAsset::Private::
_dynamic_atexit_destructor_for__SimAccessoryMeshVertices3DGroupAttributePrefixes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SimAccessoryMeshVertices3DGroupAttributePrefixes.AllocatorInstance.Data;
  if (SimAccessoryMeshVertices3DGroupAttributePrefixes.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (SimAccessoryMeshVertices3DGroupAttributePrefixes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SimAccessoryMeshesGroupAttributes'' @ 15045c9d0

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_atexit_destructor_for__SimAccessoryMeshesGroupAttributes__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SimAccessoryMeshesGroupAttributes.AllocatorInstance.Data;
  if (SimAccessoryMeshesGroupAttributes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SimAccessoryMeshesGroupAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SimFabricGroupAttributes'' @ 15045c9f0

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_atexit_destructor_for__SimFabricGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SimFabricGroupAttributes.AllocatorInstance.Data;
  if (SimFabricGroupAttributes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SimFabricGroupAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SimFacesGroupAttributes'' @ 15045ca10

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_atexit_destructor_for__SimFacesGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SimFacesGroupAttributes.AllocatorInstance.Data;
  if (SimFacesGroupAttributes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SimFacesGroupAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SimMorphTargetVerticesGroupAttributes'' @ 15045ca30

void __cdecl
UE::Chaos::ClothAsset::Private::
_dynamic_atexit_destructor_for__SimMorphTargetVerticesGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SimMorphTargetVerticesGroupAttributes.AllocatorInstance.Data;
  if (SimMorphTargetVerticesGroupAttributes.AllocatorInstance.Data == (FScriptContainerElement *)0x0
     ) {
    return;
  }
  if (SimMorphTargetVerticesGroupAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SimMorphTargetsGroupAttributes'' @ 15045ca50

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_atexit_destructor_for__SimMorphTargetsGroupAttributes__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SimMorphTargetsGroupAttributes.AllocatorInstance.Data;
  if (SimMorphTargetsGroupAttributes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SimMorphTargetsGroupAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SimPatternsGroupAttributes'' @ 15045ca70

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_atexit_destructor_for__SimPatternsGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SimPatternsGroupAttributes.AllocatorInstance.Data;
  if (SimPatternsGroupAttributes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SimPatternsGroupAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SimVertices2DGroupAttributes'' @ 15045ca90

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_atexit_destructor_for__SimVertices2DGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SimVertices2DGroupAttributes.AllocatorInstance.Data;
  if (SimVertices2DGroupAttributes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SimVertices2DGroupAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SimVertices3DGroupAttributes'' @ 15045cab0

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_atexit_destructor_for__SimVertices3DGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SimVertices3DGroupAttributes.AllocatorInstance.Data;
  if (SimVertices3DGroupAttributes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SimVertices3DGroupAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'SolverGroupAttributes'' @ 15045cad0

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_atexit_destructor_for__SolverGroupAttributes__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SolverGroupAttributes.AllocatorInstance.Data;
  if (SolverGroupAttributes.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SolverGroupAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'UserAccessibleAttributeNamesMap'' @ 15045caf0

void __cdecl
UE::Chaos::ClothAsset::Private::_dynamic_atexit_destructor_for__UserAccessibleAttributeNamesMap__
          (void)

{
  UserAccessibleAttributeNamesMap._72_4_ = 0;
  if (UserAccessibleAttributeNamesMap._64_8_ != 0) {
    FMemory::Free((void *)UserAccessibleAttributeNamesMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UserAccessibleAttributeNamesMap);
  return;
}

