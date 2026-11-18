// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 51

// StaticClass @ 14e72f3c0

UClass * __cdecl UInterchangeGenericMeshPipeline::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericMeshPipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericMeshPipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericMeshPipeline.InnerSingleton,
               StaticRegisterNativesUInterchangeGenericMeshPipeline,0x298,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericMeshPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericMeshPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericMeshPipeline.InnerSingleton;
}

// UInterchangeGenericMeshPipeline @ 14e7677a0

UInterchangeGenericMeshPipeline * __thiscall
UInterchangeGenericMeshPipeline::UInterchangeGenericMeshPipeline
          (UInterchangeGenericMeshPipeline *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  this->bImportStaticMeshes = true;
  this->bCombineStaticMeshes = false;
  local_res8 = 0;
  this->_padding_ = (longlong)&___7UInterchangeGenericMeshPipeline__6B_;
  (this->CommonMeshesProperties).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr = (FWeakObjectPtr)0x0;
  (this->LodGroup).ComparisonIndex = 0;
  (this->LodGroup).Number = 0;
  this->bAutoComputeLODScreenSizes = true;
  (this->LODScreenSizes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODScreenSizes).ArrayNum = 0;
  (this->LODScreenSizes).ArrayMax = 0;
  this->bImportCollision_DEPRECATED = true;
  this->bCollision = true;
  this->bImportCollisionAccordingToMeshName = true;
  this->bOneConvexHullPerUCX = true;
  this->Collision = Convex18DOP;
  this->bForceCollisionPrimitiveGeneration = false;
  this->bBuildNanite = true;
  this->NaniteTriangleThreshold = 0;
  this->bBuildReversedIndexBuffer = false;
  this->bGenerateLightmapUVs = false;
  this->bGenerateDistanceFieldAsIfTwoSided = false;
  this->bSupportFaceRemap = false;
  this->MinLightmapResolution = 0x40;
  this->SrcLightmapIndex = 0;
  this->DstLightmapIndex = 1;
  (this->BuildScale3D).field0_0x0._s_0.X = 1.0;
  (this->BuildScale3D).field0_0x0._s_0.Y = 1.0;
  (this->BuildScale3D).field0_0x0._s_0.Z = 1.0;
  this->DistanceFieldResolutionScale = 1.0;
  (this->DistanceFieldReplacementMesh).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->DistanceFieldReplacementMesh).WeakPtr,(FObjectPtr)&local_res8);
  (this->PhysicsAsset).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PipelineMeshesUtilities).field0_0x0.DebugPtr = (UInterchangePipelineMeshesUtilities *)0x0;
  *(undefined8 *)&this->AssemblyPartMeshUidToFactoryNodeTable = 0;
  *(undefined8 *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x8 = 0;
  *(undefined8 *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x20 = 0;
  this->MaxLumenMeshCards = 0xc;
  this->bImportSkeletalMeshes = true;
  this->bCombineSkeletalMeshes_DEPRECATED = true;
  this->bImportMorphTargets = true;
  this->bMergeMorphTargetsWithSameName = true;
  this->bImportVertexAttributes = false;
  this->bUpdateSkeletonReferencePose = false;
  this->bCreatePhysicsAsset = true;
  this->bUseHighPrecisionSkinWeights = false;
  this->ThresholdPosition = 2e-05;
  this->ThresholdTangentNormal = 2e-05;
  this->ThresholdUV = 0.0009765625;
  this->MorphThresholdPosition = 0.015;
  this->BoneInfluenceLimit = 0;
  this->bImportGeometryCaches = true;
  this->bFlattenTracks = true;
  this->CompressedPositionPrecision = 0.01;
  this->CompressedTextureCoordinatesNumberOfBits = 10;
  this->bOverrideTimeRange = false;
  this->FrameStart = 0;
  this->FrameEnd = 1;
  this->MotionVectors = NoMotionVectors;
  this->bApplyConstantTopologyOptimizations = false;
  this->bStoreImportedVertexNumbers = false;
  this->bOptimizeIndexBuffers = false;
  *(undefined4 *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x28 = 0;
  *(undefined4 *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x2c = 0x80;
  *(undefined4 *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x34 = 0;
  *(undefined8 *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x40 = 0;
  *(undefined4 *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x48 = 0;
  (this->SkeletonFactoryNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletonFactoryNodes).ArrayNum = 0;
  (this->SkeletonFactoryNodes).ArrayMax = 0;
  (this->SkeletalMeshFactoryNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletalMeshFactoryNodes).ArrayNum = 0;
  (this->SkeletalMeshFactoryNodes).ArrayMax = 0;
  (this->StaticMeshFactoryNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMeshFactoryNodes).ArrayNum = 0;
  (this->StaticMeshFactoryNodes).ArrayMax = 0;
  (this->GeometryCacheFactoryNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeometryCacheFactoryNodes).ArrayNum = 0;
  (this->GeometryCacheFactoryNodes).ArrayMax = 0;
  this->BaseNodeContainer = (UInterchangeBaseNodeContainer *)0x0;
  (this->SourceDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceDatas).ArrayNum = 0;
  (this->SourceDatas).ArrayMax = 0;
  return this;
}

// UInterchangeGenericMeshPipeline @ 14e7679b0

UInterchangeGenericMeshPipeline * __thiscall
UInterchangeGenericMeshPipeline::UInterchangeGenericMeshPipeline
          (UInterchangeGenericMeshPipeline *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  this->bImportStaticMeshes = true;
  this->bCombineStaticMeshes = false;
  local_res8 = 0;
  this->_padding_ = (longlong)&___7UInterchangeGenericMeshPipeline__6B_;
  (this->CommonMeshesProperties).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr = (FWeakObjectPtr)0x0;
  (this->LodGroup).ComparisonIndex = 0;
  (this->LodGroup).Number = 0;
  this->bAutoComputeLODScreenSizes = true;
  (this->LODScreenSizes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LODScreenSizes).ArrayNum = 0;
  (this->LODScreenSizes).ArrayMax = 0;
  this->bImportCollision_DEPRECATED = true;
  this->bCollision = true;
  this->bImportCollisionAccordingToMeshName = true;
  this->bOneConvexHullPerUCX = true;
  this->Collision = Convex18DOP;
  this->bForceCollisionPrimitiveGeneration = false;
  this->bBuildNanite = true;
  this->NaniteTriangleThreshold = 0;
  this->bBuildReversedIndexBuffer = false;
  this->bGenerateLightmapUVs = false;
  this->bGenerateDistanceFieldAsIfTwoSided = false;
  this->bSupportFaceRemap = false;
  this->MinLightmapResolution = 0x40;
  this->SrcLightmapIndex = 0;
  this->DstLightmapIndex = 1;
  (this->BuildScale3D).field0_0x0._s_0.X = 1.0;
  (this->BuildScale3D).field0_0x0._s_0.Y = 1.0;
  (this->BuildScale3D).field0_0x0._s_0.Z = 1.0;
  this->DistanceFieldResolutionScale = 1.0;
  (this->DistanceFieldReplacementMesh).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->DistanceFieldReplacementMesh).WeakPtr,(FObjectPtr)&local_res8);
  (this->PhysicsAsset).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PipelineMeshesUtilities).field0_0x0.DebugPtr = (UInterchangePipelineMeshesUtilities *)0x0;
  *(undefined8 *)&this->AssemblyPartMeshUidToFactoryNodeTable = 0;
  *(undefined8 *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x8 = 0;
  *(undefined8 *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x20 = 0;
  this->MaxLumenMeshCards = 0xc;
  this->bImportSkeletalMeshes = true;
  this->bCombineSkeletalMeshes_DEPRECATED = true;
  this->bImportMorphTargets = true;
  this->bMergeMorphTargetsWithSameName = true;
  this->bImportVertexAttributes = false;
  this->bUpdateSkeletonReferencePose = false;
  this->bCreatePhysicsAsset = true;
  this->bUseHighPrecisionSkinWeights = false;
  this->ThresholdPosition = 2e-05;
  this->ThresholdTangentNormal = 2e-05;
  this->ThresholdUV = 0.0009765625;
  this->MorphThresholdPosition = 0.015;
  this->BoneInfluenceLimit = 0;
  this->bImportGeometryCaches = true;
  this->bFlattenTracks = true;
  this->CompressedPositionPrecision = 0.01;
  this->CompressedTextureCoordinatesNumberOfBits = 10;
  this->bOverrideTimeRange = false;
  this->FrameStart = 0;
  this->FrameEnd = 1;
  this->MotionVectors = NoMotionVectors;
  this->bApplyConstantTopologyOptimizations = false;
  this->bStoreImportedVertexNumbers = false;
  this->bOptimizeIndexBuffers = false;
  *(undefined4 *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x28 = 0;
  *(undefined4 *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x2c = 0x80;
  *(undefined4 *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x34 = 0;
  *(undefined8 *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x40 = 0;
  *(undefined4 *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x48 = 0;
  (this->SkeletonFactoryNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletonFactoryNodes).ArrayNum = 0;
  (this->SkeletonFactoryNodes).ArrayMax = 0;
  (this->SkeletalMeshFactoryNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletalMeshFactoryNodes).ArrayNum = 0;
  (this->SkeletalMeshFactoryNodes).ArrayMax = 0;
  (this->StaticMeshFactoryNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMeshFactoryNodes).ArrayNum = 0;
  (this->StaticMeshFactoryNodes).ArrayMax = 0;
  (this->GeometryCacheFactoryNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeometryCacheFactoryNodes).ArrayNum = 0;
  (this->GeometryCacheFactoryNodes).ArrayMax = 0;
  this->BaseNodeContainer = (UInterchangeBaseNodeContainer *)0x0;
  (this->SourceDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceDatas).ArrayNum = 0;
  (this->SourceDatas).ArrayMax = 0;
  return this;
}

// ~UInterchangeGenericMeshPipeline @ 14e76c1e0

void __thiscall
UInterchangeGenericMeshPipeline::~UInterchangeGenericMeshPipeline
          (UInterchangeGenericMeshPipeline *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UInterchangeGenericMeshPipeline__6B_;
  pFVar1 = (this->SourceDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GeometryCacheFactoryNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StaticMeshFactoryNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkeletalMeshFactoryNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkeletonFactoryNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeMeshFactoryNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeMeshFactoryNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeMeshFactoryNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AssemblyPartMeshUidToFactoryNodeTable);
  pFVar1 = (this->LODScreenSizes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  return;
}

// operator() @ 14e76e250

bool __thiscall
`UInterchangeGenericMeshPipeline::CreateSkeletalMeshFactoryNode'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  UInterchangeMeshNode *pUVar7;
  UClass *pUVar8;
  UInterchangeSceneNode *this_00;
  longlong *plVar9;
  FString *pFVar10;
  FString *pFVar11;
  int iVar12;
  undefined1 local_res8 [8];
  FString local_38;
  
  lVar6 = *(longlong *)(*(longlong *)this + 0x1e8);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x120) != *(int *)(lVar6 + 0x14c))) {
    plVar1 = *(longlong **)((longlong)this + 8);
    if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
      plVar9 = (longlong *)plVar1[8];
      if ((longlong *)plVar1[8] == (longlong *)0x0) {
        plVar9 = plVar1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar1[9] - 1U & param_1) * 4);
      if (iVar12 != -1) {
        lVar6 = *plVar1;
        do {
          if (*(int *)((longlong)iVar12 * 0x20 + lVar6) == param_1) {
            if (((iVar12 != -1) && (lVar6 = (longlong)iVar12 * 0x20 + lVar6, lVar6 != 0)) &&
               ((longlong *)(lVar6 + 8) != (longlong *)0x0)) {
              iVar12 = *(int *)(lVar6 + 0x10);
              pFVar10 = *(FString **)(lVar6 + 8);
              pFVar11 = pFVar10 + iVar12;
              while( true ) {
                if (*(int *)(lVar6 + 0x10) != iVar12) {
                  `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_res8);
                }
                if (pFVar10 == pFVar11) break;
                pUVar7 = (UInterchangeMeshNode *)
                         UInterchangeBaseNodeContainer::GetNode
                                   (*(UInterchangeBaseNodeContainer **)(*(longlong *)this + 0x280),
                                    pFVar10);
                if (pUVar7 != (UInterchangeMeshNode *)0x0) {
                  pUVar8 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
                  iVar5 = (int)pUVar8->_padding_;
                  if (((iVar5 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
                      ((longlong *)
                       *(undefined1 **)
                        (*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
                       &pUVar8->_padding_)) &&
                     (iVar5 = UInterchangeMeshNode::GetAssemblyPartDependenciesCount(pUVar7),
                     0 < iVar5)) {
                    return true;
                  }
                }
                this_00 = (UInterchangeSceneNode *)
                          UInterchangeBaseNodeContainer::GetNode
                                    (*(UInterchangeBaseNodeContainer **)(*(longlong *)this + 0x280),
                                     pFVar10);
                if (this_00 != (UInterchangeSceneNode *)0x0) {
                  pUVar8 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
                  iVar5 = (int)pUVar8->_padding_;
                  if ((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
                      &pUVar8->_padding_)) {
                    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_38.Data.ArrayNum = 0;
                    local_38.Data.ArrayMax = 0;
                    bVar3 = UInterchangeSceneNode::GetCustomAssetInstanceUid(this_00,&local_38);
                    if ((bVar3) &&
                       (pUVar7 = (UInterchangeMeshNode *)
                                 UInterchangeBaseNodeContainer::GetNode
                                           (*(UInterchangeBaseNodeContainer **)
                                             (*(longlong *)this + 0x280),&local_38),
                       pUVar7 != (UInterchangeMeshNode *)0x0)) {
                      pUVar8 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
                      iVar5 = (int)pUVar8->_padding_;
                      if (((iVar5 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
                          ((longlong *)
                           *(undefined1 **)
                            (*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
                           &pUVar8->_padding_)) &&
                         (iVar5 = UInterchangeMeshNode::GetAssemblyPartDependenciesCount(pUVar7),
                         0 < iVar5)) {
                        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_38.Data.AllocatorInstance.Data);
                        }
                        return true;
                      }
                    }
                    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_38.Data.AllocatorInstance.Data);
                    }
                  }
                }
                pFVar10 = pFVar10 + 1;
              }
              return false;
            }
            break;
          }
          iVar12 = *(int *)((longlong)iVar12 * 0x20 + 0x18 + lVar6);
        } while (iVar12 != -1);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8235178183205323103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericSkeletalMeshPipeline.cpp"
                       ,0x15f,"MeshUids");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return false;
}

// operator() @ 14e76e4a0

void __thiscall
`UInterchangeGenericMeshPipeline::CreateStaticMeshFactoryNode'::__l2::<lambda_1>::operator()
          (void *this,UInterchangeStaticMeshFactoryNode *param_1)

{
  FString *pFVar1;
  int iVar2;
  bool bVar3;
  UInterchangeSceneNode *this_00;
  UClass *pUVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  bool local_res8 [8];
  FString local_58;
  FString local_48;
  FString local_38;
  TAttributeHandle<FString,void> local_28;
  
  pFVar1 = (FString *)((longlong)this + 8);
  this_00 = (UInterchangeSceneNode *)
            UInterchangeBaseNodeContainer::GetNode
                      (*(UInterchangeBaseNodeContainer **)(*(longlong *)this + 0x280),pFVar1);
  if (this_00 != (UInterchangeSceneNode *)0x0) {
    pUVar4 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar4->_padding_)) {
      pFVar5 = UE::Interchange::FSceneNodeStaticData::GetLodGroupSpecializeTypeString();
      bVar3 = UInterchangeSceneNode::IsSpecializedTypeContains(this_00,pFVar5);
      if (bVar3) {
        pFVar5 = ::FString::FString(&local_38,L"LODGroupSceneNodeUid");
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        if (&local_58 != pFVar5) {
          local_58.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
          (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_58.Data.ArrayNum = (pFVar5->Data).ArrayNum;
          local_58.Data.ArrayMax = (pFVar5->Data).ArrayMax;
          (pFVar5->Data).ArrayNum = 0;
          (pFVar5->Data).ArrayMax = 0;
        }
        UInterchangeBaseNode::RegisterAttribute<FString>
                  ((UInterchangeBaseNode *)param_1,&local_28,(FAttributeKey *)&local_58,pFVar1);
        FVar6.Data = local_58.Data.AllocatorInstance.Data;
        if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
          FVar6.Data = local_58.Data.AllocatorInstance.Data;
        }
      }
      else {
        local_res8[0] = false;
        ::FString::FString(&local_38,L"LODGroup_WithoutLODSpecialization");
        bVar3 = UInterchangeBaseNode::GetAttribute<bool>
                          ((UInterchangeBaseNode *)this_00,&local_38,local_res8);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (!bVar3) {
          return;
        }
        if (local_res8[0] == false) {
          return;
        }
        pFVar5 = ::FString::FString(&local_38,L"LODGroupSceneNodeUid");
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        if (&local_48 != pFVar5) {
          local_48.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
          (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_48.Data.ArrayNum = (pFVar5->Data).ArrayNum;
          local_48.Data.ArrayMax = (pFVar5->Data).ArrayMax;
          (pFVar5->Data).ArrayNum = 0;
          (pFVar5->Data).ArrayMax = 0;
        }
        UInterchangeBaseNode::RegisterAttribute<FString>
                  ((UInterchangeBaseNode *)param_1,&local_28,(FAttributeKey *)&local_48,pFVar1);
        FVar6.Data = local_48.Data.AllocatorInstance.Data;
        if (local_28.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Key.Key.Data.AllocatorInstance.Data);
          FVar6.Data = local_48.Data.AllocatorInstance.Data;
        }
      }
      if (FVar6.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 14e76ec40

void __thiscall
`UInterchangeGenericMeshPipeline::ExecutePreImportPipelineGeometryCache'::__l2::<lambda_1>::
operator()(void *this,FString *param_1,UInterchangeAnimationTrackSetNode *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UInterchangeAnimationTrackSetNode *local_res18 [2];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res18[0] = param_2;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(UInterchangeAnimationTrackSetNode **)(pFVar2->Data + (longlong)iVar5 * 8) = local_res18[0];
  return;
}

// operator() @ 14e76f3b0

void __thiscall
`UInterchangeGenericMeshPipeline::MakeMeshFactoryNodeUidAndDisplayLabel'::__l2::<lambda_1>::
operator()(void *this,UInterchangeBaseNode *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_18;
  
  pFVar3 = UInterchangeBaseNode::GetUniqueID(param_1,&local_18);
  pFVar1 = *(FString **)this;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar3 = UInterchangeBaseNode::GetDisplayLabel(param_1,&local_18);
  pFVar1 = *(FString **)((longlong)this + 8);
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (pFVar1->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14e770a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UInterchangeGenericMeshPipeline::FindAndProcessIdenticalStaticMeshLODGroups'::__l5::<lambda_1>::
operator()(void *this,FString *param_1,TTransform<double> *param_2,bool *param_3,FString *param_4)

{
  code *pcVar1;
  bool bVar2;
  UInterchangeSceneNode *this_00;
  UClass *pUVar3;
  int iVar4;
  undefined1 auStackY_e8 [32];
  FString local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  *param_3 = true;
  this_00 = (UInterchangeSceneNode *)
            UInterchangeBaseNodeContainer::GetNode
                      ((UInterchangeBaseNodeContainer *)**(undefined8 **)this,param_1);
  if (this_00 != (UInterchangeSceneNode *)0x0) {
    pUVar3 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
    iVar4 = (int)pUVar3->_padding_;
    if ((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar3->_padding_)) {
      ::FString::operator=(param_4,param_1);
      return;
    }
  }
  *param_3 = false;
  if (this_00 != (UInterchangeSceneNode *)0x0) {
    pUVar3 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
    iVar4 = (int)pUVar3->_padding_;
    if ((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar3->_padding_)) {
      local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_a8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_a8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      bVar2 = UInterchangeSceneNode::GetCustomGlobalTransform
                        (this_00,(UInterchangeBaseNodeContainer *)**(undefined8 **)this,
                         &UE::Math::TTransform<double>::Identity,&local_a8,false);
      if (bVar2) {
        (param_2->Rotation).XY.m128d_f64[0] = local_a8.Rotation.XY.m128d_f64[0];
        (param_2->Rotation).XY.m128d_f64[1] = local_a8.Rotation.XY.m128d_f64[1];
        (param_2->Rotation).ZW.m128d_f64[0] = local_a8.Rotation.ZW.m128d_f64[0];
        (param_2->Rotation).ZW.m128d_f64[1] = local_a8.Rotation.ZW.m128d_f64[1];
        (param_2->Translation).XY.m128d_f64[0] = local_a8.Translation.XY.m128d_f64[0];
        (param_2->Translation).XY.m128d_f64[1] = local_a8.Translation.XY.m128d_f64[1];
        (param_2->Translation).ZW.m128d_f64[0] = local_a8.Translation.ZW.m128d_f64[0];
        (param_2->Translation).ZW.m128d_f64[1] = local_a8.Translation.ZW.m128d_f64[1];
        (param_2->Scale3D).XY.m128d_f64[0] = local_a8.Scale3D.XY.m128d_f64[0];
        (param_2->Scale3D).XY.m128d_f64[1] = local_a8.Scale3D.XY.m128d_f64[1];
        (param_2->Scale3D).ZW.m128d_f64[0] = local_a8.Scale3D.ZW.m128d_f64[0];
        (param_2->Scale3D).ZW.m128d_f64[1] = local_a8.Scale3D.ZW.m128d_f64[1];
      }
      UE::Interchange::Private::MeshHelper::AddSceneNodeGeometricAndPivotToGlobalTransform
                (param_2,this_00,true,true);
      iVar4 = 0;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      UInterchangeSceneNode::GetCustomAssetInstanceUid(this_00,&local_b8);
      if (local_b8.Data.ArrayNum != 0) {
        iVar4 = local_b8.Data.ArrayNum + -1;
      }
      ::FString::AssignRange(param_4,(wchar_t *)local_b8.Data.AllocatorInstance.Data,iVar4);
      if (local_b8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      return;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6823813803315037190>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericStaticMeshPipeline.cpp"
                     ,0x406,"SceneNode");
  if (!bVar2) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// operator() @ 14e770f40

void __thiscall
`UInterchangeGenericMeshPipeline::GetMeshesInformationFromTranslatedData'::__l6::<lambda_1>::
operator()(void *this,FString *param_1,UInterchangeMeshNode *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  
  bVar4 = UInterchangeMeshNode::IsMorphTarget(param_2);
  if (!bVar4) {
    if (param_2 != (UInterchangeMeshNode *)0x0) {
      pUVar6 = Z_Construct_UClass_UInterchangeGeometryCacheNode_NoRegister();
      iVar5 = (int)pUVar6->_padding_;
      if ((iVar5 <= *(int *)(param_2->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar6->_padding_)) {
        **(undefined1 **)((longlong)this + 8) = 1;
        return;
      }
    }
    bVar4 = UInterchangeMeshNode::IsSkinnedMesh(param_2);
    if (bVar4) {
      **(undefined1 **)this = 1;
      return;
    }
    pFVar2 = *(ForAnyElementType **)((longlong)this + 0x10);
    if ((pFVar2->Data <= param_1) &&
       (param_1 < pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar5 + 1;
    ::FString::FString((FString *)(pFVar2->Data + (longlong)iVar5 * 0x10),param_1);
  }
  return;
}

// operator() @ 14e771740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UInterchangeGenericMeshPipeline::ExecutePreImportPipelineStaticMesh'::__l63::<lambda_1>::operator()
          (void *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  UInterchangeBaseNodeContainer *pUVar4;
  UObject *pUVar5;
  code *pcVar6;
  longlong *plVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  TTuple<FString,FInterchangeMeshInstance> *pTVar10;
  uint *puVar11;
  FScriptContainerElement *pFVar12;
  TTuple<FString,FInterchangeMeshGeometry> *pTVar13;
  TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar14;
  longlong lVar15;
  ForElementType<FSetElementId> FVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  FString *pFVar19;
  ForAnyElementType *pFVar20;
  uint uVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  uint uVar24;
  FString *pFVar25;
  int iVar26;
  undefined1 *puVar27;
  uint *puVar28;
  bool bVar29;
  TBitArray<FDefaultBitArrayAllocator> *pTVar30;
  bool bVar31;
  undefined1 auStackY_278 [32];
  bool local_228;
  undefined1 local_227;
  char local_226;
  undefined1 local_225;
  undefined1 local_224;
  undefined1 local_223 [3];
  uint local_220;
  uint local_21c;
  UInterchangeStaticMeshFactoryNode *local_218;
  uint local_210;
  int local_20c;
  int local_208;
  int local_204;
  uint local_200;
  FScriptContainerElement *local_1f8;
  int local_1f0;
  int local_1ec;
  UObject *local_1e8;
  UObject *local_1e0;
  uint *local_1d8;
  TBitArray<FDefaultBitArrayAllocator> *local_1d0;
  longlong *local_1c8;
  uint *local_1c0;
  longlong *local_1b8;
  uint *local_1b0;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_1a8;
  FScriptContainerElement *local_1a0;
  undefined1 *local_198;
  int iStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  undefined1 local_138 [24];
  FString local_120 [2];
  undefined4 local_f4;
  TSet<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_e8;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  lVar15 = *(longlong *)this;
  local_220 = 0;
  bVar29 = false;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  bVar31 = *(bool *)(lVar15 + 0x15a);
  pUVar4 = *(UInterchangeBaseNodeContainer **)(lVar15 + 0x280);
  local_1e8 = *(UObject **)(lVar15 + 0x1e8);
  local_228 = false;
  local_226 = param_2;
  local_1b8 = this;
  local_1a8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_1e8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1e8);
  }
  BuildMeshToCollisionMeshMap
            ((TObjectPtr<UInterchangePipelineMeshesUtilities>)&local_1e8,pUVar4,param_1,
             (TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
              *)&local_98,bVar31);
  local_200 = param_1->ArrayNum;
  uVar9 = (ulonglong)(int)local_200;
  pFVar12 = (param_1->AllocatorInstance).Data;
  local_1a0 = pFVar12 + uVar9 * 0x10;
  do {
    pFVar17 = local_1a0;
    local_1f8 = pFVar12;
    if (param_1->ArrayNum != (int)uVar9) {
      local_227 = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_227);
    }
    if (pFVar12 == pFVar17) {
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      return bVar29;
    }
    lVar15 = *(longlong *)this;
    bVar31 = *(bool *)(lVar15 + 0x15a);
    pUVar4 = *(UInterchangeBaseNodeContainer **)(lVar15 + 0x280);
    pUVar5 = *(UObject **)(lVar15 + 0x1e8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_1e0 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    GetCollisionMeshType
              ((TTuple<EInterchangeMeshCollision,FString> *)local_138,
               (TObjectPtr<UInterchangePipelineMeshesUtilities>)&local_1e0,pUVar4,(FString *)pFVar12
               ,param_1,bVar31);
    if (local_138[0] == -1) {
LAB_14e7718fa:
      bVar31 = false;
    }
    else {
      iVar26 = (int)local_138._16_8_;
      if (iVar26 == *(int *)(pFVar12 + 8)) {
        if (iVar26 < 2) goto LAB_14e7718fa;
        iVar26 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)local_138._8_8_,*(wchar_t **)&pFVar12->field_0x0);
        bVar31 = iVar26 == 0;
      }
      else {
        bVar31 = iVar26 + *(int *)(pFVar12 + 8) == 1;
      }
      if (bVar31) goto LAB_14e7718fa;
      bVar31 = true;
    }
    if ((wchar_t *)local_138._8_8_ != (wchar_t *)0x0) {
      FMemory::Free((void *)local_138._8_8_);
    }
    if (bVar31) {
      uVar9 = (ulonglong)local_200;
      pFVar12 = pFVar12 + 0x10;
    }
    else {
      local_e8.Elements._0_8_ = 0;
      local_e8.Elements._8_8_ = 0;
      local_e8.Elements._32_8_ = 0;
      iVar26 = 0;
      local_e8.Elements._40_4_ = 0;
      local_e8.Elements._44_4_ = 0x80;
      local_e8.Elements._48_4_ = 0xffffffff;
      local_e8.Elements._52_4_ = 0;
      local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_e8.HashSize = 0;
      if (local_226 == '\0') {
        pTVar13 = TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                          *)(*(longlong *)(*(longlong *)this + 0x1e8) + 0x28),(FString *)pFVar12);
        if ((pTVar13 == (TTuple<FString,FInterchangeMeshGeometry> *)0x0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x27b,L""), bVar31)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        puVar27 = &pTVar13->field_0x10;
        if (local_e8.Elements._8_4_ != local_e8.Elements._52_4_) {
          FVar16 = (ForElementType<FSetElementId>)&local_e8.Hash;
          if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar16 = local_e8.Hash.SecondaryData;
          }
          uVar24 = *(uint *)((longlong)FVar16 + (ulonglong)(local_e8.HashSize - 1U & local_220) * 4)
          ;
          while (uVar24 != 0xffffffff) {
            puVar28 = (uint *)((longlong)(int)uVar24 * 0x20 + local_e8.Elements._0_8_);
            if (*puVar28 == local_220) {
              if (puVar28 != (uint *)0x0) goto LAB_14e771e31;
              break;
            }
            uVar24 = puVar28[6];
          }
        }
        local_1c0 = &local_220;
        TSet<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                  (&local_e8,(uint)&local_208,(TKeyInitializer<int_const_&> *)(ulonglong)local_220,
                   (bool *)&local_1c0);
        puVar28 = (uint *)((longlong)local_208 * 0x20 + local_e8.Elements._0_8_);
LAB_14e771e31:
        if (((*(undefined1 **)(puVar28 + 2) <= puVar27) &&
            (puVar27 < *(undefined1 **)(puVar28 + 2) + (longlong)(int)puVar28[5] * 0x10)) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar31)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        uVar24 = puVar28[4];
        if (uVar24 == puVar28[5]) {
          uVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)(puVar28 + 2),(int *)(puVar28 + 5));
        }
        puVar28[4] = uVar24 + 1;
        ::FString::FString((FString *)
                           (((ForAnyElementType *)(puVar28 + 2))->Data +
                           (longlong)(int)uVar24 * 0x10),(FString *)puVar27);
      }
      else {
        pTVar10 = TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
                          *)(*(longlong *)(*(longlong *)this + 0x1e8) + 0x78),(FString *)pFVar12);
        if ((pTVar10 == (TTuple<FString,FInterchangeMeshInstance> *)0x0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x27b,L""), bVar31)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        iVar2 = *(int *)&pTVar10->field_0x58;
        pTVar30 = (TBitArray<FDefaultBitArrayAllocator> *)&pTVar10->field_0x40;
        plVar23 = (longlong *)&pTVar10->field_0x30;
        uStack_18c = 1;
        local_178 = 0;
        iStack_17c = local_178;
        if (iVar2 != 0) {
          puVar28 = (uint *)pTVar30;
          if (*(uint **)&pTVar10->field_0x50 != (uint *)0x0) {
            puVar28 = *(uint **)&pTVar10->field_0x50;
          }
          uVar24 = *puVar28;
          local_178 = 0;
          iVar26 = 0;
          while (uVar24 == 0) {
            lVar15 = (longlong)iVar26;
            local_178 = local_178 + 0x20;
            iVar26 = iVar26 + 1;
            iStack_17c = iVar2;
            if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar26) goto LAB_14e771a3e;
            uVar24 = puVar28[lVar15 + 1];
          }
          uStack_18c = -uVar24 & uVar24;
          uVar9 = (ulonglong)uStack_18c * 2 + 1;
          lVar15 = 0x3f;
          if (uVar9 != 0) {
            for (; uVar9 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_1f0 = (int)lVar15;
          iStack_17c = local_178 + -1 + local_1f0;
          if (iVar2 < iStack_17c) {
            iStack_17c = iVar2;
          }
        }
LAB_14e771a3e:
        uVar24 = *(uint *)&pTVar10->field_0x58;
        uStack_174 = local_f4;
        iStack_170 = *(int *)&pTVar10->field_0x38 - *(int *)&pTVar10->field_0x64;
        uVar21 = uVar24 & 0xffffffe0;
        TStack_160._padding_ = CONCAT44(uStack_18c,iVar26);
        uStack_180 = 0xffffffff;
        TStack_160.CurrentBitIndex = iStack_17c;
        TStack_160.UnvisitedBitMask = 0xffffffff;
        iVar18 = (int)uVar24 >> 5;
        TStack_160._28_4_ = local_f4;
        TStack_160.BaseBitIndex = local_178;
        uStack_140 = CONCAT44(uStack_16c,iStack_170);
        local_21c = uVar24;
        local_1d0 = pTVar30;
        local_1c8 = plVar23;
        local_198 = (undefined1 *)plVar23;
        iStack_190 = iVar26;
        local_188 = (undefined1 *)pTVar30;
        local_168 = plVar23;
        TStack_160.Array = pTVar30;
        if ((((int)uVar24 < 0) || (iVar2 < (int)uVar24)) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar31)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        uVar3 = *(uint *)&pTVar10->field_0x58;
        if (uVar24 != uVar3) {
          puVar27 = (undefined1 *)pTVar30;
          if (*(undefined1 **)&pTVar10->field_0x50 != (undefined1 *)0x0) {
            puVar27 = *(undefined1 **)&pTVar10->field_0x50;
          }
          uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar18 * 4);
          while (uVar24 == 0) {
            lVar15 = (longlong)iVar18;
            uVar21 = uVar21 + 0x20;
            iVar18 = iVar18 + 1;
            uVar24 = uVar3;
            local_21c = uVar3;
            if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
            goto LAB_14e771b51;
            uVar24 = *(uint *)(puVar27 + lVar15 * 4 + 4);
          }
          uVar9 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
          lVar15 = 0x3f;
          if (uVar9 != 0) {
            for (; uVar9 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_1ec = (int)lVar15;
          uVar24 = (uVar21 - 1) + local_1ec;
          local_21c = uVar24;
          if ((int)uVar3 < (int)uVar24) {
            uVar24 = uVar3;
            local_21c = uVar3;
          }
        }
LAB_14e771b51:
        while( true ) {
          plVar7 = local_168;
          if ((int)local_168[1] - *(int *)((longlong)local_168 + 0x34) != (int)uStack_140) {
            local_225 = 0;
            `TSparseArray<TSparseSetElement<TTuple<int,FInterchangeLodSceneNodeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_225);
          }
          if (((TStack_160.CurrentBitIndex == uVar24) && (TStack_160.Array == pTVar30)) &&
             (pFVar12 = local_1f8, this = local_1b8, bVar29 = local_228, plVar7 == plVar23)) break;
          puVar28 = (uint *)((longlong)TStack_160.CurrentBitIndex * 0x20 + *plVar7);
          local_210 = *puVar28;
          if (local_e8.Elements._8_4_ != local_e8.Elements._52_4_) {
            FVar16 = (ForElementType<FSetElementId>)&local_e8.Hash;
            if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar16 = local_e8.Hash.SecondaryData;
            }
            uVar24 = *(uint *)((longlong)FVar16 +
                              (ulonglong)(local_e8.HashSize - 1U & local_210) * 4);
            while (uVar24 != 0xffffffff) {
              puVar11 = (uint *)((longlong)(int)uVar24 * 0x20 + local_e8.Elements._0_8_);
              if (*puVar11 == local_210) {
                if (puVar11 != (uint *)0x0) goto LAB_14e771c34;
                break;
              }
              uVar24 = puVar11[6];
            }
          }
          local_1d8 = &local_210;
          TSet<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                    (&local_e8,(uint)&local_20c,(TKeyInitializer<int_const_&> *)(ulonglong)local_210
                     ,(bool *)&local_1d8);
          puVar11 = (uint *)((longlong)local_20c * 0x20 + local_e8.Elements._0_8_);
LAB_14e771c34:
          puVar22 = *(undefined8 **)(puVar28 + 2);
          pFVar20 = (ForAnyElementType *)(puVar11 + 2);
          uVar24 = puVar28[4];
          puVar1 = puVar22 + (int)uVar24;
          while( true ) {
            if (puVar28[4] != uVar24) {
              local_224 = 0;
              `TCheckedPointerIterator<TObjectPtr<UInterchangeBaseNode_const_>_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_224);
            }
            if (puVar22 == puVar1) break;
            pFVar12 = (FScriptContainerElement *)
                      UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)*puVar22,local_120);
            if (((pFVar20->Data <= pFVar12) &&
                (pFVar12 < pFVar20->Data + (longlong)(int)puVar11[5] * 0x10)) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar31)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            uVar21 = puVar11[4];
            if (uVar21 == puVar11[5]) {
              uVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,pFVar20,(int *)(puVar11 + 5));
              puVar11[4] = uVar21;
            }
            puVar11[4] = uVar21 + 1;
            pFVar17 = pFVar20->Data + (longlong)(int)uVar21 * 0x10;
            *(undefined8 *)pFVar17 = 0;
            *(undefined8 *)pFVar17 = *(undefined8 *)pFVar12;
            *(undefined8 *)pFVar12 = 0;
            *(undefined4 *)(pFVar17 + 8) = *(undefined4 *)(pFVar12 + 8);
            *(undefined4 *)(pFVar17 + 0xc) = *(undefined4 *)(pFVar12 + 0xc);
            *(undefined8 *)(pFVar12 + 8) = 0;
            if (local_120[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_120[0].Data.AllocatorInstance.Data);
            }
            puVar22 = puVar22 + 1;
          }
          TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
          plVar23 = local_1c8;
          pTVar30 = local_1d0;
          uVar24 = local_21c;
        }
      }
      if (0 < (int)(local_e8.Elements._8_4_ - local_e8.Elements._52_4_)) {
        if (*(char *)(*(longlong *)this + 0x159) != '\0') {
          pTVar14 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    ::Find(&local_98,(FString *)pFVar12);
          plVar23 = (longlong *)&pTVar14->field_0x10;
          if (pTVar14 == (TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_> *)0x0) {
            plVar23 = (longlong *)0x0;
          }
          if (plVar23 != (longlong *)0x0) {
            if (local_e8.Elements._8_4_ != local_e8.Elements._52_4_) {
              FVar16 = (ForElementType<FSetElementId>)&local_e8.Hash;
              if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar16 = local_e8.Hash.SecondaryData;
              }
              uVar24 = *(uint *)((longlong)FVar16 +
                                (ulonglong)(local_e8.HashSize - 1U & local_220) * 4);
              while (uVar24 != 0xffffffff) {
                puVar28 = (uint *)((longlong)(int)uVar24 * 0x20 + local_e8.Elements._0_8_);
                if (*puVar28 == local_220) {
                  if (puVar28 != (uint *)0x0) goto LAB_14e771fc1;
                  break;
                }
                uVar24 = puVar28[6];
              }
            }
            local_1b0 = &local_220;
            TSet<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                      (&local_e8,(uint)&local_204,
                       (TKeyInitializer<int_const_&> *)(ulonglong)local_220,(bool *)&local_1b0);
            puVar28 = (uint *)((longlong)local_204 * 0x20 + local_e8.Elements._0_8_);
LAB_14e771fc1:
            lVar15 = plVar23[1];
            pFVar19 = (FString *)*plVar23;
            pFVar25 = pFVar19 + (int)lVar15;
            while( true ) {
              if ((int)plVar23[1] != (int)lVar15) {
                local_223[0] = 0;
                `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_223);
              }
              if (pFVar19 == pFVar25) break;
              TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                        ((TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar28 + 2),pFVar19);
              pFVar19 = pFVar19 + 1;
            }
          }
        }
        local_218 = UInterchangeGenericMeshPipeline::CreateStaticMeshFactoryNode
                              (*(UInterchangeGenericMeshPipeline **)this,
                               (TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                                *)&local_e8,(FString *)pFVar12);
        bVar29 = local_228;
        if (local_218 != (UInterchangeStaticMeshFactoryNode *)0x0) {
          lVar15 = *(longlong *)this;
          pFVar20 = (ForAnyElementType *)(lVar15 + 0x260);
          if (((pFVar20->Data <= (FScriptContainerElement *)&local_218) &&
              ((FScriptContainerElement *)&local_218 <
               pFVar20->Data + (longlong)*(int *)(lVar15 + 0x26c) * 8)) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar31)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          iVar26 = *(int *)(lVar15 + 0x268);
          if (iVar26 == *(int *)(lVar15 + 0x26c)) {
            iVar26 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,pFVar20,(int *)(lVar15 + 0x26c));
          }
          *(int *)(lVar15 + 0x268) = iVar26 + 1;
          *(UInterchangeStaticMeshFactoryNode **)(pFVar20->Data + (longlong)iVar26 * 8) = local_218;
          UInterchangeGenericMeshPipeline::UpdateAssemblyPartDependencyTable
                    (*(UInterchangeGenericMeshPipeline **)this,
                     (UInterchangeMeshFactoryNode *)local_218,
                     (TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                      *)&local_e8);
          local_228 = true;
          bVar29 = true;
        }
      }
      local_e8.HashSize = 0;
      if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_e8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_e8.Elements);
      uVar9 = (ulonglong)local_200;
      pFVar12 = pFVar12 + 0x10;
      param_1 = local_1a8;
    }
  } while( true );
}

// operator() @ 14e772e70

UInterchangeBaseNode * __thiscall
`UInterchangeGenericMeshPipeline::CreateSkeletalMeshFactoryNode'::__l2::<lambda_2>::operator()
          (void *this,int param_1,FString *param_2,int *param_3)

{
  void *pvVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UInterchangeBaseNode *pUVar7;
  UInterchangeSceneNode *this_00;
  UClass *pUVar8;
  wchar_t *pwVar9;
  FString *pFVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ForAnyElementType FVar16;
  longlong lVar17;
  longlong *plVar18;
  FString local_98;
  ForAnyElementType local_88;
  int local_80 [2];
  FString local_78;
  FString local_68;
  void *local_58;
  int local_50 [4];
  int *piVar15;
  
  uVar12 = 0;
  *param_3 = 0;
  plVar18 = *(longlong **)((longlong)this + 8);
  if ((int)plVar18[1] != *(int *)((longlong)plVar18 + 0x34)) {
    plVar11 = (longlong *)plVar18[8];
    if ((longlong *)plVar18[8] == (longlong *)0x0) {
      plVar11 = plVar18 + 7;
    }
    iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar18[9] - 1U & param_1) * 4);
    if (iVar6 != -1) {
      lVar17 = *plVar18;
      do {
        if (*(int *)((longlong)iVar6 * 0x20 + lVar17) == param_1) {
          if (((iVar6 != -1) && (lVar17 = (longlong)iVar6 * 0x20 + lVar17, lVar17 != 0)) &&
             (plVar18 = (longlong *)(lVar17 + 8), plVar18 != (longlong *)0x0)) {
            uVar13 = 1;
            if (*(int *)(lVar17 + 0x10) < 1) {
              bVar3 = true;
              bVar4 = false;
              local_58 = (void *)0x0;
              local_50[0] = 0;
              local_50[1] = 0;
              FVar16.Data = (FScriptContainerElement *)0x0;
              piVar15 = local_50;
            }
            else {
              bVar3 = false;
              bVar4 = true;
              local_88.Data = (FScriptContainerElement *)0x0;
              iVar6 = *(int *)((undefined8 *)*plVar18 + 1);
              pvVar1 = *(void **)*plVar18;
              local_80[0] = iVar6;
              if (iVar6 == 0) {
                piVar15 = local_80;
                local_80[1] = 0;
                FVar16.Data = (FScriptContainerElement *)0x0;
                bVar4 = true;
                bVar3 = false;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar6,0,&local_88,iVar6,local_80 + 1);
                memcpy(local_88.Data,pvVar1,(longlong)iVar6 * 2);
                piVar15 = local_80;
                FVar16.Data = local_88.Data;
              }
            }
            pvVar1 = local_58;
            local_98.Data.ArrayNum = *piVar15;
            lVar14 = (longlong)local_98.Data.ArrayNum;
            local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_98.Data.ArrayNum == 0) {
              local_98.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_98.Data.ArrayNum,0,(ForAnyElementType *)&local_98,
                         local_98.Data.ArrayNum,&local_98.Data.ArrayMax);
              memcpy(local_98.Data.AllocatorInstance.Data,FVar16.Data,lVar14 * 2);
            }
            if ((bVar3) && (pvVar1 != (void *)0x0)) {
              FMemory::Free(pvVar1);
            }
            if ((bVar4) && (local_88.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_88.Data);
            }
            iVar6 = *(int *)(lVar17 + 0x10);
            if (1 < iVar6) {
              lVar14 = 0x10;
              do {
                uVar5 = uVar12;
                if ((int)uVar13 < iVar6) {
                  uVar5 = ~uVar13 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  pUVar7 = (UInterchangeBaseNode *)(*pcVar2)();
                  return pUVar7;
                }
                FVar16.Data = (FScriptContainerElement *)L"";
                if (local_98.Data.ArrayNum != 0) {
                  FVar16.Data = local_98.Data.AllocatorInstance.Data;
                }
                if (*(int *)(lVar14 + 8 + *plVar18) == 0) {
                  pwVar9 = L"";
                }
                else {
                  pwVar9 = *(wchar_t **)(lVar14 + *plVar18);
                }
                iVar6 = FGenericPlatformStricmp::Stricmp(pwVar9,(wchar_t *)FVar16.Data);
                if (iVar6 < 0) {
                  uVar5 = 0;
                  if ((int)uVar13 < *(int *)(lVar17 + 0x10)) {
                    uVar5 = ~uVar13 >> 0x1f;
                  }
                  if ((uVar5 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    pUVar7 = (UInterchangeBaseNode *)(*pcVar2)();
                    return pUVar7;
                  }
                  pFVar10 = (FString *)(*plVar18 + lVar14);
                  if (&local_98 != pFVar10) {
                    iVar6 = (pFVar10->Data).ArrayNum;
                    _Src = (pFVar10->Data).AllocatorInstance.Data;
                    local_98.Data.ArrayNum = iVar6;
                    if ((iVar6 == 0) && (local_98.Data.ArrayMax == 0)) {
                      local_98.Data.ArrayMax = 0;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (2,2,iVar6,local_98.Data.ArrayMax,(ForAnyElementType *)&local_98,
                                 iVar6,&local_98.Data.ArrayMax);
                      if (iVar6 != 0) {
                        memcpy(local_98.Data.AllocatorInstance.Data,_Src,(longlong)iVar6 * 2);
                      }
                    }
                  }
                }
                iVar6 = *(int *)(lVar17 + 0x10);
                uVar13 = uVar13 + 1;
                lVar14 = lVar14 + 0x10;
              } while ((int)uVar13 < iVar6);
            }
            if (local_98.Data.ArrayNum < 2) goto LAB_14e773381;
            this_00 = (UInterchangeSceneNode *)
                      UInterchangeBaseNodeContainer::GetNode
                                (*(UInterchangeBaseNodeContainer **)(*(longlong *)this + 0x280),
                                 &local_98);
            if (this_00 != (UInterchangeSceneNode *)0x0) {
              pUVar8 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
              iVar6 = (int)pUVar8->_padding_;
              if ((iVar6 <= *(int *)(this_00->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8)
                  == &pUVar8->_padding_)) {
                if (local_98.Data.ArrayNum != 0) {
                  uVar12 = local_98.Data.ArrayNum - 1;
                }
                ::FString::AssignRange
                          (param_2,(wchar_t *)local_98.Data.AllocatorInstance.Data,uVar12);
                goto LAB_14e773354;
              }
            }
            this_00 = (UInterchangeSceneNode *)
                      UInterchangeBaseNodeContainer::GetNode
                                (*(UInterchangeBaseNodeContainer **)(*(longlong *)this + 0x280),
                                 &local_98);
            if (this_00 == (UInterchangeSceneNode *)0x0) {
LAB_14e7732c4:
              this_00 = (UInterchangeSceneNode *)
                        UInterchangeBaseNodeContainer::GetNode
                                  (*(UInterchangeBaseNodeContainer **)(*(longlong *)this + 0x280),
                                   &local_98);
              if (this_00 == (UInterchangeSceneNode *)0x0) {
LAB_14e773381:
                if (local_98.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                  return (UInterchangeBaseNode *)0x0;
                }
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
                return (UInterchangeBaseNode *)0x0;
              }
              pUVar8 = Z_Construct_UClass_UInterchangeInstancedStaticMeshComponentNode_NoRegister();
              iVar6 = (int)pUVar8->_padding_;
              if ((*(int *)(this_00->_padding_ + 0x38) < iVar6) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8)
                  != &pUVar8->_padding_)) goto LAB_14e773381;
              local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_68.Data.ArrayNum = 0;
              local_68.Data.ArrayMax = 0;
              bVar4 = UInterchangeInstancedStaticMeshComponentNode::GetCustomInstancedAssetUid
                                ((UInterchangeInstancedStaticMeshComponentNode *)this_00,&local_68);
              if (!bVar4) {
                if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_68.Data.AllocatorInstance.Data);
                }
                goto LAB_14e773381;
              }
              *param_3 = *(int *)(lVar17 + 0x10);
              if (local_68.Data.ArrayNum != 0) {
                uVar12 = local_68.Data.ArrayNum - 1;
              }
              ::FString::AssignRange(param_2,(wchar_t *)local_68.Data.AllocatorInstance.Data,uVar12)
              ;
              FVar16.Data = local_68.Data.AllocatorInstance.Data;
            }
            else {
              pUVar8 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
              iVar6 = (int)pUVar8->_padding_;
              if ((*(int *)(this_00->_padding_ + 0x38) < iVar6) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8)
                  != &pUVar8->_padding_)) goto LAB_14e7732c4;
              local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_78.Data.ArrayNum = 0;
              local_78.Data.ArrayMax = 0;
              bVar4 = UInterchangeSceneNode::GetCustomAssetInstanceUid(this_00,&local_78);
              if (!bVar4) {
                if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_78.Data.AllocatorInstance.Data);
                }
                goto LAB_14e7732c4;
              }
              *param_3 = *(int *)(lVar17 + 0x10);
              if (local_78.Data.ArrayNum != 0) {
                uVar12 = local_78.Data.ArrayNum - 1;
              }
              ::FString::AssignRange(param_2,(wchar_t *)local_78.Data.AllocatorInstance.Data,uVar12)
              ;
              FVar16.Data = local_78.Data.AllocatorInstance.Data;
            }
            if (FVar16.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar16.Data);
            }
LAB_14e773354:
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
            return (UInterchangeBaseNode *)this_00;
          }
          break;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + lVar17);
      } while (iVar6 != -1);
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8235178183205323139>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericSkeletalMeshPipeline.cpp"
                     ,0x183,"MeshUids");
  if (!bVar4) {
    return (UInterchangeBaseNode *)0x0;
  }
  pcVar2 = (code *)swi(3);
  pUVar7 = (UInterchangeBaseNode *)(*pcVar2)();
  return pUVar7;
}

// operator() @ 14e773550

void __thiscall
`UInterchangeGenericMeshPipeline::MakeMeshFactoryNodeUidAndDisplayLabel'::__l2::<lambda_2>::
operator()(void *this,UInterchangeSceneNode *param_1,bool *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FString *pFVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  pFVar3 = UE::Interchange::FSceneNodeStaticData::GetLodGroupSpecializeTypeString();
  bVar2 = UInterchangeSceneNode::IsSpecializedTypeContains(param_1,pFVar3);
  *param_2 = bVar2;
  pFVar3 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_1,&local_18);
  pwVar5 = L"\\MeshInstance\\";
  if (*param_2 != false) {
    pwVar5 = L"\\MeshLODGroupInstance\\";
  }
  ::FString::ConcatCF(&local_28,pwVar5,pFVar3);
  pFVar3 = *(FString **)this;
  if (pFVar3 != &local_28) {
    pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar3->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Data).ArrayNum = local_28.Data.ArrayNum;
    (pFVar3->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar4 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_18);
  pFVar3 = *(FString **)((longlong)this + 8);
  if (pFVar3 != pFVar4) {
    pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (pFVar3->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14e773680

void __thiscall
`UInterchangeGenericMeshPipeline::FindAndProcessIdenticalStaticMeshLODGroups'::__l5::<lambda_2>::
operator()(void *this,FLODGroupIIHelper *param_1)

{
  int *piVar1;
  longlong *plVar2;
  UInterchangeStaticMeshFactoryNode *this_00;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FString *pFVar8;
  void *pvVar9;
  UInterchangeStaticMeshFactoryNode **ppUVar10;
  void *this_01;
  undefined1 local_res8 [8];
  FString local_28;
  
  plVar2 = *(longlong **)this;
  lVar5 = plVar2[1];
  this_01 = (void *)*plVar2;
  pvVar9 = (void *)((longlong)(int)lVar5 * 0x68 + (longlong)this_01);
  while( true ) {
    if ((int)plVar2[1] != (int)lVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<`UInterchangeGenericMeshPipeline::FindAndProcessIdenticalStaticMeshLODGroups'::__l5::FLODGroupIIHelper,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_01 == pvVar9) break;
    bVar6 = FLODGroupIIHelper::DataEquals(this_01,param_1);
    if (bVar6) {
      ppUVar10 = &param_1->LODGroupStaticMeshFactoryNode;
      if (((*(undefined1 **)((longlong)this_01 + 0x58) <= ppUVar10) &&
          (ppUVar10 <
           *(undefined1 **)((longlong)this_01 + 0x58) +
           (longlong)*(int *)((longlong)this_01 + 100) * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)((longlong)this_01 + 0x60);
      if (iVar7 == *(int *)((longlong)this_01 + 100)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)((longlong)this_01 + 0x58),
                           (int *)((longlong)this_01 + 100));
      }
      *(int *)((longlong)this_01 + 0x60) = iVar7 + 1;
      *(UInterchangeStaticMeshFactoryNode **)
       (*(longlong *)((longlong)this_01 + 0x58) + (longlong)iVar7 * 8) = *ppUVar10;
      UInterchangeBaseNode::SetEnabled((UInterchangeBaseNode *)*ppUVar10,false);
      this_00 = *ppUVar10;
      pFVar8 = UInterchangeBaseNode::GetUniqueID
                         (*(UInterchangeBaseNode **)((longlong)this_01 + 0x50),&local_28);
      UInterchangeStaticMeshFactoryNode::SetCustomSubstituteUID(this_00,pFVar8);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return;
    }
    this_01 = (void *)((longlong)this_01 + 0x68);
  }
  pFVar3 = *(ForAnyElementType **)this;
  if ((((FLODGroupIIHelper *)pFVar3->Data <= param_1) &&
      (param_1 < (FLODGroupIIHelper *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar7 + 1;
  FLODGroupIIHelper::FLODGroupIIHelper(pFVar3->Data + (longlong)iVar7 * 0x68,param_1);
  return;
}

// operator() @ 14e773870

bool __thiscall
`UInterchangeGenericMeshPipeline::GetMeshesInformationFromTranslatedData'::__l6::<lambda_2>::
operator()(void *this,FString *param_1,UInterchangeTransformAnimationTrackNode *param_2)

{
  undefined1 uVar1;
  int iVar2;
  bool bVar3;
  UInterchangeSceneNode *pUVar4;
  UClass *pUVar5;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar3 = UInterchangeAnimationTrackNode::GetCustomActorDependencyUid
                    ((UInterchangeAnimationTrackNode *)param_2,&local_18);
  if ((bVar3) &&
     (pUVar4 = (UInterchangeSceneNode *)
               UInterchangeBaseNodeContainer::GetNode
                         ((UInterchangeBaseNodeContainer *)**(undefined8 **)this,&local_18),
     pUVar4 != (UInterchangeSceneNode *)0x0)) {
    pUVar5 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       (((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8)
         == &pUVar5->_padding_ &&
        (bVar3 = UInterchangeGenericMeshPipeline::IsImpactingAnyMeshesRecursive
                           (pUVar4,(UInterchangeBaseNodeContainer *)**(undefined8 **)this,
                            *(TArray<FString,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10)
                            ,*(TMap<UInterchangeSceneNode_const_*,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInterchangeSceneNode_const_*,bool,0>_>
                               **)((longlong)this + 0x18)), bVar3)))) {
      **(undefined1 **)((longlong)this + 8) = 1;
    }
  }
  uVar1 = **(undefined1 **)((longlong)this + 8);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (bool)uVar1;
}

// operator() @ 14e775210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UInterchangeGenericMeshPipeline::FindAndProcessIdenticalStaticMeshLODGroups'::__l5::<lambda_3>::
operator()(void *this,FString *param_1,UInterchangeStaticMeshFactoryNode *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  bool bVar13;
  bool bVar14;
  undefined4 extraout_EAX;
  uint uVar15;
  uint uVar16;
  UInterchangeBaseNode *pUVar17;
  UClass *pUVar18;
  UInterchangeStaticMeshLodDataNode *this_00;
  UInterchangeSceneNode *this_01;
  int iVar19;
  void *pvVar20;
  ForAnyElementType FVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  ForAnyElementType FVar24;
  int iVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  double dVar48;
  undefined4 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined4 uVar52;
  undefined4 uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  undefined1 auStackY_458 [32];
  undefined1 local_418;
  bool local_417 [7];
  FString local_410;
  TArray<FString,TSizedDefaultAllocator<32>_> local_400;
  TArray<FString,TSizedDefaultAllocator<32>_> local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  ulonglong local_3b0;
  FString local_3a8;
  undefined8 *local_398;
  FString local_390;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  undefined1 local_338 [64];
  ForElementType<FSetElementId> local_2f8;
  int local_2f0;
  UInterchangeStaticMeshFactoryNode *local_2e8;
  ForAnyElementType local_2e0;
  undefined8 local_2d8;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_458;
  local_3c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3c0.Data.ArrayNum = 0;
  local_3c0.Data.ArrayMax = 0;
  local_398 = this;
  ::FString::FString(&local_390,L"LODGroupSceneNodeUid");
  bVar13 = UInterchangeBaseNode::GetAttribute<FString>
                     ((UInterchangeBaseNode *)param_2,&local_390,&local_3c0);
  if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.Data.AllocatorInstance.Data);
  }
  if ((bVar13) &&
     (pUVar17 = UInterchangeBaseNodeContainer::GetNode
                          ((UInterchangeBaseNodeContainer *)**(undefined8 **)this,&local_3c0),
     pUVar17 != (UInterchangeBaseNode *)0x0)) {
    pUVar18 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
    iVar19 = (int)pUVar18->_padding_;
    if ((iVar19 <= *(int *)(pUVar17->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar19 * 8) ==
        &pUVar18->_padding_)) {
      pvVar20 = *(void **)((longlong)this + 8);
      local_268.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_268.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_338._0_8_ = 0;
      local_338._8_8_ = 0;
      local_338._32_8_ = 0;
      local_338._40_4_ = 0;
      local_268.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_268.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_338._44_4_ = 0x80;
      local_338._48_4_ = 0xffffffff;
      local_338._52_4_ = 0;
      local_2f8 = (ForElementType<FSetElementId>)0x0;
      local_2f0 = 0;
      local_268.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_268.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_2e0.Data = (FScriptContainerElement *)0x0;
      local_2d8._0_4_ = 0;
      local_2d8._4_4_ = 0;
      local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3a8.Data.ArrayNum = 0;
      local_3a8.Data.ArrayMax = 0;
      local_268.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_268.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_268.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_268.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_268.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_268.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_2e8 = param_2;
      __l5::<lambda_1>::operator()(pvVar20,&local_3c0,&local_268,local_417,&local_3a8);
      uVar16 = (uint)((ulonglong)local_268.Scale3D.ZW.m128d_f64[0] >> 0x20);
      auVar30._8_8_ = local_268.Scale3D.XY.m128d_f64[1];
      auVar30._0_8_ = local_268.Scale3D.XY.m128d_f64[0];
      dVar47 = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
      dVar48 = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
      uVar54 = (uint)__xmm_7fffffffffffffff7fffffffffffffff &
               SUB84(local_268.Scale3D.XY.m128d_f64[0],0);
      uVar55 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
               (uint)((ulonglong)local_268.Scale3D.XY.m128d_f64[0] >> 0x20);
      uVar56 = _UNK_15061cc88 & SUB84(local_268.Scale3D.XY.m128d_f64[1],0);
      uVar57 = _UNK_15061cc8c & (uint)((ulonglong)local_268.Scale3D.XY.m128d_f64[1] >> 0x20);
      dVar3 = (double)GlobalVectorConstants::SmallNumber.m128_f32[2];
      auVar41._8_4_ = SUB84(dVar48,0);
      auVar41._0_8_ = dVar47;
      auVar41._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
      auVar35._8_4_ = SUB84((double)GlobalVectorConstants::SmallNumber.m128_f32[3],0);
      auVar35._0_8_ = dVar3;
      auVar35._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::SmallNumber.m128_f32[3] >> 0x20);
      auVar51._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & uVar16,
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            SUB84(local_268.Scale3D.ZW.m128d_f64[0],0));
      auVar51._8_4_ = _UNK_15061cc88 & SUB84(local_268.Scale3D.ZW.m128d_f64[1],0);
      auVar51._12_4_ = _UNK_15061cc8c & (uint)((ulonglong)local_268.Scale3D.ZW.m128d_f64[1] >> 0x20)
      ;
      lVar28 = -(ulonglong)(auVar35._8_8_ < auVar51._8_8_);
      auVar36._8_8_ = lVar28;
      auVar36._0_8_ = -(ulonglong)(dVar3 < auVar51._0_8_);
      uVar15 = movmskpd(extraout_EAX,auVar36);
      auVar42._8_8_ = -(ulonglong)(auVar41._8_8_ < (double)CONCAT44(uVar57,uVar56));
      auVar42._0_8_ = -(ulonglong)(dVar47 < (double)CONCAT44(uVar55,uVar54));
      iVar19 = movmskpd((int)pvVar20,auVar42);
      if ((uVar15 & 0x3fffffff) == 0 && iVar19 == 0) {
        local_1a8.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_1a8.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_1a8.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_1a8.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_1a8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_1a8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
      }
      else {
        auVar12._4_8_ = lVar28;
        auVar12._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
        auVar37._0_8_ = auVar12._0_8_ << 0x20;
        auVar37._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar37._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        auVar38._8_8_ = auVar37._8_8_;
        auVar38._0_8_ = local_268.Scale3D.ZW.m128d_f64[0];
        auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar30);
        lVar28 = -(ulonglong)
                  ((double)CONCAT44(uVar16 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(local_268.Scale3D.ZW.m128d_f64[0],0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar3);
        lVar27 = -(ulonglong)((double)CONCAT44(uVar55,uVar54) <= dVar47);
        lVar29 = -(ulonglong)((double)CONCAT44(uVar57,uVar56) <= dVar48);
        local_1a8.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar27 & auVar30._0_4_;
        local_1a8.Scale3D.XY.m128d_f64[0]._4_4_ = ~(uint)((ulonglong)lVar27 >> 0x20) & auVar30._4_4_
        ;
        local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar29 & auVar30._8_4_;
        local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ =
             ~(uint)((ulonglong)lVar29 >> 0x20) & auVar30._12_4_;
        dVar48 = (double)CONCAT44(local_1a8.Scale3D.XY.m128d_f64[0]._4_4_,
                                  local_1a8.Scale3D.XY.m128d_f64[0]._0_4_) *
                 local_268.Translation.XY.m128d_f64[0];
        dVar4 = (double)CONCAT44(local_1a8.Scale3D.XY.m128d_f64[1]._4_4_,
                                 local_1a8.Scale3D.XY.m128d_f64[1]._0_4_) *
                local_268.Translation.XY.m128d_f64[1];
        auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar38);
        local_1a8.Scale3D.ZW.m128d_f64[0] =
             (double)CONCAT44(~(uint)((ulonglong)lVar28 >> 0x20) & auVar30._4_4_,
                              ~(uint)lVar28 & auVar30._0_4_);
        dVar8 = local_268.Rotation.ZW.m128d_f64[0] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar9 = local_268.Rotation.ZW.m128d_f64[1] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        uVar52 = (undefined4)((ulonglong)dVar9 >> 0x20);
        dVar10 = local_268.Rotation.XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar11 = local_268.Rotation.XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        uVar53 = (undefined4)((ulonglong)dVar11 >> 0x20);
        dVar6 = local_1a8.Scale3D.ZW.m128d_f64[0] * local_268.Translation.ZW.m128d_f64[0];
        dVar47 = local_268.Translation.ZW.m128d_f64[1] * 0.0;
        auVar50._8_4_ = SUB84(dVar11,0);
        auVar50._0_8_ = dVar10;
        auVar50._12_4_ = uVar53;
        auVar43._8_4_ = SUB84(dVar4,0);
        auVar43._0_8_ = dVar48;
        auVar43._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        auVar5._8_4_ = SUB84(dVar47,0);
        auVar5._0_8_ = dVar6;
        auVar5._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
        auVar30 = blendpd(auVar43,auVar5,2);
        auVar7._8_4_ = SUB84(dVar9,0);
        auVar7._0_8_ = dVar8;
        auVar7._12_4_ = uVar52;
        auVar51 = blendpd(auVar50,auVar7,2);
        auVar31._8_4_ = SUB84(dVar8,0);
        auVar31._0_8_ = dVar11;
        auVar31._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        dVar3 = dVar6 * dVar11 - auVar31._8_8_ * dVar4;
        auVar44._0_8_ = auVar30._0_8_ * dVar8 - auVar51._0_8_ * dVar6;
        auVar44._8_8_ = auVar30._8_8_ * dVar9 - auVar51._8_8_ * dVar47;
        auVar32._8_4_ = SUB84(dVar3,0);
        auVar32._0_8_ = dVar4 * dVar10 - dVar11 * dVar48;
        auVar32._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        auVar30 = blendpd(auVar32,auVar44,2);
        auVar33._0_8_ = auVar30._0_8_ + auVar30._0_8_;
        auVar33._8_8_ = auVar30._8_8_ + auVar30._8_8_;
        dVar3 = dVar3 + dVar3;
        dVar47 = auVar44._0_8_ + auVar44._0_8_;
        uVar49 = (undefined4)((ulonglong)dVar47 >> 0x20);
        auVar45._8_4_ = SUB84(dVar47,0);
        auVar45._0_8_ = dVar3;
        auVar45._12_4_ = uVar49;
        auVar39._8_4_ = SUB84(dVar47,0);
        auVar39._0_8_ = dVar3;
        auVar39._12_4_ = uVar49;
        auVar30 = blendpd(auVar39,auVar33,2);
        auVar40._0_8_ = auVar30._0_8_ * dVar8 - auVar33._0_8_ * auVar51._0_8_;
        auVar40._8_8_ = auVar30._8_8_ * dVar9 - auVar33._8_8_ * auVar51._8_8_;
        dVar46 = auVar33._0_8_ * dVar11 - dVar47 * dVar8;
        auVar34._8_4_ = SUB84(dVar46,0);
        auVar34._0_8_ = auVar45._8_8_ * dVar10 - dVar3 * dVar11;
        auVar34._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
        auVar30 = blendpd(auVar34,auVar40,2);
        local_1a8.Translation.XY.m128d_f64[0] = 0.0 - (dVar46 + dVar3 * dVar9 + dVar48);
        local_1a8.Translation.XY.m128d_f64[1] = 0.0 - (auVar40._0_8_ + dVar47 * dVar9 + dVar4);
        local_1a8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar11,0);
        local_1a8.Rotation.XY.m128d_f64[0] = dVar10;
        local_1a8.Rotation.XY.m128d_f64[1]._4_4_ = uVar53;
        local_1a8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
        local_1a8.Rotation.ZW.m128d_f64[0] = dVar8;
        local_1a8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar52;
        local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
        local_1a8.Translation.ZW.m128d_f64[0] =
             0.0 - (auVar33._0_8_ * dVar9 + dVar6 + auVar30._0_8_);
        local_1a8.Scale3D.ZW.m128d_f64[1] = 0.0;
      }
      local_3f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3f0.ArrayNum = 0;
      local_3f0.ArrayMax = 0;
      UInterchangeMeshFactoryNode::GetLodDataUniqueIds
                ((UInterchangeMeshFactoryNode *)param_2,&local_3f0);
      uVar22 = local_3f0._8_8_ & 0xffffffff;
      local_3b0 = 0;
      if (local_3f0.ArrayNum != 0) {
        do {
          uVar26 = local_3b0;
          uVar15 = (uint)local_3b0;
          uVar16 = 0;
          if ((int)uVar15 < (int)uVar22) {
            uVar16 = ~uVar15 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar23 = local_3f0.AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10;
          local_3e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3e0.Data.ArrayNum = 0;
          local_3e0.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_3e0,uVar15);
          this_00 = (UInterchangeStaticMeshLodDataNode *)
                    UInterchangeBaseNodeContainer::GetNode
                              ((UInterchangeBaseNodeContainer *)**(undefined8 **)this,
                               (FString *)pFVar23);
          if (this_00 == (UInterchangeStaticMeshLodDataNode *)0x0) {
LAB_14e775cf9:
            bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6823813803315037292>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericStaticMeshPipeline.cpp"
                                ,0x46c,"LodDataNode");
            if (bVar13) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
            }
          }
          else {
            pUVar18 = Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_NoRegister();
            iVar19 = (int)pUVar18->_padding_;
            if ((*(int *)(this_00->_padding_ + 0x38) < iVar19) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
                &pUVar18->_padding_)) goto LAB_14e775cf9;
            local_400.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_400.ArrayNum = 0;
            local_400.ArrayMax = 0;
            UInterchangeStaticMeshLodDataNode::GetMeshUids(this_00,&local_400);
            iVar19 = local_400.ArrayNum;
            pFVar23 = local_400.AllocatorInstance.Data + (longlong)local_400.ArrayNum * 0x10;
            FVar24.Data = local_400.AllocatorInstance.Data;
            while( true ) {
              if (local_400.ArrayNum != iVar19) {
                local_418 = 0;
                `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_418);
              }
              if (FVar24.Data == pFVar23) break;
              bVar13 = true;
              local_2c8.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_2c8.Rotation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[1];
              local_410.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              puVar1 = *(undefined8 **)((longlong)this + 8);
              local_410.Data.ArrayNum = 0;
              local_410.Data.ArrayMax = 0;
              local_2c8.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_2c8.Rotation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[3];
              local_2c8.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_2c8.Translation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[1];
              local_2c8.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_2c8.Scale3D.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[1];
              local_2c8.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_2c8.Translation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[3];
              local_2c8.Scale3D.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[3];
              local_2c8.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              this_01 = (UInterchangeSceneNode *)
                        UInterchangeBaseNodeContainer::GetNode
                                  (*(UInterchangeBaseNodeContainer **)*puVar1,(FString *)FVar24.Data
                                  );
              if (this_01 == (UInterchangeSceneNode *)0x0) {
LAB_14e77590f:
                bVar13 = false;
                if (this_01 != (UInterchangeSceneNode *)0x0) {
                  pUVar18 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
                  iVar25 = (int)pUVar18->_padding_;
                  if ((iVar25 <= *(int *)(this_01->_padding_ + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar25 * 8) ==
                      &pUVar18->_padding_)) {
                    local_208.Rotation.XY.m128d_f64[0] =
                         (double)GlobalVectorConstants::Float0001.m128_f32[0];
                    local_208.Rotation.XY.m128d_f64[1] =
                         (double)GlobalVectorConstants::Float0001.m128_f32[1];
                    local_208.Rotation.ZW.m128d_f64[0] =
                         (double)GlobalVectorConstants::Float0001.m128_f32[2];
                    local_208.Rotation.ZW.m128d_f64[1] =
                         (double)GlobalVectorConstants::Float0001.m128_f32[3];
                    local_208.Translation.XY.m128d_f64[0] =
                         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                    local_208.Translation.XY.m128d_f64[1] =
                         (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                    local_208.Scale3D.XY.m128d_f64[0] =
                         (double)GlobalVectorConstants::Float1110.m128_f32[0];
                    local_208.Scale3D.XY.m128d_f64[1] =
                         (double)GlobalVectorConstants::Float1110.m128_f32[1];
                    local_208.Translation.ZW.m128d_f64[0] =
                         (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                    local_208.Translation.ZW.m128d_f64[1] =
                         (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                    local_208.Scale3D.ZW.m128d_f64[0] =
                         (double)GlobalVectorConstants::Float1110.m128_f32[2];
                    local_208.Scale3D.ZW.m128d_f64[1] =
                         (double)GlobalVectorConstants::Float1110.m128_f32[3];
                    bVar14 = UInterchangeSceneNode::GetCustomGlobalTransform
                                       (this_01,*(UInterchangeBaseNodeContainer **)*puVar1,
                                        &UE::Math::TTransform<double>::Identity,&local_208,false);
                    if (bVar14) {
                      local_2c8.Rotation.XY.m128d_f64[0] = local_208.Rotation.XY.m128d_f64[0];
                      local_2c8.Rotation.XY.m128d_f64[1] = local_208.Rotation.XY.m128d_f64[1];
                      local_2c8.Rotation.ZW.m128d_f64[0] = local_208.Rotation.ZW.m128d_f64[0];
                      local_2c8.Rotation.ZW.m128d_f64[1] = local_208.Rotation.ZW.m128d_f64[1];
                      local_2c8.Translation.XY.m128d_f64[0] = local_208.Translation.XY.m128d_f64[0];
                      local_2c8.Translation.XY.m128d_f64[1] = local_208.Translation.XY.m128d_f64[1];
                      local_2c8.Translation.ZW.m128d_f64[0] = local_208.Translation.ZW.m128d_f64[0];
                      local_2c8.Translation.ZW.m128d_f64[1] = local_208.Translation.ZW.m128d_f64[1];
                      local_2c8.Scale3D.ZW.m128d_f64[1] = local_208.Scale3D.ZW.m128d_f64[1];
                      local_2c8.Scale3D.ZW.m128d_f64[0] = local_208.Scale3D.ZW.m128d_f64[0];
                      local_2c8.Scale3D.XY.m128d_f64[0] = local_208.Scale3D.XY.m128d_f64[0];
                      local_2c8.Scale3D.XY.m128d_f64[1] = local_208.Scale3D.XY.m128d_f64[1];
                    }
                    UE::Interchange::Private::MeshHelper::
                    AddSceneNodeGeometricAndPivotToGlobalTransform(&local_2c8,this_01,true,true);
                    local_3d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_3d0.Data.ArrayNum = 0;
                    local_3d0.Data.ArrayMax = 0;
                    UInterchangeSceneNode::GetCustomAssetInstanceUid(this_01,&local_3d0);
                    if (local_3d0.Data.ArrayNum == 0) {
                      iVar25 = 0;
                    }
                    else {
                      iVar25 = local_3d0.Data.ArrayNum + -1;
                    }
                    ::FString::AssignRange
                              (&local_410,(wchar_t *)local_3d0.Data.AllocatorInstance.Data,iVar25);
                    if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
                    }
                    goto LAB_14e775aa5;
                  }
                }
                bVar14 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<6823813803315037190>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericStaticMeshPipeline.cpp"
                                    ,0x406,"SceneNode");
                if (bVar14) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              else {
                pUVar18 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
                iVar25 = (int)pUVar18->_padding_;
                if ((*(int *)(this_01->_padding_ + 0x38) < iVar25) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar25 * 8) !=
                    &pUVar18->_padding_)) goto LAB_14e77590f;
                if ((FScriptContainerElement *)&local_410 != FVar24.Data) {
                  iVar25 = *(int *)(FVar24.Data + 8);
                  pvVar20 = *(void **)FVar24.Data;
                  local_410.Data.ArrayNum = iVar25;
                  if ((iVar25 == 0) && (local_410.Data.ArrayMax == 0)) {
                    local_410.Data.ArrayNum = 0;
                    local_410.Data.ArrayMax = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,iVar25,local_410.Data.ArrayMax,(ForAnyElementType *)&local_410,
                               iVar25,&local_410.Data.ArrayMax);
                    if (iVar25 != 0) {
                      memcpy(local_410.Data.AllocatorInstance.Data,pvVar20,(longlong)iVar25 * 2);
                    }
                  }
                }
              }
LAB_14e775aa5:
              if (1 < local_410.Data.ArrayNum) {
                if (bVar13) {
                  ::FString::ConcatFC(&local_370,&local_3e0,L"_");
                  ::FString::ConcatFF(&local_380,&local_370,&local_410);
                  TMapBase<FString,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TTransform<double>,0>_>
                  ::Emplace<FString,UE::Math::TTransform<double>_const_&>
                            ((TMapBase<FString,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TTransform<double>,0>_>
                              *)local_338,&local_380,&UE::Math::TTransform<double>::Identity);
                  FVar21.Data = local_370.Data.AllocatorInstance.Data;
                  if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_380.Data.AllocatorInstance.Data);
                    FVar21.Data = local_370.Data.AllocatorInstance.Data;
                  }
                }
                else {
                  local_148.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_148.Rotation.XY.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[1];
                  local_148.Rotation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[2];
                  local_148.Rotation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[3];
                  local_148.Translation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                  local_148.Translation.XY.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                  local_148.Translation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                  local_148.Translation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                  local_148.Scale3D.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  local_148.Scale3D.XY.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[1];
                  local_148.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_148.Scale3D.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[3];
                  UE::Math::TTransform<double>::Multiply(&local_148,&local_1a8,&local_2c8);
                  ::FString::ConcatFC(&local_350,&local_3e0,L"_");
                  ::FString::ConcatFF(&local_360,&local_350,&local_410);
                  TMapBase<FString,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TTransform<double>,0>_>
                  ::Emplace<FString,UE::Math::TTransform<double>_>
                            ((TMapBase<FString,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TTransform<double>,0>_>
                              *)local_338,&local_360,&local_148);
                  FVar21.Data = local_350.Data.AllocatorInstance.Data;
                  if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_360.Data.AllocatorInstance.Data);
                    FVar21.Data = local_350.Data.AllocatorInstance.Data;
                  }
                }
                if (FVar21.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar21.Data);
                }
              }
              if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_410.Data.AllocatorInstance.Data);
              }
              FVar24.Data = FVar24.Data + 0x10;
              this = local_398;
            }
            DestructItems<FString,int>
                      ((FString *)local_400.AllocatorInstance.Data,local_400.ArrayNum);
            uVar26 = local_3b0;
            if (local_400.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_400.AllocatorInstance.Data);
            }
            if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
            }
          }
          uVar22 = (ulonglong)local_3f0.ArrayNum;
          local_3b0 = uVar26 + 1;
        } while (local_3b0 < uVar22);
      }
      __l5::<lambda_2>::operator()(*(void **)((longlong)this + 0x18),(FLODGroupIIHelper *)local_338)
      ;
      DestructItems<FString,int>((FString *)local_3f0.AllocatorInstance.Data,local_3f0.ArrayNum);
      if (local_3f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f0.AllocatorInstance.Data);
      }
      if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
      }
      if (local_2e0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e0.Data);
      }
      local_2f0 = 0;
      if (local_2f8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_2f8);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_338);
    }
  }
  if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
  }
  return;
}

// AddLodDataToSkeletalMesh @ 14e779b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeGenericMeshPipeline::AddLodDataToSkeletalMesh
          (UInterchangeGenericMeshPipeline *this,UInterchangeSkeletonFactoryNode *param_1,
          UInterchangeSkeletalMeshFactoryNode *param_2,
          TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
          *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  longlong *plVar10;
  UInterchangeSkeletalMeshLodDataNode *pUVar11;
  UClass *pUVar12;
  ulonglong uVar13;
  UInterchangeSceneNode *this_00;
  UInterchangeMeshNode *pUVar14;
  FString *pFVar15;
  ulonglong uVar16;
  ForAnyElementType FVar17;
  undefined1 *puVar18;
  int iVar19;
  uint uVar20;
  UInterchangeMeshNode *pUVar21;
  uint *puVar22;
  UInterchangeSkeletalMeshFactoryNode *this_01;
  int iVar23;
  UInterchangeGenericMeshPipeline *this_02;
  uint uVar24;
  ForAnyElementType FVar25;
  FScriptContainerElement *pFVar26;
  FWeakObjectPtr *this_03;
  undefined1 auStackY_318 [32];
  undefined1 local_2d8;
  undefined1 local_2d7 [3];
  uint local_2d4;
  uint local_2d0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2c8;
  uint local_2b8;
  int local_2b4;
  UInterchangeSkeletalMeshLodDataNode *local_2b0;
  FString local_2a8;
  UInterchangeGenericMeshPipeline *local_298;
  FWeakObjectPtr *local_290;
  FString local_288;
  FString *local_278;
  int local_270;
  undefined4 local_26c;
  FString local_268;
  TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_258;
  UInterchangeSkeletalMeshFactoryNode *local_250;
  FString local_248;
  FString local_238;
  int local_228;
  int local_224;
  FWeakObjectPtr *local_220;
  UInterchangeSkeletonFactoryNode *local_218;
  FString local_210;
  FString local_200;
  TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_1f0;
  int iStack_1e8;
  uint uStack_1e4;
  undefined1 *local_1e0;
  undefined4 uStack_1d8;
  int iStack_1d4;
  int local_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b8;
  undefined8 uStack_198;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130 [2];
  undefined4 local_104;
  undefined1 local_f8 [64];
  void *local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [64];
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_290 = &(this->CommonMeshesProperties).WeakPtr;
  local_2d4 = 0;
  local_298 = this;
  local_258 = param_3;
  local_250 = param_2;
  local_218 = param_1;
  bVar7 = FWeakObjectPtr::IsValid(local_290);
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommonMeshesProperties.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericSkeletalMeshPipeline.cpp"
                         ,0x25b,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_220 = &(this->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr;
  bVar7 = FWeakObjectPtr::IsValid(local_220);
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommonSkeletalMeshesAndAnimationsProperties.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericSkeletalMeshPipeline.cpp"
                         ,0x25c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_200);
  UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_1,&local_210);
  iVar8 = *(int *)&param_3->field_0x28;
  puVar2 = &param_3->field_0x10;
  iVar23 = 0;
  iStack_1e8 = 0;
  uStack_1e4 = 1;
  local_1d0 = 0;
  iStack_1d4 = 0;
  if (iVar8 != 0) {
    puVar22 = *(uint **)&param_3->field_0x20;
    if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
      puVar22 = (uint *)puVar2;
    }
    uVar20 = *puVar22;
    iStack_1e8 = 0;
    while (uVar20 == 0) {
      iStack_1e8 = iStack_1e8 + 1;
      local_1d0 = local_1d0 + 0x20;
      iStack_1d4 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1e8) goto LAB_14e779c9c;
      uVar20 = puVar22[iStack_1e8];
    }
    uStack_1e4 = ~(uVar20 - 1) & uVar20;
    uVar16 = (ulonglong)uStack_1e4 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_228 = (int)lVar3;
    iStack_1d4 = local_1d0 + -1 + local_228;
    if (iVar8 < iStack_1d4) {
      iStack_1d4 = iVar8;
    }
  }
LAB_14e779c9c:
  uStack_1cc = local_104;
  iStack_1c8 = *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34;
  uVar20 = *(uint *)&param_3->field_0x28;
  uStack_1d8 = 0xffffffff;
  TStack_1b8._padding_ = CONCAT44(uStack_1e4,iStack_1e8);
  uVar24 = uVar20 & 0xffffffe0;
  TStack_1b8.CurrentBitIndex = iStack_1d4;
  TStack_1b8.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar20 >> 5;
  TStack_1b8._28_4_ = local_104;
  TStack_1b8.BaseBitIndex = local_1d0;
  uStack_198 = CONCAT44(uStack_1c4,iStack_1c8);
  local_1f0 = param_3;
  local_1e0 = puVar2;
  local_1c0 = param_3;
  TStack_1b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar20 < 0) || (iVar8 < (int)uVar20)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar5 = local_258;
  uVar1 = *(uint *)&param_3->field_0x28;
  if (uVar20 != uVar1) {
    puVar18 = puVar2;
    if (*(undefined1 **)&param_3->field_0x20 != (undefined1 *)0x0) {
      puVar18 = *(undefined1 **)&param_3->field_0x20;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar19 * 4);
    while (uVar20 == 0) {
      iVar19 = iVar19 + 1;
      uVar24 = uVar24 + 0x20;
      uVar20 = uVar1;
      if ((int)(((int)(uVar1 - 1) >> 0x1f & 0x1fU) + (uVar1 - 1)) >> 5 < iVar19) goto LAB_14e779db0;
      uVar20 = *(uint *)(puVar18 + (longlong)iVar19 * 4);
    }
    uVar16 = (ulonglong)(~(uVar20 - 1) & uVar20) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_224 = (int)lVar3;
    uVar20 = local_224 + -1 + uVar24;
    if ((int)uVar1 < (int)uVar20) {
      uVar20 = uVar1;
    }
  }
LAB_14e779db0:
  while( true ) {
    pTVar6 = local_1c0;
    if (*(int *)&local_1c0->field_0x8 - *(int *)&local_1c0->field_0x34 != (int)uStack_198) {
      local_2d8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2d8);
    }
    if (((TStack_1b8.CurrentBitIndex == uVar20) &&
        (TStack_1b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == pTVar5))
    break;
    iVar8 = *(int *)((longlong)TStack_1b8.CurrentBitIndex * 0x20 + *(longlong *)pTVar6);
    if (iVar8 < iVar23) {
      iVar8 = iVar23;
    }
    iVar23 = iVar8;
    TStack_1b8.UnvisitedBitMask = TStack_1b8.UnvisitedBitMask & ~TStack_1b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b8);
  }
  pUVar21 = (UInterchangeMeshNode *)0x0;
  local_2b4 = iVar23 + 1;
  local_278 = (FString *)0x0;
  local_270 = 0;
  local_26c = 0;
  local_2d0 = 0;
  pUVar14 = pUVar21;
  this_03 = local_290;
  if (local_2b4 < 1) {
LAB_14e77a589:
    pFVar15 = local_278;
    DestructItems<FString,int>(local_278,local_270);
    if (pFVar15 != (FString *)0x0) {
      FMemory::Free(pFVar15);
    }
    if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Data.AllocatorInstance.Data);
    }
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    return;
  }
LAB_14e779e38:
  pUVar9 = FWeakObjectPtr::Get(this_03);
  uVar20 = (uint)pUVar14;
  if ((pUVar9[7].field_0x13 != '\0') || (uVar20 == 0)) {
    if (*(int *)&local_258->field_0x8 != *(int *)&local_258->field_0x34) {
      puVar2 = *(undefined1 **)&local_258->field_0x40;
      puVar18 = &local_258->field_0x38;
      if (puVar2 != (undefined1 *)0x0) {
        puVar18 = puVar2;
      }
      uVar16 = (ulonglong)(*(int *)&local_258->field_0x48 - 1) & (ulonglong)pUVar14;
      iVar8 = *(int *)(puVar18 + uVar16 * 4);
      if (iVar8 != -1) {
        lVar3 = *(longlong *)local_258;
        do {
          if (*(uint *)((longlong)iVar8 * 0x20 + lVar3) == uVar20) {
            puVar18 = &local_258->field_0x38;
            if (puVar2 != (undefined1 *)0x0) {
              puVar18 = puVar2;
            }
            iVar8 = *(int *)(puVar18 + uVar16 * 4);
            goto joined_r0x00014e779ed3;
          }
          iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar3);
        } while (iVar8 != -1);
      }
    }
    plVar10 = (longlong *)&local_278;
    goto LAB_14e779ea9;
  }
  goto LAB_14e77a56f;
joined_r0x00014e779ed3:
  pUVar14 = pUVar21;
  if (iVar8 == -1) goto LAB_14e779ef9;
  if (*(uint *)((longlong)iVar8 * 0x20 + lVar3) == uVar20) {
    if ((iVar8 != -1) &&
       (pUVar14 = (UInterchangeMeshNode *)((longlong)iVar8 * 0x20 + lVar3),
       pUVar14 != (UInterchangeMeshNode *)0x0)) goto LAB_14e779f1f;
    goto LAB_14e779ef9;
  }
  iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar3);
  goto joined_r0x00014e779ed3;
LAB_14e779ef9:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar7) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14e779f1f:
  plVar10 = &pUVar14->_padding_;
LAB_14e779ea9:
  local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar24 = (uint)plVar10[1];
  pFVar15 = (FString *)*plVar10;
  local_2c8.ArrayNum = uVar24;
  if (uVar24 == 0) {
    local_2c8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar24,0,&local_2c8.AllocatorInstance,uVar24,&local_2c8.ArrayMax);
    ConstructItems<FString,FString,int>(local_2c8.AllocatorInstance.Data,pFVar15,uVar24);
  }
  pUVar9 = FWeakObjectPtr::Get(local_220);
  this_02 = local_298;
  if ((pUVar9[7].field_0x1c == '\0') &&
     (pUVar9 = FWeakObjectPtr::Get(this_03), this_02 = local_298, pUVar9[7].field_0x10 != '\x02')) {
    UE::Interchange::SkeletalMeshGenericPipeline::RemoveNestedMeshNodes
              (local_298->BaseNodeContainer,local_218,&local_2c8);
  }
  local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.Data.ArrayNum = 0;
  local_268.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_268,uVar20);
  ::FString::ConcatCF(&local_170,L"LodData",&local_268);
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  if (uVar20 == 0) {
    uVar24 = local_2d4 | 2;
    local_2d4 = uVar24;
    pFVar15 = ::FString::FString(&local_160,L"");
  }
  else {
    uVar24 = local_2d4 | 1;
    local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_248.Data.ArrayNum = 0;
    local_248.Data.ArrayMax = 0;
    local_2d4 = uVar24;
    ::FString::AppendInt(&local_248,uVar20);
    pFVar15 = &local_248;
  }
  ::FString::ConcatCF(&local_180,L"\\LodData",pFVar15);
  if (((uVar24 & 2) != 0) &&
     (uVar24 = uVar24 & 0xfffffffd, local_2d4 = uVar24,
     local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  if (((uVar24 & 1) != 0) &&
     (local_2d4 = uVar24 & 0xfffffffe,
     local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFF(&local_190,&local_180,&local_200);
  ::FString::ConcatFF(&local_238,&local_190,&local_210);
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  pUVar11 = (UInterchangeSkeletalMeshLodDataNode *)
            UInterchangeBaseNodeContainer::GetFactoryNode(this_02->BaseNodeContainer,&local_238);
  local_2b0 = pUVar11;
  if (pUVar11 != (UInterchangeSkeletalMeshLodDataNode *)0x0) {
    pUVar12 = Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_NoRegister();
    iVar8 = (int)pUVar12->_padding_;
    if ((iVar8 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
       (this_01 = local_250,
       (longlong *)*(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar8 * 8)
       == &pUVar12->_padding_)) goto LAB_14e77a13b;
  }
  local_2b0 = CreateSkeletalMeshLodDataNode(this_02,&local_170,&local_238,&local_200);
  UInterchangeSkeletalMeshLodDataNode::SetCustomSkeletonUid(local_2b0,&local_210);
  this_01 = local_250;
  UInterchangeMeshFactoryNode::AddLodDataUniqueId
            ((UInterchangeMeshFactoryNode *)local_250,&local_238);
LAB_14e77a13b:
  uVar13 = (ulonglong)local_2c8.ArrayNum;
  pFVar26 = local_2c8.AllocatorInstance.Data + uVar13 * 0x10;
  local_a8._0_8_ = 0;
  local_a8._8_8_ = 0;
  local_a8._32_8_ = 0;
  local_a8._40_4_ = 0;
  local_a8._44_4_ = 0x80;
  local_a8._48_4_ = 0xffffffff;
  local_a8._52_4_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_2b8 = local_2c8.ArrayNum;
  uVar16 = uVar13;
  FVar25.Data = local_2c8.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar13 != (int)uVar16) {
      local_2d7[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_2d7);
    }
    if (FVar25.Data == pFVar26) break;
    this_00 = (UInterchangeSceneNode *)
              UInterchangeBaseNodeContainer::GetNode
                        (this_02->BaseNodeContainer,(FString *)FVar25.Data);
    local_f8._0_8_ = 0;
    local_f8._8_8_ = 0;
    local_f8._32_8_ = 0;
    local_f8._40_4_ = 0;
    local_f8._44_4_ = 0x80;
    local_f8._48_4_ = 0xffffffff;
    local_f8._52_4_ = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    if (this_00 == (UInterchangeSceneNode *)0x0) {
LAB_14e77a329:
      if (this_00 != (UInterchangeSceneNode *)0x0) {
        pUVar12 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
        iVar8 = (int)pUVar12->_padding_;
        if ((*(int *)(this_00->_padding_ + 0x38) < iVar8) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar12->_padding_)) {
          pUVar12 = Z_Construct_UClass_UInterchangeInstancedStaticMeshComponentNode_NoRegister();
          iVar8 = (int)pUVar12->_padding_;
          if ((iVar8 <= *(int *)(this_00->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
              &pUVar12->_padding_)) {
            local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_288.Data.ArrayNum = 0;
            local_288.Data.ArrayMax = 0;
            UInterchangeInstancedStaticMeshComponentNode::GetCustomInstancedAssetUid
                      ((UInterchangeInstancedStaticMeshComponentNode *)this_00,&local_288);
            pUVar14 = (UInterchangeMeshNode *)
                      UInterchangeBaseNodeContainer::GetNode(this_02->BaseNodeContainer,&local_288);
            FVar17.Data = local_288.Data.AllocatorInstance.Data;
            if (pUVar14 != (UInterchangeMeshNode *)0x0) {
              pUVar12 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
              iVar8 = (int)pUVar12->_padding_;
              FVar17.Data = local_288.Data.AllocatorInstance.Data;
              if ((iVar8 <= *(int *)(pUVar14->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar8 * 8)
                  == &pUVar12->_padding_)) {
                UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
                          ((UInterchangeBaseNode *)pUVar14,(UInterchangeBaseNode *)this_01,true);
                UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)this_01,&local_288);
                pFVar15 = UInterchangeBaseNode::GetUniqueID
                                    ((UInterchangeBaseNode *)this_01,local_130);
                UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)pUVar14,pFVar15);
                if (local_130[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_130[0].Data.AllocatorInstance.Data);
                }
                UInterchangeMeshNode::GetSlotMaterialDependencies
                          (pUVar14,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                                    *)local_f8);
                FVar17.Data = local_288.Data.AllocatorInstance.Data;
              }
            }
            goto LAB_14e77a47f;
          }
        }
        else {
          UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
                    ((UInterchangeBaseNode *)this_00,(UInterchangeBaseNode *)this_01,true);
          UInterchangeBaseNode::AddTargetNodeUid
                    ((UInterchangeBaseNode *)this_01,(FString *)FVar25.Data);
          pFVar15 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_01,&local_140);
          UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)this_00,pFVar15);
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
          UInterchangeMeshNode::GetSlotMaterialDependencies
                    ((UInterchangeMeshNode *)this_00,
                     (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)local_f8);
        }
      }
    }
    else {
      pUVar12 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
      iVar8 = (int)pUVar12->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar8) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
          &pUVar12->_padding_)) goto LAB_14e77a329;
      local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2a8.Data.ArrayNum = 0;
      local_2a8.Data.ArrayMax = 0;
      UInterchangeSceneNode::GetCustomAssetInstanceUid(this_00,&local_2a8);
      bVar7 = UInterchangeBaseNodeContainer::IsNodeUidValid(this_02->BaseNodeContainer,&local_2a8);
      if (bVar7) {
        pUVar14 = (UInterchangeMeshNode *)
                  UInterchangeBaseNodeContainer::GetNode(this_02->BaseNodeContainer,&local_2a8);
        if (pUVar14 == (UInterchangeMeshNode *)0x0) {
LAB_14e77a2a8:
          pUVar14 = pUVar21;
        }
        else {
          pUVar12 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
          iVar8 = (int)pUVar12->_padding_;
          if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar8) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
              &pUVar12->_padding_)) goto LAB_14e77a2a8;
        }
        UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
                  ((UInterchangeBaseNode *)pUVar14,(UInterchangeBaseNode *)this_01,true);
        UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)this_01,&local_2a8);
        pFVar15 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_01,&local_150);
        UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)pUVar14,pFVar15);
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
        UInterchangeMeshNode::GetSlotMaterialDependencies
                  (pUVar14,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                            *)local_f8);
      }
      else {
        UInterchangeSceneNode::GetSlotMaterialDependencies
                  (this_00,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                            *)local_f8);
      }
      UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
                ((UInterchangeBaseNode *)this_00,(UInterchangeBaseNode *)this_01,true);
      FVar17.Data = local_2a8.Data.AllocatorInstance.Data;
LAB_14e77a47f:
      if (FVar17.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar17.Data);
      }
    }
    UE::Interchange::MeshesUtilities::
    ApplySlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>
              (this_01,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        *)local_f8,this_02->BaseNodeContainer,
               (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)local_a8);
    UInterchangeSkeletalMeshLodDataNode::AddMeshUid(local_2b0,(FString *)FVar25.Data);
    local_b0 = 0;
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_f8);
    uVar13 = (ulonglong)(uint)local_2c8.ArrayNum;
    FVar25.Data = FVar25.Data + 0x10;
    uVar16 = (ulonglong)local_2b8;
  }
  UE::Interchange::MeshesUtilities::
  ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>
            (this_01,this_02->BaseNodeContainer);
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_2c8.AllocatorInstance.Data,local_2c8.ArrayNum);
  this_03 = local_290;
  uVar20 = local_2d0;
  if (local_2c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.AllocatorInstance.Data);
    this_03 = local_290;
    uVar20 = local_2d0;
  }
LAB_14e77a56f:
  local_2d0 = uVar20 + 1;
  pUVar14 = (UInterchangeMeshNode *)(ulonglong)local_2d0;
  if (local_2b4 <= (int)local_2d0) goto LAB_14e77a589;
  goto LAB_14e779e38;
}

// AddLodDataToStaticMesh @ 14e77a5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UInterchangeGenericMeshPipeline::AddLodDataToStaticMesh
          (UInterchangeGenericMeshPipeline *this,UInterchangeStaticMeshFactoryNode *param_1,
          TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
          *param_2)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 *puVar3;
  longlong lVar4;
  UInterchangePipelineMeshesUtilities *pUVar5;
  UInterchangeBaseNodeContainer *pUVar6;
  ITextData *pIVar7;
  void *pvVar8;
  code *pcVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  undefined8 uVar11;
  UInterchangeGenericMeshPipeline *this_00;
  TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar12;
  FScriptContainerElement *pFVar13;
  char cVar14;
  TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar19;
  UObject *pUVar20;
  UInterchangeStaticMeshLodDataNode *pUVar21;
  UClass *pUVar22;
  UInterchangeSceneNode *this_01;
  UInterchangeMeshNode *pUVar23;
  FString *pFVar24;
  TTuple<FString,FInterchangeMeshGeometry> *pTVar25;
  UInterchangeInstancedStaticMeshComponentNode *this_02;
  FText *pFVar26;
  FText *pFVar27;
  FTextFormat *pFVar28;
  UInterchangeResultWarning_Generic *pUVar29;
  longlong *plVar30;
  ulonglong uVar31;
  ForAnyElementType FVar32;
  undefined1 *puVar33;
  UInterchangeMeshNode *pUVar34;
  UInterchangeStaticMeshFactoryNode *this_03;
  uint uVar35;
  FScriptContainerElement *pFVar36;
  UInterchangeGenericMeshPipeline *pUVar37;
  UInterchangeMeshNode *pUVar38;
  undefined1 auStackY_448 [32];
  undefined1 local_408;
  undefined1 local_407 [3];
  uint local_404;
  UInterchangeStaticMeshLodDataNode *local_400;
  UInterchangeStaticMeshFactoryNode *local_3f8;
  uint local_3f0;
  UInterchangeGenericMeshPipeline *local_3e8;
  ForAnyElementType local_3e0;
  undefined8 local_3d8;
  ForAnyElementType local_3d0;
  undefined8 local_3c8;
  FString local_3c0;
  FString local_3b0;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_3a0;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_390;
  FString local_380;
  uint local_370;
  int local_36c;
  FString local_368;
  TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_358;
  FString local_350;
  FString local_340;
  FScriptContainerElement *local_330;
  undefined1 local_328 [24];
  FString local_310;
  FText local_300;
  FText local_2f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2e0;
  undefined1 local_2b8 [4];
  undefined1 local_2b4 [4];
  FString local_2b0;
  UInterchangePipelineMeshesUtilities *local_2a0;
  UInterchangePipelineMeshesUtilities *local_298;
  TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_290;
  undefined1 auStack_288 [32];
  longlong lStack_268;
  FString local_260;
  FString local_250;
  FTextFormat local_240;
  FTextFormat local_230;
  undefined1 local_220 [24];
  longlong lStack_208;
  FWeakObjectPtr FStack_200;
  int local_1f8;
  int iStack_1f4;
  FFormatArgumentValue local_1f0;
  FFormatArgumentValue local_1d0;
  undefined1 local_1b0 [32];
  FString local_190;
  FString local_180;
  void *local_170 [2];
  FText local_160;
  void *local_150 [2];
  TObjectPtr<UInterchangePipelineMeshesUtilities>_u_0 local_140 [2];
  FText local_130;
  FTextFormat local_120;
  FText local_110;
  FTextFormat local_100;
  ForAnyElementType local_e8;
  longlong local_e0;
  ForAnyElementType FStack_d8;
  undefined8 local_d0;
  int iStack_cc;
  ForAnyElementType FStack_c8;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  UInterchangeBaseNodeContainer *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [64];
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_448;
  pUVar38 = (UInterchangeMeshNode *)0x0;
  local_404 = 0;
  local_3f8 = param_1;
  local_3e8 = this;
  local_358 = param_2;
  bVar16 = FWeakObjectPtr::IsValid(&(this->CommonMeshesProperties).WeakPtr);
  if ((!bVar16) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CommonMeshesProperties.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericStaticMeshPipeline.cpp"
                          ,0x349,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_1,&local_2b0);
  puVar3 = &param_2->field_0x10;
  local_2e0._padding_._0_4_ = 0;
  local_2e0._padding_._4_4_ = 1;
  local_2e0.UnvisitedBitMask = 0xffffffff;
  local_2e0.CurrentBitIndex = 0;
  local_2e0.BaseBitIndex = 0;
  local_2e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if (*(int *)&param_2->field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2e0);
  }
  auStack_288._0_8_ = CONCAT44(local_2e0._padding_._4_4_,(undefined4)local_2e0._padding_);
  auStack_288._16_8_ = CONCAT44(local_2e0.CurrentBitIndex,local_2e0.UnvisitedBitMask);
  auStack_288._28_4_ = local_2e0._28_4_;
  auStack_288._24_4_ = local_2e0.BaseBitIndex;
  local_1f8 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  local_220._16_8_ = local_2e0.Array;
  lStack_268 = CONCAT44(iStack_1f4,local_1f8);
  auStack_288._8_8_ = local_2e0.Array;
  local_290 = param_2;
  local_220._0_8_ = param_2;
  local_220._8_8_ = auStack_288._0_8_;
  lStack_208 = auStack_288._16_8_;
  FStack_200 = (FWeakObjectPtr)auStack_288._24_8_;
  pTVar19 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_220,
                       (TBitArray<FDefaultBitArrayAllocator> *)puVar3,*(int *)&param_2->field_0x28);
  pTVar12 = local_358;
  local_e0 = pTVar19->_padding_;
  pTVar10 = pTVar19->Array;
  uVar11._0_4_ = pTVar19->UnvisitedBitMask;
  uVar11._4_4_ = pTVar19->CurrentBitIndex;
  FStack_c8.Data = *(FScriptContainerElement **)&pTVar19->BaseBitIndex;
  pUVar23 = pUVar38;
  FStack_d8.Data = (FScriptContainerElement *)pTVar10;
  local_d0 = uVar11;
  while( true ) {
    pTVar15 = local_290;
    uVar17 = (uint)pUVar23;
    if (*(int *)&local_290->field_0x8 - *(int *)&local_290->field_0x34 != (int)lStack_268) {
      local_408 = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_408);
    }
    this_00 = local_3e8;
    if (((auStack_288._20_4_ == uVar11._4_4_) &&
        ((TBitArray<FDefaultBitArrayAllocator> *)auStack_288._8_8_ == pTVar10)) &&
       (pTVar15 == pTVar12)) break;
    uVar35 = *(uint *)((longlong)(int)auStack_288._20_4_ * 0x20 + *(longlong *)pTVar15);
    if ((int)uVar35 < (int)uVar17) {
      uVar35 = uVar17;
    }
    auStack_288._16_4_ = auStack_288._16_4_ & ~auStack_288._4_4_;
    pUVar23 = (UInterchangeMeshNode *)(ulonglong)uVar35;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_288);
  }
  local_36c = uVar17 + 1;
  local_328._0_8_ = (FString *)0x0;
  local_328._8_4_ = 0;
  local_328._12_4_ = 0;
  local_3f0 = 0;
  pUVar23 = pUVar38;
  pUVar34 = pUVar38;
  if (local_36c < 1) {
LAB_14e77b8fb:
    uVar11 = local_328._0_8_;
    DestructItems<FString,int>((FString *)local_328._0_8_,local_328._8_4_);
    if ((FString *)uVar11 != (FString *)0x0) {
      FMemory::Free((void *)uVar11);
    }
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
    return;
  }
LAB_14e77a7e0:
  pUVar20 = FWeakObjectPtr::Get(&(this_00->CommonMeshesProperties).WeakPtr);
  uVar17 = (uint)pUVar23;
  if ((pUVar20[7].field_0x13 != '\0') || (uVar17 == 0)) {
    if (*(int *)&local_358->field_0x8 != *(int *)&local_358->field_0x34) {
      puVar3 = *(undefined1 **)&local_358->field_0x40;
      puVar33 = &local_358->field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar33 = puVar3;
      }
      uVar31 = (ulonglong)(*(int *)&local_358->field_0x48 - 1) & (ulonglong)pUVar23;
      iVar18 = *(int *)(puVar33 + uVar31 * 4);
      if (iVar18 != -1) {
        lVar4 = *(longlong *)local_358;
        do {
          if (*(uint *)((longlong)iVar18 * 0x20 + lVar4) == uVar17) {
            puVar33 = &local_358->field_0x38;
            if (puVar3 != (undefined1 *)0x0) {
              puVar33 = puVar3;
            }
            iVar18 = *(int *)(puVar33 + uVar31 * 4);
            goto joined_r0x00014e77a8c3;
          }
          iVar18 = *(int *)((longlong)iVar18 * 0x20 + 0x18 + lVar4);
        } while (iVar18 != -1);
      }
    }
    pUVar37 = (UInterchangeGenericMeshPipeline *)local_328;
    goto LAB_14e77a84b;
  }
  goto LAB_14e77b8e5;
joined_r0x00014e77a8c3:
  pUVar23 = pUVar38;
  if (iVar18 == -1) goto LAB_14e77a8e8;
  if (*(uint *)((longlong)iVar18 * 0x20 + lVar4) == uVar17) {
    if ((iVar18 != -1) &&
       (pUVar23 = (UInterchangeMeshNode *)((longlong)iVar18 * 0x20 + lVar4),
       pUVar23 != (UInterchangeMeshNode *)0x0)) goto LAB_14e77a90e;
    goto LAB_14e77a8e8;
  }
  iVar18 = *(int *)((longlong)iVar18 * 0x20 + 0x18 + lVar4);
  goto joined_r0x00014e77a8c3;
LAB_14e77a8e8:
  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x27b,L"");
  if (bVar16) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14e77a90e:
  pUVar37 = (UInterchangeGenericMeshPipeline *)&pUVar23->_padding_;
LAB_14e77a84b:
  local_368.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.Data.ArrayNum = 0;
  local_368.Data.ArrayMax = 0;
  local_3e8 = pUVar37;
  ::FString::AppendInt(&local_368,uVar17);
  ::FString::ConcatCF(&local_250,L"LodData",&local_368);
  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Data.AllocatorInstance.Data);
  }
  if (uVar17 == 0) {
    uVar35 = (uint)pUVar34 | 2;
    local_404 = uVar35;
    pFVar24 = ::FString::FString((FString *)local_1b0,L"");
  }
  else {
    uVar35 = (uint)pUVar34 | 1;
    local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_350.Data.ArrayNum = 0;
    local_350.Data.ArrayMax = 0;
    local_404 = uVar35;
    ::FString::AppendInt(&local_350,uVar17);
    pFVar24 = &local_350;
  }
  ::FString::ConcatCF(&local_260,L"\\LodData",pFVar24);
  if (((uVar35 & 2) != 0) &&
     (uVar35 = uVar35 & 0xfffffffd, local_404 = uVar35, (void *)local_1b0._0_8_ != (void *)0x0)) {
    FMemory::Free((void *)local_1b0._0_8_);
  }
  if (((uVar35 & 1) != 0) &&
     (local_404 = uVar35 & 0xfffffffe,
     local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_350.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFF(&local_340,&local_260,&local_2b0);
  pUVar21 = (UInterchangeStaticMeshLodDataNode *)
            UInterchangeBaseNodeContainer::GetFactoryNode(this_00->BaseNodeContainer,&local_340);
  local_400 = pUVar21;
  if (pUVar21 != (UInterchangeStaticMeshLodDataNode *)0x0) {
    pUVar22 = Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_NoRegister();
    iVar18 = (int)pUVar22->_padding_;
    if ((iVar18 <= *(int *)(pUVar21->_padding_ + 0x38)) &&
       (this_03 = local_3f8,
       (longlong *)*(undefined1 **)(*(longlong *)(pUVar21->_padding_ + 0x30) + (longlong)iVar18 * 8)
       == &pUVar22->_padding_)) goto LAB_14e77aa37;
  }
  local_400 = CreateStaticMeshLodDataNode(this_00,&local_250,&local_340);
  UInterchangeBaseNodeContainer::SetNodeParentUid(this_00->BaseNodeContainer,&local_340,&local_2b0);
  this_03 = local_3f8;
  UInterchangeMeshFactoryNode::AddLodDataUniqueId
            ((UInterchangeMeshFactoryNode *)local_3f8,&local_340);
LAB_14e77aa37:
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  FStack_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (UInterchangeBaseNodeContainer *)0x0;
  local_a0 = 0;
  local_370 = (uint)pUVar37->_padding_;
  uVar31 = (ulonglong)(int)local_370;
  pFVar36 = ((ForAnyElementType *)&pUVar37->_padding_)->Data;
  local_330 = pFVar36 + uVar31 * 0x10;
  while( true ) {
    pFVar13 = local_330;
    if ((int)pUVar37->_padding_ != (int)uVar31) {
      local_407[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_407);
    }
    if (pFVar36 == pFVar13) break;
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_98._32_8_ = 0;
    local_98._40_4_ = 0;
    local_98._44_4_ = 0x80;
    local_98._48_4_ = 0xffffffff;
    local_98._52_4_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    this_01 = (UInterchangeSceneNode *)
              UInterchangeBaseNodeContainer::GetNode(this_00->BaseNodeContainer,(FString *)pFVar36);
    if (this_01 == (UInterchangeSceneNode *)0x0) {
LAB_14e77acad:
      pUVar23 = (UInterchangeMeshNode *)
                UInterchangeBaseNodeContainer::GetNode
                          (this_00->BaseNodeContainer,(FString *)pFVar36);
      if (pUVar23 == (UInterchangeMeshNode *)0x0) {
LAB_14e77ad98:
        this_02 = (UInterchangeInstancedStaticMeshComponentNode *)
                  UInterchangeBaseNodeContainer::GetNode
                            (this_00->BaseNodeContainer,(FString *)pFVar36);
        if (this_02 != (UInterchangeInstancedStaticMeshComponentNode *)0x0) {
          pUVar22 = Z_Construct_UClass_UInterchangeInstancedStaticMeshComponentNode_NoRegister();
          iVar18 = (int)pUVar22->_padding_;
          if ((iVar18 <= *(int *)(this_02->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar18 * 8) ==
              &pUVar22->_padding_)) {
            local_3b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_3b0.Data.ArrayNum = 0;
            local_3b0.Data.ArrayMax = 0;
            UInterchangeInstancedStaticMeshComponentNode::GetCustomInstancedAssetUid
                      (this_02,&local_3b0);
            bVar16 = UInterchangeBaseNodeContainer::IsNodeUidValid
                               (this_00->BaseNodeContainer,&local_3b0);
            if (bVar16) {
              pUVar23 = (UInterchangeMeshNode *)
                        UInterchangeBaseNodeContainer::GetNode
                                  (this_00->BaseNodeContainer,&local_3b0);
              if (pUVar23 == (UInterchangeMeshNode *)0x0) {
LAB_14e77ae45:
                pUVar23 = pUVar38;
              }
              else {
                pUVar22 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
                iVar18 = (int)pUVar22->_padding_;
                if ((*(int *)(pUVar23->_padding_ + 0x38) < iVar18) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(pUVar23->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
                    &pUVar22->_padding_)) goto LAB_14e77ae45;
              }
              UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
                        ((UInterchangeBaseNode *)pUVar23,(UInterchangeBaseNode *)this_03,true);
              UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)this_03,&local_3b0);
              pUVar5 = (this_00->PipelineMeshesUtilities).field0_0x0.DebugPtr;
              iVar18 = local_3b0.Data.ArrayNum + -1;
              FVar32.Data = local_3b0.Data.AllocatorInstance.Data;
              if (local_3b0.Data.ArrayNum == 0) {
                iVar18 = 0;
                FVar32.Data = (FScriptContainerElement *)L"";
              }
              uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,(wchar_t *)FVar32.Data);
              iVar18 = TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<FString>
                                 ((TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                                   *)&pUVar5->MeshGeometriesPerMeshUid,uVar17,&local_3b0);
              pUVar34 = pUVar38;
              if (((iVar18 == -1) ||
                  (pUVar34 = (UInterchangeMeshNode *)
                             ((longlong)iVar18 * 0x50 +
                             *(longlong *)&pUVar5->MeshGeometriesPerMeshUid),
                  pUVar34 == (UInterchangeMeshNode *)0x0)) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Pair != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                      ,0x27b,L""), bVar16)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              this_03 = local_3f8;
              UInterchangeStaticMeshFactoryNode::AddSocketUids
                        (local_3f8,
                         (TArray<FString,TSizedDefaultAllocator<32>_> *)&pUVar34->_padding_);
              pFVar24 = UInterchangeBaseNode::GetUniqueID
                                  ((UInterchangeBaseNode *)this_03,&local_180);
              UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)pUVar23,pFVar24);
              if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_180.Data.AllocatorInstance.Data);
              }
              UInterchangeMeshNode::GetSlotMaterialDependencies
                        (pUVar23,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                                  *)local_98);
              pUVar37 = local_3e8;
            }
            UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
                      ((UInterchangeBaseNode *)this_02,(UInterchangeBaseNode *)this_03,true);
            FVar32.Data = local_3b0.Data.AllocatorInstance.Data;
            goto LAB_14e77af38;
          }
        }
      }
      else {
        pUVar22 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
        iVar18 = (int)pUVar22->_padding_;
        if ((*(int *)(pUVar23->_padding_ + 0x38) < iVar18) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar23->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
            &pUVar22->_padding_)) goto LAB_14e77ad98;
        UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
                  ((UInterchangeBaseNode *)pUVar23,(UInterchangeBaseNode *)this_03,true);
        UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)this_03,(FString *)pFVar36);
        pTVar25 = TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                          *)&((this_00->PipelineMeshesUtilities).field0_0x0.DebugPtr)->
                             MeshGeometriesPerMeshUid,(FString *)pFVar36);
        if ((pTVar25 == (TTuple<FString,FInterchangeMeshGeometry> *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x27b,L""), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        UInterchangeStaticMeshFactoryNode::AddSocketUids
                  (this_03,(TArray<FString,TSizedDefaultAllocator<32>_> *)&pTVar25->field_0x38);
        pFVar24 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_03,&local_190);
        UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)pUVar23,pFVar24);
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
        UInterchangeMeshNode::GetSlotMaterialDependencies
                  (pUVar23,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                            *)local_98);
      }
    }
    else {
      pUVar22 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
      iVar18 = (int)pUVar22->_padding_;
      if ((*(int *)(this_01->_padding_ + 0x38) < iVar18) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
          &pUVar22->_padding_)) goto LAB_14e77acad;
      local_3c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3c0.Data.ArrayNum = 0;
      local_3c0.Data.ArrayMax = 0;
      UInterchangeSceneNode::GetCustomAssetInstanceUid(this_01,&local_3c0);
      bVar16 = UInterchangeBaseNodeContainer::IsNodeUidValid(this_00->BaseNodeContainer,&local_3c0);
      if (bVar16) {
        pUVar23 = (UInterchangeMeshNode *)
                  UInterchangeBaseNodeContainer::GetNode(this_00->BaseNodeContainer,&local_3c0);
        if (pUVar23 == (UInterchangeMeshNode *)0x0) {
LAB_14e77aba4:
          pUVar23 = pUVar38;
        }
        else {
          pUVar22 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
          iVar18 = (int)pUVar22->_padding_;
          if ((*(int *)(pUVar23->_padding_ + 0x38) < iVar18) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar23->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
              &pUVar22->_padding_)) goto LAB_14e77aba4;
        }
        UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
                  ((UInterchangeBaseNode *)pUVar23,(UInterchangeBaseNode *)this_03,true);
        UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)this_03,&local_3c0);
        pUVar5 = (this_00->PipelineMeshesUtilities).field0_0x0.DebugPtr;
        iVar18 = local_3c0.Data.ArrayNum + -1;
        FVar32.Data = local_3c0.Data.AllocatorInstance.Data;
        if (local_3c0.Data.ArrayNum == 0) {
          iVar18 = 0;
          FVar32.Data = (FScriptContainerElement *)L"";
        }
        uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,(wchar_t *)FVar32.Data);
        iVar18 = TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>
                           ((TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                             *)&pUVar5->MeshGeometriesPerMeshUid,uVar17,&local_3c0);
        pUVar34 = pUVar38;
        if (((iVar18 == -1) ||
            (pUVar34 = (UInterchangeMeshNode *)
                       ((longlong)iVar18 * 0x50 + *(longlong *)&pUVar5->MeshGeometriesPerMeshUid),
            pUVar34 == (UInterchangeMeshNode *)0x0)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x27b,L""), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        this_03 = local_3f8;
        UInterchangeStaticMeshFactoryNode::AddSocketUids
                  (local_3f8,(TArray<FString,TSizedDefaultAllocator<32>_> *)&pUVar34->_padding_);
        pFVar24 = UInterchangeBaseNode::GetUniqueID
                            ((UInterchangeBaseNode *)this_03,(FString *)(local_1b0 + 0x10));
        UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)pUVar23,pFVar24);
        if ((void *)local_1b0._16_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1b0._16_8_);
        }
        UInterchangeMeshNode::GetSlotMaterialDependencies
                  (pUVar23,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                            *)local_98);
        pUVar37 = local_3e8;
      }
      else {
        UInterchangeSceneNode::GetSlotMaterialDependencies
                  (this_01,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                            *)local_98);
      }
      UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
                ((UInterchangeBaseNode *)this_01,(UInterchangeBaseNode *)this_03,true);
      FVar32.Data = local_3c0.Data.AllocatorInstance.Data;
LAB_14e77af38:
      if (FVar32.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar32.Data);
      }
    }
    UE::Interchange::MeshesUtilities::
    ApplySlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>
              (this_03,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        *)local_98,this_00->BaseNodeContainer,
               (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)&local_e8);
    local_2a0 = (this_00->PipelineMeshesUtilities).field0_0x0.DebugPtr;
    pUVar6 = this_00->BaseNodeContainer;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_2a0 != (UInterchangePipelineMeshesUtilities *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_2a0);
    }
    UE::Interchange::Private::GetNodeName
              (&local_380,(TObjectPtr<UInterchangePipelineMeshesUtilities>)&local_2a0,pUVar6,
               (FString *)pFVar36);
    bVar16 = ::FString::StartsWith(&local_380,L"UBX",3,IgnoreCase);
    if (((bVar16) || (bVar16 = ::FString::StartsWith(&local_380,L"UCX",3,IgnoreCase), bVar16)) ||
       ((bVar16 = ::FString::StartsWith(&local_380,L"USP",3,IgnoreCase), bVar16 ||
        ((bVar16 = ::FString::StartsWith(&local_380,L"UCP",3,IgnoreCase), bVar16 ||
         (bVar16 = ::FString::StartsWith(&local_380,L"MCDCX",5,IgnoreCase), bVar16)))))) {
      bVar16 = true;
    }
    else {
      bVar16 = false;
    }
    bVar2 = this_00->bImportCollisionAccordingToMeshName;
    if (bVar2 == false) {
      UInterchangeStaticMeshLodDataNode::AddMeshUid(local_400,(FString *)pFVar36);
      if (bVar16) {
        pFVar26 = FText::FromString(&local_110,&local_380);
        pFVar27 = FText::AsLocalizable_Advanced_LocText
                            ((FText *)&local_140[0].ObjectPtr,
                             L"UInterchangeGenericStaticMeshPipeline",
                             L"ImportCollisionAccordingToMeshNameDisabled",
                             L"The mesh \'{0}\' appears to use custom collision naming pattern, but the setting \'Import Collisions According to Mesh Name\' is disabled. It will be treated as a render mesh."
                            );
        pFVar28 = FTextFormat::FTextFormat(&local_100,pFVar27,Default);
        local_1d0.Type = Text;
        FText::FText((FText *)&local_1d0.TextValue,pFVar26);
        if ((local_1d0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0xbd,
                                L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_390.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_390.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_390.AllocatorInstance,1,&local_390.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_390.AllocatorInstance.Data,&local_1d0,1);
        local_230.TextFormatData.Object = (pFVar28->TextFormatData).Object;
        local_230.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar28->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_230.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_230.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_230.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_2f0,&local_230,&local_390);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_390.AllocatorInstance.Data,local_390.ArrayNum);
        if ((FFormatArgumentValue *)local_390.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_390.AllocatorInstance.Data);
        }
        if (local_1d0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_1d0.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar28->TextFormatData).SharedReferenceCount.ReferenceController);
        pIVar7 = (pFVar26->TextData).Reference;
        if (pIVar7 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar7 + 0x10))();
        }
        pUVar29 = UInterchangePipelineBase::AddMessage<UInterchangeResultWarning_Generic>
                            ((UInterchangePipelineBase *)this_00);
        if (((this_00->SourceDatas).ArrayNum < 1) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar4 = *(longlong *)(this_00->SourceDatas).AllocatorInstance.Data;
        local_3d0.Data = (FScriptContainerElement *)0x0;
        iVar18 = *(int *)(lVar4 + 0x30);
        pvVar8 = *(void **)(lVar4 + 0x28);
        local_3c8 = CONCAT44(local_3c8._4_4_,iVar18);
        if (iVar18 == 0) {
          local_3c8 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar18,0,&local_3d0,iVar18,(int *)((longlong)&local_3c8 + 4));
          memcpy(local_3d0.Data,pvVar8,(longlong)iVar18 * 2);
        }
        plVar1 = &pUVar29->_padding_;
        if ((ForAnyElementType *)plVar1 == &local_3d0) {
          if (local_3d0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3d0.Data);
          }
        }
        else {
          if ((void *)*plVar1 != (void *)0x0) {
            FMemory::Free((void *)*plVar1);
          }
          *plVar1 = (longlong)local_3d0.Data;
          *(undefined4 *)&pUVar29->_padding_ = (undefined4)local_3c8;
          *(undefined4 *)((longlong)&pUVar29->_padding_ + 4) = local_3c8._4_4_;
          local_3c8 = 0;
          local_3d0.Data = (FScriptContainerElement *)0x0;
        }
        this_03 = local_3f8;
        plVar30 = (longlong *)(**(code **)(local_3f8->_padding_ + 0x2d8))(local_3f8,local_150);
        plVar1 = &pUVar29->_padding_;
        if (plVar1 != plVar30) {
          if ((void *)*plVar1 != (void *)0x0) {
            FMemory::Free((void *)*plVar1);
          }
          *plVar1 = *plVar30;
          *plVar30 = 0;
          *(int *)&pUVar29->_padding_ = (int)plVar30[1];
          *(undefined4 *)((longlong)&pUVar29->_padding_ + 4) =
               *(undefined4 *)((longlong)plVar30 + 0xc);
          plVar30[1] = 0;
        }
        if (local_150[0] != (void *)0x0) {
          FMemory::Free(local_150[0]);
        }
        pUVar20 = (UObject *)(**(code **)(this_03->_padding_ + 0x2f8))(this_03);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar20);
        }
        pUVar29->_padding_ = (longlong)pUVar20;
        pIVar7 = (pUVar29->Text).TextData.Reference;
        if (pIVar7 != local_2f0.TextData.Reference) {
          (pUVar29->Text).TextData.Reference = local_2f0.TextData.Reference;
          if (local_2f0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2f0.TextData.Reference + 8))
                      (local_2f0.TextData.Reference,local_2b4);
          }
          if (pIVar7 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
          }
        }
        (pUVar29->Text).Flags = local_2f0.Flags;
        if (local_2f0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2f0.TextData.Reference + 0x10))();
        }
        if (local_140[0].DebugPtr != (UInterchangePipelineMeshesUtilities *)0x0) {
          (**(code **)((local_140[0].DebugPtr)->_padding_ + 0x10))();
        }
      }
    }
    else {
      local_298 = (this_00->PipelineMeshesUtilities).field0_0x0.DebugPtr;
      pUVar6 = this_00->BaseNodeContainer;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_298 != (UInterchangePipelineMeshesUtilities *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_298);
      }
      GetCollisionMeshType
                ((TTuple<EInterchangeMeshCollision,FString> *)(local_328 + 0x10),
                 (TObjectPtr<UInterchangePipelineMeshesUtilities>)&local_298,pUVar6,
                 (FString *)pFVar36,(TArray<FString,TSizedDefaultAllocator<32>_> *)pUVar37,bVar2);
      cVar14 = local_328[0x10];
      pUVar21 = local_400;
      if (local_328[0x10] == -1) {
        UInterchangeStaticMeshLodDataNode::AddMeshUid(local_400,(FString *)pFVar36);
        pUVar21 = local_400;
        if (bVar16) {
          pFVar26 = FText::FromString(&local_130,&local_380);
          pFVar27 = FText::AsLocalizable_Advanced_LocText
                              (&local_160,L"UInterchangeGenericStaticMeshPipeline",
                               L"NoMatchingRenderMeshForCustomCollision",
                               L"No render mesh found for custom collision \'{0}\'. The name must follow the pattern \'UCX_[ExactRenderMeshName]\', and a matching render mesh with that name must exist in the source file."
                              );
          pFVar28 = FTextFormat::FTextFormat(&local_120,pFVar27,Default);
          local_1f0.Type = Text;
          FText::FText((FText *)&local_1f0.TextValue,pFVar26);
          if ((local_1f0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0xbd,
                                  L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                 ), bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_3a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3a0.ArrayNum = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,1,0,&local_3a0.AllocatorInstance,1,&local_3a0.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_3a0.AllocatorInstance.Data,&local_1f0,1);
          local_240.TextFormatData.Object = (pFVar28->TextFormatData).Object;
          local_240.TextFormatData.SharedReferenceCount.ReferenceController =
               (pFVar28->TextFormatData).SharedReferenceCount.ReferenceController;
          if (local_240.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_240.TextFormatData.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_240.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FText::Format(&local_300,&local_240,&local_3a0);
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_3a0.AllocatorInstance.Data,local_3a0.ArrayNum);
          if ((FFormatArgumentValue *)local_3a0.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_3a0.AllocatorInstance.Data);
          }
          if (local_1f0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)(*(longlong *)local_1f0.TextValue.field0_0x0.TypedValue.TextData.Reference +
                        0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar28->TextFormatData).SharedReferenceCount.ReferenceController);
          pIVar7 = (pFVar26->TextData).Reference;
          if (pIVar7 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar7 + 0x10))();
          }
          pUVar29 = UInterchangePipelineBase::AddMessage<UInterchangeResultWarning_Generic>
                              ((UInterchangePipelineBase *)this_00);
          if (((this_00->SourceDatas).ArrayNum < 1) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar4 = *(longlong *)(this_00->SourceDatas).AllocatorInstance.Data;
          local_3e0.Data = (FScriptContainerElement *)0x0;
          iVar18 = *(int *)(lVar4 + 0x30);
          pvVar8 = *(void **)(lVar4 + 0x28);
          local_3d8 = CONCAT44(local_3d8._4_4_,iVar18);
          if (iVar18 == 0) {
            local_3d8 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar18,0,&local_3e0,iVar18,(int *)((longlong)&local_3d8 + 4));
            memcpy(local_3e0.Data,pvVar8,(longlong)iVar18 * 2);
          }
          plVar1 = &pUVar29->_padding_;
          if ((ForAnyElementType *)plVar1 == &local_3e0) {
            if (local_3e0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3e0.Data);
            }
          }
          else {
            if ((void *)*plVar1 != (void *)0x0) {
              FMemory::Free((void *)*plVar1);
            }
            *plVar1 = (longlong)local_3e0.Data;
            *(undefined4 *)&pUVar29->_padding_ = (undefined4)local_3d8;
            *(undefined4 *)((longlong)&pUVar29->_padding_ + 4) = local_3d8._4_4_;
            local_3d8 = 0;
            local_3e0.Data = (FScriptContainerElement *)0x0;
          }
          plVar30 = (longlong *)(**(code **)(local_3f8->_padding_ + 0x2d8))(local_3f8,local_170);
          plVar1 = &pUVar29->_padding_;
          if (plVar1 != plVar30) {
            if ((void *)*plVar1 != (void *)0x0) {
              FMemory::Free((void *)*plVar1);
            }
            *plVar1 = *plVar30;
            *plVar30 = 0;
            *(int *)&pUVar29->_padding_ = (int)plVar30[1];
            *(undefined4 *)((longlong)&pUVar29->_padding_ + 4) =
                 *(undefined4 *)((longlong)plVar30 + 0xc);
            plVar30[1] = 0;
          }
          if (local_170[0] != (void *)0x0) {
            FMemory::Free(local_170[0]);
          }
          pUVar20 = (UObject *)(**(code **)(local_3f8->_padding_ + 0x2f8))();
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar20);
          }
          pUVar29->_padding_ = (longlong)pUVar20;
          pIVar7 = (pUVar29->Text).TextData.Reference;
          if (pIVar7 != local_300.TextData.Reference) {
            (pUVar29->Text).TextData.Reference = local_300.TextData.Reference;
            if (local_300.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_300.TextData.Reference + 8))
                        (local_300.TextData.Reference,local_2b8);
            }
            if (pIVar7 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
            }
          }
          (pUVar29->Text).Flags = local_300.Flags;
          if (local_300.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_300.TextData.Reference + 0x10))();
          }
          pUVar21 = local_400;
          if (local_160.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
            pUVar21 = local_400;
          }
        }
      }
      else {
        switch(local_328[0x10]) {
        case '\0':
          UInterchangeStaticMeshLodDataNode::AddBoxCollisionMeshUids
                    (local_400,(FString *)pFVar36,&local_310);
          break;
        case '\x01':
          UInterchangeStaticMeshLodDataNode::AddSphereCollisionMeshUids
                    (local_400,(FString *)pFVar36,&local_310);
          break;
        case '\x02':
          UInterchangeStaticMeshLodDataNode::AddCapsuleCollisionMeshUids
                    (local_400,(FString *)pFVar36,&local_310);
          break;
        case '\x03':
        case '\x04':
        case '\x05':
        case '\x06':
        case '\a':
          UInterchangeStaticMeshLodDataNode::AddConvexCollisionMeshUids
                    (local_400,(FString *)pFVar36,&local_310);
        }
      }
      if (local_310.Data.ArrayNum == *(int *)&pFVar36[8].field_0x0) {
        if (1 < local_310.Data.ArrayNum) {
          iVar18 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)local_310.Data.AllocatorInstance.Data,
                              (wchar_t *)
                              (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar36->field_0x0)
                              ->AllocatorInstance).Data);
          bVar16 = iVar18 == 0;
          goto LAB_14e77b4b3;
        }
LAB_14e77b4ba:
        if (cVar14 != -1) {
          UInterchangeStaticMeshLodDataNode::AddMeshUid(pUVar21,(FString *)pFVar36);
        }
      }
      else {
        bVar16 = local_310.Data.ArrayNum + *(int *)&pFVar36[8].field_0x0 == 1;
LAB_14e77b4b3:
        if (bVar16) goto LAB_14e77b4ba;
      }
      this_03 = local_3f8;
      if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_310.Data.AllocatorInstance.Data);
        this_03 = local_3f8;
      }
    }
    if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_380.Data.AllocatorInstance.Data);
    }
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    uVar31 = (ulonglong)local_370;
    pFVar36 = pFVar36 + 0x10;
    pUVar37 = local_3e8;
  }
  UE::Interchange::MeshesUtilities::
  ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>
            (this_03,this_00->BaseNodeContainer);
  local_a0 = 0;
  if (local_a8 != (UInterchangeBaseNodeContainer *)0x0) {
    FMemory::Free(local_a8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_e8);
  if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Data.AllocatorInstance.Data);
  }
  if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data.AllocatorInstance.Data);
  }
  pUVar34 = (UInterchangeMeshNode *)(ulonglong)local_404;
  uVar17 = local_3f0;
LAB_14e77b8e5:
  local_3f0 = uVar17 + 1;
  pUVar23 = (UInterchangeMeshNode *)(ulonglong)local_3f0;
  if (local_36c <= (int)local_3f0) goto LAB_14e77b8fb;
  goto LAB_14e77a7e0;
}

// AddMeshesToGeometryCache @ 14e77b980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeGenericMeshPipeline::AddMeshesToGeometryCache
          (UInterchangeGenericMeshPipeline *this,UInterchangeGeometryCacheFactoryNode *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  ulonglong uVar2;
  UInterchangeSceneNode *this_00;
  UClass *pUVar3;
  UInterchangeMeshNode *pUVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [4];
  uint local_124;
  FString local_120;
  FString local_110;
  FString local_100;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  void *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [64];
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_124 = param_2->ArrayNum;
  uVar2 = (ulonglong)(int)local_124;
  pFVar6 = (param_2->AllocatorInstance).Data;
  pFVar7 = pFVar6 + uVar2 * 0x10;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_98._32_8_ = 0;
  local_98._40_4_ = 0;
  local_98._44_4_ = 0x80;
  local_98._48_4_ = 0xffffffff;
  local_98._52_4_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  do {
    if (param_2->ArrayNum != (int)uVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_128);
    }
    if (pFVar6 == pFVar7) {
      local_50 = 0;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      return;
    }
    local_e8._0_8_ = (FScriptContainerElement *)0x0;
    local_e8._8_8_ = 0;
    local_c8 = (void *)0x0;
    local_c0 = 0;
    local_bc = 0x80;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    this_00 = (UInterchangeSceneNode *)
              UInterchangeBaseNodeContainer::GetNode(this->BaseNodeContainer,(FString *)pFVar6);
    if (this_00 == (UInterchangeSceneNode *)0x0) {
LAB_14e77bc1a:
      pUVar4 = (UInterchangeMeshNode *)
               UInterchangeBaseNodeContainer::GetNode(this->BaseNodeContainer,(FString *)pFVar6);
      if (pUVar4 != (UInterchangeMeshNode *)0x0) {
        pUVar3 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
        iVar1 = (int)pUVar3->_padding_;
        if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar3->_padding_)) {
          UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
                    ((UInterchangeBaseNode *)pUVar4,(UInterchangeBaseNode *)param_1,true);
          UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)param_1,(FString *)pFVar6);
          pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_1,&local_100);
          UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)pUVar4,pFVar5);
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          UInterchangeMeshNode::GetSlotMaterialDependencies
                    (pUVar4,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                             *)local_e8);
        }
      }
    }
    else {
      pUVar3 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) goto LAB_14e77bc1a;
      local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_120.Data.ArrayNum = 0;
      local_120.Data.ArrayMax = 0;
      UInterchangeSceneNode::GetCustomAssetInstanceUid(this_00,&local_120);
      pUVar4 = (UInterchangeMeshNode *)
               UInterchangeBaseNodeContainer::GetNode(this->BaseNodeContainer,&local_120);
      if (pUVar4 == (UInterchangeMeshNode *)0x0) {
LAB_14e77bb32:
        UInterchangeSceneNode::GetSlotMaterialDependencies
                  (this_00,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                            *)local_e8);
      }
      else {
        pUVar3 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
        iVar1 = (int)pUVar3->_padding_;
        if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar3->_padding_)) goto LAB_14e77bb32;
        UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
                  ((UInterchangeBaseNode *)pUVar4,(UInterchangeBaseNode *)param_1,true);
        UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)param_1,(FString *)pFVar6);
        pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_1,&local_110);
        UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)pUVar4,pFVar5);
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
        UInterchangeMeshNode::GetSlotMaterialDependencies
                  (pUVar4,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                           *)local_e8);
      }
      UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
                ((UInterchangeBaseNode *)this_00,(UInterchangeBaseNode *)param_1,true);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
    }
    UE::Interchange::MeshesUtilities::
    ApplySlotMaterialDependencies<UInterchangeGeometryCacheFactoryNode>
              (param_1,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        *)local_e8,this->BaseNodeContainer,
               (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)local_98);
    local_a0 = 0;
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_e8,0,local_e8._8_4_);
    bVar8 = local_e8._12_4_ != 0;
    local_e8._8_8_ = (ulonglong)(uint)local_e8._12_4_ << 0x20;
    if (bVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
    }
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_c0 = 0;
    if (0x80 < local_bc) {
      local_bc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
    }
    if (local_c8 != (void *)0x0) {
      FMemory::Free(local_c8);
    }
    if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._0_8_);
    }
    uVar2 = (ulonglong)local_124;
    pFVar6 = pFVar6 + 0x10;
  } while( true );
}

// AdjustSettingsForContext @ 14e780cc0

void __thiscall
UInterchangeGenericMeshPipeline::AdjustSettingsForContext
          (UInterchangeGenericMeshPipeline *this,FInterchangePipelineContextParams *param_1)

{
  EInterchangePipelineContext EVar1;
  
  FInterchangePipelineContextParams::operator=
            ((FInterchangePipelineContextParams *)&this->_padding_,param_1);
  TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
  ::operator=((TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
               *)&this->_padding_,
              (TMap<FName,FInterchangePipelinePropertyStates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInterchangePipelinePropertyStates,0>_>
               *)&this->_padding_);
  EVar1 = param_1->ContextType;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  *(bool *)&this->_padding_ = EVar1 == None;
  EVar1 = param_1->ContextType;
  if ((EVar1 == AssetReimport) ||
     (((EVar1 - SceneReimport & 0xf9) == 0 && (EVar1 != AssetCustomMorphTargetReImport)))) {
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  }
  return;
}

// CanExecuteOnAnyThread @ 14e782720

bool __thiscall
UInterchangeGenericMeshPipeline::CanExecuteOnAnyThread
          (UInterchangeGenericMeshPipeline *this,EInterchangePipelineTask param_1)

{
  return true;
}

// CreateAssemblyPartDependencies @ 14e792630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInterchangeGenericMeshPipeline::CreateAssemblyPartDependencies
          (UInterchangeGenericMeshPipeline *this)

{
  ulonglong uVar1;
  uint uVar2;
  UInterchangeMeshFactoryNode *this_00;
  UInterchangePipelineMeshesUtilities *pUVar3;
  code *pcVar4;
  TSet<TTuple<FString,UInterchangeMeshFactoryNode_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeMeshFactoryNode_*,0>,FDefaultSetAllocator>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TTuple<FString,FInterchangeMeshGeometry> *pTVar9;
  TTuple<FString,FString> *pTVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  wchar_t *pwVar17;
  ForAnyElementType FVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  TSet<TTuple<FString,UInterchangeMeshFactoryNode_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeMeshFactoryNode_*,0>,FDefaultSetAllocator>
  *this_01;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  undefined1 *puVar24;
  uint *puVar25;
  int iVar26;
  FString *pFVar27;
  undefined1 auStack_228 [32];
  int local_208;
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined1 local_1f6 [6];
  TArray<FString,TSizedDefaultAllocator<32>_> local_1f0;
  TSet<TTuple<FString,UInterchangeMeshFactoryNode_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeMeshFactoryNode_*,0>,FDefaultSetAllocator>
  *local_1e0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1d8;
  int local_1c8;
  uint uStack_1c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c0;
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  FString local_1a8;
  UInterchangeGenericMeshPipeline *local_198;
  FString local_190;
  TMap<FString,UInterchangeMeshFactoryNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UInterchangeMeshFactoryNode_*,0>_>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  int local_150;
  int local_14c;
  undefined1 local_148 [16];
  undefined8 local_138;
  TSet<TTuple<FString,UInterchangeMeshFactoryNode_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeMeshFactoryNode_*,0>,FDefaultSetAllocator>
  *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  FScriptContainerElement *local_100;
  FString *local_f8;
  TSet<TTuple<FString,UInterchangeMeshFactoryNode_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeMeshFactoryNode_*,0>,FDefaultSetAllocator>
  *local_f0;
  undefined8 uStack_e8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  int local_c8;
  undefined4 uStack_c4;
  TSet<TTuple<FString,UInterchangeMeshFactoryNode_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeMeshFactoryNode_*,0>,FDefaultSetAllocator>
  *local_c0;
  undefined8 uStack_b8;
  TBitArray<FDefaultBitArrayAllocator> *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  if ((this->PipelineMeshesUtilities).field0_0x0.DebugPtr !=
      (UInterchangePipelineMeshesUtilities *)0x0) {
    iStack_178 = 0;
    local_160 = 0;
    local_1e0 = (TSet<TTuple<FString,UInterchangeMeshFactoryNode_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeMeshFactoryNode_*,0>,FDefaultSetAllocator>
                 *)&this->AssemblyPartMeshUidToFactoryNodeTable;
    local_170 = &(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x10;
    local_88.Elements._0_8_ = 0;
    local_88.Elements._8_8_ = 0;
    local_88.Elements._32_8_ = 0;
    local_88.Elements._40_4_ = 0;
    local_88.Elements._44_4_ = 0x80;
    local_88.Elements._48_4_ = 0xffffffff;
    local_88.Elements._52_4_ = 0;
    local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_88.HashSize = 0;
    iVar8 = *(int *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x28;
    uStack_174 = 1;
    iStack_164 = local_160;
    if (iVar8 != 0) {
      puVar25 = *(uint **)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x20;
      if (puVar25 == (uint *)0x0) {
        puVar25 = (uint *)local_170;
      }
      uStack_174 = *puVar25;
      local_160 = 0;
      iStack_178 = 0;
      while (uStack_174 == 0) {
        lVar14 = (longlong)iStack_178;
        local_160 = local_160 + 0x20;
        iStack_178 = iStack_178 + 1;
        uStack_174 = 1;
        iStack_164 = iVar8;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_178) goto LAB_14e79275e;
        uStack_174 = puVar25[lVar14 + 1];
      }
      uStack_174 = -uStack_174 & uStack_174;
      uVar1 = (ulonglong)uStack_174 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_150 = (int)lVar14;
      iStack_164 = local_160 + -1 + local_150;
      if (iVar8 < iStack_164) {
        iStack_164 = iVar8;
      }
    }
LAB_14e79275e:
    iStack_158 = *(int *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x8 -
                 *(int *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x34;
    uVar7 = *(uint *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x28;
    bVar11 = (byte)uVar7 & 0x1f;
    iVar26 = (int)uVar7 >> 5;
    uStack_1c4 = 1 << bVar11;
    uVar20 = -1 << bVar11;
    uVar22 = uVar7 & 0xffffffe0;
    uStack_168 = 0xffffffff;
    puVar15 = &(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x10;
    TStack_128._padding_ = CONCAT44(uStack_174,iStack_178);
    TStack_128.CurrentBitIndex = iStack_164;
    TStack_128.UnvisitedBitMask = 0xffffffff;
    TStack_128._28_4_ = iStack_164;
    TStack_128.BaseBitIndex = local_160;
    uStack_108 = CONCAT44(uStack_154,iStack_158);
    local_1c8 = iVar26;
    pTStack_1c0 = (TBitArray<FDefaultBitArrayAllocator> *)puVar15;
    local_1b8 = uVar20;
    uStack_1b4 = uVar7;
    uStack_1b0 = uVar22;
    local_198 = this;
    local_180 = (TMap<FString,UInterchangeMeshFactoryNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UInterchangeMeshFactoryNode_*,0>_>
                 *)local_1e0;
    iStack_15c = iStack_164;
    local_130 = local_1e0;
    TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_170;
    if ((((int)uVar7 < 0) || (iVar8 < (int)uVar7)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar2 = *(uint *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x28;
    if (uVar7 != uVar2) {
      puVar24 = *(undefined1 **)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x20;
      if (puVar24 == (undefined1 *)0x0) {
        puVar24 = puVar15;
      }
      uVar20 = uVar20 & *(uint *)(puVar24 + (longlong)iVar26 * 4);
      while (uVar20 == 0) {
        uStack_1b0 = uVar22 + 0x20;
        local_1c8 = iVar26 + 1;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1c8)
        goto LAB_14e79289d;
        uVar20 = *(uint *)(puVar24 + (longlong)iVar26 * 4 + 4);
        local_1b8 = 0xffffffff;
        iVar26 = local_1c8;
        uVar22 = uStack_1b0;
      }
      uStack_1c4 = -uVar20 & uVar20;
      uVar1 = (ulonglong)uStack_1c4 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_14c = (int)lVar14;
      uStack_1b4 = local_14c + -1 + uVar22;
      if ((int)uVar2 < (int)uStack_1b4) {
LAB_14e79289d:
        uStack_1b4 = uVar2;
      }
    }
    uStack_e8 = CONCAT44(uStack_1c4,local_1c8);
    local_f0 = local_1e0;
    uStack_d8 = CONCAT44(uStack_1b4,local_1b8);
    uStack_d0 = CONCAT44(uStack_1ac,uStack_1b0);
    local_c8 = *(int *)&(local_1e0->Elements).field_0x8 -
               *(int *)&(this->AssemblyPartMeshUidToFactoryNodeTable).field_0x34;
    pTStack_e0 = pTStack_1c0;
    local_c0 = local_1e0;
    uStack_98 = CONCAT44(uStack_c4,local_c8);
    local_b0 = pTStack_1c0;
    this_01 = local_1e0;
    uStack_b8 = uStack_e8;
    uStack_a8 = uStack_d8;
    local_a0 = uStack_d0;
LAB_14e7928f0:
    pTVar5 = local_130;
    if (*(int *)&(local_130->Elements).field_0x8 - *(int *)&(local_130->Elements).field_0x34 !=
        (int)uStack_108) {
      local_1f8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeMeshFactoryNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1f8);
    }
    iVar8 = 0;
    if (((TStack_128.CurrentBitIndex != uStack_a8._4_4_) || (TStack_128.Array != local_b0)) ||
       (pTVar5 != local_c0)) {
      pFVar27 = (FString *)
                ((longlong)TStack_128.CurrentBitIndex * 0x20 + *(longlong *)&pTVar5->Elements);
      this_00 = (UInterchangeMeshFactoryNode *)pFVar27[1].Data.AllocatorInstance.Data;
      if (this_00 != (UInterchangeMeshFactoryNode *)0x0) {
        iVar26 = (pFVar27->Data).ArrayNum;
        pUVar3 = (this->PipelineMeshesUtilities).field0_0x0.DebugPtr;
        if (iVar26 == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = (wchar_t *)(pFVar27->Data).AllocatorInstance.Data;
          iVar8 = iVar26 + -1;
        }
        uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar17);
        iVar8 = TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                            *)&pUVar3->MeshGeometriesPerMeshUid,uVar7,pFVar27);
        if (iVar8 == -1) {
          if (2 < (byte)LogInterchangePipeline._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogInterchangePipeline);
          }
        }
        else {
          pTVar9 = TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                           *)&((this->PipelineMeshesUtilities).field0_0x0.DebugPtr)->
                              MeshGeometriesPerMeshUid,pFVar27);
          if ((pTVar9 == (TTuple<FString,FInterchangeMeshGeometry> *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x27b,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((*(UInterchangeMeshNode **)&pTVar9->field_0x20 != (UInterchangeMeshNode *)0x0) &&
             (iVar8 = UInterchangeMeshNode::GetAssemblyPartDependenciesCount
                                (*(UInterchangeMeshNode **)&pTVar9->field_0x20), 0 < iVar8)) {
            local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1f0.ArrayNum = 0;
            local_1f0.ArrayMax = 0;
            UInterchangeMeshNode::GetAssemblyPartDependencies
                      (*(UInterchangeMeshNode **)&pTVar9->field_0x20,&local_1f0);
            pTVar10 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      ::Find(&local_88,pFVar27);
            puVar15 = &pTVar10->field_0x10;
            if (pTVar10 == (TTuple<FString,FString> *)0x0) {
              puVar15 = (undefined1 *)0x0;
            }
            if (puVar15 == (undefined1 *)0x0) {
              local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1d8.ArrayNum = 0;
              local_1d8.ArrayMax = 0;
              UInterchangeFactoryBaseNode::GetFactoryDependencies
                        ((UInterchangeFactoryBaseNode *)this_00,&local_1d8);
              iVar8 = local_1f0.ArrayNum;
              pFVar23 = local_1f0.AllocatorInstance.Data + (longlong)local_1f0.ArrayNum * 0x10;
              FVar18.Data = local_1f0.AllocatorInstance.Data;
LAB_14e792ba7:
              do {
                lVar14 = 0;
                if (local_1f0.ArrayNum != iVar8) {
                  local_1f6[0] = 0;
                  `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (local_1f6);
                }
                if (FVar18.Data == pFVar23) goto LAB_14e792d9e;
                iVar26 = *(int *)(FVar18.Data + 8);
                iVar12 = (pFVar27->Data).ArrayNum;
                if (iVar26 == iVar12) {
                  if (1 < iVar26) {
                    iVar26 = FGenericPlatformStricmp::Stricmp
                                       (*(wchar_t **)FVar18.Data,
                                        (wchar_t *)(pFVar27->Data).AllocatorInstance.Data);
                    bVar6 = iVar26 == 0;
                    goto LAB_14e792bee;
                  }
                }
                else {
                  bVar6 = iVar26 + iVar12 == 1;
LAB_14e792bee:
                  if (!bVar6) {
                    iVar26 = *(int *)(FVar18.Data + 8);
                    if (iVar26 == 0) {
                      pwVar17 = L"";
                    }
                    else {
                      pwVar17 = *(wchar_t **)FVar18.Data;
                    }
                    iVar13 = 0;
                    iVar12 = iVar26 + -1;
                    if (iVar26 == 0) {
                      iVar12 = iVar13;
                    }
                    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar17);
                    iVar26 = TSet<TTuple<FString,UInterchangeMeshFactoryNode_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeMeshFactoryNode_*,0>,FDefaultSetAllocator>
                             ::FindIndexByHash<FString>(this_01,uVar7,(FString *)FVar18.Data);
                    if (iVar26 == -1) {
                      if (2 < (byte)LogInterchangePipeline._0_1_) {
                        UE::Logging::Private::BasicLog<3>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogInterchangePipeline);
                        FVar18.Data = FVar18.Data + 0x10;
                        goto LAB_14e792ba7;
                      }
                    }
                    else {
                      if (*(int *)(FVar18.Data + 8) == 0) {
                        pwVar17 = L"";
                      }
                      else {
                        pwVar17 = *(wchar_t **)FVar18.Data;
                        iVar13 = *(int *)(FVar18.Data + 8) + -1;
                      }
                      uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar17);
                      iVar26 = TSet<TTuple<FString,UInterchangeMeshFactoryNode_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeMeshFactoryNode_*,0>,FDefaultSetAllocator>
                               ::FindIndexByHash<FString>(this_01,uVar7,(FString *)FVar18.Data);
                      if (((iVar26 == -1) ||
                          (lVar14 = (longlong)iVar26 * 0x20 + *(longlong *)&this_01->Elements,
                          lVar14 == 0)) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Pair != nullptr",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                             ,0x288,L""), bVar6)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      if (*(UInterchangeBaseNode **)(lVar14 + 0x10) != (UInterchangeBaseNode *)0x0)
                      {
                        UInterchangeBaseNode::GetUniqueID
                                  (*(UInterchangeBaseNode **)(lVar14 + 0x10),&local_1a8);
                        UInterchangeMeshFactoryNode::SetAssemblyPartDependencyUid
                                  (this_00,(FString *)FVar18.Data,&local_1a8);
                        pFVar21 = local_1d8.AllocatorInstance.Data +
                                  (longlong)local_1d8.ArrayNum * 0x10;
                        uVar16 = local_1a8.Data._8_8_;
                        for (FVar19.Data = local_1d8.AllocatorInstance.Data; FVar19.Data != pFVar21;
                            FVar19.Data = FVar19.Data + 0x10) {
                          iVar26 = *(int *)(FVar19.Data + 8);
                          if (iVar26 == (int)uVar16) {
                            if (iVar26 < 2) goto LAB_14e792d61;
                            iVar26 = FGenericPlatformStricmp::Stricmp
                                               (*(wchar_t **)FVar19.Data,
                                                (wchar_t *)local_1a8.Data.AllocatorInstance.Data);
                            bVar6 = iVar26 == 0;
                            uVar16 = local_1a8.Data._8_8_;
                          }
                          else {
                            bVar6 = iVar26 + (int)uVar16 == 1;
                          }
                          if (bVar6) goto LAB_14e792d61;
                        }
                        UInterchangeFactoryBaseNode::AddFactoryDependencyUid
                                  ((UInterchangeFactoryBaseNode *)this_00,&local_1a8);
LAB_14e792d61:
                        local_100 = FVar18.Data;
                        local_f8 = pFVar27;
                        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                                  (&local_88,
                                   (TPairInitializer<FString_const_&,FString_const_&> *)local_148,
                                   (bool *)&local_100);
                        this_01 = local_1e0;
                        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
                          this_01 = local_1e0;
                        }
                      }
                    }
                  }
                }
                FVar18.Data = FVar18.Data + 0x10;
              } while( true );
            }
            local_208 = local_1f0.ArrayNum;
            ::FString::PrintfImpl
                      (&local_190,
                       L"Mesh \'%s\' has already been used as an assembly part by mesh \'%s\' and therefore must not specify its own dependencies as well. The (%d) dependencies that will be ignored are : \n"
                      );
            iVar8 = local_1f0.ArrayNum;
            pFVar23 = local_1f0.AllocatorInstance.Data + (longlong)local_1f0.ArrayNum * 0x10;
            FVar18.Data = local_1f0.AllocatorInstance.Data;
            while( true ) {
              if (local_1f0.ArrayNum != iVar8) {
                local_1f7 = 0;
                `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_1f7);
              }
              if (FVar18.Data == pFVar23) break;
              ::FString::PrintfImpl((FString *)(local_148 + 8),L"... %s");
              iVar26 = (int)local_138 + -1;
              if ((int)local_138 == 0) {
                iVar26 = 0;
              }
              ::FString::AppendChars(&local_190,(wchar_t *)local_148._8_8_,iVar26);
              if ((FString *)local_148._8_8_ != (FString *)0x0) {
                FMemory::Free((void *)local_148._8_8_);
              }
              FVar18.Data = FVar18.Data + 0x10;
            }
            if (2 < (byte)LogInterchangePipeline._0_1_) {
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogInterchangePipeline);
            }
            if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_190.Data.AllocatorInstance.Data);
            }
            DestructItems<FString,int>
                      ((FString *)local_1f0.AllocatorInstance.Data,local_1f0.ArrayNum);
            this_01 = local_1e0;
            if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f0.AllocatorInstance.Data);
              this_01 = local_1e0;
            }
          }
        }
      }
      goto LAB_14e792ddf;
    }
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
  }
  return;
LAB_14e792d9e:
  DestructItems<FString,int>((FString *)local_1d8.AllocatorInstance.Data,local_1d8.ArrayNum);
  if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_1f0.AllocatorInstance.Data,local_1f0.ArrayNum);
  this = local_198;
  if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.AllocatorInstance.Data);
    this = local_198;
  }
LAB_14e792ddf:
  TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
  goto LAB_14e7928f0;
}

// CreateGeometryCacheFactoryNode @ 14e796810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeGeometryCacheFactoryNode * __thiscall
UInterchangeGenericMeshPipeline::CreateGeometryCacheFactoryNode
          (UInterchangeGenericMeshPipeline *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  UInterchangeBaseNodeContainer *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  UInterchangeGeometryCacheFactoryNode *pUVar8;
  UInterchangeGeometryCacheFactoryNode *pUVar9;
  UClass *pUVar10;
  FString *pFVar11;
  UInterchangeGeometryCacheFactoryNode *this_00;
  FString *pFVar12;
  UObject *pUVar13;
  longlong *plVar14;
  UInterchangeGeometryCacheFactoryNode *pUVar15;
  TWeakObjectPtr<UInterchangeGenericCommonMeshesProperties,FWeakObjectPtr> *this_01;
  undefined1 auStackY_218 [32];
  bool local_1e8 [8];
  FString local_1e0;
  FString local_1d0;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_1c0;
  ulonglong local_1b8;
  undefined8 local_1b0;
  FName local_1a8;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pUVar8 = (UInterchangeGeometryCacheFactoryNode *)0x0;
  local_1b8 = local_1b8 & 0xffffffff00000000;
  local_1c0 = param_1;
  bVar6 = FWeakObjectPtr::IsValid(&(this->CommonMeshesProperties).WeakPtr);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommonMeshesProperties.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericGeometryCachePipeline.cpp"
                         ,0xa6,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pUVar8 = (UInterchangeGeometryCacheFactoryNode *)(*pcVar3)();
    return pUVar8;
  }
  if (param_1->ArrayNum == 0) {
    return (UInterchangeGeometryCacheFactoryNode *)0x0;
  }
  pUVar2 = this->BaseNodeContainer;
  local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d0.Data.ArrayNum = 0;
  local_1d0.Data.ArrayMax = 0;
  local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.Data.ArrayNum = 0;
  local_1e0.Data.ArrayMax = 0;
  if ((param_1->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    pUVar8 = (UInterchangeGeometryCacheFactoryNode *)(*pcVar3)();
    return pUVar8;
  }
  pUVar9 = (UInterchangeGeometryCacheFactoryNode *)
           UInterchangeBaseNodeContainer::GetNode
                     (pUVar2,(FString *)(param_1->AllocatorInstance).Data);
  if (pUVar9 == (UInterchangeGeometryCacheFactoryNode *)0x0) goto LAB_14e796cc9;
  pUVar10 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
  iVar7 = (int)pUVar10->_padding_;
  if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar7) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
      &pUVar10->_padding_)) goto LAB_14e796cc9;
  pUVar2 = this->BaseNodeContainer;
  pFVar11 = UInterchangeBaseNode::GetParentUid((UInterchangeBaseNode *)pUVar9,&local_180);
  this_00 = (UInterchangeGeometryCacheFactoryNode *)
            UInterchangeBaseNodeContainer::GetNode(pUVar2,pFVar11);
  if (this_00 == (UInterchangeGeometryCacheFactoryNode *)0x0) {
LAB_14e796987:
    this_00 = pUVar8;
  }
  else {
    pUVar10 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
    iVar7 = (int)pUVar10->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar7 * 8)
        != &pUVar10->_padding_)) goto LAB_14e796987;
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  pUVar15 = pUVar8;
  if (this_00 == (UInterchangeGeometryCacheFactoryNode *)0x0) {
LAB_14e7969ec:
    bVar6 = true;
  }
  else {
    pFVar11 = UInterchangeBaseNode::InvalidNodeUid(&local_160);
    pUVar15 = (UInterchangeGeometryCacheFactoryNode *)&DAT_00000003;
    pFVar12 = UInterchangeBaseNode::GetParentUid((UInterchangeBaseNode *)this_00,&local_170);
    iVar7 = (pFVar11->Data).ArrayNum;
    iVar1 = (pFVar12->Data).ArrayNum;
    if (iVar1 == iVar7) {
      if (iVar1 < 2) goto LAB_14e7969ec;
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar12->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar11->Data).AllocatorInstance.Data);
      bVar6 = iVar7 == 0;
    }
    else {
      bVar6 = iVar7 + iVar1 == 1;
    }
    if (bVar6) goto LAB_14e7969ec;
    bVar6 = false;
  }
  if ((((ulonglong)pUVar15 & 2) != 0) &&
     (pUVar15 = (UInterchangeGeometryCacheFactoryNode *)(ulonglong)((uint)pUVar15 & 0xfffffffd),
     local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if ((((ulonglong)pUVar15 & 1) != 0) &&
     (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  bVar5 = false;
  bVar4 = false;
  if (bVar6) {
    pFVar11 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)pUVar9,&local_150);
    if (&local_1e0 != pFVar11) {
      if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      }
      local_1e0.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e0.Data.ArrayNum = (pFVar11->Data).ArrayNum;
      local_1e0.Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    pFVar11 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)pUVar9,&local_140);
    local_e0.Data.AllocatorInstance.Data = local_140.Data.AllocatorInstance.Data;
    if (&local_1d0 != pFVar11) {
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      local_1d0.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d0.Data.ArrayNum = (pFVar11->Data).ArrayNum;
      local_1d0.Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
      local_e0.Data.AllocatorInstance.Data = local_140.Data.AllocatorInstance.Data;
    }
LAB_14e796cb3:
    param_1 = local_1c0;
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      param_1 = local_1c0;
    }
  }
  else {
    do {
      param_1 = local_1c0;
      if (this_00 == (UInterchangeGeometryCacheFactoryNode *)0x0) break;
      pUVar2 = this->BaseNodeContainer;
      pFVar11 = UInterchangeBaseNode::GetParentUid((UInterchangeBaseNode *)pUVar9,&local_130);
      pUVar9 = (UInterchangeGeometryCacheFactoryNode *)
               UInterchangeBaseNodeContainer::GetNode(pUVar2,pFVar11);
      if (pUVar9 == (UInterchangeGeometryCacheFactoryNode *)0x0) {
LAB_14e796b17:
        pUVar9 = pUVar8;
      }
      else {
        pUVar10 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
        iVar7 = (int)pUVar10->_padding_;
        if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar7) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar10->_padding_)) goto LAB_14e796b17;
      }
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      pUVar2 = this->BaseNodeContainer;
      pFVar11 = UInterchangeBaseNode::GetParentUid((UInterchangeBaseNode *)pUVar9,&local_120);
      this_00 = (UInterchangeGeometryCacheFactoryNode *)
                UInterchangeBaseNodeContainer::GetNode(pUVar2,pFVar11);
      if (this_00 == (UInterchangeGeometryCacheFactoryNode *)0x0) {
LAB_14e796b71:
        this_00 = pUVar8;
      }
      else {
        pUVar10 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
        iVar7 = (int)pUVar10->_padding_;
        if ((*(int *)(this_00->_padding_ + 0x38) < iVar7) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar10->_padding_)) goto LAB_14e796b71;
      }
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      if (this_00 == (UInterchangeGeometryCacheFactoryNode *)0x0) {
LAB_14e796bd5:
        bVar6 = true;
      }
      else {
        pFVar11 = UInterchangeBaseNode::InvalidNodeUid(&local_100);
        bVar5 = true;
        bVar4 = true;
        pFVar12 = UInterchangeBaseNode::GetParentUid((UInterchangeBaseNode *)this_00,&local_110);
        iVar7 = (pFVar11->Data).ArrayNum;
        iVar1 = (pFVar12->Data).ArrayNum;
        if (iVar1 == iVar7) {
          if (iVar1 < 2) goto LAB_14e796bd5;
          iVar7 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(pFVar12->Data).AllocatorInstance.Data,
                             (wchar_t *)(pFVar11->Data).AllocatorInstance.Data);
          bVar6 = iVar7 == 0;
        }
        else {
          bVar6 = iVar7 + iVar1 == 1;
        }
        if (bVar6) goto LAB_14e796bd5;
        bVar6 = false;
      }
      if ((bVar4) &&
         (bVar4 = false, local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
      if ((bVar5) &&
         (bVar5 = false, local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pFVar11 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)pUVar9,&local_f0);
        if (&local_1e0 != pFVar11) {
          if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
          local_1e0.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
          (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1e0.Data.ArrayNum = (pFVar11->Data).ArrayNum;
          local_1e0.Data.ArrayMax = (pFVar11->Data).ArrayMax;
          (pFVar11->Data).ArrayNum = 0;
          (pFVar11->Data).ArrayMax = 0;
        }
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        pFVar11 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)pUVar9,&local_e0);
        if (&local_1d0 != pFVar11) {
          if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
          }
          local_1d0.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
          (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d0.Data.ArrayNum = (pFVar11->Data).ArrayNum;
          local_1d0.Data.ArrayMax = (pFVar11->Data).ArrayMax;
          (pFVar11->Data).ArrayNum = 0;
          (pFVar11->Data).ArrayMax = 0;
        }
        goto LAB_14e796cb3;
      }
      param_1 = local_1c0;
    } while (pUVar9 != (UInterchangeGeometryCacheFactoryNode *)0x0);
  }
LAB_14e796cc9:
  this_01 = &this->CommonMeshesProperties;
  UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_190,&local_1d0);
  pUVar2 = this->BaseNodeContainer;
  local_1b8 = 0;
  local_1b0 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar10 = Z_Construct_UClass_UInterchangeGeometryCacheFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar10);
  local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_c8._56_8_ = (UPackage *)0x0;
  local_c8._16_4_ = 0;
  local_c8._20_4_ = 0;
  local_c8._24_4_ = RF_NoFlags;
  local_c8._40_8_ = (UObject *)0x0;
  local_c8[0x20] = false;
  local_c8._8_8_ = pUVar2;
  pUVar9 = (UInterchangeGeometryCacheFactoryNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar14 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (pUVar9 == (UInterchangeGeometryCacheFactoryNode *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4079481481020309711>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericGeometryCachePipeline.cpp"
                       ,0xcf,"GeometryCacheFactoryNode");
    pUVar9 = pUVar8;
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pUVar8 = (UInterchangeGeometryCacheFactoryNode *)(*pcVar3)();
      return pUVar8;
    }
  }
  else {
    pUVar2 = this->BaseNodeContainer;
    pUVar10 = Z_Construct_UClass_UGeometryCache_NoRegister();
    local_1a8 = (FName)pUVar10->_padding_;
    ::FName::ToString(&local_1a8,&local_1a0);
    UInterchangeGeometryCacheFactoryNode::InitializeGeometryCacheNode
              (pUVar9,&local_190,&local_1e0,&local_1a0,pUVar2);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    local_1e8[0] = true;
    UInterchangeMeshFactoryNode::SetCustomKeepSectionsSeparate
              ((UInterchangeMeshFactoryNode *)pUVar9,local_1e8);
    AddMeshesToGeometryCache(this,pUVar9,param_1);
    pUVar13 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    UInterchangeMeshFactoryNode::SetCustomRecomputeNormals
              ((UInterchangeMeshFactoryNode *)pUVar9,(bool *)&pUVar13[7].field_0x1d,true);
    pUVar13 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    UInterchangeMeshFactoryNode::SetCustomRecomputeTangents
              ((UInterchangeMeshFactoryNode *)pUVar9,(bool *)&pUVar13[7].field_0x1e,true);
    pUVar13 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    UInterchangeMeshFactoryNode::SetCustomUseMikkTSpace
              ((UInterchangeMeshFactoryNode *)pUVar9,(bool *)&pUVar13[7].field_0x1f,true);
    pUVar13 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    UInterchangeMeshFactoryNode::SetCustomComputeWeightedNormals
              ((UInterchangeMeshFactoryNode *)pUVar9,(bool *)&pUVar13[7].field_0x20,true);
    pUVar13 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    UInterchangeMeshFactoryNode::SetCustomUseHighPrecisionTangentBasis
              ((UInterchangeMeshFactoryNode *)pUVar9,(bool *)&pUVar13[7].field_0x21,true);
    pUVar13 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    UInterchangeMeshFactoryNode::SetCustomUseFullPrecisionUVs
              ((UInterchangeMeshFactoryNode *)pUVar9,(bool *)&pUVar13[7].field_0x22,true);
    pUVar13 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    UInterchangeMeshFactoryNode::SetCustomUseBackwardsCompatibleF16TruncUVs
              ((UInterchangeMeshFactoryNode *)pUVar9,(bool *)&pUVar13[7].field_0x23,true);
    pUVar13 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    UInterchangeMeshFactoryNode::SetCustomRemoveDegenerates
              ((UInterchangeMeshFactoryNode *)pUVar9,(bool *)&pUVar13[7].field_0x24,true);
    UInterchangeGeometryCacheFactoryNode::SetCustomFlattenTracks(pUVar9,&this->bFlattenTracks);
    UInterchangeGeometryCacheFactoryNode::SetCustomPositionPrecision
              (pUVar9,&this->CompressedPositionPrecision);
    UInterchangeGeometryCacheFactoryNode::SetCustomNumBitsForUVs
              (pUVar9,&this->CompressedTextureCoordinatesNumberOfBits);
    if (this->bOverrideTimeRange != false) {
      UInterchangeGeometryCacheFactoryNode::SetCustomStartFrame(pUVar9,&this->FrameStart);
      UInterchangeGeometryCacheFactoryNode::SetCustomEndFrame(pUVar9,&this->FrameEnd);
    }
    UInterchangeGeometryCacheFactoryNode::SetCustomMotionVectorsImport(pUVar9,this->MotionVectors);
    UInterchangeGeometryCacheFactoryNode::SetCustomApplyConstantTopologyOptimization
              (pUVar9,&this->bApplyConstantTopologyOptimizations);
    UInterchangeGeometryCacheFactoryNode::SetCustomStoreImportedVertexNumbers
              (pUVar9,&this->bStoreImportedVertexNumbers);
    UInterchangeGeometryCacheFactoryNode::SetCustomOptimizeIndexBuffers
              (pUVar9,&this->bOptimizeIndexBuffers);
  }
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  return pUVar9;
}

// CreateMeshPipelineUtilities @ 14e79a2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UInterchangePipelineMeshesUtilities * __cdecl
UInterchangeGenericMeshPipeline::CreateMeshPipelineUtilities
          (UInterchangeBaseNodeContainer *param_1,UInterchangeGenericMeshPipeline *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  bool bVar5;
  UInterchangePipelineMeshesUtilities *pUVar6;
  UObject *pUVar7;
  TWeakObjectPtr<UInterchangeGenericCommonMeshesProperties,FWeakObjectPtr> *this;
  bool bVar8;
  bool bVar9;
  undefined1 auStackY_148 [32];
  char local_118;
  char local_117 [7];
  FString *local_110;
  undefined8 local_108;
  UInterchangeBaseNodeContainer *local_100;
  code *local_f8;
  char **local_f0;
  code *local_e8;
  UInterchangeBaseNodeContainer ***local_e0;
  char *local_d8;
  char *local_d0;
  FString **local_c8;
  UInterchangeBaseNodeContainer **local_c0;
  char *local_b8;
  FString **local_b0;
  ForAnyElementType *local_a8;
  ForAnyElementType local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pUVar6 = UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities(param_1);
  bVar8 = false;
  local_118 = '\0';
  local_117[1] = 0;
  local_117[0] = '\0';
  local_100 = param_1;
  if (param_1 == (UInterchangeBaseNodeContainer *)0x0) {
LAB_14e79a4e3:
    pUVar7 = FWeakObjectPtr::Get(&(param_2->CommonMeshesProperties).WeakPtr);
    if (pUVar7[7].field_0x10 != '\x02') {
LAB_14e79a500:
      bVar9 = false;
      goto LAB_14e79a503;
    }
  }
  else {
    local_d8 = &local_118;
    local_d0 = local_117 + 1;
    local_110 = (FString *)0x0;
    local_c8 = &local_110;
    local_108 = 0;
    local_f0 = &local_d8;
    local_f8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UInterchangeGenericMeshPipeline::GetMeshesInformationFromTranslatedData'::__l6::<lambda_1>,void,FString_const_&,UInterchangeMeshNode_*>
               ::Call;
    UInterchangeBaseNodeContainer::IterateNodesOfType<UInterchangeMeshNode>
              (param_1,(TFunctionRef<void___cdecl(FString_const_&,UInterchangeMeshNode_*)> *)
                       &local_f8);
    bVar9 = (int)local_108 == 0;
    local_c0 = &local_100;
    local_b8 = local_117;
    local_98.Data = (FScriptContainerElement *)0x0;
    local_b0 = &local_110;
    local_a8 = &local_98;
    local_e0 = &local_c0;
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UInterchangeGenericMeshPipeline::GetMeshesInformationFromTranslatedData'::__l6::<lambda_2>,bool,FString_const_&,UInterchangeTransformAnimationTrackNode_*>
               ::Call;
    local_90 = 0;
    local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_88.NumBits = 0;
    local_88.MaxBits = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    UInterchangeBaseNodeContainer::
    BreakableIterateNodesOfType<UInterchangeTransformAnimationTrackNode>
              (local_100,
               (TFunctionRef<bool___cdecl(FString_const_&,UInterchangeTransformAnimationTrackNode_*)>
                *)&local_e8);
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    uVar4 = local_90 >> 0x20;
    local_90 = local_90 & 0xffffffff00000000;
    if ((int)uVar4 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&local_98,0,(int *)((longlong)&local_90 + 4));
    }
    local_68 = 0xffffffff;
    local_64 = 0;
    local_88.NumBits = 0;
    if (0x80 < (uint)local_88.MaxBits) {
      local_88.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
    }
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
    }
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
    DestructItems<FString,int>(local_110,(int)local_108);
    if (local_110 != (FString *)0x0) {
      FMemory::Free(local_110);
    }
    pUVar7 = FWeakObjectPtr::Get(&(param_2->CommonMeshesProperties).WeakPtr);
    if ((pUVar7[7].field_0x12 == '\0') ||
       (pUVar7 = FWeakObjectPtr::Get(&(param_2->CommonMeshesProperties).WeakPtr),
       pUVar7[7].field_0x10 != '\0')) {
LAB_14e79a4df:
      if (local_118 == '\0') goto LAB_14e79a4e3;
      goto LAB_14e79a500;
    }
    if (local_118 != '\0') {
      bVar8 = true;
      goto LAB_14e79a4df;
    }
    if ((bVar9) || (local_117[0] == '\0')) goto LAB_14e79a4e3;
  }
  bVar9 = true;
LAB_14e79a503:
  this = &param_2->CommonMeshesProperties;
  pUVar7 = FWeakObjectPtr::Get(&this->WeakPtr);
  cVar1 = pUVar7[7].field_0x10;
  pUVar7 = FWeakObjectPtr::Get(&(param_2->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr);
  bVar2 = (bool)pUVar7[7].field_0x1f;
  pUVar7 = FWeakObjectPtr::Get(&(param_2->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr);
  bVar3 = (bool)pUVar7[7].field_0x1c;
  pUVar7 = FWeakObjectPtr::Get(&this->WeakPtr);
  if ((pUVar7[7].field_0x14 == '\0') &&
     (pUVar7 = FWeakObjectPtr::Get(&this->WeakPtr), pUVar7[7].field_0x15 == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  (pUVar6->CurrentDataContext).bConvertStaticMeshToSkeletalMesh = bVar9;
  (pUVar6->CurrentDataContext).bConvertSkeletalMeshToStaticMesh = cVar1 == '\x01';
  (pUVar6->CurrentDataContext).bConvertStaticsWithMorphTargetsToSkeletals = bVar2;
  (pUVar6->CurrentDataContext).bImportMeshesInBoneHierarchy = bVar3;
  (pUVar6->CurrentDataContext).bQueryGeometryOnlyIfNoInstance = bVar5;
  (pUVar6->CurrentDataContext).bIgnoreStaticMeshes = bVar8;
  (pUVar6->CurrentDataContext).bIgnoreGeometryCaches = false;
  return pUVar6;
}

// CreateSkeletalMeshFactoryNode @ 14e79a730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UInterchangeSkeletalMeshFactoryNode * __thiscall
UInterchangeGenericMeshPipeline::CreateSkeletalMeshFactoryNode
          (UInterchangeGenericMeshPipeline *this,FString *param_1,
          TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
          *param_2)

{
  TWeakObjectPtr<UInterchangeGenericCommonMeshesProperties,FWeakObjectPtr> *this_00;
  char cVar1;
  int iVar2;
  UInterchangeBaseNodeContainer *pUVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  UInterchangeSkeletalMeshFactoryNode *pUVar6;
  UInterchangeBaseNode *this_01;
  FString *pFVar7;
  UInterchangeSkeletonFactoryNode *this_02;
  UClass *pUVar8;
  UInterchangeSkeletalMeshFactoryNode *this_03;
  UObject *pUVar9;
  UInterchangeResultDisplay_Generic *pUVar10;
  FText *pFVar11;
  FText *pFVar12;
  FText *pFVar13;
  FTextFormat *pFVar14;
  UInterchangePhysicsAssetFactoryNode *this_04;
  EAttributeStorageResult EVar15;
  longlong *plVar16;
  longlong lVar17;
  UInterchangeSkeletalMeshFactoryNode *pUVar18;
  undefined1 auStackY_468 [32];
  bool local_428;
  bool local_427 [7];
  FString local_420;
  FScriptContainerElement *local_410;
  FString local_408;
  int local_3f8 [2];
  FName local_3f0;
  TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_3e8;
  FName local_3e0;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  FString local_368;
  FSoftObjectPath local_358;
  FName local_338;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  UInterchangeGenericMeshPipeline *local_260;
  TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_258;
  UInterchangeGenericMeshPipeline *local_250;
  TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_248;
  FString local_240;
  FString local_230;
  void *local_220 [2];
  FString local_210;
  FString local_200;
  FText local_1f0;
  FText local_1e0;
  void *local_1d0 [2];
  FString local_1c0;
  void *local_1b0 [2];
  FString local_1a0;
  FString local_190;
  FText local_180;
  FText local_170;
  FTextFormat local_160;
  undefined1 local_148 [128];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_468;
  local_3e8 = param_2;
  bVar5 = FWeakObjectPtr::IsValid(&(this->CommonMeshesProperties).WeakPtr);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommonMeshesProperties.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericSkeletalMeshPipeline.cpp"
                         ,0x142,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar6 = (UInterchangeSkeletalMeshFactoryNode *)(*pcVar4)();
    return pUVar6;
  }
  bVar5 = FWeakObjectPtr::IsValid(&(this->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommonSkeletalMeshesAndAnimationsProperties.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericSkeletalMeshPipeline.cpp"
                         ,0x143,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar6 = (UInterchangeSkeletalMeshFactoryNode *)(*pcVar4)();
    return pUVar6;
  }
  this_01 = UInterchangeBaseNodeContainer::GetNode(this->BaseNodeContainer,param_1);
  if (this_01 == (UInterchangeBaseNode *)0x0) {
    return (UInterchangeSkeletalMeshFactoryNode *)0x0;
  }
  pFVar7 = UInterchangeBaseNode::GetUniqueID(this_01,&local_190);
  UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_368,pFVar7);
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  this_02 = (UInterchangeSkeletonFactoryNode *)
            UInterchangeBaseNodeContainer::GetFactoryNode(this->BaseNodeContainer,&local_368);
  if (this_02 == (UInterchangeSkeletonFactoryNode *)0x0) {
LAB_14e79b57d:
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8235178183205323084>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericSkeletalMeshPipeline.cpp"
                       ,0x14c,"SkeletonFactoryNode");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar6 = (UInterchangeSkeletalMeshFactoryNode *)(*pcVar4)();
      return pUVar6;
    }
  }
  else {
    pUVar8 = Z_Construct_UClass_UInterchangeSkeletonFactoryNode_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((*(int *)(this_02->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar8->_padding_)) goto LAB_14e79b57d;
    if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
      pUVar18 = (UInterchangeSkeletalMeshFactoryNode *)0x0;
      local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3d8.Data.ArrayNum = 0;
      local_3d8.Data.ArrayMax = 0;
      local_3f8[0] = 0;
      local_260 = this;
      local_258 = param_2;
      local_250 = this;
      local_248 = param_2;
      this_03 = (UInterchangeSkeletalMeshFactoryNode *)
                `UInterchangeGenericMeshPipeline::CreateSkeletalMeshFactoryNode'::__l2::<lambda_2>::
                operator()(&local_250,0,&local_3d8,local_3f8);
      pUVar6 = pUVar18;
      if (this_03 != (UInterchangeSkeletalMeshFactoryNode *)0x0) {
        pUVar8 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
        iVar2 = (int)pUVar8->_padding_;
        if ((*(int *)(this_03->_padding_ + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar8->_padding_)) {
          this_03 = pUVar18;
        }
        pUVar6 = (UInterchangeSkeletalMeshFactoryNode *)
                 UInterchangeBaseNodeContainer::GetNode(this->BaseNodeContainer,&local_3d8);
        if (pUVar6 == (UInterchangeSkeletalMeshFactoryNode *)0x0) {
LAB_14e79a92f:
          pUVar6 = pUVar18;
        }
        else {
          pUVar8 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
          iVar2 = (int)pUVar8->_padding_;
          if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar8->_padding_)) goto LAB_14e79a92f;
        }
        UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)pUVar6,&local_408);
        _Src.Data = local_3d8.Data.AllocatorInstance.Data;
        lVar17 = (longlong)local_3d8.Data.ArrayNum;
        local_420.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_420.Data.ArrayNum = local_3d8.Data.ArrayNum;
        if (local_3d8.Data.ArrayNum == 0) {
          local_420.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_3d8.Data.ArrayNum,0,(ForAnyElementType *)&local_420,
                     local_3d8.Data.ArrayNum,&local_420.Data.ArrayMax);
          memcpy(local_420.Data.AllocatorInstance.Data,_Src.Data,lVar17 * 2);
        }
        if (this_03 != (UInterchangeSkeletalMeshFactoryNode *)0x0) {
          pFVar7 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)this_03,&local_240)
          ;
          if (&local_408 != pFVar7) {
            if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_408.Data.AllocatorInstance.Data);
            }
            local_408.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
            (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_408.Data.ArrayNum = (pFVar7->Data).ArrayNum;
            local_408.Data.ArrayMax = (pFVar7->Data).ArrayMax;
            (pFVar7->Data).ArrayNum = 0;
            (pFVar7->Data).ArrayMax = 0;
          }
          if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_240.Data.AllocatorInstance.Data);
          }
          pFVar7 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_03,&local_230);
          ::FString::ConcatCF(&local_3c8,L"\\",pFVar7);
          if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_420.Data.AllocatorInstance.Data);
          }
          local_420.Data.AllocatorInstance.Data = local_3c8.Data.AllocatorInstance.Data;
          local_420.Data.ArrayNum = local_3c8.Data.ArrayNum;
          local_420.Data.ArrayMax = local_3c8.Data.ArrayMax;
          local_3c8.Data.ArrayNum = 0;
          local_3c8.Data.ArrayMax = 0;
          local_3c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_230.Data.AllocatorInstance.Data);
          }
        }
        ::FString::ConcatFF(&local_2f0,&local_420,&local_368);
        UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_300,&local_2f0);
        if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
        }
        pUVar3 = this->BaseNodeContainer;
        local_388 = 0;
        local_380 = 0;
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar3,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar8 = Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_148,pUVar8);
        local_148._48_8_ = (FObjectInstancingGraph *)0x0;
        local_148._56_8_ = (UPackage *)0x0;
        local_148._16_4_ = 0;
        local_148._20_4_ = 0;
        local_148._24_4_ = RF_NoFlags;
        local_148._40_8_ = (UObject *)0x0;
        local_148[0x20] = false;
        local_148._8_8_ = pUVar3;
        pUVar6 = (UInterchangeSkeletalMeshFactoryNode *)
                 StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_148);
        if (local_148._64_8_ != 0) {
          plVar16 = (longlong *)(local_148 + 0x50);
          if ((longlong *)local_148._104_8_ != (longlong *)0x0) {
            plVar16 = (longlong *)local_148._104_8_;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
        if (pUVar6 == (UInterchangeSkeletalMeshFactoryNode *)0x0) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8235178183205323211>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericSkeletalMeshPipeline.cpp"
                             ,0x1cb,"SkeletalMeshFactoryNode");
          pUVar6 = pUVar18;
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pUVar6 = (UInterchangeSkeletalMeshFactoryNode *)(*pcVar4)();
            return pUVar6;
          }
        }
        else {
          pUVar3 = this->BaseNodeContainer;
          pUVar8 = Z_Construct_UClass_USkeletalMesh_NoRegister();
          local_338 = (FName)pUVar8->_padding_;
          ::FName::ToString(&local_338,&local_2e0);
          UInterchangeSkeletalMeshFactoryNode::InitializeSkeletalMeshNode
                    (pUVar6,&local_300,&local_408,&local_2e0,pUVar3);
          if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
          }
          UInterchangeFactoryBaseNode::AddFactoryDependencyUid
                    ((UInterchangeFactoryBaseNode *)pUVar6,&local_368);
          pUVar9 = FWeakObjectPtr::Get(&(this->CommonMeshesProperties).WeakPtr);
          if (pUVar9[7].field_0x16 != '\0') {
            pUVar9 = FWeakObjectPtr::Get(&(this->CommonMeshesProperties).WeakPtr);
            UInterchangeMeshFactoryNode::SetCustomKeepSectionsSeparate
                      ((UInterchangeMeshFactoryNode *)pUVar6,(bool *)&pUVar9[7].field_0x16);
          }
          local_410 = (FScriptContainerElement *)
                      UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)pUVar6,&local_200);
          pFVar7 = (FString *)(**(code **)(this_02->_padding_ + 0x2b0))(this_02,local_220);
          ::FString::ConcatFC(&local_330,pFVar7,L".SetSkeletalMeshFactoryNodeUid");
          if (local_220[0] != (void *)0x0) {
            FMemory::Free(local_220[0]);
          }
          if ((this_02->_padding_ == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            pUVar6 = (UInterchangeSkeletalMeshFactoryNode *)(*pcVar4)();
            return pUVar6;
          }
          local_3f0 = (FName)UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                                       ((FAttributeStorage *)this_02->_padding_,
                                        &this_02->Macro_CustomSkeletalMeshFactoryNodeUidKey,
                                        (FString *)local_410,None);
          if (((ulonglong)local_3f0 & Operation_Success) == None) {
            ::FString::FString(&local_210,&(this_02->Macro_CustomSkeletalMeshFactoryNodeUidKey).Key)
            ;
            local_410 = local_330.Data.AllocatorInstance.Data;
            local_3b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_3b8.Data.ArrayNum = local_330.Data.ArrayNum;
            if (local_330.Data.ArrayNum == 0) {
              local_3b8.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_330.Data.ArrayNum,0,(ForAnyElementType *)&local_3b8,
                         local_330.Data.ArrayNum,&local_3b8.Data.ArrayMax);
              memcpy(local_3b8.Data.AllocatorInstance.Data,local_410,
                     (longlong)local_330.Data.ArrayNum * 2);
            }
            UE::Interchange::LogAttributeStorageErrors
                      ((EAttributeStorageResult)local_3f0,&local_3b8,(FAttributeKey *)&local_210);
          }
          if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_330.Data.AllocatorInstance.Data);
          }
          if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_200.Data.AllocatorInstance.Data);
          }
          AddLodDataToSkeletalMesh(this,this_02,pUVar6,local_3e8);
          UInterchangeSkeletalMeshFactoryNode::SetCustomImportMorphTarget
                    (pUVar6,&this->bImportMorphTargets);
          UInterchangeSkeletalMeshFactoryNode::SetCustomImportVertexAttributes
                    (pUVar6,&this->bImportVertexAttributes);
          UInterchangeSkeletalMeshFactoryNode::SetCustomImportContentType
                    (pUVar6,&this->SkeletalMeshImportContentType);
          pUVar9 = FWeakObjectPtr::Get(&(this->CommonMeshesProperties).WeakPtr);
          UInterchangeMeshFactoryNode::SetCustomImportSockets
                    ((UInterchangeMeshFactoryNode *)pUVar6,(bool *)&pUVar9[7].field_0x1c);
          pUVar9 = FWeakObjectPtr::Get(&(this->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr)
          ;
          UInterchangeSkeletalMeshFactoryNode::SetCustomAddCurveMetadataToSkeleton
                    (pUVar6,(bool *)&pUVar9[7].field_0x1e);
          pUVar9 = FWeakObjectPtr::Get(&(this->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr)
          ;
          bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar9[7].field_0x14);
          if (bVar5) {
            pUVar10 = UInterchangePipelineBase::AddMessage<UInterchangeResultDisplay_Generic>
                                ((UInterchangePipelineBase *)this);
            pFVar11 = FText::FromString(&local_180,&local_408);
            pUVar9 = FWeakObjectPtr::Get(&(this->CommonSkeletalMeshesAndAnimationsProperties).
                                          WeakPtr);
            pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar9[7].field_0x14);
            local_3e0.ComparisonIndex.Value = *(uint *)&pUVar9->field_0x18;
            local_3e0.Number = *(uint *)&pUVar9->field_0x1c;
            ::FName::ToString(&local_3e0,&local_2d0);
            pFVar12 = FText::FromString(&local_170,&local_2d0);
            pFVar13 = FText::AsLocalizable_Advanced_LocText
                                (&local_1e0,L"UInterchangeGenericMeshPipeline",
                                 L"IncompatibleSkeleton",
                                 L"Incompatible skeleton {0} when importing skeletalmesh {1}.");
            pFVar14 = FTextFormat::FTextFormat(&local_160,pFVar13,Default);
            pFVar11 = FText::Format<FText,FText>(&local_1f0,pFVar14,pFVar12,pFVar11);
            FText::operator=(&pUVar10->Text,pFVar11);
            if (local_1f0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1f0.TextData.Reference + 0x10))();
            }
            if (local_1e0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1e0.TextData.Reference + 0x10))();
            }
            if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
            }
          }
          if (this->bCreatePhysicsAsset != false) {
            pUVar3 = this->BaseNodeContainer;
            local_378 = 0;
            local_370 = 0;
            FObjectInitializer::AssertIfInConstructor
                      ((UObject *)pUVar3,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
            pUVar8 = Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode_NoRegister();
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_c8,pUVar8);
            local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
            local_c8._56_8_ = (UPackage *)0x0;
            local_c8._16_4_ = 0;
            local_c8._20_4_ = 0;
            local_c8._24_4_ = RF_NoFlags;
            local_c8._40_8_ = (UObject *)0x0;
            local_c8[0x20] = false;
            local_c8._8_8_ = pUVar3;
            this_04 = (UInterchangePhysicsAssetFactoryNode *)
                      StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
            if (local_c8._64_8_ != 0) {
              plVar16 = (longlong *)(local_c8 + 0x50);
              if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
                plVar16 = (longlong *)local_c8._104_8_;
              }
              (**(code **)(*plVar16 + 0x10))();
            }
            ::FString::ConcatFF(&local_2b0,&local_420,&local_368);
            ::FString::ConcatFC(&local_2c0,&local_2b0,L"_PhysicsAsset");
            UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_270,&local_2c0);
            if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
            }
            if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
            }
            ::FString::ConcatFC(&local_280,&local_408,L"_PhysicsAsset");
            pUVar3 = this->BaseNodeContainer;
            pUVar8 = Z_Construct_UClass_UPhysicsAsset_NoRegister();
            local_3f0 = (FName)pUVar8->_padding_;
            ::FName::ToString(&local_3f0,&local_290);
            this_04->bIsNodeClassInitialized = false;
            ::FString::FString(&local_2a0,L"");
            UInterchangeBaseNodeContainer::SetupNode
                      (pUVar3,(UInterchangeBaseNode *)this_04,&local_270,&local_280,FactoryData,
                       &local_2a0);
            if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
            }
            pFVar7 = (FString *)(**(code **)(this_04->_padding_ + 0x2b0))(this_04,local_1d0);
            ::FString::ConcatFC(&local_320,pFVar7,L".SetAssetClassName");
            if (local_1d0[0] != (void *)0x0) {
              FMemory::Free(local_1d0[0]);
            }
            if ((this_04->_padding_ == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x44d,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              pUVar6 = (UInterchangeSkeletalMeshFactoryNode *)(*pcVar4)();
              return pUVar6;
            }
            local_410 = (FScriptContainerElement *)
                        UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                                  ((FAttributeStorage *)this_04->_padding_,
                                   &this_04->ClassNameAttributeKey,&local_290,None);
            if (((ulonglong)local_410 & Operation_Success) == None) {
              ::FString::FString(&local_1c0,&(this_04->ClassNameAttributeKey).Key);
              local_3e8 = (TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                           *)local_320.Data.AllocatorInstance.Data;
              local_3a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_3a8.Data.ArrayNum = local_320.Data.ArrayNum;
              if (local_320.Data.ArrayNum == 0) {
                local_3a8.Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_320.Data.ArrayNum,0,(ForAnyElementType *)&local_3a8,
                           local_320.Data.ArrayNum,&local_3a8.Data.ArrayMax);
                memcpy(local_3a8.Data.AllocatorInstance.Data,local_3e8,
                       (longlong)local_320.Data.ArrayNum * 2);
              }
              UE::Interchange::LogAttributeStorageErrors
                        ((EAttributeStorageResult)local_410,&local_3a8,(FAttributeKey *)&local_1c0);
            }
            UInterchangePhysicsAssetFactoryNode::FillAssetClassFromAttribute(this_04);
            if ((TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                 *)local_320.Data.AllocatorInstance.Data !=
                (TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                 *)0x0) {
              FMemory::Free(local_320.Data.AllocatorInstance.Data);
            }
            if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_290.Data.AllocatorInstance.Data);
            }
            pFVar7 = (FString *)(**(code **)(this_04->_padding_ + 0x2b0))(this_04,local_1b0);
            ::FString::ConcatFC(&local_310,pFVar7,L".SetSkeletalMeshUid");
            if (local_1b0[0] != (void *)0x0) {
              FMemory::Free(local_1b0[0]);
            }
            if ((this_04->_padding_ == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x44d,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              pUVar6 = (UInterchangeSkeletalMeshFactoryNode *)(*pcVar4)();
              return pUVar6;
            }
            EVar15 = UE::Interchange::FAttributeStorage::RegisterAttribute<FString,void>
                               ((FAttributeStorage *)this_04->_padding_,
                                &this_04->Macro_CustomSkeletalMeshUidKey,&local_300,None);
            if ((EVar15 & Operation_Success) == None) {
              ::FString::FString(&local_1a0,&(this_04->Macro_CustomSkeletalMeshUidKey).Key);
              local_3e0 = (FName)local_310.Data.AllocatorInstance.Data;
              local_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_398.Data.ArrayNum = local_310.Data.ArrayNum;
              if (local_310.Data.ArrayNum == 0) {
                local_398.Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_310.Data.ArrayNum,0,(ForAnyElementType *)&local_398,
                           local_310.Data.ArrayNum,&local_398.Data.ArrayMax);
                memcpy(local_398.Data.AllocatorInstance.Data,(void *)local_3e0,
                       (longlong)local_310.Data.ArrayNum * 2);
              }
              UE::Interchange::LogAttributeStorageErrors
                        (EVar15,&local_398,(FAttributeKey *)&local_1a0);
            }
            if ((FName)local_310.Data.AllocatorInstance.Data != (FName)0x0) {
              FMemory::Free(local_310.Data.AllocatorInstance.Data);
            }
            if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_280.Data.AllocatorInstance.Data);
            }
            if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_270.Data.AllocatorInstance.Data);
            }
          }
          UInterchangeSkeletalMeshFactoryNode::SetCustomCreatePhysicsAsset
                    (pUVar6,&this->bCreatePhysicsAsset);
          if ((this->bCreatePhysicsAsset == false) &&
             (bVar5 = FWeakObjectPtr::IsValid(&(this->PhysicsAsset).WeakPtr), bVar5)) {
            pUVar9 = FWeakObjectPtr::Get(&(this->PhysicsAsset).WeakPtr);
            local_358.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_358.AssetPath.PackageName.Number = 0;
            local_358.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_358.AssetPath.AssetName.Number = 0;
            local_358.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_358.SubPathString.Data.ArrayNum = 0;
            local_358.SubPathString.Data.ArrayMax = 0;
            FSoftObjectPath::SetPath(&local_358,pUVar9);
            UInterchangeSkeletalMeshFactoryNode::SetCustomPhysicAssetSoftObjectPath
                      (pUVar6,&local_358);
            if (local_358.SubPathString.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_358.SubPathString.Data.AllocatorInstance.Data);
            }
          }
          this_00 = &this->CommonMeshesProperties;
          local_428 = true;
          pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          cVar1 = pUVar9[7].field_0x17;
          if (cVar1 == '\0') {
            UInterchangeMeshFactoryNode::SetCustomVertexColorReplace
                      ((UInterchangeMeshFactoryNode *)pUVar6,&local_428);
          }
          else if (cVar1 == '\x01') {
            UInterchangeMeshFactoryNode::SetCustomVertexColorIgnore
                      ((UInterchangeMeshFactoryNode *)pUVar6,&local_428);
          }
          else if (cVar1 == '\x02') {
            pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
            UInterchangeMeshFactoryNode::SetCustomVertexColorOverride
                      ((UInterchangeMeshFactoryNode *)pUVar6,(FColor *)&pUVar9[7].field_0x18);
          }
          pUVar9 = FWeakObjectPtr::Get(&(this->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr)
          ;
          if (pUVar9[7].field_0x10 != '\0') {
            UInterchangeBaseNode::SetEnabled((UInterchangeBaseNode *)this_02,false);
            UInterchangeBaseNode::SetEnabled((UInterchangeBaseNode *)pUVar6,false);
          }
          pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          local_427[0] = (bool)pUVar9[7].field_0x1e;
          if ((local_427[0] != false) &&
             (bVar5 = `UInterchangeGenericMeshPipeline::CreateSkeletalMeshFactoryNode'::__l2::
                      <lambda_1>::operator()(&local_260,0), bVar5)) {
            if (4 < (byte)LogInterchangePipeline._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogInterchangePipeline);
            }
            local_427[0] = false;
          }
          pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          UInterchangeMeshFactoryNode::SetCustomRecomputeNormals
                    ((UInterchangeMeshFactoryNode *)pUVar6,(bool *)&pUVar9[7].field_0x1d,true);
          UInterchangeMeshFactoryNode::SetCustomRecomputeTangents
                    ((UInterchangeMeshFactoryNode *)pUVar6,local_427,true);
          pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          UInterchangeMeshFactoryNode::SetCustomUseMikkTSpace
                    ((UInterchangeMeshFactoryNode *)pUVar6,(bool *)&pUVar9[7].field_0x1f,true);
          pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          UInterchangeMeshFactoryNode::SetCustomComputeWeightedNormals
                    ((UInterchangeMeshFactoryNode *)pUVar6,(bool *)&pUVar9[7].field_0x20,true);
          pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          UInterchangeMeshFactoryNode::SetCustomUseHighPrecisionTangentBasis
                    ((UInterchangeMeshFactoryNode *)pUVar6,(bool *)&pUVar9[7].field_0x21,true);
          pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          UInterchangeMeshFactoryNode::SetCustomUseFullPrecisionUVs
                    ((UInterchangeMeshFactoryNode *)pUVar6,(bool *)&pUVar9[7].field_0x22,true);
          pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          UInterchangeMeshFactoryNode::SetCustomUseBackwardsCompatibleF16TruncUVs
                    ((UInterchangeMeshFactoryNode *)pUVar6,(bool *)&pUVar9[7].field_0x23,true);
          pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          UInterchangeMeshFactoryNode::SetCustomRemoveDegenerates
                    ((UInterchangeMeshFactoryNode *)pUVar6,(bool *)&pUVar9[7].field_0x24,true);
          UInterchangeSkeletalMeshFactoryNode::SetCustomUseHighPrecisionSkinWeights
                    (pUVar6,&this->bUseHighPrecisionSkinWeights,true);
          UInterchangeSkeletalMeshFactoryNode::SetCustomThresholdPosition
                    (pUVar6,&this->ThresholdPosition,true);
          UInterchangeSkeletalMeshFactoryNode::SetCustomThresholdTangentNormal
                    (pUVar6,&this->ThresholdTangentNormal,true);
          UInterchangeSkeletalMeshFactoryNode::SetCustomThresholdUV(pUVar6,&this->ThresholdUV,true);
          UInterchangeSkeletalMeshFactoryNode::SetCustomMorphThresholdPosition
                    (pUVar6,&this->MorphThresholdPosition,true);
          UInterchangeSkeletalMeshFactoryNode::SetCustomBoneInfluenceLimit
                    (pUVar6,&this->BoneInfluenceLimit,true);
          UInterchangeSkeletalMeshFactoryNode::SetCustomMergeMorphTargetShapeWithSameName
                    (pUVar6,&this->bMergeMorphTargetsWithSameName);
        }
        if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_300.Data.AllocatorInstance.Data);
        }
        if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_420.Data.AllocatorInstance.Data);
        }
        if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_408.Data.AllocatorInstance.Data);
        }
      }
      if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
      }
      goto LAB_14e79b5ad;
    }
  }
  pUVar6 = (UInterchangeSkeletalMeshFactoryNode *)0x0;
LAB_14e79b5ad:
  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Data.AllocatorInstance.Data);
  }
  return pUVar6;
}

// CreateSkeletalMeshLodDataNode @ 14e79b600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeSkeletalMeshLodDataNode * __thiscall
UInterchangeGenericMeshPipeline::CreateSkeletalMeshLodDataNode
          (UInterchangeGenericMeshPipeline *this,FString *param_1,FString *param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  UInterchangeBaseNodeContainer *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UInterchangeSkeletalMeshLodDataNode *pUVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStackY_148 [32];
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec [5];
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_f0 = (param_1->Data).ArrayNum;
  lVar8 = (longlong)local_f0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  local_f8.Data = (FScriptContainerElement *)0x0;
  if (local_f0 == 0) {
    local_ec[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_f0,0,&local_f8,local_f0,local_ec);
    memcpy(local_f8.Data,pFVar1,lVar8 * 2);
  }
  local_100 = (param_2->Data).ArrayNum;
  lVar8 = (longlong)local_100;
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  local_108.Data = (FScriptContainerElement *)0x0;
  if (local_100 == 0) {
    local_fc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_100,0,&local_108,local_100,&local_fc);
    memcpy(local_108.Data,pFVar1,lVar8 * 2);
  }
  pUVar2 = this->BaseNodeContainer;
  local_ec[1] = 0;
  local_ec[2] = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_d8,pUVar5);
  local_d8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_d8._56_8_ = (UPackage *)0x0;
  local_d8._16_4_ = 0;
  local_d8._20_4_ = 0;
  local_d8._24_4_ = RF_NoFlags;
  local_d8._40_8_ = (UObject *)0x0;
  local_d8[0x20] = false;
  local_d8._8_8_ = pUVar2;
  pUVar6 = (UInterchangeSkeletalMeshLodDataNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
  if (local_d8._64_8_ != 0) {
    plVar7 = (longlong *)(local_d8 + 0x50);
    if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_d8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (pUVar6 == (UInterchangeSkeletalMeshLodDataNode *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8235178183205323343>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericSkeletalMeshPipeline.cpp"
                       ,0x24f,"SkeletalMeshLodDataNode");
    pUVar6 = (UInterchangeSkeletalMeshLodDataNode *)0x0;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UInterchangeSkeletalMeshLodDataNode *)(*pcVar3)();
      return pUVar6;
    }
  }
  else {
    UInterchangeBaseNodeContainer::SetupNode
              (this->BaseNodeContainer,(UInterchangeBaseNode *)pUVar6,param_2,param_1,FactoryData,
               param_3);
  }
  if (local_108.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data);
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return pUVar6;
}

// CreateStaticMeshFactoryNode @ 14e79c580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeStaticMeshFactoryNode * __thiscall
UInterchangeGenericMeshPipeline::CreateStaticMeshFactoryNode
          (UInterchangeGenericMeshPipeline *this,
          TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
          *param_1,FString *param_2)

{
  TWeakObjectPtr<UInterchangeGenericCommonMeshesProperties,FWeakObjectPtr> *this_00;
  char cVar1;
  int iVar2;
  UInterchangeBaseNodeContainer *pUVar3;
  code *pcVar4;
  bool bVar5;
  UInterchangeStaticMeshFactoryNode *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  longlong *plVar9;
  undefined1 auStackY_198 [32];
  bool local_168;
  bool local_167 [7];
  undefined8 local_160;
  undefined8 local_158;
  FString local_150;
  FString local_140;
  FSoftObjectPath local_130;
  FName local_110;
  FString local_108;
  UInterchangeGenericMeshPipeline *local_f8;
  FString local_f0;
  FString local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this_00 = &this->CommonMeshesProperties;
  bVar5 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommonMeshesProperties.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericStaticMeshPipeline.cpp"
                         ,0x2b9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar6 = (UInterchangeStaticMeshFactoryNode *)(*pcVar4)();
    return pUVar6;
  }
  if (*(int *)&param_1->field_0x8 == *(int *)&param_1->field_0x34) {
    return (UInterchangeStaticMeshFactoryNode *)0x0;
  }
  local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.Data.ArrayNum = 0;
  local_140.Data.ArrayMax = 0;
  local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.Data.ArrayNum = 0;
  local_150.Data.ArrayMax = 0;
  bVar5 = MakeMeshFactoryNodeUidAndDisplayLabel(this,param_1,0,&local_140,&local_150,param_2);
  pUVar6 = (UInterchangeStaticMeshFactoryNode *)0x0;
  if (!bVar5) goto LAB_14e79ca9f;
  local_f8 = this;
  ::FString::FString(&local_f0,param_2);
  UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_108,&local_140);
  pUVar6 = (UInterchangeStaticMeshFactoryNode *)
           UInterchangeBaseNodeContainer::GetFactoryNode(this->BaseNodeContainer,&local_108);
  if (pUVar6 == (UInterchangeStaticMeshFactoryNode *)0x0) {
LAB_14e79c6b3:
    pUVar3 = this->BaseNodeContainer;
    local_160 = 0;
    local_158 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar7);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._16_4_ = 0;
    local_c8._20_4_ = 0;
    local_c8._24_4_ = RF_NoFlags;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = pUVar3;
    pUVar6 = (UInterchangeStaticMeshFactoryNode *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar9 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (pUVar6 == (UInterchangeStaticMeshFactoryNode *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6823813803315036908>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericStaticMeshPipeline.cpp"
                         ,0x2ec,"StaticMeshFactoryNode");
      pUVar6 = (UInterchangeStaticMeshFactoryNode *)0x0;
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar6 = (UInterchangeStaticMeshFactoryNode *)(*pcVar4)();
        return pUVar6;
      }
    }
    else {
      pUVar3 = this->BaseNodeContainer;
      pUVar7 = Z_Construct_UClass_UStaticMesh_NoRegister();
      local_110 = (FName)pUVar7->_padding_;
      ::FName::ToString(&local_110,&local_e0);
      UInterchangeStaticMeshFactoryNode::InitializeStaticMeshNode
                (pUVar6,&local_108,&local_150,&local_e0,pUVar3);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      `UInterchangeGenericMeshPipeline::CreateStaticMeshFactoryNode'::__l2::<lambda_1>::operator()
                (&local_f8,pUVar6);
      pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      UInterchangeMeshFactoryNode::SetCustomImportSockets
                ((UInterchangeMeshFactoryNode *)pUVar6,(bool *)&pUVar8[7].field_0x1c);
      pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      if (pUVar8[7].field_0x16 != '\0') {
        pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        UInterchangeMeshFactoryNode::SetCustomKeepSectionsSeparate
                  ((UInterchangeMeshFactoryNode *)pUVar6,(bool *)&pUVar8[7].field_0x16);
      }
      AddLodDataToStaticMesh(this,pUVar6,param_1);
      pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      cVar1 = pUVar8[7].field_0x17;
      if (cVar1 == '\0') {
        local_167[0] = true;
        UInterchangeMeshFactoryNode::SetCustomVertexColorReplace
                  ((UInterchangeMeshFactoryNode *)pUVar6,local_167);
      }
      else if (cVar1 == '\x01') {
        local_168 = true;
        UInterchangeMeshFactoryNode::SetCustomVertexColorIgnore
                  ((UInterchangeMeshFactoryNode *)pUVar6,&local_168);
      }
      else if (cVar1 == '\x02') {
        pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        UInterchangeMeshFactoryNode::SetCustomVertexColorOverride
                  ((UInterchangeMeshFactoryNode *)pUVar6,(FColor *)&pUVar8[7].field_0x18);
      }
      UInterchangeMeshFactoryNode::SetCustomLODGroup
                ((UInterchangeMeshFactoryNode *)pUVar6,&this->LodGroup,true);
      pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      UInterchangeMeshFactoryNode::SetCustomRecomputeNormals
                ((UInterchangeMeshFactoryNode *)pUVar6,(bool *)&pUVar8[7].field_0x1d,true);
      pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      UInterchangeMeshFactoryNode::SetCustomRecomputeTangents
                ((UInterchangeMeshFactoryNode *)pUVar6,(bool *)&pUVar8[7].field_0x1e,true);
      pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      UInterchangeMeshFactoryNode::SetCustomUseMikkTSpace
                ((UInterchangeMeshFactoryNode *)pUVar6,(bool *)&pUVar8[7].field_0x1f,true);
      pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      UInterchangeMeshFactoryNode::SetCustomComputeWeightedNormals
                ((UInterchangeMeshFactoryNode *)pUVar6,(bool *)&pUVar8[7].field_0x20,true);
      pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      UInterchangeMeshFactoryNode::SetCustomUseHighPrecisionTangentBasis
                ((UInterchangeMeshFactoryNode *)pUVar6,(bool *)&pUVar8[7].field_0x21,true);
      pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      UInterchangeMeshFactoryNode::SetCustomUseFullPrecisionUVs
                ((UInterchangeMeshFactoryNode *)pUVar6,(bool *)&pUVar8[7].field_0x22,true);
      pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      UInterchangeMeshFactoryNode::SetCustomUseBackwardsCompatibleF16TruncUVs
                ((UInterchangeMeshFactoryNode *)pUVar6,(bool *)&pUVar8[7].field_0x23,true);
      pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      UInterchangeMeshFactoryNode::SetCustomRemoveDegenerates
                ((UInterchangeMeshFactoryNode *)pUVar6,(bool *)&pUVar8[7].field_0x24,true);
      UInterchangeStaticMeshFactoryNode::SetCustomBuildReversedIndexBuffer
                (pUVar6,&this->bBuildReversedIndexBuffer,true);
      UInterchangeStaticMeshFactoryNode::SetCustomGenerateLightmapUVs
                (pUVar6,&this->bGenerateLightmapUVs,true);
      UInterchangeStaticMeshFactoryNode::SetCustomGenerateDistanceFieldAsIfTwoSided
                (pUVar6,&this->bGenerateDistanceFieldAsIfTwoSided,true);
      UInterchangeStaticMeshFactoryNode::SetCustomSupportFaceRemap
                (pUVar6,&this->bSupportFaceRemap,true);
      UInterchangeStaticMeshFactoryNode::SetCustomMinLightmapResolution
                (pUVar6,&this->MinLightmapResolution,true);
      UInterchangeStaticMeshFactoryNode::SetCustomSrcLightmapIndex
                (pUVar6,&this->SrcLightmapIndex,true);
      UInterchangeStaticMeshFactoryNode::SetCustomDstLightmapIndex
                (pUVar6,&this->DstLightmapIndex,true);
      UInterchangeStaticMeshFactoryNode::SetCustomBuildScale3D(pUVar6,&this->BuildScale3D,true);
      UInterchangeStaticMeshFactoryNode::SetCustomDistanceFieldResolutionScale
                (pUVar6,&this->DistanceFieldResolutionScale,true);
      pUVar8 = FWeakObjectPtr::Get(&(this->DistanceFieldReplacementMesh).WeakPtr);
      local_130.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_130.AssetPath.PackageName.Number = 0;
      local_130.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_130.AssetPath.AssetName.Number = 0;
      local_130.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_130.SubPathString.Data.ArrayNum = 0;
      local_130.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_130,pUVar8);
      UInterchangeStaticMeshFactoryNode::SetCustomDistanceFieldReplacementMesh
                (pUVar6,&local_130,true);
      if (local_130.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.SubPathString.Data.AllocatorInstance.Data);
      }
      UInterchangeStaticMeshFactoryNode::SetCustomMaxLumenMeshCards
                (pUVar6,&this->MaxLumenMeshCards,true);
      UInterchangeStaticMeshFactoryNode::SetCustomBuildNanite(pUVar6,&this->bBuildNanite,true);
      UInterchangeStaticMeshFactoryNode::SetCustomAutoComputeLODScreenSizes
                (pUVar6,&this->bAutoComputeLODScreenSizes);
      UInterchangeStaticMeshFactoryNode::SetLODScreenSizes(pUVar6,&this->LODScreenSizes);
    }
  }
  else {
    pUVar7 = Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar7->_padding_)) goto LAB_14e79c6b3;
    `UInterchangeGenericMeshPipeline::CreateStaticMeshFactoryNode'::__l2::<lambda_1>::operator()
              (&local_f8,pUVar6);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
LAB_14e79ca9f:
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  return pUVar6;
}

// CreateStaticMeshLodDataNode @ 14e79caf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeStaticMeshLodDataNode * __thiscall
UInterchangeGenericMeshPipeline::CreateStaticMeshLodDataNode
          (UInterchangeGenericMeshPipeline *this,FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  UInterchangeBaseNodeContainer *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UInterchangeStaticMeshLodDataNode *pUVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStackY_138 [32];
  FString local_f8;
  FString local_e8;
  undefined8 local_d8;
  FString local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_e8.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar8 = (longlong)local_e8.Data.ArrayNum;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_e8.Data.ArrayNum == 0) {
    local_e8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_e8.Data.ArrayNum,0,(ForAnyElementType *)&local_e8,local_e8.Data.ArrayNum,
               &local_e8.Data.ArrayMax);
    memcpy(local_e8.Data.AllocatorInstance.Data,pFVar1,lVar8 * 2);
  }
  local_f8.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar8 = (longlong)local_f8.Data.ArrayNum;
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_f8.Data.ArrayNum == 0) {
    local_f8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_f8,local_f8.Data.ArrayNum,
               &local_f8.Data.ArrayMax);
    memcpy(local_f8.Data.AllocatorInstance.Data,pFVar1,lVar8 * 2);
  }
  pUVar2 = this->BaseNodeContainer;
  local_d8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = Z_Construct_UClass_UInterchangeStaticMeshLodDataNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar5);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = 0;
  local_b8._20_4_ = 0;
  local_b8._24_4_ = RF_NoFlags;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = pUVar2;
  pUVar6 = (UInterchangeStaticMeshLodDataNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar7 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (pUVar6 == (UInterchangeStaticMeshLodDataNode *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6823813803315036982>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericStaticMeshPipeline.cpp"
                       ,0x336,"StaticMeshLodDataNode");
    pUVar6 = (UInterchangeStaticMeshLodDataNode *)0x0;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UInterchangeStaticMeshLodDataNode *)(*pcVar3)();
      return pUVar6;
    }
  }
  else {
    pUVar2 = this->BaseNodeContainer;
    ::FString::FString(&local_d0,L"");
    UInterchangeBaseNodeContainer::SetupNode
              (pUVar2,(UInterchangeBaseNode *)pUVar6,&local_f8,&local_e8,FactoryData,&local_d0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    UInterchangeStaticMeshLodDataNode::SetOneConvexHullPerUCX(pUVar6,this->bOneConvexHullPerUCX);
    UInterchangeStaticMeshLodDataNode::SetImportCollision(pUVar6,this->bCollision);
    UInterchangeStaticMeshLodDataNode::SetImportCollisionType(pUVar6,this->Collision);
    UInterchangeStaticMeshLodDataNode::SetForceCollisionPrimitiveGeneration
              (pUVar6,this->bForceCollisionPrimitiveGeneration);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  return pUVar6;
}

// ExecutePipeline @ 14e7a7de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInterchangeGenericMeshPipeline::ExecutePipeline
          (UInterchangeGenericMeshPipeline *this,UInterchangeBaseNodeContainer *param_1,
          TArray<UInterchangeSourceData_*,TSizedDefaultAllocator<32>_> *param_2,FString *param_3)

{
  int *piVar1;
  TArray<UInterchangeSourceData_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  UInterchangePipelineMeshesUtilities *pUVar10;
  UObject *pUVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_98 [8];
  undefined8 local_90;
  UInterchangeBaseNodeContainer *local_88;
  FLODGroupIIHelper *local_80;
  undefined8 local_78;
  UInterchangeBaseNodeContainer **local_70;
  FLODGroupIIHelper **local_68;
  code *local_60;
  UInterchangeBaseNodeContainer ***local_58;
  UInterchangeBaseNodeContainer **local_50;
  UInterchangeBaseNodeContainer ***local_48;
  FLODGroupIIHelper **local_40;
  FLODGroupIIHelper ***local_38;
  
  if (param_1 == (UInterchangeBaseNodeContainer *)0x0) {
    if (2 < (byte)LogInterchangePipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangePipeline);
      return;
    }
  }
  else {
    this->BaseNodeContainer = param_1;
    uVar4 = param_2->ArrayNum;
    pTVar2 = &this->SourceDatas;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    piVar1 = &(this->SourceDatas).ArrayMax;
    (this->SourceDatas).ArrayNum = 0;
    if (*piVar1 != uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar4,&pTVar2->AllocatorInstance,0,piVar1);
    }
    pFVar12 = (param_2->AllocatorInstance).Data;
    iVar5 = param_2->ArrayNum;
    pFVar3 = pFVar12 + (longlong)iVar5 * 8;
    while( true ) {
      if (param_2->ArrayNum != iVar5) {
        local_98[0] = 0;
        `TCheckedPointerIterator<UInterchangeSourceData_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_98);
      }
      if (pFVar12 == pFVar3) break;
      local_90 = *(undefined8 *)pFVar12;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_90) &&
          ((FScriptContainerElement *)&local_90 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = (this->SourceDatas).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      pFVar12 = pFVar12 + 8;
      (this->SourceDatas).ArrayNum = iVar9 + 1;
      *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_90;
    }
    pUVar10 = CreateMeshPipelineUtilities(this->BaseNodeContainer,this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar10 != (UInterchangePipelineMeshesUtilities *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->PipelineMeshesUtilities).field0_0x0.DebugPtr = pUVar10;
    ExecutePreImportPipelineSkeletalMesh(this);
    ExecutePreImportPipelineStaticMesh(this);
    ExecutePreImportPipelineGeometryCache(this);
    local_88 = param_1;
    pUVar11 = FWeakObjectPtr::Get(&(this->CommonMeshesProperties).WeakPtr);
    if (pUVar11[7].field_0x14 == '\0') {
      local_70 = &local_88;
      local_80 = (FLODGroupIIHelper *)0x0;
      local_78 = 0;
      local_68 = &local_80;
      local_50 = &local_88;
      local_48 = &local_70;
      local_40 = &local_80;
      local_38 = &local_68;
      local_58 = &local_50;
      local_60 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UInterchangeGenericMeshPipeline::FindAndProcessIdenticalStaticMeshLODGroups'::__l5::<lambda_3>,void,FString_const_&,UInterchangeStaticMeshFactoryNode_*>
                 ::Call;
      UInterchangeBaseNodeContainer::IterateNodesOfType<UInterchangeStaticMeshFactoryNode>
                (local_88,(TFunctionRef<void___cdecl(FString_const_&,UInterchangeStaticMeshFactoryNode_*)>
                           *)&local_60);
      DestructItems<_UInterchangeGenericMeshPipeline::FindAndProcessIdenticalStaticMeshLODGroups_::__l5::FLODGroupIIHelper,int>
                (local_80,(int)local_78);
      if (local_80 != (FLODGroupIIHelper *)0x0) {
        FMemory::Free(local_80);
      }
    }
  }
  return;
}

// ExecutePostFactoryPipeline @ 14e7a97e0

void __thiscall
UInterchangeGenericMeshPipeline::ExecutePostFactoryPipeline
          (UInterchangeGenericMeshPipeline *this,UInterchangeBaseNodeContainer *param_1,
          FString *param_2,UObject *param_3,bool param_4)

{
  int iVar1;
  UClass *pUVar2;
  UInterchangeFactoryBaseNode *this_00;
  
  if (param_3 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&param_3->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_)) &&
       (this_00 = UInterchangeBaseNodeContainer::GetFactoryNode(param_1,param_2),
       this_00 != (UInterchangeFactoryBaseNode *)0x0)) {
      pUVar2 = Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if (((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar2->_padding_)) && (param_4)) {
        UInterchangeFactoryBaseNode::GetReimportStrategyFlags(this_00);
      }
    }
  }
  return;
}

// ExecutePostFactoryPipelineStaticMesh @ 14e7a98f0

void __thiscall
UInterchangeGenericMeshPipeline::ExecutePostFactoryPipelineStaticMesh
          (UInterchangeGenericMeshPipeline *this,UInterchangeBaseNodeContainer *param_1,
          FString *param_2,UObject *param_3,bool param_4)

{
  int iVar1;
  UClass *pUVar2;
  UInterchangeFactoryBaseNode *this_00;
  
  if (param_3 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&param_3->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_)) &&
       (this_00 = UInterchangeBaseNodeContainer::GetFactoryNode(param_1,param_2),
       this_00 != (UInterchangeFactoryBaseNode *)0x0)) {
      pUVar2 = Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if (((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar2->_padding_)) && (param_4)) {
        UInterchangeFactoryBaseNode::GetReimportStrategyFlags(this_00);
      }
    }
  }
  return;
}

// ExecutePostImportPipeline @ 14e7a9b10

void __thiscall
UInterchangeGenericMeshPipeline::ExecutePostImportPipeline
          (UInterchangeGenericMeshPipeline *this,UInterchangeBaseNodeContainer *param_1,
          FString *param_2,UObject *param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UInterchangeFactoryBaseNode *pUVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  USkeleton *this_00;
  FLLMScope local_res10 [2];
  FMemScope local_18 [2];
  
  if (param_1 != (UInterchangeBaseNodeContainer *)0x0) {
    if (this->BaseNodeContainer == param_1) {
      if ((param_3 != (UObject *)0x0) &&
         (pUVar4 = UInterchangeBaseNodeContainer::GetFactoryNode(this->BaseNodeContainer,param_2),
         pUVar4 != (UInterchangeFactoryBaseNode *)0x0)) {
        this->LastSkeletalMeshImportContentType = this->SkeletalMeshImportContentType;
        bVar3 = FWeakObjectPtr::IsValid
                          (&(this->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr);
        if ((!bVar3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("CommonSkeletalMeshesAndAnimationsProperties.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericSkeletalMeshPipeline.cpp"
                               ,0x2c3,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (this->BaseNodeContainer != (UInterchangeBaseNodeContainer *)0x0) {
          pUVar5 = Z_Construct_UClass_USkeletalMesh_NoRegister();
          iVar1 = (int)pUVar5->_padding_;
          if ((((iVar1 <= *(int *)(*(longlong *)&param_3->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&param_3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar5->_padding_)) && (this->SkeletalMeshImportContentType != Geometry)) &&
             (this->bUpdateSkeletonReferencePose != false)) {
            pUVar6 = FWeakObjectPtr::Get(&(this->CommonSkeletalMeshesAndAnimationsProperties).
                                          WeakPtr);
            bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar6[7].field_0x14);
            if (bVar3) {
              pUVar6 = FWeakObjectPtr::Get(&(this->CommonSkeletalMeshesAndAnimationsProperties).
                                            WeakPtr);
              pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar6[7].field_0x14);
              pUVar7 = (UObject *)(**(code **)(*(longlong *)param_3 + 0x408))(param_3);
              if (pUVar7 == pUVar6) {
                this_00 = (USkeleton *)(**(code **)(*(longlong *)param_3 + 0x408))(param_3);
                USkeleton::UpdateReferencePoseFromMesh(this_00,(USkinnedAsset *)param_3);
              }
            }
          }
        }
        bVar3 = -1 < CpuChannel->Enabled;
        if (bVar3) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId731,
                     "UInterchangeGenericMeshPipeline::PostImportPhysicsAssetImport",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericSkeletalMeshPipeline.cpp"
                     ,0x2db);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId731);
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          ::FName::FName(&LLMScope_Name732,L"Interchange");
          _Init_thread_footer(&::_TSS0);
        }
        FLLMScope::FLLMScope(local_res10,LLMScope_Name732,false,None,Default,true);
        FMemScope::FMemScope(local_18,&LLMScope_Name732,true);
        FMemScope::~FMemScope(local_18);
        FLLMScope::~FLLMScope(local_res10);
        if (bVar3) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3128373673539403304>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericMeshPipeline.cpp"
                         ,0x1d8,"BaseNodeContainer == InBaseNodeContainer");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// ExecutePreImportPipelineGeometryCache @ 14e7a9d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e7aa0e9) */
/* WARNING: Removing unreachable block (ram,0x00014e7aa0f7) */

void __thiscall
UInterchangeGenericMeshPipeline::ExecutePreImportPipelineGeometryCache
          (UInterchangeGenericMeshPipeline *this)

{
  TWeakObjectPtr<UInterchangeGenericCommonMeshesProperties,FWeakObjectPtr> *this_00;
  TArray<UInterchangeGeometryCacheFactoryNode_*,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  UInterchangeSceneNode *this_01;
  code *pcVar6;
  ForAnyElementType _Src;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  UObject *pUVar12;
  UInterchangeAnimationTrackNode *this_02;
  UClass *pUVar13;
  UInterchangeBaseNode *this_03;
  FString *pFVar14;
  FScriptContainerElement *pFVar15;
  TTuple<FString,FInterchangeMeshInstance> *pTVar16;
  int *piVar17;
  longlong lVar18;
  ForAnyElementType FVar19;
  UInterchangeGenericMeshPipeline *pUVar20;
  FPayloadInfo *pFVar21;
  ForElementType<FSetElementId> FVar22;
  FScriptContainerElement *pFVar23;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  undefined8 *puVar26;
  void **ppvVar27;
  undefined1 auStackY_238 [32];
  undefined1 local_1e8;
  undefined1 local_1e7;
  undefined1 local_1e6;
  undefined1 local_1e5 [5];
  TArray<FString,TSizedDefaultAllocator<32>_> local_1e0;
  ForAnyElementType local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0 [4];
  uint local_1bc;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1b8;
  UInterchangeGeometryCacheFactoryNode *local_1a8;
  FScriptContainerElement *local_1a0;
  FString local_198;
  FString local_188;
  ForAnyElementType local_178;
  undefined8 local_170;
  TArray<FString,TSizedDefaultAllocator<32>_> local_168;
  TArray<FString,TSizedDefaultAllocator<32>_> local_158;
  UInterchangeGenericMeshPipeline *local_148;
  FString local_140;
  FScriptContainerElement *local_130;
  undefined8 local_128;
  void *local_120;
  undefined8 local_118;
  undefined1 local_110 [8];
  FScriptContainerElement **local_108;
  FWeakObjectPtr *local_100;
  FScriptContainerElement *local_f8;
  FInterchangeAnimationPayLoadKey local_f0;
  code *local_d8;
  FScriptContainerElement ***local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  this_00 = &this->CommonMeshesProperties;
  local_148 = this;
  local_100 = &this_00->WeakPtr;
  bVar7 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommonMeshesProperties.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericGeometryCachePipeline.cpp"
                         ,0x11,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((this->bImportGeometryCaches != false) &&
     (pUVar12 = FWeakObjectPtr::Get(&this_00->WeakPtr), pUVar12[7].field_0x10 == '\0')) {
    local_108 = &local_130;
    local_d0 = &local_108;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UInterchangeGenericMeshPipeline::ExecutePreImportPipelineGeometryCache'::__l2::<lambda_1>,void,FString_const_&,UInterchangeAnimationTrackSetNode_*>
               ::Call;
    local_1d0.Data = (FScriptContainerElement *)0x0;
    local_1c8 = 0;
    local_130 = (FScriptContainerElement *)0x0;
    local_128 = 0;
    UInterchangeBaseNodeContainer::IterateNodesOfType<UInterchangeAnimationTrackSetNode>
              (this->BaseNodeContainer,
               (TFunctionRef<void___cdecl(FString_const_&,UInterchangeAnimationTrackSetNode_*)> *)
               &local_d8);
    uVar24 = (ulonglong)(int)(uint)local_128;
    local_1bc = (uint)local_128;
    pFVar25 = local_130 + uVar24 * 8;
    pFVar23 = local_130;
    local_1a0 = pFVar25;
    while( true ) {
      if ((uint)local_128 != (int)uVar24) {
        local_1e8 = 0;
        `TCheckedPointerIterator<UInterchangeAnimationTrackSetNode_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_1e8);
      }
      pUVar20 = local_148;
      if (pFVar23 == pFVar25) break;
      if (*(UInterchangeAnimationTrackSetNode **)pFVar23 != (UInterchangeAnimationTrackSetNode *)0x0
         ) {
        local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.ArrayNum = 0;
        local_168.ArrayMax = 0;
        UInterchangeAnimationTrackSetNode::GetCustomAnimationTrackUids
                  (*(UInterchangeAnimationTrackSetNode **)pFVar23,&local_168);
        pUVar20 = local_148;
        iVar11 = local_168.ArrayNum;
        pFVar25 = local_168.AllocatorInstance.Data + (longlong)local_168.ArrayNum * 0x10;
        FVar19.Data = local_168.AllocatorInstance.Data;
        while( true ) {
          if (local_168.ArrayNum != iVar11) {
            local_1e7 = 0;
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_1e7);
          }
          if (FVar19.Data == pFVar25) break;
          this_02 = (UInterchangeAnimationTrackNode *)
                    UInterchangeBaseNodeContainer::GetNode
                              (pUVar20->BaseNodeContainer,(FString *)FVar19.Data);
          if (this_02 == (UInterchangeAnimationTrackNode *)0x0) {
LAB_14e7aa135:
            FVar19.Data = FVar19.Data + 0x10;
          }
          else {
            pUVar13 = Z_Construct_UClass_UInterchangeTransformAnimationTrackNode_NoRegister();
            iVar8 = (int)pUVar13->_padding_;
            if ((*(int *)(this_02->_padding_ + 0x38) < iVar8) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
                &pUVar13->_padding_)) goto LAB_14e7aa135;
            local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_140.Data.ArrayNum = 0;
            local_140.Data.ArrayMax = 0;
            bVar7 = UInterchangeAnimationTrackNode::GetCustomActorDependencyUid(this_02,&local_140);
            if (bVar7) {
              this_03 = UInterchangeBaseNodeContainer::GetNode
                                  (pUVar20->BaseNodeContainer,&local_140);
              if (this_03 != (UInterchangeBaseNode *)0x0) {
                pUVar13 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
                iVar8 = (int)pUVar13->_padding_;
                if ((iVar8 <= *(int *)(this_03->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar8 * 8)
                    == &pUVar13->_padding_)) {
                  ::FString::FString(&local_f0.UniqueId,"");
                  local_f0.Type = NONE;
                  bVar7 = UInterchangeAnimationTrackNode::GetCustomAnimationPayloadKey
                                    (this_02,&local_f0);
                  if (bVar7) {
                    pFVar14 = UInterchangeBaseNode::GetUniqueID(this_03,&local_c0);
                    ::FString::FString(&local_188,pFVar14);
                    _Src.Data = local_f0.UniqueId.Data.AllocatorInstance.Data;
                    lVar18 = (longlong)local_f0.UniqueId.Data.ArrayNum;
                    local_178.Data = (FScriptContainerElement *)0x0;
                    local_170 = CONCAT44(local_170._4_4_,local_f0.UniqueId.Data.ArrayNum);
                    if (local_f0.UniqueId.Data.ArrayNum == 0) {
                      local_170 = 0;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (2,2,local_f0.UniqueId.Data.ArrayNum,0,&local_178,
                                 local_f0.UniqueId.Data.ArrayNum,(int *)((longlong)&local_170 + 4));
                      memcpy(local_178.Data,_Src.Data,lVar18 * 2);
                    }
                    iVar8 = (int)local_1c8;
                    if ((int)local_1c8 == local_1c8._4_4_) {
                      iVar8 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x820,&local_1d0,(int *)((longlong)&local_1c8 + 4));
                      local_1c8 = CONCAT44(local_1c8._4_4_,iVar8 + 1);
                    }
                    else {
                      local_1c8 = CONCAT44(local_1c8._4_4_,(int)local_1c8 + 1);
                    }
                    pFVar15 = local_1d0.Data + (longlong)iVar8 * 0x20;
                    *(undefined8 *)&pFVar15->field_0x0 = 0;
                    *(FScriptContainerElement **)&pFVar15->field_0x0 =
                         local_188.Data.AllocatorInstance.Data;
                    *(int *)(pFVar15 + 8) = local_188.Data.ArrayNum;
                    *(int *)(pFVar15 + 0xc) = local_188.Data.ArrayMax;
                    *(undefined8 *)(pFVar15 + 0x10) = 0;
                    *(FScriptContainerElement **)(pFVar15 + 0x10) = local_178.Data;
                    *(undefined4 *)(pFVar15 + 0x18) = (undefined4)local_170;
                    *(undefined4 *)(pFVar15 + 0x1c) = local_170._4_4_;
                    local_170 = 0;
                    local_178.Data = (FScriptContainerElement *)0x0;
                    local_188.Data.ArrayNum = 0;
                    local_188.Data.ArrayMax = 0;
                    local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                    }
                  }
                  if (local_f0.UniqueId.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_f0.UniqueId.Data.AllocatorInstance.Data);
                  }
                  goto LAB_14e7a9f60;
                }
              }
              if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_140.Data.AllocatorInstance.Data);
              }
              goto LAB_14e7aa135;
            }
LAB_14e7a9f60:
            if (local_140.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
            goto LAB_14e7aa135;
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
            FVar19.Data = FVar19.Data + 0x10;
          }
        }
        DestructItems<FString,int>((FString *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
        uVar24 = (ulonglong)local_1bc;
        pFVar25 = local_1a0;
        if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.AllocatorInstance.Data);
          pFVar25 = local_1a0;
        }
      }
      pFVar23 = pFVar23 + 8;
    }
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.ArrayNum = 0;
    local_1b8.ArrayMax = 0;
    UInterchangePipelineMeshesUtilities::GetAllGeometryCacheInstance
              ((local_148->PipelineMeshesUtilities).field0_0x0.DebugPtr,&local_1b8);
    if (local_1b8.ArrayNum != 0) {
      if (0 < (int)local_1c8) {
        local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_158.ArrayNum = 0;
        local_158.ArrayMax = 0;
        pUVar12 = FWeakObjectPtr::Get(&(pUVar20->CommonMeshesProperties).WeakPtr);
        if ((pUVar12[7].field_0x12 == '\0') ||
           (pUVar12 = FWeakObjectPtr::Get(&(pUVar20->CommonMeshesProperties).WeakPtr),
           pUVar12[7].field_0x10 != '\0')) {
          UInterchangePipelineMeshesUtilities::GetAllStaticMeshInstance
                    ((pUVar20->PipelineMeshesUtilities).field0_0x0.DebugPtr,&local_158);
        }
        else {
          UInterchangePipelineMeshesUtilities::GetAllSkinnedMeshInstance
                    ((pUVar20->PipelineMeshesUtilities).field0_0x0.DebugPtr,&local_158);
        }
        iVar11 = local_158.ArrayNum;
        iVar8 = 0;
        if (local_158.ArrayNum != 0) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,local_158.ArrayNum,&local_1b8.AllocatorInstance,
                             &local_1b8.ArrayNum,&local_1b8.ArrayMax);
          ConstructItems<FString,FString,int>
                    (local_1b8.AllocatorInstance.Data + (longlong)iVar8 * 0x10,
                     (FString *)local_158.AllocatorInstance.Data,iVar11);
          iVar8 = local_158.ArrayNum;
        }
        DestructItems<FString,int>((FString *)local_158.AllocatorInstance.Data,iVar8);
        if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.AllocatorInstance.Data);
        }
      }
      uVar24 = (ulonglong)local_1b8.ArrayNum;
      local_88.Elements._0_8_ = 0;
      local_88.Elements._32_8_ = 0;
      local_88.Elements._40_4_ = 0;
      local_88.Elements._52_4_ = 0;
      local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_88.HashSize = 0;
      local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8 = local_1b8.AllocatorInstance.Data + uVar24 * 0x10;
      local_88.Elements._8_8_ = 0;
      local_88.Elements._44_4_ = 0x80;
      local_88.Elements._48_4_ = 0xffffffff;
      local_1e0.ArrayNum = 0;
      local_1e0.ArrayMax = 0;
      local_1bc = local_1b8.ArrayNum;
      FVar19.Data = local_1b8.AllocatorInstance.Data;
LAB_14e7aa2c9:
      pFVar25 = local_f8;
      local_1a0 = FVar19.Data;
      if (local_1b8.ArrayNum != (int)uVar24) {
        local_1e6 = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1e6);
      }
      if (FVar19.Data != pFVar25) {
        pTVar16 = TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
                          *)&((pUVar20->PipelineMeshesUtilities).field0_0x0.DebugPtr)->
                             MeshInstancesPerMeshInstanceUid,(FString *)FVar19.Data);
        if ((pTVar16 == (TTuple<FString,FInterchangeMeshInstance> *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x27b,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar18 = 0;
        local_120 = (void *)0x0;
        local_118 = 0;
        if (*(int *)&pTVar16->field_0x38 != *(int *)&pTVar16->field_0x64) {
          piVar4 = *(int **)&pTVar16->field_0x70;
          piVar17 = (int *)&pTVar16->field_0x68;
          if (piVar4 != (int *)0x0) {
            piVar17 = piVar4;
          }
          iVar11 = *piVar17;
          if (iVar11 != -1) {
            lVar5 = *(longlong *)&pTVar16->field_0x30;
            do {
              if (*(int *)((longlong)iVar11 * 0x20 + lVar5) == 0) {
                piVar17 = (int *)&pTVar16->field_0x68;
                if (piVar4 != (int *)0x0) {
                  piVar17 = piVar4;
                }
                iVar11 = *piVar17;
                goto joined_r0x00014e7aa4b8;
              }
              iVar11 = *(int *)((longlong)iVar11 * 0x20 + 0x18 + lVar5);
            } while (iVar11 != -1);
          }
        }
        ppvVar27 = &local_120;
        goto LAB_14e7aa37d;
      }
      if (local_1e0.ArrayNum != 0) {
        local_1a8 = CreateGeometryCacheFactoryNode(pUVar20,&local_1e0);
        pTVar1 = &pUVar20->GeometryCacheFactoryNodes;
        pFVar25 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar25 <= (FScriptContainerElement *)&local_1a8) &&
            ((FScriptContainerElement *)&local_1a8 <
             pFVar25 + (longlong)(pUVar20->GeometryCacheFactoryNodes).ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar11 = (pUVar20->GeometryCacheFactoryNodes).ArrayNum;
        piVar4 = &(pUVar20->GeometryCacheFactoryNodes).ArrayMax;
        if (iVar11 == *piVar4) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,piVar4);
        }
        (pUVar20->GeometryCacheFactoryNodes).ArrayNum = iVar11 + 1;
        *(UInterchangeGeometryCacheFactoryNode **)
         ((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_1a8;
        iVar11 = (int)local_1c8;
        uVar24 = (ulonglong)(int)local_1c8;
        pFVar21 = (FPayloadInfo *)(local_1d0.Data + uVar24 * 0x20);
        FVar19.Data = local_1d0.Data;
        while( true ) {
          if ((int)uVar24 != iVar11) {
            `TCheckedPointerIterator<`UInterchangeGenericMeshPipeline::ExecutePreImportPipelineGeometryCache'::__l2::FPayloadInfo,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_1c0);
          }
          if ((FPayloadInfo *)FVar19.Data == pFVar21) break;
          UInterchangeGeometryCacheFactoryNode::SetAnimationPayloadKeyForSceneNodeUid
                    (local_1a8,(FString *)FVar19.Data,&((FPayloadInfo *)FVar19.Data)->PayloadKeyId);
          uVar24 = local_1c8 & 0xffffffff;
          FVar19.Data = FVar19.Data + 0x20;
        }
      }
      DestructItems<FString,int>((FString *)local_1e0.AllocatorInstance.Data,local_1e0.ArrayNum);
      if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.AllocatorInstance.Data);
      }
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
    }
    DestructItems<FString,int>((FString *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
    if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
    if (local_130 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130);
    }
    DestructItems<_UInterchangeGenericMeshPipeline::ExecutePreImportPipelineGeometryCache_::__l2::FPayloadInfo,int>
              ((FPayloadInfo *)local_1d0.Data,(int)local_1c8);
    if ((FPayloadInfo *)local_1d0.Data != (FPayloadInfo *)0x0) {
      FMemory::Free(local_1d0.Data);
    }
  }
  return;
joined_r0x00014e7aa4b8:
  if (iVar11 == -1) goto LAB_14e7aa4d8;
  if (*(int *)((longlong)iVar11 * 0x20 + lVar5) == 0) {
    if ((iVar11 != -1) && (lVar18 = (longlong)iVar11 * 0x20 + lVar5, lVar18 != 0))
    goto LAB_14e7aa4fe;
    goto LAB_14e7aa4d8;
  }
  iVar11 = *(int *)((longlong)iVar11 * 0x20 + 0x18 + lVar5);
  goto joined_r0x00014e7aa4b8;
LAB_14e7aa4d8:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14e7aa4fe:
  ppvVar27 = (void **)(lVar18 + 8);
LAB_14e7aa37d:
  puVar26 = *ppvVar27;
  iVar11 = *(int *)(ppvVar27 + 1);
  puVar2 = puVar26 + iVar11;
  while( true ) {
    if (*(int *)(ppvVar27 + 1) != iVar11) {
      local_1e5[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UInterchangeBaseNode_const_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_1e5);
    }
    if (puVar26 == puVar2) break;
    this_01 = (UInterchangeSceneNode *)*puVar26;
    if (this_01 != (UInterchangeSceneNode *)0x0) {
      pUVar13 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
      iVar8 = (int)pUVar13->_padding_;
      if ((iVar8 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
          &pUVar13->_padding_)) {
        pUVar12 = FWeakObjectPtr::Get(local_100);
        if (pUVar12[7].field_0x14 == '\0') {
          local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_198.Data.ArrayNum = 0;
          local_198.Data.ArrayMax = 0;
          UInterchangeSceneNode::GetCustomAssetInstanceUid(this_01,&local_198);
          iVar8 = local_198.Data.ArrayNum + -1;
          FVar19.Data = local_198.Data.AllocatorInstance.Data;
          if (local_198.Data.ArrayNum == 0) {
            iVar8 = 0;
            FVar19.Data = (FScriptContainerElement *)L"";
          }
          uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar19.Data);
          if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
            FVar22 = (ForElementType<FSetElementId>)&local_88.Hash;
            if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar22 = local_88.Hash.SecondaryData;
            }
            iVar8 = *(int *)((longlong)FVar22 + (ulonglong)(local_88.HashSize - 1U & uVar9) * 4);
            if (iVar8 != -1) {
              lVar18 = local_88.Elements._0_8_;
              iVar10 = local_198.Data.ArrayNum;
              do {
                lVar5 = (longlong)iVar8 * 0x18;
                iVar3 = *(int *)(lVar18 + 8 + lVar5);
                if (iVar3 == iVar10) {
                  if (1 < iVar3) {
                    iVar10 = FGenericPlatformStricmp::Stricmp
                                       (*(wchar_t **)(lVar18 + lVar5),
                                        (wchar_t *)local_198.Data.AllocatorInstance.Data);
                    bVar7 = iVar10 == 0;
                    lVar18 = local_88.Elements._0_8_;
                    iVar10 = local_198.Data.ArrayNum;
                    goto LAB_14e7aa622;
                  }
LAB_14e7aa634:
                  FVar19.Data = local_198.Data.AllocatorInstance.Data;
                  if (iVar8 != -1) goto LAB_14e7aa751;
                  break;
                }
                bVar7 = iVar3 + iVar10 == 1;
LAB_14e7aa622:
                if (bVar7) goto LAB_14e7aa634;
                iVar8 = *(int *)(lVar18 + 0x10 + lVar5);
              } while (iVar8 != -1);
            }
          }
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                    (&local_88,(FString *)local_110,(bool *)&local_198);
          pFVar25 = (FScriptContainerElement *)
                    UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_01,&local_a0);
          if (((local_1e0.AllocatorInstance.Data <= pFVar25) &&
              (pFVar25 < local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayMax * 0x10)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar18 = (longlong)local_1e0.ArrayNum;
          if (local_1e0.ArrayNum == local_1e0.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_1e0.AllocatorInstance,&local_1e0.ArrayMax);
            pFVar23 = local_1e0.AllocatorInstance.Data + (longlong)iVar8 * 0x10;
            local_1e0.ArrayNum = iVar8 + 1;
          }
          else {
            local_1e0.ArrayNum = local_1e0.ArrayNum + 1;
            pFVar23 = local_1e0.AllocatorInstance.Data + lVar18 * 0x10;
          }
          *(undefined8 *)pFVar23 = 0;
          *(undefined8 *)pFVar23 = *(undefined8 *)pFVar25;
          *(undefined8 *)pFVar25 = 0;
          *(int *)(pFVar23 + 8) = *(int *)(pFVar25 + 8);
          *(int *)(pFVar23 + 0xc) = *(int *)(pFVar25 + 0xc);
          *(undefined8 *)(pFVar25 + 8) = 0;
          FVar19.Data = local_198.Data.AllocatorInstance.Data;
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            FVar19.Data = local_198.Data.AllocatorInstance.Data;
          }
        }
        else {
          pFVar25 = (FScriptContainerElement *)
                    UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_01,&local_b0);
          if (((local_1e0.AllocatorInstance.Data <= pFVar25) &&
              (pFVar25 < local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayMax * 0x10)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar18 = (longlong)local_1e0.ArrayNum;
          if (local_1e0.ArrayNum == local_1e0.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_1e0.AllocatorInstance,&local_1e0.ArrayMax);
            pFVar23 = local_1e0.AllocatorInstance.Data + (longlong)iVar8 * 0x10;
            local_1e0.ArrayNum = iVar8 + 1;
          }
          else {
            local_1e0.ArrayNum = local_1e0.ArrayNum + 1;
            pFVar23 = local_1e0.AllocatorInstance.Data + lVar18 * 0x10;
          }
          *(undefined8 *)pFVar23 = 0;
          *(undefined8 *)pFVar23 = *(undefined8 *)pFVar25;
          *(undefined8 *)pFVar25 = 0;
          *(int *)(pFVar23 + 8) = *(int *)(pFVar25 + 8);
          *(int *)(pFVar23 + 0xc) = *(int *)(pFVar25 + 0xc);
          *(undefined8 *)(pFVar25 + 8) = 0;
          FVar19.Data = local_b0.Data.AllocatorInstance.Data;
        }
LAB_14e7aa751:
        if (FVar19.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar19.Data);
        }
      }
    }
    puVar26 = puVar26 + 1;
  }
  if (local_120 != (void *)0x0) {
    FMemory::Free(local_120);
  }
  FVar19.Data = local_1a0 + 0x10;
  uVar24 = (ulonglong)local_1bc;
  pUVar20 = local_148;
  goto LAB_14e7aa2c9;
}

// ExecutePreImportPipelineSkeletalMesh @ 14e7aa960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInterchangeGenericMeshPipeline::ExecutePreImportPipelineSkeletalMesh
          (UInterchangeGenericMeshPipeline *this)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  ForAnyElementType FVar5;
  undefined1 auStackY_108 [32];
  FLLMScope local_d8 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_d0;
  FMemScope local_c0;
  undefined1 local_b8 [32];
  void *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  int local_84;
  void *local_78;
  undefined4 local_70;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name77,L"Interchange");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_d8,LLMScope_Name77,false,None,Default,true);
  FMemScope::FMemScope(&local_c0,&LLMScope_Name77,true);
  bVar3 = FWeakObjectPtr::IsValid(&(this->CommonMeshesProperties).WeakPtr);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommonMeshesProperties.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericSkeletalMeshPipeline.cpp"
                         ,0x4e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->bImportSkeletalMeshes != false) &&
     ((pUVar4 = FWeakObjectPtr::Get(&(this->CommonMeshesProperties).WeakPtr),
      pUVar4[7].field_0x10 == '\0' ||
      (pUVar4 = FWeakObjectPtr::Get(&(this->CommonMeshesProperties).WeakPtr),
      pUVar4[7].field_0x10 == '\x02')))) {
    local_68._0_8_ = (FScriptContainerElement *)0x0;
    local_68._8_8_ = 0;
    local_48 = (void *)0x0;
    local_40 = 0;
    local_3c = 0x80;
    local_38 = 0xffffffff;
    local_34 = 0;
    local_28 = (void *)0x0;
    if (this->bCombineSkeletalMeshes_DEPRECATED == false) {
      local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d0.ArrayNum = 0;
      local_d0.ArrayMax = 0;
      UInterchangePipelineMeshesUtilities::GetAllSkinnedMeshInstance
                ((this->PipelineMeshesUtilities).field0_0x0.DebugPtr,&local_d0);
      if ((0 < local_d0.ArrayNum) && (2 < (byte)LogInterchangePipeline._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Cannot_import_s_152f59318,
                   (FLogCategoryBase *)&LogInterchangePipeline);
      }
      DestructItems<FString,int>((FString *)local_d0.AllocatorInstance.Data,local_d0.ArrayNum);
      FVar5.Data = local_d0.AllocatorInstance.Data;
    }
    else {
      local_b8._0_8_ = (FScriptContainerElement *)0x0;
      local_b8._8_8_ = 0;
      local_98 = (void *)0x0;
      local_90 = 0;
      local_8c = 0x80;
      local_88 = 0xffffffff;
      local_84 = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
      pUVar4 = FWeakObjectPtr::Get(&(this->CommonMeshesProperties).WeakPtr);
      if ((pUVar4[7].field_0x10 == '\x02') &&
         (pUVar4 = FWeakObjectPtr::Get(&(this->CommonMeshesProperties).WeakPtr),
         pUVar4[7].field_0x11 != '\0')) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      UInterchangePipelineMeshesUtilities::GetCombinedSkinnedMeshInstances
                ((this->PipelineMeshesUtilities).field0_0x0.DebugPtr,
                 (TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                  *)local_b8,bVar3);
      if ((0 < local_b8._8_4_ - local_84) && (2 < (byte)LogInterchangePipeline._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Cannot_import_s_152f591c8,
                   (FLogCategoryBase *)&LogInterchangePipeline);
      }
      local_70 = 0;
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_b8,0,local_b8._8_4_);
      iVar2 = SUB84(local_b8._8_8_,4);
      local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
      }
      local_88 = 0xffffffff;
      local_84 = 0;
      local_90 = 0;
      if (0x80 < local_8c) {
        local_8c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
      }
      FVar5.Data = (FScriptContainerElement *)local_b8._0_8_;
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
        FVar5.Data = (FScriptContainerElement *)local_b8._0_8_;
      }
    }
    if (FVar5.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar5.Data);
    }
    CreateAssemblyPartDependencies(this);
    local_20 = 0;
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_68,0,local_68._8_4_);
    iVar2 = SUB84(local_68._8_8_,4);
    local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
    }
    local_34 = 0;
    local_40 = 0;
    local_38 = 0xffffffff;
    if (0x80 < local_3c) {
      local_3c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
  }
  FMemScope::~FMemScope(&local_c0);
  FLLMScope::~FLLMScope(local_d8);
  return;
}

// ExecutePreImportPipelineStaticMesh @ 14e7aad10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeGenericMeshPipeline::ExecutePreImportPipelineStaticMesh
          (UInterchangeGenericMeshPipeline *this)

{
  ForAnyElementType *pFVar1;
  TArray<UInterchangeStaticMeshFactoryNode_*,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 *puVar3;
  UInterchangePipelineMeshesUtilities *this_00;
  UInterchangeBaseNode *this_01;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UInterchangeSourceNode *this_02;
  UObject *pUVar9;
  ulonglong uVar10;
  TTuple<FString,FInterchangeMeshInstance> *pTVar11;
  uint *puVar12;
  FScriptContainerElement *pFVar13;
  FInterchangeLodSceneNodeContainer *pFVar14;
  FString *pFVar15;
  TTuple<FString,FInterchangeMeshGeometry> *pTVar16;
  byte bVar17;
  longlong lVar18;
  ForElementType<FSetElementId> FVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  ForAnyElementType FVar22;
  int *piVar23;
  uint uVar24;
  undefined8 *puVar25;
  uint uVar26;
  undefined1 *puVar27;
  longlong *plVar28;
  uint *puVar29;
  TBitArray<FDefaultBitArrayAllocator> *pTVar30;
  undefined1 auStackY_2f8 [32];
  undefined1 local_2a8;
  undefined1 local_2a7;
  undefined1 local_2a6;
  undefined1 local_2a5;
  undefined1 local_2a4;
  undefined1 local_2a3 [3];
  TArray<FString,TSizedDefaultAllocator<32>_> local_2a0;
  uint local_290;
  uint local_28c;
  TArray<FString,TSizedDefaultAllocator<32>_> local_288;
  TArray<FString,TSizedDefaultAllocator<32>_> local_278;
  UInterchangeStaticMeshFactoryNode *local_268;
  UInterchangeStaticMeshFactoryNode *local_260;
  uint local_258;
  int local_254 [3];
  FScriptContainerElement *local_248;
  UInterchangeGenericMeshPipeline *local_240;
  longlong *local_238;
  uint uStack_230;
  uint uStack_22c;
  TBitArray<FDefaultBitArrayAllocator> *local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  uint local_218;
  undefined4 uStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  UInterchangeGenericMeshPipeline *local_208;
  FScriptContainerElement *local_200;
  TBitArray<FDefaultBitArrayAllocator> *local_1f8;
  longlong *local_1f0;
  int local_1e8;
  int *local_1e0;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  uint *local_1c8;
  longlong *local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b8;
  undefined8 uStack_198;
  longlong *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_188;
  undefined8 uStack_168;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130 [2];
  undefined4 local_104;
  undefined4 local_e4;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined1 local_a0 [8];
  ForElementType<FSetElementId> local_98;
  int local_90;
  TSet<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_240 = this;
  bVar6 = FWeakObjectPtr::IsValid(&(this->CommonMeshesProperties).WeakPtr);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommonMeshesProperties.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericStaticMeshPipeline.cpp"
                         ,0xf8,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_02 = UInterchangeSourceNode::FindOrCreateUniqueInstance(this->BaseNodeContainer);
  if (this_02 != (UInterchangeSourceNode *)0x0) {
    UInterchangeSourceNode::SetCustomNaniteTriangleThreshold(this_02,&this->NaniteTriangleThreshold)
    ;
  }
  if ((this->bImportStaticMeshes != false) &&
     ((pUVar9 = FWeakObjectPtr::Get(&(this->CommonMeshesProperties).WeakPtr),
      pUVar9[7].field_0x10 == '\0' ||
      (pUVar9 = FWeakObjectPtr::Get(&(this->CommonMeshesProperties).WeakPtr),
      pUVar9[7].field_0x10 == '\x01')))) {
    this_00 = (this->PipelineMeshesUtilities).field0_0x0.DebugPtr;
    if (this->bCombineStaticMeshes == false) {
      local_2a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2a0.ArrayNum = 0;
      local_2a0.ArrayMax = 0;
      local_208 = this;
      UInterchangePipelineMeshesUtilities::GetAllStaticMeshInstance(this_00,&local_2a0);
      bVar6 = `UInterchangeGenericMeshPipeline::ExecutePreImportPipelineStaticMesh'::__l63::
              <lambda_1>::operator()(&local_208,&local_2a0,true);
      if (!bVar6) {
        if ((longlong)local_2a0._8_8_ < 0) {
          DestructItems<FString,int>((FString *)local_2a0.AllocatorInstance.Data,local_2a0.ArrayNum)
          ;
          iVar21 = local_2a0.ArrayMax;
          local_2a0._8_8_ = local_2a0._8_8_ & 0xffffffff00000000;
          if (iVar21 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&local_2a0.AllocatorInstance,0,&local_2a0.ArrayMax);
          }
        }
        else {
          DestructItems<FString,int>((FString *)local_2a0.AllocatorInstance.Data,local_2a0.ArrayNum)
          ;
          local_2a0._8_8_ = local_2a0._8_8_ & 0xffffffff00000000;
        }
        UInterchangePipelineMeshesUtilities::GetAllStaticMeshGeometry
                  ((this->PipelineMeshesUtilities).field0_0x0.DebugPtr,&local_2a0);
        `UInterchangeGenericMeshPipeline::ExecutePreImportPipelineStaticMesh'::__l63::<lambda_1>::
        operator()(&local_208,&local_2a0,false);
      }
      DestructItems<FString,int>((FString *)local_2a0.AllocatorInstance.Data,local_2a0.ArrayNum);
      FVar22.Data = local_2a0.AllocatorInstance.Data;
    }
    else {
      local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_288.ArrayNum = 0;
      local_288.ArrayMax = 0;
      UInterchangePipelineMeshesUtilities::GetAllStaticMeshInstance(this_00,&local_288);
      uVar10 = (ulonglong)local_288.ArrayNum;
      local_248 = local_288.AllocatorInstance.Data + uVar10 * 0x10;
      local_d8._0_8_ = 0;
      local_d8._8_8_ = 0;
      local_b8 = (uint *)0x0;
      local_b0 = 0;
      local_ac = 0x80;
      local_a8 = 0xffffffff;
      local_a4 = 0;
      local_98 = (ForElementType<FSetElementId>)0x0;
      local_90 = 0;
      local_28c = local_288.ArrayNum;
      FVar22.Data = local_288.AllocatorInstance.Data;
      while( true ) {
        pFVar13 = local_248;
        uVar26 = 0;
        local_200 = FVar22.Data;
        if (local_288.ArrayNum != (int)uVar10) {
          local_2a8 = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_2a8);
        }
        if (FVar22.Data == pFVar13) break;
        pTVar11 = TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
                          *)&((this->PipelineMeshesUtilities).field0_0x0.DebugPtr)->
                             MeshInstancesPerMeshInstanceUid,(FString *)FVar22.Data);
        if ((pTVar11 == (TTuple<FString,FInterchangeMeshInstance> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x27b,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar7 = *(uint *)&pTVar11->field_0x58;
        pTVar30 = (TBitArray<FDefaultBitArrayAllocator> *)&pTVar11->field_0x40;
        plVar28 = (longlong *)&pTVar11->field_0x30;
        uStack_22c = 1;
        local_218 = 0;
        uStack_21c = local_218;
        uStack_230 = uVar26;
        if (uVar7 != 0) {
          puVar29 = (uint *)pTVar30;
          if (*(uint **)&pTVar11->field_0x50 != (uint *)0x0) {
            puVar29 = *(uint **)&pTVar11->field_0x50;
          }
          uVar24 = *puVar29;
          local_218 = uVar26;
          while (uVar24 == 0) {
            lVar18 = (longlong)(int)uStack_230;
            local_218 = local_218 + 0x20;
            uStack_230 = uStack_230 + 1;
            uStack_21c = uVar7;
            if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_230)
            goto LAB_14e7aaf7e;
            uVar24 = puVar29[lVar18 + 1];
          }
          uStack_22c = -uVar24 & uVar24;
          uVar10 = (ulonglong)uStack_22c * 2 + 1;
          lVar18 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_1d0 = (int)lVar18;
          uStack_21c = (local_218 - 1) + local_1d0;
          if ((int)uVar7 < (int)uStack_21c) {
            uStack_21c = uVar7;
          }
        }
LAB_14e7aaf7e:
        uVar26 = *(uint *)&pTVar11->field_0x58;
        uStack_214 = local_104;
        iStack_210 = *(int *)&pTVar11->field_0x38 - *(int *)&pTVar11->field_0x64;
        uVar24 = uVar26 & 0xffffffe0;
        TStack_1b8._padding_ = CONCAT44(uStack_22c,uStack_230);
        uStack_220 = 0xffffffff;
        TStack_1b8.CurrentBitIndex = uStack_21c;
        TStack_1b8.UnvisitedBitMask = 0xffffffff;
        iVar21 = (int)uVar26 >> 5;
        TStack_1b8._28_4_ = local_104;
        TStack_1b8.BaseBitIndex = local_218;
        uStack_198 = CONCAT44(uStack_20c,iStack_210);
        local_290 = uVar26;
        local_238 = plVar28;
        local_228 = pTVar30;
        local_1f8 = pTVar30;
        local_1f0 = plVar28;
        local_1c0 = plVar28;
        TStack_1b8.Array = pTVar30;
        if ((((int)uVar26 < 0) || ((int)uVar7 < (int)uVar26)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar7 = *(uint *)&pTVar11->field_0x58;
        if (uVar26 != uVar7) {
          puVar27 = (undefined1 *)pTVar30;
          if (*(undefined1 **)&pTVar11->field_0x50 != (undefined1 *)0x0) {
            puVar27 = *(undefined1 **)&pTVar11->field_0x50;
          }
          uVar26 = -1 << ((byte)uVar26 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar21 * 4);
          while (uVar26 == 0) {
            lVar18 = (longlong)iVar21;
            uVar24 = uVar24 + 0x20;
            iVar21 = iVar21 + 1;
            uVar26 = uVar7;
            local_290 = uVar7;
            if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
            goto LAB_14e7ab091;
            uVar26 = *(uint *)(puVar27 + lVar18 * 4 + 4);
          }
          uVar10 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
          lVar18 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_1d4 = (int)lVar18;
          uVar26 = (uVar24 - 1) + local_1d4;
          local_290 = uVar26;
          if ((int)uVar7 < (int)uVar26) {
            uVar26 = uVar7;
            local_290 = uVar7;
          }
        }
LAB_14e7ab091:
        while( true ) {
          plVar5 = local_1c0;
          if ((int)local_1c0[1] - *(int *)((longlong)local_1c0 + 0x34) != (int)uStack_198) {
            local_2a7 = 0;
            `TSparseArray<TSparseSetElement<TTuple<int,FInterchangeLodSceneNodeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2a7);
          }
          if (((TStack_1b8.CurrentBitIndex == uVar26) && (TStack_1b8.Array == pTVar30)) &&
             (plVar5 == plVar28)) break;
          puVar29 = (uint *)((longlong)TStack_1b8.CurrentBitIndex * 0x20 + *plVar5);
          local_258 = *puVar29;
          if (local_d8._8_4_ != local_a4) {
            FVar19 = (ForElementType<FSetElementId>)local_a0;
            if (local_98 != (ForElementType<FSetElementId>)0x0) {
              FVar19 = local_98;
            }
            uVar26 = *(uint *)((longlong)FVar19 + (ulonglong)(local_90 - 1U & local_258) * 4);
            while (uVar26 != 0xffffffff) {
              puVar12 = (uint *)((longlong)(int)uVar26 * 0x20 + local_d8._0_8_);
              if (*puVar12 == local_258) {
                if (puVar12 != (uint *)0x0) goto LAB_14e7ab16d;
                break;
              }
              uVar26 = puVar12[6];
            }
          }
          local_1c8 = &local_258;
          TSet<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                    ((TSet<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)local_d8,(uint)local_254,
                     (TKeyInitializer<int_const_&> *)(ulonglong)local_258,(bool *)&local_1c8);
          puVar12 = (uint *)((longlong)local_254[0] * 0x20 + local_d8._0_8_);
LAB_14e7ab16d:
          puVar25 = *(undefined8 **)(puVar29 + 2);
          pFVar1 = (ForAnyElementType *)(puVar12 + 2);
          uVar26 = puVar29[4];
          puVar3 = puVar25 + (int)uVar26;
          while( true ) {
            if (puVar29[4] != uVar26) {
              local_2a6 = 0;
              `TCheckedPointerIterator<TObjectPtr<UInterchangeBaseNode_const_>_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_2a6);
            }
            if (puVar25 == puVar3) break;
            pFVar13 = (FScriptContainerElement *)
                      UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)*puVar25,&local_140)
            ;
            if (((pFVar1->Data <= pFVar13) &&
                (pFVar13 < pFVar1->Data + (longlong)(int)puVar12[5] * 0x10)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar7 = puVar12[4];
            if (uVar7 == puVar12[5]) {
              uVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,pFVar1,(int *)(puVar12 + 5));
              puVar12[4] = uVar7;
            }
            puVar12[4] = uVar7 + 1;
            pFVar20 = pFVar1->Data + (longlong)(int)uVar7 * 0x10;
            *(undefined8 *)pFVar20 = 0;
            *(undefined8 *)pFVar20 = *(undefined8 *)pFVar13;
            *(undefined8 *)pFVar13 = 0;
            *(undefined4 *)(pFVar20 + 8) = *(undefined4 *)(pFVar13 + 8);
            *(undefined4 *)(pFVar20 + 0xc) = *(undefined4 *)(pFVar13 + 0xc);
            *(undefined8 *)(pFVar13 + 8) = 0;
            if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_140.Data.AllocatorInstance.Data);
            }
            puVar25 = puVar25 + 1;
          }
          TStack_1b8.UnvisitedBitMask = TStack_1b8.UnvisitedBitMask & ~TStack_1b8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b8);
          plVar28 = local_1f0;
          pTVar30 = local_1f8;
          uVar26 = local_290;
        }
        FVar22.Data = local_200 + 0x10;
        uVar10 = (ulonglong)local_28c;
        this = local_240;
      }
      if (1 < local_d8._8_4_ - local_a4) {
        uVar10 = (ulonglong)local_288.ArrayNum;
        local_248 = local_288.AllocatorInstance.Data + uVar10 * 0x10;
        local_28c = local_288.ArrayNum;
        FVar22.Data = local_288.AllocatorInstance.Data;
LAB_14e7ab2e7:
        while( true ) {
          pFVar13 = local_248;
          uVar26 = 0;
          if (local_288.ArrayNum != (int)uVar10) {
            local_2a5 = 0;
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_2a5);
          }
          this = local_240;
          if (FVar22.Data == pFVar13) goto LAB_14e7ab675;
          pTVar11 = TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FString,FInterchangeMeshInstance>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshInstance,0>,FDefaultSetAllocator>
                            *)&((local_240->PipelineMeshesUtilities).field0_0x0.DebugPtr)->
                               MeshInstancesPerMeshInstanceUid,(FString *)FVar22.Data);
          if ((pTVar11 == (TTuple<FString,FInterchangeMeshInstance> *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x27b,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((*(longlong *)&pTVar11->field_0x20 != 0) ||
             (*(int *)&pTVar11->field_0x38 - *(int *)&pTVar11->field_0x64 != 1)) break;
          piVar23 = (int *)&pTVar11->field_0x68;
          if (*(int **)&pTVar11->field_0x70 != (int *)0x0) {
            piVar23 = *(int **)&pTVar11->field_0x70;
          }
          iVar21 = *piVar23;
          if (iVar21 == -1) break;
          do {
            if (*(int *)((longlong)iVar21 * 0x20 + *(longlong *)&pTVar11->field_0x30) == 0) {
              pFVar14 = TMapBase<int,FInterchangeLodSceneNodeContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>_>
                        ::FindChecked((TMapBase<int,FInterchangeLodSceneNodeContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>_>
                                       *)&pTVar11->field_0x30,0);
              if ((pFVar14->BaseNodes).ArrayNum != 1) goto LAB_14e7ab660;
              pFVar14 = TMapBase<int,FInterchangeLodSceneNodeContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>_>
                        ::FindChecked((TMapBase<int,FInterchangeLodSceneNodeContainer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FInterchangeLodSceneNodeContainer,0>_>
                                       *)&pTVar11->field_0x30,0);
              if (((pFVar14->BaseNodes).ArrayNum < 1) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar7 = local_b0;
              uStack_22c = 1;
              local_218 = 0;
              this_01 = *(UInterchangeBaseNode **)(pFVar14->BaseNodes).AllocatorInstance.Data;
              uStack_21c = local_218;
              uStack_230 = uVar26;
              if (local_b0 == 0) goto LAB_14e7ab490;
              puVar29 = (uint *)(local_d8 + 0x10);
              if (local_b8 != (uint *)0x0) {
                puVar29 = local_b8;
              }
              uVar24 = *puVar29;
              local_218 = uVar26;
              goto joined_r0x00014e7ab44a;
            }
            iVar21 = *(int *)((longlong)iVar21 * 0x20 + 0x18 + *(longlong *)&pTVar11->field_0x30);
          } while (iVar21 != -1);
          FVar22.Data = FVar22.Data + 0x10;
          uVar10 = (ulonglong)local_28c;
        }
        goto LAB_14e7ab660;
      }
LAB_14e7ab675:
      if (local_d8._8_4_ - local_a4 < 1) {
        bVar6 = false;
      }
      else {
        ::FString::FString(&local_160,L"");
        local_268 = CreateStaticMeshFactoryNode
                              (this,(TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                                     *)local_d8,&local_160);
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        pTVar2 = &this->StaticMeshFactoryNodes;
        pFVar13 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar13 <= (FScriptContainerElement *)&local_268) &&
            ((FScriptContainerElement *)&local_268 <
             pFVar13 + (longlong)(this->StaticMeshFactoryNodes).ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar21 = (this->StaticMeshFactoryNodes).ArrayNum;
        piVar23 = &(this->StaticMeshFactoryNodes).ArrayMax;
        if (iVar21 == *piVar23) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar2->AllocatorInstance,piVar23);
        }
        bVar6 = true;
        (this->StaticMeshFactoryNodes).ArrayNum = iVar21 + 1;
        *(UInterchangeStaticMeshFactoryNode **)
         ((pTVar2->AllocatorInstance).Data + (longlong)iVar21 * 8) = local_268;
      }
      local_90 = 0;
      if (local_98 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_d8);
      DestructItems<FString,int>((FString *)local_288.AllocatorInstance.Data,local_288.ArrayNum);
      if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.AllocatorInstance.Data);
      }
      if (bVar6) goto LAB_14e7abbb6;
      local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_278.ArrayNum = 0;
      local_278.ArrayMax = 0;
      UInterchangePipelineMeshesUtilities::GetAllStaticMeshGeometry
                ((this->PipelineMeshesUtilities).field0_0x0.DebugPtr,&local_278);
      iVar21 = local_278.ArrayNum;
      uVar10 = (ulonglong)local_278.ArrayNum;
      local_88.Elements._0_8_ = 0;
      local_88.Elements._32_8_ = 0;
      local_88.Elements._40_4_ = 0;
      local_88.Elements._52_4_ = 0;
      local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_88.HashSize = 0;
      pFVar13 = local_278.AllocatorInstance.Data + uVar10 * 0x10;
      local_88.Elements._8_8_ = 0;
      local_88.Elements._44_4_ = 0x80;
      local_88.Elements._48_4_ = 0xffffffff;
      FVar22.Data = local_278.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar10 != iVar21) {
          local_2a3[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_2a3);
        }
        if (FVar22.Data == pFVar13) break;
        pTVar16 = TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,FInterchangeMeshGeometry>,TDefaultMapHashableKeyFuncs<FString,FInterchangeMeshGeometry,0>,FDefaultSetAllocator>
                          *)&((this->PipelineMeshesUtilities).field0_0x0.DebugPtr)->
                             MeshGeometriesPerMeshUid,(FString *)FVar22.Data);
        if ((pTVar16 == (TTuple<FString,FInterchangeMeshGeometry> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x27b,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar27 = &pTVar16->field_0x10;
        local_254[1] = 0;
        if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
          FVar19 = (ForElementType<FSetElementId>)&local_88.Hash;
          if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar19 = local_88.Hash.SecondaryData;
          }
          iVar8 = *(int *)FVar19;
          while (iVar8 != -1) {
            piVar23 = (int *)((longlong)iVar8 * 0x20 + local_88.Elements._0_8_);
            if (*piVar23 == 0) {
              if (piVar23 != (int *)0x0) goto LAB_14e7ab921;
              break;
            }
            iVar8 = piVar23[6];
          }
        }
        local_1e0 = local_254 + 1;
        TSet<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                  (&local_88,(int)local_254 + 8,(TKeyInitializer<int_const_&> *)0x0,
                   (bool *)&local_1e0);
        piVar23 = (int *)((longlong)local_254[2] * 0x20 + local_88.Elements._0_8_);
LAB_14e7ab921:
        if (((*(undefined1 **)(piVar23 + 2) <= puVar27) &&
            (puVar27 < *(undefined1 **)(piVar23 + 2) + (longlong)piVar23[5] * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = piVar23[4];
        if (iVar8 == piVar23[5]) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)(piVar23 + 2),piVar23 + 5);
        }
        piVar23[4] = iVar8 + 1;
        ::FString::FString((FString *)
                           (((ForAnyElementType *)(piVar23 + 2))->Data + (longlong)iVar8 * 0x10),
                           (FString *)puVar27);
        uVar10 = local_278._8_8_ & 0xffffffff;
        FVar22.Data = FVar22.Data + 0x10;
      }
      if (0 < (int)(local_88.Elements._8_4_ - local_88.Elements._52_4_)) {
        ::FString::FString(&local_150,L"");
        local_260 = CreateStaticMeshFactoryNode
                              (this,(TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                                     *)&local_88,&local_150);
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
        pTVar2 = &this->StaticMeshFactoryNodes;
        pFVar13 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar13 <= (FScriptContainerElement *)&local_260) &&
            ((FScriptContainerElement *)&local_260 <
             pFVar13 + (longlong)(this->StaticMeshFactoryNodes).ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar21 = (this->StaticMeshFactoryNodes).ArrayNum;
        piVar23 = &(this->StaticMeshFactoryNodes).ArrayMax;
        if (iVar21 == *piVar23) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar2->AllocatorInstance,piVar23);
        }
        (this->StaticMeshFactoryNodes).ArrayNum = iVar21 + 1;
        *(UInterchangeStaticMeshFactoryNode **)
         ((pTVar2->AllocatorInstance).Data + (longlong)iVar21 * 8) = local_260;
      }
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      DestructItems<FString,int>((FString *)local_278.AllocatorInstance.Data,local_278.ArrayNum);
      FVar22.Data = local_278.AllocatorInstance.Data;
    }
    if (FVar22.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar22.Data);
    }
  }
LAB_14e7abbb6:
  CreateAssemblyPartDependencies(this);
  return;
joined_r0x00014e7ab44a:
  if (uVar24 != 0) goto LAB_14e7ab46c;
  lVar18 = (longlong)(int)uStack_230;
  local_218 = local_218 + 0x20;
  uStack_230 = uStack_230 + 1;
  uStack_21c = local_b0;
  if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_230)
  goto LAB_14e7ab490;
  uVar24 = (puVar29 + 1)[lVar18];
  goto joined_r0x00014e7ab44a;
LAB_14e7ab46c:
  uStack_22c = -uVar24 & uVar24;
  uVar10 = (ulonglong)uStack_22c * 2 + 1;
  lVar18 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  local_1d8 = (int)lVar18;
  uStack_21c = local_1d8 + -1 + local_218;
  if ((int)local_b0 < (int)uStack_21c) {
    uStack_21c = local_b0;
  }
LAB_14e7ab490:
  local_238 = (longlong *)local_d8;
  uStack_214 = local_e4;
  local_228 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  uVar26 = local_b0 & 0xffffffe0;
  iStack_210 = local_d8._8_4_ - local_a4;
  TStack_188._padding_ = CONCAT44(uStack_22c,uStack_230);
  uStack_220 = 0xffffffff;
  TStack_188.CurrentBitIndex = uStack_21c;
  TStack_188.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)local_b0 >> 5;
  TStack_188._28_4_ = local_e4;
  TStack_188.BaseBitIndex = local_218;
  uStack_168 = CONCAT44(uStack_20c,iStack_210);
  bVar17 = (byte)local_b0;
  local_190 = local_238;
  TStack_188.Array = local_228;
  if (((int)local_b0 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar7 != local_b0) {
    puVar29 = (uint *)(local_d8 + 0x10);
    if (local_b8 != (uint *)0x0) {
      puVar29 = local_b8;
    }
    uVar7 = -1 << (bVar17 & 0x1f) & puVar29[iVar21];
    while (uVar7 == 0) {
      lVar18 = (longlong)iVar21;
      uVar26 = uVar26 + 0x20;
      iVar21 = iVar21 + 1;
      uVar7 = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_14e7ab5b0;
      uVar7 = (puVar29 + 1)[lVar18];
    }
    uVar10 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1e8 = (int)lVar18;
    uVar7 = local_1e8 + -1 + uVar26;
    if ((int)local_b0 < (int)uVar7) {
      uVar7 = local_b0;
    }
  }
LAB_14e7ab5b0:
  while( true ) {
    plVar28 = local_190;
    if ((int)local_190[1] - *(int *)((longlong)local_190 + 0x34) != (int)uStack_168) {
      local_2a4 = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2a4);
    }
    if (((TStack_188.CurrentBitIndex == uVar7) &&
        (TStack_188.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
       (plVar28 == (longlong *)local_d8)) break;
    piVar23 = (int *)(*plVar28 + (longlong)TStack_188.CurrentBitIndex * 0x20);
    if (0 < *piVar23) {
      pFVar15 = UInterchangeBaseNode::GetUniqueID(this_01,local_130);
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(piVar23 + 2),pFVar15);
      if (local_130[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130[0].Data.AllocatorInstance.Data);
      }
    }
    TStack_188.UnvisitedBitMask = TStack_188.UnvisitedBitMask & ~TStack_188._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_188);
  }
LAB_14e7ab660:
  FVar22.Data = FVar22.Data + 0x10;
  uVar10 = (ulonglong)local_28c;
  goto LAB_14e7ab2e7;
}

// FindAndProcessIdenticalStaticMeshLODGroups @ 14e7adc80

void __thiscall
UInterchangeGenericMeshPipeline::FindAndProcessIdenticalStaticMeshLODGroups
          (UInterchangeGenericMeshPipeline *this,UInterchangeBaseNodeContainer *param_1)

{
  UObject *pUVar1;
  UInterchangeBaseNodeContainer **local_res8;
  UInterchangeBaseNodeContainer *local_res10;
  FLODGroupIIHelper **local_res18 [2];
  FLODGroupIIHelper *local_48;
  undefined8 local_40;
  code *local_38;
  undefined8 **local_30;
  UInterchangeBaseNodeContainer **local_28;
  undefined8 **local_20;
  FLODGroupIIHelper **local_18;
  undefined8 **local_10;
  
  local_res10 = param_1;
  pUVar1 = FWeakObjectPtr::Get(&(this->CommonMeshesProperties).WeakPtr);
  if (pUVar1[7].field_0x14 == '\0') {
    local_res8 = &local_res10;
    local_48 = (FLODGroupIIHelper *)0x0;
    local_40 = 0;
    local_res18[0] = &local_48;
    local_28 = &local_res10;
    local_20 = &local_res8;
    local_18 = &local_48;
    local_10 = local_res18;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UInterchangeGenericMeshPipeline::FindAndProcessIdenticalStaticMeshLODGroups'::__l5::<lambda_3>,void,FString_const_&,UInterchangeStaticMeshFactoryNode_*>
               ::Call;
    UInterchangeBaseNodeContainer::IterateNodesOfType<UInterchangeStaticMeshFactoryNode>
              (local_res10,
               (TFunctionRef<void___cdecl(FString_const_&,UInterchangeStaticMeshFactoryNode_*)> *)
               &local_38);
    DestructItems<_UInterchangeGenericMeshPipeline::FindAndProcessIdenticalStaticMeshLODGroups_::__l5::FLODGroupIIHelper,int>
              (local_48,(int)local_40);
    if (local_48 != (FLODGroupIIHelper *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return;
}

// GetMeshesInformationFromTranslatedData @ 14e7b80f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeGenericMeshPipeline::GetMeshesInformationFromTranslatedData
          (UInterchangeGenericMeshPipeline *this,UInterchangeBaseNodeContainer *param_1,
          bool *param_2,bool *param_3,bool *param_4,bool *param_5,bool *param_6,bool *param_7)

{
  ulonglong uVar1;
  UObject *pUVar2;
  undefined1 auStackY_128 [32];
  FString *local_f8;
  undefined8 local_f0;
  UInterchangeBaseNodeContainer *local_e8;
  code *local_e0;
  bool **local_d8;
  UInterchangeBaseNodeContainer **local_d0;
  bool *local_c8;
  FString **local_c0;
  ForAnyElementType *local_b8;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  TBitArray<FDefaultBitArrayAllocator> local_98;
  undefined4 local_78;
  undefined4 local_74;
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (param_1 != (UInterchangeBaseNodeContainer *)0x0) {
    *param_2 = false;
    local_c0 = &local_f8;
    *param_3 = false;
    local_d8 = (bool **)&local_d0;
    *param_4 = false;
    *param_5 = false;
    local_e0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UInterchangeGenericMeshPipeline::GetMeshesInformationFromTranslatedData'::__l6::<lambda_1>,void,FString_const_&,UInterchangeMeshNode_*>
               ::Call;
    local_c8 = param_5;
    *param_6 = false;
    *param_7 = false;
    local_f8 = (FString *)0x0;
    local_f0 = 0;
    local_d0 = (UInterchangeBaseNodeContainer **)param_4;
    local_e8 = param_1;
    UInterchangeBaseNodeContainer::IterateNodesOfType<UInterchangeMeshNode>
              (param_1,(TFunctionRef<void___cdecl(FString_const_&,UInterchangeMeshNode_*)> *)
                       &local_e0);
    local_a8.Data = (FScriptContainerElement *)0x0;
    *param_3 = (int)local_f0 != 0;
    local_d0 = &local_e8;
    local_c0 = &local_f8;
    local_b8 = &local_a8;
    local_d8 = (bool **)&local_d0;
    local_e0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UInterchangeGenericMeshPipeline::GetMeshesInformationFromTranslatedData'::__l6::<lambda_2>,bool,FString_const_&,UInterchangeTransformAnimationTrackNode_*>
               ::Call;
    local_a0 = 0;
    local_98.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_98.NumBits = 0;
    local_98.MaxBits = 0x80;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_c8 = param_6;
    UInterchangeBaseNodeContainer::
    BreakableIterateNodesOfType<UInterchangeTransformAnimationTrackNode>
              (local_e8,(TFunctionRef<bool___cdecl(FString_const_&,UInterchangeTransformAnimationTrackNode_*)>
                         *)&local_e0);
    local_60 = 0;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    uVar1 = local_a0 >> 0x20;
    local_a0 = local_a0 & 0xffffffff00000000;
    if ((int)uVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&local_a8,0,(int *)((longlong)&local_a0 + 4));
    }
    local_74 = 0;
    local_98.NumBits = 0;
    local_78 = 0xffffffff;
    if (0x80 < (uint)local_98.MaxBits) {
      local_98.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_98,0);
    }
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
    }
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
    DestructItems<FString,int>(local_f8,(int)local_f0);
    if (local_f8 != (FString *)0x0) {
      FMemory::Free(local_f8);
    }
    pUVar2 = FWeakObjectPtr::Get(&(this->CommonMeshesProperties).WeakPtr);
    if (pUVar2[7].field_0x12 != '\0') {
      pUVar2 = FWeakObjectPtr::Get(&(this->CommonMeshesProperties).WeakPtr);
      if (pUVar2[7].field_0x10 == '\0') {
        if (*param_4 == false) {
          if (*param_3 != false) {
            *param_2 = *param_6;
          }
        }
        else {
          *param_7 = true;
        }
      }
    }
  }
  return;
}

// GetPipelineCategory @ 14e7b9200

FString * __cdecl
UInterchangeGenericMeshPipeline::GetPipelineCategory
          (FString *__return_storage_ptr__,UClass *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  UClass *pUVar5;
  wchar_t *pwVar6;
  
  if (param_1 == (UClass *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3128373673539403748>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericMeshPipeline.cpp"
                       ,0x1c,"AssetClass");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    pUVar5 = Z_Construct_UClass_UStaticMesh_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_14e7b92ed;
    }
    pUVar5 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pwVar6 = L"Skeletal Meshes";
        goto LAB_14e7b92f4;
      }
    }
    pUVar5 = Z_Construct_UClass_UGeometryCache_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      pwVar6 = L"Geometry Caches";
      if (bVar3) goto LAB_14e7b92f4;
    }
  }
LAB_14e7b92ed:
  pwVar6 = L"Static Meshes";
LAB_14e7b92f4:
  ::FString::FString(__return_storage_ptr__,pwVar6);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14e7b9b00

UClass * __cdecl UInterchangeGenericMeshPipeline::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGenericMeshPipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGenericMeshPipeline",
               &Z_Registration_Info_UClass_UInterchangeGenericMeshPipeline.InnerSingleton,
               StaticRegisterNativesUInterchangeGenericMeshPipeline,0x298,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeGenericMeshPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGenericMeshPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGenericMeshPipeline.InnerSingleton;
}

// ImplementUseSourceNameForAssetOptionSkeletalMesh @ 14e7c5aa0

void __thiscall
UInterchangeGenericMeshPipeline::ImplementUseSourceNameForAssetOptionSkeletalMesh
          (UInterchangeGenericMeshPipeline *this,int param_1,bool param_2,FString *param_3)

{
  void *pvVar1;
  FAttributeStorage *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UInterchangeMeshFactoryNode *this_01;
  FString *pFVar8;
  UInterchangeSkeletalMeshLodDataNode *this_02;
  UObject *pUVar9;
  UInterchangeFactoryBaseNode *pUVar10;
  EAttributeStorageResult EVar11;
  int iVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  uint local_res8 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_148;
  FString local_138;
  TArray<FString,TSizedDefaultAllocator<32>_> local_128;
  TArray<FString,TSizedDefaultAllocator<32>_> local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  TAttributeHandle<FString,void> local_c8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  void *local_60 [2];
  FString local_50;
  FString local_40;
  
  local_res8[0] = 0;
  bVar4 = FWeakObjectPtr::IsValid(&(this->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommonSkeletalMeshesAndAnimationsProperties.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericSkeletalMeshPipeline.cpp"
                         ,0x318,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar7 = Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_NoRegister();
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  UInterchangeBaseNodeContainer::GetNodes(this->BaseNodeContainer,pUVar7,&local_128);
  iVar12 = 0;
  if (local_128.ArrayNum != 0) {
    if (((param_2) || (1 < (param_3->Data).ArrayNum)) && (param_1 == 1)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((local_128.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Data.ArrayNum = *(int *)(local_128.AllocatorInstance.Data + 8);
    lVar13 = (longlong)local_138.Data.ArrayNum;
    pvVar1 = *(void **)local_128.AllocatorInstance.Data;
    if (local_138.Data.ArrayNum == 0) {
      local_138.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_138.Data.ArrayNum,0,(ForAnyElementType *)&local_138,
                 local_138.Data.ArrayNum,&local_138.Data.ArrayMax);
      memcpy(local_138.Data.AllocatorInstance.Data,pvVar1,lVar13 * 2);
    }
    this_01 = (UInterchangeMeshFactoryNode *)
              UInterchangeBaseNodeContainer::GetFactoryNode(this->BaseNodeContainer,&local_138);
    if (this_01 != (UInterchangeMeshFactoryNode *)0x0) {
      pUVar7 = Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_NoRegister();
      iVar12 = (int)pUVar7->_padding_;
      if ((iVar12 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
          &pUVar7->_padding_)) {
        UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)this_01,&local_d8);
        if (bVar4) {
          if ((param_3->Data).ArrayNum < 2) {
            if (((this->SourceDatas).ArrayNum < 1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            bVar3 = true;
            bVar5 = true;
            bVar4 = false;
            lVar13 = *(longlong *)(this->SourceDatas).AllocatorInstance.Data;
            local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_108.Data.ArrayNum = *(int *)(lVar13 + 0x30);
            lVar15 = (longlong)local_108.Data.ArrayNum;
            pvVar1 = *(void **)(lVar13 + 0x28);
            if (local_108.Data.ArrayNum == 0) {
              local_108.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_108.Data.ArrayNum,0,(ForAnyElementType *)&local_108,
                         local_108.Data.ArrayNum,&local_108.Data.ArrayMax);
              memcpy(local_108.Data.AllocatorInstance.Data,pvVar1,lVar15 * 2);
            }
            pFVar8 = FPaths::GetBaseFilename(&local_70,&local_108,true);
          }
          else {
            bVar3 = false;
            bVar5 = false;
            bVar4 = true;
            pFVar8 = ::FString::FString(&local_80,param_3);
          }
          iVar12 = (pFVar8->Data).ArrayNum;
          iVar6 = iVar12 + -1;
          if (iVar12 == 0) {
            iVar6 = 0;
          }
          ::FString::AssignRange(&local_d8,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar6);
          if ((bVar4) && (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          if ((bVar5) && (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          if ((bVar3) && (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          UInterchangeBaseNode::SetDisplayLabel((UInterchangeBaseNode *)this_01,&local_d8);
        }
        local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.ArrayNum = 0;
        local_118.ArrayMax = 0;
        UInterchangeMeshFactoryNode::GetLodDataUniqueIds(this_01,&local_118);
        if ((0 < local_118.ArrayNum) &&
           (this_02 = (UInterchangeSkeletalMeshLodDataNode *)
                      UInterchangeBaseNodeContainer::GetFactoryNode
                                (this->BaseNodeContainer,(FString *)local_118.AllocatorInstance.Data
                                ), this_02 != (UInterchangeSkeletalMeshLodDataNode *)0x0)) {
          pUVar7 = Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_NoRegister();
          iVar12 = (int)pUVar7->_padding_;
          if ((iVar12 <= *(int *)(this_02->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
              &pUVar7->_padding_)) {
            pUVar9 = FWeakObjectPtr::Get(&(this->CommonSkeletalMeshesAndAnimationsProperties).
                                          WeakPtr);
            bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar9[7].field_0x14);
            if (!bVar4) {
              local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_e8.Data.ArrayNum = 0;
              local_e8.Data.ArrayMax = 0;
              UInterchangeSkeletalMeshLodDataNode::GetCustomSkeletonUid(this_02,&local_e8);
              pUVar10 = UInterchangeBaseNodeContainer::GetFactoryNode
                                  (this->BaseNodeContainer,&local_e8);
              if (pUVar10 != (UInterchangeFactoryBaseNode *)0x0) {
                pUVar7 = Z_Construct_UClass_UInterchangeSkeletonFactoryNode_NoRegister();
                iVar12 = (int)pUVar7->_padding_;
                if ((iVar12 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
                    &pUVar7->_padding_)) {
                  ::FString::ConcatFC(&local_b0,&local_d8,L"_Skeleton");
                  UInterchangeBaseNode::SetDisplayLabel((UInterchangeBaseNode *)pUVar10,&local_b0);
                  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
                  }
                }
              }
              if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e8.Data.AllocatorInstance.Data);
              }
            }
          }
        }
        pUVar7 = Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode_NoRegister();
        local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_148.ArrayNum = 0;
        local_148.ArrayMax = 0;
        UInterchangeBaseNodeContainer::GetNodes(this->BaseNodeContainer,pUVar7,&local_148);
        iVar12 = local_148.ArrayNum;
        pFVar17 = local_148.AllocatorInstance.Data + (longlong)local_148.ArrayNum * 0x10;
        FVar16.Data = local_148.AllocatorInstance.Data;
        while( true ) {
          if (local_148.ArrayNum != iVar12) {
            local_res8[0] = local_res8[0] & 0xffffff00;
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (FVar16.Data == pFVar17) break;
          pUVar10 = UInterchangeBaseNodeContainer::GetFactoryNode
                              (this->BaseNodeContainer,(FString *)FVar16.Data);
          if (pUVar10 == (UInterchangeFactoryBaseNode *)0x0) {
LAB_14e7c60e2:
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<8235178183205323598>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericSkeletalMeshPipeline.cpp"
                               ,0x34e,"PhysicsAssetFactoryNode");
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          else {
            pUVar7 = Z_Construct_UClass_UInterchangePhysicsAssetFactoryNode_NoRegister();
            iVar6 = (int)pUVar7->_padding_;
            if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar6) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
                &pUVar7->_padding_)) goto LAB_14e7c60e2;
            local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_f8.Data.ArrayNum = 0;
            local_f8.Data.ArrayMax = 0;
            pFVar8 = (FString *)(**(code **)(pUVar10->_padding_ + 0x2b0))(pUVar10,local_60);
            ::FString::ConcatFC(&local_a0,pFVar8,L".GetSkeletalMeshUid");
            if (local_60[0] != (void *)0x0) {
              FMemory::Free(local_60[0]);
            }
            if ((pUVar10->_padding_ == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x44d,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            this_00 = (FAttributeStorage *)pUVar10->_padding_;
            bVar4 = UE::Interchange::FAttributeStorage::ContainAttribute
                              (this_00,(FAttributeKey *)&pUVar10[1]._padding_);
            if (bVar4) {
              UE::Interchange::FAttributeStorage::GetAttributeHandle<FString,void>
                        (this_00,&local_c8,(FAttributeKey *)&pUVar10[1]._padding_);
              bVar4 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::IsValid
                                (&local_c8);
              if (bVar4) {
                EVar11 = UE::Interchange::FAttributeStorage::TAttributeHandle<FString,void>::Get
                                   (&local_c8,&local_f8);
                if ((EVar11 & Operation_Success) != None) {
                  if (local_c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                     ) {
                    FMemory::Free(local_c8.Key.Key.Data.AllocatorInstance.Data);
                  }
                  bVar4 = true;
                  goto LAB_14e7c6050;
                }
                ::FString::FString(&local_50,(FString *)&pUVar10[1]._padding_);
                pFVar8 = ::FString::FString(&local_40,&local_a0);
                UE::Interchange::LogAttributeStorageErrors(EVar11,pFVar8,(FAttributeKey *)&local_50)
                ;
              }
              if (local_c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.Key.Key.Data.AllocatorInstance.Data);
              }
              bVar4 = false;
            }
            else {
              bVar4 = false;
            }
LAB_14e7c6050:
            if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            }
            FVar14.Data = local_f8.Data.AllocatorInstance.Data;
            if (bVar4) {
              if (local_f8.Data.ArrayNum == local_138.Data.ArrayNum) {
                if (1 < local_f8.Data.ArrayNum) {
                  iVar6 = wcscmp((wchar_t *)local_f8.Data.AllocatorInstance.Data,
                                 (wchar_t *)local_138.Data.AllocatorInstance.Data);
                  bVar4 = iVar6 == 0;
                  goto LAB_14e7c608c;
                }
              }
              else {
                bVar4 = local_f8.Data.ArrayNum + local_138.Data.ArrayNum == 1;
LAB_14e7c608c:
                if (!bVar4) goto LAB_14e7c60c5;
              }
              ::FString::ConcatFC(&local_90,&local_d8,L"_PhysicsAsset");
              UInterchangeBaseNode::SetDisplayLabel((UInterchangeBaseNode *)pUVar10,&local_90);
              FVar14.Data = local_f8.Data.AllocatorInstance.Data;
              if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_90.Data.AllocatorInstance.Data);
                FVar14.Data = local_f8.Data.AllocatorInstance.Data;
              }
            }
LAB_14e7c60c5:
            if (FVar14.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar14.Data);
            }
          }
          FVar16.Data = FVar16.Data + 0x10;
        }
        DestructItems<FString,int>((FString *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
        if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.AllocatorInstance.Data);
        }
        DestructItems<FString,int>((FString *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
        if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.AllocatorInstance.Data);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    iVar12 = local_128.ArrayNum;
  }
  DestructItems<FString,int>((FString *)local_128.AllocatorInstance.Data,iVar12);
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  return;
}

// IsImpactingAnyMeshesRecursive @ 14e7c6300

bool __cdecl
UInterchangeGenericMeshPipeline::IsImpactingAnyMeshesRecursive
          (UInterchangeSceneNode *param_1,UInterchangeBaseNodeContainer *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          TMap<UInterchangeSceneNode_const_*,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInterchangeSceneNode_const_*,bool,0>_>
          *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  UInterchangeSceneNode *pUVar5;
  UClass *pUVar6;
  undefined1 *puVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  UInterchangeSceneNode *local_res8;
  undefined1 local_res20 [8];
  int local_78 [2];
  FString local_70;
  TArray<FString,TSizedDefaultAllocator<32>_> local_60;
  undefined1 local_50 [24];
  
  local_res20[0] = 0;
  uVar12 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  uVar12 = uVar12 >> 0x10 ^ uVar12;
  local_res8 = param_1;
  if (*(int *)&param_4->field_0x8 != *(int *)&param_4->field_0x34) {
    puVar7 = *(undefined1 **)&param_4->field_0x40;
    if (*(undefined1 **)&param_4->field_0x40 == (undefined1 *)0x0) {
      puVar7 = &param_4->field_0x38;
    }
    iVar3 = *(int *)(puVar7 + (ulonglong)(*(int *)&param_4->field_0x48 - 1U & uVar12) * 4);
    if (iVar3 != -1) {
      lVar9 = *(longlong *)param_4;
      do {
        if (*(UInterchangeSceneNode **)(lVar9 + (longlong)iVar3 * 0x18) == param_1) {
          if ((iVar3 != -1) && (lVar9 = lVar9 + (longlong)iVar3 * 0x18, lVar9 != 0))
          goto LAB_14e7c63fb;
          break;
        }
        iVar3 = *(int *)(lVar9 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  local_50._0_8_ = &local_res8;
  local_50._8_8_ = local_res20;
  TSet<TTuple<UInterchangeSceneNode_const_*,bool>,TDefaultMapHashableKeyFuncs<UInterchangeSceneNode_const_*,bool,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<UInterchangeSceneNode_const_*_const_&,bool_&&>_>
            ((TSet<TTuple<UInterchangeSceneNode_const_*,bool>,TDefaultMapHashableKeyFuncs<UInterchangeSceneNode_const_*,bool,0>,FDefaultSetAllocator>
              *)param_4,(uint)local_78,
             (TPairInitializer<UInterchangeSceneNode_const_*_const_&,bool_&&> *)(ulonglong)uVar12,
             (bool *)local_50);
  lVar9 = *(longlong *)param_4 + (longlong)local_78[0] * 0x18;
LAB_14e7c63fb:
  if (*(char *)(lVar9 + 8) != '\0') {
    return (bool)*(char *)(lVar9 + 8);
  }
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Data.ArrayNum = 0;
  local_70.Data.ArrayMax = 0;
  bVar2 = UInterchangeSceneNode::GetCustomAssetInstanceUid(local_res8,&local_70);
  if (bVar2) {
    pFVar10 = (param_3->AllocatorInstance).Data;
    pFVar11 = pFVar10 + (longlong)param_3->ArrayNum * 0x10;
    if (pFVar10 != pFVar11) {
      iVar3 = local_70.Data.ArrayNum;
      do {
        iVar1 = *(int *)(pFVar10 + 8);
        if (iVar1 == iVar3) {
          if (1 < iVar1) {
            iVar3 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)pFVar10,(wchar_t *)local_70.Data.AllocatorInstance.Data)
            ;
            bVar2 = iVar3 == 0;
            iVar3 = local_70.Data.ArrayNum;
            goto LAB_14e7c6468;
          }
LAB_14e7c6525:
          *(undefined1 *)(lVar9 + 8) = 1;
          bVar2 = true;
          goto LAB_14e7c6552;
        }
        bVar2 = iVar1 + iVar3 == 1;
LAB_14e7c6468:
        if (bVar2) goto LAB_14e7c6525;
        pFVar10 = pFVar10 + 0x10;
      } while (pFVar10 != pFVar11);
    }
  }
  pFVar4 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)local_res8,(FString *)local_50)
  ;
  UInterchangeBaseNodeContainer::GetNodeChildrenUids(param_2,&local_60,pFVar4);
  if ((FScriptContainerElement *)local_50._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_50._0_8_);
  }
  iVar3 = local_60.ArrayNum;
  pFVar10 = local_60.AllocatorInstance.Data + (longlong)local_60.ArrayNum * 0x10;
  FVar8.Data = local_60.AllocatorInstance.Data;
  while( true ) {
    if (local_60.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (FVar8.Data == pFVar10) break;
    pUVar5 = (UInterchangeSceneNode *)
             UInterchangeBaseNodeContainer::GetNode(param_2,(FString *)FVar8.Data);
    if (pUVar5 != (UInterchangeSceneNode *)0x0) {
      pUVar6 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if (((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar6->_padding_)) &&
         (bVar2 = IsImpactingAnyMeshesRecursive(pUVar5,param_2,param_3,param_4), bVar2)) {
        bVar2 = true;
LAB_14e7c6533:
        DestructItems<FString,int>((FString *)local_60.AllocatorInstance.Data,local_60.ArrayNum);
        if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.AllocatorInstance.Data);
        }
LAB_14e7c6552:
        if (local_70.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return bVar2;
        }
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
        return bVar2;
      }
    }
    FVar8.Data = FVar8.Data + 0x10;
  }
  bVar2 = false;
  goto LAB_14e7c6533;
}

// MakeMeshFactoryNodeUidAndDisplayLabel @ 14e7c99a0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UInterchangeGenericMeshPipeline::MakeMeshFactoryNodeUidAndDisplayLabel
          (UInterchangeGenericMeshPipeline *this,
          TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
          *param_1,int param_2,FString *param_3,FString *param_4,FString *param_5)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  UInterchangeSceneNode *pUVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  UInterchangeSceneNode *pUVar11;
  FString *pFVar12;
  UInterchangeSceneNode *this_00;
  FString *pFVar13;
  UInterchangeBaseNode *pUVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  UInterchangeSceneNode *pUVar21;
  uint uVar22;
  bool local_118;
  bool local_117 [7];
  FString local_110;
  FString local_100;
  FString *local_f0;
  FString *local_e8;
  FString local_e0;
  TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  FString *local_98;
  FString *local_90;
  TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FString local_58;
  FString local_48;
  
  if ((param_2 < 0) || (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 <= param_2)) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6823813803315036690>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericStaticMeshPipeline.cpp"
                       ,0x212,"LodIndex >= 0 && MeshUidsPerLodIndex.Num() > LodIndex");
    if (!bVar6) {
      return false;
    }
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  local_e8 = param_4;
  local_90 = param_4;
  local_f0 = param_3;
  local_98 = param_3;
  if ((1 < (param_5->Data).ArrayNum) &&
     (pUVar8 = (UInterchangeSceneNode *)
               UInterchangeBaseNodeContainer::GetNode(this->BaseNodeContainer,param_5),
     pUVar8 != (UInterchangeSceneNode *)0x0)) {
    pUVar9 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
    iVar17 = (int)pUVar9->_padding_;
    if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar17) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar17 * 8)
        != &pUVar9->_padding_)) {
      pUVar9 = Z_Construct_UClass_UInterchangeMeshLODContainerNode_NoRegister();
      iVar17 = (int)pUVar9->_padding_;
      if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar17) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
          &pUVar9->_padding_)) {
        pUVar9 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
        iVar17 = (int)pUVar9->_padding_;
        if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar17) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
            &pUVar9->_padding_)) goto LAB_14e7c9b8f;
      }
      `UInterchangeGenericMeshPipeline::MakeMeshFactoryNodeUidAndDisplayLabel'::__l2::<lambda_1>::
      operator()(&local_f0,(UInterchangeBaseNode *)pUVar8);
      return true;
    }
    local_118 = false;
    `UInterchangeGenericMeshPipeline::MakeMeshFactoryNodeUidAndDisplayLabel'::__l2::<lambda_2>::
    operator()(&local_98,pUVar8,&local_118);
    pUVar10 = FWeakObjectPtr::Get(&(this->CommonMeshesProperties).WeakPtr);
    if (pUVar10[7].field_0x14 != '\0') {
      return true;
    }
    if (local_118 != false) {
      return true;
    }
    local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.Data.ArrayNum = 0;
    local_110.Data.ArrayMax = 0;
    do {
      bVar6 = UInterchangeSceneNode::GetCustomAssetInstanceUid(pUVar8,&local_110);
      if (!bVar6) break;
      pUVar11 = (UInterchangeSceneNode *)
                UInterchangeBaseNodeContainer::GetNode(this->BaseNodeContainer,&local_110);
      if (pUVar11 == (UInterchangeSceneNode *)0x0) {
LAB_14e7c9b47:
        pUVar8 = (UInterchangeSceneNode *)0x0;
      }
      else {
        pUVar9 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
        iVar17 = (int)pUVar9->_padding_;
        if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar17) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar17 * 8) !=
            &pUVar9->_padding_)) goto LAB_14e7c9b47;
        pFVar12 = UE::Interchange::FSceneNodeStaticData::GetLodGroupSpecializeTypeString();
        bVar6 = UInterchangeSceneNode::IsSpecializedTypeContains(pUVar11,pFVar12);
        pUVar8 = pUVar11;
        if (bVar6) {
          ::FString::ConcatCF(&local_58,L"\\MeshLODGroupInstance\\",param_5);
          ::FString::operator=(param_3,&local_58);
          FVar15.Data = local_110.Data.AllocatorInstance.Data;
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
            FVar15.Data = local_110.Data.AllocatorInstance.Data;
          }
          goto LAB_14e7ca046;
        }
      }
      if (pUVar11 != (UInterchangeSceneNode *)0x0) {
        pUVar9 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
        iVar17 = (int)pUVar9->_padding_;
        if ((iVar17 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar17 * 8) ==
            &pUVar9->_padding_)) {
          `UInterchangeGenericMeshPipeline::MakeMeshFactoryNodeUidAndDisplayLabel'::__l2::<lambda_1>
          ::operator()(&local_f0,(UInterchangeBaseNode *)pUVar11);
          FVar15.Data = local_110.Data.AllocatorInstance.Data;
          goto LAB_14e7ca046;
        }
      }
    } while (pUVar8 != (UInterchangeSceneNode *)0x0);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
  }
LAB_14e7c9b8f:
  iVar17 = *(int *)&param_1->field_0x28;
  local_c0 = &param_1->field_0x10;
  iStack_c8 = 0;
  local_b0 = 0;
  uStack_c4 = 1;
  iStack_b4 = 0;
  if (iVar17 != 0) {
    puVar20 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar20 = (uint *)local_c0;
    }
    uVar18 = *puVar20;
    while (uVar18 == 0) {
      iStack_c8 = iStack_c8 + 1;
      local_b0 = local_b0 + 0x20;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_14e7c9c12;
      uVar18 = puVar20[iStack_c8];
    }
    uStack_c4 = ~(uVar18 - 1) & uVar18;
    uVar1 = (ulonglong)uStack_c4 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_a0 = (int)lVar3;
    iStack_b4 = local_a0 + -1 + local_b0;
    if (iVar17 < iStack_b4) {
LAB_14e7c9c12:
      iStack_b4 = iVar17;
    }
  }
  uVar18 = *(uint *)&param_1->field_0x28;
  uVar22 = uVar18 & 0xffffffe0;
  iStack_a8 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_b8 = 0xffffffff;
  TStack_80.CurrentBitIndex = iStack_b4;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_c4,iStack_c8);
  iVar17 = (int)uVar18 >> 5;
  TStack_80._28_4_ = iStack_b4;
  TStack_80.BaseBitIndex = local_b0;
  uStack_60 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = param_1;
  iStack_ac = iStack_b4;
  local_88 = param_1;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
  if ((((int)uVar18 < 0) || (*(int *)&param_1->field_0x28 < (int)uVar18)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  uVar2 = *(uint *)&param_1->field_0x28;
  if (uVar18 != uVar2) {
    puVar19 = &param_1->field_0x10;
    if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
      puVar19 = *(undefined1 **)&param_1->field_0x20;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar18 == 0) {
      iVar17 = iVar17 + 1;
      uVar22 = uVar22 + 0x20;
      uVar18 = uVar2;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar17) goto LAB_14e7c9d10;
      uVar18 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar1 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar18 = (int)lVar3 + -1 + uVar22;
    if ((int)uVar2 < (int)uVar18) {
      uVar18 = uVar2;
    }
  }
LAB_14e7c9d10:
  while( true ) {
    pTVar5 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      local_117[1] = false;
      `TSparseArray<TSparseSetElement<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_117 + 1);
    }
    if (((TStack_80.CurrentBitIndex == uVar18) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10)) &&
       (pTVar5 == param_1)) {
      return false;
    }
    lVar3 = *(longlong *)pTVar5;
    lVar16 = (longlong)TStack_80.CurrentBitIndex * 0x20;
    if (param_2 == *(int *)(lVar16 + lVar3)) break;
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  if (*(int *)(lVar16 + 0x10 + lVar3) < 1) {
    return false;
  }
  pFVar12 = *(FString **)(lVar16 + 8 + lVar3);
  pUVar8 = (UInterchangeSceneNode *)
           UInterchangeBaseNodeContainer::GetNode(this->BaseNodeContainer,pFVar12);
  if (pUVar8 != (UInterchangeSceneNode *)0x0) {
    pUVar9 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
    iVar17 = (int)pUVar9->_padding_;
    if ((iVar17 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar17 * 8)
        == &pUVar9->_padding_)) {
      `UInterchangeGenericMeshPipeline::MakeMeshFactoryNodeUidAndDisplayLabel'::__l2::<lambda_1>::
      operator()(&local_f0,(UInterchangeBaseNode *)pUVar8);
      return true;
    }
  }
  if (pUVar8 == (UInterchangeSceneNode *)0x0) {
    return false;
  }
  pUVar9 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
  iVar17 = (int)pUVar9->_padding_;
  if ((iVar17 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar17 * 8)
      == &pUVar9->_padding_)) {
    local_117[0] = false;
    `UInterchangeGenericMeshPipeline::MakeMeshFactoryNodeUidAndDisplayLabel'::__l2::<lambda_2>::
    operator()(&local_98,pUVar8,local_117);
    pUVar10 = FWeakObjectPtr::Get(&(this->CommonMeshesProperties).WeakPtr);
    if (pUVar10[7].field_0x14 != '\0') {
      return true;
    }
    if (local_117[0] != false) {
      return true;
    }
    pUVar21 = (UInterchangeSceneNode *)0x0;
    local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.Data.ArrayNum = 0;
    local_100.Data.ArrayMax = 0;
    pUVar11 = pUVar8;
    do {
      bVar6 = UInterchangeSceneNode::GetCustomAssetInstanceUid(pUVar11,&local_100);
      if (!bVar6) break;
      this_00 = (UInterchangeSceneNode *)
                UInterchangeBaseNodeContainer::GetNode(this->BaseNodeContainer,&local_100);
      pUVar11 = pUVar21;
      if (this_00 != (UInterchangeSceneNode *)0x0) {
        pUVar9 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
        iVar17 = (int)pUVar9->_padding_;
        if ((iVar17 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar17 * 8) ==
            &pUVar9->_padding_)) {
          pFVar13 = UE::Interchange::FSceneNodeStaticData::GetLodGroupSpecializeTypeString();
          bVar6 = UInterchangeSceneNode::IsSpecializedTypeContains(this_00,pFVar13);
          pUVar11 = this_00;
          if (bVar6) {
            ::FString::ConcatCF(&local_48,L"\\MeshLODGroupInstance\\",pFVar12);
            ::FString::operator=(param_3,&local_48);
            FVar15.Data = local_100.Data.AllocatorInstance.Data;
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
              FVar15.Data = local_100.Data.AllocatorInstance.Data;
            }
            goto LAB_14e7ca046;
          }
        }
      }
      if (this_00 != (UInterchangeSceneNode *)0x0) {
        pUVar9 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
        iVar17 = (int)pUVar9->_padding_;
        if ((iVar17 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar17 * 8) ==
            &pUVar9->_padding_)) {
          `UInterchangeGenericMeshPipeline::MakeMeshFactoryNodeUidAndDisplayLabel'::__l2::<lambda_1>
          ::operator()(&local_f0,(UInterchangeBaseNode *)this_00);
          FVar15.Data = local_100.Data.AllocatorInstance.Data;
          goto LAB_14e7ca046;
        }
      }
    } while (pUVar11 != (UInterchangeSceneNode *)0x0);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  }
  pUVar9 = Z_Construct_UClass_UInterchangeInstancedStaticMeshComponentNode_NoRegister();
  iVar17 = (int)pUVar9->_padding_;
  if (*(int *)(pUVar8->_padding_ + 0x38) < iVar17) {
    return false;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar17 * 8)
      != &pUVar9->_padding_) {
    return false;
  }
  local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.Data.ArrayNum = 0;
  local_e0.Data.ArrayMax = 0;
  bVar6 = UInterchangeInstancedStaticMeshComponentNode::GetCustomInstancedAssetUid
                    ((UInterchangeInstancedStaticMeshComponentNode *)pUVar8,&local_e0);
  if ((!bVar6) ||
     (pUVar14 = UInterchangeBaseNodeContainer::GetNode(this->BaseNodeContainer,&local_e0),
     pUVar14 == (UInterchangeBaseNode *)0x0)) {
    if (local_e0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return false;
    }
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    return false;
  }
  `UInterchangeGenericMeshPipeline::MakeMeshFactoryNodeUidAndDisplayLabel'::__l2::<lambda_1>::
  operator()(&local_f0,pUVar14);
  FVar15.Data = local_e0.Data.AllocatorInstance.Data;
LAB_14e7ca046:
  if (FVar15.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar15.Data);
  }
  return true;
}

// PostImportPhysicsAssetImport @ 14e7d3710

void __thiscall
UInterchangeGenericMeshPipeline::PostImportPhysicsAssetImport
          (UInterchangeGenericMeshPipeline *this,UObject *param_1,
          UInterchangeFactoryBaseNode *param_2)

{
  bool bVar1;
  FLLMScope local_res20 [2];
  FMemScope local_18 [2];
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId731,
               "UInterchangeGenericMeshPipeline::PostImportPhysicsAssetImport",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericSkeletalMeshPipeline.cpp"
               ,0x2db);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId731);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name732,L"Interchange");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res20,LLMScope_Name732,false,None,Default,true);
  FMemScope::FMemScope(local_18,&LLMScope_Name732,true);
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res20);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PostImportSkeletalMesh @ 14e7d3820

void __thiscall
UInterchangeGenericMeshPipeline::PostImportSkeletalMesh
          (UInterchangeGenericMeshPipeline *this,UObject *param_1,
          UInterchangeFactoryBaseNode *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  USkeleton *this_00;
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CommonSkeletalMeshesAndAnimationsProperties.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericSkeletalMeshPipeline.cpp"
                       ,0x2c3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->BaseNodeContainer != (UInterchangeBaseNodeContainer *)0x0) &&
     (param_1 != (UObject *)0x0)) {
    pUVar4 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_ && (this->SkeletalMeshImportContentType != Geometry)) &&
        (this->bUpdateSkeletonReferencePose != false)))) {
      pUVar5 = FWeakObjectPtr::Get(&(this->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr);
      bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar5[7].field_0x14);
      if (bVar3) {
        pUVar5 = FWeakObjectPtr::Get(&(this->CommonSkeletalMeshesAndAnimationsProperties).WeakPtr);
        pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5[7].field_0x14);
        pUVar6 = (UObject *)(**(code **)(*(longlong *)param_1 + 0x408))(param_1);
        if (pUVar6 == pUVar5) {
          this_00 = (USkeleton *)(**(code **)(*(longlong *)param_1 + 0x408))(param_1);
          USkeleton::UpdateReferencePoseFromMesh(this_00,(USkinnedAsset *)param_1);
        }
      }
    }
  }
  return;
}

// PostLoad @ 14e7d3950

void __thiscall UInterchangeGenericMeshPipeline::PostLoad(UInterchangeGenericMeshPipeline *this)

{
  UObject::PostLoad((UObject *)this);
  if (this->bImportCollision_DEPRECATED == false) {
    this->bCollision = false;
  }
  return;
}

// PreDialogCleanup @ 14e7d3b90

void __thiscall
UInterchangeGenericMeshPipeline::PreDialogCleanup
          (UInterchangeGenericMeshPipeline *this,FName param_1)

{
  FWeakObjectPtr local_res8 [2];
  undefined8 local_res18 [2];
  
  if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
    local_res8[0].ObjectIndex = 0;
    local_res8[0].ObjectSerialNumber = 0;
    local_res18[0] = 0;
    FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
    (this->PhysicsAsset).WeakPtr = local_res8[0];
  }
  return;
}

// SetReimportSourceIndex @ 14e7df850

void __thiscall
UInterchangeGenericMeshPipeline::SetReimportSourceIndex
          (UInterchangeGenericMeshPipeline *this,UClass *param_1,int param_2)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_USkeletalMesh_NoRegister();
  if (param_1 == pUVar1) {
    if (param_2 != 0) {
      if (param_2 == 1) {
        this->SkeletalMeshImportContentType = Geometry;
        return;
      }
      if (param_2 != 2) {
        this->SkeletalMeshImportContentType = this->LastSkeletalMeshImportContentType;
        return;
      }
      this->SkeletalMeshImportContentType = SkinningWeights;
      return;
    }
    this->SkeletalMeshImportContentType = All;
  }
  return;
}

// StaticRegisterNativesUInterchangeGenericMeshPipeline @ 14e7e4660

void __cdecl
UInterchangeGenericMeshPipeline::StaticRegisterNativesUInterchangeGenericMeshPipeline(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateAssemblyPartDependencyTable @ 14e7e6490

void __thiscall
UInterchangeGenericMeshPipeline::UpdateAssemblyPartDependencyTable
          (UInterchangeGenericMeshPipeline *this,UInterchangeMeshFactoryNode *param_1,
          TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
          *param_2)

{
  uint uVar1;
  UInterchangePipelineMeshesUtilities *pUVar2;
  code *pcVar3;
  TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar4;
  bool bVar5;
  ulonglong uVar6;
  UInterchangeSceneNode *this_00;
  UClass *pUVar7;
  UInterchangeBaseNode *this_01;
  FString *pFVar8;
  int iVar9;
  ForAnyElementType FVar10;
  wchar_t *pwVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  FString *pFVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  longlong lVar18;
  uint uVar19;
  FString *pFVar20;
  uint local_res8 [2];
  UInterchangeMeshFactoryNode *local_res10;
  TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_res18;
  undefined1 local_res20 [8];
  uint local_138;
  FString local_130;
  TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_120;
  int iStack_118;
  uint uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  int local_f0;
  undefined1 local_ec [12];
  TBitArray<FDefaultBitArrayAllocator> *local_e0;
  TMap<int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  FString *local_a8;
  UInterchangeMeshFactoryNode **local_a0;
  FString *local_98;
  UInterchangeMeshFactoryNode **local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  pUVar2 = (this->PipelineMeshesUtilities).field0_0x0.DebugPtr;
  if ((pUVar2 != (UInterchangePipelineMeshesUtilities *)0x0) &&
     (*(int *)&(pUVar2->AssemblyMeshUids).Elements.field_0x8 !=
      *(int *)&(pUVar2->AssemblyMeshUids).Elements.field_0x34)) {
    local_res10 = param_1;
    local_res18 = param_2;
    if (param_1 == (UInterchangeMeshFactoryNode *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3128373673539403164>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericMeshPipeline.cpp"
                         ,0x264,"MeshFactoryNode");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      iVar9 = *(int *)&param_2->field_0x28;
      iStack_118 = 0;
      local_100 = 0;
      pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10;
      uStack_114 = 1;
      iStack_104 = 0;
      if (iVar9 != 0) {
        puVar15 = *(uint **)&param_2->field_0x20;
        if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
          puVar15 = (uint *)pTVar17;
        }
        uVar19 = *puVar15;
        while (uVar19 == 0) {
          iStack_118 = iStack_118 + 1;
          local_100 = local_100 + 0x20;
          iStack_104 = iVar9;
          if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_118)
          goto LAB_14e7e65bd;
          uVar19 = puVar15[iStack_118];
        }
        uStack_114 = ~(uVar19 - 1) & uVar19;
        uVar6 = (ulonglong)uStack_114 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_f0 = (int)lVar18;
        iStack_104 = local_f0 + -1 + local_100;
        if (iVar9 < iStack_104) {
          iStack_104 = iVar9;
        }
      }
LAB_14e7e65bd:
      local_138 = *(uint *)&param_2->field_0x28;
      uVar19 = local_138 & 0xffffffe0;
      iStack_f8 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
      uStack_108 = 0xffffffff;
      TStack_d0._padding_ = CONCAT44(uStack_114,iStack_118);
      TStack_d0.CurrentBitIndex = iStack_104;
      TStack_d0.UnvisitedBitMask = 0xffffffff;
      iVar12 = (int)local_138 >> 5;
      TStack_d0._28_4_ = iStack_104;
      TStack_d0.BaseBitIndex = local_100;
      uStack_b0 = CONCAT44(uStack_f4,iStack_f8);
      local_120 = param_2;
      local_110 = (undefined1 *)pTVar17;
      iStack_fc = iStack_104;
      local_e0 = pTVar17;
      local_d8 = param_2;
      TStack_d0.Array = pTVar17;
      if ((((int)local_138 < 0) || (iVar9 < (int)local_138)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar1 = *(uint *)&param_2->field_0x28;
      if (local_138 != uVar1) {
        puVar14 = *(undefined1 **)&param_2->field_0x20;
        if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
          puVar14 = (undefined1 *)pTVar17;
        }
        uVar13 = -1 << ((byte)local_138 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
        while (uVar13 == 0) {
          iVar12 = iVar12 + 1;
          uVar19 = uVar19 + 0x20;
          local_138 = uVar1;
          if ((int)(((int)(uVar1 - 1) >> 0x1f & 0x1fU) + (uVar1 - 1)) >> 5 < iVar12)
          goto LAB_14e7e66d0;
          uVar13 = *(uint *)(puVar14 + (longlong)iVar12 * 4);
        }
        uVar6 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_138 = (int)lVar18 + -1 + uVar19;
        if ((int)uVar1 < (int)local_138) {
          local_138 = uVar1;
        }
      }
LAB_14e7e66d0:
      while( true ) {
        pTVar4 = local_d8;
        if (*(int *)&local_d8->field_0x8 - *(int *)&local_d8->field_0x34 != (int)uStack_b0) {
          `TSparseArray<TSparseSetElement<TTuple<int,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (((TStack_d0.CurrentBitIndex == local_138) && (TStack_d0.Array == pTVar17)) &&
           (pTVar4 == param_2)) break;
        lVar18 = (longlong)TStack_d0.CurrentBitIndex * 0x20 + *(longlong *)pTVar4;
        local_res8[0] = *(uint *)(lVar18 + 0x10);
        uVar6 = (ulonglong)(int)local_res8[0];
        pFVar20 = *(FString **)(lVar18 + 8);
        pFVar16 = pFVar20 + uVar6;
        while( true ) {
          if (*(int *)(lVar18 + 0x10) != (int)uVar6) {
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (pFVar20 == pFVar16) break;
          this_00 = (UInterchangeSceneNode *)
                    UInterchangeBaseNodeContainer::GetNode(this->BaseNodeContainer,pFVar20);
          if (this_00 == (UInterchangeSceneNode *)0x0) {
LAB_14e7e689b:
            if (this_00 != (UInterchangeSceneNode *)0x0) {
              pUVar7 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
              iVar9 = (int)pUVar7->_padding_;
              if ((iVar9 <= *(int *)(this_00->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar9 * 8)
                  == &pUVar7->_padding_)) {
                pUVar2 = (this->PipelineMeshesUtilities).field0_0x0.DebugPtr;
                pFVar8 = UInterchangeBaseNode::GetUniqueID
                                   ((UInterchangeBaseNode *)this_00,&local_68);
                iVar9 = (pFVar8->Data).ArrayNum;
                if (iVar9 == 0) {
                  pwVar11 = L"";
                  iVar9 = 0;
                }
                else {
                  pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
                  iVar9 = iVar9 + -1;
                }
                uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar11);
                iVar9 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                        FindIndexByHash<FString>(&pUVar2->AssemblyMeshUids,uVar19,pFVar8);
                if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_68.Data.AllocatorInstance.Data);
                }
                if (iVar9 != -1) {
                  local_98 = UInterchangeBaseNode::GetUniqueID
                                       ((UInterchangeBaseNode *)this_00,&local_58);
                  local_90 = &local_res10;
                  TSet<TTuple<FString,UInterchangeMeshFactoryNode_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeMeshFactoryNode_*,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<FString_&&,UInterchangeMeshFactoryNode_*_const_&>_>
                            ((TSet<TTuple<FString,UInterchangeMeshFactoryNode_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeMeshFactoryNode_*,0>,FDefaultSetAllocator>
                              *)&this->AssemblyPartMeshUidToFactoryNodeTable,
                             (TPairInitializer<FString_&&,UInterchangeMeshFactoryNode_*_const_&> *)
                             (local_ec + 4),(bool *)&local_98);
                  FVar10.Data = local_58.Data.AllocatorInstance.Data;
                  goto LAB_14e7e695a;
                }
              }
            }
          }
          else {
            pUVar7 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
            iVar9 = (int)pUVar7->_padding_;
            if ((*(int *)(this_00->_padding_ + 0x38) < iVar9) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
                &pUVar7->_padding_)) goto LAB_14e7e689b;
            local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_130.Data.ArrayNum = 0;
            local_130.Data.ArrayMax = 0;
            UInterchangeSceneNode::GetCustomAssetInstanceUid(this_00,&local_130);
            bVar5 = UInterchangeBaseNodeContainer::IsNodeUidValid
                              (this->BaseNodeContainer,&local_130);
            FVar10.Data = local_130.Data.AllocatorInstance.Data;
            if ((bVar5) &&
               (this_01 = UInterchangeBaseNodeContainer::GetNode(this->BaseNodeContainer,&local_130)
               , FVar10.Data = local_130.Data.AllocatorInstance.Data,
               this_01 != (UInterchangeBaseNode *)0x0)) {
              pUVar7 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
              iVar9 = (int)pUVar7->_padding_;
              FVar10.Data = local_130.Data.AllocatorInstance.Data;
              if ((iVar9 <= *(int *)(this_01->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar9 * 8)
                  == &pUVar7->_padding_)) {
                pUVar2 = (this->PipelineMeshesUtilities).field0_0x0.DebugPtr;
                pFVar8 = UInterchangeBaseNode::GetUniqueID(this_01,&local_88);
                iVar9 = (pFVar8->Data).ArrayNum;
                if (iVar9 == 0) {
                  pwVar11 = L"";
                  iVar9 = 0;
                }
                else {
                  pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
                  iVar9 = iVar9 + -1;
                }
                uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar11);
                iVar9 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                        FindIndexByHash<FString>(&pUVar2->AssemblyMeshUids,uVar19,pFVar8);
                if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_88.Data.AllocatorInstance.Data);
                }
                FVar10.Data = local_130.Data.AllocatorInstance.Data;
                if (iVar9 != -1) {
                  local_a8 = UInterchangeBaseNode::GetUniqueID(this_01,&local_78);
                  local_a0 = &local_res10;
                  TSet<TTuple<FString,UInterchangeMeshFactoryNode_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeMeshFactoryNode_*,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<FString_&&,UInterchangeMeshFactoryNode_*_const_&>_>
                            ((TSet<TTuple<FString,UInterchangeMeshFactoryNode_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeMeshFactoryNode_*,0>,FDefaultSetAllocator>
                              *)&this->AssemblyPartMeshUidToFactoryNodeTable,
                             (TPairInitializer<FString_&&,UInterchangeMeshFactoryNode_*_const_&> *)
                             local_ec,(bool *)&local_a8);
                  FVar10.Data = local_130.Data.AllocatorInstance.Data;
                  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_78.Data.AllocatorInstance.Data);
                    FVar10.Data = local_130.Data.AllocatorInstance.Data;
                  }
                }
              }
            }
LAB_14e7e695a:
            if (FVar10.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar10.Data);
            }
          }
          uVar6 = (ulonglong)local_res8[0];
          pFVar20 = pFVar20 + 1;
        }
        TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
        param_2 = local_res18;
        pTVar17 = local_e0;
      }
    }
  }
  return;
}

// execGetCombineSkeletalMeshes @ 14e7eacf0

void __cdecl
UInterchangeGenericMeshPipeline::execGetCombineSkeletalMeshes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[10].field_0x13;
  return;
}

// execSetCombineSkeletalMeshes @ 14e7eb440

void __cdecl
UInterchangeGenericMeshPipeline::execSetCombineSkeletalMeshes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

