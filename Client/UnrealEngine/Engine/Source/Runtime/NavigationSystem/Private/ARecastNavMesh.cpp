// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 192

// StaticClass @ 146dca730

UClass * __cdecl ARecastNavMesh::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ARecastNavMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"RecastNavMesh",
               &Z_Registration_Info_UClass_ARecastNavMesh.InnerSingleton,
               StaticRegisterNativesARecastNavMesh,0x770,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<ARecastNavMesh>,InternalVTableHelperCtorCaller<ARecastNavMesh>,
               local_res8,ANavigationData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ARecastNavMesh.InnerSingleton;
}

// ARecastNavMesh @ 146dd2ff0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ARecastNavMesh * __thiscall
ARecastNavMesh::ARecastNavMesh(ARecastNavMesh *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  ANavigationData::ANavigationData((ANavigationData *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavigationDataInterface__;
  *(undefined8 *)&(this->TileGenerationDebug).TileCoordinate.field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (this->TileGenerationDebug).TileCoordinate.field0_0x0._s_0.Z =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->TileGenerationDebug).MaxTileCoordinate.field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  uVar2 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  (this->TileGenerationDebug).bEnabled = 0;
  (this->TileGenerationDebug).MaxTileCoordinate.field0_0x0._s_0.Z = uVar2;
  *(undefined8 *)&(this->TileGenerationDebug).TileCoordinate.field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (this->TileGenerationDebug).TileCoordinate.field0_0x0._s_0.Z =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->TileGenerationDebug).MaxTileCoordinate.field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  uVar2 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  (this->TileGenerationDebug).bGenerateDebugTileOnly = 0;
  (this->TileGenerationDebug).bCollisionGeometry = 0;
  (this->TileGenerationDebug).bHeightfieldFromRasterization = 0;
  (this->TileGenerationDebug).bUseMaxTileCoordinate = 0;
  (this->TileGenerationDebug).bTileCacheDetailMesh = 0;
  (this->TileGenerationDebug).bTileCachePolyMesh = 0;
  (this->TileGenerationDebug).bTileCacheContours = 0;
  (this->TileGenerationDebug).bSkipContourSimplification = 0;
  (this->TileGenerationDebug).bTileCacheLayerRegions = 0;
  (this->TileGenerationDebug).bTileCacheLayerAreas = 0;
  (this->TileGenerationDebug).bCompactHeightfieldDistances = 0;
  (this->TileGenerationDebug).bCompactHeightfieldRegions = 0;
  (this->TileGenerationDebug).bHeightFieldLayers = 0;
  (this->TileGenerationDebug).bCompactHeightfieldEroded = 0;
  (this->TileGenerationDebug).bCompactHeightfield = 0;
  (this->TileGenerationDebug).bHeightfieldBounds = 0;
  (this->TileGenerationDebug).bHeightfieldPostHeightFiltering = 0;
  (this->TileGenerationDebug).bHeightfieldPostInclusionBoundsFiltering = 0;
  (this->TileGenerationDebug).MaxTileCoordinate.field0_0x0._s_0.Z = uVar2;
  (this->TileGenerationDebug).LinkGenerationDebugFlags = 0;
  (this->TileGenerationDebug).HeightFieldRenderMode = Solid;
  (this->TileGenerationDebug).LinkGenerationSelectedEdge = -1;
  (this->TileGenerationDebug).LinkGenerationSelectedConfig = -1;
  this->NavMeshResolutionParams[0].CellSize = 25.0;
  this->NavMeshResolutionParams[0].CellHeight = 10.0;
  this->NavMeshResolutionParams[0].AgentMaxStepHeight = 35.0;
  this->NavMeshResolutionParams[1].CellSize = 25.0;
  this->NavMeshResolutionParams[1].CellHeight = 10.0;
  this->NavMeshResolutionParams[1].AgentMaxStepHeight = 35.0;
  this->NavMeshResolutionParams[2].CellSize = 25.0;
  this->NavMeshResolutionParams[2].CellHeight = 10.0;
  this->NavMeshResolutionParams[2].AgentMaxStepHeight = 35.0;
  this->bHasNoTileData = false;
  (this->NavLinkJumpConfigs).ArrayNum = 0;
  (this->NavLinkJumpConfigs).ArrayMax = 0;
  *(undefined8 *)&this->OnNavMeshUpdate = 0;
  *(undefined8 *)&(this->OnNavMeshUpdate).field_0x10 = 0;
  (this->NavLinkJumpConfigs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->OnNavMeshUpdate).field_0x8 = 0;
  this->TimeSliceFilterLedgeSpansMaxYProcess = 0xd;
  this->TimeSliceLongDurationDebug = 0.002;
  this->InvokerTilePriorityBumpDistanceThresholdInTileUnits = 1;
  this->InvokerTilePriorityBumpIncrease = '\x01';
  *(undefined8 *)&(this->OnNavMeshUpdate).field_0x18 = 2;
  FUpdateActiveTilesWorkingMem::FUpdateActiveTilesWorkingMem(&this->UpdateActiveTilesWorkingMem);
  return this;
}

// ARecastNavMesh @ 146dd3190

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ARecastNavMesh * __thiscall
ARecastNavMesh::ARecastNavMesh(ARecastNavMesh *this,FObjectInitializer *param_1)

{
  TArray<FNavLinkGenerationJumpConfig,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  FName FVar5;
  longlong lVar6;
  UClass *pUVar7;
  code *pcVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FPImplRecastNavMesh *this_02;
  FPImplRecastNavMesh *pFVar14;
  FSupportedAreaData *pFVar15;
  ARecastNavMesh *pAVar16;
  longlong lVar17;
  FName local_res8;
  UClass *local_res18;
  UClass *local_res20;
  UClass *local_a8;
  FStatMessage local_a0;
  FName local_90;
  FSupportedAreaData local_88;
  FSupportedAreaData local_68;
  FSupportedAreaData local_48;
  
  ANavigationData::ANavigationData((ANavigationData *)this,param_1);
  this->DrawOffset = 10.0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  pTVar1 = &this->NavLinkJumpConfigs;
  pFVar14 = (FPImplRecastNavMesh *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INavigationDataInterface__;
  puVar3 = &this->field_0x518;
  this->bDrawFilledPolys = 1;
  this->bDistinctlyDrawTilesBeingBuilt = 1;
  this->bDrawMarkedForbiddenPolys = 0;
  this->bDrawOctreeDetails = 1;
  this->bDrawNavLinks = 1;
  this->bDrawNavMeshEdges = 1;
  *(undefined8 *)&(this->TileGenerationDebug).TileCoordinate.field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (this->TileGenerationDebug).TileCoordinate.field0_0x0._s_0.Z =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->TileGenerationDebug).MaxTileCoordinate.field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  uVar9 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  (this->TileGenerationDebug).bEnabled = 0;
  (this->TileGenerationDebug).MaxTileCoordinate.field0_0x0._s_0.Z = uVar9;
  *(undefined8 *)&(this->TileGenerationDebug).TileCoordinate.field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (this->TileGenerationDebug).TileCoordinate.field0_0x0._s_0.Z =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->TileGenerationDebug).MaxTileCoordinate.field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  uVar9 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  (this->TileGenerationDebug).bGenerateDebugTileOnly = 0;
  (this->TileGenerationDebug).bCollisionGeometry = 0;
  (this->TileGenerationDebug).bHeightfieldFromRasterization = 0;
  (this->TileGenerationDebug).bUseMaxTileCoordinate = 0;
  (this->TileGenerationDebug).bTileCacheDetailMesh = 0;
  (this->TileGenerationDebug).bTileCachePolyMesh = 0;
  (this->TileGenerationDebug).bTileCacheContours = 0;
  (this->TileGenerationDebug).bSkipContourSimplification = 0;
  (this->TileGenerationDebug).bTileCacheLayerRegions = 0;
  (this->TileGenerationDebug).bTileCacheLayerAreas = 0;
  (this->TileGenerationDebug).bCompactHeightfieldDistances = 0;
  (this->TileGenerationDebug).bCompactHeightfieldRegions = 0;
  (this->TileGenerationDebug).bHeightFieldLayers = 0;
  (this->TileGenerationDebug).bCompactHeightfieldEroded = 0;
  (this->TileGenerationDebug).bCompactHeightfield = 0;
  (this->TileGenerationDebug).bHeightfieldBounds = 0;
  (this->TileGenerationDebug).bHeightfieldPostHeightFiltering = 0;
  (this->TileGenerationDebug).bHeightfieldPostInclusionBoundsFiltering = 0;
  (this->TileGenerationDebug).MaxTileCoordinate.field0_0x0._s_0.Z = uVar9;
  (this->TileGenerationDebug).HeightFieldRenderMode = Solid;
  (this->TileGenerationDebug).LinkGenerationDebugFlags = 0;
  (this->TileGenerationDebug).LinkGenerationSelectedEdge = -1;
  (this->TileGenerationDebug).LinkGenerationSelectedConfig = -1;
  this->TilePoolSize = 0x400;
  this->NavMeshResolutionParams[0].CellSize = 25.0;
  this->NavMeshResolutionParams[0].CellHeight = 10.0;
  this->NavMeshResolutionParams[0].AgentMaxStepHeight = 35.0;
  this->NavMeshResolutionParams[1].CellSize = 25.0;
  this->NavMeshResolutionParams[1].CellHeight = 10.0;
  this->NavMeshResolutionParams[1].AgentMaxStepHeight = 35.0;
  this->NavMeshResolutionParams[2].CellSize = 25.0;
  this->NavMeshResolutionParams[2].CellHeight = 10.0;
  this->NavMeshResolutionParams[2].AgentMaxStepHeight = 35.0;
  this->bHasNoTileData = false;
  this->MaxVerticalMergeError = 0x7fffffff;
  puVar3 = &this->field_0x5f8;
  this->bSortNavigationAreasByCost = 1;
  this->bAllowNavLinkAsPathEnd = 0;
  this->bUseVirtualGeometryFilteringAndDirtying = 0;
  this->bUseVirtualFilters = 1;
  this->bStoreEmptyTileLayers = 0;
  this->bFilterLowSpanFromTileCache = 0;
  this->bFilterLowSpanSequences = 0;
  this->bUseExtraTopCellWhenMarkingAreas = 1;
  this->bMarkLowHeightAreas = 0;
  this->bPerformVoxelFiltering = 1;
  this->bGenerateNavLinks = 0;
  this->bIsWorldPartitioned = 0;
  this->TimeSliceLongDurationDebug = 0.002;
  this->MaxSimplificationError = 1.3;
  this->SimplificationElevationRatio = 0.0;
  this->DefaultMaxSearchNodes = 2048.0;
  this->DefaultMaxHierarchicalSearchNodes = 2048.0;
  this->TimeSliceFilterLedgeSpansMaxYProcess = 0xd;
  this->InvokerTilePriorityBumpDistanceThresholdInTileUnits = 1;
  this->InvokerTilePriorityBumpIncrease = '\x01';
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->NavLinkJumpConfigs).ArrayNum = 0;
  (this->NavLinkJumpConfigs).ArrayMax = 0;
  this->TileSetUpdateInterval = 1.0;
  *(undefined8 *)&this->OnNavMeshUpdate = 0;
  *(undefined8 *)&(this->OnNavMeshUpdate).field_0x8 = 0;
  *(undefined8 *)&(this->OnNavMeshUpdate).field_0x10 = 0;
  *(undefined8 *)&(this->OnNavMeshUpdate).field_0x18 = 2;
  FUpdateActiveTilesWorkingMem::FUpdateActiveTilesWorkingMem(&this->UpdateActiveTilesWorkingMem);
  this->bDoFullyAsyncNavDataGathering = 0;
  this->NavMeshVersion = 0x1b;
  this->RecastNavMeshImpl = (FPImplRecastNavMesh *)0x0;
  this->HeuristicScale = 0.999;
  this->LedgeSlopeFilterMode = Recast;
  this->RegionPartitioning = '\x01';
  (this->LayerPartitioning).Value = '\x01';
  this->RegionChunkSplits = 2;
  this->LayerChunkSplits = 2;
  this->MaxSimultaneousTileGenerationJobsCount = 0x400;
  this->TileNumberHardLimit = 0x100000;
  this->ExpectedMaxLayersPerTile = 0xc;
  this->BatchQueryCounter = 0;
  iVar11 = (this->NavLinkJumpConfigs).ArrayNum;
  if (iVar11 == (this->NavLinkJumpConfigs).ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x860,&pTVar1->AllocatorInstance,&(this->NavLinkJumpConfigs).ArrayMax);
  }
  (this->NavLinkJumpConfigs).ArrayNum = iVar11 + 1;
  DefaultConstructItems<FNavLinkGenerationJumpConfig,int>
            ((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 0x60,1);
  if ((this->_padding_ & 0x10) == 0) {
    FVar13 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar12 = ::FName::FName(&local_90,"STAT_NavigationMemory");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar12,
                          L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                          false,ST_int64,false,false,MCR_Physical);
    }
    FVar5 = *(FName *)FVar13;
    local_res8 = FVar5;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_a0.NameAndInfo.Number = FVar5.Number & 0xffffafff | 0xa000;
      local_a0.StatData.Pad[0] = 'p';
      local_a0.StatData.Pad[1] = '\a';
      local_a0.StatData.Pad[2] = '\0';
      local_a0.StatData.Pad[3] = '\0';
      local_a0.StatData.Pad[4] = '\0';
      local_a0.StatData.Pad[5] = '\0';
      local_a0.StatData.Pad[6] = '\0';
      local_a0.StatData.Pad[7] = '\0';
      local_res8 = FVar5;
      local_a0.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_a0);
      FStatsTrace::Add(&local_res8,0x770);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
    this->_padding_ = (longlong)FindPath;
    this->_padding_ = (longlong)FindPath;
    this->_padding_ = (longlong)TestPath;
    this->_padding_ = (longlong)TestHierarchicalPath;
    this->_padding_ = (longlong)NavMeshRaycast;
    this_02 = ::operator_new(0x150);
    if (this_02 != (FPImplRecastNavMesh *)0x0) {
      pFVar14 = FPImplRecastNavMesh::FPImplRecastNavMesh(this_02,this);
    }
    this->RecastNavMeshImpl = pFVar14;
    plVar4 = &this->_padding_;
    local_res18 = Z_Construct_UClass_UNavArea_Null_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    pFVar15 = FSupportedAreaData::FSupportedAreaData
                        (&local_88,(TSubclassOf<UNavArea>)&local_res18,0);
    if ((((FSupportedAreaData *)*plVar4 <= pFVar15) &&
        (pFVar15 < (FSupportedAreaData *)*plVar4 + *(int *)((longlong)&this->_padding_ + 4))) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar8 = (code *)swi(3);
      pAVar16 = (ARecastNavMesh *)(*pcVar8)();
      return pAVar16;
    }
    iVar11 = (int)this->_padding_;
    if (iVar11 == *(int *)((longlong)&this->_padding_ + 4)) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,(ForAnyElementType *)plVar4,(int *)((longlong)&this->_padding_ + 4))
      ;
    }
    lVar6 = *plVar4;
    *(int *)&this->_padding_ = iVar11 + 1;
    lVar17 = (longlong)iVar11 * 0x20;
    *(undefined8 *)(lVar6 + lVar17) = 0;
    *(FScriptContainerElement **)(lVar6 + lVar17) =
         (pFVar15->AreaClassName).Data.AllocatorInstance.Data;
    (pFVar15->AreaClassName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(lVar6 + lVar17 + 8) = (pFVar15->AreaClassName).Data.ArrayNum;
    *(int *)(lVar6 + lVar17 + 0xc) = (pFVar15->AreaClassName).Data.ArrayMax;
    (pFVar15->AreaClassName).Data.ArrayNum = 0;
    (pFVar15->AreaClassName).Data.ArrayMax = 0;
    *(int *)(lVar6 + lVar17 + 0x10) = pFVar15->AreaID;
    pUVar7 = (pFVar15->AreaClass).field0_0x0.DebugPtr;
    *(UClass **)(lVar6 + lVar17 + 0x18) = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    if (local_88.AreaClassName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AreaClassName.Data.AllocatorInstance.Data);
    }
    local_res20 = Z_Construct_UClass_UNavArea_LowHeight_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    pFVar15 = FSupportedAreaData::FSupportedAreaData
                        (&local_68,(TSubclassOf<UNavArea>)&local_res20,0x3e);
    if ((((FSupportedAreaData *)*plVar4 <= pFVar15) &&
        (pFVar15 < (FSupportedAreaData *)*plVar4 + *(int *)((longlong)&this->_padding_ + 4))) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar8 = (code *)swi(3);
      pAVar16 = (ARecastNavMesh *)(*pcVar8)();
      return pAVar16;
    }
    iVar11 = (int)this->_padding_;
    if (iVar11 == *(int *)((longlong)&this->_padding_ + 4)) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,(ForAnyElementType *)plVar4,(int *)((longlong)&this->_padding_ + 4))
      ;
    }
    lVar6 = *plVar4;
    *(int *)&this->_padding_ = iVar11 + 1;
    lVar17 = (longlong)iVar11 * 0x20;
    *(undefined8 *)(lVar6 + lVar17) = 0;
    *(FScriptContainerElement **)(lVar6 + lVar17) =
         (pFVar15->AreaClassName).Data.AllocatorInstance.Data;
    (pFVar15->AreaClassName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(lVar6 + lVar17 + 8) = (pFVar15->AreaClassName).Data.ArrayNum;
    *(int *)(lVar6 + lVar17 + 0xc) = (pFVar15->AreaClassName).Data.ArrayMax;
    (pFVar15->AreaClassName).Data.ArrayNum = 0;
    (pFVar15->AreaClassName).Data.ArrayMax = 0;
    *(int *)(lVar6 + lVar17 + 0x10) = pFVar15->AreaID;
    pUVar7 = (pFVar15->AreaClass).field0_0x0.DebugPtr;
    *(UClass **)(lVar6 + lVar17 + 0x18) = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    if (local_68.AreaClassName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AreaClassName.Data.AllocatorInstance.Data);
    }
    local_a8 = Z_Construct_UClass_UNavArea_Default_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_a8);
    }
    pFVar15 = FSupportedAreaData::FSupportedAreaData
                        (&local_48,(TSubclassOf<UNavArea>)&local_a8,0x3f);
    if ((((FSupportedAreaData *)*plVar4 <= pFVar15) &&
        (pFVar15 < (FSupportedAreaData *)*plVar4 + *(int *)((longlong)&this->_padding_ + 4))) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar8 = (code *)swi(3);
      pAVar16 = (ARecastNavMesh *)(*pcVar8)();
      return pAVar16;
    }
    iVar11 = (int)this->_padding_;
    if (iVar11 == *(int *)((longlong)&this->_padding_ + 4)) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,(ForAnyElementType *)plVar4,(int *)((longlong)&this->_padding_ + 4))
      ;
    }
    lVar6 = *plVar4;
    *(int *)&this->_padding_ = iVar11 + 1;
    lVar17 = (longlong)iVar11 * 0x20;
    *(undefined8 *)(lVar6 + lVar17) = 0;
    *(FScriptContainerElement **)(lVar6 + lVar17) =
         (pFVar15->AreaClassName).Data.AllocatorInstance.Data;
    (pFVar15->AreaClassName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(lVar6 + lVar17 + 8) = (pFVar15->AreaClassName).Data.ArrayNum;
    *(int *)(lVar6 + lVar17 + 0xc) = (pFVar15->AreaClassName).Data.ArrayMax;
    (pFVar15->AreaClassName).Data.ArrayNum = 0;
    (pFVar15->AreaClassName).Data.ArrayMax = 0;
    *(int *)(lVar6 + lVar17 + 0x10) = pFVar15->AreaID;
    pUVar7 = (pFVar15->AreaClass).field0_0x0.DebugPtr;
    *(UClass **)(lVar6 + lVar17 + 0x18) = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    if (local_48.AreaClassName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AreaClassName.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

// ~ARecastNavMesh @ 146dd92a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ARecastNavMesh::~ARecastNavMesh(ARecastNavMesh *this)

{
  FName FVar1;
  FPImplRecastNavMesh *this_00;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar5;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName local_res8;
  FStatMessage local_18;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavigationDataInterface__;
  if ((this->_padding_ & 0x10) == 0) {
    FVar5 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar4 = ::FName::FName(&local_res8,"STAT_NavigationMemory");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar4,
                         L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                         false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar5;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_18.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_18.StatData.Pad[0] = 'p';
      local_18.StatData.Pad[1] = '\a';
      local_18.StatData.Pad[2] = '\0';
      local_18.StatData.Pad[3] = '\0';
      local_18.StatData.Pad[4] = '\0';
      local_18.StatData.Pad[5] = '\0';
      local_18.StatData.Pad[6] = '\0';
      local_18.StatData.Pad[7] = '\0';
      local_res8 = FVar1;
      local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_01,&local_18);
      FStatsTrace::Add(&local_res8,-0x770);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
    this_00 = this->RecastNavMeshImpl;
    if (this_00 != (FPImplRecastNavMesh *)0x0) {
      FPImplRecastNavMesh::~FPImplRecastNavMesh(this_00);
      ::operator_delete(this_00,0x150);
      this->RecastNavMeshImpl = (FPImplRecastNavMesh *)0x0;
    }
  }
  FUpdateActiveTilesWorkingMem::~FUpdateActiveTilesWorkingMem(&this->UpdateActiveTilesWorkingMem);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnNavMeshUpdate).field_0x8,*(int *)&(this->OnNavMeshUpdate).field_0x10);
  pvVar2 = *(void **)&(this->OnNavMeshUpdate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNavMeshUpdate);
  pFVar3 = (this->NavLinkJumpConfigs).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  ANavigationData::~ANavigationData((ANavigationData *)this);
  return;
}

// operator() @ 146ddb670

bool __thiscall
`ARecastNavMesh::CreateSegmentLinkConnections'::__l2::<lambda_1>::operator()
          (void *this,FNavTileRef param_1,FNavTileRef param_2)

{
  dtMeshHeader *pdVar1;
  dtMeshHeader *pdVar2;
  dtMeshTile *pdVar3;
  dtMeshTile *pdVar4;
  
  pdVar3 = dtNavMesh::getTileByRef
                     (*(dtNavMesh **)(*(longlong *)(*(longlong *)this + 0x760) + 8),param_1.TileRef)
  ;
  pdVar4 = dtNavMesh::getTileByRef
                     (*(dtNavMesh **)(*(longlong *)(*(longlong *)this + 0x760) + 8),param_2.TileRef)
  ;
  if ((((pdVar3 != (dtMeshTile *)0x0) && (pdVar1 = pdVar3->header, pdVar1 != (dtMeshHeader *)0x0))
      && (pdVar4 != (dtMeshTile *)0x0)) &&
     ((pdVar2 = pdVar4->header, pdVar2 != (dtMeshHeader *)0x0 &&
      (((pdVar1->x < pdVar2->x || (pdVar1->y < pdVar2->y)) || (pdVar1->layer < pdVar2->layer)))))) {
    return true;
  }
  return false;
}

// AddTileCacheLayers @ 146ddf030

void __thiscall
ARecastNavMesh::AddTileCacheLayers
          (ARecastNavMesh *this,int param_1,int param_2,
          TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> *param_3)

{
  TPairInitializer<UE::Math::TIntPoint<int>_&&,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_const_&>
  local_res8 [2];
  int local_28;
  int local_24;
  int *local_20;
  TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> *local_18;
  
  if (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) {
    local_20 = &local_28;
    local_28 = param_1;
    local_24 = param_2;
    local_18 = param_3;
    TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UE::Math::TIntPoint<int>_&&,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_const_&>_>
              ((TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&this->RecastNavMeshImpl->CompressedTileCacheLayers,local_res8,(bool *)&local_20);
  }
  return;
}

// AddTileDebugData @ 146ddf0c0

void __thiscall
ARecastNavMesh::AddTileDebugData
          (ARecastNavMesh *this,int param_1,int param_2,FRecastInternalDebugData *param_3)

{
  TPairInitializer<UE::Math::TIntPoint<int>_&&,FRecastInternalDebugData_const_&> local_res8 [2];
  int local_28;
  int local_24;
  int *local_20;
  FRecastInternalDebugData *local_18;
  
  if (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) {
    local_20 = &local_28;
    local_28 = param_1;
    local_24 = param_2;
    local_18 = param_3;
    TSet<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UE::Math::TIntPoint<int>_&&,FRecastInternalDebugData_const_&>_>
              ((TSet<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>,FDefaultSetAllocator>
                *)&this->RecastNavMeshImpl->DebugDataMap,local_res8,(bool *)&local_20);
  }
  return;
}

// AdjustLocationWithFilter @ 146ddf4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
ARecastNavMesh::AdjustLocationWithFilter
          (ARecastNavMesh *this,TVector<double> *param_1,TVector<double> *param_2,
          FNavigationQueryFilter *param_3,UObject *param_4)

{
  undefined8 uVar1;
  dtNavMesh *pdVar2;
  INavigationQueryFilterInterface *pIVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  TVector<double> *pTVar9;
  dtQueryFilter *pdVar10;
  dtNavMeshQuery *this_00;
  uint uVar11;
  uint uVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStackY_1d8 [32];
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  ulong64 local_168;
  TVector<double>_u_0 local_160;
  TVector<double> local_148;
  dtNavMeshQuery local_128;
  double local_88;
  double local_80;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((((this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) ||
       (pdVar2 = this->RecastNavMeshImpl->DetourNavMesh, pdVar2 == (dtNavMesh *)0x0)) ||
      (pdVar2->m_tileWidth <= 0.0)) || (pdVar2->m_tileHeight <= 0.0)) {
    bVar7 = false;
  }
  else {
    dtNavMeshQuery::dtNavMeshQuery(&local_128);
    bVar7 = IsInGameThread();
    if (bVar7) {
      this_00 = &this->RecastNavMeshImpl->SharedNavQuery;
    }
    else {
      this_00 = &local_128;
    }
    dtNavMeshQuery::init
              (this_00,this->RecastNavMeshImpl->DetourNavMesh,param_3->MaxSearchNodes,
               (dtQuerySpecialLinkFilter *)0x0);
    local_160._s_0.Z = (double)this->_padding_;
    local_88 = (double)this->_padding_;
    local_78 = this->_padding_;
    local_80 = __real_4290000000000000;
    if (local_160._s_0.Z < __real_4290000000000000) {
      local_80 = (double)this->VerticalDeviationFromGroundCompensation;
      if (local_80 <= 0.0) {
        local_80 = 0.0;
      }
      local_80 = local_80 + local_160._s_0.Z;
    }
    pIVar3 = (param_3->QueryFilterImpl).Object;
    pdVar10 = (dtQueryFilter *)(pIVar3 + 1);
    if (pIVar3 == (INavigationQueryFilterInterface *)0x0) {
      pdVar10 = (dtQueryFilter *)0x0;
    }
    if (pdVar10 == (dtQueryFilter *)0x0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6996127874050690293>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                         ,0xcf5,"QueryFilter");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
    }
    local_190 = (param_1->field0_0x0)._s_0.Z;
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    uVar14 = (uint)__xmm_80000000000000008000000000000000;
    uVar15 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_188 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar15,(uint)uVar1 ^ uVar14);
    uVar11 = (uint)*(undefined8 *)&param_1->field0_0x0 ^ uVar14;
    uVar12 = (uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) ^ uVar15;
    local_180 = (double)CONCAT44(uVar12,uVar11);
    local_198 = (double)CONCAT44(uVar12,uVar11);
    local_168 = 0;
    local_178 = local_190;
    local_170 = local_188;
    dtNavMeshQuery::findNearestPoly
              (this_00,&local_180,&local_88,pdVar10,&local_168,&local_198,(double *)0x0);
    dVar6 = local_190;
    bVar7 = __real_3f1a36e2e0000000 <=
            (local_190 - local_178) * (local_190 - local_178) +
            (local_198 - local_180) * (local_198 - local_180) +
            (local_188 - local_170) * (local_188 - local_170);
    if (bVar7) {
      uVar11 = SUB84(local_198,0) ^ uVar14;
      uVar12 = (uint)((ulonglong)local_198 >> 0x20) ^ uVar15;
      (param_2->field0_0x0)._s_0.X = (double)CONCAT44(uVar12,uVar11);
      uVar14 = SUB84(local_188,0) ^ uVar14;
      uVar15 = (uint)((ulonglong)local_188 >> 0x20) ^ uVar15;
      (param_2->field0_0x0)._s_0.Y = (double)CONCAT44(uVar15,uVar14);
      (param_2->field0_0x0)._s_0.Z = local_190;
      local_160._s_0.X = (double)CONCAT44(uVar12,uVar11) - (param_1->field0_0x0)._s_0.X;
      local_160._s_0.Y = (double)CONCAT44(uVar15,uVar14) - (param_1->field0_0x0)._s_0.Y;
      local_160._s_0.Z = local_190 - (param_1->field0_0x0)._s_0.Z;
      pTVar9 = UE::Math::TVector<double>::GetSafeNormal
                         ((TVector<double> *)&local_160._s_0,&local_148,__real_3e45798ee0000000,
                          &UE::Math::TVector<double>::ZeroVector);
      dVar13 = (pTVar9->field0_0x0)._s_0.Z * __real_3fb99999a0000000;
      dVar5 = (pTVar9->field0_0x0)._s_0.X * __real_3fb99999a0000000;
      (param_2->field0_0x0)._s_0.Y =
           (double)CONCAT44(uVar15,uVar14) + (pTVar9->field0_0x0)._s_0.Y * __real_3fb99999a0000000;
      (param_2->field0_0x0)._s_0.Z = dVar6 + dVar13;
      (param_2->field0_0x0)._s_0.X = dVar5 + (double)CONCAT44(uVar12,uVar11);
    }
    else {
      dVar6 = (param_1->field0_0x0)._s_0.Y;
      (param_2->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
      (param_2->field0_0x0)._s_0.Y = dVar6;
      (param_2->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    }
    dtNavMeshQuery::~dtNavMeshQuery(&local_128);
  }
  return bVar7;
}

// ApplyWorldOffset @ 146ddfc10

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
ARecastNavMesh::ApplyWorldOffset(ARecastNavMesh *this,TVector<double> *param_1,bool param_2)

{
  undefined8 uVar1;
  dtNavMesh *this_00;
  double local_28;
  double local_20;
  undefined8 local_18;
  
  if ((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) &&
     (this_00 = this->RecastNavMeshImpl->DetourNavMesh, this_00 != (dtNavMesh *)0x0)) {
    local_28 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                (uint)*(undefined8 *)&param_1->field0_0x0 ^
                                (uint)__xmm_80000000000000008000000000000000);
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    local_18 = CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
    local_20 = (param_1->field0_0x0)._s_0.Z;
    dtNavMesh::applyWorldOffset(this_00,&local_28);
  }
  ANavigationData::ApplyWorldOffset((ANavigationData *)this,param_1,param_2);
  RequestDrawingUpdate(this,false);
  return;
}

// AttachNavMeshDataChunk @ 146ddff50

void __thiscall
ARecastNavMesh::AttachNavMeshDataChunk(ARecastNavMesh *this,URecastNavMeshDataChunk *param_1)

{
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_18;
  
  URecastNavMeshDataChunk::AttachTiles(param_1,&local_18,this);
  if (0 < local_18.ArrayNum) {
    InvalidateAffectedPaths(this,&local_18);
    RequestDrawingUpdate(this,false);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// BatchProjectPoints @ 146ddffb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ARecastNavMesh::BatchProjectPoints
          (ARecastNavMesh *this,
          TArray<FNavigationProjectionWork,TSizedDefaultAllocator<32>_> *param_1,
          TVector<double> *param_2,TSharedPtr<FNavigationQueryFilter_const_,1> *param_3,
          UObject *param_4)

{
  dtQueryFilter *pdVar1;
  double dVar2;
  double dVar3;
  INavigationQueryFilterInterface *pIVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  dtNavMeshQuery *this_00;
  double dVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  FNavigationQueryFilter *pFVar14;
  UWorld *pUVar15;
  UClass *pUVar16;
  int iVar17;
  uint uVar18;
  UNavigationSystemBase *pUVar19;
  UNavigationSystemBase *pUVar20;
  uint uVar21;
  double dVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auStackY_258 [32];
  dtNavMeshQuery *local_218;
  UObject *local_210;
  TSharedPtr<FNavigationQueryFilter_const_,1> *local_208;
  dtQuerySpecialLinkFilter local_200;
  UNavigationSystemBase *local_1f8;
  FWeakObjectPtr local_1f0;
  undefined8 local_1e8;
  double local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  double local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  double local_190;
  dtNavMeshQuery *pdStack_188;
  dtNavMeshQuery local_178;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_208 = param_3;
  if (((param_1->ArrayNum == 0) || (this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0)) ||
     (this->RecastNavMeshImpl->DetourNavMesh == (dtNavMesh *)0x0)) goto LAB_146de058c;
  local_1b0.Object = param_3->Object;
  local_1b0.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_1b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar14 = GetRightFilterRef(this,&local_1b0);
  pUVar15 = AActor::GetWorld((AActor *)this);
  pUVar19 = (UNavigationSystemBase *)0x0;
  if ((pUVar15 == (UWorld *)0x0) ||
     (pUVar20 = (pUVar15->NavigationSystem).field0_0x0.DebugPtr,
     pUVar20 == (UNavigationSystemBase *)0x0)) {
LAB_146de0082:
    local_1f8 = pUVar19;
  }
  else {
    pUVar16 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar17 = (int)pUVar16->_padding_;
    if ((*(int *)(*(longlong *)&pUVar20->field_0x10 + 0x38) < iVar17) ||
       (local_1f8 = pUVar20,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar20->field_0x10 + 0x30) + (longlong)iVar17 * 8) !=
       &pUVar16->_padding_)) goto LAB_146de0082;
  }
  local_200 = (dtQuerySpecialLinkFilter)&___7FRecastSpeciaLinkFilter__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_4);
  }
  local_1f0.ObjectIndex = 0;
  local_1f0.ObjectSerialNumber = 0;
  local_210 = param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_4);
  }
  FWeakObjectPtr::operator=(&local_1f0,(FObjectPtr)&local_210);
  local_1e8 = 0;
  dtNavMeshQuery::dtNavMeshQuery(&local_178);
  bVar11 = IsInGameThread();
  if (bVar11) {
    local_218 = &this->RecastNavMeshImpl->SharedNavQuery;
  }
  else {
    local_218 = &local_178;
  }
  dtNavMeshQuery::init
            (local_218,this->RecastNavMeshImpl->DetourNavMesh,pFVar14->MaxSearchNodes,&local_200);
  this_00 = local_218;
  pIVar4 = (pFVar14->QueryFilterImpl).Object;
  if ((pIVar4 == (INavigationQueryFilterInterface *)0x0) ||
     (pdVar1 = (dtQueryFilter *)(pIVar4 + 1), pdVar1 == (dtQueryFilter *)0x0)) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6996127874050689053>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                        ,0x81d,"QueryFilter");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    dVar2 = (param_2->field0_0x0)._s_0.Z;
    dVar9 = __real_4290000000000000;
    if (dVar2 < __real_4290000000000000) {
      dVar9 = (double)this->VerticalDeviationFromGroundCompensation;
      if (dVar9 <= 0.0) {
        dVar9 = 0.0;
      }
      dVar9 = dVar9 + dVar2;
    }
    dVar2 = (param_2->field0_0x0)._s_0.X;
    dVar3 = (param_2->field0_0x0)._s_0.Y;
    iVar17 = param_1->ArrayNum;
    local_1e0 = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    local_1d8 = CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    local_1d0 = CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (0 < iVar17) {
      uVar27 = (uint)__xmm_80000000000000008000000000000000;
      uVar28 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      pUVar20 = pUVar19;
      do {
        uVar18 = (uint)pUVar19;
        uVar21 = ~uVar18 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar18 < iVar17) {
          uVar12 = uVar21;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (param_1->AllocatorInstance).Data;
        local_1b8 = CONCAT44((uint)((ulonglong)
                                    *(undefined8 *)(&pUVar20->field_0x8 + (longlong)pFVar5) >> 0x20)
                             ^ uVar28,(uint)*(undefined8 *)(&pUVar20->field_0x8 + (longlong)pFVar5)
                                      ^ uVar27);
        local_1c0 = *(undefined8 *)(&pUVar20->field_0x10 + (longlong)pFVar5);
        local_1c8 = (double)CONCAT44((uint)((ulonglong)
                                            *(undefined8 *)(&pUVar20->field_0x0 + (longlong)pFVar5)
                                           >> 0x20) ^ uVar28,
                                     (uint)*(undefined8 *)(&pUVar20->field_0x0 + (longlong)pFVar5) ^
                                     uVar27);
        uVar12 = 0;
        if ((int)uVar18 < param_1->ArrayNum) {
          uVar12 = uVar21;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (((&pUVar20[2].field_0x20)[(longlong)(param_1->AllocatorInstance).Data] & 1) == 0) {
          dtNavMeshQuery::findNearestPoly
                    (this_00,&local_1c8,&local_1e0,pdVar1,(ulong64 *)&local_218,&local_d8,
                     (double *)0x0);
        }
        else {
          dtNavMeshQuery::findNearestPoly2D
                    (this_00,&local_1c8,&local_1e0,pdVar1,(ulong64 *)&local_218,&local_d8,
                     (double *)0x0,0.0);
        }
        dVar10 = local_d0;
        if (local_218 != (dtNavMeshQuery *)0x0) {
          uVar13 = 0;
          uVar23 = SUB84(local_d8,0) ^ uVar27;
          uVar24 = (uint)((ulonglong)local_d8 >> 0x20) ^ uVar28;
          uVar12 = uVar13;
          if ((int)uVar18 < param_1->ArrayNum) {
            uVar12 = uVar21;
          }
          uVar25 = (uint)local_c8 ^ uVar27;
          uVar26 = (uint)((ulonglong)local_c8 >> 0x20) ^ uVar28;
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (param_1->AllocatorInstance).Data;
          dVar8 = *(double *)(&pUVar20->field_0x0 + (longlong)pFVar5) -
                  (double)CONCAT44(uVar24,uVar23);
          dVar7 = *(double *)(&pUVar20->field_0x10 + (longlong)pFVar5) - dVar10;
          dVar22 = *(double *)(&pUVar20->field_0x8 + (longlong)pFVar5) -
                   (double)CONCAT44(uVar26,uVar25);
          if (dVar22 * dVar22 + dVar8 * dVar8 + dVar7 * dVar7 <=
              dVar2 * dVar2 + dVar3 * dVar3 + dVar9 * dVar9) {
            pdStack_188 = local_218;
            local_1a0 = CONCAT44(uVar24,uVar23);
            uVar12 = uVar13;
            if ((int)uVar18 < param_1->ArrayNum) {
              uVar12 = uVar21;
            }
            uStack_198 = CONCAT44(uVar26,uVar25);
            local_190 = dVar10;
            if ((uVar12 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar5 = (param_1->AllocatorInstance).Data;
            *(undefined8 *)(&pUVar20[2].field_0x0 + (longlong)pFVar5) = local_1a0;
            *(undefined8 *)((longlong)(&pUVar20[2].field_0x0 + (longlong)pFVar5) + 8) = uStack_198;
            *(double *)(&pUVar20[2].field_0x10 + (longlong)pFVar5) = local_190;
            *(dtNavMeshQuery **)((longlong)(&pUVar20[2].field_0x10 + (longlong)pFVar5) + 8) =
                 pdStack_188;
            if ((int)uVar18 < param_1->ArrayNum) {
              uVar13 = uVar21;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(uint *)(&pUVar20[2].field_0x20 + (longlong)(param_1->AllocatorInstance).Data) =
                 *(uint *)(&pUVar20[2].field_0x20 + (longlong)(param_1->AllocatorInstance).Data) | 2
            ;
          }
        }
        iVar17 = param_1->ArrayNum;
        pUVar19 = (UNavigationSystemBase *)(ulonglong)(uVar18 + 1);
        pUVar20 = pUVar20 + 3;
      } while ((int)(uVar18 + 1) < iVar17);
    }
  }
  dtNavMeshQuery::~dtNavMeshQuery(&local_178);
  local_200 = (dtQuerySpecialLinkFilter)&___7dtQuerySpecialLinkFilter__6B_;
LAB_146de058c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_208->SharedReferenceCount).ReferenceController);
  return;
}

// BatchProjectPoints @ 146de05c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ARecastNavMesh::BatchProjectPoints
          (ARecastNavMesh *this,
          TArray<FNavigationProjectionWork,TSizedDefaultAllocator<32>_> *param_1,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_2,UObject *param_3)

{
  dtQueryFilter *pdVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UNavigationSystemBase *pUVar4;
  INavigationQueryFilterInterface *pIVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  FNavigationQueryFilter *pFVar17;
  UWorld *pUVar18;
  UClass *pUVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  dtNavMeshQuery *this_00;
  longlong lVar22;
  double dVar23;
  double dVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auStackY_298 [32];
  undefined1 local_258 [4];
  uint local_254;
  ulong64 local_250;
  UObject *local_248;
  TSharedPtr<FNavigationQueryFilter_const_,1> *local_240;
  dtQuerySpecialLinkFilter local_238;
  UNavigationSystemBase *local_230;
  FWeakObjectPtr local_228;
  undefined8 local_220;
  double local_218;
  double local_210;
  undefined8 local_208;
  double local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_1d0;
  uint local_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  undefined1 local_1b0 [16];
  dtNavMeshQuery local_198;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_240 = param_2;
  if (((param_1->ArrayNum == 0) || (this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0)) ||
     (this->RecastNavMeshImpl->DetourNavMesh == (dtNavMesh *)0x0)) goto LAB_146de0afb;
  local_1d0.Object = param_2->Object;
  local_1d0.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_1d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar17 = GetRightFilterRef(this,&local_1d0);
  pUVar18 = AActor::GetWorld((AActor *)this);
  if ((pUVar18 == (UWorld *)0x0) ||
     (pUVar4 = (pUVar18->NavigationSystem).field0_0x0.DebugPtr,
     pUVar4 == (UNavigationSystemBase *)0x0)) {
LAB_146de068e:
    local_230 = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar19 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar3 = (int)pUVar19->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar3) ||
       (local_230 = pUVar4,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
       &pUVar19->_padding_)) goto LAB_146de068e;
  }
  local_238 = (dtQuerySpecialLinkFilter)&___7FRecastSpeciaLinkFilter__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  local_228.ObjectIndex = 0;
  local_228.ObjectSerialNumber = 0;
  local_248 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  FWeakObjectPtr::operator=(&local_228,(FObjectPtr)&local_248);
  local_220 = 0;
  dtNavMeshQuery::dtNavMeshQuery(&local_198);
  bVar16 = IsInGameThread();
  this_00 = &local_198;
  if (bVar16) {
    this_00 = &this->RecastNavMeshImpl->SharedNavQuery;
  }
  dtNavMeshQuery::init
            (this_00,this->RecastNavMeshImpl->DetourNavMesh,pFVar17->MaxSearchNodes,&local_238);
  dVar15 = __real_4290000000000000;
  dVar14 = __real_bfe0000000000000;
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  pIVar5 = (pFVar17->QueryFilterImpl).Object;
  if ((pIVar5 == (INavigationQueryFilterInterface *)0x0) ||
     (pdVar1 = (dtQueryFilter *)(pIVar5 + 1), pdVar1 == (dtQueryFilter *)0x0)) {
    bVar16 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6996127874050689099>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                        ,0x84b,"QueryFilter");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    local_254 = param_1->ArrayNum;
    uVar20 = (ulonglong)(int)local_254;
    pFVar6 = (param_1->AllocatorInstance).Data;
    pFVar21 = pFVar6 + 0x40;
    uVar29 = (uint)__xmm_80000000000000008000000000000000;
    uVar30 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    lVar22 = uVar20 * 0x78;
    while( true ) {
      dVar23 = __real_3fe0000000000000;
      if (param_1->ArrayNum != (int)uVar20) {
        local_258[0] = 0;
        `TCheckedPointerIterator<FNavigationProjectionWork,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_258);
      }
      pFVar2 = pFVar21 + -0x40;
      param_2 = local_240;
      if (pFVar2 == pFVar6 + lVar22) break;
      if ((pFVar21[8] == (FScriptContainerElement)0x0) &&
         (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6996127874050689106>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                              ,0x852,"Work.ProjectionLimit.IsValid"), bVar16)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_208 = CONCAT44((uint)((ulonglong)*(double *)(pFVar21 + -0x38) >> 0x20) ^ uVar30,
                           SUB84(*(double *)(pFVar21 + -0x38),0) ^ uVar29);
      dVar10 = *(double *)(pFVar21 + -0x10) - *(double *)(pFVar21 + -0x28);
      local_218 = (double)CONCAT44((uint)((ulonglong)*(double *)pFVar2 >> 0x20) ^ uVar30,
                                   SUB84(*(double *)pFVar2,0) ^ uVar29);
      dVar11 = *(double *)(pFVar21 + -8) - *(double *)(pFVar21 + -0x20);
      local_210 = *(double *)(pFVar21 + -0x30);
      dVar23 = (*(double *)pFVar21 - *(double *)(pFVar21 + -0x18)) * dVar23;
      dVar9 = dVar15;
      if (dVar23 < dVar15) {
        dVar9 = (double)this->VerticalDeviationFromGroundCompensation;
        if (dVar9 <= 0.0) {
          dVar9 = 0.0;
        }
        dVar9 = dVar9 + dVar23;
      }
      local_1e0 = (*(double *)(pFVar21 + -0x18) + *(double *)pFVar21) * __real_3fe0000000000000;
      local_200 = (double)CONCAT44((uint)((ulonglong)(dVar10 * dVar14) >> 0x20) & uVar13,
                                   SUB84(dVar10 * dVar14,0) & uVar12);
      local_1e8 = (*(double *)(pFVar21 + -0x10) + *(double *)(pFVar21 + -0x28)) * dVar14;
      local_1d8 = (*(double *)(pFVar21 + -0x20) + *(double *)(pFVar21 + -8)) * dVar14;
      local_1f0 = CONCAT44((uint)((ulonglong)(dVar11 * dVar14) >> 0x20) & uVar13,
                           SUB84(dVar11 * dVar14,0) & uVar12);
      local_1f8 = CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar13,SUB84(dVar9,0) & uVar12);
      if (((byte)pFVar21[0x30] & 1) == 0) {
        dtNavMeshQuery::findNearestPoly
                  (this_00,&local_1e8,&local_200,pdVar1,&local_250,&local_f8,&local_218);
      }
      else {
        dtNavMeshQuery::findNearestPoly2D
                  (this_00,&local_1e8,&local_200,pdVar1,&local_250,&local_f8,&local_218,0.0);
      }
      if (local_250 != 0) {
        uVar25 = SUB84(local_f8,0) ^ uVar29;
        uVar26 = (uint)((ulonglong)local_f8 >> 0x20) ^ uVar30;
        uVar27 = (uint)local_e8 ^ uVar29;
        uVar28 = (uint)((ulonglong)local_e8 >> 0x20) ^ uVar30;
        dVar23 = *(double *)pFVar2 - (double)CONCAT44(uVar26,uVar25);
        dVar24 = *(double *)(pFVar21 + -0x38) - (double)CONCAT44(uVar28,uVar27);
        if (dVar24 * dVar24 + dVar23 * dVar23 +
            (*(double *)(pFVar21 + -0x30) - local_f0) * (*(double *)(pFVar21 + -0x30) - local_f0) <=
            (dVar10 * dVar10 + dVar11 * dVar11) * __real_3fd0000000000000 + dVar9 * dVar9) {
          *(uint *)(pFVar21 + 0x30) = *(uint *)(pFVar21 + 0x30) | 2;
          *(uint *)(pFVar21 + 0x10) = uVar25;
          *(uint *)(pFVar21 + 0x14) = uVar26;
          *(uint *)(pFVar21 + 0x18) = uVar27;
          *(uint *)(pFVar21 + 0x1c) = uVar28;
          local_1b0._8_4_ = (undefined4)local_250;
          local_1b0._12_4_ = (undefined4)(local_250 >> 0x20);
          local_1b0._0_8_ = local_f0;
          auVar8._8_4_ = local_1b0._8_4_;
          auVar8._0_8_ = local_f0;
          auVar8._12_4_ = local_1b0._12_4_;
          *(undefined1 (*) [16])(pFVar21 + 0x20) = auVar8;
          local_1c0 = uVar25;
          uStack_1bc = uVar26;
          uStack_1b8 = uVar27;
          uStack_1b4 = uVar28;
        }
      }
      uVar20 = (ulonglong)local_254;
      pFVar21 = pFVar21 + 0x78;
    }
  }
  dtNavMeshQuery::~dtNavMeshQuery(&local_198);
  local_238 = (dtQuerySpecialLinkFilter)&___7dtQuerySpecialLinkFilter__6B_;
LAB_146de0afb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// BatchRaycast @ 146de0b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ARecastNavMesh::BatchRaycast
          (ARecastNavMesh *this,TArray<FNavigationRaycastWork,TSizedDefaultAllocator<32>_> *param_1,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_2,UObject *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  INavigationQueryFilterInterface *pIVar3;
  FScriptContainerElement *pFVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  FNavigationQueryFilter *pFVar11;
  UWorld *pUVar12;
  UClass *pUVar13;
  dtQueryFilter *pdVar14;
  TObjectPtr<UNavigationSystemBase>_u_0 TVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  FSharedReferencer<1> *pFVar18;
  dtNavMeshQuery *this_00;
  longlong lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auStackY_888 [32];
  undefined1 local_838 [8];
  ulong64 local_830;
  uint local_828;
  dtQuerySpecialLinkFilter local_820;
  TObjectPtr<UNavigationSystemBase>_u_0 local_818;
  FWeakObjectPtr local_810;
  undefined8 local_808;
  UObject *local_800;
  FSharedReferencer<1> *local_7f8;
  double local_7f0;
  double local_7e8;
  undefined8 local_7e0;
  double local_7d8;
  double local_7d0;
  double local_7c8;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_7c0;
  undefined1 local_7b0 [16];
  undefined1 local_7a0 [16];
  TObjectPtr<UNavigationSystemBase>_u_0 local_788 [128];
  undefined1 local_388 [512];
  int local_188 [2];
  double local_180 [4];
  uint local_160;
  dtNavMeshQuery local_158;
  double local_b8;
  double local_b0;
  longlong local_a8;
  double local_a0 [3];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_888;
  if (((this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) || (param_1->ArrayNum == 0)) ||
     (this->RecastNavMeshImpl->DetourNavMesh == (dtNavMesh *)0x0)) {
    pFVar18 = &param_2->SharedReferenceCount;
    goto LAB_146de0fcf;
  }
  local_7c0.Object = param_2->Object;
  pFVar18 = &param_2->SharedReferenceCount;
  local_7c0.SharedReferenceCount.ReferenceController = pFVar18->ReferenceController;
  if (local_7c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_7c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_7c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_7f8 = pFVar18;
  pFVar11 = GetRightFilterRef(this,&local_7c0);
  pUVar12 = AActor::GetWorld((AActor *)this);
  if ((pUVar12 == (UWorld *)0x0) ||
     (TVar15 = (TObjectPtr<UNavigationSystemBase>_u_0)
               (pUVar12->NavigationSystem).field0_0x0.DebugPtr,
     TVar15.DebugPtr == (UNavigationSystemBase *)0x0)) {
LAB_146de0bf8:
    local_818.DebugPtr = (UNavigationSystemBase *)0x0;
  }
  else {
    pUVar13 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar2 = (int)pUVar13->_padding_;
    if ((*(int *)(*(longlong *)&(TVar15.DebugPtr)->field_0x10 + 0x38) < iVar2) ||
       (local_818 = TVar15,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&(TVar15.DebugPtr)->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
       &pUVar13->_padding_)) goto LAB_146de0bf8;
  }
  local_820 = (dtQuerySpecialLinkFilter)&___7FRecastSpeciaLinkFilter__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  local_810.ObjectIndex = 0;
  local_810.ObjectSerialNumber = 0;
  local_800 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  FWeakObjectPtr::operator=(&local_810,(FObjectPtr)&local_800);
  local_808 = 0;
  dtNavMeshQuery::dtNavMeshQuery(&local_158);
  bVar9 = IsInGameThread();
  if (bVar9) {
    this_00 = &this->RecastNavMeshImpl->SharedNavQuery;
  }
  else {
    this_00 = &local_158;
  }
  dtNavMeshQuery::init
            (this_00,this->RecastNavMeshImpl->DetourNavMesh,pFVar11->MaxSearchNodes,&local_820);
  dVar8 = __real_7fefffffffffffff;
  pIVar3 = (pFVar11->QueryFilterImpl).Object;
  if ((pIVar3 == (INavigationQueryFilterInterface *)0x0) ||
     (pdVar14 = (dtQueryFilter *)(pIVar3 + 1), pdVar14 == (dtQueryFilter *)0x0)) {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogNavigation.field_0x4,Warning,
                 L"FPImplRecastNavMesh::FindPath failing due to QueryFilter == NULL");
    }
    dtNavMeshQuery::~dtNavMeshQuery(&local_158);
    local_820 = (dtQuerySpecialLinkFilter)&___7dtQuerySpecialLinkFilter__6B_;
  }
  else {
    local_7c8 = (double)this->_padding_;
    local_b8 = (double)this->_padding_;
    local_a8 = this->_padding_;
    local_b0 = __real_4290000000000000;
    if (local_7c8 < __real_4290000000000000) {
      local_b0 = (double)this->VerticalDeviationFromGroundCompensation;
      if (local_b0 <= 0.0) {
        local_b0 = 0.0;
      }
      local_b0 = local_b0 + local_7c8;
    }
    local_828 = param_1->ArrayNum;
    uVar16 = (ulonglong)(int)local_828;
    pFVar4 = (param_1->AllocatorInstance).Data;
    uVar24 = (uint)__xmm_80000000000000008000000000000000;
    uVar25 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    lVar19 = uVar16 * 0x58;
    pFVar17 = pFVar4 + 0x28;
    while( true ) {
      if (param_1->ArrayNum != (int)uVar16) {
        `TCheckedPointerIterator<FNavigationRaycastWork,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_838);
      }
      pFVar1 = pFVar17 + -0x28;
      if (pFVar1 == pFVar4 + lVar19) break;
      local_160 = local_160 & 0xfffffffe;
      local_180[0] = dVar8;
      local_180[1] = 0.0;
      local_180[2] = 0.0;
      local_180[3] = 0.0;
      local_188[0] = 0;
      memset(local_788,0,0x400);
      memset(local_388,0,0x200);
      local_7f0 = (double)CONCAT44((uint)((ulonglong)*(double *)pFVar1 >> 0x20) ^ uVar25,
                                   SUB84(*(double *)pFVar1,0) ^ uVar24);
      local_7e8 = *(double *)(pFVar17 + -0x18);
      local_7e0 = CONCAT44((uint)((ulonglong)*(double *)(pFVar17 + -0x20) >> 0x20) ^ uVar25,
                           SUB84(*(double *)(pFVar17 + -0x20),0) ^ uVar24);
      local_7d8 = (double)CONCAT44((uint)((ulonglong)*(double *)(pFVar17 + -0x10) >> 0x20) ^ uVar25,
                                   SUB84(*(double *)(pFVar17 + -0x10),0) ^ uVar24);
      local_7c8 = (double)CONCAT44((uint)((ulonglong)*(double *)(pFVar17 + -8) >> 0x20) ^ uVar25,
                                   SUB84(*(double *)(pFVar17 + -8),0) ^ uVar24);
      local_7d0 = *(double *)pFVar17;
      local_830 = 0;
      dtNavMeshQuery::findNearestContainingPoly
                (this_00,&local_7f0,&local_b8,pdVar14,&local_830,(double *)0x0);
      if ((local_830 == 0) ||
         (uVar10 = dtNavMeshQuery::raycast
                             (this_00,local_830,&local_7f0,&local_7d8,pdVar14,local_180,local_a0,
                              (ulong64 *)local_788,local_188,0x80), (uVar10 >> 0x1e & 1) == 0)) {
LAB_146de0f3f:
        uVar16 = (ulonglong)local_828;
        pFVar17 = pFVar17 + 0x58;
      }
      else {
        if (local_180[0] == dVar8) {
          pFVar17[0x29] = (FScriptContainerElement)((byte)local_160 & 1);
          goto LAB_146de0f3f;
        }
        pFVar17[0x28] = (FScriptContainerElement)0x1;
        TVar15.DebugPtr = (UNavigationSystemBase *)0x0;
        if (0 < local_188[0]) {
          TVar15 = local_788[local_188[0] + -1];
        }
        uVar16 = (ulonglong)local_828;
        dVar7 = (*(double *)(pFVar17 + -0x10) - *(double *)pFVar1) * local_180[0] +
                *(double *)pFVar1;
        dVar23 = (*(double *)(pFVar17 + -8) - *(double *)(pFVar17 + -0x20)) * local_180[0] +
                 *(double *)(pFVar17 + -0x20);
        dVar22 = (*(double *)pFVar17 - *(double *)(pFVar17 + -0x18)) * local_180[0] +
                 *(double *)(pFVar17 + -0x18);
        uVar20 = SUB84(dVar23,0);
        uVar21 = (undefined4)((ulonglong)dVar23 >> 0x20);
        auVar5._8_4_ = uVar20;
        auVar5._0_8_ = dVar7;
        auVar5._12_4_ = uVar21;
        *(undefined1 (*) [16])(pFVar17 + 8) = auVar5;
        local_7b0._8_4_ = uVar20;
        local_7b0._0_8_ = dVar7;
        local_7b0._12_4_ = uVar21;
        local_7a0._8_4_ = TVar15._0_4_;
        local_7a0._12_4_ = TVar15._4_4_;
        auVar6._8_4_ = local_7a0._8_4_;
        auVar6._0_8_ = dVar22;
        auVar6._12_4_ = local_7a0._12_4_;
        *(undefined1 (*) [16])(pFVar17 + 0x18) = auVar6;
        pFVar17 = pFVar17 + 0x58;
        local_7a0._0_8_ = dVar22;
      }
    }
    dtNavMeshQuery::~dtNavMeshQuery(&local_158);
    local_820 = (dtQuerySpecialLinkFilter)&___7dtQuerySpecialLinkFilter__6B_;
    pFVar18 = local_7f8;
  }
LAB_146de0fcf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (pFVar18->ReferenceController);
  return;
}

// BeginBatchQuery @ 146de1010

void __thiscall ARecastNavMesh::BeginBatchQuery(ARecastNavMesh *this)

{
  int iVar1;
  
  iVar1 = this->BatchQueryCounter;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  this->BatchQueryCounter = iVar1 + 1;
  return;
}

// BeginDestroy @ 146de1120

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ARecastNavMesh::BeginDestroy(ARecastNavMesh *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            UNavigationSystemBase::OnNavigationInitStartStaticDelegate();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
  AActor::BeginDestroy((AActor *)this);
  return;
}

// CalcPathCost @ 146de3390

Type __thiscall
ARecastNavMesh::CalcPathCost
          (ARecastNavMesh *this,TVector<double> *param_1,TVector<double> *param_2,double *param_3,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,UObject *param_5)

{
  code *pcVar1;
  Type TVar2;
  undefined8 local_res8;
  FNavigationQueryFilter *local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_res8 = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x8a8);
  local_18 = param_4->Object;
  local_10 = (param_4->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  TVar2 = (*pcVar1)(0,param_1,param_2,&local_res8,param_3,&local_18,param_5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return TVar2;
}

// CalcPathLength @ 146de3420

Type __thiscall
ARecastNavMesh::CalcPathLength
          (ARecastNavMesh *this,TVector<double> *param_1,TVector<double> *param_2,double *param_3,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,UObject *param_5)

{
  atomic<int> *paVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  Type TVar4;
  
  pcVar2 = *(code **)(this->_padding_ + 0x8a8);
  pTVar3 = (param_4->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  TVar4 = (*pcVar2)();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return TVar4;
}

// CalcPathLengthAndCost @ 146de34b0

Type __thiscall
ARecastNavMesh::CalcPathLengthAndCost
          (ARecastNavMesh *this,TVector<double> *param_1,TVector<double> *param_2,double *param_3,
          double *param_4,TSharedPtr<FNavigationQueryFilter_const_,1> *param_5,UObject *param_6)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  Type TVar6;
  FNavMeshPath *pFVar7;
  FNavigationQueryFilter *pFVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TRawPtrProxy<FNavMeshPath> local_res8;
  TSharedRef<FNavMeshPath,1> local_40;
  
  TVar6 = Invalid;
  local_res8.Object = local_res8.Object & 0xffffffff00000000;
  if (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) {
    dVar9 = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
    dVar11 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
    dVar10 = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
    if (((__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
        (__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
      pFVar7 = ::operator_new(0x188);
      if (pFVar7 == (FNavMeshPath *)0x0) {
        pFVar7 = (FNavMeshPath *)0x0;
      }
      else {
        pFVar7 = FNavMeshPath::FNavMeshPath(pFVar7);
        if (((pFVar7 != (FNavMeshPath *)0x0) && (pFVar7->_padding_ != 0)) &&
           ((pFVar7->_padding_ != 0 && (0 < *(int *)(pFVar7->_padding_ + 8))))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            TVar6 = (*pcVar4)();
            return TVar6;
          }
        }
      }
      local_res8.Object = pFVar7;
      TSharedRef<FNavMeshPath,1>::TSharedRef<FNavMeshPath,1><FNavMeshPath>(&local_40,&local_res8);
      (local_40.Object)->bWantsStringPulling = 0;
      (local_40.Object)->bWantsPathCorridor = 1;
      local_res8.Object = (FNavMeshPath *)this->RecastNavMeshImpl;
      pTVar1 = (param_5->SharedReferenceCount).ReferenceController;
      pFVar8 = param_5->Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar8 == (FNavigationQueryFilter *)0x0) {
        pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
        pFVar8 = (FNavigationQueryFilter *)this->_padding_;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      TVar6 = FPImplRecastNavMesh::FindPath
                        ((FPImplRecastNavMesh *)local_res8.Object,param_1,param_2,
                         __real_7fefffffffffffff,true,local_40.Object,pFVar8,param_6);
      if ((TVar6 == Success) ||
         ((TVar6 == Fail && (((uint)(local_40.Object)->_padding_ >> 2 & 1) != 0)))) {
        if ((local_40.Object)->bStringPulled == 0) {
          dVar9 = FNavMeshPath::GetPathCorridorLength(local_40.Object,0);
        }
        else {
          dVar9 = FNavMeshPath::GetStringPulledLength(local_40.Object,0);
        }
        lVar3 = (local_40.Object)->_padding_;
        *param_3 = dVar9;
        dVar9 = (double)(**(code **)(lVar3 + 0x48))(local_40.Object,0);
        *param_4 = dVar9;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.SharedReferenceCount.ReferenceController);
    }
    else {
      *param_3 = 0.0;
      TVar6 = Success;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  return TVar6;
}

// CheckTileIndicesInValidRange @ 146de3bd0

bool __thiscall
ARecastNavMesh::CheckTileIndicesInValidRange
          (ARecastNavMesh *this,TVector<double> *param_1,bool *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  dtNavMesh *this_00;
  double local_28;
  double local_20;
  undefined8 local_18;
  
  this_00 = (dtNavMesh *)0x0;
  if (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) {
    this_00 = this->RecastNavMeshImpl->DetourNavMesh;
  }
  if (this_00 != (dtNavMesh *)0x0) {
    local_28 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                (uint)*(undefined8 *)&param_1->field0_0x0 ^
                                (uint)__xmm_80000000000000008000000000000000);
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    local_18 = CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
    local_20 = (param_1->field0_0x0)._s_0.Z;
    bVar2 = dtNavMesh::isTileLocInValidRange(this_00,&local_28);
    *param_2 = bVar2;
  }
  return this_00 != (dtNavMesh *)0x0;
}

// CheckToDiscardSubLevelNavData @ 146de3c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ARecastNavMesh::CheckToDiscardSubLevelNavData(ARecastNavMesh *this,UNavigationSystemBase *param_1)

{
  int iVar1;
  ULevel *pUVar2;
  char cVar3;
  UWorld *pUVar4;
  UClass *pUVar5;
  ULevel *pUVar6;
  bool bVar7;
  undefined1 auStack_168 [32];
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  pUVar4 = AActor::GetWorld((AActor *)this);
  if (param_1 != (UNavigationSystemBase *)0x0) {
    pUVar5 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_146de3cac;
  }
  param_1 = (UNavigationSystemBase *)0x0;
LAB_146de3cac:
  if (((pUVar4 != (UWorld *)0x0) &&
      (cVar3 = (**(code **)(*(longlong *)param_1 + 0x388))(param_1,this), cVar3 != '\0')) &&
     (cVar3 = (**(code **)(GEngine->_padding_ + 0x3e0))(), cVar3 == '\0')) {
    pUVar6 = AActor::GetLevel((AActor *)this);
    pUVar2 = (pUVar4->PersistentLevel).field0_0x0.DebugPtr;
    if (pUVar2 == (ULevel *)0x0) {
      bVar7 = pUVar6 == (ULevel *)0x0;
    }
    else {
      bVar7 = pUVar2 == pUVar6;
    }
    if ((!bVar7) && (PRIVATE_GIsRunningCommandlet == false)) {
      if (5 < (byte)LogNavigation._0_1_) {
        if ((this == (ARecastNavMesh *)0x0) || (this->_padding_ == 0)) {
          ::FString::FString(&local_148,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_148,(UObject *)0x0,None)
          ;
        }
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"ARecastNavMesh::CheckToDiscardSubLevelNavData",0x2d,Yes);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
      }
      (**(code **)(this->_padding_ + 0x768))(this);
    }
  }
  return;
}

// CleanUp @ 146de3e10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ARecastNavMesh::CleanUp(ARecastNavMesh *this)

{
  longlong *plVar1;
  FPImplRecastNavMesh *this_00;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  ANavigationData::CleanUp((ANavigationData *)this);
  this->bHasNoTileData = false;
  plVar1 = &this->_padding_;
  if ((longlong *)*plVar1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar1 + 0x18))();
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (plVar1 != &local_18) {
      *plVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  this_00 = this->RecastNavMeshImpl;
  if (this_00 != (FPImplRecastNavMesh *)0x0) {
    FPImplRecastNavMesh::~FPImplRecastNavMesh(this_00);
    ::operator_delete(this_00,0x150);
    this->RecastNavMeshImpl = (FPImplRecastNavMesh *)0x0;
  }
  return;
}

// ConditionalConstructGenerator @ 146de4de0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ARecastNavMesh::ConditionalConstructGenerator(ARecastNavMesh *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  UWorld *this_00;
  longlong *plVar8;
  FSharedReferencer<1> FVar9;
  UClass *pUVar10;
  undefined8 uVar11;
  UNavigationSystemBase *pUVar12;
  longlong *local_28;
  FSharedReferencer<1> local_20;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  plVar2 = &this->_padding_;
  if (*plVar2 != 0) {
    (**(code **)(*(longlong *)*plVar2 + 0x18))();
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (plVar2 != &local_18) {
      *plVar2 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  this_00 = AActor::GetWorld((AActor *)this);
  if ((this_00 == (UWorld *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                         ,0xf24,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  cVar7 = (**(code **)(this->_padding_ + 0x780))(this);
  if ((cVar7 == '\0') && (bVar6 = UWorld::IsGameWorld(this_00), bVar6)) {
    return;
  }
  plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x938))(this);
  if (plVar8 != (longlong *)0x0) {
    if ((((plVar8[1] != 0) && (plVar8[2] != 0)) && (0 < *(int *)(plVar8[2] + 8))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object"), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_28 = plVar8;
    FVar9.ReferenceController = ::operator_new(0x18);
    if (FVar9.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      FVar9.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      (FVar9.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      (FVar9.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FVar9.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VFNavDataGenerator__U__DefaultDeleter_VFNavDataGenerator___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      FVar9.ReferenceController[1]._padding_ = (longlong)plVar8;
    }
    local_20.ReferenceController = FVar9.ReferenceController;
    if (((plVar8[1] == 0) || (plVar8[2] == 0)) || (*(int *)(plVar8[2] + 8) < 1)) {
      if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar9.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      plVar8[1] = (longlong)plVar8;
      if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)plVar8[2]) {
        if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar9.ReferenceController)->WeakReferenceCount =
               (atomic<int>)((int)(FVar9.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar4 = (longlong *)plVar8[2];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        plVar8[2] = (longlong)FVar9.ReferenceController;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar9.ReferenceController);
    }
    if ((longlong **)plVar2 != &local_28) {
      *plVar2 = (longlong)plVar8;
      local_28 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&local_20);
      FVar9.ReferenceController = local_20.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar9.ReferenceController);
    (**(code **)(*plVar8 + 0x80))(plVar8);
  }
  if (this_00 == (UWorld *)0x0) {
    return;
  }
  pUVar12 = (this_00->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar12 != (UNavigationSystemBase *)0x0) {
    pUVar10 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar3 = (int)pUVar10->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar10->_padding_)) goto LAB_146de5001;
  }
  pUVar12 = (UNavigationSystemBase *)0x0;
LAB_146de5001:
  if (pUVar12 != (UNavigationSystemBase *)0x0) {
    pcVar5 = *(code **)(this->_padding_ + 2000);
    cVar7 = (**(code **)(this->_padding_ + 0x780))(this);
    if ((cVar7 == '\0') || (((pUVar12[2].field_0x20 & 1) == 0 && (this->bIsWorldPartitioned == 0))))
    {
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
    }
    (*pcVar5)(this,uVar11);
  }
  return;
}

// ConstructRenderingComponent @ 146de5500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPrimitiveComponent * __thiscall ARecastNavMesh::ConstructRenderingComponent(ARecastNavMesh *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UPrimitiveComponent *pUVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  FName local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pFVar2 = ::FName::FName(local_a8,L"NavRenderingComp");
  FVar1 = *pFVar2;
  if (FVar1 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar3 = UNavMeshRenderingComponent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._24_4_ = RF_Transient;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  local_98._16_8_ = FVar1;
  pUVar4 = (UPrimitiveComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return pUVar4;
}

// CreateAndRegisterJumpDownLinksProxy @ 146de58b0

void __thiscall
ARecastNavMesh::CreateAndRegisterJumpDownLinksProxy(ARecastNavMesh *this,FNavLinkId param_1)

{
  return;
}

// CreateAndRegisterJumpLinksProxy @ 146de58c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ARecastNavMesh::CreateAndRegisterJumpLinksProxy
          (ARecastNavMesh *this,FNavLinkGenerationJumpConfig *param_1,FNavLinkId param_2)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UNavigationSystemBase *pUVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UBaseGeneratedNavLinksProxy *pUVar10;
  UWorld *pUVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  UClass *pUVar14;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  FName local_d0;
  undefined8 local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (((param_1->LinkProxy).field0_0x0.DebugPtr == (UBaseGeneratedNavLinksProxy *)0x0) ||
     (bVar7 = `ARecastNavMesh::CreateAndRegisterJumpLinksProxy'::__l3::<lambda_1>::operator()
                        (local_d8), bVar7)) {
    pUVar9 = (param_1->LinkProxyClass).Class.field0_0x0.DebugPtr;
    pUVar14 = (UClass *)0x0;
    local_d0.ComparisonIndex.Value = 0;
    local_d0.Number = 0;
    if ((pUVar9 != (UClass *)0x0) &&
       (pUVar8 = Z_Construct_UClass_UBaseGeneratedNavLinksProxy_NoRegister(),
       pUVar8 != (UClass *)0x0)) {
      iVar1 = (int)pUVar8->_padding_;
      if (((int)pUVar9->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        pUVar14 = (param_1->LinkProxyClass).Class.field0_0x0.DebugPtr;
      }
    }
    FVar5 = local_d0;
    local_c8 = 0;
    if (local_d0 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar9 = Z_Construct_UClass_UBaseGeneratedNavLinksProxy_NoRegister();
    CheckIsClassChildOf_Internal(pUVar9,pUVar14);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar14);
    FVar6 = local_d0;
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_d0.ComparisonIndex = FVar5.ComparisonIndex.Value;
    local_d0.Number = FVar5.Number;
    local_b8._16_4_ = local_d0.ComparisonIndex.Value;
    local_b8._20_4_ = local_d0.Number;
    local_b8._24_4_ = RF_NoFlags;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_d0 = FVar6;
    local_b8._8_8_ = this;
    pUVar10 = (UBaseGeneratedNavLinksProxy *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar12 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (pUVar10 != (UBaseGeneratedNavLinksProxy *)0x0) {
      (param_1->LinkProxyId).Id = param_2.Id;
      (**(code **)(pUVar10->_padding_ + 0x40))(&pUVar10->_padding_,param_2.Id);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ARecastNavMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      (pUVar10->Owner).field0_0x0.DebugPtr = (UObject *)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      (param_1->LinkProxy).field0_0x0.DebugPtr = pUVar10;
      pFVar3 = (this->NavLinkJumpConfigs).AllocatorInstance.Data;
      iVar1 = (this->NavLinkJumpConfigs).ArrayNum;
      pFVar13 = pFVar3 + 0x50;
      while( true ) {
        if ((this->NavLinkJumpConfigs).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FNavLinkGenerationJumpConfig,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_d8);
        }
        if (pFVar13 + -0x50 == pFVar3 + (longlong)iVar1 * 0x60) break;
        if ((((pFVar13[8] == (FScriptContainerElement)0x0) && (*(longlong *)pFVar13 != 0)) &&
            (pUVar11 = AActor::GetWorld((AActor *)this), pUVar11 != (UWorld *)0x0)) &&
           (pUVar4 = (pUVar11->NavigationSystem).field0_0x0.DebugPtr,
           pUVar4 != (UNavigationSystemBase *)0x0)) {
          pUVar9 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
          iVar2 = (int)pUVar9->_padding_;
          if ((iVar2 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar9->_padding_)) {
            if (4 < (byte)LogNavLink._0_1_) {
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavLink);
            }
            (**(code **)(*(longlong *)pUVar4 + 0x400))(pUVar4,*(longlong *)pFVar13 + 0x28);
            pFVar13[8] = (FScriptContainerElement)0x1;
          }
        }
        pFVar13 = pFVar13 + 0x60;
      }
    }
  }
  return;
}

// CreateGeneratorInstance @ 146de6560

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

FRecastNavMeshGenerator * __thiscall ARecastNavMesh::CreateGeneratorInstance(ARecastNavMesh *this)

{
  FRecastNavMeshGenerator *pFVar1;
  
  pFVar1 = ::operator_new(0x4c8);
  if (pFVar1 != (FRecastNavMeshGenerator *)0x0) {
    pFVar1 = FRecastNavMeshGenerator::FRecastNavMeshGenerator(pFVar1,this);
    return pFVar1;
  }
  return (FRecastNavMeshGenerator *)0x0;
}

// CreateSegmentLinkConnections @ 146de6620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ARecastNavMesh::CreateSegmentLinkConnections
          (ARecastNavMesh *this,
          TSet<FNavTileRef,DefaultKeyFuncs<FNavTileRef,0>,FDefaultSetAllocator> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FNavTileRef FVar3;
  dtNavMesh *pdVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  ulonglong uVar8;
  int iVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ForElementType<unsigned_int> FVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  undefined1 auStackY_168 [32];
  FIdentityFunctor local_138 [4];
  uint local_134;
  ForAnyElementType local_130;
  int local_128 [4];
  TBitArray<FDefaultBitArrayAllocator> *pTStack_118;
  undefined4 local_110;
  uint uStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_100;
  undefined4 local_f0;
  int local_ec;
  FNavTileRef local_e8;
  FNavTileRef local_e0;
  ARecastNavMesh *local_d8;
  ulong64 local_d0;
  ulonglong local_c8;
  longlong *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) {
    return;
  }
  if (this->RecastNavMeshImpl->DetourNavMesh == (dtNavMesh *)0x0) {
    return;
  }
  uVar17 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar11 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  if (uVar11 == 0) goto LAB_146de68d3;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar11);
  if (uVar11 < 4) {
    uVar11 = 1;
  }
  else {
    uVar13 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_f0 = (undefined4)lVar5;
    uVar11 = 1 << ((byte)lVar5 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar11 <= (int)local_50)) goto LAB_146de68d3;
  local_50 = uVar11;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar11 != 0) {
    uVar12 = uVar11;
    if (uVar11 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_146de6725;
      }
    }
    else {
LAB_146de6725:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar12,4);
    }
    if (0 < (int)uVar11) {
      uVar14 = (ulonglong)uVar11;
      uVar13 = uVar17;
      do {
        FVar18.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar18.Data = local_58.Data;
        }
        uVar8 = uVar13 & (longlong)(int)uVar11 - 1U;
        uVar13 = uVar13 + 1;
        *(undefined4 *)(FVar18.Data + uVar8 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  if (local_50 != 0) {
    pTStack_118 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_128[2] = 0;
    local_128[3] = 1;
    uStack_10c = 0;
    uStack_108 = 0;
    uVar13 = uVar17;
    if (local_70 != 0) {
      FVar16 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar16 = local_78;
      }
      uVar11 = *(uint *)FVar16;
      uVar14 = uVar17;
      while (uVar11 == 0) {
        uStack_108 = (int)uVar14 + 0x20;
        uVar14 = (ulonglong)uStack_108;
        iVar9 = (int)uVar13;
        local_128[2] = iVar9 + 1;
        uVar13 = (ulonglong)(uint)local_128[2];
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < local_128[2])
        goto LAB_146de6833;
        uVar11 = ((uint *)((longlong)FVar16 + 4))[iVar9];
      }
      local_128[3] = -uVar11 & uVar11;
      uVar13 = (ulonglong)(uint)local_128[3] * 2 + 1;
      lVar5 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_ec = (int)lVar5;
      uStack_10c = local_ec + -1 + uStack_108;
      uVar13 = (ulonglong)uStack_10c;
      if ((int)local_70 < (int)uStack_10c) {
LAB_146de6833:
        uVar13 = (ulonglong)local_70;
        uStack_10c = local_70;
      }
    }
    local_110 = 0xffffffff;
    local_c0 = (longlong *)local_98;
    local_b8._padding_ = CONCAT44(local_128[3],local_128[2]);
    local_b8.CurrentBitIndex = uStack_10c;
    local_b8.UnvisitedBitMask = 0xffffffff;
    local_b8._28_4_ = uStack_104;
    local_b8.BaseBitIndex = uStack_108;
    local_b8.Array = pTStack_118;
    if ((int)uVar13 < (int)local_70) {
      do {
        puVar15 = (undefined8 *)((longlong)(int)uVar13 * 0x10 + *local_c0);
        uVar11 = (int)((ulonglong)*puVar15 >> 0x20) * 0x17 + (int)*puVar15 & local_50 - 1;
        *(uint *)((longlong)puVar15 + 0xc) = uVar11;
        FVar18.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar18.Data = local_58.Data;
        }
        uVar14 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(FVar18.Data + uVar14 * 4);
        *(int *)(FVar18.Data + uVar14 * 4) = (int)uVar13;
        local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
        uVar13 = (ulonglong)(uint)local_b8.CurrentBitIndex;
      } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
    }
  }
LAB_146de68d3:
  TSet<FNavTileRef,DefaultKeyFuncs<FNavTileRef,0>,FDefaultSetAllocator>::Array(param_1,&local_100);
  local_d8 = this;
  AlgoImpl::
  IntroSortInternal<FNavTileRef,int,FIdentityFunctor,TDereferenceWrapper<FNavTileRef,_ARecastNavMesh::CreateSegmentLinkConnections_::__l2::<lambda_1>_>_>
            ((FNavTileRef *)local_100.AllocatorInstance.Data,local_100.ArrayNum,local_138[0],
             (<lambda_1> *)&local_d8);
  iVar9 = local_100.ArrayNum;
  pFVar1 = local_100.AllocatorInstance.Data + (longlong)local_100.ArrayNum * 8;
  FVar18.Data = local_100.AllocatorInstance.Data;
  do {
    if (local_100.ArrayNum != iVar9) {
      local_138[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FNavTileRef,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_138);
    }
    if (FVar18.Data == pFVar1) {
      if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.AllocatorInstance.Data);
      }
      local_50 = 0;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      TSparseArray<TSparseSetElement<FNavTileRef>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FNavTileRef>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FNavTileRef>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      return;
    }
    FVar3.TileRef = *(ulong64 *)FVar18.Data;
    local_d0 = FVar3.TileRef;
    if (local_98._8_4_ != local_64) {
      FVar10.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar10.Data = local_58.Data;
      }
      for (iVar2 = *(int *)(FVar10.Data +
                           (ulonglong)
                           (local_50 - 1 & (int)(FVar3.TileRef >> 0x20) * 0x17 + (int)FVar3.TileRef)
                           * 4); iVar2 != -1;
          iVar2 = *(int *)(local_98._0_8_ + (longlong)iVar2 * 0x10 + 8)) {
        if (*(ulong64 *)(local_98._0_8_ + (longlong)iVar2 * 0x10) == FVar3.TileRef)
        goto LAB_146de6bb5;
      }
    }
    uVar11 = this->ExpectedMaxLayersPerTile << 3;
    local_130.Data = (FScriptContainerElement *)0x0;
    local_128[0] = 0;
    local_128[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&local_130,local_128,local_128 + 1);
    local_134 = 0;
    if (4 < (byte)LogSegmentLink._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSegmentLink);
    }
    pdVar4 = this->RecastNavMeshImpl->DetourNavMesh;
    if (pdVar4 != (dtNavMesh *)0x0) {
      dtNavMesh::processSegmentLinksForTile
                (pdVar4,FVar3.TileRef,uVar11,(ulong64 *)local_130.Data,&local_134);
    }
    TSet<FNavTileRef,DefaultKeyFuncs<FNavTileRef,0>,FDefaultSetAllocator>::
    Emplace<FNavTileRef_const_&>
              ((TSet<FNavTileRef,DefaultKeyFuncs<FNavTileRef,0>,FDefaultSetAllocator> *)local_98,
               &local_e8,(bool *)&local_d0);
    uVar12 = local_134;
    if ((uVar11 < local_134) && (uVar12 = uVar11, 2 < (byte)LogNavigation._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    }
    local_134 = uVar12;
    uVar13 = uVar17;
    if (local_134 != 0) {
      do {
        uVar12 = (uint)uVar13;
        uVar11 = 0;
        if ((int)uVar12 < local_128[0]) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar13 = *(ulonglong *)(local_130.Data + (longlong)(int)uVar12 * 8);
        local_c8 = uVar13;
        if (local_98._8_4_ != local_64) {
          FVar10.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar10.Data = local_58.Data;
          }
          for (iVar2 = *(int *)(FVar10.Data +
                               ((uVar13 >> 0x20) * 0x17 + uVar13 & (ulonglong)(local_50 - 1)) * 4);
              iVar2 != -1; iVar2 = *(int *)(local_98._0_8_ + (longlong)iVar2 * 0x10 + 8)) {
            if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar2 * 0x10) == uVar13)
            goto LAB_146de6b9a;
          }
        }
        if (4 < (byte)LogSegmentLink._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSegmentLink);
        }
        pdVar4 = this->RecastNavMeshImpl->DetourNavMesh;
        if (pdVar4 != (dtNavMesh *)0x0) {
          dtNavMesh::processSegmentLinksForTile
                    (pdVar4,uVar13,0,(ulong64 *)0x0,(uint *)((longlong)&local_e8.TileRef + 4));
        }
        TSet<FNavTileRef,DefaultKeyFuncs<FNavTileRef,0>,FDefaultSetAllocator>::
        Emplace<FNavTileRef_const_&>
                  ((TSet<FNavTileRef,DefaultKeyFuncs<FNavTileRef,0>,FDefaultSetAllocator> *)local_98
                   ,&local_e0,(bool *)&local_c8);
LAB_146de6b9a:
        uVar13 = (ulonglong)(uVar12 + 1);
      } while (uVar12 + 1 < local_134);
    }
    if (local_130.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data);
    }
LAB_146de6bb5:
    FVar18.Data = FVar18.Data + 8;
  } while( true );
}

// DebugPathfinding @ 146de7170

int __thiscall
ARecastNavMesh::DebugPathfinding
          (ARecastNavMesh *this,FPathFindingQuery *param_1,
          TArray<FRecastDebugPathfindingData,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FPImplRecastNavMesh *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  iVar4 = 0;
  pUVar5 = FWeakObjectPtr::Get(&(param_1->NavData).WeakPtr);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = GetPrivateStaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_146de71e8;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Cast<const ARecastNavMesh>(Self)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                     ,0xe17,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  if (pUVar5 == (UObject *)0x0) {
    return 0;
  }
LAB_146de71e8:
  this_00 = *(FPImplRecastNavMesh **)&pUVar5[0x2f].field_0x8;
  if (this_00 == (FPImplRecastNavMesh *)0x0) {
    return 0;
  }
  dVar7 = (double)param_1->_padding_ - (double)param_1->_padding_;
  dVar9 = (double)param_1->_padding_ - (double)param_1->_padding_;
  dVar8 = (double)param_1->_padding_ - (double)param_1->_padding_;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    iVar4 = FPImplRecastNavMesh::DebugPathfinding
                      (this_00,(TVector<double> *)&param_1->_padding_,
                       (TVector<double> *)&param_1->_padding_,(double)param_1->_padding_,
                       (bool)((byte)(*(uint *)((longlong)&param_1->_padding_ + 4) >> 1) & 1),
                       (FNavigationQueryFilter *)param_1->_padding_,pUVar5,param_2);
  }
  return iVar4;
}

// DestroyRecastPImpl @ 146de9e40

void __thiscall ARecastNavMesh::DestroyRecastPImpl(ARecastNavMesh *this)

{
  FPImplRecastNavMesh *this_00;
  
  this_00 = this->RecastNavMeshImpl;
  if (this_00 != (FPImplRecastNavMesh *)0x0) {
    FPImplRecastNavMesh::~FPImplRecastNavMesh(this_00);
    ::operator_delete(this_00,0x150);
    this->RecastNavMeshImpl = (FPImplRecastNavMesh *)0x0;
  }
  return;
}

// DetachNavMeshDataChunk @ 146de9e90

void __thiscall
ARecastNavMesh::DetachNavMeshDataChunk(ARecastNavMesh *this,URecastNavMeshDataChunk *param_1)

{
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_18;
  
  URecastNavMeshDataChunk::DetachTiles(param_1,&local_18,this);
  if (0 < local_18.ArrayNum) {
    InvalidateAffectedPaths(this,&local_18);
    RequestDrawingUpdate(this,false);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// DirtyTilesInBounds @ 146ded7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ARecastNavMesh::DirtyTilesInBounds(ARecastNavMesh *this,TBox<double> *param_1)

{
  double *pdVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  dtNavMesh *pdVar9;
  dtMeshHeader *pdVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  dtMeshTile *pdVar17;
  UWorld *pUVar18;
  UClass *pUVar19;
  TBox<double> *pTVar20;
  uint uVar21;
  int iVar23;
  undefined1 auVar24 [16];
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStackY_198 [32];
  undefined1 local_148 [8];
  ForAnyElementType local_140;
  undefined8 local_138;
  TArray<FNavMeshDirtyTileElement,TSizedDefaultAllocator<32>_> local_130;
  int local_120;
  int iStack_11c;
  FRcTileBox local_118;
  TVector<double>_u_0 local_108;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  uchar local_d8;
  uchar uStack_d7;
  uchar uStack_d6;
  uchar uStack_d5;
  uchar uStack_d4;
  uchar uStack_d3;
  uchar uStack_d2;
  uchar uStack_d1;
  TVector<double>_u_0 local_d0;
  int local_b8;
  int iStack_b4;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  TBox<double> local_a0;
  ulonglong local_68;
  UNavigationSystemV1 *pUVar22;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (param_1->IsValid == '\0') {
    local_148[0] = 0;
    bVar14 = `ARecastNavMesh::DirtyTilesInBounds'::__l3::<lambda_1>::operator()(local_148);
    if (!bVar14) {
      return;
    }
  }
  if (this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) {
    return;
  }
  pdVar9 = this->RecastNavMeshImpl->DetourNavMesh;
  if (pdVar9 == (dtNavMesh *)0x0) {
    return;
  }
  if (pdVar9->m_tileWidth <= 0.0) {
    return;
  }
  if (pdVar9->m_tileHeight <= 0.0) {
    return;
  }
  if ((FRecastNavMeshGenerator *)this->_padding_ != (FRecastNavMeshGenerator *)0x0) {
    FRecastNavMeshGenerator::DiscardCurrentBuildingTasks((FRecastNavMeshGenerator *)this->_padding_)
    ;
  }
  uVar15 = 0;
  pdVar9 = this->RecastNavMeshImpl->DetourNavMesh;
  if ((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) && (pdVar9 != (dtNavMesh *)0x0)) {
    uVar15 = dtNavMesh::getMaxTiles(pdVar9);
  }
  local_140.Data = (FScriptContainerElement *)0x0;
  local_138 = 0;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (0 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar15,&local_140,0,(int *)((longlong)&local_138 + 4));
    pUVar22 = (UNavigationSystemV1 *)0x0;
    do {
      pdVar17 = dtNavMesh::getTile(pdVar9,(int)pUVar22);
      if ((pdVar17 != (dtMeshTile *)0x0) &&
         (pdVar10 = pdVar17->header, pdVar10 != (dtMeshHeader *)0x0)) {
        local_120 = pdVar10->x;
        iStack_11c = pdVar10->y;
        if ((local_140.Data <= (FScriptContainerElement *)&local_120) &&
           (((FScriptContainerElement *)&local_120 < local_140.Data + (longlong)local_138._4_4_ * 8
            && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar14)))) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar16 = (int)local_138;
        if ((int)local_138 == local_138._4_4_) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_140,(int *)((longlong)&local_138 + 4));
        }
        local_138 = CONCAT44(local_138._4_4_,iVar16 + 1);
        *(ulonglong *)(local_140.Data + (longlong)iVar16 * 8) = CONCAT44(iStack_11c,local_120);
      }
      uVar21 = (int)pUVar22 + 1;
      pUVar22 = (UNavigationSystemV1 *)(ulonglong)uVar21;
    } while ((int)uVar21 < (int)uVar15);
  }
  (**(code **)(this->_padding_ + 0x930))(this,&local_140);
  pUVar18 = AActor::GetWorld((AActor *)this);
  if ((pUVar18 == (UWorld *)0x0) ||
     (pUVar22 = (UNavigationSystemV1 *)(pUVar18->NavigationSystem).field0_0x0.DebugPtr,
     pUVar22 == (UNavigationSystemV1 *)0x0)) {
LAB_146ded9e4:
    pUVar22 = (UNavigationSystemV1 *)0x0;
  }
  else {
    pUVar19 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar16 = (int)pUVar19->_padding_;
    if ((*(int *)(*(longlong *)&pUVar22->field_0x10 + 0x38) < iVar16) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar22->field_0x10 + 0x30) + (longlong)iVar16 * 8) !=
        &pUVar19->_padding_)) goto LAB_146ded9e4;
  }
  pTVar20 = UNavigationSystemV1::GetWorldBounds(pUVar22,&local_a0);
  local_108._s_0.X = (param_1->Min).field0_0x0._s_0.X;
  dStack_f0 = (pTVar20->Max).field0_0x0._s_0.X;
  if (((dStack_f0 < local_108._s_0.X) ||
      (dVar3 = (pTVar20->Min).field0_0x0._s_0.X,
      (param_1->Max).field0_0x0._s_0.X <= dVar3 && dVar3 != (param_1->Max).field0_0x0._s_0.X)) ||
     (dVar4 = (param_1->Min).field0_0x0._s_0.Y, pdVar1 = &(pTVar20->Max).field0_0x0._s_0.Y,
     *pdVar1 <= dVar4 && dVar4 != *pdVar1)) {
LAB_146dedab2:
    local_108._s_0.X =
         `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
         ::__l5::EmptyBox.Min.field0_0x0._s_0.X;
    local_108._s_0.Y =
         `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
         ::__l5::EmptyBox.Min.field0_0x0._s_0.Y;
    local_108._s_0.Z =
         `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
         ::__l5::EmptyBox.Min.field0_0x0._s_0.Z;
    dStack_f0 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                ::__l5::EmptyBox.Max.field0_0x0._s_0.X;
    local_d8 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
               ::__l5::EmptyBox.IsValid;
    uStack_d7 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                ::__l5::EmptyBox.Pad[0];
    uStack_d6 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                ::__l5::EmptyBox.Pad[1];
    uStack_d5 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                ::__l5::EmptyBox.Pad[2];
    uStack_d4 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                ::__l5::EmptyBox.Pad[3];
    uStack_d3 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                ::__l5::EmptyBox.Pad[4];
    uStack_d2 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                ::__l5::EmptyBox.Pad[5];
    uStack_d1 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                ::__l5::EmptyBox.Pad[6];
    uVar8 = _local_d8;
    local_e8 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
               ::__l5::EmptyBox.Max.field0_0x0._s_0.Y;
    dStack_e0 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
                ::__l5::EmptyBox.Max.field0_0x0._s_0.Z;
    local_d8 = `public:_struct_UE::Math::TBox<double>___cdecl_UE::Math::TBox<double>::Overlap(UE::Math::TBox<double>_const&___ptr64)const___ptr64'
               ::__l5::EmptyBox.IsValid;
    bVar14 = local_d8 == '\0';
    _local_d8 = uVar8;
    if (bVar14) goto LAB_146dedd2a;
  }
  else {
    local_108._s_0.Y = (pTVar20->Min).field0_0x0._s_0.Y;
    dVar5 = (param_1->Max).field0_0x0._s_0.Y;
    uVar25 = SUB84(dVar5,0);
    uVar26 = (undefined4)((ulonglong)dVar5 >> 0x20);
    if ((dVar5 < local_108._s_0.Y) ||
       (local_108._s_0.Z = (param_1->Min).field0_0x0._s_0.Z,
       pdVar1 = &(pTVar20->Max).field0_0x0._s_0.Z,
       *pdVar1 <= local_108._s_0.Z && local_108._s_0.Z != *pdVar1)) goto LAB_146dedab2;
    dVar6 = (pTVar20->Min).field0_0x0._s_0.Z;
    dStack_e0 = (param_1->Max).field0_0x0._s_0.Z;
    if (dStack_e0 < dVar6) goto LAB_146dedab2;
    dVar7 = (param_1->Max).field0_0x0._s_0.X;
    if (dVar7 <= dStack_f0) {
      dStack_f0 = dVar7;
    }
    dVar7 = *(double *)((longlong)&(pTVar20->Max).field0_0x0 + 8);
    if (dVar7 <= dVar5) {
      uVar25 = SUB84(dVar7,0);
      uVar26 = (undefined4)((ulonglong)dVar7 >> 0x20);
    }
    dVar5 = (pTVar20->Max).field0_0x0._s_0.Z;
    if (dVar5 <= dStack_e0) {
      dStack_e0 = dVar5;
    }
    if (local_108._s_0.X <= dVar3) {
      local_108._s_0.X = dVar3;
    }
    local_d8 = '\x01';
    if (local_108._s_0.Y <= dVar4) {
      local_108._s_0.Y = dVar4;
    }
    if (local_108._s_0.Z <= dVar6) {
      local_108._s_0.Z = dVar6;
    }
    local_e8 = (double)CONCAT44(uVar26,uVar25);
  }
  fVar2 = this->NavMeshResolutionParams[1].CellSize;
  uVar8 = *(undefined8 *)&(this->NavMeshOriginOffset).field0_0x0;
  local_d0._s_0.X =
       (double)CONCAT44((uint)((ulonglong)uVar8 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar8 ^ (uint)__xmm_80000000000000008000000000000000);
  uVar8 = *(undefined8 *)((longlong)&(this->NavMeshOriginOffset).field0_0x0 + 8);
  local_d0._s_0.Y = (this->NavMeshOriginOffset).field0_0x0._s_0.Z;
  auVar24 = ZEXT416((uint)(this->TileSizeUU / fVar2));
  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ArrayNum = 0;
  local_130.ArrayMax = 0;
  local_d0._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)uVar8 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar8 ^ (uint)__xmm_80000000000000008000000000000000);
  auVar24 = roundps(auVar24,auVar24,3);
  FRcTileBox::FRcTileBox
            (&local_118,(TBox<double> *)&local_108._s_0,(TVector<double> *)&local_d0._s_0,
             (double)(auVar24._0_4_ * fVar2));
  iVar16 = local_118.YMax;
  iVar12 = local_118.XMin;
  if (6 < (byte)LogNavigation._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
  }
  uVar8 = __real_7fefffffffffffff;
  iVar13 = iVar12;
  iVar23 = local_118.YMin;
  if (local_118.YMin <= iVar16) {
    do {
      for (; iVar12 <= local_118.XMax; iVar12 = iVar12 + 1) {
        uStack_b0 = uVar8;
        local_a8 = 3;
        local_b8 = iVar12;
        iStack_b4 = iVar23;
        if (((local_130.AllocatorInstance.Data <= (FScriptContainerElement *)&local_b8) &&
            ((FScriptContainerElement *)&local_b8 <
             local_130.AllocatorInstance.Data + (longlong)local_130.ArrayMax * 0x18)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar16 = local_130.ArrayNum;
        if (local_130.ArrayNum == local_130.ArrayMax) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_130.AllocatorInstance,&local_130.ArrayMax);
        }
        local_130.ArrayNum = iVar16 + 1;
        *(ulonglong *)(local_130.AllocatorInstance.Data + (longlong)iVar16 * 0x18) =
             CONCAT44(iStack_b4,local_b8);
        *(undefined8 *)(local_130.AllocatorInstance.Data + (longlong)iVar16 * 0x18 + 8) = uStack_b0;
        *(ulonglong *)(local_130.AllocatorInstance.Data + (longlong)iVar16 * 0x18 + 0x10) =
             CONCAT71(uStack_a7,local_a8);
        iVar16 = local_118.YMax;
        iVar13 = local_118.XMin;
      }
      iVar23 = iVar23 + 1;
      iVar12 = iVar13;
    } while (iVar23 <= iVar16);
  }
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4225,"ARecastNavMesh::RebuildTile",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
               ,0x1081);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4225);
  }
  if ((0 < local_130.ArrayNum) &&
     ((FRecastNavMeshGenerator *)this->_padding_ != (FRecastNavMeshGenerator *)0x0)) {
    FRecastNavMeshGenerator::ReAddTiles((FRecastNavMeshGenerator *)this->_padding_,&local_130);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.AllocatorInstance.Data);
  }
LAB_146dedd2a:
  if (local_140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data);
  }
  return;
}

// DoesNodeContainLocation @ 146dee7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
ARecastNavMesh::DoesNodeContainLocation
          (ARecastNavMesh *this,ulong64 param_1,TVector<double> *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auStack_f8 [32];
  bool local_d8 [8];
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  dtNavMeshQuery local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d8[0] = false;
  if ((this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) ||
     (this->RecastNavMeshImpl->DetourNavMesh == (dtNavMesh *)0x0)) {
    local_d8[0] = false;
  }
  else {
    dtNavMeshQuery::dtNavMeshQuery(&local_b8);
    dtNavMeshQuery::init
              (&local_b8,this->RecastNavMeshImpl->DetourNavMesh,0,(dtQuerySpecialLinkFilter *)0x0);
    local_d0 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                (uint)*(undefined8 *)&param_2->field0_0x0 ^
                                (uint)__xmm_80000000000000008000000000000000);
    uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    local_c0 = CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
    local_c8 = (param_2->field0_0x0)._s_0.Z;
    uVar2 = dtNavMeshQuery::isPointInsidePoly(&local_b8,param_1,&local_d0,local_d8);
    if ((int)uVar2 < 0) {
      local_d8[0] = false;
    }
    dtNavMeshQuery::~dtNavMeshQuery(&local_b8);
  }
  return local_d8[0];
}

// DrawDebugPathCorridor @ 146df0550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ARecastNavMesh::DrawDebugPathCorridor
          (ARecastNavMesh *this,ulong64 *param_1,int param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  UWorld *pUVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_d0;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90 [3];
  
  pUVar10 = AActor::GetWorld((AActor *)this);
  fVar3 = __real_bf800000;
  lVar14 = 0;
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  if (0 < param_2) {
    do {
      if ((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) &&
         (bVar8 = FPImplRecastNavMesh::GetPolyVerts
                            (this->RecastNavMeshImpl,param_1[lVar14],&local_d0), bVar8)) {
        uVar13 = 0;
        if (0 < local_d0.ArrayNum + -1) {
          do {
            uVar12 = uVar13 + 1;
            uVar9 = 0;
            if ((int)uVar12 < local_d0.ArrayNum) {
              uVar9 = ~uVar12 >> 0x1f;
            }
            iVar11 = local_d0.ArrayNum;
            if (uVar9 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar11 = local_d0.ArrayNum;
            }
            pFVar1 = local_d0.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x18;
            uVar9 = 0;
            if ((int)uVar13 < iVar11) {
              uVar9 = ~uVar13 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            DrawDebugLine(pUVar10,(TVector<double> *)
                                  (local_d0.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x18),
                          (TVector<double> *)pFVar1,&PathLineColor,param_3,fVar3,'\0',0.0);
            uVar13 = uVar12;
          } while ((int)uVar12 < local_d0.ArrayNum + -1);
        }
        iVar11 = local_d0.ArrayNum;
        if (local_d0.ArrayNum < 1) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar11 = local_d0.ArrayNum;
        }
        FVar7.Data = local_d0.AllocatorInstance.Data;
        uVar13 = iVar11 - 1;
        uVar9 = 0;
        if ((int)uVar13 < iVar11) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        DrawDebugLine(pUVar10,(TVector<double> *)
                              (local_d0.AllocatorInstance.Data + (longlong)(int)uVar13 * 0x18),
                      (TVector<double> *)FVar7.Data,&PathLineColor,param_3,fVar3,'\0',0.0);
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < param_2);
  }
  if ((((0 < param_2) && (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0)) &&
      (bVar8 = FPImplRecastNavMesh::GetPolyCenter
                         (this->RecastNavMeshImpl,*param_1,(TVector<double> *)&local_c0._s_0),
      dVar6 = _UNK_150ae9818, dVar5 = ___xmm_40140000000000004014000000000000,
      dVar4 = __real_4014000000000000, bVar8)) && (lVar14 = (longlong)param_2 + -1, 0 < lVar14)) {
    do {
      param_1 = param_1 + 1;
      local_a8._s_0.Z = local_c0._s_0.Z;
      local_a8._s_0.X = local_c0._s_0.X;
      local_a8._s_0.Y = local_c0._s_0.Y;
      if ((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) &&
         (bVar8 = FPImplRecastNavMesh::GetPolyCenter
                            (this->RecastNavMeshImpl,*param_1,(TVector<double> *)&local_c0._s_0),
         bVar8)) {
        DrawDebugLine(pUVar10,(TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_c0._s_0,
                      &PathLineColor,param_3,fVar3,'\0',0.0);
        local_90[0]._s_0.Z = dVar4;
        local_90[0]._s_0.X = dVar5;
        local_90[0]._s_0.Y = dVar6;
        DrawDebugBox(pUVar10,(TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_90[0]._s_0,
                     &PathLineColor,param_3,fVar3,'\0',0.0);
      }
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  return;
}

// EnsureBuildCompletion @ 146df27d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ARecastNavMesh::EnsureBuildCompletion(ARecastNavMesh *this)

{
  ANavigationData::EnsureBuildCompletion((ANavigationData *)this);
                    /* WARNING: Could not recover jumptable at 0x000146df27e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x920))(this);
  return;
}

// FillConfig @ 146df2e10

void __thiscall ARecastNavMesh::FillConfig(ARecastNavMesh *this,FNavDataConfig *param_1)

{
  FNavDataConfig::operator=(param_1,(FNavDataConfig *)&this->_padding_);
  *(float *)&param_1->_padding_ = this->AgentHeight;
  *(float *)((longlong)&param_1->_padding_ + 4) = this->AgentRadius;
  *(float *)((longlong)&param_1->_padding_ + 4) =
       this->NavMeshResolutionParams[1].AgentMaxStepHeight;
  return;
}

// FillNavigationDataChunkActor @ 146df2e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
ARecastNavMesh::FillNavigationDataChunkActor
          (ARecastNavMesh *this,TBox<double> *param_1,ANavigationDataChunkActor *param_2,
          TBox<double> *param_3)

{
  int *piVar1;
  TArray<TObjectPtr<UNavigationDataChunk>,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  UClass *pUVar15;
  URecastNavMeshDataChunk *this_00;
  longlong *plVar16;
  EGatherTilesCopyMode EVar17;
  undefined1 auStackY_308 [32];
  undefined1 local_2b8 [8];
  URecastNavMeshDataChunk *local_2b0;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_2a8;
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> local_298;
  FString local_288;
  FString local_278;
  undefined1 local_268 [128];
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_308;
  if (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) {
    if (param_1->IsValid == '\0') {
      local_2b8[0] = 0;
      bVar12 = `ARecastNavMesh::FillNavigationDataChunkActor'::__l6::<lambda_1>::operator()
                         (local_2b8);
      if (!bVar12) {
        return;
      }
    }
    if (5 < (byte)LogNavigation._0_1_) {
      ::FString::PrintfImpl(&local_278,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_288,L"X=%3.3f Y=%3.3f Z=%3.3f");
      local_1a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1a8,"ARecastNavMesh::FillNavigationDataChunkActor",0x2c,Yes);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      if ((void *)local_1a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_1a8._padding_);
      }
      if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data.AllocatorInstance.Data);
      }
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
    }
    dVar6 = (param_1->Min).field0_0x0._s_0.X;
    dVar7 = (param_1->Min).field0_0x0._s_0.Y;
    dVar8 = (param_1->Min).field0_0x0._s_0.Z;
    dVar9 = (param_1->Max).field0_0x0._s_0.X;
    dVar10 = (param_1->Max).field0_0x0._s_0.Y;
    dVar11 = (param_1->Max).field0_0x0._s_0.Z;
    EVar17 = CopyData;
    dVar3 = *(double *)&param_1->IsValid;
    local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_298.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,1,0,&local_298.AllocatorInstance,1,&local_298.ArrayMax);
    *(double *)local_298.AllocatorInstance.Data = dVar6;
    *(double *)(local_298.AllocatorInstance.Data + 8) = dVar7;
    *(double *)(local_298.AllocatorInstance.Data + 0x10) = dVar8;
    *(double *)(local_298.AllocatorInstance.Data + 0x18) = dVar9;
    *(double *)(local_298.AllocatorInstance.Data + 0x20) = dVar10;
    *(double *)(local_298.AllocatorInstance.Data + 0x28) = dVar11;
    *(double *)(local_298.AllocatorInstance.Data + 0x30) = dVar3;
    local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a8.ArrayNum = 0;
    local_2a8.ArrayMax = 0;
    local_1e8 = dVar6;
    dStack_1e0 = dVar7;
    local_1d8 = dVar8;
    dStack_1d0 = dVar9;
    local_1c8 = dVar10;
    dStack_1c0 = dVar11;
    local_1b8 = dVar3;
    FPImplRecastNavMesh::GetNavMeshTilesIn(this->RecastNavMeshImpl,&local_298,&local_2a8);
    if (local_2a8.ArrayNum != 0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)param_2,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar15 = Z_Construct_UClass_URecastNavMeshDataChunk_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_268,pUVar15);
      local_268._8_8_ = param_2;
      this_00 = (URecastNavMeshDataChunk *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_268);
      if (local_268._64_8_ != 0) {
        plVar16 = (longlong *)(local_268 + 0x50);
        if ((longlong *)local_268._104_8_ != (longlong *)0x0) {
          plVar16 = (longlong *)local_268._104_8_;
        }
        (**(code **)(*plVar16 + 0x10))();
      }
      pTVar2 = &param_2->NavDataChunks;
      this_00->_padding_ = this->_padding_;
      local_2b0 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_2b0) &&
          ((FScriptContainerElement *)&local_2b0 <
           pFVar4 + (longlong)(param_2->NavDataChunks).ArrayMax * 8)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar14 = (param_2->NavDataChunks).ArrayNum;
      piVar1 = &(param_2->NavDataChunks).ArrayMax;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (param_2->NavDataChunks).ArrayNum = iVar14 + 1;
      *(URecastNavMeshDataChunk **)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 8) =
           local_2b0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_2b0 != (URecastNavMeshDataChunk *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_2b0);
      }
      cVar13 = (**(code **)(this->_padding_ + 0x780))(this);
      if (cVar13 != '\0') {
        EVar17 = CopyDataAndCacheData;
      }
      URecastNavMeshDataChunk::GetTiles(this_00,this->RecastNavMeshImpl,&local_2a8,EVar17,true);
      URecastNavMeshDataChunk::GetTilesBounds(this_00,this->RecastNavMeshImpl,&local_2a8,param_3);
    }
    if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.AllocatorInstance.Data);
    }
    if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.AllocatorInstance.Data);
    }
  }
  return;
}

// FilterPolys @ 146df32d0

bool __thiscall
ARecastNavMesh::FilterPolys
          (ARecastNavMesh *this,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1,
          FRecastQueryFilter *param_2,UObject *param_3)

{
  FScriptContainerElement *_Dst;
  FPImplRecastNavMesh *pFVar1;
  ulong64 uVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  dtPoly *apdStackX_18 [2];
  dtMeshTile *pdStack_68;
  longlong lStack_60;
  
  dVar4 = __real_47efffffe0000000;
  pFVar1 = this->RecastNavMeshImpl;
  if (pFVar1 == (FPImplRecastNavMesh *)0x0) {
    return false;
  }
  if ((param_2 == (FRecastQueryFilter *)0x0) || (pFVar1->DetourNavMesh == (dtNavMesh *)0x0)) {
    return false;
  }
  iVar13 = param_1->ArrayNum;
  uVar12 = iVar13 - 1;
  if (-1 < (int)uVar12) {
    lVar11 = (longlong)(int)uVar12;
    lVar14 = lVar11 * 8;
    do {
      uVar15 = ~uVar12 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar8 = uVar15;
      }
      lStack_60 = lVar14;
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      uVar2 = *(ulong64 *)((param_1->AllocatorInstance).Data + lVar14);
      apdStackX_18[0] = (dtPoly *)0x0;
      pdStack_68 = (dtMeshTile *)0x0;
      uVar8 = dtNavMesh::getTileAndPolyByRef(pFVar1->DetourNavMesh,uVar2,&pdStack_68,apdStackX_18);
      if ((uVar8 >> 0x1e & 1) == 0) {
LAB_146df3478:
        uVar8 = 0;
        if (iVar13 <= param_1->ArrayNum) {
          uVar8 = uVar15;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        _Dst = (param_1->AllocatorInstance).Data + lVar11 * 8;
        iVar10 = param_1->ArrayNum + ~uVar12;
        if (iVar10 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar10 << 3);
        }
        param_1->ArrayNum = param_1->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
      }
      else {
        if (param_2->field_0x428 == '\0') {
          if (((((*(ushort *)&param_2->field_0x420 & apdStackX_18[0]->flags) == 0) ||
               ((*(ushort *)&param_2->field_0x422 & apdStackX_18[0]->flags) != 0)) ||
              (uVar9 = (ulonglong)(apdStackX_18[0]->areaAndtype & 0x3f),
              dVar4 < *(double *)(&param_2->field_0x10 + uVar9 * 8) ||
              dVar4 == *(double *)(&param_2->field_0x10 + uVar9 * 8))) ||
             (dVar4 < *(double *)(&param_2->field_0x210 + uVar9 * 8) ||
              dVar4 == *(double *)(&param_2->field_0x210 + uVar9 * 8))) {
            cVar7 = '\0';
          }
          else {
            cVar7 = '\x01';
          }
        }
        else {
          cVar7 = (**(code **)(*(longlong *)&param_2->field_0x8 + 8))
                            (&param_2->field_0x8,uVar2,pdStack_68,apdStackX_18[0]);
        }
        if ((cVar7 == '\0') ||
           (*(double *)(&param_2->field_0x10 + (ulonglong)(apdStackX_18[0]->areaAndtype & 0x3f) * 8)
            <= 0.0)) goto LAB_146df3478;
      }
      iVar13 = iVar13 + -1;
      lVar14 = lStack_60 + -8;
      lVar11 = lVar11 + -1;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  return true;
}

// FindDistanceToWall @ 146df3980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

double __thiscall
ARecastNavMesh::FindDistanceToWall
          (ARecastNavMesh *this,TVector<double> *param_1,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_2,double param_3,
          TVector<double> *param_4)

{
  undefined8 uVar1;
  dtNavMesh *pdVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  INavigationQueryFilterInterface *pIVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  dtNavMeshQuery *this_00;
  FNavigationQueryFilter *pFVar9;
  dtQueryFilter *pdVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStackY_1c8 [32];
  double local_188;
  ulong64 local_180;
  double local_178;
  double local_170;
  undefined8 local_168;
  dtNavMeshQuery local_158;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  longlong local_90;
  double local_88 [3];
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_180 = local_180 & 0xffffffff00000000;
  if ((((this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) ||
       (pdVar2 = this->RecastNavMeshImpl->DetourNavMesh, pdVar2 == (dtNavMesh *)0x0)) ||
      (pdVar2->m_tileWidth <= 0.0)) || (pdVar2->m_tileHeight <= 0.0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
  }
  else {
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    pFVar9 = param_2->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar9 == (FNavigationQueryFilter *)0x0) {
      pFVar9 = (FNavigationQueryFilter *)this->_padding_;
      pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    dtNavMeshQuery::dtNavMeshQuery(&local_158);
    bVar7 = IsInGameThread();
    if (bVar7) {
      this_00 = &this->RecastNavMeshImpl->SharedNavQuery;
    }
    else {
      this_00 = &local_158;
    }
    dtNavMeshQuery::init
              (this_00,this->RecastNavMeshImpl->DetourNavMesh,pFVar9->MaxSearchNodes,
               (dtQuerySpecialLinkFilter *)0x0);
    pIVar5 = (pFVar9->QueryFilterImpl).Object;
    pdVar10 = (dtQueryFilter *)(pIVar5 + 1);
    if (pIVar5 == (INavigationQueryFilterInterface *)0x0) {
      pdVar10 = (dtQueryFilter *)0x0;
    }
    if (pdVar10 == (dtQueryFilter *)0x0) {
      if (FVisualLogger::bIsRecording != 0) {
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this,(FName *)&LogNavigation.field_0x4,Warning,
                   L"ARecastNavMesh::FindDistanceToWall failing due to QueryFilter == NULL");
      }
      dtNavMeshQuery::~dtNavMeshQuery(&local_158);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
    }
    else {
      local_a8 = (double)this->_padding_;
      local_a0 = (double)this->_padding_;
      local_90 = this->_padding_;
      local_98 = __real_4290000000000000;
      if (local_a8 < __real_4290000000000000) {
        local_98 = (double)this->VerticalDeviationFromGroundCompensation;
        if (local_98 <= 0.0) {
          local_98 = 0.0;
        }
        local_98 = local_98 + local_a8;
      }
      uVar11 = (uint)__xmm_80000000000000008000000000000000;
      uVar12 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
      local_168 = CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar12,(uint)uVar1 ^ uVar11);
      local_178 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) ^
                                   uVar12,(uint)*(undefined8 *)&param_1->field0_0x0 ^ uVar11);
      local_170 = (param_1->field0_0x0)._s_0.Z;
      local_180 = 0;
      dtNavMeshQuery::findNearestPoly
                (this_00,&local_178,&local_a0,pdVar10,&local_180,(double *)0x0,(double *)0x0);
      if (local_180 != 0) {
        local_188 = 0.0;
        uVar8 = dtNavMeshQuery::findDistanceToWall
                          (this_00,local_180,&local_178,param_3,pdVar10,&local_188,&local_b8,
                           local_88);
        dVar6 = local_188;
        if ((uVar8 >> 0x1e & 1) != 0) {
          if (param_4 != (TVector<double> *)0x0) {
            (param_4->field0_0x0)._s_0.X =
                 (double)CONCAT44((uint)((ulonglong)local_b8 >> 0x20) ^ uVar12,
                                  SUB84(local_b8,0) ^ uVar11);
            (param_4->field0_0x0)._s_0.Y =
                 (double)CONCAT44((uint)((ulonglong)local_a8 >> 0x20) ^ uVar12,
                                  SUB84(local_a8,0) ^ uVar11);
            (param_4->field0_0x0)._s_0.Z = local_b0;
          }
          dtNavMeshQuery::~dtNavMeshQuery(&local_158);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_2->SharedReferenceCount).ReferenceController);
          return dVar6;
        }
      }
      dtNavMeshQuery::~dtNavMeshQuery(&local_158);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
    }
  }
  return 0.0;
}

// FindEdges @ 146df3ca0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
ARecastNavMesh::FindEdges
          (ARecastNavMesh *this,ulong64 param_1,TVector<double> *param_2,double param_3,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,
          TArray<FNavigationWallEdge,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  dtNavMesh *pdVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  INavigationQueryFilterInterface *pIVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  dtQueryFilter *pdVar13;
  longlong lVar14;
  double *pdVar15;
  dtNavMeshQuery *this_00;
  FNavigationQueryFilter *pFVar16;
  dtQueryFilter *pdVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStackY_13d8 [32];
  uint local_1378 [2];
  double local_1370;
  double dStack_1368;
  double local_1360;
  double dStack_1358;
  double dStack_1350;
  double dStack_1348;
  TVector<double> *local_1340;
  ulong64 local_1338;
  double local_1328;
  double local_1320;
  undefined8 local_1318;
  dtNavMeshQuery local_1308;
  ulong64 local_1268 [64];
  ulong64 local_1068 [128];
  double local_c68;
  double local_c60 [383];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_13d8;
  pdVar17 = (dtQueryFilter *)0x0;
  local_1378[1] = 0;
  local_1340 = param_2;
  local_1338 = param_1;
  if ((((this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) ||
       (pdVar3 = this->RecastNavMeshImpl->DetourNavMesh, pdVar3 == (dtNavMesh *)0x0)) ||
      (pdVar3->m_tileWidth <= 0.0)) || (pdVar3->m_tileHeight <= 0.0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->SharedReferenceCount).ReferenceController);
    bVar9 = false;
  }
  else {
    pTVar4 = (param_4->SharedReferenceCount).ReferenceController;
    pFVar16 = param_4->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar16 == (FNavigationQueryFilter *)0x0) {
      pFVar16 = (FNavigationQueryFilter *)this->_padding_;
      pTVar5 = (TReferenceControllerBase<1> *)this->_padding_;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    dtNavMeshQuery::dtNavMeshQuery(&local_1308);
    bVar9 = IsInGameThread();
    if (bVar9) {
      this_00 = &this->RecastNavMeshImpl->SharedNavQuery;
    }
    else {
      this_00 = &local_1308;
    }
    dtNavMeshQuery::init
              (this_00,this->RecastNavMeshImpl->DetourNavMesh,pFVar16->MaxSearchNodes,
               (dtQuerySpecialLinkFilter *)0x0);
    pIVar6 = (pFVar16->QueryFilterImpl).Object;
    local_1378[0] = 0;
    memset(&local_c68,0,0xc00);
    memset(local_1068,0,0x400);
    local_1378[1] = 0;
    memset(local_1268,0,0x200);
    uVar18 = (uint)__xmm_80000000000000008000000000000000;
    uVar19 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    uVar2 = *(undefined8 *)((longlong)&local_1340->field0_0x0 + 8);
    local_1328 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&local_1340->field0_0x0 >> 0x20)
                                  ^ uVar19,(uint)*(undefined8 *)&local_1340->field0_0x0 ^ uVar18);
    local_1320 = (local_1340->field0_0x0)._s_0.Z;
    pdVar13 = (dtQueryFilter *)(pIVar6 + 1);
    if (pIVar6 == (INavigationQueryFilterInterface *)0x0) {
      pdVar13 = pdVar17;
    }
    local_1318 = CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ uVar19,(uint)uVar2 ^ uVar18);
    uVar11 = dtNavMeshQuery::findWallsInNeighbourhood
                       (this_00,local_1338,&local_1328,param_3,pdVar13,local_1268,
                        (int *)(local_1378 + 1),0x40,&local_c68,local_1068,(int *)local_1378,0x40);
    if ((uVar11 >> 0x1e & 1) == 0) {
      dtNavMeshQuery::~dtNavMeshQuery(&local_1308);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_4->SharedReferenceCount).ReferenceController);
      bVar9 = false;
    }
    else {
      if ((int)local_1378[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_1378[0]);
      }
      piVar1 = &param_5->ArrayMax;
      param_5->ArrayNum = 0;
      if (param_5->ArrayMax < (int)local_1378[0]) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,local_1378[0],&param_5->AllocatorInstance,0,piVar1);
      }
      local_1360 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dStack_1348 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1370 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1368 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      dStack_1358 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_1350 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if (0 < (int)local_1378[0]) {
        pdVar15 = local_c60;
        do {
          pFVar7 = (param_5->AllocatorInstance).Data;
          local_1370 = (double)CONCAT44((uint)((ulonglong)pdVar15[-1] >> 0x20) ^ uVar19,
                                        SUB84(pdVar15[-1],0) ^ uVar18);
          local_1360 = *pdVar15;
          dStack_1368 = (double)CONCAT44((uint)((ulonglong)pdVar15[1] >> 0x20) ^ uVar19,
                                         SUB84(pdVar15[1],0) ^ uVar18);
          dStack_1350 = (double)CONCAT44((uint)((ulonglong)pdVar15[4] >> 0x20) ^ uVar19,
                                         SUB84(pdVar15[4],0) ^ uVar18);
          dStack_1348 = pdVar15[3];
          dStack_1358 = (double)CONCAT44((uint)((ulonglong)pdVar15[2] >> 0x20) ^ uVar19,
                                         SUB84(pdVar15[2],0) ^ uVar18);
          if (((pFVar7 <= (FScriptContainerElement *)&local_1370) &&
              ((FScriptContainerElement *)&local_1370 < pFVar7 + (longlong)*piVar1 * 0x30)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar8 = (code *)swi(3);
            uVar10 = (*pcVar8)();
            return (bool)uVar10;
          }
          iVar12 = param_5->ArrayNum;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x830,&param_5->AllocatorInstance,piVar1);
          }
          uVar11 = (int)pdVar17 + 1;
          pdVar17 = (dtQueryFilter *)(ulonglong)uVar11;
          param_5->ArrayNum = iVar12 + 1;
          pdVar15 = pdVar15 + 6;
          lVar14 = (longlong)iVar12;
          pFVar7 = (param_5->AllocatorInstance).Data;
          *(double *)(pFVar7 + lVar14 * 0x30) = local_1370;
          *(double *)(pFVar7 + lVar14 * 0x30 + 8) = dStack_1368;
          *(double *)(pFVar7 + lVar14 * 0x30 + 0x10) = local_1360;
          *(double *)(pFVar7 + lVar14 * 0x30 + 0x10 + 8) = dStack_1358;
          *(double *)(pFVar7 + lVar14 * 0x30 + 0x20) = dStack_1350;
          *(double *)(pFVar7 + lVar14 * 0x30 + 0x20 + 8) = dStack_1348;
        } while ((int)uVar11 < (int)local_1378[0]);
      }
      dtNavMeshQuery::~dtNavMeshQuery(&local_1308);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_4->SharedReferenceCount).ReferenceController);
      bVar9 = true;
    }
  }
  return bVar9;
}

// FindMoveAlongSurface @ 146df40e0

bool __thiscall
ARecastNavMesh::FindMoveAlongSurface
          (ARecastNavMesh *this,FNavLocation *param_1,TVector<double> *param_2,FNavLocation *param_3
          ,TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,UObject *param_5)

{
  FPImplRecastNavMesh *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  FNavigationQueryFilter *pFVar4;
  
  this_00 = (FPImplRecastNavMesh *)this->_padding_;
  bVar3 = false;
  if (this_00 != (FPImplRecastNavMesh *)0x0) {
    pFVar4 = param_4->Object;
    pTVar1 = (param_4->SharedReferenceCount).ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar4 == (FNavigationQueryFilter *)0x0) {
      pFVar4 = (FNavigationQueryFilter *)this->_padding_;
      pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    bVar3 = FPImplRecastNavMesh::FindMoveAlongSurface
                      (this_00,param_1,param_2,param_3,pFVar4,param_5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return bVar3;
}

// FindNearestPoly @ 146df44b0

ulong64 __thiscall
ARecastNavMesh::FindNearestPoly
          (ARecastNavMesh *this,TVector<double> *param_1,TVector<double> *param_2,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_3,UObject *param_4)

{
  FPImplRecastNavMesh *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  ulong64 uVar3;
  FNavigationQueryFilter *pFVar4;
  
  this_00 = this->RecastNavMeshImpl;
  uVar3 = 0;
  if (this_00 != (FPImplRecastNavMesh *)0x0) {
    pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
    pFVar4 = param_3->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar4 == (FNavigationQueryFilter *)0x0) {
      pFVar4 = (FNavigationQueryFilter *)this->_padding_;
      pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    uVar3 = FPImplRecastNavMesh::FindNearestPoly(this_00,param_1,param_2,pFVar4,param_4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return uVar3;
}

// FindOverlappingEdges @ 146df4800

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
ARecastNavMesh::FindOverlappingEdges
          (ARecastNavMesh *this,FNavLocation *param_1,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,UObject *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  double dVar7;
  INavigationQueryFilterInterface *pIVar8;
  TVector<double> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  TArrayView<UE::Math::TVector<double>_const_,int> *pTVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  int iVar17;
  UWorld *pUVar18;
  UClass *pUVar19;
  int iVar20;
  dtQueryFilter *pdVar21;
  undefined8 *puVar22;
  uint uVar23;
  dtQueryFilter *pdVar24;
  dtQueryFilter *pdVar25;
  FNavigationQueryFilter *pFVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auStackY_14c8 [32];
  int local_1468 [4];
  longlong local_1458;
  dtNavMeshQuery *local_1450;
  TSharedPtr<FNavigationQueryFilter_const_,1> *local_1448;
  dtQueryFilter *local_1440;
  FNavLocation *local_1438;
  undefined8 local_1430;
  undefined8 uStack_1428;
  undefined8 local_1420;
  undefined8 local_1418;
  undefined8 uStack_1410;
  undefined8 local_1408;
  dtQuerySpecialLinkFilter local_1400;
  dtQueryFilter *local_13f8;
  FWeakObjectPtr local_13f0;
  undefined8 local_13e8;
  UObject *local_13e0;
  TArrayView<UE::Math::TVector<double>_const_,int> *local_13d8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_13d0;
  dtNavMeshQuery local_13c8;
  double local_1328 [2];
  undefined8 local_1318 [22];
  ulong64 local_1268 [64];
  ulong64 local_1068 [128];
  double local_c68 [4];
  undefined8 local_c48 [380];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_14c8;
  pdVar25 = (dtQueryFilter *)0x0;
  local_1468[1] = 0;
  local_1448 = param_4;
  local_1438 = param_1;
  local_13d8 = param_2;
  local_13d0 = param_3;
  if ((this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) ||
     (this->RecastNavMeshImpl->DetourNavMesh == (dtNavMesh *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->SharedReferenceCount).ReferenceController);
    return false;
  }
  pTVar5 = (param_4->SharedReferenceCount).ReferenceController;
  pFVar26 = param_4->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar26 == (FNavigationQueryFilter *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)this->_padding_;
    pFVar26 = (FNavigationQueryFilter *)this->_padding_;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pUVar18 = AActor::GetWorld((AActor *)this);
  if ((pUVar18 != (UWorld *)0x0) &&
     (pdVar21 = (dtQueryFilter *)(pUVar18->NavigationSystem).field0_0x0.DebugPtr,
     pdVar21 != (dtQueryFilter *)0x0)) {
    pUVar19 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    dVar7 = (pdVar21->data).m_areaCost[1];
    iVar17 = (int)pUVar19->_padding_;
    if ((iVar17 <= *(int *)((longlong)dVar7 + 0x38)) &&
       (local_13f8 = pdVar21,
       (longlong *)*(undefined1 **)(*(longlong *)((longlong)dVar7 + 0x30) + (longlong)iVar17 * 8) ==
       &pUVar19->_padding_)) goto LAB_146df4909;
  }
  local_13f8 = pdVar25;
LAB_146df4909:
  local_1400 = (dtQuerySpecialLinkFilter)&___7FRecastSpeciaLinkFilter__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_5);
  }
  local_13f0.ObjectIndex = 0;
  local_13f0.ObjectSerialNumber = 0;
  local_13e0 = param_5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_5);
  }
  FWeakObjectPtr::operator=(&local_13f0,(FObjectPtr)&local_13e0);
  local_13e8 = 0;
  dtNavMeshQuery::dtNavMeshQuery(&local_13c8);
  bVar14 = IsInGameThread();
  local_1450 = &local_13c8;
  if (bVar14) {
    local_1450 = &this->RecastNavMeshImpl->SharedNavQuery;
  }
  dtNavMeshQuery::init
            (local_1450,this->RecastNavMeshImpl->DetourNavMesh,pFVar26->MaxSearchNodes,&local_1400);
  pIVar8 = (pFVar26->QueryFilterImpl).Object;
  local_1468[0] = 0;
  local_1440 = (dtQueryFilter *)(pIVar8 + 1);
  if (pIVar8 == (INavigationQueryFilterInterface *)0x0) {
    local_1440 = pdVar25;
  }
  memset(local_c68,0,0xc00);
  memset(local_1068,0,0x400);
  local_1468[1] = 0;
  memset(local_1268,0,0x200);
  iVar17 = param_2->ArrayNum;
  iVar20 = 8;
  if (iVar17 < 8) {
    iVar20 = iVar17;
  }
  local_1468[2] = iVar20;
  memset(local_1328,0,0xc0);
  pTVar13 = local_13d8;
  uVar27 = (uint)__xmm_80000000000000008000000000000000;
  uVar28 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_1458 = (longlong)iVar20;
  if (0 < iVar20) {
    puVar22 = local_1318;
    pdVar21 = pdVar25;
    pdVar24 = pdVar25;
    do {
      uVar23 = (uint)pdVar24;
      uVar16 = 0;
      if ((int)uVar23 < iVar17) {
        uVar16 = ~uVar23 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        uVar15 = (*pcVar12)();
        return (bool)uVar15;
      }
      pTVar9 = pTVar13->DataPtr;
      pdVar24 = (dtQueryFilter *)(ulonglong)(uVar23 + 1);
      uVar2 = *(undefined8 *)((longlong)&pTVar9->field0_0x0 + (longlong)(pdVar21->data).m_areaCost);
      uVar3 = *(undefined8 *)((longlong)&pdVar21->_padding_ + (longlong)pTVar9);
      uVar4 = *(undefined8 *)((longlong)((pdVar21->data).m_areaCost + 1) + (longlong)pTVar9);
      puVar22[-2] = CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^ uVar28,(uint)uVar3 ^ uVar27);
      pdVar21 = (dtQueryFilter *)((pdVar21->data).m_areaCost + 2);
      *puVar22 = CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ uVar28,(uint)uVar2 ^ uVar27);
      puVar22[-1] = uVar4;
      puVar22 = puVar22 + 3;
      local_1458 = local_1458 + -1;
    } while (local_1458 != 0);
    local_1458 = 0;
    param_3 = local_13d0;
    iVar20 = local_1468[2];
  }
  uVar16 = dtNavMeshQuery::findWallsOverlappingShape
                     (local_1450,local_1438->NodeRef,local_1328,iVar20,local_1440,local_1268,
                      local_1468 + 1,0x40,local_c68,local_1068,local_1468,0x40);
  if ((uVar16 >> 0x1e & 1) == 0) {
    dtNavMeshQuery::~dtNavMeshQuery(&local_13c8);
    local_1400 = (dtQuerySpecialLinkFilter)&___7dtQuerySpecialLinkFilter__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((local_1448->SharedReferenceCount).ReferenceController);
    bVar14 = false;
  }
  else {
    uVar16 = local_1468[0] * 2;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    piVar1 = &param_3->ArrayMax;
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax < (int)uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar16,&param_3->AllocatorInstance,0,piVar1);
    }
    if (0 < local_1468[0]) {
      puVar22 = local_c48;
      do {
        pFVar10 = (param_3->AllocatorInstance).Data;
        uStack_1428 = CONCAT44((uint)((ulonglong)puVar22[-2] >> 0x20) ^ uVar28,
                               (uint)puVar22[-2] ^ uVar27);
        local_1430 = CONCAT44((uint)((ulonglong)puVar22[-4] >> 0x20) ^ uVar28,
                              (uint)puVar22[-4] ^ uVar27);
        local_1420 = puVar22[-3];
        if (((pFVar10 <= (FScriptContainerElement *)&local_1430) &&
            ((FScriptContainerElement *)&local_1430 < pFVar10 + (longlong)*piVar1 * 0x18)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          uVar15 = (*pcVar12)();
          return (bool)uVar15;
        }
        iVar17 = param_3->ArrayNum;
        if (iVar17 == *piVar1) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&param_3->AllocatorInstance,piVar1);
        }
        param_3->ArrayNum = iVar17 + 1;
        pFVar11 = (param_3->AllocatorInstance).Data;
        pFVar10 = pFVar11 + (longlong)iVar17 * 0x18;
        *(undefined8 *)pFVar10 = local_1430;
        *(undefined8 *)(pFVar10 + 8) = uStack_1428;
        *(undefined8 *)(pFVar11 + (longlong)iVar17 * 0x18 + 0x10) = local_1420;
        pFVar10 = (param_3->AllocatorInstance).Data;
        uStack_1410 = CONCAT44((uint)((ulonglong)puVar22[1] >> 0x20) ^ uVar28,
                               (uint)puVar22[1] ^ uVar27);
        local_1418 = CONCAT44((uint)((ulonglong)puVar22[-1] >> 0x20) ^ uVar28,
                              (uint)puVar22[-1] ^ uVar27);
        local_1408 = *puVar22;
        if (((pFVar10 <= (FScriptContainerElement *)&local_1418) &&
            ((FScriptContainerElement *)&local_1418 < pFVar10 + (longlong)*piVar1 * 0x18)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          uVar15 = (*pcVar12)();
          return (bool)uVar15;
        }
        iVar17 = param_3->ArrayNum;
        if (iVar17 == *piVar1) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&param_3->AllocatorInstance,piVar1);
        }
        uVar16 = (int)pdVar25 + 1;
        pdVar25 = (dtQueryFilter *)(ulonglong)uVar16;
        param_3->ArrayNum = iVar17 + 1;
        puVar22 = puVar22 + 6;
        pFVar11 = (param_3->AllocatorInstance).Data;
        pFVar10 = pFVar11 + (longlong)iVar17 * 0x18;
        *(undefined8 *)pFVar10 = local_1418;
        *(undefined8 *)(pFVar10 + 8) = uStack_1410;
        *(undefined8 *)(pFVar11 + (longlong)iVar17 * 0x18 + 0x10) = local_1408;
      } while ((int)uVar16 < local_1468[0]);
    }
    dtNavMeshQuery::~dtNavMeshQuery(&local_13c8);
    local_1400 = (dtQuerySpecialLinkFilter)&___7dtQuerySpecialLinkFilter__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((local_1448->SharedReferenceCount).ReferenceController);
    bVar14 = true;
  }
  return bVar14;
}

// FindPath @ 146df4e00

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPathFindingResult * __cdecl
ARecastNavMesh::FindPath
          (FPathFindingResult *__return_storage_ptr__,FNavAgentProperties *param_1,
          FPathFindingQuery *param_2)

{
  int *piVar1;
  TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> *pTVar2;
  FName FVar3;
  INavigationQueryFilterInterface *pIVar4;
  FScriptContainerElement *pFVar5;
  FPImplRecastNavMesh *this;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  Type TVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastPathfinding> FVar14;
  ANavigationData *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *pFVar15;
  UClass *pUVar16;
  FPathFindingResult *pFVar17;
  FNavMeshPath *pFVar18;
  TSharedPtr<FNavigationPath,1> *pTVar19;
  longlong lVar20;
  UObject *pUVar21;
  uint uVar22;
  FNavigationPath *this_02;
  FNavigationQueryFilter *pFVar23;
  FNameEntryId FVar24;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FName local_158;
  LARGE_INTEGER local_148;
  TSharedPtr<FNavigationPath,1> local_140;
  Type local_130;
  TVector<double>_u_0 local_128;
  LARGE_INTEGER local_110;
  LARGE_INTEGER local_108;
  FStatMessage local_100;
  FStatMessage local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  FStatMessage local_d0;
  double local_c0;
  double dStack_b8;
  double local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  TVector<double>_u_0 local_90;
  FName local_78;
  TSharedPtr<FNavigationPath,1> local_70 [3];
  
  FVar14 = StatPtr_STAT_Navigation_RecastPathfinding;
  if (StatPtr_STAT_Navigation_RecastPathfinding ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastPathfinding>)0x0) {
    pFVar13 = ::FName::FName(&local_78,"STAT_Navigation_RecastPathfinding");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastPathfinding>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastPathfinding,
                        *pFVar13,L"Recast: pathfinding","STATGROUP_Navigation","STATCAT_Advanced",
                        L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  FVar3 = *(FName *)FVar14;
  FVar24 = FVar3.ComparisonIndex.Value;
  uVar22 = FVar3.Number;
  if ((FVar24.Value != 0) || (uVar22 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar24.Value;
        local_res20.Number = uVar22;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                   ,0xd0e);
        bVar8 = true;
        bVar7 = true;
      }
    }
    bVar9 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_148.s.LowPart = FVar24.Value;
      local_148.s.HighPart = uVar22;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar9 = true;
      local_158 = FVar3;
    }
  }
  if (__CsvProfilerStat3343 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Pathfinding");
    __CsvProfilerStat3343 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Pathfinding","CSV_Pathfinding");
  this_00 = (ANavigationData *)FWeakObjectPtr::Get(&(param_2->NavData).WeakPtr);
  FVar24 = local_158.ComparisonIndex.Value;
  uVar22 = local_158.Number;
  if (this_00 == (ANavigationData *)0x0) {
    (__return_storage_ptr__->Path).Object = (FNavigationPath *)0x0;
    (__return_storage_ptr__->Path).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Result = Error;
    FCsvProfiler::EndExclusiveStat("Pathfinding");
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar9) {
      return __return_storage_ptr__;
    }
    if (local_158 == (FName)0x0) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return __return_storage_ptr__;
    }
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) {
      return __return_storage_ptr__;
    }
    local_100.NameAndInfo.Number = uVar22 & 0xffff6fff | 0x6000;
    local_100.NameAndInfo.Index.Value = FVar24.Value;
    QueryPerformanceCounter(&local_148);
    local_100.StatData.Pad[4] = '\0';
    local_100.StatData.Pad[5] = '\0';
    local_100.StatData.Pad[6] = '\0';
    local_100.StatData.Pad[7] = '\0';
    local_100.StatData.Pad[0] = local_148.s.LowPart._0_1_;
    local_100.StatData.Pad[1] = local_148.s.LowPart._1_1_;
    local_100.StatData.Pad[2] = local_148.s.LowPart._2_1_;
    local_100.StatData.Pad[3] = local_148.s.LowPart._3_1_;
    FThreadStats::AddStatMessage(this_01,&local_100);
    piVar1 = &this_01->ScopeCount;
    *piVar1 = *piVar1 + -1;
    iVar11 = *piVar1;
    goto joined_r0x000146df5601;
  }
  pUVar16 = GetPrivateStaticClass();
  iVar11 = (int)pUVar16->_padding_;
  if (((*(int *)(this_00->_padding_ + 0x38) < iVar11) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar11 * 8)
       != &pUVar16->_padding_)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Cast<const ARecastNavMesh>(Self)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                          ,0xd17,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar17 = (FPathFindingResult *)(*pcVar6)();
    return pFVar17;
  }
  if (this_00[1]._padding_ == 0) {
    (__return_storage_ptr__->Path).Object = (FNavigationPath *)0x0;
    (__return_storage_ptr__->Path).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Result = Error;
    FCsvProfiler::EndExclusiveStat("Pathfinding");
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar9) {
      return __return_storage_ptr__;
    }
    if (local_158 == (FName)0x0) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return __return_storage_ptr__;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return __return_storage_ptr__;
    }
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) {
      return __return_storage_ptr__;
    }
    local_f0.NameAndInfo.Number = uVar22 & 0xffff6fff | 0x6000;
    local_f0.NameAndInfo.Index.Value = FVar24.Value;
    QueryPerformanceCounter(&local_110);
    local_f0.StatData.Pad[4] = '\0';
    local_f0.StatData.Pad[5] = '\0';
    local_f0.StatData.Pad[6] = '\0';
    local_f0.StatData.Pad[7] = '\0';
    local_f0.StatData.Pad[0] = local_110.s.LowPart._0_1_;
    local_f0.StatData.Pad[1] = local_110.s.LowPart._1_1_;
    local_f0.StatData.Pad[2] = local_110.s.LowPart._2_1_;
    local_f0.StatData.Pad[3] = local_110.s.LowPart._3_1_;
    FThreadStats::AddStatMessage(this_01,&local_f0);
    piVar1 = &this_01->ScopeCount;
    *piVar1 = *piVar1 + -1;
    iVar11 = *piVar1;
    goto joined_r0x000146df5601;
  }
  this_02 = (param_2->PathInstanceToFill).Object;
  TVar12 = Error;
  local_130 = Error;
  local_140.Object = (FNavigationPath *)0x0;
  local_140.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((this_02 == (FNavigationPath *)0x0) ||
     (pFVar18 = FNavigationPath::CastPath<FNavMeshPath>(this_02), pFVar18 == (FNavMeshPath *)0x0)) {
    pTVar19 = ANavigationData::CreatePathInstance<FNavMeshPath>
                        (this_00,local_70,(FPathFindingQueryData *)param_2);
    if (&local_140 != pTVar19) {
      local_140.Object = pTVar19->Object;
      pTVar19->Object = (FNavigationPath *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_140.SharedReferenceCount,&pTVar19->SharedReferenceCount);
      TVar12 = local_130;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70[0].SharedReferenceCount.ReferenceController);
    this_02 = local_140.Object;
    if (local_140.Object != (FNavigationPath *)0x0) {
      pFVar18 = FNavigationPath::CastPath<FNavMeshPath>(local_140.Object);
      pFVar23 = (FNavigationQueryFilter *)param_2->_padding_;
      if (pFVar18 != (FNavMeshPath *)0x0) goto LAB_146df5296;
    }
  }
  else {
    local_140.SharedReferenceCount.ReferenceController =
         (param_2->PathInstanceToFill).SharedReferenceCount.ReferenceController;
    if (local_140.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_140.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_140.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e0 = 0;
    uStack_d8 = 0;
    local_140.Object = this_02;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    (**(code **)(pFVar18->_padding_ + 8))();
    pFVar23 = (FNavigationQueryFilter *)param_2->_padding_;
LAB_146df5296:
    if (pFVar23 != (FNavigationQueryFilter *)0x0) {
      lVar20 = param_2->_padding_;
      if ((lVar20 & 1) != 0) {
        pFVar18->bWantsStringPulling = 0;
      }
      if ((lVar20 & 2) != 0) {
        pFVar18->bWantsPathCorridor = 1;
      }
      if (((pFVar23->QueryFilterImpl).Object == (INavigationQueryFilterInterface *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar17 = (FPathFindingResult *)(*pcVar6)();
        return pFVar17;
      }
      pIVar4 = (pFVar23->QueryFilterImpl).Object;
      (**(code **)((longlong)*pIVar4 + 0x78))(pIVar4,&local_128);
      local_90._s_0.X = (double)param_2->_padding_ - local_128._s_0.X;
      local_90._s_0.Y = (double)param_2->_padding_ - local_128._s_0.Y;
      local_90._s_0.Z = (double)param_2->_padding_ - local_128._s_0.Z;
      bVar10 = UE::Math::TVector<double>::IsNearlyZero
                         ((TVector<double> *)&local_90._s_0,__real_3f1a36e2e0000000);
      if (bVar10) {
        if ((this_02 == (FNavigationPath *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar17 = (FPathFindingResult *)(*pcVar6)();
          return pFVar17;
        }
        (this_02->PathPoints).ArrayNum = 0;
        if ((this_02->PathPoints).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,0,&(this_02->PathPoints).AllocatorInstance,0,
                     &(this_02->PathPoints).ArrayMax);
        }
        this_02 = local_140.Object;
        if ((local_140.Object == (FNavigationPath *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar17 = (FPathFindingResult *)(*pcVar6)();
          return pFVar17;
        }
        pTVar2 = &this_02->PathPoints;
        uStack_a8 = 0;
        local_c0 = local_128._s_0.X;
        dStack_b8 = local_128._s_0.Y;
        local_a0 = 0;
        local_b0 = local_128._s_0.Z;
        uStack_98 = 0;
        pFVar5 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_c0) &&
            ((FScriptContainerElement *)&local_c0 <
             pFVar5 + (longlong)(this_02->PathPoints).ArrayMax * 0x30)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar17 = (FPathFindingResult *)(*pcVar6)();
          return pFVar17;
        }
        iVar11 = (this_02->PathPoints).ArrayNum;
        piVar1 = &(this_02->PathPoints).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&pTVar2->AllocatorInstance,piVar1);
        }
        lVar20 = (longlong)iVar11;
        (this_02->PathPoints).ArrayNum = iVar11 + 1;
        pFVar5 = (pTVar2->AllocatorInstance).Data;
        TVar12 = Success;
        *(double *)(pFVar5 + lVar20 * 0x30) = local_c0;
        *(double *)(pFVar5 + lVar20 * 0x30 + 8) = dStack_b8;
        *(double *)(pFVar5 + lVar20 * 0x30 + 0x10) = local_b0;
        *(undefined8 *)(pFVar5 + lVar20 * 0x30 + 0x10 + 8) = uStack_a8;
        *(undefined8 *)(pFVar5 + lVar20 * 0x30 + 0x20) = local_a0;
        *(undefined8 *)(pFVar5 + lVar20 * 0x30 + 0x20 + 8) = uStack_98;
      }
      else {
        this = (FPImplRecastNavMesh *)this_00[1]._padding_;
        pUVar21 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
        TVar12 = FPImplRecastNavMesh::FindPath
                           (this,(TVector<double> *)&param_2->_padding_,
                            (TVector<double> *)&local_128._s_0,(double)param_2->_padding_,
                            (bool)((byte)(*(uint *)((longlong)&param_2->_padding_ + 4) >> 1) & 1),
                            pFVar18,pFVar23,pUVar21);
        if (((TVar12 != Error) && (this_02 != (FNavigationPath *)0x0)) && (this_02->bIsPartial != 0)
           ) {
          TVar12 = *(Type *)((longlong)&param_2->_padding_ + 4) & Error | Fail;
        }
      }
    }
  }
  (__return_storage_ptr__->Path).SharedReferenceCount.ReferenceController =
       local_140.SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->Path).Object = this_02;
  __return_storage_ptr__->Result = TVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FCsvProfiler::EndExclusiveStat("Pathfinding");
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!bVar9) {
    return __return_storage_ptr__;
  }
  if (local_158 == (FName)0x0) {
    return __return_storage_ptr__;
  }
  if (FThreadStats::bPrimaryDisableForever != false) {
    return __return_storage_ptr__;
  }
  if (FThreadStats::TlsSlot == 0xffffffff) {
    return __return_storage_ptr__;
  }
  this_01 = TlsGetValue(FThreadStats::TlsSlot);
  if (this_01 == (FThreadStats *)0x0) {
    pFVar15 = FThreadStatsPool::Get();
    this_01 = FThreadStatsPool::GetFromPool(pFVar15);
  }
  if (this_01->ScopeCount <= this_01->bWaitForExplicitFlush) {
    return __return_storage_ptr__;
  }
  local_d0.NameAndInfo.Number = uVar22 & 0xffff6fff | 0x6000;
  local_d0.NameAndInfo.Index.Value = FVar24.Value;
  QueryPerformanceCounter(&local_108);
  local_d0.StatData.Pad[4] = '\0';
  local_d0.StatData.Pad[5] = '\0';
  local_d0.StatData.Pad[6] = '\0';
  local_d0.StatData.Pad[7] = '\0';
  local_d0.StatData.Pad[0] = local_108.s.LowPart._0_1_;
  local_d0.StatData.Pad[1] = local_108.s.LowPart._1_1_;
  local_d0.StatData.Pad[2] = local_108.s.LowPart._2_1_;
  local_d0.StatData.Pad[3] = local_108.s.LowPart._3_1_;
  FThreadStats::AddStatMessage(this_01,&local_d0);
  piVar1 = &this_01->ScopeCount;
  *piVar1 = *piVar1 + -1;
  iVar11 = *piVar1;
joined_r0x000146df5601:
  if (iVar11 == 0) {
    FThreadStats::Flush(this_01,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(this_01,false,false);
  }
  return __return_storage_ptr__;
}

// FindPolysAroundCircle @ 146df5920

bool __thiscall
ARecastNavMesh::FindPolysAroundCircle
          (ARecastNavMesh *this,TVector<double> *param_1,ulong64 param_2,double param_3,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,UObject *param_5,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_6,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_7,
          TArray<float,TSizedDefaultAllocator<32>_> *param_8,int *param_9)

{
  FPImplRecastNavMesh *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  FNavigationQueryFilter *pFVar4;
  
  this_00 = this->RecastNavMeshImpl;
  if (this_00 != (FPImplRecastNavMesh *)0x0) {
    pTVar1 = (param_4->SharedReferenceCount).ReferenceController;
    pFVar4 = param_4->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar4 == (FNavigationQueryFilter *)0x0) {
      pFVar4 = (FNavigationQueryFilter *)this->_padding_;
      pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    bVar3 = FPImplRecastNavMesh::FindPolysAroundCircle
                      (this_00,param_1,param_2,param_3,pFVar4,param_5,param_6,param_7,param_8,
                       param_9);
    return bVar3;
  }
  return false;
}

// FindStraightPath @ 146df5fb0

bool __thiscall
ARecastNavMesh::FindStraightPath
          (ARecastNavMesh *this,TVector<double> *param_1,TVector<double> *param_2,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FNavLinkId,TSizedDefaultAllocator<32>_> *param_5)

{
  bool bVar1;
  
  if (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) {
    bVar1 = FPImplRecastNavMesh::FindStraightPath
                      (this->RecastNavMeshImpl,param_1,param_2,param_3,param_4,param_5);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// FinishBatchQuery @ 146df6500

void __thiscall ARecastNavMesh::FinishBatchQuery(ARecastNavMesh *this)

{
  this->BatchQueryCounter = this->BatchQueryCounter + -1;
  return;
}

// GetActiveTileSet @ 146dffe90

TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator> *
__thiscall ARecastNavMesh::GetActiveTileSet(ARecastNavMesh *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *pTVar4;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MyGenerator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                       ,0x465,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return (TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
          *)(lVar1 + 0x238);
}

// GetActiveTileSet @ 146dffee0

TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator> *
__thiscall ARecastNavMesh::GetActiveTileSet(ARecastNavMesh *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *pTVar4;
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MyGenerator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                       ,0x45e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return (TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
          *)(lVar1 + 0x238);
}

// GetAllNavMeshTiles @ 146dfff40

void __thiscall
ARecastNavMesh::GetAllNavMeshTiles
          (ARecastNavMesh *this,TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  dtNavMesh *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  dtMeshTile *pdVar8;
  ulong64 uVar9;
  int iVar10;
  ulong64 local_18 [2];
  
  if ((((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) &&
       (this_00 = this->RecastNavMeshImpl->DetourNavMesh, this_00 != (dtNavMesh *)0x0)) &&
      (0.0 < this_00->m_tileWidth)) && (0.0 < this_00->m_tileHeight)) {
    iVar6 = dtNavMesh::getMaxTiles(this_00);
    uVar2 = param_1->ArrayNum + iVar6;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    piVar1 = &param_1->ArrayMax;
    if (*piVar1 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
    }
    iVar10 = 0;
    if (0 < iVar6) {
      do {
        pdVar8 = dtNavMesh::getTile(this_00,iVar10);
        if ((pdVar8 != (dtMeshTile *)0x0) &&
           (uVar9 = dtNavMesh::getTileRef(this_00,pdVar8), uVar9 != 0)) {
          pFVar3 = (param_1->AllocatorInstance).Data;
          local_18[0] = uVar9;
          if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
             (((FScriptContainerElement *)local_18 < pFVar3 + (longlong)*piVar1 * 8 &&
              (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)))) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = param_1->ArrayNum;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_1->AllocatorInstance,piVar1);
          }
          param_1->ArrayNum = iVar7 + 1;
          *(ulong64 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_18[0];
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar6);
    }
  }
  return;
}

// GetAreaIDColor @ 146e00850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FColor __thiscall ARecastNavMesh::GetAreaIDColor(ARecastNavMesh *this,uchar param_1)

{
  UClass *this_00;
  UNavArea *pUVar1;
  undefined7 in_register_00000011;
  FColor_u_0 *pFVar2;
  byte in_R8B;
  
  pFVar2 = (FColor_u_0 *)CONCAT71(in_register_00000011,param_1);
  this_00 = ANavigationData::GetAreaClass((ANavigationData *)this,(uint)in_R8B);
  if (this_00 != (UClass *)0x0) {
    pUVar1 = UClass::GetDefaultObject<UNavArea>(this_00);
    if (pUVar1 != (UNavArea *)0x0) {
      *pFVar2 = (pUVar1->DrawColor).field0_0x0;
      return (FColor)SUB84(pFVar2,0);
    }
  }
  pFVar2->_s_0 = (FColor_u_0_s_0)FColor::Red.field0_0x0;
  return (FColor)SUB84(pFVar2,0);
}

// GetBounds @ 146e00910

TBox<double> * __thiscall
ARecastNavMesh::GetBounds(ARecastNavMesh *this,TBox<double> *__return_storage_ptr__)

{
  GetNavMeshBounds(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetClosestPointOnPoly @ 146e009a0

bool __thiscall
ARecastNavMesh::GetClosestPointOnPoly
          (ARecastNavMesh *this,ulong64 param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  bool bVar1;
  
  if (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) {
    bVar1 = FPImplRecastNavMesh::GetClosestPointOnPoly
                      (this->RecastNavMeshImpl,param_1,param_2,param_3);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// GetClusterBounds @ 146e00b40

bool __thiscall
ARecastNavMesh::GetClusterBounds(ARecastNavMesh *this,ulong64 param_1,TBox<double> *param_2)

{
  bool bVar1;
  
  if (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) {
    bVar1 = FPImplRecastNavMesh::GetClusterBounds(this->RecastNavMeshImpl,param_1,param_2);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// GetClusterRef @ 146e00dc0

ulong64 __thiscall ARecastNavMesh::GetClusterRef(ARecastNavMesh *this,ulong64 param_1)

{
  FPImplRecastNavMesh *pFVar1;
  dtMeshTile *pdVar2;
  ulong64 uVar3;
  uint uVar4;
  
  pFVar1 = this->RecastNavMeshImpl;
  uVar3 = 0;
  if ((pFVar1 != (FPImplRecastNavMesh *)0x0) && (pFVar1->DetourNavMesh != (dtNavMesh *)0x0)) {
    pdVar2 = dtNavMesh::getTileByRef(pFVar1->DetourNavMesh,param_1);
    uVar4 = (int)(1L << ((byte)pFVar1->DetourNavMesh->m_polyBits & 0x3f)) - 1U & (uint)param_1;
    if ((pdVar2 != (dtMeshTile *)0x0) &&
       ((pdVar2->polyClusters != (ushort *)0x0 && (uVar4 < pdVar2->header->offMeshBase)))) {
      uVar3 = dtNavMesh::getClusterRefBase(pFVar1->DetourNavMesh,pdVar2);
      uVar3 = pdVar2->polyClusters[uVar4] | uVar3;
    }
  }
  return uVar3;
}

// GetCompressedTileCacheSize @ 146e01080

int __thiscall ARecastNavMesh::GetCompressedTileCacheSize(ARecastNavMesh *this)

{
  undefined1 *puVar1;
  TMap<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar2;
  ulonglong uVar3;
  FPImplRecastNavMesh *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 *puVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  longlong lVar19;
  TMap<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar20;
  undefined1 auStackX_8 [8];
  undefined1 auStackX_10 [8];
  int iStackX_18;
  TMap<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>_>
  *pTStackX_20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  pFVar4 = this->RecastNavMeshImpl;
  if (pFVar4 == (FPImplRecastNavMesh *)0x0) {
    return 0;
  }
  iVar9 = *(int *)&(pFVar4->CompressedTileCacheLayers).field_0x28;
  puVar1 = &(pFVar4->CompressedTileCacheLayers).field_0x10;
  iVar14 = 0;
  pTVar2 = &pFVar4->CompressedTileCacheLayers;
  iVar15 = 0;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar9 != 0) {
    puVar17 = *(uint **)&(pFVar4->CompressedTileCacheLayers).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar12 = *puVar17;
    iVar16 = 0;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar15;
      iVar16 = iVar16 + 0x20;
      iVar15 = iVar15 + 1;
      iVar8 = iVar9;
      if ((int)((iVar9 + -1 >> 0x1f & 0x1fU) + iVar9 + -1) >> 5 < iVar15) goto LAB_146e0114d;
      uVar12 = puVar17[lVar10 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStackX_18 = (int)lVar10;
    iVar8 = iVar16 + -1 + iStackX_18;
    if (iVar9 < iVar8) {
      iVar8 = iVar9;
    }
  }
LAB_146e0114d:
  uVar12 = *(uint *)&(pFVar4->CompressedTileCacheLayers).field_0x28;
  uVar18 = uVar12 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar7,iVar15);
  TStack_70.CurrentBitIndex = iVar8;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar12 >> 5;
  TStack_70._28_4_ = iVar8;
  TStack_70.BaseBitIndex = iVar16;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(pFVar4->CompressedTileCacheLayers).field_0x8 -
                       *(int *)&(pFVar4->CompressedTileCacheLayers).field_0x34);
  pTStackX_20 = pTVar2;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar9 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar9 = (*pcVar5)();
    return iVar9;
  }
  uVar7 = *(uint *)&(pFVar4->CompressedTileCacheLayers).field_0x28;
  pTVar20 = pTVar2;
  iVar9 = 0;
  if (uVar12 != uVar7) {
    puVar11 = *(undefined1 **)&(pFVar4->CompressedTileCacheLayers).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar15 * 4);
    while (iVar9 = iVar14, uVar12 == 0) {
      lVar10 = (longlong)iVar15;
      uVar18 = uVar18 + 0x20;
      iVar15 = iVar15 + 1;
      uVar12 = uVar7;
      if ((int)(((int)(uVar7 - 1) >> 0x1f & 0x1fU) + (uVar7 - 1)) >> 5 < iVar15) goto LAB_146e01250;
      uVar12 = *(uint *)(puVar11 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar18;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_146e01250:
  while( true ) {
    if (*(int *)&(pFVar4->CompressedTileCacheLayers).field_0x8 -
        *(int *)&(pFVar4->CompressedTileCacheLayers).field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (((TStack_70.CurrentBitIndex == uVar12) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar2 == pTVar20))
    break;
    lVar13 = (longlong)TStack_70.CurrentBitIndex * 0x20 + *(longlong *)pTVar2;
    iVar15 = *(int *)(lVar13 + 0x10);
    lVar10 = *(longlong *)(lVar13 + 8);
    lVar19 = (longlong)iVar15 * 0x58 + lVar10;
    while( true ) {
      if (*(int *)(lVar13 + 0x10) != iVar15) {
        `TCheckedPointerIterator<FNavMeshTileData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStackX_10);
      }
      if (lVar10 == lVar19) break;
      iVar9 = iVar9 + *(int *)(lVar10 + 0x40);
      lVar10 = lVar10 + 0x58;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    pTVar20 = pTStackX_20;
  }
  return iVar9;
}

// GetDebugDataMap @ 146e01420

TMap<UE::Math::TIntPoint<int>,FRecastInternalDebugData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>_>
* __thiscall ARecastNavMesh::GetDebugDataMap(ARecastNavMesh *this)

{
  TMap<UE::Math::TIntPoint<int>,FRecastInternalDebugData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>_>
  *pTVar1;
  
  pTVar1 = (TMap<UE::Math::TIntPoint<int>,FRecastInternalDebugData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>_>
            *)0x0;
  if (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) {
    pTVar1 = &this->RecastNavMeshImpl->DebugDataMap;
  }
  return pTVar1;
}

// GetDebugGeometryForTile @ 146e01460

bool __thiscall
ARecastNavMesh::GetDebugGeometryForTile
          (ARecastNavMesh *this,FRecastDebugGeometry *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FNavTileRef FVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_28;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) {
    return true;
  }
  FVar4.TileRef = 0;
  if (param_2 != -1) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    local_28.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,1,0,&local_28.AllocatorInstance,1,&local_28.ArrayMax);
    *(int *)local_28.AllocatorInstance.Data = param_2;
    FNavTileRef::DeprecatedMakeTileRefsFromTileIds(this->RecastNavMeshImpl,&local_28,&local_18);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    if (local_18.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    FVar4.TileRef = *(ulong64 *)local_18.AllocatorInstance.Data;
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  if (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) {
    bVar2 = FPImplRecastNavMesh::GetDebugGeometryForTile(this->RecastNavMeshImpl,param_1,FVar4);
    return bVar2;
  }
  return true;
}

// GetDebugGeometryForTile @ 146e015b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

bool __thiscall
ARecastNavMesh::GetDebugGeometryForTile
          (ARecastNavMesh *this,FRecastDebugGeometry *param_1,FNavTileRef param_2)

{
  uint uVar1;
  FPImplRecastNavMesh *this_00;
  dtMeshHeader *pdVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *pTVar7;
  FRecastNavMeshGenerator *pFVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<_public:_bool___cdecl_FPImplRecastNavMesh::GetDebugGeometryForTile(FRecastDebugGeometry_&,FNavTileRef)const_::_2_::FStat_STAT_FPImplRecastNavMesh_GetDebugGeometryForTile>
  FVar20;
  INavigationQueryFilterInterface *pIVar21;
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *pTVar22;
  dtMeshTile *pdVar23;
  uchar *puVar24;
  ushort *puVar25;
  int iVar26;
  FScriptContainerElement *pFVar27;
  dtNavMesh *this_01;
  ulonglong uVar28;
  ulonglong uVar29;
  TBitArray<FDefaultBitArrayAllocator> *pTVar30;
  FName FVar31;
  longlong lVar32;
  ForElementType<unsigned_int> FVar33;
  undefined1 *puVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  uint *puVar39;
  uint uVar40;
  uint uVar41;
  ulonglong uVar42;
  int *piVar43;
  dtPolyDetail *pdVar44;
  uint uVar45;
  ForAnyElementType FVar46;
  undefined1 uStack_1b8;
  undefined1 uStack_1b7;
  undefined1 auStack_1b6 [2];
  uint uStack_1b4;
  uint uStack_1b0;
  ForAnyElementType FStack_1a8;
  undefined8 uStack_1a0;
  uint uStack_198;
  undefined1 uStack_194;
  undefined1 auStack_193 [3];
  dtNavMesh *pdStack_190;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_188;
  ForElementType<unsigned_int> FStack_180;
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *pTStack_178;
  FName FStack_170;
  FRecastNavMeshGenerator *pFStack_168;
  FColor_u_0 aFStack_160 [2];
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *pTStack_158;
  uint uStack_150;
  uint uStack_14c;
  undefined1 *puStack_148;
  undefined4 uStack_140;
  uint uStack_13c;
  uint uStack_138;
  undefined4 uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  FName FStack_128;
  TIntPoint<int>_u_0 TStack_120;
  FName FStack_118;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  FScriptContainerElement *pFStack_f8;
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *pTStack_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *pTStack_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FName FStack_90;
  FName aFStack_88 [4];
  undefined4 uStack_64;
  undefined4 uStack_44;
  
  this_00 = this->RecastNavMeshImpl;
  if (this_00 == (FPImplRecastNavMesh *)0x0) {
    return true;
  }
  uVar28 = 0;
  uVar13 = 0;
  uVar16 = 0;
  uVar41 = 0;
  uVar40 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FPImplRecastNavMesh_GetDebugGeometryForTile ==
        (FThreadSafeStaticStat<_public:_bool___cdecl_FPImplRecastNavMesh::GetDebugGeometryForTile(FRecastDebugGeometry_&,FNavTileRef)const_::_2_::FStat_STAT_FPImplRecastNavMesh_GetDebugGeometryForTile>
         )0x0) {
      pFVar19 = ::FName::FName(&FStack_90,"STAT_FPImplRecastNavMesh_GetDebugGeometryForTile");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FPImplRecastNavMesh_GetDebugGeometryForTile,*pFVar19,
                 L"STAT_FPImplRecastNavMesh_GetDebugGeometryForTile","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar20 = StatPtr_STAT_FPImplRecastNavMesh_GetDebugGeometryForTile;
  if (StatPtr_STAT_FPImplRecastNavMesh_GetDebugGeometryForTile ==
      (FThreadSafeStaticStat<_public:_bool___cdecl_FPImplRecastNavMesh::GetDebugGeometryForTile(FRecastDebugGeometry_&,FNavTileRef)const_::_2_::FStat_STAT_FPImplRecastNavMesh_GetDebugGeometryForTile>
       )0x0) {
    pFVar19 = ::FName::FName(aFStack_88,"STAT_FPImplRecastNavMesh_GetDebugGeometryForTile");
    FVar20 = (FThreadSafeStaticStat<_public:_bool___cdecl_FPImplRecastNavMesh::GetDebugGeometryForTile(FRecastDebugGeometry_&,FNavTileRef)const_::_2_::FStat_STAT_FPImplRecastNavMesh_GetDebugGeometryForTile>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FPImplRecastNavMesh_GetDebugGeometryForTile,*pFVar19,
                          L"STAT_FPImplRecastNavMesh_GetDebugGeometryForTile","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar31 = *(FName *)FVar20;
  bVar6 = false;
  bVar5 = false;
  FStack_118.ComparisonIndex.Value = 0;
  FStack_118.Number = 0;
  bVar12 = false;
  bVar9 = false;
  if ((FVar31.ComparisonIndex.Value.Value == 0) && (FVar31.Number == 0)) {
LAB_146e01879:
    bVar6 = bVar12;
    bVar5 = bVar9;
    bVar9 = false;
    FStack_170 = FStack_118;
    FVar31 = FStack_118;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStack_160[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStack_160[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar6 = false;
      bVar5 = true;
      bVar12 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_128.ComparisonIndex.Value = FVar31.ComparisonIndex.Value.Value;
        FStack_128.Number = FVar31.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_128,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                   ,0xb78);
        bVar6 = true;
        bVar5 = true;
        bVar12 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e01879;
    FStack_170 = FVar31;
    FThreadStats::AddMessage(FVar31,CycleScopeStart);
    bVar9 = true;
  }
  bVar12 = false;
  if (this_00->DetourNavMesh != (dtNavMesh *)0x0) {
    if ((this_00->NavMeshOwner == (ARecastNavMesh *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("NavMeshOwner",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\PImplRecastNavMesh.cpp"
                            ,0xb81,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      uVar11 = (*pcVar4)();
      return (bool)uVar11;
    }
    pdStack_190 = this_00->DetourNavMesh;
    if (param_1->bMarkForbiddenPolys == 0) {
      uStack_198 = 0;
    }
    else {
      pIVar21 = ANavigationData::GetDefaultQueryFilterImpl((ANavigationData *)this_00->NavMeshOwner)
      ;
      puVar25 = (ushort *)&pIVar21[0x84].field_0x2;
      if (pIVar21 == (INavigationQueryFilterInterface *)0x0) {
        puVar25 = (ushort *)&DAT_0000041a;
      }
      uStack_198 = (uint)*puVar25;
    }
    pFStack_168 = (FRecastNavMeshGenerator *)this_00->NavMeshOwner->_padding_;
    if (((pFStack_168 == (FRecastNavMeshGenerator *)0x0) ||
        (pFStack_168->bRestrictBuildingToActiveTiles == 0)) ||
       (pTVar22 = GetActiveTileSet(this_00->NavMeshOwner),
       *(int *)&(pTVar22->Elements).field_0x8 == *(int *)&(pTVar22->Elements).field_0x34)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    this_01 = pdStack_190;
    if (param_2.TileRef != 0) {
      pdVar23 = dtNavMesh::getTileByRef(pdStack_190,param_2.TileRef);
      if ((pdVar23 == (dtMeshTile *)0x0) ||
         (pdVar2 = pdVar23->header, pdVar2 == (dtMeshHeader *)0x0)) goto LAB_146e02332;
      TStack_120._s_0.Y = pdVar2->y;
      TStack_120._s_0.X = pdVar2->x;
      if ((bVar10) &&
         (bVar10 = FRecastNavMeshGenerator::IsInActiveSet
                             (pFStack_168,(TIntPoint<int> *)&TStack_120._s_0), !bVar10))
      goto LAB_146e02332;
      pdVar2 = pdVar23->header;
      uVar13 = uVar41;
      if (pdVar2 != (dtMeshHeader *)0x0) {
        uVar29 = (ulonglong)pdVar2->polyCount;
        uVar41 = (uint)pdVar2->detailVertCount + (uint)pdVar2->vertCount;
        if (uVar29 < 2) {
          uVar13 = uVar40;
          uVar14 = uVar40;
          if (uVar29 != 0) {
            pdVar44 = pdVar23->detailMeshes;
            uVar14 = uVar16;
            goto LAB_146e01a00;
          }
        }
        else {
          pdVar44 = pdVar23->detailMeshes;
          lVar32 = (uVar29 - 2 >> 1) + 1;
          uVar36 = lVar32 * 2;
          puVar24 = &pdVar44[1].triCount;
          uVar35 = uVar28;
          do {
            uVar13 = (int)uVar28 + (uint)puVar24[-6] * 3;
            uVar28 = (ulonglong)uVar13;
            uVar14 = (int)uVar35 + (uint)*puVar24 * 3;
            uVar35 = (ulonglong)uVar14;
            lVar32 = lVar32 + -1;
            puVar24 = puVar24 + 0xc;
          } while (lVar32 != 0);
          uVar28 = uVar36;
          uVar16 = uVar13;
          if ((longlong)uVar36 < (longlong)uVar29) {
LAB_146e01a00:
            uVar40 = (uint)pdVar44[uVar28].triCount + (uint)pdVar44[uVar28].triCount * 2;
            uVar13 = uVar16;
          }
        }
        uVar13 = uVar40 + uVar13 + uVar14;
      }
      `FPImplRecastNavMesh::GetDebugGeometryForTile'::__l2::<lambda_2>::operator()
                (&uStack_1b8,param_1,uVar41,uVar13);
      lVar32 = (longlong)pdVar23 - (longlong)pdStack_190->m_tiles;
      lVar32 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar32),8) + lVar32;
      FPImplRecastNavMesh::GetTilesDebugGeometry
                (this_00,pFStack_168,pdVar23,(param_1->MeshVerts).ArrayNum,param_1,
                 (int)(lVar32 >> 7) - (int)(lVar32 >> 0x3f),(ushort)uStack_198);
      goto LAB_146e02332;
    }
    if (bVar10) {
      FStack_1a8.Data = (FScriptContainerElement *)0x0;
      uStack_1a0 = 0;
      pTStack_178 = GetActiveTileSet(this_00->NavMeshOwner);
      uVar14 = *(uint *)&(pTStack_178->Elements).field_0x28;
      puStack_148 = &(pTStack_178->Elements).field_0x10;
      pTStack_188 = (TBitArray<FDefaultBitArrayAllocator> *)0x1;
      uStack_14c = 1;
      uStack_13c = uVar40;
      uStack_138 = uVar41;
      uStack_150 = uVar13;
      if (uVar14 != 0) {
        puVar39 = *(uint **)&(pTStack_178->Elements).field_0x20;
        if (puVar39 == (uint *)0x0) {
          puVar39 = (uint *)puStack_148;
        }
        uStack_14c = *puVar39;
        uVar29 = uVar28;
        uVar36 = uVar28;
        uStack_150 = 0;
        while (uStack_14c == 0) {
          iVar26 = (int)uVar29;
          uStack_138 = (int)uVar36 + 0x20;
          uVar36 = (ulonglong)uStack_138;
          uStack_150 = iVar26 + 1;
          uVar29 = (ulonglong)uStack_150;
          uStack_14c = 1;
          uStack_13c = uVar14;
          if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_150)
          goto LAB_146e01b40;
          uStack_14c = puVar39[(longlong)iVar26 + 1];
        }
        uStack_14c = -uStack_14c & uStack_14c;
        uVar29 = (ulonglong)uStack_14c * 2 + 1;
        lVar32 = 0x3f;
        if (uVar29 != 0) {
          for (; uVar29 >> lVar32 == 0; lVar32 = lVar32 + -1) {
          }
        }
        iStack_108 = (int)lVar32;
        uStack_13c = iStack_108 + -1 + uStack_138;
        if ((int)uVar14 < (int)uStack_13c) {
          uStack_13c = uVar14;
        }
      }
LAB_146e01b40:
      uStack_134 = uStack_64;
      FStack_180 = (ForElementType<unsigned_int>)&(pTStack_178->Elements).field_0x10;
      iStack_130 = *(int *)&(pTStack_178->Elements).field_0x8 -
                   *(int *)&(pTStack_178->Elements).field_0x34;
      uVar14 = *(uint *)&(pTStack_178->Elements).field_0x28;
      TStack_e8._padding_ = CONCAT44(uStack_14c,uStack_150);
      uStack_140 = 0xffffffff;
      uVar45 = uVar14 & 0xffffffe0;
      TStack_e8.CurrentBitIndex = uStack_13c;
      TStack_e8.UnvisitedBitMask = 0xffffffff;
      iVar26 = (int)uVar14 >> 5;
      TStack_e8._28_4_ = uStack_64;
      TStack_e8.BaseBitIndex = uStack_138;
      uStack_c8 = CONCAT44(uStack_12c,iStack_130);
      uStack_1b4 = uVar14;
      pTStack_158 = pTStack_178;
      pTStack_f0 = pTStack_178;
      TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_148;
      if (((int)uVar14 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return (bool)uVar11;
      }
      uVar1 = *(int *)((longlong)FStack_180 + 0x18);
      uVar29 = uVar28;
      uVar36 = uVar28;
      if (uVar14 != uVar1) {
        FVar33 = FStack_180;
        if (*(ForElementType<unsigned_int> *)((longlong)FStack_180 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar33 = *(ForElementType<unsigned_int> *)((longlong)FStack_180 + 0x10);
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)((longlong)FVar33 + (longlong)iVar26 * 4);
        while (uVar14 == 0) {
          lVar32 = (longlong)iVar26;
          uVar45 = uVar45 + 0x20;
          iVar26 = iVar26 + 1;
          uVar14 = uVar1;
          uStack_1b4 = uVar1;
          if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
          goto LAB_146e01c70;
          uVar14 = *(uint *)((undefined1 *)((longlong)FVar33 + 4) + lVar32 * 4);
        }
        uVar35 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar32 = 0x3f;
        if (uVar35 != 0) {
          for (; uVar35 >> lVar32 == 0; lVar32 = lVar32 + -1) {
          }
        }
        iStack_104 = (int)lVar32;
        uVar14 = (uVar45 - 1) + iStack_104;
        uStack_1b4 = uVar14;
        if ((int)uVar1 < (int)uVar14) {
          uVar14 = uVar1;
          uStack_1b4 = uVar1;
        }
      }
LAB_146e01c70:
      while( true ) {
        pTVar22 = pTStack_f0;
        if (*(int *)&(pTStack_f0->Elements).field_0x8 - *(int *)&(pTStack_f0->Elements).field_0x34
            != (int)uStack_c8) {
          uStack_1b7 = 0;
          `TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&uStack_1b7);
        }
        pTVar7 = pTStack_178;
        uVar35 = uStack_1a0;
        if (((TStack_e8.CurrentBitIndex == uVar14) &&
            ((ForElementType<unsigned_int>)TStack_e8.Array == FStack_180)) &&
           (pTVar22 == pTStack_178)) break;
        uVar14 = uStack_1a0._4_4_;
        piVar43 = (int *)((longlong)TStack_e8.CurrentBitIndex * 0x10 +
                         *(longlong *)&pTVar22->Elements);
        uStack_1a0 = (ulonglong)uStack_1a0._4_4_ << 0x20;
        if (((longlong)uVar35 < 0) && (uVar14 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&FStack_1a8,0,(int *)((longlong)&uStack_1a0 + 4));
        }
        iVar26 = dtNavMesh::getTileCountAt(pdStack_190,*piVar43,piVar43[1]);
        iVar15 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,iVar26,&FStack_1a8,(int *)&uStack_1a0,
                            (int *)((longlong)&uStack_1a0 + 4));
        memset(FStack_1a8.Data + (longlong)iVar15 * 8,0,(longlong)iVar26 << 3);
        dtNavMesh::getTilesAt
                  (pdStack_190,*piVar43,piVar43[1],(dtMeshTile **)FStack_1a8.Data,(uint)uStack_1a0);
        uVar42 = (ulonglong)(int)(uint)uStack_1a0;
        uStack_1b0 = (uint)uStack_1a0;
        pFVar27 = FStack_1a8.Data + uVar42 * 8;
        uVar35 = uVar42;
        FVar46.Data = FStack_1a8.Data;
        pFStack_f8 = pFVar27;
        while( true ) {
          iVar26 = (int)uVar36;
          if ((int)uVar35 != (int)uVar42) {
            auStack_1b6[0] = 0;
            `TCheckedPointerIterator<dtMeshTile_const_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(auStack_1b6);
            uVar35 = uStack_1a0 & 0xffffffff;
          }
          if (FVar46.Data == pFVar27) break;
          pdVar23 = *(dtMeshTile **)FVar46.Data;
          if ((pdVar23 != (dtMeshTile *)0x0) &&
             (pdVar2 = pdVar23->header, pdVar2 != (dtMeshHeader *)0x0)) {
            uVar36 = (ulonglong)pdVar2->polyCount;
            uVar29 = (ulonglong)
                     ((int)uVar29 + (uint)pdVar2->vertCount + (uint)pdVar2->detailVertCount);
            if (uVar36 < 2) {
              uVar14 = uVar41;
              uVar45 = uVar40;
              if (uVar36 != 0) {
                pdVar44 = pdVar23->detailMeshes;
                uVar42 = uVar28;
                uVar45 = uVar16;
                goto LAB_146e01e22;
              }
            }
            else {
              pdVar44 = pdVar23->detailMeshes;
              lVar32 = (uVar36 - 2 >> 1) + 1;
              uVar42 = lVar32 * 2;
              puVar24 = &pdVar44[1].triCount;
              uVar37 = uVar28;
              uVar38 = uVar28;
              do {
                uVar14 = (int)uVar37 + (uint)puVar24[-6] * 3;
                uVar37 = (ulonglong)uVar14;
                uVar45 = (int)uVar38 + (uint)*puVar24 * 3;
                uVar38 = (ulonglong)uVar45;
                lVar32 = lVar32 + -1;
                puVar24 = puVar24 + 0xc;
              } while (lVar32 != 0);
              if ((longlong)uVar42 < (longlong)uVar36) {
LAB_146e01e22:
                iVar26 = iVar26 + (uint)pdVar44[uVar42].triCount * 3;
              }
            }
            uVar36 = (ulonglong)(iVar26 + uVar14 + uVar45);
            pFVar27 = pFStack_f8;
          }
          uVar42 = (ulonglong)uStack_1b0;
          FVar46.Data = FVar46.Data + 8;
        }
        TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
        uVar14 = uStack_1b4;
      }
      `FPImplRecastNavMesh::GetDebugGeometryForTile'::__l2::<lambda_2>::operator()
                (&uStack_1b8,param_1,(int)uVar29,(int)uVar36);
      pTVar22 = pTStack_178;
      uVar16 = *(uint *)&(pTVar7->Elements).field_0x28;
      puStack_148 = &(pTVar7->Elements).field_0x10;
      iVar26 = (param_1->MeshVerts).ArrayNum;
      uStack_13c = uVar41;
      if (uVar16 != 0) {
        puVar39 = *(uint **)&(pTVar7->Elements).field_0x20;
        if (puVar39 == (uint *)0x0) {
          puVar39 = (uint *)puStack_148;
        }
        uVar40 = *puVar39;
        uVar29 = uVar28;
        uVar13 = 0;
        while (uVar40 == 0) {
          iVar15 = (int)uVar28;
          uVar41 = (int)uVar29 + 0x20;
          uVar29 = (ulonglong)uVar41;
          uVar13 = iVar15 + 1;
          uVar28 = (ulonglong)uVar13;
          uStack_13c = uVar16;
          if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
          goto LAB_146e01eff;
          uVar40 = puVar39[(longlong)iVar15 + 1];
        }
        pTStack_188 = (TBitArray<FDefaultBitArrayAllocator> *)(ulonglong)(-uVar40 & uVar40);
        uVar28 = (longlong)pTStack_188 * 2 + 1;
        lVar32 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar32 == 0; lVar32 = lVar32 + -1) {
          }
        }
        iStack_100 = (int)lVar32;
        uStack_13c = (uVar41 - 1) + iStack_100;
        if ((int)uVar16 < (int)uStack_13c) {
          uStack_13c = uVar16;
        }
      }
LAB_146e01eff:
      uStack_14c = (uint)pTStack_188;
      pTVar30 = (TBitArray<FDefaultBitArrayAllocator> *)&(pTStack_178->Elements).field_0x10;
      uStack_134 = uStack_44;
      iStack_130 = *(int *)&(pTVar7->Elements).field_0x8 - *(int *)&(pTVar7->Elements).field_0x34;
      pTStack_158 = pTVar7;
      uVar16 = *(uint *)&(pTVar7->Elements).field_0x28;
      uStack_140 = 0xffffffff;
      TStack_b8.CurrentBitIndex = uStack_13c;
      TStack_b8.UnvisitedBitMask = 0xffffffff;
      uStack_1b0 = -1 << ((byte)uVar16 & 0x1f);
      uVar40 = uVar16 & 0xffffffe0;
      TStack_b8._padding_ = CONCAT44(uStack_14c,uVar13);
      pTStack_c0 = pTVar7;
      iVar15 = (int)uVar16 >> 5;
      TStack_b8._28_4_ = uStack_44;
      TStack_b8.BaseBitIndex = uVar41;
      uStack_98 = CONCAT44(uStack_12c,iStack_130);
      uStack_1b4 = uVar16;
      pTStack_188 = pTVar30;
      uStack_150 = uVar13;
      uStack_138 = uVar41;
      TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_148;
      if (((int)uVar16 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return (bool)uVar11;
      }
      uVar41 = *(uint *)&(pTVar22->Elements).field_0x28;
      if (uVar16 != uVar41) {
        puVar3 = *(undefined1 **)&(pTVar22->Elements).field_0x20;
        puVar34 = (undefined1 *)pTVar30;
        if (puVar3 != (undefined1 *)0x0) {
          puVar34 = puVar3;
        }
        uVar13 = uStack_1b0 & *(uint *)(puVar34 + (longlong)iVar15 * 4);
        while (uVar13 == 0) {
          lVar32 = (longlong)iVar15;
          uVar40 = uVar40 + 0x20;
          iVar15 = iVar15 + 1;
          uVar16 = uVar41;
          uStack_1b4 = uVar41;
          if ((int)((uVar41 - 1) + ((int)(uVar41 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_146e02040;
          uVar13 = *(uint *)(puVar34 + lVar32 * 4 + 4);
        }
        uVar28 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar32 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar32 == 0; lVar32 = lVar32 + -1) {
          }
        }
        uVar16 = (uVar40 - 1) + (int)lVar32;
        uStack_1b4 = uVar16;
        if ((int)uVar41 < (int)uVar16) {
          uVar16 = uVar41;
          uStack_1b4 = uVar41;
        }
      }
LAB_146e02040:
      while( true ) {
        pTVar22 = pTStack_c0;
        if (*(int *)&(pTStack_c0->Elements).field_0x8 - *(int *)&(pTStack_c0->Elements).field_0x34
            != (int)uStack_98) {
          `TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&uStack_194);
        }
        FVar31 = FStack_170;
        uVar28 = uStack_1a0;
        if (((TStack_b8.CurrentBitIndex == uVar16) && (TStack_b8.Array == pTVar30)) &&
           (pTVar22 == pTStack_178)) break;
        uVar41 = uStack_1a0._4_4_;
        piVar43 = (int *)((longlong)TStack_b8.CurrentBitIndex * 0x10 +
                         *(longlong *)&pTVar22->Elements);
        uStack_1a0 = (ulonglong)uStack_1a0._4_4_ << 0x20;
        if (((longlong)uVar28 < 0) && (uVar41 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&FStack_1a8,0,(int *)((longlong)&uStack_1a0 + 4));
        }
        iVar15 = dtNavMesh::getTileCountAt(pdStack_190,*piVar43,piVar43[1]);
        iVar17 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,iVar15,&FStack_1a8,(int *)&uStack_1a0,
                            (int *)((longlong)&uStack_1a0 + 4));
        memset(FStack_1a8.Data + (longlong)iVar17 * 8,0,(longlong)iVar15 << 3);
        dtNavMesh::getTilesAt
                  (pdStack_190,*piVar43,piVar43[1],(dtMeshTile **)FStack_1a8.Data,(uint)uStack_1a0);
        pFVar8 = pFStack_168;
        iVar15 = (uint)uStack_1a0;
        pFVar27 = FStack_1a8.Data + (longlong)(int)(uint)uStack_1a0 * 8;
        FVar46.Data = FStack_1a8.Data;
        while( true ) {
          if ((uint)uStack_1a0 != iVar15) {
            `TCheckedPointerIterator<dtMeshTile_const_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(auStack_193);
          }
          if (FVar46.Data == pFVar27) break;
          pdVar23 = *(dtMeshTile **)FVar46.Data;
          if ((pdVar23 != (dtMeshTile *)0x0) && (pdVar23->header != (dtMeshHeader *)0x0)) {
            iVar17 = FPImplRecastNavMesh::GetTilesDebugGeometry
                               (this_00,pFVar8,pdVar23,iVar26,param_1,-1,(ushort)uStack_198);
            iVar26 = iVar26 + iVar17;
          }
          FVar46.Data = FVar46.Data + 8;
        }
        TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
        pTVar30 = pTStack_188;
        uVar16 = uStack_1b4;
      }
      bVar12 = true;
      if (FStack_1a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1a8.Data);
      }
      goto LAB_146e02332;
    }
    iVar26 = dtNavMesh::getMaxTiles(pdStack_190);
    uVar29 = uVar28;
    uVar36 = uVar28;
    uVar35 = uVar28;
    if (iVar26 < 1) {
      `FPImplRecastNavMesh::GetDebugGeometryForTile'::__l2::<lambda_2>::operator()
                (&uStack_1b8,param_1,0,0);
    }
    else {
      do {
        iVar15 = (int)uVar36;
        pdVar23 = dtNavMesh::getTile(this_01,(int)uVar35);
        if ((pdVar23 != (dtMeshTile *)0x0) &&
           (pdVar2 = pdVar23->header, pdVar2 != (dtMeshHeader *)0x0)) {
          uVar36 = (ulonglong)pdVar2->polyCount;
          uVar29 = (ulonglong)
                   ((int)uVar29 + (uint)pdVar2->vertCount + (uint)pdVar2->detailVertCount);
          if (uVar36 < 2) {
            uVar13 = uVar41;
            uVar14 = uVar40;
            if (uVar36 != 0) {
              pdVar44 = pdVar23->detailMeshes;
              uVar42 = uVar28;
              uVar14 = uVar16;
              goto LAB_146e02282;
            }
          }
          else {
            pdVar44 = pdVar23->detailMeshes;
            lVar32 = (uVar36 - 2 >> 1) + 1;
            uVar42 = lVar32 * 2;
            puVar24 = &pdVar44[1].triCount;
            uVar37 = uVar28;
            uVar38 = uVar28;
            do {
              uVar13 = (int)uVar37 + (uint)puVar24[-6] * 3;
              uVar37 = (ulonglong)uVar13;
              uVar14 = (int)uVar38 + (uint)*puVar24 * 3;
              uVar38 = (ulonglong)uVar14;
              lVar32 = lVar32 + -1;
              puVar24 = puVar24 + 0xc;
            } while (lVar32 != 0);
            if ((longlong)uVar42 < (longlong)uVar36) {
LAB_146e02282:
              iVar15 = iVar15 + (uint)pdVar44[uVar42].triCount * 3;
            }
          }
          uVar36 = (ulonglong)(iVar15 + uVar13 + uVar14);
          this_01 = pdStack_190;
        }
        uVar13 = (int)uVar35 + 1;
        uVar35 = (ulonglong)uVar13;
      } while ((int)uVar13 < iVar26);
      `FPImplRecastNavMesh::GetDebugGeometryForTile'::__l2::<lambda_2>::operator()
                (&uStack_1b8,param_1,(int)uVar29,(int)uVar36);
      FVar31 = FStack_170;
      uVar41 = uStack_198;
      iVar15 = (param_1->MeshVerts).ArrayNum;
      do {
        iVar17 = (int)uVar28;
        pdVar23 = dtNavMesh::getTile(pdStack_190,iVar17);
        if ((pdVar23 != (dtMeshTile *)0x0) && (pdVar23->header != (dtMeshHeader *)0x0)) {
          iVar18 = FPImplRecastNavMesh::GetTilesDebugGeometry
                             (this_00,pFStack_168,pdVar23,iVar15,param_1,iVar17,(ushort)uVar41);
          iVar15 = iVar15 + iVar18;
        }
        uVar28 = (ulonglong)(iVar17 + 1U);
      } while ((int)(iVar17 + 1U) < iVar26);
    }
  }
  bVar12 = true;
LAB_146e02332:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar31,CycleScopeEnd);
  }
  return bVar12;
}

// GetDefaultForbiddenFlags @ 146e02430

ushort __thiscall ARecastNavMesh::GetDefaultForbiddenFlags(ARecastNavMesh *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  ushort *puVar5;
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  lVar1 = *(longlong *)(this->_padding_ + 0x10);
  puVar5 = (ushort *)(lVar1 + 0x422);
  if (lVar1 == 0) {
    puVar5 = (ushort *)&DAT_0000041a;
  }
  return *puVar5;
}

// GetEdgesForPathCorridor @ 146e053c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ARecastNavMesh::GetEdgesForPathCorridor
          (ARecastNavMesh *this,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *param_2)

{
  FPImplRecastNavMesh *this_00;
  code *pcVar1;
  bool bVar2;
  dtNavMeshQuery *this_01;
  undefined1 auStack_e8 [32];
  dtNavMeshQuery local_c8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((param_1 == (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)0x0) ||
     (param_2 == (TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PathCorridor != 0 && PathCorridorEdges != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                       ,0x6e2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = this->RecastNavMeshImpl;
  if ((this_00 != (FPImplRecastNavMesh *)0x0) && (this_00->DetourNavMesh != (dtNavMesh *)0x0)) {
    dtNavMeshQuery::dtNavMeshQuery(&local_c8);
    bVar2 = IsInGameThread();
    this_01 = &this_00->SharedNavQuery;
    if (!bVar2) {
      this_01 = &local_c8;
    }
    dtNavMeshQuery::init(this_01,this_00->DetourNavMesh,0x800,(dtQuerySpecialLinkFilter *)0x0);
    FPImplRecastNavMesh::GetEdgesForPathCorridorImpl(this_00,param_1,param_2,this_01);
    dtNavMeshQuery::~dtNavMeshQuery(&local_c8);
  }
  return;
}

// GetEdgesInTile @ 146e058e0

bool __thiscall
ARecastNavMesh::GetEdgesInTile
          (ARecastNavMesh *this,FNavTileRef param_1,
          TArray<FNavigationWallEdge,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong lVar2;
  ushort uVar3;
  dtNavMesh *this_00;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  dtMeshTile *pdVar10;
  longlong lVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_38;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_28;
  
  if ((((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) &&
       (this_00 = this->RecastNavMeshImpl->DetourNavMesh, this_00 != (dtNavMesh *)0x0)) &&
      (0.0 < this_00->m_tileWidth)) &&
     ((0.0 < this_00->m_tileHeight &&
      (pdVar10 = dtNavMesh::getTileByRef(this_00,param_1.TileRef), pdVar10 != (dtMeshTile *)0x0))))
  {
    uVar12 = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    uVar3 = pdVar10->header->detailTriCount;
    if (uVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(uint)uVar3,&local_38.AllocatorInstance,0,&local_38.ArrayMax);
    }
    FPImplRecastNavMesh::GetTilePolyEdges
              (this->RecastNavMeshImpl,pdVar10,false,true,&local_28,&local_38);
    iVar9 = local_38.ArrayNum;
    lVar11 = (longlong)local_38.ArrayNum;
    if (0 < local_38.ArrayNum) {
      uVar8 = local_38.ArrayNum / 2;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      piVar1 = &param_2->ArrayMax;
      param_2->ArrayNum = 0;
      if (param_2->ArrayMax < (int)uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,uVar8,&param_2->AllocatorInstance,0,piVar1);
      }
      if (0 < iVar9) {
        lVar11 = (lVar11 - 1U >> 1) + 1;
        uVar15 = uVar12;
        do {
          iVar9 = param_2->ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x830,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar9 + 1;
          pFVar13 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x30;
          DefaultConstructItems<FNavigationWallEdge,int>(pFVar13,1);
          uVar14 = (uint)uVar15;
          uVar8 = 0;
          if ((int)uVar14 < local_38.ArrayNum) {
            uVar8 = ~uVar14 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          uVar5 = *(undefined8 *)(local_38.AllocatorInstance.Data + uVar12 + 8);
          *(undefined8 *)pFVar13 = *(undefined8 *)(local_38.AllocatorInstance.Data + uVar12);
          *(undefined8 *)(pFVar13 + 8) = uVar5;
          *(undefined8 *)(pFVar13 + 0x10) =
               *(undefined8 *)(local_38.AllocatorInstance.Data + uVar12 + 0x10);
          uVar8 = 0;
          if ((int)(uVar14 + 1) < local_38.ArrayNum) {
            uVar8 = ~(uVar14 + 1) >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          uVar15 = (ulonglong)(uVar14 + 2);
          uVar5 = *(undefined8 *)(local_38.AllocatorInstance.Data + uVar12 + 0x18 + 8);
          *(undefined8 *)(pFVar13 + 0x18) =
               *(undefined8 *)(local_38.AllocatorInstance.Data + uVar12 + 0x18);
          *(undefined8 *)(pFVar13 + 0x20) = uVar5;
          lVar2 = uVar12 + 0x28;
          uVar12 = uVar12 + 0x30;
          *(undefined8 *)(pFVar13 + 0x28) = *(undefined8 *)(local_38.AllocatorInstance.Data + lVar2)
          ;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return false;
}

// GetLinkEndPoints @ 146e05dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
ARecastNavMesh::GetLinkEndPoints
          (ARecastNavMesh *this,ulong64 param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  dtNavMesh *this_00;
  uint uVar1;
  uint uVar2;
  undefined1 auStackY_88 [32];
  double local_58;
  double dStack_50;
  undefined8 local_48;
  double local_40;
  double dStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if ((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) &&
     (this_00 = this->RecastNavMeshImpl->DetourNavMesh, this_00 != (dtNavMesh *)0x0)) {
    local_48 = 0;
    local_30 = 0;
    local_58 = 0.0;
    dStack_50 = 0.0;
    local_40 = 0.0;
    dStack_38 = 0.0;
    uVar1 = dtNavMesh::getOffMeshConnectionPolyEndPoints
                      (this_00,0,param_1,(double *)0x0,&local_58,&local_40);
    if ((uVar1 >> 0x1e & 1) != 0) {
      uVar1 = (uint)__xmm_80000000000000008000000000000000;
      uVar2 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      (param_2->field0_0x0)._s_0.X =
           (double)CONCAT44((uint)((ulonglong)local_58 >> 0x20) ^ uVar2,SUB84(local_58,0) ^ uVar1);
      (param_2->field0_0x0)._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)local_48 >> 0x20) ^ uVar2,(uint)local_48 ^ uVar1);
      (param_2->field0_0x0)._s_0.Z = dStack_50;
      (param_3->field0_0x0)._s_0.X =
           (double)CONCAT44((uint)((ulonglong)local_40 >> 0x20) ^ uVar2,SUB84(local_40,0) ^ uVar1);
      (param_3->field0_0x0)._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)local_30 >> 0x20) ^ uVar2,(uint)local_30 ^ uVar1);
      (param_3->field0_0x0)._s_0.Z = dStack_38;
      return true;
    }
  }
  return false;
}

// GetMaxSupportedAreas @ 146e078e0

int __thiscall ARecastNavMesh::GetMaxSupportedAreas(ARecastNavMesh *this)

{
  return 0x40;
}

// GetNamedFilter @ 146e07d00

FRecastQueryFilter * __cdecl ARecastNavMesh::GetNamedFilter(Type param_1)

{
  code *pcVar1;
  bool bVar2;
  FRecastQueryFilter *pFVar3;
  
  if (2 < (int)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FilterType < ERecastNamedFilter::NamedFiltersCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                       ,0xf45,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRecastQueryFilter *)(*pcVar1)();
      return pFVar3;
    }
  }
  return NamedFilters[(int)param_1];
}

// GetNavLinkUserId @ 146e07e20

FNavLinkId __thiscall ARecastNavMesh::GetNavLinkUserId(ARecastNavMesh *this,ulong64 param_1)

{
  dtNavMesh *this_00;
  dtOffMeshConnection *pdVar1;
  ulong64 in_R8;
  
  if (this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) {
    *(ulong64 *)param_1 = FNavLinkId::Invalid.Id;
    return (FNavLinkId)param_1;
  }
  this_00 = this->RecastNavMeshImpl->DetourNavMesh;
  if (this_00 != (dtNavMesh *)0x0) {
    pdVar1 = dtNavMesh::getOffMeshConnectionByRef(this_00,in_R8);
    if (pdVar1 != (dtOffMeshConnection *)0x0) {
      *(ulong64 *)param_1 = pdVar1->userId;
      return (FNavLinkId)param_1;
    }
  }
  *(ulong64 *)param_1 = FNavLinkId::Invalid.Id;
  return (FNavLinkId)param_1;
}

// GetNavLinksInTile @ 146e07ee0

bool __thiscall
ARecastNavMesh::GetNavLinksInTile
          (ARecastNavMesh *this,int param_1,TArray<FNavPoly,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ushort uVar5;
  double *pdVar6;
  dtOffMeshConnection *pdVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  byte bVar10;
  double dVar11;
  double dVar12;
  dtNavMesh *pdVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  dtMeshTile *pdVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulong64 uVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  ForAnyElementType FVar30;
  ushort *puVar31;
  dtNavMesh *pdVar32;
  undefined1 local_res8 [8];
  int local_a8;
  ForAnyElementType local_a0;
  undefined8 local_98;
  dtMeshTile *local_90;
  dtNavMesh *local_88;
  uint local_80;
  int local_7c;
  FScriptContainerElement *local_78;
  ulong64 local_70;
  FScriptContainerElement *local_68;
  
  if ((((this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) ||
       (pdVar32 = this->RecastNavMeshImpl->DetourNavMesh, pdVar32 == (dtNavMesh *)0x0)) ||
      (param_1 < 0)) || (iVar16 = dtNavMesh::getMaxTiles(pdVar32), iVar16 <= param_1)) {
    return false;
  }
  pdVar32 = this->RecastNavMeshImpl->DetourNavMesh;
  local_7c = param_2->ArrayNum;
  local_88 = pdVar32;
  pdVar20 = dtNavMesh::getTile(pdVar32,param_1);
  dVar12 = __real_bfe0000000000000;
  dVar11 = __real_3fe0000000000000;
  if ((pdVar20 != (dtMeshTile *)0x0) && (pdVar20->header != (dtMeshHeader *)0x0)) {
    uVar5 = pdVar20->header->offMeshConCount;
    local_90 = pdVar20;
    if (uVar5 != 0) {
      uVar19 = param_2->ArrayNum;
      TArray<FNavPoly,TSizedDefaultAllocator<32>_>::AddZeroed(param_2,(uint)uVar5);
      pdVar13 = local_88;
      uVar26 = (ulonglong)(uint)uVar5;
      if (uVar5 != 0) {
        puVar31 = pdVar20->polys->verts + 1;
        lVar28 = (longlong)(int)uVar19 << 5;
        pdVar20 = local_90;
        uVar24 = uVar19;
        do {
          uVar17 = 0;
          if ((int)uVar24 < param_2->ArrayNum) {
            uVar17 = ~uVar24 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             pdVar20 = local_90, bVar14)) {
            pcVar9 = (code *)swi(3);
            uVar15 = (*pcVar9)();
            return (bool)uVar15;
          }
          bVar10 = (byte)pdVar13->m_polyBits;
          pFVar25 = (param_2->AllocatorInstance).Data;
          uVar17 = (pdVar20->header->offMeshBase - uVar19) + uVar24;
          uVar24 = uVar24 + 1;
          *(ulonglong *)(pFVar25 + lVar28) =
               (ulonglong)pdVar20->salt << ((char)pdVar13->m_tileBits + bVar10 & 0x3f) |
               (ulonglong)uVar17 | (ulonglong)(uint)param_1 << (bVar10 & 0x3f);
          pdVar6 = pdVar20->verts;
          uVar21 = (ulonglong)puVar31[-1];
          uVar22 = (ulonglong)*puVar31;
          dVar1 = pdVar6[uVar21 * 3 + 2];
          puVar31 = puVar31 + 0x10;
          dVar2 = pdVar6[uVar21 * 3 + 1];
          dVar3 = pdVar6[uVar22 * 3 + 2];
          dVar4 = pdVar6[uVar22 * 3 + 1];
          *(double *)(pFVar25 + lVar28 + 8) = (pdVar6[uVar22 * 3] + pdVar6[uVar21 * 3]) * dVar12;
          *(double *)(pFVar25 + lVar28 + 0x10) = (dVar3 + dVar1) * dVar12;
          *(double *)(pFVar25 + lVar28 + 0x18) = (dVar4 + dVar2) * dVar11;
          lVar28 = lVar28 + 0x20;
          uVar26 = uVar26 - 1;
          pdVar32 = local_88;
        } while (uVar26 != 0);
      }
    }
    pdVar20 = local_90;
    if (param_3) {
      local_a0.Data = (FScriptContainerElement *)0x0;
      local_98 = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0x20,&local_a0,0,(int *)((longlong)&local_98 + 4));
      local_a8 = 0;
      do {
        lVar28 = (longlong)(int)(uint)local_98;
        iVar16 = dtNavMesh::getNeighbourTilesCountAt
                           (pdVar32,pdVar20->header->x,pdVar20->header->y,local_a8);
        if (iVar16 < 1) goto LAB_146e08444;
        iVar18 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,iVar16,&local_a0,(int *)&local_98,(int *)((longlong)&local_98 + 4));
        memset(local_a0.Data + (longlong)iVar18 * 8,0,(longlong)iVar16 << 3);
        iVar18 = pdVar20->header->x;
        iVar29 = pdVar20->header->y;
        switch(local_a8) {
        default:
          iVar18 = iVar18 + 1;
          break;
        case 1:
          iVar18 = iVar18 + 1;
        case 2:
          iVar29 = iVar29 + 1;
          break;
        case 3:
          iVar18 = iVar18 + -1;
          iVar29 = iVar29 + 1;
          break;
        case 4:
          iVar18 = iVar18 + -1;
          break;
        case 5:
          iVar18 = iVar18 + -1;
        case 6:
switchD_146e081f9_caseD_6:
          iVar29 = iVar29 + -1;
          break;
        case 7:
          iVar18 = iVar18 + 1;
          goto switchD_146e081f9_caseD_6;
        }
        dtNavMesh::getTilesAt
                  (pdVar32,iVar18,iVar29,(dtMeshTile **)(local_a0.Data + lVar28 * 8),iVar16);
        uVar26 = (ulonglong)(int)(uint)local_98;
        local_80 = (uint)local_98;
        pFVar25 = local_a0.Data + uVar26 * 8;
        FVar30.Data = local_a0.Data;
        local_68 = pFVar25;
        while( true ) {
          local_78 = FVar30.Data;
          if ((uint)local_98 != (int)uVar26) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<dtMeshTile_const_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (FVar30.Data == pFVar25) break;
          pdVar20 = *(dtMeshTile **)FVar30.Data;
          if (((pdVar20 != (dtMeshTile *)0x0) && (pdVar20->header != (dtMeshHeader *)0x0)) &&
             (pdVar20->offMeshCons != (dtOffMeshConnection *)0x0)) {
            uVar23 = dtNavMesh::getTileRef(pdVar32,pdVar20);
            iVar16 = 0;
            pdVar32 = local_88;
            local_70 = uVar23;
            if (pdVar20->header->offMeshConCount != 0) {
              lVar28 = 0;
              do {
                pdVar7 = pdVar20->offMeshCons;
                if ((*(byte *)((longlong)pdVar7->pos + lVar28 + 0x4a) == ((char)local_a8 - 4U & 7))
                   && (pdVar20->polys[*(ushort *)((longlong)pdVar7->pos + lVar28 + 0x48)].firstLink
                       != 0xffffffff)) {
                  uVar19 = param_2->ArrayNum;
                  if (uVar19 == param_2->ArrayMax) {
                    uVar19 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x820,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  param_2->ArrayNum = uVar19 + 1;
                  pFVar8 = (param_2->AllocatorInstance).Data;
                  lVar27 = (longlong)(int)uVar19 * 0x20;
                  pFVar25 = pFVar8 + lVar27;
                  *(undefined8 *)pFVar25 = 0;
                  *(undefined8 *)(pFVar25 + 8) = 0;
                  pFVar8 = pFVar8 + lVar27 + 0x10;
                  *(undefined8 *)pFVar8 = 0;
                  *(undefined8 *)(pFVar8 + 8) = 0;
                  uVar24 = 0;
                  if ((int)uVar19 < param_2->ArrayNum) {
                    uVar24 = ~uVar19 >> 0x1f;
                  }
                  if ((uVar24 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar9 = (code *)swi(3);
                    uVar15 = (*pcVar9)();
                    return (bool)uVar15;
                  }
                  pFVar25 = (param_2->AllocatorInstance).Data;
                  *(ulonglong *)(pFVar25 + lVar27) =
                       *(ushort *)((longlong)pdVar7->pos + lVar28 + 0x48) | uVar23;
                  dVar1 = *(double *)((longlong)pdVar7->pos + lVar28 + 0x10);
                  dVar2 = *(double *)((longlong)pdVar7->pos + lVar28 + 0x28);
                  dVar3 = *(double *)((longlong)pdVar7->pos + lVar28 + 8);
                  dVar4 = *(double *)((longlong)pdVar7->pos + lVar28 + 0x20);
                  *(double *)(pFVar25 + lVar27 + 8) =
                       (*(double *)((longlong)pdVar7->pos + lVar28) +
                       *(double *)((longlong)pdVar7->pos + lVar28 + 0x18)) * dVar12;
                  *(double *)(pFVar25 + lVar27 + 0x10) = (dVar2 + dVar1) * dVar12;
                  *(double *)(pFVar25 + lVar27 + 0x18) = (dVar4 + dVar3) * dVar11;
                }
                iVar16 = iVar16 + 1;
                lVar28 = lVar28 + 0x50;
                pFVar25 = local_68;
                FVar30.Data = local_78;
                pdVar32 = local_88;
              } while (iVar16 < (int)(uint)pdVar20->header->offMeshConCount);
            }
          }
          uVar26 = (ulonglong)local_80;
          FVar30.Data = FVar30.Data + 8;
        }
        uVar19 = local_98._4_4_;
        pdVar20 = local_90;
        if (local_98 < 0) {
          local_98 = (ulonglong)local_98._4_4_ << 0x20;
          if (uVar19 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,&local_a0,0,(int *)((longlong)&local_98 + 4));
            pdVar20 = local_90;
          }
        }
        else {
          local_98 = (ulonglong)local_98._4_4_ << 0x20;
        }
LAB_146e08444:
        local_a8 = local_a8 + 1;
      } while (local_a8 < 8);
      if (local_a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data);
      }
    }
  }
  return 0 < param_2->ArrayNum - local_7c;
}

// GetNavMeshBounds @ 146e084f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBox<double> * __thiscall
ARecastNavMesh::GetNavMeshBounds(ARecastNavMesh *this,TBox<double> *__return_storage_ptr__)

{
  FPImplRecastNavMesh *pFVar1;
  dtNavMesh *this_00;
  dtMeshHeader *pdVar2;
  int iVar3;
  dtMeshTile *pdVar4;
  int iVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 auStack_198 [32];
  TVector<double>_u_0 local_178;
  undefined8 local_160;
  undefined8 local_158;
  double local_150;
  undefined8 local_118;
  TVector<double>_u_0 local_110;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  char local_e0;
  undefined7 uStack_df;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_198;
  __return_storage_ptr__->IsValid = '\0';
  pFVar1 = this->RecastNavMeshImpl;
  if (pFVar1 != (FPImplRecastNavMesh *)0x0) {
    this_00 = pFVar1->DetourNavMesh;
    cVar6 = '\0';
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    local_118 = 0;
    if (this_00 != (dtNavMesh *)0x0) {
      iVar5 = 0;
      iVar3 = dtNavMesh::getMaxTiles(this_00);
      if (0 < iVar3) {
        uVar25 = 0;
        uVar26 = 0;
        uVar27 = 0;
        uVar28 = 0;
        uVar29 = 0;
        uVar30 = 0;
        uVar31 = (uint)__xmm_80000000000000008000000000000000;
        uVar32 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        uVar19 = 0;
        uVar20 = 0;
        uVar21 = 0;
        uVar22 = 0;
        uVar23 = 0;
        uVar24 = 0;
        do {
          pdVar4 = dtNavMesh::getTile(this_00,iVar5);
          if ((pdVar4 != (dtMeshTile *)0x0) &&
             (pdVar2 = pdVar4->header, pdVar2 != (dtMeshHeader *)0x0)) {
            local_178._s_0.X =
                 (double)CONCAT44((uint)((ulonglong)pdVar2->bmin[0] >> 0x20) ^ uVar32,
                                  SUB84(pdVar2->bmin[0],0) ^ uVar31);
            local_178._s_0.Y =
                 (double)CONCAT44((uint)((ulonglong)pdVar2->bmin[2] >> 0x20) ^ uVar32,
                                  SUB84(pdVar2->bmin[2],0) ^ uVar31);
            local_178._s_0.Z = pdVar2->bmin[1];
            local_158 = CONCAT44((uint)((ulonglong)pdVar2->bmax[2] >> 0x20) ^ uVar32,
                                 SUB84(pdVar2->bmax[2],0) ^ uVar31);
            local_160 = CONCAT44((uint)((ulonglong)pdVar2->bmax[0] >> 0x20) ^ uVar32,
                                 SUB84(pdVar2->bmax[0],0) ^ uVar31);
            local_150 = pdVar2->bmax[1];
            UE::Math::TBox<double>::TBox<double>
                      ((TBox<double> *)&local_110._s_0,(TVector<double> *)&local_178._s_0,2);
            if (cVar6 == '\0') {
              if (local_e0 != '\0') {
                local_118 = CONCAT71(uStack_df,local_e0);
                uVar7 = local_110._0_4_;
                uVar8 = local_110._4_4_;
                uVar9 = local_110._8_4_;
                uVar10 = local_110._12_4_;
                uVar11 = local_110._16_4_;
                uVar12 = local_110._20_4_;
                uVar13 = uStack_f8;
                uVar14 = uStack_f4;
                uVar15 = local_f0;
                uVar16 = uStack_ec;
                uVar17 = uStack_e8;
                uVar18 = uStack_e4;
                uVar19 = uStack_e8;
                uVar20 = uStack_e4;
                uVar21 = uStack_f8;
                uVar22 = uStack_f4;
                uVar23 = local_110._8_4_;
                uVar24 = local_110._12_4_;
                uVar25 = local_f0;
                uVar26 = uStack_ec;
                uVar27 = local_110._16_4_;
                uVar28 = local_110._20_4_;
                uVar29 = local_110._0_4_;
                uVar30 = local_110._4_4_;
                cVar6 = local_e0;
              }
            }
            else if (local_e0 != '\0') {
              uVar7 = uVar29;
              uVar8 = uVar30;
              if ((double)CONCAT44(local_110._4_4_,local_110._0_4_) <=
                  (double)CONCAT44(uVar30,uVar29)) {
                uVar7 = local_110._0_4_;
                uVar8 = local_110._4_4_;
              }
              uVar11 = uVar27;
              uVar12 = uVar28;
              if ((double)CONCAT44(local_110._20_4_,local_110._16_4_) <=
                  (double)CONCAT44(uVar28,uVar27)) {
                uVar11 = local_110._16_4_;
                uVar12 = local_110._20_4_;
              }
              uVar15 = uVar25;
              uVar16 = uVar26;
              if ((double)CONCAT44(uVar26,uVar25) <= (double)CONCAT44(uStack_ec,local_f0)) {
                uVar15 = local_f0;
                uVar16 = uStack_ec;
              }
              uVar9 = uVar23;
              uVar10 = uVar24;
              if ((double)CONCAT44(local_110._12_4_,local_110._8_4_) <=
                  (double)CONCAT44(uVar24,uVar23)) {
                uVar9 = local_110._8_4_;
                uVar10 = local_110._12_4_;
              }
              uVar13 = uVar21;
              uVar14 = uVar22;
              if ((double)CONCAT44(uVar22,uVar21) <= (double)CONCAT44(uStack_f4,uStack_f8)) {
                uVar13 = uStack_f8;
                uVar14 = uStack_f4;
              }
              uVar17 = uVar19;
              uVar18 = uVar20;
              uVar21 = uVar13;
              uVar22 = uVar14;
              uVar23 = uVar9;
              uVar24 = uVar10;
              uVar25 = uVar15;
              uVar26 = uVar16;
              uVar27 = uVar11;
              uVar28 = uVar12;
              uVar29 = uVar7;
              uVar30 = uVar8;
              if ((double)CONCAT44(uVar20,uVar19) <= (double)CONCAT44(uStack_e4,uStack_e8)) {
                uVar17 = uStack_e8;
                uVar18 = uStack_e4;
                uVar19 = uStack_e8;
                uVar20 = uStack_e4;
              }
            }
          }
          iVar5 = iVar5 + 1;
          iVar3 = dtNavMesh::getMaxTiles(pFVar1->DetourNavMesh);
        } while (iVar5 < iVar3);
      }
    }
    *(undefined4 *)&(__return_storage_ptr__->Min).field0_0x0 = uVar7;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 4) = uVar8;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uVar9;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0xc) = uVar10;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10) = uVar11;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x14) = uVar12;
    *(undefined4 *)&(__return_storage_ptr__->Max).field0_0x0 = uVar13;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4) = uVar14;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = uVar15;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0xc) = uVar16;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x10) = uVar17;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0x14) = uVar18;
    __return_storage_ptr__->IsValid = (undefined1)local_118;
    __return_storage_ptr__->Pad[0] = local_118._1_1_;
    __return_storage_ptr__->Pad[1] = local_118._2_1_;
    __return_storage_ptr__->Pad[2] = local_118._3_1_;
    __return_storage_ptr__->Pad[3] = local_118._4_1_;
    __return_storage_ptr__->Pad[4] = local_118._5_1_;
    __return_storage_ptr__->Pad[5] = local_118._6_1_;
    __return_storage_ptr__->Pad[6] = local_118._7_1_;
  }
  return __return_storage_ptr__;
}

// GetNavMeshTileBounds @ 146e089c0

TBox<double> * __thiscall
ARecastNavMesh::GetNavMeshTileBounds
          (ARecastNavMesh *this,TBox<double> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TBox<double> *pTVar3;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_28;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_18;
  
  if ((this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) || (param_1 == -1)) {
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
    __return_storage_ptr__->IsValid = '\0';
    __return_storage_ptr__->Pad[0] = '\0';
    __return_storage_ptr__->Pad[1] = '\0';
    __return_storage_ptr__->Pad[2] = '\0';
    __return_storage_ptr__->Pad[3] = '\0';
    __return_storage_ptr__->Pad[4] = '\0';
    __return_storage_ptr__->Pad[5] = '\0';
    __return_storage_ptr__->Pad[6] = '\0';
  }
  else {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    local_28.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,1,0,&local_28.AllocatorInstance,1,&local_28.ArrayMax);
    *(int *)local_28.AllocatorInstance.Data = param_1;
    FNavTileRef::DeprecatedMakeTileRefsFromTileIds(this->RecastNavMeshImpl,&local_28,&local_18);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    if (local_18.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TBox<double> *)(*pcVar1)();
        return pTVar3;
      }
    }
    GetNavMeshTileBounds
              (this,__return_storage_ptr__,(FNavTileRef)*(ulong64 *)local_18.AllocatorInstance.Data)
    ;
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetNavMeshTileBounds @ 146e08b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBox<double> * __thiscall
ARecastNavMesh::GetNavMeshTileBounds
          (ARecastNavMesh *this,TBox<double> *__return_storage_ptr__,FNavTileRef param_1)

{
  dtNavMesh *this_00;
  dtMeshHeader *pdVar1;
  double dVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  dtMeshTile *pdVar10;
  TBox<double> *pTVar11;
  undefined1 auStack_68 [32];
  TBox<double> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  if ((((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) &&
       (this_00 = this->RecastNavMeshImpl->DetourNavMesh, this_00 != (dtNavMesh *)0x0)) &&
      (0.0 < this_00->m_tileWidth)) && ((0.0 < this_00->m_tileHeight && (param_1.TileRef != 0)))) {
    pdVar10 = dtNavMesh::getTileByRef(this_00,param_1.TileRef);
    if ((pdVar10 != (dtMeshTile *)0x0) && (pdVar1 = pdVar10->header, pdVar1 != (dtMeshHeader *)0x0))
    {
      pTVar11 = Recast2UnrealBox(&local_48,pdVar1->bmin,pdVar1->bmax);
      dVar2 = (pTVar11->Min).field0_0x0._s_0.Y;
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = (pTVar11->Min).field0_0x0._s_0.X;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar2;
      dVar2 = (pTVar11->Max).field0_0x0._s_0.X;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (pTVar11->Min).field0_0x0._s_0.Z;
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar2;
      dVar2 = (pTVar11->Max).field0_0x0._s_0.Z;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (pTVar11->Max).field0_0x0._s_0.Y;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar2;
      uVar3 = pTVar11->Pad[0];
      uVar4 = pTVar11->Pad[1];
      uVar5 = pTVar11->Pad[2];
      uVar6 = pTVar11->Pad[3];
      uVar7 = pTVar11->Pad[4];
      uVar8 = pTVar11->Pad[5];
      uVar9 = pTVar11->Pad[6];
      __return_storage_ptr__->IsValid = pTVar11->IsValid;
      __return_storage_ptr__->Pad[0] = uVar3;
      __return_storage_ptr__->Pad[1] = uVar4;
      __return_storage_ptr__->Pad[2] = uVar5;
      __return_storage_ptr__->Pad[3] = uVar6;
      __return_storage_ptr__->Pad[4] = uVar7;
      __return_storage_ptr__->Pad[5] = uVar8;
      __return_storage_ptr__->Pad[6] = uVar9;
    }
  }
  return __return_storage_ptr__;
}

// GetNavMeshTileXY @ 146e08cb0

bool __thiscall
ARecastNavMesh::GetNavMeshTileXY
          (ARecastNavMesh *this,TVector<double> *param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  dtNavMesh *this_00;
  int local_res8 [2];
  int local_28 [2];
  double local_20;
  double local_18;
  undefined8 local_10;
  
  if ((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) &&
     (this_00 = this->RecastNavMeshImpl->DetourNavMesh, this_00 != (dtNavMesh *)0x0)) {
    local_20 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                (uint)*(undefined8 *)&param_1->field0_0x0 ^
                                (uint)__xmm_80000000000000008000000000000000);
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    local_10 = CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
    local_18 = (param_1->field0_0x0)._s_0.Z;
    local_res8[0] = 0;
    local_28[0] = 0;
    dtNavMesh::calcTileLoc(this_00,&local_20,local_res8,local_28);
    *param_2 = local_res8[0];
    *param_3 = local_28[0];
    return true;
  }
  return false;
}

// GetNavMeshTileXY @ 146e08d50

bool __thiscall
ARecastNavMesh::GetNavMeshTileXY
          (ARecastNavMesh *this,int param_1,int *param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_38;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_28;
  
  if ((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) && (param_1 != -1)) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    local_38.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,1,0,&local_38.AllocatorInstance,1,&local_38.ArrayMax);
    *(int *)local_38.AllocatorInstance.Data = param_1;
    FNavTileRef::DeprecatedMakeTileRefsFromTileIds(this->RecastNavMeshImpl,&local_38,&local_28);
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    if (local_28.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = GetNavMeshTileXY(this,(FNavTileRef)*(ulong64 *)local_28.AllocatorInstance.Data,param_2,
                             param_3,param_4);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    return bVar2;
  }
  return false;
}

// GetNavMeshTileXY @ 146e08ea0

bool __thiscall
ARecastNavMesh::GetNavMeshTileXY
          (ARecastNavMesh *this,FNavTileRef param_1,int *param_2,int *param_3,int *param_4)

{
  dtNavMesh *this_00;
  dtMeshHeader *pdVar1;
  dtMeshTile *pdVar2;
  
  if ((((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) &&
       (this_00 = this->RecastNavMeshImpl->DetourNavMesh, this_00 != (dtNavMesh *)0x0)) &&
      (0.0 < this_00->m_tileWidth)) && ((0.0 < this_00->m_tileHeight && (param_1.TileRef != 0)))) {
    pdVar2 = dtNavMesh::getTileByRef(this_00,param_1.TileRef);
    if ((pdVar2 != (dtMeshTile *)0x0) && (pdVar1 = pdVar2->header, pdVar1 != (dtMeshHeader *)0x0)) {
      *param_2 = pdVar1->x;
      *param_3 = pdVar1->y;
      *param_4 = (uint)pdVar1->layer;
      return true;
    }
  }
  return false;
}

// GetNavMeshTilesAt @ 146e09060

void __thiscall
ARecastNavMesh::GetNavMeshTilesAt
          (ARecastNavMesh *this,int param_1,int param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_28;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    GetNavMeshTilesAt(this,param_1,param_2,&local_18);
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    FNavTileRef::DeprecatedGetTileIdsFromNavTileRefs(this->RecastNavMeshImpl,&local_18,&local_28);
    if (param_3 == (TArray<int,TSizedDefaultAllocator<32>_> *)&local_28) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    lVar4 = (longlong)local_28.ArrayNum;
    if (local_28.ArrayNum != 0) {
      iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_28.ArrayNum,&param_3->AllocatorInstance,&param_3->ArrayNum,
                         &param_3->ArrayMax);
      memcpy((param_3->AllocatorInstance).Data + (longlong)iVar3 * 4,local_28.AllocatorInstance.Data
             ,lVar4 << 2);
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// GetNavMeshTilesAt @ 146e09170

void __thiscall
ARecastNavMesh::GetNavMeshTilesAt
          (ARecastNavMesh *this,int param_1,int param_2,
          TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *param_3)

{
  dtNavMesh *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong64 uVar7;
  longlong lVar8;
  uint uVar9;
  ulong64 local_38;
  ForAnyElementType local_30;
  int local_28 [4];
  
  if ((((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) &&
       (this_00 = this->RecastNavMeshImpl->DetourNavMesh, this_00 != (dtNavMesh *)0x0)) &&
      (0.0 < this_00->m_tileWidth)) && (0.0 < this_00->m_tileHeight)) {
    iVar4 = dtNavMesh::getTileCountAt(this_00,param_1,param_2);
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28[0] = 0;
    local_28[1] = 0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar4,&local_30,local_28,local_28 + 1);
    memset(local_30.Data + (longlong)iVar5 * 8,0,(longlong)iVar4 << 3);
    uVar9 = 0;
    iVar4 = dtNavMesh::getTilesAt(this_00,param_1,param_2,(dtMeshTile **)local_30.Data,iVar4);
    if (0 < iVar4) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar9 < local_28[0]) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar7 = dtNavMesh::getTileRef(this_00,*(dtMeshTile **)(local_30.Data + lVar8 * 8));
        if (uVar7 != 0) {
          pFVar1 = (param_3->AllocatorInstance).Data;
          local_38 = uVar7;
          if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
             ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_3->ArrayMax * 8)) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          iVar5 = param_3->ArrayNum;
          if (iVar5 == param_3->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar5 + 1;
          *(ulong64 *)((param_3->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_38;
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar4);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
  }
  return;
}

// GetNavMeshTilesCount @ 146e095c0

int __thiscall ARecastNavMesh::GetNavMeshTilesCount(ARecastNavMesh *this)

{
  dtNavMesh *pdVar1;
  
  if ((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) &&
     (pdVar1 = this->RecastNavMeshImpl->DetourNavMesh, pdVar1 != (dtNavMesh *)0x0)) {
    return pdVar1->m_maxTiles;
  }
  return 0;
}

// GetNavigationDataChunk @ 146e0a4a0

URecastNavMeshDataChunk * __thiscall
ARecastNavMesh::GetNavigationDataChunk
          (ARecastNavMesh *this,TArray<UNavigationDataChunk_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  URecastNavMeshDataChunk *pUVar6;
  UClass *pUVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar9 = pFVar2;
  while( true ) {
    if (pFVar9 == pFVar2 + (longlong)param_1->ArrayNum * 8) {
      return (URecastNavMeshDataChunk *)0x0;
    }
    if (*(longlong *)(*(longlong *)pFVar9 + 0x28) == this->_padding_) break;
    pFVar9 = pFVar9 + 8;
  }
  uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar2 >> 3);
  if (uVar8 == 0xffffffff) {
    return (URecastNavMeshDataChunk *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar8 < param_1->ArrayNum) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar6 = (URecastNavMeshDataChunk *)(*pcVar3)();
    return pUVar6;
  }
  pUVar6 = *(URecastNavMeshDataChunk **)
            ((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 8);
  if (pUVar6 != (URecastNavMeshDataChunk *)0x0) {
    pUVar7 = Z_Construct_UClass_URecastNavMeshDataChunk_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) {
      return pUVar6;
    }
  }
  return (URecastNavMeshDataChunk *)0x0;
}

// GetNavigationDataChunk @ 146e0a590

URecastNavMeshDataChunk * __thiscall
ARecastNavMesh::GetNavigationDataChunk(ARecastNavMesh *this,ANavigationDataChunkActor *param_1)

{
  URecastNavMeshDataChunk *pUVar1;
  
  pUVar1 = GetNavigationDataChunk
                     (this,(TArray<UNavigationDataChunk_*,TSizedDefaultAllocator<32>_> *)
                           &param_1->NavDataChunks);
  return pUVar1;
}

// GetNavigationDataChunk @ 146e0a5b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

URecastNavMeshDataChunk * __thiscall
ARecastNavMesh::GetNavigationDataChunk(ARecastNavMesh *this,ULevel *param_1)

{
  URecastNavMeshDataChunk *pUVar1;
  
  pUVar1 = GetNavigationDataChunk
                     (this,(TArray<UNavigationDataChunk_*,TSizedDefaultAllocator<32>_> *)
                           &param_1->NavDataChunks);
  return pUVar1;
}

// GetNavmeshTileResolution @ 146e0a6d0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall
ARecastNavMesh::GetNavmeshTileResolution
          (ARecastNavMesh *this,int param_1,ENavigationDataResolution *param_2)

{
  dtNavMesh *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  dtMeshTile *pdVar4;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_28;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_18;
  
  if ((this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) || (param_1 == -1)) {
    return false;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_18.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_18.AllocatorInstance,1,&local_18.ArrayMax);
  *(int *)local_18.AllocatorInstance.Data = param_1;
  FNavTileRef::DeprecatedMakeTileRefsFromTileIds(this->RecastNavMeshImpl,&local_18,&local_28);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  if ((local_28.ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((((this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) ||
       (this_00 = this->RecastNavMeshImpl->DetourNavMesh, this_00 == (dtNavMesh *)0x0)) ||
      (pdVar4 = dtNavMesh::getTileByRef(this_00,*(ulong64 *)local_28.AllocatorInstance.Data),
      pdVar4 == (dtMeshTile *)0x0)) || (pdVar4->header == (dtMeshHeader *)0x0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    *param_2 = pdVar4->header->resolution;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return bVar2;
}

// GetNavmeshTileResolution @ 146e0a840

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall
ARecastNavMesh::GetNavmeshTileResolution
          (ARecastNavMesh *this,FNavTileRef param_1,ENavigationDataResolution *param_2)

{
  dtNavMesh *this_00;
  dtMeshTile *pdVar1;
  
  if ((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) &&
     (this_00 = this->RecastNavMeshImpl->DetourNavMesh, this_00 != (dtNavMesh *)0x0)) {
    pdVar1 = dtNavMesh::getTileByRef(this_00,param_1.TileRef);
    if ((pdVar1 != (dtMeshTile *)0x0) && (pdVar1->header != (dtMeshHeader *)0x0)) {
      *param_2 = pdVar1->header->resolution;
      return true;
    }
  }
  return false;
}

// GetNewAreaID @ 146e0a890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall ARecastNavMesh::GetNewAreaID(ARecastNavMesh *this,UClass *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TSubclassOf<UNavAreaBase> TVar6;
  UClass *pUVar7;
  
  TVar6 = FNavigationSystem::GetDefaultWalkableArea();
  lVar1 = *(longlong *)TVar6.Class.field0_0x0;
  if ((lVar1 != 0) &&
     (pUVar7 = Z_Construct_UClass_UNavAreaBase_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar4 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar7->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar7 = *(UClass **)TVar6.Class.field0_0x0;
      goto LAB_146e0a8f5;
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_146e0a8f5:
  if (param_1 == pUVar7) {
    iVar4 = 0x3f;
  }
  else {
    pUVar7 = Z_Construct_UClass_UNavArea_Null_NoRegister();
    if (param_1 == pUVar7) {
      iVar4 = 0;
    }
    else {
      pUVar7 = Z_Construct_UClass_UNavArea_LowHeight_NoRegister();
      if (param_1 == pUVar7) {
        iVar4 = 0x3e;
      }
      else {
        for (iVar4 = ANavigationData::GetNewAreaID((ANavigationData *)this,param_1);
            (iVar4 == 0 || (iVar4 - 0x3eU < 2)); iVar4 = iVar4 + 1) {
        }
        iVar5 = (**(code **)(this->_padding_ + 0x8d0))(this);
        if ((iVar5 <= iVar4) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("FreeAreaID < GetMaxSupportedAreas()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                               ,0x415,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
      }
    }
  }
  return iVar4;
}

// GetPathSegmentBoundaryEdges @ 146e0b2c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
ARecastNavMesh::GetPathSegmentBoundaryEdges
          (ARecastNavMesh *this,FNavigationPath *param_1,FNavPathPoint *param_2,
          FNavPathPoint *param_3,TArrayView<UE::Math::TVector<double>_const_,int> *param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5,float param_6,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_7,UObject *param_8)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FNavPathType *this_00;
  double dVar5;
  INavigationQueryFilterInterface *pIVar6;
  longlong *plVar7;
  ulong64 uVar8;
  TVector<double> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  FNavPathPoint *pFVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  int iVar17;
  FNavigationQueryFilter *pFVar18;
  UWorld *pUVar19;
  UClass *pUVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 *puVar23;
  int iVar24;
  uint uVar25;
  longlong *plVar26;
  ulonglong uVar27;
  dtQueryFilter *pdVar28;
  dtQueryFilter *pdVar29;
  uint uVar30;
  dtQueryFilter *pdVar31;
  uint uVar32;
  undefined1 auStackY_14f8 [32];
  ForAnyElementType local_1488;
  int local_1480;
  int iStack_147c;
  int local_1478 [2];
  ulong64 local_1470;
  FNavPathPoint *local_1468;
  FSharedReferencer<1> *local_1460;
  int local_1458 [2];
  TArrayView<UE::Math::TVector<double>_const_,int> *local_1450;
  FNavPathPoint *local_1448;
  dtNavMeshQuery *local_1440;
  undefined8 local_1438;
  undefined8 uStack_1430;
  undefined8 local_1428;
  undefined8 local_1420;
  undefined8 uStack_1418;
  undefined8 local_1410;
  dtQuerySpecialLinkFilter local_1408;
  dtQueryFilter *local_1400;
  FWeakObjectPtr local_13f8;
  undefined8 local_13f0;
  UObject *local_13e8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_13e0;
  dtQueryFilter *local_13d8;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_13d0;
  dtNavMeshQuery local_13b8;
  double local_1318 [2];
  undefined8 local_1308 [22];
  ulong64 local_1258 [64];
  ulong64 local_1058 [128];
  double local_c58 [4];
  undefined8 local_c38 [380];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_14f8;
  local_1450 = param_4;
  local_13e0 = param_5;
  local_1468 = param_2;
  local_1448 = param_3;
  if ((this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) ||
     (this->RecastNavMeshImpl->DetourNavMesh == (dtNavMesh *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_7->SharedReferenceCount).ReferenceController);
    return false;
  }
  if (((param_1->PathType).Id != FNavMeshPath::Type.Id) &&
     ((this_00 = (param_1->PathType).ParentType, this_00 == (FNavPathType *)0x0 ||
      (bVar14 = FNavPathType::IsA(this_00,&FNavMeshPath::Type), !bVar14)))) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_7->SharedReferenceCount).ReferenceController);
    return false;
  }
  local_1460 = &param_7->SharedReferenceCount;
  if (param_1 == (FNavigationPath *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1460->ReferenceController);
    return false;
  }
  local_13d0.Object = param_7->Object;
  local_13d0.SharedReferenceCount.ReferenceController = local_1460->ReferenceController;
  if (local_13d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_13d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_13d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar18 = GetRightFilterRef(this,&local_13d0);
  pUVar19 = AActor::GetWorld((AActor *)this);
  pdVar29 = (dtQueryFilter *)0x0;
  local_1400 = pdVar29;
  if ((pUVar19 != (UWorld *)0x0) &&
     (pdVar28 = (dtQueryFilter *)(pUVar19->NavigationSystem).field0_0x0.DebugPtr,
     pdVar28 != (dtQueryFilter *)0x0)) {
    pUVar20 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    dVar5 = (pdVar28->data).m_areaCost[1];
    iVar17 = (int)pUVar20->_padding_;
    if ((iVar17 <= *(int *)((longlong)dVar5 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)((longlong)dVar5 + 0x30) + (longlong)iVar17 * 8)
        == &pUVar20->_padding_)) {
      local_1400 = pdVar28;
    }
  }
  local_1408 = (dtQuerySpecialLinkFilter)&___7FRecastSpeciaLinkFilter__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_8);
  }
  local_13f8.ObjectIndex = 0;
  local_13f8.ObjectSerialNumber = 0;
  local_13e8 = param_8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_8);
  }
  FWeakObjectPtr::operator=(&local_13f8,(FObjectPtr)&local_13e8);
  local_13f0 = 0;
  dtNavMeshQuery::dtNavMeshQuery(&local_13b8);
  bVar14 = IsInGameThread();
  if (bVar14) {
    local_1440 = &this->RecastNavMeshImpl->SharedNavQuery;
  }
  else {
    local_1440 = &local_13b8;
  }
  dtNavMeshQuery::init
            (local_1440,this->RecastNavMeshImpl->DetourNavMesh,pFVar18->MaxSearchNodes,&local_1408);
  pFVar13 = local_1468;
  pIVar6 = (pFVar18->QueryFilterImpl).Object;
  iVar17 = (int)param_1[1]._padding_;
  local_1488.Data = (FScriptContainerElement *)0x0;
  local_1480 = 0;
  iStack_147c = 0;
  local_13d8 = (dtQueryFilter *)(pIVar6 + 1);
  if (pIVar6 == (INavigationQueryFilterInterface *)0x0) {
    local_13d8 = pdVar29;
  }
  if (0 < iVar17) {
    plVar7 = (longlong *)param_1[1]._padding_;
    for (plVar26 = plVar7; plVar26 != plVar7 + iVar17; plVar26 = plVar26 + 1) {
      if (*plVar26 == local_1468->_padding_) {
        uVar27 = (longlong)plVar26 - (longlong)plVar7 >> 3;
        iVar24 = (int)uVar27;
        if ((iVar24 != -1) && (uVar8 = local_1448->_padding_, iVar24 < iVar17)) {
          lVar22 = (longlong)iVar24 * 8;
          goto LAB_146e0b550;
        }
        break;
      }
    }
  }
  goto LAB_146e0b679;
  while( true ) {
    uVar27 = (ulonglong)(uVar25 + 1);
    lVar22 = lVar22 + 8;
    if ((int)param_1[1]._padding_ <= (int)(uVar25 + 1)) break;
LAB_146e0b550:
    uVar25 = (uint)uVar27;
    uVar32 = 0;
    if ((int)uVar25 < (int)param_1[1]._padding_) {
      uVar32 = ~uVar25 >> 0x1f;
    }
    if ((uVar32 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar12 = (code *)swi(3);
      uVar15 = (*pcVar12)();
      return (bool)uVar15;
    }
    local_1470 = *(ulong64 *)(lVar22 + param_1[1]._padding_);
    if (((local_1488.Data <= (FScriptContainerElement *)&local_1470) &&
        ((FScriptContainerElement *)&local_1470 < local_1488.Data + (longlong)iStack_147c * 8)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar12 = (code *)swi(3);
      uVar15 = (*pcVar12)();
      return (bool)uVar15;
    }
    if (local_1480 == iStack_147c) {
      local_1480 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_1488,&iStack_147c);
    }
    lVar21 = (longlong)local_1480;
    local_1480 = local_1480 + 1;
    *(ulong64 *)(local_1488.Data + lVar21 * 8) = local_1470;
    if (local_1470 == uVar8) break;
  }
  if (local_1480 != 0) goto LAB_146e0b715;
LAB_146e0b679:
  plVar7 = &pFVar13->_padding_;
  if (((local_1488.Data <= plVar7) && (plVar7 < local_1488.Data + (longlong)iStack_147c * 8)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar12 = (code *)swi(3);
    uVar15 = (*pcVar12)();
    return (bool)uVar15;
  }
  if (local_1480 == iStack_147c) {
    local_1480 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_1488,&iStack_147c);
  }
  lVar22 = (longlong)local_1480;
  local_1480 = local_1480 + 1;
  *(longlong *)(local_1488.Data + lVar22 * 8) = *plVar7;
LAB_146e0b715:
  local_1478[0] = 0;
  memset(local_c58,0,0xc00);
  memset(local_1058,0,0x400);
  local_1458[0] = 0;
  memset(local_1258,0,0x200);
  iVar17 = local_1450->ArrayNum;
  iVar24 = 8;
  if (iVar17 < 8) {
    iVar24 = iVar17;
  }
  local_1468 = (FNavPathPoint *)CONCAT44(local_1468._4_4_,iVar24);
  memset(local_1318,0,0xc0);
  uVar32 = (uint)__xmm_80000000000000008000000000000000;
  uVar25 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  lVar22 = (longlong)iVar24;
  if (0 < iVar24) {
    puVar23 = local_1308;
    pdVar28 = pdVar29;
    pdVar31 = pdVar29;
    do {
      uVar30 = (uint)pdVar31;
      uVar16 = 0;
      if ((int)uVar30 < iVar17) {
        uVar16 = ~uVar30 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        uVar15 = (*pcVar12)();
        return (bool)uVar15;
      }
      pdVar31 = (dtQueryFilter *)(ulonglong)(uVar30 + 1);
      pTVar9 = local_1450->DataPtr;
      uVar2 = *(undefined8 *)((longlong)&pTVar9->field0_0x0 + (longlong)&pdVar28->data);
      uVar3 = *(undefined8 *)((longlong)&pdVar28->_padding_ + (longlong)pTVar9);
      uVar4 = *(undefined8 *)
               ((longlong)&pTVar9->field0_0x0 + (longlong)((pdVar28->data).m_areaCost + 1));
      puVar23[-2] = CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^ uVar25,(uint)uVar3 ^ uVar32);
      pdVar28 = (dtQueryFilter *)((pdVar28->data).m_areaCost + 2);
      *puVar23 = CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ uVar25,(uint)uVar2 ^ uVar32);
      puVar23[-1] = uVar4;
      puVar23 = puVar23 + 3;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    param_5 = local_13e0;
    iVar24 = (int)local_1468;
  }
  uVar16 = dtNavMeshQuery::findWallsAroundPath
                     (local_1440,(ulong64 *)local_1488.Data,local_1480,local_1318,iVar24,
                      (double)param_6,local_13d8,local_1258,local_1458,0x40,local_c58,local_1058,
                      local_1478,0x40);
  if ((uVar16 >> 0x1e & 1) == 0) {
    if (local_1488.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1488.Data);
    }
    dtNavMeshQuery::~dtNavMeshQuery(&local_13b8);
    local_1408 = (dtQuerySpecialLinkFilter)&___7dtQuerySpecialLinkFilter__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1460->ReferenceController);
    bVar14 = false;
  }
  else {
    uVar16 = local_1478[0] * 2;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    piVar1 = &param_5->ArrayMax;
    param_5->ArrayNum = 0;
    if (param_5->ArrayMax < (int)uVar16) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar16,&param_5->AllocatorInstance,0,piVar1);
    }
    if (0 < local_1478[0]) {
      puVar23 = local_c38;
      do {
        pFVar10 = (param_5->AllocatorInstance).Data;
        uStack_1430 = CONCAT44((uint)((ulonglong)puVar23[-2] >> 0x20) ^ uVar25,
                               (uint)puVar23[-2] ^ uVar32);
        local_1438 = CONCAT44((uint)((ulonglong)puVar23[-4] >> 0x20) ^ uVar25,
                              (uint)puVar23[-4] ^ uVar32);
        local_1428 = puVar23[-3];
        if (((pFVar10 <= (FScriptContainerElement *)&local_1438) &&
            ((FScriptContainerElement *)&local_1438 < pFVar10 + (longlong)*piVar1 * 0x18)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          uVar15 = (*pcVar12)();
          return (bool)uVar15;
        }
        iVar17 = param_5->ArrayNum;
        if (iVar17 == *piVar1) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&param_5->AllocatorInstance,piVar1);
        }
        param_5->ArrayNum = iVar17 + 1;
        pFVar11 = (param_5->AllocatorInstance).Data;
        pFVar10 = pFVar11 + (longlong)iVar17 * 0x18;
        *(undefined8 *)pFVar10 = local_1438;
        *(undefined8 *)(pFVar10 + 8) = uStack_1430;
        *(undefined8 *)(pFVar11 + (longlong)iVar17 * 0x18 + 0x10) = local_1428;
        pFVar10 = (param_5->AllocatorInstance).Data;
        uStack_1418 = CONCAT44((uint)((ulonglong)puVar23[1] >> 0x20) ^ uVar25,
                               (uint)puVar23[1] ^ uVar32);
        local_1420 = CONCAT44((uint)((ulonglong)puVar23[-1] >> 0x20) ^ uVar25,
                              (uint)puVar23[-1] ^ uVar32);
        local_1410 = *puVar23;
        if (((pFVar10 <= (FScriptContainerElement *)&local_1420) &&
            ((FScriptContainerElement *)&local_1420 < pFVar10 + (longlong)*piVar1 * 0x18)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          uVar15 = (*pcVar12)();
          return (bool)uVar15;
        }
        iVar17 = param_5->ArrayNum;
        if (iVar17 == *piVar1) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&param_5->AllocatorInstance,piVar1);
        }
        uVar16 = (int)pdVar29 + 1;
        pdVar29 = (dtQueryFilter *)(ulonglong)uVar16;
        param_5->ArrayNum = iVar17 + 1;
        puVar23 = puVar23 + 6;
        pFVar11 = (param_5->AllocatorInstance).Data;
        pFVar10 = pFVar11 + (longlong)iVar17 * 0x18;
        *(undefined8 *)pFVar10 = local_1420;
        *(undefined8 *)(pFVar10 + 8) = uStack_1418;
        *(undefined8 *)(pFVar11 + (longlong)iVar17 * 0x18 + 0x10) = local_1410;
      } while ((int)uVar16 < local_1478[0]);
    }
    if (local_1488.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1488.Data);
    }
    dtNavMeshQuery::~dtNavMeshQuery(&local_13b8);
    local_1408 = (dtQuerySpecialLinkFilter)&___7dtQuerySpecialLinkFilter__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1460->ReferenceController);
    bVar14 = true;
  }
  return bVar14;
}

// GetPolyAreaID @ 146e0bb90

uint __thiscall ARecastNavMesh::GetPolyAreaID(ARecastNavMesh *this,ulong64 param_1)

{
  dtNavMesh *this_00;
  uint uVar1;
  uint uVar2;
  dtPoly *local_res8 [2];
  dtMeshTile *local_res18 [2];
  
  if (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) {
    this_00 = this->RecastNavMeshImpl->DetourNavMesh;
    uVar2 = 0;
    if (this_00 != (dtNavMesh *)0x0) {
      uVar1 = dtNavMesh::getTileAndPolyByRef(this_00,param_1,local_res18,local_res8);
      uVar2 = 0;
      if ((uVar1 >> 0x1e & 1) != 0) {
        uVar2 = local_res8[0]->areaAndtype & 0x3f;
      }
    }
    return uVar2;
  }
  return 0x3f;
}

// GetPolyCenter @ 146e0bc30

bool __thiscall
ARecastNavMesh::GetPolyCenter(ARecastNavMesh *this,ulong64 param_1,TVector<double> *param_2)

{
  bool bVar1;
  
  if (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) {
    bVar1 = FPImplRecastNavMesh::GetPolyCenter(this->RecastNavMeshImpl,param_1,param_2);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// GetPolyEdges @ 146e0beb0

bool __thiscall
ARecastNavMesh::GetPolyEdges
          (ARecastNavMesh *this,ulong64 param_1,
          TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *param_2)

{
  byte bVar1;
  byte bVar2;
  dtNavMesh *this_00;
  double *pdVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  dtLink *pdVar13;
  dtMeshTile *pdVar14;
  dtPoly *pdVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  dtPoly *pdStackX_8;
  dtMeshTile *pdStackX_20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  double dStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong64 uStack_38;
  
  if (this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) {
    return false;
  }
  this_00 = this->RecastNavMeshImpl->DetourNavMesh;
  if (this_00 != (dtNavMesh *)0x0) {
    pdStackX_8 = (dtPoly *)0x0;
    pdStackX_20 = (dtMeshTile *)0x0;
    uVar9 = dtNavMesh::getTileAndPolyByRef(this_00,param_1,&pdStackX_20,&pdStackX_8);
    if ((uVar9 >> 0x1e & 1) != 0) {
      uVar9 = pdStackX_8->firstLink;
      bVar1 = pdStackX_8->areaAndtype;
      if (uVar9 != 0xffffffff) {
        uVar19 = (uint)__xmm_80000000000000008000000000000000;
        uVar20 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        pdVar14 = pdStackX_20;
        pdVar15 = pdStackX_8;
        do {
          uVar16 = (uint)pdVar14->header->maxLinkCount;
          if (uVar9 < uVar16) {
            pdVar13 = pdVar14->links + uVar9;
          }
          else {
            pdVar13 = (pdVar14->dynamicLinksO).m_data + (int)(uVar9 - uVar16);
          }
          bVar2 = pdVar13->edge;
          if (bVar2 < pdVar15->vertCount) {
            pdVar3 = pdVar14->verts;
            uVar11 = (ulonglong)pdVar15->verts[bVar2];
            uVar17 = SUB84(pdVar3[uVar11 * 3],0) ^ uVar19;
            uVar18 = (uint)((ulonglong)pdVar3[uVar11 * 3] >> 0x20) ^ uVar20;
            dStack_58 = pdVar3[uVar11 * 3 + 1];
            uVar9 = SUB84(pdVar3[uVar11 * 3 + 2],0) ^ uVar19;
            uVar16 = (uint)((ulonglong)pdVar3[uVar11 * 3 + 2] >> 0x20) ^ uVar20;
            uStack_68 = CONCAT44(uVar18,uVar17);
            uStack_60 = CONCAT44(uVar16,uVar9);
            uStack_40 = dStack_58;
            if (bVar1 < 0x40) {
              uVar11 = (ulonglong)pdVar15->verts[(int)((bVar2 + 1) % (uint)pdVar15->vertCount)];
              pdVar3 = pdVar14->verts;
              uVar9 = SUB84(pdVar3[uVar11 * 3 + 2],0) ^ uVar19;
              uVar16 = (uint)((ulonglong)pdVar3[uVar11 * 3 + 2] >> 0x20) ^ uVar20;
              uStack_40 = pdVar3[uVar11 * 3 + 1];
              uVar17 = SUB84(pdVar3[uVar11 * 3],0) ^ uVar19;
              uVar18 = (uint)((ulonglong)pdVar3[uVar11 * 3] >> 0x20) ^ uVar20;
            }
            uStack_38 = pdVar13->ref;
            pFVar4 = (param_2->AllocatorInstance).Data;
            uStack_50 = CONCAT44(uVar18,uVar17);
            uStack_48 = CONCAT44(uVar16,uVar9);
            if (((pFVar4 <= (FScriptContainerElement *)&uStack_68) &&
                ((FScriptContainerElement *)&uStack_68 < pFVar4 + (longlong)param_2->ArrayMax * 0x38
                )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            iVar10 = param_2->ArrayNum;
            if (iVar10 == param_2->ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x838,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar10 + 1;
            lVar12 = (longlong)iVar10 * 0x38;
            pFVar5 = (param_2->AllocatorInstance).Data;
            *(undefined8 *)(pFVar5 + lVar12) = uStack_68;
            *(undefined8 *)(pFVar5 + lVar12 + 8) = uStack_60;
            *(double *)(pFVar5 + lVar12 + 0x10) = dStack_58;
            *(undefined8 *)(pFVar5 + lVar12 + 0x10 + 8) = uStack_50;
            pFVar4 = pFVar5 + lVar12 + 0x20;
            *(undefined4 *)pFVar4 = (undefined4)uStack_48;
            *(undefined4 *)(pFVar4 + 4) = uStack_48._4_4_;
            *(undefined4 *)(pFVar4 + 8) = (undefined4)uStack_40;
            *(undefined4 *)(pFVar4 + 0xc) = uStack_40._4_4_;
            *(ulong64 *)(pFVar5 + lVar12 + 0x30) = uStack_38;
            pdVar14 = pdStackX_20;
            pdVar15 = pdStackX_8;
          }
          uVar9 = pdVar13->next;
        } while (uVar9 != 0xffffffff);
      }
      return true;
    }
  }
  return false;
}

// GetPolyFlags @ 146e0c130

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
ARecastNavMesh::GetPolyFlags(ARecastNavMesh *this,ulong64 param_1,ushort *param_2,ushort *param_3)

{
  dtNavMesh *this_00;
  uint uVar1;
  UClass *this_01;
  UNavArea *pUVar2;
  dtPoly *local_res8;
  dtMeshTile *local_18 [2];
  
  if ((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) &&
     (this_00 = this->RecastNavMeshImpl->DetourNavMesh, this_00 != (dtNavMesh *)0x0)) {
    uVar1 = dtNavMesh::getTileAndPolyByRef(this_00,param_1,local_18,&local_res8);
    if ((uVar1 >> 0x1e & 1) != 0) {
      *param_2 = local_res8->flags;
      this_01 = ANavigationData::GetAreaClass
                          ((ANavigationData *)this,(uint)(local_res8->areaAndtype & 0x3f));
      if (this_01 != (UClass *)0x0) {
        pUVar2 = UClass::GetDefaultObject<UNavArea>(this_01);
        if (pUVar2 != (UNavArea *)0x0) {
          *param_3 = pUVar2->AreaFlags;
          return true;
        }
      }
      *param_3 = 0;
      return true;
    }
  }
  return false;
}

// GetPolyFlags @ 146e0c1f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
ARecastNavMesh::GetPolyFlags(ARecastNavMesh *this,ulong64 param_1,FNavMeshNodeFlags *param_2)

{
  ushort uVar1;
  dtNavMesh *this_00;
  ushort uVar2;
  uint uVar3;
  UClass *this_01;
  UNavArea *pUVar4;
  byte bVar5;
  dtPoly *local_res8;
  dtMeshTile *local_res20;
  
  if ((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) &&
     (this_00 = this->RecastNavMeshImpl->DetourNavMesh, this_00 != (dtNavMesh *)0x0)) {
    uVar3 = dtNavMesh::getTileAndPolyByRef(this_00,param_1,&local_res20,&local_res8);
    if ((uVar3 >> 0x1e & 1) != 0) {
      uVar1 = local_res8->flags;
      bVar5 = local_res8->areaAndtype & 0x3f;
      param_2->Area = bVar5;
      this_01 = ANavigationData::GetAreaClass((ANavigationData *)this,(uint)bVar5);
      if ((this_01 == (UClass *)0x0) ||
         (pUVar4 = UClass::GetDefaultObject<UNavArea>(this_01), pUVar4 == (UNavArea *)0x0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = pUVar4->AreaFlags;
      }
      param_2->AreaFlags = uVar2;
      param_2->PathFlags = -((NavLinkFlag & uVar1) != 0) & 4;
      return true;
    }
    return false;
  }
  return false;
}

// GetPolyNeighbors @ 146e0c2b0

bool __thiscall
ARecastNavMesh::GetPolyNeighbors
          (ARecastNavMesh *this,ulong64 param_1,
          TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  
  if (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) {
    bVar1 = FPImplRecastNavMesh::GetPolyNeighbors(this->RecastNavMeshImpl,param_1,param_2);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// GetPolyNeighbors @ 146e0c2e0

bool __thiscall
ARecastNavMesh::GetPolyNeighbors
          (ARecastNavMesh *this,ulong64 param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  dtNavMesh *this_00;
  dtLink *pdVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  dtLink *pdVar9;
  dtPoly *local_res8;
  dtMeshTile *local_res20;
  
  if ((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) &&
     (this_00 = this->RecastNavMeshImpl->DetourNavMesh, this_00 != (dtNavMesh *)0x0)) {
    local_res8 = (dtPoly *)0x0;
    local_res20 = (dtMeshTile *)0x0;
    uVar6 = dtNavMesh::getTileAndPolyByRef(this_00,param_1,&local_res20,&local_res8);
    if ((uVar6 >> 0x1e & 1) != 0) {
      piVar1 = &param_2->ArrayMax;
      uVar6 = local_res8->firstLink;
      if (param_2->ArrayMax < 6) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,6,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
      }
      while( true ) {
        if (uVar6 == 0xffffffff) {
          return true;
        }
        uVar8 = (uint)local_res20->header->maxLinkCount;
        if (uVar6 < uVar8) {
          pdVar9 = local_res20->links + uVar6;
        }
        else {
          pdVar9 = (local_res20->dynamicLinksO).m_data + (int)(uVar6 - uVar8);
        }
        pdVar2 = (dtLink *)(param_2->AllocatorInstance).Data;
        uVar6 = pdVar9->next;
        if (((pdVar2 <= pdVar9) && (pdVar9 < (dtLink *)(&pdVar2->ref + *piVar1))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) break;
        iVar7 = param_2->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,piVar1);
          param_2->ArrayNum = iVar7;
        }
        param_2->ArrayNum = iVar7 + 1;
        *(ulong64 *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8) = pdVar9->ref;
      }
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return false;
}

// GetPolySurfaceArea @ 146e0c880

double __thiscall ARecastNavMesh::GetPolySurfaceArea(ARecastNavMesh *this,ulong64 param_1)

{
  ushort *puVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  dtNavMesh *this_00;
  double *pdVar5;
  double dVar6;
  dtPoly *pdVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ushort *puVar13;
  ulonglong uVar14;
  dtMeshTile *pdStackX_8;
  dtPoly *pdStackX_18;
  
  if (this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) {
    return 0.0;
  }
  this_00 = this->RecastNavMeshImpl->DetourNavMesh;
  if (this_00 != (dtNavMesh *)0x0) {
    pdStackX_18 = (dtPoly *)0x0;
    pdStackX_8 = (dtMeshTile *)0x0;
    uVar8 = dtNavMesh::getTileAndPolyByRef(this_00,param_1,&pdStackX_8,&pdStackX_18);
    if ((uVar8 >> 0x1e & 1) != 0) {
      dVar2 = 0.0;
      dVar6 = 0.0;
      uVar14 = (ulonglong)pdStackX_18->vertCount;
      if (2 < uVar14) {
        lVar10 = 2;
        pdVar5 = pdStackX_8->verts;
        if (uVar14 < 6) {
          uVar11 = (ulonglong)pdStackX_18->verts[0];
        }
        else {
          uVar11 = (ulonglong)pdStackX_18->verts[0];
          dVar2 = pdVar5[uVar11 * 3 + 2];
          lVar12 = (uVar14 - 6 >> 2) + 1;
          dVar3 = pdVar5[uVar11 * 3];
          lVar10 = lVar12 * 4 + 2;
          pdVar7 = pdStackX_18;
          do {
            uVar9 = (ulonglong)(ushort)((dtPoly *)(pdVar7->verts + 2))->firstLink;
            dVar6 = dVar6 + ((pdVar5[(ulonglong)pdVar7->verts[1] * 3 + 2] - dVar2) *
                             (pdVar5[uVar9 * 3] - dVar3) -
                            (pdVar5[(ulonglong)pdVar7->verts[1] * 3] - dVar3) *
                            (pdVar5[uVar9 * 3 + 2] - dVar2)) +
                    ((pdVar5[(ulonglong)pdVar7->verts[3] * 3] - dVar3) *
                     (pdVar5[uVar9 * 3 + 2] - dVar2) -
                    (pdVar5[(ulonglong)pdVar7->verts[3] * 3 + 2] - dVar2) *
                    (pdVar5[uVar9 * 3] - dVar3)) +
                    ((pdVar5[(ulonglong)pdVar7->verts[4] * 3] - dVar3) *
                     (pdVar5[(ulonglong)pdVar7->verts[3] * 3 + 2] - dVar2) -
                    (pdVar5[(ulonglong)pdVar7->verts[4] * 3 + 2] - dVar2) *
                    (pdVar5[(ulonglong)pdVar7->verts[3] * 3] - dVar3)) +
                    ((pdVar5[(ulonglong)pdVar7->verts[5] * 3] - dVar3) *
                     (pdVar5[(ulonglong)pdVar7->verts[4] * 3 + 2] - dVar2) -
                    (pdVar5[(ulonglong)pdVar7->verts[5] * 3 + 2] - dVar2) *
                    (pdVar5[(ulonglong)pdVar7->verts[4] * 3] - dVar3));
            lVar12 = lVar12 + -1;
            pdVar7 = (dtPoly *)(pdVar7->verts + 2);
          } while (lVar12 != 0);
          dVar2 = dVar6;
          if ((longlong)uVar14 <= lVar10) {
            return dVar6;
          }
        }
        puVar13 = pdStackX_18->verts + lVar10;
        lVar10 = uVar14 - lVar10;
        dVar6 = dVar2;
        do {
          puVar1 = puVar13 + -1;
          uVar4 = *puVar13;
          puVar13 = puVar13 + 1;
          dVar6 = dVar6 + ((pdVar5[(ulonglong)*puVar1 * 3 + 2] - pdVar5[uVar11 * 3 + 2]) *
                           (pdVar5[(ulonglong)uVar4 * 3] - pdVar5[uVar11 * 3]) -
                          (pdVar5[(ulonglong)uVar4 * 3 + 2] - pdVar5[uVar11 * 3 + 2]) *
                          (pdVar5[(ulonglong)*puVar1 * 3] - pdVar5[uVar11 * 3]));
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      return dVar6;
    }
  }
  return 0.0;
}

// GetPolyTileIndex @ 146e0cb50

bool __thiscall
ARecastNavMesh::GetPolyTileIndex(ARecastNavMesh *this,ulong64 param_1,uint *param_2,uint *param_3)

{
  dtNavMesh *pdVar1;
  byte bVar2;
  
  if (((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) &&
      (pdVar1 = this->RecastNavMeshImpl->DetourNavMesh, pdVar1 != (dtNavMesh *)0x0)) &&
     (param_1 != 0)) {
    bVar2 = (byte)pdVar1->m_polyBits;
    *param_3 = (int)(1L << ((byte)pdVar1->m_tileBits & 0x3f)) - 1U &
               (uint)(param_1 >> (bVar2 & 0x3f));
    *param_2 = (int)(1L << (bVar2 & 0x3f)) - 1U & (uint)param_1;
    return true;
  }
  return false;
}

// GetPolyVerts @ 146e0cd10

bool __thiscall
ARecastNavMesh::GetPolyVerts
          (ARecastNavMesh *this,ulong64 param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  
  if (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) {
    bVar1 = FPImplRecastNavMesh::GetPolyVerts(this->RecastNavMeshImpl,param_1,param_2);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// GetPolyWallSegments @ 146e0cf40

bool __thiscall
ARecastNavMesh::GetPolyWallSegments
          (ARecastNavMesh *this,ulong64 param_1,TSharedPtr<FNavigationQueryFilter_const_,1> *param_2
          ,UObject *param_3,TArray<FNavigationPortalEdge,TSizedDefaultAllocator<32>_> *param_4)

{
  FPImplRecastNavMesh *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  FNavigationQueryFilter *pFVar4;
  
  this_00 = this->RecastNavMeshImpl;
  bVar3 = false;
  if (this_00 != (FPImplRecastNavMesh *)0x0) {
    pFVar4 = param_2->Object;
    pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar4 == (FNavigationQueryFilter *)0x0) {
      pFVar4 = (FNavigationQueryFilter *)this->_padding_;
      pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    bVar3 = FPImplRecastNavMesh::GetPolyWallSegments(this_00,param_1,pFVar4,param_3,param_4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return bVar3;
}

// GetPolysInBox @ 146e0d350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
ARecastNavMesh::GetPolysInBox
          (ARecastNavMesh *this,TBox<double> *param_1,
          TArray<FNavPoly,TSizedDefaultAllocator<32>_> *param_2,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_3,UObject *param_4)

{
  dtQueryFilter *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  dtNavMesh *this_00;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  INavigationQueryFilterInterface *pIVar9;
  FScriptContainerElement *pFVar10;
  ulong64 uVar11;
  code *pcVar12;
  TArray<FNavPoly,TSizedDefaultAllocator<32>_> *pTVar13;
  bool bVar14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  uint uVar18;
  UWorld *pUVar19;
  UClass *pUVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ushort *puVar26;
  FNavigationQueryFilter *pFVar27;
  UNavigationSystemBase *pUVar28;
  dtNavMeshQuery *this_01;
  longlong lVar29;
  longlong lVar30;
  double *pdVar31;
  longlong lVar32;
  ulong64 *puVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auStackY_a08 [32];
  int local_9c8;
  uint local_9c4;
  FSharedReferencer<1> *local_9c0;
  dtPoly *local_9b8;
  double local_9b0;
  double dStack_9a8;
  double local_9a0;
  dtMeshTile *local_998;
  TArray<FNavPoly,TSizedDefaultAllocator<32>_> *local_990;
  UObject *local_988;
  dtQuerySpecialLinkFilter local_980;
  UNavigationSystemBase *local_978;
  FWeakObjectPtr local_970;
  undefined8 local_968;
  double local_960;
  undefined8 local_958;
  undefined8 local_950;
  double local_948;
  double local_940;
  double local_938;
  dtNavMeshQuery local_928;
  ulong64 local_888 [256];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_a08;
  local_9c4 = 0;
  local_990 = param_2;
  if (this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) {
LAB_146e0d8f4:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    return false;
  }
  this_00 = this->RecastNavMeshImpl->DetourNavMesh;
  local_9c0 = &param_3->SharedReferenceCount;
  if (this_00 == (dtNavMesh *)0x0) goto LAB_146e0d8f4;
  pFVar27 = param_3->Object;
  pTVar7 = local_9c0->ReferenceController;
  bVar15 = false;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar27 == (FNavigationQueryFilter *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)this->_padding_;
    pFVar27 = (FNavigationQueryFilter *)this->_padding_;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pUVar19 = AActor::GetWorld((AActor *)this);
  if ((pUVar19 != (UWorld *)0x0) &&
     (pUVar28 = (pUVar19->NavigationSystem).field0_0x0.DebugPtr,
     pUVar28 != (UNavigationSystemBase *)0x0)) {
    pUVar20 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar6 = (int)pUVar20->_padding_;
    if ((iVar6 <= *(int *)(*(longlong *)&pUVar28->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar28->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar20->_padding_)) goto LAB_146e0d449;
  }
  pUVar28 = (UNavigationSystemBase *)0x0;
LAB_146e0d449:
  local_980 = (dtQuerySpecialLinkFilter)&___7FRecastSpeciaLinkFilter__6B_;
  local_978 = pUVar28;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_4);
  }
  local_970.ObjectIndex = 0;
  local_970.ObjectSerialNumber = 0;
  local_988 = param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_4);
  }
  FWeakObjectPtr::operator=(&local_970,(FObjectPtr)&local_988);
  local_968 = 0;
  dtNavMeshQuery::dtNavMeshQuery(&local_928);
  bVar14 = IsInGameThread();
  if (bVar14) {
    this_01 = &this->RecastNavMeshImpl->SharedNavQuery;
  }
  else {
    this_01 = &local_928;
  }
  dtNavMeshQuery::init
            (this_01,this->RecastNavMeshImpl->DetourNavMesh,pFVar27->MaxSearchNodes,&local_980);
  pIVar9 = (pFVar27->QueryFilterImpl).Object;
  if ((pIVar9 == (INavigationQueryFilterInterface *)0x0) ||
     (pdVar1 = (dtQueryFilter *)(pIVar9 + 1), pdVar1 == (dtQueryFilter *)0x0)) {
    bVar14 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6996127874050689151>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                        ,0x87f,"QueryFilter");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      uVar16 = (*pcVar12)();
      return (bool)uVar16;
    }
  }
  else {
    dVar2 = (param_1->Min).field0_0x0._s_0.Z;
    dVar3 = (param_1->Max).field0_0x0._s_0.X;
    dVar4 = (param_1->Max).field0_0x0._s_0.Y;
    dVar35 = (param_1->Min).field0_0x0._s_0.X;
    dVar5 = (param_1->Min).field0_0x0._s_0.Y;
    dVar34 = ((param_1->Max).field0_0x0._s_0.Z - dVar2) * __real_3fe0000000000000;
    dVar36 = __real_4290000000000000;
    if (dVar34 < __real_4290000000000000) {
      dVar36 = (double)this->VerticalDeviationFromGroundCompensation;
      if (dVar36 <= 0.0) {
        dVar36 = 0.0;
      }
      dVar36 = dVar36 + dVar34;
    }
    dVar34 = (dVar3 - dVar35) * __real_bfe0000000000000;
    dVar37 = (dVar4 - dVar5) * __real_bfe0000000000000;
    local_940 = (dVar2 + (param_1->Max).field0_0x0._s_0.Z) * __real_3fe0000000000000;
    local_958 = CONCAT44((uint)((ulonglong)dVar36 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar36,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    local_9c8 = 0;
    local_948 = (dVar35 + dVar3) * __real_bfe0000000000000;
    local_960 = (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar34,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    local_938 = (dVar5 + dVar4) * __real_bfe0000000000000;
    local_950 = CONCAT44((uint)((ulonglong)dVar37 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar37,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    uVar17 = dtNavMeshQuery::queryPolygons
                       (this_01,&local_948,&local_960,pdVar1,local_888,&local_9c8,0x100);
    if ((uVar17 >> 0x1e & 1) != 0) {
      uVar17 = local_990->ArrayNum;
      local_9c4 = uVar17;
      TArray<FNavPoly,TSizedDefaultAllocator<32>_>::AddZeroed(local_990,local_9c8);
      dVar2 = __real_3ff0000000000000;
      if (0 < local_9c8) {
        puVar33 = local_888;
        lVar29 = (longlong)(int)uVar17 << 5;
        do {
          lVar30 = 0;
          uVar18 = dtNavMesh::getTileAndPolyByRef(this_00,*puVar33,&local_998,&local_9b8);
          pTVar13 = local_990;
          if ((uVar18 >> 0x1e & 1) != 0) {
            local_9b0 = 0.0;
            dStack_9a8 = 0.0;
            dVar3 = 0.0;
            local_9a0 = 0.0;
            uVar25 = (ulonglong)local_9b8->vertCount;
            dVar4 = 0.0;
            if (uVar25 < 4) {
              if (uVar25 != 0) {
                pdVar31 = local_998->verts;
                goto LAB_146e0d77b;
              }
            }
            else {
              puVar26 = local_9b8->verts + 1;
              lVar32 = (uVar25 - 4 >> 2) + 1;
              pdVar31 = local_998->verts;
              lVar30 = lVar32 * 4;
              do {
                uVar21 = (ulonglong)puVar26[-1];
                uVar22 = (ulonglong)*puVar26;
                uVar23 = (ulonglong)puVar26[1];
                uVar24 = (ulonglong)puVar26[2];
                puVar26 = puVar26 + 4;
                local_9b0 = ((dVar4 - pdVar31[uVar21 * 3]) - pdVar31[uVar22 * 3]) -
                            pdVar31[uVar23 * 3];
                dStack_9a8 = ((dVar3 - pdVar31[uVar21 * 3 + 2]) - pdVar31[uVar22 * 3 + 2]) -
                             pdVar31[uVar23 * 3 + 2];
                dVar4 = local_9b0 - pdVar31[uVar24 * 3];
                dVar3 = dStack_9a8 - pdVar31[uVar24 * 3 + 2];
                local_9a0 = local_9a0 + pdVar31[uVar21 * 3 + 1] + pdVar31[uVar22 * 3 + 1] +
                            pdVar31[uVar23 * 3 + 1] + pdVar31[uVar24 * 3 + 1];
                lVar32 = lVar32 + -1;
              } while (lVar32 != 0);
              if (lVar30 < (longlong)uVar25) {
LAB_146e0d77b:
                puVar26 = local_9b8->verts + lVar30;
                lVar30 = uVar25 - lVar30;
                do {
                  uVar25 = (ulonglong)*puVar26;
                  puVar26 = puVar26 + 1;
                  dVar4 = dVar4 - pdVar31[uVar25 * 3];
                  dVar3 = dVar3 - pdVar31[uVar25 * 3 + 2];
                  local_9a0 = local_9a0 + pdVar31[uVar25 * 3 + 1];
                  lVar30 = lVar30 + -1;
                } while (lVar30 != 0);
              }
            }
            uVar18 = 0;
            if ((int)uVar17 < local_990->ArrayNum) {
              uVar18 = ~uVar17 >> 0x1f;
            }
            dVar35 = dVar2 / (double)local_9b8->vertCount;
            local_9a0 = local_9a0 * dVar35;
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              uVar16 = (*pcVar12)();
              return (bool)uVar16;
            }
            pFVar10 = (pTVar13->AllocatorInstance).Data;
            uVar11 = *puVar33;
            *(double *)(pFVar10 + lVar29 + 8) = dVar4 * dVar35;
            *(double *)(pFVar10 + lVar29 + 8 + 8) = dVar3 * dVar35;
            *(ulong64 *)(pFVar10 + lVar29) = uVar11;
            *(double *)(pFVar10 + lVar29 + 0x18) = local_9a0;
          }
          uVar17 = uVar17 + 1;
          lVar29 = lVar29 + 0x20;
          puVar33 = puVar33 + 1;
        } while ((int)(uVar17 - local_9c4) < local_9c8);
      }
      bVar15 = true;
    }
  }
  dtNavMeshQuery::~dtNavMeshQuery(&local_928);
  local_980 = (dtQuerySpecialLinkFilter)&___7dtQuerySpecialLinkFilter__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9c0->ReferenceController);
  return bVar15;
}

// GetPolysInTile @ 146e0d930

bool __thiscall
ARecastNavMesh::GetPolysInTile
          (ARecastNavMesh *this,int param_1,TArray<FNavPoly,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_28;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_18;
  
  if ((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) && (param_1 != -1)) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    local_28.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,1,0,&local_28.AllocatorInstance,1,&local_28.ArrayMax);
    *(int *)local_28.AllocatorInstance.Data = param_1;
    FNavTileRef::DeprecatedMakeTileRefsFromTileIds(this->RecastNavMeshImpl,&local_28,&local_18);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    if (local_18.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = GetPolysInTile(this,(FNavTileRef)*(ulong64 *)local_18.AllocatorInstance.Data,param_2);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    return bVar2;
  }
  return false;
}

// GetPolysInTile @ 146e0da70

bool __thiscall
ARecastNavMesh::GetPolysInTile
          (ARecastNavMesh *this,FNavTileRef param_1,
          TArray<FNavPoly,TSizedDefaultAllocator<32>_> *param_2)

{
  ushort uVar1;
  uint uVar2;
  dtNavMesh *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  byte bVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  ushort uVar10;
  dtMeshTile *pdVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ushort *puVar18;
  longlong lVar19;
  dtPoly *pdVar20;
  longlong lVar21;
  double *pdVar22;
  longlong lVar23;
  uint uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong local_98;
  
  if ((((this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) ||
       (this_00 = this->RecastNavMeshImpl->DetourNavMesh, this_00 == (dtNavMesh *)0x0)) ||
      (this_00->m_tileWidth <= 0.0)) || ((this_00->m_tileHeight <= 0.0 || (param_1.TileRef == 0))))
  {
    return false;
  }
  pdVar11 = dtNavMesh::getTileByRef(this_00,param_1.TileRef);
  if ((pdVar11 == (dtMeshTile *)0x0) || (pdVar11->header == (dtMeshHeader *)0x0)) {
    uVar10 = 0;
  }
  else {
    uVar1 = pdVar11->header->offMeshBase;
    local_98 = (ulonglong)uVar1;
    uVar10 = uVar1;
    if (uVar1 != 0) {
      uVar2 = param_2->ArrayNum;
      TArray<FNavPoly,TSizedDefaultAllocator<32>_>::AddZeroed(param_2,(uint)uVar1);
      dVar7 = __real_3ff0000000000000;
      pdVar20 = pdVar11->polys;
      uVar10 = 0;
      if (uVar1 != 0) {
        lVar23 = (longlong)(int)uVar2 << 5;
        uVar24 = uVar2;
        do {
          uVar16 = (ulonglong)pdVar20->vertCount;
          lVar21 = 0;
          dVar25 = 0.0;
          dVar26 = 0.0;
          dVar27 = 0.0;
          if (uVar16 < 4) {
            if (uVar16 != 0) {
              pdVar22 = pdVar11->verts;
              goto LAB_146e0dc51;
            }
          }
          else {
            pdVar22 = pdVar11->verts;
            puVar18 = pdVar20->verts + 1;
            lVar19 = (uVar16 - 4 >> 2) + 1;
            lVar21 = lVar19 * 4;
            do {
              uVar12 = (ulonglong)puVar18[-1];
              uVar13 = (ulonglong)*puVar18;
              uVar14 = (ulonglong)puVar18[1];
              uVar15 = (ulonglong)puVar18[2];
              puVar18 = puVar18 + 4;
              dVar25 = (((dVar25 - pdVar22[uVar12 * 3]) - pdVar22[uVar13 * 3]) - pdVar22[uVar14 * 3]
                       ) - pdVar22[uVar15 * 3];
              dVar26 = (((dVar26 - pdVar22[uVar12 * 3 + 2]) - pdVar22[uVar13 * 3 + 2]) -
                       pdVar22[uVar14 * 3 + 2]) - pdVar22[uVar15 * 3 + 2];
              dVar27 = dVar27 + pdVar22[uVar12 * 3 + 1] + pdVar22[uVar13 * 3 + 1] +
                       pdVar22[uVar14 * 3 + 1] + pdVar22[uVar15 * 3 + 1];
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            if (lVar21 < (longlong)uVar16) {
LAB_146e0dc51:
              puVar18 = pdVar20->verts + lVar21;
              lVar21 = uVar16 - lVar21;
              do {
                uVar16 = (ulonglong)*puVar18;
                puVar18 = puVar18 + 1;
                dVar25 = dVar25 - pdVar22[uVar16 * 3];
                dVar26 = dVar26 - pdVar22[uVar16 * 3 + 2];
                dVar27 = dVar27 + pdVar22[uVar16 * 3 + 1];
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
            }
          }
          uVar17 = 0;
          if ((int)uVar24 < param_2->ArrayNum) {
            uVar17 = ~uVar24 >> 0x1f;
          }
          dVar5 = dVar7 / (double)pdVar20->vertCount;
          if ((uVar17 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          lVar21 = (longlong)pdVar11 - (longlong)this_00->m_tiles;
          pdVar20 = pdVar20 + 1;
          bVar6 = (byte)this_00->m_polyBits;
          pFVar3 = (param_2->AllocatorInstance).Data;
          lVar21 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar21),8) + lVar21;
          uVar17 = uVar24 - uVar2;
          uVar24 = uVar24 + 1;
          *(ulonglong *)(pFVar3 + lVar23) =
               (ulonglong)pdVar11->salt << ((char)this_00->m_tileBits + bVar6 & 0x3f) |
               (ulonglong)(uint)((int)(lVar21 >> 7) - (int)(lVar21 >> 0x3f)) << (bVar6 & 0x3f) |
               (ulonglong)uVar17;
          *(double *)(pFVar3 + lVar23 + 8) = dVar5 * dVar25;
          *(double *)(pFVar3 + lVar23 + 0x10) = dVar5 * dVar26;
          *(double *)(pFVar3 + lVar23 + 0x18) = dVar5 * dVar27;
          lVar23 = lVar23 + 0x20;
          local_98 = local_98 - 1;
          uVar10 = uVar1;
        } while (local_98 != 0);
      }
    }
  }
  return uVar10 != 0;
}

// GetPolysWithinPathingDistance @ 146e0e170

bool __thiscall
ARecastNavMesh::GetPolysWithinPathingDistance
          (ARecastNavMesh *this,TVector<double> *param_1,double param_2,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_3,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,UObject *param_5,
          FRecastDebugPathfindingData *param_6)

{
  FPImplRecastNavMesh *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  FNavigationQueryFilter *pFVar4;
  
  this_00 = this->RecastNavMeshImpl;
  if (this_00 != (FPImplRecastNavMesh *)0x0) {
    pFVar4 = param_4->Object;
    pTVar1 = (param_4->SharedReferenceCount).ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar4 == (FNavigationQueryFilter *)0x0) {
      pFVar4 = (FNavigationQueryFilter *)this->_padding_;
      pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    bVar3 = FPImplRecastNavMesh::GetPolysWithinPathingDistance
                      (this_00,param_1,param_2,pFVar4,param_5,param_3,param_6);
    if (bVar3) {
      bVar3 = true;
      goto LAB_146e0e22d;
    }
  }
  bVar3 = false;
LAB_146e0e22d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return bVar3;
}

// GetPrivateStaticClass @ 146e0e840

UClass * __cdecl ARecastNavMesh::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ARecastNavMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"RecastNavMesh",
               &Z_Registration_Info_UClass_ARecastNavMesh.InnerSingleton,
               StaticRegisterNativesARecastNavMesh,0x770,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<ARecastNavMesh>,InternalVTableHelperCtorCaller<ARecastNavMesh>,
               local_res8,ANavigationData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ARecastNavMesh.InnerSingleton;
}

// GetRandomPoint @ 146e0ecc0

FNavLocation * __thiscall
ARecastNavMesh::GetRandomPoint
          (ARecastNavMesh *this,FNavLocation *__return_storage_ptr__,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_1,UObject *param_2)

{
  FPImplRecastNavMesh *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  double dVar3;
  double dVar4;
  ulong64 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FNavLocation *pFVar8;
  FNavigationQueryFilter *pFVar9;
  FNavLocation local_38;
  
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this_00 = this->RecastNavMeshImpl;
  __return_storage_ptr__->NodeRef = 0;
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = (double)uVar6;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = (double)uVar7;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (this_00 != (FPImplRecastNavMesh *)0x0) {
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar9 = param_1->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar9 == (FNavigationQueryFilter *)0x0) {
      pFVar9 = (FNavigationQueryFilter *)this->_padding_;
      pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    pFVar8 = FPImplRecastNavMesh::GetRandomPoint(this_00,&local_38,pFVar9,param_2);
    dVar3 = (pFVar8->Location).field0_0x0._s_0.Y;
    dVar4 = (pFVar8->Location).field0_0x0._s_0.Z;
    uVar5 = pFVar8->NodeRef;
    (__return_storage_ptr__->Location).field0_0x0._s_0.X = (pFVar8->Location).field0_0x0._s_0.X;
    (__return_storage_ptr__->Location).field0_0x0._s_0.Y = dVar3;
    (__return_storage_ptr__->Location).field0_0x0._s_0.Z = dVar4;
    __return_storage_ptr__->NodeRef = uVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetRandomPointInCluster @ 146e0efb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
ARecastNavMesh::GetRandomPointInCluster(ARecastNavMesh *this,ulong64 param_1,FNavLocation *param_2)

{
  FPImplRecastNavMesh *pFVar1;
  bool bVar2;
  uint uVar3;
  dtNavMeshQuery *this_00;
  uint uVar4;
  undefined1 auStackY_118 [32];
  ulong64 local_e8 [2];
  dtNavMeshQuery local_d8;
  double local_38;
  double local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pFVar1 = this->RecastNavMeshImpl;
  if (((pFVar1 != (FPImplRecastNavMesh *)0x0) && (pFVar1->DetourNavMesh != (dtNavMesh *)0x0)) &&
     (param_1 != 0)) {
    dtNavMeshQuery::dtNavMeshQuery(&local_d8);
    bVar2 = IsInGameThread();
    this_00 = &pFVar1->SharedNavQuery;
    if (!bVar2) {
      this_00 = &local_d8;
    }
    dtNavMeshQuery::init(this_00,pFVar1->DetourNavMesh,0x800,(dtQuerySpecialLinkFilter *)0x0);
    uVar3 = dtNavMeshQuery::findRandomPointInCluster
                      (this_00,param_1,FGenericPlatformMath::FRand,local_e8,&local_38);
    if ((uVar3 >> 0x1e & 1) != 0) {
      uVar3 = (uint)local_28 ^ (uint)__xmm_80000000000000008000000000000000;
      uVar4 = (uint)((ulonglong)local_28 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      (param_2->Location).field0_0x0._s_0.X =
           (double)CONCAT44((uint)((ulonglong)local_38 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(local_38,0) ^ (uint)__xmm_80000000000000008000000000000000);
      (param_2->Location).field0_0x0._s_0.Y = (double)CONCAT44(uVar4,uVar3);
      (param_2->Location).field0_0x0._s_0.Z = local_30;
      param_2->NodeRef = local_e8[0];
      dtNavMeshQuery::~dtNavMeshQuery(&local_d8);
      return true;
    }
    dtNavMeshQuery::~dtNavMeshQuery(&local_d8);
  }
  return false;
}

// GetRandomPointInNavigableRadius @ 146e0f210

bool __thiscall
ARecastNavMesh::GetRandomPointInNavigableRadius
          (ARecastNavMesh *this,TVector<double> *param_1,float param_2,FNavLocation *param_3,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,UObject *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong64 uVar3;
  float fVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  double dVar14;
  double dVar15;
  double dVar16;
  TArray<FNavPoly,TSizedDefaultAllocator<32>_> local_168;
  TVector<double>_u_0 local_158;
  FNavigationQueryFilter *local_140;
  TReferenceControllerBase<1> *local_138;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_130;
  longlong local_120;
  longlong lStack_118;
  undefined8 local_110;
  double local_108;
  double local_100;
  double local_f8;
  TVector<double>_u_0 local_f0;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_80;
  
  local_a8 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
  uStack_ac = FNavigationSystem::InvalidLocation.field0_0x0._12_4_;
  uStack_b0 = FNavigationSystem::InvalidLocation.field0_0x0._8_4_;
  uStack_b4 = FNavigationSystem::InvalidLocation.field0_0x0._4_4_;
  local_b8 = FNavigationSystem::InvalidLocation.field0_0x0._0_4_;
  local_120 = this->_padding_;
  lStack_118 = this->_padding_;
  local_110 = __real_47eff933c0000000;
  *(undefined4 *)&(param_3->Location).field0_0x0 =
       FNavigationSystem::InvalidLocation.field0_0x0._0_4_;
  *(undefined4 *)((longlong)&(param_3->Location).field0_0x0 + 4) = uStack_b4;
  *(undefined4 *)((longlong)&(param_3->Location).field0_0x0 + 8) = uStack_b0;
  *(undefined4 *)((longlong)&(param_3->Location).field0_0x0 + 0xc) = uStack_ac;
  uStack_a0 = 0;
  (param_3->Location).field0_0x0._s_0.Z = local_a8;
  param_3->NodeRef = 0;
  rand();
  uVar8 = rand();
  uVar9 = rand();
  fVar4 = __real_38000100;
  fVar13 = ((float)(uVar9 & 0x7fff) + (float)(uVar8 & 0x7fff)) * __real_38000100;
  dVar14 = (double)fVar13;
  if (__real_3f800000 < fVar13) {
    dVar14 = __real_4000000000000000 - dVar14;
  }
  dVar15 = (double)param_2;
  __libm_sse2_sincos_();
  pcVar1 = *(code **)(this->_padding_ + 0x18);
  local_140 = param_4->Object;
  local_100 = extraout_XMM0_Qa * dVar15 * dVar14 + (param_1->field0_0x0)._s_0.Y;
  local_138 = (param_4->SharedReferenceCount).ReferenceController;
  local_108 = extraout_XMM0_Qb * dVar15 * dVar14 + (param_1->field0_0x0)._s_0.X;
  local_f8 = (param_1->field0_0x0)._s_0.Z;
  if (local_138 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_138->SharedReferenceCount = (atomic<int>)((int)local_138->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(&this->_padding_,&local_108,param_3,&local_120,&local_140,0);
  if ((param_3->NodeRef == 0) && (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0)) {
    local_d0 = (param_1->field0_0x0)._s_0.Y;
    local_130.Object = param_4->Object;
    local_f0._s_0.Y = local_d0 - dVar15;
    local_f0._s_0.X = (param_1->field0_0x0)._s_0.X - dVar15;
    local_130.SharedReferenceCount.ReferenceController =
         (param_4->SharedReferenceCount).ReferenceController;
    local_d0 = local_d0 + dVar15;
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0._s_0.Z = __real_c290000000000000;
    local_c8 = __real_4290000000000000;
    local_168.ArrayNum = 0;
    local_168.ArrayMax = 0;
    local_c0 = 1;
    local_d8 = dVar15 + (param_1->field0_0x0)._s_0.X;
    if (local_130.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_130.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_130.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    GetPolysInBox(this,(TBox<double> *)&local_f0._s_0,&local_168,&local_130,param_5);
    iVar11 = local_168.ArrayNum;
    while (0 < iVar11) {
      uVar8 = rand();
      uVar9 = (uint)((float)(uVar8 & 0x7fff) * (float)iVar11 * fVar4);
      uVar8 = iVar11 - 1U;
      if ((int)uVar9 < (int)(iVar11 - 1U)) {
        uVar8 = uVar9;
      }
      uVar9 = 0;
      if ((int)uVar8 < local_168.ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return (bool)uVar7;
      }
      FVar5.Data = local_168.AllocatorInstance.Data;
      local_158._s_0.Z = 0.0;
      lVar12 = (longlong)(int)uVar8 * 0x20;
      local_158._s_0.X = 0.0;
      local_158._s_0.Y = 0.0;
      bVar6 = FPImplRecastNavMesh::GetClosestPointOnPoly
                        (this->RecastNavMeshImpl,
                         *(ulong64 *)(local_168.AllocatorInstance.Data + lVar12),param_1,
                         (TVector<double> *)&local_158._s_0);
      if (bVar6) {
        dVar15 = (param_1->field0_0x0)._s_0.X - local_158._s_0.X;
        dVar16 = (param_1->field0_0x0)._s_0.Y - local_158._s_0.Y;
        dVar14 = (param_1->field0_0x0)._s_0.Z - local_158._s_0.Z;
        if (dVar16 * dVar16 + dVar15 * dVar15 + dVar14 * dVar14 < (double)(param_2 * param_2)) {
          uVar2 = *(undefined8 *)(FVar5.Data + lVar12);
          (param_3->Location).field0_0x0._s_0.X = local_158._s_0.X;
          *(undefined4 *)((longlong)&(param_3->Location).field0_0x0 + 8) = local_158._8_4_;
          *(undefined4 *)((longlong)&(param_3->Location).field0_0x0 + 0xc) = local_158._12_4_;
          uStack_80._0_4_ = (undefined4)uVar2;
          uStack_80._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          *(undefined4 *)((longlong)&(param_3->Location).field0_0x0 + 0x10) = local_158._16_4_;
          *(undefined4 *)((longlong)&(param_3->Location).field0_0x0 + 0x14) = local_158._20_4_;
          *(undefined4 *)&param_3->NodeRef = (undefined4)uStack_80;
          *(undefined4 *)((longlong)&param_3->NodeRef + 4) = uStack_80._4_4_;
          uStack_80 = uVar2;
          break;
        }
      }
      uVar9 = 0;
      if ((int)uVar8 < local_168.ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          uVar7 = (*pcVar1)();
          return (bool)uVar7;
        }
      }
      iVar10 = (local_168.ArrayNum - uVar8) + -1;
      if (1 < iVar10) {
        iVar10 = 1;
      }
      iVar11 = local_168.ArrayNum;
      if (iVar10 != 0) {
        memmove(local_168.AllocatorInstance.Data + lVar12,
                local_168.AllocatorInstance.Data + (longlong)(local_168.ArrayNum - iVar10) * 0x20,
                (longlong)iVar10 << 5);
        iVar11 = local_168.ArrayNum;
      }
      iVar11 = iVar11 + -1;
      local_168.ArrayNum = iVar11;
    }
    if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.AllocatorInstance.Data);
    }
  }
  uVar3 = param_3->NodeRef;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return uVar3 != 0;
}

// GetRandomPointInPoly @ 146e0f6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
ARecastNavMesh::GetRandomPointInPoly(ARecastNavMesh *this,ulong64 param_1,TVector<double> *param_2)

{
  FPImplRecastNavMesh *pFVar1;
  bool bVar2;
  uint uVar3;
  dtNavMeshQuery *this_00;
  uint uVar4;
  undefined1 auStack_f8 [32];
  dtNavMeshQuery local_d8;
  double local_38;
  double local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar1 = this->RecastNavMeshImpl;
  if ((pFVar1 != (FPImplRecastNavMesh *)0x0) && (pFVar1->DetourNavMesh != (dtNavMesh *)0x0)) {
    dtNavMeshQuery::dtNavMeshQuery(&local_d8);
    bVar2 = IsInGameThread();
    this_00 = &pFVar1->SharedNavQuery;
    if (!bVar2) {
      this_00 = &local_d8;
    }
    dtNavMeshQuery::init(this_00,pFVar1->DetourNavMesh,0x800,(dtQuerySpecialLinkFilter *)0x0);
    uVar3 = dtNavMeshQuery::findRandomPointInPoly
                      (this_00,param_1,FGenericPlatformMath::FRand,&local_38);
    if ((uVar3 >> 0x1e & 1) != 0) {
      uVar3 = (uint)local_28 ^ (uint)__xmm_80000000000000008000000000000000;
      uVar4 = (uint)((ulonglong)local_28 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      (param_2->field0_0x0)._s_0.X =
           (double)CONCAT44((uint)((ulonglong)local_38 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(local_38,0) ^ (uint)__xmm_80000000000000008000000000000000);
      (param_2->field0_0x0)._s_0.Y = (double)CONCAT44(uVar4,uVar3);
      (param_2->field0_0x0)._s_0.Z = local_30;
      dtNavMeshQuery::~dtNavMeshQuery(&local_d8);
      return true;
    }
    dtNavMeshQuery::~dtNavMeshQuery(&local_d8);
  }
  return false;
}

// GetRandomReachablePointInRadius @ 146e0f8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
ARecastNavMesh::GetRandomReachablePointInRadius
          (ARecastNavMesh *this,TVector<double> *param_1,float param_2,FNavLocation *param_3,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,UObject *param_5)

{
  undefined8 uVar1;
  int iVar2;
  UNavigationSystemBase *pUVar3;
  INavigationQueryFilterInterface *pIVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  FNavigationQueryFilter *pFVar9;
  ulong64 uVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  UWorld *pUVar14;
  UClass *pUVar15;
  dtQueryFilter *pdVar16;
  dtNavMeshQuery *this_00;
  uint uVar17;
  uint uVar18;
  undefined1 auStackY_218 [32];
  FNavigationQueryFilter *local_1d8;
  dtQuerySpecialLinkFilter local_1d0;
  UNavigationSystemBase *local_1c8;
  FWeakObjectPtr local_1c0;
  undefined8 local_1b8;
  UObject *local_1b0;
  ulong64 local_1a8;
  double local_1a0;
  double local_198;
  undefined8 local_190;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_188;
  double local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_148;
  undefined8 uStack_128;
  dtNavMeshQuery local_118;
  double local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if (((this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) ||
      (this->RecastNavMeshImpl->DetourNavMesh == (dtNavMesh *)0x0)) || (param_2 < 0.0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->SharedReferenceCount).ReferenceController);
    return false;
  }
  local_188.Object = param_4->Object;
  local_188.SharedReferenceCount.ReferenceController =
       (param_4->SharedReferenceCount).ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1d8 = GetRightFilterRef(this,&local_188);
  pUVar14 = AActor::GetWorld((AActor *)this);
  if ((pUVar14 != (UWorld *)0x0) &&
     (pUVar3 = (pUVar14->NavigationSystem).field0_0x0.DebugPtr,
     pUVar3 != (UNavigationSystemBase *)0x0)) {
    pUVar15 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar2 = (int)pUVar15->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       (local_1c8 = pUVar3,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
       &pUVar15->_padding_)) goto LAB_146e0f9d1;
  }
  local_1c8 = (UNavigationSystemBase *)0x0;
LAB_146e0f9d1:
  local_1d0 = (dtQuerySpecialLinkFilter)&___7FRecastSpeciaLinkFilter__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_5);
  }
  local_1c0.ObjectIndex = 0;
  local_1c0.ObjectSerialNumber = 0;
  local_1b0 = param_5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_5);
  }
  FWeakObjectPtr::operator=(&local_1c0,(FObjectPtr)&local_1b0);
  local_1b8 = 0;
  dtNavMeshQuery::dtNavMeshQuery(&local_118);
  bVar11 = IsInGameThread();
  pFVar9 = local_1d8;
  this_00 = &local_118;
  if (bVar11) {
    this_00 = &this->RecastNavMeshImpl->SharedNavQuery;
  }
  dtNavMeshQuery::init
            (this_00,this->RecastNavMeshImpl->DetourNavMesh,local_1d8->MaxSearchNodes,&local_1d0);
  pIVar4 = (pFVar9->QueryFilterImpl).Object;
  if ((pIVar4 == (INavigationQueryFilterInterface *)0x0) ||
     (pdVar16 = (dtQueryFilter *)(pIVar4 + 1), pdVar16 == (dtQueryFilter *)0x0)) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6996127874050688771>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                        ,0x703,"QueryFilter");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      uVar12 = (*pcVar5)();
      return (bool)uVar12;
    }
  }
  else {
    uVar17 = (uint)__xmm_80000000000000008000000000000000;
    uVar18 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_178 = (double)CONCAT44((uint)((ulonglong)this->_padding_ >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 (uint)this->_padding_ &
                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    local_170 = __real_47eff933c0000000;
    local_168 = CONCAT44((uint)((ulonglong)this->_padding_ >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)this->_padding_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    local_1a0 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) ^
                                 uVar18,(uint)*(undefined8 *)&param_1->field0_0x0 ^ uVar17);
    local_198 = (param_1->field0_0x0)._s_0.Z;
    local_190 = CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar18,(uint)uVar1 ^ uVar17);
    local_1d8 = (FNavigationQueryFilter *)0x0;
    dtNavMeshQuery::findNearestPoly
              (this_00,&local_1a0,&local_178,pdVar16,(ulong64 *)&local_1d8,(double *)0x0,
               (double *)0x0);
    if ((local_1d8 != (FNavigationQueryFilter *)0x0) &&
       (uVar13 = dtNavMeshQuery::findRandomPointAroundCircle
                           (this_00,(ulong64)local_1d8,&local_1a0,(double)param_2,pdVar16,
                            FGenericPlatformMath::FRand,&local_1a8,&local_78),
       (uVar13 >> 0x1e & 1) != 0)) {
      uStack_148 = local_1a8;
      uVar10 = uStack_148;
      uStack_148._0_4_ = (undefined4)local_1a8;
      uStack_148._4_4_ = (undefined4)(local_1a8 >> 0x20);
      *(uint *)&(param_3->Location).field0_0x0 = SUB84(local_78,0) ^ uVar17;
      *(uint *)((longlong)&(param_3->Location).field0_0x0 + 4) =
           (uint)((ulonglong)local_78 >> 0x20) ^ uVar18;
      *(uint *)((longlong)&(param_3->Location).field0_0x0 + 8) = (uint)local_68 ^ uVar17;
      *(uint *)((longlong)&(param_3->Location).field0_0x0 + 0xc) =
           (uint)((ulonglong)local_68 >> 0x20) ^ uVar18;
      *(undefined4 *)((longlong)&(param_3->Location).field0_0x0 + 0x10) = local_70;
      *(undefined4 *)((longlong)&(param_3->Location).field0_0x0 + 0x14) = uStack_6c;
      *(undefined4 *)&param_3->NodeRef = (undefined4)uStack_148;
      *(undefined4 *)((longlong)&param_3->NodeRef + 4) = uStack_148._4_4_;
      uStack_148 = uVar10;
      dtNavMeshQuery::~dtNavMeshQuery(&local_118);
      local_1d0 = (dtQuerySpecialLinkFilter)&___7dtQuerySpecialLinkFilter__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_4->SharedReferenceCount).ReferenceController);
      return true;
    }
    dVar8 = (param_1->field0_0x0)._s_0.Y;
    uStack_128 = local_1d8;
    pFVar9 = uStack_128;
    uVar6 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x10);
    uVar7 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x14);
    (param_3->Location).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (param_3->Location).field0_0x0._s_0.Y = dVar8;
    uStack_128._0_4_ = SUB84(local_1d8,0);
    uStack_128._4_4_ = (undefined4)((ulonglong)local_1d8 >> 0x20);
    *(undefined4 *)((longlong)&(param_3->Location).field0_0x0 + 0x10) = uVar6;
    *(undefined4 *)((longlong)&(param_3->Location).field0_0x0 + 0x14) = uVar7;
    *(undefined4 *)&param_3->NodeRef = (undefined4)uStack_128;
    *(undefined4 *)((longlong)&param_3->NodeRef + 4) = uStack_128._4_4_;
    uStack_128 = pFVar9;
  }
  dtNavMeshQuery::~dtNavMeshQuery(&local_118);
  local_1d0 = (dtQuerySpecialLinkFilter)&___7dtQuerySpecialLinkFilter__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return false;
}

// GetRecastMesh @ 146e0fcc0

dtNavMesh * __thiscall ARecastNavMesh::GetRecastMesh(ARecastNavMesh *this)

{
  if (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) {
    return this->RecastNavMeshImpl->DetourNavMesh;
  }
  return (dtNavMesh *)0x0;
}

// GetRecastMesh @ 146e0fce0

dtNavMesh * __thiscall ARecastNavMesh::GetRecastMesh(ARecastNavMesh *this)

{
  if (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) {
    return this->RecastNavMeshImpl->DetourNavMesh;
  }
  return (dtNavMesh *)0x0;
}

// GetRightFilterRef @ 146e0fd00

FNavigationQueryFilter * __thiscall
ARecastNavMesh::GetRightFilterRef
          (ARecastNavMesh *this,TSharedPtr<FNavigationQueryFilter_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNavigationQueryFilter *pFVar2;
  
  pFVar2 = param_1->Object;
  if (pFVar2 == (FNavigationQueryFilter *)0x0) {
    pFVar2 = (FNavigationQueryFilter *)this->_padding_;
    pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pFVar2;
}

// GetTileCacheLayers @ 146e11440

TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> * __thiscall
ARecastNavMesh::GetTileCacheLayers
          (ARecastNavMesh *this,
          TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1,
          int param_2)

{
  int *piVar1;
  int iVar2;
  FNavMeshTileData *pFVar3;
  TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TIntPoint<int> TVar5;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  if (this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  TVar5.field0_0x0._s_0.Y = param_2;
  TVar5.field0_0x0._s_0.X = param_1;
  pTVar4 = TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   *)&this->RecastNavMeshImpl->CompressedTileCacheLayers,TVar5);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  if (pTVar4 == (TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar2 = *(int *)&pTVar4->field_0x10;
    pFVar3 = *(FNavMeshTileData **)&pTVar4->field_0x8;
    __return_storage_ptr__->ArrayNum = iVar2;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,piVar1);
      ConstructItems<FNavMeshTileData,FNavMeshTileData,int>
                ((__return_storage_ptr__->AllocatorInstance).Data,pFVar3,iVar2);
      return __return_storage_ptr__;
    }
  }
  *piVar1 = 0;
  return __return_storage_ptr__;
}

// GetTilePolyEdgesForFilter @ 146e11d50

void __thiscall
ARecastNavMesh::GetTilePolyEdgesForFilter
          (ARecastNavMesh *this,FNavTileRef param_1,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_2,
          TArray<FNavigationWallEdge,TSizedDefaultAllocator<32>_> *param_3)

{
  dtNavMesh *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FPImplRecastNavMesh *this_01;
  TReferenceControllerBase<1> *pTVar2;
  dtMeshTile *pdVar3;
  FNavigationQueryFilter *pFVar4;
  
  if (((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) &&
      (this_00 = this->RecastNavMeshImpl->DetourNavMesh, this_00 != (dtNavMesh *)0x0)) &&
     (pdVar3 = dtNavMesh::getTileByRef(this_00,param_1.TileRef), pdVar3 != (dtMeshTile *)0x0)) {
    pFVar4 = param_2->Object;
    pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
    this_01 = this->RecastNavMeshImpl;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar4 == (FNavigationQueryFilter *)0x0) {
      pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
      pFVar4 = (FNavigationQueryFilter *)this->_padding_;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FPImplRecastNavMesh::GetTilePolyEdgesForFilter(this_01,pdVar3,pFVar4,param_3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// GetTileSizeUU @ 146e123e0

float __thiscall ARecastNavMesh::GetTileSizeUU(ARecastNavMesh *this)

{
  float fVar1;
  undefined1 auVar2 [16];
  
  fVar1 = this->NavMeshResolutionParams[1].CellSize;
  auVar2 = ZEXT416((uint)(this->TileSizeUU / fVar1));
  auVar2 = roundps(auVar2,auVar2,3);
  return auVar2._0_4_ * fVar1;
}

// HasCompleteDataAroundSegment @ 146e13d30

bool __thiscall
ARecastNavMesh::HasCompleteDataAroundSegment
          (ARecastNavMesh *this,TVector<double> *param_1,TVector<double> *param_2,double param_3)

{
  double dVar1;
  dtNavMesh *this_00;
  undefined1 auVar2 [16];
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  dtNavMeshParams *pdVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 local_1e8 [16];
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  TVector<double>_u_0 TStack_1d0;
  undefined8 local_1b8;
  FRcTileBox local_1b0;
  TVector<double>_u_0 local_1a0;
  TVector2<double>_u_0 local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double local_160;
  double dStack_158;
  undefined1 local_150 [16];
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_d8;
  uchar auStack_d7 [7];
  
  if ((((this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) ||
       (this_00 = this->RecastNavMeshImpl->DetourNavMesh, this_00 == (dtNavMesh *)0x0)) ||
      (this_00->m_tileWidth <= 0.0)) || (this_00->m_tileHeight <= 0.0)) {
LAB_146e1404e:
    bVar8 = false;
  }
  else {
    pdVar9 = dtNavMesh::getParams(this_00);
    auVar26 = *(undefined1 (*) [16])&param_1->field0_0x0;
    uVar17 = auVar26._0_4_;
    uVar18 = auVar26._4_4_;
    uVar23 = auVar26._8_4_;
    uVar24 = auVar26._12_4_;
    local_d8 = 1;
    fVar25 = this->NavMeshResolutionParams[1].CellSize;
    auVar16 = ZEXT416((uint)fVar25);
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    uVar27 = SUB84(dVar1,0);
    uVar28 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar13 = *(double *)&param_2->field0_0x0;
    uVar19 = uVar17;
    uVar20 = uVar18;
    if (dVar13 <= auVar26._0_8_) {
      uVar19 = SUB84(dVar13,0);
      uVar20 = (undefined4)((ulonglong)dVar13 >> 0x20);
    }
    dVar13 = *(double *)((longlong)&param_2->field0_0x0 + 8);
    uVar21 = uVar23;
    uVar22 = uVar24;
    if (auVar26._8_8_ <= dVar13) {
      uVar21 = SUB84(dVar13,0);
      uVar22 = (undefined4)((ulonglong)dVar13 >> 0x20);
    }
    dVar13 = *(double *)&param_2->field0_0x0;
    if (auVar26._0_8_ <= dVar13) {
      uVar17 = SUB84(dVar13,0);
      uVar18 = (undefined4)((ulonglong)dVar13 >> 0x20);
    }
    dVar13 = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
    local_1d8 = uVar27;
    uStack_1d4 = uVar28;
    if (dVar13 <= dVar1) {
      local_1d8 = SUB84(dVar13,0);
      uStack_1d4 = (undefined4)((ulonglong)dVar13 >> 0x20);
    }
    dVar13 = *(double *)((longlong)&param_2->field0_0x0 + 8);
    if (dVar13 <= auVar26._8_8_) {
      uVar23 = SUB84(dVar13,0);
      uVar24 = (undefined4)((ulonglong)dVar13 >> 0x20);
    }
    dVar13 = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
    if (dVar1 <= dVar13) {
      uVar27 = SUB84(dVar13,0);
      uVar28 = (undefined4)((ulonglong)dVar13 >> 0x20);
    }
    auVar26 = roundps(unaff_XMM8,ZEXT416((uint)(this->TileSizeUU / fVar25)),3);
    local_1a0._s_0.X = pdVar9->orig[0];
    local_1a0._s_0.Y = pdVar9->orig[1];
    TStack_1d0._s_0.X = (double)CONCAT44(uVar18,uVar17) + param_3;
    fVar25 = auVar26._0_4_ * fVar25;
    local_1a0._s_0.Z = pdVar9->orig[2];
    dVar13 = (double)CONCAT44(uVar24,uVar23) - param_3;
    dVar1 = (double)CONCAT44(uVar22,uVar21) + param_3;
    dVar3 = (double)fVar25;
    local_1b8._1_1_ = auStack_d7[0];
    local_1b8._2_1_ = auStack_d7[1];
    local_1b8._3_1_ = auStack_d7[2];
    local_1b8._4_1_ = auStack_d7[3];
    local_1b8._5_1_ = auStack_d7[4];
    local_1b8._6_1_ = auStack_d7[5];
    local_1b8._7_1_ = auStack_d7[6];
    local_1b8._0_1_ = '\x01';
    local_1e8._8_4_ = SUB84(dVar13,0);
    local_1e8._0_8_ = (double)CONCAT44(uVar20,uVar19) - param_3;
    local_1e8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    auVar2._8_4_ = uVar27;
    auVar2._0_8_ = dVar1;
    auVar2._12_4_ = uVar28;
    TStack_1d0._8_1_ = SUB81(dVar1,0);
    TStack_1d0._9_7_ = (undefined7)((ulonglong)dVar1 >> 8);
    TStack_1d0._s_0.Z = auVar2._8_8_;
    FRcTileBox::FRcTileBox
              (&local_1b0,(TBox<double> *)local_1e8,(TVector<double> *)&local_1a0._s_0,dVar3);
    uVar7 = local_1a0._s_0.Z;
    uVar4 = __real_bff0000000000000;
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar13 = (param_1->field0_0x0)._s_0.Y;
    dVar14 = dVar1 - (param_2->field0_0x0)._s_0.X;
    dVar12 = ((param_2->field0_0x0)._s_0.X + dVar1) * __real_bfe0000000000000;
    dVar1 = dVar13 - (param_2->field0_0x0)._s_0.Y;
    dVar13 = ((param_2->field0_0x0)._s_0.Y + dVar13) * __real_bfe0000000000000;
    local_1e8._8_8_ = dVar13;
    local_1e8._0_8_ = dVar12;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = dVar1 * dVar1 + dVar14 * dVar14;
    auVar26 = sqrtpd(auVar16,auVar26);
    dVar15 = auVar26._0_8_;
    if (dVar15 <= 0.0) {
      _local_1d8 = 0.0;
      TStack_1d0._s_0.X = 0.0;
      dVar15 = 0.0;
    }
    else {
      _local_1d8 = dVar14 * (__real_3ff0000000000000 / dVar15);
      TStack_1d0._s_0.X = dVar1 * (__real_3ff0000000000000 / dVar15);
    }
    uVar6 = TStack_1d0._s_0.X;
    uVar5 = _local_1d8;
    dVar15 = dVar15 * __real_3fe0000000000000;
    TStack_1d0._9_7_ = (undefined7)((ulonglong)dVar15 >> 8);
    for (iVar11 = local_1b0.XMin; iVar11 <= local_1b0.XMax; iVar11 = iVar11 + 1) {
      if (local_1b0.YMin <= local_1b0.YMax) {
        dVar1 = (double)((float)iVar11 * fVar25) + local_1a0._s_0.X;
        iVar10 = local_1b0.YMin;
        do {
          TStack_1d0._8_1_ = 1;
          local_138 = uVar4;
          local_178 = (double)uVar5;
          dStack_170 = (double)uVar6;
          dStack_158 = (double)((float)iVar10 * fVar25) + (double)uVar7;
          local_140 = CONCAT71(TStack_1d0._9_7_,1);
          local_150._8_4_ = SUB84(dStack_158 + dVar3,0);
          local_150._0_8_ = dVar1 + dVar3;
          local_150._12_4_ = (int)((ulonglong)(dStack_158 + dVar3) >> 0x20);
          local_188._s_0.X = dVar12;
          local_188._s_0.Y = dVar13;
          local_168 = dVar15;
          local_160 = dVar1;
          dVar14 = UE::Geometry::TDistSegment2AxisAlignedBox2<double>::ComputeResult
                             ((TDistSegment2AxisAlignedBox2<double> *)&local_188._s_0);
          if ((dVar14 <= param_3 * param_3) &&
             (bVar8 = HasCompleteDataInTile(this,iVar11,iVar10), !bVar8)) goto LAB_146e1404e;
          iVar10 = iVar10 + 1;
        } while (iVar10 <= local_1b0.YMax);
      }
    }
    bVar8 = true;
  }
  return bVar8;
}

// HasCompleteDataInRadius @ 146e140b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
ARecastNavMesh::HasCompleteDataInRadius
          (ARecastNavMesh *this,TVector<double> *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  dtNavMesh *this_00;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  dtNavMeshParams *pdVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  double dVar28;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_168 [32];
  ulonglong local_148;
  double local_138;
  TVector<double>_u_0 local_130;
  undefined8 local_118;
  double local_110;
  undefined8 local_108;
  TVector<double>_u_0 local_100;
  double local_e8;
  double local_d8;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_168;
  if ((((this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) ||
       (this_00 = this->RecastNavMeshImpl->DetourNavMesh, this_00 == (dtNavMesh *)0x0)) ||
      (this_00->m_tileWidth <= 0.0)) || (this_00->m_tileHeight <= 0.0)) {
LAB_146e14492:
    bVar5 = false;
  }
  else {
    pdVar7 = dtNavMesh::getParams(this_00);
    fVar27 = this->NavMeshResolutionParams[1].CellSize;
    dVar20 = (param_1->field0_0x0)._s_0.Y;
    local_130._s_0.Y = (param_1->field0_0x0)._s_0.Z;
    dVar1 = pdVar7->orig[0];
    dVar2 = pdVar7->orig[2];
    auVar29 = roundps(unaff_XMM9,ZEXT416((uint)(this->TileSizeUU / fVar27)),3);
    fVar27 = auVar29._0_4_ * fVar27;
    dVar18 = (param_1->field0_0x0)._s_0.X;
    dVar22 = dVar18 - param_2;
    dVar18 = dVar18 + param_2;
    uVar25 = (uint)__xmm_80000000000000008000000000000000;
    uVar26 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_130._s_0.X =
         (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) ^ uVar26,SUB84(dVar22,0) ^ uVar25);
    local_118 = CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar26,SUB84(dVar18,0) ^ uVar25);
    dVar18 = dVar20 - param_2;
    dVar20 = dVar20 + param_2;
    local_108 = CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar26,SUB84(dVar20,0) ^ uVar25);
    local_130._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar26,SUB84(dVar18,0) ^ uVar25);
    local_138 = dVar1;
    local_110 = local_130._s_0.Y;
    UE::Math::TBox<double>::TBox<double>
              ((TBox<double> *)&local_100._s_0,(TVector<double> *)&local_130._s_0,2);
    dVar18 = __real_3fe0000000000000;
    uVar3 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    uVar23 = (uint)uVar3 ^ uVar25;
    uVar24 = (uint)((ulonglong)uVar3 >> 0x20) ^ uVar26;
    dVar20 = (double)fVar27;
    uVar25 = (uint)*(undefined8 *)&param_1->field0_0x0 ^ uVar25;
    uVar26 = (uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) ^ uVar26;
    uVar13 = (longlong)
             ROUND((local_100._s_0.X - dVar1) * (__real_4000000000000000 / dVar20) -
                   __real_3fe0000000000000) >> 1;
    uVar12 = (uint)uVar13;
    if ((uVar13 != (longlong)(int)uVar12) &&
       (local_148 = uVar13,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("IntFitsIn<OutType>(In)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                          ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5))
    {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    dVar22 = __real_bfe0000000000000;
    lVar15 = (longlong)
             ROUND(__real_bfe0000000000000 - ((local_e8 - dVar1) + (local_e8 - dVar1)) / dVar20) >>
             1;
    uVar16 = -lVar15;
    iVar14 = (int)uVar16;
    if ((-(longlong)iVar14 != lVar15) &&
       (local_148 = uVar16,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("IntFitsIn<OutType>(In)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                          ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5))
    {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    uVar16 = (longlong)
             ROUND(((local_100._s_0.Z - dVar2) + (local_100._s_0.Z - dVar2)) / dVar20 - dVar18) >> 1
    ;
    if ((uVar16 != (longlong)(int)uVar16) &&
       (local_148 = uVar16,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("IntFitsIn<OutType>(In)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                          ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5))
    {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    lVar15 = (longlong)ROUND(dVar22 - ((local_d8 - dVar2) + (local_d8 - dVar2)) / dVar20) >> 1;
    uVar10 = -lVar15;
    iVar9 = (int)uVar10;
    if ((-(longlong)iVar9 != lVar15) &&
       (local_148 = uVar10,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("IntFitsIn<OutType>(In)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                          ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5))
    {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    dVar1 = (double)(fVar27 * __real_3f000000);
    while ((int)uVar12 <= iVar14) {
      uVar10 = uVar16 & 0xffffffff;
      iVar11 = (int)uVar13;
      if ((int)uVar16 <= iVar9) {
        dVar22 = ((double)iVar11 + dVar18) * dVar20 + local_138;
        dVar28 = dVar1 + dVar22;
        dVar22 = dVar22 - dVar1;
        do {
          iVar8 = (int)uVar10;
          dVar17 = 0.0;
          dVar19 = ((double)iVar8 + dVar18) * dVar20 + dVar2;
          dVar21 = dVar1 + dVar19;
          dVar19 = dVar19 - dVar1;
          if (dVar22 <= (double)CONCAT44(uVar26,uVar25)) {
            if (dVar28 <= (double)CONCAT44(uVar26,uVar25) &&
                (double)CONCAT44(uVar26,uVar25) != dVar28) {
              dVar17 = (double)CONCAT44(uVar26,uVar25) - dVar28;
              goto LAB_146e14439;
            }
          }
          else {
            dVar17 = (double)CONCAT44(uVar26,uVar25) - dVar22;
LAB_146e14439:
            dVar17 = dVar17 * dVar17;
          }
          if (dVar19 <= (double)CONCAT44(uVar24,uVar23)) {
            if (dVar21 <= (double)CONCAT44(uVar24,uVar23) &&
                (double)CONCAT44(uVar24,uVar23) != dVar21) {
              dVar19 = (double)CONCAT44(uVar24,uVar23) - dVar21;
              goto LAB_146e14459;
            }
          }
          else {
            dVar19 = (double)CONCAT44(uVar24,uVar23) - dVar19;
LAB_146e14459:
            dVar17 = dVar17 + dVar19 * dVar19;
          }
          if ((dVar17 <= param_2 * param_2) &&
             (bVar5 = HasCompleteDataInTile(this,iVar11,iVar8), !bVar5)) goto LAB_146e14492;
          uVar10 = (ulonglong)(iVar8 + 1U);
        } while ((int)(iVar8 + 1U) <= iVar9);
      }
      uVar12 = iVar11 + 1;
      uVar13 = (ulonglong)uVar12;
    }
    bVar5 = true;
  }
  return bVar5;
}

// HasCompleteDataInTile @ 146e14500

bool __thiscall ARecastNavMesh::HasCompleteDataInTile(ARecastNavMesh *this,int param_1,int param_2)

{
  FPImplRecastNavMesh *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  
  if (((this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) ||
      (this->RecastNavMeshImpl->DetourNavMesh == (dtNavMesh *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RecastNavMeshImpl && RecastNavMeshImpl->DetourNavMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                         ,0xf5d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar6 = dtNavMesh::getTileCountAt(this->RecastNavMeshImpl->DetourNavMesh,param_1,param_2);
  if (0 < iVar6) {
    return true;
  }
  if (this->bStoreEmptyTileLayers != 0) {
    pFVar1 = this->RecastNavMeshImpl;
    uVar8 = param_1 - param_2 ^ (uint)param_2 >> 0xd;
    uVar7 = (-0x61c88647 - uVar8) - param_2 ^ uVar8 << 8;
    uVar10 = (param_2 - uVar7) - uVar8 ^ uVar7 >> 0xd;
    uVar8 = (uVar8 - uVar10) - uVar7 ^ uVar10 >> 0xc;
    uVar7 = (uVar7 - uVar10) - uVar8 ^ uVar8 << 0x10;
    uVar10 = (uVar10 - uVar7) - uVar8 ^ uVar7 >> 5;
    uVar8 = (uVar8 - uVar10) - uVar7 ^ uVar10 >> 3;
    uVar7 = (uVar7 - uVar8) - uVar10 ^ uVar8 << 10;
    if (*(int *)&(pFVar1->CompressedTileCacheLayers).field_0x8 !=
        *(int *)&(pFVar1->CompressedTileCacheLayers).field_0x34) {
      puVar9 = *(undefined1 **)&(pFVar1->CompressedTileCacheLayers).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(pFVar1->CompressedTileCacheLayers).field_0x38;
      }
      iVar6 = *(int *)(puVar9 + (ulonglong)
                                (*(int *)&(pFVar1->CompressedTileCacheLayers).field_0x48 - 1U &
                                ((uVar10 - uVar7) - uVar8 ^ uVar7 >> 0xf)) * 4);
      if (iVar6 != -1) {
        while( true ) {
          uVar2 = *(undefined8 *)
                   ((longlong)iVar6 * 0x20 + *(longlong *)&pFVar1->CompressedTileCacheLayers);
          if (((int)uVar2 == param_1) && ((int)((ulonglong)uVar2 >> 0x20) == param_2)) break;
          iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 +
                          *(longlong *)&pFVar1->CompressedTileCacheLayers);
          if (iVar6 == -1) {
            return false;
          }
        }
        if (iVar6 != -1) {
          return true;
        }
      }
    }
  }
  return false;
}

// HasValidNavmesh @ 146e14960

bool __thiscall ARecastNavMesh::HasValidNavmesh(ARecastNavMesh *this)

{
  dtNavMesh *pdVar1;
  
  if ((((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) &&
       (pdVar1 = this->RecastNavMeshImpl->DetourNavMesh, pdVar1 != (dtNavMesh *)0x0)) &&
      (0.0 < pdVar1->m_tileWidth)) && (0.0 < pdVar1->m_tileHeight)) {
    return true;
  }
  return false;
}

// InvalidateAffectedPaths @ 146e15260

void __thiscall
ARecastNavMesh::InvalidateAffectedPaths
          (ARecastNavMesh *this,TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *lpCriticalSection;
  int iVar1;
  dtNavMesh *pdVar2;
  FNavPathType *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  byte bVar5;
  byte bVar6;
  atomic<int> aVar7;
  bool bVar8;
  uint uVar9;
  atomic<int> aVar10;
  FScriptContainerElement *pFVar11;
  byte bVar12;
  FNavigationPath *pFVar13;
  longlong *plVar14;
  uint uVar15;
  TReferenceControllerBase<1> *pTVar16;
  int iVar17;
  ulonglong *puVar18;
  longlong lVar19;
  FNavigationPath *this_01;
  
  iVar1 = (int)this->_padding_;
  if (((param_1->ArrayNum != 0) && (iVar1 != 0)) &&
     (pdVar2 = this->RecastNavMeshImpl->DetourNavMesh, pdVar2 != (dtNavMesh *)0x0)) {
    lpCriticalSection = &this->_padding_;
    if ((lpCriticalSection == (longlong *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar15 = iVar1 - 1;
    if (-1 < (int)uVar15) {
      lVar19 = (longlong)(int)uVar15 << 4;
      do {
        uVar9 = 0;
        if ((int)uVar15 < (int)this->_padding_) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar14 = (longlong *)(this->_padding_ + lVar19);
        this_01 = (FNavigationPath *)0x0;
        pTVar16 = (TReferenceControllerBase<1> *)plVar14[1];
        if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
          aVar7 = pTVar16->SharedReferenceCount;
          do {
            if (aVar7 == (atomic<int>)0x0) {
              pTVar16 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_146e153a0;
            }
            LOCK();
            aVar10 = pTVar16->SharedReferenceCount;
            bVar8 = aVar7 == aVar10;
            if (bVar8) {
              pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
              aVar10 = aVar7;
            }
            UNLOCK();
            aVar7 = aVar10;
          } while (!bVar8);
          this_01 = (FNavigationPath *)*plVar14;
        }
LAB_146e153a0:
        if (((*plVar14 == 0) || (plVar14[1] == 0)) || (*(int *)(plVar14[1] + 8) < 1)) {
          uVar9 = 0;
          if ((int)uVar15 < (int)this->_padding_) {
            uVar9 = ~uVar15 >> 0x1f;
          }
joined_r0x000146e1553f:
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TArray<TWeakPtr<FNavigationPath,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    ((TArray<TWeakPtr<FNavigationPath,1>,TSizedDefaultAllocator<32>_> *)
                     &this->_padding_,uVar15);
        }
        else if (this_01 != (FNavigationPath *)0x0) {
          if (((this_01->PathType).Id == FNavMeshPath::Type.Id) ||
             ((this_00 = (this_01->PathType).ParentType, this_00 != (FNavPathType *)0x0 &&
              (bVar8 = FNavPathType::IsA(this_00,&FNavMeshPath::Type), bVar8)))) {
            bVar8 = true;
          }
          else {
            bVar8 = false;
          }
          pFVar13 = (FNavigationPath *)0x0;
          if (bVar8) {
            pFVar13 = this_01;
          }
          if (((pFVar13 != (FNavigationPath *)0x0) && (pFVar13->bIsReady != 0)) &&
             (pFVar13->bIgnoreInvalidation == 0)) {
            iVar1 = (int)pFVar13[1]._padding_;
            iVar17 = 0;
            puVar18 = (ulonglong *)pFVar13[1]._padding_;
            if (0 < iVar1) {
              pFVar3 = (param_1->AllocatorInstance).Data;
              bVar5 = (byte)pdVar2->m_tileBits;
              bVar6 = (byte)pdVar2->m_polyBits;
              bVar12 = bVar5 + bVar6;
              do {
                for (pFVar11 = pFVar3; pFVar11 != pFVar3 + (longlong)param_1->ArrayNum * 8;
                    pFVar11 = pFVar11 + 8) {
                  if (*(ulonglong *)pFVar11 ==
                      ((ulonglong)
                       ((int)(1L << (bVar5 & 0x3f)) - 1U & (uint)(*puVar18 >> (bVar6 & 0x3f))) <<
                       (bVar6 & 0x3f) |
                      (*puVar18 >> (bVar12 & 0x3f) & (1L << ((byte)pdVar2->m_saltBits & 0x3f)) - 1U
                      & 0xffffffff) << (bVar12 & 0x3f))) {
                    FNavigationPath::Invalidate(this_01);
                    uVar9 = 0;
                    if ((int)uVar15 < (int)this->_padding_) {
                      uVar9 = ~uVar15 >> 0x1f;
                    }
                    goto joined_r0x000146e1553f;
                  }
                }
                iVar17 = iVar17 + 1;
                puVar18 = puVar18 + 1;
              } while (iVar17 < iVar1);
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16)
        ;
        lVar19 = lVar19 + -0x10;
        uVar15 = uVar15 - 1;
      } while (-1 < (int)uVar15);
    }
    if (lpCriticalSection != (longlong *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// IsCustomLink @ 146e157f0

bool __thiscall ARecastNavMesh::IsCustomLink(ARecastNavMesh *this,ulong64 param_1)

{
  dtNavMesh *this_00;
  dtOffMeshConnection *pdVar1;
  
  if ((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) &&
     (this_00 = this->RecastNavMeshImpl->DetourNavMesh, this_00 != (dtNavMesh *)0x0)) {
    pdVar1 = dtNavMesh::getOffMeshConnectionByRef(this_00,param_1);
    if ((pdVar1 != (dtOffMeshConnection *)0x0) && (pdVar1->userId != FNavLinkId::Invalid.Id)) {
      return true;
    }
  }
  return false;
}

// IsNodeRefValid @ 146e15930

bool __thiscall ARecastNavMesh::IsNodeRefValid(ARecastNavMesh *this,ulong64 param_1)

{
  dtNavMesh *this_00;
  uint uVar1;
  dtPoly *local_res10;
  dtMeshTile *local_res18 [2];
  
  if (((param_1 != 0) && (this->_padding_ != 0)) &&
     (this_00 = *(dtNavMesh **)(this->_padding_ + 8), this_00 != (dtNavMesh *)0x0)) {
    local_res10 = (dtPoly *)0x0;
    local_res18[0] = (dtMeshTile *)0x0;
    uVar1 = dtNavMesh::getTileAndPolyByRef(this_00,param_1,local_res18,&local_res10);
    return (bool)((byte)(uVar1 >> 0x1e) & 1);
  }
  return false;
}

// IsResizable @ 146e15a20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ARecastNavMesh::IsResizable(ARecastNavMesh *this)

{
  int iVar1;
  UNavigationSystemBase *pUVar2;
  UWorld *pUVar3;
  UClass *pUVar4;
  
  pUVar3 = AActor::GetWorld((AActor *)this);
  if ((pUVar3 != (UWorld *)0x0) &&
     (pUVar2 = (pUVar3->NavigationSystem).field0_0x0.DebugPtr,
     pUVar2 != (UNavigationSystemBase *)0x0)) {
    pUVar4 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       (((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar4->_padding_ && (pUVar2[0xe].field_0x8 == '\x06')))) {
      return true;
    }
  }
  return (bool)(~this->bFixedTilePoolSize & 1);
}

// IsSegmentOnNavmesh @ 146e15b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
ARecastNavMesh::IsSegmentOnNavmesh
          (ARecastNavMesh *this,TVector<double> *param_1,TVector<double> *param_2,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_3,UObject *param_4)

{
  bool bVar1;
  undefined1 auStackY_6d8 [32];
  TSharedPtr<FNavigationQueryFilter_const_,1> local_698;
  TVector<double> local_688;
  FRaycastResult local_668;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_6d8;
  local_668.bIsRaycastEndInCorridor = 0;
  local_668.HitTime = __real_7fefffffffffffff;
  local_668.CorridorPolysCount = 0;
  local_668.HitNormal.field0_0x0._s_0.Z = 0.0;
  local_668.HitNormal.field0_0x0._s_0.X = 0.0;
  local_668.HitNormal.field0_0x0._s_0.Y = 0.0;
  memset(&local_668,0,0x400);
  memset(local_668.CorridorCost,0,0x200);
  local_698.Object = param_3->Object;
  local_698.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_698.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_698.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_698.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = NavMeshRaycast((ANavigationData *)this,param_1,param_2,&local_688,&local_698,param_4,
                         &local_668);
  if ((local_668.bIsRaycastEndInCorridor == 0) || (bVar1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return bVar1;
}

// IsUsingActiveTilesGeneration @ 146e15c60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
ARecastNavMesh::IsUsingActiveTilesGeneration(ARecastNavMesh *this,UNavigationSystemV1 *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x780))();
  if ((cVar1 != '\0') &&
     ((param_1->bGenerateNavigationOnlyAroundNavigationInvokers != 0 ||
      (this->bIsWorldPartitioned != 0)))) {
    return true;
  }
  return false;
}

// IsVoxelCacheEnabled @ 146e15cb0

bool __cdecl ARecastNavMesh::IsVoxelCacheEnabled(void)

{
  return false;
}

// IsWorldPartitionedDynamicNavmesh @ 146e15d00

bool __thiscall ARecastNavMesh::IsWorldPartitionedDynamicNavmesh(ARecastNavMesh *this)

{
  char cVar1;
  
  if (this->bIsWorldPartitioned != 0) {
    cVar1 = (**(code **)(this->_padding_ + 0x780))();
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// K2_ReplaceAreaInTileBounds @ 146e15d30

bool __thiscall
ARecastNavMesh::K2_ReplaceAreaInTileBounds
          (ARecastNavMesh *this,TBox<double> *param_1,TSubclassOf<UNavArea> param_2,
          TSubclassOf<UNavArea> param_3,bool param_4)

{
  bool bVar1;
  int iVar2;
  undefined1 local_38 [8];
  UObject *local_30;
  UObject *local_28 [2];
  
  if (param_1->IsValid == '\0') {
    bVar1 = `ARecastNavMesh::K2_ReplaceAreaInTileBounds'::__l3::<lambda_1>::operator()(local_38);
    if (!bVar1) {
      return false;
    }
  }
  local_30 = *(UObject **)param_3.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_30);
  }
  local_28[0] = *(UObject **)param_2.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_28[0]);
  }
  iVar2 = ReplaceAreaInTileBounds
                    (this,param_1,(TSubclassOf<UNavArea>)local_28,(TSubclassOf<UNavArea>)&local_30,
                     param_4,(TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)0x0);
  if (0 < iVar2) {
    RequestDrawingUpdate(this,false);
  }
  return 0 < iVar2;
}

// LoadBeforeGeneratorRebuild @ 146e16030

void __thiscall ARecastNavMesh::LoadBeforeGeneratorRebuild(ARecastNavMesh *this)

{
  return;
}

// LogMemUsed @ 146e16040

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall ARecastNavMesh::LogMemUsed(ARecastNavMesh *this)

{
  dtNavMesh *this_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  dtMeshTile *pdVar4;
  int iVar5;
  int iVar6;
  FName local_res8;
  FString local_68;
  FDetourTileLayout local_58;
  
  uVar1 = ANavigationData::LogMemUsed((ANavigationData *)this);
  iVar3 = 0;
  iVar6 = iVar3;
  if ((this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) &&
     (this_00 = this->RecastNavMeshImpl->DetourNavMesh, iVar6 = 0, this_00 != (dtNavMesh *)0x0)) {
    iVar5 = 0;
    iVar2 = dtNavMesh::getMaxTiles(this_00);
    iVar6 = iVar3;
    if (0 < iVar2) {
      do {
        pdVar4 = dtNavMesh::getTile(this_00,iVar5);
        if (pdVar4 != (dtMeshTile *)0x0) {
          FDetourTileLayout::FDetourTileLayout(&local_58,pdVar4);
          iVar6 = iVar6 + local_58.TileSize;
        }
        iVar5 = iVar5 + 1;
        iVar3 = dtNavMesh::getMaxTiles(this->RecastNavMeshImpl->DetourNavMesh);
      } while (iVar5 < iVar3);
    }
  }
  if (2 < (byte)LogNavigation._0_1_) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_68);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return iVar6 + uVar1;
}

// LogRecastTile @ 146e16160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ARecastNavMesh::LogRecastTile
          (ARecastNavMesh *this,wchar_t *param_1,FName *param_2,FName *param_3,dtNavMesh *param_4,
          int param_5,int param_6,int param_7,ulong64 param_8)

{
  FName local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  
  if (6 < (byte)LogNavigation._0_1_) {
    ::FName::ToString(param_3,&local_40);
    ::FName::ToString(param_2,&local_50);
    local_68 = (FName)this->_padding_;
    ::FName::ToString(&local_68,&local_60);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// MarkEmptyTileCacheLayers @ 146e16640

void __thiscall
ARecastNavMesh::MarkEmptyTileCacheLayers(ARecastNavMesh *this,int param_1,int param_2)

{
  FPImplRecastNavMesh *pFVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  TPairInitializer<UE::Math::TIntPoint<int>_&&,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_const_&>
  local_res8;
  int local_res20;
  int local_res24;
  FNavMeshTileData *local_28;
  undefined8 local_20;
  int *local_18;
  FNavMeshTileData **local_10;
  
  pFVar1 = this->RecastNavMeshImpl;
  if ((pFVar1 != (FPImplRecastNavMesh *)0x0) && (this->bStoreEmptyTileLayers != 0)) {
    uVar6 = param_1 - param_2 ^ (uint)param_2 >> 0xd;
    uVar3 = (-0x61c88647 - uVar6) - param_2 ^ uVar6 << 8;
    uVar5 = (param_2 - uVar3) - uVar6 ^ uVar3 >> 0xd;
    uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar6 ^ uVar6 << 0x10;
    uVar5 = (uVar5 - uVar3) - uVar6 ^ uVar3 >> 5;
    uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 3;
    uVar3 = (uVar3 - uVar6) - uVar5 ^ uVar6 << 10;
    if (*(int *)&(pFVar1->CompressedTileCacheLayers).field_0x8 !=
        *(int *)&(pFVar1->CompressedTileCacheLayers).field_0x34) {
      puVar4 = *(undefined1 **)&(pFVar1->CompressedTileCacheLayers).field_0x40;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(pFVar1->CompressedTileCacheLayers).field_0x38;
      }
      iVar7 = *(int *)(puVar4 + (ulonglong)
                                (*(int *)&(pFVar1->CompressedTileCacheLayers).field_0x48 - 1U &
                                ((uVar5 - uVar3) - uVar6 ^ uVar3 >> 0xf)) * 4);
      if (iVar7 != -1) {
        do {
          uVar2 = *(undefined8 *)
                   ((longlong)iVar7 * 0x20 + *(longlong *)&pFVar1->CompressedTileCacheLayers);
          if (((int)uVar2 == param_1) && ((int)((ulonglong)uVar2 >> 0x20) == param_2)) {
            if (iVar7 != -1) {
              return;
            }
            break;
          }
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 +
                          *(longlong *)&pFVar1->CompressedTileCacheLayers);
        } while (iVar7 != -1);
      }
    }
    local_28 = (FNavMeshTileData *)0x0;
    local_20 = 0;
    local_18 = &local_res20;
    local_10 = &local_28;
    local_res20 = param_1;
    local_res24 = param_2;
    TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UE::Math::TIntPoint<int>_&&,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_const_&>_>
              ((TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&pFVar1->CompressedTileCacheLayers,&local_res8,(bool *)&local_18);
    DestructItems<FNavMeshTileData,int>(local_28,(int)local_20);
    if (local_28 != (FNavMeshTileData *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return;
}

// NavMeshRaycast @ 146e16930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
ARecastNavMesh::NavMeshRaycast
          (ANavigationData *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,FNavigationRaycastAdditionalResults *param_5,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_6,UObject *param_7)

{
  bool bVar1;
  undefined1 auStackY_6c8 [32];
  TSharedPtr<FNavigationQueryFilter_const_,1> local_688;
  FRaycastResult local_678;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_6c8;
  local_678.bIsRaycastEndInCorridor = 0;
  local_678.HitTime = __real_7fefffffffffffff;
  local_678.CorridorPolysCount = 0;
  local_678.HitNormal.field0_0x0._s_0.Z = 0.0;
  local_678.HitNormal.field0_0x0._s_0.X = 0.0;
  local_678.HitNormal.field0_0x0._s_0.Y = 0.0;
  memset(&local_678,0,0x400);
  memset(local_678.CorridorCost,0,0x200);
  local_688.Object = param_6->Object;
  local_688.SharedReferenceCount.ReferenceController =
       (param_6->SharedReferenceCount).ReferenceController;
  if (local_688.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_688.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_688.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = NavMeshRaycast(param_1,param_2,param_3,param_4,&local_688,param_7,&local_678);
  if (param_5 != (FNavigationRaycastAdditionalResults *)0x0) {
    param_5->bIsRayEndInCorridor = local_678.bIsRaycastEndInCorridor;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->SharedReferenceCount).ReferenceController);
  return bVar1;
}

// NavMeshRaycast @ 146e16a60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
ARecastNavMesh::NavMeshRaycast
          (ANavigationData *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TSharedPtr<FNavigationQueryFilter_const_,1> *param_5,
          UObject *param_6,FRaycastResult *param_7)

{
  double dVar1;
  int iVar2;
  FPImplRecastNavMesh *this;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  UClass *pUVar11;
  double *pdVar12;
  FNavigationQueryFilter *pFVar13;
  undefined1 local_58 [16];
  double local_48;
  double local_40;
  double dStack_38;
  double local_30;
  
  if (param_1 == (ANavigationData *)0x0) {
LAB_146e16aaa:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Cast<const ARecastNavMesh>(Self)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                       ,0xd9f,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
    if (param_1 == (ANavigationData *)0x0) goto LAB_146e16c3f;
  }
  else {
    pUVar11 = GetPrivateStaticClass();
    iVar2 = (int)pUVar11->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar11->_padding_)) goto LAB_146e16aaa;
  }
  this = (FPImplRecastNavMesh *)param_1[1]._padding_;
  if (this != (FPImplRecastNavMesh *)0x0) {
    pTVar3 = (param_5->SharedReferenceCount).ReferenceController;
    pFVar13 = param_5->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar13 == (FNavigationQueryFilter *)0x0) {
      pTVar4 = (param_1->DefaultQueryFilter).SharedReferenceCount.ReferenceController;
      pFVar13 = (param_1->DefaultQueryFilter).Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    FPImplRecastNavMesh::Raycast(this,param_2,param_3,pFVar13,param_6,param_7,0);
    dVar8 = __real_7fefffffffffffff;
    dVar1 = param_7->HitTime;
    if (dVar1 == __real_7fefffffffffffff) {
      pdVar12 = &local_40;
      local_40 = (param_3->field0_0x0)._s_0.X;
      dStack_38 = (param_3->field0_0x0)._s_0.Y;
      local_30 = (param_3->field0_0x0)._s_0.Z;
    }
    else {
      dVar7 = (param_2->field0_0x0)._s_0.X;
      dVar6 = (param_2->field0_0x0)._s_0.Y;
      pdVar12 = (double *)local_58;
      dVar6 = ((param_3->field0_0x0)._s_0.Y - dVar6) * dVar1 + dVar6;
      local_58._8_4_ = SUB84(dVar6,0);
      local_58._0_8_ = ((param_3->field0_0x0)._s_0.X - dVar7) * dVar1 + dVar7;
      local_58._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      local_48 = ((param_3->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z) * dVar1 +
                 (param_2->field0_0x0)._s_0.Z;
    }
    dVar6 = pdVar12[1];
    dVar1 = pdVar12[2];
    (param_4->field0_0x0)._s_0.X = *pdVar12;
    (param_4->field0_0x0)._s_0.Y = dVar6;
    (param_4->field0_0x0)._s_0.Z = dVar1;
    dVar1 = param_7->HitTime;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_5->SharedReferenceCount).ReferenceController);
    return dVar8 != dVar1;
  }
LAB_146e16c3f:
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (param_4->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (param_4->field0_0x0)._s_0.Y = dVar1;
  (param_4->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_5->SharedReferenceCount).ReferenceController);
  return true;
}

// NavMeshRaycast @ 146e16c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
ARecastNavMesh::NavMeshRaycast
          (ANavigationData *param_1,ulong64 param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,
          FNavigationRaycastAdditionalResults *param_6,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_7,UObject *param_8)

{
  double dVar1;
  int iVar2;
  FPImplRecastNavMesh *this;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  UClass *pUVar10;
  double *pdVar11;
  FNavigationQueryFilter *pFVar12;
  undefined1 auStackY_718 [32];
  double local_6b8;
  double dStack_6b0;
  double local_6a8;
  double local_6a0;
  double dStack_698;
  double local_690;
  FRaycastResult local_688;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_718;
  if (param_1 == (ANavigationData *)0x0) {
LAB_146e16d07:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Cast<const ARecastNavMesh>(Self)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                       ,0xdb5,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    if (param_1 == (ANavigationData *)0x0) goto LAB_146e16f03;
  }
  else {
    pUVar10 = GetPrivateStaticClass();
    iVar2 = (int)pUVar10->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar10->_padding_)) goto LAB_146e16d07;
  }
  dVar7 = __real_7fefffffffffffff;
  this = (FPImplRecastNavMesh *)param_1[1]._padding_;
  if (this != (FPImplRecastNavMesh *)0x0) {
    local_688.bIsRaycastEndInCorridor = 0;
    local_688.HitTime = __real_7fefffffffffffff;
    local_688.HitNormal.field0_0x0._s_0.Z = 0.0;
    local_688.CorridorPolysCount = 0;
    local_688.HitNormal.field0_0x0._s_0.X = 0.0;
    local_688.HitNormal.field0_0x0._s_0.Y = 0.0;
    memset(&local_688,0,0x400);
    memset(local_688.CorridorCost,0,0x200);
    pTVar3 = (param_7->SharedReferenceCount).ReferenceController;
    pFVar12 = param_7->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar12 == (FNavigationQueryFilter *)0x0) {
      pTVar4 = (param_1->DefaultQueryFilter).SharedReferenceCount.ReferenceController;
      pFVar12 = (param_1->DefaultQueryFilter).Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    FPImplRecastNavMesh::Raycast(this,param_3,param_4,pFVar12,param_8,&local_688,param_2);
    if (local_688.HitTime == dVar7) {
      pdVar11 = &local_6a0;
      local_6a0 = (param_4->field0_0x0)._s_0.X;
      dStack_698 = (param_4->field0_0x0)._s_0.Y;
      local_690 = (param_4->field0_0x0)._s_0.Z;
    }
    else {
      pdVar11 = &local_6b8;
      local_6b8 = ((param_4->field0_0x0)._s_0.X - (param_3->field0_0x0)._s_0.X) * local_688.HitTime
                  + (param_3->field0_0x0)._s_0.X;
      dStack_6b0 = ((param_4->field0_0x0)._s_0.Y - (param_3->field0_0x0)._s_0.Y) * local_688.HitTime
                   + (param_3->field0_0x0)._s_0.Y;
      local_6a8 = ((param_4->field0_0x0)._s_0.Z - (param_3->field0_0x0)._s_0.Z) * local_688.HitTime
                  + (param_3->field0_0x0)._s_0.Z;
    }
    dVar1 = pdVar11[2];
    dVar6 = pdVar11[1];
    (param_5->field0_0x0)._s_0.X = *pdVar11;
    (param_5->field0_0x0)._s_0.Y = dVar6;
    (param_5->field0_0x0)._s_0.Z = dVar1;
    if (param_6 != (FNavigationRaycastAdditionalResults *)0x0) {
      param_6->bIsRayEndInCorridor = local_688.bIsRaycastEndInCorridor;
    }
    if (local_688.HitTime != dVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_7->SharedReferenceCount).ReferenceController);
      return true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_7->SharedReferenceCount).ReferenceController);
    return false;
  }
LAB_146e16f03:
  dVar7 = (param_3->field0_0x0)._s_0.Y;
  (param_5->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
  (param_5->field0_0x0)._s_0.Y = dVar7;
  (param_5->field0_0x0)._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  if (param_6 != (FNavigationRaycastAdditionalResults *)0x0) {
    param_6->bIsRayEndInCorridor = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_7->SharedReferenceCount).ReferenceController);
  return true;
}

// NavMeshRaycast @ 146e16f60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
ARecastNavMesh::NavMeshRaycast
          (ANavigationData *param_1,ulong64 param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,
          TSharedPtr<FNavigationQueryFilter_const_,1> *param_6,UObject *param_7)

{
  bool bVar1;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_18;
  
  local_18.Object = param_6->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_6->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = NavMeshRaycast(param_1,param_2,param_3,param_4,param_5,
                         (FNavigationRaycastAdditionalResults *)0x0,&local_18,param_7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->SharedReferenceCount).ReferenceController);
  return bVar1;
}

// NeedsRebuild @ 146e16fe0

bool __thiscall ARecastNavMesh::NeedsRebuild(ARecastNavMesh *this)

{
  bool bVar1;
  int iVar2;
  
  if (((this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) ||
      (this->RecastNavMeshImpl->DetourNavMesh == (dtNavMesh *)0x0)) || (this->bHasNoTileData)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    if (bVar1 == false) {
      iVar2 = (**(code **)(*(longlong *)this->_padding_ + 0x48))();
      if (iVar2 < 1) {
        return false;
      }
    }
    bVar1 = true;
  }
  return bVar1;
}

// OnNavAreaAdded @ 146e19670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

void __thiscall ARecastNavMesh::OnNavAreaAdded(ARecastNavMesh *this,UClass *param_1,int param_2)

{
  FNavigationQueryFilter *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UNavArea *pUVar5;
  float fVar6;
  
  ANavigationData::OnNavAreaAdded((ANavigationData *)this,param_1,param_2);
  uVar4 = ANavigationData::GetAreaID((ANavigationData *)this,param_1);
  if (uVar4 != 0xffffffff) {
    pUVar5 = UClass::GetDefaultObject<UNavArea>(param_1);
    if (this->_padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (FNavigationQueryFilter *)this->_padding_;
    fVar6 = pUVar5->DefaultCost;
    if ((uVar4 != (uVar4 & 0xff)) || ((int)uVar4 < 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FNavigationQueryFilter::SetAreaCost(pFVar1,(uchar)uVar4,fVar6);
    if (this->_padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (FNavigationQueryFilter *)this->_padding_;
    fVar6 = (float)(**(code **)(pUVar5->_padding_ + 0x2d0))(pUVar5);
    if ((uVar4 != (uVar4 & 0xff)) || ((int)uVar4 < 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FNavigationQueryFilter::SetFixedAreaEnteringCost(pFVar1,(uchar)uVar4,fVar6);
  }
  if ((FRecastNavMeshGenerator *)this->_padding_ != (FRecastNavMeshGenerator *)0x0) {
    FRecastNavMeshGenerator::OnAreaAdded((FRecastNavMeshGenerator *)this->_padding_,param_1,uVar4);
  }
  return;
}

// OnNavAreaChanged @ 146e19810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ARecastNavMesh::OnNavAreaChanged(ARecastNavMesh *this)

{
  int iVar1;
  longlong lVar2;
  FPImplRecastNavMesh *pFVar3;
  code *pcVar4;
  bool bVar5;
  INavigationQueryFilterInterface *pIVar6;
  ulonglong uVar7;
  INavigationQueryFilterInterface *pIVar8;
  uint uVar9;
  int iVar11;
  undefined1 auStackY_f8 [32];
  FIdentityFunctor aFStack_a8 [8];
  ForAnyElementType FStack_a0;
  int iStack_98;
  int iStack_94;
  FRealntPair FStack_90;
  uchar auStack_78 [64];
  ulonglong uStack_38;
  ulonglong uVar10;
  
  pFVar3 = this->RecastNavMeshImpl;
  if (pFVar3 == (FPImplRecastNavMesh *)0x0) {
    return;
  }
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if ((pFVar3->NavMeshOwner != (ARecastNavMesh *)0x0) && (pFVar3->DetourNavMesh != (dtNavMesh *)0x0)
     ) {
    pIVar6 = ANavigationData::GetDefaultQueryFilterImpl((ANavigationData *)pFVar3->NavMeshOwner);
    uVar7 = 0;
    FStack_a0.Data = (FScriptContainerElement *)0x0;
    iStack_98 = 0;
    iStack_94 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0x40,&FStack_a0,0,&iStack_94);
    pIVar8 = pIVar6 + 2;
    uVar10 = uVar7;
    if (pIVar6 == (INavigationQueryFilterInterface *)0x0) {
      pIVar8 = (INavigationQueryFilterInterface *)&DAT_00000008;
    }
    do {
      FStack_90.Score = (double)pIVar8[0x40] + (double)*pIVar8;
      iVar11 = (int)uVar10;
      FStack_90.Index = iVar11;
      if (((FStack_a0.Data <= &FStack_90) &&
          (&FStack_90 < (FRealntPair *)(FStack_a0.Data + (longlong)iStack_94 * 0x10))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (iStack_98 == iStack_94) {
        iStack_98 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&FStack_a0,&iStack_94);
      }
      iVar1 = iStack_98 + 1;
      pIVar8 = pIVar8 + 1;
      *(double *)&FStack_a0.Data[(longlong)iStack_98 * 0x10].field_0x0 = FStack_90.Score;
      *(ulonglong *)(FStack_a0.Data + (longlong)iStack_98 * 0x10 + 8) =
           CONCAT44(FStack_90._12_4_,FStack_90.Index);
      uVar10 = (ulonglong)(iVar11 + 1U);
      iStack_98 = iVar1;
    } while ((int)(iVar11 + 1U) < 0x40);
    AlgoImpl::
    IntroSortInternal<_FPImplRecastNavMesh::OnAreaCostChanged_::__l2::FRealntPair,int,FIdentityFunctor,TDereferenceWrapper<_FPImplRecastNavMesh::OnAreaCostChanged_::__l2::FRealntPair,TLess<void>_>_>
              ((FRealntPair *)FStack_a0.Data,iVar1,aFStack_a8[0],(TLess<void> *)aFStack_a8);
    uVar10 = uVar7;
    do {
      if ((iStack_98 <= (int)uVar10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = uVar7 + 8;
      uVar7 = uVar7 + 0x10;
      auStack_78[*(int *)(FStack_a0.Data + lVar2)] = (uchar)uVar10;
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < 0x40);
    dtNavMesh::applyAreaCostOrder(pFVar3->DetourNavMesh,auStack_78);
    if ((FRealntPair *)FStack_a0.Data != (FRealntPair *)0x0) {
      FMemory::Free(FStack_a0.Data);
    }
  }
  return;
}

// OnNavAreaRemoved @ 146e19830

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ARecastNavMesh::OnNavAreaRemoved(ARecastNavMesh *this,UClass *param_1)

{
  if ((FRecastNavMeshGenerator *)this->_padding_ != (FRecastNavMeshGenerator *)0x0) {
    FRecastNavMeshGenerator::OnAreaRemoved((FRecastNavMeshGenerator *)this->_padding_,param_1);
  }
  ANavigationData::OnNavAreaRemoved((ANavigationData *)this,param_1);
  return;
}

// OnNavMeshGenerationFinished @ 146e19870

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ARecastNavMesh::OnNavMeshGenerationFinished(ARecastNavMesh *this)

{
  int iVar1;
  UNavigationSystemBase *pUVar2;
  UWorld *pUVar3;
  UClass *pUVar4;
  
  pUVar3 = AActor::GetWorld((AActor *)this);
  if (((pUVar3 != (UWorld *)0x0) && (((uint)pUVar3->_padding_ >> 0x1e & 1) == 0)) &&
     (pUVar2 = (pUVar3->NavigationSystem).field0_0x0.DebugPtr,
     pUVar2 != (UNavigationSystemBase *)0x0)) {
    pUVar4 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      (**(code **)(*(longlong *)pUVar2 + 0x428))(pUVar2,this);
    }
  }
  return;
}

// OnNavMeshTilesUpdated @ 146e198f0

void __thiscall
ARecastNavMesh::OnNavMeshTilesUpdated
          (ARecastNavMesh *this,TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *lpCriticalSection;
  int iVar1;
  dtNavMesh *pdVar2;
  FNavPathType *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  byte bVar5;
  byte bVar6;
  atomic<int> aVar7;
  bool bVar8;
  uint uVar9;
  atomic<int> aVar10;
  FScriptContainerElement *pFVar11;
  byte bVar12;
  FNavigationPath *pFVar13;
  longlong *plVar14;
  uint uVar15;
  TReferenceControllerBase<1> *pTVar16;
  int iVar17;
  ulonglong *puVar18;
  longlong lVar19;
  FNavigationPath *this_01;
  
  iVar1 = (int)this->_padding_;
  if (((param_1->ArrayNum != 0) && (iVar1 != 0)) &&
     (pdVar2 = this->RecastNavMeshImpl->DetourNavMesh, pdVar2 != (dtNavMesh *)0x0)) {
    lpCriticalSection = &this->_padding_;
    if ((lpCriticalSection == (longlong *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar15 = iVar1 - 1;
    if (-1 < (int)uVar15) {
      lVar19 = (longlong)(int)uVar15 << 4;
      do {
        uVar9 = 0;
        if ((int)uVar15 < (int)this->_padding_) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar14 = (longlong *)(this->_padding_ + lVar19);
        this_01 = (FNavigationPath *)0x0;
        pTVar16 = (TReferenceControllerBase<1> *)plVar14[1];
        if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
          aVar7 = pTVar16->SharedReferenceCount;
          do {
            if (aVar7 == (atomic<int>)0x0) {
              pTVar16 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_146e153a0;
            }
            LOCK();
            aVar10 = pTVar16->SharedReferenceCount;
            bVar8 = aVar7 == aVar10;
            if (bVar8) {
              pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
              aVar10 = aVar7;
            }
            UNLOCK();
            aVar7 = aVar10;
          } while (!bVar8);
          this_01 = (FNavigationPath *)*plVar14;
        }
LAB_146e153a0:
        if (((*plVar14 == 0) || (plVar14[1] == 0)) || (*(int *)(plVar14[1] + 8) < 1)) {
          uVar9 = 0;
          if ((int)uVar15 < (int)this->_padding_) {
            uVar9 = ~uVar15 >> 0x1f;
          }
joined_r0x000146e1553f:
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TArray<TWeakPtr<FNavigationPath,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    ((TArray<TWeakPtr<FNavigationPath,1>,TSizedDefaultAllocator<32>_> *)
                     &this->_padding_,uVar15);
        }
        else if (this_01 != (FNavigationPath *)0x0) {
          if (((this_01->PathType).Id == FNavMeshPath::Type.Id) ||
             ((this_00 = (this_01->PathType).ParentType, this_00 != (FNavPathType *)0x0 &&
              (bVar8 = FNavPathType::IsA(this_00,&FNavMeshPath::Type), bVar8)))) {
            bVar8 = true;
          }
          else {
            bVar8 = false;
          }
          pFVar13 = (FNavigationPath *)0x0;
          if (bVar8) {
            pFVar13 = this_01;
          }
          if (((pFVar13 != (FNavigationPath *)0x0) && (pFVar13->bIsReady != 0)) &&
             (pFVar13->bIgnoreInvalidation == 0)) {
            iVar1 = (int)pFVar13[1]._padding_;
            iVar17 = 0;
            puVar18 = (ulonglong *)pFVar13[1]._padding_;
            if (0 < iVar1) {
              pFVar3 = (param_1->AllocatorInstance).Data;
              bVar5 = (byte)pdVar2->m_tileBits;
              bVar6 = (byte)pdVar2->m_polyBits;
              bVar12 = bVar5 + bVar6;
              do {
                for (pFVar11 = pFVar3; pFVar11 != pFVar3 + (longlong)param_1->ArrayNum * 8;
                    pFVar11 = pFVar11 + 8) {
                  if (*(ulonglong *)pFVar11 ==
                      ((ulonglong)
                       ((int)(1L << (bVar5 & 0x3f)) - 1U & (uint)(*puVar18 >> (bVar6 & 0x3f))) <<
                       (bVar6 & 0x3f) |
                      (*puVar18 >> (bVar12 & 0x3f) & (1L << ((byte)pdVar2->m_saltBits & 0x3f)) - 1U
                      & 0xffffffff) << (bVar12 & 0x3f))) {
                    FNavigationPath::Invalidate(this_01);
                    uVar9 = 0;
                    if ((int)uVar15 < (int)this->_padding_) {
                      uVar9 = ~uVar15 >> 0x1f;
                    }
                    goto joined_r0x000146e1553f;
                  }
                }
                iVar17 = iVar17 + 1;
                puVar18 = puVar18 + 1;
              } while (iVar17 < iVar1);
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16)
        ;
        lVar19 = lVar19 + -0x10;
        uVar15 = uVar15 - 1;
      } while (-1 < (int)uVar15);
    }
    if (lpCriticalSection != (longlong *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// OnRegistered @ 146e19da0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ARecastNavMesh::OnRegistered(ARecastNavMesh *this)

{
  code *pcVar1;
  bool bVar2;
  FPImplRecastNavMesh *this_00;
  FPImplRecastNavMesh *pFVar3;
  
  pFVar3 = this->RecastNavMeshImpl;
  if (pFVar3 == (FPImplRecastNavMesh *)0x0) {
    this_00 = ::operator_new(0x150);
    pFVar3 = (FPImplRecastNavMesh *)0x0;
    if (this_00 != (FPImplRecastNavMesh *)0x0) {
      pFVar3 = FPImplRecastNavMesh::FPImplRecastNavMesh(this_00,this);
    }
    this->RecastNavMeshImpl = pFVar3;
  }
  if ((pFVar3->DetourNavMesh != (dtNavMesh *)0x0) &&
     ((pFVar3->DetourNavMesh->m_params).resolutionParams[1].bvQuantFactor == 0.0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6996127874050688133>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                       ,0x485,
                       "RecastNavMeshImpl->GetRecastMesh() == nullptr || RecastNavMeshImpl->GetRecastMesh()->getBVQuantFactor((uint8)ENavigationDataResolution::Default) != 0"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ANavigationData::OnRegistered((ANavigationData *)this);
  return;
}

// OnStreamingLevelAdded @ 146e19e30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ARecastNavMesh::OnStreamingLevelAdded(ARecastNavMesh *this,ULevel *param_1,UWorld *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_ARecastNavMesh::OnStreamingLevelAdded(ULevel_*,UWorld_*)_::_2_::FStat_STAT_RecastNavMesh_OnStreamingLevelAdded>
  FVar7;
  URecastNavMeshDataChunk *pUVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FStatMessage local_38;
  
  FVar12.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_RecastNavMesh_OnStreamingLevelAdded ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ARecastNavMesh::OnStreamingLevelAdded(ULevel_*,UWorld_*)_::_2_::FStat_STAT_RecastNavMesh_OnStreamingLevelAdded>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&local_res8.s,"STAT_RecastNavMesh_OnStreamingLevelAdded");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RecastNavMesh_OnStreamingLevelAdded,
                   *pFVar6,L"STAT_RecastNavMesh_OnStreamingLevelAdded","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7 = StatPtr_STAT_RecastNavMesh_OnStreamingLevelAdded;
  if (StatPtr_STAT_RecastNavMesh_OnStreamingLevelAdded ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ARecastNavMesh::OnStreamingLevelAdded(ULevel_*,UWorld_*)_::_2_::FStat_STAT_RecastNavMesh_OnStreamingLevelAdded>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res20,"STAT_RecastNavMesh_OnStreamingLevelAdded");
    FVar7 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ARecastNavMesh::OnStreamingLevelAdded(ULevel_*,UWorld_*)_::_2_::FStat_STAT_RecastNavMesh_OnStreamingLevelAdded>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_RecastNavMesh_OnStreamingLevelAdded,*pFVar6,
                         L"STAT_RecastNavMesh_OnStreamingLevelAdded","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                   ,0xcb3);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_146e19fb7;
    }
  }
  bVar3 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_146e19fb7:
  cVar5 = (**(code **)(this->_padding_ + 0x788))(this);
  if ((cVar5 != '\0') && (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0)) {
    pUVar8 = GetNavigationDataChunk
                       (this,(TArray<UNavigationDataChunk_*,TSizedDefaultAllocator<32>_> *)
                             &param_1->NavDataChunks);
    if (pUVar8 != (URecastNavMeshDataChunk *)0x0) {
      (**(code **)(this->_padding_ + 0x8f0))(this,pUVar8);
    }
  }
  if (bVar4) {
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
      local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar12.Value;
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
  return;
}

// OnStreamingLevelRemoved @ 146e1a180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ARecastNavMesh::OnStreamingLevelRemoved(ARecastNavMesh *this,ULevel *param_1,UWorld *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_ARecastNavMesh::OnStreamingLevelRemoved(ULevel_*,UWorld_*)_::_2_::FStat_STAT_RecastNavMesh_OnStreamingLevelRemoved>
  FVar7;
  URecastNavMeshDataChunk *pUVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FStatMessage local_38;
  
  FVar12.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_RecastNavMesh_OnStreamingLevelRemoved ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ARecastNavMesh::OnStreamingLevelRemoved(ULevel_*,UWorld_*)_::_2_::FStat_STAT_RecastNavMesh_OnStreamingLevelRemoved>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&local_res8.s,"STAT_RecastNavMesh_OnStreamingLevelRemoved")
        ;
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RecastNavMesh_OnStreamingLevelRemoved,
                   *pFVar6,L"STAT_RecastNavMesh_OnStreamingLevelRemoved","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7 = StatPtr_STAT_RecastNavMesh_OnStreamingLevelRemoved;
  if (StatPtr_STAT_RecastNavMesh_OnStreamingLevelRemoved ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ARecastNavMesh::OnStreamingLevelRemoved(ULevel_*,UWorld_*)_::_2_::FStat_STAT_RecastNavMesh_OnStreamingLevelRemoved>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res20,"STAT_RecastNavMesh_OnStreamingLevelRemoved");
    FVar7 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ARecastNavMesh::OnStreamingLevelRemoved(ULevel_*,UWorld_*)_::_2_::FStat_STAT_RecastNavMesh_OnStreamingLevelRemoved>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_RecastNavMesh_OnStreamingLevelRemoved,*pFVar6,
                         L"STAT_RecastNavMesh_OnStreamingLevelRemoved","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                   ,0xccb);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_146e1a307;
    }
  }
  bVar3 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_146e1a307:
  cVar5 = (**(code **)(this->_padding_ + 0x788))(this);
  if ((cVar5 != '\0') && (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0)) {
    pUVar8 = GetNavigationDataChunk
                       (this,(TArray<UNavigationDataChunk_*,TSizedDefaultAllocator<32>_> *)
                             &param_1->NavDataChunks);
    if (pUVar8 != (URecastNavMeshDataChunk *)0x0) {
      (**(code **)(this->_padding_ + 0x8f8))(this,pUVar8);
    }
  }
  if (bVar4) {
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
      local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar12.Value;
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
  return;
}

// OnStreamingNavDataAdded @ 146e1a4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
ARecastNavMesh::OnStreamingNavDataAdded(ARecastNavMesh *this,ANavigationDataChunkActor *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_ARecastNavMesh::OnStreamingNavDataAdded(ANavigationDataChunkActor_&)_::_2_::FStat_STAT_RecastNavMesh_OnStreamingNavDataAdded>
  FVar13;
  TBox<double> *pTVar14;
  URecastNavMeshDataChunk *pUVar15;
  UWorld *pUVar16;
  UClass *pUVar17;
  UNavigationSystemV1 *this_00;
  undefined8 uVar18;
  uint uVar19;
  FName FVar20;
  FColor_u_0 FVar21;
  FScriptContainerElement *pFVar22;
  undefined1 auStackY_168 [32];
  FColor_u_0 local_100;
  uint uStack_fc;
  undefined1 local_f8 [8];
  TArray<FNavigationOctreeElement,TSizedDefaultAllocator<32>_> local_f0;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  undefined1 local_b8 [16];
  undefined **local_a8;
  TVector<double>_u_0 local_a0;
  uchar local_88;
  TVector<double>_u_0 local_78;
  double local_60;
  double local_58;
  double local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RecastNavMesh_OnStreamingNavDataAdded ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ARecastNavMesh::OnStreamingNavDataAdded(ANavigationDataChunkActor_&)_::_2_::FStat_STAT_RecastNavMesh_OnStreamingNavDataAdded>
         )0x0) {
      pFVar12 = ::FName::FName(&local_e0,"STAT_RecastNavMesh_OnStreamingNavDataAdded");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RecastNavMesh_OnStreamingNavDataAdded,
                 *pFVar12,L"STAT_RecastNavMesh_OnStreamingNavDataAdded","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_RecastNavMesh_OnStreamingNavDataAdded;
  if (StatPtr_STAT_RecastNavMesh_OnStreamingNavDataAdded ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ARecastNavMesh::OnStreamingNavDataAdded(ANavigationDataChunkActor_&)_::_2_::FStat_STAT_RecastNavMesh_OnStreamingNavDataAdded>
       )0x0) {
    pFVar12 = ::FName::FName(&local_e0,"STAT_RecastNavMesh_OnStreamingNavDataAdded");
    FVar13 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ARecastNavMesh::OnStreamingNavDataAdded(ANavigationDataChunkActor_&)_::_2_::FStat_STAT_RecastNavMesh_OnStreamingNavDataAdded>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RecastNavMesh_OnStreamingNavDataAdded,*pFVar12,
                          L"STAT_RecastNavMesh_OnStreamingNavDataAdded","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar13;
  bVar6 = false;
  bVar8 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  bVar9 = false;
  bVar10 = false;
  FVar21.Bits = (uint)FVar20.ComparisonIndex.Value;
  uVar19 = FVar20.Number;
  if ((FVar21.Bits == 0) && (bVar5 = bVar6, bVar7 = bVar8, uVar19 == 0)) {
LAB_146e1a650:
    bVar8 = bVar10;
    bVar6 = bVar9;
    bVar9 = false;
    local_d8 = local_d0;
    FVar20 = local_d0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_100.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_100._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar8 = true;
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_100.Bits = FVar21.Bits;
        uStack_fc = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_100._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                   ,0xc76);
        bVar6 = true;
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
      }
    }
    bVar5 = bVar6;
    bVar7 = bVar8;
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e1a650;
    local_100.Bits = FVar21.Bits;
    uStack_fc = uVar19;
    local_d8 = FVar20;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar9 = true;
  }
  cVar11 = (**(code **)(this->_padding_ + 0x788))(this);
  if ((cVar11 == '\0') || (this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0))
  goto LAB_146e1a9a7;
  if (FVisualLogger::bIsRecording != 0) {
    pTVar14 = (TBox<double> *)(**(code **)(param_1->_padding_ + 0x760))(param_1,&local_78);
    FVisualLogger::BoxLogfImpl
              ((UObject *)this,(FName *)&LogNavigation.field_0x4,Log,pTVar14,
               &UE::Math::TMatrix<double>::Identity,&FColor::Blue,false,L"");
  }
  pUVar15 = GetNavigationDataChunk
                      (this,(TArray<UNavigationDataChunk_*,TSizedDefaultAllocator<32>_> *)
                            &param_1->NavDataChunks);
  if (pUVar15 != (URecastNavMeshDataChunk *)0x0) {
    (**(code **)(this->_padding_ + 0x8f0))(this,pUVar15);
  }
  if (((this->bIsWorldPartitioned == 0) ||
      (cVar11 = (**(code **)(this->_padding_ + 0x780))(this), cVar11 == '\0')) ||
     (pUVar16 = AActor::GetWorld((AActor *)this), pUVar16 == (UWorld *)0x0)) goto LAB_146e1a9a7;
  this_00 = (UNavigationSystemV1 *)(pUVar16->NavigationSystem).field0_0x0.DebugPtr;
  if (this_00 == (UNavigationSystemV1 *)0x0) {
LAB_146e1a762:
    this_00 = (UNavigationSystemV1 *)0x0;
  }
  else {
    pUVar17 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar3 = (int)pUVar17->_padding_;
    if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar17->_padding_)) goto LAB_146e1a762;
  }
  if (this_00 != (UNavigationSystemV1 *)0x0) {
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_100.Bits = local_100.Bits & 0xfffffff1 | 0x11;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    pTVar14 = (TBox<double> *)(**(code **)(param_1->_padding_ + 0x760))(param_1,&local_78);
    UNavigationSystemV1::FindElementsInNavOctree
              (this_00,pTVar14,(FNavigationRelevantDataFilter *)&local_100._s_0,&local_f0);
    iVar3 = local_f0.ArrayNum;
    pFVar22 = local_f0.AllocatorInstance.Data + 0x28;
    pFVar2 = local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayNum * 0x48;
    while( true ) {
      if (local_f0.ArrayNum != iVar3) {
        `TCheckedPointerIterator<FNavigationOctreeElement,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      pFVar1 = pFVar22 + -0x28;
      if (pFVar1 == pFVar2) break;
      if (FVisualLogger::bIsRecording != 0) {
        local_88 = '\x01';
        local_a8 = (undefined **)(*(double *)(pFVar22 + -0x18) - *(double *)pFVar22);
        local_a0._s_0.Z = *(double *)(pFVar22 + -0x18) + *(double *)pFVar22;
        local_b8._8_4_ = SUB84(*(double *)(pFVar22 + -0x20) - *(double *)(pFVar22 + -8),0);
        local_b8._0_8_ = *(double *)&pFVar1->field_0x0 - *(double *)(pFVar22 + -0x10);
        local_b8._12_4_ =
             (int)((ulonglong)(*(double *)(pFVar22 + -0x20) - *(double *)(pFVar22 + -8)) >> 0x20);
        local_a0._s_0.X = *(double *)&pFVar1->field_0x0 + *(double *)(pFVar22 + -0x10);
        local_a0._s_0.Y = *(double *)(pFVar22 + -0x20) + *(double *)(pFVar22 + -8);
        FVisualLogger::BoxLogfImpl
                  ((UObject *)this,(FName *)&LogNavigation.field_0x4,Verbose,
                   (TBox<double> *)local_b8,&UE::Math::TMatrix<double>::Identity,&FColor::Orange,
                   false,L"");
      }
      ::FName::FName(&local_e0,"Streaming data added");
      pTVar4 = *(TReferenceControllerBase<1> **)((longlong)*(double *)(pFVar22 + 0x10) + 0x108);
      local_a0._s_0.X = *(double *)((longlong)*(double *)(pFVar22 + 0x10) + 0x100);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_a0._s_0.Z = 0.0;
      local_a8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`ARecastNavMesh::OnStreamingNavDataAdded'::`20'::<lambda_1>,0,0>
                  ::_vftable_;
      local_b8._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`ARecastNavMesh::OnStreamingNavDataAdded'::__l20::<lambda_1>,TSharedPtr<FNavigationElement_const_,1>_const_>
           ::Call;
      local_48 = 1;
      local_78._s_0.Z = *(double *)(pFVar22 + -0x18) - *(double *)pFVar22;
      local_50 = *(double *)(pFVar22 + -0x18) + *(double *)pFVar22;
      local_78._8_4_ = SUB84(*(double *)(pFVar22 + -0x20) - *(double *)(pFVar22 + -8),0);
      local_78._0_8_ = *(double *)(pFVar22 + -0x28) - *(double *)(pFVar22 + -0x10);
      local_78._12_4_ =
           (int)((ulonglong)(*(double *)(pFVar22 + -0x20) - *(double *)(pFVar22 + -8)) >> 0x20);
      local_60 = *(double *)(pFVar22 + -0x28) + *(double *)(pFVar22 + -0x10);
      local_58 = *(double *)(pFVar22 + -0x20) + *(double *)(pFVar22 + -8);
      local_a0._8_8_ = pTVar4;
      UNavigationSystemV1::AddDirtyArea
                (this_00,(TBox<double> *)&local_78._s_0,All,
                 (TFunction<TSharedPtr<FNavigationElement_const_,1>_const___cdecl(void)> *)local_b8,
                 &local_e0);
      if ((double)local_b8._0_8_ != 0.0) {
        uVar18 = &local_a8;
        if ((undefined ***)local_a0._s_0.Z != (undefined ***)0x0) {
          uVar18 = local_a0._s_0.Z;
        }
        (*(code *)(*(undefined ***)uVar18)[2])();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pFVar22 = pFVar22 + 0x48;
    }
    DestructItems<FNavigationOctreeElement,int>
              ((FNavigationOctreeElement *)local_f0.AllocatorInstance.Data,local_f0.ArrayNum);
    FVar20 = local_d8;
    bVar5 = bVar6;
    bVar7 = bVar8;
    if ((FNavigationOctreeElement *)local_f0.AllocatorInstance.Data !=
        (FNavigationOctreeElement *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
  }
LAB_146e1a9a7:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return;
}

// OnStreamingNavDataRemoved @ 146e1aa90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ARecastNavMesh::OnStreamingNavDataRemoved(ARecastNavMesh *this,ANavigationDataChunkActor *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_ARecastNavMesh::OnStreamingNavDataRemoved(ANavigationDataChunkActor_&)_::_2_::FStat_STAT_RecastNavMesh_OnStreamingNavDataRemoved>
  FVar7;
  TBox<double> *pTVar8;
  URecastNavMeshDataChunk *pUVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  undefined1 auStackY_f8 [32];
  LARGE_INTEGER local_98;
  FName local_90;
  FStatMessage local_80;
  undefined1 local_70 [56];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  FVar13.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_RecastNavMesh_OnStreamingNavDataRemoved ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ARecastNavMesh::OnStreamingNavDataRemoved(ANavigationDataChunkActor_&)_::_2_::FStat_STAT_RecastNavMesh_OnStreamingNavDataRemoved>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&local_98.s,"STAT_RecastNavMesh_OnStreamingNavDataRemoved")
        ;
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_RecastNavMesh_OnStreamingNavDataRemoved,*pFVar6,
                   L"STAT_RecastNavMesh_OnStreamingNavDataRemoved","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7 = StatPtr_STAT_RecastNavMesh_OnStreamingNavDataRemoved;
  if (StatPtr_STAT_RecastNavMesh_OnStreamingNavDataRemoved ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ARecastNavMesh::OnStreamingNavDataRemoved(ANavigationDataChunkActor_&)_::_2_::FStat_STAT_RecastNavMesh_OnStreamingNavDataRemoved>
       )0x0) {
    pFVar6 = ::FName::FName((FName *)&local_80,"STAT_RecastNavMesh_OnStreamingNavDataRemoved");
    FVar7 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_ARecastNavMesh::OnStreamingNavDataRemoved(ANavigationDataChunkActor_&)_::_2_::FStat_STAT_RecastNavMesh_OnStreamingNavDataRemoved>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_RecastNavMesh_OnStreamingNavDataRemoved,*pFVar6,
                         L"STAT_RecastNavMesh_OnStreamingNavDataRemoved","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_98.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_98.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.s.LowPart = FVar11.Value;
        local_98.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_98.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                   ,0xca3);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_98.s.LowPart = FVar11.Value;
      local_98.s.HighPart = uVar10;
      local_90 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar3 = true;
      FVar13.Value = local_90.ComparisonIndex.Value;
      goto LAB_146e1ac0d;
    }
  }
  bVar3 = false;
  FVar12 = local_90;
LAB_146e1ac0d:
  cVar5 = (**(code **)(this->_padding_ + 0x788))(this);
  if ((cVar5 != '\0') && (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0)) {
    if (FVisualLogger::bIsRecording != 0) {
      pTVar8 = (TBox<double> *)(**(code **)(param_1->_padding_ + 0x760))(param_1,local_70);
      FVisualLogger::BoxLogfImpl
                ((UObject *)this,(FName *)&LogNavigation.field_0x4,Log,pTVar8,
                 &UE::Math::TMatrix<double>::Identity,&FColor::Red,false,L"");
    }
    pUVar9 = GetNavigationDataChunk
                       (this,(TArray<UNavigationDataChunk_*,TSizedDefaultAllocator<32>_> *)
                             &param_1->NavDataChunks);
    if (pUVar9 != (URecastNavMeshDataChunk *)0x0) {
      (**(code **)(this->_padding_ + 0x8f8))(this,pUVar9);
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
      local_80.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_80.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_98);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_98.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_98.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_98.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_98.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_80);
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

// PostInitProperties @ 146e1b130

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ARecastNavMesh::PostInitProperties(ARecastNavMesh *this)

{
  if ((this->_padding_ & 0x10) != 0) {
    DrawDistanceSq = (double)this->DefaultDrawDistance * (double)this->DefaultDrawDistance;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        FNavMeshConfig::FRecastNamedFiltersCreator::FRecastNamedFiltersCreator
                  (&RecastNamedFiltersCreator,this->bUseVirtualFilters);
        _Init_thread_footer(&::_TSS0);
      }
    }
    NavLinkFlag = FNavMeshConfig::NavLinkFlag;
  }
  ANavigationData::PostInitProperties((ANavigationData *)this);
  if ((this->_padding_ & 0x410) == 0) {
    (**(code **)(this->_padding_ + 0x920))(this);
  }
  FRecastNavMeshGenerator::CalcPolyRefBits(this,&this->PolyRefTileBits,&this->PolyRefNavPolyBits);
  this->PolyRefSaltBits = (0x40 - this->PolyRefTileBits) - this->PolyRefNavPolyBits;
  return;
}

// PostLoad @ 146e1b230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ARecastNavMesh::PostLoad(ARecastNavMesh *this)

{
  UNavigationSystemBase *pUVar1;
  char cVar2;
  UWorld *pUVar3;
  TMulticastDelegate<void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  UWorldPartition *pUVar4;
  byte bVar5;
  ulonglong uVar6;
  FName local_res8;
  FString local_38 [3];
  
  if (5 < (byte)LogNavigation._0_1_) {
    if ((this == (ARecastNavMesh *)0x0) || (this->_padding_ == 0)) {
      ::FString::FString(local_38,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,local_38,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  ANavigationData::PostLoad((ANavigationData *)this);
  pUVar3 = AActor::GetWorld((AActor *)this);
  if (pUVar3 != (UWorld *)0x0) {
    pUVar1 = (pUVar3->NavigationSystem).field0_0x0.DebugPtr;
    if ((pUVar1 == (UNavigationSystemBase *)0x0) ||
       (cVar2 = (**(code **)(*(longlong *)pUVar1 + 0x330))(pUVar1), cVar2 == '\0')) {
      this_00 = UNavigationSystemBase::OnNavigationInitStartStaticDelegate();
      local_38[0].Data._8_8_ = (ulonglong)(uint)local_38[0].Data.ArrayMax << 0x20;
      local_38[0].Data.AllocatorInstance.Data =
           (FScriptContainerElement *)CheckToDiscardSubLevelNavData;
      TMulticastDelegateRegistration<void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<ARecastNavMesh>
                ((TMulticastDelegateRegistration<void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
                  *)this_00,(ARecastNavMesh *)&local_res8,(pmf_4d02ab89 *)this);
    }
    else {
      CheckToDiscardSubLevelNavData(this,pUVar1);
    }
  }
  uVar6 = 0;
  do {
    if ((1 < (byte)LogNavigation._0_1_) &&
       (this->TileSizeUU < this->NavMeshResolutionParams[uVar6].CellSize)) {
      local_res8 = (FName)this->_padding_;
      ::FName::ToString(&local_res8,local_38);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      }
    }
    bVar5 = (char)uVar6 + 1;
    uVar6 = (ulonglong)bVar5;
  } while (bVar5 < 3);
  pUVar3 = AActor::GetWorld((AActor *)this);
  if ((pUVar3 == (UWorld *)0x0) ||
     (pUVar4 = UWorld::GetWorldPartition(pUVar3), pUVar4 == (UWorldPartition *)0x0)) {
    this->bIsWorldPartitioned = 0;
  }
  (**(code **)(this->_padding_ + 0x920))(this);
  FRecastNavMeshGenerator::CalcPolyRefBits(this,&this->PolyRefTileBits,&this->PolyRefNavPolyBits);
  this->PolyRefSaltBits = (0x40 - this->PolyRefTileBits) - this->PolyRefNavPolyBits;
  return;
}

// PostLoadPreRebuild @ 146e1b4e0

void __thiscall ARecastNavMesh::PostLoadPreRebuild(ARecastNavMesh *this)

{
  int iVar1;
  int iVar2;
  UClass *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  FNavLinkId FVar6;
  FNavLinkGenerationJumpConfig *pFVar7;
  FNavLinkGenerationJumpConfig *pFVar8;
  undefined1 local_res8 [16];
  
  UnregisterGeneratedLinksProxy(this);
  iVar1 = (this->NavLinkJumpConfigs).ArrayNum;
  pFVar7 = (FNavLinkGenerationJumpConfig *)(this->NavLinkJumpConfigs).AllocatorInstance.Data;
  pFVar8 = pFVar7 + iVar1;
  while( true ) {
    if ((this->NavLinkJumpConfigs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNavLinkGenerationJumpConfig,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    (pFVar7->LinkProxy).field0_0x0.DebugPtr = (UBaseGeneratedNavLinksProxy *)0x0;
    if ((pFVar7->bEnabled != false) &&
       (pUVar3 = (pFVar7->LinkProxyClass).Class.field0_0x0.DebugPtr, pUVar3 != (UClass *)0x0)) {
      pUVar5 = Z_Construct_UClass_UBaseGeneratedNavLinksProxy_NoRegister();
      if (pUVar5 != (UClass *)0x0) {
        iVar2 = (int)pUVar5->_padding_;
        if (((int)pUVar3->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar5->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((bVar4) && ((pFVar7->LinkProxyClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
          FVar6 = FNavLinkId::GenerateUniqueId();
                    /* WARNING: Load size is inaccurate */
          CreateAndRegisterJumpLinksProxy(this,pFVar7,(FNavLinkId)*FVar6.Id);
        }
      }
    }
    pFVar7 = pFVar7 + 1;
  }
  return;
}

// PostRegisterAllComponents @ 146e1c650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ARecastNavMesh::PostRegisterAllComponents(ARecastNavMesh *this)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  UClass *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  FNavLinkId FVar7;
  FNavLinkGenerationJumpConfig *pFVar8;
  FNavLinkGenerationJumpConfig *pFVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 local_res8 [16];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  
  AActor::PostRegisterAllComponents((AActor *)this);
  lVar3 = this->_padding_;
  if (lVar3 == 0) {
    local_28 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    local_28 = *(double *)(lVar3 + 0x220);
    uVar10 = *(uint *)(lVar3 + 0x210);
    uVar11 = *(uint *)(lVar3 + 0x214);
    uVar12 = *(uint *)(lVar3 + 0x218);
    uVar13 = *(uint *)(lVar3 + 0x21c);
  }
  uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f1a36e2e0000000 < (double)CONCAT44(uVar11 & uVar15,uVar10 & uVar14)) ||
      (__real_3f1a36e2e0000000 < (double)CONCAT44(uVar13 & uVar15,uVar12 & uVar14))) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)local_28 >> 0x20) & uVar15,SUB84(local_28,0) & uVar14))) {
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uStack_34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uStack_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uStack_2c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    if (lVar3 != 0) {
      local_28 = *(double *)(lVar3 + 0x220);
      local_38 = *(undefined4 *)(lVar3 + 0x210);
      uStack_34 = *(undefined4 *)(lVar3 + 0x214);
      uStack_30 = *(undefined4 *)(lVar3 + 0x218);
      uStack_2c = *(undefined4 *)(lVar3 + 0x21c);
    }
    (**(code **)(this->_padding_ + 0x448))(this,&local_38,0);
  }
  iVar1 = (this->NavLinkJumpConfigs).ArrayNum;
  pFVar8 = (FNavLinkGenerationJumpConfig *)(this->NavLinkJumpConfigs).AllocatorInstance.Data;
  pFVar9 = pFVar8 + iVar1;
  while( true ) {
    if ((this->NavLinkJumpConfigs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNavLinkGenerationJumpConfig,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    if (((this->bGenerateNavLinks != 0) && (pFVar8->bEnabled != false)) &&
       ((pUVar4 = (pFVar8->LinkProxyClass).Class.field0_0x0.DebugPtr, pUVar4 != (UClass *)0x0 &&
        (pUVar6 = Z_Construct_UClass_UBaseGeneratedNavLinksProxy_NoRegister(),
        pUVar6 != (UClass *)0x0)))) {
      iVar2 = (int)pUVar6->_padding_;
      if (((int)pUVar4->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && ((pFVar8->LinkProxyClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
        FVar7.Id = (pFVar8->LinkProxyId).Id;
        if (FVar7.Id == 0) {
          FVar7 = FNavLinkId::GenerateUniqueId();
                    /* WARNING: Load size is inaccurate */
          FVar7.Id = *FVar7.Id;
        }
        CreateAndRegisterJumpLinksProxy(this,pFVar8,FVar7);
      }
    }
    pFVar8 = pFVar8 + 1;
  }
  return;
}

// PostUnregisterAllComponents @ 146e1c860

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ARecastNavMesh::PostUnregisterAllComponents(ARecastNavMesh *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  AActor::PostUnregisterAllComponents((AActor *)this);
  UnregisterGeneratedLinksProxy(this);
  iVar1 = (this->NavLinkJumpConfigs).ArrayNum;
  pFVar2 = (this->NavLinkJumpConfigs).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x60;
  while( true ) {
    if ((this->NavLinkJumpConfigs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNavLinkGenerationJumpConfig,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    *(undefined8 *)(pFVar2 + 0x50) = 0;
    pFVar2 = pFVar2 + 0x60;
  }
  return;
}

// ProjectPoint @ 146e1d170

bool __thiscall
ARecastNavMesh::ProjectPoint
          (ARecastNavMesh *this,TVector<double> *param_1,FNavLocation *param_2,
          TVector<double> *param_3,TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,
          UObject *param_5)

{
  FPImplRecastNavMesh *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  FNavigationQueryFilter *pFVar4;
  
  this_00 = (FPImplRecastNavMesh *)this->_padding_;
  bVar3 = false;
  if (this_00 != (FPImplRecastNavMesh *)0x0) {
    pFVar4 = param_4->Object;
    pTVar1 = (param_4->SharedReferenceCount).ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar4 == (FNavigationQueryFilter *)0x0) {
      pFVar4 = (FNavigationQueryFilter *)this->_padding_;
      pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    bVar3 = FPImplRecastNavMesh::ProjectPointToNavMesh
                      (this_00,param_1,param_2,param_3,pFVar4,param_5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return bVar3;
}

// ProjectPointMulti @ 146e1d240

bool __thiscall
ARecastNavMesh::ProjectPointMulti
          (ARecastNavMesh *this,TVector<double> *param_1,
          TArray<FNavLocation,TSizedDefaultAllocator<32>_> *param_2,TVector<double> *param_3,
          double param_4,double param_5,TSharedPtr<FNavigationQueryFilter_const_,1> *param_6,
          UObject *param_7)

{
  FPImplRecastNavMesh *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  FNavigationQueryFilter *pFVar4;
  
  this_00 = this->RecastNavMeshImpl;
  if (this_00 != (FPImplRecastNavMesh *)0x0) {
    pFVar4 = param_6->Object;
    pTVar1 = (param_6->SharedReferenceCount).ReferenceController;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar4 == (FNavigationQueryFilter *)0x0) {
      pFVar4 = (FNavigationQueryFilter *)this->_padding_;
      pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    bVar3 = FPImplRecastNavMesh::ProjectPointMulti
                      (this_00,param_1,param_2,param_3,param_4,param_5,pFVar4,param_7);
    if (bVar3) {
      bVar3 = true;
      goto LAB_146e1d30b;
    }
  }
  bVar3 = false;
LAB_146e1d30b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->SharedReferenceCount).ReferenceController);
  return bVar3;
}

// RebuildTile @ 146e1e0b0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

void __thiscall
ARecastNavMesh::RebuildTile
          (ARecastNavMesh *this,
          TArray<FNavMeshDirtyTileElement,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4225,"ARecastNavMesh::RebuildTile",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
               ,0x1081);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4225);
  }
  if ((0 < param_1->ArrayNum) &&
     ((FRecastNavMeshGenerator *)this->_padding_ != (FRecastNavMeshGenerator *)0x0)) {
    FRecastNavMeshGenerator::ReAddTiles((FRecastNavMeshGenerator *)this->_padding_,param_1);
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RecreateDefaultFilter @ 146e1eb10

void __thiscall ARecastNavMesh::RecreateDefaultFilter(ARecastNavMesh *this)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FRecastQueryFilter *this_00;
  UClass *pUVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 uVar11;
  TRawPtrProxy<FRecastQueryFilter> local_res8;
  
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar9 = this->_padding_;
  this_00 = ::operator_new(0x430);
  local_res8.Object = (FRecastQueryFilter *)0x0;
  if (this_00 != (FRecastQueryFilter *)0x0) {
    local_res8.Object = FRecastQueryFilter::FRecastQueryFilter(this_00,true);
  }
  TSharedPtr<INavigationQueryFilterInterface,1>::operator=<FRecastQueryFilter>
            ((TSharedPtr<INavigationQueryFilterInterface,1> *)(lVar9 + 0x10),&local_res8);
  if (((this->DefaultMaxSearchNodes < 0.0) || (__real_4f800000 < this->DefaultMaxSearchNodes)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DefaultMaxSearchNodes >= 0 && DefaultMaxSearchNodes <= (float)TNumericLimits<uint32>::Max()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                         ,0x3ad,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(int *)(this->_padding_ + 0x20) = (int)this->DefaultMaxSearchNodes;
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar10 = 0;
  plVar2 = *(longlong **)(this->_padding_ + 0x10);
  *(byte *)(plVar2 + 0x85) = this->bUseVirtualFilters;
  plVar2[0x82] = (longlong)(double)this->HeuristicScale;
  *(ushort *)(plVar2 + 0x84) = *(ushort *)(plVar2 + 0x84) & ~NavLinkFlag;
  if (0 < (int)this->_padding_) {
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (int)this->_padding_) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = this->_padding_;
      pUVar8 = *(UClass **)(lVar3 + 0x18 + lVar9);
      if (pUVar8 != (UClass *)0x0) {
        if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar8);
        }
        pUVar4 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
        pUVar8 = Z_Construct_UClass_UNavArea_NoRegister();
        iVar1 = (int)pUVar8->_padding_;
        if (((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
             &pUVar8->_padding_)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ret->IsA(T::StaticClass())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0x1181,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar11 = *(undefined4 *)&pUVar4[1].field_0x8;
        pcVar5 = *(code **)(*plVar2 + 0x10);
        uVar7 = *(uint *)(lVar3 + 0x10 + lVar9);
        if (((uVar7 != (uVar7 & 0xff)) || ((int)uVar7 < 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (*pcVar5)(plVar2,(char)uVar7,uVar11);
        pcVar5 = *(code **)(*plVar2 + 0x18);
        uVar11 = (**(code **)(*(longlong *)pUVar4 + 0x2d0))(pUVar4);
        uVar7 = *(uint *)(lVar3 + 0x10 + lVar9);
        if (((uVar7 != (uVar7 & 0xff)) || ((int)uVar7 < 0)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IntFitsIn<OutType>(In)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                               ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (*pcVar5)(plVar2,(char)uVar7,uVar11);
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x20;
    } while ((int)uVar10 < (int)this->_padding_);
  }
  return;
}

// RegisterGeneratedLinksProxy @ 146e1ee70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ARecastNavMesh::RegisterGeneratedLinksProxy(ARecastNavMesh *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UNavigationSystemBase *pUVar4;
  UWorld *pUVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->NavLinkJumpConfigs).AllocatorInstance.Data;
  iVar1 = (this->NavLinkJumpConfigs).ArrayNum;
  pFVar7 = pFVar3 + 0x50;
  while( true ) {
    if ((this->NavLinkJumpConfigs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNavLinkGenerationJumpConfig,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 + -0x50 == pFVar3 + (longlong)iVar1 * 0x60) break;
    if ((pFVar7[8] == (FScriptContainerElement)0x0) && (*(longlong *)pFVar7 != 0)) {
      pUVar5 = AActor::GetWorld((AActor *)this);
      if ((pUVar5 != (UWorld *)0x0) &&
         (pUVar4 = (pUVar5->NavigationSystem).field0_0x0.DebugPtr,
         pUVar4 != (UNavigationSystemBase *)0x0)) {
        pUVar6 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
        iVar2 = (int)pUVar6->_padding_;
        if ((iVar2 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar6->_padding_)) {
          if (4 < (byte)LogNavLink._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavLink);
          }
          (**(code **)(*(longlong *)pUVar4 + 0x400))(pUVar4,*(longlong *)pFVar7 + 0x28);
          pFVar7[8] = (FScriptContainerElement)0x1;
        }
      }
    }
    pFVar7 = pFVar7 + 0x60;
  }
  return;
}

// RemoveTileCacheLayers @ 146e20b30

void __thiscall ARecastNavMesh::RemoveTileCacheLayers(ARecastNavMesh *this,int param_1,int param_2)

{
  FPImplRecastNavMesh *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  TIntPoint<int> aTStackX_8 [4];
  
  pFVar1 = this->RecastNavMeshImpl;
  if (pFVar1 == (FPImplRecastNavMesh *)0x0) {
    return;
  }
  aTStackX_8[0].field0_0x0._s_0.Y = param_2;
  aTStackX_8[0].field0_0x0._s_0.X = param_1;
  if (*(int *)&(pFVar1->CompressedTileCacheLayers).field_0x8 !=
      *(int *)&(pFVar1->CompressedTileCacheLayers).field_0x34) {
    uVar4 = param_1 - param_2 ^ (uint)param_2 >> 0xd;
    uVar3 = (-0x61c88647 - uVar4) - param_2 ^ uVar4 << 8;
    uVar2 = (param_2 - uVar4) - uVar3 ^ uVar3 >> 0xd;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 5;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 10;
    TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<UE::Math::TIntPoint<int>_>
              ((TSet<TTuple<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TArray<FNavMeshTileData,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&pFVar1->CompressedTileCacheLayers,(uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xf,
               aTStackX_8);
  }
  return;
}

// RemoveTileDebugData @ 146e20c20

void __thiscall ARecastNavMesh::RemoveTileDebugData(ARecastNavMesh *this,int param_1,int param_2)

{
  FPImplRecastNavMesh *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  TIntPoint<int> local_res8 [4];
  
  pFVar1 = this->RecastNavMeshImpl;
  if (pFVar1 != (FPImplRecastNavMesh *)0x0) {
    local_res8[0].field0_0x0._s_0.Y = param_2;
    local_res8[0].field0_0x0._s_0.X = param_1;
    if (*(int *)&(pFVar1->DebugDataMap).field_0x8 != *(int *)&(pFVar1->DebugDataMap).field_0x34) {
      uVar4 = param_1 - param_2 ^ (uint)param_2 >> 0xd;
      uVar3 = (-0x61c88647 - uVar4) - param_2 ^ uVar4 << 8;
      uVar2 = (param_2 - uVar4) - uVar3 ^ uVar3 >> 0xd;
      uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xc;
      uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 0x10;
      uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 5;
      uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 3;
      uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 10;
      TSet<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>,FDefaultSetAllocator>
      ::RemoveImpl<UE::Math::TIntPoint<int>_>
                ((TSet<TTuple<UE::Math::TIntPoint<int>,FRecastInternalDebugData>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FRecastInternalDebugData,0>,FDefaultSetAllocator>
                  *)&pFVar1->DebugDataMap,(uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xf,local_res8);
    }
  }
  return;
}

// RemoveTiles @ 146e20d00

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

void __thiscall
ARecastNavMesh::RemoveTiles
          (ARecastNavMesh *this,
          TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4211,"ARecastNavMesh::RemoveTiles",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
               ,0x1073);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4211);
  }
  if ((0 < param_1->ArrayNum) &&
     ((FRecastNavMeshGenerator *)this->_padding_ != (FRecastNavMeshGenerator *)0x0)) {
    FRecastNavMeshGenerator::RemoveTiles((FRecastNavMeshGenerator *)this->_padding_,param_1);
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ReplaceAreaInTileBounds @ 146e20da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
ARecastNavMesh::ReplaceAreaInTileBounds
          (ARecastNavMesh *this,TBox<double> *param_1,TSubclassOf<UNavArea> param_2,
          TSubclassOf<UNavArea> param_3,bool param_4,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_5)

{
  float fVar1;
  undefined8 uVar2;
  ushort uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_public:_int___cdecl_ARecastNavMesh::ReplaceAreaInTileBounds(UE::Math::TBox<double>_const_&,TSubclassOf<UNavArea>,TSubclassOf<UNavArea>,bool,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_*)_::_8_::FStat_STAT_RecastNavMesh_ReplaceAreaInTiles>
  FVar15;
  UClass *pUVar16;
  ulong64 uVar17;
  dtMeshTile *pdVar18;
  longlong lVar19;
  int iVar20;
  FName FVar21;
  int iVar22;
  uchar *puVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  FName this_00;
  undefined1 auVar27 [16];
  undefined1 local_c8 [4];
  uint local_c4;
  int local_c0;
  FName local_b8;
  int local_b0;
  ForAnyElementType local_a8;
  int local_a0 [2];
  FColor_u_0 local_98 [2];
  FRcTileBox local_90;
  FName local_80;
  ulonglong local_78;
  FName local_70;
  FName local_68;
  TVector<double>_u_0 local_50;
  FName local_38;
  FName local_30;
  
  if (param_1->IsValid == '\0') {
    local_c8[0] = 0;
    bVar7 = `ARecastNavMesh::ReplaceAreaInTileBounds'::__l3::<lambda_1>::operator()(local_c8);
    if (!bVar7) {
      return 0;
    }
  }
  iVar9 = 0;
  if (this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) {
    return 0;
  }
  if (this->RecastNavMeshImpl->DetourNavMesh == (dtNavMesh *)0x0) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RecastNavMesh_ReplaceAreaInTiles ==
        (FThreadSafeStaticStat<_public:_int___cdecl_ARecastNavMesh::ReplaceAreaInTileBounds(UE::Math::TBox<double>_const_&,TSubclassOf<UNavArea>,TSubclassOf<UNavArea>,bool,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_*)_::_8_::FStat_STAT_RecastNavMesh_ReplaceAreaInTiles>
         )0x0) {
      pFVar14 = ::FName::FName(&local_38,"STAT_RecastNavMesh_ReplaceAreaInTiles");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RecastNavMesh_ReplaceAreaInTiles,
                 *pFVar14,L"STAT_RecastNavMesh_ReplaceAreaInTiles","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar15 = StatPtr_STAT_RecastNavMesh_ReplaceAreaInTiles;
  if (StatPtr_STAT_RecastNavMesh_ReplaceAreaInTiles ==
      (FThreadSafeStaticStat<_public:_int___cdecl_ARecastNavMesh::ReplaceAreaInTileBounds(UE::Math::TBox<double>_const_&,TSubclassOf<UNavArea>,TSubclassOf<UNavArea>,bool,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_*)_::_8_::FStat_STAT_RecastNavMesh_ReplaceAreaInTiles>
       )0x0) {
    pFVar14 = ::FName::FName(&local_30,"STAT_RecastNavMesh_ReplaceAreaInTiles");
    FVar15 = (FThreadSafeStaticStat<_public:_int___cdecl_ARecastNavMesh::ReplaceAreaInTileBounds(UE::Math::TBox<double>_const_&,TSubclassOf<UNavArea>,TSubclassOf<UNavArea>,bool,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_*)_::_8_::FStat_STAT_RecastNavMesh_ReplaceAreaInTiles>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RecastNavMesh_ReplaceAreaInTiles,*pFVar14,
                          L"STAT_RecastNavMesh_ReplaceAreaInTiles","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar15;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  bVar5 = false;
  bVar7 = false;
  if ((FVar21.ComparisonIndex.Value.Value == 0) && (FVar21.Number == 0)) {
LAB_146e20f67:
    bVar6 = false;
    local_70 = local_68;
    FVar21 = local_68;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_98[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_98[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_80.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                   ,0xa0a);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e20f67;
    local_b8 = FVar21;
    local_70 = FVar21;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar6 = true;
  }
  lVar19 = *(longlong *)param_2.Class.field0_0x0;
  if ((lVar19 == 0) ||
     (pUVar16 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar16 == (UClass *)0x0)) {
LAB_146e20faa:
    pUVar16 = (UClass *)0x0;
  }
  else {
    iVar11 = (int)pUVar16->_padding_;
    if ((*(int *)(lVar19 + 0x38) < iVar11) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar19 + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar16->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) goto LAB_146e20faa;
    pUVar16 = *(UClass **)param_2.Class.field0_0x0;
  }
  local_c4 = ANavigationData::GetAreaID((ANavigationData *)this,pUVar16);
  if ((local_c4 == 0xffffffff) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6996127874050689549>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                         ,0xa0d,"OldAreaID != INDEX_NONE"), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return iVar9;
  }
  lVar19 = *(longlong *)param_3.Class.field0_0x0;
  if ((lVar19 != 0) &&
     (pUVar16 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar16 != (UClass *)0x0)) {
    iVar11 = (int)pUVar16->_padding_;
    if ((*(int *)(lVar19 + 0x38) < iVar11) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar19 + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar16->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      pUVar16 = *(UClass **)param_3.Class.field0_0x0;
      goto LAB_146e21026;
    }
  }
  pUVar16 = (UClass *)0x0;
LAB_146e21026:
  uVar10 = ANavigationData::GetAreaID((ANavigationData *)this,pUVar16);
  if ((uVar10 == 0xffffffff) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6996127874050689551>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                         ,0xa0f,"NewAreaID != INDEX_NONE"), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return iVar9;
  }
  if ((uVar10 == local_c4) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6996127874050689552>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                         ,0xa10,"NewAreaID != OldAreaID"), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return iVar9;
  }
  fVar1 = this->NavMeshResolutionParams[1].CellSize;
  uVar2 = *(undefined8 *)&(this->NavMeshOriginOffset).field0_0x0;
  local_50._s_0.X =
       (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar2 ^ (uint)__xmm_80000000000000008000000000000000);
  uVar2 = *(undefined8 *)((longlong)&(this->NavMeshOriginOffset).field0_0x0 + 8);
  local_50._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar2 ^ (uint)__xmm_80000000000000008000000000000000);
  local_50._s_0.Y = (this->NavMeshOriginOffset).field0_0x0._s_0.Z;
  this_00 = (FName)this->RecastNavMeshImpl->DetourNavMesh;
  auVar27 = ZEXT416((uint)(this->TileSizeUU / fVar1));
  auVar27 = roundps(auVar27,auVar27,3);
  local_b8 = this_00;
  FRcTileBox::FRcTileBox
            (&local_90,param_1,(TVector<double> *)&local_50._s_0,(double)(auVar27._0_4_ * fVar1));
  local_c0 = local_90.YMin;
  iVar11 = local_90.YMax;
  iVar22 = local_90.XMax;
  if (local_90.YMin <= local_90.YMax) {
    do {
      local_b0 = local_90.XMin;
      iVar12 = local_90.YMin;
      iVar20 = local_90.XMin;
      local_c0 = local_90.YMin;
      if (local_90.XMin <= iVar22) {
        do {
          local_b0 = iVar20;
          iVar11 = dtNavMesh::getTileCountAt((dtNavMesh *)this_00,iVar20,iVar12);
          if (iVar11 != 0) {
            uVar25 = 0;
            local_a8.Data = (FScriptContainerElement *)0x0;
            local_a0[0] = 0;
            local_a0[1] = 0;
            iVar12 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (8,8,iVar11,&local_a8,local_a0,local_a0 + 1);
            memset(local_a8.Data + (longlong)iVar12 * 8,0,(longlong)iVar11 << 3);
            FVar21 = local_b8;
            local_78 = 0;
            iVar11 = dtNavMesh::getTilesAt
                               ((dtNavMesh *)local_b8,iVar20,local_c0,(dtMeshTile **)local_a8.Data,
                                iVar11);
            uVar26 = uVar25;
            if (0 < (longlong)iVar11) {
              do {
                uVar24 = (uint)uVar25;
                uVar13 = 0;
                if ((int)uVar24 < local_a0[0]) {
                  uVar13 = ~uVar24 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  iVar9 = (*pcVar4)();
                  return iVar9;
                }
                uVar17 = dtNavMesh::getTileRef
                                   ((dtNavMesh *)FVar21,*(dtMeshTile **)(local_a8.Data + uVar26 * 8)
                                   );
                if (((uVar17 != 0) &&
                    (pdVar18 = dtNavMesh::getTile((dtNavMesh *)FVar21,
                                                  (int)(1L << ((byte)((dtNavMesh *)FVar21)->
                                                                     m_tileBits & 0x3f)) - 1U &
                                                  (uint)(uVar17 >>
                                                        ((byte)((dtNavMesh *)FVar21)->m_polyBits &
                                                        0x3f))), pdVar18 != (dtMeshTile *)0x0)) &&
                   (pdVar18->header != (dtMeshHeader *)0x0)) {
                  lVar19 = 4;
                  if (!param_4) {
                    lVar19 = 0x1c;
                  }
                  uVar3 = *(ushort *)((longlong)pdVar18->header->bmin + lVar19 + -0x28);
                  if (uVar3 != 0) {
                    uVar25 = (ulonglong)uVar3;
                    puVar23 = &pdVar18->polys->areaAndtype;
                    uVar13 = local_c4;
                    do {
                      if ((*puVar23 & 0x3f) == uVar13) {
                        if (((uVar10 != (uVar10 & 0xff)) || ((int)uVar10 < 0)) &&
                           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                              ("IntFitsIn<OutType>(In)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                               ,0xaa,
                                               L"Loss of data caused by narrowing conversion, In = %lld"
                                              ), uVar13 = local_c4, bVar8)) {
                          pcVar4 = (code *)swi(3);
                          iVar9 = (*pcVar4)();
                          return iVar9;
                        }
                        *puVar23 = *puVar23 ^ ((byte)uVar10 ^ *puVar23) & 0x3f;
                        iVar9 = iVar9 + 1;
                      }
                      puVar23 = puVar23 + 0x20;
                      uVar25 = uVar25 - 1;
                      FVar21 = local_b8;
                      uVar26 = local_78;
                    } while (uVar25 != 0);
                  }
                }
                local_78 = uVar26 + 1;
                uVar25 = (ulonglong)(uVar24 + 1);
                uVar26 = local_78;
                iVar22 = local_90.XMax;
                iVar20 = local_b0;
              } while ((longlong)local_78 < (longlong)iVar11);
            }
            this_00 = local_b8;
            iVar12 = local_c0;
            if (local_a8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data);
              this_00 = local_b8;
              iVar12 = local_c0;
            }
          }
          iVar20 = iVar20 + 1;
          iVar11 = local_90.YMax;
          local_b0 = iVar20;
        } while (iVar20 <= iVar22);
      }
      local_90.YMin = iVar12 + 1;
      FVar21 = local_70;
      local_c0 = local_90.YMin;
    } while (local_90.YMin <= iVar11);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  return iVar9;
}

// RequestDrawingUpdate @ 146e21450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ARecastNavMesh::RequestDrawingUpdate(ARecastNavMesh *this,bool param_1)

{
  code *pcVar1;
  uint *puVar2;
  int iVar3;
  UGameViewportClient *pUVar4;
  bool bVar5;
  UWorld *pUVar6;
  FWorldContext *pFVar7;
  UClass *pUVar8;
  FName *pFVar9;
  FName FVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  FName local_res18;
  FConstructor local_res20;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  if (param_1) {
    if (this->_padding_ != 0) {
      pUVar8 = UNavMeshRenderingComponent::StaticClass();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar8);
      if ((bVar5) && (this->_padding_ != 0)) {
        puVar2 = (uint *)(this->_padding_ + 0x5b0);
        *puVar2 = *puVar2 | 2;
      }
    }
  }
  else {
    pUVar6 = AActor::GetWorld((AActor *)this);
    pFVar7 = UEngine::GetWorldContextFromWorld(GEngine,pUVar6);
    if (pFVar7 == (FWorldContext *)0x0) {
      return;
    }
    pUVar4 = (pFVar7->GameViewport).field0_0x0.DebugPtr;
    if (pUVar4 == (UGameViewportClient *)0x0) {
      return;
    }
    if ((pUVar4->EngineShowFlags).Navigation == 0) {
      return;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FSimpleDelegateGraphTask_RequestingNavmeshRedraw ==
        (FThreadSafeStaticStat<_public:_void___cdecl_ARecastNavMesh::RequestDrawingUpdate(bool)_::_5_::FStat_STAT_FSimpleDelegateGraphTask_RequestingNavmeshRedraw>
         )0x0) {
      pFVar9 = ::FName::FName(&local_res18,"STAT_FSimpleDelegateGraphTask_RequestingNavmeshRedraw");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FSimpleDelegateGraphTask_RequestingNavmeshRedraw,*pFVar9,
                 L"FSimpleDelegateGraphTask.Requesting navmesh redraw","STATGROUP_TaskGraphTasks",
                 "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = (FName)StatPtr_STAT_FSimpleDelegateGraphTask_RequestingNavmeshRedraw;
  if (StatPtr_STAT_FSimpleDelegateGraphTask_RequestingNavmeshRedraw ==
      (FThreadSafeStaticStat<_public:_void___cdecl_ARecastNavMesh::RequestDrawingUpdate(bool)_::_5_::FStat_STAT_FSimpleDelegateGraphTask_RequestingNavmeshRedraw>
       )0x0) {
    pFVar9 = ::FName::FName(&local_res18,"STAT_FSimpleDelegateGraphTask_RequestingNavmeshRedraw");
    FVar10 = (FName)FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)
                               &StatPtr_STAT_FSimpleDelegateGraphTask_RequestingNavmeshRedraw,
                               *pFVar9,L"FSimpleDelegateGraphTask.Requesting navmesh redraw",
                               "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",
                               true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_88 = UpdateDrawing;
  uStack_80 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VARecastNavMesh____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ARecastNavMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar11[3] = 0;
    local_res18 = (FName)this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ARecastNavMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res18);
    puVar11[4] = local_88;
    puVar11[5] = CONCAT44(uStack_7c,uStack_80);
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  local_res20.Prerequisites =
       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        *)0x0;
  local_res18 = FVar10;
  TGraphTask<FSimpleDelegateGraphTask>::FConstructor::
  ConstructAndDispatchWhenReady<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_const_&,TStatId_const_&,enum_ENamedThreads::Type_&>
            (&local_res20,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_88,
             (TStatId *)&local_68,(Type *)&local_res18);
  if (local_88 != (code *)0x0) {
    LOCK();
    pcVar1 = local_88 + 0x30;
    iVar3 = *(int *)pcVar1;
    *(int *)pcVar1 = *(int *)pcVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)local_88)(local_88,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_88);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_78 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
               (FDestructionSentinel *)&local_88);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return;
}

// RestrictBuildingToActiveTiles @ 146e21fc0

void __thiscall ARecastNavMesh::RestrictBuildingToActiveTiles(ARecastNavMesh *this,bool param_1)

{
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146e21fcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0xb8))();
    return;
  }
  return;
}

// Serialize @ 146e226b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ARecastNavMesh::Serialize(ARecastNavMesh *this,FArchive *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint local_res8 [2];
  FString local_58;
  FString local_48;
  FString local_38;
  
  AActor::Serialize((AActor *)this,param_1);
  puVar1 = &this->NavMeshVersion;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  local_res8[0] = 0;
  lVar7 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  if ((param_1->field_0x28 & 1) == 0) {
    SerializeRecastNavMesh(this,param_1,&this->RecastNavMeshImpl,*puVar1);
    if ((param_1->field_0x28 & 4) == 0) {
      return;
    }
    lVar8 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    uVar9 = lVar8 - lVar7;
    if (((uVar9 != (uVar9 & 0xffffffff)) || ((longlong)uVar9 < 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar6))
    {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_res8[0] = (uint)uVar9;
    (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,lVar7);
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)*plVar4 + 1 <= (uint *)plVar4[1]) {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,lVar8);
      return;
    }
    if ((param_1->field_0x2a & 1) != 0) {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,lVar8);
      return;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,lVar8);
    return;
  }
  uVar9 = (ulonglong)local_res8[0];
  if ((*puVar1 - 0x14 < 7) && (3 < (byte)LogNavigation._0_1_)) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  uVar2 = *puVar1;
  if (uVar2 < 0x14) {
    if ((byte)LogNavigation._0_1_ < 3) goto LAB_146e228c1;
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
  }
  else {
    if (uVar2 < 0x1c) {
      if (4 < local_res8[0]) {
        SerializeRecastNavMesh(this,param_1,&this->RecastNavMeshImpl,uVar2);
        RequestDrawingUpdate(this,false);
        return;
      }
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,(ulonglong)local_res8[0] + lVar7);
      if (this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) {
        return;
      }
      FPImplRecastNavMesh::ReleaseDetourNavMesh(this->RecastNavMeshImpl);
      return;
    }
    if ((byte)LogNavigation._0_1_ < 3) goto LAB_146e228c1;
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    local_48.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_146e228c1:
  (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,lVar7 + uVar9);
  (**(code **)(this->_padding_ + 0x768))(this);
  return;
}

// Serialize @ 146e22a60

void __thiscall ARecastNavMesh::Serialize(ARecastNavMesh *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SerializeRecastNavMesh @ 146e28530

void __thiscall
ARecastNavMesh::SerializeRecastNavMesh
          (ARecastNavMesh *this,FArchive *param_1,FPImplRecastNavMesh **param_2,int param_3)

{
  FPImplRecastNavMesh *this_00;
  FPImplRecastNavMesh *pFVar1;
  
  if ((param_1->field_0x28 & 1) == 0) {
    if (*param_2 == (FPImplRecastNavMesh *)0x0) {
      return;
    }
  }
  else if (this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) {
    this_00 = ::operator_new(0x150);
    pFVar1 = (FPImplRecastNavMesh *)0x0;
    if (this_00 != (FPImplRecastNavMesh *)0x0) {
      pFVar1 = FPImplRecastNavMesh::FPImplRecastNavMesh(this_00,this);
    }
    this->RecastNavMeshImpl = pFVar1;
  }
  if (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) {
    FPImplRecastNavMesh::Serialize(this->RecastNavMeshImpl,param_1,param_3);
  }
  return;
}

// SetConfig @ 146e286e0

void __thiscall ARecastNavMesh::SetConfig(ARecastNavMesh *this,FNavDataConfig *param_1)

{
  float *pfVar1;
  float fVar2;
  
  FNavDataConfig::operator=((FNavDataConfig *)&this->_padding_,param_1);
  FNavAgentProperties::operator=
            ((FNavAgentProperties *)&this->_padding_,(FNavAgentProperties *)param_1);
  pfVar1 = (float *)((longlong)&param_1->_padding_ + 4);
  if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
    *(float *)((longlong)&this->_padding_ + 4) = this->NavMeshResolutionParams[1].AgentMaxStepHeight
    ;
  }
  this->AgentHeight = *(float *)&this->_padding_;
  this->AgentRadius = *(float *)((longlong)&this->_padding_ + 4);
  pfVar1 = (float *)((longlong)&param_1->_padding_ + 4);
  if (0.0 < *pfVar1 || *pfVar1 == 0.0) {
    fVar2 = *(float *)((longlong)&this->_padding_ + 4);
    this->NavMeshResolutionParams[0].AgentMaxStepHeight = fVar2;
    this->NavMeshResolutionParams[1].AgentMaxStepHeight = fVar2;
    this->NavMeshResolutionParams[2].AgentMaxStepHeight = fVar2;
  }
  return;
}

// SetDefaultForbiddenFlags @ 146e28770

void __thiscall ARecastNavMesh::SetDefaultForbiddenFlags(ARecastNavMesh *this,ushort param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  ushort *puVar4;
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)(this->_padding_ + 0x10);
  puVar4 = (ushort *)(lVar1 + 0x422);
  if (lVar1 == 0) {
    puVar4 = (ushort *)&DAT_0000041a;
  }
  *puVar4 = param_1;
  return;
}

// SetMaxSimultaneousTileGenerationJobsCount @ 146e28b40

void __thiscall
ARecastNavMesh::SetMaxSimultaneousTileGenerationJobsCount(ARecastNavMesh *this,int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (0 < param_1) {
    iVar1 = param_1;
  }
  if (this->MaxSimultaneousTileGenerationJobsCount != iVar1) {
    this->MaxSimultaneousTileGenerationJobsCount = iVar1;
    if (this->_padding_ != 0) {
      *(int *)(this->_padding_ + 0x154) = iVar1;
    }
  }
  return;
}

// SetPolyArea @ 146e291f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
ARecastNavMesh::SetPolyArea(ARecastNavMesh *this,ulong64 param_1,TSubclassOf<UNavArea> param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  dtNavMesh *this_00;
  bool bVar4;
  uchar uVar5;
  int iVar6;
  uint uVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  UNavArea *pUVar11;
  bool bVar12;
  bool bVar13;
  
  lVar3 = *(longlong *)param_2.Class.field0_0x0;
  bVar13 = false;
  bVar12 = false;
  if ((lVar3 != 0) && (pUVar8 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar8 != (UClass *)0x0))
  {
    iVar6 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar6) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar8->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((bVar4) && (lVar3 = *(longlong *)param_2.Class.field0_0x0, lVar3 != 0)) &&
       (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0)) {
      this_00 = this->RecastNavMeshImpl->DetourNavMesh;
      pUVar9 = Z_Construct_UClass_UNavArea_NoRegister();
      pUVar8 = (UClass *)0x0;
      pUVar10 = pUVar8;
      if (pUVar9 != (UClass *)0x0) {
        iVar6 = (int)pUVar9->_padding_;
        if ((*(int *)(lVar3 + 0x38) < iVar6) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar6 * 8) !=
            &pUVar9->_padding_)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if (bVar12) {
          pUVar10 = *(UClass **)param_2.Class.field0_0x0;
        }
      }
      iVar6 = ANavigationData::GetAreaID((ANavigationData *)this,pUVar10);
      lVar3 = *(longlong *)param_2.Class.field0_0x0;
      if ((lVar3 != 0) &&
         (pUVar10 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar10 != (UClass *)0x0)) {
        iVar2 = (int)pUVar10->_padding_;
        if ((*(int *)(lVar3 + 0x38) < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar10->_padding_)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if (bVar12) {
          pUVar8 = *(UClass **)param_2.Class.field0_0x0;
        }
      }
      pUVar11 = UClass::GetDefaultObject<UNavArea>(pUVar8);
      uVar1 = pUVar11->AreaFlags;
      bVar12 = bVar13;
      if ((iVar6 != -1) && (this_00 != (dtNavMesh *)0x0)) {
        uVar5 = IntCastChecked<unsigned_char,int>(iVar6);
        uVar7 = dtNavMesh::setPolyArea(this_00,param_1,uVar5);
        if (((uVar7 >> 0x1e & 1) != 0) &&
           (uVar7 = dtNavMesh::setPolyFlags(this_00,param_1,uVar1), (uVar7 >> 0x1e & 1) != 0)) {
          bVar12 = true;
        }
      }
    }
  }
  return bVar12;
}

// SetPolyArrayArea @ 146e29390

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
ARecastNavMesh::SetPolyArrayArea
          (ARecastNavMesh *this,TArray<FNavPoly,TSizedDefaultAllocator<32>_> *param_1,
          TSubclassOf<UNavArea> param_2)

{
  ushort uVar1;
  int iVar2;
  dtNavMesh *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UClass *pUVar7;
  UNavArea *pUVar8;
  uint uVar9;
  longlong lVar10;
  
  lVar10 = *(longlong *)param_2.Class.field0_0x0;
  if (lVar10 == 0) {
    return;
  }
  pUVar7 = Z_Construct_UClass_UNavArea_NoRegister();
  if (pUVar7 == (UClass *)0x0) {
    return;
  }
  iVar2 = (int)pUVar7->_padding_;
  if ((*(int *)(lVar10 + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar7->_padding_)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  lVar10 = *(longlong *)param_2.Class.field0_0x0;
  if (lVar10 == 0) {
    return;
  }
  if (this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) {
    return;
  }
  this_00 = this->RecastNavMeshImpl->DetourNavMesh;
  pUVar7 = Z_Construct_UClass_UNavArea_NoRegister();
  if (pUVar7 == (UClass *)0x0) {
LAB_146e29442:
    pUVar7 = (UClass *)0x0;
  }
  else {
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar10 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar7->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_146e29442;
    pUVar7 = *(UClass **)param_2.Class.field0_0x0;
  }
  uVar5 = ANavigationData::GetAreaID((ANavigationData *)this,pUVar7);
  lVar10 = *(longlong *)param_2.Class.field0_0x0;
  if ((lVar10 != 0) && (pUVar7 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar7 != (UClass *)0x0))
  {
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar10 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar7->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar7 = *(UClass **)param_2.Class.field0_0x0;
      goto LAB_146e2948c;
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_146e2948c:
  pUVar8 = UClass::GetDefaultObject<UNavArea>(pUVar7);
  uVar1 = pUVar8->AreaFlags;
  if (((uVar5 != 0xffffffff) && (this_00 != (dtNavMesh *)0x0)) && (uVar9 = 0, 0 < param_1->ArrayNum)
     ) {
    lVar10 = 0;
    do {
      if (((uVar5 != (uVar5 & 0xff)) || ((int)uVar5 < 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4
         )) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dtNavMesh::setPolyArea
                (this_00,*(ulong64 *)((param_1->AllocatorInstance).Data + lVar10),(uchar)uVar5);
      uVar6 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dtNavMesh::setPolyFlags
                (this_00,*(ulong64 *)((param_1->AllocatorInstance).Data + lVar10),uVar1);
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x20;
    } while ((int)uVar9 < param_1->ArrayNum);
  }
  return;
}

// SortAreasForGenerator @ 146e29bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
ARecastNavMesh::SortAreasForGenerator
          (ARecastNavMesh *this,
          TArray<FRecastAreaNavModifierElement,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  longlong local_260;
  undefined1 local_258;
  FIdentityFunctor local_257 [15];
  float local_248 [64];
  float local_148 [64];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_288;
  if (this->_padding_ == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FNavigationQueryFilter::GetAllAreaCosts
            ((FNavigationQueryFilter *)this->_padding_,local_248,local_148,0x40);
  iVar2 = param_1->ArrayNum;
  pFVar10 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar10 + (longlong)iVar2 * 0x28;
  do {
    if (param_1->ArrayNum != iVar2) {
      local_258 = 0;
      `TCheckedPointerIterator<FRecastAreaNavModifierElement,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_258);
    }
    if (pFVar10 == pFVar1) {
      AlgoImpl::
      IntroSortInternal<FRecastAreaNavModifierElement,int,FIdentityFunctor,TDereferenceWrapper<FRecastAreaNavModifierElement,_ARecastNavMesh::SortAreasForGenerator_::__l2::FNavAreaSortPredicate>_>
                ((FRecastAreaNavModifierElement *)(param_1->AllocatorInstance).Data,
                 param_1->ArrayNum,local_257[0],(FNavAreaSortPredicate *)local_257);
      return;
    }
    iVar3 = *(int *)(pFVar10 + 8);
    if (iVar3 != 0) {
      if (iVar3 < 1) {
        local_268 = 0;
        local_260 = (longlong)iVar3;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar4 = *(longlong *)pFVar10;
      pUVar8 = (UClass *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar4 + 0xc));
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar8 != (UClass *)0x0) goto LAB_146e29ce8;
LAB_146e29d16:
        pUVar8 = (UClass *)0x0;
      }
      else {
        if (pUVar8 == (UClass *)0x0) goto LAB_146e29d16;
        UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_146e29ce8:
        pUVar9 = Z_Construct_UClass_UNavAreaBase_NoRegister();
        if (pUVar9 == (UClass *)0x0) goto LAB_146e29d16;
        iVar3 = (int)pUVar9->_padding_;
        if (((int)pUVar8->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar9->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_146e29d16;
      }
      uVar7 = ANavigationData::GetAreaID((ANavigationData *)this,pUVar8);
      if (uVar7 < 0x40) {
        *(float *)(lVar4 + 4) = local_248[(int)uVar7];
        *(float *)(lVar4 + 8) = local_148[(int)uVar7];
      }
    }
    pFVar10 = pFVar10 + 0x28;
  } while( true );
}

// StaticRegisterNativesARecastNavMesh @ 146e29dd0

void __cdecl ARecastNavMesh::StaticRegisterNativesARecastNavMesh(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ARecastNavMesh_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SupportsRuntimeGeneration @ 146e2aa10

bool __thiscall ARecastNavMesh::SupportsRuntimeGeneration(ARecastNavMesh *this)

{
  return *(char *)((longlong)&this->_padding_ + 4) != '\0';
}

// SupportsStreaming @ 146e2aa30

bool __thiscall ARecastNavMesh::SupportsStreaming(ARecastNavMesh *this)

{
  if ((*(char *)((longlong)&this->_padding_ + 4) == '\x02') && (this->bIsWorldPartitioned == 0)) {
    return false;
  }
  return true;
}

// TestHierarchicalPath @ 146e2ac20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
ARecastNavMesh::TestHierarchicalPath
          (FNavAgentProperties *param_1,FPathFindingQuery *param_2,int *param_3)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong lVar4;
  FNavigationQueryFilter *pFVar5;
  INavigationQueryFilterInterface *pIVar6;
  FPImplRecastNavMesh *this;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  Type TVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40;
  
  pUVar12 = FWeakObjectPtr::Get(&(param_2->NavData).WeakPtr);
  if (pUVar12 != (UObject *)0x0) {
    pUVar13 = GetPrivateStaticClass();
    iVar1 = (int)pUVar13->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar13->_padding_)) goto LAB_146e2ac95;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Cast<const ARecastNavMesh>(Self)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                     ,0xd6b,L"");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  if (pUVar12 == (UObject *)0x0) {
    return false;
  }
LAB_146e2ac95:
  if ((*(longlong *)&pUVar12[0x2f].field_0x8 == 0) ||
     (*(longlong *)(*(longlong *)&pUVar12[0x2f].field_0x8 + 8) == 0)) {
    return false;
  }
  pTVar2 = *(TReferenceControllerBase<1> **)&pUVar12[0x1a].field_0x10;
  lVar3 = *(longlong *)&pUVar12[0x1a].field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  lVar4 = param_2->_padding_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pFVar5 = (FNavigationQueryFilter *)param_2->_padding_;
  bVar8 = true;
  if (pFVar5 != (FNavigationQueryFilter *)0x0) {
    if (((pFVar5->QueryFilterImpl).Object == (INavigationQueryFilterInterface *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    pIVar6 = (pFVar5->QueryFilterImpl).Object;
    (**(code **)((longlong)*pIVar6 + 0x78))(pIVar6,&local_58,&param_2->_padding_);
    local_40._s_0.X = (double)param_2->_padding_ - local_58._s_0.X;
    local_40._s_0.Y = (double)param_2->_padding_ - local_58._s_0.Y;
    local_40._s_0.Z = (double)param_2->_padding_ - local_58._s_0.Z;
    bVar10 = UE::Math::TVector<double>::IsNearlyZero
                       ((TVector<double> *)&local_40._s_0,__real_3f1a36e2e0000000);
    if (!bVar10) {
      if (lVar4 == lVar3) {
        TVar11 = FPImplRecastNavMesh::TestClusterPath
                           (*(FPImplRecastNavMesh **)&pUVar12[0x2f].field_0x8,
                            (TVector<double> *)&param_2->_padding_,(TVector<double> *)&local_58._s_0
                            ,param_3);
        if (TVar11 != Error) {
          return TVar11 == Success;
        }
      }
      else if (4 < (byte)LogNavigation._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      }
      this = *(FPImplRecastNavMesh **)&pUVar12[0x2f].field_0x8;
      pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
      TVar11 = FPImplRecastNavMesh::TestPath
                         (this,(TVector<double> *)&param_2->_padding_,
                          (TVector<double> *)&local_58._s_0,
                          (bool)((byte)(*(uint *)((longlong)&param_2->_padding_ + 4) >> 1) & 1),
                          pFVar5,pUVar12,param_3);
      bVar8 = TVar11 == Success;
    }
  }
  return bVar8;
}

// TestPath @ 146e2ae60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
ARecastNavMesh::TestPath(FNavAgentProperties *param_1,FPathFindingQuery *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  FNavigationQueryFilter *pFVar4;
  INavigationQueryFilterInterface *pIVar5;
  FPImplRecastNavMesh *this;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  Type TVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastTestPath> FVar12;
  UObject *pUVar13;
  UClass *pUVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar15;
  FNameEntryId FVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  FColor_u_0 local_res10 [2];
  FName local_res20;
  LARGE_INTEGER local_78;
  FName local_70;
  FName local_68;
  byte local_60;
  FStatMessage local_58;
  TVector<double>_u_0 local_48;
  
  FVar12 = StatPtr_STAT_Navigation_RecastTestPath;
  if (StatPtr_STAT_Navigation_RecastTestPath ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastTestPath>)0x0) {
    pFVar11 = ::FName::FName(&local_70,"STAT_Navigation_RecastTestPath");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastTestPath>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RecastTestPath,
                        *pFVar11,L"Recast: test path","STATGROUP_Navigation","STATCAT_Advanced",
                        L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  local_60 = 0;
  FVar3 = *(FName *)FVar12;
  FVar16 = FVar3.ComparisonIndex.Value;
  uVar15 = FVar3.Number;
  if ((FVar16.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      local_60 = local_60 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar16.Value;
        local_res20.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                   ,0xd4c);
        local_60 = local_60 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_78.s.LowPart = FVar16.Value;
      local_78.s.HighPart = uVar15;
      local_68 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      local_60 = local_60 | 4;
    }
  }
  if (__CsvProfilerStat3405 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Pathfinding");
    __CsvProfilerStat3405 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Pathfinding","CSV_Pathfinding");
  pUVar13 = FWeakObjectPtr::Get(&(param_2->NavData).WeakPtr);
  if (pUVar13 == (UObject *)0x0) {
LAB_146e2aff2:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Cast<const ARecastNavMesh>(Self)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                       ,0xd50,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    if (pUVar13 != (UObject *)0x0) goto LAB_146e2b021;
  }
  else {
    pUVar14 = GetPrivateStaticClass();
    iVar2 = (int)pUVar14->_padding_;
    if ((*(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar14->_padding_)) goto LAB_146e2aff2;
LAB_146e2b021:
    if (*(longlong *)&pUVar13[0x2f].field_0x8 != 0) {
      pFVar4 = (FNavigationQueryFilter *)param_2->_padding_;
      bVar7 = true;
      if (pFVar4 != (FNavigationQueryFilter *)0x0) {
        if ((pFVar4->QueryFilterImpl).Object == (INavigationQueryFilterInterface *)0x0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
        }
        pIVar5 = (pFVar4->QueryFilterImpl).Object;
        (**(code **)((longlong)*pIVar5 + 0x78))(pIVar5,&local_48);
        dVar17 = (double)param_2->_padding_ - local_48._s_0.X;
        dVar19 = (double)param_2->_padding_ - local_48._s_0.Y;
        dVar18 = (double)param_2->_padding_ - local_48._s_0.Z;
        if (((__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
            (__real_3f1a36e2e0000000 <
             (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
           (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
          this = *(FPImplRecastNavMesh **)&pUVar13[0x2f].field_0x8;
          pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
          TVar10 = FPImplRecastNavMesh::TestPath
                             (this,(TVector<double> *)&param_2->_padding_,
                              (TVector<double> *)&local_48._s_0,
                              (bool)((byte)(*(uint *)((longlong)&param_2->_padding_ + 4) >> 1) & 1),
                              pFVar4,pUVar13,param_3);
          bVar7 = TVar10 == Success;
        }
      }
      goto LAB_146e2b10c;
    }
  }
  bVar7 = false;
LAB_146e2b10c:
  FCsvProfiler::EndExclusiveStat("Pathfinding");
  if ((local_60 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_60 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FVar3 = local_68;
  if ((((local_60 & 4) != 0) && (local_68 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Index = FVar3.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = FVar3.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_58);
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

// UnregisterGeneratedLinksProxy @ 146e2c980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ARecastNavMesh::UnregisterGeneratedLinksProxy(ARecastNavMesh *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UNavigationSystemV1 *this_00;
  UWorld *pUVar4;
  UClass *pUVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->NavLinkJumpConfigs).AllocatorInstance.Data;
  iVar1 = (this->NavLinkJumpConfigs).ArrayNum;
  pFVar6 = pFVar3 + 0x50;
  while( true ) {
    if ((this->NavLinkJumpConfigs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNavLinkGenerationJumpConfig,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 + -0x50 == pFVar3 + (longlong)iVar1 * 0x60) break;
    if ((pFVar6[8] != (FScriptContainerElement)0x0) && (*(longlong *)pFVar6 != 0)) {
      pUVar4 = AActor::GetWorld((AActor *)this);
      if ((pUVar4 != (UWorld *)0x0) &&
         (this_00 = (UNavigationSystemV1 *)(pUVar4->NavigationSystem).field0_0x0.DebugPtr,
         this_00 != (UNavigationSystemV1 *)0x0)) {
        pUVar5 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
        iVar2 = (int)pUVar5->_padding_;
        if ((iVar2 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar5->_padding_)) {
          if (4 < (byte)LogNavLink._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavLink);
          }
          UNavigationSystemV1::UnregisterCustomLink
                    (this_00,(INavLinkCustomInterface *)(*(longlong *)pFVar6 + 0x28));
          pFVar6[8] = (FScriptContainerElement)0x0;
        }
      }
    }
    pFVar6 = pFVar6 + 0x60;
  }
  return;
}

// UpdateActiveTiles @ 146e2ca80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ARecastNavMesh::UpdateActiveTiles
          (ARecastNavMesh *this,TArray<FNavigationInvokerRaw,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TMap<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>_>
  *pTVar2;
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *pTVar3;
  TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *pTVar4;
  dtNavMesh *this_00;
  undefined8 uVar5;
  ForElementType<FSetElementId> FVar6;
  TIntPoint<int> TVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ARecastNavMesh *this_01;
  TMap<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>_>
  *pTVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  dtNavMeshParams *pdVar17;
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *pTVar18;
  UClass *pUVar19;
  UWorld *pUVar20;
  longlong lVar21;
  FScriptContainerElement FVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined1 *puVar27;
  ForElementType<FSetElementId> FVar28;
  int iVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  longlong lVar34;
  undefined1 *puVar35;
  uint *puVar36;
  ulonglong uVar37;
  TIntPoint<int>_u_0 *pTVar38;
  ulonglong uVar39;
  undefined1 *puVar40;
  int iVar41;
  FScriptContainerElement *pFVar42;
  bool bVar43;
  double dVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  double dVar47;
  double dVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined1 auStackY_398 [32];
  undefined1 local_346;
  undefined1 local_345;
  undefined1 local_344 [4];
  ForAnyElementType local_340;
  undefined8 local_338;
  TArray<FNavMeshDirtyTileElement,TSizedDefaultAllocator<32>_> local_330;
  int local_320;
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *local_318;
  double local_310;
  ulonglong local_308;
  ulonglong local_300;
  ulonglong local_2f8;
  ulonglong local_2f0;
  longlong local_2e8;
  int local_2e0;
  int iStack_2dc;
  FScriptContainerElement *local_2d8;
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *local_2d0;
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  TIntPoint<int>_u_0 local_2bc;
  int local_2b4;
  int local_2b0;
  double local_2a8;
  FScriptContainerElement *local_2a0;
  TArray<FNavigationInvokerRaw,TSizedDefaultAllocator<32>_> *local_298;
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *local_290;
  double local_288;
  double local_280;
  double local_278;
  undefined4 local_270;
  undefined1 local_26c [20];
  ARecastNavMesh *local_258;
  TMap<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>_>
  *local_250;
  int local_248;
  int local_244;
  undefined1 local_240 [12];
  uint local_234;
  longlong local_230;
  uint local_228;
  int local_224;
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *local_218;
  TMap<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>_>
  *local_210;
  int iStack_208;
  undefined4 uStack_204;
  undefined1 *local_200;
  undefined4 uStack_1f8;
  int iStack_1f4;
  int local_1f0;
  undefined4 uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  TMap<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>_>
  *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  int *local_1b0;
  int *local_1a8;
  FLogScopedCategoryAndVerbosityOverride local_1a0;
  ulonglong *local_190;
  double *local_188;
  FScriptContainerElement *local_180;
  double *local_178;
  ulonglong *local_170;
  double *local_168;
  FScriptContainerElement *local_160;
  double *local_158;
  longlong *local_150;
  double *local_148;
  FScriptContainerElement *local_140;
  double *local_138;
  ulonglong *local_130;
  double *local_128;
  FScriptContainerElement *local_120;
  double *local_118;
  undefined4 local_f4;
  int local_f0;
  int local_ec;
  double local_e8;
  FScriptContainerElement local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_398;
  bVar43 = -1 < CpuChannel->Enabled;
  local_298 = param_1;
  local_258 = this;
  if (bVar43) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4041,"ARecastNavMesh::UpdateActiveTiles",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
               ,0xfc9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4041);
  }
  if ((((this->RecastNavMeshImpl == (FPImplRecastNavMesh *)0x0) ||
       (this_00 = this->RecastNavMeshImpl->DetourNavMesh, this_00 == (dtNavMesh *)0x0)) ||
      (this_00->m_tileWidth <= 0.0)) ||
     ((this_00->m_tileHeight <= 0.0 ||
      (lVar21 = this->_padding_, local_26c._12_8_ = lVar21, lVar21 == 0)))) goto LAB_146e2df91;
  pdVar17 = dtNavMesh::getParams(this_00);
  if ((pdVar17 == (dtNavMeshParams *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("NavParams && MyGenerator",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                          ,0xfd7,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_2a8 = pdVar17->orig[1];
  uVar49 = SUB84(local_2a8,0);
  uVar50 = (undefined4)((ulonglong)local_2a8 >> 0x20);
  uVar51 = SUB84(pdVar17->orig[0],0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar52 = (uint)((ulonglong)pdVar17->orig[0] >> 0x20) ^
           __xmm_80000000000000008000000000000000._4_4_;
  uVar53 = SUB84(pdVar17->orig[2],0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar54 = (uint)((ulonglong)pdVar17->orig[2] >> 0x20) ^
           __xmm_80000000000000008000000000000000._4_4_;
  local_310 = (double)*(int *)(lVar21 + 0x20) * *(double *)(lVar21 + 0x30);
  if (local_310 <= 0.0) {
    local_346 = 0;
    bVar14 = `ARecastNavMesh::UpdateActiveTiles'::__l16::<lambda_1>::operator()(&local_346);
    if (!bVar14) goto LAB_146e2df91;
  }
  local_318 = &(this->UpdateActiveTilesWorkingMem).OldActiveSet;
  pTVar2 = &(this->UpdateActiveTilesWorkingMem).TilesInMinDistanceMap;
  pTVar3 = &(this->UpdateActiveTilesWorkingMem).TilesInMaxDistance;
  pTVar4 = &(this->UpdateActiveTilesWorkingMem).TileToAppend;
  local_2d0 = pTVar3;
  local_250 = pTVar2;
  pTVar18 = GetActiveTileSet(this);
  uVar31 = *(int *)&(pTVar18->Elements).field_0x8 - *(int *)&(pTVar18->Elements).field_0x34;
  local_290 = pTVar18;
  if (local_318 != pTVar18) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&local_318->Hash,&local_318->HashSize,&pTVar18->Hash,pTVar18->HashSize);
    iVar41 = *(int *)&(pTVar18->Elements).field_0x8;
    TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&local_318->Elements,iVar41);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar41,(ForAnyElementType *)local_318,(int *)&(local_318->Elements).field_0x8,
               (int *)&(local_318->Elements).field_0xc);
    puVar27 = &(pTVar18->Elements).field_0x10;
    puVar40 = &(local_318->Elements).field_0x10;
    *(undefined4 *)&(local_318->Elements).field_0x30 =
         *(undefined4 *)&(pTVar18->Elements).field_0x30;
    *(undefined4 *)&(local_318->Elements).field_0x34 =
         *(undefined4 *)&(pTVar18->Elements).field_0x34;
    if (puVar40 != puVar27) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar40,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar27);
    }
    if (iVar41 != 0) {
      memcpy(*(void **)&local_318->Elements,*(void **)&pTVar18->Elements,(longlong)iVar41 << 4);
    }
  }
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4074,"ARecastNavMesh::Reserving",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
               ,0xfea);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4074);
  }
  TSet<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>,FDefaultSetAllocator>
           *)pTVar2);
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>::
  Reset(pTVar3);
  iVar41 = (this->UpdateActiveTilesWorkingMem).TileToAppend.ArrayMax;
  (this->UpdateActiveTilesWorkingMem).TileToAppend.ArrayNum = 0;
  if (iVar41 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&pTVar4->AllocatorInstance,0,
               &(this->UpdateActiveTilesWorkingMem).TileToAppend.ArrayMax);
  }
  iVar41 = (int)((double)(int)uVar31 * __real_3ff3333333333333);
  if (iVar41 < *(int *)&(this->UpdateActiveTilesWorkingMem).TilesInMinDistanceMap.field_0x8) {
    TSet<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>,FDefaultSetAllocator>
    ::Shrink((TSet<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>,FDefaultSetAllocator>
              *)pTVar2);
  }
  pTVar3 = local_2d0;
  local_308 = CONCAT44(local_308._4_4_,1);
  if (iVar41 < *(int *)&(local_2d0->Elements).field_0x8) {
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Shrink((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_2d0);
    uVar23 = *(int *)&(pTVar3->Elements).field_0x8 - *(int *)&(pTVar3->Elements).field_0x34;
    iVar29 = (int)local_308;
    if (3 < uVar23) {
      uVar25 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
      lVar21 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_270 = (undefined4)lVar21;
      iVar29 = (int)local_308 << ((byte)lVar21 & 0x1f);
    }
    if (((0 < (int)uVar23) && (pTVar3->HashSize < iVar29)) || (iVar29 < pTVar3->HashSize)) {
      pTVar3->HashSize = iVar29;
      TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
      ::Rehash(pTVar3);
    }
  }
  iVar29 = (this->UpdateActiveTilesWorkingMem).TileToAppend.ArrayMax;
  if ((iVar41 < iVar29) &&
     (iVar41 = (this->UpdateActiveTilesWorkingMem).TileToAppend.ArrayNum, iVar29 != iVar41)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar41,&pTVar4->AllocatorInstance,iVar41,
               &(this->UpdateActiveTilesWorkingMem).TileToAppend.ArrayMax);
  }
  TSet<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>,FDefaultSetAllocator>
             *)pTVar2,uVar31);
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>::
  Reserve(pTVar3,uVar31);
  if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar31);
  }
  if ((this->UpdateActiveTilesWorkingMem).TileToAppend.ArrayMax < (int)uVar31) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar31,&pTVar4->AllocatorInstance,
               (this->UpdateActiveTilesWorkingMem).TileToAppend.ArrayNum,
               &(this->UpdateActiveTilesWorkingMem).TileToAppend.ArrayMax);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>::
  Reset(local_290);
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4101,"ARecastNavMesh::MinMaxDistance",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
               ,0x1005);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4101);
  }
  dVar12 = __real_3ff6a09e60000000;
  dVar11 = __real_bfe0000000000000;
  dVar10 = __real_3fe0000000000000;
  local_2c4 = local_298->ArrayNum;
  uVar25 = (ulonglong)(int)local_2c4;
  pFVar42 = (local_298->AllocatorInstance).Data;
  pFVar30 = pFVar42 + uVar25 * 0x28;
  local_2a0 = pFVar30;
  while( true ) {
    uVar45 = (undefined4)__real_3ff0000000000000;
    uVar46 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_2d8 = pFVar42;
    if (local_298->ArrayNum != (int)uVar25) {
      local_345 = 0;
      `TCheckedPointerIterator<FNavigationInvokerRaw_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_345);
      uVar45 = (undefined4)__real_3ff0000000000000;
      uVar46 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    }
    if (pFVar42 == pFVar30) break;
    if ((*(uint *)(local_26c._12_8_ + 0xfc) < 0x10) &&
       ((*(uint *)(pFVar42 + 0x20) >> (*(uint *)(local_26c._12_8_ + 0xfc) & 0x1f) & 1) != 0)) {
      dVar47 = (double)CONCAT44(uVar46,uVar45) / local_310;
      local_278 = (double)CONCAT44(uVar50,uVar49) - *(double *)(pFVar42 + 0x10);
      dVar48 = (double)*(float *)(pFVar42 + 0x1c);
      local_288 = (double)CONCAT44(uVar52,uVar51) - *(double *)pFVar42;
      dVar44 = local_310 * dVar12 * dVar10;
      local_280 = (double)CONCAT44(uVar54,uVar53) - *(double *)(pFVar42 + 8);
      dVar9 = (double)*(float *)(pFVar42 + 0x18) + dVar44;
      dVar44 = dVar44 + dVar48;
      local_300 = (longlong)ROUND((dVar47 + dVar47) * (local_288 - dVar48) - dVar10) >> 1;
      local_2f8 = -((longlong)ROUND(dVar11 - (dVar47 + dVar47) * (dVar48 + local_288)) >> 1);
      local_2f0 = (longlong)ROUND((dVar47 + dVar47) * (local_280 - dVar48) - dVar10) >> 1;
      local_2e8 = -((longlong)ROUND(dVar11 - (dVar47 + dVar47) * (dVar48 + local_280)) >> 1);
      if (local_300 != (longlong)(int)local_300) {
        local_190 = &local_300;
        local_188 = &local_288;
        local_178 = &local_310;
        local_180 = pFVar42;
        `ARecastNavMesh::UpdateActiveTiles'::__l33::<lambda_2>::operator()(&local_190);
      }
      if (local_2f8 != (longlong)(int)local_2f8) {
        local_130 = &local_2f8;
        local_128 = &local_288;
        local_118 = &local_310;
        local_120 = pFVar42;
        `ARecastNavMesh::UpdateActiveTiles'::__l33::<lambda_3>::operator()(&local_130);
      }
      if (local_2f0 != (longlong)(int)local_2f0) {
        local_170 = &local_2f0;
        local_168 = &local_288;
        local_158 = &local_310;
        local_160 = pFVar42;
        `ARecastNavMesh::UpdateActiveTiles'::__l33::<lambda_4>::operator()(&local_170);
      }
      if (local_2e8 != (int)local_2e8) {
        local_150 = &local_2e8;
        local_148 = &local_288;
        local_138 = &local_310;
        local_140 = pFVar42;
        `ARecastNavMesh::UpdateActiveTiles'::__l33::<lambda_5>::operator()(&local_150);
      }
      uVar25 = 0x7fffffff;
      if ((longlong)local_300 < 0x7fffffff) {
        uVar25 = local_300;
      }
      uVar39 = 0x7fffffff;
      if ((longlong)local_2f8 < 0x7fffffff) {
        uVar39 = local_2f8;
      }
      uVar37 = 0x80000000;
      if (-0x80000000 < (longlong)uVar39) {
        uVar37 = uVar39 & 0xffffffff;
      }
      local_2c8 = (uint)uVar37;
      uVar39 = 0x7fffffff;
      if ((longlong)local_2f0 < 0x7fffffff) {
        uVar39 = local_2f0;
      }
      uVar26 = 0x80000000;
      if (-0x80000000 < (longlong)uVar39) {
        uVar26 = uVar39 & 0xffffffff;
      }
      local_2c0 = (uint)uVar26;
      lVar21 = 0x7fffffff;
      if (local_2e8 < 0x7fffffff) {
        lVar21 = local_2e8;
      }
      local_320 = -0x80000000;
      if (-0x80000000 < lVar21) {
        local_320 = (int)lVar21;
      }
      uVar39 = 0x80000000;
      if (-0x80000000 < (longlong)uVar25) {
        uVar39 = uVar25 & 0xffffffff;
      }
      iVar41 = local_320;
      if ((int)uVar39 <= (int)local_2c8) {
        do {
          iVar29 = (int)uVar39;
          if ((int)uVar26 <= iVar41) {
            do {
              iVar16 = (int)uVar26;
              dVar48 = local_288 - ((double)iVar29 + dVar10) * local_310;
              dVar47 = local_280 - ((double)iVar16 + dVar10) * local_310;
              dVar47 = dVar47 * dVar47 + dVar48 * dVar48;
              if (dVar47 < dVar44 * dVar44) {
                uVar31 = (uint)(uVar26 >> 0xd);
                uVar32 = iVar29 - iVar16 ^ uVar31;
                uVar23 = (-0x61c88647 - uVar32) - iVar16 ^ uVar32 << 8;
                uVar24 = (iVar16 - uVar23) - uVar32 ^ uVar23 >> 0xd;
                uVar32 = (uVar32 - uVar24) - uVar23 ^ uVar24 >> 0xc;
                uVar23 = (uVar23 - uVar32) - uVar24 ^ uVar32 << 0x10;
                uVar24 = (uVar24 - uVar32) - uVar23 ^ uVar23 >> 5;
                uVar32 = (uVar32 - uVar24) - uVar23 ^ uVar24 >> 3;
                uVar23 = (uVar23 - uVar32) - uVar24 ^ uVar32 << 10;
                local_2bc._s_0.X = iVar29;
                local_2bc._s_0.Y = iVar16;
                TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
                ::FindOrAddByHash<UE::Math::TIntPoint<int>_>
                          (pTVar3,(uVar24 - uVar23) - uVar32 ^ uVar23 >> 0xf,
                           (TIntPoint<int> *)&local_2bc._s_0,(bool *)0x0);
                pFVar42 = local_2d8;
                iVar41 = local_320;
                if (dVar47 < dVar9 * dVar9) {
                  uVar31 = iVar29 - iVar16 ^ uVar31;
                  uVar23 = (-0x61c88647 - uVar31) - iVar16 ^ uVar31 << 8;
                  uVar32 = (iVar16 - uVar23) - uVar31 ^ uVar23 >> 0xd;
                  uVar24 = (uVar31 - uVar32) - uVar23 ^ uVar32 >> 0xc;
                  uVar31 = (uVar23 - uVar32) - uVar24 ^ uVar24 << 0x10;
                  uVar32 = (uVar32 - uVar31) - uVar24 ^ uVar31 >> 5;
                  uVar23 = (uVar24 - uVar32) - uVar31 ^ uVar32 >> 3;
                  uVar31 = (uVar31 - uVar23) - uVar32 ^ uVar23 << 10;
                  if (*(int *)&(this->UpdateActiveTilesWorkingMem).TilesInMinDistanceMap.field_0x8
                      != *(int *)&(this->UpdateActiveTilesWorkingMem).TilesInMinDistanceMap.
                                  field_0x34) {
                    puVar40 = *(undefined1 **)
                               &(this->UpdateActiveTilesWorkingMem).TilesInMinDistanceMap.field_0x40
                    ;
                    puVar27 = &(this->UpdateActiveTilesWorkingMem).TilesInMinDistanceMap.field_0x38;
                    if (puVar40 != (undefined1 *)0x0) {
                      puVar27 = puVar40;
                    }
                    iVar33 = *(int *)(puVar27 +
                                     (ulonglong)
                                     (*(int *)&(this->UpdateActiveTilesWorkingMem).
                                               TilesInMinDistanceMap.field_0x48 - 1U &
                                     ((uVar32 - uVar31) - uVar23 ^ uVar31 >> 0xf)) * 4);
                    if (iVar33 != -1) {
                      do {
                        lVar21 = *(longlong *)&pTVar2->field_0x0 + (longlong)iVar33 * 0x28;
                        uVar5 = *(undefined8 *)
                                 (*(longlong *)&pTVar2->field_0x0 + (longlong)iVar33 * 0x28);
                        if (((int)uVar5 == iVar29) && ((int)((ulonglong)uVar5 >> 0x20) == iVar16)) {
                          if (iVar33 != -1) {
                            lVar34 = lVar21 + 8;
                            if (lVar21 == 0) {
                              lVar34 = 0;
                            }
                            FVar22 = local_2d8[0x24];
                            if (lVar34 == 0) goto LAB_146e2d459;
                            if ((byte)FVar22 < (byte)*(FScriptContainerElement *)(lVar34 + 0x10)) {
                              FVar22 = *(FScriptContainerElement *)(lVar34 + 0x10);
                            }
                            *(FScriptContainerElement *)(lVar34 + 0x10) = FVar22;
                            goto LAB_146e2d552;
                          }
                          break;
                        }
                        iVar33 = *(int *)(lVar21 + 0x20);
                      } while (iVar33 != -1);
                    }
                  }
                  FVar22 = local_2d8[0x24];
LAB_146e2d459:
                  local_1b0 = &local_2b4;
                  local_1a8 = &local_f0;
                  local_2b4 = iVar29;
                  local_2b0 = iVar16;
                  local_f0 = iVar29;
                  local_ec = iVar16;
                  local_e8 = dVar47;
                  local_e0 = FVar22;
                  TSet<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>,FDefaultSetAllocator>
                  ::
                  Emplace<TPairInitializer<UE::Math::TIntPoint<int>_&&,FNavMeshDirtyTileElement_&&>_>
                            ((TSet<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement,0>,FDefaultSetAllocator>
                              *)pTVar2,
                             (TPairInitializer<UE::Math::TIntPoint<int>_&&,FNavMeshDirtyTileElement_&&>
                              *)local_26c,(bool *)&local_1b0);
                  pFVar30 = (pTVar4->AllocatorInstance).Data;
                  piVar1 = &(this->UpdateActiveTilesWorkingMem).TileToAppend.ArrayMax;
                  local_2e0 = iVar29;
                  iStack_2dc = iVar16;
                  if (((pFVar30 <= (FScriptContainerElement *)&local_2e0) &&
                      ((FScriptContainerElement *)&local_2e0 < pFVar30 + (longlong)*piVar1 * 8)) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar15)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar41 = (this->UpdateActiveTilesWorkingMem).TileToAppend.ArrayNum;
                  if (iVar41 == *piVar1) {
                    iVar41 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x408,&pTVar4->AllocatorInstance,piVar1);
                  }
                  (this->UpdateActiveTilesWorkingMem).TileToAppend.ArrayNum = iVar41 + 1;
                  *(ulonglong *)((pTVar4->AllocatorInstance).Data + (longlong)iVar41 * 8) =
                       CONCAT44(iStack_2dc,local_2e0);
                  pFVar42 = local_2d8;
                  iVar41 = local_320;
                }
              }
LAB_146e2d552:
              uVar26 = (ulonglong)(iVar16 + 1U);
            } while ((int)(iVar16 + 1U) <= iVar41);
            uVar26 = (ulonglong)local_2c0;
            uVar37 = (ulonglong)local_2c8;
          }
          uVar39 = (ulonglong)(iVar29 + 1U);
        } while ((int)(iVar29 + 1U) <= (int)uVar37);
      }
      uVar49 = SUB84(local_2a8,0);
      uVar50 = (undefined4)((ulonglong)local_2a8 >> 0x20);
      pFVar30 = local_2a0;
    }
    uVar25 = (ulonglong)local_2c4;
    pFVar42 = pFVar42 + 0x28;
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar30 = (pTVar4->AllocatorInstance).Data;
  iVar41 = (this->UpdateActiveTilesWorkingMem).TileToAppend.ArrayNum;
  if ((iVar41 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar3 = local_290;
  uVar51 = *(int *)&(local_290->Elements).field_0x8 - *(int *)&(local_290->Elements).field_0x34;
  uVar52 = iVar41 + uVar51;
  if (uVar51 < uVar52) {
    if ((int)uVar52 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar52);
    }
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_290,uVar52);
    iVar29 = (int)local_308;
    if (3 < uVar52) {
      uVar25 = (ulonglong)((uVar52 >> 1) + 7) * 2 + 1;
      lVar21 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_26c._4_4_ = (undefined4)lVar21;
      iVar29 = (int)local_308 << ((byte)lVar21 & 0x1f);
    }
    if ((pTVar3->HashSize == 0) || (pTVar3->HashSize < iVar29)) {
      pTVar3->HashSize = iVar29;
      TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
      ::Rehash(pTVar3);
    }
  }
  pFVar42 = pFVar30 + (longlong)iVar41 * 8;
  for (; pFVar30 != pFVar42; pFVar30 = pFVar30 + 8) {
    TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
    ::Emplace<UE::Math::TIntPoint<int>_const_&>
              (pTVar3,(TIntPoint<int> *)(local_26c + 8),(bool *)pFVar30);
  }
  iVar41 = 0;
  local_340.Data = (FScriptContainerElement *)0x0;
  local_338 = 0;
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4162,"ARecastNavMesh::CategorizeTiles",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
               ,0x1042);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4162);
  }
  pTVar18 = local_318;
  uVar51 = *(int *)&(local_318->Elements).field_0x8 - *(int *)&(local_318->Elements).field_0x34;
  if ((int)uVar51 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar51);
  }
  if (local_338._4_4_ < (int)uVar51) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar51,&local_340,(int)local_338,(int *)((longlong)&local_338 + 4));
  }
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>::
  TIterator::TIterator((TIterator *)local_240,pTVar18);
  pTVar18 = local_2d0;
  if (local_224 < *(int *)(local_230 + 0x18)) {
    do {
      iVar29 = local_224;
      uVar5 = *(undefined8 *)(*(longlong *)local_240._0_8_ + (longlong)local_224 * 0x10);
      iVar16 = (int)uVar5;
      uVar54 = (uint)((ulonglong)uVar5 >> 0x20);
      uVar52 = iVar16 - uVar54 ^ uVar54 >> 0xd;
      uVar51 = (-0x61c88647 - uVar52) - uVar54 ^ uVar52 << 8;
      uVar53 = (uVar54 - uVar51) - uVar52 ^ uVar51 >> 0xd;
      uVar52 = (uVar52 - uVar53) - uVar51 ^ uVar53 >> 0xc;
      uVar51 = (uVar51 - uVar52) - uVar53 ^ uVar52 << 0x10;
      uVar53 = (uVar53 - uVar51) - uVar52 ^ uVar51 >> 5;
      uVar52 = (uVar52 - uVar53) - uVar51 ^ uVar53 >> 3;
      uVar51 = (uVar51 - uVar52) - uVar53 ^ uVar52 << 10;
      if (*(int *)&(pTVar18->Elements).field_0x8 != *(int *)&(pTVar18->Elements).field_0x34) {
        FVar6 = (pTVar18->Hash).SecondaryData;
        FVar28 = (ForElementType<FSetElementId>)&pTVar18->Hash;
        if (FVar6 != (ForElementType<FSetElementId>)0x0) {
          FVar28 = FVar6;
        }
        iVar33 = *(int *)((longlong)FVar28 +
                         (ulonglong)
                         (pTVar18->HashSize - 1U & ((uVar53 - uVar51) - uVar52 ^ uVar51 >> 0xf)) * 4
                         );
        if (iVar33 != -1) {
          do {
            uVar5 = *(undefined8 *)(*(longlong *)&pTVar18->Elements + (longlong)iVar33 * 0x10);
            if (((int)uVar5 == iVar16) && ((uint)((ulonglong)uVar5 >> 0x20) == uVar54)) {
              if (iVar33 != -1) {
                pTVar38 = (TIntPoint<int>_u_0 *)
                          ((longlong)local_224 * 0x10 + *(longlong *)local_240._0_8_);
                TVar7.field0_0x0 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&pTVar38->_s_0;
                uVar52 = TVar7.field0_0x0._4_4_;
                uVar53 = TVar7.field0_0x0._0_4_ - uVar52 ^ uVar52 >> 0xd;
                uVar51 = (-0x61c88647 - uVar53) - uVar52 ^ uVar53 << 8;
                uVar52 = (uVar52 - uVar51) - uVar53 ^ uVar51 >> 0xd;
                uVar53 = (uVar53 - uVar52) - uVar51 ^ uVar52 >> 0xc;
                uVar51 = (uVar51 - uVar53) - uVar52 ^ uVar53 << 0x10;
                uVar52 = (uVar52 - uVar51) - uVar53 ^ uVar51 >> 5;
                uVar53 = (uVar53 - uVar52) - uVar51 ^ uVar52 >> 3;
                uVar51 = (uVar51 - uVar53) - uVar52 ^ uVar53 << 10;
                TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
                ::FindOrAddByHash<UE::Math::TIntPoint<int>_const_&>
                          (pTVar3,(uVar52 - uVar51) - uVar53 ^ uVar51 >> 0xf,
                           (TIntPoint<int> *)&pTVar38->_s_0,(bool *)0x0);
                goto LAB_146e2d91f;
              }
              break;
            }
            iVar33 = *(int *)(*(longlong *)&pTVar18->Elements + 8 + (longlong)iVar33 * 0x10);
          } while (iVar33 != -1);
        }
      }
      pFVar30 = (FScriptContainerElement *)
                ((longlong)local_224 * 0x10 + *(longlong *)local_240._0_8_);
      if (((local_340.Data <= pFVar30) && (pFVar30 < local_340.Data + (longlong)local_338._4_4_ * 8)
          ) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar16 = (int)local_338;
      if ((int)local_338 == local_338._4_4_) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&local_340,(int *)((longlong)&local_338 + 4));
      }
      local_338 = CONCAT44(local_338._4_4_,iVar16 + 1);
      *(undefined8 *)(local_340.Data + (longlong)iVar16 * 8) = *(undefined8 *)pFVar30;
      TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
      ::RemoveByIndex(local_218,iVar29);
      pTVar18 = local_2d0;
LAB_146e2d91f:
      local_228 = local_228 & ~local_234;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_240 + 8));
    } while (local_224 < *(int *)(local_230 + 0x18));
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_330.ArrayNum = 0;
  local_330.ArrayMax = 0;
  uVar51 = *(int *)&(pTVar3->Elements).field_0x8 - *(int *)&(pTVar3->Elements).field_0x34;
  if ((int)uVar51 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar51);
  }
  if (0 < (int)uVar51) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar51,&local_330.AllocatorInstance,0,&local_330.ArrayMax);
  }
  this_01 = local_258;
  iVar29 = *(int *)&(this->UpdateActiveTilesWorkingMem).TilesInMinDistanceMap.field_0x28;
  local_200 = &(this->UpdateActiveTilesWorkingMem).TilesInMinDistanceMap.field_0x10;
  local_1f0 = 0;
  iStack_1f4 = local_1f0;
  if (iVar29 != 0) {
    puVar36 = *(uint **)&(this->UpdateActiveTilesWorkingMem).TilesInMinDistanceMap.field_0x20;
    if (puVar36 == (uint *)0x0) {
      puVar36 = (uint *)local_200;
    }
    uVar51 = *puVar36;
    local_1f0 = 0;
    iVar41 = 0;
    while (uVar51 == 0) {
      lVar21 = (longlong)iVar41;
      local_1f0 = local_1f0 + 0x20;
      iVar41 = iVar41 + 1;
      iStack_1f4 = iVar29;
      if ((int)(iVar29 + -1 + (iVar29 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar41) goto LAB_146e2d9ff;
      uVar51 = puVar36[lVar21 + 1];
    }
    local_308 = (ulonglong)(-uVar51 & uVar51);
    uVar25 = local_308 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_244 = (int)lVar21;
    iStack_1f4 = local_244 + -1 + local_1f0;
    if (iVar29 < iStack_1f4) {
      iStack_1f4 = iVar29;
    }
  }
LAB_146e2d9ff:
  uVar51 = *(uint *)&(this->UpdateActiveTilesWorkingMem).TilesInMinDistanceMap.field_0x28;
  uStack_204 = (undefined4)local_308;
  uVar52 = uVar51 & 0xffffffe0;
  uStack_1ec = local_f4;
  TStack_1d8._padding_ = CONCAT44(uStack_204,iVar41);
  uStack_1f8 = 0xffffffff;
  iStack_1e8 = *(int *)&(local_258->UpdateActiveTilesWorkingMem).TilesInMinDistanceMap.field_0x8 -
               *(int *)&(this->UpdateActiveTilesWorkingMem).TilesInMinDistanceMap.field_0x34;
  puVar40 = &(this->UpdateActiveTilesWorkingMem).TilesInMinDistanceMap.field_0x10;
  TStack_1d8.CurrentBitIndex = iStack_1f4;
  TStack_1d8.UnvisitedBitMask = 0xffffffff;
  iVar29 = (int)uVar51 >> 5;
  TStack_1d8._28_4_ = local_f4;
  TStack_1d8.BaseBitIndex = local_1f0;
  uStack_1b8 = CONCAT44(uStack_1e4,iStack_1e8);
  local_210 = pTVar2;
  iStack_208 = iVar41;
  local_1e0 = pTVar2;
  TStack_1d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_200;
  if (((int)uVar51 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar2 = local_250;
  pTVar3 = local_318;
  uVar53 = *(uint *)&(this->UpdateActiveTilesWorkingMem).TilesInMinDistanceMap.field_0x28;
  if (uVar51 != uVar53) {
    puVar27 = *(undefined1 **)&(this->UpdateActiveTilesWorkingMem).TilesInMinDistanceMap.field_0x20;
    puVar35 = puVar40;
    if (puVar27 != (undefined1 *)0x0) {
      puVar35 = puVar27;
    }
    uVar51 = -1 << ((byte)uVar51 & 0x1f) & *(uint *)(puVar35 + (longlong)iVar29 * 4);
    while (uVar51 == 0) {
      lVar21 = (longlong)iVar29;
      uVar52 = uVar52 + 0x20;
      iVar29 = iVar29 + 1;
      uVar51 = uVar53;
      if ((int)((uVar53 - 1) + ((int)(uVar53 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
      goto LAB_146e2db50;
      uVar51 = *(uint *)(puVar35 + lVar21 * 4 + 4);
    }
    uVar25 = (ulonglong)(-uVar51 & uVar51) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_248 = (int)lVar21;
    uVar51 = (uVar52 - 1) + local_248;
    if ((int)uVar53 < (int)uVar51) {
      uVar51 = uVar53;
    }
  }
LAB_146e2db50:
  while( true ) {
    pTVar13 = local_1e0;
    if (*(int *)(&local_1e0->field_0x0 + 8) - *(int *)(&local_1e0->field_0x0 + 0x34) !=
        (int)uStack_1b8) {
      local_344[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_344);
    }
    if (((TStack_1d8.CurrentBitIndex == uVar51) &&
        (TStack_1d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar40)) &&
       (pTVar13 == pTVar2)) break;
    lVar21 = *(longlong *)&pTVar13->field_0x0 + 8;
    uVar5 = *(undefined8 *)(lVar21 + (longlong)TStack_1d8.CurrentBitIndex * 0x28);
    pFVar30 = (FScriptContainerElement *)(lVar21 + (longlong)TStack_1d8.CurrentBitIndex * 0x28);
    iVar41 = (int)uVar5;
    uVar31 = (uint)((ulonglong)uVar5 >> 0x20);
    uVar53 = iVar41 - uVar31 ^ uVar31 >> 0xd;
    uVar52 = (-0x61c88647 - uVar53) - uVar31 ^ uVar53 << 8;
    uVar54 = (uVar31 - uVar52) - uVar53 ^ uVar52 >> 0xd;
    uVar53 = (uVar53 - uVar54) - uVar52 ^ uVar54 >> 0xc;
    uVar52 = (uVar52 - uVar53) - uVar54 ^ uVar53 << 0x10;
    uVar54 = (uVar54 - uVar52) - uVar53 ^ uVar52 >> 5;
    uVar53 = (uVar53 - uVar54) - uVar52 ^ uVar54 >> 3;
    uVar52 = (uVar52 - uVar53) - uVar54 ^ uVar53 << 10;
    if (*(int *)&(pTVar3->Elements).field_0x8 != *(int *)&(pTVar3->Elements).field_0x34) {
      FVar6 = (pTVar3->Hash).SecondaryData;
      FVar28 = (ForElementType<FSetElementId>)&pTVar3->Hash;
      if (FVar6 != (ForElementType<FSetElementId>)0x0) {
        FVar28 = FVar6;
      }
      iVar29 = *(int *)((longlong)FVar28 +
                       (ulonglong)
                       (pTVar3->HashSize - 1U & ((uVar54 - uVar52) - uVar53 ^ uVar52 >> 0xf)) * 4);
      if (iVar29 != -1) {
        do {
          uVar5 = *(undefined8 *)(*(longlong *)&pTVar3->Elements + (longlong)iVar29 * 0x10);
          if (((int)uVar5 == iVar41) && ((uint)((ulonglong)uVar5 >> 0x20) == uVar31)) {
            if (iVar29 != -1) goto LAB_146e2dde9;
            break;
          }
          iVar29 = *(int *)(*(longlong *)&pTVar3->Elements + 8 + (longlong)iVar29 * 0x10);
        } while (iVar29 != -1);
      }
    }
    if (((local_330.AllocatorInstance.Data <= pFVar30) &&
        (pFVar30 < local_330.AllocatorInstance.Data + (longlong)local_330.ArrayMax * 0x18)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (local_330.ArrayNum == local_330.ArrayMax) {
      iVar41 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_330.AllocatorInstance,&local_330.ArrayMax);
      local_330.ArrayNum = iVar41;
    }
    lVar21 = (longlong)local_330.ArrayNum;
    local_330.ArrayNum = local_330.ArrayNum + 1;
    uVar5 = *(undefined8 *)(pFVar30 + 8);
    *(undefined8 *)(local_330.AllocatorInstance.Data + lVar21 * 0x18) = *(undefined8 *)pFVar30;
    *(undefined8 *)(local_330.AllocatorInstance.Data + lVar21 * 0x18 + 8) = uVar5;
    *(undefined8 *)(local_330.AllocatorInstance.Data + lVar21 * 0x18 + 0x10) =
         *(undefined8 *)(pFVar30 + 0x10);
LAB_146e2dde9:
    TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
  }
  if (4 < (byte)LogNavigation._0_1_) {
    FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
              (&local_1a0,(FName)LogNavigation._4_8_,Log);
    if ((((int)local_338 != 0) || (local_330.ArrayNum != 0)) && (FVisualLogger::bIsRecording != 0))
    {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this_01,(FName *)&LogNavigation.field_0x4,Log,
                 L"Updating active tiles: %d to remove, %d to update");
    }
    FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogNavigation,Log);
    FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_1a0);
  }
  (**(code **)(this_01->_padding_ + 0x930))(this_01,&local_340);
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4225,"ARecastNavMesh::RebuildTile",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
               ,0x1081);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4225);
  }
  if ((0 < local_330.ArrayNum) &&
     ((FRecastNavMeshGenerator *)this_01->_padding_ != (FRecastNavMeshGenerator *)0x0)) {
    FRecastNavMeshGenerator::ReAddTiles((FRecastNavMeshGenerator *)this_01->_padding_,&local_330);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((0 < (int)local_338) || (0 < local_330.ArrayNum)) && (this_01->_padding_ != 0)) {
    pUVar19 = UNavMeshRenderingComponent::StaticClass();
    bVar14 = FObjectPtr::IsA((FObjectPtr *)&this_01->_padding_,pUVar19);
    if (((bVar14) && (lVar21 = this_01->_padding_, lVar21 != 0)) &&
       ((*(byte *)(lVar21 + 0x1a8) & 0x20) != 0)) {
      if ((*(uint *)(lVar21 + 0x5b0) >> 1 & 1) == 0) {
        pUVar20 = AActor::GetWorld((AActor *)this_01);
        bVar14 = UNavMeshRenderingComponent::IsNavigationShowFlagSet(pUVar20);
        if (!bVar14) goto LAB_146e2df73;
      }
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this_01->_padding_);
    }
  }
LAB_146e2df73:
  if (local_330.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.AllocatorInstance.Data);
  }
  if (local_340.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Data);
  }
LAB_146e2df91:
  if (bVar43) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateCustomLink @ 146e2e030

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
ARecastNavMesh::UpdateCustomLink(ARecastNavMesh *this,INavLinkCustomInterface *param_1)

{
  int iVar1;
  FPImplRecastNavMesh *pFVar2;
  dtNavMesh *pdVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *this_00;
  ushort uVar9;
  UClass *local_res10;
  uint local_res18;
  undefined4 uStackX_1c;
  
  (**(code **)((longlong)*param_1 + 0x20))(param_1,&local_res10);
  (**(code **)((longlong)*param_1 + 0x38))(param_1,&local_res18);
  pUVar8 = local_res10;
  this_00 = (UClass *)0x0;
  if (local_res10 != (UClass *)0x0) {
    pUVar7 = Z_Construct_UClass_UNavArea_NoRegister();
    if (pUVar7 != (UClass *)0x0) {
      iVar1 = (int)pUVar7->_padding_;
      if (((int)pUVar8->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pUVar8 = local_res10;
      if (bVar5) goto LAB_146e2e0a0;
    }
  }
  pUVar8 = this_00;
LAB_146e2e0a0:
  uVar6 = ANavigationData::GetAreaID((ANavigationData *)this,pUVar8);
  pUVar8 = local_res10;
  if ((-1 < (int)uVar6) && (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0)) {
    if (local_res10 != (UClass *)0x0) {
      pUVar7 = Z_Construct_UClass_UNavArea_NoRegister();
      if (pUVar7 != (UClass *)0x0) {
        iVar1 = (int)pUVar7->_padding_;
        if (((int)pUVar8->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar7->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          this_00 = local_res10;
        }
      }
    }
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pFVar2 = this->RecastNavMeshImpl;
    uVar9 = *(ushort *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x1c |
            NavLinkFlag;
    if (uVar6 != (uVar6 & 0xff)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pdVar3 = pFVar2->DetourNavMesh;
    if (pdVar3 != (dtNavMesh *)0x0) {
      dtNavMesh::updateOffMeshConnectionByUserId
                (pdVar3,CONCAT44(uStackX_1c,local_res18),(uchar)uVar6,uVar9);
    }
    pFVar2 = this->RecastNavMeshImpl;
    if (uVar6 != (uVar6 & 0xff)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pdVar3 = pFVar2->DetourNavMesh;
    if (pdVar3 != (dtNavMesh *)0x0) {
      dtNavMesh::updateOffMeshSegmentConnectionByUserId(pdVar3,local_res18,(uchar)uVar6,uVar9);
    }
    RequestDrawingUpdate(this,false);
  }
  return;
}

// UpdateDrawing @ 146e2e1f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ARecastNavMesh::UpdateDrawing(ARecastNavMesh *this)

{
  longlong lVar1;
  bool bVar2;
  UClass *pUVar3;
  UWorld *pUVar4;
  
  if (this->_padding_ != 0) {
    pUVar3 = UNavMeshRenderingComponent::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (((bVar2) && (lVar1 = this->_padding_, lVar1 != 0)) &&
       ((*(byte *)(lVar1 + 0x1a8) & 0x20) != 0)) {
      if ((*(uint *)(lVar1 + 0x5b0) >> 1 & 1) == 0) {
        pUVar4 = AActor::GetWorld((AActor *)this);
        bVar2 = UNavMeshRenderingComponent::IsNavigationShowFlagSet(pUVar4);
        if (!bVar2) {
          return;
        }
      }
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this->_padding_);
    }
  }
  return;
}

// UpdateNavMeshDrawing @ 146e2e520

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ARecastNavMesh::UpdateNavMeshDrawing(ARecastNavMesh *this)

{
  longlong lVar1;
  bool bVar2;
  UClass *pUVar3;
  UWorld *pUVar4;
  
  if (this->_padding_ != 0) {
    pUVar3 = UNavMeshRenderingComponent::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (((bVar2) && (lVar1 = this->_padding_, lVar1 != 0)) &&
       ((*(byte *)(lVar1 + 0x1a8) & 0x20) != 0)) {
      if ((*(uint *)(lVar1 + 0x5b0) >> 1 & 1) == 0) {
        pUVar4 = AActor::GetWorld((AActor *)this);
        bVar2 = UNavMeshRenderingComponent::IsNavigationShowFlagSet(pUVar4);
        if (!bVar2) {
          return;
        }
      }
      UActorComponent::MarkRenderStateDirty((UActorComponent *)this->_padding_);
    }
  }
  return;
}

// UpdateNavObject @ 146e2e5b0

void __thiscall ARecastNavMesh::UpdateNavObject(ARecastNavMesh *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnNavMeshUpdate,
             (FWriteAccessScope *)&local_28);
  puVar1 = &(this->OnNavMeshUpdate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnNavMeshUpdate).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnNavMeshUpdate).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnNavMeshUpdate).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnNavMeshUpdate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnNavMeshUpdate,false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// UpdateNavVersion @ 146e2e6c0

void __thiscall ARecastNavMesh::UpdateNavVersion(ARecastNavMesh *this)

{
  this->NavMeshVersion = 0x1b;
  return;
}

// UpdateNavigationLinkArea @ 146e2e6e0

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
ARecastNavMesh::UpdateNavigationLinkArea
          (ARecastNavMesh *this,FNavLinkId param_1,TSubclassOf<UNavArea> param_2)

{
  int iVar1;
  longlong lVar2;
  FPImplRecastNavMesh *pFVar3;
  dtNavMesh *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  ushort uVar9;
  UClass *this_01;
  
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  this_01 = (UClass *)0x0;
  pUVar8 = this_01;
  if ((lVar2 != 0) && (pUVar7 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar7 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar8 = *(UClass **)param_2.Class.field0_0x0;
    }
  }
  uVar6 = ANavigationData::GetAreaID((ANavigationData *)this,pUVar8);
  if ((-1 < (int)uVar6) && (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0)) {
    lVar2 = *(longlong *)param_2.Class.field0_0x0;
    if ((lVar2 != 0) && (pUVar8 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar8 != (UClass *)0x0)
       ) {
      iVar1 = (int)pUVar8->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        this_01 = *(UClass **)param_2.Class.field0_0x0;
      }
    }
    if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_01);
    }
    pFVar3 = this->RecastNavMeshImpl;
    uVar9 = *(ushort *)&(this_01->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x1c |
            NavLinkFlag;
    if ((uVar6 != (uVar6 & 0xff)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5))
    {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = pFVar3->DetourNavMesh;
    if (this_00 != (dtNavMesh *)0x0) {
      dtNavMesh::updateOffMeshConnectionByUserId(this_00,param_1.Id,(uchar)uVar6,uVar9);
    }
  }
  return;
}

// UpdatePolyRefBitsPreview @ 146e2eb90

void __thiscall ARecastNavMesh::UpdatePolyRefBitsPreview(ARecastNavMesh *this)

{
  FRecastNavMeshGenerator::CalcPolyRefBits(this,&this->PolyRefTileBits,&this->PolyRefNavPolyBits);
  this->PolyRefSaltBits = (0x40 - this->PolyRefTileBits) - this->PolyRefNavPolyBits;
  return;
}

// UpdateSegmentLinkArea @ 146e2ebf0

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
ARecastNavMesh::UpdateSegmentLinkArea
          (ARecastNavMesh *this,int param_1,TSubclassOf<UNavArea> param_2)

{
  int iVar1;
  longlong lVar2;
  FPImplRecastNavMesh *pFVar3;
  dtNavMesh *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  ushort uVar9;
  UClass *this_01;
  
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  this_01 = (UClass *)0x0;
  pUVar8 = this_01;
  if ((lVar2 != 0) && (pUVar7 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar7 != (UClass *)0x0))
  {
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar8 = *(UClass **)param_2.Class.field0_0x0;
    }
  }
  uVar6 = ANavigationData::GetAreaID((ANavigationData *)this,pUVar8);
  if ((-1 < (int)uVar6) && (this->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0)) {
    lVar2 = *(longlong *)param_2.Class.field0_0x0;
    if ((lVar2 != 0) && (pUVar8 = Z_Construct_UClass_UNavArea_NoRegister(), pUVar8 != (UClass *)0x0)
       ) {
      iVar1 = (int)pUVar8->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        this_01 = *(UClass **)param_2.Class.field0_0x0;
      }
    }
    if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_01);
    }
    pFVar3 = this->RecastNavMeshImpl;
    uVar9 = *(ushort *)&(this_01->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x1c |
            NavLinkFlag;
    if ((uVar6 != (uVar6 & 0xff)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar5))
    {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = pFVar3->DetourNavMesh;
    if (this_00 != (dtNavMesh *)0x0) {
      dtNavMesh::updateOffMeshSegmentConnectionByUserId(this_00,param_1,(uchar)uVar6,uVar9);
    }
  }
  return;
}

// execK2_ReplaceAreaInTileBounds @ 146e2fa90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ARecastNavMesh::execK2_ReplaceAreaInTileBounds(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  bool bVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [4];
  int local_e4;
  UObject *local_e0;
  UObject *local_d8;
  UObject *local_d0;
  UObject *local_c8 [2];
  TVector<double>_u_0 local_b8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  char local_48;
  undefined7 uStack_47;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_48 = '\0';
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_d8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_e0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_e4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e4);
  }
  pUVar2 = local_e0;
  bVar6 = local_e4 != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_e0);
  }
  pUVar3 = local_d8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_d8);
  }
  local_b8._s_0.X = local_78;
  local_b8._s_0.Y = dStack_70;
  local_b8._s_0.Z = local_68;
  uStack_a0 = uStack_60;
  local_88 = CONCAT71(uStack_47,local_48);
  local_98 = local_58;
  uStack_90 = uStack_50;
  if ((local_48 == '\0') &&
     (bVar4 = `ARecastNavMesh::K2_ReplaceAreaInTileBounds'::__l3::<lambda_1>::operator()(local_e8),
     !bVar4)) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  local_d0 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_c8[0] = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  iVar5 = ReplaceAreaInTileBounds
                    ((ARecastNavMesh *)param_1,(TBox<double> *)&local_b8._s_0,
                     (TSubclassOf<UNavArea>)local_c8,(TSubclassOf<UNavArea>)&local_d0,bVar6,
                     (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)0x0);
  if (0 < iVar5) {
    RequestDrawingUpdate((ARecastNavMesh *)param_1,false);
  }
  *(bool *)param_3 = 0 < iVar5;
  return;
}

// operator() @ 1504fcd70

bool __thiscall
`ARecastNavMesh::CreateAndRegisterJumpLinksProxy'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6996127874050687784>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6996127874050687784>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fcdb0

bool __thiscall `ARecastNavMesh::DirtyTilesInBounds'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6996127874050691215>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6996127874050691215>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fce00

bool __thiscall
`ARecastNavMesh::K2_ReplaceAreaInTileBounds'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6996127874050691377>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6996127874050691377>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fce50

bool __thiscall `ARecastNavMesh::ReplaceAreaInTileBounds'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6996127874050689537>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6996127874050689537>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fcf80

bool __thiscall
`ARecastNavMesh::FillNavigationDataChunkActor'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6996127874050690142>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6996127874050690142>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fd020

bool __thiscall `ARecastNavMesh::UpdateActiveTiles'::__l16::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6996127874050691035>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6996127874050691035>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fd0f0

bool __thiscall `ARecastNavMesh::UpdateActiveTiles'::__l33::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6996127874050691093>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6996127874050691093>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504fd170

bool __thiscall `ARecastNavMesh::UpdateActiveTiles'::__l33::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6996127874050691094>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6996127874050691094>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504fd1f0

bool __thiscall `ARecastNavMesh::UpdateActiveTiles'::__l33::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6996127874050691095>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6996127874050691095>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504fd270

bool __thiscall `ARecastNavMesh::UpdateActiveTiles'::__l33::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6996127874050691096>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6996127874050691096>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

