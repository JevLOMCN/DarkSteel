// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FMeshDrawCommandPassSetupTaskContext @ 144eeec00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

FMeshDrawCommandPassSetupTaskContext * __thiscall
FMeshDrawCommandPassSetupTaskContext::FMeshDrawCommandPassSetupTaskContext
          (FMeshDrawCommandPassSetupTaskContext *this)

{
  this->ShadingPath = Num;
  this->View = (FViewInfo *)0x0;
  this->Scene = (FScene *)0x0;
  this->bRenderSceneTwoSided = false;
  this->BasePassDepthStencilAccess = DepthNop;
  this->MeshPassProcessor = (FMeshPassProcessor *)0x0;
  this->MobileBasePassCSMMeshPassProcessor = (FMeshPassProcessor *)0x0;
  this->DynamicMeshElements =
       (TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
        *)0x0;
  this->NumDynamicMeshCommandBuildRequestElements = 0;
  (this->MeshDrawCommands).AllocatorInstance.Data = (FVisibleMeshDrawCommand *)0x0;
  (this->MeshDrawCommands).ArrayNum = 0;
  (this->MeshDrawCommands).ArrayMax = 0;
  (this->MobileBasePassCSMMeshDrawCommands).AllocatorInstance.Data = (FVisibleMeshDrawCommand *)0x0;
  (this->MobileBasePassCSMMeshDrawCommands).ArrayNum = 0;
  (this->MobileBasePassCSMMeshDrawCommands).ArrayMax = 0;
  (this->DynamicMeshCommandBuildRequests).AllocatorInstance.Data = (FStaticMeshBatch **)0x0;
  (this->DynamicMeshCommandBuildRequests).ArrayNum = 0;
  (this->DynamicMeshCommandBuildRequests).ArrayMax = 0;
  (this->DynamicMeshCommandBuildFlags).AllocatorInstance.Data =
       (EMeshDrawCommandCullingPayloadFlags *)0x0;
  (this->DynamicMeshCommandBuildFlags).ArrayNum = 0;
  (this->DynamicMeshCommandBuildFlags).ArrayMax = 0;
  (this->MobileBasePassCSMDynamicMeshCommandBuildRequests).AllocatorInstance.Data =
       (FStaticMeshBatch **)0x0;
  (this->MobileBasePassCSMDynamicMeshCommandBuildRequests).ArrayNum = 0;
  (this->MobileBasePassCSMDynamicMeshCommandBuildRequests).ArrayMax = 0;
  this->PassType = Num;
  this->bUseGPUScene = false;
  this->bDynamicInstancing = false;
  this->bReverseCulling = false;
  this->InstanceFactor = 1;
  this->NumDynamicMeshElements = 0;
  TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::
  TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>
            (&(this->MeshDrawCommandStorage).MeshDrawCommands,0);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
  ::
  TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
              *)&this->MinimalPipelineStatePassSet);
  this->NeedsShaderInitialisation = false;
  (this->TempVisibleMeshDrawCommands).AllocatorInstance.Data = (FVisibleMeshDrawCommand *)0x0;
  (this->TempVisibleMeshDrawCommands).ArrayNum = 0;
  (this->TempVisibleMeshDrawCommands).ArrayMax = 0;
  this->PrimitiveBounds = (TScenePrimitiveArray<FPrimitiveBounds> *)0x0;
  this->VisibleMeshDrawCommandsNum = 0;
  this->NewPassVisibleMeshDrawCommandsNum = 0;
  this->MaxInstances = 1;
  (this->InstanceCullingContext).ViewIds.AllocatorInstance.SecondaryData.Data = (int *)0x0;
  (this->InstanceCullingContext).InstanceCullingManager = (FInstanceCullingManager *)0x0;
  (this->InstanceCullingContext).ShaderPlatform = SP_NumPlatforms;
  (this->InstanceCullingContext).ViewIds.ArrayNum = 0;
  (this->InstanceCullingContext).ViewIds.ArrayMax = 6;
  (this->InstanceCullingContext).PrevHZB.Reference = (IPooledRenderTarget *)0x0;
  *(undefined8 *)&(this->InstanceCullingContext).SyncPrerequisitesFunc = 0;
  *(undefined8 *)&(this->InstanceCullingContext).SyncPrerequisitesFunc.field_0x28 = 0;
  (this->InstanceCullingContext).MeshDrawCommandInfos.AllocatorInstance.Data =
       (FMeshDrawCommandInfo *)0x0;
  (this->InstanceCullingContext).MeshDrawCommandInfos.ArrayNum = 0;
  (this->InstanceCullingContext).MeshDrawCommandInfos.ArrayMax = 0;
  (this->InstanceCullingContext).IndirectArgs.AllocatorInstance.Data =
       (FRHIDrawIndexedIndirectParameters *)0x0;
  (this->InstanceCullingContext).IndirectArgs.ArrayNum = 0;
  (this->InstanceCullingContext).IndirectArgs.ArrayMax = 0;
  (this->InstanceCullingContext).DrawCommandDescs.AllocatorInstance.Data =
       (TIntVector2<unsigned_int> *)0x0;
  (this->InstanceCullingContext).DrawCommandDescs.ArrayNum = 0;
  (this->InstanceCullingContext).DrawCommandDescs.ArrayMax = 0;
  (this->InstanceCullingContext).PayloadData.AllocatorInstance.Data = (FPayloadData *)0x0;
  (this->InstanceCullingContext).PayloadData.ArrayNum = 0;
  (this->InstanceCullingContext).PayloadData.ArrayMax = 0;
  (this->InstanceCullingContext).InstanceIdOffsets.AllocatorInstance.Data = (uint *)0x0;
  (this->InstanceCullingContext).InstanceIdOffsets.ArrayNum = 0;
  (this->InstanceCullingContext).InstanceIdOffsets.ArrayMax = 0;
  (this->InstanceCullingContext).DrawCommandCompactionData.AllocatorInstance.Data =
       (FCompactionData *)0x0;
  (this->InstanceCullingContext).DrawCommandCompactionData.ArrayNum = 0;
  (this->InstanceCullingContext).DrawCommandCompactionData.ArrayMax = 0;
  (this->InstanceCullingContext).CompactionBlockDataIndices.AllocatorInstance.Data = (uint *)0x0;
  (this->InstanceCullingContext).CompactionBlockDataIndices.ArrayNum = 0;
  (this->InstanceCullingContext).CompactionBlockDataIndices.ArrayMax = 0;
  (this->InstanceCullingContext).bIsEnabled = false;
  (this->InstanceCullingContext).InstanceCullingMode = Normal;
  (this->InstanceCullingContext).Flags = None;
  (this->InstanceCullingContext).TotalInstances = 0;
  (this->InstanceCullingContext).DynamicInstanceIdOffset = -1;
  (this->InstanceCullingContext).DynamicInstanceIdNum = -1;
  (this->InstanceCullingContext).NumCompactionInstances = 0;
  (this->InstanceCullingContext).LoadBalancers.Elements[0] =
       (FInstanceProcessingGPULoadBalancer *)0x0;
  (this->InstanceCullingContext).LoadBalancers.Elements[1] =
       (FInstanceProcessingGPULoadBalancer *)0x0;
  (this->InstanceCullingContext).SingleInstanceProcessingMode = UnCulled;
  (this->InstanceCullingContext).MeshDrawCommandPassStats = (FMeshDrawCommandPassStats *)0x0;
  return this;
}

