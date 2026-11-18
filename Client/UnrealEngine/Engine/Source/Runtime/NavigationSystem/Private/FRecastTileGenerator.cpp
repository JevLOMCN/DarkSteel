// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 85

// FRecastTileGenerator @ 146e36420

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FRecastTileGenerator * __thiscall
FRecastTileGenerator::FRecastTileGenerator
          (FRecastTileGenerator *this,FRecastNavMeshGenerator *param_1,TIntPoint<int> *param_2,
          double param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  undefined4 uVar5;
  int iVar6;
  FNavRegenTimeSliceManager *pFVar7;
  ARecastNavMesh *pAVar8;
  code *pcVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined7 uVar12;
  ushort uVar13;
  undefined2 uVar14;
  atomic<int> aVar15;
  TReferenceControllerBase<1> *pTVar16;
  FRecastTileGenerator *pFVar17;
  uint uVar18;
  TReferenceControllerBase<1> *pTVar19;
  FNavDataGenerator *pFVar20;
  bool bVar21;
  
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)this);
  pFVar20 = (FNavDataGenerator *)0x0;
  this->_padding_ = (longlong)&___7FRecastTileGenerator__6B_;
  *(undefined8 *)&this->RasterizeGeomRecastTriAreas = 0;
  *(undefined8 *)&(this->RasterizeGeomRecastTriAreas).field_0x8 = 0;
  *(undefined8 *)&(this->RasterizeGeomRecastTriAreas).field_0x10 = 0;
  pFVar7 = (param_1->SyncTimeSlicedData).TimeSliceManager;
  (this->GenNavDataTimeSlicedAllocator).Ptr = (FTileCacheAllocator *)0x0;
  (this->GenNavDataTimeSlicedGenerationContext).Ptr = (FTileGenerationContext *)0x0;
  (this->GenCompressedlayersTimeSlicedRasterContext).Ptr = (FTileRasterizationContext *)0x0;
  (this->TileTimeSliceSettings).FilterLedgeSpansMaxYProcess = 0xd;
  this->TileCreationTime = 0.0;
  (this->TileBB).IsValid = '\0';
  (this->TileBBExpandedForAgent).IsValid = '\0';
  (this->DirtyLayers).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  this->TimeSliceManager = pFVar7;
  (this->DirtyLayers).NumBits = 0;
  (this->DirtyLayers).MaxBits = 0x80;
  (this->TileConfig).JumpConfigs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TileConfig).JumpConfigs.ArrayNum = 0;
  (this->TileConfig).JumpConfigs.ArrayMax = 0;
  FRecastBuildConfig::Reset(&this->TileConfig);
  *(undefined8 *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x8 = 0;
  *(undefined8 *)&this->InclusionBounds = 0;
  *(undefined8 *)&(this->InclusionBounds).field_0x8 = 0;
  *(undefined8 *)&(this->InclusionBounds).field_0x10 = 0;
  *(undefined8 *)&(this->AdditionalCachedData).AreaClassToIdMap = 0;
  *(undefined8 *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x20 = 0;
  *(undefined4 *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x28 = 0;
  *(undefined4 *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x34 = 0;
  *(undefined8 *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x40 = 0;
  *(undefined4 *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x48 = 0;
  (this->AdditionalCachedData).ActorOwner.WeakPtr = (FWeakObjectPtr)0x0;
  (this->CompressedLayers).ArrayNum = 0;
  (this->CompressedLayers).ArrayMax = 0;
  (this->NavigationData).ArrayNum = 0;
  (this->NavigationData).ArrayMax = 0;
  (this->RasterizeGeometryWorldRecastCoords).ArrayNum = 0;
  (this->RasterizeGeometryWorldRecastCoords).ArrayMax = 0;
  (this->RasterizeGeometryFlippedIndices).ArrayNum = 0;
  (this->RasterizeGeometryFlippedIndices).ArrayMax = 0;
  (this->CompressedLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NavigationData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RasterizeGeometryWorldRecastCoords).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->RasterizeGeometryFlippedIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RasterizeGeometryWorldRecastCoordsBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->RasterizeGeometryWorldRecastCoordsBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->RasterizeGeometryWorldRecastCoordsBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->RasterizeGeometryWorldRecastCoordsBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->RasterizeGeometryWorldRecastCoordsBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->RasterizeGeometryWorldRecastCoordsBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->RasterizeGeometryWorldRecastCoordsBounds).IsValid = '\0';
  (this->RasterizeGeometryWorldRecastCoordsBounds).Pad[0] = '\0';
  (this->RasterizeGeometryWorldRecastCoordsBounds).Pad[1] = '\0';
  (this->RasterizeGeometryWorldRecastCoordsBounds).Pad[2] = '\0';
  (this->RasterizeGeometryWorldRecastCoordsBounds).Pad[3] = '\0';
  (this->RasterizeGeometryWorldRecastCoordsBounds).Pad[4] = '\0';
  (this->RasterizeGeometryWorldRecastCoordsBounds).Pad[5] = '\0';
  (this->RasterizeGeometryWorldRecastCoordsBounds).Pad[6] = '\0';
  (this->RawGeometry).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawGeometry).ArrayNum = 0;
  (this->RawGeometry).ArrayMax = 0;
  (this->Modifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).ArrayNum = 0;
  (this->Modifiers).ArrayMax = 0;
  (this->OffmeshLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OffmeshLinks).ArrayNum = 0;
  (this->OffmeshLinks).ArrayMax = 0;
  (this->ParentGeneratorWeakPtr).Object = (FNavDataGenerator *)0x0;
  (this->ParentGeneratorWeakPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->NavigationRelevantData = 0;
  *(undefined8 *)&(this->NavigationRelevantData).field_0x8 = 0;
  *(undefined8 *)&(this->NavigationRelevantData).field_0x10 = 0;
  (this->NavSystem).WeakPtr = (FWeakObjectPtr)0x0;
  FNavDataConfig::FNavDataConfig
            (&this->NavDataConfig,FNavigationSystem::FallbackAgentRadius,
             FNavigationSystem::FallbackAgentHeight);
  FRecastNavMeshTileGenerationDebug::FRecastNavMeshTileGenerationDebug(&this->TileDebugSettings);
  (this->DebugData)._padding_ = (longlong)&___7FRecastInternalDebugData__6B_;
  (this->DebugData).CurrentPrim = DU_DRAW_POINTS;
  (this->DebugData).FirstVertexIndex = 0;
  (this->DebugData).TriangleIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugData).TriangleIndices.ArrayNum = 0;
  (this->DebugData).TriangleIndices.ArrayMax = 0;
  (this->DebugData).TriangleVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugData).TriangleVertices.ArrayNum = 0;
  (this->DebugData).TriangleVertices.ArrayMax = 0;
  (this->DebugData).TriangleColors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugData).TriangleColors.ArrayNum = 0;
  (this->DebugData).TriangleColors.ArrayMax = 0;
  (this->DebugData).LineVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugData).LineVertices.ArrayNum = 0;
  (this->DebugData).LineVertices.ArrayMax = 0;
  (this->DebugData).LineColors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugData).LineColors.ArrayNum = 0;
  (this->DebugData).LineColors.ArrayMax = 0;
  (this->DebugData).PointVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugData).PointVertices.ArrayNum = 0;
  (this->DebugData).PointVertices.ArrayMax = 0;
  (this->DebugData).PointColors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugData).PointColors.ArrayNum = 0;
  (this->DebugData).PointColors.ArrayMax = 0;
  (this->DebugData).LabelVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugData).LabelVertices.ArrayNum = 0;
  (this->DebugData).LabelVertices.ArrayMax = 0;
  (this->DebugData).Labels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugData).Labels.ArrayNum = 0;
  (this->DebugData).Labels.ArrayMax = 0;
  (this->DebugData).BuildTime = 0.0;
  (this->DebugData).BuildCompressedLayerTime = 0.0;
  (this->DebugData).BuildNavigationDataTime = 0.0;
  (this->DebugData).BuildLinkTime = 0.0;
  (this->DebugData).TriangleCount = 0;
  (this->DebugData).Resolution = '\0';
  puVar2 = &this->field_0x14;
  this->bUpdateGeometry = 1;
  this->bHasGeometryToRasterizeAsFilledConvexVolume = 0;
  this->bHasLowAreaModifiers = 0;
  this->TileX = (param_2->field0_0x0)._s_0.X;
  this->TileY = (param_2->field0_0x0)._s_0.Y;
  this->TileCreationTime = param_3;
  lVar10 = (param_1->Config)._padding_;
  (this->TileConfig)._padding_ = (param_1->Config)._padding_;
  (this->TileConfig)._padding_ = lVar10;
  lVar10 = (param_1->Config)._padding_;
  (this->TileConfig)._padding_ = (param_1->Config)._padding_;
  (this->TileConfig)._padding_ = lVar10;
  lVar10 = (param_1->Config)._padding_;
  (this->TileConfig)._padding_ = (param_1->Config)._padding_;
  (this->TileConfig)._padding_ = lVar10;
  lVar10 = (param_1->Config)._padding_;
  (this->TileConfig)._padding_ = (param_1->Config)._padding_;
  (this->TileConfig)._padding_ = lVar10;
  lVar10 = (param_1->Config)._padding_;
  (this->TileConfig)._padding_ = (param_1->Config)._padding_;
  (this->TileConfig)._padding_ = lVar10;
  lVar10 = (param_1->Config)._padding_;
  (this->TileConfig)._padding_ = (param_1->Config)._padding_;
  (this->TileConfig)._padding_ = lVar10;
  lVar10 = (param_1->Config)._padding_;
  (this->TileConfig)._padding_ = (param_1->Config)._padding_;
  (this->TileConfig)._padding_ = lVar10;
  lVar10 = (param_1->Config)._padding_;
  (this->TileConfig)._padding_ = (param_1->Config)._padding_;
  (this->TileConfig)._padding_ = lVar10;
  lVar10 = (param_1->Config)._padding_;
  (this->TileConfig)._padding_ = (param_1->Config)._padding_;
  (this->TileConfig)._padding_ = lVar10;
  lVar10 = (param_1->Config)._padding_;
  (this->TileConfig)._padding_ = (param_1->Config)._padding_;
  (this->TileConfig)._padding_ = lVar10;
  lVar10 = (param_1->Config)._padding_;
  (this->TileConfig)._padding_ = (param_1->Config)._padding_;
  (this->TileConfig)._padding_ = lVar10;
  (this->TileConfig)._padding_ = (param_1->Config)._padding_;
  uVar5 = *(undefined4 *)&(this->TileConfig).field_0xb8;
  uVar18 = (ZPULL(uVar5,0,1) ^ (param_1->Config).bPerformVoxelFiltering) & 1 ^ uVar5;
  *(uint *)&(this->TileConfig).field_0xb8 = uVar18;
  uVar18 = (uVar18 ^ *(uint *)&(param_1->Config).field_0xb8) & 2 ^ uVar18;
  *(uint *)&(this->TileConfig).field_0xb8 = uVar18;
  uVar18 = (uVar18 ^ *(uint *)&(param_1->Config).field_0xb8) & 4 ^ uVar18;
  *(uint *)&(this->TileConfig).field_0xb8 = uVar18;
  uVar18 = (uVar18 ^ *(uint *)&(param_1->Config).field_0xb8) & 8 ^ uVar18;
  *(uint *)&(this->TileConfig).field_0xb8 = uVar18;
  uVar18 = (uVar18 ^ *(uint *)&(param_1->Config).field_0xb8) & 0x10 ^ uVar18;
  *(uint *)&(this->TileConfig).field_0xb8 = uVar18;
  uVar18 = (uVar18 ^ *(uint *)&(param_1->Config).field_0xb8) & 0x20 ^ uVar18;
  *(uint *)&(this->TileConfig).field_0xb8 = uVar18;
  uVar18 = (uVar18 ^ *(uint *)&(param_1->Config).field_0xb8) & 0x40 ^ uVar18;
  *(uint *)&(this->TileConfig).field_0xb8 = uVar18;
  *(uint *)&(this->TileConfig).field_0xb8 =
       (uVar18 ^ *(uint *)&(param_1->Config).field_0xb8) & 0x80 ^ uVar18;
  (this->TileConfig).TileCachePartitionType = (param_1->Config).TileCachePartitionType;
  (this->TileConfig).TileCacheChunkSize = (param_1->Config).TileCacheChunkSize;
  (this->TileConfig).MaxPolysPerTile = (param_1->Config).MaxPolysPerTile;
  TArray<dtNavLinkBuilderJumpConfig,TSizedDefaultAllocator<32>_>::operator=
            (&(this->TileConfig).JumpConfigs,&(param_1->Config).JumpConfigs);
  (this->TileConfig).AgentHeight = (param_1->Config).AgentHeight;
  (this->TileConfig).AgentMaxClimb = (param_1->Config).AgentMaxClimb;
  (this->TileConfig).AgentRadius = (param_1->Config).AgentRadius;
  (this->TileConfig).AgentIndex = (param_1->Config).AgentIndex;
  (this->TileConfig).TileResolution = (param_1->Config).TileResolution;
  (this->TileConfig).LedgeSlopeFilterMode = (param_1->Config).LedgeSlopeFilterMode;
  (this->TileConfig).bIsTileSetupConfigCompleted = (param_1->Config).bIsTileSetupConfigCompleted;
  (this->TileConfig).LinkSpillDistance = (param_1->Config).LinkSpillDistance;
  pAVar8 = param_1->DestNavMesh;
  uVar11 = *(undefined8 *)((longlong)&(pAVar8->TileGenerationDebug).TileCoordinate.field0_0x0 + 4);
  *(undefined8 *)&this->TileDebugSettings = *(undefined8 *)&pAVar8->TileGenerationDebug;
  *(undefined8 *)((longlong)&(this->TileDebugSettings).TileCoordinate.field0_0x0 + 4) = uVar11;
  uVar11 = *(undefined8 *)
            ((longlong)&(pAVar8->TileGenerationDebug).MaxTileCoordinate.field0_0x0 + 8);
  *(undefined8 *)&(this->TileDebugSettings).MaxTileCoordinate.field0_0x0 =
       *(undefined8 *)&(pAVar8->TileGenerationDebug).MaxTileCoordinate.field0_0x0;
  *(undefined8 *)((longlong)&(this->TileDebugSettings).MaxTileCoordinate.field0_0x0 + 8) = uVar11;
  uVar12 = *(undefined7 *)&(pAVar8->TileGenerationDebug).field_0x21;
  uVar13 = (pAVar8->TileGenerationDebug).LinkGenerationDebugFlags;
  uVar14 = *(undefined2 *)&(pAVar8->TileGenerationDebug).field_0x2a;
  iVar6 = (pAVar8->TileGenerationDebug).LinkGenerationSelectedEdge;
  (this->TileDebugSettings).HeightFieldRenderMode =
       (pAVar8->TileGenerationDebug).HeightFieldRenderMode;
  *(undefined7 *)&(this->TileDebugSettings).field_0x21 = uVar12;
  (this->TileDebugSettings).LinkGenerationDebugFlags = uVar13;
  *(undefined2 *)&(this->TileDebugSettings).field_0x2a = uVar14;
  (this->TileDebugSettings).LinkGenerationSelectedEdge = iVar6;
  (this->TileDebugSettings).LinkGenerationSelectedConfig =
       (pAVar8->TileGenerationDebug).LinkGenerationSelectedConfig;
  this->Version = param_1->Version;
  FRecastNavMeshCachedData::operator=(&this->AdditionalCachedData,&param_1->AdditionalCachedData);
  pTVar16 = (TReferenceControllerBase<1> *)param_1->_padding_;
  pTVar19 = pTVar16;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar16->SharedReferenceCount;
    do {
      pTVar19 = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_146e36995;
      LOCK();
      aVar15 = pTVar16->SharedReferenceCount;
      bVar21 = aVar4 == aVar15;
      if (bVar21) {
        pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar15 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar15;
    } while (!bVar21);
    pFVar20 = (FNavDataGenerator *)param_1->_padding_;
    pTVar19 = pTVar16;
  }
LAB_146e36995:
  pTVar16 = (TReferenceControllerBase<1> *)&pFVar20->field_0x8;
  if (pFVar20 == (FNavDataGenerator *)0x0) {
    pTVar16 = (TReferenceControllerBase<1> *)0x0;
  }
  if ((pTVar16 != (TReferenceControllerBase<1> *)&param_1->_padding_) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar21)) {
    pcVar9 = (code *)swi(3);
    pFVar17 = (FRecastTileGenerator *)(*pcVar9)();
    return pFVar17;
  }
  if (pFVar20 == (FNavDataGenerator *)0x0) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar21) {
      pcVar9 = (code *)swi(3);
      pFVar17 = (FRecastTileGenerator *)(*pcVar9)();
      return pFVar17;
    }
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar21) {
      pcVar9 = (code *)swi(3);
      pFVar17 = (FRecastTileGenerator *)(*pcVar9)();
      return pFVar17;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  (this->ParentGeneratorWeakPtr).Object = pFVar20;
  if (pTVar19 != (this->ParentGeneratorWeakPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar19->WeakReferenceCount = (atomic<int>)((int)pTVar19->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar16 = (this->ParentGeneratorWeakPtr).WeakReferenceCount.ReferenceController;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar3 = &pTVar16->WeakReferenceCount;
      aVar4 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar16->_padding_ + 8))(pTVar16,1);
      }
    }
    (this->ParentGeneratorWeakPtr).WeakReferenceCount.ReferenceController = pTVar19;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  this->RasterizeGeomRecastState = MarkWalkableTriangles;
  this->RasterizeGeomState = RasterizeGeometryTransformCoords;
  this->GenerateRecastFilterState = FilterLowHangingWalkableObstacles;
  this->GenRecastFilterLedgeSpansYStart = 0;
  this->DoWorkTimeSlicedState = GatherGeometryFromSources;
  this->GenerateTileTimeSlicedState = GenerateCompressedLayers;
  this->GenerateNavDataTimeSlicedState = Init;
  this->GenNavDataLayerTimeSlicedIdx = 0;
  this->GenCompressedLayersTimeSlicedState = Init;
  this->RasterizeTrianglesTimeSlicedRawGeomIdx = 0;
  this->RasterizeTrianglesTimeSlicedInstTransformIdx = 0;
  if ((param_1->DestNavMesh == (ARecastNavMesh *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentGenerator.GetOwner()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                          ,0x6ca,L""), bVar21)) {
    pcVar9 = (code *)swi(3);
    pFVar17 = (FRecastTileGenerator *)(*pcVar9)();
    return pFVar17;
  }
  iVar6 = param_1->DestNavMesh->TimeSliceFilterLedgeSpansMaxYProcess;
  this->SolidHF = (rcHeightfield *)0x0;
  this->CompactHF = (rcCompactHeightfield *)0x0;
  (this->TileTimeSliceSettings).FilterLedgeSpansMaxYProcess = iVar6;
  return this;
}

// ~FRecastTileGenerator @ 146e37710

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall FRecastTileGenerator::~FRecastTileGenerator(FRecastTileGenerator *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FTileGenerationContext *pFVar3;
  FScriptContainerElement *pFVar4;
  FTileCacheAllocator *pFVar5;
  FTileRasterizationContext *pFVar6;
  ForElementType<int> FVar7;
  void *pvVar8;
  TReferenceControllerBase<1> *pTVar9;
  ForElementType<unsigned_int> FVar10;
  
  this->_padding_ = (longlong)&___7FRecastTileGenerator__6B_;
  rcFreeHeightField(this->SolidHF);
  rcFreeCompactHeightfield(this->CompactHF);
  pFVar3 = (this->GenNavDataTimeSlicedGenerationContext).Ptr;
  if (pFVar3 != (FTileGenerationContext *)0x0) {
    (this->GenNavDataTimeSlicedGenerationContext).Ptr = (FTileGenerationContext *)0x0;
    FTileGenerationContext::ResetIntermediateData(pFVar3);
    DestructItems<FNavMeshTileData,int>
              ((FNavMeshTileData *)(pFVar3->NavigationData).AllocatorInstance.Data,
               (pFVar3->NavigationData).ArrayNum);
    pFVar4 = (pFVar3->NavigationData).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(pFVar3,0x48);
  }
  pFVar5 = (this->GenNavDataTimeSlicedAllocator).Ptr;
  if (pFVar5 != (FTileCacheAllocator *)0x0) {
    (this->GenNavDataTimeSlicedAllocator).Ptr = (FTileCacheAllocator *)0x0;
    (**(code **)*pFVar5)(pFVar5,1);
  }
  pFVar6 = (this->GenCompressedlayersTimeSlicedRasterContext).Ptr;
  if (pFVar6 != (FTileRasterizationContext *)0x0) {
    (this->GenCompressedlayersTimeSlicedRasterContext).Ptr = (FTileRasterizationContext *)0x0;
    rcFreeHeightfieldLayerSet(pFVar6->LayerSet);
    FVar7 = (pFVar6->RasterizationMasks).AllocatorInstance.SecondaryData;
    if (FVar7 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar7);
    }
    DestructItems<FNavMeshTileData,int>
              ((FNavMeshTileData *)(pFVar6->Layers).AllocatorInstance.Data,(pFVar6->Layers).ArrayNum
              );
    pFVar4 = (pFVar6->Layers).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(pFVar6,0x4030);
  }
  FRecastInternalDebugData::~FRecastInternalDebugData(&this->DebugData);
  pvVar8 = *(void **)&(this->NavDataConfig).NavDataClass.SoftObjectPtr.field_0x18;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  pvVar8 = (void *)(this->NavDataConfig)._padding_;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  DestructItems<TSharedRef<FNavigationRelevantData,1>,int>
            (*(TSharedRef<FNavigationRelevantData,1> **)&this->NavigationRelevantData,
             *(int *)&(this->NavigationRelevantData).field_0x10);
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->NavigationRelevantData);
  pTVar9 = (this->ParentGeneratorWeakPtr).WeakReferenceCount.ReferenceController;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar9->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
    }
  }
  DestructItems<FSimpleLinkNavModifier,int>
            ((FSimpleLinkNavModifier *)(this->OffmeshLinks).AllocatorInstance.Data,
             (this->OffmeshLinks).ArrayNum);
  pFVar4 = (this->OffmeshLinks).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FRecastAreaNavModifierElement,int>
            ((FRecastAreaNavModifierElement *)(this->Modifiers).AllocatorInstance.Data,
             (this->Modifiers).ArrayNum);
  pFVar4 = (this->Modifiers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FRecastRawGeometryElement,int>
            ((FRecastRawGeometryElement *)(this->RawGeometry).AllocatorInstance.Data,
             (this->RawGeometry).ArrayNum);
  pFVar4 = (this->RawGeometry).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->RasterizeGeometryFlippedIndices).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->RasterizeGeometryWorldRecastCoords).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FNavMeshTileData,int>
            ((FNavMeshTileData *)(this->NavigationData).AllocatorInstance.Data,
             (this->NavigationData).ArrayNum);
  pFVar4 = (this->NavigationData).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FNavMeshTileData,int>
            ((FNavMeshTileData *)(this->CompressedLayers).AllocatorInstance.Data,
             (this->CompressedLayers).ArrayNum);
  pFVar4 = (this->CompressedLayers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x48 = 0;
  pvVar8 = *(void **)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x40;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->AdditionalCachedData).AreaClassToIdMap);
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->InclusionBounds);
  pFVar4 = (this->TileConfig).JumpConfigs.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FVar10 = (this->DirtyLayers).AllocatorInstance.SecondaryData;
  if (FVar10 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  pFVar6 = (this->GenCompressedlayersTimeSlicedRasterContext).Ptr;
  if (pFVar6 != (FTileRasterizationContext *)0x0) {
    rcFreeHeightfieldLayerSet(pFVar6->LayerSet);
    FVar7 = (pFVar6->RasterizationMasks).AllocatorInstance.SecondaryData;
    if (FVar7 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar7);
    }
    DestructItems<FNavMeshTileData,int>
              ((FNavMeshTileData *)(pFVar6->Layers).AllocatorInstance.Data,(pFVar6->Layers).ArrayNum
              );
    pFVar4 = (pFVar6->Layers).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(pFVar6,0x4030);
  }
  pFVar3 = (this->GenNavDataTimeSlicedGenerationContext).Ptr;
  if (pFVar3 != (FTileGenerationContext *)0x0) {
    FTileGenerationContext::ResetIntermediateData(pFVar3);
    DestructItems<FNavMeshTileData,int>
              ((FNavMeshTileData *)(pFVar3->NavigationData).AllocatorInstance.Data,
               (pFVar3->NavigationData).ArrayNum);
    pFVar4 = (pFVar3->NavigationData).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(pFVar3,0x48);
  }
  pFVar5 = (this->GenNavDataTimeSlicedAllocator).Ptr;
  if (pFVar5 != (FTileCacheAllocator *)0x0) {
    (**(code **)*pFVar5)(pFVar5,1);
  }
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->RasterizeGeomRecastTriAreas);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// operator() @ 146e38830

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
`FRecastTileGenerator::PrepareGeometrySources'::__l2::<lambda_1>::operator()
          (void *this,FNavigationOctreeElement *param_1)

{
  TSharedRef<FNavigationRelevantData,1> *pTVar1;
  undefined1 *puVar2;
  FNavigationRelevantData *pFVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ForAnyElementType *pFVar12;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  if (*(char *)((longlong)this + 0x11) == '\0') {
    pFVar3 = (param_1->Data).Object;
    lVar4 = *(longlong *)((longlong)this + 8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar3->ShouldUseGeometryDelegate,&local_38);
    if (((*(int *)&(pFVar3->ShouldUseGeometryDelegate).field_0x10 == 0) ||
        (plVar10 = *(longlong **)&(pFVar3->ShouldUseGeometryDelegate).field_0x8,
        plVar10 == (longlong *)0x0)) || (cVar7 = (**(code **)(*plVar10 + 0x38))(), cVar7 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      pFVar3 = (param_1->Data).Object;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pFVar3->ShouldUseGeometryDelegate,&local_20);
      if (*(int *)&(pFVar3->ShouldUseGeometryDelegate).field_0x10 == 0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = *(longlong **)&(pFVar3->ShouldUseGeometryDelegate).field_0x8;
      }
      cVar7 = (**(code **)(*plVar10 + 0x60))(plVar10,lVar4 + 0x460);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      if (cVar7 == '\0') {
        cVar7 = '\0';
        goto LAB_146e38915;
      }
    }
    cVar7 = '\x01';
  }
  else {
    cVar7 = (**(code **)(**(longlong **)this + 0x70))
                      (*(longlong **)this,param_1,*(longlong *)((longlong)this + 8) + 0x460);
  }
LAB_146e38915:
  if ((cVar7 != '\0') &&
     (((*(char *)((longlong)this + 0x10) != '\0' &&
       (((pFVar3 = (param_1->Data).Object, *(int *)&(pFVar3->VoxelData).field_0x10 != 0 ||
         (*(int *)&(pFVar3->CollisionData).field_0x10 != 0)) ||
        (pFVar3->bPendingLazyGeometryGathering != 0)))) ||
      (((pFVar3 = (param_1->Data).Object,
        pFVar3->bPendingLazyModifiersGathering != 0 ||
        pFVar3->bPendingChildLazyModifiersGathering != 0 ||
        (((pFVar3->Modifiers)._padding_ & 1) != 0)) ||
       (((pFVar3->Modifiers).Areas.ArrayNum != 0 ||
        (((((pFVar3->Modifiers).SimpleLinks.ArrayNum != 0 ||
           ((pFVar3->Modifiers).CustomLinks.ArrayNum != 0)) ||
          ((pFVar3->Modifiers).bFillCollisionUnderneathForNavmesh != 0 ||
           ((pFVar3->Modifiers).bMaskFillCollisionUnderneathForNavmesh != 0 ||
           (pFVar3->Modifiers).bRasterizeAsFilledConvexVolume != 0))) ||
         ((pFVar3->Modifiers).NavMeshResolution != Invalid)))))))))) {
    lVar4 = *(longlong *)((longlong)this + 8);
    pTVar1 = &param_1->Data;
    pFVar12 = (ForAnyElementType *)(lVar4 + 0x440);
    if ((((undefined1 *)pFVar12->_padding_ <= pTVar1) &&
        (pTVar1 < (undefined1 *)pFVar12->_padding_ + (longlong)*(int *)(lVar4 + 0x454) * 0x10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = *(int *)(lVar4 + 0x450);
    if (iVar9 == *(int *)(lVar4 + 0x454)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                        (0x810,pFVar12,(int *)(lVar4 + 0x454));
    }
    *(int *)(lVar4 + 0x450) = iVar9 + 1;
    puVar11 = (undefined8 *)((longlong)iVar9 * 0x10 + pFVar12->_padding_);
    *puVar11 = pTVar1->Object;
    pTVar5 = (param_1->Data).SharedReferenceCount.ReferenceController;
    puVar11[1] = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  return;
}

// AddReferencedObjects @ 146e3f520

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::AddReferencedObjects(FRecastTileGenerator *this,FReferenceCollector *param_1)

{
  int iVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res18;
  
  iVar1 = *(int *)&(this->NavigationRelevantData).field_0x10;
  plVar3 = *(longlong **)&this->NavigationRelevantData;
  plVar4 = plVar3 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)&(this->NavigationRelevantData).field_0x10 != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FNavigationRelevantData,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar3 == plVar4) break;
    local_res18 = *(FWeakObjectPtr *)(*(longlong *)(*plVar3 + 0x100) + 0x58);
    bVar2 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar2) {
      FReferenceCollector::AddReferencedObject(param_1,&local_res18,(UObject *)0x0,(FProperty *)0x0)
      ;
    }
    plVar3 = plVar3 + 2;
  }
  return;
}

// AddVoxelCache @ 146e3fdc0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::AddVoxelCache
          (FRecastTileGenerator *this,TNavStatArray<unsigned_char> *param_1,rcSpanCache *param_2,
          int param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  puVar1 = &param_1->field_0x10;
  if (*(int *)&param_1->field_0x10 == 0) {
    iVar3 = UE::Core::Private::
            ReallocGrow<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                      (1,1,4,(ForAnyElementType *)param_1,(int *)puVar1,(int *)&param_1->field_0x14)
    ;
    *(undefined4 *)((longlong)iVar3 + *(longlong *)param_1) = 0;
  }
  **(int **)param_1 = **(int **)param_1 + 1;
  lVar5 = (longlong)*(int *)puVar1;
  iVar3 = param_3 * 0x10 + 0x20;
  iVar4 = UE::Core::Private::ReallocGrow<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                    (1,1,iVar3,(ForAnyElementType *)param_1,(int *)puVar1,
                     (int *)&param_1->field_0x14);
  memset((void *)((longlong)iVar4 + *(longlong *)param_1),0,(longlong)iVar3);
  lVar2 = *(longlong *)param_1;
  *(int *)(lVar2 + lVar5) = this->TileX;
  *(int *)(lVar2 + 4 + lVar5) = this->TileY;
  *(int *)(lVar2 + 8 + lVar5) = param_3;
  memcpy((void *)(*(longlong *)param_1 + lVar5 + 0x20),param_2,(longlong)(param_3 * 0x10));
  return;
}

// AppendGeometry @ 146e3ff20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::AppendGeometry
          (FRecastTileGenerator *this,FNavigationRelevantData *param_1,
          FCompositeNavModifier *param_2,
          TDelegate<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  int *piVar1;
  TArray<FRecastRawGeometryElement,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined4 *puVar3;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  FString *pFVar11;
  TBox<double> *pTVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_1a8 [32];
  TArray<double,TSizedDefaultAllocator<32>_> *local_188;
  TArray<double,TSizedDefaultAllocator<32>_> *local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  FString local_158;
  undefined4 local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 *local_128;
  undefined4 *local_120;
  FReadAccessScope local_118;
  FReadAccessScope local_100;
  TArray<double,TSizedDefaultAllocator<32>_> local_e8;
  TArray<int,TSizedDefaultAllocator<32>_> local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  ulonglong local_98;
  void *local_90;
  undefined8 local_88;
  uint local_80;
  TBox<double> local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if (*(int *)&(param_1->CollisionData).field_0x10 == 0) {
    return;
  }
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  local_98 = local_98 & 0xffffffffffffff00;
  local_90 = (void *)0x0;
  local_88 = 0;
  uVar15 = param_2->bFillCollisionUnderneathForNavmesh;
  local_80 = uVar15 | 2;
  if (param_2->bRasterizeAsFilledConvexVolume == 0) {
    local_80 = uVar15;
  }
  puVar3 = *(undefined4 **)&param_1->CollisionData;
  local_158.Data.AllocatorInstance.Data._0_4_ = *puVar3;
  local_158.Data.AllocatorInstance.Data._4_4_ = puVar3[1];
  local_158.Data.ArrayNum = puVar3[2];
  local_158.Data.ArrayMax = puVar3[3];
  local_130 = puVar3[6];
  local_138 = *(undefined8 *)(puVar3 + 4);
  local_120 = puVar3 + ((longlong)local_158.Data.AllocatorInstance.Data._4_4_ + 2) * 6;
  local_148 = local_158.Data.AllocatorInstance.Data._0_4_;
  iStack_144 = local_158.Data.AllocatorInstance.Data._4_4_;
  iStack_140 = local_158.Data.ArrayNum;
  iStack_13c = local_158.Data.ArrayMax;
  local_128 = puVar3 + 0xc;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_118);
  if (((*(int *)&param_3->field_0x10 == 0) || (*(longlong **)&param_3->field_0x8 == (longlong *)0x0)
      ) || (cVar8 = (**(code **)(**(longlong **)&param_3->field_0x8 + 0x38))(), cVar8 == '\0')) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_118);
  if (bVar9) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_100);
    if (*(int *)&param_3->field_0x10 == 0) {
      plVar13 = (longlong *)0x0;
    }
    else {
      plVar13 = *(longlong **)&param_3->field_0x8;
    }
    (**(code **)(*plVar13 + 0x60))(plVar13,&this->TileBBExpandedForAgent,&local_90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_100);
    if ((int)local_88 == 0) goto LAB_146e402a2;
  }
  iVar10 = local_158.Data.ArrayNum * 3;
  iVar7 = local_158.Data.AllocatorInstance.Data._4_4_ * 3;
  if (0 < iVar10) {
    if (6 < (byte)LogNavigationDataBuild._0_1_) {
      pFVar11 = FNavigationElement::GetFullName((param_1->SourceElement).Object,&local_158);
      if ((pFVar11->Data).ArrayNum == 0) {
        local_188 = (TArray<double,TSizedDefaultAllocator<32>_> *)0x15060d16c;
      }
      else {
        local_188 = (TArray<double,TSizedDefaultAllocator<32>_> *)
                    (pFVar11->Data).AllocatorInstance.Data;
      }
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNavigationDataBuild);
      if ((void *)CONCAT44(local_158.Data.AllocatorInstance.Data._4_4_,
                           local_158.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_158.Data.AllocatorInstance.Data._4_4_,
                                       local_158.Data.AllocatorInstance.Data._0_4_));
      }
    }
    TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_e8,iVar7,Default);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_d8,iVar10,Default);
    memcpy(local_e8.AllocatorInstance.Data,puVar3 + 0xc,(longlong)iVar7 << 3);
    memcpy(local_d8.AllocatorInstance.Data,local_120,(longlong)iVar10 << 2);
    pTVar12 = Unreal2RecastBox(&local_78,&param_1->Bounds);
    pTVar2 = &this->RawGeometry;
    pTVar4 = (TArray<double,TSizedDefaultAllocator<32>_> *)(pTVar2->AllocatorInstance).Data;
    local_c8 = (pTVar12->Min).field0_0x0._s_0.X;
    dStack_c0 = (pTVar12->Min).field0_0x0._s_0.Y;
    local_b8 = (pTVar12->Min).field0_0x0._s_0.Z;
    dStack_b0 = (pTVar12->Max).field0_0x0._s_0.X;
    local_a8 = (pTVar12->Max).field0_0x0._s_0.Y;
    dStack_a0 = (pTVar12->Max).field0_0x0._s_0.Z;
    local_98._0_1_ = pTVar12->IsValid;
    local_98._1_1_ = pTVar12->Pad[0];
    local_98._2_1_ = pTVar12->Pad[1];
    local_98._3_1_ = pTVar12->Pad[2];
    local_98._4_1_ = pTVar12->Pad[3];
    local_98._5_1_ = pTVar12->Pad[4];
    local_98._6_1_ = pTVar12->Pad[5];
    local_98._7_1_ = pTVar12->Pad[6];
    if ((pTVar4 <= &local_e8) &&
       (lVar14 = (longlong)(this->RawGeometry).ArrayMax, &local_e8 < pTVar4 + lVar14 * 7)) {
      local_170 = (longlong)(this->RawGeometry).ArrayNum;
      local_168 = 0x70;
      local_188 = &local_e8;
      local_180 = pTVar4;
      local_178 = lVar14;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar10 = (this->RawGeometry).ArrayNum;
    piVar1 = &(this->RawGeometry).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x870,&pTVar2->AllocatorInstance,piVar1);
    }
    lVar14 = (longlong)iVar10 * 0x70;
    (this->RawGeometry).ArrayNum = iVar10 + 1;
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    *(undefined8 *)(pFVar5 + lVar14) = 0;
    *(FScriptContainerElement **)(pFVar5 + lVar14) = local_e8.AllocatorInstance.Data;
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar5 + lVar14 + 8) = local_e8.ArrayNum;
    *(int *)(pFVar5 + lVar14 + 0xc) = local_e8.ArrayMax;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    *(undefined8 *)(pFVar5 + lVar14 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar5 + lVar14 + 0x10) = local_d8.AllocatorInstance.Data;
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar5 + lVar14 + 0x18) = local_d8.ArrayNum;
    *(int *)(pFVar5 + lVar14 + 0x1c) = local_d8.ArrayMax;
    local_d8.ArrayNum = 0;
    local_d8.ArrayMax = 0;
    *(double *)(pFVar5 + lVar14 + 0x20) = local_c8;
    *(double *)(pFVar5 + lVar14 + 0x20 + 8) = dStack_c0;
    *(double *)(pFVar5 + lVar14 + 0x30) = local_b8;
    *(double *)(pFVar5 + lVar14 + 0x30 + 8) = dStack_b0;
    *(double *)(pFVar5 + lVar14 + 0x40) = local_a8;
    *(double *)(pFVar5 + lVar14 + 0x40 + 8) = dStack_a0;
    *(ulonglong *)(pFVar5 + lVar14 + 0x50) = local_98;
    *(undefined8 *)(pFVar5 + lVar14 + 0x58) = 0;
    *(void **)(pFVar5 + lVar14 + 0x58) = local_90;
    local_90 = (void *)0x0;
    *(int *)(pFVar5 + lVar14 + 0x60) = (int)local_88;
    *(undefined4 *)(pFVar5 + lVar14 + 100) = local_88._4_4_;
    local_88 = 0;
    *(uint *)(pFVar5 + lVar14 + 0x68) = local_80;
  }
LAB_146e402a2:
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return;
}

// AppendModifier @ 146e40310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::AppendModifier
          (FRecastTileGenerator *this,FCompositeNavModifier *param_1,
          TDelegate<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  TArray<FSimpleLinkNavModifier,TSizedDefaultAllocator<32>_> *this_00;
  TArray<FRecastAreaNavModifierElement,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined4 uVar2;
  FSimpleLinkNavModifier *pFVar3;
  FAreaNavModifier *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  char cVar9;
  ENavigationDataResolution EVar10;
  int iVar11;
  uint uVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *pTVar15;
  void *pvVar16;
  UObject *pUVar17;
  uint uVar18;
  longlong *plVar19;
  ulong64 uVar20;
  longlong lVar21;
  TTransform<double> *this_01;
  int iVar22;
  int *piVar23;
  FRecastTileGenerator *pFVar24;
  FScriptContainerElement *pFVar25;
  TTransform<double> *pTVar26;
  FScriptContainerElement *pFVar27;
  FScriptContainerElement *pFVar28;
  undefined1 auStackY_278 [32];
  undefined1 local_228;
  undefined1 local_227 [7];
  ForAnyElementType local_220;
  undefined8 local_218;
  TTransform<double> *local_210;
  undefined8 local_208;
  undefined2 local_200;
  int local_1f8;
  FRecastTileGenerator *local_1f0;
  TStringBuilderBase<wchar_t> local_1e8;
  FString local_1c8;
  FCompositeNavModifier *local_1b8;
  TDelegate<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  *local_1b0;
  FName local_1a8;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FReadAccessScope local_130;
  FReadAccessScope local_118;
  FSimpleLinkNavModifier local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  this_00 = &this->OffmeshLinks;
  local_1f0 = this;
  local_1b8 = param_1;
  local_1b0 = param_2;
  TArray<FSimpleLinkNavModifier,TSizedDefaultAllocator<32>_>::
  Append<FSimpleLinkNavModifier,TSizedDefaultAllocator<32>_>(this_00,&param_1->SimpleLinks);
  local_1f8 = 0;
  pFVar24 = this;
  if (0 < (param_1->CustomLinks).ArrayNum) {
    pFVar27 = (param_1->CustomLinks).AllocatorInstance.Data + 0x10;
    do {
      piVar23 = &(this->OffmeshLinks).ArrayMax;
      pUVar13 = (UClass *)FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar27 + 0x60));
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar13 != (UClass *)0x0) goto LAB_146e403af;
LAB_146e403dd:
        pUVar13 = (UClass *)0x0;
      }
      else {
        if (pUVar13 == (UClass *)0x0) goto LAB_146e403dd;
        UE::GC::MarkAsReachable((UObject *)pUVar13);
LAB_146e403af:
        pUVar14 = Z_Construct_UClass_UNavLinkDefinition_NoRegister();
        if (pUVar14 == (UClass *)0x0) goto LAB_146e403dd;
        iVar11 = (int)pUVar14->_padding_;
        if (((int)pUVar13->_padding_ < iVar11) ||
           ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar11 * 8) !=
            &pUVar14->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (!bVar8) goto LAB_146e403dd;
      }
      pTVar15 = UNavLinkDefinition::GetLinksDefinition(pUVar13);
      local_f8.LocalToWorld.Rotation.XY.m128d_f64[0] = *(double *)pFVar27;
      local_f8.LocalToWorld.Rotation.XY.m128d_f64[1] = *(double *)(pFVar27 + 8);
      local_f8.LocalToWorld.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar27 + 0x10);
      local_f8.LocalToWorld.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar27 + 0x18);
      local_f8._0_4_ = local_f8._0_4_ & 0xfffffffe;
      local_f8._160_4_ = local_f8._160_4_ & 0xfffffff8;
      local_f8.LocalToWorld.Translation.XY.m128d_f64[0] = *(double *)(pFVar27 + 0x20);
      local_f8.LocalToWorld.Translation.XY.m128d_f64[1] = *(double *)(pFVar27 + 0x28);
      local_f8.LocalToWorld.Translation.ZW.m128d_f64[0] = *(double *)(pFVar27 + 0x30);
      local_f8.LocalToWorld.Translation.ZW.m128d_f64[1] = *(double *)(pFVar27 + 0x38);
      local_f8.LocalToWorld.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar27 + 0x40);
      local_f8.LocalToWorld.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar27 + 0x48);
      local_f8.LocalToWorld.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar27 + 0x50);
      local_f8.LocalToWorld.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar27 + 0x58);
      local_f8.Links.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.Links.ArrayNum = 0;
      local_f8.Links.ArrayMax = 0;
      local_f8.SegmentLinks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.SegmentLinks.ArrayNum = 0;
      local_f8.SegmentLinks.ArrayMax = 0;
      local_f8.NavLinkId.Id = 0;
      if (0 < pTVar15->ArrayNum) {
        local_f8.NavLinkId.Id = *(ulong64 *)((pTVar15->AllocatorInstance).Data + 0x10);
        FSimpleLinkNavModifier::SetLinks(&local_f8,pTVar15);
      }
      pFVar3 = (FSimpleLinkNavModifier *)(this_00->AllocatorInstance).Data;
      if (((pFVar3 <= &local_f8) && (&local_f8 < pFVar3 + *piVar23)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = (this->OffmeshLinks).ArrayNum;
      if (iVar11 == *piVar23) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10b0,&this_00->AllocatorInstance,piVar23);
      }
      FVar7.Data = local_f8.Links.AllocatorInstance.Data;
      pFVar28 = (this_00->AllocatorInstance).Data;
      lVar21 = (longlong)iVar11 * 0xb0;
      (this->OffmeshLinks).ArrayNum = iVar11 + 1;
      pFVar25 = pFVar28 + lVar21 + 8;
      *(undefined4 *)(pFVar28 + lVar21) = local_f8._0_4_;
      *(undefined8 *)&pFVar25->field_0x0 = 0;
      iVar11 = local_f8.Links.ArrayNum;
      *(int *)&pFVar25[8].field_0x0 = local_f8.Links.ArrayNum;
      if (local_f8.Links.ArrayNum == 0) {
        *(int *)(pFVar28 + lVar21 + 0x14) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x70,8,local_f8.Links.ArrayNum,0,(ForAnyElementType *)pFVar25,
                   local_f8.Links.ArrayNum,(int *)(pFVar28 + lVar21 + 0x14));
        ConstructItems<FNavigationLink,FNavigationLink,int>
                  (*(void **)&pFVar25->field_0x0,(FNavigationLink *)FVar7.Data,iVar11);
      }
      FVar7.Data = local_f8.SegmentLinks.AllocatorInstance.Data;
      pFVar25 = pFVar28 + lVar21 + 0x18;
      *(undefined8 *)&pFVar25->field_0x0 = 0;
      iVar11 = local_f8.SegmentLinks.ArrayNum;
      *(int *)&pFVar25[8].field_0x0 = local_f8.SegmentLinks.ArrayNum;
      if (local_f8.SegmentLinks.ArrayNum == 0) {
        *(int *)(pFVar28 + lVar21 + 0x24) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa0,8,local_f8.SegmentLinks.ArrayNum,0,(ForAnyElementType *)pFVar25,
                   local_f8.SegmentLinks.ArrayNum,(int *)(pFVar28 + lVar21 + 0x24));
        ConstructItems<FNavigationSegmentLink,FNavigationSegmentLink,int>
                  (*(void **)&pFVar25->field_0x0,(FNavigationSegmentLink *)FVar7.Data,iVar11);
      }
      *(double *)(pFVar28 + lVar21 + 0x30) = local_f8.LocalToWorld.Rotation.XY.m128d_f64[0];
      *(double *)(pFVar28 + lVar21 + 0x30 + 8) = local_f8.LocalToWorld.Rotation.XY.m128d_f64[1];
      *(double *)(pFVar28 + lVar21 + 0x40) = local_f8.LocalToWorld.Rotation.ZW.m128d_f64[0];
      *(double *)(pFVar28 + lVar21 + 0x40 + 8) = local_f8.LocalToWorld.Rotation.ZW.m128d_f64[1];
      *(double *)(pFVar28 + lVar21 + 0x50) = local_f8.LocalToWorld.Translation.XY.m128d_f64[0];
      *(double *)(pFVar28 + lVar21 + 0x50 + 8) = local_f8.LocalToWorld.Translation.XY.m128d_f64[1];
      *(double *)(pFVar28 + lVar21 + 0x60) = local_f8.LocalToWorld.Translation.ZW.m128d_f64[0];
      *(double *)(pFVar28 + lVar21 + 0x60 + 8) = local_f8.LocalToWorld.Translation.ZW.m128d_f64[1];
      *(double *)(pFVar28 + lVar21 + 0x70) = local_f8.LocalToWorld.Scale3D.XY.m128d_f64[0];
      *(double *)(pFVar28 + lVar21 + 0x70 + 8) = local_f8.LocalToWorld.Scale3D.XY.m128d_f64[1];
      *(double *)(pFVar28 + lVar21 + 0x80) = local_f8.LocalToWorld.Scale3D.ZW.m128d_f64[0];
      *(double *)(pFVar28 + lVar21 + 0x80 + 8) = local_f8.LocalToWorld.Scale3D.ZW.m128d_f64[1];
      *(int *)(pFVar28 + lVar21 + 0x90) = local_f8.UserId;
      *(ulong64 *)(pFVar28 + lVar21 + 0x98) = local_f8.NavLinkId.Id;
      uVar12 = *(uint *)(pFVar28 + lVar21 + 0xa0);
      uVar18 = local_f8._160_4_ & 1;
      *(uint *)(pFVar28 + lVar21 + 0xa0) = uVar18 | uVar12 & 0xfffffffe;
      *(uint *)(pFVar28 + lVar21 + 0xa0) = local_f8._160_4_ & 2 | uVar18 | uVar12 & 0xfffffffc;
      *(uint *)(pFVar28 + lVar21 + 0xa0) =
           local_f8._160_4_ & 4 | local_f8._160_4_ & 2 | uVar18 | uVar12 & 0xfffffff8;
      if ((FNavigationSegmentLink *)local_f8.SegmentLinks.AllocatorInstance.Data !=
          (FNavigationSegmentLink *)0x0) {
        FMemory::Free(local_f8.SegmentLinks.AllocatorInstance.Data);
      }
      if ((FNavigationLink *)local_f8.Links.AllocatorInstance.Data != (FNavigationLink *)0x0) {
        FMemory::Free(local_f8.Links.AllocatorInstance.Data);
      }
      pFVar27 = pFVar27 + 0x80;
      local_1f8 = local_1f8 + 1;
      param_1 = local_1b8;
      param_2 = local_1b0;
      pFVar24 = local_1f0;
    } while (local_1f8 < (local_1b8->CustomLinks).ArrayNum);
  }
  uVar2 = *(undefined4 *)&pFVar24->field_0x14;
  if ((ZPULL(uVar2,4,1) != 0) || (uVar12 = 0, param_1->bRasterizeAsFilledConvexVolume != 0)) {
    uVar12 = 0x10;
  }
  *(uint *)&pFVar24->field_0x14 = uVar2 & 0xffffffef | uVar12;
  if ((param_1->Areas).ArrayNum == 0) {
    if (FCompositeNavModifier::bEnableNavMeshResolutions == false) {
      return;
    }
    if (param_1->NavMeshResolution == Invalid) {
      return;
    }
  }
  if ((pFVar24->bHasLowAreaModifiers != 0) || (uVar18 = 0, param_1->bHasLowAreaModifiers != 0)) {
    uVar18 = 8;
  }
  local_220.Data = (FScriptContainerElement *)0x0;
  local_218 = 0;
  *(uint *)&pFVar24->field_0x14 = uVar2 & 0xffffffe7 | uVar12 | uVar18;
  local_210 = (TTransform<double> *)0x0;
  local_208 = 0;
  local_200 = 3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_130);
  if (((*(int *)&param_2->field_0x10 == 0) || (*(longlong **)&param_2->field_0x8 == (longlong *)0x0)
      ) || (cVar9 = (**(code **)(**(longlong **)&param_2->field_0x8 + 0x38))(), cVar9 == '\0')) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_130);
  if (bVar8) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_118);
    if (*(int *)&param_2->field_0x10 == 0) {
      plVar19 = (longlong *)0x0;
    }
    else {
      plVar19 = *(longlong **)&param_2->field_0x8;
    }
    (**(code **)(*plVar19 + 0x60))(plVar19,&pFVar24->TileBBExpandedForAgent,&local_210);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_118);
    if ((int)local_208 == 0) goto LAB_146e40d5a;
  }
  if ((TArray<FAreaNavModifier,TSizedDefaultAllocator<32>_> *)&local_220 != &param_1->Areas) {
    DestructItems<FAreaNavModifier,int>((FAreaNavModifier *)local_220.Data,(int)local_218);
    iVar11 = (param_1->Areas).ArrayNum;
    pFVar4 = (FAreaNavModifier *)(param_1->Areas).AllocatorInstance.Data;
    local_218 = CONCAT44(local_218._4_4_,iVar11);
    if ((iVar11 == 0) && (local_218._4_4_ == 0)) {
      local_218 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,iVar11,local_218._4_4_,&local_220,iVar11,(int *)((longlong)&local_218 + 4));
      ConstructItems<FAreaNavModifier,FAreaNavModifier,int>(local_220.Data,pFVar4,iVar11);
    }
  }
  if (FCompositeNavModifier::bEnableNavMeshResolutions == false) {
    EVar10 = Invalid;
  }
  else {
    EVar10 = param_1->NavMeshResolution;
  }
  local_200 = CONCAT11((char)(*(uint *)&param_1->field_0x50 >> 5),EVar10) & 0x1ff;
  if ((((pFVar24->TileDebugSettings).bEnabled != 0) &&
      (bVar8 = FRecastNavMeshTileGenerationDebug::IsWithinTileCoordinates
                         (&pFVar24->TileDebugSettings,pFVar24->TileX,pFVar24->TileY), bVar8)) ||
     ((pFVar24->TileX == GNavmeshDebugTileX && (pFVar24->TileY == GNavmeshDebugTileY)))) {
    iVar11 = (int)local_208;
    local_1e8.End = (wchar_t *)0x0;
    local_1e8.Base = (wchar_t *)0x0;
    local_1e8.CurPos = (wchar_t *)0x0;
    local_1e8.bIsDynamic = false;
    local_1e8.bIsExternal = false;
    pTVar26 = local_210 + (int)local_208;
    this_01 = local_210;
    while( true ) {
      if ((int)local_208 != iVar11) {
        local_228 = 0;
        `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_228);
      }
      if (this_01 == pTVar26) break;
      UE::Math::TTransform<double>::ToString(this_01,&local_160);
      ::FString::PrintfImpl(&local_1c8,L" %s");
      FVar7.Data = local_1c8.Data.AllocatorInstance.Data;
      iVar22 = local_1c8.Data.ArrayNum + -1;
      if (local_1c8.Data.ArrayNum == 0) {
        iVar22 = 0;
      }
      uVar20 = (ulong64)iVar22;
      if (local_1e8.End < local_1e8.CurPos + uVar20) {
        TStringBuilderBase<wchar_t>::Extend(&local_1e8,uVar20);
      }
      if (iVar22 != 0) {
        pvVar16 = FGenericPlatformString::Memcpy(local_1e8.CurPos,FVar7.Data,uVar20 * 2);
        local_1e8.CurPos = (wchar_t *)((longlong)pvVar16 + uVar20 * 2);
      }
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
      this_01 = this_01 + 1;
    }
    if (4 < (byte)LogNavigation._0_1_) {
      if (local_1e8.End < local_1e8.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_1e8,1);
      }
      *local_1e8.CurPos = L'\0';
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    }
    iVar11 = (int)local_218;
    pFVar27 = local_220.Data + 0x40;
    pFVar28 = local_220.Data + (longlong)(int)local_218 * 0x70;
    while( true ) {
      if ((int)local_218 != iVar11) {
        local_227[0] = 0;
        `TCheckedPointerIterator<FAreaNavModifier,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_227);
      }
      if (pFVar27 + -0x40 == pFVar28) break;
      if (4 < (byte)LogNavigation._0_1_) {
        ::FString::PrintfImpl(&local_190,L"X=%3.3f Y=%3.3f Z=%3.3f");
        ::FString::PrintfImpl(&local_1a0,L"X=%3.3f Y=%3.3f Z=%3.3f");
        ::FString::PrintfImpl(&local_170,L"IsValid=%s, Min=(%s), Max=(%s)");
        if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
        }
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
        pUVar17 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar27 + -0x34));
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar17 != (UObject *)0x0) goto LAB_146e40b46;
LAB_146e40b74:
          pUVar17 = (UObject *)0x0;
        }
        else {
          if (pUVar17 == (UObject *)0x0) goto LAB_146e40b74;
          UE::GC::MarkAsReachable(pUVar17);
LAB_146e40b46:
          pUVar13 = Z_Construct_UClass_UNavAreaBase_NoRegister();
          if (pUVar13 == (UClass *)0x0) goto LAB_146e40b74;
          iVar22 = (int)pUVar13->_padding_;
          if ((*(int *)&pUVar17[1].field_0x10 < iVar22) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)&pUVar17[1].field_0x8 + (longlong)iVar22 * 8) !=
              &pUVar13->_padding_)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (!bVar8) goto LAB_146e40b74;
        }
        local_1a8.ComparisonIndex.Value = *(uint *)&pUVar17->field_0x18;
        local_1a8.Number = *(uint *)&pUVar17->field_0x1c;
        ::FName::ToString(&local_1a8,&local_180);
        ::LexToString(&local_140,(uint)(byte)pFVar27[0x29]);
        ::LexToString(&local_150,(uint)(byte)pFVar27[0x28]);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
        }
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
      }
      pFVar27 = pFVar27 + 0x70;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1e8);
    pFVar24 = local_1f0;
  }
  pTVar1 = &pFVar24->Modifiers;
  pFVar27 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar27 <= (FScriptContainerElement *)&local_220) &&
      ((FScriptContainerElement *)&local_220 <
       pFVar27 + (longlong)(pFVar24->Modifiers).ArrayMax * 0x28)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar11 = (pFVar24->Modifiers).ArrayNum;
  piVar23 = &(pFVar24->Modifiers).ArrayMax;
  if (iVar11 == *piVar23) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&pTVar1->AllocatorInstance,piVar23);
  }
  lVar21 = (longlong)iVar11;
  (pFVar24->Modifiers).ArrayNum = iVar11 + 1;
  pFVar27 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar27 + lVar21 * 0x28) = 0;
  *(FScriptContainerElement **)(pFVar27 + lVar21 * 0x28) = local_220.Data;
  local_220.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar27 + lVar21 * 0x28 + 8) = (int)local_218;
  *(int *)(pFVar27 + lVar21 * 0x28 + 0xc) = local_218._4_4_;
  local_218 = 0;
  *(undefined8 *)(pFVar27 + lVar21 * 0x28 + 0x10) = 0;
  *(TTransform<double> **)(pFVar27 + lVar21 * 0x28 + 0x10) = local_210;
  local_210 = (TTransform<double> *)0x0;
  *(int *)(pFVar27 + lVar21 * 0x28 + 0x18) = (int)local_208;
  *(undefined4 *)(pFVar27 + lVar21 * 0x28 + 0x1c) = local_208._4_4_;
  local_208 = 0;
  pFVar27[lVar21 * 0x28 + 0x20] = local_200._0_1_;
  pFVar27[lVar21 * 0x28 + 0x21] = local_200._1_1_;
LAB_146e40d5a:
  if (local_210 != (TTransform<double> *)0x0) {
    FMemory::Free(local_210);
  }
  DestructItems<FAreaNavModifier,int>((FAreaNavModifier *)local_220.Data,(int)local_218);
  if ((FAreaNavModifier *)local_220.Data != (FAreaNavModifier *)0x0) {
    FMemory::Free(local_220.Data);
  }
  return;
}

// ApplyVoxelFilter @ 146e40e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::ApplyVoxelFilter
          (FRecastTileGenerator *this,rcHeightfield *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  rcSpan *prVar10;
  code *pcVar11;
  double dVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_Navigation_TileVoxelFilteringAsync> FVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  longlong lVar22;
  FName FVar23;
  double *pdVar24;
  rcSpan **pprVar25;
  int iVar26;
  int iVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  uint uVar35;
  uint uVar36;
  undefined1 auStackY_1c8 [32];
  ForAnyElementType local_160;
  undefined8 local_158;
  FName local_150;
  FColor_u_0 local_148 [2];
  FName local_140;
  double local_138;
  FName local_130;
  FName local_120;
  undefined1 local_118 [16];
  double local_108;
  undefined1 auStack_100 [16];
  double dStack_f0;
  undefined1 local_e8;
  undefined7 uStack_e7;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  FVar19 = StatPtr_STAT_Navigation_TileVoxelFilteringAsync;
  if (StatPtr_STAT_Navigation_TileVoxelFilteringAsync ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_TileVoxelFilteringAsync>)0x0) {
    pFVar18 = ::FName::FName(&local_120,"STAT_Navigation_TileVoxelFilteringAsync");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_Navigation_TileVoxelFilteringAsync>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Navigation_TileVoxelFilteringAsync,*pFVar18,
                        L"Async voxel filtering","STATGROUP_Navigation","STATCAT_Advanced",
                        L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar19;
  bVar13 = false;
  bVar14 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  bVar15 = false;
  bVar16 = false;
  if ((FVar23.ComparisonIndex.Value.Value != 0) || (FVar23.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar13 = false;
      bVar14 = true;
      bVar15 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_140.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_140.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_140,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x8e5);
        bVar13 = true;
        bVar14 = true;
        bVar15 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_150 = FVar23;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar15 = true;
      goto LAB_146e40fbb;
    }
  }
  bVar14 = bVar16;
  bVar13 = bVar15;
  bVar15 = false;
  FVar23 = local_130;
LAB_146e40fbb:
  if (param_1 != (rcHeightfield *)0x0) {
    dVar1 = param_1->cs;
    uVar35 = *(uint *)&(this->InclusionBounds).field_0x10;
    local_150 = (FName)param_1->bmin[0];
    local_138 = param_1->bmin[2];
    iVar7 = param_1->width;
    iVar8 = param_1->height;
    dVar2 = param_1->ch;
    dVar3 = param_1->bmin[1];
    pdVar24 = *(double **)&this->InclusionBounds;
    dVar34 = dVar1 * param_2;
    if (uVar35 == 1) {
      dVar28 = *pdVar24;
      dVar4 = pdVar24[1];
      dVar30 = pdVar24[2];
      dVar32 = pdVar24[3];
      pprVar25 = param_1->spans;
      iVar27 = 0;
      dVar5 = pdVar24[5];
      dVar6 = pdVar24[4];
      if (0 < iVar8) {
        uVar35 = (uint)__xmm_80000000000000008000000000000000;
        uVar36 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        do {
          iVar26 = 0;
          if (0 < iVar7) {
            dVar33 = (double)iVar27 * dVar1 + local_138;
            dVar33 = (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) ^ uVar36,
                                      SUB84(dVar33,0) ^ uVar35);
            do {
              dVar29 = (double)iVar26 * dVar1 + (double)local_150;
              dVar29 = (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) ^ uVar36,
                                        SUB84(dVar29,0) ^ uVar35);
              for (prVar10 = *pprVar25; prVar10 != (rcSpan *)0x0; prVar10 = prVar10->next) {
                uVar9 = *(undefined4 *)&(prVar10->data).field_0x8;
                if (ZPULL(uVar9,0,6) == 0x3f) {
                  dVar12 = (double)prVar10.smin * dVar2 + dVar3;
                  dVar31 = (double)(prVar10->data).smax * dVar2 + dVar3;
                  if ((((dVar29 - dVar1 <= dVar28 - dVar34) || (dVar34 + dVar32 <= dVar29 - dVar1))
                      || (((dVar33 - dVar1 <= dVar4 - dVar34 ||
                           ((dVar34 + dVar6 <= dVar33 - dVar1 || (dVar12 <= dVar30 - dVar34)))) ||
                          (dVar34 + dVar5 <= dVar12)))) &&
                     (((((dVar29 <= dVar28 - dVar34 || (dVar34 + dVar32 <= dVar29)) ||
                        (dVar33 <= dVar4 - dVar34)) ||
                       ((dVar34 + dVar6 <= dVar33 || (dVar31 <= dVar30 - dVar34)))) ||
                      (dVar34 + dVar5 <= dVar31)))) {
                    *(uint *)&(prVar10->data).field_0x8 = uVar9 & 0xffffffc0;
                  }
                }
              }
              pprVar25 = pprVar25 + 1;
              iVar26 = iVar26 + 1;
            } while (iVar26 < iVar7);
          }
          iVar27 = iVar27 + 1;
        } while (iVar27 < iVar8);
      }
    }
    else {
      local_160.Data = (FScriptContainerElement *)0x0;
      local_158 = 0;
      if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
      }
      iVar27 = 0;
      if (0 < (int)uVar35) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,uVar35,&local_160,0,(int *)((longlong)&local_158 + 4));
        iVar27 = (int)local_158;
      }
      iVar26 = 0;
      if (0 < *(int *)&(this->InclusionBounds).field_0x10) {
        pdVar24 = pdVar24 + 4;
        do {
          local_e8 = 1;
          local_118._8_4_ = SUB84(pdVar24[-3] - dVar34,0);
          local_118._0_8_ = pdVar24[-4] - dVar34;
          local_118._12_4_ = (int)((ulonglong)(pdVar24[-3] - dVar34) >> 0x20);
          local_108 = pdVar24[-2] - dVar34;
          auStack_100._8_4_ = SUB84(*pdVar24 + dVar34,0);
          auStack_100._0_8_ = pdVar24[-1] + dVar34;
          auStack_100._12_4_ = (int)((ulonglong)(*pdVar24 + dVar34) >> 0x20);
          dStack_f0 = dVar34 + pdVar24[1];
          iVar17 = iVar27;
          if ((local_160.Data <= (FScriptContainerElement *)local_118) &&
             ((FScriptContainerElement *)local_118 <
              local_160.Data + (longlong)local_158._4_4_ * 0x38)) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar16) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            iVar17 = (int)local_158;
          }
          if (iVar17 == local_158._4_4_) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x838,&local_160,(int *)((longlong)&local_158 + 4));
          }
          iVar27 = iVar17 + 1;
          local_158 = CONCAT44(local_158._4_4_,iVar27);
          iVar26 = iVar26 + 1;
          lVar22 = (longlong)iVar17 * 0x38;
          pdVar24 = pdVar24 + 7;
          *(undefined8 *)(local_160.Data + lVar22) = local_118._0_8_;
          *(undefined8 *)(local_160.Data + lVar22 + 8) = local_118._8_8_;
          *(double *)(local_160.Data + lVar22 + 0x10) = local_108;
          *(undefined8 *)(local_160.Data + lVar22 + 0x10 + 8) = auStack_100._0_8_;
          *(undefined8 *)(local_160.Data + lVar22 + 0x20) = auStack_100._8_8_;
          *(double *)(local_160.Data + lVar22 + 0x20 + 8) = dStack_f0;
          *(ulonglong *)(local_160.Data + lVar22 + 0x30) = CONCAT71(uStack_e7,local_e8);
        } while (iVar26 < *(int *)&(this->InclusionBounds).field_0x10);
      }
      pprVar25 = param_1->spans;
      iVar26 = 0;
      if (0 < iVar8) {
        uVar35 = (uint)__xmm_80000000000000008000000000000000;
        uVar36 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        do {
          iVar17 = 0;
          if (0 < iVar7) {
            dVar34 = (double)iVar26 * dVar1 + local_138;
            dVar34 = (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) ^ uVar36,
                                      SUB84(dVar34,0) ^ uVar35);
            do {
              dVar28 = (double)iVar17 * dVar1 + (double)local_150;
              dVar28 = (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) ^ uVar36,
                                        SUB84(dVar28,0) ^ uVar35);
              for (prVar10 = *pprVar25; prVar10 != (rcSpan *)0x0; prVar10 = prVar10->next) {
                uVar9 = *(undefined4 *)&(prVar10->data).field_0x8;
                if (ZPULL(uVar9,0,6) == 0x3f) {
                  iVar21 = 0;
                  dVar32 = dVar34 - dVar1;
                  dVar30 = (double)prVar10.smin * dVar2 + dVar3;
                  dVar4 = (double)(prVar10->data).smax * dVar2 + dVar3;
                  if (0 < iVar27) {
                    pFVar20 = local_160.Data + 8;
                    do {
                      if (((((*(double *)(pFVar20 + -8) < dVar28 - dVar1) &&
                            (dVar28 - dVar1 < *(double *)(pFVar20 + 0x10))) &&
                           (*(double *)pFVar20 <= dVar32 && dVar32 != *(double *)pFVar20)) &&
                          (((dVar32 < *(double *)(pFVar20 + 0x18) &&
                            (*(double *)(pFVar20 + 8) <= dVar30 &&
                             dVar30 != *(double *)(pFVar20 + 8))) &&
                           (dVar30 < *(double *)(pFVar20 + 0x20))))) ||
                         (((*(double *)(pFVar20 + -8) < dVar28 &&
                           (dVar28 < *(double *)(pFVar20 + 0x10))) &&
                          ((*(double *)pFVar20 <= dVar34 && dVar34 != *(double *)pFVar20 &&
                           (((dVar34 < *(double *)(pFVar20 + 0x18) &&
                             (*(double *)(pFVar20 + 8) <= dVar4 && dVar4 != *(double *)(pFVar20 + 8)
                             )) && (dVar4 < *(double *)(pFVar20 + 0x20))))))))) goto LAB_146e414c0;
                      iVar21 = iVar21 + 1;
                      pFVar20 = pFVar20 + 0x38;
                    } while (iVar21 < iVar27);
                  }
                  *(uint *)&(prVar10->data).field_0x8 = uVar9 & 0xffffffc0;
                }
LAB_146e414c0:
              }
              pprVar25 = pprVar25 + 1;
              iVar17 = iVar17 + 1;
            } while (iVar17 < iVar7);
          }
          iVar26 = iVar26 + 1;
        } while (iVar26 < iVar8);
      }
      if (local_160.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data);
      }
    }
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  return;
}

// BuildCompactHeightField @ 146e42170

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FRecastTileGenerator::BuildCompactHeightField
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildCompactHeightField> FVar8;
  rcCompactHeightfield *prVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  char *pcVar14;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_38;
  
  FVar13.Value = 0;
  FVar8 = StatPtr_STAT_Navigation_RecastBuildCompactHeightField;
  if (StatPtr_STAT_Navigation_RecastBuildCompactHeightField ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildCompactHeightField>)0x0) {
    pFVar7 = ::FName::FName(&local_res18,"STAT_Navigation_RecastBuildCompactHeightField");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildCompactHeightField>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_Navigation_RecastBuildCompactHeightField,*pFVar7,
                       L"Recast: build compact height field","STATGROUP_Navigation",
                       "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar8;
  bVar2 = false;
  bVar4 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xcb8);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar3 = true;
      FVar13.Value = FVar11.Value;
      goto LAB_146e422d9;
    }
  }
  bVar3 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_146e422d9:
  prVar9 = rcAllocCompactHeightfield();
  this->CompactHF = prVar9;
  if (prVar9 == (rcCompactHeightfield *)0x0) {
    rcContext::log((rcContext *)param_1,RC_LOG_ERROR,
                   "BuildCompactHeightField: Out of memory \'CompactHF\'.");
    bVar5 = false;
  }
  else {
    bVar5 = rcBuildCompactHeightfield
                      ((rcContext *)param_1,(int)(this->TileConfig)._padding_,
                       *(int *)((longlong)&(this->TileConfig)._padding_ + 4),this->SolidHF,prVar9);
    if (bVar5) {
      bVar5 = true;
    }
    else {
      iVar6 = rcGetHeightFieldSpanCount((rcContext *)param_1,this->SolidHF);
      pcVar14 = "BuildCompactHeightField: Could not build compact data.";
      if (iVar6 < 1) {
        pcVar14 = "BuildCompactHeightField: no walkable spans - aborting";
      }
      rcContext::log((rcContext *)param_1,(0 < iVar6) + RC_LOG_WARNING,pcVar14);
      bVar5 = false;
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar5;
}

// BuildCompactHeightField @ 146e42470

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FRecastTileGenerator::BuildCompactHeightField
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,
          FTileRasterizationContext *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildCompactHeightField> FVar8;
  rcCompactHeightfield *prVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  char *pcVar14;
  LARGE_INTEGER LStackX_8;
  FName FStackX_18;
  FStatMessage FStack_38;
  
  FVar13.Value = 0;
  FVar8 = StatPtr_STAT_Navigation_RecastBuildCompactHeightField;
  if (StatPtr_STAT_Navigation_RecastBuildCompactHeightField ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildCompactHeightField>)0x0) {
    pFVar7 = ::FName::FName(&FStackX_18,"STAT_Navigation_RecastBuildCompactHeightField");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildCompactHeightField>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_Navigation_RecastBuildCompactHeightField,*pFVar7,
                       L"Recast: build compact height field","STATGROUP_Navigation",
                       "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar8;
  bVar2 = false;
  bVar4 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_8.s.LowPart = FVar11.Value;
        LStackX_8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xcb8);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_8.s.LowPart = FVar11.Value;
      LStackX_8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar3 = true;
      FVar13.Value = FVar11.Value;
      goto LAB_146e422d9;
    }
  }
  bVar3 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_146e422d9:
  prVar9 = rcAllocCompactHeightfield();
  this->CompactHF = prVar9;
  if (prVar9 == (rcCompactHeightfield *)0x0) {
    rcContext::log((rcContext *)param_1,RC_LOG_ERROR,
                   "BuildCompactHeightField: Out of memory \'CompactHF\'.");
    bVar5 = false;
  }
  else {
    bVar5 = rcBuildCompactHeightfield
                      ((rcContext *)param_1,(int)(this->TileConfig)._padding_,
                       *(int *)((longlong)&(this->TileConfig)._padding_ + 4),this->SolidHF,prVar9);
    if (bVar5) {
      bVar5 = true;
    }
    else {
      iVar6 = rcGetHeightFieldSpanCount((rcContext *)param_1,this->SolidHF);
      pcVar14 = "BuildCompactHeightField: Could not build compact data.";
      if (iVar6 < 1) {
        pcVar14 = "BuildCompactHeightField: no walkable spans - aborting";
      }
      rcContext::log((rcContext *)param_1,(0 < iVar6) + RC_LOG_WARNING,pcVar14);
      bVar5 = false;
    }
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_38.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      FStack_38.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&LStackX_8);
      FStack_38.StatData.Pad[4] = '\0';
      FStack_38.StatData.Pad[5] = '\0';
      FStack_38.StatData.Pad[6] = '\0';
      FStack_38.StatData.Pad[7] = '\0';
      FStack_38.StatData.Pad[0] = LStackX_8.s.LowPart._0_1_;
      FStack_38.StatData.Pad[1] = LStackX_8.s.LowPart._1_1_;
      FStack_38.StatData.Pad[2] = LStackX_8.s.LowPart._2_1_;
      FStack_38.StatData.Pad[3] = LStackX_8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar5;
}

// BuildTileCacheLinks @ 146e42480

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
FRecastTileGenerator::BuildTileCacheLinks
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,dtTileCacheAlloc *param_2,
          dtTileCacheLayer *param_3,dtTileCacheContourSet *param_4,
          TArray<FGeneratedNavigationLink,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  TArray<dtNavLinkBuilderJumpConfig,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Src;
  LARGE_INTEGER LVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildLinks_FindEdges> FVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  FColor_u_0 FVar14;
  uint uVar15;
  FName FVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  dtNavLinkBuilderJumpConfig *pdVar19;
  FNameEntryId FVar20;
  bool bVar21;
  undefined1 auStackY_2438 [32];
  undefined1 local_23d7;
  ushort local_23d6;
  int local_23d4;
  FColor_u_0 local_23d0;
  uint uStack_23cc;
  LARGE_INTEGER local_23c8;
  uint local_23c0;
  LARGE_INTEGER local_23b8;
  LARGE_INTEGER local_23b0;
  dtLinkBuilderConfig local_23a8;
  FStatMessage local_2370;
  FName local_2360;
  double *local_2350;
  EdgeSampler local_2348;
  dtNavLinkBuilder local_1f78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2438;
  local_23c8 = (LARGE_INTEGER)param_4;
  local_23b0 = (LARGE_INTEGER)param_5;
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3965,"FRecastTileGenerator::BuildTileCacheLinks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
               ,0xf7d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3965);
  }
  rcContext::log((rcContext *)param_1,RC_LOG_PROGRESS,"Building Links:");
  QueryPerformanceCounter(&local_23b8);
  local_23d4 = -1;
  dVar4 = (double)local_23b8.QuadPart;
  FVar20.Value = 0;
  local_23c0 = 0xffffffff;
  local_23b8.QuadPart = 0;
  dVar4 = dVar4 * FGenericPlatformTime::SecondsPerCycle;
  if (((((this->TileDebugSettings).bEnabled != 0) &&
       (bVar8 = FRecastNavMeshTileGenerationDebug::IsWithinTileCoordinates
                          (&this->TileDebugSettings,this->TileX,this->TileY), bVar8)) ||
      ((this->TileX == GNavmeshDebugTileX && (this->TileY == GNavmeshDebugTileY)))) &&
     ((this->TileDebugSettings).LinkGenerationDebugFlags != 0)) {
    local_23d4 = (this->TileDebugSettings).LinkGenerationSelectedEdge;
    local_23c0 = (this->TileDebugSettings).LinkGenerationSelectedConfig;
    local_23b8 = (LARGE_INTEGER)param_1->InternalDebugData;
  }
  local_23d6 = (this->TileDebugSettings).LinkGenerationDebugFlags;
  if ((this->SolidHF == (rcHeightfield *)0x0) || (this->CompactHF == (rcCompactHeightfield *)0x0)) {
    QueryPerformanceCounter(&local_23b0);
    param_1->InternalDebugData->BuildLinkTime =
         ((double)local_23b0.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar4) +
         param_1->InternalDebugData->BuildLinkTime;
    rcContext::log((rcContext *)param_1,RC_LOG_PROGRESS,"   BuildTileCacheLinks time: %0.3fms.");
    uVar15 = 0x80000000;
    goto LAB_146e42eed;
  }
  local_2350 = param_3->header->bmin;
  pTVar2 = &(this->TileConfig).JumpConfigs;
  local_23a8.jumpConfigs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_23a8.jumpConfigs.ArrayNum = 0;
  local_23a8.jumpConfigs.ArrayMax = 0;
  local_23a8.cellHeight = 0.0;
  local_23a8.agentRadius = 0.0;
  local_23a8.agentHeight = 0.0;
  local_23a8.agentClimb = 0.0;
  local_23a8.cellSize = 0.0;
  if (&local_23a8 != (dtLinkBuilderConfig *)pTVar2) {
    uVar15 = (this->TileConfig).JumpConfigs.ArrayNum;
    _Src = (pTVar2->AllocatorInstance).Data;
    local_23a8.jumpConfigs.ArrayMax = 0;
    local_23a8.jumpConfigs.ArrayNum = uVar15;
    if (uVar15 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,uVar15,0,(ForAnyElementType *)&local_23a8,uVar15,
                 &local_23a8.jumpConfigs.ArrayMax);
      memcpy(local_23a8.jumpConfigs.AllocatorInstance.Data,_Src,(longlong)(int)uVar15 << 6);
    }
  }
  iVar7 = local_23a8.jumpConfigs.ArrayNum;
  pdVar19 = (dtNavLinkBuilderJumpConfig *)
            (local_23a8.jumpConfigs.AllocatorInstance.Data +
            (longlong)local_23a8.jumpConfigs.ArrayNum * 0x40);
  FVar17.Data = local_23a8.jumpConfigs.AllocatorInstance.Data;
  while( true ) {
    if (local_23a8.jumpConfigs.ArrayNum != iVar7) {
      `TCheckedPointerIterator<dtNavLinkBuilderJumpConfig,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_23d7);
    }
    if ((dtNavLinkBuilderJumpConfig *)FVar17.Data == pdVar19) break;
    if (((dtNavLinkBuilderJumpConfig *)FVar17.Data)->enabled != false) {
      dtNavLinkBuilderJumpConfig::init((dtNavLinkBuilderJumpConfig *)FVar17.Data);
    }
    FVar17.Data = FVar17.Data + 0x40;
  }
  local_23a8.cellHeight = (double)(this->TileConfig)._padding_;
  local_23a8.cellSize = (double)(this->TileConfig)._padding_;
  local_1f78.m_invCs = 0.0;
  local_1f78.m_linkBuilderConfig.jumpConfigs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  local_1f78.m_linkBuilderConfig.jumpConfigs.ArrayNum = 0;
  local_1f78.m_linkBuilderConfig.jumpConfigs.ArrayMax = 0;
  local_1f78.m_edges.AllocatorInstance.SecondaryData = (ForElementType<dtNavLinkBuilder::Edge>)0x0;
  local_1f78.m_edges.ArrayNum = 0;
  local_1f78.m_edges.ArrayMax = 0x20;
  local_1f78.m_links.AllocatorInstance.SecondaryData =
       (ForElementType<dtNavLinkBuilder::JumpLink>)0x0;
  local_1f78.m_links.ArrayNum = 0;
  local_1f78.m_links.ArrayMax = 0x10;
  local_1f78.m_debugSelectedEdge = -1;
  local_23a8.agentRadius = (double)(int)(this->TileConfig)._padding_ * local_23a8.cellSize;
  local_23a8.agentHeight = (double)(int)(this->TileConfig)._padding_ * local_23a8.cellHeight;
  local_1f78.m_linkBuilderConfig.agentClimb = 0.0;
  local_1f78.m_linkBuilderConfig.cellSize = 0.0;
  local_23a8.agentClimb =
       (double)*(int *)((longlong)&(this->TileConfig)._padding_ + 4) * local_23a8.cellHeight;
  local_1f78.m_csSquared = 0.0;
  local_1f78.m_ch = 0.0;
  local_1f78.m_linkBuilderConfig.agentRadius = 0.0;
  local_1f78.m_linkBuilderConfig.agentHeight = 0.0;
  local_1f78.m_linkBuilderConfig.cellHeight = 0.0;
  local_1f78.m_cs = 0.0;
  local_1f78.m_solid = (rcHeightfield *)0x0;
  local_1f78.m_chf = (rcCompactHeightfield *)0x0;
  FVar11 = StatPtr_STAT_Navigation_RecastBuildLinks_FindEdges;
  if (StatPtr_STAT_Navigation_RecastBuildLinks_FindEdges ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildLinks_FindEdges>)0x0) {
    pFVar10 = ::FName::FName((FName *)&local_2370,"STAT_Navigation_RecastBuildLinks_FindEdges");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildLinks_FindEdges>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Navigation_RecastBuildLinks_FindEdges,*pFVar10,
                        L"Recast: build links, find edges","STATGROUP_Navigation","STATCAT_Advanced"
                        ,L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar8 = false;
  bVar6 = false;
  local_2360.ComparisonIndex.Value = 0;
  local_2360.Number = 0;
  FVar14.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar15 = FVar16.Number;
  if ((FVar14.Bits == 0) && (uVar15 == 0)) {
LAB_146e428ef:
    bVar5 = false;
    FVar16 = local_2360;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_23d0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_23d0._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar8 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_23d0.Bits = FVar14.Bits;
        uStack_23cc = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_23d0._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xfb5);
        bVar8 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e428ef;
    local_23d0.Bits = FVar14.Bits;
    uStack_23cc = uVar15;
    local_2360 = FVar16;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar5 = true;
    FVar20.Value = local_2360.ComparisonIndex.Value;
  }
  bVar9 = dtNavLinkBuilder::findEdges
                    (&local_1f78,(rcContext *)param_1,(rcConfig *)&this->TileConfig,&local_23a8,
                     (dtTileCacheContourSet *)local_23c8,local_2350,this->SolidHF,this->CompactHF);
  if (bVar9) {
    rcContext::log((rcContext *)param_1,RC_LOG_PROGRESS,"   Found %i edges.");
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar5) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
        local_2370.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
        local_2370.NameAndInfo.Index.Value = FVar20.Value;
        QueryPerformanceCounter(&local_23c8);
        local_2370.StatData.Pad = (uchar  [8])(local_23c8.QuadPart & 0xffffffff);
        FThreadStats::AddStatMessage(pFVar12,&local_2370);
        piVar1 = &pFVar12->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar12,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar12,false,false);
        }
      }
    }
    LVar3 = local_23b8;
    uVar15 = local_23c0;
    if (local_1f78.m_edges.ArrayNum == 0) {
      QueryPerformanceCounter(&local_23c8);
      LVar3 = local_23c8;
    }
    else {
      iVar7 = local_23a8.jumpConfigs.ArrayNum;
      if ((local_23d4 == -1) && (local_23c0 == 0xffffffff)) {
        pdVar19 = (dtNavLinkBuilderJumpConfig *)
                  (local_23a8.jumpConfigs.AllocatorInstance.Data +
                  (longlong)local_23a8.jumpConfigs.ArrayNum * 0x40);
        FVar17.Data = local_23a8.jumpConfigs.AllocatorInstance.Data;
        while( true ) {
          if (local_23a8.jumpConfigs.ArrayNum != iVar7) {
            `TCheckedPointerIterator<dtNavLinkBuilderJumpConfig,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_23d7);
          }
          if ((dtNavLinkBuilderJumpConfig *)FVar17.Data == pdVar19) break;
          if (((dtNavLinkBuilderJumpConfig *)FVar17.Data)->enabled == false) {
LAB_146e42c41:
            FVar17.Data = FVar17.Data + 0x40;
          }
          else {
            if (CpuChannel->Enabled < 0) {
              dtNavLinkBuilder::buildForAllEdges
                        (&local_1f78,(rcContext *)param_1,&local_23a8,
                         (dtNavLinkBuilderJumpConfig *)FVar17.Data);
              goto LAB_146e42c41;
            }
            FCpuProfilerTrace::GetOrCreateSpecId
                      (&__CpuProfilerEventSpecId4047,"RecastBuildLinks_JumpConfig",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                       ,0xfcf);
            FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4047);
            dtNavLinkBuilder::buildForAllEdges
                      (&local_1f78,(rcContext *)param_1,&local_23a8,
                       (dtNavLinkBuilderJumpConfig *)FVar17.Data);
            FCpuProfilerTrace::OutputEndEvent();
            FVar17.Data = FVar17.Data + 0x40;
          }
        }
        duDebugDrawNavLinkBuilder
                  ((duDebugDraw *)local_23b8,&local_1f78,(uint)local_23d6,(EdgeSampler *)0x0);
      }
      else {
        pdVar19 = (dtNavLinkBuilderJumpConfig *)
                  (local_23a8.jumpConfigs.AllocatorInstance.Data +
                  (longlong)local_23a8.jumpConfigs.ArrayNum * 0x40);
        FVar17.Data = local_23a8.jumpConfigs.AllocatorInstance.Data;
        while( true ) {
          if (local_23a8.jumpConfigs.ArrayNum != iVar7) {
            `TCheckedPointerIterator<dtNavLinkBuilderJumpConfig,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_23d7);
          }
          if ((dtNavLinkBuilderJumpConfig *)FVar17.Data == pdVar19) break;
          if ((((dtNavLinkBuilderJumpConfig *)FVar17.Data)->enabled == false) ||
             ((uVar15 != 0xffffffff &&
              (((dtNavLinkBuilderJumpConfig *)FVar17.Data)->ConfigIndex != uVar15)))) {
LAB_146e42dbc:
            FVar17.Data = FVar17.Data + 0x40;
          }
          else {
            uVar18 = (uint)local_23d6;
            if (local_23d4 != -1) {
              local_2348.trajectory.radiusOverflow = 0.0;
              local_2348.trajectory.samples.AllocatorInstance.SecondaryData =
                   (ForElementType<dtNavLinkBuilder::TrajectorySample>)0x0;
              local_2348.trajectory.samples.ArrayNum = 0;
              local_2348.trajectory.nspine = '\0';
              local_2348.start.gsamples.AllocatorInstance.SecondaryData =
                   (ForElementType<dtNavLinkBuilder::GroundSample>)0x0;
              local_2348.start.gsamples.ArrayNum = 0;
              local_2348.start.ngsamples = 0;
              local_2348.end.gsamples.AllocatorInstance.SecondaryData =
                   (ForElementType<dtNavLinkBuilder::GroundSample>)0x0;
              local_2348.end.gsamples.ArrayNum = 0;
              local_2348.end.ngsamples = 0;
              local_2348.trajectory.samples.ArrayMax = 8;
              local_2348.start.gsamples.ArrayMax = 0x10;
              local_2348.end.gsamples.ArrayMax = 0x10;
              local_2348.configIndex = 0xff;
              dtNavLinkBuilder::debugBuildEdge
                        (&local_1f78,&local_23a8,local_23d4,&local_2348,
                         (dtNavLinkBuilderJumpConfig *)FVar17.Data);
              duDebugDrawNavLinkBuilder((duDebugDraw *)LVar3,&local_1f78,uVar18,&local_2348);
              dtNavLinkBuilder::GroundSegment::~GroundSegment(&local_2348.end);
              dtNavLinkBuilder::GroundSegment::~GroundSegment(&local_2348.start);
              if (local_2348.trajectory.samples.AllocatorInstance.SecondaryData !=
                  (ForElementType<dtNavLinkBuilder::TrajectorySample>)0x0) {
                FMemory::Free((void *)local_2348.trajectory.samples.AllocatorInstance.SecondaryData)
                ;
              }
              goto LAB_146e42dbc;
            }
            dtNavLinkBuilder::buildForAllEdges
                      (&local_1f78,(rcContext *)param_1,&local_23a8,
                       (dtNavLinkBuilderJumpConfig *)FVar17.Data);
            duDebugDrawNavLinkBuilder((duDebugDraw *)LVar3,&local_1f78,uVar18,(EdgeSampler *)0x0);
            FVar17.Data = FVar17.Data + 0x40;
          }
        }
      }
      AddGeneratedLinks((TArray<FGeneratedNavigationLink,TSizedDefaultAllocator<32>_> *)local_23b0,
                        &local_23a8,&local_1f78);
      QueryPerformanceCounter(&local_23b0);
      LVar3 = local_23b0;
    }
    param_1->InternalDebugData->BuildLinkTime =
         ((double)LVar3.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar4) +
         param_1->InternalDebugData->BuildLinkTime;
    rcContext::log((rcContext *)param_1,RC_LOG_PROGRESS,"   BuildTileCacheLinks time: %0.3fms.");
    uVar15 = 0x40000000;
  }
  else {
    QueryPerformanceCounter(&local_23c8);
    param_1->InternalDebugData->BuildLinkTime =
         ((double)local_23c8.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar4) +
         param_1->InternalDebugData->BuildLinkTime;
    rcContext::log((rcContext *)param_1,RC_LOG_PROGRESS,"   BuildTileCacheLinks time: %0.3fms.");
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar5) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
        local_2370.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
        local_2370.NameAndInfo.Index.Value = FVar20.Value;
        QueryPerformanceCounter(&local_23c8);
        local_2370.StatData.Pad = (uchar  [8])(local_23c8.QuadPart & 0xffffffff);
        FThreadStats::AddStatMessage(pFVar12,&local_2370);
        piVar1 = &pFVar12->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar12,false,false);
          uVar15 = 0x80000000;
          goto LAB_146e42e3e;
        }
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar12,false,false);
        }
      }
    }
    uVar15 = 0x80000000;
  }
LAB_146e42e3e:
  if (local_1f78.m_links.AllocatorInstance.SecondaryData !=
      (ForElementType<dtNavLinkBuilder::JumpLink>)0x0) {
    FMemory::Free((void *)local_1f78.m_links.AllocatorInstance.SecondaryData);
  }
  if (local_1f78.m_edges.AllocatorInstance.SecondaryData !=
      (ForElementType<dtNavLinkBuilder::Edge>)0x0) {
    FMemory::Free((void *)local_1f78.m_edges.AllocatorInstance.SecondaryData);
  }
  if (local_1f78.m_linkBuilderConfig.jumpConfigs.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f78.m_linkBuilderConfig.jumpConfigs.AllocatorInstance.Data);
  }
  if ((dtNavLinkBuilderJumpConfig *)local_23a8.jumpConfigs.AllocatorInstance.Data !=
      (dtNavLinkBuilderJumpConfig *)0x0) {
    FMemory::Free(local_23a8.jumpConfigs.AllocatorInstance.Data);
  }
LAB_146e42eed:
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return uVar15;
}

// CalculateTileBounds @ 146e44c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBox<double> * __cdecl
FRecastTileGenerator::CalculateTileBounds
          (TBox<double> *__return_storage_ptr__,int param_1,int param_2,TVector<double> *param_3,
          TBox<double> *param_4,double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  TBox<double> *pTVar11;
  undefined1 auStack_68 [32];
  TBox<double> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  dVar1 = (param_3->field0_0x0)._s_0.X;
  dVar2 = (param_3->field0_0x0)._s_0.Z;
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)param_1 * param_5 + dVar1;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar3;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)param_2 * param_5 + dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)(param_1 + 1) * param_5 + dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar3;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)(param_2 + 1) * param_5 + dVar2;
  __return_storage_ptr__->IsValid = '\x01';
  pTVar11 = Recast2UnrealBox(&local_48,__return_storage_ptr__);
  dVar1 = (pTVar11->Min).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (pTVar11->Min).field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (pTVar11->Max).field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (pTVar11->Min).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1;
  dVar1 = (pTVar11->Max).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (pTVar11->Max).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar1;
  uVar4 = pTVar11->Pad[0];
  uVar5 = pTVar11->Pad[1];
  uVar6 = pTVar11->Pad[2];
  uVar7 = pTVar11->Pad[3];
  uVar8 = pTVar11->Pad[4];
  uVar9 = pTVar11->Pad[5];
  uVar10 = pTVar11->Pad[6];
  __return_storage_ptr__->IsValid = pTVar11->IsValid;
  __return_storage_ptr__->Pad[0] = uVar4;
  __return_storage_ptr__->Pad[1] = uVar5;
  __return_storage_ptr__->Pad[2] = uVar6;
  __return_storage_ptr__->Pad[3] = uVar7;
  __return_storage_ptr__->Pad[4] = uVar8;
  __return_storage_ptr__->Pad[5] = uVar9;
  __return_storage_ptr__->Pad[6] = uVar10;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (param_4->Min).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (param_4->Max).field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// ComputeRasterizationMasks @ 146e451c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::ComputeRasterizationMasks
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,
          FTileRasterizationContext *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  FTileRasterizationContext *pFVar4;
  FTileRasterizationContext *pFVar5;
  FName FVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastComputeRasterizationMasks> FVar10;
  uint uVar11;
  ulonglong uVar12;
  FNameEntryId FVar13;
  TTransform<double> *pTVar14;
  FScriptContainerElement *pFVar15;
  TTransform<double> *pTVar16;
  FName FVar17;
  FTileRasterizationContext *pFVar18;
  FName FVar19;
  undefined1 auStackY_208 [32];
  undefined1 local_1a7 [3];
  FColor_u_0 local_1a4;
  FName local_1a0;
  FTileRasterizationContext *local_198;
  FName local_190;
  FName local_188;
  FName local_180;
  FName local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  FVar10 = StatPtr_STAT_Navigation_RecastComputeRasterizationMasks;
  local_198 = param_2;
  if (StatPtr_STAT_Navigation_RecastComputeRasterizationMasks ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastComputeRasterizationMasks>)0x0) {
    pFVar9 = ::FName::FName(&local_180,"STAT_Navigation_RecastComputeRasterizationMasks");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastComputeRasterizationMasks>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Navigation_RecastComputeRasterizationMasks,*pFVar9,
                        L"Recast: compute rasterizaion masks","STATGROUP_Navigation",
                        "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar10;
  bVar2 = false;
  bVar3 = false;
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  bVar7 = false;
  bVar8 = false;
  FVar13 = FVar17.ComparisonIndex.Value;
  uVar11 = FVar17.Number;
  if ((FVar13.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a4._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar2 = false;
      bVar3 = true;
      bVar7 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1a0.ComparisonIndex.Value = FVar13.Value;
        local_1a0.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1a0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x11a9);
        bVar2 = true;
        bVar3 = true;
        bVar7 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1a0.ComparisonIndex.Value = FVar13.Value;
      local_1a0.Number = uVar11;
      local_188 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar7 = true;
      goto LAB_146e45343;
    }
  }
  bVar3 = bVar8;
  bVar2 = bVar7;
  bVar7 = false;
  local_188 = local_178;
LAB_146e45343:
  if (6 < (byte)LogNavigationDataBuild._0_1_) {
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"FRecastTileGenerator::ComputeRasterizationMasks",0x2f,Yes);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNavigationDataBuild);
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
  }
  pFVar4 = local_198;
  local_1a0.ComparisonIndex.Value = (this->Modifiers).ArrayNum;
  uVar12 = (ulonglong)(int)local_1a0.ComparisonIndex.Value;
  FVar19 = (FName)(this->Modifiers).AllocatorInstance.Data;
  FVar17 = (FName)((longlong)FVar19 + uVar12 * 0x28);
  pFVar15 = (FScriptContainerElement *)((longlong)FVar19 + 0x18);
  local_180 = FVar17;
  do {
    local_190 = FVar19;
    if ((this->Modifiers).ArrayNum != (int)uVar12) {
      `TCheckedPointerIterator<FRecastAreaNavModifierElement,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1a7);
    }
    FVar6 = local_188;
    if (FVar19 == FVar17) goto LAB_146e454fc;
    if (pFVar15[9] != (FScriptContainerElement)0x0) {
      if (this->SolidHF == (rcHeightfield *)0x0) {
LAB_146e454fc:
        if (bVar3) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar2) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar7) {
          FThreadStats::AddMessage(FVar6,CycleScopeEnd);
        }
        return;
      }
      local_1a4 = (FColor_u_0)((FColor_u_0 *)(pFVar15 + -0x10))->Bits;
      uVar12 = (ulonglong)(int)local_1a4.Bits;
      pFVar18 = *(FTileRasterizationContext **)FVar19;
      local_198 = (FTileRasterizationContext *)
                  ((pFVar18->RasterizationMasks).AllocatorInstance.InlineData +
                  uVar12 * 0x70 + -0x18);
      while( true ) {
        pFVar5 = local_198;
        if (*(int *)(pFVar15 + -0x10) != (int)uVar12) {
          `TCheckedPointerIterator<FAreaNavModifier_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_1a7);
        }
        FVar17 = local_180;
        FVar19 = local_190;
        if (pFVar18 == pFVar5) break;
        iVar1 = *(int *)pFVar15;
        pTVar16 = *(TTransform<double> **)(pFVar15 + -8);
        pTVar14 = pTVar16 + iVar1;
        while( true ) {
          if (*(int *)pFVar15 != iVar1) {
            `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_1a7);
          }
          if (pTVar16 == pTVar14) break;
          MarkRasterizationMask
                    (this,(rcContext *)param_1,this->SolidHF,(FAreaNavModifier *)pFVar18,pTVar16,-2,
                     &pFVar4->RasterizationMasks);
          pTVar16 = pTVar16 + 1;
        }
        if (*(int *)pFVar15 == 0) {
          MarkRasterizationMask
                    (this,(rcContext *)param_1,this->SolidHF,(FAreaNavModifier *)pFVar18,
                     &UE::Math::TTransform<double>::Identity,-2,&pFVar4->RasterizationMasks);
        }
        pFVar18 = (FTileRasterizationContext *)
                  ((pFVar18->RasterizationMasks).AllocatorInstance.InlineData + 0x58);
        uVar12 = (ulonglong)local_1a4.Bits;
      }
    }
    uVar12 = (ulonglong)local_1a0.ComparisonIndex.Value;
    FVar19 = (FName)((longlong)FVar19 + 0x28);
    pFVar15 = pFVar15 + 0x28;
  } while( true );
}

// CreateHeightField @ 146e46560

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FRecastTileGenerator::CreateHeightField(FRecastTileGenerator *this,FNavMeshBuildContext *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastCreateHeightField> FVar11;
  rcHeightfield *prVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  int iVar14;
  FNameEntryId FVar15;
  FName FVar16;
  FNameEntryId FVar17;
  char *pcVar18;
  double dVar19;
  double dVar20;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_38;
  
  if (((this->TileDebugSettings).bEnabled == 0) ||
     ((this->TileDebugSettings).bGenerateDebugTileOnly == 0)) {
    if (GNavmeshGenerateDebugTileOnly) {
      if (this->TileX != GNavmeshDebugTileX) {
        return false;
      }
      if (this->TileY != GNavmeshDebugTileY) {
        return false;
      }
    }
  }
  else {
    bVar8 = FRecastNavMeshTileGenerationDebug::IsWithinTileCoordinates
                      (&this->TileDebugSettings,this->TileX,this->TileY);
    if (!bVar8) {
      return false;
    }
  }
  FVar17.Value = 0;
  FVar11 = StatPtr_STAT_Navigation_RecastCreateHeightField;
  if (StatPtr_STAT_Navigation_RecastCreateHeightField ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastCreateHeightField>)0x0) {
    pFVar10 = ::FName::FName(&local_res18,"STAT_Navigation_RecastCreateHeightField");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastCreateHeightField>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Navigation_RecastCreateHeightField,*pFVar10,
                        L"Recast: create height field","STATGROUP_Navigation","STATCAT_Advanced",
                        L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar8 = false;
  bVar7 = false;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar13 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar13 == 0)) {
LAB_146e4673f:
    bVar6 = false;
    FVar16.ComparisonIndex.Value = 0;
    FVar16.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar15.Value;
        local_res8.s.HighPart = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xac7);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e4673f;
    local_res8.s.LowPart = FVar15.Value;
    local_res8.s.HighPart = uVar13;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar6 = true;
    FVar17.Value = FVar15.Value;
  }
  dVar19 = (double)(this->TileConfig)._padding_;
  plVar2 = &(this->TileConfig)._padding_;
  iVar4 = *(int *)((longlong)&(this->TileConfig)._padding_ + 4);
  plVar3 = &(this->TileConfig)._padding_;
  iVar5 = (int)(this->TileConfig)._padding_;
  iVar14 = (int)(this->TileConfig)._padding_ + iVar5 + iVar4;
  *(int *)&(this->TileConfig)._padding_ = iVar14;
  *(int *)((longlong)&(this->TileConfig)._padding_ + 4) = iVar14;
  dVar20 = (double)iVar5 * dVar19;
  dVar19 = (double)iVar4 * dVar19;
  *plVar2 = (longlong)((double)*plVar2 - dVar19);
  (this->TileConfig)._padding_ = (longlong)((double)(this->TileConfig)._padding_ - dVar19);
  *plVar3 = (longlong)(dVar20 + (double)*plVar3);
  (this->TileConfig)._padding_ = (longlong)(dVar20 + (double)(this->TileConfig)._padding_);
  rcContext::log((rcContext *)param_1,RC_LOG_PROGRESS,"CreateHeightField:");
  rcContext::log((rcContext *)param_1,RC_LOG_PROGRESS," - %d x %d cells");
  if ((this->RawGeometry).ArrayNum < 1) {
LAB_146e4688c:
    bVar9 = true;
  }
  else {
    prVar12 = rcAllocHeightfield();
    this->SolidHF = prVar12;
    if (prVar12 == (rcHeightfield *)0x0) {
      pcVar18 = "CreateHeightField: Out of memory \'SolidHF\'.";
    }
    else {
      bVar9 = rcCreateHeightfield((rcContext *)param_1,prVar12,(int)(this->TileConfig)._padding_,
                                  *(int *)((longlong)&(this->TileConfig)._padding_ + 4),
                                  (double *)plVar2,(double *)plVar3,
                                  (double)(this->TileConfig)._padding_,
                                  (double)(this->TileConfig)._padding_,
                                  this->bHasGeometryToRasterizeAsFilledConvexVolume);
      if (bVar9) goto LAB_146e4688c;
      pcVar18 = "CreateHeightField: Could not create solid heightfield.";
    }
    rcContext::log((rcContext *)param_1,RC_LOG_ERROR,pcVar18);
    bVar9 = false;
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar9;
}

// CreateHeightField @ 146e469b0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FRecastTileGenerator::CreateHeightField
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,
          FTileRasterizationContext *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastCreateHeightField> FVar11;
  rcHeightfield *prVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  int iVar14;
  FNameEntryId FVar15;
  FName FVar16;
  FNameEntryId FVar17;
  char *pcVar18;
  double dVar19;
  double dVar20;
  LARGE_INTEGER LStackX_8;
  FName FStackX_18;
  FStatMessage FStack_38;
  
  if (((this->TileDebugSettings).bEnabled == 0) ||
     ((this->TileDebugSettings).bGenerateDebugTileOnly == 0)) {
    if (GNavmeshGenerateDebugTileOnly) {
      if (this->TileX != GNavmeshDebugTileX) {
        return false;
      }
      if (this->TileY != GNavmeshDebugTileY) {
        return false;
      }
    }
  }
  else {
    bVar8 = FRecastNavMeshTileGenerationDebug::IsWithinTileCoordinates
                      (&this->TileDebugSettings,this->TileX,this->TileY);
    if (!bVar8) {
      return false;
    }
  }
  FVar17.Value = 0;
  FVar11 = StatPtr_STAT_Navigation_RecastCreateHeightField;
  if (StatPtr_STAT_Navigation_RecastCreateHeightField ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastCreateHeightField>)0x0) {
    pFVar10 = ::FName::FName(&FStackX_18,"STAT_Navigation_RecastCreateHeightField");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastCreateHeightField>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Navigation_RecastCreateHeightField,*pFVar10,
                        L"Recast: create height field","STATGROUP_Navigation","STATCAT_Advanced",
                        L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar8 = false;
  bVar7 = false;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar13 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar13 == 0)) {
LAB_146e4673f:
    bVar6 = false;
    FVar16.ComparisonIndex.Value = 0;
    FVar16.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_8.s.LowPart = FVar15.Value;
        LStackX_8.s.HighPart = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xac7);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e4673f;
    LStackX_8.s.LowPart = FVar15.Value;
    LStackX_8.s.HighPart = uVar13;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar6 = true;
    FVar17.Value = FVar15.Value;
  }
  dVar19 = (double)(this->TileConfig)._padding_;
  plVar2 = &(this->TileConfig)._padding_;
  iVar4 = *(int *)((longlong)&(this->TileConfig)._padding_ + 4);
  plVar3 = &(this->TileConfig)._padding_;
  iVar5 = (int)(this->TileConfig)._padding_;
  iVar14 = (int)(this->TileConfig)._padding_ + iVar5 + iVar4;
  *(int *)&(this->TileConfig)._padding_ = iVar14;
  *(int *)((longlong)&(this->TileConfig)._padding_ + 4) = iVar14;
  dVar20 = (double)iVar5 * dVar19;
  dVar19 = (double)iVar4 * dVar19;
  *plVar2 = (longlong)((double)*plVar2 - dVar19);
  (this->TileConfig)._padding_ = (longlong)((double)(this->TileConfig)._padding_ - dVar19);
  *plVar3 = (longlong)(dVar20 + (double)*plVar3);
  (this->TileConfig)._padding_ = (longlong)(dVar20 + (double)(this->TileConfig)._padding_);
  rcContext::log((rcContext *)param_1,RC_LOG_PROGRESS,"CreateHeightField:");
  rcContext::log((rcContext *)param_1,RC_LOG_PROGRESS," - %d x %d cells");
  if ((this->RawGeometry).ArrayNum < 1) {
LAB_146e4688c:
    bVar9 = true;
  }
  else {
    prVar12 = rcAllocHeightfield();
    this->SolidHF = prVar12;
    if (prVar12 == (rcHeightfield *)0x0) {
      pcVar18 = "CreateHeightField: Out of memory \'SolidHF\'.";
    }
    else {
      bVar9 = rcCreateHeightfield((rcContext *)param_1,prVar12,(int)(this->TileConfig)._padding_,
                                  *(int *)((longlong)&(this->TileConfig)._padding_ + 4),
                                  (double *)plVar2,(double *)plVar3,
                                  (double)(this->TileConfig)._padding_,
                                  (double)(this->TileConfig)._padding_,
                                  this->bHasGeometryToRasterizeAsFilledConvexVolume);
      if (bVar9) goto LAB_146e4688c;
      pcVar18 = "CreateHeightField: Could not create solid heightfield.";
    }
    rcContext::log((rcContext *)param_1,RC_LOG_ERROR,pcVar18);
    bVar9 = false;
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_38.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      FStack_38.NameAndInfo.Index.Value = FVar17.Value;
      QueryPerformanceCounter(&LStackX_8);
      FStack_38.StatData.Pad[4] = '\0';
      FStack_38.StatData.Pad[5] = '\0';
      FStack_38.StatData.Pad[6] = '\0';
      FStack_38.StatData.Pad[7] = '\0';
      FStack_38.StatData.Pad[0] = LStackX_8.s.LowPart._0_1_;
      FStack_38.StatData.Pad[1] = LStackX_8.s.LowPart._1_1_;
      FStack_38.StatData.Pad[2] = LStackX_8.s.LowPart._2_1_;
      FStack_38.StatData.Pad[3] = LStackX_8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar9;
}

// DoWork @ 146e47920

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FRecastTileGenerator::DoWork(FRecastTileGenerator *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_Navigation_DoWork> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FRecastNavMeshGenerator *pFVar12;
  FRecastNavMeshGenerator *pFVar13;
  bool bVar14;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  pFVar12 = (FRecastNavMeshGenerator *)0x0;
  FVar8 = StatPtr_STAT_Navigation_DoWork;
  if (StatPtr_STAT_Navigation_DoWork == (FThreadSafeStaticStat<FStat_STAT_Navigation_DoWork>)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_Navigation_DoWork");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DoWork>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DoWork,*pFVar7,
                       L"Recast: do work","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",
                       true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar2 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar2 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x799);
        bVar2 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      goto LAB_146e47a73;
    }
  }
  bVar3 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_146e47a73:
  pFVar13 = (FRecastNavMeshGenerator *)
            (this->ParentGeneratorWeakPtr).WeakReferenceCount.ReferenceController;
  if (pFVar13 != (FRecastNavMeshGenerator *)0x0) {
    aVar4 = *(atomic<int> *)&pFVar13->_padding_;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        bVar14 = true;
        pFVar13 = pFVar12;
        goto LAB_146e47aec;
      }
      LOCK();
      aVar6 = *(atomic<int> *)&pFVar13->_padding_;
      bVar14 = aVar4 == aVar6;
      if (bVar14) {
        *(atomic<int> *)&pFVar13->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar14);
    pFVar12 = (FRecastNavMeshGenerator *)(this->ParentGeneratorWeakPtr).Object;
  }
  bVar14 = true;
  if (pFVar12 != (FRecastNavMeshGenerator *)0x0) {
    if (*(int *)&(this->InclusionBounds).field_0x10 != 0) {
      GatherGeometryFromSources(this);
      if (pFVar13 != (FRecastNavMeshGenerator *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar13->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar13->_padding_ + 1);
        UNLOCK();
      }
      SetupTileConfigFromHighestResolution(this,pFVar12);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar13);
    }
    bVar14 = GenerateTile(this);
    DumpAsyncData(this);
  }
LAB_146e47aec:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar13);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar14;
}

// DoWorkTimeSliced @ 146e47bf0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ETimeSliceWorkResult __thiscall FRecastTileGenerator::DoWorkTimeSliced(FRecastTileGenerator *this)

{
  int *piVar1;
  EDoWorkTimeSlicedState EVar2;
  FRecastNavMeshGenerator *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  atomic<int> aVar7;
  bool bVar8;
  ETimeSliceWorkResult EVar9;
  atomic<int> aVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Navigation_DoWork> FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FRecastNavMeshGenerator *pFVar16;
  FRecastNavMeshGenerator *pFVar17;
  bool bVar18;
  uint local_res8;
  uint uStackX_c;
  undefined1 local_res10 [8];
  FColor_u_0 local_res18 [2];
  FName local_res20;
  LARGE_INTEGER local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar17 = (FRecastNavMeshGenerator *)0x0;
  FVar12 = StatPtr_STAT_Navigation_DoWork;
  if (StatPtr_STAT_Navigation_DoWork == (FThreadSafeStaticStat<FStat_STAT_Navigation_DoWork>)0x0) {
    pFVar11 = ::FName::FName(&local_60,"STAT_Navigation_DoWork");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Navigation_DoWork>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_DoWork,*pFVar11,
                        L"Recast: do work","STATGROUP_Navigation","STATCAT_Advanced",L"Navigation",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar5 = false;
  bVar8 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value == 0) && (uVar13 == 0)) {
LAB_146e47d3c:
    bVar6 = false;
    FVar15 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar14.Value;
        local_res20.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x75d);
        bVar5 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e47d3c;
    local_res8 = FVar14.Value;
    uStackX_c = uVar13;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    bVar6 = true;
  }
  pFVar3 = (FRecastNavMeshGenerator *)
           (this->ParentGeneratorWeakPtr).WeakReferenceCount.ReferenceController;
  pFVar16 = pFVar3;
  if (pFVar3 != (FRecastNavMeshGenerator *)0x0) {
    aVar7 = *(atomic<int> *)&pFVar3->_padding_;
    do {
      pFVar16 = pFVar17;
      if (aVar7 == (atomic<int>)0x0) goto LAB_146e47d65;
      LOCK();
      aVar10 = *(atomic<int> *)&pFVar3->_padding_;
      bVar18 = aVar7 == aVar10;
      if (bVar18) {
        *(atomic<int> *)&pFVar3->_padding_ = (atomic<int>)((int)aVar7 + 1);
        aVar10 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar10;
    } while (!bVar18);
    pFVar17 = (FRecastNavMeshGenerator *)(this->ParentGeneratorWeakPtr).Object;
    pFVar16 = pFVar3;
  }
LAB_146e47d65:
  EVar9 = Succeeded;
  if ((this->TimeSliceManager == (FNavRegenTimeSliceManager *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("TimeSliceManager",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                          ,0x762,L""), bVar18)) {
    pcVar4 = (code *)swi(3);
    EVar9 = (*pcVar4)();
    return EVar9;
  }
  if (pFVar17 == (FRecastNavMeshGenerator *)0x0) goto LAB_146e47e3b;
  EVar2 = this->DoWorkTimeSlicedState;
  if (EVar2 == Invalid) {
    `FRecastTileGenerator::DoWorkTimeSliced'::__l15::<lambda_1>::operator()(local_res10);
LAB_146e47e38:
    EVar9 = Failed;
  }
  else {
    if (EVar2 == GatherGeometryFromSources) {
      if (*(int *)&(this->InclusionBounds).field_0x10 != 0) {
        EVar9 = GatherGeometryFromSourcesTimeSliced(this);
        if (pFVar16 != (FRecastNavMeshGenerator *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar16->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pFVar16->_padding_ + 1);
          UNLOCK();
        }
        SetupTileConfigFromHighestResolution(this,pFVar17);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar16);
        if (EVar9 == CallAgainNextTimeSlice) goto LAB_146e47e3b;
      }
      this->DoWorkTimeSlicedState = GenerateTile;
    }
    else if (EVar2 != GenerateTile) {
      `FRecastTileGenerator::DoWorkTimeSliced'::__l27::<lambda_2>::operator()(&local_res8);
      goto LAB_146e47e38;
    }
    EVar9 = GenerateTileTimeSliced(this);
    if (EVar9 != CallAgainNextTimeSlice) {
      DumpAsyncData(this);
      DumpSyncData(this);
      this->DoWorkTimeSlicedState = Invalid;
    }
  }
LAB_146e47e3b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar16);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_68);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_68.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_68.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_68.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return EVar9;
}

// DumpAsyncData @ 146e47f60

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall FRecastTileGenerator::DumpAsyncData(FRecastTileGenerator *this)

{
  int *piVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  DestructItems<FRecastRawGeometryElement,int>
            ((FRecastRawGeometryElement *)(this->RawGeometry).AllocatorInstance.Data,
             (this->RawGeometry).ArrayNum);
  piVar1 = &(this->RawGeometry).ArrayMax;
  (this->RawGeometry).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,0,&(this->RawGeometry).AllocatorInstance,0,piVar1);
  }
  DestructItems<FRecastAreaNavModifierElement,int>
            ((FRecastAreaNavModifierElement *)(this->Modifiers).AllocatorInstance.Data,
             (this->Modifiers).ArrayNum);
  piVar1 = &(this->Modifiers).ArrayMax;
  (this->Modifiers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->Modifiers).AllocatorInstance,0,piVar1);
  }
  DestructItems<FSimpleLinkNavModifier,int>
            ((FSimpleLinkNavModifier *)(this->OffmeshLinks).AllocatorInstance.Data,
             (this->OffmeshLinks).ArrayNum);
  piVar1 = &(this->OffmeshLinks).ArrayMax;
  (this->OffmeshLinks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,0x10,0,&(this->OffmeshLinks).AllocatorInstance,0,piVar1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->NavSystem).WeakPtr = local_res8;
  return;
}

// DumpSyncData @ 146e48080

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall FRecastTileGenerator::DumpSyncData(FRecastTileGenerator *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4457677437609707452>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                       ,0x7bc,"IsInGameThread()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  DestructItems<TSharedRef<FNavigationRelevantData,1>,int>
            (*(TSharedRef<FNavigationRelevantData,1> **)&this->NavigationRelevantData,
             *(int *)&(this->NavigationRelevantData).field_0x10);
  puVar1 = &(this->NavigationRelevantData).field_0x14;
  *(undefined4 *)&(this->NavigationRelevantData).field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&this->NavigationRelevantData,0,(int *)puVar1);
  }
  return;
}

// GatherGeometry @ 146e54ee0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::GatherGeometry
          (FRecastTileGenerator *this,FRecastNavMeshGenerator *param_1,bool param_2)

{
  longlong *this_00;
  int iVar1;
  undefined4 uVar2;
  FName FVar3;
  FNavigationOctree *pFVar4;
  ARecastNavMesh *pAVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  FRecastNavMeshGenerator *pFVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FRecastTileGenerator::GatherGeometry(FRecastNavMeshGenerator_const_&,bool)_::_2_::FStat_STAT_RecastNavMeshGenerator_GatherGeometry>
  FVar12;
  UWorld *pUVar13;
  UClass *pUVar14;
  ulonglong uVar15;
  ENavigationDataResolution EVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  FNameEntryId FVar19;
  UNavigationSystemV1 *pUVar20;
  ENavigationDataResolution EVar21;
  ulonglong uVar22;
  TSharedRef<FNavigationRelevantData,1> *pTVar23;
  double dVar24;
  double dVar25;
  undefined1 local_118;
  bool local_117;
  FName local_110;
  byte local_108;
  uint local_100;
  uint uStack_fc;
  TArray<TSharedRef<FNavigationRelevantData,1>,TSizedDefaultAllocator<32>_> local_f8;
  FColor_u_0 local_e8 [2];
  FName local_e0;
  FRecastNavMeshGenerator *local_d8;
  FLogScopedCategoryAndVerbosityOverride local_d0;
  <lambda_1> local_c0;
  TVector4<double>_u_0 local_98;
  double local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  FName local_58;
  FName local_50 [3];
  
  local_117 = param_2;
  local_d8 = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_RecastNavMeshGenerator_GatherGeometry ==
          (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FRecastTileGenerator::GatherGeometry(FRecastNavMeshGenerator_const_&,bool)_::_2_::FStat_STAT_RecastNavMeshGenerator_GatherGeometry>
           )0x0) {
        pFVar11 = ::FName::FName(&local_58,"STAT_RecastNavMeshGenerator_GatherGeometry");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RecastNavMeshGenerator_GatherGeometry,
                   *pFVar11,L"STAT_RecastNavMeshGenerator_GatherGeometry","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar12 = StatPtr_STAT_RecastNavMeshGenerator_GatherGeometry;
  if (StatPtr_STAT_RecastNavMeshGenerator_GatherGeometry ==
      (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FRecastTileGenerator::GatherGeometry(FRecastNavMeshGenerator_const_&,bool)_::_2_::FStat_STAT_RecastNavMeshGenerator_GatherGeometry>
       )0x0) {
    pFVar11 = ::FName::FName(local_50,"STAT_RecastNavMeshGenerator_GatherGeometry");
    FVar12 = (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FRecastTileGenerator::GatherGeometry(FRecastNavMeshGenerator_const_&,bool)_::_2_::FStat_STAT_RecastNavMeshGenerator_GatherGeometry>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RecastNavMeshGenerator_GatherGeometry,*pFVar11,
                          L"STAT_RecastNavMeshGenerator_GatherGeometry","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  local_108 = 0;
  FVar3 = *(FName *)FVar12;
  FVar19 = FVar3.ComparisonIndex.Value;
  uVar17 = FVar3.Number;
  if ((FVar19.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      local_108 = local_108 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_e0.ComparisonIndex.Value = FVar19.Value;
        local_e0.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x823);
        local_108 = local_108 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_110 = FVar3;
      local_100 = FVar19.Value;
      uStack_fc = uVar17;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      local_108 = local_108 | 4;
    }
  }
  pUVar13 = AActor::GetWorld((AActor *)param_1->DestNavMesh);
  if (pUVar13 == (UWorld *)0x0) goto LAB_146e55392;
  pUVar20 = (UNavigationSystemV1 *)(pUVar13->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar20 == (UNavigationSystemV1 *)0x0) {
LAB_146e55091:
    pUVar20 = (UNavigationSystemV1 *)0x0;
  }
  else {
    pUVar14 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar14->_padding_;
    if ((*(int *)(*(longlong *)&pUVar20->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar20->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar14->_padding_)) goto LAB_146e55091;
  }
  if ((pUVar20 != (UNavigationSystemV1 *)0x0) &&
     (pFVar4 = (pUVar20->DefaultOctreeController).NavOctree.Object,
     pFVar4 != (FNavigationOctree *)0x0)) {
    pAVar5 = param_1->DestNavMesh;
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 0;
    if (6 < (byte)LogNavigation._0_1_) {
      FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                (&local_d0,(FName)LogNavigation._4_8_,All);
      if (FVisualLogger::bIsRecording != 0) {
        FVisualLogger::BoxLogfImpl
                  ((UObject *)pAVar5,(FName *)&LogNavigation.field_0x4,All,&this->TileBB,
                   &UE::Math::TMatrix<double>::Identity,&FColor::White,false,L"Tile (%i, %i)");
      }
      FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogNavigation,All);
      FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_d0);
    }
    local_c0.RelevantDataArray = &local_f8;
    this_00 = &pFVar4->_padding_;
    dVar24 = (this->TileBB).Min.field0_0x0._s_0.X - (param_1->BBoxGrowthLow).field0_0x0._s_0.X;
    dVar25 = (this->TileBB).Min.field0_0x0._s_0.Y - (param_1->BBoxGrowthLow).field0_0x0._s_0.Y;
    dVar7 = (this->TileBB).Min.field0_0x0._s_0.Z - (param_1->BBoxGrowthLow).field0_0x0._s_0.Z;
    local_78 = (((param_1->BBoxGrowthHigh).field0_0x0._s_0.X + (this->TileBB).Max.field0_0x0._s_0.X)
               - dVar24) * __real_3fe0000000000000;
    local_70 = (((param_1->BBoxGrowthHigh).field0_0x0._s_0.Y + (this->TileBB).Max.field0_0x0._s_0.Y)
               - dVar25) * __real_3fe0000000000000;
    local_68 = (((param_1->BBoxGrowthHigh).field0_0x0._s_0.Z + (this->TileBB).Max.field0_0x0._s_0.Z)
               - dVar7) * __real_3fe0000000000000;
    local_98._s_0.X = dVar24 + local_78;
    local_98._s_0.W = 0.0;
    local_98._s_0.Y = dVar25 + local_70;
    local_98._s_0.Z = dVar7 + local_68;
    local_60 = 0;
    local_c0.OwnerNavDataConfig = (FNavDataConfig *)&pAVar5->_padding_;
    local_c0.ParentGenerator = param_1;
    local_c0.__this = this;
    local_c0.bUseVirtualGeometryFilteringAndDirtying =
         pAVar5->bUseVirtualGeometryFilteringAndDirtying;
    TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::
    FindElementsWithBoundsTestInternal<_FRecastTileGenerator::GatherGeometry_::__l2::<lambda_1>_>
              ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)this_00,0,
               (FOctreeNodeContext *)this_00,(FBoxCenterAndExtent *)&local_98._s_0,&local_c0);
    uVar15 = (ulonglong)local_f8.ArrayNum;
    uVar22 = 0;
    bVar8 = false;
    pTVar23 = (TSharedRef<FNavigationRelevantData,1> *)
              (local_f8.AllocatorInstance.Data + uVar15 * 0x10);
    local_100 = local_f8.ArrayNum;
    FVar18.Data = local_f8.AllocatorInstance.Data;
    while( true ) {
      if (local_f8.ArrayNum != (int)uVar15) {
        local_118 = 0;
        `TCheckedPointerIterator<TSharedRef<FNavigationRelevantData,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_118);
      }
      pFVar9 = local_d8;
      EVar21 = (ENavigationDataResolution)uVar22;
      if ((TSharedRef<FNavigationRelevantData,1> *)FVar18.Data == pTVar23) break;
      GatherNavigationDataGeometry
                (this,(TSharedRef<FNavigationRelevantData,1> *)FVar18.Data,pUVar20,
                 (FNavDataConfig *)&pAVar5->_padding_,local_117);
      if ((FCompositeNavModifier::bEnableNavMeshResolutions != false) &&
         (EVar16 = (((TSharedRef<FNavigationRelevantData,1> *)FVar18.Data)->Object->Modifiers).
                   NavMeshResolution, EVar16 != Invalid)) {
        bVar8 = true;
        if (EVar16 < EVar21) {
          EVar16 = EVar21;
        }
        uVar22 = (ulonglong)EVar16;
      }
      uVar15 = (ulonglong)local_100;
      FVar18.Data = FVar18.Data + 0x10;
    }
    if (EVar21 == Invalid) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("HighestResolution != ENavigationDataResolution::Invalid",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                          ,0x851,L"");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if ((((bVar8) &&
         (pAVar5 = pFVar9->DestNavMesh, 0.0 < pAVar5->NavMeshResolutionParams[uVar22].CellSize)) &&
        (0.0 < pAVar5->NavMeshResolutionParams[uVar22].CellHeight)) &&
       (0.0 < pAVar5->NavMeshResolutionParams[uVar22].AgentMaxStepHeight)) {
      (**(code **)(pFVar9->_padding_ + 0x78))(pFVar9,uVar22,&this->TileConfig);
    }
    DestructItems<TSharedRef<FNavigationRelevantData,1>,int>
              ((TSharedRef<FNavigationRelevantData,1> *)local_f8.AllocatorInstance.Data,
               local_f8.ArrayNum);
    if ((TSharedRef<FNavigationRelevantData,1> *)local_f8.AllocatorInstance.Data !=
        (TSharedRef<FNavigationRelevantData,1> *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
  }
LAB_146e55392:
  if ((local_108 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_108 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_108 & 4) != 0) {
    FThreadStats::AddMessage(local_110,CycleScopeEnd);
  }
  return;
}

// GatherGeometryFromSources @ 146e554a0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRecastTileGenerator::GatherGeometryFromSources(FRecastTileGenerator *this)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::GatherGeometryFromSources(void)_::_2_::FStat_STAT_RecastNavMeshGenerator_GatherGeometryFromSources>
  FVar7;
  UNavigationSystemV1 *pUVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  TSharedRef<FNavigationRelevantData,1> *pTVar12;
  FNameEntryId FVar13;
  TSharedRef<FNavigationRelevantData,1> *pTVar14;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_48;
  
  FVar13.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RecastNavMeshGenerator_GatherGeometryFromSources ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::GatherGeometryFromSources(void)_::_2_::FStat_STAT_RecastNavMeshGenerator_GatherGeometryFromSources>
         )0x0) {
      pFVar6 = ::FName::FName((FName *)&local_res8.s,
                              "STAT_RecastNavMeshGenerator_GatherGeometryFromSources");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_RecastNavMeshGenerator_GatherGeometryFromSources,*pFVar6,
                 L"STAT_RecastNavMeshGenerator_GatherGeometryFromSources","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar7 = StatPtr_STAT_RecastNavMeshGenerator_GatherGeometryFromSources;
  if (StatPtr_STAT_RecastNavMeshGenerator_GatherGeometryFromSources ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::GatherGeometryFromSources(void)_::_2_::FStat_STAT_RecastNavMeshGenerator_GatherGeometryFromSources>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_RecastNavMeshGenerator_GatherGeometryFromSources");
    FVar7 = (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::GatherGeometryFromSources(void)_::_2_::FStat_STAT_RecastNavMeshGenerator_GatherGeometryFromSources>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_RecastNavMeshGenerator_GatherGeometryFromSources,*pFVar6,
                         L"STAT_RecastNavMeshGenerator_GatherGeometryFromSources","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x7d8);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      FVar13.Value = FVar10.Value;
      goto LAB_146e5562f;
    }
  }
  bVar4 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_146e5562f:
  pUVar8 = (UNavigationSystemV1 *)FWeakObjectPtr::Get(&(this->NavSystem).WeakPtr);
  if (pUVar8 != (UNavigationSystemV1 *)0x0) {
    pTVar12 = *(TSharedRef<FNavigationRelevantData,1> **)&this->NavigationRelevantData;
    iVar2 = *(int *)&(this->NavigationRelevantData).field_0x10;
    pTVar14 = pTVar12 + iVar2;
    while( true ) {
      if (*(int *)&(this->NavigationRelevantData).field_0x10 != iVar2) {
        `TCheckedPointerIterator<TSharedRef<FNavigationRelevantData,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pTVar12 == pTVar14) break;
      GatherNavigationDataGeometry(this,pTVar12,pUVar8,&this->NavDataConfig,this->bUpdateGeometry);
      pTVar12 = pTVar12 + 1;
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// GatherGeometryFromSourcesTimeSliced @ 146e55870

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ETimeSliceWorkResult __thiscall
FRecastTileGenerator::GatherGeometryFromSourcesTimeSliced(FRecastTileGenerator *this)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ETimeSliceWorkResult EVar9;
  uint uVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_protected:_enum_ETimeSliceWorkResult___cdecl_FRecastTileGenerator::GatherGeometryFromSourcesTimeSliced(void)_::_2_::FStat_STAT_RecastNavMeshGenerator_GatherGeometryFromSources>
  FVar13;
  UNavigationSystemV1 *pUVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar15;
  FNameEntryId FVar16;
  FName FVar17;
  ulonglong uVar18;
  void *_Src;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_88;
  FName local_80;
  TSharedRef<FNavigationRelevantData,1> local_70;
  FStatMessage local_60 [2];
  
  uVar18 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_RecastNavMeshGenerator_GatherGeometryFromSources =
         (FThreadSafeStaticStat<_protected:_enum_ETimeSliceWorkResult___cdecl_FRecastTileGenerator::GatherGeometryFromSourcesTimeSliced(void)_::_2_::FStat_STAT_RecastNavMeshGenerator_GatherGeometryFromSources>
          )0x0;
    pFVar12 = ::FName::FName(&local_res20,"STAT_RecastNavMeshGenerator_GatherGeometryFromSources");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_RecastNavMeshGenerator_GatherGeometryFromSources,*pFVar12,
               L"STAT_RecastNavMeshGenerator_GatherGeometryFromSources","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_RecastNavMeshGenerator_GatherGeometryFromSources;
  if (StatPtr_STAT_RecastNavMeshGenerator_GatherGeometryFromSources ==
      (FThreadSafeStaticStat<_protected:_enum_ETimeSliceWorkResult___cdecl_FRecastTileGenerator::GatherGeometryFromSourcesTimeSliced(void)_::_2_::FStat_STAT_RecastNavMeshGenerator_GatherGeometryFromSources>
       )0x0) {
    pFVar12 = ::FName::FName(&local_88,"STAT_RecastNavMeshGenerator_GatherGeometryFromSources");
    FVar13 = (FThreadSafeStaticStat<_protected:_enum_ETimeSliceWorkResult___cdecl_FRecastTileGenerator::GatherGeometryFromSourcesTimeSliced(void)_::_2_::FStat_STAT_RecastNavMeshGenerator_GatherGeometryFromSources>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RecastNavMeshGenerator_GatherGeometryFromSources,*pFVar12,
                          L"STAT_RecastNavMeshGenerator_GatherGeometryFromSources","STATGROUP_Quick"
                          ,"STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar13;
  bVar5 = false;
  bVar7 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar10 = FVar17.Number;
  if ((FVar16.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar16.Value;
        local_res10.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x7e8);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar16.Value;
      local_res18.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar6 = true;
      goto LAB_146e55a7d;
    }
  }
  bVar6 = false;
  FVar17 = local_80;
LAB_146e55a7d:
  pUVar14 = (UNavigationSystemV1 *)FWeakObjectPtr::Get(&(this->NavSystem).WeakPtr);
  if (pUVar14 == (UNavigationSystemV1 *)0x0) {
    EVar9 = Failed;
  }
  else {
    iVar11 = *(int *)&(this->NavigationRelevantData).field_0x10;
    while (iVar11 != 0) {
      if ((*(int *)&(this->NavigationRelevantData).field_0x10 < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        EVar9 = (*pcVar4)();
        return EVar9;
      }
      lVar15 = (longlong)*(int *)&(this->NavigationRelevantData).field_0x10 * 0x10 +
               *(longlong *)&this->NavigationRelevantData;
      local_70.Object = *(FNavigationRelevantData **)(lVar15 + -0x10);
      local_70.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar15 + -8);
      if (local_70.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar11 = *(int *)&(this->NavigationRelevantData).field_0x10;
      _Src = (void *)((longlong)iVar11 * 0x10 + *(longlong *)&this->NavigationRelevantData);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)_Src + -8));
      iVar11 = *(int *)&(this->NavigationRelevantData).field_0x10 - iVar11;
      if (iVar11 != 0) {
        memmove((void *)((longlong)_Src + -0x10),_Src,(longlong)iVar11 << 4);
      }
      puVar2 = &(this->NavigationRelevantData).field_0x10;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      GatherNavigationDataGeometry
                (this,&local_70,pUVar14,&this->NavDataConfig,this->bUpdateGeometry);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70.SharedReferenceCount.ReferenceController);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8) + 0x9d4c) <
           ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        ::FName::FName(&::GatherGeometryFromSources,L"GatherGeometryFromSources");
        _Init_thread_footer(&::_TSS1);
      }
      (this->TimeSliceManager->TimeSlicer).DebugSectionName = ::GatherGeometryFromSources;
      bVar8 = FNavRegenTimeSlicer::TestTimeSliceFinished(&this->TimeSliceManager->TimeSlicer);
      if (bVar8) {
        EVar9 = CallAgainNextTimeSlice;
        goto LAB_146e55c20;
      }
      iVar11 = *(int *)&(this->NavigationRelevantData).field_0x10;
    }
    EVar9 = Succeeded;
  }
LAB_146e55c20:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return EVar9;
}

// GatherNavigationDataGeometry @ 146e55d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::GatherNavigationDataGeometry
          (FRecastTileGenerator *this,TSharedRef<FNavigationRelevantData,1> *param_1,
          UNavigationSystemV1 *param_2,FNavDataConfig *param_3,bool param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  FNavigationRelevantData *this_00;
  TAtomic<FMinimalName> TVar3;
  FNavigationElement *pFVar4;
  longlong *plVar5;
  undefined8 uVar6;
  LARGE_INTEGER LVar7;
  uint *puVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulong uVar13;
  undefined4 uVar14;
  uchar auVar15 [8];
  uchar auVar16 [8];
  bool bVar17;
  uint uVar18;
  uint uVar19;
  FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::GatherNavigationDataGeometry(TSharedRef<FNavigationRelevantData,1>_const_&,UNavigationSystemV1_&,FNavDataConfig_const_&,bool)_::_29_::FStat_STAT_RecastNavMeshGenerator_LazyGeometryExport>
  FVar20;
  FName *pFVar21;
  TStatId TVar22;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar23;
  FThreadStats *pFVar24;
  FThreadStatsPool *pFVar25;
  FCompositeNavModifier *pFVar26;
  TBox<double> *pTVar27;
  ulong64 uVar28;
  undefined8 *puVar29;
  uint *puVar30;
  uint *puVar31;
  uint *puVar32;
  int iVar33;
  wchar_t *pwVar34;
  uint *puVar35;
  FName FVar36;
  longlong lVar37;
  longlong lVar38;
  int iVar39;
  ulonglong uVar40;
  uint *puVar41;
  uint uVar42;
  undefined1 auStackY_438 [32];
  uint local_3d0;
  uint uStack_3cc;
  FName local_3c8;
  FName local_3c0;
  UNavigationSystemV1 *local_3b8;
  LARGE_INTEGER local_3b0;
  FName local_3a8;
  FName local_3a0;
  FColor_u_0 local_398 [2];
  FName local_390;
  byte local_388;
  FWeakObjectPtr local_380;
  FCompositeNavModifier local_378;
  char local_320;
  FMemScope local_318;
  FName local_310;
  FName local_300;
  TNavStatArray<rcSpanCache> local_2f0;
  undefined1 local_2d8 [16];
  undefined8 *local_2c8;
  uchar auStack_2c0 [8];
  undefined8 local_2b8;
  void *local_2b0;
  uchar local_2a8 [8];
  undefined8 local_2a0;
  TEnumAsByte<EWalkableSlopeBehavior> local_298;
  undefined8 local_294;
  float local_28c;
  LARGE_INTEGER local_288;
  LARGE_INTEGER local_280;
  LARGE_INTEGER local_278;
  FStatMessage local_270;
  FStatMessage local_260;
  FStatMessage local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FStatMessage local_1c0;
  FSourceLocation local_1a8;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158;
  undefined4 uStack_157;
  undefined2 uStack_153;
  undefined1 uStack_151;
  FName local_150;
  FName local_148;
  FName local_140 [2];
  FName local_130 [2];
  FString local_120;
  FName local_110;
  FName local_108 [2];
  FCompositeNavModifier local_f8;
  FReadAccessScope local_a0;
  TBox<double> local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_438;
  this_00 = param_1->Object;
  bVar12 = false;
  local_3b8 = param_2;
  local_3a8 = (FName)param_3;
  if (((this->TileDebugSettings).bEnabled == 0) ||
     ((this->TileDebugSettings).bGenerateDebugTileOnly == 0)) {
    if (GNavmeshGenerateDebugTileOnly) {
      if (this->TileX != GNavmeshDebugTileX) {
        return;
      }
      if (this->TileY != GNavmeshDebugTileY) {
        return;
      }
    }
  }
  else {
    bVar17 = FRecastNavMeshTileGenerationDebug::IsWithinTileCoordinates
                       (&this->TileDebugSettings,this->TileX,this->TileY);
    if (!bVar17) {
      return;
    }
  }
  bVar17 = IsTileDebugActive(this);
  if ((bVar17) && (4 < (byte)LogNavigation._0_1_)) {
    pwVar34 = L"true";
    if (this_00->bPendingLazyModifiersGathering == 0 &&
        this_00->bPendingChildLazyModifiersGathering == 0) {
      pwVar34 = L"false";
    }
    ::FString::FString(&local_1d0,pwVar34);
    bVar17 = FNavigationRelevantData::HasModifiers(this_00);
    pwVar34 = L"true";
    if (!bVar17) {
      pwVar34 = L"false";
    }
    ::FString::FString(&local_1e0,pwVar34);
    pwVar34 = L"true";
    if (this_00->bSupportsGatheringGeometrySlices == 0) {
      pwVar34 = L"false";
    }
    ::FString::FString(&local_1f0,pwVar34);
    pwVar34 = L"true";
    local_3c0 = (FName)L"";
    if (local_1f0.Data.ArrayNum != 0) {
      local_3c0 = (FName)local_1f0.Data.AllocatorInstance;
    }
    if (this_00->bPendingLazyGeometryGathering == 0) {
      pwVar34 = L"false";
    }
    ::FString::FString(&local_200,pwVar34);
    local_3a0 = (FName)L"";
    if (local_200.Data.ArrayNum != 0) {
      local_3a0 = (FName)local_200.Data.AllocatorInstance;
    }
    if ((*(int *)&(this_00->VoxelData).field_0x10 == 0) &&
       (*(int *)&(this_00->CollisionData).field_0x10 == 0)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    pwVar34 = L"true";
    if (!bVar17) {
      pwVar34 = L"false";
    }
    ::FString::FString(&local_210,pwVar34);
    local_3c8 = (FName)L"";
    if (local_210.Data.ArrayNum != 0) {
      local_3c8 = (FName)local_210.Data.AllocatorInstance;
    }
    ::FString::PrintfImpl(&local_220,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_230,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_240,L"IsValid=%s, Min=(%s), Max=(%s)");
    if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Data.AllocatorInstance.Data);
    }
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
    FNavigationElement::GetFullName((this_00->SourceElement).Object,&local_120);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data.AllocatorInstance.Data);
    }
    if ((FName)local_210.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_210.Data.AllocatorInstance.Data);
    }
    if ((FName)local_200.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    if ((FName)local_1f0.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    param_2 = local_3b8;
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      param_2 = local_3b8;
    }
  }
  uVar13 = _tls_index;
  if ((this_00->bPendingLazyGeometryGathering == 0) &&
     (this_00->bPendingLazyModifiersGathering == 0 &&
      this_00->bPendingChildLazyModifiersGathering == 0)) {
    local_3b8 = (UNavigationSystemV1 *)0x9d4c;
  }
  else {
    local_3b8 = (UNavigationSystemV1 *)0x9d4c;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_STAT_RecastNavMeshGenerator_LazyGeometryExport =
           (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::GatherNavigationDataGeometry(TSharedRef<FNavigationRelevantData,1>_const_&,UNavigationSystemV1_&,FNavDataConfig_const_&,bool)_::_29_::FStat_STAT_RecastNavMeshGenerator_LazyGeometryExport>
            )0x0;
      pFVar21 = ::FName::FName(&local_150,"STAT_RecastNavMeshGenerator_LazyGeometryExport");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_RecastNavMeshGenerator_LazyGeometryExport,*pFVar21,
                 L"STAT_RecastNavMeshGenerator_LazyGeometryExport","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    FVar20 = StatPtr_STAT_RecastNavMeshGenerator_LazyGeometryExport;
    if (StatPtr_STAT_RecastNavMeshGenerator_LazyGeometryExport ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::GatherNavigationDataGeometry(TSharedRef<FNavigationRelevantData,1>_const_&,UNavigationSystemV1_&,FNavDataConfig_const_&,bool)_::_29_::FStat_STAT_RecastNavMeshGenerator_LazyGeometryExport>
         )0x0) {
      pFVar21 = ::FName::FName(&local_148,"STAT_RecastNavMeshGenerator_LazyGeometryExport");
      FVar20 = (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::GatherNavigationDataGeometry(TSharedRef<FNavigationRelevantData,1>_const_&,UNavigationSystemV1_&,FNavDataConfig_const_&,bool)_::_29_::FStat_STAT_RecastNavMeshGenerator_LazyGeometryExport>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_RecastNavMeshGenerator_LazyGeometryExport,*pFVar21,
                            L"STAT_RecastNavMeshGenerator_LazyGeometryExport","STATGROUP_Quick",
                            "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar36 = *(FName *)FVar20;
    local_300.ComparisonIndex.Value = 0;
    local_300.Number = 0;
    bVar17 = false;
    bVar11 = false;
    if ((FVar36.ComparisonIndex.Value.Value == 0) && (FVar36.Number == 0)) {
LAB_146e5630b:
      bVar10 = false;
      FVar36 = local_300;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_398[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_398[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
        bVar17 = false;
        bVar11 = true;
        if (-1 < CpuChannel->Enabled) {
          local_3a0 = FVar36;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_3a0,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                     ,0x873);
          bVar17 = true;
          bVar11 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_146e5630b;
      local_3c8 = FVar36;
      FThreadStats::AddMessage(FVar36,CycleScopeStart);
      bVar10 = true;
    }
    UNavigationSystemV1::DemandLazyDataGathering(param_2,this_00);
    if (bVar11) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar17) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar10) && (FVar36 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar24 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar24 == (FThreadStats *)0x0) {
        pFVar25 = FThreadStatsPool::Get();
        pFVar24 = FThreadStatsPool::GetFromPool(pFVar25);
      }
      if (pFVar24->bWaitForExplicitFlush < pFVar24->ScopeCount) {
        local_1c0.NameAndInfo.Index = FVar36.ComparisonIndex.Value;
        local_1c0.NameAndInfo.Number = FVar36.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_288);
        local_1c0.StatData.Pad[4] = '\0';
        local_1c0.StatData.Pad[5] = '\0';
        local_1c0.StatData.Pad[6] = '\0';
        local_1c0.StatData.Pad[7] = '\0';
        local_1c0.StatData.Pad[0] = local_288.s.LowPart._0_1_;
        local_1c0.StatData.Pad[1] = local_288.s.LowPart._1_1_;
        local_1c0.StatData.Pad[2] = local_288.s.LowPart._2_1_;
        local_1c0.StatData.Pad[3] = local_288.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar24,&local_1c0);
        piVar1 = &pFVar24->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar24,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar24,false,false);
        }
      }
    }
  }
  if ((this_00->bPendingLazyGeometryGathering == 0) ||
     (this_00->bSupportsGatheringGeometrySlices == 0)) goto LAB_146e56b61;
  if ((*(int *)((longlong)local_3b8 +
               *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar13 * 8)) < ::_TSS1
      ) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    StatPtr_STAT_RecastNavMeshGenerator_LandscapeSlicesExporting =
         (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::GatherNavigationDataGeometry(TSharedRef<FNavigationRelevantData,1>_const_&,UNavigationSystemV1_&,FNavDataConfig_const_&,bool)_::_32_::FStat_STAT_RecastNavMeshGenerator_LandscapeSlicesExporting>
          )0x0;
    pFVar21 = ::FName::FName(local_140,"STAT_RecastNavMeshGenerator_LandscapeSlicesExporting");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_RecastNavMeshGenerator_LandscapeSlicesExporting,*pFVar21,
               L"STAT_RecastNavMeshGenerator_LandscapeSlicesExporting","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS1);
  }
  TVar22 = FThreadSafeStaticStatInner<`FRecastTileGenerator::GatherNavigationDataGeometry'::__l32::FStat_STAT_RecastNavMeshGenerator_LandscapeSlicesExporting,1>
           ::GetStatId(&StatPtr_STAT_RecastNavMeshGenerator_LandscapeSlicesExporting);
  bVar17 = false;
  bVar11 = false;
  local_310.ComparisonIndex.Value = 0;
  local_310.Number = 0;
  TVar3 = (TVar22.StatIdPtr)->Name;
  FVar36 = *(FName *)TVar3;
  if ((FVar36.ComparisonIndex.Value.Value == 0) && (FVar36.Number == 0)) {
LAB_146e56597:
    bVar10 = false;
    FVar36 = local_310;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_3c8 = (FName)((ulonglong)local_3c8 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_3c8,(char *)*(FName *)((longlong)TVar3 + 0x10));
      bVar17 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_3c0 = FVar36;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_3c0,(wchar_t *)*(FName *)((longlong)TVar3 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x879);
        bVar17 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e56597;
    local_3d0 = FVar36.ComparisonIndex.Value.Value;
    uStack_3cc = FVar36.Number;
    FThreadStats::AddMessage(FVar36,CycleScopeStart);
    bVar10 = true;
  }
  local_2b0 = (void *)0x0;
  local_2d8._0_8_ = &___7FRecastGeometryExport__6B_;
  local_2a8[0] = '\0';
  local_2a8[1] = '\0';
  local_2a8[2] = '\0';
  local_2a8[3] = '\0';
  local_2a8[4] = '\0';
  local_2a8[5] = '\0';
  local_2a8[6] = '\0';
  local_2a8[7] = '\0';
  local_2c8 = (undefined8 *)0x0;
  auStack_2c0[0] = '\0';
  auStack_2c0[1] = '\0';
  auStack_2c0[2] = '\0';
  auStack_2c0[3] = '\0';
  auStack_2c0[4] = '\0';
  auStack_2c0[5] = '\0';
  auStack_2c0[6] = '\0';
  auStack_2c0[7] = '\0';
  local_2b8 = 0;
  local_2a0 = 0;
  local_298.Value = '\0';
  local_294._0_4_ = 0.0;
  local_294._4_4_ = 0.0;
  local_28c = 1.0;
  (this_00->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (this_00->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  uStack_157 = 0;
  (this_00->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (this_00->Bounds).Max.field0_0x0._s_0.X = 0.0;
  uStack_153 = 0;
  (this_00->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (this_00->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  uStack_151 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  (this_00->Bounds).IsValid = '\0';
  (this_00->Bounds).Pad[0] = '\0';
  (this_00->Bounds).Pad[1] = '\0';
  (this_00->Bounds).Pad[2] = '\0';
  (this_00->Bounds).Pad[3] = '\0';
  (this_00->Bounds).Pad[4] = '\0';
  (this_00->Bounds).Pad[5] = '\0';
  (this_00->Bounds).Pad[6] = '\0';
  pFVar4 = (this_00->SourceElement).Object;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_2d8._8_8_ = this_00;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar4->GeometrySliceExportDelegate,&local_a0);
  if ((*(int *)&(pFVar4->GeometrySliceExportDelegate).field_0x10 != 0) &&
     (plVar5 = *(longlong **)&(pFVar4->GeometrySliceExportDelegate).field_0x8,
     plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x68))(plVar5,pFVar4);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_a0);
  if ((int)local_2b8 != 0) {
    uVar19 = (uint)__xmm_80000000000000008000000000000000;
    uVar42 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    iVar39 = 0;
    iVar33 = (int)local_2b8 / 3 + ((int)local_2b8 >> 0x1f) +
             (int)(((longlong)(int)local_2b8 / 3 + ((longlong)(int)local_2b8 >> 0x3f) & 0xffffffffU)
                  >> 0x1f);
    puVar29 = local_2c8;
    if (3 < iVar33) {
      uVar18 = (iVar33 - 4U >> 2) + 1;
      uVar40 = (ulonglong)uVar18;
      iVar39 = uVar18 * 4;
      do {
        uVar6 = puVar29[2];
        *puVar29 = CONCAT44((uint)((ulonglong)*puVar29 >> 0x20) ^ uVar42,(uint)*puVar29 ^ uVar19);
        puVar29[2] = CONCAT44((uint)((ulonglong)puVar29[1] >> 0x20) ^ uVar42,
                              (uint)puVar29[1] ^ uVar19);
        puVar29[3] = CONCAT44((uint)((ulonglong)puVar29[3] >> 0x20) ^ uVar42,
                              (uint)puVar29[3] ^ uVar19);
        puVar29[1] = uVar6;
        uVar6 = puVar29[5];
        puVar29[5] = CONCAT44((uint)((ulonglong)puVar29[4] >> 0x20) ^ uVar42,
                              (uint)puVar29[4] ^ uVar19);
        puVar29[4] = uVar6;
        uVar6 = puVar29[8];
        puVar29[6] = CONCAT44((uint)((ulonglong)puVar29[6] >> 0x20) ^ uVar42,
                              (uint)puVar29[6] ^ uVar19);
        puVar29[8] = CONCAT44((uint)((ulonglong)puVar29[7] >> 0x20) ^ uVar42,
                              (uint)puVar29[7] ^ uVar19);
        puVar29[7] = uVar6;
        uVar6 = puVar29[0xb];
        puVar29[9] = CONCAT44((uint)((ulonglong)puVar29[9] >> 0x20) ^ uVar42,
                              (uint)puVar29[9] ^ uVar19);
        puVar29[0xb] = CONCAT44((uint)((ulonglong)puVar29[10] >> 0x20) ^ uVar42,
                                (uint)puVar29[10] ^ uVar19);
        puVar29[10] = uVar6;
        puVar29 = puVar29 + 0xc;
        uVar40 = uVar40 - 1;
      } while (uVar40 != 0);
    }
    if (iVar39 < iVar33) {
      puVar29 = puVar29 + 2;
      uVar40 = (ulonglong)(uint)(iVar33 - iVar39);
      do {
        uVar6 = *puVar29;
        puVar29[-2] = CONCAT44((uint)((ulonglong)puVar29[-2] >> 0x20) ^ uVar42,
                               (uint)puVar29[-2] ^ uVar19);
        *puVar29 = CONCAT44((uint)((ulonglong)puVar29[-1] >> 0x20) ^ uVar42,
                            (uint)puVar29[-1] ^ uVar19);
        puVar29[-1] = uVar6;
        puVar29 = puVar29 + 3;
        uVar40 = uVar40 - 1;
      } while (uVar40 != 0);
    }
  }
  RecastGeometryExport::StoreCollisionCache((FRecastGeometryExport *)local_2d8);
  auVar15 = local_2a8;
  bVar12 = true;
  if (local_2a8 != (uchar  [8])0x0) {
    FVar23 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar21 = ::FName::FName(local_108,"STAT_NavigationMemory");
      FVar23 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar21,
                          L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                          false,ST_int64,false,false,MCR_Physical);
    }
    LVar7 = *(LARGE_INTEGER *)FVar23;
    local_3d0 = LVar7.s.LowPart;
    uVar19 = LVar7.s.HighPart;
    uStack_3cc = uVar19;
    local_3b0 = LVar7;
    if (((LVar7.QuadPart != 0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar24 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar24 == (FThreadStats *)0x0) {
        pFVar25 = FThreadStatsPool::Get();
        pFVar24 = FThreadStatsPool::GetFromPool(pFVar25);
      }
      auVar16 = local_2a8;
      local_270.NameAndInfo.Index.Value = local_3b0.s.LowPart;
      local_270.NameAndInfo.Number = uVar19 & 0xffffbfff | 0xb000;
      local_2a8[0] = auVar15[0];
      local_2a8[1] = auVar15[1];
      local_2a8[2] = auVar15[2];
      local_2a8[3] = auVar15[3];
      local_2a8[4] = auVar15[4];
      local_2a8[5] = auVar15[5];
      local_2a8[6] = auVar15[6];
      local_2a8[7] = auVar15[7];
      local_270.StatData.Pad[0] = local_2a8[0];
      local_270.StatData.Pad[1] = local_2a8[1];
      local_270.StatData.Pad[2] = local_2a8[2];
      local_270.StatData.Pad[3] = local_2a8[3];
      local_270.StatData.Pad[4] = local_2a8[4];
      local_270.StatData.Pad[5] = local_2a8[5];
      local_270.StatData.Pad[6] = local_2a8[6];
      local_270.StatData.Pad[7] = local_2a8[7];
      local_2a8 = auVar16;
      local_280 = LVar7;
      FThreadStats::AddStatMessage(pFVar24,&local_270);
      FStatsTrace::Add((FName *)&local_280.s,-(longlong)auVar15);
      if (pFVar24->ScopeCount == 0) {
        FThreadStats::Flush(pFVar24,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar24,false,false);
      }
    }
  }
  if (local_2b0 != (void *)0x0) {
    FMemory::Free(local_2b0);
  }
  auVar15 = auStack_2c0;
  if (auStack_2c0 != (uchar  [8])0x0) {
    FVar23 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar21 = ::FName::FName(&local_110,"STAT_NavigationMemory");
      FVar23 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar21,
                          L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                          false,ST_int64,false,false,MCR_Physical);
    }
    LVar7 = *(LARGE_INTEGER *)FVar23;
    local_3d0 = LVar7.s.LowPart;
    uVar19 = LVar7.s.HighPart;
    uStack_3cc = uVar19;
    local_3b0 = LVar7;
    if (((LVar7.QuadPart != 0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar24 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar24 == (FThreadStats *)0x0) {
        pFVar25 = FThreadStatsPool::Get();
        pFVar24 = FThreadStatsPool::GetFromPool(pFVar25);
      }
      auVar16 = auStack_2c0;
      local_250.NameAndInfo.Index.Value = local_3b0.s.LowPart;
      local_250.NameAndInfo.Number = uVar19 & 0xffffbfff | 0xb000;
      auStack_2c0[0] = auVar15[0];
      auStack_2c0[1] = auVar15[1];
      auStack_2c0[2] = auVar15[2];
      auStack_2c0[3] = auVar15[3];
      auStack_2c0[4] = auVar15[4];
      auStack_2c0[5] = auVar15[5];
      auStack_2c0[6] = auVar15[6];
      auStack_2c0[7] = auVar15[7];
      local_250.StatData.Pad[0] = auStack_2c0[0];
      local_250.StatData.Pad[1] = auStack_2c0[1];
      local_250.StatData.Pad[2] = auStack_2c0[2];
      local_250.StatData.Pad[3] = auStack_2c0[3];
      local_250.StatData.Pad[4] = auStack_2c0[4];
      local_250.StatData.Pad[5] = auStack_2c0[5];
      local_250.StatData.Pad[6] = auStack_2c0[6];
      local_250.StatData.Pad[7] = auStack_2c0[7];
      auStack_2c0 = auVar16;
      local_278 = LVar7;
      FThreadStats::AddStatMessage(pFVar24,&local_250);
      FStatsTrace::Add((FName *)&local_278.s,-(longlong)auVar15);
      if (pFVar24->ScopeCount == 0) {
        FThreadStats::Flush(pFVar24,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar24,false,false);
      }
    }
  }
  if (local_2c8 != (undefined8 *)0x0) {
    FMemory::Free(local_2c8);
  }
  local_2d8._0_8_ = &___7FNavigableGeometryExport__6B_;
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar10) && (FVar36 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar24 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar24 == (FThreadStats *)0x0) {
      pFVar25 = FThreadStatsPool::Get();
      pFVar24 = FThreadStatsPool::GetFromPool(pFVar25);
    }
    if (pFVar24->bWaitForExplicitFlush < pFVar24->ScopeCount) {
      local_260.NameAndInfo.Index = FVar36.ComparisonIndex.Value;
      local_260.NameAndInfo.Number = FVar36.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_3b0);
      local_260.StatData.Pad = (uchar  [8])(local_3b0.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar24,&local_260);
      piVar1 = &pFVar24->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar24,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar24,false,false);
      }
    }
  }
LAB_146e56b61:
  pFVar26 = &this_00->Modifiers;
  local_320 = '\0';
  if ((pFVar26->_padding_ & 1) != 0) {
    local_380 = (((this_00->SourceElement).Object)->OwnerUObject).WeakPtr;
    pFVar26 = FCompositeNavModifier::GetInstantiatedMetaModifier
                        (pFVar26,&local_f8,(FNavAgentProperties *)local_3a8,
                         (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_380);
    if (pFVar26 != &local_378) {
      if (local_320 != '\0') {
        if (local_378.CustomLinks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_378.CustomLinks.AllocatorInstance.Data);
        }
        DestructItems<FSimpleLinkNavModifier,int>
                  ((FSimpleLinkNavModifier *)local_378.SimpleLinks.AllocatorInstance.Data,
                   local_378.SimpleLinks.ArrayNum);
        if ((FSimpleLinkNavModifier *)local_378.SimpleLinks.AllocatorInstance.Data !=
            (FSimpleLinkNavModifier *)0x0) {
          FMemory::Free(local_378.SimpleLinks.AllocatorInstance.Data);
        }
        DestructItems<FAreaNavModifier,int>
                  ((FAreaNavModifier *)local_378.Areas.AllocatorInstance.Data,
                   local_378.Areas.ArrayNum);
        if ((FAreaNavModifier *)local_378.Areas.AllocatorInstance.Data != (FAreaNavModifier *)0x0) {
          FMemory::Free(local_378.Areas.AllocatorInstance.Data);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                   &local_378.NavDataPerInstanceTransformDelegate);
      }
      local_378._padding_._0_4_ = (undefined4)pFVar26->_padding_;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &local_378.NavDataPerInstanceTransformDelegate,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &pFVar26->NavDataPerInstanceTransformDelegate);
      local_378.Areas.AllocatorInstance.Data = (pFVar26->Areas).AllocatorInstance.Data;
      (pFVar26->Areas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_378.Areas.ArrayNum = (pFVar26->Areas).ArrayNum;
      local_378.Areas.ArrayMax = (pFVar26->Areas).ArrayMax;
      (pFVar26->Areas).ArrayNum = 0;
      (pFVar26->Areas).ArrayMax = 0;
      local_378.SimpleLinks.AllocatorInstance.Data = (pFVar26->SimpleLinks).AllocatorInstance.Data;
      (pFVar26->SimpleLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_378.SimpleLinks.ArrayNum = (pFVar26->SimpleLinks).ArrayNum;
      local_378.SimpleLinks.ArrayMax = (pFVar26->SimpleLinks).ArrayMax;
      (pFVar26->SimpleLinks).ArrayNum = 0;
      (pFVar26->SimpleLinks).ArrayMax = 0;
      local_378.CustomLinks.AllocatorInstance.Data = (pFVar26->CustomLinks).AllocatorInstance.Data;
      (pFVar26->CustomLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_378.CustomLinks.ArrayNum = (pFVar26->CustomLinks).ArrayNum;
      local_378.CustomLinks.ArrayMax = (pFVar26->CustomLinks).ArrayMax;
      (pFVar26->CustomLinks).ArrayNum = 0;
      (pFVar26->CustomLinks).ArrayMax = 0;
      local_378._80_4_ = local_378._80_4_ ^ (local_378._80_4_ ^ pFVar26->bHasPotentialLinks) & 1;
      local_378._80_4_ = (local_378._80_4_ ^ *(uint *)&pFVar26->field_0x50) & 2 ^ local_378._80_4_;
      local_378._80_4_ = (local_378._80_4_ ^ *(uint *)&pFVar26->field_0x50) & 4 ^ local_378._80_4_;
      local_378._80_4_ = (local_378._80_4_ ^ *(uint *)&pFVar26->field_0x50) & 8 ^ local_378._80_4_;
      local_378._80_4_ =
           (local_378._80_4_ ^ *(uint *)&pFVar26->field_0x50) & 0x10 ^ local_378._80_4_;
      local_378._80_4_ =
           (local_378._80_4_ ^ *(uint *)&pFVar26->field_0x50) & 0x20 ^ local_378._80_4_;
      local_378._80_4_ =
           (local_378._80_4_ ^ *(uint *)&pFVar26->field_0x50) & 0x40 ^ local_378._80_4_;
      local_378.NavMeshResolution = pFVar26->NavMeshResolution;
      local_320 = '\x01';
    }
    if (local_f8.CustomLinks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.CustomLinks.AllocatorInstance.Data);
    }
    DestructItems<FSimpleLinkNavModifier,int>
              ((FSimpleLinkNavModifier *)local_f8.SimpleLinks.AllocatorInstance.Data,
               local_f8.SimpleLinks.ArrayNum);
    if ((FSimpleLinkNavModifier *)local_f8.SimpleLinks.AllocatorInstance.Data !=
        (FSimpleLinkNavModifier *)0x0) {
      FMemory::Free(local_f8.SimpleLinks.AllocatorInstance.Data);
    }
    DestructItems<FAreaNavModifier,int>
              ((FAreaNavModifier *)local_f8.Areas.AllocatorInstance.Data,local_f8.Areas.ArrayNum);
    if ((FAreaNavModifier *)local_f8.Areas.AllocatorInstance.Data != (FAreaNavModifier *)0x0) {
      FMemory::Free(local_f8.Areas.AllocatorInstance.Data);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &local_f8.NavDataPerInstanceTransformDelegate);
    if ((local_320 == '\0') &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar17)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar26 = &local_378;
  }
  if ((param_4) &&
     ((*(int *)&(this_00->VoxelData).field_0x10 != 0 ||
      (*(int *)&(this_00->CollisionData).field_0x10 != 0)))) {
    bVar17 = ARecastNavMesh::IsVoxelCacheEnabled();
    if (bVar17) {
      puVar35 = (uint *)0x0;
      local_2f0._0_4_ = 0;
      local_2f0._4_4_ = 0;
      local_2f0._8_8_ = 0;
      local_2f0._16_8_ = 0;
      if ((*(int *)((longlong)local_3b8 +
                   *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)) <
           ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        StatPtr_Stat_RecastRasterCachePrep =
             (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::GatherNavigationDataGeometry(TSharedRef<FNavigationRelevantData,1>_const_&,UNavigationSystemV1_&,FNavDataConfig_const_&,bool)_::_43_::FStat_Stat_RecastRasterCachePrep>
              )0x0;
        pFVar21 = ::FName::FName(local_130,"Stat_RecastRasterCachePrep");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_Stat_RecastRasterCachePrep,*pFVar21,
                   L"Rasterization: prepare voxel cache","STATGROUP_Navigation","STATCAT_Advanced",
                   L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS2);
      }
      TVar22 = FThreadSafeStaticStatInner<`FRecastTileGenerator::GatherNavigationDataGeometry'::__l43::FStat_Stat_RecastRasterCachePrep,1>
               ::GetStatId(&StatPtr_Stat_RecastRasterCachePrep);
      local_1a8.Impl._Line = 0x89d;
      local_1a8.Impl._File =
           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
      ;
      local_1a8.Impl._Column = 4;
      local_1a8.Impl._Function =
           "void __cdecl FRecastTileGenerator::GatherNavigationDataGeometry(const class TSharedRef<struct FNavigationRelevantData,1> &,class UNavigationSystemV1 &,const struct FNavDataConfig &,bool)"
      ;
      FScopeCycleCounter::FScopeCycleCounter
                ((FScopeCycleCounter *)&local_390,*(TStatIdData **)&(TVar22.StatIdPtr)->Name,
                 CycleStat|ClearEveryFrame,false,&local_1a8);
      puVar8 = *(uint **)&this_00->VoxelData;
      if (puVar8 != (uint *)0x0) {
        if (0 < (int)*puVar8) {
          uVar40 = (ulonglong)*puVar8;
          puVar32 = puVar8 + 1;
          do {
            puVar30 = puVar32;
            puVar31 = puVar30 + 8;
            puVar32 = puVar31;
            puVar41 = puVar35;
            if (puVar30[2] != 0) {
              puVar32 = puVar31 + (longlong)(int)puVar30[2] * 4;
              puVar41 = puVar31;
            }
            *(uint **)(puVar30 + 6) = puVar41;
            *(uint **)(puVar30 + 4) = puVar32;
            uVar40 = uVar40 - 1;
          } while (uVar40 != 0);
          puVar30[4] = 0;
          puVar30[5] = 0;
          puVar35 = puVar8 + 1;
        }
        if (puVar35 != (uint *)0x0) {
          do {
            if ((*puVar35 == this->TileX) && (puVar35[1] == this->TileY)) goto LAB_146e5708a;
            puVar35 = *(uint **)(puVar35 + 4);
          } while (puVar35 != (uint *)0x0);
        }
      }
      pTVar27 = Unreal2RecastBox(&local_88,&this_00->Bounds);
      PrepareVoxelCache(this,&this_00->CollisionData,pTVar27,pFVar26,&local_2f0);
      uVar14 = local_2f0._16_4_;
      local_380.ObjectIndex = local_2f0._0_4_;
      local_380.ObjectSerialNumber = local_2f0._4_4_;
      FLLMScope::FLLMScope
                ((FLLMScope *)&local_3d0,LLMTagDeclaration_NavigationOctree.UniqueName,false,None,
                 Default,true);
      local_3a8 = LLMTagDeclaration_NavigationOctree.UniqueName;
      FMemScope::FMemScope(&local_318,&local_3a8,true);
      local_3a8 = (FName)FNavigationRelevantData::GetAllocatedSize(this_00);
      if (*(int *)&(this_00->VoxelData).field_0x10 == 0) {
        TArray<unsigned_char,NavMeshMemory::FNavigationMemoryStat>::AddZeroed
                  ((TArray<unsigned_char,NavMeshMemory::FNavigationMemoryStat> *)&this_00->VoxelData
                   ,4);
      }
      iVar39 = uVar14 * 0x10;
      **(int **)&this_00->VoxelData = **(int **)&this_00->VoxelData + 1;
      lVar37 = (longlong)*(int *)&(this_00->VoxelData).field_0x10;
      TArray<unsigned_char,NavMeshMemory::FNavigationMemoryStat>::AddZeroed
                ((TArray<unsigned_char,NavMeshMemory::FNavigationMemoryStat> *)&this_00->VoxelData,
                 iVar39 + 0x20);
      lVar38 = *(longlong *)&this_00->VoxelData;
      *(int *)(lVar37 + lVar38) = this->TileX;
      *(int *)(lVar37 + 4 + lVar38) = this->TileY;
      *(undefined4 *)(lVar37 + 8 + lVar38) = uVar14;
      memcpy((void *)(*(longlong *)&this_00->VoxelData + lVar37 + 0x20),(void *)local_380,
             (longlong)iVar39);
      uVar28 = FNavigationRelevantData::GetAllocatedSize(this_00);
      lVar38 = uVar28 - (longlong)local_3a8;
      if (lVar38 != 0) {
        TVar22 = FThreadSafeStaticStatInner<FStat_STAT_Navigation_CollisionTreeMemory,1>::GetStatId
                           ((FThreadSafeStaticStatInner<FStat_STAT_Navigation_CollisionTreeMemory,1>
                             *)&StatPtr_STAT_Navigation_CollisionTreeMemory);
        local_3c0 = *(FName *)(TVar22.StatIdPtr)->Name;
        FThreadStats::AddMessage<__int64>(local_3c0,Add,lVar38,false);
      }
      FMemScope::~FMemScope(&local_318);
      FLLMScope::~FLLMScope((FLLMScope *)&local_3d0);
LAB_146e5708a:
      if ((local_388 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_388 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_388 & 4) != 0) {
        FThreadStats::AddMessage(local_390,CycleScopeEnd);
      }
      local_388 = 0;
      NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
                ((ForAnyElementType *)&local_2f0);
    }
    else {
      ValidateAndAppendGeometry(this,this_00,pFVar26);
    }
    if (bVar12) {
      puVar2 = &(this_00->CollisionData).field_0x14;
      *(undefined4 *)&(this_00->CollisionData).field_0x10 = 0;
      if (*(int *)puVar2 != 0) {
        UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                  (1,1,0,(ForAnyElementType *)&this_00->CollisionData,0,(int *)puVar2);
      }
    }
  }
  if (((((pFVar26->Areas).ArrayNum != 0) || ((pFVar26->SimpleLinks).ArrayNum != 0)) ||
      ((pFVar26->CustomLinks).ArrayNum != 0)) ||
     ((pFVar26->bFillCollisionUnderneathForNavmesh != 0 ||
       (pFVar26->bMaskFillCollisionUnderneathForNavmesh != 0 ||
       pFVar26->bRasterizeAsFilledConvexVolume != 0) || (pFVar26->NavMeshResolution != Invalid)))) {
    AppendModifier(this,pFVar26,&this_00->NavDataPerInstanceTransformDelegate);
  }
  if (local_320 != '\0') {
    if (local_378.CustomLinks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.CustomLinks.AllocatorInstance.Data);
    }
    DestructItems<FSimpleLinkNavModifier,int>
              ((FSimpleLinkNavModifier *)local_378.SimpleLinks.AllocatorInstance.Data,
               local_378.SimpleLinks.ArrayNum);
    if ((FSimpleLinkNavModifier *)local_378.SimpleLinks.AllocatorInstance.Data !=
        (FSimpleLinkNavModifier *)0x0) {
      FMemory::Free(local_378.SimpleLinks.AllocatorInstance.Data);
    }
    DestructItems<FAreaNavModifier,int>
              ((FAreaNavModifier *)local_378.Areas.AllocatorInstance.Data,local_378.Areas.ArrayNum);
    if ((FAreaNavModifier *)local_378.Areas.AllocatorInstance.Data != (FAreaNavModifier *)0x0) {
      FMemory::Free(local_378.Areas.AllocatorInstance.Data);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &local_378.NavDataPerInstanceTransformDelegate);
  }
  return;
}

// GenerateCompressedLayers @ 146e571d0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall
FRecastTileGenerator::GenerateCompressedLayers
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1)

{
  undefined1 uVar1;
  undefined1 local_res8 [32];
  
  local_res8[0] = 0;
  uVar1 = (**(code **)(this->_padding_ + 0x40))(this,param_1,local_res8);
  return (bool)uVar1;
}

// GenerateCompressedLayers @ 146e571f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FRecastTileGenerator::GenerateCompressedLayers
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,dtLinkBuilderData *param_2)

{
  int *piVar1;
  int iVar2;
  FNavMeshTileData *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildCompressedLayers> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  undefined1 auStackY_4108 [32];
  LARGE_INTEGER local_40a8;
  FName local_40a0;
  FStatMessage local_4090;
  FTileRasterizationContext local_4078;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x146e57212;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4108;
  FVar13.Value = 0;
  FVar9 = StatPtr_STAT_Navigation_RecastBuildCompressedLayers;
  if (StatPtr_STAT_Navigation_RecastBuildCompressedLayers ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildCompressedLayers>)0x0) {
    pFVar8 = ::FName::FName((FName *)&local_4090,"STAT_Navigation_RecastBuildCompressedLayers");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildCompressedLayers>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_Navigation_RecastBuildCompressedLayers,*pFVar8,
                       L"Recast: build compressed layers","STATGROUP_Navigation","STATCAT_Advanced",
                       L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_40a0.ComparisonIndex.Value = 0;
  local_40a0.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_40a8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_40a8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_40a8.s.LowPart = FVar11.Value;
        local_40a8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_40a8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xe7c);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_40a8.s.LowPart = FVar11.Value;
      local_40a8.s.HighPart = uVar10;
      local_40a0 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      FVar13.Value = local_40a0.ComparisonIndex.Value;
      goto LAB_146e5735f;
    }
  }
  bVar5 = false;
  FVar12 = local_40a0;
LAB_146e5735f:
  local_4078.Layers.ArrayNum = 0;
  local_4078.Layers.ArrayMax = 0;
  pFVar3 = (FNavMeshTileData *)(this->CompressedLayers).AllocatorInstance.Data;
  iVar2 = (this->CompressedLayers).ArrayNum;
  local_4078.RasterizationMasks.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_4078.RasterizationMasks.ArrayNum = 0;
  piVar1 = &(this->CompressedLayers).ArrayMax;
  local_4078.LayerSet = (rcHeightfieldLayerSet *)0x0;
  local_4078.Layers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4078.RasterizationMasks.ArrayMax = 0x1000;
  local_4078.RasterizationFlags = 0;
  if ((this->CompressedLayers).ArrayMax < 0) {
    DestructItems<FNavMeshTileData,int>(pFVar3,iVar2);
    (this->CompressedLayers).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,0,&(this->CompressedLayers).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FNavMeshTileData,int>(pFVar3,iVar2);
    (this->CompressedLayers).ArrayNum = 0;
  }
  bVar7 = CreateHeightField(this,param_1);
  if (bVar7) {
    ComputeRasterizationMasks(this,param_1,&local_4078);
    RasterizeTriangles(this,param_1,&local_4078);
    if ((this->SolidHF == (rcHeightfield *)0x0) || (this->SolidHF->pools == (rcSpanPool *)0x0)) {
      rcContext::log((rcContext *)param_1,RC_LOG_WARNING,
                     "GenerateCompressedLayers: empty tile - aborting");
      bVar7 = true;
    }
    else {
      bVar7 = IsTileDebugActive(this);
      if (bVar7) {
        if ((this->TileDebugSettings).bHeightfieldFromRasterization != 0) {
          if ((this->TileDebugSettings).HeightFieldRenderMode == Solid) {
            duDebugDrawHeightfieldSolid((duDebugDraw *)param_1->InternalDebugData,this->SolidHF);
          }
          else {
            duDebugDrawHeightfieldWalkable((duDebugDraw *)param_1->InternalDebugData,this->SolidHF);
          }
        }
        if ((this->TileDebugSettings).bHeightfieldBounds != 0) {
          duDebugDrawHeightfieldBounds((duDebugDraw *)param_1->InternalDebugData,this->SolidHF);
        }
      }
      if (((this->TileConfig).bPerformVoxelFiltering != 0) &&
         (this->bFullyEncapsulatedByInclusionBounds == 0)) {
        (**(code **)(this->_padding_ + 0x48))
                  (this,this->SolidHF,(double)(int)(this->TileConfig)._padding_);
      }
      bVar7 = IsTileDebugActive(this);
      if ((bVar7) && ((this->TileDebugSettings).bHeightfieldPostInclusionBoundsFiltering != 0)) {
        if ((this->TileDebugSettings).HeightFieldRenderMode == Solid) {
          duDebugDrawHeightfieldSolid((duDebugDraw *)param_1->InternalDebugData,this->SolidHF);
        }
        else {
          duDebugDrawHeightfieldWalkable((duDebugDraw *)param_1->InternalDebugData,this->SolidHF);
        }
      }
      GenerateRecastFilter(this,param_1);
      bVar7 = IsTileDebugActive(this);
      if ((bVar7) && ((this->TileDebugSettings).bHeightfieldPostHeightFiltering != 0)) {
        if ((this->TileDebugSettings).HeightFieldRenderMode == Solid) {
          duDebugDrawHeightfieldSolid((duDebugDraw *)param_1->InternalDebugData,this->SolidHF);
        }
        else {
          duDebugDrawHeightfieldWalkable((duDebugDraw *)param_1->InternalDebugData,this->SolidHF);
        }
      }
      bVar7 = BuildCompactHeightField(this,param_1);
      if (bVar7) {
        bVar7 = IsTileDebugActive(this);
        if ((bVar7) && ((this->TileDebugSettings).bCompactHeightfield != 0)) {
          duDebugDrawCompactHeightfieldSolid
                    ((duDebugDraw *)param_1->InternalDebugData,this->CompactHF);
        }
        bVar7 = RecastErodeWalkable(this,param_1);
        if (bVar7) {
          bVar7 = IsTileDebugActive(this);
          if ((bVar7) && ((this->TileDebugSettings).bCompactHeightfieldEroded != 0)) {
            duDebugDrawCompactHeightfieldSolid
                      ((duDebugDraw *)param_1->InternalDebugData,this->CompactHF);
          }
          bVar7 = RecastBuildLayers(this,param_1,&local_4078);
          if (bVar7) {
            bVar7 = IsTileDebugActive(this);
            if (bVar7) {
              if ((this->TileDebugSettings).bHeightFieldLayers != 0) {
                duDebugDrawHeightfieldLayers
                          ((duDebugDraw *)param_1->InternalDebugData,local_4078.LayerSet);
              }
              if ((this->TileDebugSettings).bCompactHeightfieldRegions != 0) {
                duDebugDrawCompactHeightfieldRegions
                          ((duDebugDraw *)param_1->InternalDebugData,this->CompactHF);
              }
              if ((this->TileDebugSettings).bCompactHeightfieldDistances != 0) {
                duDebugDrawCompactHeightfieldDistance
                          ((duDebugDraw *)param_1->InternalDebugData,this->CompactHF);
              }
            }
            bVar7 = RecastBuildTileCache(this,param_1,&local_4078);
          }
          else {
            bVar7 = false;
          }
        }
        else {
          bVar7 = false;
        }
      }
      else {
        bVar7 = false;
      }
    }
  }
  else {
    bVar7 = false;
  }
  rcFreeHeightfieldLayerSet(local_4078.LayerSet);
  if (local_4078.RasterizationMasks.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_4078.RasterizationMasks.AllocatorInstance.SecondaryData);
  }
  DestructItems<FNavMeshTileData,int>
            ((FNavMeshTileData *)local_4078.Layers.AllocatorInstance.Data,local_4078.Layers.ArrayNum
            );
  if ((FNavMeshTileData *)local_4078.Layers.AllocatorInstance.Data != (FNavMeshTileData *)0x0) {
    FMemory::Free(local_4078.Layers.AllocatorInstance.Data);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_4090.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_4090.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_40a8);
      local_4090.StatData.Pad[4] = '\0';
      local_4090.StatData.Pad[5] = '\0';
      local_4090.StatData.Pad[6] = '\0';
      local_4090.StatData.Pad[7] = '\0';
      local_4090.StatData.Pad[0] = local_40a8.s.LowPart._0_1_;
      local_4090.StatData.Pad[1] = local_40a8.s.LowPart._1_1_;
      local_4090.StatData.Pad[2] = local_40a8.s.LowPart._2_1_;
      local_4090.StatData.Pad[3] = local_40a8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_4090);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar7;
}

// GenerateCompressedLayersTimeSliced @ 146e57770

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ETimeSliceWorkResult __thiscall
FRecastTileGenerator::GenerateCompressedLayersTimeSliced
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1)

{
  TUniquePtr<FTileRasterizationContext,TDefaultDelete<FTileRasterizationContext>_> *pTVar1;
  int *piVar2;
  undefined1 uVar3;
  ForElementType<int> FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  void *pvVar10;
  bool bVar11;
  ETimeSliceWorkResult EVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildCompressedLayers> FVar15;
  FTileRasterizationContext *pFVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FTileRasterizationContext *pFVar17;
  FNameEntryId FVar18;
  FName FVar19;
  ulonglong uVar20;
  uint local_res8;
  uint uStackX_c;
  undefined1 local_res18 [8];
  FColor_u_0 local_res20 [2];
  FName local_78;
  LARGE_INTEGER local_70;
  FName local_68;
  undefined8 local_60;
  FName local_58;
  FStatMessage local_48;
  
  FVar15 = StatPtr_STAT_Navigation_RecastBuildCompressedLayers;
  if (StatPtr_STAT_Navigation_RecastBuildCompressedLayers ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildCompressedLayers>)0x0) {
    pFVar14 = ::FName::FName(&local_68,"STAT_Navigation_RecastBuildCompressedLayers");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildCompressedLayers>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Navigation_RecastBuildCompressedLayers,*pFVar14,
                        L"Recast: build compressed layers","STATGROUP_Navigation","STATCAT_Advanced"
                        ,L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar15;
  bVar7 = false;
  bVar9 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar13 = FVar19.Number;
  if ((FVar18.Value == 0) && (uVar13 == 0)) {
LAB_146e578c5:
    bVar8 = false;
    FVar19 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar18.Value;
        local_78.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xd80);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e578c5;
    local_res8 = FVar18.Value;
    uStackX_c = uVar13;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar8 = true;
  }
  if ((this->TimeSliceManager == (FNavRegenTimeSliceManager *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TimeSliceManager",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                          ,0xd82,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    EVar12 = (*pcVar6)();
    return EVar12;
  }
  pTVar1 = &this->GenCompressedlayersTimeSlicedRasterContext;
  pFVar16 = pTVar1->Ptr;
  if (this->GenCompressedLayersTimeSlicedState < (BuildTileCache|Init)) {
    uVar20 = (ulonglong)_tls_index;
    switch(this->GenCompressedLayersTimeSlicedState) {
    case Invalid:
      `FRecastTileGenerator::GenerateCompressedLayersTimeSliced'::__l12::<lambda_1>::operator()
                (&local_res8);
      goto LAB_146e57d0a;
    case Init:
      TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>::Reset(&this->CompressedLayers,0);
      pFVar16 = ::operator_new(0x4030);
      if (pFVar16 == (FTileRasterizationContext *)0x0) {
        pFVar16 = (FTileRasterizationContext *)0x0;
      }
      else {
        pFVar16->LayerSet = (rcHeightfieldLayerSet *)0x0;
        (pFVar16->Layers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar16->Layers).ArrayNum = 0;
        (pFVar16->Layers).ArrayMax = 0;
        (pFVar16->RasterizationMasks).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
        (pFVar16->RasterizationMasks).ArrayNum = 0;
        *(undefined8 *)&(pFVar16->RasterizationMasks).ArrayMax = 0x1000;
      }
      if (pTVar1 == (TUniquePtr<FTileRasterizationContext,TDefaultDelete<FTileRasterizationContext>_>
                     *)&local_60) {
        if (pFVar16 != (FTileRasterizationContext *)0x0) {
          rcFreeHeightfieldLayerSet(pFVar16->LayerSet);
          FVar4 = (pFVar16->RasterizationMasks).AllocatorInstance.SecondaryData;
          if (FVar4 != (ForElementType<int>)0x0) {
            FMemory::Free((void *)FVar4);
          }
          DestructItems<FNavMeshTileData,int>
                    ((FNavMeshTileData *)(pFVar16->Layers).AllocatorInstance.Data,
                     (pFVar16->Layers).ArrayNum);
          pFVar5 = (pFVar16->Layers).AllocatorInstance.Data;
          pFVar17 = pFVar16;
          if (pFVar5 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar5);
          }
          goto LAB_146e57a18;
        }
      }
      else {
        pFVar17 = pTVar1->Ptr;
        pTVar1->Ptr = pFVar16;
        if (pFVar17 != (FTileRasterizationContext *)0x0) {
          rcFreeHeightfieldLayerSet(pFVar17->LayerSet);
          FVar4 = (pFVar17->RasterizationMasks).AllocatorInstance.SecondaryData;
          if (FVar4 != (ForElementType<int>)0x0) {
            FMemory::Free((void *)FVar4);
          }
          DestructItems<FNavMeshTileData,int>
                    ((FNavMeshTileData *)(pFVar17->Layers).AllocatorInstance.Data,
                     (pFVar17->Layers).ArrayNum);
          pFVar5 = (pFVar17->Layers).AllocatorInstance.Data;
          if (pFVar5 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar5);
          }
LAB_146e57a18:
          ::operator_delete(pFVar17,0x4030);
        }
      }
      pFVar16 = pTVar1->Ptr;
      this->GenCompressedLayersTimeSlicedState = CreateHeightField;
      break;
    case RasterizeTriangles:
      goto switchD_146e57932_caseD_3;
    case EmptyLayers:
      goto switchD_146e57932_caseD_4;
    case VoxelFilter:
      goto switchD_146e57932_caseD_5;
    case RecastFilter:
      goto switchD_146e57932_caseD_6;
    case CompactHeightField:
      goto switchD_146e57932_caseD_7;
    case ErodeWalkable:
      goto switchD_146e57932_caseD_8;
    case BuildLayers:
      goto switchD_146e57932_caseD_9;
    case BuildTileCache:
      goto LAB_146e57ca6;
    }
    bVar11 = CreateHeightField(this,param_1);
    pvVar10 = ThreadLocalStoragePointer;
    if (bVar11) {
      this->GenCompressedLayersTimeSlicedState = RasterizeTriangles;
      if ((*(int *)(*(longlong *)((longlong)pvVar10 + uVar20 * 8) + 0x9d4c) < ::_TSS0) &&
         (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&::CreateHeightField,L"CreateHeightField");
        _Init_thread_footer(&::_TSS0);
      }
      (this->TimeSliceManager->TimeSlicer).DebugSectionName = ::CreateHeightField;
      bVar11 = FNavRegenTimeSlicer::TestTimeSliceFinished(&this->TimeSliceManager->TimeSlicer);
      if (bVar11) {
        EVar12 = CallAgainNextTimeSlice;
        goto LAB_146e57d0d;
      }
switchD_146e57932_caseD_3:
      EVar12 = RasterizeTrianglesTimeSliced(this,param_1,pFVar16);
      if (EVar12 != CallAgainNextTimeSlice) {
        this->GenCompressedLayersTimeSlicedState = EmptyLayers;
      }
      if ((this->TimeSliceManager->TimeSlicer).bTimeSliceFinishedCached != false) {
        EVar12 = CallAgainNextTimeSlice;
        goto LAB_146e57d0d;
      }
switchD_146e57932_caseD_4:
      if ((this->SolidHF == (rcHeightfield *)0x0) || (this->SolidHF->pools == (rcSpanPool *)0x0)) {
        rcContext::log((rcContext *)param_1,RC_LOG_WARNING,
                       "GenerateCompressedLayersTimeSliced: empty tile - aborting");
        this->GenCompressedLayersTimeSlicedState = Invalid;
        EVar12 = Succeeded;
        goto LAB_146e57d0d;
      }
switchD_146e57932_caseD_5:
      this->GenCompressedLayersTimeSlicedState = RecastFilter;
      if (((this->TileConfig).bPerformVoxelFiltering != 0) &&
         (this->bFullyEncapsulatedByInclusionBounds == 0)) {
        (**(code **)(this->_padding_ + 0x48))
                  (this,this->SolidHF,(double)(int)(this->TileConfig)._padding_);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8) + 0x9d4c) <
             ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
          ::FName::FName(&VoxelFilter,L"VoxelFilter");
          _Init_thread_footer(&::_TSS1);
        }
        (this->TimeSliceManager->TimeSlicer).DebugSectionName = VoxelFilter;
        bVar11 = FNavRegenTimeSlicer::TestTimeSliceFinished(&this->TimeSliceManager->TimeSlicer);
        if (bVar11) {
          EVar12 = CallAgainNextTimeSlice;
          goto LAB_146e57d0d;
        }
      }
switchD_146e57932_caseD_6:
      EVar12 = GenerateRecastFilterTimeSliced(this,param_1);
      if (EVar12 != CallAgainNextTimeSlice) {
        this->GenCompressedLayersTimeSlicedState = CompactHeightField;
      }
      if ((this->TimeSliceManager->TimeSlicer).bTimeSliceFinishedCached != false) {
        EVar12 = CallAgainNextTimeSlice;
        goto LAB_146e57d0d;
      }
switchD_146e57932_caseD_7:
      bVar11 = BuildCompactHeightField(this,param_1);
      pvVar10 = ThreadLocalStoragePointer;
      if (bVar11) {
        this->GenCompressedLayersTimeSlicedState = ErodeWalkable;
        if ((*(int *)(*(longlong *)((longlong)pvVar10 + uVar20 * 8) + 0x9d4c) < ::_TSS2) &&
           (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
          ::FName::FName(&CompactHeightField,L"CompactHeightField");
          _Init_thread_footer(&::_TSS2);
        }
        (this->TimeSliceManager->TimeSlicer).DebugSectionName = CompactHeightField;
        bVar11 = FNavRegenTimeSlicer::TestTimeSliceFinished(&this->TimeSliceManager->TimeSlicer);
        if (bVar11) {
          EVar12 = CallAgainNextTimeSlice;
          goto LAB_146e57d0d;
        }
switchD_146e57932_caseD_8:
        bVar11 = RecastErodeWalkable(this,param_1);
        pvVar10 = ThreadLocalStoragePointer;
        if (bVar11) {
          this->GenCompressedLayersTimeSlicedState = BuildLayers;
          if ((*(int *)(*(longlong *)((longlong)pvVar10 + uVar20 * 8) + 0x9d4c) < ::_TSS3) &&
             (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
            ::FName::FName(&ErodeWalkable,L"ErodeWalkable");
            _Init_thread_footer(&::_TSS3);
          }
          (this->TimeSliceManager->TimeSlicer).DebugSectionName = ErodeWalkable;
          bVar11 = FNavRegenTimeSlicer::TestTimeSliceFinished(&this->TimeSliceManager->TimeSlicer);
          if (bVar11) {
            EVar12 = CallAgainNextTimeSlice;
            goto LAB_146e57d0d;
          }
switchD_146e57932_caseD_9:
          bVar11 = RecastBuildLayers(this,param_1,pFVar16);
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8) + 0x9d4c) <
               ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
            ::FName::FName(&BuildLayers,L"BuildLayers");
            _Init_thread_footer(&::_TSS4);
          }
          (this->TimeSliceManager->TimeSlicer).DebugSectionName = BuildLayers;
          FNavRegenTimeSlicer::TestTimeSliceFinished(&this->TimeSliceManager->TimeSlicer);
          if (bVar11) {
            this->GenCompressedLayersTimeSlicedState = BuildTileCache;
            if ((this->TimeSliceManager->TimeSlicer).bTimeSliceFinishedCached != false) {
              EVar12 = CallAgainNextTimeSlice;
              goto LAB_146e57d0d;
            }
LAB_146e57ca6:
            this->GenCompressedLayersTimeSlicedState = Invalid;
            bVar11 = RecastBuildTileCache(this,param_1,pFVar16);
            if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8) + 0x9d4c)
                 < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
              ::FName::FName(&BuildTileCache,L"BuildTileCache");
              _Init_thread_footer(&::_TSS5);
            }
            (this->TimeSliceManager->TimeSlicer).DebugSectionName = BuildTileCache;
            FNavRegenTimeSlicer::TestTimeSliceFinished(&this->TimeSliceManager->TimeSlicer);
            if (bVar11) {
              EVar12 = Succeeded;
              goto LAB_146e57d0d;
            }
          }
          else {
            this->GenCompressedLayersTimeSlicedState = Invalid;
          }
        }
        else {
          this->GenCompressedLayersTimeSlicedState = Invalid;
        }
      }
      else {
        this->GenCompressedLayersTimeSlicedState = Invalid;
      }
    }
    else {
      this->GenCompressedLayersTimeSlicedState = Invalid;
    }
  }
  else {
    `FRecastTileGenerator::GenerateCompressedLayersTimeSliced'::__l71::<lambda_2>::operator()
              (local_res18);
  }
LAB_146e57d0a:
  EVar12 = Failed;
LAB_146e57d0d:
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return EVar12;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return EVar12;
}

// GenerateNavigationData @ 146e57fd0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall
FRecastTileGenerator::GenerateNavigationData
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1)

{
  bool bVar1;
  dtLinkBuilderData local_res18 [16];
  
  local_res18[0].generatingLinks = false;
  bVar1 = GenerateNavigationData(this,param_1,local_res18);
  return bVar1;
}

// GenerateNavigationData @ 146e57ff0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FRecastTileGenerator::GenerateNavigationData
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,dtLinkBuilderData *param_2)

{
  int *piVar1;
  ForElementType<unsigned_int> FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  uint uVar13;
  FNameEntryId FVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildNavigation> FVar16;
  FThreadSafeStaticStat<_protected:_bool___cdecl_FRecastTileGenerator::GenerateNavigationData(FNavMeshBuildContext_&,dtLinkBuilderData_const_&)_::_14_::FStat_FRecastTileGenerator_GenerateNavigationData_Free>
  FVar17;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FColor_u_0 FVar18;
  uint uVar19;
  ulonglong uVar20;
  FName FVar21;
  TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> *pTVar22;
  FName FVar23;
  ForElementType<unsigned_int> FVar24;
  ulonglong uVar25;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FNavMeshBuildContext *local_res10;
  dtLinkBuilderData *local_res18;
  FColor_u_0 local_res20;
  uint uStackX_24;
  FTileGenerationContext local_108;
  FName local_b8;
  FColor_u_0 local_a8;
  uint local_a4;
  dtTileCacheAlloc local_a0;
  FColor_u_0 local_98;
  uint local_94;
  FName local_90;
  FTileCacheCompressor local_80;
  LARGE_INTEGER local_78;
  FStatMessage local_70;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  
  uVar20 = 0;
  FVar16 = StatPtr_STAT_Navigation_RecastBuildNavigation;
  local_res10 = param_1;
  local_res18 = param_2;
  if (StatPtr_STAT_Navigation_RecastBuildNavigation ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildNavigation>)0x0) {
    pFVar15 = ::FName::FName(&local_60,"STAT_Navigation_RecastBuildNavigation");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildNavigation>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastBuildNavigation,
                        *pFVar15,L"Recast: build navmesh","STATGROUP_Navigation","STATCAT_Advanced",
                        L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar16;
  bVar6 = false;
  bVar9 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar18.Bits = (uint)FVar23.ComparisonIndex.Value;
  uVar19 = FVar23.Number;
  if ((FVar18.Bits == 0) && (uVar19 == 0)) {
LAB_146e58131:
    bVar7 = false;
    FVar23 = local_90;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar6 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8.Bits = FVar18.Bits;
        local_a4 = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_a8._s_0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x1181);
        bVar6 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e58131;
    local_res20.Bits = FVar18.Bits;
    uStackX_24 = uVar19;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar7 = true;
  }
  uVar19 = (this->CompressedLayers).ArrayNum;
  local_a0 = (dtTileCacheAlloc)&___7FTileCacheAllocator__6B_;
  local_108.Layer = (dtTileCacheLayer *)0x0;
  local_108.Allocator = &local_a0;
  local_108.DistanceField = (dtTileCacheDistanceField *)0x0;
  local_108.ContourSet = (dtTileCacheContourSet *)0x0;
  local_108.ClusterSet = (dtTileCacheClusterSet *)0x0;
  local_108.PolyMesh = (dtTileCachePolyMesh *)0x0;
  local_108.DetailMesh = (dtTileCachePolyMeshDetail *)0x0;
  local_108.NavigationData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.NavigationData.ArrayNum = 0;
  local_108.NavigationData.ArrayMax = 0;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  if (0 < (int)uVar19) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,uVar19,&local_108.NavigationData.AllocatorInstance,0,
               &local_108.NavigationData.ArrayMax);
  }
  bVar12 = true;
  local_80 = (FTileCacheCompressor)&___7FTileCacheCompressor__6B_;
  uVar25 = uVar20;
  if ((this->CompressedLayers).ArrayNum < 1) {
LAB_146e582f4:
    pTVar22 = &this->NavigationData;
    if (pTVar22 != &local_108.NavigationData) {
      DestructItems<FNavMeshTileData,int>
                ((FNavMeshTileData *)(pTVar22->AllocatorInstance).Data,
                 (this->NavigationData).ArrayNum);
      pFVar3 = (pTVar22->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pTVar22->AllocatorInstance).Data = local_108.NavigationData.AllocatorInstance.Data;
      (this->NavigationData).ArrayNum = local_108.NavigationData.ArrayNum;
      (this->NavigationData).ArrayMax = local_108.NavigationData.ArrayMax;
      local_108.NavigationData.ArrayNum = 0;
      local_108.NavigationData.ArrayMax = 0;
      local_108.NavigationData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    do {
      uVar19 = (uint)uVar20;
      if ((this->DirtyLayers).NumBits <= (int)uVar19) break;
      if (((int)uVar19 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar10)) {
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return (bool)uVar11;
      }
      FVar2 = (this->DirtyLayers).AllocatorInstance.SecondaryData;
      FVar24 = (ForElementType<unsigned_int>)&this->DirtyLayers;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        FVar24 = FVar2;
      }
      uVar13 = uVar19;
      if ((int)uVar19 < 0) {
        uVar13 = uVar19 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar24 + (longlong)((int)uVar13 >> 5) * 4) >> (uVar19 & 0x1f) & 1) !=
          0) {
        uVar13 = 0;
        if ((int)uVar19 < (this->CompressedLayers).ArrayNum) {
          uVar13 = ~uVar19 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        pFVar3 = (this->CompressedLayers).AllocatorInstance.Data;
        if ((((*(longlong *)(pFVar3 + uVar25 + 0x48) != 0) &&
             (**(longlong **)(pFVar3 + uVar25 + 0x48) != 0)) &&
            (0 < *(int *)(pFVar3 + uVar25 + 0x40))) &&
           (bVar12 = GenerateNavigationDataLayer
                               (this,local_res10,&local_80,(FTileCacheAllocator *)&local_a0,
                                &local_108,local_res18,uVar19), !bVar12)) goto LAB_146e5833b;
      }
      uVar20 = (ulonglong)(uVar19 + 1);
      uVar25 = uVar25 + 0x58;
    } while ((int)(uVar19 + 1) < (this->CompressedLayers).ArrayNum);
    if (bVar12 != false) goto LAB_146e582f4;
  }
LAB_146e5833b:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_FRecastTileGenerator_GenerateNavigationData_Free ==
        (FThreadSafeStaticStat<_protected:_bool___cdecl_FRecastTileGenerator::GenerateNavigationData(FNavMeshBuildContext_&,dtLinkBuilderData_const_&)_::_14_::FStat_FRecastTileGenerator_GenerateNavigationData_Free>
         )0x0) {
      pFVar15 = ::FName::FName(&local_58,"FRecastTileGenerator_GenerateNavigationData_Free");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_FRecastTileGenerator_GenerateNavigationData_Free,*pFVar15,
                 L"FRecastTileGenerator_GenerateNavigationData_Free","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    else {
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar17 = StatPtr_FRecastTileGenerator_GenerateNavigationData_Free;
  if (StatPtr_FRecastTileGenerator_GenerateNavigationData_Free ==
      (FThreadSafeStaticStat<_protected:_bool___cdecl_FRecastTileGenerator::GenerateNavigationData(FNavMeshBuildContext_&,dtLinkBuilderData_const_&)_::_14_::FStat_FRecastTileGenerator_GenerateNavigationData_Free>
       )0x0) {
    pFVar15 = ::FName::FName(local_50,"FRecastTileGenerator_GenerateNavigationData_Free");
    FVar17 = (FThreadSafeStaticStat<_protected:_bool___cdecl_FRecastTileGenerator::GenerateNavigationData(FNavMeshBuildContext_&,dtLinkBuilderData_const_&)_::_14_::FStat_FRecastTileGenerator_GenerateNavigationData_Free>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_FRecastTileGenerator_GenerateNavigationData_Free,*pFVar15,
                          L"FRecastTileGenerator_GenerateNavigationData_Free","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar17;
  bVar10 = false;
  bVar8 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  FVar14.Value = 0;
  FVar18.Bits = (uint)FVar21.ComparisonIndex.Value;
  uVar19 = FVar21.Number;
  if ((FVar18.Bits != 0) || (uVar19 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar10 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.Bits = FVar18.Bits;
        local_94 = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_98._s_0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x11a0);
        bVar10 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar18.Bits;
      uStackX_c = uVar19;
      local_b8 = FVar21;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar5 = true;
      FVar14.Value = local_b8.ComparisonIndex.Value;
      goto LAB_146e5848b;
    }
  }
  bVar5 = false;
  FVar21 = local_b8;
LAB_146e5848b:
  if (local_108.Allocator != (dtTileCacheAlloc *)0x0) {
    dtFreeTileCacheLayer(local_108.Allocator,local_108.Layer);
    local_108.Layer = (dtTileCacheLayer *)0x0;
    dtFreeTileCacheDistanceField(local_108.Allocator,local_108.DistanceField);
    local_108.DistanceField = (dtTileCacheDistanceField *)0x0;
    dtFreeTileCacheContourSet(local_108.Allocator,local_108.ContourSet);
    local_108.ContourSet = (dtTileCacheContourSet *)0x0;
    dtFreeTileCacheClusterSet(local_108.Allocator,local_108.ClusterSet);
    local_108.ClusterSet = (dtTileCacheClusterSet *)0x0;
    dtFreeTileCachePolyMesh(local_108.Allocator,local_108.PolyMesh);
    local_108.PolyMesh = (dtTileCachePolyMesh *)0x0;
    dtFreeTileCachePolyMeshDetail(local_108.Allocator,local_108.DetailMesh);
    local_108.DetailMesh = (dtTileCachePolyMeshDetail *)0x0;
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar21 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_70.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      local_70.NameAndInfo.Index.Value = FVar14.Value;
      QueryPerformanceCounter(&local_78);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_70);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if (local_108.Allocator != (dtTileCacheAlloc *)0x0) {
    dtFreeTileCacheLayer(local_108.Allocator,local_108.Layer);
    local_108.Layer = (dtTileCacheLayer *)0x0;
    dtFreeTileCacheDistanceField(local_108.Allocator,local_108.DistanceField);
    local_108.DistanceField = (dtTileCacheDistanceField *)0x0;
    dtFreeTileCacheContourSet(local_108.Allocator,local_108.ContourSet);
    local_108.ContourSet = (dtTileCacheContourSet *)0x0;
    dtFreeTileCacheClusterSet(local_108.Allocator,local_108.ClusterSet);
    local_108.ClusterSet = (dtTileCacheClusterSet *)0x0;
    dtFreeTileCachePolyMesh(local_108.Allocator,local_108.PolyMesh);
    local_108.PolyMesh = (dtTileCachePolyMesh *)0x0;
    dtFreeTileCachePolyMeshDetail(local_108.Allocator,local_108.DetailMesh);
    local_108.DetailMesh = (dtTileCachePolyMeshDetail *)0x0;
  }
  DestructItems<FNavMeshTileData,int>
            ((FNavMeshTileData *)local_108.NavigationData.AllocatorInstance.Data,
             local_108.NavigationData.ArrayNum);
  if ((FNavMeshTileData *)local_108.NavigationData.AllocatorInstance.Data != (FNavMeshTileData *)0x0
     ) {
    FMemory::Free(local_108.NavigationData.AllocatorInstance.Data);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  return bVar12;
}

// GenerateNavigationDataLayer @ 146e58770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FRecastTileGenerator::GenerateNavigationDataLayer
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,FTileCacheCompressor *param_2,
          FTileCacheAllocator *param_3,FTileGenerationContext *param_4,dtLinkBuilderData *param_5,
          int param_6)

{
  int *piVar1;
  undefined1 *puVar2;
  dtTileCacheLayerHeader *pdVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  FTileGenerationContext *pFVar14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_Navigation_GenerateNavigationDataLayer> FVar20;
  uchar *puVar21;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildRegions> FVar22;
  dtTileCacheDistanceField *pdVar23;
  FThreadStats *pFVar24;
  FThreadStatsPool *pFVar25;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildContours> FVar26;
  dtTileCacheContourSet *pdVar27;
  dtTileCacheClusterSet *pdVar28;
  TStatId TVar29;
  dtTileCachePolyMesh *pdVar30;
  dtTileCachePolyMeshDetail *pdVar31;
  FNavMeshTileData *pFVar32;
  FStatMessage *pFVar33;
  dtTileCacheLogContext *pdVar34;
  dtTileCacheLogContext *pdVar35;
  longlong lVar36;
  FNameEntryId FVar37;
  FNavMeshTileData *pFVar38;
  FName FVar39;
  TTransform<double> *pTVar40;
  FName FVar41;
  char *pcVar42;
  uint uVar43;
  dtTileCacheLayer **ppdVar44;
  float fVar45;
  undefined1 auStackY_508 [32];
  bool local_4a7;
  FName local_488;
  byte local_480;
  FName local_478;
  byte local_470;
  FName local_468;
  byte local_460;
  FName local_458;
  byte local_450;
  int local_448 [2];
  uint local_440;
  uint uStack_43c;
  uint local_438;
  FOffMeshData local_430;
  FColor_u_0 local_410;
  FColor_u_0 local_40c;
  FColor_u_0 local_408 [2];
  FName local_400;
  byte local_3f8;
  TArray<FGeneratedNavigationLink,TSizedDefaultAllocator<32>_> local_3f0;
  FName local_3e0;
  FName local_3d8;
  FName local_3d0;
  FTileGenerationContext *local_3c8;
  FNavMeshTileData *local_3c0;
  uchar *local_3b8;
  FName local_3b0;
  FName local_3a0;
  FName local_390;
  LARGE_INTEGER local_380;
  LARGE_INTEGER local_378;
  LARGE_INTEGER local_370;
  FStatMessage local_368;
  FStatMessage local_358;
  FStatMessage local_348;
  FStatMessage local_338;
  LARGE_INTEGER local_328 [2];
  FSourceLocation local_318;
  FSourceLocation local_2f8;
  FSourceLocation local_2d8;
  FSourceLocation local_2b8;
  FSourceLocation local_298;
  FName local_278;
  FName local_270;
  FName local_268;
  FName local_260;
  FName local_258;
  FName local_250;
  FName local_248 [2];
  dtTileCacheDistanceField local_238;
  FName local_228 [2];
  TVector<double>_u_0 local_218;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined8 local_1e8;
  dtNavMeshCreateParams local_1d8;
  FNavMeshTileData local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_508;
  pdVar35 = (dtTileCacheLogContext *)0x0;
  uVar43 = 0;
  local_3c8 = param_4;
  FVar20 = StatPtr_STAT_Navigation_GenerateNavigationDataLayer;
  if (StatPtr_STAT_Navigation_GenerateNavigationDataLayer ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_GenerateNavigationDataLayer>)0x0) {
    pFVar19 = ::FName::FName(local_228,"STAT_Navigation_GenerateNavigationDataLayer");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_Navigation_GenerateNavigationDataLayer>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Navigation_GenerateNavigationDataLayer,*pFVar19,
                        L"Recast: build navigation layer","STATGROUP_Navigation","STATCAT_Advanced",
                        L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar41 = *(FName *)FVar20;
  local_3b0.ComparisonIndex.Value = 0;
  local_3b0.Number = 0;
  bVar12 = false;
  bVar11 = false;
  if ((FVar41.ComparisonIndex.Value.Value == 0) && (FVar41.Number == 0)) {
LAB_146e588e4:
    bVar13 = false;
    FVar41 = local_3b0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_410.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_410._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_3e0.ComparisonIndex.Value = FVar41.ComparisonIndex.Value.Value;
        local_3e0.Number = FVar41.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_3e0,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xff6);
        bVar12 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e588e4;
    FThreadStats::AddMessage(FVar41,CycleScopeStart);
    bVar13 = true;
  }
  local_438 = (uint)~param_6 >> 0x1f;
  uVar17 = uVar43;
  if (param_6 < (this->CompressedLayers).ArrayNum) {
    uVar17 = local_438;
  }
  if ((uVar17 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar6 = (code *)swi(3);
    uVar16 = (*pcVar6)();
    return (bool)uVar16;
  }
  pFVar38 = (FNavMeshTileData *)
            ((this->CompressedLayers).AllocatorInstance.Data + (longlong)param_6 * 0x58);
  local_3c0 = pFVar38;
  FTileGenerationContext::ResetIntermediateData(param_4);
  iVar18 = pFVar38->DataSize;
  puVar21 = FNavMeshTileData::GetData(local_3c0);
  ppdVar44 = &param_4->Layer;
  uVar17 = dtDecompressTileCacheLayer
                     ((dtTileCacheAlloc *)param_3,(dtTileCacheCompressor *)param_2,puVar21,iVar18,
                      ppdVar44);
  if ((int)uVar17 < 0) {
    rcContext::log((rcContext *)param_1,RC_LOG_ERROR,
                   "GenerateNavigationDataLayer: failed to decompress layer.");
    bVar15 = false;
    goto LAB_146e5a085;
  }
  MarkDynamicAreas(this,*ppdVar44);
  FVar22 = StatPtr_STAT_Navigation_RecastBuildRegions;
  if (StatPtr_STAT_Navigation_RecastBuildRegions ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildRegions>)0x0) {
    pFVar19 = ::FName::FName(local_248,"STAT_Navigation_RecastBuildRegions");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildRegions>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastBuildRegions,
                        *pFVar19,L"Recast: build regions","STATGROUP_Navigation","STATCAT_Advanced",
                        L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar39 = *(FName *)FVar22;
  bVar10 = false;
  bVar8 = false;
  local_3a0.ComparisonIndex.Value = 0;
  local_3a0.Number = 0;
  FVar37 = FVar39.ComparisonIndex.Value;
  uVar17 = FVar39.Number;
  if ((FVar37.Value == 0) && (uVar17 == 0)) {
LAB_146e58acc:
    bVar9 = false;
    FVar39 = local_3a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_40c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_40c._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar10 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_3d8.ComparisonIndex.Value = FVar37.Value;
        local_3d8.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_3d8,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x1009);
        bVar10 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e58acc;
    local_440 = FVar37.Value;
    uStack_43c = uVar17;
    FThreadStats::AddMessage(FVar39,CycleScopeStart);
    bVar10 = false;
    bVar9 = true;
  }
  iVar18 = (this->TileConfig).TileCachePartitionType;
  if (iVar18 == 0) {
    uVar17 = dtBuildTileCacheRegionsMonotone
                       ((dtTileCacheAlloc *)param_3,(int)(this->TileConfig)._padding_,
                        *(int *)((longlong)&(this->TileConfig)._padding_ + 4),*ppdVar44);
LAB_146e58bea:
    if ((int)uVar17 < 0) {
      pcVar42 = "GenerateNavigationDataLayer: Failed to build regions.";
      goto LAB_146e58bf8;
    }
    if ((*ppdVar44)->regCount == 0) {
      bVar15 = true;
      goto LAB_146e58c1c;
    }
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar9) && (FVar39 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar24 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar24 == (FThreadStats *)0x0) {
        pFVar25 = FThreadStatsPool::Get();
        pFVar24 = FThreadStatsPool::GetFromPool(pFVar25);
      }
      if (pFVar24->bWaitForExplicitFlush < pFVar24->ScopeCount) {
        local_358.NameAndInfo.Number = FVar39.Number & 0xffff6fff | 0x6000;
        local_358.NameAndInfo.Index.Value = FVar39.ComparisonIndex.Value.Value;
        QueryPerformanceCounter(&local_378);
        local_358.StatData.Pad[4] = '\0';
        local_358.StatData.Pad[5] = '\0';
        local_358.StatData.Pad[6] = '\0';
        local_358.StatData.Pad[7] = '\0';
        local_358.StatData.Pad[0] = local_378.s.LowPart._0_1_;
        local_358.StatData.Pad[1] = local_378.s.LowPart._1_1_;
        local_358.StatData.Pad[2] = local_378.s.LowPart._2_1_;
        local_358.StatData.Pad[3] = local_378.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar24,&local_358);
        piVar1 = &pFVar24->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar24,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar24,false,false);
        }
      }
    }
    bVar15 = IsTileDebugActive(this);
    if ((bVar15) && ((this->TileDebugSettings).bTileCacheLayerRegions != 0)) {
      duDebugDrawTileCacheLayerRegions
                ((duDebugDraw *)param_1->InternalDebugData,*ppdVar44,
                 (double)(this->TileConfig)._padding_,(double)(this->TileConfig)._padding_);
    }
    FVar26 = StatPtr_STAT_Navigation_RecastBuildContours;
    if (StatPtr_STAT_Navigation_RecastBuildContours ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildContours>)0x0) {
      pFVar19 = ::FName::FName(&local_258,"STAT_Navigation_RecastBuildContours");
      FVar26 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildContours>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastBuildContours,
                          *pFVar19,L"Recast: build contours","STATGROUP_Navigation",
                          "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid
                         );
    }
    FVar39 = *(FName *)FVar26;
    bVar8 = false;
    bVar10 = false;
    local_390.ComparisonIndex.Value = 0;
    local_390.Number = 0;
    FVar37 = FVar39.ComparisonIndex.Value;
    uVar17 = FVar39.Number;
    if ((FVar37.Value == 0) && (uVar17 == 0)) {
LAB_146e58f1a:
      bVar9 = false;
      FVar39 = local_390;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_408[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_408[0]._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
        bVar8 = false;
        bVar10 = true;
        if (-1 < CpuChannel->Enabled) {
          local_3d0.ComparisonIndex.Value = FVar37.Value;
          local_3d0.Number = uVar17;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_3d0,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                     ,0x1043);
          bVar8 = true;
          bVar10 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_146e58f1a;
      local_440 = FVar37.Value;
      uStack_43c = uVar17;
      FThreadStats::AddMessage(FVar39,CycleScopeStart);
      bVar9 = true;
    }
    pdVar27 = dtAllocTileCacheContourSet((dtTileCacheAlloc *)param_3);
    pFVar14 = local_3c8;
    local_3c8->ContourSet = pdVar27;
    if (pdVar27 == (dtTileCacheContourSet *)0x0) {
      rcContext::log((rcContext *)param_1,RC_LOG_ERROR,
                     "GenerateNavigationDataLayer: Out of memory \'ContourSet\'.");
      bVar15 = false;
    }
    else {
      bVar15 = IsTileDebugActive(this);
      if ((!bVar15) || (local_4a7 = true, (this->TileDebugSettings).bSkipContourSimplification == 0)
         ) {
        local_4a7 = false;
      }
      pdVar28 = dtAllocTileCacheClusterSet((dtTileCacheAlloc *)param_3);
      pFVar14->ClusterSet = pdVar28;
      if (pdVar28 == (dtTileCacheClusterSet *)0x0) {
        rcContext::log((rcContext *)param_1,RC_LOG_ERROR,
                       "GenerateNavigationDataLayer: Out of memory \'ClusterSet\'.");
        bVar15 = false;
      }
      else {
        uVar17 = dtBuildTileCacheContours
                           ((dtTileCacheAlloc *)param_3,pFVar14->Layer,
                            *(int *)((longlong)&(this->TileConfig)._padding_ + 4),
                            (double)(this->TileConfig)._padding_,
                            (double)(this->TileConfig)._padding_,
                            (double)(this->TileConfig)._padding_,
                            (double)(this->TileConfig)._padding_,pFVar14->ContourSet,pdVar28,
                            local_4a7);
        if ((int)uVar17 < 0) {
          rcContext::log((rcContext *)param_1,RC_LOG_ERROR,
                         "GenerateNavigationDataLayer: Failed to generate contour set (0x%08X).");
          bVar15 = false;
        }
        else {
          if (0 < pFVar14->ContourSet->nconts) {
            if (bVar10) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if (bVar8) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if ((((bVar9) && (FVar39 != (FName)0x0)) &&
                (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar24 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar24 == (FThreadStats *)0x0) {
                pFVar25 = FThreadStatsPool::Get();
                pFVar24 = FThreadStatsPool::GetFromPool(pFVar25);
              }
              if (pFVar24->bWaitForExplicitFlush < pFVar24->ScopeCount) {
                local_338.NameAndInfo.Number = FVar39.Number & 0xffff6fff | 0x6000;
                local_338.NameAndInfo.Index.Value = FVar39.ComparisonIndex.Value.Value;
                QueryPerformanceCounter(local_328);
                local_338.StatData.Pad[4] = '\0';
                local_338.StatData.Pad[5] = '\0';
                local_338.StatData.Pad[6] = '\0';
                local_338.StatData.Pad[7] = '\0';
                local_338.StatData.Pad[0] = local_328[0]._0_1_;
                local_338.StatData.Pad[1] = local_328[0]._1_1_;
                local_338.StatData.Pad[2] = local_328[0]._2_1_;
                local_338.StatData.Pad[3] = local_328[0]._3_1_;
                FThreadStats::AddStatMessage(pFVar24,&local_338);
                piVar1 = &pFVar24->ScopeCount;
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FThreadStats::Flush(pFVar24,false,false);
                }
                else if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(pFVar24,false,false);
                }
              }
            }
            bVar15 = IsTileDebugActive(this);
            ppdVar44 = &pFVar14->Layer;
            if ((bVar15) && ((this->TileDebugSettings).bTileCacheContours != 0)) {
              duDebugDrawTileCacheContours
                        ((duDebugDraw *)param_1->InternalDebugData,pFVar14->ContourSet,param_6,
                         (*ppdVar44)->header->bmin,(double)(this->TileConfig)._padding_,
                         (double)(this->TileConfig)._padding_);
            }
            TVar29.StatIdPtr = (TStatIdData *)StatPtr_STAT_Navigation_RecastBuildPolyMesh;
            if (StatPtr_STAT_Navigation_RecastBuildPolyMesh ==
                (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildPolyMesh>)0x0) {
              pFVar19 = ::FName::FName(&local_260,"STAT_Navigation_RecastBuildPolyMesh");
              TVar29.StatIdPtr =
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_Navigation_RecastBuildPolyMesh,*pFVar19,
                              L"Recast: build poly mesh","STATGROUP_Navigation","STATCAT_Advanced",
                              L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
            }
            local_318.Impl._Line = 0x1078;
            local_318.Impl._File =
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
            ;
            local_318.Impl._Column = 3;
            local_318.Impl._Function =
                 "bool __cdecl FRecastTileGenerator::GenerateNavigationDataLayer(class FNavMeshBuildContext &,struct FTileCacheCompressor &,struct FTileCacheAllocator &,struct FTileGenerationContext &,const struct dtLinkBuilderData &,int)"
            ;
            FScopeCycleCounter::FScopeCycleCounter
                      ((FScopeCycleCounter *)&local_468,TVar29,CycleStat|ClearEveryFrame,false,
                       &local_318);
            pdVar30 = dtAllocTileCachePolyMesh((dtTileCacheAlloc *)param_3);
            pFVar14->PolyMesh = pdVar30;
            if (pdVar30 == (dtTileCachePolyMesh *)0x0) {
              pcVar42 = "GenerateNavigationData: Out of memory \'PolyMesh\'.";
LAB_146e59350:
              rcContext::log((rcContext *)param_1,RC_LOG_ERROR,pcVar42);
              if ((local_460 & 1) != 0) {
                FGenericPlatformMisc::EndNamedEvent();
              }
              if ((local_460 & 2) != 0) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              if ((local_460 & 4) != 0) {
                FThreadStats::AddMessage(local_468,CycleScopeEnd);
                bVar15 = false;
                goto LAB_146e5a085;
              }
            }
            else {
              pdVar34 = (dtTileCacheLogContext *)&param_1->_padding_;
              if (param_1 == (FNavMeshBuildContext *)0x0) {
                pdVar34 = pdVar35;
              }
              uVar17 = dtBuildTileCachePolyMesh
                                 ((dtTileCacheAlloc *)param_3,pdVar34,pFVar14->ContourSet,pdVar30,
                                  *(int *)((longlong)&(this->TileConfig)._padding_ + 4));
              if ((int)uVar17 < 0) {
                pcVar42 = "GenerateNavigationData: Failed to generate poly mesh.";
                goto LAB_146e59350;
              }
              uVar17 = dtBuildTileCacheClusters
                                 ((dtTileCacheAlloc *)param_3,pFVar14->ClusterSet,pFVar14->PolyMesh)
              ;
              if ((int)uVar17 < 0) {
                pcVar42 = "GenerateNavigationData: Failed to update cluster set.";
                goto LAB_146e59350;
              }
              if ((local_460 & 1) != 0) {
                FGenericPlatformMisc::EndNamedEvent();
              }
              if ((local_460 & 2) != 0) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              if ((local_460 & 4) != 0) {
                FThreadStats::AddMessage(local_468,CycleScopeEnd);
              }
              local_460 = 0;
              bVar15 = IsTileDebugActive(this);
              if ((bVar15) && ((this->TileDebugSettings).bTileCachePolyMesh != 0)) {
                duDebugDrawTileCachePolyMesh
                          ((duDebugDraw *)param_1->InternalDebugData,pFVar14->PolyMesh,
                           (*ppdVar44)->header->bmin,(double)(this->TileConfig)._padding_,
                           (double)(this->TileConfig)._padding_);
              }
              if ((this->TileConfig).bGenerateDetailedMesh == 0) {
LAB_146e595f3:
                local_3f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_3f0.ArrayNum = 0;
                local_3f0.ArrayMax = 0;
                if (param_5->generatingLinks == false) {
LAB_146e59797:
                  local_3b8 = (uchar *)0x0;
                  local_448[0] = 0;
                  if ((int)(this->TileConfig)._padding_ < 7) {
                    iVar18 = pFVar14->PolyMesh->npolys;
                    if ((0 < iVar18) && (0 < pFVar14->PolyMesh->nverts)) {
                      if (((this->TileConfig).MaxPolysPerTile < iVar18) &&
                         (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                             (&bGEnsureHasExecuted<4457677437609709775>,false,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                                              ,0x10cf,
                                              "GenerationContext.PolyMesh->npolys <= TileConfig.MaxPolysPerTile && \"Polys per Tile limit exceeded!\""
                                             ), bVar15)) {
                        pcVar6 = (code *)swi(3);
                        uVar16 = (*pcVar6)();
                        return (bool)uVar16;
                      }
                      if (0xfffe < pFVar14->PolyMesh->nverts) {
                        rcContext::log((rcContext *)param_1,RC_LOG_ERROR,
                                       "Too many vertices per tile %d (max: %d).");
                        bVar15 = false;
                        goto LAB_146e5a077;
                      }
                      local_430.LinkParams.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_430.LinkParams.ArrayNum = 0;
                      local_430.LinkParams.ArrayMax = 0;
                      fVar45 = (float)(double)(this->TileConfig)._padding_ *
                               (float)*(int *)((longlong)&(this->TileConfig)._padding_ + 4);
                      local_430.AreaClassToIdMap =
                           (TMap<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                            *)0x0;
                      local_430.FlagsPerArea = (ushort *)0x0;
                      if (((this->OffmeshLinks).ArrayNum != 0) || (local_3f0.ArrayNum != 0)) {
                        TVar29.StatIdPtr =
                             (TStatIdData *)StatPtr_STAT_Navigation_RecastGatherOffMeshData;
                        if (StatPtr_STAT_Navigation_RecastGatherOffMeshData ==
                            (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastGatherOffMeshData>)
                            0x0) {
                          pFVar19 = ::FName::FName(&local_278,
                                                   "STAT_Navigation_RecastGatherOffMeshData");
                          TVar29.StatIdPtr =
                               FThreadSafeStaticStatBase::DoSetup
                                         ((FThreadSafeStaticStatBase *)
                                          &StatPtr_STAT_Navigation_RecastGatherOffMeshData,*pFVar19,
                                          L"Recast: gather off mesh data","STATGROUP_Navigation",
                                          "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,
                                          false,MCR_Invalid);
                        }
                        local_2b8.Impl._Line = 0x10dd;
                        local_2b8.Impl._Function =
                             "bool __cdecl FRecastTileGenerator::GenerateNavigationDataLayer(class FNavMeshBuildContext &,struct FTileCacheCompressor &,struct FTileCacheAllocator &,struct FTileGenerationContext &,const struct dtLinkBuilderData &,int)"
                        ;
                        local_2b8.Impl._Column = 4;
                        local_2b8.Impl._File =
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                        ;
                        FScopeCycleCounter::FScopeCycleCounter
                                  ((FScopeCycleCounter *)&local_400,TVar29,CycleStat|ClearEveryFrame
                                   ,false,&local_2b8);
                        uVar17 = (this->OffmeshLinks).ArrayNum + local_3f0.ArrayNum;
                        if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
                          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
                        }
                        if (local_430.LinkParams.ArrayMax < (int)uVar17) {
                          UE::Core::Private::
                          ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x80,8,uVar17,(ForAnyElementType *)&local_430,
                                     local_430.LinkParams.ArrayNum,&local_430.LinkParams.ArrayMax);
                        }
                        local_430.AreaClassToIdMap = &(this->AdditionalCachedData).AreaClassToIdMap;
                        local_430.FlagsPerArea =
                             (this->AdditionalCachedData).FlagsPerOffMeshLinkArea;
                        if (0 < (this->OffmeshLinks).ArrayNum) {
                          pTVar40 = (TTransform<double> *)
                                    ((this->OffmeshLinks).AllocatorInstance.Data + 0x30);
                          pdVar34 = pdVar35;
                          do {
                            FOffMeshData::AddLinks
                                      (&local_430,
                                       (TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *)
                                       (pTVar40[-1].Translation.ZW.m128d_f64 + 1),pTVar40,
                                       (this->TileConfig).AgentIndex,fVar45);
                            FOffMeshData::AddSegmentLinks
                                      (&local_430,
                                       (TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> *
                                       )(pTVar40[-1].Scale3D.XY.m128d_f64 + 1),pTVar40,
                                       (this->TileConfig).AgentIndex,fVar45);
                            uVar17 = (int)pdVar34 + 1;
                            pdVar34 = (dtTileCacheLogContext *)(ulonglong)uVar17;
                            pTVar40 = (TTransform<double> *)&pTVar40[1].Scale3D.ZW;
                          } while ((int)uVar17 < (this->OffmeshLinks).ArrayNum);
                        }
                        FOffMeshData::AddLinks
                                  (&local_430,&local_3f0,&UE::Math::TTransform<double>::Identity,
                                   (this->TileConfig).AgentIndex,fVar45);
                        if ((local_3f8 & 1) != 0) {
                          FGenericPlatformMisc::EndNamedEvent();
                        }
                        if ((local_3f8 & 2) != 0) {
                          FCpuProfilerTrace::OutputEndEvent();
                        }
                        if ((local_3f8 & 4) != 0) {
                          FThreadStats::AddMessage(local_400,CycleScopeEnd);
                        }
                        local_3f8 = 0;
                      }
                      pdVar30 = pFVar14->PolyMesh;
                      pdVar34 = pdVar35;
                      if (0 < pdVar30->npolys) {
                        do {
                          pdVar35 = (dtTileCacheLogContext *)&pdVar35->field_0x1;
                          uVar17 = (int)pdVar34 + 1;
                          pdVar30->flags[(longlong)((longlong)pdVar35 + -1)] =
                               (this->AdditionalCachedData).FlagsPerArea
                               [(pdVar30->areas + -1)[(longlong)pdVar35]];
                          pdVar30 = pFVar14->PolyMesh;
                          pdVar34 = (dtTileCacheLogContext *)(ulonglong)uVar17;
                        } while ((int)uVar17 < pdVar30->npolys);
                      }
                      local_1d8._12_4_ = 0;
                      local_1d8.detailTris._2_6_ = 0;
                      local_1d8.detailTriCount._0_2_ = 0;
                      local_1d8.detailTriCount._2_2_ = 0;
                      local_1d8._100_2_ = 0;
                      local_1d8._102_2_ = 0;
                      local_1d8.userId = 0;
                      local_1d8._148_4_ = 0;
                      local_1d8._242_4_ = 0;
                      local_1d8._246_2_ = 0;
                      local_1d8._58_6_ = 0;
                      local_1d8.detailMeshes._0_2_ = 0;
                      local_1d8.detailMeshes._2_6_ = 0;
                      local_1d8.detailVerts._0_2_ = 0;
                      local_1d8.detailVerts._2_6_ = 0;
                      local_1d8.detailVertsCount._0_2_ = 0;
                      local_1d8.detailVertsCount._2_2_ = 0;
                      local_1d8._84_4_ = 0;
                      local_1d8.detailTris._0_2_ = 0;
                      local_1d8._116_8_ = 0;
                      local_1d8._124_8_ = 0;
                      local_1d8.verts = pdVar30->verts;
                      local_1d8.vertCount = pdVar30->nverts;
                      local_1d8.polys = pdVar30->polys;
                      local_1d8.polyAreas = pdVar30->areas;
                      local_1d8.polyFlags = pdVar30->flags;
                      local_1d8.polyCount = pdVar30->npolys;
                      local_1d8.nvp = pdVar30->nvp;
                      if ((this->TileConfig).bGenerateDetailedMesh != 0) {
                        pdVar31 = pFVar14->DetailMesh;
                        local_1d8.detailMeshes._0_2_ = SUB82(pdVar31->meshes,0);
                        local_1d8.detailMeshes._2_6_ =
                             (undefined6)((ulonglong)pdVar31->meshes >> 0x10);
                        local_1d8.detailVerts._0_2_ = SUB82(pdVar31->verts,0);
                        local_1d8.detailVerts._2_6_ =
                             (undefined6)((ulonglong)pdVar31->verts >> 0x10);
                        local_1d8.detailVertsCount._0_2_ = (undefined2)pdVar31->nverts;
                        local_1d8.detailVertsCount._2_2_ =
                             (undefined2)((uint)pdVar31->nverts >> 0x10);
                        local_1d8.detailTris._0_2_ = SUB82(pdVar31->tris,0);
                        local_1d8.detailTris._2_6_ = (undefined6)((ulonglong)pdVar31->tris >> 0x10);
                        local_1d8.detailTriCount._0_2_ = (undefined2)pdVar31->ntris;
                        local_1d8.detailTriCount._2_2_ = (undefined2)((uint)pdVar31->ntris >> 0x10);
                      }
                      local_1d8.offMeshCons =
                           (dtOffMeshLinkCreateParams *)local_430.LinkParams.AllocatorInstance.Data;
                      local_1d8.offMeshConCount = local_430.LinkParams.ArrayNum;
                      local_1d8.tileX = this->TileX;
                      local_1d8.tileY = this->TileY;
                      local_1d8.tileLayer = param_6;
                      local_1d8.walkableHeight = (double)(this->TileConfig).AgentHeight;
                      local_1d8.buildBvTree = (this->TileConfig).bGenerateBVTree;
                      local_1d8.walkableRadius = (double)(this->TileConfig).AgentRadius;
                      local_1d8.walkableClimb = (double)(this->TileConfig).AgentMaxClimb;
                      pdVar3 = pFVar14->Layer->header;
                      local_1d8.bmin[0] = pdVar3->bmin[0];
                      local_1d8.bmin[1] = pdVar3->bmin[1];
                      local_1d8.bmin[2] = pdVar3->bmin[2];
                      pdVar3 = pFVar14->Layer->header;
                      local_1d8.bmax[0] = pdVar3->bmax[0];
                      local_1d8.bmax[1] = pdVar3->bmax[1];
                      local_1d8.bmax[2] = pdVar3->bmax[2];
                      local_1d8.tileResolutionLevel = (this->TileConfig).TileResolution;
                      local_1d8.cs = (double)(this->TileConfig)._padding_;
                      local_1d8.ch = (double)(this->TileConfig)._padding_;
                      uVar17 = pFVar14->ClusterSet->nclusters;
                      if (((uVar17 != (uVar17 & 0xffff)) || ((int)uVar17 < 0)) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IntFitsIn<OutType>(In)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                              ,0xaa,
                                              L"Loss of data caused by narrowing conversion, In = %lld"
                                             ), bVar15)) {
                        pcVar6 = (code *)swi(3);
                        uVar16 = (*pcVar6)();
                        return (bool)uVar16;
                      }
                      local_1d8.polyClusters = pFVar14->ClusterSet->polyMap;
                      TVar29.StatIdPtr =
                           (TStatIdData *)StatPtr_STAT_Navigation_RecastCreateNavMeshData;
                      local_1d8.clusterCount = (ushort)uVar17;
                      if (StatPtr_STAT_Navigation_RecastCreateNavMeshData ==
                          (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastCreateNavMeshData>)0x0)
                      {
                        pFVar19 = ::FName::FName(&local_270,
                                                 "STAT_Navigation_RecastCreateNavMeshData");
                        TVar29.StatIdPtr =
                             FThreadSafeStaticStatBase::DoSetup
                                       ((FThreadSafeStaticStatBase *)
                                        &StatPtr_STAT_Navigation_RecastCreateNavMeshData,*pFVar19,
                                        L"Recast: create mesh data","STATGROUP_Navigation",
                                        "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,
                                        false,MCR_Invalid);
                      }
                      local_298.Impl._Line = 0x111c;
                      local_298.Impl._File =
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                      ;
                      local_298.Impl._Column = 4;
                      local_298.Impl._Function =
                           "bool __cdecl FRecastTileGenerator::GenerateNavigationDataLayer(class FNavMeshBuildContext &,struct FTileCacheCompressor &,struct FTileCacheAllocator &,struct FTileGenerationContext &,const struct dtLinkBuilderData &,int)"
                      ;
                      FScopeCycleCounter::FScopeCycleCounter
                                ((FScopeCycleCounter *)&local_488,TVar29,CycleStat|ClearEveryFrame,
                                 false,&local_298);
                      bVar15 = dtCreateNavMeshData(&local_1d8,&local_3b8,local_448);
                      if (!bVar15) {
                        rcContext::log((rcContext *)param_1,RC_LOG_ERROR,
                                       "Could not build Detour navmesh.");
                        if ((local_480 & 1) != 0) {
                          FGenericPlatformMisc::EndNamedEvent();
                        }
                        if ((local_480 & 2) != 0) {
                          FCpuProfilerTrace::OutputEndEvent();
                        }
                        if ((local_480 & 4) != 0) {
                          FThreadStats::AddMessage(local_488,CycleScopeEnd);
                        }
                        local_480 = 0;
                        if (local_430.LinkParams.AllocatorInstance.Data !=
                            (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_430.LinkParams.AllocatorInstance.Data);
                        }
                        goto LAB_146e59dcc;
                      }
                      if ((local_480 & 1) != 0) {
                        FGenericPlatformMisc::EndNamedEvent();
                      }
                      if ((local_480 & 2) != 0) {
                        FCpuProfilerTrace::OutputEndEvent();
                      }
                      if ((local_480 & 4) != 0) {
                        FThreadStats::AddMessage(local_488,CycleScopeEnd);
                      }
                      local_480 = 0;
                      if (local_430.LinkParams.AllocatorInstance.Data !=
                          (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_430.LinkParams.AllocatorInstance.Data);
                      }
                    }
                  }
                  local_218._s_0.X = (local_3c0->LayerBBox).Min.field0_0x0._s_0.X;
                  local_218._s_0.Y = (local_3c0->LayerBBox).Min.field0_0x0._s_0.Y;
                  local_218._s_0.Z = (local_3c0->LayerBBox).Min.field0_0x0._s_0.Z;
                  dStack_200 = (local_3c0->LayerBBox).Max.field0_0x0._s_0.X;
                  local_1f8 = (local_3c0->LayerBBox).Max.field0_0x0._s_0.Y;
                  dStack_1f0 = (local_3c0->LayerBBox).Max.field0_0x0._s_0.Z;
                  local_1e8._0_1_ = (local_3c0->LayerBBox).IsValid;
                  local_1e8._1_1_ = (local_3c0->LayerBBox).Pad[0];
                  local_1e8._2_1_ = (local_3c0->LayerBBox).Pad[1];
                  local_1e8._3_1_ = (local_3c0->LayerBBox).Pad[2];
                  local_1e8._4_1_ = (local_3c0->LayerBBox).Pad[3];
                  local_1e8._5_1_ = (local_3c0->LayerBBox).Pad[4];
                  local_1e8._6_1_ = (local_3c0->LayerBBox).Pad[5];
                  local_1e8._7_1_ = (local_3c0->LayerBBox).Pad[6];
                  pFVar32 = FNavMeshTileData::FNavMeshTileData
                                      (&local_d8,local_3b8,local_448[0],param_6,
                                       (TBox<double> *)&local_218._s_0);
                  pFVar38 = (FNavMeshTileData *)(pFVar14->NavigationData).AllocatorInstance.Data;
                  if (((pFVar38 <= pFVar32) &&
                      (pFVar32 < pFVar38 + (pFVar14->NavigationData).ArrayMax)) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar15)) {
                    pcVar6 = (code *)swi(3);
                    uVar16 = (*pcVar6)();
                    return (bool)uVar16;
                  }
                  iVar18 = (pFVar14->NavigationData).ArrayNum;
                  piVar1 = &(pFVar14->NavigationData).ArrayMax;
                  if (iVar18 == *piVar1) {
                    iVar18 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x858,&(pFVar14->NavigationData).AllocatorInstance,piVar1);
                  }
                  (pFVar14->NavigationData).ArrayNum = iVar18 + 1;
                  pFVar4 = (pFVar14->NavigationData).AllocatorInstance.Data;
                  lVar36 = (longlong)iVar18 * 0x58;
                  *(int *)(pFVar4 + lVar36) = pFVar32->LayerIndex;
                  dVar7 = (pFVar32->LayerBBox).Min.field0_0x0._s_0.Y;
                  *(double *)(pFVar4 + lVar36 + 8) = (pFVar32->LayerBBox).Min.field0_0x0._s_0.X;
                  *(double *)(pFVar4 + lVar36 + 8 + 8) = dVar7;
                  dVar7 = (pFVar32->LayerBBox).Max.field0_0x0._s_0.X;
                  *(double *)(pFVar4 + lVar36 + 0x18) = (pFVar32->LayerBBox).Min.field0_0x0._s_0.Z;
                  *(double *)(pFVar4 + lVar36 + 0x18 + 8) = dVar7;
                  dVar7 = (pFVar32->LayerBBox).Max.field0_0x0._s_0.Z;
                  *(double *)(pFVar4 + lVar36 + 0x28) = (pFVar32->LayerBBox).Max.field0_0x0._s_0.Y;
                  *(double *)(pFVar4 + lVar36 + 0x28 + 8) = dVar7;
                  *(undefined8 *)(pFVar4 + lVar36 + 0x38) =
                       *(undefined8 *)&(pFVar32->LayerBBox).IsValid;
                  *(int *)(pFVar4 + lVar36 + 0x40) = pFVar32->DataSize;
                  *(FNavData **)(pFVar4 + lVar36 + 0x48) = (pFVar32->NavData).Object;
                  pTVar5 = (pFVar32->NavData).SharedReferenceCount.ReferenceController;
                  *(TReferenceControllerBase<1> **)(pFVar4 + lVar36 + 0x50) = pTVar5;
                  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar5->SharedReferenceCount =
                         (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  FNavMeshTileData::~FNavMeshTileData(&local_d8);
                  uVar17 = uVar43;
                  if (param_6 < (this->CompressedLayers).ArrayNum) {
                    uVar17 = local_438;
                  }
                  if ((uVar17 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar6 = (code *)swi(3);
                    uVar16 = (*pcVar6)();
                    return (bool)uVar16;
                  }
                  iVar18 = (pFVar14->NavigationData).ArrayNum;
                  uVar17 = iVar18 - 1;
                  if ((int)uVar17 < iVar18) {
                    uVar43 = ~uVar17 >> 0x1f;
                  }
                  if ((uVar43 == 0) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar6 = (code *)swi(3);
                    uVar16 = (*pcVar6)();
                    return (bool)uVar16;
                  }
                  rcContext::log((rcContext *)param_1,RC_LOG_PROGRESS,
                                 ">> Layer[%d] = Verts(%d) Polys(%d) Memory(%.2fkB) Cache(%.2fkB)");
                  bVar15 = true;
                }
                else {
                  TVar29.StatIdPtr = (TStatIdData *)StatPtr_STAT_Navigation_RecastBuildLinks;
                  if (StatPtr_STAT_Navigation_RecastBuildLinks ==
                      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildLinks>)0x0) {
                    pFVar19 = ::FName::FName(&local_250,"STAT_Navigation_RecastBuildLinks");
                    TVar29.StatIdPtr =
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)
                                    &StatPtr_STAT_Navigation_RecastBuildLinks,*pFVar19,
                                    L"Recast: build links","STATGROUP_Navigation","STATCAT_Advanced"
                                    ,L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
                  }
                  local_2d8.Impl._Line = 0x10bb;
                  local_2d8.Impl._File =
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                  ;
                  local_2d8.Impl._Column = 3;
                  local_2d8.Impl._Function =
                       "bool __cdecl FRecastTileGenerator::GenerateNavigationDataLayer(class FNavMeshBuildContext &,struct FTileCacheCompressor &,struct FTileCacheAllocator &,struct FTileGenerationContext &,const struct dtLinkBuilderData &,int)"
                  ;
                  FScopeCycleCounter::FScopeCycleCounter
                            ((FScopeCycleCounter *)&local_458,TVar29,CycleStat|ClearEveryFrame,false
                             ,&local_2d8);
                  if ((this->SolidHF != (rcHeightfield *)0x0) &&
                     (this->CompactHF != (rcCompactHeightfield *)0x0)) {
                    uVar17 = BuildTileCacheLinks(this,param_1,(dtTileCacheAlloc *)param_3,*ppdVar44,
                                                 pFVar14->ContourSet,&local_3f0);
                  }
                  if (-1 < (int)uVar17) {
                    if ((local_450 & 1) != 0) {
                      FGenericPlatformMisc::EndNamedEvent();
                    }
                    if ((local_450 & 2) != 0) {
                      FCpuProfilerTrace::OutputEndEvent();
                    }
                    if ((local_450 & 4) != 0) {
                      FThreadStats::AddMessage(local_458,CycleScopeEnd);
                    }
                    local_450 = 0;
                    goto LAB_146e59797;
                  }
                  rcContext::log((rcContext *)param_1,RC_LOG_ERROR,
                                 "GenerateNavigationDataLayer: Failed to generate links (0x%08X).");
                  if ((local_450 & 1) != 0) {
                    FGenericPlatformMisc::EndNamedEvent();
                  }
                  if ((local_450 & 2) != 0) {
                    FCpuProfilerTrace::OutputEndEvent();
                  }
                  if ((local_450 & 4) == 0) {
LAB_146e59dcc:
                    bVar15 = false;
                  }
                  else {
                    FThreadStats::AddMessage(local_458,CycleScopeEnd);
                    bVar15 = false;
                  }
                }
LAB_146e5a077:
                if (local_3f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3f0.AllocatorInstance.Data);
                }
                goto LAB_146e5a085;
              }
              TVar29.StatIdPtr = (TStatIdData *)StatPtr_STAT_Navigation_RecastBuildPolyDetail;
              if (StatPtr_STAT_Navigation_RecastBuildPolyDetail ==
                  (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildPolyDetail>)0x0) {
                pFVar19 = ::FName::FName(&local_268,"STAT_Navigation_RecastBuildPolyDetail");
                TVar29.StatIdPtr =
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_Navigation_RecastBuildPolyDetail,*pFVar19,
                                L"Recast: build poly detail","STATGROUP_Navigation",
                                "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,
                                MCR_Invalid);
              }
              local_2f8.Impl._Line = 0x109c;
              local_2f8.Impl._File =
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
              ;
              local_2f8.Impl._Column = 3;
              local_2f8.Impl._Function =
                   "bool __cdecl FRecastTileGenerator::GenerateNavigationDataLayer(class FNavMeshBuildContext &,struct FTileCacheCompressor &,struct FTileCacheAllocator &,struct FTileGenerationContext &,const struct dtLinkBuilderData &,int)"
              ;
              FScopeCycleCounter::FScopeCycleCounter
                        ((FScopeCycleCounter *)&local_478,TVar29,CycleStat|ClearEveryFrame,false,
                         &local_2f8);
              pdVar31 = dtAllocTileCachePolyMeshDetail((dtTileCacheAlloc *)param_3);
              pFVar14->DetailMesh = pdVar31;
              if (pdVar31 == (dtTileCachePolyMeshDetail *)0x0) {
                pcVar42 = "GenerateNavigationData: Out of memory \'DetailMesh\'.";
              }
              else {
                uVar17 = dtBuildTileCachePolyMeshDetail
                                   ((dtTileCacheAlloc *)param_3,(double)(this->TileConfig)._padding_
                                    ,(double)(this->TileConfig)._padding_,
                                    (double)(this->TileConfig)._padding_,
                                    (double)(this->TileConfig)._padding_,*ppdVar44,pFVar14->PolyMesh
                                    ,pdVar31);
                if (-1 < (int)uVar17) {
                  bVar15 = IsTileDebugActive(this);
                  if ((bVar15) && ((this->TileDebugSettings).bTileCacheDetailMesh != 0)) {
                    duDebugDrawTileCacheDetailMesh
                              ((duDebugDraw *)param_1->InternalDebugData,pFVar14->DetailMesh);
                  }
                  if ((local_470 & 1) != 0) {
                    FGenericPlatformMisc::EndNamedEvent();
                  }
                  if ((local_470 & 2) != 0) {
                    FCpuProfilerTrace::OutputEndEvent();
                  }
                  if ((local_470 & 4) != 0) {
                    FThreadStats::AddMessage(local_478,CycleScopeEnd);
                  }
                  local_470 = 0;
                  goto LAB_146e595f3;
                }
                pcVar42 = "GenerateNavigationData: Failed to generate poly detail mesh.";
              }
              rcContext::log((rcContext *)param_1,RC_LOG_ERROR,pcVar42);
              if ((local_470 & 1) != 0) {
                FGenericPlatformMisc::EndNamedEvent();
              }
              if ((local_470 & 2) != 0) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              if ((local_470 & 4) != 0) {
                FThreadStats::AddMessage(local_478,CycleScopeEnd);
              }
            }
            bVar15 = false;
            goto LAB_146e5a085;
          }
          bVar15 = true;
        }
      }
    }
    if (bVar10) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar9) || (FVar39 == (FName)0x0)) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_146e5a085;
    pFVar24 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar24 == (FThreadStats *)0x0) {
      pFVar25 = FThreadStatsPool::Get();
      pFVar24 = FThreadStatsPool::GetFromPool(pFVar25);
    }
    if (pFVar24->ScopeCount <= pFVar24->bWaitForExplicitFlush) goto LAB_146e5a085;
    local_348.NameAndInfo.Number = FVar39.Number & 0xffff6fff | 0x6000;
    local_348.NameAndInfo.Index.Value = FVar39.ComparisonIndex.Value.Value;
    QueryPerformanceCounter(&local_370);
    local_348.StatData.Pad[4] = '\0';
    local_348.StatData.Pad[5] = '\0';
    local_348.StatData.Pad[6] = '\0';
    local_348.StatData.Pad[7] = '\0';
    local_348.StatData.Pad[0] = local_370.s.LowPart._0_1_;
    local_348.StatData.Pad[1] = local_370.s.LowPart._1_1_;
    local_348.StatData.Pad[2] = local_370.s.LowPart._2_1_;
    local_348.StatData.Pad[3] = local_370.s.LowPart._3_1_;
    pFVar33 = &local_348;
  }
  else {
    if (iVar18 != 1) {
      bVar15 = IsTileDebugActive(this);
      if ((bVar15) && ((this->TileDebugSettings).bTileCacheLayerAreas != 0)) {
        duDebugDrawTileCacheLayerAreas
                  ((duDebugDraw *)param_1->InternalDebugData,*ppdVar44,
                   (double)(this->TileConfig)._padding_,(double)(this->TileConfig)._padding_);
      }
      uVar17 = dtBuildTileCacheRegionsChunky
                         ((dtTileCacheAlloc *)param_3,(int)(this->TileConfig)._padding_,
                          *(int *)((longlong)&(this->TileConfig)._padding_ + 4),*ppdVar44,
                          (this->TileConfig).TileCacheChunkSize);
      goto LAB_146e58bea;
    }
    pdVar23 = dtAllocTileCacheDistanceField((dtTileCacheAlloc *)param_3);
    pFVar14 = local_3c8;
    local_3c8->DistanceField = pdVar23;
    if (pdVar23 == (dtTileCacheDistanceField *)0x0) {
      pcVar42 = "GenerateNavigationDataLayer: Out of memory \'DistanceField\'.";
    }
    else {
      uVar17 = dtBuildTileCacheDistanceField((dtTileCacheAlloc *)param_3,local_3c8->Layer,pdVar23);
      if (-1 < (int)uVar17) {
        pdVar23 = pFVar14->DistanceField;
        local_238.maxDist = pdVar23->maxDist;
        local_238._2_6_ = *(undefined6 *)&pdVar23->field_0x2;
        local_238.data = pdVar23->data;
        uVar17 = dtBuildTileCacheRegions
                           ((dtTileCacheAlloc *)param_3,(int)(this->TileConfig)._padding_,
                            *(int *)((longlong)&(this->TileConfig)._padding_ + 4),*ppdVar44,
                            &local_238);
        goto LAB_146e58bea;
      }
      pcVar42 = "GenerateNavigationDataLayer: Failed to build distance field.";
    }
LAB_146e58bf8:
    rcContext::log((rcContext *)param_1,RC_LOG_ERROR,pcVar42);
    bVar15 = false;
LAB_146e58c1c:
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar9) || (FVar39 == (FName)0x0)) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_146e5a085;
    pFVar24 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar24 == (FThreadStats *)0x0) {
      pFVar25 = FThreadStatsPool::Get();
      pFVar24 = FThreadStatsPool::GetFromPool(pFVar25);
    }
    if (pFVar24->ScopeCount <= pFVar24->bWaitForExplicitFlush) goto LAB_146e5a085;
    local_368.NameAndInfo.Number = FVar39.Number & 0xffff6fff | 0x6000;
    local_368.NameAndInfo.Index.Value = FVar39.ComparisonIndex.Value.Value;
    QueryPerformanceCounter(&local_380);
    local_368.StatData.Pad[4] = '\0';
    local_368.StatData.Pad[5] = '\0';
    local_368.StatData.Pad[6] = '\0';
    local_368.StatData.Pad[7] = '\0';
    local_368.StatData.Pad[0] = local_380.s.LowPart._0_1_;
    local_368.StatData.Pad[1] = local_380.s.LowPart._1_1_;
    local_368.StatData.Pad[2] = local_380.s.LowPart._2_1_;
    local_368.StatData.Pad[3] = local_380.s.LowPart._3_1_;
    pFVar33 = &local_368;
  }
  FThreadStats::AddStatMessage(pFVar24,pFVar33);
  piVar1 = &pFVar24->ScopeCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FThreadStats::Flush(pFVar24,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(pFVar24,false,false);
  }
LAB_146e5a085:
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar41,CycleScopeEnd);
  }
  return bVar15;
}

// GenerateNavigationDataLayer @ 146e5a0f0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall
FRecastTileGenerator::GenerateNavigationDataLayer
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,FTileCacheCompressor *param_2,
          FTileCacheAllocator *param_3,FTileGenerationContext *param_4,int param_5)

{
  bool bVar1;
  dtLinkBuilderData local_18 [24];
  
  local_18[0].generatingLinks = false;
  bVar1 = GenerateNavigationDataLayer(this,param_1,param_2,param_3,param_4,local_18,param_5);
  return bVar1;
}

// GenerateNavigationDataTimeSliced @ 146e5a130

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

ETimeSliceWorkResult __thiscall
FRecastTileGenerator::GenerateNavigationDataTimeSliced
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1)

{
  ETimeSliceWorkResult EVar1;
  dtLinkBuilderData local_res18 [16];
  
  local_res18[0].generatingLinks = false;
  EVar1 = GenerateNavigationDataTimeSliced(this,param_1,local_res18);
  return EVar1;
}

// GenerateNavigationDataTimeSliced @ 146e5a150

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ETimeSliceWorkResult __thiscall
FRecastTileGenerator::GenerateNavigationDataTimeSliced
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,dtLinkBuilderData *param_2)

{
  TUniquePtr<FTileCacheAllocator,TDefaultDelete<FTileCacheAllocator>_> *pTVar1;
  TUniquePtr<FTileGenerationContext,TDefaultDelete<FTileGenerationContext>_> *pTVar2;
  TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> *pTVar3;
  EGenerateNavDataTimeSlicedState EVar4;
  FTileCacheAllocator *pFVar5;
  ForElementType<unsigned_int> FVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ETimeSliceWorkResult EVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildNavigation> FVar16;
  FTileGenerationContext *pFVar17;
  dtTileCacheAlloc *pdVar18;
  FTileGenerationContext *pFVar19;
  ForElementType<unsigned_int> FVar20;
  uint uVar21;
  FNameEntryId FVar22;
  FName FVar23;
  uint uVar24;
  FTileGenerationContext *pFVar25;
  TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> *pTVar26;
  uint local_res8;
  uint uStackX_c;
  FNavMeshBuildContext *local_res10;
  dtLinkBuilderData *local_res18;
  undefined1 local_res20 [8];
  FColor_u_0 local_88 [2];
  FName local_80;
  FTileCacheCompressor local_78;
  FName local_70;
  undefined8 local_68;
  longlong local_60;
  FName local_58;
  
  pFVar25 = (FTileGenerationContext *)0x0;
  FVar16 = StatPtr_STAT_Navigation_RecastBuildNavigation;
  local_res10 = param_1;
  local_res18 = param_2;
  if (StatPtr_STAT_Navigation_RecastBuildNavigation ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildNavigation>)0x0) {
    pFVar15 = ::FName::FName(&local_70,"STAT_Navigation_RecastBuildNavigation");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildNavigation>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastBuildNavigation,
                        *pFVar15,L"Recast: build navmesh","STATGROUP_Navigation","STATCAT_Advanced",
                        L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar16;
  bVar9 = false;
  bVar11 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar22 = FVar23.ComparisonIndex.Value;
  uVar24 = FVar23.Number;
  if ((FVar22.Value == 0) && (uVar24 == 0)) {
LAB_146e5a29c:
    bVar10 = false;
    FVar23 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_88[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = FVar22.Value;
        local_80.Number = uVar24;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x1133);
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e5a29c;
    local_res8 = FVar22.Value;
    uStackX_c = uVar24;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar10 = true;
  }
  if ((this->TimeSliceManager == (FNavRegenTimeSliceManager *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TimeSliceManager",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                          ,0x1135,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    EVar13 = (*pcVar8)();
    return EVar13;
  }
  EVar4 = this->GenerateNavDataTimeSlicedState;
  EVar13 = Succeeded;
  if (EVar4 == Invalid) {
    `FRecastTileGenerator::GenerateNavigationDataTimeSliced'::__l12::<lambda_1>::operator()
              (local_res20);
LAB_146e5a68d:
    EVar13 = Failed;
  }
  else {
    if (EVar4 == Init) {
      pFVar17 = ::operator_new(8);
      pFVar19 = pFVar25;
      if (pFVar17 != (FTileGenerationContext *)0x0) {
        pFVar17->Allocator = (dtTileCacheAlloc *)&___7FTileCacheAllocator__6B_;
        pFVar19 = pFVar17;
      }
      pTVar1 = &this->GenNavDataTimeSlicedAllocator;
      if (pTVar1 == (TUniquePtr<FTileCacheAllocator,TDefaultDelete<FTileCacheAllocator>_> *)
                    &local_68) {
        if (pFVar19 != (FTileGenerationContext *)0x0) {
          pdVar18 = pFVar19->Allocator;
          goto LAB_146e5a354;
        }
      }
      else {
        pFVar17 = (FTileGenerationContext *)pTVar1->Ptr;
        pTVar1->Ptr = (FTileCacheAllocator *)pFVar19;
        if (pFVar17 != (FTileGenerationContext *)0x0) {
          pdVar18 = pFVar17->Allocator;
          pFVar19 = pFVar17;
LAB_146e5a354:
          (*(code *)*pdVar18)(pFVar19,1);
        }
      }
      pFVar5 = pTVar1->Ptr;
      pFVar19 = ::operator_new(0x48);
      if (pFVar19 != (FTileGenerationContext *)0x0) {
        pFVar19->Allocator = (dtTileCacheAlloc *)pFVar5;
        pFVar19->Layer = (dtTileCacheLayer *)0x0;
        pFVar19->DistanceField = (dtTileCacheDistanceField *)0x0;
        pFVar19->ContourSet = (dtTileCacheContourSet *)0x0;
        pFVar19->ClusterSet = (dtTileCacheClusterSet *)0x0;
        pFVar19->PolyMesh = (dtTileCachePolyMesh *)0x0;
        pFVar19->DetailMesh = (dtTileCachePolyMeshDetail *)0x0;
        (pFVar19->NavigationData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar19->NavigationData).ArrayNum = 0;
        (pFVar19->NavigationData).ArrayMax = 0;
        pFVar25 = pFVar19;
      }
      pTVar2 = &this->GenNavDataTimeSlicedGenerationContext;
      if (pTVar2 == (TUniquePtr<FTileGenerationContext,TDefaultDelete<FTileGenerationContext>_> *)
                    &local_60) {
        if (pFVar25 != (FTileGenerationContext *)0x0) {
          FTileGenerationContext::ResetIntermediateData(pFVar25);
          DestructItems<FNavMeshTileData,int>
                    ((FNavMeshTileData *)(pFVar25->NavigationData).AllocatorInstance.Data,
                     (pFVar25->NavigationData).ArrayNum);
          pFVar7 = (pFVar25->NavigationData).AllocatorInstance.Data;
          pFVar19 = pFVar25;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          goto LAB_146e5a405;
        }
      }
      else {
        pFVar19 = pTVar2->Ptr;
        pTVar2->Ptr = pFVar25;
        if (pFVar19 != (FTileGenerationContext *)0x0) {
          FTileGenerationContext::ResetIntermediateData(pFVar19);
          DestructItems<FNavMeshTileData,int>
                    ((FNavMeshTileData *)(pFVar19->NavigationData).AllocatorInstance.Data,
                     (pFVar19->NavigationData).ArrayNum);
          pFVar7 = (pFVar19->NavigationData).AllocatorInstance.Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
LAB_146e5a405:
          ::operator_delete(pFVar19,0x48);
        }
      }
      pFVar25 = pTVar2->Ptr;
      uVar24 = (this->CompressedLayers).ArrayNum;
      if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
      }
      if ((pFVar25->NavigationData).ArrayMax < (int)uVar24) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,uVar24,&(pFVar25->NavigationData).AllocatorInstance,
                   (pFVar25->NavigationData).ArrayNum,&(pFVar25->NavigationData).ArrayMax);
      }
      this->GenerateNavDataTimeSlicedState = GenerateLayers;
    }
    else if (EVar4 != GenerateLayers) {
      `FRecastTileGenerator::GenerateNavigationDataTimeSliced'::__l32::<lambda_2>::operator()
                (&local_res8);
      goto LAB_146e5a68d;
    }
    uVar24 = this->GenNavDataLayerTimeSlicedIdx;
    if (((int)uVar24 < (this->CompressedLayers).ArrayNum) &&
       (iVar14 = (this->DirtyLayers).NumBits, (int)uVar24 < iVar14)) {
      do {
        if ((((int)uVar24 < 0) || (iVar14 <= (int)uVar24)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          EVar13 = (*pcVar8)();
          return EVar13;
        }
        FVar6 = (this->DirtyLayers).AllocatorInstance.SecondaryData;
        FVar20 = (ForElementType<unsigned_int>)&this->DirtyLayers;
        if (FVar6 != (ForElementType<unsigned_int>)0x0) {
          FVar20 = FVar6;
        }
        uVar21 = uVar24 & 0x1f;
        if ((int)uVar24 < 0) {
          uVar24 = uVar24 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar20 + (longlong)((int)uVar24 >> 5) * 4) >> uVar21 & 1) != 0) {
          uVar24 = this->GenNavDataLayerTimeSlicedIdx;
          uVar21 = 0;
          if ((int)uVar24 < (this->CompressedLayers).ArrayNum) {
            uVar21 = ~uVar24 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            EVar13 = (*pcVar8)();
            return EVar13;
          }
          pFVar7 = (this->CompressedLayers).AllocatorInstance.Data;
          if (((*(longlong *)(pFVar7 + (longlong)(int)uVar24 * 0x58 + 0x48) != 0) &&
              (**(longlong **)(pFVar7 + (longlong)(int)uVar24 * 0x58 + 0x48) != 0)) &&
             (0 < *(int *)(pFVar7 + (longlong)(int)uVar24 * 0x58 + 0x40))) {
            if ((this->TimeSliceManager->TimeSlicer).bTimeSliceFinishedCached != false) {
              EVar13 = CallAgainNextTimeSlice;
              goto LAB_146e5a690;
            }
            local_78 = (FTileCacheCompressor)&___7FTileCacheCompressor__6B_;
            bVar12 = GenerateNavigationDataLayer
                               (this,local_res10,&local_78,(this->GenNavDataTimeSlicedAllocator).Ptr
                                ,(this->GenNavDataTimeSlicedGenerationContext).Ptr,local_res18,
                                this->GenNavDataLayerTimeSlicedIdx);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              ::FName::FName(&GenerateLayers,L"GenerateLayers");
              _Init_thread_footer(&::_TSS0);
            }
            (this->TimeSliceManager->TimeSlicer).DebugSectionName = GenerateLayers;
            FNavRegenTimeSlicer::TestTimeSliceFinished(&this->TimeSliceManager->TimeSlicer);
            if (!bVar12) {
              pFVar25 = (this->GenNavDataTimeSlicedGenerationContext).Ptr;
              EVar13 = Failed;
              this->GenerateNavDataTimeSlicedState = Invalid;
              this->GenNavDataLayerTimeSlicedIdx = 0;
              FTileGenerationContext::ResetIntermediateData(pFVar25);
              goto LAB_146e5a690;
            }
          }
        }
        uVar24 = this->GenNavDataLayerTimeSlicedIdx + 1;
        this->GenNavDataLayerTimeSlicedIdx = uVar24;
      } while (((int)uVar24 < (this->CompressedLayers).ArrayNum) &&
              (iVar14 = (this->DirtyLayers).NumBits, (int)uVar24 < iVar14));
    }
    pTVar3 = &this->NavigationData;
    this->GenNavDataLayerTimeSlicedIdx = 0;
    this->GenerateNavDataTimeSlicedState = Invalid;
    pFVar25 = (this->GenNavDataTimeSlicedGenerationContext).Ptr;
    pTVar26 = &pFVar25->NavigationData;
    if (pTVar3 != pTVar26) {
      DestructItems<FNavMeshTileData,int>
                ((FNavMeshTileData *)(pTVar3->AllocatorInstance).Data,
                 (this->NavigationData).ArrayNum);
      pFVar7 = (pTVar3->AllocatorInstance).Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pTVar3->AllocatorInstance).Data = (pTVar26->AllocatorInstance).Data;
      (pTVar26->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->NavigationData).ArrayNum = (pFVar25->NavigationData).ArrayNum;
      (this->NavigationData).ArrayMax = (pFVar25->NavigationData).ArrayMax;
      (pFVar25->NavigationData).ArrayNum = 0;
      (pFVar25->NavigationData).ArrayMax = 0;
    }
    FTileGenerationContext::ResetIntermediateData((this->GenNavDataTimeSlicedGenerationContext).Ptr)
    ;
  }
LAB_146e5a690:
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  return EVar13;
}

// GenerateRecastFilter @ 146e5a730

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::GenerateRecastFilter(FRecastTileGenerator *this,FNavMeshBuildContext *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FNavMeshBuildContext *pFVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastFilter> FVar13;
  FThreadSafeStaticStat<FStat_STAT_Navigation_FilterLedgeSpans> FVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  undefined4 uVar17;
  FNameEntryId FVar18;
  FName FVar19;
  FNameEntryId FVar20;
  LARGE_INTEGER local_res8;
  FNavMeshBuildContext *local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_68;
  FStatMessage local_58;
  
  FVar20.Value = 0;
  FVar13 = StatPtr_STAT_Navigation_RecastFilter;
  local_res10 = param_1;
  if (StatPtr_STAT_Navigation_RecastFilter ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastFilter>)0x0) {
    pFVar12 = ::FName::FName((FName *)&local_res18.s,"STAT_Navigation_RecastFilter");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastFilter>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastFilter,*pFVar12,
                        L"Recast: create filters","STATGROUP_Navigation","STATCAT_Advanced",
                        L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar6 = false;
  bVar9 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar11 = FVar19.Number;
  if ((FVar18.Value == 0) && (uVar11 == 0)) {
LAB_146e5a86e:
    bVar7 = false;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar18.Value;
        local_res8.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xc3e);
        bVar6 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e5a86e;
    local_res8.s.LowPart = FVar18.Value;
    local_res8.s.HighPart = uVar11;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar7 = true;
    local_68 = FVar19;
  }
  fVar3 = (this->TileConfig).AgentHeight;
  local_res8.s.LowPart =
       -((int)ROUND(__real_bf000000 - (fVar3 + fVar3) / (float)(double)(this->TileConfig)._padding_)
        >> 1);
  rcFilterLowHangingWalkableObstacles
            ((rcContext *)param_1,*(int *)((longlong)&(this->TileConfig)._padding_ + 4),
             this->SolidHF);
  FVar14 = StatPtr_STAT_Navigation_FilterLedgeSpans;
  if (StatPtr_STAT_Navigation_FilterLedgeSpans ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_FilterLedgeSpans>)0x0) {
    pFVar12 = ::FName::FName(&local_res20,"STAT_Navigation_FilterLedgeSpans");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_Navigation_FilterLedgeSpans>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_FilterLedgeSpans,
                        *pFVar12,L"Recast: filter ledge spans","STATGROUP_Navigation",
                        "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar14;
  bVar4 = false;
  bVar8 = false;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar11 = FVar19.Number;
  if ((FVar18.Value == 0) && (uVar11 == 0)) {
LAB_146e5a9d7:
    bVar5 = false;
    FVar19.ComparisonIndex.Value = 0;
    FVar19.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar4 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar18.Value;
        local_res18.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xc4a);
        bVar4 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e5a9d7;
    local_res18.s.LowPart = FVar18.Value;
    local_res18.s.HighPart = uVar11;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar5 = true;
    FVar20.Value = FVar18.Value;
  }
  pFVar10 = local_res10;
  rcFilterLedgeSpans((rcContext *)local_res10,(int)(this->TileConfig)._padding_,
                     *(int *)((longlong)&(this->TileConfig)._padding_ + 4),
                     (uint)(this->TileConfig).LedgeSlopeFilterMode,
                     (double)(this->TileConfig)._padding_,(double)(this->TileConfig)._padding_,
                     this->SolidHF);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_58.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      local_58.NameAndInfo.Index.Value = FVar20.Value;
      QueryPerformanceCounter(&local_res18);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar15,&local_58);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  if ((this->TileConfig).bMarkLowHeightAreas == 0) {
    uVar17 = (uint)(this->TileConfig)._padding_;
  }
  else {
    if ((this->TileConfig).bFilterLowSpanFromTileCache == 0) goto LAB_146e5ab37;
    uVar17 = local_res8.s.LowPart;
    if (((this->TileConfig).bFilterLowSpanSequences != 0) && (this->bHasLowAreaModifiers != 0)) {
      rcFilterWalkableLowHeightSpansSequences
                ((rcContext *)pFVar10,local_res8.s.LowPart,this->SolidHF);
      goto LAB_146e5ab37;
    }
  }
  rcFilterWalkableLowHeightSpans((rcContext *)pFVar10,uVar17,this->SolidHF);
LAB_146e5ab37:
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (local_68 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      local_58.NameAndInfo.Index.Value = local_68.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = local_68.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar15,&local_58);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  return;
}

// GenerateRecastFilter @ 146e5ac20

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::GenerateRecastFilter
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,
          FTileRasterizationContext *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FNavMeshBuildContext *pFVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastFilter> FVar13;
  FThreadSafeStaticStat<FStat_STAT_Navigation_FilterLedgeSpans> FVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  undefined4 uVar17;
  FNameEntryId FVar18;
  FName FVar19;
  FNameEntryId FVar20;
  LARGE_INTEGER LStackX_8;
  FNavMeshBuildContext *pFStackX_10;
  LARGE_INTEGER LStackX_18;
  FName FStackX_20;
  FName FStack_68;
  FStatMessage FStack_58;
  
  FVar20.Value = 0;
  FVar13 = StatPtr_STAT_Navigation_RecastFilter;
  pFStackX_10 = param_1;
  if (StatPtr_STAT_Navigation_RecastFilter ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastFilter>)0x0) {
    pFVar12 = ::FName::FName((FName *)&LStackX_18.s,"STAT_Navigation_RecastFilter");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastFilter>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastFilter,*pFVar12,
                        L"Recast: create filters","STATGROUP_Navigation","STATCAT_Advanced",
                        L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar6 = false;
  bVar9 = false;
  FStack_68.ComparisonIndex.Value = 0;
  FStack_68.Number = 0;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar11 = FVar19.Number;
  if ((FVar18.Value == 0) && (uVar11 == 0)) {
LAB_146e5a86e:
    bVar7 = false;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_8.s,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_8.s.LowPart = FVar18.Value;
        LStackX_8.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_8.s,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xc3e);
        bVar6 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e5a86e;
    LStackX_8.s.LowPart = FVar18.Value;
    LStackX_8.s.HighPart = uVar11;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar7 = true;
    FStack_68 = FVar19;
  }
  fVar3 = (this->TileConfig).AgentHeight;
  LStackX_8.s.LowPart =
       -((int)ROUND(__real_bf000000 - (fVar3 + fVar3) / (float)(double)(this->TileConfig)._padding_)
        >> 1);
  rcFilterLowHangingWalkableObstacles
            ((rcContext *)param_1,*(int *)((longlong)&(this->TileConfig)._padding_ + 4),
             this->SolidHF);
  FVar14 = StatPtr_STAT_Navigation_FilterLedgeSpans;
  if (StatPtr_STAT_Navigation_FilterLedgeSpans ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_FilterLedgeSpans>)0x0) {
    pFVar12 = ::FName::FName(&FStackX_20,"STAT_Navigation_FilterLedgeSpans");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_Navigation_FilterLedgeSpans>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_FilterLedgeSpans,
                        *pFVar12,L"Recast: filter ledge spans","STATGROUP_Navigation",
                        "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar14;
  bVar4 = false;
  bVar8 = false;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar11 = FVar19.Number;
  if ((FVar18.Value == 0) && (uVar11 == 0)) {
LAB_146e5a9d7:
    bVar5 = false;
    FVar19.ComparisonIndex.Value = 0;
    FVar19.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_18.s,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar4 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_18.s.LowPart = FVar18.Value;
        LStackX_18.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_18.s,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xc4a);
        bVar4 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e5a9d7;
    LStackX_18.s.LowPart = FVar18.Value;
    LStackX_18.s.HighPart = uVar11;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar5 = true;
    FVar20.Value = FVar18.Value;
  }
  pFVar10 = pFStackX_10;
  rcFilterLedgeSpans((rcContext *)pFStackX_10,(int)(this->TileConfig)._padding_,
                     *(int *)((longlong)&(this->TileConfig)._padding_ + 4),
                     (uint)(this->TileConfig).LedgeSlopeFilterMode,
                     (double)(this->TileConfig)._padding_,(double)(this->TileConfig)._padding_,
                     this->SolidHF);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      FStack_58.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      FStack_58.NameAndInfo.Index.Value = FVar20.Value;
      QueryPerformanceCounter(&LStackX_18);
      FStack_58.StatData.Pad[4] = '\0';
      FStack_58.StatData.Pad[5] = '\0';
      FStack_58.StatData.Pad[6] = '\0';
      FStack_58.StatData.Pad[7] = '\0';
      FStack_58.StatData.Pad[0] = LStackX_18.s.LowPart._0_1_;
      FStack_58.StatData.Pad[1] = LStackX_18.s.LowPart._1_1_;
      FStack_58.StatData.Pad[2] = LStackX_18.s.LowPart._2_1_;
      FStack_58.StatData.Pad[3] = LStackX_18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar15,&FStack_58);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  if ((this->TileConfig).bMarkLowHeightAreas == 0) {
    uVar17 = (uint)(this->TileConfig)._padding_;
  }
  else {
    if ((this->TileConfig).bFilterLowSpanFromTileCache == 0) goto LAB_146e5ab37;
    uVar17 = LStackX_8.s.LowPart;
    if (((this->TileConfig).bFilterLowSpanSequences != 0) && (this->bHasLowAreaModifiers != 0)) {
      rcFilterWalkableLowHeightSpansSequences
                ((rcContext *)pFVar10,LStackX_8.s.LowPart,this->SolidHF);
      goto LAB_146e5ab37;
    }
  }
  rcFilterWalkableLowHeightSpans((rcContext *)pFVar10,uVar17,this->SolidHF);
LAB_146e5ab37:
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FStack_68 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar15 == (FThreadStats *)0x0) {
      pFVar16 = FThreadStatsPool::Get();
      pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
    }
    if (pFVar15->bWaitForExplicitFlush < pFVar15->ScopeCount) {
      FStack_58.NameAndInfo.Index.Value = FStack_68.ComparisonIndex.Value;
      FStack_58.NameAndInfo.Number = FStack_68.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStackX_8);
      FStack_58.StatData.Pad[4] = '\0';
      FStack_58.StatData.Pad[5] = '\0';
      FStack_58.StatData.Pad[6] = '\0';
      FStack_58.StatData.Pad[7] = '\0';
      FStack_58.StatData.Pad[0] = LStackX_8.s.LowPart._0_1_;
      FStack_58.StatData.Pad[1] = LStackX_8.s.LowPart._1_1_;
      FStack_58.StatData.Pad[2] = LStackX_8.s.LowPart._2_1_;
      FStack_58.StatData.Pad[3] = LStackX_8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar15,&FStack_58);
      piVar1 = &pFVar15->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  return;
}

// GenerateRecastFilterTimeSliced @ 146e5ac30

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ETimeSliceWorkResult __thiscall
FRecastTileGenerator::GenerateRecastFilterTimeSliced
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  float fVar3;
  EGenerateRecastFilterTimeSlicedState EVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  ETimeSliceWorkResult EVar14;
  bool bVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastFilter> FVar17;
  FThreadSafeStaticStat<FStat_STAT_Navigation_FilterLedgeSpans> FVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  int iVar21;
  FName FVar22;
  FName local_res8;
  FColor_u_0 local_res18 [2];
  FColor_u_0 local_res20 [2];
  FName local_c8;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  FStatMessage local_70;
  FStatMessage local_60;
  FName local_50;
  FName local_48 [2];
  
  bVar12 = false;
  bVar10 = false;
  FVar17 = StatPtr_STAT_Navigation_RecastFilter;
  if (StatPtr_STAT_Navigation_RecastFilter ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastFilter>)0x0) {
    pFVar16 = ::FName::FName(&local_50,"STAT_Navigation_RecastFilter");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastFilter>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastFilter,*pFVar16,
                        L"Recast: create filters","STATGROUP_Navigation","STATCAT_Advanced",
                        L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar17;
  bVar8 = false;
  bVar11 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_146e5ad69:
    bVar9 = false;
    FVar22 = local_a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar8 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_b8.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xc65);
        bVar8 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e5ad69;
    local_res8 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar9 = true;
  }
  if (this->TimeSliceManager == (FNavRegenTimeSliceManager *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("TimeSliceManager",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                        ,0xc67,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      EVar14 = (*pcVar6)();
      return EVar14;
    }
  }
  EVar4 = this->GenerateRecastFilterState;
  if (EVar4 == FilterLowHangingWalkableObstacles) {
    rcFilterLowHangingWalkableObstacles
              ((rcContext *)param_1,*(int *)((longlong)&(this->TileConfig)._padding_ + 4),
               this->SolidHF);
    this->GenerateRecastFilterState = FilterLedgeSpans;
LAB_146e5add8:
    FVar18 = StatPtr_STAT_Navigation_FilterLedgeSpans;
    if (StatPtr_STAT_Navigation_FilterLedgeSpans ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_FilterLedgeSpans>)0x0) {
      pFVar16 = ::FName::FName(local_48,"STAT_Navigation_FilterLedgeSpans");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_Navigation_FilterLedgeSpans>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_FilterLedgeSpans,
                          *pFVar16,L"Recast: filter ledge spans","STATGROUP_Navigation",
                          "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid
                         );
    }
    FVar5 = *(FName *)FVar18;
    local_c8.ComparisonIndex.Value = 0;
    local_c8.Number = 0;
    if ((FVar5.ComparisonIndex.Value.Value == 0) && (FVar5.Number == 0)) {
LAB_146e5aef0:
      bVar13 = false;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res20[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
        bVar12 = false;
        bVar10 = true;
        if (-1 < CpuChannel->Enabled) {
          local_b0.ComparisonIndex.Value = FVar5.ComparisonIndex.Value.Value;
          local_b0.Number = FVar5.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_b0,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                     ,0xc77);
          bVar12 = true;
          bVar10 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_146e5aef0;
      local_res8 = FVar5;
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      bVar12 = false;
      bVar13 = true;
      local_c8 = FVar5;
    }
    bVar7 = true;
    local_res8 = *(FName *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      rcFilterLedgeSpans((rcContext *)param_1,(int)(this->TileConfig)._padding_,
                         *(int *)((longlong)&(this->TileConfig)._padding_ + 4),
                         (uint)(this->TileConfig).LedgeSlopeFilterMode,
                         (double)(this->TileConfig)._padding_,(double)(this->TileConfig)._padding_,
                         this->GenRecastFilterLedgeSpansYStart,
                         (this->TileTimeSliceSettings).FilterLedgeSpansMaxYProcess,this->SolidHF);
      this->GenRecastFilterLedgeSpansYStart =
           this->GenRecastFilterLedgeSpansYStart +
           (this->TileTimeSliceSettings).FilterLedgeSpansMaxYProcess;
      if (this->SolidHF->height <= this->GenRecastFilterLedgeSpansYStart) {
        this->GenRecastFilterLedgeSpansYStart = 0;
        bVar7 = false;
        this->GenerateRecastFilterState = FilterWalkableLowHeightSpans;
      }
      if (*(int *)((longlong)local_res8 + 0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          ::FName::FName(&FilterLedgeSpans,L"FilterLedgeSpans");
          _Init_thread_footer(&::_TSS0);
        }
      }
      (this->TimeSliceManager->TimeSlicer).DebugSectionName = FilterLedgeSpans;
      bVar15 = FNavRegenTimeSlicer::TestTimeSliceFinished(&this->TimeSliceManager->TimeSlicer);
      if (bVar15) {
        if (bVar10) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar12) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((((bVar13) && (local_c8 != (FName)0x0)) &&
            (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar19 == (FThreadStats *)0x0) {
            pFVar20 = FThreadStatsPool::Get();
            pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
          }
          if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
            local_70.NameAndInfo.Index.Value = local_c8.ComparisonIndex.Value;
            local_70.NameAndInfo.Number = local_c8.Number & 0xffff6fff | 0x6000;
            QueryPerformanceCounter(&local_90);
            local_70.StatData.Pad[4] = '\0';
            local_70.StatData.Pad[5] = '\0';
            local_70.StatData.Pad[6] = '\0';
            local_70.StatData.Pad[7] = '\0';
            local_70.StatData.Pad[0] = local_90.s.LowPart._0_1_;
            local_70.StatData.Pad[1] = local_90.s.LowPart._1_1_;
            local_70.StatData.Pad[2] = local_90.s.LowPart._2_1_;
            local_70.StatData.Pad[3] = local_90.s.LowPart._3_1_;
            FThreadStats::AddStatMessage(pFVar19,&local_70);
            piVar1 = &pFVar19->ScopeCount;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FThreadStats::Flush(pFVar19,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar19,false,false);
            }
          }
        }
        EVar14 = CallAgainNextTimeSlice;
        goto LAB_146e5b1e6;
      }
    } while (bVar7);
    if (bVar10) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar13) && (local_c8 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar19 == (FThreadStats *)0x0) {
        pFVar20 = FThreadStatsPool::Get();
        pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
      }
      if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
        local_80.NameAndInfo.Index.Value = local_c8.ComparisonIndex.Value;
        local_80.NameAndInfo.Number = local_c8.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_98);
        local_80.StatData.Pad[4] = '\0';
        local_80.StatData.Pad[5] = '\0';
        local_80.StatData.Pad[6] = '\0';
        local_80.StatData.Pad[7] = '\0';
        local_80.StatData.Pad[0] = local_98.s.LowPart._0_1_;
        local_80.StatData.Pad[1] = local_98.s.LowPart._1_1_;
        local_80.StatData.Pad[2] = local_98.s.LowPart._2_1_;
        local_80.StatData.Pad[3] = local_98.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar19,&local_80);
        piVar1 = &pFVar19->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar19,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar19,false,false);
        }
      }
    }
  }
  else {
    if (EVar4 == FilterLedgeSpans) goto LAB_146e5add8;
    if (EVar4 != FilterWalkableLowHeightSpans) {
      `FRecastTileGenerator::GenerateRecastFilterTimeSliced'::__l35::<lambda_1>::operator()
                (&local_res8);
      EVar14 = Failed;
      goto LAB_146e5b1e6;
    }
  }
  fVar3 = (this->TileConfig).AgentHeight;
  iVar21 = -((int)ROUND(__real_bf000000 -
                        (fVar3 + fVar3) / (float)(double)(this->TileConfig)._padding_) >> 1);
  if ((this->TileConfig).bMarkLowHeightAreas == 0) {
    iVar21 = (int)(this->TileConfig)._padding_;
LAB_146e5b0d6:
    rcFilterWalkableLowHeightSpans((rcContext *)param_1,iVar21,this->SolidHF);
  }
  else if ((this->TileConfig).bFilterLowSpanFromTileCache != 0) {
    if (((this->TileConfig).bFilterLowSpanSequences != 0) && (this->bHasLowAreaModifiers != 0)) {
      rcFilterWalkableLowHeightSpansSequences((rcContext *)param_1,iVar21,this->SolidHF);
      this->GenerateRecastFilterState = FilterLowHangingWalkableObstacles;
      EVar14 = Succeeded;
      goto LAB_146e5b1e6;
    }
    goto LAB_146e5b0d6;
  }
  this->GenerateRecastFilterState = FilterLowHangingWalkableObstacles;
  EVar14 = Succeeded;
LAB_146e5b1e6:
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar22 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar19 == (FThreadStats *)0x0) {
      pFVar20 = FThreadStatsPool::Get();
      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
    }
    if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
      local_60.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
      local_60.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar19,&local_60);
      piVar1 = &pFVar19->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar19,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar19,false,false);
      }
    }
  }
  return EVar14;
}

// GenerateRecastFilterTimeSliced @ 146e5b310

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ETimeSliceWorkResult __thiscall
FRecastTileGenerator::GenerateRecastFilterTimeSliced
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,
          FTileRasterizationContext *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  float fVar3;
  EGenerateRecastFilterTimeSlicedState EVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  ETimeSliceWorkResult EVar14;
  bool bVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastFilter> FVar17;
  FThreadSafeStaticStat<FStat_STAT_Navigation_FilterLedgeSpans> FVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  int iVar21;
  FName FVar22;
  FName FStackX_8;
  FColor_u_0 aFStackX_18 [2];
  FColor_u_0 aFStackX_20 [2];
  FName FStack_c8;
  FName FStack_b8;
  FName FStack_b0;
  FName FStack_a8;
  LARGE_INTEGER LStack_98;
  LARGE_INTEGER LStack_90;
  LARGE_INTEGER LStack_88;
  FStatMessage FStack_80;
  FStatMessage FStack_70;
  FStatMessage FStack_60;
  FName FStack_50;
  FName aFStack_48 [2];
  
  bVar12 = false;
  bVar10 = false;
  FVar17 = StatPtr_STAT_Navigation_RecastFilter;
  if (StatPtr_STAT_Navigation_RecastFilter ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastFilter>)0x0) {
    pFVar16 = ::FName::FName(&FStack_50,"STAT_Navigation_RecastFilter");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastFilter>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastFilter,*pFVar16,
                        L"Recast: create filters","STATGROUP_Navigation","STATCAT_Advanced",
                        L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar17;
  bVar8 = false;
  bVar11 = false;
  FStack_a8.ComparisonIndex.Value = 0;
  FStack_a8.Number = 0;
  if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_146e5ad69:
    bVar9 = false;
    FVar22 = FStack_a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStackX_18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStackX_18[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar8 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_b8.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        FStack_b8.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_b8,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xc65);
        bVar8 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e5ad69;
    FStackX_8 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar9 = true;
  }
  if (this->TimeSliceManager == (FNavRegenTimeSliceManager *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("TimeSliceManager",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                        ,0xc67,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      EVar14 = (*pcVar6)();
      return EVar14;
    }
  }
  EVar4 = this->GenerateRecastFilterState;
  if (EVar4 == FilterLowHangingWalkableObstacles) {
    rcFilterLowHangingWalkableObstacles
              ((rcContext *)param_1,*(int *)((longlong)&(this->TileConfig)._padding_ + 4),
               this->SolidHF);
    this->GenerateRecastFilterState = FilterLedgeSpans;
LAB_146e5add8:
    FVar18 = StatPtr_STAT_Navigation_FilterLedgeSpans;
    if (StatPtr_STAT_Navigation_FilterLedgeSpans ==
        (FThreadSafeStaticStat<FStat_STAT_Navigation_FilterLedgeSpans>)0x0) {
      pFVar16 = ::FName::FName(aFStack_48,"STAT_Navigation_FilterLedgeSpans");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_Navigation_FilterLedgeSpans>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_FilterLedgeSpans,
                          *pFVar16,L"Recast: filter ledge spans","STATGROUP_Navigation",
                          "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid
                         );
    }
    FVar5 = *(FName *)FVar18;
    FStack_c8.ComparisonIndex.Value = 0;
    FStack_c8.Number = 0;
    if ((FVar5.ComparisonIndex.Value.Value == 0) && (FVar5.Number == 0)) {
LAB_146e5aef0:
      bVar13 = false;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        aFStackX_20[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&aFStackX_20[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
        bVar12 = false;
        bVar10 = true;
        if (-1 < CpuChannel->Enabled) {
          FStack_b0.ComparisonIndex.Value = FVar5.ComparisonIndex.Value.Value;
          FStack_b0.Number = FVar5.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&FStack_b0,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                     ,0xc77);
          bVar12 = true;
          bVar10 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_146e5aef0;
      FStackX_8 = FVar5;
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      bVar12 = false;
      bVar13 = true;
      FStack_c8 = FVar5;
    }
    bVar7 = true;
    FStackX_8 = *(FName *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      rcFilterLedgeSpans((rcContext *)param_1,(int)(this->TileConfig)._padding_,
                         *(int *)((longlong)&(this->TileConfig)._padding_ + 4),
                         (uint)(this->TileConfig).LedgeSlopeFilterMode,
                         (double)(this->TileConfig)._padding_,(double)(this->TileConfig)._padding_,
                         this->GenRecastFilterLedgeSpansYStart,
                         (this->TileTimeSliceSettings).FilterLedgeSpansMaxYProcess,this->SolidHF);
      this->GenRecastFilterLedgeSpansYStart =
           this->GenRecastFilterLedgeSpansYStart +
           (this->TileTimeSliceSettings).FilterLedgeSpansMaxYProcess;
      if (this->SolidHF->height <= this->GenRecastFilterLedgeSpansYStart) {
        this->GenRecastFilterLedgeSpansYStart = 0;
        bVar7 = false;
        this->GenerateRecastFilterState = FilterWalkableLowHeightSpans;
      }
      if (*(int *)((longlong)FStackX_8 + 0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          ::FName::FName(&FilterLedgeSpans,L"FilterLedgeSpans");
          _Init_thread_footer(&::_TSS0);
        }
      }
      (this->TimeSliceManager->TimeSlicer).DebugSectionName = FilterLedgeSpans;
      bVar15 = FNavRegenTimeSlicer::TestTimeSliceFinished(&this->TimeSliceManager->TimeSlicer);
      if (bVar15) {
        if (bVar10) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar12) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((((bVar13) && (FStack_c8 != (FName)0x0)) &&
            (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar19 == (FThreadStats *)0x0) {
            pFVar20 = FThreadStatsPool::Get();
            pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
          }
          if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
            FStack_70.NameAndInfo.Index.Value = FStack_c8.ComparisonIndex.Value;
            FStack_70.NameAndInfo.Number = FStack_c8.Number & 0xffff6fff | 0x6000;
            QueryPerformanceCounter(&LStack_90);
            FStack_70.StatData.Pad[4] = '\0';
            FStack_70.StatData.Pad[5] = '\0';
            FStack_70.StatData.Pad[6] = '\0';
            FStack_70.StatData.Pad[7] = '\0';
            FStack_70.StatData.Pad[0] = LStack_90.s.LowPart._0_1_;
            FStack_70.StatData.Pad[1] = LStack_90.s.LowPart._1_1_;
            FStack_70.StatData.Pad[2] = LStack_90.s.LowPart._2_1_;
            FStack_70.StatData.Pad[3] = LStack_90.s.LowPart._3_1_;
            FThreadStats::AddStatMessage(pFVar19,&FStack_70);
            piVar1 = &pFVar19->ScopeCount;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FThreadStats::Flush(pFVar19,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar19,false,false);
            }
          }
        }
        EVar14 = CallAgainNextTimeSlice;
        goto LAB_146e5b1e6;
      }
    } while (bVar7);
    if (bVar10) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar13) && (FStack_c8 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar19 == (FThreadStats *)0x0) {
        pFVar20 = FThreadStatsPool::Get();
        pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
      }
      if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
        FStack_80.NameAndInfo.Index.Value = FStack_c8.ComparisonIndex.Value;
        FStack_80.NameAndInfo.Number = FStack_c8.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&LStack_98);
        FStack_80.StatData.Pad[4] = '\0';
        FStack_80.StatData.Pad[5] = '\0';
        FStack_80.StatData.Pad[6] = '\0';
        FStack_80.StatData.Pad[7] = '\0';
        FStack_80.StatData.Pad[0] = LStack_98.s.LowPart._0_1_;
        FStack_80.StatData.Pad[1] = LStack_98.s.LowPart._1_1_;
        FStack_80.StatData.Pad[2] = LStack_98.s.LowPart._2_1_;
        FStack_80.StatData.Pad[3] = LStack_98.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar19,&FStack_80);
        piVar1 = &pFVar19->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar19,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar19,false,false);
        }
      }
    }
  }
  else {
    if (EVar4 == FilterLedgeSpans) goto LAB_146e5add8;
    if (EVar4 != FilterWalkableLowHeightSpans) {
      `FRecastTileGenerator::GenerateRecastFilterTimeSliced'::__l35::<lambda_1>::operator()
                (&FStackX_8);
      EVar14 = Failed;
      goto LAB_146e5b1e6;
    }
  }
  fVar3 = (this->TileConfig).AgentHeight;
  iVar21 = -((int)ROUND(__real_bf000000 -
                        (fVar3 + fVar3) / (float)(double)(this->TileConfig)._padding_) >> 1);
  if ((this->TileConfig).bMarkLowHeightAreas == 0) {
    iVar21 = (int)(this->TileConfig)._padding_;
LAB_146e5b0d6:
    rcFilterWalkableLowHeightSpans((rcContext *)param_1,iVar21,this->SolidHF);
  }
  else if ((this->TileConfig).bFilterLowSpanFromTileCache != 0) {
    if (((this->TileConfig).bFilterLowSpanSequences != 0) && (this->bHasLowAreaModifiers != 0)) {
      rcFilterWalkableLowHeightSpansSequences((rcContext *)param_1,iVar21,this->SolidHF);
      this->GenerateRecastFilterState = FilterLowHangingWalkableObstacles;
      EVar14 = Succeeded;
      goto LAB_146e5b1e6;
    }
    goto LAB_146e5b0d6;
  }
  this->GenerateRecastFilterState = FilterLowHangingWalkableObstacles;
  EVar14 = Succeeded;
LAB_146e5b1e6:
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar22 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar19 == (FThreadStats *)0x0) {
      pFVar20 = FThreadStatsPool::Get();
      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
    }
    if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
      FStack_60.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
      FStack_60.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_88);
      FStack_60.StatData.Pad[4] = '\0';
      FStack_60.StatData.Pad[5] = '\0';
      FStack_60.StatData.Pad[6] = '\0';
      FStack_60.StatData.Pad[7] = '\0';
      FStack_60.StatData.Pad[0] = LStack_88.s.LowPart._0_1_;
      FStack_60.StatData.Pad[1] = LStack_88.s.LowPart._1_1_;
      FStack_60.StatData.Pad[2] = LStack_88.s.LowPart._2_1_;
      FStack_60.StatData.Pad[3] = LStack_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar19,&FStack_60);
      piVar1 = &pFVar19->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar19,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar19,false,false);
      }
    }
  }
  return EVar14;
}

// GenerateTile @ 146e5b320

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FRecastTileGenerator::GenerateTile(FRecastTileGenerator *this)

{
  int *piVar1;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar2;
  FNavMeshTileData *pFVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  double dVar12;
  dtLinkBuilderData local_res8 [8];
  LARGE_INTEGER local_res10;
  FNavMeshBuildContext local_58 [2];
  
  QueryPerformanceCounter(&local_res10);
  dVar4 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if (5 < (byte)LogNavigation._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
  }
  local_58[0]._padding_ = (longlong)&FNavMeshBuildContext::_vftable__for__rcContext__;
  local_58[0]._padding_ = (longlong)&FNavMeshBuildContext::_vftable__for__dtTileCacheLogContext__;
  local_58[0].InternalDebugData = &this->DebugData;
  local_res8[0].generatingLinks = (this->TileConfig).bGenerateLinks;
  local_58[0]._padding_._0_2_ = 0x101;
  dVar5 = dVar4;
  if (this->bRegenerateCompressedLayers != 0) {
    piVar1 = &(this->CompressedLayers).ArrayMax;
    pFVar3 = (FNavMeshTileData *)(this->CompressedLayers).AllocatorInstance.Data;
    iVar9 = (this->CompressedLayers).ArrayNum;
    if ((this->CompressedLayers).ArrayMax < 0) {
      DestructItems<FNavMeshTileData,int>(pFVar3,iVar9);
      (this->CompressedLayers).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,0,&(this->CompressedLayers).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FNavMeshTileData,int>(pFVar3,iVar9);
      (this->CompressedLayers).ArrayNum = 0;
    }
    cVar6 = (**(code **)(this->_padding_ + 0x40))(this,local_58,local_res8);
    QueryPerformanceCounter(&local_res10);
    dVar5 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    bVar7 = false;
    if (cVar6 == '\0') goto LAB_146e5b53a;
    iVar9 = (this->CompressedLayers).ArrayNum;
    this_00 = &this->DirtyLayers;
    (this->DirtyLayers).NumBits = iVar9;
    uVar8 = iVar9 + 0x1f;
    uVar11 = uVar8 >> 5;
    if (uVar8 >> 5 != 0) {
      if ((this->DirtyLayers).MaxBits + 0x1fU >> 5 < uVar11) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&this_00->AllocatorInstance,0,uVar11,4);
        (this->DirtyLayers).MaxBits = uVar11 << 5;
      }
      FVar10 = (this->DirtyLayers).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<unsigned_int>)0x0) {
        FVar10 = (ForElementType<unsigned_int>)this_00;
      }
      if (uVar11 < 9) {
        iVar9 = -1;
      }
      else {
        iVar9 = 0xff;
      }
      memset((void *)FVar10,iVar9,(ulonglong)uVar11 << 2);
      iVar9 = (this->DirtyLayers).NumBits;
      uVar11 = iVar9 >> 0x1f & 0x1f;
      uVar8 = iVar9 + uVar11;
      iVar9 = (uVar8 & 0x1f) - uVar11;
      if (iVar9 != 0) {
        FVar10 = (this->DirtyLayers).AllocatorInstance.SecondaryData;
        if (FVar10 == (ForElementType<unsigned_int>)0x0) {
          FVar10 = (ForElementType<unsigned_int>)this_00;
        }
        puVar2 = (uint *)((longlong)FVar10 + (longlong)((int)uVar8 >> 5) * 4);
        *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
      }
    }
  }
  bVar7 = GenerateNavigationData(this,local_58,local_res8);
LAB_146e5b53a:
  QueryPerformanceCounter(&local_res10);
  dVar12 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  (local_58[0].InternalDebugData)->BuildTime = dVar12 - dVar4;
  (local_58[0].InternalDebugData)->BuildCompressedLayerTime = dVar5 - dVar4;
  (local_58[0].InternalDebugData)->BuildNavigationDataTime = dVar12 - dVar5;
  (local_58[0].InternalDebugData)->Resolution = (this->TileConfig).TileResolution;
  return bVar7;
}

// GenerateTileTimeSliced @ 146e5b5d0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ETimeSliceWorkResult __thiscall
FRecastTileGenerator::GenerateTileTimeSliced(FRecastTileGenerator *this)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  EGenerateTileTimeSlicedState EVar2;
  code *pcVar3;
  bool bVar4;
  ETimeSliceWorkResult EVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  ForElementType<unsigned_int> FVar9;
  uint uVar10;
  dtLinkBuilderData local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FNavMeshBuildContext local_38;
  
  if (5 < (byte)LogNavigation._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
  }
  local_38._padding_._0_2_ = 0x101;
  local_38._padding_ = (longlong)&FNavMeshBuildContext::_vftable__for__rcContext__;
  local_38._padding_ = (longlong)&FNavMeshBuildContext::_vftable__for__dtTileCacheLogContext__;
  local_38.InternalDebugData = &this->DebugData;
  local_res8[0].generatingLinks = (this->TileConfig).bGenerateLinks;
  if ((this->TimeSliceManager == (FNavRegenTimeSliceManager *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TimeSliceManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                         ,0xa3e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  EVar2 = this->GenerateTileTimeSlicedState;
  if (EVar2 == Invalid) {
    `FRecastTileGenerator::GenerateTileTimeSliced'::__l30::<lambda_1>::operator()(local_res18);
    EVar5 = Failed;
  }
  else {
    if (EVar2 == GenerateCompressedLayers) {
      if (this->bRegenerateCompressedLayers == 0) {
        this->GenerateTileTimeSlicedState = GenerateNavigationData;
      }
      else {
        cVar6 = (**(code **)(this->_padding_ + 0x30))(this);
        if (cVar6 == '\x01') {
          iVar8 = (this->CompressedLayers).ArrayNum;
          this_00 = &this->DirtyLayers;
          this->GenerateTileTimeSlicedState = GenerateNavigationData;
          uVar7 = iVar8 + 0x1f;
          (this->DirtyLayers).NumBits = iVar8;
          uVar10 = uVar7 >> 5;
          if (uVar7 >> 5 != 0) {
            if ((this->DirtyLayers).MaxBits + 0x1fU >> 5 < uVar10) {
              TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>
              ::ResizeAllocation(&this_00->AllocatorInstance,0,uVar10,4);
              (this->DirtyLayers).MaxBits = uVar10 << 5;
            }
            FVar9 = (this->DirtyLayers).AllocatorInstance.SecondaryData;
            if (FVar9 == (ForElementType<unsigned_int>)0x0) {
              FVar9 = (ForElementType<unsigned_int>)this_00;
            }
            if (uVar10 < 9) {
              iVar8 = -1;
            }
            else {
              iVar8 = 0xff;
            }
            memset((void *)FVar9,iVar8,(ulonglong)uVar10 << 2);
            iVar8 = (this->DirtyLayers).NumBits;
            uVar10 = iVar8 >> 0x1f & 0x1f;
            uVar7 = iVar8 + uVar10;
            iVar8 = (uVar7 & 0x1f) - uVar10;
            if (iVar8 != 0) {
              FVar9 = (this->DirtyLayers).AllocatorInstance.SecondaryData;
              if (FVar9 == (ForElementType<unsigned_int>)0x0) {
                FVar9 = (ForElementType<unsigned_int>)this_00;
              }
              puVar1 = (uint *)((longlong)FVar9 + (longlong)((int)uVar7 >> 5) * 4);
              *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
            }
          }
        }
        else if (cVar6 == '\0') {
          this->GenerateTileTimeSlicedState = Invalid;
          return Failed;
        }
        if ((this->TimeSliceManager->TimeSlicer).bTimeSliceFinishedCached != false) {
          return CallAgainNextTimeSlice;
        }
      }
    }
    else if (EVar2 != GenerateNavigationData) {
      `FRecastTileGenerator::GenerateTileTimeSliced'::__l51::<lambda_2>::operator()(local_res10);
      return Failed;
    }
    EVar5 = GenerateNavigationDataTimeSliced(this,&local_38,local_res8);
    if (EVar5 != CallAgainNextTimeSlice) {
      this->GenerateTileTimeSlicedState = Invalid;
      return EVar5;
    }
  }
  return EVar5;
}

// GetReferencerName @ 146e5d520

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FString * __thiscall
FRecastTileGenerator::GetReferencerName(FRecastTileGenerator *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FRecastTileGenerator");
  return __return_storage_ptr__;
}

// GetUsedMemCount @ 146e5e6a0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

uint __thiscall FRecastTileGenerator::GetUsedMemCount(FRecastTileGenerator *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  iVar4 = (this->RawGeometry).ArrayNum;
  pFVar13 = (this->RawGeometry).AllocatorInstance.Data;
  pFVar11 = pFVar13 + (longlong)iVar4 * 0x70;
  lVar10 = ((longlong)*(int *)&(this->InclusionBounds).field_0x14 +
           (longlong)(this->RawGeometry).ArrayMax * 2) * 0x38 +
           (longlong)(this->OffmeshLinks).ArrayMax * 0xb0 +
           (longlong)(this->Modifiers).ArrayMax * 0x28;
  while( true ) {
    if ((this->RawGeometry).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRecastRawGeometryElement_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar11) break;
    pFVar1 = pFVar13 + 100;
    pFVar2 = pFVar13 + 0xc;
    pFVar3 = pFVar13 + 0x1c;
    pFVar13 = pFVar13 + 0x70;
    lVar10 = lVar10 + ((longlong)*(int *)pFVar3 +
                      ((longlong)*(int *)pFVar2 + (longlong)*(int *)pFVar1 * 0xc) * 2) * 4;
  }
  iVar4 = (this->Modifiers).ArrayNum;
  pFVar11 = (this->Modifiers).AllocatorInstance.Data;
  pFVar13 = pFVar11 + (longlong)iVar4 * 0x28;
  while( true ) {
    if ((this->Modifiers).ArrayNum != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FRecastAreaNavModifierElement_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar11 == pFVar13) break;
    lVar10 = lVar10 + (longlong)*(int *)(pFVar11 + 0x1c) * 0x60 +
             (longlong)*(int *)(pFVar11 + 0xc) * 0x70;
    pFVar11 = pFVar11 + 0x28;
  }
  uVar9 = (this->OffmeshLinks).ArrayNum;
  if (0 < (int)uVar9) {
    pFVar13 = (this->OffmeshLinks).AllocatorInstance.Data + 0x14;
    uVar14 = (ulonglong)uVar9;
    do {
      iVar4 = *(int *)pFVar13;
      pFVar13 = pFVar13 + 0xb0;
      lVar10 = lVar10 + (longlong)iVar4 * 0x70;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  uVar9 = 0;
  lVar10 = lVar10 + (longlong)(this->CompressedLayers).ArrayMax * 0x58;
  if (0 < (this->CompressedLayers).ArrayNum) {
    lVar12 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < (this->CompressedLayers).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return uVar9;
        }
      }
      uVar9 = uVar9 + 1;
      lVar6 = lVar12 + 0x40;
      lVar12 = lVar12 + 0x58;
      lVar10 = lVar10 + *(int *)((this->CompressedLayers).AllocatorInstance.Data + lVar6);
    } while ((int)uVar9 < (this->CompressedLayers).ArrayNum);
  }
  uVar9 = 0;
  uVar14 = lVar10 + (longlong)(this->NavigationData).ArrayMax * 0x58;
  if (0 < (this->NavigationData).ArrayNum) {
    lVar10 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < (this->NavigationData).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return uVar9;
        }
      }
      uVar9 = uVar9 + 1;
      lVar12 = lVar10 + 0x40;
      lVar10 = lVar10 + 0x58;
      uVar14 = uVar14 + (longlong)*(int *)((this->NavigationData).AllocatorInstance.Data + lVar12);
    } while ((int)uVar9 < (this->NavigationData).ArrayNum);
  }
  if (uVar14 != (uVar14 & 0xffffffff)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return uVar9;
    }
  }
  return (uint)uVar14;
}

// HasDataToBuild @ 146e5edb0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall FRecastTileGenerator::HasDataToBuild(FRecastTileGenerator *this)

{
  if (((((this->CompressedLayers).ArrayNum == 0) && ((this->Modifiers).ArrayNum == 0)) &&
      ((this->OffmeshLinks).ArrayNum == 0)) &&
     (((this->RawGeometry).ArrayNum == 0 &&
      ((*(int *)&(this->InclusionBounds).field_0x10 == 0 ||
       (*(int *)&(this->NavigationRelevantData).field_0x10 < 1)))))) {
    return false;
  }
  return true;
}

// HasVoxelCache @ 146e5f050

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall
FRecastTileGenerator::HasVoxelCache
          (FRecastTileGenerator *this,TNavStatArray<unsigned_char> *param_1,rcSpanCache **param_2,
          int *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  
  puVar2 = *(uint **)param_1;
  if (puVar2 != (uint *)0x0) {
    uVar6 = (ulonglong)*puVar2;
    puVar1 = puVar2 + 1;
    puVar4 = puVar1;
    if ((int)*puVar2 < 1) {
      puVar1 = (uint *)0x0;
    }
    else {
      do {
        puVar2 = puVar4;
        puVar3 = puVar2 + 8;
        if (puVar2[2] == 0) {
          puVar5 = (uint *)0x0;
          puVar4 = puVar3;
        }
        else {
          puVar4 = puVar3 + (longlong)(int)puVar2[2] * 4;
          puVar5 = puVar3;
        }
        *(uint **)(puVar2 + 6) = puVar5;
        *(uint **)(puVar2 + 4) = puVar4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      puVar2[4] = 0;
      puVar2[5] = 0;
    }
    if (puVar1 != (uint *)0x0) {
      do {
        if ((*puVar1 == this->TileX) && (puVar1[1] == this->TileY)) {
          *param_2 = *(rcSpanCache **)(puVar1 + 6);
          *param_3 = puVar1[2];
          return true;
        }
        puVar1 = *(uint **)(puVar1 + 4);
      } while (puVar1 != (uint *)0x0);
    }
  }
  return false;
}

// InitRasterizationMaskArray @ 146e5f8d0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::InitRasterizationMaskArray
          (FRecastTileGenerator *this,rcHeightfield *param_1,
          TArray<int,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<int> FVar6;
  uint uVar7;
  uint uVar8;
  
  piVar1 = &param_2->ArrayNum;
  uVar7 = param_1->height * param_1->width;
  iVar5 = *piVar1;
  if (iVar5 < (int)uVar7) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,uVar7 - iVar5,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  }
  else {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if ((int)uVar7 < iVar5) {
      uVar8 = iVar5 - uVar7;
      if (((int)(uVar8 | uVar7) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (param_2->AllocatorInstance).SecondaryData;
        FVar6 = (ForElementType<int>)param_2;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar6 = FVar2;
        }
        _Dst = (void *)((longlong)FVar6 + (longlong)(int)uVar7 * 4);
        iVar5 = (*piVar1 - uVar8) - uVar7;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar5 << 2);
        }
        *piVar1 = *piVar1 - uVar8;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  FVar2 = (param_2->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<int>)0x0) {
    param_2 = (TArray<int,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
  }
  memset(param_2,0xff,(longlong)(int)uVar7 << 2);
  return;
}

// IsLayerChanged @ 146e5fd20

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall FRecastTileGenerator::IsLayerChanged(FRecastTileGenerator *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ForElementType<unsigned_int> FVar4;
  
  if ((param_1 < 0) || ((this->DirtyLayers).NumBits <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FVar4 = (this->DirtyLayers).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->DirtyLayers;
  }
  return (*(uint *)((longlong)FVar4 +
                   (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (param_1 & 0x1fU) & 1) != 0;
}

// IsTileDebugActive @ 146e5fe10

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall FRecastTileGenerator::IsTileDebugActive(FRecastTileGenerator *this)

{
  bool bVar1;
  
  if (((this->TileDebugSettings).bEnabled != 0) &&
     (bVar1 = FRecastNavMeshTileGenerationDebug::IsWithinTileCoordinates
                        (&this->TileDebugSettings,this->TileX,this->TileY), bVar1)) {
    return true;
  }
  if ((this->TileX == GNavmeshDebugTileX) && (this->TileY == GNavmeshDebugTileY)) {
    return true;
  }
  return false;
}

// IsTileDebugAllowingGeneration @ 146e5fe80

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall FRecastTileGenerator::IsTileDebugAllowingGeneration(FRecastTileGenerator *this)

{
  bool bVar1;
  
  if (((this->TileDebugSettings).bEnabled != 0) &&
     ((this->TileDebugSettings).bGenerateDebugTileOnly != 0)) {
    bVar1 = FRecastNavMeshTileGenerationDebug::IsWithinTileCoordinates
                      (&this->TileDebugSettings,this->TileX,this->TileY);
    return bVar1;
  }
  if ((GNavmeshGenerateDebugTileOnly) &&
     ((this->TileX != GNavmeshDebugTileX || (this->TileY != GNavmeshDebugTileY)))) {
    return false;
  }
  return true;
}

// MarkDynamicArea @ 146e62d40

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::MarkDynamicArea
          (FRecastTileGenerator *this,FAreaNavModifier *param_1,TTransform<double> *param_2,
          dtTileCacheLayer *param_3)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  int *piVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  
  pUVar3 = (UClass *)FWeakObjectPtr::Get(&(param_1->AreaClassOb).WeakPtr);
  pUVar8 = (UClass *)0x0;
  pUVar7 = (UClass *)0x0;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_146e62d95;
LAB_146e62dc3:
    pUVar3 = pUVar8;
  }
  else {
    if (pUVar3 == (UClass *)0x0) goto LAB_146e62dc3;
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_146e62d95:
    pUVar4 = Z_Construct_UClass_UNavAreaBase_NoRegister();
    if (pUVar4 == (UClass *)0x0) goto LAB_146e62dc3;
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_146e62dc3;
  }
  piVar5 = TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
           ::Find((TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                   *)&(this->AdditionalCachedData).AreaClassToIdMap,pUVar3);
  pUVar6 = FWeakObjectPtr::Get(&(param_1->ReplaceAreaClassOb).WeakPtr);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 == (UObject *)0x0) goto LAB_146e62ea7;
  }
  else {
    pUVar7 = pUVar8;
    if (pUVar6 == (UObject *)0x0) goto LAB_146e62ea7;
    UE::GC::MarkAsReachable(pUVar6);
  }
  pUVar3 = Z_Construct_UClass_UNavAreaBase_NoRegister();
  pUVar7 = pUVar8;
  if (pUVar3 == (UClass *)0x0) goto LAB_146e62ea7;
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)&pUVar6[1].field_0x10 < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)&pUVar6[1].field_0x8 + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_146e62ea7;
  pUVar3 = (UClass *)FWeakObjectPtr::Get(&(param_1->ReplaceAreaClassOb).WeakPtr);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_146e62e64;
LAB_146e62e92:
    pUVar3 = pUVar8;
  }
  else {
    if (pUVar3 == (UClass *)0x0) goto LAB_146e62e92;
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_146e62e64:
    pUVar7 = Z_Construct_UClass_UNavAreaBase_NoRegister();
    if (pUVar7 == (UClass *)0x0) goto LAB_146e62e92;
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_146e62e92;
  }
  pUVar7 = (UClass *)
           TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
           ::Find((TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                   *)&(this->AdditionalCachedData).AreaClassToIdMap,pUVar3);
LAB_146e62ea7:
  if (piVar5 != (int *)0x0) {
    MarkDynamicArea(this,param_1,param_2,param_3,*piVar5,(int *)pUVar7);
  }
  return;
}

// MarkDynamicArea @ 146e62ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::MarkDynamicArea
          (FRecastTileGenerator *this,FAreaNavModifier *param_1,TTransform<double> *param_2,
          dtTileCacheLayer *param_3,int param_4,int *param_5)

{
  float fVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  ForAnyElementType FVar10;
  bool bVar11;
  uchar uVar12;
  uchar uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  TMatrix<double> *pTVar17;
  byte bVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  double *pdVar24;
  longlong lVar25;
  double dVar26;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined8 uVar51;
  undefined1 auVar47 [16];
  undefined8 uVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined4 uVar53;
  undefined4 uVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined1 auStackY_688 [32];
  ForAnyElementType local_638;
  undefined8 local_630;
  ForAnyElementType local_628;
  uint local_620;
  uint local_61c;
  double local_618;
  ForAnyElementType local_610;
  uint local_608;
  int local_604;
  ForAnyElementType local_600;
  int local_5f8 [2];
  double local_5f0;
  TVector<double>_u_0 local_5e8;
  float local_5d0;
  float local_5cc;
  FConvexNavAreaData local_5c8;
  double local_5a8;
  undefined1 local_5a0 [12];
  undefined4 uStack_594;
  double local_590;
  double local_588;
  FRecastTileGenerator *local_580;
  double *local_578;
  dtTileCacheLayer *local_570;
  double local_568;
  double dStack_560;
  double local_558;
  undefined4 local_550;
  undefined4 uStack_54c;
  undefined8 uStack_548;
  double local_540;
  double local_538;
  double dStack_530;
  double local_528;
  undefined1 local_518 [16];
  double local_508;
  undefined8 uStack_500;
  double local_4f8;
  double local_4e8;
  double local_4e0;
  double local_4d8;
  double local_4d0;
  uint *local_4c8;
  double local_4c0;
  double dStack_4b8;
  double local_4b0;
  undefined8 uStack_4a8;
  double local_4a0;
  double local_498;
  double local_490;
  double local_488;
  double local_480;
  double local_478;
  TVector<double>_u_0 local_470;
  undefined4 uStack_458;
  undefined4 uStack_454;
  double local_450;
  double dStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  double local_420;
  double dStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  double local_3f0;
  double dStack_3e8;
  undefined1 local_3d8 [16];
  TVector<double>_u_0 local_3c8;
  double local_3b0;
  double local_3a8;
  TVector<double> local_3a0;
  double local_388;
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  double local_350;
  double local_338;
  undefined1 local_318 [24];
  TVector<double>_u_0 TStack_300;
  undefined8 local_2e8;
  TVector<double>_u_0 local_2e0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  TVector<double>_u_0 local_2a8;
  double local_290;
  double local_288;
  double local_280;
  undefined1 local_278;
  uchar auStack_277 [7];
  TVector<double>_u_0 local_270;
  double local_258;
  double local_250;
  double local_248;
  TVector<double>_u_0 local_238;
  double local_220;
  double local_218;
  double local_210;
  TMatrix<double> local_1f8;
  TMatrix<double> local_178;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_688;
  fVar1 = (this->TileConfig).AgentRadius;
  local_4c8 = (uint *)param_5;
  if (((this->TileConfig).bUseExtraTopCellWhenMarkingAreas == 0) &&
     (bVar18 = param_1->field_0x6a, param_1->bExpandTopByCellHeight == 0)) {
    lVar23 = (this->TileConfig)._padding_;
    uVar30 = (undefined4)lVar23;
    uVar32 = (undefined4)((ulonglong)lVar23 >> 0x20);
    uVar53 = 0;
    uVar54 = 0;
  }
  else {
    lVar23 = (this->TileConfig)._padding_;
    uVar30 = (undefined4)lVar23;
    uVar32 = (undefined4)((ulonglong)lVar23 >> 0x20);
    bVar18 = param_1->field_0x6a;
    uVar53 = uVar30;
    uVar54 = uVar32;
  }
  local_588 = (double)CONCAT44(uVar54,uVar53);
  if ((bVar18 & 2) == 0) {
    fVar31 = 0.0;
  }
  else {
    fVar31 = (this->TileConfig).AgentHeight;
  }
  dVar26 = (double)fVar31 + (double)CONCAT44(uVar32,uVar30);
  local_580 = this;
  local_570 = param_3;
  local_4d0 = dVar26;
  Recast2UnrealBox((TBox<double> *)&local_270._s_0,param_3->header->bmin,param_3->header->bmax);
  pTVar17 = UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_1f8);
  UE::Math::TBox<double>::TransformBy(&param_1->Bounds,(TBox<double> *)&local_2e0._s_0,pTVar17);
  local_2e0._s_0.Z = local_2e0._s_0.Z - dVar26;
  local_2b8 = local_2b8 + (double)CONCAT44(uVar54,uVar53);
  dVar55 = (double)fVar1;
  local_2c8 = local_2c8 + dVar55;
  local_2e0._s_0.X = local_2e0._s_0.X - dVar55;
  local_2e0._s_0.Y = local_2e0._s_0.Y - dVar55;
  auVar50._0_8_ = local_2c0 + dVar55;
  auVar50._8_8_ = 0;
  if (((((local_270._s_0.X <= local_2c8) && (local_2e0._s_0.X <= local_258)) &&
       (local_270._s_0.Y <= auVar50._0_8_)) &&
      ((local_2e0._s_0.Y <= local_250 && (local_270._s_0.Z <= local_2b8)))) &&
     (local_2e0._s_0.Z <= local_248)) {
    uVar12 = (param_1->ShapeType).Value;
    pdVar24 = param_3->header->bmin;
    local_578 = pdVar24;
    local_2c0 = auVar50._0_8_;
    if (uVar12 == '\x01') {
      FAreaNavModifier::GetCylinder(param_1,(FCylinderNavAreaData *)&local_5e8._s_0);
      dVar55 = local_5e8._s_0.Z * (param_2->Scale3D).ZW.m128d_f64[0];
      dVar39 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
      dVar36 = (param_2->Rotation).ZW.m128d_f64[1];
      dVar33 = (double)CONCAT44(*(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                *(uint *)(param_2->Scale3D).XY.m128d_f64 &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      dVar57 = (double)CONCAT44(*(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                *(uint *)((param_2->Scale3D).XY.m128d_f64 + 1) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      if (dVar57 <= dVar33) {
        dVar57 = dVar33;
      }
      auVar50 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
      dVar34 = (param_2->Scale3D).XY.m128d_f64[0] * local_5e8._s_0.X;
      dVar56 = (param_2->Scale3D).XY.m128d_f64[1] * local_5e8._s_0.Y;
      uVar30 = (undefined4)((ulonglong)dVar56 >> 0x20);
      auVar28 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      auVar59._8_4_ = SUB84(dVar56,0);
      auVar59._0_8_ = dVar34;
      auVar59._12_4_ = uVar30;
      dVar33 = auVar50._0_8_;
      auVar40 = blendpd(auVar28,auVar50,2);
      auVar60._0_8_ = auVar59._8_8_ * auVar28._0_8_ - auVar28._8_8_ * dVar34;
      auVar60._8_8_ = dVar55 * auVar28._8_8_ - dVar33 * dVar56;
      auVar61._8_4_ = SUB84(dVar56,0);
      auVar61._0_8_ = dVar34;
      auVar61._12_4_ = uVar30;
      auVar28._8_4_ = SUB84(dVar39,0);
      auVar28._0_8_ = dVar55;
      auVar28._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      auVar28 = blendpd(auVar61,auVar28,2);
      auVar29._0_8_ = auVar28._0_8_ * dVar33 - auVar40._0_8_ * dVar55;
      auVar29._8_8_ = auVar28._8_8_ * auVar50._8_8_ - auVar40._8_8_ * dVar39;
      auVar28 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      auVar61 = blendpd(auVar60,auVar29,2);
      dVar39 = auVar60._8_8_ + auVar60._8_8_;
      dVar44 = auVar29._0_8_ + auVar29._0_8_;
      uVar30 = (undefined4)((ulonglong)dVar44 >> 0x20);
      auVar62._0_8_ = auVar61._0_8_ + auVar61._0_8_;
      auVar62._8_8_ = auVar61._8_8_ + auVar61._8_8_;
      auVar48._8_4_ = SUB84(dVar44,0);
      auVar48._0_8_ = dVar39;
      auVar48._12_4_ = uVar30;
      auVar42._8_4_ = SUB84(dVar44,0);
      auVar42._0_8_ = dVar39;
      auVar42._12_4_ = uVar30;
      auVar61 = blendpd(auVar42,auVar62,2);
      auVar49._0_8_ = auVar48._8_8_ * auVar28._0_8_ - auVar28._8_8_ * dVar39;
      auVar49._8_8_ = auVar62._0_8_ * auVar28._8_8_ - dVar33 * dVar44;
      auVar28 = blendpd(auVar28,auVar50,2);
      auVar43._0_8_ = auVar61._0_8_ * dVar33 - auVar28._0_8_ * auVar62._0_8_;
      auVar43._8_8_ = auVar61._8_8_ * auVar50._8_8_ - auVar28._8_8_ * auVar62._8_8_;
      auVar40._8_4_ = SUB84(auVar49._8_8_,0);
      auVar40._0_8_ = auVar49._0_8_;
      auVar40._12_4_ = (int)((ulonglong)auVar49._8_8_ >> 0x20);
      auVar50 = blendpd(auVar49,auVar43,2);
      dVar33 = dVar44 * dVar36 + dVar56 + auVar43._0_8_ + (param_2->Translation).XY.m128d_f64[1];
      fVar31 = (float)(((double)CONCAT44(uVar54,uVar53) - dVar26) * __real_3fe0000000000000);
      local_350 = auVar62._0_8_ * dVar36 + dVar55 + auVar50._0_8_ +
                  (param_2->Translation).ZW.m128d_f64[0];
      local_5e8._s_0.Z = (double)fVar31 + local_350;
      local_5e8._8_4_ = SUB84(dVar33,0);
      local_5e8._s_0.X =
           dVar39 * dVar36 + dVar34 + auVar40._8_8_ + (param_2->Translation).XY.m128d_f64[0];
      local_5e8._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      fVar31 = (float)((uint)fVar31 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      local_5d0 = (float)(dVar57 * (double)local_5d0) + fVar1;
      local_5cc = fVar31 + fVar31 +
                  (float)((double)CONCAT44(*(uint *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4)
                                           & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           *(uint *)(param_2->Scale3D).ZW.m128d_f64 &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                         (double)local_5cc);
      Unreal2RecastPoint(&local_3a0,(TVector<double> *)&local_5e8._s_0);
      if (param_5 == (int *)0x0) {
        uVar12 = IntCastChecked<unsigned_char,int>(param_4);
        dtMarkCylinderArea(param_3,pdVar24,(double)(this->TileConfig)._padding_,
                           (double)(this->TileConfig)._padding_,(double *)&local_3a0,
                           (double)local_5d0,(double)local_5cc,uVar12);
      }
      else {
        uVar12 = IntCastChecked<unsigned_char,int>(*param_5);
        uVar13 = IntCastChecked<unsigned_char,int>(param_4);
        dtReplaceCylinderArea
                  (param_3,pdVar24,(double)(this->TileConfig)._padding_,
                   (double)(this->TileConfig)._padding_,(double *)&local_3a0,(double)local_5d0,
                   (double)local_5cc,uVar13,uVar12);
      }
    }
    else if (uVar12 == '\x02') {
      FAreaNavModifier::GetBox(param_1,(FBoxNavAreaData *)&local_470._s_0);
      local_2a8._s_0.X =
           (double)CONCAT44(local_470._4_4_,local_470._0_4_) -
           (double)CONCAT44(uStack_454,uStack_458);
      local_2a8._s_0.Y = (double)CONCAT44(local_470._12_4_,local_470._8_4_) - local_450;
      local_290 = (double)CONCAT44(local_470._4_4_,local_470._0_4_) +
                  (double)CONCAT44(uStack_454,uStack_458);
      local_288 = (double)CONCAT44(local_470._12_4_,local_470._8_4_) + local_450;
      local_278 = 1;
      local_2a8._s_0.Z = (double)CONCAT44(local_470._20_4_,local_470._16_4_) - dStack_448;
      local_280 = (double)CONCAT44(local_470._20_4_,local_470._16_4_) + dStack_448;
      pTVar17 = UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_178);
      UE::Math::TBox<double>::TransformBy
                ((TBox<double> *)&local_2a8._s_0,(TBox<double> *)local_318,pTVar17);
      local_318._0_8_ = (double)local_318._0_8_ - dVar55;
      local_318._8_8_ = (double)local_318._8_8_ - dVar55;
      local_278 = 1;
      TStack_300._s_0.Y = dVar55 + TStack_300._s_0.Y;
      TStack_300._s_0.Z = TStack_300._s_0.Z + (double)CONCAT44(uVar54,uVar53);
      local_2e8._1_1_ = auStack_277[0];
      local_2e8._2_1_ = auStack_277[1];
      local_2e8._3_1_ = auStack_277[2];
      local_2e8._4_1_ = auStack_277[3];
      local_2e8._5_1_ = auStack_277[4];
      local_2e8._6_1_ = auStack_277[5];
      local_2e8._7_1_ = auStack_277[6];
      local_2e8._0_1_ = '\x01';
      auVar4._8_4_ = SUB84(dVar55 + TStack_300._s_0.X,0);
      auVar4._0_8_ = local_318._16_8_;
      auVar4._12_4_ = (int)((ulonglong)(dVar55 + TStack_300._s_0.X) >> 0x20);
      TStack_300._s_0.X = auVar4._8_8_;
      local_318._16_8_ = (double)local_318._16_8_ - dVar26;
      Unreal2RecastBox((TBox<double> *)&local_238._s_0,(TBox<double> *)local_318);
      local_498 = (local_218 - local_238._s_0.Y) * __real_3fe0000000000000;
      local_490 = (local_210 - local_238._s_0.Z) * __real_3fe0000000000000;
      local_4a0 = (local_220 - local_238._s_0.X) * __real_3fe0000000000000;
      local_480 = local_498 + local_238._s_0.Y;
      local_478 = local_490 + local_238._s_0.Z;
      local_488 = local_4a0 + local_238._s_0.X;
      if (param_5 == (int *)0x0) {
        uVar12 = IntCastChecked<unsigned_char,int>(param_4);
        dtMarkBoxArea(param_3,pdVar24,(double)(this->TileConfig)._padding_,
                      (double)(this->TileConfig)._padding_,&local_488,&local_4a0,uVar12);
      }
      else {
        uVar12 = IntCastChecked<unsigned_char,int>(*param_5);
        uVar13 = IntCastChecked<unsigned_char,int>(param_4);
        dtReplaceBoxArea(param_3,pdVar24,(double)(this->TileConfig)._padding_,
                         (double)(this->TileConfig)._padding_,&local_488,&local_4a0,uVar13,uVar12);
      }
    }
    else if ((uVar12 == '\x03') || (uVar12 == '\x04')) {
      local_5c8.Points.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5c8.Points.ArrayNum = 0;
      local_5c8.Points.ArrayMax = 0;
      if (uVar12 == '\x04') {
        FAreaNavModifier::GetPerInstanceConvex(param_1,param_2,&local_5c8);
      }
      else {
        FAreaNavModifier::GetConvex(param_1,&local_5c8);
      }
      FVar20.Data = local_5c8.Points.AllocatorInstance.Data;
      lVar23 = (longlong)local_5c8.Points.ArrayNum;
      local_638.Data = (FScriptContainerElement *)0x0;
      local_630 = 0;
      local_610.Data = (FScriptContainerElement *)0x0;
      local_608 = local_5c8.Points.ArrayNum;
      if (local_5c8.Points.ArrayNum == 0) {
        local_604 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_5c8.Points.ArrayNum,0,&local_610,local_5c8.Points.ArrayNum,
                   &local_604);
        memcpy(local_610.Data,FVar20.Data,lVar23 * 0x18);
      }
      uVar22 = local_608;
      FVar20.Data = local_610.Data;
      dVar26 = (double)fVar1;
      local_5f0 = dVar26;
      if (2 < (int)local_608) {
        local_628.Data = (FScriptContainerElement *)0x0;
        local_620 = local_608;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_608,0,&local_628,local_608,(int *)&local_61c);
        memcpy(local_628.Data,FVar20.Data,(longlong)(int)uVar22 * 0x18);
        if (((int)local_608 < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar20.Data = local_610.Data;
        if (((local_628.Data <= local_610.Data) &&
            (local_610.Data < local_628.Data + (longlong)(int)local_61c * 0x18)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (local_620 == local_61c) {
          local_620 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_628,(int *)&local_61c);
        }
        uVar22 = local_620 + 1;
        uVar52 = *(undefined8 *)(FVar20.Data + 8);
        *(undefined8 *)(local_628.Data + (longlong)(int)local_620 * 0x18) =
             *(undefined8 *)FVar20.Data;
        *(undefined8 *)(local_628.Data + (longlong)(int)local_620 * 0x18 + 8) = uVar52;
        *(undefined8 *)(local_628.Data + (longlong)(int)local_620 * 0x18 + 0x10) =
             *(undefined8 *)(FVar20.Data + 0x10);
        local_620 = uVar22;
        if (((int)local_608 < 2) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar20.Data = local_610.Data;
        pFVar19 = local_610.Data + 0x18;
        if (((local_628.Data <= pFVar19) &&
            (pFVar19 < local_628.Data + (longlong)(int)local_61c * 0x18)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (local_620 == local_61c) {
          local_620 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_628,(int *)&local_61c);
        }
        uVar22 = local_620 + 1;
        uVar52 = *(undefined8 *)(FVar20.Data + 0x20);
        *(undefined8 *)(local_628.Data + (longlong)(int)local_620 * 0x18) = *(undefined8 *)pFVar19;
        *(undefined8 *)(local_628.Data + (longlong)(int)local_620 * 0x18 + 8) = uVar52;
        *(undefined8 *)(local_628.Data + (longlong)(int)local_620 * 0x18 + 0x10) =
             *(undefined8 *)(FVar20.Data + 0x28);
        dVar39 = __real_3e45798ee0000000;
        dVar55 = __real_3ff0000000000000;
        iVar14 = local_620 - 1;
        local_618 = (double)CONCAT44(local_618._4_4_,uVar22);
        local_620 = uVar22;
        if (0 < iVar14) {
          lVar23 = 0x30;
          uVar63 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar64 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          lVar25 = 0x30;
          uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          uVar21 = 2;
          do {
            uVar15 = 0;
            if ((int)(uVar21 - 2) < (int)uVar22) {
              uVar15 = ~(uVar21 - 2) >> 0x1f;
            }
            if (uVar15 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar63 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar64 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
              uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              uVar54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
              uVar22 = local_620;
            }
            FVar20.Data = local_628.Data;
            uVar15 = 0;
            if ((int)(uVar21 - 1) < (int)uVar22) {
              uVar15 = ~(uVar21 - 1) >> 0x1f;
            }
            if (uVar15 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar63 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar64 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
              uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              uVar54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
              uVar22 = local_620;
            }
            FVar10.Data = local_628.Data;
            uVar15 = 0;
            if ((int)uVar21 < (int)uVar22) {
              uVar15 = ~uVar21 >> 0x1f;
            }
            if (uVar15 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar63 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar64 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
              uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              uVar54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
              uVar22 = local_620;
            }
            auVar45._0_8_ =
                 *(double *)(FVar20.Data + lVar25 + -0x30) -
                 *(double *)(FVar10.Data + lVar25 + -0x18);
            auVar45._8_8_ = 0;
            dVar36 = *(double *)(FVar20.Data + lVar25 + -0x28) -
                     *(double *)(FVar10.Data + lVar25 + -0x10);
            dVar57 = *(double *)(FVar20.Data + lVar25 + -0x20) -
                     *(double *)(FVar10.Data + lVar25 + -8);
            dVar33 = dVar36 * dVar36 + auVar45._0_8_ * auVar45._0_8_ + dVar57 * dVar57;
            if (dVar33 != dVar55) {
              if (dVar39 <= dVar33) {
                auVar50._0_8_ = dVar55 / SQRT(dVar33);
                auVar50._8_8_ = 0;
                auVar45._0_8_ = auVar45._0_8_ * auVar50._0_8_;
                auVar45._8_8_ = 0;
                dVar36 = dVar36 * auVar50._0_8_;
                dVar57 = dVar57 * auVar50._0_8_;
                local_3b0 = auVar50._0_8_;
              }
              else {
                local_4f8 = (double)CONCAT44(uVar64,uVar63);
                dVar57 = (double)CONCAT44(uVar64,uVar63);
                auVar45._4_4_ = uVar54;
                auVar45._0_4_ = uVar53;
                auVar45._8_4_ = uVar30;
                auVar45._12_4_ = uVar32;
                dVar36 = (double)CONCAT44(uVar32,uVar30);
              }
            }
            dVar44 = *(double *)(FVar10.Data + lVar25 + -0x18) -
                     *(double *)(local_628.Data + lVar25);
            dVar33 = *(double *)(FVar10.Data + lVar25 + -0x10) -
                     *(double *)(local_628.Data + lVar25 + 8);
            dVar56 = *(double *)(FVar10.Data + lVar25 + -8) -
                     *(double *)(local_628.Data + lVar25 + 0x10);
            dVar34 = dVar33 * dVar33 + dVar44 * dVar44 + dVar56 * dVar56;
            if (dVar34 != dVar55) {
              if (dVar39 <= dVar34) {
                auVar50._0_8_ = dVar55 / SQRT(dVar34);
                auVar50._8_8_ = 0;
                dVar44 = dVar44 * auVar50._0_8_;
                dVar33 = dVar33 * auVar50._0_8_;
                dVar56 = dVar56 * auVar50._0_8_;
                local_3a8 = auVar50._0_8_;
              }
              else {
                local_4f8 = (double)CONCAT44(uVar64,uVar63);
                dVar56 = (double)CONCAT44(uVar64,uVar63);
                dVar44 = (double)CONCAT44(uVar54,uVar53);
                dVar33 = (double)CONCAT44(uVar32,uVar30);
              }
            }
            dVar35 = auVar45._0_8_ * __real_3fe6a09e667f3bcd;
            dVar34 = dVar36 * __real_3fe6a09e667f3bcd * __real_bff6a09e667f3bcd;
            auVar46._0_8_ =
                 ((auVar45._0_8_ + dVar34) - dVar35 * __real_3ff6a09e667f3bcd) * dVar44 +
                 (dVar35 * __real_3ff6a09e667f3bcd + dVar36 + dVar34) * dVar33 + dVar56 * dVar57;
            auVar46._8_8_ = auVar45._8_8_;
            if ((auVar46._0_8_ < 0.0) || (auVar46._0_8_ != 0.0)) {
              local_4d8 = (dVar26 + dVar26) * (dVar26 + dVar26);
              __libm_sse2_sincos_();
              local_518._8_4_ = extraout_XMM0._0_4_;
              local_518._0_8_ = extraout_XMM0._8_8_;
              local_518._12_4_ = extraout_XMM0._4_4_;
              if ((int)local_608 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)local_608);
              }
              local_3d8 = extraout_XMM0;
              if (local_630._4_4_ < (int)local_608) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,local_608,&local_638,(int)local_630,
                           (int *)((longlong)&local_630 + 4));
                uVar63 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
                uVar64 = (undefined4)
                         ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20
                         );
                uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                uVar54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                uVar22 = local_620;
              }
              iVar14 = local_618._0_4_ + -2;
              local_4b0 = (double)CONCAT44(local_470._20_4_,local_470._16_4_);
              uStack_4a8 = (double)CONCAT44(uStack_454,uStack_458);
              local_4c0 = (double)CONCAT44(local_470._4_4_,local_470._0_4_);
              dStack_4b8 = (double)CONCAT44(local_470._12_4_,local_470._8_4_);
              uVar65 = local_470._16_4_;
              uVar66 = local_470._20_4_;
              uVar67 = uStack_458;
              uVar68 = uStack_454;
              uVar69 = local_470._0_4_;
              uVar70 = local_470._4_4_;
              uVar71 = local_470._8_4_;
              uVar72 = local_470._12_4_;
              uVar21 = 2;
              dVar36 = local_450;
              dVar39 = dStack_448;
              goto LAB_146e63a20;
            }
            lVar25 = lVar25 + 0x18;
            iVar14 = uVar21 - 1;
            uVar21 = uVar21 + 1;
          } while (iVar14 < local_618._0_4_ + -2);
        }
LAB_146e63758:
        if (local_628.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_628.Data);
        }
      }
      uVar22 = 0;
      local_5c8.MinZ = local_5c8.MinZ - local_4d0;
      local_5c8.MaxZ = local_5c8.MaxZ + local_588;
      if ((int)local_630 != 0) {
        iVar14 = (int)local_630 * 3;
        local_600.Data = (FScriptContainerElement *)0x0;
        local_5f8[0] = 0;
        local_5f8[1] = 0;
        iVar16 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,iVar14,&local_600,local_5f8,local_5f8 + 1);
        memset(local_600.Data + (longlong)iVar16 * 8,0,(longlong)iVar14 << 3);
        FVar20.Data = local_600.Data;
        if (0 < (int)local_630) {
          do {
            uVar21 = 0;
            if ((int)uVar22 < (int)local_630) {
              uVar21 = ~uVar22 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            Unreal2RecastPoint((TVector<double> *)&local_3c8._s_0,
                               (TVector<double> *)(local_638.Data + (longlong)(int)uVar22 * 0x18));
            uVar22 = uVar22 + 1;
            *(double *)FVar20.Data = local_3c8._s_0.X;
            *(double *)(FVar20.Data + 8) = local_3c8._s_0.Y;
            *(double *)(FVar20.Data + 0x10) = local_3c8._s_0.Z;
            FVar20.Data = FVar20.Data + 0x18;
          } while ((int)uVar22 < (int)local_630);
        }
        if (local_4c8 == (uint *)0x0) {
          if ((param_4 != (param_4 & 0xffU)) || (iVar14 = (int)local_630, param_4 < 0)) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IntFitsIn<OutType>(In)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
            if (bVar11) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar14 = (int)local_630;
          }
          dtMarkConvexArea(local_570,local_578,(double)(local_580->TileConfig)._padding_,
                           (double)(local_580->TileConfig)._padding_,(double *)local_600.Data,iVar14
                           ,local_5c8.MinZ,local_5c8.MaxZ,(uchar)param_4);
        }
        else {
          uVar22 = *local_4c8;
          if ((uVar22 != (uVar22 & 0xff)) || (iVar14 = (int)local_630, (int)uVar22 < 0)) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IntFitsIn<OutType>(In)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
            if (bVar11) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar14 = (int)local_630;
          }
          if ((param_4 != (param_4 & 0xffU)) || (param_4 < 0)) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IntFitsIn<OutType>(In)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
            if (bVar11) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar14 = (int)local_630;
          }
          dtReplaceConvexArea(local_570,local_578,(double)(local_580->TileConfig)._padding_,
                              (double)(local_580->TileConfig)._padding_,(double *)local_600.Data,
                              iVar14,local_5c8.MinZ,local_5c8.MaxZ,(uchar)param_4,(uchar)uVar22);
        }
        if (local_600.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_600.Data);
        }
      }
      if (local_610.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_610.Data);
      }
      if (local_638.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_638.Data);
      }
      if (local_5c8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5c8.Points.AllocatorInstance.Data);
      }
    }
  }
  return;
LAB_146e63a20:
  uVar15 = 0;
  if ((int)(uVar21 - 2) < (int)uVar22) {
    uVar15 = ~(uVar21 - 2) >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar63 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar64 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar22 = local_620;
  }
  FVar20.Data = local_628.Data;
  uVar15 = 0;
  if ((int)(uVar21 - 1) < (int)uVar22) {
    uVar15 = ~(uVar21 - 1) >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar63 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar64 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar22 = local_620;
  }
  FVar10.Data = local_628.Data;
  uVar52 = auVar50._8_8_;
  uVar51 = auVar46._8_8_;
  uVar15 = 0;
  if ((int)uVar21 < (int)uVar22) {
    uVar15 = ~uVar21 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    uVar52 = auVar50._8_8_;
    uVar51 = auVar46._8_8_;
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar63 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar64 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  dVar57 = (double)CONCAT44(uVar32,uVar30);
  if ((int)(uVar21 - 2) < 1) {
    dVar36 = *(double *)(FVar20.Data + lVar23 + -0x28) - *(double *)(FVar10.Data + lVar23 + -0x10);
    dVar44 = *(double *)(FVar20.Data + lVar23 + -0x30) - *(double *)(FVar10.Data + lVar23 + -0x18);
    dVar39 = *(double *)(FVar20.Data + lVar23 + -0x20) - *(double *)(FVar10.Data + lVar23 + -8);
    dVar33 = dVar36 * dVar36 + dVar44 * dVar44 + dVar39 * dVar39;
    if (dVar33 != dVar55) {
      if (__real_3e45798ee0000000 <= dVar33) {
        local_368 = dVar55 / SQRT(dVar33);
        dVar44 = dVar44 * local_368;
        dVar36 = dVar36 * local_368;
        dVar39 = dVar39 * local_368;
      }
      else {
        dVar39 = (double)CONCAT44(uVar64,uVar63);
        dVar44 = (double)CONCAT44(uVar54,uVar53);
        dVar36 = dVar57;
        local_4f8 = dVar39;
      }
    }
    dVar33 = (double)local_3d8._0_8_ * dVar44 + (double)local_3d8._0_8_ * dVar44;
    dVar34 = (double)local_3d8._0_8_ * dVar36 + (double)local_3d8._0_8_ * dVar36;
    dVar34 = (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(dVar34,0) ^ (uint)__xmm_80000000000000008000000000000000);
    dVar44 = ((double)local_518._0_8_ * dVar34 + dVar44) - dVar33 * (double)local_3d8._0_8_;
    dVar33 = (double)local_518._0_8_ * dVar33 + dVar36 + dVar34 * (double)local_3d8._0_8_;
    dVar36 = dVar33 * dVar33 + dVar44 * dVar44 + dVar39 * dVar39;
    if (dVar36 != dVar55) {
      if (__real_3e45798ee0000000 <= dVar36) {
        local_370 = dVar55 / SQRT(dVar36);
        dVar44 = dVar44 * local_370;
        dVar33 = dVar33 * local_370;
        dVar39 = local_370 * dVar39;
      }
      else {
        dVar39 = (double)CONCAT44(uVar64,uVar63);
        auVar9._4_4_ = uVar30;
        auVar9._0_4_ = uVar54;
        auVar9._8_4_ = uVar32;
        dVar33 = auVar9._4_8_;
        dVar44 = (double)CONCAT44(uVar54,uVar53);
        local_4f8 = dVar39;
      }
    }
    local_4c0 = *(double *)(FVar20.Data + lVar23 + -0x30) + dVar26 * dVar44;
    dVar44 = *(double *)(FVar10.Data + lVar23 + -0x18) + dVar26 * dVar44;
    dVar36 = *(double *)(FVar10.Data + lVar23 + -0x10) + dVar26 * dVar33;
    local_508 = *(double *)(FVar20.Data + lVar23 + -0x28) + dVar26 * dVar33;
    local_4b0 = *(double *)(FVar20.Data + lVar23 + -0x20) + dVar26 * dVar39;
    uVar52 = 0;
    dVar33 = 0.0;
    dVar39 = *(double *)(FVar10.Data + lVar23 + -8) + dVar26 * dVar39;
    dStack_4b8 = 0.0;
    uStack_500 = 0;
    uStack_4a8 = 0.0;
    local_410 = local_4c0;
    uStack_408 = local_508;
    local_400 = local_4b0;
    uStack_3f8 = dVar44;
  }
  else {
    auVar5._4_8_ = uVar52;
    auVar5._0_4_ = uVar70;
    auVar41._0_8_ = auVar5._0_8_ << 0x20;
    auVar41._8_4_ = uVar71;
    auVar41._12_4_ = uVar72;
    local_508 = auVar41._8_8_;
    uStack_500 = CONCAT44(uVar72,uVar71);
    auVar6._4_8_ = uVar51;
    auVar6._0_4_ = uVar66;
    auVar47._0_8_ = auVar6._0_8_ << 0x20;
    auVar47._8_4_ = uVar67;
    auVar47._12_4_ = uVar68;
    local_410 = (double)CONCAT44(uVar70,uVar69);
    uStack_408 = (double)CONCAT44(uVar72,uVar71);
    local_400 = (double)CONCAT44(uVar66,uVar65);
    uStack_3f8 = (double)CONCAT44(uVar68,uVar67);
    dVar44 = auVar47._8_8_;
    uVar52 = CONCAT44(uVar68,uVar67);
    dVar33 = dVar39;
  }
  local_4e8 = *(double *)(local_628.Data + lVar23 + 8);
  local_5a8 = *(double *)(FVar10.Data + lVar23 + -8);
  dVar26 = *(double *)(FVar10.Data + lVar23 + -0x18) - *(double *)(local_628.Data + lVar23);
  local_4e0 = *(double *)(local_628.Data + lVar23 + 0x10);
  dVar56 = *(double *)(FVar10.Data + lVar23 + -0x10) - local_4e8;
  dVar34 = local_5a8 - local_4e0;
  dVar35 = dVar56 * dVar56 + dVar26 * dVar26 + dVar34 * dVar34;
  if (dVar35 != dVar55) {
    if (__real_3e45798ee0000000 <= dVar35) {
      local_378 = dVar55 / SQRT(dVar35);
      dVar26 = dVar26 * local_378;
      dVar56 = dVar56 * local_378;
      dVar34 = dVar34 * local_378;
    }
    else {
      dVar34 = (double)CONCAT44(uVar64,uVar63);
      dVar26 = (double)CONCAT44(uVar54,uVar53);
      dVar56 = dVar57;
      local_338 = dVar34;
    }
  }
  dVar35 = (double)local_3d8._0_8_ * dVar26 + (double)local_3d8._0_8_ * dVar26;
  dVar37 = (double)local_3d8._0_8_ * dVar56 + (double)local_3d8._0_8_ * dVar56;
  dVar38 = (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar37,0) ^ (uint)__xmm_80000000000000008000000000000000);
  dVar37 = ((double)local_518._0_8_ * dVar38 + dVar26) - dVar35 * (double)local_3d8._0_8_;
  dVar26 = (double)local_518._0_8_ * dVar35 + dVar56 + (double)local_3d8._0_8_ * dVar38;
  dVar56 = dVar37 * dVar37 + dVar26 * dVar26 + dVar34 * dVar34;
  if (dVar56 != dVar55) {
    if (__real_3e45798ee0000000 <= dVar56) {
      local_388 = dVar55 / SQRT(dVar56);
      dVar37 = dVar37 * local_388;
      dVar26 = dVar26 * local_388;
      dVar34 = dVar34 * local_388;
    }
    else {
      dVar34 = (double)CONCAT44(uVar64,uVar63);
      dVar37 = (double)CONCAT44(uVar54,uVar53);
      dVar26 = dVar57;
      local_338 = dVar34;
    }
  }
  dVar26 = local_5f0 * dVar26;
  dVar34 = local_5f0 * dVar34;
  auVar50._0_8_ = local_5f0 * dVar37;
  auVar50._8_8_ = 0;
  local_420 = local_4e8 + dVar26;
  uStack_438 = *(double *)(FVar10.Data + lVar23 + -0x10) + dVar26;
  local_430 = local_5a8 + dVar34;
  dStack_418 = local_4e0 + dVar34;
  local_440 = *(double *)(FVar10.Data + lVar23 + -0x18) + auVar50._0_8_;
  uStack_428 = *(double *)(local_628.Data + lVar23) + auVar50._0_8_;
  local_618 = uStack_438 - local_420;
  dVar56 = (dVar36 - local_508) * (local_440 - uStack_428) - (dVar44 - local_4c0) * local_618;
  if (dVar56 == __real_0000000000000000) {
    local_590 = (double)CONCAT44(uVar64,uVar63);
    dVar44 = 0.0;
    auVar7._4_8_ = dVar33;
    auVar7._0_4_ = uVar54;
    auVar58._0_8_ = auVar7._0_8_ << 0x20;
    auVar58._8_4_ = uVar30;
    auVar58._12_4_ = uVar32;
    dVar56 = auVar58._8_8_;
    dVar33 = (double)CONCAT44(uVar54,uVar53);
    local_5a0._4_4_ = uVar54;
    local_5a0._0_4_ = uVar53;
    local_5a0._8_4_ = uVar30;
    uStack_594 = uVar32;
    auVar46._4_4_ = uVar54;
    auVar46._0_4_ = uVar53;
    auVar46._8_4_ = uVar30;
    auVar46._12_4_ = uVar32;
  }
  else {
    dVar56 = ((uStack_438 - local_508) * (local_440 - uStack_428) -
             (local_440 - local_4c0) * local_618) / dVar56;
    auVar46._0_8_ = (dVar44 - local_4c0) * dVar56 + local_4c0;
    auVar46._8_8_ = uVar52;
    dVar57 = (dVar36 - local_508) * dVar56 + local_508;
    local_590 = (dVar39 - local_4b0) * dVar56 + local_4b0;
    local_5a0._8_4_ = SUB84(dVar57,0);
    local_5a0._0_8_ = auVar46._0_8_;
    uStack_594 = (int)((ulonglong)dVar57 >> 0x20);
    dVar33 = auVar46._0_8_;
    dVar44 = uStack_4a8;
    dVar56 = dVar57;
  }
  if (((auVar46._0_8_ == (double)CONCAT44(uVar54,uVar53)) &&
      (auVar8._4_8_ = dVar44, auVar8._0_4_ = uVar54, auVar27._0_8_ = auVar8._0_8_ << 0x20,
      auVar27._8_4_ = uVar30, auVar27._12_4_ = uVar32, dVar56 == auVar27._8_8_)) &&
     (local_590 == (double)CONCAT44(uVar64,uVar63))) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  dVar44 = *(double *)(FVar10.Data + lVar23 + -0x18);
  local_3f0 = dVar36;
  dStack_3e8 = dVar39;
  if (bVar11) {
    dStack_560 = dVar26 + *(double *)(FVar10.Data + lVar23 + -0x10);
    local_558 = dVar34 + *(double *)(FVar10.Data + lVar23 + -8);
    auVar50._0_8_ = auVar50._0_8_ + dVar44;
    auVar50._8_8_ = 0;
    local_568 = auVar50._0_8_;
    if (((local_638.Data <= (FScriptContainerElement *)&local_568) &&
        ((FScriptContainerElement *)&local_568 < local_638.Data + (longlong)local_630._4_4_ * 0x18))
       && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar11)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar16 = (int)local_630;
    if ((int)local_630 == local_630._4_4_) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_638,(int *)((longlong)&local_630 + 4));
    }
    local_630 = CONCAT44(local_630._4_4_,iVar16 + 1);
    *(double *)(local_638.Data + (longlong)iVar16 * 0x18) = local_568;
    *(double *)(local_638.Data + (longlong)iVar16 * 0x18 + 8) = dStack_560;
    *(double *)(local_638.Data + (longlong)iVar16 * 0x18 + 0x10) = local_558;
LAB_146e6443f:
    uVar53 = SUB84(local_5f0,0);
    uVar54 = (undefined4)((ulonglong)local_5f0 >> 0x20);
  }
  else {
    auVar46._0_8_ = auVar46._0_8_ - dVar44;
    dVar56 = dVar56 - *(double *)(FVar10.Data + lVar23 + -0x10);
    dVar26 = local_590 - *(double *)(FVar10.Data + lVar23 + -8);
    dVar39 = dVar56 * dVar56 + auVar46._0_8_ * auVar46._0_8_;
    if (dVar39 <= local_4d8) {
      if ((local_638.Data <= (FScriptContainerElement *)local_5a0) &&
         ((FScriptContainerElement *)local_5a0 < local_638.Data + (longlong)local_630._4_4_ * 0x18))
      {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        dVar33 = (double)local_5a0._0_8_;
        dVar57 = stack0xfffffffffffffa68;
      }
      iVar16 = (int)local_630;
      if ((int)local_630 == local_630._4_4_) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_638,(int *)((longlong)&local_630 + 4));
        dVar33 = (double)local_5a0._0_8_;
        dVar57 = stack0xfffffffffffffa68;
      }
      local_630 = CONCAT44(local_630._4_4_,iVar16 + 1);
      auVar3._8_4_ = SUB84(dVar57,0);
      auVar3._0_8_ = dVar33;
      auVar3._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
      *(undefined1 (*) [16])(local_638.Data + (longlong)iVar16 * 0x18) = auVar3;
      *(double *)(local_638.Data + (longlong)iVar16 * 0x18 + 0x10) = local_590;
      goto LAB_146e6443f;
    }
    if (dVar39 == dVar55) {
      uStack_548 = dVar56;
      if (dVar26 != 0.0) {
LAB_146e6426d:
        dVar26 = 0.0;
        uStack_548 = dVar56;
      }
    }
    else {
      if (__real_3e45798ee0000000 <= dVar39) {
        auVar50._0_8_ = dVar55 / SQRT(dVar39);
        auVar50._8_8_ = 0;
        dVar56 = dVar56 * auVar50._0_8_;
        auVar46._0_8_ = auVar46._0_8_ * auVar50._0_8_;
        local_380 = auVar50._0_8_;
        goto LAB_146e6426d;
      }
      dVar26 = (double)CONCAT44(uVar64,uVar63);
      auVar46._4_4_ = uVar54;
      auVar46._0_4_ = uVar53;
      auVar46._8_4_ = uVar30;
      auVar46._12_4_ = uVar32;
      uStack_548 = (double)CONCAT44(uVar32,uVar30);
      local_550 = uVar53;
      uStack_54c = uVar54;
    }
    uVar53 = SUB84(local_5f0,0);
    uVar54 = (undefined4)((ulonglong)local_5f0 >> 0x20);
    dStack_530 = local_5f0 * uStack_548 * __real_3ff6a0902de00d1b +
                 *(double *)(FVar10.Data + lVar23 + -0x10);
    local_528 = local_5f0 * dVar26 * __real_3ff6a0902de00d1b +
                *(double *)(FVar10.Data + lVar23 + -8);
    auVar46._0_8_ = auVar46._0_8_ * local_5f0 * __real_3ff6a0902de00d1b + dVar44;
    local_540 = dVar26;
    local_538 = auVar46._0_8_;
    if (((local_638.Data <= (FScriptContainerElement *)&local_538) &&
        ((FScriptContainerElement *)&local_538 < local_638.Data + (longlong)local_630._4_4_ * 0x18))
       && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar11)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar16 = (int)local_630;
    if ((int)local_630 == local_630._4_4_) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_638,(int *)((longlong)&local_630 + 4));
    }
    local_630 = CONCAT44(local_630._4_4_,iVar16 + 1);
    *(double *)(local_638.Data + (longlong)iVar16 * 0x18) = local_538;
    *(double *)(local_638.Data + (longlong)iVar16 * 0x18 + 8) = dStack_530;
    *(double *)(local_638.Data + (longlong)iVar16 * 0x18 + 0x10) = local_528;
  }
  dVar26 = (double)CONCAT44(uVar54,uVar53);
  lVar23 = lVar23 + 0x18;
  local_4c0 = local_440;
  dStack_4b8 = uStack_438;
  local_4b0 = local_430;
  uStack_4a8 = uStack_428;
  if (iVar14 <= (int)(uVar21 - 1)) goto LAB_146e63758;
  uVar63 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar64 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar65 = (undefined4)local_430;
  uVar66 = local_430._4_4_;
  uVar67 = (undefined4)uStack_428;
  uVar68 = uStack_428._4_4_;
  uVar69 = (undefined4)local_440;
  uVar70 = local_440._4_4_;
  uVar71 = (undefined4)uStack_438;
  uVar72 = uStack_438._4_4_;
  uVar22 = local_620;
  uVar21 = uVar21 + 1;
  dVar36 = local_420;
  dVar39 = dStack_418;
  goto LAB_146e63a20;
}

// MarkDynamicAreas @ 146e64ae0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::MarkDynamicAreas(FRecastTileGenerator *this,dtTileCacheLayer *param_1)

{
  longlong lVar1;
  uchar uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastMarkAreas> FVar12;
  UObject *pUVar13;
  UObject *pUVar14;
  UClass *pUVar15;
  UObject *pUVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  FScriptContainerElement *pFVar20;
  FName FVar21;
  FAreaNavModifier *pFVar22;
  UObject *pUVar23;
  TTransform<double> *pTVar24;
  TTransform<double> *pTVar25;
  uint uVar26;
  FAreaNavModifier *pFVar27;
  FScriptContainerElement *pFVar28;
  uint local_res20 [2];
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined1 local_91;
  undefined1 local_90 [8];
  FAreaNavModifier *local_88;
  FScriptContainerElement *local_80;
  FColor_u_0 local_78 [2];
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_50 [2];
  
  FVar12 = StatPtr_STAT_Navigation_RecastMarkAreas;
  if (StatPtr_STAT_Navigation_RecastMarkAreas ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastMarkAreas>)0x0) {
    pFVar11 = ::FName::FName(local_50,"STAT_Navigation_RecastMarkAreas");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastMarkAreas>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastMarkAreas,
                        *pFVar11,L"Recast: mark areas","STATGROUP_Navigation","STATCAT_Advanced",
                        L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar12;
  bVar7 = false;
  bVar6 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  bVar9 = false;
  bVar8 = false;
  if ((FVar21.ComparisonIndex.Value.Value != 0) || (FVar21.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_78[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_78[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_68.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_68.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_68,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x11c9);
        bVar7 = true;
        bVar6 = true;
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_70 = FVar21;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar8 = true;
      goto LAB_146e64c80;
    }
  }
  bVar7 = bVar9;
  bVar6 = bVar8;
  bVar8 = false;
  local_70 = local_60;
  FVar21 = local_60;
LAB_146e64c80:
  iVar10 = (this->Modifiers).ArrayNum;
  if (iVar10 == 0) {
    if ((this->TileConfig).bMarkLowHeightAreas != 0) {
      dtReplaceArea(param_1,'\0','>');
    }
  }
  else {
    if (((this->AdditionalCachedData).bUseSortFunction != 0) && (1 < iVar10)) {
      FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_res20);
      pUVar13 = FWeakObjectPtr::Get(&(this->AdditionalCachedData).ActorOwner.WeakPtr);
      if (pUVar13 != (UObject *)0x0) {
        (**(code **)(*(longlong *)pUVar13 + 0x918))(pUVar13);
      }
      FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_res20);
    }
    if ((this->TileConfig).bMarkLowHeightAreas != 0) {
      local_90._0_4_ = 0x3e;
      local_90._4_4_ = 0;
      if (0 < (this->Modifiers).ArrayNum) {
        local_88 = (FAreaNavModifier *)0x0;
        do {
          pFVar27 = local_88;
          uVar26 = 0;
          if ((int)local_90._4_4_ < (this->Modifiers).ArrayNum) {
            uVar26 = (uint)~local_90._4_4_ >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar28 = (this->Modifiers).AllocatorInstance.Data + -0x20 +
                    (longlong)((pFVar27->Bounds).Pad + -0x31);
          uVar26 = *(int *)(pFVar28 + 8) - 1;
          if (-1 < (int)uVar26) {
            pFVar20 = (FScriptContainerElement *)(longlong)(int)uVar26;
            do {
              pUVar13 = (UObject *)0x0;
              uVar17 = 0;
              if ((int)uVar26 < *(int *)(pFVar28 + 8)) {
                uVar17 = ~uVar26 >> 0x1f;
              }
              local_80 = pFVar20;
              if ((uVar17 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar27 = (FAreaNavModifier *)((longlong)pFVar20 * 0x70 + *(longlong *)pFVar28);
              uVar2 = (pFVar27->ApplyMode).Value;
              if ((uVar2 == '\x02') || (uVar2 == '\x03')) {
                pUVar14 = FWeakObjectPtr::Get(&(pFVar27->AreaClassOb).WeakPtr);
                if (UE::GC::GIsIncrementalReachabilityPending == false) {
                  if (pUVar14 != (UObject *)0x0) goto LAB_146e64e21;
LAB_146e64e4f:
                  pUVar14 = pUVar13;
                }
                else {
                  if (pUVar14 == (UObject *)0x0) goto LAB_146e64e4f;
                  UE::GC::MarkAsReachable(pUVar14);
LAB_146e64e21:
                  pUVar15 = Z_Construct_UClass_UNavAreaBase_NoRegister();
                  if (pUVar15 == (UClass *)0x0) goto LAB_146e64e4f;
                  iVar10 = (int)pUVar15->_padding_;
                  if ((*(int *)&pUVar14[1].field_0x10 < iVar10) ||
                     ((longlong *)
                      *(undefined1 **)(*(longlong *)&pUVar14[1].field_0x8 + (longlong)iVar10 * 8) !=
                      &pUVar15->_padding_)) {
                    bVar9 = false;
                  }
                  else {
                    bVar9 = true;
                  }
                  if (!bVar9) goto LAB_146e64e4f;
                }
                uVar17 = ((uint)((ulonglong)pUVar14 >> 0x14) & 0xffff ^
                         (uint)((ulonglong)pUVar14 >> 4)) * -0x7a143595;
                uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
                if (*(int *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x8 !=
                    *(int *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x34) {
                  puVar3 = *(undefined1 **)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x40
                  ;
                  puVar19 = &(this->AdditionalCachedData).AreaClassToIdMap.field_0x38;
                  if (puVar3 != (undefined1 *)0x0) {
                    puVar19 = puVar3;
                  }
                  iVar10 = *(int *)(puVar19 +
                                   (ulonglong)
                                   (*(int *)&(this->AdditionalCachedData).AreaClassToIdMap.
                                             field_0x48 - 1U & (uVar17 >> 0x10 ^ uVar17)) * 4);
                  if (iVar10 != -1) {
                    lVar4 = *(longlong *)&(this->AdditionalCachedData).AreaClassToIdMap;
                    do {
                      lVar1 = lVar4 + (longlong)iVar10 * 0x18;
                      if (*(UObject **)(lVar4 + (longlong)iVar10 * 0x18) == pUVar14) {
                        pUVar14 = (UObject *)(lVar1 + 8);
                        if (lVar1 == 0) {
                          pUVar14 = pUVar13;
                        }
                        pUVar23 = (UObject *)local_90;
                        if ((pFVar27->ApplyMode).Value != '\x03') {
                          pUVar23 = pUVar13;
                        }
                        if (pUVar14 != (UObject *)0x0) {
                          iVar10 = *(int *)(pFVar28 + 0x18);
                          pTVar25 = *(TTransform<double> **)(pFVar28 + 0x10);
                          pTVar24 = pTVar25 + iVar10;
                          while( true ) {
                            if (*(int *)(pFVar28 + 0x18) != iVar10) {
                              local_94 = 0;
                              `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::
                              operator!='::__l2::<lambda_1>::operator()(&local_94);
                            }
                            pFVar20 = local_80;
                            if (pTVar25 == pTVar24) break;
                            MarkDynamicArea(this,pFVar27,pTVar25,param_1,*(int *)pUVar14,
                                            (int *)pUVar23);
                            pTVar25 = pTVar25 + 1;
                          }
                          if (*(int *)(pFVar28 + 0x18) == 0) {
                            MarkDynamicArea(this,pFVar27,&UE::Math::TTransform<double>::Identity,
                                            param_1,*(int *)pUVar14,(int *)pUVar23);
                          }
                        }
                        break;
                      }
                      iVar10 = *(int *)(lVar1 + 0x10);
                    } while (iVar10 != -1);
                  }
                }
              }
              uVar26 = uVar26 - 1;
              pFVar20 = pFVar20 + -1;
              pFVar27 = local_88;
              local_80 = pFVar20;
            } while (-1 < (int)uVar26);
          }
          local_88 = (FAreaNavModifier *)((pFVar27->Bounds).Min.field0_0x0.XYZ + 1);
          local_90._4_4_ = local_90._4_4_ + 1;
          FVar21 = local_70;
        } while ((int)local_90._4_4_ < (this->Modifiers).ArrayNum);
      }
      dtReplaceArea(param_1,'\0','>');
    }
    local_90._0_4_ = (this->Modifiers).ArrayNum;
    uVar18 = (ulonglong)(int)local_90._0_4_;
    pFVar28 = (this->Modifiers).AllocatorInstance.Data;
    local_80 = pFVar28 + uVar18 * 0x28;
    while( true ) {
      pFVar20 = local_80;
      if ((this->Modifiers).ArrayNum != (int)uVar18) {
        `TCheckedPointerIterator<FRecastAreaNavModifierElement,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_93);
      }
      if (pFVar28 == pFVar20) break;
      local_res20[0] = *(uint *)(pFVar28 + 8);
      uVar18 = (ulonglong)(int)local_res20[0];
      pFVar27 = *(FAreaNavModifier **)pFVar28;
      pFVar22 = pFVar27 + uVar18;
      local_88 = pFVar22;
      while( true ) {
        if (*(int *)(pFVar28 + 8) != (int)uVar18) {
          `TCheckedPointerIterator<FAreaNavModifier_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_92);
        }
        if (pFVar27 == pFVar22) break;
        uVar2 = (pFVar27->ApplyMode).Value;
        if ((uVar2 != '\x02') && (uVar2 != '\x03')) {
          pUVar13 = FWeakObjectPtr::Get(&(pFVar27->AreaClassOb).WeakPtr);
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar13 != (UObject *)0x0) goto LAB_146e650db;
LAB_146e6510e:
            pUVar13 = (UObject *)0x0;
          }
          else {
            if (pUVar13 == (UObject *)0x0) goto LAB_146e6510e;
            UE::GC::MarkAsReachable(pUVar13);
LAB_146e650db:
            pUVar15 = Z_Construct_UClass_UNavAreaBase_NoRegister();
            if (pUVar15 == (UClass *)0x0) goto LAB_146e6510e;
            iVar10 = (int)pUVar15->_padding_;
            if ((*(int *)&pUVar13[1].field_0x10 < iVar10) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)&pUVar13[1].field_0x8 + (longlong)iVar10 * 8) !=
                &pUVar15->_padding_)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (!bVar9) goto LAB_146e6510e;
          }
          pUVar23 = (UObject *)0x0;
          uVar26 = ((uint)((ulonglong)pUVar13 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar13 >> 4)) *
                   -0x7a143595;
          uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
          pUVar14 = pUVar23;
          if (*(int *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x8 !=
              *(int *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x34) {
            puVar3 = *(undefined1 **)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x40;
            puVar19 = &(this->AdditionalCachedData).AreaClassToIdMap.field_0x38;
            if (puVar3 != (undefined1 *)0x0) {
              puVar19 = puVar3;
            }
            iVar10 = *(int *)(puVar19 +
                             (ulonglong)
                             (*(int *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x48 - 1U
                             & (uVar26 >> 0x10 ^ uVar26)) * 4);
            if (iVar10 != -1) {
              lVar4 = *(longlong *)&(this->AdditionalCachedData).AreaClassToIdMap;
              do {
                pUVar14 = (UObject *)(lVar4 + (longlong)iVar10 * 0x18);
                if (*(UObject **)(lVar4 + (longlong)iVar10 * 0x18) == pUVar13) break;
                iVar10 = *(int *)&pUVar14->field_0x10;
                pUVar14 = pUVar23;
              } while (iVar10 != -1);
            }
          }
          pUVar13 = (UObject *)&pUVar14->field_0x8;
          if (pUVar14 == (UObject *)0x0) {
            pUVar13 = pUVar23;
          }
          pUVar14 = pUVar23;
          if ((pFVar27->ApplyMode).Value == '\x01') {
            pUVar16 = FWeakObjectPtr::Get(&(pFVar27->ReplaceAreaClassOb).WeakPtr);
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (pUVar16 != (UObject *)0x0) goto LAB_146e651e2;
            }
            else if (pUVar16 != (UObject *)0x0) {
              UE::GC::MarkAsReachable(pUVar16);
LAB_146e651e2:
              pUVar15 = Z_Construct_UClass_UNavAreaBase_NoRegister();
              if (pUVar15 != (UClass *)0x0) {
                iVar10 = (int)pUVar15->_padding_;
                if ((*(int *)&pUVar16[1].field_0x10 < iVar10) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)&pUVar16[1].field_0x8 + (longlong)iVar10 * 8) !=
                    &pUVar15->_padding_)) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  pUVar14 = FWeakObjectPtr::Get(&(pFVar27->ReplaceAreaClassOb).WeakPtr);
                  if (UE::GC::GIsIncrementalReachabilityPending == false) {
                    if (pUVar14 != (UObject *)0x0) goto LAB_146e65241;
LAB_146e6526f:
                    pUVar14 = pUVar23;
                  }
                  else {
                    if (pUVar14 == (UObject *)0x0) goto LAB_146e6526f;
                    UE::GC::MarkAsReachable(pUVar14);
LAB_146e65241:
                    pUVar15 = Z_Construct_UClass_UNavAreaBase_NoRegister();
                    if (pUVar15 == (UClass *)0x0) goto LAB_146e6526f;
                    iVar10 = (int)pUVar15->_padding_;
                    if ((*(int *)&pUVar14[1].field_0x10 < iVar10) ||
                       ((longlong *)
                        *(undefined1 **)(*(longlong *)&pUVar14[1].field_0x8 + (longlong)iVar10 * 8)
                        != &pUVar15->_padding_)) {
                      bVar9 = false;
                    }
                    else {
                      bVar9 = true;
                    }
                    if (!bVar9) goto LAB_146e6526f;
                  }
                  uVar26 = ((uint)((ulonglong)pUVar14 >> 0x14) & 0xffff ^
                           (uint)((ulonglong)pUVar14 >> 4)) * -0x7a143595;
                  uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
                  pUVar16 = pUVar23;
                  if (*(int *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x8 !=
                      *(int *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x34) {
                    puVar3 = *(undefined1 **)
                              &(this->AdditionalCachedData).AreaClassToIdMap.field_0x40;
                    puVar19 = &(this->AdditionalCachedData).AreaClassToIdMap.field_0x38;
                    if (puVar3 != (undefined1 *)0x0) {
                      puVar19 = puVar3;
                    }
                    iVar10 = *(int *)(puVar19 +
                                     (ulonglong)
                                     (*(int *)&(this->AdditionalCachedData).AreaClassToIdMap.
                                               field_0x48 - 1U & (uVar26 >> 0x10 ^ uVar26)) * 4);
                    if (iVar10 != -1) {
                      lVar4 = *(longlong *)&(this->AdditionalCachedData).AreaClassToIdMap;
                      do {
                        pUVar16 = (UObject *)(lVar4 + (longlong)iVar10 * 0x18);
                        if (*(UObject **)(lVar4 + (longlong)iVar10 * 0x18) == pUVar14) break;
                        iVar10 = *(int *)&pUVar16->field_0x10;
                        pUVar16 = pUVar23;
                      } while (iVar10 != -1);
                    }
                  }
                  pUVar14 = (UObject *)&pUVar16->field_0x8;
                  if (pUVar16 == (UObject *)0x0) {
                    pUVar14 = pUVar23;
                  }
                }
              }
            }
          }
          if (pUVar13 != (UObject *)0x0) {
            iVar10 = *(int *)(pFVar28 + 0x18);
            pTVar25 = *(TTransform<double> **)(pFVar28 + 0x10);
            pTVar24 = pTVar25 + iVar10;
            while( true ) {
              if (*(int *)(pFVar28 + 0x18) != iVar10) {
                `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::
                __l2::<lambda_1>::operator()(&local_91);
              }
              if (pTVar25 == pTVar24) break;
              MarkDynamicArea(this,pFVar27,pTVar25,param_1,*(int *)pUVar13,(int *)pUVar14);
              pTVar25 = pTVar25 + 1;
            }
            pFVar22 = local_88;
            if (*(int *)(pFVar28 + 0x18) == 0) {
              MarkDynamicArea(this,pFVar27,&UE::Math::TTransform<double>::Identity,param_1,
                              *(int *)pUVar13,(int *)pUVar14);
              pFVar22 = local_88;
            }
          }
        }
        uVar18 = (ulonglong)local_res20[0];
        pFVar27 = pFVar27 + 1;
      }
      uVar18 = (ulonglong)(uint)local_90._0_4_;
      pFVar28 = pFVar28 + 0x28;
      FVar21 = local_70;
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  return;
}

// MarkRasterizationMask @ 146e65660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::MarkRasterizationMask
          (FRecastTileGenerator *this,rcContext *param_1,rcHeightfield *param_2,
          FAreaNavModifier *param_3,TTransform<double> *param_4,int param_5,
          TArray<int,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>_> *param_6)

{
  TVector<double> *pTVar1;
  double *pdVar2;
  undefined8 uVar3;
  uchar uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  TMatrix<double> *pTVar16;
  ForElementType<int> _Dst;
  ForElementType<int> FVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined1 auStackY_538 [32];
  ForAnyElementType local_4e8;
  uint local_4e0;
  uint local_4dc;
  ForAnyElementType local_4d8;
  undefined8 local_4d0;
  ForAnyElementType local_4c8;
  uint local_4c0;
  int local_4bc;
  int local_4b8;
  ForAnyElementType local_4b0;
  int local_4a8 [2];
  double local_4a0;
  FScriptContainerElement local_498 [16];
  double local_488;
  undefined4 local_478;
  undefined4 uStack_474;
  double local_468;
  double dStack_460;
  undefined8 local_458;
  double local_450;
  double dStack_448;
  double dStack_440;
  undefined4 local_438;
  undefined4 uStack_434;
  double local_428;
  double local_420;
  ForElementType<int> local_418;
  rcHeightfield *local_410;
  double local_408;
  undefined8 uStack_400;
  FConvexNavAreaData local_3f8;
  TVector<double>_u_0 local_3d8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  TVector<double>_u_0 local_348;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  TVector<double>_u_0 local_2c8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  undefined1 local_298;
  TVector<double>_u_0 local_290;
  double local_278;
  double local_270;
  double local_268;
  TVector<double>_u_0 local_258;
  double local_240;
  double local_238;
  double local_230;
  TBox<double> local_220;
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_538;
  local_418 = (ForElementType<int>)param_6;
  local_410 = param_2;
  pTVar16 = UE::Math::TTransform<double>::ToMatrixWithScale(param_4,&local_1e8);
  UE::Math::TBox<double>::TransformBy(&param_3->Bounds,(TBox<double> *)&local_290._s_0,pTVar16);
  pTVar1 = &(this->TileBB).Max;
  if (((((local_290._s_0.X < (pTVar1->field0_0x0)._s_0.X ||
          local_290._s_0.X == (pTVar1->field0_0x0)._s_0.X) &&
        ((this->TileBB).Min.field0_0x0._s_0.X <= local_278)) &&
       (pdVar2 = &(this->TileBB).Max.field0_0x0._s_0.Y,
       local_290._s_0.Y < *pdVar2 || local_290._s_0.Y == *pdVar2)) &&
      (((this->TileBB).Min.field0_0x0._s_0.Y <= local_270 &&
       (pdVar2 = &(this->TileBB).Max.field0_0x0._s_0.Z,
       local_290._s_0.Z < *pdVar2 || local_290._s_0.Z == *pdVar2)))) &&
     ((this->TileBB).Min.field0_0x0._s_0.Z <= local_268)) {
    if (param_6->ArrayNum == 0) {
      uVar18 = param_2->height * param_2->width;
      if ((int)uVar18 < 1) {
        if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
        }
      }
      else {
        UE::Core::Private::
        ReallocGrow<2,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,uVar18,&param_6->AllocatorInstance,&param_6->ArrayNum,&param_6->ArrayMax);
      }
      FVar17 = (param_6->AllocatorInstance).SecondaryData;
      _Dst = (ForElementType<int>)param_6;
      if (FVar17 != (ForElementType<int>)0x0) {
        _Dst = FVar17;
      }
      memset((void *)_Dst,0xff,(longlong)(int)uVar18 << 2);
    }
    uVar4 = (param_3->ShapeType).Value;
    if (uVar4 == '\x02') {
      FAreaNavModifier::GetBox(param_3,(FBoxNavAreaData *)&local_3d8._s_0);
      local_2c8._s_0.X =
           (double)CONCAT44(local_3d8._4_4_,local_3d8._0_4_) -
           (double)CONCAT44(uStack_3bc,uStack_3c0);
      local_2c8._s_0.Y =
           (double)CONCAT44(local_3d8._12_4_,local_3d8._8_4_) -
           (double)CONCAT44(uStack_3b4,local_3b8);
      local_2b0 = (double)CONCAT44(local_3d8._4_4_,local_3d8._0_4_) +
                  (double)CONCAT44(uStack_3bc,uStack_3c0);
      local_2a8 = (double)CONCAT44(local_3d8._12_4_,local_3d8._8_4_) +
                  (double)CONCAT44(uStack_3b4,local_3b8);
      local_298 = 1;
      local_2c8._s_0.Z =
           (double)CONCAT44(local_3d8._20_4_,local_3d8._16_4_) -
           (double)CONCAT44(uStack_3ac,uStack_3b0);
      local_2a0 = (double)CONCAT44(local_3d8._20_4_,local_3d8._16_4_) +
                  (double)CONCAT44(uStack_3ac,uStack_3b0);
      pTVar16 = UE::Math::TTransform<double>::ToMatrixWithScale(param_4,&local_168);
      UE::Math::TBox<double>::TransformBy((TBox<double> *)&local_2c8._s_0,&local_220,pTVar16);
      Unreal2RecastBox((TBox<double> *)&local_258._s_0,&local_220);
      local_328 = (local_238 - local_258._s_0.Y) * __real_3fe0000000000000;
      local_320 = (local_230 - local_258._s_0.Z) * __real_3fe0000000000000;
      local_330 = (local_240 - local_258._s_0.X) * __real_3fe0000000000000;
      local_310 = local_328 + local_258._s_0.Y;
      local_308 = local_320 + local_258._s_0.Z;
      local_318 = local_330 + local_258._s_0.X;
      if ((param_6->ArrayNum != param_2->height * param_2->width) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("OutMaskArray.Num() == InSolidHF->width*InSolidHF->height",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                              ,0x12a6,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar17 = (param_6->AllocatorInstance).SecondaryData;
      if (FVar17 != (ForElementType<int>)0x0) {
        param_6 = (TArray<int,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>_> *)FVar17;
      }
      MarkBoxMask(&local_318,&local_330,param_5,param_2,(int *)param_6);
    }
    else if (uVar4 == '\x03') {
      local_3f8.Points.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3f8.Points.ArrayNum = 0;
      local_3f8.Points.ArrayMax = 0;
      FAreaNavModifier::GetConvex(param_3,&local_3f8);
      FVar20.Data = local_3f8.Points.AllocatorInstance.Data;
      lVar22 = (longlong)local_3f8.Points.ArrayNum;
      local_4d8.Data = (FScriptContainerElement *)0x0;
      local_4d0 = 0;
      local_4c8.Data = (FScriptContainerElement *)0x0;
      local_4c0 = local_3f8.Points.ArrayNum;
      if (local_3f8.Points.ArrayNum == 0) {
        local_4bc = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_3f8.Points.ArrayNum,0,&local_4c8,local_3f8.Points.ArrayNum,
                   &local_4bc);
        memcpy(local_4c8.Data,FVar20.Data,lVar22 * 0x18);
      }
      uVar18 = local_4c0;
      FVar20.Data = local_4c8.Data;
      if (2 < (int)local_4c0) {
        local_4e8.Data = (FScriptContainerElement *)0x0;
        local_4e0 = local_4c0;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_4c0,0,&local_4e8,local_4c0,(int *)&local_4dc);
        memcpy(local_4e8.Data,FVar20.Data,(longlong)(int)uVar18 * 0x18);
        if (((int)local_4c0 < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar20.Data = local_4c8.Data;
        if (((local_4e8.Data <= local_4c8.Data) &&
            (local_4c8.Data < local_4e8.Data + (longlong)(int)local_4dc * 0x18)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (local_4e0 == local_4dc) {
          local_4e0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_4e8,(int *)&local_4dc);
        }
        uVar18 = local_4e0 + 1;
        uVar3 = *(undefined8 *)(FVar20.Data + 8);
        *(undefined8 *)(local_4e8.Data + (longlong)(int)local_4e0 * 0x18) =
             *(undefined8 *)FVar20.Data;
        *(undefined8 *)(local_4e8.Data + (longlong)(int)local_4e0 * 0x18 + 8) = uVar3;
        *(undefined8 *)(local_4e8.Data + (longlong)(int)local_4e0 * 0x18 + 0x10) =
             *(undefined8 *)(FVar20.Data + 0x10);
        local_4e0 = uVar18;
        if (((int)local_4c0 < 2) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar20.Data = local_4c8.Data;
        pFVar19 = local_4c8.Data + 0x18;
        if (((local_4e8.Data <= pFVar19) &&
            (pFVar19 < local_4e8.Data + (longlong)(int)local_4dc * 0x18)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (local_4e0 == local_4dc) {
          local_4e0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_4e8,(int *)&local_4dc);
        }
        uVar18 = local_4e0 + 1;
        uVar3 = *(undefined8 *)(FVar20.Data + 0x20);
        *(undefined8 *)(local_4e8.Data + (longlong)(int)local_4e0 * 0x18) = *(undefined8 *)pFVar19;
        *(undefined8 *)(local_4e8.Data + (longlong)(int)local_4e0 * 0x18 + 8) = uVar3;
        *(undefined8 *)(local_4e8.Data + (longlong)(int)local_4e0 * 0x18 + 0x10) =
             *(undefined8 *)(FVar20.Data + 0x28);
        dVar31 = __real_bff0000000000001;
        dVar7 = __real_3ff0000000000001;
        dVar6 = __real_3ff0000000000000;
        local_4b8 = local_4e0 - 1;
        local_4e0 = uVar18;
        if (0 < local_4b8) {
          lVar23 = 0x30;
          uVar36 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar37 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          lVar22 = 0x30;
          uVar34 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
          uVar35 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
          uVar32 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
          uVar33 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
          uVar21 = 2;
LAB_146e65b50:
          uVar24 = 0;
          if ((int)(uVar21 - 2) < (int)uVar18) {
            uVar24 = ~(uVar21 - 2) >> 0x1f;
          }
          if (uVar24 == 0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar32 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
            uVar33 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
            uVar34 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
            uVar35 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
            uVar36 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar37 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            uVar18 = local_4e0;
          }
          FVar20.Data = local_4e8.Data;
          uVar24 = 0;
          if ((int)(uVar21 - 1) < (int)uVar18) {
            uVar24 = ~(uVar21 - 1) >> 0x1f;
          }
          if (uVar24 == 0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar32 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
            uVar33 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
            uVar34 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
            uVar35 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
            uVar36 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar37 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            uVar18 = local_4e0;
          }
          FVar12.Data = local_4e8.Data;
          uVar24 = 0;
          if ((int)uVar21 < (int)uVar18) {
            uVar24 = ~uVar21 >> 0x1f;
          }
          if (uVar24 == 0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar32 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
            uVar33 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
            uVar34 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
            uVar35 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
            uVar36 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar37 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            uVar18 = local_4e0;
          }
          dVar27 = *(double *)(FVar20.Data + lVar22 + -0x30) -
                   *(double *)(FVar12.Data + lVar22 + -0x18);
          dVar11 = *(double *)(FVar20.Data + lVar22 + -0x28) -
                   *(double *)(FVar12.Data + lVar22 + -0x10);
          dVar30 = *(double *)(FVar20.Data + lVar22 + -0x20) -
                   *(double *)(FVar12.Data + lVar22 + -8);
          dVar28 = dVar11 * dVar11 + dVar27 * dVar27 + dVar30 * dVar30;
          if (dVar28 != dVar6) {
            if (__real_3e45798ee0000000 <= dVar28) {
              local_300 = dVar6 / SQRT(dVar28);
              dVar27 = dVar27 * local_300;
              dVar11 = dVar11 * local_300;
              dVar30 = dVar30 * local_300;
            }
            else {
              dVar27 = (double)CONCAT44(uVar33,uVar32);
              dVar11 = (double)CONCAT44(uVar35,uVar34);
              dVar30 = (double)CONCAT44(uVar37,uVar36);
            }
          }
          dVar9 = *(double *)(FVar12.Data + lVar22 + -0x18) - *(double *)(local_4e8.Data + lVar22);
          dVar10 = *(double *)(FVar12.Data + lVar22 + -0x10) -
                   *(double *)(local_4e8.Data + lVar22 + 8);
          dVar29 = *(double *)(FVar12.Data + lVar22 + -8) -
                   *(double *)(local_4e8.Data + lVar22 + 0x10);
          dVar28 = dVar10 * dVar10 + dVar9 * dVar9 + dVar29 * dVar29;
          if (dVar28 != dVar6) {
            if (__real_3e45798ee0000000 <= dVar28) {
              local_2f8 = dVar6 / SQRT(dVar28);
              dVar9 = dVar9 * local_2f8;
              dVar10 = dVar10 * local_2f8;
              dVar29 = dVar29 * local_2f8;
            }
            else {
              dVar29 = (double)CONCAT44(uVar37,uVar36);
              dVar9 = (double)CONCAT44(uVar33,uVar32);
              dVar10 = (double)CONCAT44(uVar35,uVar34);
            }
          }
          dVar28 = ((dVar11 * dVar31 + dVar27) - dVar27 * dVar7) * dVar9 +
                   (dVar27 * dVar7 + dVar11 + dVar11 * dVar31) * dVar10 + dVar29 * dVar30;
          if ((0.0 <= dVar28) && (dVar28 == 0.0)) goto code_r0x000146e65e10;
          __libm_sse2_sincos_();
          if ((int)local_4c0 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)local_4c0);
          }
          local_478 = extraout_XMM0_Da;
          uStack_474 = extraout_XMM0_Db;
          local_438 = extraout_XMM0_Dc;
          uStack_434 = extraout_XMM0_Dd;
          if (local_4d0._4_4_ < (int)local_4c0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,local_4c0,&local_4d8,(int)local_4d0,(int *)((longlong)&local_4d0 + 4))
            ;
            uVar36 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar37 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            uVar34 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
            uVar35 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
            uVar32 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
            uVar33 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
            uVar18 = local_4e0;
          }
          local_408 = (double)CONCAT44(local_3d8._20_4_,local_3d8._16_4_);
          uStack_400 = CONCAT44(uStack_3bc,uStack_3c0);
          uVar25 = local_3b8;
          uVar26 = uStack_3b4;
          uVar40 = uStack_3b0;
          uVar41 = uStack_3ac;
          uVar42 = local_3d8._16_4_;
          uVar43 = local_3d8._20_4_;
          uVar38 = uStack_3c0;
          uVar39 = uStack_3bc;
          uVar46 = local_3d8._0_4_;
          uVar47 = local_3d8._4_4_;
          uVar44 = local_3d8._8_4_;
          uVar45 = local_3d8._12_4_;
          uVar21 = 2;
          while( true ) {
            uVar24 = 0;
            if ((int)(uVar21 - 2) < (int)uVar18) {
              uVar24 = ~(uVar21 - 2) >> 0x1f;
            }
            if (uVar24 == 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar32 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
              uVar33 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
              uVar34 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
              uVar35 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
              uVar36 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar37 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
              uVar18 = local_4e0;
            }
            FVar20.Data = local_4e8.Data;
            uVar24 = 0;
            if ((int)(uVar21 - 1) < (int)uVar18) {
              uVar24 = ~(uVar21 - 1) >> 0x1f;
            }
            if (uVar24 == 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar32 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
              uVar33 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
              uVar34 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
              uVar35 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
              uVar36 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar37 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
              uVar18 = local_4e0;
            }
            FVar12.Data = local_4e8.Data;
            uVar24 = 0;
            if ((int)uVar21 < (int)uVar18) {
              uVar24 = ~uVar21 >> 0x1f;
            }
            if (uVar24 == 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar32 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
              uVar33 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
              uVar34 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
              uVar35 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
              uVar36 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
              uVar37 = (undefined4)
                       ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            }
            dVar7 = (double)CONCAT44(uVar35,uVar34);
            dVar6 = (double)CONCAT44(uVar33,uVar32);
            if ((int)(uVar21 - 2) < 1) {
              local_3a8 = *(double *)(FVar20.Data + lVar23 + -0x30);
              uVar46 = SUB84(local_3a8,0);
              uVar47 = (undefined4)((ulonglong)local_3a8 >> 0x20);
              uStack_3a0 = *(double *)(FVar20.Data + lVar23 + -0x28);
              uVar44 = SUB84(uStack_3a0,0);
              uVar45 = (undefined4)((ulonglong)uStack_3a0 >> 0x20);
              uStack_390 = *(double *)(FVar12.Data + lVar23 + -0x18);
              uVar38 = SUB84(uStack_390,0);
              uVar39 = (undefined4)((ulonglong)uStack_390 >> 0x20);
              local_388 = *(double *)(FVar12.Data + lVar23 + -0x10);
              uVar25 = SUB84(local_388,0);
              uVar26 = (undefined4)((ulonglong)local_388 >> 0x20);
              dVar28 = local_3a8 - uStack_390;
              uStack_380 = *(double *)(FVar12.Data + lVar23 + -8);
              dVar11 = uStack_3a0 - local_388;
              dVar30 = *(double *)(FVar20.Data + lVar23 + -0x20) - uStack_380;
              dVar31 = dVar11 * dVar11 + dVar28 * dVar28 + dVar30 * dVar30;
              if (dVar31 != __real_3ff0000000000000) {
                if (__real_3e45798ee0000000 <= dVar31) {
                  local_2f0 = __real_3ff0000000000000 / SQRT(dVar31);
                  dVar28 = dVar28 * local_2f0;
                  dVar11 = dVar11 * local_2f0;
                  dVar30 = dVar30 * local_2f0;
                }
                else {
                  dVar30 = (double)CONCAT44(uVar37,uVar36);
                  dVar28 = dVar6;
                  dVar11 = dVar7;
                }
              }
              dVar9 = (double)CONCAT44(uStack_474,local_478);
              dVar27 = dVar9 * dVar11 + dVar9 * dVar11;
              dVar31 = (dVar9 + dVar9) * dVar28;
              uVar18 = SUB84(dVar27,0) ^ (uint)__xmm_80000000000000008000000000000000;
              uVar24 = (uint)((ulonglong)dVar27 >> 0x20) ^
                       __xmm_80000000000000008000000000000000._4_4_;
              dVar28 = ((double)CONCAT44(uStack_434,local_438) * (double)CONCAT44(uVar24,uVar18) +
                       dVar28) - dVar9 * dVar31;
              dVar31 = dVar31 * (double)CONCAT44(uStack_434,local_438) + dVar11 +
                       (double)CONCAT44(uStack_474,local_478) * (double)CONCAT44(uVar24,uVar18);
              dVar31 = dVar28 * dVar28 + dVar31 * dVar31 + dVar30 * dVar30;
              if ((dVar31 != __real_3ff0000000000000) && (__real_3e45798ee0000000 <= dVar31)) {
                local_2e8 = __real_3ff0000000000000 / SQRT(dVar31);
              }
              local_408 = *(double *)(FVar20.Data + lVar23 + -0x20);
              uStack_400 = 0;
              local_398 = local_408;
            }
            else {
              local_3a8 = (double)CONCAT44(uVar47,uVar46);
              uStack_3a0 = (double)CONCAT44(uVar45,uVar44);
              local_398 = (double)CONCAT44(uVar43,uVar42);
              uStack_390 = (double)CONCAT44(uVar39,uVar38);
              local_388 = (double)CONCAT44(uVar26,uVar25);
              uStack_380 = (double)CONCAT44(uVar41,uVar40);
            }
            local_428 = *(double *)(FVar12.Data + lVar23 + -0x18);
            dVar28 = *(double *)(FVar12.Data + lVar23 + -8) -
                     *(double *)(local_4e8.Data + lVar23 + 0x10);
            uStack_370 = *(double *)(FVar12.Data + lVar23 + -0x10);
            local_420 = uStack_370 - *(double *)(local_4e8.Data + lVar23 + 8);
            dVar11 = local_428 - *(double *)(local_4e8.Data + lVar23);
            dVar31 = local_420 * local_420 + dVar11 * dVar11 + dVar28 * dVar28;
            dVar30 = dVar11;
            local_4a0 = local_420;
            if (dVar31 != __real_3ff0000000000000) {
              if (__real_3e45798ee0000000 <= dVar31) {
                local_2d0 = __real_3ff0000000000000 / SQRT(dVar31);
                dVar28 = dVar28 * local_2d0;
                dVar30 = dVar11 * local_2d0;
                local_4a0 = local_420 * local_2d0;
              }
              else {
                dVar30 = dVar6;
                dVar28 = (double)CONCAT44(uVar37,uVar36);
                local_4a0 = (double)CONCAT44(uVar35,uVar34);
              }
            }
            dVar31 = (double)CONCAT44(uStack_474,local_478);
            dVar27 = dVar31 * local_4a0 + dVar31 * local_4a0;
            dVar31 = (dVar31 + dVar31) * dVar30;
            uVar18 = SUB84(dVar27,0) ^ (uint)__xmm_80000000000000008000000000000000;
            uVar24 = (uint)((ulonglong)dVar27 >> 0x20) ^
                     __xmm_80000000000000008000000000000000._4_4_;
            dVar30 = ((double)CONCAT44(uStack_434,local_438) * (double)CONCAT44(uVar24,uVar18) +
                     dVar30) - dVar31 * (double)CONCAT44(uStack_474,local_478);
            dVar31 = dVar31 * (double)CONCAT44(uStack_434,local_438) + local_4a0 +
                     (double)CONCAT44(uStack_474,local_478) * (double)CONCAT44(uVar24,uVar18);
            dVar31 = dVar30 * dVar30 + dVar31 * dVar31 + dVar28 * dVar28;
            if ((dVar31 != __real_3ff0000000000000) && (__real_3e45798ee0000000 <= dVar31)) {
              local_2d8 = __real_3ff0000000000000 / SQRT(dVar31);
            }
            local_368 = *(double *)(FVar12.Data + lVar23 + -8);
            dVar30 = (double)CONCAT44(uVar26,uVar25) - (double)CONCAT44(uVar45,uVar44);
            uStack_350 = *(undefined8 *)(local_4e8.Data + lVar23 + 0x10);
            dVar28 = (double)CONCAT44(uVar39,uVar38) - (double)CONCAT44(uVar47,uVar46);
            uStack_360 = *(undefined8 *)(local_4e8.Data + lVar23);
            uStack_358 = *(undefined8 *)(local_4e8.Data + lVar23 + 8);
            dVar31 = dVar11 * dVar30 - local_420 * dVar28;
            if (dVar31 == 0.0) {
              local_488 = (double)CONCAT44(uVar37,uVar36);
              uVar25 = uVar34;
              uVar26 = uVar35;
            }
            else {
              dVar31 = ((uStack_370 - (double)CONCAT44(uVar45,uVar44)) * dVar11 -
                       (local_428 - (double)CONCAT44(uVar47,uVar46)) * local_420) / dVar31;
              local_488 = (uStack_380 - local_408) * dVar31 + local_408;
              dVar6 = dVar31 * dVar28 + (double)CONCAT44(uVar47,uVar46);
              dVar7 = dVar31 * dVar30 + (double)CONCAT44(uVar45,uVar44);
              uVar25 = SUB84(dVar7,0);
              uVar26 = (int)((ulonglong)dVar7 >> 0x20);
            }
            local_498._8_4_ = uVar25;
            local_498._0_8_ = dVar6;
            local_498._12_4_ = uVar26;
            if (((dVar6 == (double)CONCAT44(uVar33,uVar32)) &&
                (dVar7 == (double)CONCAT44(uVar35,uVar34))) &&
               (local_488 == (double)CONCAT44(uVar37,uVar36))) {
              bVar13 = true;
            }
            else {
              bVar13 = false;
            }
            dVar31 = *(double *)(FVar12.Data + lVar23 + -0x18);
            local_378 = local_428;
            if (bVar13) {
              dStack_448 = *(double *)(FVar12.Data + lVar23 + -0x10);
              dStack_440 = *(double *)(FVar12.Data + lVar23 + -0x10 + 8);
              local_450 = dVar31;
              if (((local_4d8.Data <= (FScriptContainerElement *)&local_450) &&
                  ((FScriptContainerElement *)&local_450 <
                   local_4d8.Data + (longlong)local_4d0._4_4_ * 0x18)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar15 = (int)local_4d0;
              if ((int)local_4d0 == local_4d0._4_4_) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,&local_4d8,(int *)((longlong)&local_4d0 + 4));
              }
              local_4d0 = CONCAT44(local_4d0._4_4_,iVar15 + 1);
              *(double *)(local_4d8.Data + (longlong)iVar15 * 0x18) = local_450;
              *(double *)(local_4d8.Data + (longlong)iVar15 * 0x18 + 8) = dStack_448;
              *(double *)(local_4d8.Data + (longlong)iVar15 * 0x18 + 0x10) = dStack_440;
            }
            else {
              dVar28 = *(double *)(FVar12.Data + lVar23 + -0x10);
              uVar3 = *(undefined8 *)(FVar12.Data + lVar23 + -8);
              dVar7 = (dVar7 - dVar28) * (dVar7 - dVar28) + (dVar6 - dVar31) * (dVar6 - dVar31);
              if (dVar7 <= 0.0) {
                if ((local_4d8.Data <= local_498) &&
                   (local_498 < local_4d8.Data + (longlong)local_4d0._4_4_ * 0x18)) {
                  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     );
                  if (bVar13) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  dVar6 = local_498._0_8_;
                  uVar25 = local_498._8_4_;
                  uVar26 = local_498._12_4_;
                }
                iVar15 = (int)local_4d0;
                if ((int)local_4d0 == local_4d0._4_4_) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&local_4d8,(int *)((longlong)&local_4d0 + 4));
                  dVar6 = local_498._0_8_;
                  uVar25 = local_498._8_4_;
                  uVar26 = local_498._12_4_;
                }
                local_4d0 = CONCAT44(local_4d0._4_4_,iVar15 + 1);
                auVar8._8_4_ = uVar25;
                auVar8._0_8_ = dVar6;
                auVar8._12_4_ = uVar26;
                *(undefined1 (*) [16])(local_4d8.Data + (longlong)iVar15 * 0x18) = auVar8;
                *(double *)(local_4d8.Data + (longlong)iVar15 * 0x18 + 0x10) = local_488;
              }
              else {
                if ((dVar7 != __real_3ff0000000000000) && (__real_3e45798ee0000000 <= dVar7)) {
                  local_2e0 = __real_3ff0000000000000 / SQRT(dVar7);
                }
                local_468 = dVar31;
                dStack_460 = dVar28;
                local_458 = uVar3;
                if (((local_4d8.Data <= (FScriptContainerElement *)&local_468) &&
                    ((FScriptContainerElement *)&local_468 <
                     local_4d8.Data + (longlong)local_4d0._4_4_ * 0x18)) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar13)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar15 = (int)local_4d0;
                if ((int)local_4d0 == local_4d0._4_4_) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&local_4d8,(int *)((longlong)&local_4d0 + 4));
                }
                local_4d0 = CONCAT44(local_4d0._4_4_,iVar15 + 1);
                *(double *)(local_4d8.Data + (longlong)iVar15 * 0x18) = local_468;
                *(double *)(local_4d8.Data + (longlong)iVar15 * 0x18 + 8) = dStack_460;
                *(undefined8 *)(local_4d8.Data + (longlong)iVar15 * 0x18 + 0x10) = local_458;
              }
            }
            lVar23 = lVar23 + 0x18;
            local_408 = local_368;
            uStack_400 = uStack_360;
            if (local_4b8 <= (int)(uVar21 - 1)) break;
            uVar36 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar37 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            uVar34 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
            uVar35 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
            uVar32 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
            uVar33 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
            uVar25 = (undefined4)uStack_358;
            uVar26 = uStack_358._4_4_;
            uVar40 = (undefined4)uStack_350;
            uVar41 = uStack_350._4_4_;
            uVar42 = (undefined4)local_368;
            uVar43 = local_368._4_4_;
            uVar38 = (undefined4)uStack_360;
            uVar39 = uStack_360._4_4_;
            uVar46 = (undefined4)local_378;
            uVar47 = local_378._4_4_;
            uVar44 = (undefined4)uStack_370;
            uVar45 = uStack_370._4_4_;
            uVar18 = local_4e0;
            uVar21 = uVar21 + 1;
          }
        }
LAB_146e65e28:
        if (local_4e8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4e8.Data);
        }
      }
      uVar18 = 0;
      if ((int)local_4d0 != 0) {
        iVar15 = (int)local_4d0 * 3;
        local_4b0.Data = (FScriptContainerElement *)0x0;
        local_4a8[0] = 0;
        local_4a8[1] = 0;
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,iVar15,&local_4b0,local_4a8,local_4a8 + 1);
        memset(local_4b0.Data + (longlong)iVar14 * 8,0,(longlong)iVar15 << 3);
        FVar20.Data = local_4b0.Data;
        if (0 < (int)local_4d0) {
          do {
            uVar21 = 0;
            if ((int)uVar18 < (int)local_4d0) {
              uVar21 = ~uVar18 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            Unreal2RecastPoint((TVector<double> *)&local_348._s_0,
                               (TVector<double> *)(local_4d8.Data + (longlong)(int)uVar18 * 0x18));
            uVar18 = uVar18 + 1;
            *(double *)FVar20.Data = local_348._s_0.X;
            *(double *)(FVar20.Data + 8) = local_348._s_0.Y;
            *(double *)(FVar20.Data + 0x10) = local_348._s_0.Z;
            FVar20.Data = FVar20.Data + 0x18;
          } while ((int)uVar18 < (int)local_4d0);
        }
        FVar17 = local_418;
        if (*(ForElementType<int> *)((longlong)local_418 + 0x4000) != (ForElementType<int>)0x0) {
          FVar17 = *(ForElementType<int> *)((longlong)local_418 + 0x4000);
        }
        MarkConvexMask(param_5,(double *)local_4b0.Data,(int)local_4d0,local_410,(int *)FVar17);
        if (local_4b0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4b0.Data);
        }
      }
      if (local_4c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4c8.Data);
      }
      if (local_4d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4d8.Data);
      }
      if (local_3f8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f8.Points.AllocatorInstance.Data);
      }
    }
  }
  return;
code_r0x000146e65e10:
  lVar22 = lVar22 + 0x18;
  iVar15 = uVar21 - 1;
  uVar21 = uVar21 + 1;
  if (local_4b8 <= iVar15) goto LAB_146e65e28;
  goto LAB_146e65b50;
}

// PrepareGeometrySources @ 146e688e0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::PrepareGeometrySources
          (FRecastTileGenerator *this,FRecastNavMeshGenerator *param_1,bool param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FName FVar4;
  TSharedRef<FNavigationRelevantData,1> *pTVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FRecastTileGenerator::PrepareGeometrySources(FRecastNavMeshGenerator_const_&,bool)_::_2_::FStat_STAT_RecastNavMeshGenerator_PrepareGeometrySources>
  FVar13;
  UWorld *pUVar14;
  UClass *pUVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  UNavigationSystemBase *pUVar16;
  UNavigationSystemBase *pUVar17;
  double dVar18;
  double dVar19;
  FName local_f8;
  FColor_u_0 local_e8 [2];
  FName local_e0;
  FName local_d8;
  LARGE_INTEGER local_d0;
  FStatMessage local_c8;
  <lambda_1> local_b8;
  TVector4<double>_u_0 local_98;
  double local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  FName local_58;
  FName local_50 [3];
  
  pUVar17 = (UNavigationSystemBase *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RecastNavMeshGenerator_PrepareGeometrySources ==
        (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FRecastTileGenerator::PrepareGeometrySources(FRecastNavMeshGenerator_const_&,bool)_::_2_::FStat_STAT_RecastNavMeshGenerator_PrepareGeometrySources>
         )0x0) {
      pFVar12 = ::FName::FName(&local_58,"STAT_RecastNavMeshGenerator_PrepareGeometrySources");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_RecastNavMeshGenerator_PrepareGeometrySources,*pFVar12,
                 L"STAT_RecastNavMeshGenerator_PrepareGeometrySources","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_RecastNavMeshGenerator_PrepareGeometrySources;
  if (StatPtr_STAT_RecastNavMeshGenerator_PrepareGeometrySources ==
      (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FRecastTileGenerator::PrepareGeometrySources(FRecastNavMeshGenerator_const_&,bool)_::_2_::FStat_STAT_RecastNavMeshGenerator_PrepareGeometrySources>
       )0x0) {
    pFVar12 = ::FName::FName(local_50,"STAT_RecastNavMeshGenerator_PrepareGeometrySources");
    FVar13 = (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FRecastTileGenerator::PrepareGeometrySources(FRecastNavMeshGenerator_const_&,bool)_::_2_::FStat_STAT_RecastNavMeshGenerator_PrepareGeometrySources>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RecastNavMeshGenerator_PrepareGeometrySources,*pFVar12,
                          L"STAT_RecastNavMeshGenerator_PrepareGeometrySources","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  FVar4 = *(FName *)FVar13;
  if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        local_d8.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x801);
        bVar9 = true;
        bVar8 = true;
      }
    }
    bVar10 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_e0 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar10 = true;
      local_f8 = FVar4;
    }
  }
  pUVar14 = AActor::GetWorld((AActor *)param_1->DestNavMesh);
  pUVar16 = pUVar17;
  if (pUVar14 != (UWorld *)0x0) {
    pUVar16 = (pUVar14->NavigationSystem).field0_0x0.DebugPtr;
    if (pUVar16 == (UNavigationSystemBase *)0x0) {
LAB_146e68a88:
      pUVar16 = pUVar17;
    }
    else {
      pUVar15 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
      iVar3 = (int)pUVar15->_padding_;
      if ((*(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38) < iVar3) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar15->_padding_)) goto LAB_146e68a88;
    }
    if ((pUVar16 != (UNavigationSystemBase *)0x0) &&
       (pUVar17 = *(UNavigationSystemBase **)&pUVar16[0x16].field_0x18,
       pUVar17 != (UNavigationSystemBase *)0x0)) goto LAB_146e68ac7;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("NavOctreeInstance",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                      ,0x805,L"");
  if (bVar11) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_146e68ac7:
  puVar1 = &(this->NavigationRelevantData).field_0x14;
  pTVar5 = *(TSharedRef<FNavigationRelevantData,1> **)&(this->NavigationRelevantData).field_0x0;
  iVar3 = *(int *)&(this->NavigationRelevantData).field_0x10;
  if (*(int *)&(this->NavigationRelevantData).field_0x14 < 0) {
    DestructItems<TSharedRef<FNavigationRelevantData,1>,int>(pTVar5,iVar3);
    *(undefined4 *)&(this->NavigationRelevantData).field_0x10 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->NavigationRelevantData,0,(int *)puVar1);
    }
  }
  else {
    DestructItems<TSharedRef<FNavigationRelevantData,1>,int>(pTVar5,iVar3);
    *(undefined4 *)&(this->NavigationRelevantData).field_0x10 = 0;
  }
  local_e0 = (FName)pUVar16;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar16 != (UNavigationSystemBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  FWeakObjectPtr::operator=(&(this->NavSystem).WeakPtr,(FObjectPtr)&local_e0);
  this->bUpdateGeometry = 0;
  local_68 = __real_3fe0000000000000;
  *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | (uint)param_2 << 2;
  dVar18 = (this->TileBB).Min.field0_0x0._s_0.X - (param_1->BBoxGrowthLow).field0_0x0._s_0.X;
  dVar19 = (this->TileBB).Min.field0_0x0._s_0.Y - (param_1->BBoxGrowthLow).field0_0x0._s_0.Y;
  dVar7 = (this->TileBB).Min.field0_0x0._s_0.Z - (param_1->BBoxGrowthLow).field0_0x0._s_0.Z;
  local_b8.bUseVirtualGeometryFilteringAndDirtying =
       param_1->DestNavMesh->bUseVirtualGeometryFilteringAndDirtying;
  local_78 = (((param_1->BBoxGrowthHigh).field0_0x0._s_0.X + (this->TileBB).Max.field0_0x0._s_0.X) -
             dVar18) * local_68;
  local_70 = (((param_1->BBoxGrowthHigh).field0_0x0._s_0.Y + (this->TileBB).Max.field0_0x0._s_0.Y) -
             dVar19) * local_68;
  local_68 = (((param_1->BBoxGrowthHigh).field0_0x0._s_0.Z + (this->TileBB).Max.field0_0x0._s_0.Z) -
             dVar7) * local_68;
  local_98._s_0.X = dVar18 + local_78;
  local_98._s_0.W = 0.0;
  local_98._s_0.Y = dVar19 + local_70;
  local_98._s_0.Z = dVar7 + local_68;
  local_60 = 0;
  local_b8.ParentGenerator = param_1;
  local_b8.__this = this;
  local_b8.bGeometryChanged = param_2;
  TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::
  FindElementsWithBoundsTestInternal<_FRecastTileGenerator::PrepareGeometrySources_::__l2::<lambda_1>_>
            ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)&pUVar17->field_0x10,0
             ,(FOctreeNodeContext *)&pUVar17->field_0x10,(FBoxCenterAndExtent *)&local_98._s_0,
             &local_b8);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (local_f8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_c8.NameAndInfo.Index = local_f8.ComparisonIndex.Value;
      local_c8.NameAndInfo.Number = local_f8.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_d0);
      local_c8.StatData.Pad[4] = '\0';
      local_c8.StatData.Pad[5] = '\0';
      local_c8.StatData.Pad[6] = '\0';
      local_c8.StatData.Pad[7] = '\0';
      local_c8.StatData.Pad[0] = local_d0.s.LowPart._0_1_;
      local_c8.StatData.Pad[1] = local_d0.s.LowPart._1_1_;
      local_c8.StatData.Pad[2] = local_d0.s.LowPart._2_1_;
      local_c8.StatData.Pad[3] = local_d0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_c8);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// PrepareVoxelCache @ 146e68df0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::PrepareVoxelCache
          (FRecastTileGenerator *this,TNavStatArray<unsigned_char> *param_1,TBox<double> *param_2,
          FCompositeNavModifier *param_3,TNavStatArray<rcSpanCache> *param_4)

{
  longlong lVar1;
  uint uVar2;
  FVoxelCacheRasterizeContext FVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ForElementType<int> FVar7;
  uint uVar8;
  FAreaNavModifier *pFVar9;
  ForElementType<int> FVar10;
  FAreaNavModifier *pFVar11;
  double *pdVar12;
  int *piVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStackY_4168 [32];
  undefined1 local_4108 [4];
  int local_4104;
  int local_4100;
  int local_40fc;
  ForAnyElementType local_40f8;
  int local_40e8 [2];
  TNavStatArray<rcSpanCache> *local_40e0;
  double *local_40d8;
  int *local_40d0;
  TArray<int,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>_> local_4098;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_4168;
  local_4100 = *(int *)((longlong)&(this->TileConfig)._padding_ + 4);
  local_40e0 = param_4;
  dVar14 = cos((double)(this->TileConfig)._padding_ * __real_3f91df46a2529d39);
  lVar1 = *(longlong *)param_1;
  dVar16 = (double)(this->TileConfig)._padding_;
  iVar5 = *(int *)(lVar1 + 4);
  iVar6 = *(int *)(lVar1 + 8);
  pdVar12 = (double *)(lVar1 + 0x30);
  dVar15 = (double)*(int *)((longlong)&(this->TileConfig)._padding_ + 4) * dVar16;
  piVar13 = (int *)(lVar1 + ((longlong)iVar5 + 2) * 0x18);
  dVar16 = (double)(int)(this->TileConfig)._padding_ * dVar16;
  local_40d8 = pdVar12;
  local_40d0 = piVar13;
  rcResetHeightfield(VoxelCacheContext.RasterizeHF);
  FVar3 = VoxelCacheContext;
  FVar10 = (ForElementType<int>)0x0;
  (VoxelCacheContext.RasterizeHF)->bmin[0] = (double)(this->TileConfig)._padding_;
  (FVar3.RasterizeHF)->bmin[1] = (double)(this->TileConfig)._padding_;
  (FVar3.RasterizeHF)->bmin[2] = (double)(this->TileConfig)._padding_;
  FVar3 = VoxelCacheContext;
  (VoxelCacheContext.RasterizeHF)->bmax[0] = (double)(this->TileConfig)._padding_;
  (FVar3.RasterizeHF)->bmax[1] = (double)(this->TileConfig)._padding_;
  (FVar3.RasterizeHF)->bmax[2] = (double)(this->TileConfig)._padding_;
  (VoxelCacheContext.RasterizeHF)->bmin[0] = (VoxelCacheContext.RasterizeHF)->bmin[0] - dVar15;
  (VoxelCacheContext.RasterizeHF)->bmin[2] = (VoxelCacheContext.RasterizeHF)->bmin[2] - dVar15;
  (VoxelCacheContext.RasterizeHF)->bmax[0] = dVar16 + (VoxelCacheContext.RasterizeHF)->bmax[0];
  (VoxelCacheContext.RasterizeHF)->bmax[2] = dVar16 + (VoxelCacheContext.RasterizeHF)->bmax[2];
  local_40f8._padding_ = 0;
  local_40f8.AllocatedSize = 0;
  local_40e8[0] = 0;
  local_40e8[1] = 0;
  local_4104 = iVar6;
  iVar4 = UE::Core::Private::ReallocGrow<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                    (1,1,iVar6,&local_40f8,local_40e8,local_40e8 + 1);
  memset((uchar *)(local_40f8._padding_ + iVar4),0,(longlong)iVar6);
  local_40fc = iVar5;
  rcMarkWalkableTrianglesCos
            ((rcContext *)0x0,(double)(float)dVar14,pdVar12,iVar5,piVar13,iVar6,
             (uchar *)local_40f8._padding_);
  local_4098.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_4098.ArrayNum = 0;
  local_4098.ArrayMax = 0x1000;
  if (param_3->bMaskFillCollisionUnderneathForNavmesh != 0) {
    iVar5 = (param_3->Areas).ArrayNum;
    pFVar9 = (FAreaNavModifier *)(param_3->Areas).AllocatorInstance.Data;
    pFVar11 = pFVar9 + iVar5;
    while( true ) {
      if ((param_3->Areas).ArrayNum != iVar5) {
        `TCheckedPointerIterator<FAreaNavModifier_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_4108);
      }
      pdVar12 = local_40d8;
      piVar13 = local_40d0;
      param_4 = local_40e0;
      iVar6 = local_4104;
      if (pFVar9 == pFVar11) break;
      MarkRasterizationMask
                (this,(rcContext *)0x0,VoxelCacheContext.RasterizeHF,pFVar9,
                 &UE::Math::TTransform<double>::Identity,-2,&local_4098);
      pFVar9 = pFVar9 + 1;
    }
  }
  uVar8 = param_3->bFillCollisionUnderneathForNavmesh;
  uVar2 = uVar8 | 2;
  if (param_3->bRasterizeAsFilledConvexVolume == 0) {
    uVar2 = uVar8;
  }
  FVar7 = (ForElementType<int>)&param_2->Max;
  if (param_2->IsValid == '\0') {
    FVar7 = FVar10;
    param_2 = (TBox<double> *)FVar10;
  }
  if ((0 < local_4098.ArrayNum) &&
     (FVar10 = (ForElementType<int>)&local_4098,
     local_4098.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0)) {
    FVar10 = local_4098.AllocatorInstance.SecondaryData;
  }
  rcRasterizeTriangles
            ((rcContext *)0x0,pdVar12,local_40fc,piVar13,(uchar *)local_40f8._padding_,iVar6,
             VoxelCacheContext.RasterizeHF,local_4100,uVar2,(int *)FVar10,(double *)param_2,
             (double *)FVar7);
  iVar5 = rcCountSpans((rcContext *)0x0,VoxelCacheContext.RasterizeHF);
  if (0 < iVar5) {
    iVar6 = UE::Core::Private::
            ReallocGrow<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                      (0x10,4,iVar5,(ForAnyElementType *)param_4,(int *)&param_4->field_0x10,
                       (int *)&param_4->field_0x14);
    memset((void *)((longlong)iVar6 * 0x10 + *(longlong *)param_4),0,(longlong)iVar5 << 4);
    rcCacheSpans((rcContext *)0x0,VoxelCacheContext.RasterizeHF,*(rcSpanCache **)param_4);
  }
  if (local_4098.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_4098.AllocatorInstance.SecondaryData);
  }
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType(&local_40f8);
  return;
}

// PrepareVoxelCache @ 146e69240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::PrepareVoxelCache
          (FRecastTileGenerator *this,TNavStatArray<unsigned_char> *param_1,
          FCompositeNavModifier *param_2,TNavStatArray<rcSpanCache> *param_3)

{
  undefined1 auStackY_78 [32];
  TVector<double>_u_0 local_48;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined4 local_17;
  undefined2 local_13;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_18 = 0;
  local_17 = 0;
  local_13 = 0;
  local_11 = 0;
  local_48._s_0.X = 0.0;
  local_48._s_0.Y = 0.0;
  local_48._s_0.Z = 0.0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  PrepareVoxelCache(this,param_1,(TBox<double> *)&local_48._s_0,param_2,param_3);
  return;
}

// RasterizeGeometry @ 146e6ab40

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::RasterizeGeometry
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,TBox<double> *param_4,
          TTransform<double> *param_5,rcRasterizationFlags param_6,
          FTileRasterizationContext *param_7)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometry(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,UE::Math::TTransform<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometry>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FStatMessage local_48;
  FName local_38;
  
  FVar10.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_Navigation_RasterizeGeometry ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometry(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,UE::Math::TTransform<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometry>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_Navigation_RasterizeGeometry");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RasterizeGeometry,*pFVar5,
                   L"STAT_Navigation_RasterizeGeometry","STATGROUP_Quick","STATCAT_Advanced",
                   L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_STAT_Navigation_RasterizeGeometry;
  if (StatPtr_STAT_Navigation_RasterizeGeometry ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometry(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,UE::Math::TTransform<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometry>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_48,"STAT_Navigation_RasterizeGeometry");
    FVar6 = (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometry(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,UE::Math::TTransform<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometry>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RasterizeGeometry,
                         *pFVar5,L"STAT_Navigation_RasterizeGeometry","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xbe9);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      local_38 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = local_38.ComparisonIndex.Value;
      goto LAB_146e6acd6;
    }
  }
  bVar3 = false;
  FVar9 = local_38;
LAB_146e6acd6:
  RasterizeGeometryTransformCoordsAndFlipIndices(this,param_2,param_3,param_4,param_5);
  if (this->bRasterizeGeometryUseFlippedIndices != 0) {
    param_3 = &this->RasterizeGeometryFlippedIndices;
  }
  RasterizeGeometryRecast
            (this,param_1,&this->RasterizeGeometryWorldRecastCoords,param_3,
             &this->RasterizeGeometryWorldRecastCoordsBounds,param_6,param_7);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// RasterizeGeometry @ 146e6aee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::RasterizeGeometry
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,TTransform<double> *param_4,
          rcRasterizationFlags param_5,FTileRasterizationContext *param_6)

{
  undefined1 auStackY_88 [32];
  TVector<double>_u_0 local_48;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined4 local_17;
  undefined2 local_13;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_88;
  local_48._s_0.X = 0.0;
  local_48._s_0.Y = 0.0;
  local_18 = 0;
  local_48._s_0.Z = 0.0;
  uStack_30 = 0;
  local_17 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_13 = 0;
  local_11 = 0;
  RasterizeGeometry(this,param_1,param_2,param_3,(TBox<double> *)&local_48._s_0,param_4,param_5,
                    param_6);
  return;
}

// RasterizeGeometryRecast @ 146e6af80

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::RasterizeGeometryRecast
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,TBox<double> *param_4,
          rcRasterizationFlags param_5,FTileRasterizationContext *param_6)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FNavMeshBuildContext *pFVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometryRecast(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometryRecast>
  FVar17;
  FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometryRecast(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_3_::FStat_STAT_Navigation_MarkWalkableTriangles>
  FVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometryRecast(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_4_::FStat_STAT_Navigation_RasterizeGeomRecastRasterizeTriangles>
  FVar21;
  ForElementType<int> FVar22;
  TBox<double> *pTVar23;
  FColor_u_0 FVar24;
  FNameEntryId FVar25;
  FName FVar26;
  FName FVar27;
  TVector<double> *pTVar28;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FNavMeshBuildContext *local_res10;
  LARGE_INTEGER local_res18;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res20;
  LARGE_INTEGER local_98;
  FStatMessage local_90;
  int local_80;
  FStatMessage local_78;
  FName local_68;
  FName local_58;
  longlong local_50;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res10 = param_1;
  local_res18 = (LARGE_INTEGER)param_2;
  local_res20 = param_3;
  local_50 = lVar3;
  if (*(int *)(lVar3 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_Navigation_RasterizeGeometryRecast ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometryRecast(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometryRecast>
           )0x0) {
        pFVar16 = ::FName::FName((FName *)&local_res8._s_0,"STAT_Navigation_RasterizeGeometryRecast"
                                );
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RasterizeGeometryRecast,
                   *pFVar16,L"STAT_Navigation_RasterizeGeometryRecast","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar17 = StatPtr_STAT_Navigation_RasterizeGeometryRecast;
  if (StatPtr_STAT_Navigation_RasterizeGeometryRecast ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometryRecast(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometryRecast>
       )0x0) {
    pFVar16 = ::FName::FName(&local_58,"STAT_Navigation_RasterizeGeometryRecast");
    FVar17 = (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometryRecast(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometryRecast>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Navigation_RasterizeGeometryRecast,*pFVar16,
                          L"STAT_Navigation_RasterizeGeometryRecast","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  bVar6 = false;
  bVar8 = false;
  FVar27 = *(FName *)FVar17;
  FVar24.Bits = (uint)FVar27.ComparisonIndex.Value;
  uVar14 = FVar27.Number;
  if ((FVar24.Bits == 0) && (uVar14 == 0)) {
LAB_146e6b0fe:
    bVar7 = false;
    FVar27 = local_68;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar24.Bits;
        uStackX_c = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xb3c);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e6b0fe;
    local_res8.Bits = FVar24.Bits;
    uStackX_c = uVar14;
    local_68 = FVar27;
    FThreadStats::AddMessage(FVar27,CycleScopeStart);
    bVar7 = true;
  }
  iVar15 = param_3->ArrayNum / 3;
  iVar12 = param_2->ArrayNum;
  local_res8.Bits =
       (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU) >> 0x1f) +
       iVar12 / 3 + (iVar12 >> 0x1f);
  local_58 = (FName)&(this->RasterizeGeomRecastTriAreas).field_0x14;
  local_80 = iVar15;
  iVar12 = UE::Core::Private::ReallocGrow<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                     (1,1,iVar15,(ForAnyElementType *)&this->RasterizeGeomRecastTriAreas,
                      (int *)&(this->RasterizeGeomRecastTriAreas).field_0x10,(int *)local_58);
  memset((void *)((longlong)iVar12 + *(longlong *)&this->RasterizeGeomRecastTriAreas),0,
         (longlong)iVar15);
  if (*(int *)(lVar3 + 0x9d4c) < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      if (StatPtr_STAT_Navigation_MarkWalkableTriangles ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometryRecast(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_3_::FStat_STAT_Navigation_MarkWalkableTriangles>
           )0x0) {
        pFVar16 = ::FName::FName((FName *)&local_98.s,"STAT_Navigation_MarkWalkableTriangles");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_MarkWalkableTriangles,
                   *pFVar16,L"STAT_Navigation_MarkWalkableTriangles","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS1);
      }
      else {
        _Init_thread_footer(&::_TSS1);
      }
    }
  }
  FVar18 = StatPtr_STAT_Navigation_MarkWalkableTriangles;
  if (StatPtr_STAT_Navigation_MarkWalkableTriangles ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometryRecast(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_3_::FStat_STAT_Navigation_MarkWalkableTriangles>
       )0x0) {
    pFVar16 = ::FName::FName((FName *)&local_78,"STAT_Navigation_MarkWalkableTriangles");
    FVar18 = (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometryRecast(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_3_::FStat_STAT_Navigation_MarkWalkableTriangles>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Navigation_MarkWalkableTriangles,*pFVar16,
                          L"STAT_Navigation_MarkWalkableTriangles","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar18;
  local_90.StatData.Pad = (uchar  [8])0x0;
  bVar4 = false;
  bVar11 = false;
  uVar14 = 0;
  FVar25 = FVar26.ComparisonIndex.Value;
  uVar13 = FVar26.Number;
  if ((FVar25.Value == 0) && (uVar13 == 0)) {
LAB_146e6b295:
    bVar5 = false;
    FVar26 = (FName)local_90.StatData;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_98.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_98.s,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar4 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.s.LowPart = FVar25.Value;
        local_98.s.HighPart = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_98.s,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xb44);
        bVar4 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e6b295;
    local_98.s.LowPart = FVar25.Value;
    local_98.s.HighPart = uVar13;
    local_90.StatData.Pad = (uchar  [8])FVar26;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar4 = false;
    bVar5 = true;
    uVar14 = local_90.StatData.Pad._0_4_;
  }
  rcMarkWalkableTriangles
            ((rcContext *)local_res10,(double)(this->TileConfig)._padding_,*(double **)local_res18,
             local_res8.Bits,(int *)(local_res20->AllocatorInstance).Data,local_80,
             *(uchar **)&this->RasterizeGeomRecastTriAreas);
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar26 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar19 == (FThreadStats *)0x0) {
      pFVar20 = FThreadStatsPool::Get();
      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
    }
    if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
      local_78.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
      local_78.NameAndInfo.Index.Value = uVar14;
      QueryPerformanceCounter(&local_98);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_98.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_98.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_98.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_98.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar19,&local_78);
      piVar1 = &pFVar19->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar19,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar19,false,false);
      }
    }
  }
  if (*(int *)(local_50 + 0x9d4c) < ::_TSS2) {
    _Init_thread_header(&::_TSS2);
    if (::_TSS2 == -1) {
      if (StatPtr_STAT_Navigation_RasterizeGeomRecastRasterizeTriangles ==
          (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometryRecast(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_4_::FStat_STAT_Navigation_RasterizeGeomRecastRasterizeTriangles>
           )0x0) {
        pFVar16 = ::FName::FName((FName *)&local_78,
                                 "STAT_Navigation_RasterizeGeomRecastRasterizeTriangles");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_Navigation_RasterizeGeomRecastRasterizeTriangles,*pFVar16,
                   L"STAT_Navigation_RasterizeGeomRecastRasterizeTriangles","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS2);
    }
  }
  FVar21 = StatPtr_STAT_Navigation_RasterizeGeomRecastRasterizeTriangles;
  if (StatPtr_STAT_Navigation_RasterizeGeomRecastRasterizeTriangles ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometryRecast(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_4_::FStat_STAT_Navigation_RasterizeGeomRecastRasterizeTriangles>
       )0x0) {
    pFVar16 = ::FName::FName((FName *)&local_78,
                             "STAT_Navigation_RasterizeGeomRecastRasterizeTriangles");
    FVar21 = (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometryRecast(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_4_::FStat_STAT_Navigation_RasterizeGeomRecastRasterizeTriangles>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Navigation_RasterizeGeomRecastRasterizeTriangles,*pFVar16,
                          L"STAT_Navigation_RasterizeGeomRecastRasterizeTriangles","STATGROUP_Quick"
                          ,"STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar21;
  bVar11 = false;
  bVar4 = false;
  local_90.StatData.Pad = (uchar  [8])0x0;
  uVar14 = 0;
  FVar25 = FVar26.ComparisonIndex.Value;
  uVar13 = FVar26.Number;
  if ((FVar25.Value == 0) && (uVar13 == 0)) {
LAB_146e6b4d3:
    bVar5 = false;
    FVar26 = (FName)local_90.StatData;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_98.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_98.s,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar11 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.s.LowPart = FVar25.Value;
        local_98.s.HighPart = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_98.s,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xb4c);
        bVar11 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e6b4d3;
    local_98.s.LowPart = FVar25.Value;
    local_98.s.HighPart = uVar13;
    local_90.StatData.Pad = (uchar  [8])FVar26;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar5 = true;
    uVar14 = local_90.StatData.Pad._0_4_;
  }
  iVar12 = local_80;
  pTVar28 = &param_4->Max;
  pTVar23 = param_4;
  if (param_4->IsValid == '\0') {
    pTVar23 = (TBox<double> *)0x0;
    pTVar28 = (TVector<double> *)0x0;
  }
  if ((param_6->RasterizationMasks).ArrayNum < 1) {
    FVar22 = (ForElementType<int>)0x0;
  }
  else {
    FVar22 = (param_6->RasterizationMasks).AllocatorInstance.SecondaryData;
    if (FVar22 == (ForElementType<int>)0x0) {
      FVar22 = (ForElementType<int>)&param_6->RasterizationMasks;
    }
  }
  rcRasterizeTriangles
            ((rcContext *)local_res10,*(double **)local_res18,local_res8.Bits,
             (int *)(local_res20->AllocatorInstance).Data,
             *(uchar **)&this->RasterizeGeomRecastTriAreas,local_80,this->SolidHF,
             *(int *)((longlong)&(this->TileConfig)._padding_ + 4),param_5,(int *)FVar22,
             (double *)pTVar23,(double *)pTVar28);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar26 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar19 == (FThreadStats *)0x0) {
      pFVar20 = FThreadStatsPool::Get();
      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
    }
    if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
      local_78.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
      local_78.NameAndInfo.Index.Value = uVar14;
      QueryPerformanceCounter((LARGE_INTEGER *)&param_4);
      local_78.StatData.Pad = (uchar  [8])((ulonglong)param_4 & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar19,&local_78);
      piVar1 = &pFVar19->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar19,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar19,false,false);
      }
    }
  }
  pFVar9 = local_res10;
  puVar2 = &local_res10->InternalDebugData->TriangleCount;
  *puVar2 = *puVar2 + iVar12;
  if ((this->TileDebugSettings).bEnabled == 0) {
LAB_146e6b672:
    if ((this->TileX != GNavmeshDebugTileX) || (this->TileY != GNavmeshDebugTileY))
    goto LAB_146e6b762;
  }
  else {
    bVar11 = FRecastNavMeshTileGenerationDebug::IsWithinTileCoordinates
                       (&this->TileDebugSettings,this->TileX,this->TileY);
    if (!bVar11) goto LAB_146e6b672;
  }
  if ((this->TileDebugSettings).bCollisionGeometry != 0) {
    local_90.StatData.Pad = (uchar  [8])0x0;
    local_90.NameAndInfo.Index.Value = 0;
    local_90.NameAndInfo.Number = 0;
    iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,iVar12 * 3,(ForAnyElementType *)&local_90,(int *)&local_90.NameAndInfo,
                        &local_90.NameAndInfo.Number);
    memset((void *)((longlong)local_90.StatData.Pad + (longlong)iVar15 * 8),0,
           (longlong)(iVar12 * 3) << 3);
    pTVar10 = local_res20;
    rcCalcTriNormals(*(double **)local_res18,local_res8.Bits,
                     (int *)(local_res20->AllocatorInstance).Data,iVar12,
                     (double *)local_90.StatData.Pad);
    duDebugDrawTriMesh((duDebugDraw *)pFVar9->InternalDebugData,*(double **)local_res18,
                       local_res8.Bits,(int *)(pTVar10->AllocatorInstance).Data,
                       (double *)local_90.StatData.Pad,iVar12,
                       *(uchar **)&this->RasterizeGeomRecastTriAreas,__real_3ff0000000000000);
    if ((FName)local_90.StatData.Pad != (FName)0x0) {
      FMemory::Free((void *)local_90.StatData.Pad);
    }
  }
LAB_146e6b762:
  puVar2 = &pFVar9->InternalDebugData->TriangleCount;
  *puVar2 = *puVar2 + iVar12;
  *(undefined4 *)&(this->RasterizeGeomRecastTriAreas).field_0x10 = 0;
  if (*(int *)&(this->RasterizeGeomRecastTriAreas).field_0x14 < 0) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)&this->RasterizeGeomRecastTriAreas,0,(int *)local_58);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar27 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar19 == (FThreadStats *)0x0) {
      pFVar20 = FThreadStatsPool::Get();
      pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
    }
    if (pFVar19->bWaitForExplicitFlush < pFVar19->ScopeCount) {
      local_90.NameAndInfo =
           (FStatNameAndInfo)
           (CONCAT44(FVar27.Number,local_68.ComparisonIndex.Value.Value) & 0xffff6fffffffffff |
           0x600000000000);
      QueryPerformanceCounter(&local_res18);
      local_90.StatData.Pad = (uchar  [8])(local_res18.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar19,&local_90);
      piVar1 = &pFVar19->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar19,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar19,false,false);
      }
    }
  }
  return;
}

// RasterizeGeometryRecast @ 146e6ba70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::RasterizeGeometryRecast
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,rcRasterizationFlags param_4,
          FTileRasterizationContext *param_5)

{
  undefined1 auStackY_88 [32];
  TVector<double>_u_0 local_48;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined4 local_17;
  undefined2 local_13;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_88;
  local_48._s_0.X = 0.0;
  local_48._s_0.Y = 0.0;
  local_18 = 0;
  local_48._s_0.Z = 0.0;
  uStack_30 = 0;
  local_17 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_13 = 0;
  local_11 = 0;
  RasterizeGeometryRecast
            (this,param_1,param_2,param_3,(TBox<double> *)&local_48._s_0,param_4,param_5);
  return;
}

// RasterizeGeometryRecastTimeSliced @ 146e6bb00

/* WARNING: Removing unreachable block (ram,0x000146e6be72) */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ETimeSliceWorkResult __thiscall
FRecastTileGenerator::RasterizeGeometryRecastTimeSliced
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,TBox<double> *param_4,
          rcRasterizationFlags param_5,FTileRasterizationContext *param_6)

{
  int *piVar1;
  uint *puVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ETimeSliceWorkResult EVar13;
  bool bVar14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_protected:_enum_ETimeSliceWorkResult___cdecl_FRecastTileGenerator::RasterizeGeometryRecastTimeSliced(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometryRecast>
  FVar17;
  FThreadSafeStaticStat<_protected:_enum_ETimeSliceWorkResult___cdecl_FRecastTileGenerator::RasterizeGeometryRecastTimeSliced(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_12_::FStat_STAT_Navigation_MarkWalkableTriangles>
  FVar18;
  FThreadSafeStaticStat<_protected:_enum_ETimeSliceWorkResult___cdecl_FRecastTileGenerator::RasterizeGeometryRecastTimeSliced(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_16_::FStat_STAT_Navigation_RasterizeGeomRecastRasterizeTriangles>
  FVar19;
  FThreadStats *pFVar20;
  FThreadStatsPool *pFVar21;
  ForElementType<int> FVar22;
  FNameEntryId FVar23;
  FNameEntryId FVar24;
  FName FVar25;
  FName FVar26;
  TVector<double> *pTVar27;
  ulonglong uVar28;
  FColor_u_0 local_128;
  undefined1 local_124 [4];
  FName local_120;
  FColor_u_0 local_118 [2];
  FName local_110;
  FName local_108;
  FColor_u_0 local_100 [2];
  FName local_f8;
  FName local_e8;
  FName local_d8;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  longlong local_b8;
  LARGE_INTEGER local_b0;
  FStatMessage local_a8;
  FStatMessage local_98;
  FStatMessage local_88;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  
  uVar28 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar28 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_Navigation_RasterizeGeometryRecast =
         (FThreadSafeStaticStat<_protected:_enum_ETimeSliceWorkResult___cdecl_FRecastTileGenerator::RasterizeGeometryRecastTimeSliced(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometryRecast>
          )0x0;
    pFVar16 = ::FName::FName(&local_78,"STAT_Navigation_RasterizeGeometryRecast");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RasterizeGeometryRecast,
               *pFVar16,L"STAT_Navigation_RasterizeGeometryRecast","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar17 = StatPtr_STAT_Navigation_RasterizeGeometryRecast;
  if (StatPtr_STAT_Navigation_RasterizeGeometryRecast ==
      (FThreadSafeStaticStat<_protected:_enum_ETimeSliceWorkResult___cdecl_FRecastTileGenerator::RasterizeGeometryRecastTimeSliced(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometryRecast>
       )0x0) {
    pFVar16 = ::FName::FName(&local_70,"STAT_Navigation_RasterizeGeometryRecast");
    FVar17 = (FThreadSafeStaticStat<_protected:_enum_ETimeSliceWorkResult___cdecl_FRecastTileGenerator::RasterizeGeometryRecastTimeSliced(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometryRecast>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Navigation_RasterizeGeometryRecast,*pFVar16,
                          L"STAT_Navigation_RasterizeGeometryRecast","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar10 = false;
  bVar9 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FVar26 = *(FName *)FVar17;
  bVar12 = false;
  bVar11 = false;
  if ((FVar26.ComparisonIndex.Value.Value == 0) && (FVar26.Number == 0)) {
LAB_146e6bd28:
    bVar10 = bVar12;
    bVar9 = bVar11;
    bVar11 = false;
    FVar26 = local_d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_128.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar10 = false;
      bVar9 = true;
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_120.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        local_120.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_120,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xaf3);
        bVar10 = true;
        bVar9 = true;
        bVar12 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e6bd28;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar11 = true;
  }
  if ((this->TimeSliceManager == (FNavRegenTimeSliceManager *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("TimeSliceManager",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                          ,0xaf5,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    EVar13 = (*pcVar6)();
    return EVar13;
  }
  iVar4 = param_3->ArrayNum;
  local_120.ComparisonIndex.Value =
       (int)(((longlong)iVar4 / 3 + ((longlong)iVar4 >> 0x3f) & 0xffffffffU) >> 0x1f) +
       iVar4 / 3 + (iVar4 >> 0x1f);
  iVar4 = param_2->ArrayNum;
  local_128.Bits =
       (int)(((longlong)iVar4 / 3 + ((longlong)iVar4 >> 0x3f) & 0xffffffffU) >> 0x1f) +
       iVar4 / 3 + (iVar4 >> 0x1f);
  if (this->RasterizeGeomRecastState == MarkWalkableTriangles) {
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar28 * 8);
    if ((*(int *)(lVar5 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      StatPtr_STAT_Navigation_MarkWalkableTriangles =
           (FThreadSafeStaticStat<_protected:_enum_ETimeSliceWorkResult___cdecl_FRecastTileGenerator::RasterizeGeometryRecastTimeSliced(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_12_::FStat_STAT_Navigation_MarkWalkableTriangles>
            )0x0;
      pFVar16 = ::FName::FName(&local_68,"STAT_Navigation_MarkWalkableTriangles");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_MarkWalkableTriangles,
                 *pFVar16,L"STAT_Navigation_MarkWalkableTriangles","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS1);
    }
    FVar23.Value = 0;
    FVar18 = StatPtr_STAT_Navigation_MarkWalkableTriangles;
    if (StatPtr_STAT_Navigation_MarkWalkableTriangles ==
        (FThreadSafeStaticStat<_protected:_enum_ETimeSliceWorkResult___cdecl_FRecastTileGenerator::RasterizeGeometryRecastTimeSliced(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_12_::FStat_STAT_Navigation_MarkWalkableTriangles>
         )0x0) {
      pFVar16 = ::FName::FName(&local_60,"STAT_Navigation_MarkWalkableTriangles");
      FVar18 = (FThreadSafeStaticStat<_protected:_enum_ETimeSliceWorkResult___cdecl_FRecastTileGenerator::RasterizeGeometryRecastTimeSliced(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_12_::FStat_STAT_Navigation_MarkWalkableTriangles>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_Navigation_MarkWalkableTriangles,*pFVar16,
                            L"STAT_Navigation_MarkWalkableTriangles","STATGROUP_Quick",
                            "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_f8.ComparisonIndex.Value = 0;
    local_f8.Number = 0;
    FVar25 = *(FName *)FVar18;
    bVar12 = false;
    bVar8 = false;
    FVar24 = FVar25.ComparisonIndex.Value;
    uVar15 = FVar25.Number;
    if ((FVar24.Value == 0) && (uVar15 == 0)) {
LAB_146e6bfb2:
      bVar7 = false;
      FVar25 = local_f8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_100[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_100[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
        bVar12 = false;
        bVar8 = true;
        if (-1 < CpuChannel->Enabled) {
          local_110.ComparisonIndex.Value = FVar24.Value;
          local_110.Number = uVar15;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_110,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                     ,0xafe);
          bVar12 = true;
          bVar8 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_146e6bfb2;
      local_110.ComparisonIndex.Value = FVar24.Value;
      local_110.Number = uVar15;
      local_f8 = FVar25;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar7 = true;
      FVar23.Value = local_f8.ComparisonIndex.Value;
    }
    TArray<unsigned_char,NavMeshMemory::FNavigationMemoryStat>::AddZeroed
              ((TArray<unsigned_char,NavMeshMemory::FNavigationMemoryStat> *)
               &this->RasterizeGeomRecastTriAreas,local_120.ComparisonIndex.Value);
    rcMarkWalkableTriangles
              ((rcContext *)param_1,(double)(this->TileConfig)._padding_,
               (double *)(param_2->AllocatorInstance).Data,local_128.Bits,
               (int *)(param_3->AllocatorInstance).Data,local_120.ComparisonIndex.Value,
               *(uchar **)&this->RasterizeGeomRecastTriAreas);
    this->RasterizeGeomRecastState = RasterizeTriangles;
    if ((*(int *)(lVar5 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      ::FName::FName(&MarkWalkableTriangles,L"MarkWalkableTriangles");
      _Init_thread_footer(&::_TSS2);
    }
    (this->TimeSliceManager->TimeSlicer).DebugSectionName = MarkWalkableTriangles;
    bVar14 = FNavRegenTimeSlicer::TestTimeSliceFinished(&this->TimeSliceManager->TimeSlicer);
    if (bVar14) {
      if (bVar8) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar7) && (FVar25 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar20 == (FThreadStats *)0x0) {
          pFVar21 = FThreadStatsPool::Get();
          pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
        }
        if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
          local_a8.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
          local_a8.NameAndInfo.Index.Value = FVar23.Value;
          QueryPerformanceCounter(&local_c8);
          local_a8.StatData.Pad[4] = '\0';
          local_a8.StatData.Pad[5] = '\0';
          local_a8.StatData.Pad[6] = '\0';
          local_a8.StatData.Pad[7] = '\0';
          local_a8.StatData.Pad[0] = local_c8.s.LowPart._0_1_;
          local_a8.StatData.Pad[1] = local_c8.s.LowPart._1_1_;
          local_a8.StatData.Pad[2] = local_c8.s.LowPart._2_1_;
          local_a8.StatData.Pad[3] = local_c8.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar20,&local_a8);
          piVar1 = &pFVar20->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar20,false,false);
            EVar13 = CallAgainNextTimeSlice;
            goto LAB_146e6c64e;
          }
          if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar20,false,false);
          }
        }
      }
      EVar13 = CallAgainNextTimeSlice;
      goto LAB_146e6c64e;
    }
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar7) && (FVar25 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar20 == (FThreadStats *)0x0) {
        pFVar21 = FThreadStatsPool::Get();
        pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
      }
      if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
        local_98.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
        local_98.NameAndInfo.Index.Value = FVar23.Value;
        QueryPerformanceCounter(&local_c0);
        local_98.StatData.Pad[4] = '\0';
        local_98.StatData.Pad[5] = '\0';
        local_98.StatData.Pad[6] = '\0';
        local_98.StatData.Pad[7] = '\0';
        local_98.StatData.Pad[0] = local_c0.s.LowPart._0_1_;
        local_98.StatData.Pad[1] = local_c0.s.LowPart._1_1_;
        local_98.StatData.Pad[2] = local_c0.s.LowPart._2_1_;
        local_98.StatData.Pad[3] = local_c0.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar20,&local_98);
        piVar1 = &pFVar20->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar20,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar20,false,false);
        }
      }
    }
  }
  else if (this->RasterizeGeomRecastState != RasterizeTriangles) {
    `FRecastTileGenerator::RasterizeGeometryRecastTimeSliced'::__l17::<lambda_1>::operator()
              (local_124);
    EVar13 = Failed;
    goto LAB_146e6c64e;
  }
  ComputeRasterizationMasks(this,param_1,param_6);
  local_b8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(local_b8 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    StatPtr_STAT_Navigation_RasterizeGeomRecastRasterizeTriangles =
         (FThreadSafeStaticStat<_protected:_enum_ETimeSliceWorkResult___cdecl_FRecastTileGenerator::RasterizeGeometryRecastTimeSliced(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_16_::FStat_STAT_Navigation_RasterizeGeomRecastRasterizeTriangles>
          )0x0;
    pFVar16 = ::FName::FName(&local_58,"STAT_Navigation_RasterizeGeomRecastRasterizeTriangles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_Navigation_RasterizeGeomRecastRasterizeTriangles,*pFVar16,
               L"STAT_Navigation_RasterizeGeomRecastRasterizeTriangles","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS3);
  }
  FVar23.Value = 0;
  FVar19 = StatPtr_STAT_Navigation_RasterizeGeomRecastRasterizeTriangles;
  if (StatPtr_STAT_Navigation_RasterizeGeomRecastRasterizeTriangles ==
      (FThreadSafeStaticStat<_protected:_enum_ETimeSliceWorkResult___cdecl_FRecastTileGenerator::RasterizeGeometryRecastTimeSliced(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_16_::FStat_STAT_Navigation_RasterizeGeomRecastRasterizeTriangles>
       )0x0) {
    pFVar16 = ::FName::FName(local_50,"STAT_Navigation_RasterizeGeomRecastRasterizeTriangles");
    FVar19 = (FThreadSafeStaticStat<_protected:_enum_ETimeSliceWorkResult___cdecl_FRecastTileGenerator::RasterizeGeometryRecastTimeSliced(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_16_::FStat_STAT_Navigation_RasterizeGeomRecastRasterizeTriangles>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Navigation_RasterizeGeomRecastRasterizeTriangles,*pFVar16,
                          L"STAT_Navigation_RasterizeGeomRecastRasterizeTriangles","STATGROUP_Quick"
                          ,"STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  FVar25 = *(FName *)FVar19;
  bVar12 = false;
  bVar8 = false;
  FVar24 = FVar25.ComparisonIndex.Value;
  uVar15 = FVar25.Number;
  if ((FVar24.Value == 0) && (uVar15 == 0)) {
LAB_146e6c428:
    bVar7 = false;
    FVar25 = local_e8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_118[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_118[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar12 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = FVar24.Value;
        local_108.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xb13);
        bVar12 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e6c428;
    local_108.ComparisonIndex.Value = FVar24.Value;
    local_108.Number = uVar15;
    local_e8 = FVar25;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    bVar7 = true;
    FVar23.Value = local_e8.ComparisonIndex.Value;
  }
  FVar24.Value = local_120.ComparisonIndex.Value;
  pTVar27 = &param_4->Max;
  if (param_4->IsValid == '\0') {
    param_4 = (TBox<double> *)0x0;
    pTVar27 = (TVector<double> *)0x0;
  }
  if ((param_6->RasterizationMasks).ArrayNum < 1) {
    FVar22 = (ForElementType<int>)0x0;
  }
  else {
    FVar22 = (param_6->RasterizationMasks).AllocatorInstance.SecondaryData;
    if (FVar22 == (ForElementType<int>)0x0) {
      FVar22 = (ForElementType<int>)&param_6->RasterizationMasks;
    }
  }
  rcRasterizeTriangles
            ((rcContext *)param_1,(double *)(param_2->AllocatorInstance).Data,local_128.Bits,
             (int *)(param_3->AllocatorInstance).Data,*(uchar **)&this->RasterizeGeomRecastTriAreas,
             local_120.ComparisonIndex.Value,this->SolidHF,
             *(int *)((longlong)&(this->TileConfig)._padding_ + 4),param_5,(int *)FVar22,
             (double *)param_4,(double *)pTVar27);
  puVar3 = &(this->RasterizeGeomRecastTriAreas).field_0x14;
  puVar2 = &param_1->InternalDebugData->TriangleCount;
  *puVar2 = *puVar2 + FVar24.Value;
  *(undefined4 *)&(this->RasterizeGeomRecastTriAreas).field_0x10 = 0;
  if (*(int *)puVar3 < 0) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)&this->RasterizeGeomRecastTriAreas,0,(int *)puVar3);
  }
  this->RasterizeGeomRecastState = MarkWalkableTriangles;
  if ((*(int *)(local_b8 + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    ::FName::FName(&::RasterizeTriangles,L"RasterizeTriangles");
    _Init_thread_footer(&::_TSS4);
  }
  (this->TimeSliceManager->TimeSlicer).DebugSectionName = ::RasterizeTriangles;
  FNavRegenTimeSlicer::TestTimeSliceFinished(&this->TimeSliceManager->TimeSlicer);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar25 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
      local_88.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
      local_88.NameAndInfo.Index.Value = FVar23.Value;
      QueryPerformanceCounter(&local_b0);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_b0.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_b0.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_b0.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_b0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar20,&local_88);
      piVar1 = &pFVar20->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar20,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar20,false,false);
      }
    }
  }
  EVar13 = Succeeded;
LAB_146e6c64e:
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar26,CycleScopeEnd);
  }
  return EVar13;
}

// RasterizeGeometryRecastTimeSliced @ 146e6c6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

ETimeSliceWorkResult __thiscall
FRecastTileGenerator::RasterizeGeometryRecastTimeSliced
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,rcRasterizationFlags param_4,
          FTileRasterizationContext *param_5)

{
  ETimeSliceWorkResult EVar1;
  undefined1 auStackY_88 [32];
  TVector<double>_u_0 local_48;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined4 local_17;
  undefined2 local_13;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_88;
  local_48._s_0.X = 0.0;
  local_48._s_0.Y = 0.0;
  local_18 = 0;
  local_48._s_0.Z = 0.0;
  uStack_30 = 0;
  local_17 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_13 = 0;
  local_11 = 0;
  EVar1 = RasterizeGeometryRecastTimeSliced
                    (this,param_1,param_2,param_3,(TBox<double> *)&local_48._s_0,param_4,param_5);
  return EVar1;
}

// RasterizeGeometryTimeSliced @ 146e6c730

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ETimeSliceWorkResult __thiscall
FRecastTileGenerator::RasterizeGeometryTimeSliced
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,TBox<double> *param_4,
          TTransform<double> *param_5,rcRasterizationFlags param_6,
          FTileRasterizationContext *param_7)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  bool bVar7;
  ETimeSliceWorkResult EVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_protected:_enum_ETimeSliceWorkResult___cdecl_FRecastTileGenerator::RasterizeGeometryTimeSliced(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,UE::Math::TTransform<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometry>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar12;
  FName FVar13;
  ulonglong uVar14;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_78 [2];
  FName local_70;
  LARGE_INTEGER local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  uVar14 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_Navigation_RasterizeGeometry =
         (FThreadSafeStaticStat<_protected:_enum_ETimeSliceWorkResult___cdecl_FRecastTileGenerator::RasterizeGeometryTimeSliced(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,UE::Math::TTransform<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometry>
          )0x0;
    pFVar10 = ::FName::FName(&local_60,"STAT_Navigation_RasterizeGeometry");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RasterizeGeometry,*pFVar10,
               L"STAT_Navigation_RasterizeGeometry","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_Navigation_RasterizeGeometry;
  if (StatPtr_STAT_Navigation_RasterizeGeometry ==
      (FThreadSafeStaticStat<_protected:_enum_ETimeSliceWorkResult___cdecl_FRecastTileGenerator::RasterizeGeometryTimeSliced(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,UE::Math::TTransform<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometry>
       )0x0) {
    pFVar10 = ::FName::FName(&local_58,"STAT_Navigation_RasterizeGeometry");
    FVar11 = (FThreadSafeStaticStat<_protected:_enum_ETimeSliceWorkResult___cdecl_FRecastTileGenerator::RasterizeGeometryTimeSliced(FNavMeshBuildContext_&,TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,UE::Math::TTransform<double>_const_&,rcRasterizationFlags,FTileRasterizationContext_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometry>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RasterizeGeometry,
                          *pFVar10,L"STAT_Navigation_RasterizeGeometry","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  bVar3 = false;
  bVar5 = false;
  FVar13 = *(FName *)FVar11;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar12.Value == 0) && (uVar9 == 0)) {
LAB_146e6c945:
    bVar4 = false;
    FVar13 = local_50;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_78[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_78[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_70.ComparisonIndex.Value = FVar12.Value;
        local_70.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_70,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,3000);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e6c945;
    local_res8 = FVar12.Value;
    uStackX_c = uVar9;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar4 = true;
  }
  if ((this->TimeSliceManager == (FNavRegenTimeSliceManager *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TimeSliceManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                         ,0xbba,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    EVar8 = (*pcVar2)();
    return EVar8;
  }
  if (this->RasterizeGeomState == RasterizeGeometryTransformCoords) {
    RasterizeGeometryTransformCoordsAndFlipIndices(this,param_2,param_3,param_4,param_5);
    pvVar6 = ThreadLocalStoragePointer;
    this->RasterizeGeomState = RasterizeGeometryRecast;
    if ((*(int *)(*(longlong *)((longlong)pvVar6 + uVar14 * 8) + 0x9d4c) < ::_TSS1) &&
       (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&::RasterizeGeometryTransformCoordsAndFlipIndices,
                     L"RasterizeGeometryTransformCoordsAndFlipIndices");
      _Init_thread_footer(&::_TSS1);
    }
    (this->TimeSliceManager->TimeSlicer).DebugSectionName =
         ::RasterizeGeometryTransformCoordsAndFlipIndices;
    bVar7 = FNavRegenTimeSlicer::TestTimeSliceFinished(&this->TimeSliceManager->TimeSlicer);
    if (bVar7) {
      EVar8 = CallAgainNextTimeSlice;
      goto LAB_146e6ca97;
    }
  }
  else if (this->RasterizeGeomState != RasterizeGeometryRecast) {
    `FRecastTileGenerator::RasterizeGeometryTimeSliced'::__l20::<lambda_1>::operator()(&local_res8);
    EVar8 = Failed;
    goto LAB_146e6ca97;
  }
  if (this->bRasterizeGeometryUseFlippedIndices != 0) {
    param_3 = &this->RasterizeGeometryFlippedIndices;
  }
  EVar8 = RasterizeGeometryRecastTimeSliced
                    (this,param_1,&this->RasterizeGeometryWorldRecastCoords,param_3,
                     &this->RasterizeGeometryWorldRecastCoordsBounds,param_6,param_7);
  if (EVar8 != CallAgainNextTimeSlice) {
    this->RasterizeGeomState = RasterizeGeometryTransformCoords;
  }
LAB_146e6ca97:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_40.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_40.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_68);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_68.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_68.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_68.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_40);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return EVar8;
}

// RasterizeGeometryTimeSliced @ 146e6cba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

ETimeSliceWorkResult __thiscall
FRecastTileGenerator::RasterizeGeometryTimeSliced
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,
          TArray<double,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,TTransform<double> *param_4,
          rcRasterizationFlags param_5,FTileRasterizationContext *param_6)

{
  ETimeSliceWorkResult EVar1;
  undefined1 auStackY_88 [32];
  TVector<double>_u_0 local_48;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined4 local_17;
  undefined2 local_13;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_88;
  local_48._s_0.X = 0.0;
  local_48._s_0.Y = 0.0;
  local_18 = 0;
  local_48._s_0.Z = 0.0;
  uStack_30 = 0;
  local_17 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_13 = 0;
  local_11 = 0;
  EVar1 = RasterizeGeometryTimeSliced
                    (this,param_1,param_2,param_3,(TBox<double> *)&local_48._s_0,param_4,param_5,
                     param_6);
  return EVar1;
}

// RasterizeGeometryTransformCoords @ 146e6cc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::RasterizeGeometryTransformCoords
          (FRecastTileGenerator *this,TArray<double,TSizedDefaultAllocator<32>_> *param_1,
          TTransform<double> *param_2)

{
  TArray<double,TSizedDefaultAllocator<32>_> *this_00;
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  double dVar17;
  bool bVar18;
  uint uVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometryTransformCoords(TArray<double,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TTransform<double>_const_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometryTransformCoords>
  FVar21;
  TMatrix<double> *pTVar22;
  TMatrix<double> *pTVar23;
  TVector<double> *pTVar24;
  int iVar25;
  FNameEntryId FVar26;
  FName FVar27;
  uint uVar28;
  longlong lVar29;
  undefined1 auStackY_2e8 [32];
  FColor_u_0 local_288 [2];
  FName local_280;
  uint local_278;
  uint uStack_274;
  FName local_270;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined1 local_230;
  undefined4 uStack_22f;
  undefined2 uStack_22b;
  undefined1 uStack_229;
  FName local_228;
  FName local_220;
  TVector<double> local_218;
  TMatrix<double> local_1f8;
  TMatrix<double> local_178;
  TMatrix<double> local_f8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_Navigation_RasterizeGeometryTransformCoords ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometryTransformCoords(TArray<double,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TTransform<double>_const_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometryTransformCoords>
         )0x0) {
      pFVar20 = ::FName::FName(&local_228,"STAT_Navigation_RasterizeGeometryTransformCoords");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_Navigation_RasterizeGeometryTransformCoords,*pFVar20,
                 L"STAT_Navigation_RasterizeGeometryTransformCoords","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar21 = StatPtr_STAT_Navigation_RasterizeGeometryTransformCoords;
  if (StatPtr_STAT_Navigation_RasterizeGeometryTransformCoords ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometryTransformCoords(TArray<double,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TTransform<double>_const_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometryTransformCoords>
       )0x0) {
    pFVar20 = ::FName::FName(&local_220,"STAT_Navigation_RasterizeGeometryTransformCoords");
    FVar21 = (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometryTransformCoords(TArray<double,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TTransform<double>_const_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometryTransformCoords>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Navigation_RasterizeGeometryTransformCoords,*pFVar20,
                          L"STAT_Navigation_RasterizeGeometryTransformCoords","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar21;
  bVar14 = false;
  bVar16 = false;
  local_270.ComparisonIndex.Value = 0;
  local_270.Number = 0;
  FVar26 = FVar27.ComparisonIndex.Value;
  uVar28 = FVar27.Number;
  if ((FVar26.Value != 0) || (uVar28 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_288[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_288[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar14 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_280.ComparisonIndex.Value = FVar26.Value;
        local_280.Number = uVar28;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_280,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xb9d);
        bVar14 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_278 = FVar26.Value;
      uStack_274 = uVar28;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar15 = true;
      goto LAB_146e6cdd2;
    }
  }
  bVar15 = false;
  FVar27 = local_270;
LAB_146e6cdd2:
  this_00 = &this->RasterizeGeometryWorldRecastCoords;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this_00,param_1->ArrayNum,No);
  local_230 = 0;
  uStack_22f = 0;
  (this->RasterizeGeometryWorldRecastCoordsBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->RasterizeGeometryWorldRecastCoordsBounds).Min.field0_0x0._s_0.Y = 0.0;
  uStack_22b = 0;
  uStack_229 = 0;
  (this->RasterizeGeometryWorldRecastCoordsBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->RasterizeGeometryWorldRecastCoordsBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->RasterizeGeometryWorldRecastCoordsBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->RasterizeGeometryWorldRecastCoordsBounds).Max.field0_0x0._s_0.Z = 0.0;
  local_240 = 0;
  uStack_238 = 0;
  (this->RasterizeGeometryWorldRecastCoordsBounds).IsValid = '\0';
  (this->RasterizeGeometryWorldRecastCoordsBounds).Pad[0] = '\0';
  (this->RasterizeGeometryWorldRecastCoordsBounds).Pad[1] = '\0';
  (this->RasterizeGeometryWorldRecastCoordsBounds).Pad[2] = '\0';
  (this->RasterizeGeometryWorldRecastCoordsBounds).Pad[3] = '\0';
  (this->RasterizeGeometryWorldRecastCoordsBounds).Pad[4] = '\0';
  (this->RasterizeGeometryWorldRecastCoordsBounds).Pad[5] = '\0';
  (this->RasterizeGeometryWorldRecastCoordsBounds).Pad[6] = '\0';
  local_260 = 0;
  uStack_258 = 0;
  local_250 = 0;
  uStack_248 = 0;
  pTVar22 = UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_178);
  pTVar23 = Unreal2RecastMatrix(&local_f8);
  VectorMatrixMultiply(&local_1f8,pTVar22,pTVar23);
  dVar17 = __real_3ff0000000000000;
  iVar25 = param_1->ArrayNum;
  uVar28 = 0;
  if (0 < iVar25) {
    lVar29 = 0x10;
    do {
      uVar19 = 0;
      if ((int)uVar28 < iVar25) {
        uVar19 = ~uVar28 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar24 = Recast2UnrealPoint(&local_218,
                                   (double *)
                                   ((param_1->AllocatorInstance).Data + (longlong)(int)uVar28 * 8));
      dVar5 = (pTVar24->field0_0x0)._s_0.X;
      dVar13 = (pTVar24->field0_0x0)._s_0.Y;
      dVar1 = (pTVar24->field0_0x0)._s_0.Z;
      dVar3 = local_1f8.M[0][0] * dVar5;
      dVar7 = local_1f8.M[0][1] * dVar5;
      uVar19 = 0;
      if ((int)uVar28 < (this->RasterizeGeometryWorldRecastCoords).ArrayNum) {
        uVar19 = ~uVar28 >> 0x1f;
      }
      dVar11 = local_1f8.M[1][0] * dVar13;
      dVar12 = local_1f8.M[1][1] * dVar13;
      dVar9 = local_1f8.M[2][0] * dVar1;
      dVar10 = local_1f8.M[2][1] * dVar1;
      dVar4 = local_1f8.M[3][0] * dVar17;
      dVar8 = local_1f8.M[3][1] * dVar17;
      dVar5 = local_1f8.M[0][2] * dVar5;
      dVar13 = local_1f8.M[1][2] * dVar13;
      dVar1 = local_1f8.M[2][2] * dVar1;
      dVar6 = local_1f8.M[3][2] * dVar17;
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(double *)((this_00->AllocatorInstance).Data + lVar29 + -0x10) =
           dVar11 + dVar3 + dVar9 + dVar4;
      uVar19 = 0;
      if ((int)(uVar28 + 1) < (this->RasterizeGeometryWorldRecastCoords).ArrayNum) {
        uVar19 = ~(uVar28 + 1) >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(double *)((this_00->AllocatorInstance).Data + lVar29 + -8) = dVar12 + dVar7 + dVar10 + dVar8
      ;
      uVar19 = 0;
      if ((int)(uVar28 + 2) < (this->RasterizeGeometryWorldRecastCoords).ArrayNum) {
        uVar19 = ~(uVar28 + 2) >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar28 = uVar28 + 3;
      *(double *)((this_00->AllocatorInstance).Data + lVar29) = dVar13 + dVar5 + dVar1 + dVar6;
      lVar29 = lVar29 + 0x18;
      iVar25 = param_1->ArrayNum;
    } while ((int)uVar28 < iVar25);
  }
  if (bVar16) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar27,CycleScopeEnd);
  }
  return;
}

// RasterizeGeometryTransformCoordsAndFlipIndices @ 146e6d1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::RasterizeGeometryTransformCoordsAndFlipIndices
          (FRecastTileGenerator *this,TArray<double,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,TBox<double> *param_3,
          TTransform<double> *param_4)

{
  TArray<double,TSizedDefaultAllocator<32>_> *this_00;
  double dVar1;
  byte bVar2;
  undefined4 uVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  bool bVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  uchar uVar22;
  uchar uVar23;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar24;
  bool bVar25;
  bool bVar26;
  uint uVar27;
  FName *pFVar28;
  FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometryTransformCoordsAndFlipIndices(TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,UE::Math::TTransform<double>_const_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometryTransformCoordsAndFlipIndices>
  FVar29;
  TMatrix<double> *pTVar30;
  TMatrix<double> *pTVar31;
  TVector<double> *pTVar32;
  TBox<double> *pTVar33;
  int iVar34;
  FName FVar35;
  uint uVar36;
  uint uVar37;
  TArray<int,TSizedDefaultAllocator<32>_> *this_01;
  FRecastTileGenerator *pFVar38;
  uint uVar39;
  longlong lVar40;
  double dVar41;
  double dVar42;
  undefined1 auStackY_398 [32];
  int local_328;
  FColor_u_0 local_324;
  FName local_320;
  TTransform<double> *local_318;
  TArray<int,TSizedDefaultAllocator<32>_> *local_310;
  FName local_308;
  FRecastTileGenerator *local_300;
  FName local_2f8;
  TBox<double> *local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a8;
  undefined4 uStack_2a7;
  undefined2 uStack_2a3;
  undefined1 uStack_2a1;
  FName local_2a0;
  FName local_298;
  TVector<double> local_290;
  TMatrix<double> local_278;
  TBox<double> local_1f8;
  TBox<double> local_1c0;
  TMatrix<double> local_188;
  TMatrix<double> local_108;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_318 = param_4;
  local_328 = 2;
  local_310 = param_2;
  local_300 = this;
  local_2e0 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_Navigation_RasterizeGeometryTransformCoordsAndFlipIndices ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometryTransformCoordsAndFlipIndices(TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,UE::Math::TTransform<double>_const_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometryTransformCoordsAndFlipIndices>
         )0x0) {
      pFVar28 = ::FName::FName(&local_2a0,
                               "STAT_Navigation_RasterizeGeometryTransformCoordsAndFlipIndices");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_Navigation_RasterizeGeometryTransformCoordsAndFlipIndices,*pFVar28,
                 L"STAT_Navigation_RasterizeGeometryTransformCoordsAndFlipIndices","STATGROUP_Quick"
                 ,"STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar29 = StatPtr_STAT_Navigation_RasterizeGeometryTransformCoordsAndFlipIndices;
  if (StatPtr_STAT_Navigation_RasterizeGeometryTransformCoordsAndFlipIndices ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometryTransformCoordsAndFlipIndices(TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,UE::Math::TTransform<double>_const_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometryTransformCoordsAndFlipIndices>
       )0x0) {
    pFVar28 = ::FName::FName(&local_298,
                             "STAT_Navigation_RasterizeGeometryTransformCoordsAndFlipIndices");
    FVar29 = (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::RasterizeGeometryTransformCoordsAndFlipIndices(TArray<double,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,UE::Math::TBox<double>_const_&,UE::Math::TTransform<double>_const_&)_::_2_::FStat_STAT_Navigation_RasterizeGeometryTransformCoordsAndFlipIndices>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Navigation_RasterizeGeometryTransformCoordsAndFlipIndices,
                          *pFVar28,L"STAT_Navigation_RasterizeGeometryTransformCoordsAndFlipIndices"
                          ,"STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar35 = *(FName *)FVar29;
  bVar15 = false;
  bVar16 = false;
  local_2f8.ComparisonIndex.Value = 0;
  local_2f8.Number = 0;
  bVar25 = false;
  bVar26 = false;
  if ((FVar35.ComparisonIndex.Value.Value != 0) || (FVar35.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_324.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_324._s_0,(char *)*(FName *)((longlong)FVar29 + 0x10));
      bVar15 = false;
      bVar16 = true;
      bVar25 = false;
      bVar26 = true;
      if (-1 < CpuChannel->Enabled) {
        local_320.ComparisonIndex.Value = FVar35.ComparisonIndex.Value.Value;
        local_320.Number = FVar35.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_320,(wchar_t *)*(FName *)((longlong)FVar29 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xb73);
        bVar15 = true;
        bVar16 = true;
        bVar25 = true;
        bVar26 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_308 = FVar35;
      FThreadStats::AddMessage(FVar35,CycleScopeStart);
      bVar25 = true;
      goto LAB_146e6d36f;
    }
  }
  bVar16 = bVar26;
  bVar15 = bVar25;
  bVar25 = false;
  local_308 = local_2f8;
  FVar35 = local_2f8;
LAB_146e6d36f:
  this_00 = &this->RasterizeGeometryWorldRecastCoords;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this_00,param_1->ArrayNum,No);
  local_2a8 = 0;
  (this->RasterizeGeometryWorldRecastCoordsBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->RasterizeGeometryWorldRecastCoordsBounds).Min.field0_0x0._s_0.Y = 0.0;
  uStack_2a7 = 0;
  uStack_2a3 = 0;
  (this->RasterizeGeometryWorldRecastCoordsBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->RasterizeGeometryWorldRecastCoordsBounds).Max.field0_0x0._s_0.X = 0.0;
  uStack_2a1 = 0;
  (this->RasterizeGeometryWorldRecastCoordsBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->RasterizeGeometryWorldRecastCoordsBounds).Max.field0_0x0._s_0.Z = 0.0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  (this->RasterizeGeometryWorldRecastCoordsBounds).IsValid = '\0';
  (this->RasterizeGeometryWorldRecastCoordsBounds).Pad[0] = '\0';
  (this->RasterizeGeometryWorldRecastCoordsBounds).Pad[1] = '\0';
  (this->RasterizeGeometryWorldRecastCoordsBounds).Pad[2] = '\0';
  (this->RasterizeGeometryWorldRecastCoordsBounds).Pad[3] = '\0';
  (this->RasterizeGeometryWorldRecastCoordsBounds).Pad[4] = '\0';
  (this->RasterizeGeometryWorldRecastCoordsBounds).Pad[5] = '\0';
  (this->RasterizeGeometryWorldRecastCoordsBounds).Pad[6] = '\0';
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  pTVar30 = UE::Math::TTransform<double>::ToMatrixWithScale(local_318,&local_188);
  pTVar31 = Unreal2RecastMatrix(&local_108);
  VectorMatrixMultiply(&local_278,pTVar30,pTVar31);
  dVar14 = __real_3ff0000000000000;
  iVar34 = param_1->ArrayNum;
  uVar36 = 0;
  if (0 < iVar34) {
    lVar40 = 0x10;
    do {
      uVar27 = 0;
      if ((int)uVar36 < iVar34) {
        uVar27 = ~uVar36 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar32 = Recast2UnrealPoint(&local_290,
                                   (double *)
                                   ((param_1->AllocatorInstance).Data + (longlong)(int)uVar36 * 8));
      dVar42 = (pTVar32->field0_0x0)._s_0.X;
      dVar13 = (pTVar32->field0_0x0)._s_0.Y;
      dVar1 = (pTVar32->field0_0x0)._s_0.Z;
      dVar5 = dVar42 * local_278.M[0][0];
      dVar7 = dVar42 * local_278.M[0][1];
      uVar27 = 0;
      if ((int)uVar36 < (this->RasterizeGeometryWorldRecastCoords).ArrayNum) {
        uVar27 = ~uVar36 >> 0x1f;
      }
      dVar11 = dVar13 * local_278.M[1][0];
      dVar12 = dVar13 * local_278.M[1][1];
      dVar13 = dVar13 * local_278.M[1][2];
      dVar42 = dVar42 * local_278.M[0][2];
      dVar9 = dVar1 * local_278.M[2][0];
      dVar10 = dVar1 * local_278.M[2][1];
      dVar1 = dVar1 * local_278.M[2][2];
      dVar6 = dVar14 * local_278.M[3][0];
      dVar8 = dVar14 * local_278.M[3][1];
      dVar41 = dVar14 * local_278.M[3][2];
      if ((uVar27 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(double *)((this_00->AllocatorInstance).Data + lVar40 + -0x10) =
           dVar11 + dVar5 + dVar9 + dVar6;
      uVar27 = 0;
      if ((int)(uVar36 + 1) < (this->RasterizeGeometryWorldRecastCoords).ArrayNum) {
        uVar27 = ~(uVar36 + 1) >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(double *)((this_00->AllocatorInstance).Data + lVar40 + -8) = dVar12 + dVar7 + dVar10 + dVar8
      ;
      uVar27 = 0;
      if ((int)(uVar36 + 2) < (this->RasterizeGeometryWorldRecastCoords).ArrayNum) {
        uVar27 = ~(uVar36 + 2) >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar36 = uVar36 + 3;
      *(double *)((this_00->AllocatorInstance).Data + lVar40) = dVar13 + dVar42 + dVar1 + dVar41;
      lVar40 = lVar40 + 0x18;
      iVar34 = param_1->ArrayNum;
      param_2 = local_310;
    } while ((int)uVar36 < iVar34);
  }
  bVar2 = this->field_0x3f8;
  this->bRasterizeGeometryUseFlippedIndices = '\0';
  pFVar38 = this;
  if ((local_318->Scale3D).XY.m128d_f64[1] * (local_318->Scale3D).XY.m128d_f64[0] *
      (local_318->Scale3D).ZW.m128d_f64[0] < 0.0) {
    this->field_0x3f8 = bVar2 & 0xfe | 1;
    this_01 = &this->RasterizeGeometryFlippedIndices;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this_01,param_2->ArrayNum,No);
    pTVar24 = local_310;
    iVar34 = param_2->ArrayNum;
    uVar36 = 0;
    pFVar38 = local_300;
    if (0 < iVar34) {
      lVar40 = 8;
      do {
        uVar39 = ~(uVar36 + 2) >> 0x1f;
        uVar27 = 0;
        if (local_328 < iVar34) {
          uVar27 = uVar39;
        }
        if ((uVar27 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar3 = *(undefined4 *)((pTVar24->AllocatorInstance).Data + lVar40);
        uVar27 = 0;
        if ((int)uVar36 < (this->RasterizeGeometryFlippedIndices).ArrayNum) {
          uVar27 = ~uVar36 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar37 = ~(uVar36 + 1) >> 0x1f;
        *(undefined4 *)((this_01->AllocatorInstance).Data + lVar40 + -8) = uVar3;
        uVar27 = 0;
        if ((int)(uVar36 + 1) < pTVar24->ArrayNum) {
          uVar27 = uVar37;
        }
        if ((uVar27 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar3 = *(undefined4 *)((pTVar24->AllocatorInstance).Data + lVar40 + -4);
        uVar27 = 0;
        if ((int)(uVar36 + 1) < (this->RasterizeGeometryFlippedIndices).ArrayNum) {
          uVar27 = uVar37;
        }
        if ((uVar27 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)((this_01->AllocatorInstance).Data + lVar40 + -4) = uVar3;
        uVar27 = 0;
        if ((int)uVar36 < pTVar24->ArrayNum) {
          uVar27 = ~uVar36 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar3 = *(undefined4 *)((pTVar24->AllocatorInstance).Data + lVar40 + -8);
        uVar27 = 0;
        if ((int)(uVar36 + 2) < (this->RasterizeGeometryFlippedIndices).ArrayNum) {
          uVar27 = uVar39;
        }
        if ((uVar27 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar36 = uVar36 + 3;
        local_328 = local_328 + 3;
        *(undefined4 *)((this_01->AllocatorInstance).Data + lVar40) = uVar3;
        lVar40 = lVar40 + 0xc;
        iVar34 = pTVar24->ArrayNum;
        FVar35 = local_308;
        pFVar38 = local_300;
      } while ((int)uVar36 < iVar34);
    }
  }
  if (local_2e0->IsValid != '\0') {
    pTVar33 = Recast2UnrealBox(&local_1f8,local_2e0);
    pTVar33 = UE::Math::TBox<double>::TransformBy(pTVar33,&local_1c0,&local_278);
    dVar14 = (pTVar33->Min).field0_0x0._s_0.Y;
    (pFVar38->RasterizeGeometryWorldRecastCoordsBounds).Min.field0_0x0._s_0.X =
         (pTVar33->Min).field0_0x0._s_0.X;
    (pFVar38->RasterizeGeometryWorldRecastCoordsBounds).Min.field0_0x0._s_0.Y = dVar14;
    dVar14 = (pTVar33->Max).field0_0x0._s_0.X;
    (pFVar38->RasterizeGeometryWorldRecastCoordsBounds).Min.field0_0x0._s_0.Z =
         (pTVar33->Min).field0_0x0._s_0.Z;
    (pFVar38->RasterizeGeometryWorldRecastCoordsBounds).Max.field0_0x0._s_0.X = dVar14;
    dVar14 = (pTVar33->Max).field0_0x0._s_0.Z;
    (pFVar38->RasterizeGeometryWorldRecastCoordsBounds).Max.field0_0x0._s_0.Y =
         (pTVar33->Max).field0_0x0._s_0.Y;
    (pFVar38->RasterizeGeometryWorldRecastCoordsBounds).Max.field0_0x0._s_0.Z = dVar14;
    uVar17 = pTVar33->Pad[0];
    uVar18 = pTVar33->Pad[1];
    uVar19 = pTVar33->Pad[2];
    uVar20 = pTVar33->Pad[3];
    uVar21 = pTVar33->Pad[4];
    uVar22 = pTVar33->Pad[5];
    uVar23 = pTVar33->Pad[6];
    (pFVar38->RasterizeGeometryWorldRecastCoordsBounds).IsValid = pTVar33->IsValid;
    (pFVar38->RasterizeGeometryWorldRecastCoordsBounds).Pad[0] = uVar17;
    (pFVar38->RasterizeGeometryWorldRecastCoordsBounds).Pad[1] = uVar18;
    (pFVar38->RasterizeGeometryWorldRecastCoordsBounds).Pad[2] = uVar19;
    (pFVar38->RasterizeGeometryWorldRecastCoordsBounds).Pad[3] = uVar20;
    (pFVar38->RasterizeGeometryWorldRecastCoordsBounds).Pad[4] = uVar21;
    (pFVar38->RasterizeGeometryWorldRecastCoordsBounds).Pad[5] = uVar22;
    (pFVar38->RasterizeGeometryWorldRecastCoordsBounds).Pad[6] = uVar23;
  }
  if (bVar16) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar25) {
    FThreadStats::AddMessage(FVar35,CycleScopeEnd);
  }
  return;
}

// RasterizeGeometryTransformCoordsAndFlipIndices @ 146e6da50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::RasterizeGeometryTransformCoordsAndFlipIndices
          (FRecastTileGenerator *this,TArray<double,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,TTransform<double> *param_3)

{
  undefined1 auStackY_78 [32];
  TVector<double>_u_0 local_48;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined4 local_17;
  undefined2 local_13;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_17 = 0;
  local_13 = 0;
  local_11 = 0;
  local_48._s_0.X = 0.0;
  local_48._s_0.Y = 0.0;
  local_18 = 0;
  local_48._s_0.Z = 0.0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  RasterizeGeometryTransformCoordsAndFlipIndices
            (this,param_1,param_2,(TBox<double> *)&local_48._s_0,param_3);
  return;
}

// RasterizeTriangles @ 146e6dac0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::RasterizeTriangles
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,
          FTileRasterizationContext *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastRasterizeTriangles> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar11;
  TTransform<double> *pTVar12;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar13;
  uint uVar14;
  longlong lVar15;
  TTransform<double> *pTVar16;
  undefined1 local_res20 [8];
  FColor_u_0 local_98 [2];
  FName local_90;
  FName local_88;
  LARGE_INTEGER local_80;
  FName local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  FVar10 = StatPtr_STAT_Navigation_RecastRasterizeTriangles;
  if (StatPtr_STAT_Navigation_RecastRasterizeTriangles ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastRasterizeTriangles>)0x0) {
    pFVar9 = ::FName::FName(&local_78,"STAT_Navigation_RecastRasterizeTriangles");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastRasterizeTriangles>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Navigation_RecastRasterizeTriangles,*pFVar9,
                        L"Recast: rasterize triangles","STATGROUP_Navigation","STATCAT_Advanced",
                        L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar10;
  bVar5 = false;
  bVar4 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  bVar7 = false;
  bVar6 = false;
  if ((FVar11.ComparisonIndex.Value.Value != 0) || (FVar11.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_98[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_98[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar4 = true;
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_90.ComparisonIndex.Value = FVar11.ComparisonIndex.Value.Value;
        local_90.Number = FVar11.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_90,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xc29);
        bVar5 = true;
        bVar4 = true;
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_88 = FVar11;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar6 = true;
      goto LAB_146e6dc4b;
    }
  }
  bVar5 = bVar7;
  bVar4 = bVar6;
  bVar6 = false;
  local_88 = local_70;
  FVar11 = local_70;
LAB_146e6dc4b:
  uVar14 = 0;
  if (0 < (this->RawGeometry).ArrayNum) {
    lVar15 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar14 < (this->RawGeometry).ArrayNum) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar13 = (TArray<double,TSizedDefaultAllocator<32>_> *)
                ((this->RawGeometry).AllocatorInstance.Data + lVar15);
      iVar2 = *(int *)&pTVar13[6].AllocatorInstance.Data;
      if (iVar2 < 1) {
        RasterizeGeometryRecast
                  (this,param_1,pTVar13,(TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar13 + 1),
                   (TBox<double> *)(pTVar13 + 2),pTVar13[6].ArrayNum,param_2);
      }
      else {
        pTVar12 = *(TTransform<double> **)&pTVar13[5].ArrayNum;
        pTVar16 = pTVar12 + iVar2;
        while( true ) {
          if (*(int *)&pTVar13[6].AllocatorInstance.Data != iVar2) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res20);
          }
          if (pTVar12 == pTVar16) break;
          RasterizeGeometry(this,param_1,pTVar13,
                            (TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar13 + 1),
                            (TBox<double> *)(pTVar13 + 2),pTVar12,pTVar13[6].ArrayNum,param_2);
          pTVar12 = pTVar12 + 1;
        }
      }
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 0x70;
      FVar11 = local_88;
    } while ((int)uVar14 < (this->RawGeometry).ArrayNum);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_80);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_80.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_80.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_80.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_80.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// RasterizeTrianglesTimeSliced @ 146e6ded0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ETimeSliceWorkResult __thiscall
FRecastTileGenerator::RasterizeTrianglesTimeSliced
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,
          FTileRasterizationContext *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ETimeSliceWorkResult EVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastRasterizeTriangles> FVar10;
  FName FVar11;
  uint uVar12;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar13;
  FColor_u_0 local_res8 [2];
  FNavMeshBuildContext *local_res10;
  FName local_res20;
  FName local_50;
  FName local_48;
  
  FVar10 = StatPtr_STAT_Navigation_RecastRasterizeTriangles;
  local_res10 = param_1;
  if (StatPtr_STAT_Navigation_RecastRasterizeTriangles ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastRasterizeTriangles>)0x0) {
    pFVar9 = ::FName::FName(&local_50,"STAT_Navigation_RecastRasterizeTriangles");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastRasterizeTriangles>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Navigation_RecastRasterizeTriangles,*pFVar9,
                        L"Recast: rasterize triangles","STATGROUP_Navigation","STATCAT_Advanced",
                        L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar10;
  bVar3 = false;
  bVar5 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  if ((FVar11.ComparisonIndex.Value.Value != 0) || (FVar11.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar11.ComparisonIndex.Value.Value;
        local_res20.Number = FVar11.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xbf3);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_146e6e031;
    }
  }
  bVar4 = false;
  FVar11 = local_48;
LAB_146e6e031:
  if ((this->TimeSliceManager == (FNavRegenTimeSliceManager *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TimeSliceManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                         ,0xbf5,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    EVar7 = (*pcVar2)();
    return EVar7;
  }
  uVar12 = this->RasterizeTrianglesTimeSlicedRawGeomIdx;
  if ((int)uVar12 < (this->RawGeometry).ArrayNum) {
    do {
      uVar8 = 0;
      if ((int)uVar12 < (this->RawGeometry).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        EVar7 = (*pcVar2)();
        return EVar7;
      }
      pTVar13 = (TArray<double,TSizedDefaultAllocator<32>_> *)
                ((this->RawGeometry).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x70);
      iVar1 = *(int *)&pTVar13[6].AllocatorInstance.Data;
      if (iVar1 < 1) {
        EVar7 = RasterizeGeometryRecastTimeSliced
                          (this,param_1,pTVar13,
                           (TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar13 + 1),
                           (TBox<double> *)(pTVar13 + 2),pTVar13[6].ArrayNum,param_2);
        if ((this->TimeSliceManager->TimeSlicer).bTimeSliceFinishedCached != false) {
          if (EVar7 != CallAgainNextTimeSlice) {
            this->RasterizeTrianglesTimeSlicedRawGeomIdx =
                 this->RasterizeTrianglesTimeSlicedRawGeomIdx + 1;
          }
LAB_146e6e279:
          EVar7 = CallAgainNextTimeSlice;
          goto LAB_146e6e1ff;
        }
      }
      else {
        uVar12 = this->RasterizeTrianglesTimeSlicedInstTransformIdx;
        if ((int)uVar12 < iVar1) {
          do {
            uVar8 = 0;
            if ((int)uVar12 < *(int *)&pTVar13[6].AllocatorInstance.Data) {
              uVar8 = ~uVar12 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              EVar7 = (*pcVar2)();
              return EVar7;
            }
            EVar7 = RasterizeGeometryTimeSliced
                              (this,local_res10,pTVar13,
                               (TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar13 + 1),
                               (TBox<double> *)(pTVar13 + 2),
                               (TTransform<double> *)
                               ((longlong)(int)uVar12 * 0x60 + *(longlong *)&pTVar13[5].ArrayNum),
                               pTVar13[6].ArrayNum,param_2);
            if ((this->TimeSliceManager->TimeSlicer).bTimeSliceFinishedCached != false) {
              if (EVar7 == CallAgainNextTimeSlice) goto LAB_146e6e279;
              this->RasterizeTrianglesTimeSlicedInstTransformIdx =
                   this->RasterizeTrianglesTimeSlicedInstTransformIdx + 1;
              EVar7 = CallAgainNextTimeSlice;
              goto LAB_146e6e1ff;
            }
            this->RasterizeTrianglesTimeSlicedInstTransformIdx =
                 this->RasterizeTrianglesTimeSlicedInstTransformIdx + 1;
            uVar12 = this->RasterizeTrianglesTimeSlicedInstTransformIdx;
          } while ((int)uVar12 < *(int *)&pTVar13[6].AllocatorInstance.Data);
        }
        this->RasterizeTrianglesTimeSlicedInstTransformIdx = 0;
        param_1 = local_res10;
      }
      uVar12 = this->RasterizeTrianglesTimeSlicedRawGeomIdx + 1;
      this->RasterizeTrianglesTimeSlicedRawGeomIdx = uVar12;
    } while ((int)uVar12 < (this->RawGeometry).ArrayNum);
  }
  EVar7 = Succeeded;
LAB_146e6e1ff:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar11,CycleScopeEnd);
  }
  return EVar7;
}

// RecastBuildLayers @ 146e6eb10

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FRecastTileGenerator::RecastBuildLayers
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,
          FTileRasterizationContext *param_2)

{
  int *piVar1;
  int iVar2;
  rcCompactHeightfield *prVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildLayers> FVar9;
  rcHeightfieldLayerSet *prVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FNameEntryId FVar14;
  char *pcVar15;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_38;
  
  FVar14.Value = 0;
  FVar9 = StatPtr_STAT_Navigation_RecastBuildLayers;
  if (StatPtr_STAT_Navigation_RecastBuildLayers ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildLayers>)0x0) {
    pFVar8 = ::FName::FName(&local_res20,"STAT_Navigation_RecastBuildLayers");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildLayers>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastBuildLayers,
                       *pFVar8,L"Recast: build layers","STATGROUP_Navigation","STATCAT_Advanced",
                       L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value == 0) && (uVar11 == 0)) {
LAB_146e6ec73:
    bVar5 = false;
    FVar13.ComparisonIndex.Value = 0;
    FVar13.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar12.Value;
        local_res18.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xcf8);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e6ec73;
    local_res18.s.LowPart = FVar12.Value;
    local_res18.s.HighPart = uVar11;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar5 = true;
    FVar14.Value = FVar12.Value;
  }
  prVar10 = rcAllocHeightfieldLayerSet();
  param_2->LayerSet = prVar10;
  if (prVar10 == (rcHeightfieldLayerSet *)0x0) {
    pcVar15 = "RecastBuildLayers: Out of memory \'LayerSet\'.";
  }
  else {
    iVar2 = *(int *)((longlong)&(this->TileConfig)._padding_ + 4);
    prVar3 = this->CompactHF;
    if (iVar2 == 0) {
      bVar7 = rcBuildHeightfieldLayersMonotone
                        ((rcContext *)param_1,prVar3,
                         *(rcBorderSize *)((longlong)&(this->TileConfig)._padding_ + 4),
                         (int)(this->TileConfig)._padding_,prVar10);
    }
    else if (iVar2 == 1) {
      bVar7 = rcBuildDistanceField((rcContext *)param_1,prVar3);
      if (!bVar7) {
        pcVar15 = "RecastBuildLayers: Could not build distance field.";
        goto LAB_146e6ed2f;
      }
      bVar7 = rcBuildHeightfieldLayers
                        ((rcContext *)param_1,this->CompactHF,
                         *(rcBorderSize *)((longlong)&(this->TileConfig)._padding_ + 4),
                         (int)(this->TileConfig)._padding_,param_2->LayerSet);
    }
    else {
      bVar7 = rcBuildHeightfieldLayersChunky
                        ((rcContext *)param_1,prVar3,
                         *(rcBorderSize *)((longlong)&(this->TileConfig)._padding_ + 4),
                         (int)(this->TileConfig)._padding_,(int)(this->TileConfig)._padding_,prVar10
                        );
    }
    if (bVar7 != false) {
      bVar7 = true;
      goto LAB_146e6ed44;
    }
    pcVar15 = "RecastBuildLayers: Could not build heightfield layers.";
  }
LAB_146e6ed2f:
  rcContext::log((rcContext *)param_1,RC_LOG_ERROR,pcVar15);
  bVar7 = false;
LAB_146e6ed44:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar14.Value;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar7;
}

// RecastBuildTileCache @ 146e6ee40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FRecastTileGenerator::RecastBuildTileCache
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,
          FTileRasterizationContext *param_2)

{
  int *piVar1;
  TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> *pTVar2;
  rcHeightfieldLayer *prVar3;
  FNavMeshTileData *pFVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildTileCache> FVar18;
  uchar *_Dst;
  FNavMeshTileData *pFVar19;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar20;
  FName FVar21;
  TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> *pTVar22;
  char *pcVar23;
  ulonglong uVar24;
  int iVar25;
  ulonglong uVar26;
  undefined1 auStackY_278 [32];
  int local_218 [2];
  FName local_210;
  FColor_u_0 local_208 [2];
  FName local_200;
  longlong local_1f8;
  FTileRasterizationContext *local_1f0;
  FNavMeshBuildContext *local_1e8;
  FName local_1e0;
  dtTileCacheCompressor local_1d0;
  longlong local_1c8;
  LARGE_INTEGER local_1c0;
  FStatMessage local_1b8;
  FName local_1a8 [2];
  TVector<double>_u_0 local_198;
  undefined8 uStack_180;
  undefined8 local_178;
  double dStack_170;
  undefined8 local_168;
  dtTileCacheLayerHeader local_158;
  TVector<double>_u_0 local_108;
  undefined8 uStack_f0;
  undefined8 local_e8;
  double dStack_e0;
  undefined8 local_d8;
  FNavMeshTileData local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_278;
  uVar24 = 0;
  FVar18 = StatPtr_STAT_Navigation_RecastBuildTileCache;
  local_1f0 = param_2;
  local_1e8 = param_1;
  if (StatPtr_STAT_Navigation_RecastBuildTileCache ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildTileCache>)0x0) {
    pFVar17 = ::FName::FName(local_1a8,"STAT_Navigation_RecastBuildTileCache");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastBuildTileCache>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastBuildTileCache,
                        *pFVar17,L"Recast: build tile cache","STATGROUP_Navigation",
                        "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar18;
  bVar10 = false;
  bVar12 = false;
  local_1e0.ComparisonIndex.Value = 0;
  local_1e0.Number = 0;
  if ((FVar21.ComparisonIndex.Value.Value != 0) || (FVar21.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_208[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_208[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_200.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_200.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_200,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xd25);
        bVar10 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_210 = FVar21;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar11 = true;
      goto LAB_146e6efac;
    }
  }
  bVar11 = false;
  FVar21 = local_1e0;
LAB_146e6efac:
  dVar8 = (double)(this->TileConfig).AgentMaxClimb;
  iVar25 = param_2->LayerSet->nlayers;
  local_1c8 = (longlong)iVar25;
  local_1d0 = (dtTileCacheCompressor)&___7FTileCacheCompressor__6B_;
  if (0 < iVar25) {
    local_1f8 = 0;
    uVar26 = uVar24;
    do {
      prVar3 = param_2->LayerSet->layers;
      local_158.tx = this->TileX;
      local_158.ty = this->TileY;
      local_158.version = 1;
      iVar25 = (int)uVar26;
      local_158.bmin[0] = *(double *)((longlong)prVar3->bmin + uVar24);
      local_158.bmin[1] = *(double *)((longlong)prVar3->bmin + uVar24 + 8);
      local_158.bmin[2] = *(double *)((longlong)prVar3->bmin + uVar24 + 0x10);
      local_158.bmax[0] = *(double *)((longlong)prVar3->bmax + uVar24);
      local_158.bmax[1] = *(double *)((longlong)prVar3->bmax + uVar24 + 8);
      local_158.bmax[2] = *(double *)((longlong)prVar3->bmax + uVar24 + 0x10);
      local_158.width = *(ushort *)((longlong)prVar3->bmax + uVar24 + 0x28);
      local_158.height = *(ushort *)((longlong)prVar3->bmax + uVar24 + 0x2c);
      local_158.minx = *(ushort *)((longlong)prVar3->bmax + uVar24 + 0x30);
      local_158.maxx = *(ushort *)((longlong)prVar3->bmax + uVar24 + 0x34);
      local_158.miny = *(ushort *)((longlong)prVar3->bmax + uVar24 + 0x38);
      local_158.maxy = *(ushort *)((longlong)prVar3->bmax + uVar24 + 0x3c);
      local_158.tlayer = iVar25;
      Recast2UnrealBox((TBox<double> *)&local_108._s_0,local_158.bmin,local_158.bmax);
      local_108._s_0.Z = local_108._s_0.Z - dVar8;
      dStack_e0 = dStack_e0 + dVar8;
      local_210.ComparisonIndex.Value = 0;
      local_210.Number = 0;
      local_218[0] = 0;
      uVar15 = dtBuildTileCacheLayer
                         (&local_1d0,&local_158,*(ushort **)((longlong)prVar3->bmax + uVar24 + 0x48)
                          ,*(uchar **)((longlong)prVar3->bmax + uVar24 + 0x50),
                          *(uchar **)((longlong)prVar3->bmax + uVar24 + 0x58),(uchar **)&local_210,
                          local_218);
      if ((int)uVar15 < 0) {
        dtFree((void *)local_210,DT_ALLOC_PERM_TILE_DATA);
        pcVar23 = "RecastBuildTileCache: failed to build layer.";
LAB_146e6f472:
        rcContext::log((rcContext *)local_1e8,RC_LOG_ERROR,pcVar23);
        bVar13 = false;
        goto LAB_146e6f362;
      }
      _Dst = dtAlloc(local_218[0],DT_ALLOC_PERM_TILE_DATA);
      if (_Dst == (uchar *)0x0) {
        dtFree((void *)local_210,DT_ALLOC_PERM_TILE_DATA);
        pcVar23 = "RecastBuildTileCache: Out of memory \'CompressedData\'.";
        goto LAB_146e6f472;
      }
      memcpy(_Dst,(void *)local_210,(longlong)local_218[0]);
      local_198._s_0.X = local_108._s_0.X;
      local_198._s_0.Y = local_108._s_0.Y;
      local_198._s_0.Z = local_108._s_0.Z;
      uStack_180 = uStack_f0;
      local_178 = local_e8;
      dStack_170 = dStack_e0;
      local_168 = local_d8;
      pFVar19 = FNavMeshTileData::FNavMeshTileData
                          (&local_c8,_Dst,local_218[0],iVar25,(TBox<double> *)&local_198._s_0);
      pFVar4 = (FNavMeshTileData *)(param_2->Layers).AllocatorInstance.Data;
      if (((pFVar4 <= pFVar19) && (pFVar19 < pFVar4 + (param_2->Layers).ArrayMax)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar7 = (code *)swi(3);
        uVar14 = (*pcVar7)();
        return (bool)uVar14;
      }
      iVar16 = (param_2->Layers).ArrayNum;
      piVar1 = &(param_2->Layers).ArrayMax;
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,&(param_2->Layers).AllocatorInstance,piVar1);
      }
      (param_2->Layers).ArrayNum = iVar16 + 1;
      pFVar5 = (param_2->Layers).AllocatorInstance.Data;
      lVar20 = (longlong)iVar16 * 0x58;
      *(int *)(pFVar5 + lVar20) = pFVar19->LayerIndex;
      dVar9 = (pFVar19->LayerBBox).Min.field0_0x0._s_0.Y;
      *(double *)(pFVar5 + lVar20 + 8) = (pFVar19->LayerBBox).Min.field0_0x0._s_0.X;
      *(double *)(pFVar5 + lVar20 + 8 + 8) = dVar9;
      dVar9 = (pFVar19->LayerBBox).Max.field0_0x0._s_0.X;
      *(double *)(pFVar5 + lVar20 + 0x18) = (pFVar19->LayerBBox).Min.field0_0x0._s_0.Z;
      *(double *)(pFVar5 + lVar20 + 0x18 + 8) = dVar9;
      dVar9 = (pFVar19->LayerBBox).Max.field0_0x0._s_0.Z;
      *(double *)(pFVar5 + lVar20 + 0x28) = (pFVar19->LayerBBox).Max.field0_0x0._s_0.Y;
      *(double *)(pFVar5 + lVar20 + 0x28 + 8) = dVar9;
      *(undefined8 *)(pFVar5 + lVar20 + 0x38) = *(undefined8 *)&(pFVar19->LayerBBox).IsValid;
      *(int *)(pFVar5 + lVar20 + 0x40) = pFVar19->DataSize;
      *(FNavData **)(pFVar5 + lVar20 + 0x48) = (pFVar19->NavData).Object;
      pTVar6 = (pFVar19->NavData).SharedReferenceCount.ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar5 + lVar20 + 0x50) = pTVar6;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      FNavMeshTileData::~FNavMeshTileData(&local_c8);
      dtFree((void *)local_210,DT_ALLOC_PERM_TILE_DATA);
      rcContext::log((rcContext *)local_1e8,RC_LOG_PROGRESS,
                     ">> Cache[%d,%d:%d] = %.2fkB (full:%.2fkB rate:%.2f%%)");
      uVar26 = (ulonglong)(iVar25 + 1);
      local_1f8 = local_1f8 + 1;
      uVar24 = uVar24 + 0x78;
      param_2 = local_1f0;
    } while (local_1f8 < local_1c8);
  }
  pTVar22 = &param_2->Layers;
  pTVar2 = &this->CompressedLayers;
  if (pTVar2 != pTVar22) {
    DestructItems<FNavMeshTileData,int>
              ((FNavMeshTileData *)(pTVar2->AllocatorInstance).Data,
               (this->CompressedLayers).ArrayNum);
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar22->AllocatorInstance).Data;
    (pTVar22->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CompressedLayers).ArrayNum = (param_2->Layers).ArrayNum;
    (this->CompressedLayers).ArrayMax = (param_2->Layers).ArrayMax;
    (param_2->Layers).ArrayNum = 0;
    (param_2->Layers).ArrayMax = 0;
  }
  bVar13 = true;
LAB_146e6f362:
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar11) && (FVar21 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1b8.NameAndInfo.Index = FVar21.ComparisonIndex.Value;
      local_1b8.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1c0);
      local_1b8.StatData.Pad[4] = '\0';
      local_1b8.StatData.Pad[5] = '\0';
      local_1b8.StatData.Pad[6] = '\0';
      local_1b8.StatData.Pad[7] = '\0';
      local_1b8.StatData.Pad[0] = local_1c0.s.LowPart._0_1_;
      local_1b8.StatData.Pad[1] = local_1c0.s.LowPart._1_1_;
      local_1b8.StatData.Pad[2] = local_1c0.s.LowPart._2_1_;
      local_1b8.StatData.Pad[3] = local_1c0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_1b8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar13;
}

// RecastErodeWalkable @ 146e6f4d0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FRecastTileGenerator::RecastErodeWalkable(FRecastTileGenerator *this,FNavMeshBuildContext *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastErodeWalkable> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FNameEntryId FVar15;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FStatMessage local_38;
  
  FVar15.Value = 0;
  FVar11 = StatPtr_STAT_Navigation_RecastErodeWalkable;
  if (StatPtr_STAT_Navigation_RecastErodeWalkable ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastErodeWalkable>)0x0) {
    pFVar10 = ::FName::FName(local_res18,"STAT_Navigation_RecastErodeWalkable");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastErodeWalkable>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastErodeWalkable,
                        *pFVar10,L"Recast: erode walkable areas","STATGROUP_Navigation",
                        "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar12 == 0)) {
LAB_146e6f62a:
    bVar6 = false;
    FVar14.ComparisonIndex.Value = 0;
    FVar14.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar13.Value;
        local_res8.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xcd6);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e6f62a;
    local_res8.s.LowPart = FVar13.Value;
    local_res8.s.HighPart = uVar12;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar6 = true;
    FVar15.Value = FVar13.Value;
  }
  fVar3 = (this->TileConfig).AgentHeight;
  iVar4 = (int)(this->TileConfig)._padding_;
  uVar12 = -((int)ROUND(__real_bf000000 -
                        (fVar3 + fVar3) / (float)(double)(this->TileConfig)._padding_) >> 1);
  if ((float)iVar4 <= 0.0) {
    if ((this->TileConfig).bMarkLowHeightAreas != 0) {
      rcMarkLowAreas((rcContext *)param_1,uVar12,'>',this->CompactHF);
    }
  }
  else {
    bVar8 = 0;
    if ((this->TileConfig).bFilterLowSpanSequences != 0) {
      bVar8 = ~(this->TileConfig).bFilterLowSpanFromTileCache & 1 | 2;
    }
    if ((this->TileConfig).bMarkLowHeightAreas == 0) {
      bVar9 = rcErodeWalkableArea((rcContext *)param_1,iVar4,this->CompactHF);
    }
    else {
      bVar9 = rcErodeWalkableAndLowAreas
                        ((rcContext *)param_1,iVar4,uVar12,'>',bVar8,this->CompactHF);
    }
    if (bVar9 == false) {
      rcContext::log((rcContext *)param_1,RC_LOG_ERROR,"GenerateCompressedLayers: Could not erode.")
      ;
      bVar9 = false;
      goto LAB_146e6f6f8;
    }
  }
  bVar9 = true;
LAB_146e6f6f8:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar9;
}

// RecastErodeWalkable @ 146e6f7f0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FRecastTileGenerator::RecastErodeWalkable
          (FRecastTileGenerator *this,FNavMeshBuildContext *param_1,
          FTileRasterizationContext *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastErodeWalkable> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FNameEntryId FVar15;
  LARGE_INTEGER LStackX_8;
  FName aFStackX_18 [2];
  FStatMessage FStack_38;
  
  FVar15.Value = 0;
  FVar11 = StatPtr_STAT_Navigation_RecastErodeWalkable;
  if (StatPtr_STAT_Navigation_RecastErodeWalkable ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastErodeWalkable>)0x0) {
    pFVar10 = ::FName::FName(aFStackX_18,"STAT_Navigation_RecastErodeWalkable");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastErodeWalkable>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastErodeWalkable,
                        *pFVar10,L"Recast: erode walkable areas","STATGROUP_Navigation",
                        "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar12 == 0)) {
LAB_146e6f62a:
    bVar6 = false;
    FVar14.ComparisonIndex.Value = 0;
    FVar14.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&LStackX_8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_8.s.LowPart = FVar13.Value;
        LStackX_8.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0xcd6);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e6f62a;
    LStackX_8.s.LowPart = FVar13.Value;
    LStackX_8.s.HighPart = uVar12;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar6 = true;
    FVar15.Value = FVar13.Value;
  }
  fVar3 = (this->TileConfig).AgentHeight;
  iVar4 = (int)(this->TileConfig)._padding_;
  uVar12 = -((int)ROUND(__real_bf000000 -
                        (fVar3 + fVar3) / (float)(double)(this->TileConfig)._padding_) >> 1);
  if ((float)iVar4 <= 0.0) {
    if ((this->TileConfig).bMarkLowHeightAreas != 0) {
      rcMarkLowAreas((rcContext *)param_1,uVar12,'>',this->CompactHF);
    }
  }
  else {
    bVar8 = 0;
    if ((this->TileConfig).bFilterLowSpanSequences != 0) {
      bVar8 = ~(this->TileConfig).bFilterLowSpanFromTileCache & 1 | 2;
    }
    if ((this->TileConfig).bMarkLowHeightAreas == 0) {
      bVar9 = rcErodeWalkableArea((rcContext *)param_1,iVar4,this->CompactHF);
    }
    else {
      bVar9 = rcErodeWalkableAndLowAreas
                        ((rcContext *)param_1,iVar4,uVar12,'>',bVar8,this->CompactHF);
    }
    if (bVar9 == false) {
      rcContext::log((rcContext *)param_1,RC_LOG_ERROR,"GenerateCompressedLayers: Could not erode.")
      ;
      bVar9 = false;
      goto LAB_146e6f6f8;
    }
  }
  bVar9 = true;
LAB_146e6f6f8:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      FStack_38.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&LStackX_8);
      FStack_38.StatData.Pad[4] = '\0';
      FStack_38.StatData.Pad[5] = '\0';
      FStack_38.StatData.Pad[6] = '\0';
      FStack_38.StatData.Pad[7] = '\0';
      FStack_38.StatData.Pad[0] = LStackX_8.s.LowPart._0_1_;
      FStack_38.StatData.Pad[1] = LStackX_8.s.LowPart._1_1_;
      FStack_38.StatData.Pad[2] = LStackX_8.s.LowPart._2_1_;
      FStack_38.StatData.Pad[3] = LStackX_8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar9;
}

// Setup @ 146e721a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::Setup
          (FRecastTileGenerator *this,FRecastNavMeshGenerator *param_1,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  uint *puVar3;
  TBox<double> *pTVar4;
  TNavStatArray<UE::Math::TBox<double>_> *pTVar5;
  TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> *pTVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  code *pcVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double dVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  FName *pFVar34;
  FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::Setup(FRecastNavMeshGenerator_const_&,TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FStat_STAT_FRecastTileGenerator_Setup>
  FVar35;
  TBox<double> *pTVar36;
  double *pdVar37;
  TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> *pTVar38;
  longlong lVar39;
  ForElementType<unsigned_int> _Dst;
  ulonglong uVar40;
  FName FVar41;
  uint uVar42;
  FScriptContainerElement *pFVar43;
  double *pdVar44;
  FNavMeshTileData *this_00;
  ForElementType<unsigned_int> FVar45;
  FScriptContainerElement *pFVar46;
  FScriptContainerElement *pFVar47;
  FNavMeshTileData *pFVar48;
  ForElementType<unsigned_int> FVar49;
  FScriptContainerElement *pFVar50;
  double dVar51;
  undefined1 auStackY_288 [32];
  undefined1 local_227;
  undefined1 local_226;
  undefined1 local_225;
  undefined1 local_224 [4];
  FName local_220;
  double *local_218;
  FRecastNavMeshGenerator *local_210;
  FColor_u_0 local_208 [2];
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *local_200;
  FName local_1f8;
  FName local_1f0;
  FScriptContainerElement *local_1e0;
  FScriptContainerElement *local_1d8;
  TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> local_1d0;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  FName local_180;
  FName local_178;
  double local_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  TVector<double>_u_0 local_138;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined8 local_108;
  TVector<double>_u_0 local_100;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  TBox<double> local_c8;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_288;
  uVar31 = 0;
  local_210 = param_1;
  local_200 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FRecastTileGenerator_Setup ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::Setup(FRecastNavMeshGenerator_const_&,TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FStat_STAT_FRecastTileGenerator_Setup>
         )0x0) {
      pFVar34 = ::FName::FName(&local_180,"STAT_FRecastTileGenerator_Setup");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FRecastTileGenerator_Setup,*pFVar34,
                 L"STAT_FRecastTileGenerator_Setup","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar35 = StatPtr_STAT_FRecastTileGenerator_Setup;
  if (StatPtr_STAT_FRecastTileGenerator_Setup ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::Setup(FRecastNavMeshGenerator_const_&,TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FStat_STAT_FRecastTileGenerator_Setup>
       )0x0) {
    pFVar34 = ::FName::FName(&local_178,"STAT_FRecastTileGenerator_Setup");
    FVar35 = (FThreadSafeStaticStat<_protected:_void___cdecl_FRecastTileGenerator::Setup(FRecastNavMeshGenerator_const_&,TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FStat_STAT_FRecastTileGenerator_Setup>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FRecastTileGenerator_Setup,
                          *pFVar34,L"STAT_FRecastTileGenerator_Setup","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar41 = *(FName *)FVar35;
  bVar26 = false;
  bVar27 = false;
  local_1f0.ComparisonIndex.Value = 0;
  local_1f0.Number = 0;
  bVar28 = false;
  bVar29 = false;
  if ((FVar41.ComparisonIndex.Value.Value == 0) && (FVar41.Number == 0)) {
LAB_146e72354:
    bVar27 = bVar29;
    bVar26 = bVar28;
    bVar28 = false;
    local_220 = local_1f0;
    FVar41 = local_1f0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_208[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_208[0]._s_0,(char *)*(FName *)((longlong)FVar35 + 0x10));
      bVar26 = false;
      bVar27 = true;
      bVar28 = false;
      bVar29 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1f8.ComparisonIndex.Value = FVar41.ComparisonIndex.Value.Value;
        local_1f8.Number = FVar41.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1f8,(wchar_t *)*(FName *)((longlong)FVar35 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x6dd);
        bVar26 = true;
        bVar27 = true;
        bVar28 = true;
        bVar29 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e72354;
    local_220 = FVar41;
    FThreadStats::AddMessage(FVar41,CycleScopeStart);
    bVar28 = true;
  }
  local_170 = (param_1->TotalNavBounds).Min.field0_0x0._s_0.X;
  dStack_168 = (param_1->TotalNavBounds).Min.field0_0x0._s_0.Y;
  dVar18 = (param_1->TotalNavBounds).Min.field0_0x0._s_0.Z;
  dStack_158 = (param_1->TotalNavBounds).Max.field0_0x0._s_0.X;
  local_150 = *(undefined4 *)((longlong)&(param_1->TotalNavBounds).Max.field0_0x0 + 8);
  uStack_14c = *(undefined4 *)((longlong)&(param_1->TotalNavBounds).Max.field0_0x0 + 0xc);
  pdVar44 = &(param_1->TotalNavBounds).Max.field0_0x0._s_0.Z;
  uVar19 = *(undefined4 *)pdVar44;
  uVar20 = *(undefined4 *)((longlong)&(param_1->TotalNavBounds).Max.field0_0x0 + 0x14);
  dVar25 = *pdVar44;
  dVar9 = (param_1->RcNavMeshOrigin).field0_0x0._s_0.X;
  dVar10 = (param_1->RcNavMeshOrigin).field0_0x0._s_0.Y;
  dVar8 = (param_1->RcNavMeshOrigin).field0_0x0._s_0.Z;
  local_140._0_1_ = (param_1->TotalNavBounds).IsValid;
  local_140._1_1_ = (param_1->TotalNavBounds).Pad[0];
  local_140._2_1_ = (param_1->TotalNavBounds).Pad[1];
  local_140._3_1_ = (param_1->TotalNavBounds).Pad[2];
  local_140._4_1_ = (param_1->TotalNavBounds).Pad[3];
  local_140._5_1_ = (param_1->TotalNavBounds).Pad[4];
  local_140._6_1_ = (param_1->TotalNavBounds).Pad[5];
  local_140._7_1_ = (param_1->TotalNavBounds).Pad[6];
  dVar51 = (double)(int)(this->TileConfig)._padding_ * (double)(this->TileConfig)._padding_;
  local_160 = dVar18;
  uStack_148 = uVar19;
  uStack_144 = uVar20;
  FNavDataConfig::operator=(&this->NavDataConfig,(FNavDataConfig *)&param_1->DestNavMesh->_padding_)
  ;
  local_108 = CONCAT71(local_108._1_7_,1);
  local_138._s_0.X = (double)this->TileX * dVar51 + dVar9;
  local_138._s_0.Z = (double)this->TileY * dVar51 + dVar8;
  dStack_120 = (double)(this->TileX + 1) * dVar51 + dVar9;
  dStack_110 = (double)(this->TileY + 1) * dVar51 + dVar8;
  local_1c0 = dVar8;
  local_138._s_0.Y = dVar10;
  local_118 = dVar10;
  pTVar36 = Recast2UnrealBox(&local_c8,(TBox<double> *)&local_138._s_0);
  pTVar4 = &this->TileBB;
  local_188 = (double)CONCAT71(local_188._1_7_,1);
  local_138._s_0.X = (pTVar36->Min).field0_0x0._s_0.X;
  local_138._s_0.Y = (pTVar36->Min).field0_0x0._s_0.Y;
  dStack_120 = (pTVar36->Max).field0_0x0._s_0.X;
  pdVar44 = &(pTVar36->Max).field0_0x0._s_0.Y;
  uVar23 = *(undefined4 *)pdVar44;
  uVar24 = *(undefined4 *)((longlong)&(pTVar36->Max).field0_0x0 + 0xc);
  local_118 = *pdVar44;
  local_108._0_1_ = pTVar36->IsValid;
  local_108._1_1_ = pTVar36->Pad[0];
  local_108._2_1_ = pTVar36->Pad[1];
  local_108._3_1_ = pTVar36->Pad[2];
  local_108._4_1_ = pTVar36->Pad[3];
  local_108._5_1_ = pTVar36->Pad[4];
  local_108._6_1_ = pTVar36->Pad[5];
  local_108._7_1_ = pTVar36->Pad[6];
  (pTVar4->Min).field0_0x0._s_0.X = local_138._s_0.X;
  (this->TileBB).Min.field0_0x0._s_0.Y = local_138._s_0.Y;
  (this->TileBB).Min.field0_0x0._s_0.Z = dVar18;
  (this->TileBB).Max.field0_0x0._s_0.X = dStack_120;
  *(undefined4 *)((longlong)&(this->TileBB).Max.field0_0x0 + 8) = uVar23;
  *(undefined4 *)((longlong)&(this->TileBB).Max.field0_0x0 + 0xc) = uVar24;
  *(undefined4 *)((longlong)&(this->TileBB).Max.field0_0x0 + 0x10) = uVar19;
  *(undefined4 *)((longlong)&(this->TileBB).Max.field0_0x0 + 0x14) = uVar20;
  (this->TileBB).IsValid = (undefined1)local_108;
  (this->TileBB).Pad[0] = local_108._1_1_;
  (this->TileBB).Pad[1] = local_108._2_1_;
  (this->TileBB).Pad[2] = local_108._3_1_;
  (this->TileBB).Pad[3] = local_108._4_1_;
  (this->TileBB).Pad[4] = local_108._5_1_;
  (this->TileBB).Pad[5] = local_108._6_1_;
  (this->TileBB).Pad[6] = local_108._7_1_;
  dVar8 = (this->TileBB).Min.field0_0x0._s_0.Z;
  if (UE::NavMesh::Private::bUseTightBoundExpansion == false) {
    dVar9 = (this->TileBB).Min.field0_0x0._s_0.Y;
    fVar7 = *(float *)((longlong)&(this->NavDataConfig)._padding_ + 4);
    dVar15 = (this->TileBB).Max.field0_0x0._s_0.Y;
    dVar51 = (double)(fVar7 + fVar7) + (double)(this->TileConfig)._padding_;
    dVar10 = (this->TileBB).Max.field0_0x0._s_0.X;
    dVar13 = dVar51 + (this->TileBB).Max.field0_0x0._s_0.Z;
    (this->TileBBExpandedForAgent).Min.field0_0x0._s_0.X = (pTVar4->Min).field0_0x0._s_0.X - dVar51;
    (this->TileBBExpandedForAgent).Min.field0_0x0._s_0.Y = dVar9 - dVar51;
    (this->TileBBExpandedForAgent).Min.field0_0x0._s_0.Z = dVar8 - dVar51;
    (this->TileBBExpandedForAgent).Max.field0_0x0._s_0.X = dVar51 + dVar10;
    auVar17._8_4_ = SUB84(dVar13,0);
    auVar17._0_8_ = dVar51 + dVar15;
    auVar17._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->TileBBExpandedForAgent).Max.field0_0x0 + 8) = auVar17;
  }
  else {
    dVar9 = (this->TileBB).Max.field0_0x0._s_0.X;
    dVar21 = (param_1->BBoxGrowthHigh).field0_0x0._s_0.Y;
    dVar22 = (this->TileBB).Max.field0_0x0._s_0.Y;
    dVar13 = (this->TileBB).Min.field0_0x0._s_0.Y - (param_1->BBoxGrowthLow).field0_0x0._s_0.Y;
    dVar10 = (param_1->BBoxGrowthLow).field0_0x0._s_0.Z;
    dVar51 = (param_1->BBoxGrowthHigh).field0_0x0._s_0.X;
    dVar15 = (param_1->BBoxGrowthHigh).field0_0x0._s_0.Z + (this->TileBB).Max.field0_0x0._s_0.Z;
    auVar16._8_4_ = SUB84(dVar13,0);
    auVar16._0_8_ = (pTVar4->Min).field0_0x0._s_0.X - (param_1->BBoxGrowthLow).field0_0x0._s_0.X;
    auVar16._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])&(this->TileBBExpandedForAgent).Min.field0_0x0 = auVar16;
    (this->TileBBExpandedForAgent).Min.field0_0x0._s_0.Z = dVar8 - dVar10;
    (this->TileBBExpandedForAgent).Max.field0_0x0._s_0.X = dVar9 + dVar51;
    auVar14._8_4_ = SUB84(dVar15,0);
    auVar14._0_8_ = dVar21 + dVar22;
    auVar14._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->TileBBExpandedForAgent).Max.field0_0x0 + 8) = auVar14;
  }
  *(double *)&(this->TileBBExpandedForAgent).IsValid = local_188;
  local_138._s_0.Z = dVar18;
  dStack_110 = dVar25;
  Unreal2RecastBox((TBox<double> *)&local_100._s_0,pTVar4);
  (this->TileConfig)._padding_ = (longlong)local_100._s_0.X;
  (this->TileConfig)._padding_ = (longlong)local_100._s_0.Y;
  (this->TileConfig)._padding_ = (longlong)local_100._s_0.Z;
  (this->TileConfig)._padding_ = local_e8;
  (this->TileConfig)._padding_ = lStack_e0;
  (this->TileConfig)._padding_ = local_d8;
  uVar42 = *(uint *)&this->field_0x14;
  this->bFullyEncapsulatedByInclusionBounds = 1;
  if (0 < *(int *)&(param_1->InclusionBounds).field_0x10) {
    pTVar5 = &this->InclusionBounds;
    *(uint *)&this->field_0x14 = uVar42 & 0xfffffffd;
    uVar42 = *(uint *)&(param_1->InclusionBounds).field_0x10;
    if ((int)uVar42 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar42);
    }
    puVar1 = &(this->InclusionBounds).field_0x14;
    if (*(int *)&(this->InclusionBounds).field_0x14 < (int)uVar42) {
      UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                (0x38,8,uVar42,(ForAnyElementType *)pTVar5,
                 *(int *)&(this->InclusionBounds).field_0x10,(int *)puVar1);
    }
    iVar32 = *(int *)&(local_210->InclusionBounds).field_0x10;
    pdVar44 = *(double **)&local_210->InclusionBounds;
    pdVar37 = pdVar44 + (longlong)iVar32 * 7;
    local_218 = pdVar37;
    while( true ) {
      if (*(int *)&(local_210->InclusionBounds).field_0x10 != iVar32) {
        local_227 = 0;
        `TCheckedPointerIterator<UE::Math::TBox<double>_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_227);
        pdVar37 = local_218;
      }
      FVar41 = local_220;
      param_1 = local_210;
      if (pdVar44 == pdVar37) break;
      if (((((*pdVar44 <= (this->TileBB).Max.field0_0x0._s_0.X) &&
            ((pTVar4->Min).field0_0x0._s_0.X <= pdVar44[3])) &&
           (pdVar44[1] <= (this->TileBB).Max.field0_0x0._s_0.Y)) &&
          (((this->TileBB).Min.field0_0x0._s_0.Y <= pdVar44[4] &&
           (pdVar44[2] <= (this->TileBB).Max.field0_0x0._s_0.Z)))) &&
         ((this->TileBB).Min.field0_0x0._s_0.Z <= pdVar44[5])) {
        if (((*(double **)&pTVar5->field_0x0 <= pdVar44) &&
            (pdVar44 < *(double **)&pTVar5->field_0x0 + (longlong)*(int *)puVar1 * 7)) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar29)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar30 = *(int *)&(this->InclusionBounds).field_0x10;
        if (iVar30 == *(int *)puVar1) {
          iVar30 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                             (0x838,(ForAnyElementType *)pTVar5,(int *)puVar1);
        }
        *(int *)&(this->InclusionBounds).field_0x10 = iVar30 + 1;
        dVar8 = pdVar44[1];
        lVar39 = (longlong)iVar30 * 0x38;
        lVar11 = *(longlong *)&pTVar5->field_0x0;
        *(double *)(lVar39 + lVar11) = *pdVar44;
        ((double *)(lVar39 + lVar11))[1] = dVar8;
        dVar8 = pdVar44[3];
        pdVar37 = (double *)(lVar39 + 0x10 + lVar11);
        *pdVar37 = pdVar44[2];
        pdVar37[1] = dVar8;
        dVar8 = pdVar44[5];
        pdVar37 = (double *)(lVar39 + 0x20 + lVar11);
        *pdVar37 = pdVar44[4];
        pdVar37[1] = dVar8;
        *(double *)(lVar39 + 0x30 + lVar11) = pdVar44[6];
        dVar8 = (pTVar4->Min).field0_0x0._s_0.X;
        if ((dVar8 < *pdVar44) || (pdVar44[3] < dVar8)) {
LAB_146e72877:
          uVar42 = 0;
        }
        else {
          dVar8 = (this->TileBB).Min.field0_0x0._s_0.Y;
          if ((dVar8 < pdVar44[1]) || (pdVar44[4] < dVar8)) goto LAB_146e72877;
          dVar8 = (this->TileBB).Min.field0_0x0._s_0.Z;
          if ((((((dVar8 < pdVar44[2]) || (pdVar44[5] < dVar8)) ||
                (dVar8 = (this->TileBB).Max.field0_0x0._s_0.X, dVar8 < *pdVar44)) ||
               ((pdVar44[3] < dVar8 ||
                (dVar8 = (this->TileBB).Max.field0_0x0._s_0.Y, dVar8 < pdVar44[1])))) ||
              (pdVar44[4] < dVar8)) ||
             ((dVar8 = (this->TileBB).Max.field0_0x0._s_0.Z, dVar8 < pdVar44[2] ||
              (uVar42 = 2, pdVar44[5] < dVar8)))) goto LAB_146e72877;
        }
        this->bFullyEncapsulatedByInclusionBounds = 0;
        *(uint *)&this->field_0x14 = *(uint *)&this->field_0x14 | uVar42;
        pdVar37 = local_218;
      }
      pdVar44 = pdVar44 + 7;
    }
  }
  if (local_200->ArrayNum != 0) {
    pTVar38 = ARecastNavMesh::GetTileCacheLayers
                        (param_1->DestNavMesh,&local_1d0,this->TileX,this->TileY);
    pTVar6 = &this->CompressedLayers;
    piVar2 = &(this->CompressedLayers).ArrayNum;
    if (pTVar6 != pTVar38) {
      DestructItems<FNavMeshTileData,int>
                ((FNavMeshTileData *)(pTVar6->AllocatorInstance).Data,*piVar2);
      pFVar50 = (pTVar6->AllocatorInstance).Data;
      if (pFVar50 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar50);
      }
      (pTVar6->AllocatorInstance).Data = (pTVar38->AllocatorInstance).Data;
      (pTVar38->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *piVar2 = pTVar38->ArrayNum;
      (this->CompressedLayers).ArrayMax = pTVar38->ArrayMax;
      pTVar38->ArrayNum = 0;
      pTVar38->ArrayMax = 0;
    }
    DestructItems<FNavMeshTileData,int>
              ((FNavMeshTileData *)local_1d0.AllocatorInstance.Data,local_1d0.ArrayNum);
    if ((FNavMeshTileData *)local_1d0.AllocatorInstance.Data != (FNavMeshTileData *)0x0) {
      FMemory::Free(local_1d0.AllocatorInstance.Data);
    }
    this_00 = (FNavMeshTileData *)(pTVar6->AllocatorInstance).Data;
    iVar32 = *piVar2;
    pFVar48 = this_00 + iVar32;
    while( true ) {
      if (*piVar2 != iVar32) {
        local_226 = 0;
        `TCheckedPointerIterator<FNavMeshTileData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_226);
      }
      if (this_00 == pFVar48) break;
      FNavMeshTileData::MakeUnique(this_00);
      this_00 = this_00 + 1;
    }
    if (((this->TileConfig).bGenerateLinks == 0) && ((this->CompressedLayers).ArrayNum != 0))
    goto LAB_146e72977;
  }
  uVar31 = 1;
LAB_146e72977:
  iVar32 = *(int *)&(this->InclusionBounds).field_0x10;
  this->bRegenerateCompressedLayers = uVar31;
  if (iVar32 != 0) {
    if (uVar31 == 0) {
      iVar32 = (this->CompressedLayers).ArrayNum;
      FVar45 = (ForElementType<unsigned_int>)&this->DirtyLayers;
      (this->DirtyLayers).NumBits = iVar32;
      uVar31 = iVar32 + 0x1f;
      uVar42 = uVar31 >> 5;
      if (uVar31 >> 5 != 0) {
        if ((this->DirtyLayers).MaxBits + 0x1fU >> 5 < uVar42) {
          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation((ForElementType<unsigned_int> *)FVar45,0,uVar42,4);
          (this->DirtyLayers).MaxBits = uVar42 << 5;
        }
        FVar49 = (this->DirtyLayers).AllocatorInstance.SecondaryData;
        _Dst = FVar45;
        if (FVar49 != (ForElementType<unsigned_int>)0x0) {
          _Dst = FVar49;
        }
        memset((void *)_Dst,0,(ulonglong)uVar42 << 2);
        iVar32 = (this->DirtyLayers).NumBits;
        uVar42 = iVar32 >> 0x1f & 0x1f;
        uVar31 = iVar32 + uVar42;
        iVar32 = (uVar31 & 0x1f) - uVar42;
        if (iVar32 != 0) {
          FVar49 = (this->DirtyLayers).AllocatorInstance.SecondaryData;
          if (FVar49 != (ForElementType<unsigned_int>)0x0) {
            FVar45 = FVar49;
          }
          puVar3 = (uint *)((longlong)FVar45 + (longlong)((int)uVar31 >> 5) * 4);
          *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)iVar32 & 0x1f);
        }
      }
      iVar32 = (this->CompressedLayers).ArrayNum;
      uVar40 = (ulonglong)iVar32;
      pFVar47 = (this->CompressedLayers).AllocatorInstance.Data;
      local_218 = (double *)CONCAT44(local_218._4_4_,iVar32);
      pFVar50 = pFVar47 + 0x18;
      local_1d8 = pFVar47 + uVar40 * 0x58;
      while( true ) {
        pFVar43 = local_1d8;
        if ((this->CompressedLayers).ArrayNum != (int)uVar40) {
          local_225 = 0;
          `TCheckedPointerIterator<FNavMeshTileData,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_225);
        }
        FVar41 = local_220;
        if (pFVar47 == pFVar43) break;
        iVar32 = local_200->ArrayNum;
        pFVar43 = (local_200->AllocatorInstance).Data;
        pFVar46 = pFVar43 + (longlong)iVar32 * 0x38;
        local_1e0 = pFVar46;
        while( true ) {
          if (local_200->ArrayNum != iVar32) {
            local_224[0] = 0;
            `TCheckedPointerIterator<UE::Math::TBox<double>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_224);
          }
          if (pFVar43 == pFVar46) break;
          local_1b8 = *(double *)pFVar43;
          dStack_1b0 = *(double *)(pFVar43 + 8);
          local_1a8 = *(double *)(pFVar43 + 0x10);
          dStack_1a0 = *(double *)(pFVar43 + 0x18);
          local_198 = *(double *)(pFVar43 + 0x20);
          dStack_190 = *(double *)(pFVar43 + 0x28);
          local_188 = *(double *)(pFVar43 + 0x30);
          if ((((local_1b8 < *(double *)(pFVar50 + 8) || local_1b8 == *(double *)(pFVar50 + 8)) &&
               (*(double *)(pFVar50 + -0x10) <= dStack_1a0)) &&
              (dStack_1b0 < *(double *)(pFVar50 + 0x10) || dStack_1b0 == *(double *)(pFVar50 + 0x10)
              )) && (((*(double *)(pFVar50 + -8) <= local_198 &&
                      (local_1a8 < *(double *)(pFVar50 + 0x18) ||
                       local_1a8 == *(double *)(pFVar50 + 0x18))) &&
                     (*(double *)pFVar50 <= dStack_190)))) {
            iVar30 = *(int *)pFVar47;
            if (((iVar30 < 0) || ((this->DirtyLayers).NumBits <= iVar30)) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar29)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            FVar45 = (this->DirtyLayers).AllocatorInstance.SecondaryData;
            FVar49 = (ForElementType<unsigned_int>)&this->DirtyLayers;
            if (FVar45 != (ForElementType<unsigned_int>)0x0) {
              FVar49 = FVar45;
            }
            iVar33 = iVar30;
            if (iVar30 < 0) {
              iVar33 = iVar30 + 0x1f;
            }
            puVar3 = (uint *)((longlong)FVar49 + (longlong)(iVar33 >> 5) * 4);
            *puVar3 = *puVar3 | 1 << ((byte)iVar30 & 0x1f);
            pFVar46 = local_1e0;
          }
          pFVar43 = pFVar43 + 0x38;
        }
        pFVar47 = pFVar47 + 0x58;
        uVar40 = (ulonglong)local_218 & 0xffffffff;
        pFVar50 = pFVar50 + 0x58;
      }
    }
    if ((local_210->DestNavMesh == (ARecastNavMesh *)0x0) ||
       (local_210->DestNavMesh->bDoFullyAsyncNavDataGathering == 0)) {
      (**(code **)(this->_padding_ + 0x20))(this,local_210,this->bRegenerateCompressedLayers);
    }
    else {
      (**(code **)(this->_padding_ + 0x28))(this,local_210,this->bRegenerateCompressedLayers);
    }
  }
  uVar31 = GetUsedMemCount(this);
  this->UsedMemoryOnStartup = uVar31 + 0x5f8;
  if (bVar27) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar28) {
    FThreadStats::AddMessage(FVar41,CycleScopeEnd);
  }
  return;
}

// SetupTileConfigFromHighestResolution @ 146e73040

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::SetupTileConfigFromHighestResolution
          (FRecastTileGenerator *this,FRecastNavMeshGenerator *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ARecastNavMesh *pAVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FScriptContainerElement FVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement FVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Modifiers).ArrayNum;
  uVar10 = 0;
  pFVar8 = (this->Modifiers).AllocatorInstance.Data;
  bVar5 = false;
  pFVar1 = pFVar8 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->Modifiers).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRecastAreaNavModifierElement,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    FVar9 = SUB81(uVar10,0);
    if (pFVar8 == pFVar1) break;
    FVar7 = pFVar8[0x20];
    if (FVar7 != (FScriptContainerElement)0x3) {
      bVar5 = true;
      if ((byte)FVar7 < (byte)FVar9) {
        FVar7 = FVar9;
      }
      uVar10 = (ulonglong)(byte)FVar7;
    }
    pFVar8 = pFVar8 + 0x28;
  }
  if (FVar9 == (FScriptContainerElement)0x3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("HighestResolution != ENavigationDataResolution::Invalid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                       ,0x7ce,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((((bVar5) &&
       (pAVar3 = param_1->DestNavMesh, 0.0 < pAVar3->NavMeshResolutionParams[uVar10].CellSize)) &&
      (0.0 < pAVar3->NavMeshResolutionParams[uVar10].CellHeight)) &&
     (0.0 < pAVar3->NavMeshResolutionParams[uVar10].AgentMaxStepHeight)) {
    (**(code **)(param_1->_padding_ + 0x78))(param_1,uVar10,&this->TileConfig);
  }
  return;
}

// ValidateAndAppendGeometry @ 146e75ca0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::ValidateAndAppendGeometry
          (FRecastTileGenerator *this,FNavigationRelevantData *param_1,
          FCompositeNavModifier *param_2)

{
  bool bVar1;
  
  bVar1 = FNavigationRelevantData::IsCollisionDataValid(param_1);
  if (bVar1) {
    AppendGeometry(this,param_1,param_2,&param_1->NavDataPerInstanceTransformDelegate);
  }
  return;
}

// ValidateAndAppendGeometry @ 146e75cf0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FRecastTileGenerator::ValidateAndAppendGeometry
          (FRecastTileGenerator *this,TSharedRef<FNavigationRelevantData,1> *param_1,
          FCompositeNavModifier *param_2)

{
  FNavigationRelevantData *this_00;
  bool bVar1;
  
  this_00 = param_1->Object;
  bVar1 = FNavigationRelevantData::IsCollisionDataValid(this_00);
  if (bVar1) {
    AppendGeometry(this,this_00,param_2,&this_00->NavDataPerInstanceTransformDelegate);
  }
  return;
}

// operator() @ 1504fda20

bool __thiscall
`FRecastTileGenerator::RasterizeGeometryRecastTimeSliced'::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4457677437609708333>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4457677437609708333>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fda60

bool __thiscall
`FRecastTileGenerator::RasterizeGeometryTimeSliced'::__l20::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4457677437609708507>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4457677437609708507>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fdce0

bool __thiscall
`FRecastTileGenerator::GenerateTileTimeSliced'::__l30::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4457677437609708100>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4457677437609708100>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fdd20

bool __thiscall
`FRecastTileGenerator::GenerateRecastFilterTimeSliced'::__l35::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4457677437609708718>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4457677437609708718>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fdd60

bool __thiscall
`FRecastTileGenerator::GenerateCompressedLayersTimeSliced'::__l12::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4457677437609708938>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4457677437609708938>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fdda0

bool __thiscall
`FRecastTileGenerator::GenerateNavigationDataTimeSliced'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4457677437609709884>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4457677437609709884>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fdde0

bool __thiscall `FRecastTileGenerator::DoWorkTimeSliced'::__l15::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4457677437609707370>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4457677437609707370>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fde60

bool __thiscall `FRecastTileGenerator::DoWorkTimeSliced'::__l27::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4457677437609707406>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4457677437609707406>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fdea0

bool __thiscall
`FRecastTileGenerator::GenerateNavigationDataTimeSliced'::__l32::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4457677437609709943>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4457677437609709943>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fdee0

bool __thiscall
`FRecastTileGenerator::GenerateTileTimeSliced'::__l51::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4457677437609708143>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4457677437609708143>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fdf20

bool __thiscall
`FRecastTileGenerator::GenerateCompressedLayersTimeSliced'::__l71::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4457677437609709108>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4457677437609709108>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

