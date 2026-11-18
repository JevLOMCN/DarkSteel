// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 75

// FRecastNavMeshGenerator @ 146e35f80

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRecastNavMeshGenerator * __thiscall
FRecastNavMeshGenerator::FRecastNavMeshGenerator
          (FRecastNavMeshGenerator *this,ARecastNavMesh *param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_18;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FRecastNavMeshGenerator__6B_;
  (this->Config).JumpConfigs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Config).JumpConfigs.ArrayNum = 0;
  (this->Config).JumpConfigs.ArrayMax = 0;
  FRecastBuildConfig::Reset(&this->Config);
  (this->TotalNavBounds).IsValid = '\0';
  *(undefined8 *)&this->InclusionBounds = 0;
  *(undefined8 *)&(this->InclusionBounds).field_0x8 = 0;
  *(undefined8 *)&(this->InclusionBounds).field_0x10 = 0;
  *(undefined8 *)&this->PendingDirtyTiles = 0;
  *(undefined8 *)&(this->PendingDirtyTiles).field_0x8 = 0;
  *(undefined8 *)&(this->PendingDirtyTiles).field_0x10 = 0;
  *(undefined8 *)&this->RunningDirtyTiles = 0;
  *(undefined8 *)&(this->RunningDirtyTiles).field_0x8 = 0;
  *(undefined8 *)&(this->RunningDirtyTiles).field_0x10 = 0;
  *(undefined8 *)&(this->TilesPendingSegmentLinkConnections).Elements = 0;
  *(undefined8 *)&(this->TilesPendingSegmentLinkConnections).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TilesPendingSegmentLinkConnections).Elements.field_0x20 = 0;
  this->AvgLayersPerTile = 8.0;
  this->NumActiveTiles = 0;
  this->MaxTileGeneratorTasks = 1;
  this->DestNavMesh = param_1;
  *(undefined4 *)&(this->TilesPendingSegmentLinkConnections).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TilesPendingSegmentLinkConnections).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TilesPendingSegmentLinkConnections).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TilesPendingSegmentLinkConnections).Elements.field_0x34 = 0;
  (this->TilesPendingSegmentLinkConnections).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0
  ;
  (this->TilesPendingSegmentLinkConnections).HashSize = 0;
  *(undefined8 *)&(this->ActiveTileSet).Elements = 0;
  *(undefined8 *)&(this->ActiveTileSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActiveTileSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActiveTileSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActiveTileSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveTileSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveTileSet).Elements.field_0x34 = 0;
  (this->ActiveTileSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActiveTileSet).HashSize = 0;
  *(undefined8 *)&(this->AdditionalCachedData).AreaClassToIdMap = 0;
  *(undefined8 *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x8 = 0;
  *(undefined8 *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x20 = 0;
  *(undefined4 *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x28 = 0;
  *(undefined4 *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x34 = 0;
  *(undefined8 *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x40 = 0;
  *(undefined4 *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x48 = 0;
  (this->AdditionalCachedData).ActorOwner.WeakPtr = (FWeakObjectPtr)0x0;
  this->bInitialized = 0;
  this->bRestrictBuildingToActiveTiles = 0;
  this->RebuildAllStartTime = 0.0;
  this->Version = 0;
  this->SortPendingTilesMethod = SortWithSeedLocations;
  (this->SyncTimeSlicedData).UpdatedTilesCache.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SyncTimeSlicedData).UpdatedTilesCache.ArrayNum = 0;
  (this->SyncTimeSlicedData).UpdatedTilesCache.ArrayMax = 0;
  (this->SyncTimeSlicedData).ResultTileRefsCached.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SyncTimeSlicedData).ResultTileRefsCached.ArrayNum = 0;
  (this->SyncTimeSlicedData).ResultTileRefsCached.ArrayMax = 0;
  *(undefined8 *)&(this->SyncTimeSlicedData).OldLayerTileIdMapCached = 0;
  *(undefined8 *)&(this->SyncTimeSlicedData).OldLayerTileIdMapCached.field_0x8 = 0;
  *(undefined8 *)&(this->SyncTimeSlicedData).OldLayerTileIdMapCached.field_0x20 = 0;
  (this->SyncTimeSlicedData).CurrentTileRegenDuration = 0.0;
  (this->SyncTimeSlicedData).TileRegenStartFrame = 0;
  (this->SyncTimeSlicedData).TileRegenEndFrame = 0;
  (this->SyncTimeSlicedData).bTimeSliceRegenActive = false;
  (this->SyncTimeSlicedData).bNextTimeSliceRegenActive = false;
  (this->SyncTimeSlicedData).ProcessTileTasksSyncState = Init;
  *(undefined4 *)&(this->SyncTimeSlicedData).OldLayerTileIdMapCached.field_0x28 = 0;
  *(undefined4 *)&(this->SyncTimeSlicedData).OldLayerTileIdMapCached.field_0x2c = 0x80;
  *(undefined4 *)&(this->SyncTimeSlicedData).OldLayerTileIdMapCached.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SyncTimeSlicedData).OldLayerTileIdMapCached.field_0x34 = 0;
  *(undefined8 *)&(this->SyncTimeSlicedData).OldLayerTileIdMapCached.field_0x40 = 0;
  *(undefined4 *)&(this->SyncTimeSlicedData).OldLayerTileIdMapCached.field_0x48 = 0;
  (this->SyncTimeSlicedData).AddGeneratedTilesState = Init;
  (this->SyncTimeSlicedData).AddGenTilesLayerIndex = 0;
  (this->SyncTimeSlicedData).TileGeneratorSync.Object = (FRecastTileGenerator *)0x0;
  (this->SyncTimeSlicedData).TileGeneratorSync.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SyncTimeSlicedData).TimeSliceManager = (FNavRegenTimeSliceManager *)0x0;
  FVar4 = StatPtr_STAT_NavigationMemory;
  if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
    pFVar3 = ::FName::FName(&local_res8,"STAT_NavigationMemory");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar3,
                       L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                       false,ST_int64,false,false,MCR_Physical);
  }
  FVar2 = *(FName *)FVar4;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar2;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_18.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
    local_18.StatData.Pad[0] = 200;
    local_18.StatData.Pad[1] = '\x04';
    local_18.StatData.Pad[2] = '\0';
    local_18.StatData.Pad[3] = '\0';
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_res8 = FVar2;
    local_18.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_18);
    FStatsTrace::Add(&local_res8,0x4c8);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return this;
}

// ~FRecastNavMeshGenerator @ 146e373a0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRecastNavMeshGenerator::~FRecastNavMeshGenerator(FRecastNavMeshGenerator *this)

{
  undefined1 *puVar1;
  int *piVar2;
  TNavStatArray<FPendingTileElement> *this_00;
  TNavStatArray<TRunningTileElement<FRecastTileGeneratorWrapper>_> *this_01;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  FName FVar6;
  void *pvVar7;
  ForElementType<FSetElementId> FVar8;
  FScriptContainerElement *pFVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar11;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  longlong lVar12;
  FName local_res8;
  FStatMessage local_38;
  
  this->_padding_ = (longlong)&___7FRecastNavMeshGenerator__6B_;
  if ((4 < (byte)LogNavigation._0_1_) && (0 < *(int *)&(this->RunningDirtyTiles).field_0x10)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
  }
  this_00 = &this->PendingDirtyTiles;
  DestructItems<FPendingTileElement,int>
            (*(FPendingTileElement **)&this_00->field_0x0,
             *(int *)&(this->PendingDirtyTiles).field_0x10);
  puVar1 = &(this->PendingDirtyTiles).field_0x14;
  *(undefined4 *)&(this->PendingDirtyTiles).field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  this_01 = &this->RunningDirtyTiles;
  iVar4 = *(int *)&(this->RunningDirtyTiles).field_0x10;
  lVar12 = *(longlong *)&this_01->field_0x0;
  lVar3 = lVar12 + (longlong)iVar4 * 0x18;
  while( true ) {
    if (*(int *)&(this->RunningDirtyTiles).field_0x10 != iVar4) {
      `TCheckedPointerIterator<TRunningTileElement<FRecastTileGeneratorWrapper>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (lVar12 == lVar3) break;
    if (*(FAsyncTaskBase **)(lVar12 + 0x10) != (FAsyncTaskBase *)0x0) {
      FAsyncTaskBase::EnsureCompletion(*(FAsyncTaskBase **)(lVar12 + 0x10),true,false);
      plVar5 = *(longlong **)(lVar12 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5,1);
      }
      *(undefined8 *)(lVar12 + 0x10) = 0;
    }
    lVar12 = lVar12 + 0x18;
  }
  ResetTimeSlicedTileGeneratorSync(this);
  puVar1 = &(this->RunningDirtyTiles).field_0x14;
  *(undefined4 *)&(this->RunningDirtyTiles).field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  FVar11 = StatPtr_STAT_NavigationMemory;
  if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
    pFVar10 = ::FName::FName(&local_res8,"STAT_NavigationMemory");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar10,
                        L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                        false,ST_int64,false,false,MCR_Physical);
  }
  FVar6 = *(FName *)FVar11;
  local_res8 = FVar6;
  if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    local_38.NameAndInfo.Number = FVar6.Number & 0xffffbfff | 0xb000;
    local_38.StatData.Pad[0] = 200;
    local_38.StatData.Pad[1] = '\x04';
    local_38.StatData.Pad[2] = '\0';
    local_38.StatData.Pad[3] = '\0';
    local_38.StatData.Pad[4] = '\0';
    local_38.StatData.Pad[5] = '\0';
    local_38.StatData.Pad[6] = '\0';
    local_38.StatData.Pad[7] = '\0';
    local_res8 = FVar6;
    local_38.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_02,&local_38);
    FStatsTrace::Add(&local_res8,-0x4c8);
    if (this_02->ScopeCount == 0) {
      FThreadStats::Flush(this_02,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_02,false,false);
    }
  }
  FSyncTimeSlicedData::~FSyncTimeSlicedData(&this->SyncTimeSlicedData);
  *(undefined4 *)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x48 = 0;
  pvVar7 = *(void **)&(this->AdditionalCachedData).AreaClassToIdMap.field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->AdditionalCachedData).AreaClassToIdMap);
  (this->ActiveTileSet).HashSize = 0;
  FVar8 = (this->ActiveTileSet).Hash.SecondaryData;
  if (FVar8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar8);
  }
  TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActiveTileSet).Elements);
  (this->TilesPendingSegmentLinkConnections).HashSize = 0;
  FVar8 = (this->TilesPendingSegmentLinkConnections).Hash.SecondaryData;
  if (FVar8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar8);
  }
  TSparseArray<TSparseSetElement<FNavTileRef>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNavTileRef>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TilesPendingSegmentLinkConnections).Elements);
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)this_01);
  DestructItems<FPendingTileElement,int>
            (*(FPendingTileElement **)&this_00->field_0x0,
             *(int *)&(this->PendingDirtyTiles).field_0x10);
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)this_00);
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->InclusionBounds);
  pFVar9 = (this->Config).JumpConfigs.AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  this->_padding_ = (longlong)&___7FNavDataGenerator__6B_;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// operator() @ 146e38ec0

bool __thiscall
`FRecastNavMeshGenerator::LogDirtyAreas'::__l10::<lambda_1>::operator()
          (void *this,FNavigationDirtyAreaDebugInformation *param_1)

{
  double *pdVar1;
  double dVar2;
  
  pdVar1 = *(double **)this;
  if (((param_1->DirtyArea).Flags == *(ENavigationDirtyFlag *)(pdVar1 + 9)) &&
     ((param_1->DirtyArea).OptionalSourceElement.Object == (FNavigationElement *)pdVar1[7])) {
    if ((param_1->DirtyArea).Bounds.IsValid == '\0') {
      if (*(char *)(pdVar1 + 6) == '\0') {
        return true;
      }
    }
    else if ((((*(char *)(pdVar1 + 6) != '\0') &&
              (dVar2 = (param_1->DirtyArea).Bounds.Min.field0_0x0._s_0.X - *pdVar1,
              (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              __real_3f1a36e2e0000000)) &&
             (dVar2 = (param_1->DirtyArea).Bounds.Min.field0_0x0._s_0.Y - pdVar1[1],
             (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             __real_3f1a36e2e0000000)) &&
            (((dVar2 = (param_1->DirtyArea).Bounds.Min.field0_0x0._s_0.Z - pdVar1[2],
              (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              __real_3f1a36e2e0000000 &&
              (dVar2 = (param_1->DirtyArea).Bounds.Max.field0_0x0._s_0.X - pdVar1[3],
              (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              __real_3f1a36e2e0000000)) &&
             ((dVar2 = (param_1->DirtyArea).Bounds.Max.field0_0x0._s_0.Y - pdVar1[4],
              (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              __real_3f1a36e2e0000000 &&
              (dVar2 = (param_1->DirtyArea).Bounds.Max.field0_0x0._s_0.Z - pdVar1[5],
              (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              __real_3f1a36e2e0000000)))))) {
      return true;
    }
  }
  return false;
}

// operator() @ 146e38f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
`FRecastNavMeshGenerator::ExportNavigationData'::__l28::<lambda_1>::operator()
          (void *this,FNavigationOctreeElement *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  double dVar3;
  undefined1 auVar4 [16];
  uchar uVar5;
  FNavigationRelevantData *pFVar6;
  ForAnyElementType *pFVar7;
  ANavigationData *this_00;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  char cVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  TMatrix<double> *pTVar24;
  TVector<double> *pTVar25;
  UClass *pUVar26;
  UClass *pUVar27;
  longlong *plVar28;
  TTransform<double> *pTVar29;
  longlong *plVar30;
  double *pdVar31;
  FAreaNavModifier *this_01;
  TTransform<double> *pTVar32;
  FAreaNavModifier *pFVar33;
  longlong lVar34;
  ulonglong uVar35;
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auStackY_3e8 [32];
  undefined1 local_398;
  undefined1 local_397;
  undefined1 local_396 [2];
  int local_394;
  int local_390 [2];
  TTransform<double> *local_388;
  ulonglong local_380;
  double local_378;
  double local_370;
  undefined8 local_368;
  uint local_360;
  undefined4 local_358;
  int iStack_354;
  int iStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined4 local_340;
  double *local_338;
  undefined4 *local_330;
  FConvexNavAreaData local_328;
  undefined1 local_308;
  FConvexNavAreaData *local_300;
  longlong local_2f8;
  undefined8 local_2f0;
  FReadAccessScope local_2e8;
  undefined1 local_2c8 [32];
  FReadAccessScope local_2a8;
  FReadAccessScope local_290;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  undefined1 local_248;
  undefined1 local_238 [16];
  double local_228;
  double dStack_220;
  undefined1 local_218 [16];
  double local_208;
  double dStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  pFVar6 = (param_1->Data).Object;
  plVar30 = (longlong *)0x0;
  if ((*(int *)&(pFVar6->VoxelData).field_0x10 != 0) ||
     (*(int *)&(pFVar6->CollisionData).field_0x10 != 0)) {
    if (*(char *)((longlong)this + 0x28) == '\0') {
      lVar34 = *(longlong *)((longlong)this + 8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pFVar6->ShouldUseGeometryDelegate,&local_2e8);
      if (((*(int *)&(pFVar6->ShouldUseGeometryDelegate).field_0x10 == 0) ||
          (plVar28 = *(longlong **)&(pFVar6->ShouldUseGeometryDelegate).field_0x8,
          plVar28 == (longlong *)0x0)) ||
         (cVar18 = (**(code **)(*plVar28 + 0x38))(), cVar18 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_2e8);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_2e8);
        pFVar6 = (param_1->Data).Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &pFVar6->ShouldUseGeometryDelegate,&local_2a8);
        plVar28 = plVar30;
        if (*(int *)&(pFVar6->ShouldUseGeometryDelegate).field_0x10 != 0) {
          plVar28 = *(longlong **)&(pFVar6->ShouldUseGeometryDelegate).field_0x8;
        }
        cVar18 = (**(code **)(*plVar28 + 0x60))(plVar28,lVar34 + 0x2d0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_2a8);
        if (cVar18 == '\0') {
          cVar18 = '\0';
          goto LAB_146e3908c;
        }
      }
      cVar18 = '\x01';
    }
    else {
      cVar18 = (**(code **)(**(longlong **)this + 0x70))
                         (*(longlong **)this,param_1,*(longlong *)((longlong)this + 8) + 0x2d0);
    }
LAB_146e3908c:
    if (cVar18 != '\0') {
      bVar19 = true;
      goto LAB_146e39098;
    }
  }
  bVar19 = false;
LAB_146e39098:
  local_260 = (param_1->Bounds).Origin.field0_0x0._s_0.X;
  local_258 = (param_1->Bounds).Origin.field0_0x0._s_0.Y;
  local_278 = local_260 - (param_1->Bounds).BoxExtent.field0_0x0._s_0.X;
  local_250 = (param_1->Bounds).Origin.field0_0x0._s_0.Z;
  pFVar6 = (param_1->Data).Object;
  local_270 = local_258 - (param_1->Bounds).BoxExtent.field0_0x0._s_0.Y;
  local_260 = local_260 + (param_1->Bounds).BoxExtent.field0_0x0._s_0.X;
  local_258 = local_258 + (param_1->Bounds).BoxExtent.field0_0x0._s_0.Y;
  local_388 = (TTransform<double> *)0x0;
  local_268 = local_250 - (param_1->Bounds).BoxExtent.field0_0x0._s_0.Z;
  local_250 = local_250 + (param_1->Bounds).BoxExtent.field0_0x0._s_0.Z;
  local_380 = 0;
  local_248 = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar6->NavDataPerInstanceTransformDelegate,&local_290);
  if ((*(int *)&(pFVar6->NavDataPerInstanceTransformDelegate).field_0x10 != 0) &&
     (plVar28 = *(longlong **)&(pFVar6->NavDataPerInstanceTransformDelegate).field_0x8,
     plVar28 != (longlong *)0x0)) {
    (**(code **)(*plVar28 + 0x68))(plVar28,&local_278,&local_388);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_290);
  if ((bVar19) &&
     (pFVar6 = (param_1->Data).Object, *(int *)&(pFVar6->CollisionData).field_0x10 != 0)) {
    local_330 = *(undefined4 **)&pFVar6->CollisionData;
    pFVar7 = *(ForAnyElementType **)((longlong)this + 0x10);
    iVar21 = 1;
    if (1 < (int)local_380) {
      iVar21 = (int)local_380;
    }
    local_358 = *local_330;
    iVar22 = local_330[1];
    iStack_350 = local_330[2];
    uStack_34c = local_330[3];
    local_340 = local_330[6];
    local_348 = *(undefined8 *)(local_330 + 4);
    local_338 = (double *)(local_330 + 0xc);
    local_330 = local_330 + ((longlong)iVar22 + 2) * 6;
    iVar20 = (int)pFVar7[1]._padding_;
    uVar23 = iVar20 + iVar21 * iStack_350 * 3;
    iStack_354 = iVar22;
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
    }
    if (*(int *)((longlong)&pFVar7[1]._padding_ + 4) < (int)uVar23) {
      UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                (4,4,uVar23,pFVar7,iVar20,(int *)((longlong)&pFVar7[1]._padding_ + 4));
    }
    pFVar7 = *(ForAnyElementType **)((longlong)this + 0x18);
    iVar20 = (int)pFVar7[1]._padding_;
    uVar23 = iVar20 + iVar22 * iVar21 * 3;
    if ((int)uVar23 < 0) {
      iStack_354 = iVar22;
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
    }
    piVar1 = (int *)((longlong)&pFVar7[1]._padding_ + 4);
    iStack_354 = iVar22;
    if (*piVar1 < (int)uVar23) {
      UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                (8,8,uVar23,pFVar7,iVar20,piVar1);
    }
    if ((int)local_380 == 0) {
      iVar21 = iStack_350 * 3;
      if (0 < iVar21) {
        do {
          pFVar7 = *(ForAnyElementType **)((longlong)this + 0x10);
          iVar20 = *(int *)(*(longlong *)((longlong)this + 0x18) + 0x10);
          local_394 = iVar20 / 3 + (iVar20 >> 0x1f) +
                      (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) & 0xffffffffU) >>
                           0x1f) + local_330[(longlong)plVar30];
          if ((((int *)pFVar7->_padding_ <= &local_394) &&
              (&local_394 < (int *)pFVar7->_padding_ + *(int *)((longlong)&pFVar7[1]._padding_ + 4))
              ) && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar20 = (int)pFVar7[1]._padding_;
          piVar1 = (int *)((longlong)&pFVar7[1]._padding_ + 4);
          if (iVar20 == *piVar1) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                               (0x404,pFVar7,piVar1);
          }
          *(int *)&pFVar7[1]._padding_ = iVar20 + 1;
          plVar30 = (longlong *)((longlong)plVar30 + 1);
          *(int *)(pFVar7->_padding_ + (longlong)iVar20 * 4) = local_394;
        } while ((longlong)plVar30 < (longlong)iVar21);
      }
      lVar34 = (longlong)(iStack_354 * 3);
      pdVar31 = local_338;
      if (0 < iStack_354 * 3) {
        do {
          pFVar7 = *(ForAnyElementType **)((longlong)this + 0x18);
          if ((((double *)pFVar7->_padding_ <= pdVar31) &&
              (pdVar31 < (double *)pFVar7->_padding_ + *(int *)((longlong)&pFVar7[1]._padding_ + 4))
              ) && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar21 = (int)pFVar7[1]._padding_;
          piVar1 = (int *)((longlong)&pFVar7[1]._padding_ + 4);
          if (iVar21 == *piVar1) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                               (0x808,pFVar7,piVar1);
          }
          *(int *)&pFVar7[1]._padding_ = iVar21 + 1;
          *(double *)(pFVar7->_padding_ + (longlong)iVar21 * 8) = *pdVar31;
          lVar34 = lVar34 + -1;
          pdVar31 = pdVar31 + 1;
        } while (lVar34 != 0);
      }
    }
    dVar17 = __real_3ff0000000000000;
    iVar21 = (int)local_380;
    pTVar32 = local_388 + (int)local_380;
    pTVar29 = local_388;
    while( true ) {
      if ((int)local_380 != iVar21) {
        local_398 = 0;
        `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_398);
      }
      if (pTVar29 == pTVar32) break;
      lVar34 = 0;
      iVar20 = iStack_350 * 3;
      if (0 < iVar20) {
        do {
          pFVar7 = *(ForAnyElementType **)((longlong)this + 0x10);
          iVar22 = *(int *)(*(longlong *)((longlong)this + 0x18) + 0x10);
          local_390[0] = iVar22 / 3 + (iVar22 >> 0x1f) +
                         (int)(((longlong)iVar22 / 3 + ((longlong)iVar22 >> 0x3f) & 0xffffffffU) >>
                              0x1f) + local_330[lVar34];
          if ((((int *)pFVar7->_padding_ <= local_390) &&
              (local_390 < (int *)pFVar7->_padding_ + *(int *)((longlong)&pFVar7[1]._padding_ + 4)))
             && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar22 = (int)pFVar7[1]._padding_;
          piVar1 = (int *)((longlong)&pFVar7[1]._padding_ + 4);
          if (iVar22 == *piVar1) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                               (0x404,pFVar7,piVar1);
          }
          *(int *)&pFVar7[1]._padding_ = iVar22 + 1;
          lVar34 = lVar34 + 1;
          *(int *)(pFVar7->_padding_ + (longlong)iVar22 * 4) = local_390[0];
        } while (lVar34 < iVar20);
      }
      local_2c8._16_16_ = *(undefined1 (*) [16])(pTVar29->Rotation).ZW.m128d_f64;
      dVar11 = (pTVar29->Rotation).XY.m128d_f64[0];
      dVar10 = (pTVar29->Rotation).XY.m128d_f64[1];
      dVar14 = (pTVar29->Rotation).XY.m128d_f64[0];
      dVar16 = dVar10 + dVar10;
      dVar3 = local_2c8._16_8_;
      dVar38 = dVar3 + dVar3;
      dVar13 = (dVar11 + dVar11) * dVar11;
      dVar9 = local_2c8._24_8_;
      auVar4 = *(undefined1 (*) [16])(pTVar29->Scale3D).XY.m128d_f64;
      auVar41._8_4_ = SUB84(dVar16 * dVar10,0);
      auVar41._0_8_ = dVar13;
      auVar41._12_4_ = (int)((ulonglong)(dVar16 * dVar10) >> 0x20);
      auVar39 = blendpd(auVar4,*(undefined1 (*) [16])(pTVar29->Scale3D).ZW.m128d_f64,2);
      dVar10 = dVar16 * dVar14;
      dVar40 = dVar38 * (pTVar29->Rotation).XY.m128d_f64[1];
      local_2c8._0_8_ = (pTVar29->Rotation).XY.m128d_f64[0];
      local_2c8._8_8_ = (pTVar29->Rotation).XY.m128d_f64[1];
      dVar15 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - (dVar38 * dVar3 + dVar13)) *
               (pTVar29->Scale3D).XY.m128d_f64[1];
      auVar36._8_4_ = local_2c8._24_4_;
      auVar36._0_8_ = dVar9;
      auVar36._12_4_ = local_2c8._28_4_;
      dVar37 = auVar36._8_8_ * (dVar11 + dVar11);
      dVar14 = dVar14 * dVar38;
      dVar11 = (dVar9 * dVar38 + dVar10) * (pTVar29->Scale3D).XY.m128d_f64[0];
      dVar12 = (dVar37 + dVar40) * (pTVar29->Scale3D).XY.m128d_f64[1];
      dVar40 = (pTVar29->Scale3D).ZW.m128d_f64[0] * (dVar40 - dVar37);
      local_1e8 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - (dVar13 + auVar41._8_8_)) *
                  (pTVar29->Scale3D).ZW.m128d_f64[0];
      local_228 = auVar39._0_8_ * (dVar14 - dVar16 * dVar9);
      local_238._8_4_ = SUB84(dVar11,0);
      local_238._0_8_ =
           (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - (dVar38 * dVar3 + auVar41._8_8_)) *
           (pTVar29->Scale3D).XY.m128d_f64[0];
      local_238._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      auVar39._8_4_ = SUB84(dVar12,0);
      auVar39._0_8_ = dVar11;
      auVar39._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      local_208 = auVar39._8_8_;
      local_1d8 = (pTVar29->Translation).XY.m128d_f64[0];
      dStack_1d0 = (pTVar29->Translation).XY.m128d_f64[1];
      dStack_200 = 0.0;
      local_1c8 = *(undefined4 *)(pTVar29->Translation).ZW.m128d_f64;
      uStack_1c4 = *(undefined4 *)((longlong)(pTVar29->Translation).ZW.m128d_f64 + 4);
      local_1f8._8_4_ = SUB84(dVar40,0);
      local_1f8._0_8_ = (dVar16 * dVar9 + dVar14) * (pTVar29->Scale3D).ZW.m128d_f64[0];
      local_1f8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
      dStack_220 = 0.0;
      local_218._8_4_ = SUB84(dVar15,0);
      local_218._0_8_ = auVar4._8_8_ * (dVar10 - dVar9 * dVar38);
      local_218._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      dStack_1e0 = 0.0;
      uStack_1c0 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      uStack_1bc = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      pTVar24 = Unreal2RecastMatrix(&local_138);
      VectorMatrixMultiply(&local_1b8,(TMatrix<double> *)local_238,pTVar24);
      if (0 < iStack_354 * 3) {
        uVar35 = (ulonglong)((iStack_354 * 3 - 1U) / 3 + 1);
        pdVar31 = local_338;
        do {
          pTVar25 = Recast2UnrealPoint((TVector<double> *)local_2c8,pdVar31);
          dVar9 = (pTVar25->field0_0x0)._s_0.X;
          dVar10 = (pTVar25->field0_0x0)._s_0.Y;
          pFVar7 = *(ForAnyElementType **)((longlong)this + 0x18);
          dVar3 = (pTVar25->field0_0x0)._s_0.Z;
          local_378 = local_1b8.M[1][0] * dVar10 + local_1b8.M[0][0] * dVar9 +
                      local_1b8.M[2][0] * dVar3 + local_1b8.M[3][0] * dVar17;
          local_370 = local_1b8.M[1][1] * dVar10 + local_1b8.M[0][1] * dVar9 +
                      local_1b8.M[2][1] * dVar3 + local_1b8.M[3][1] * dVar17;
          local_368 = local_1b8.M[1][2] * dVar10 + local_1b8.M[0][2] * dVar9 +
                      local_1b8.M[2][2] * dVar3 + local_1b8.M[3][2] * dVar17;
          if ((((double *)pFVar7->_padding_ <= &local_378) &&
              (&local_378 <
               (double *)pFVar7->_padding_ + *(int *)((longlong)&pFVar7[1]._padding_ + 4))) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar20 = (int)pFVar7[1]._padding_;
          piVar1 = (int *)((longlong)&pFVar7[1]._padding_ + 4);
          if (iVar20 == *piVar1) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                               (0x808,pFVar7,piVar1);
          }
          *(int *)&pFVar7[1]._padding_ = iVar20 + 1;
          *(double *)(pFVar7->_padding_ + (longlong)iVar20 * 8) = local_378;
          pFVar7 = *(ForAnyElementType **)((longlong)this + 0x18);
          if ((((double *)pFVar7->_padding_ <= &local_370) &&
              (&local_370 <
               (double *)pFVar7->_padding_ + *(int *)((longlong)&pFVar7[1]._padding_ + 4))) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar20 = (int)pFVar7[1]._padding_;
          piVar1 = (int *)((longlong)&pFVar7[1]._padding_ + 4);
          if (iVar20 == *piVar1) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                               (0x808,pFVar7,piVar1);
          }
          *(int *)&pFVar7[1]._padding_ = iVar20 + 1;
          *(double *)(pFVar7->_padding_ + (longlong)iVar20 * 8) = local_370;
          pFVar7 = *(ForAnyElementType **)((longlong)this + 0x18);
          if ((((undefined8 *)pFVar7->_padding_ <= &local_368) &&
              (&local_368 <
               (undefined8 *)pFVar7->_padding_ + *(int *)((longlong)&pFVar7[1]._padding_ + 4))) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar20 = (int)pFVar7[1]._padding_;
          piVar1 = (int *)((longlong)&pFVar7[1]._padding_ + 4);
          if (iVar20 == *piVar1) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                               (0x808,pFVar7,piVar1);
          }
          pdVar31 = pdVar31 + 3;
          *(int *)&pFVar7[1]._padding_ = iVar20 + 1;
          puVar2 = (undefined4 *)(pFVar7->_padding_ + (longlong)iVar20 * 8);
          *puVar2 = (undefined4)local_368;
          puVar2[1] = local_368._4_4_;
          uVar35 = uVar35 - 1;
        } while (uVar35 != 0);
      }
      pTVar29 = pTVar29 + 1;
    }
  }
  else {
    pFVar6 = (param_1->Data).Object;
    local_360 = (pFVar6->Modifiers).Areas.ArrayNum;
    uVar35 = (ulonglong)(int)local_360;
    this_01 = (FAreaNavModifier *)(pFVar6->Modifiers).Areas.AllocatorInstance.Data;
    pFVar33 = this_01 + uVar35;
    while( true ) {
      if ((pFVar6->Modifiers).Areas.ArrayNum != (int)uVar35) {
        local_397 = 0;
        `TCheckedPointerIterator<FAreaNavModifier_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_397);
      }
      if (this_01 == pFVar33) break;
      uVar5 = (this_01->ShapeType).Value;
      if ((uVar5 == '\x03') || (uVar5 == '\x04')) {
        local_328.Points.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        this_00 = *(ANavigationData **)((longlong)this + 8);
        local_328.Points.ArrayNum = 0;
        local_328.Points.ArrayMax = 0;
        pUVar26 = (UClass *)FWeakObjectPtr::Get(&(this_01->AreaClassOb).WeakPtr);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar26 != (UClass *)0x0) goto LAB_146e39a5f;
LAB_146e39a8d:
          pUVar26 = (UClass *)0x0;
        }
        else {
          if (pUVar26 == (UClass *)0x0) goto LAB_146e39a8d;
          UE::GC::MarkAsReachable((UObject *)pUVar26);
LAB_146e39a5f:
          pUVar27 = Z_Construct_UClass_UNavAreaBase_NoRegister();
          if (pUVar27 == (UClass *)0x0) goto LAB_146e39a8d;
          iVar21 = (int)pUVar27->_padding_;
          if (((int)pUVar26->_padding_ < iVar21) ||
             ((longlong *)*(undefined1 **)(pUVar26->_padding_ + (longlong)iVar21 * 8) !=
              &pUVar27->_padding_)) {
            bVar19 = false;
          }
          else {
            bVar19 = true;
          }
          if (!bVar19) goto LAB_146e39a8d;
        }
        uVar23 = ANavigationData::GetAreaID(this_00,pUVar26);
        if (uVar23 == 0xffffffff) {
          local_308 = 0xff;
        }
        else {
          if (((uVar23 != (uVar23 & 0xff)) || ((int)uVar23 < 0)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IntFitsIn<OutType>(In)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                  ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_308 = (undefined1)uVar23;
        }
        local_300 = &local_328;
        local_2f8 = (longlong)this + 8;
        local_2f0 = *(undefined8 *)((longlong)this + 0x20);
        if (uVar5 == '\x03') {
          FAreaNavModifier::GetConvex(this_01,&local_328);
          ``FRecastNavMeshGenerator::ExportNavigationData'::__l28::<lambda_1>::operator()'::__l33::
          <lambda_1>::operator()(&local_300,&local_328);
        }
        else {
          iVar21 = (int)local_380;
          uVar35 = (ulonglong)(int)local_380;
          pTVar32 = local_388 + uVar35;
          pTVar29 = local_388;
          while( true ) {
            if ((int)uVar35 != iVar21) {
              local_396[0] = 0;
              `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_396);
            }
            if (pTVar29 == pTVar32) break;
            FAreaNavModifier::GetPerInstanceConvex(this_01,pTVar29,&local_328);
            ``FRecastNavMeshGenerator::ExportNavigationData'::__l28::<lambda_1>::operator()'::__l33
            ::<lambda_1>::operator()(&local_300,&local_328);
            uVar35 = local_380 & 0xffffffff;
            pTVar29 = pTVar29 + 1;
          }
        }
        if (local_328.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Points.AllocatorInstance.Data);
        }
      }
      uVar35 = (ulonglong)local_360;
      this_01 = this_01 + 1;
    }
  }
  if (local_388 != (TTransform<double> *)0x0) {
    FMemory::Free(local_388);
  }
  return;
}

// operator() @ 146e39c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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
`FRecastNavMeshGenerator::GrabDebugSnapshot'::__l31::<lambda_1>::operator()
          (void *this,FNavigationOctreeElement *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  FNavigationRelevantData *pFVar3;
  longlong *plVar4;
  ANavigationData *this_00;
  FVisualLogEntry *pFVar5;
  code *pcVar6;
  double dVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  TSubclassOf<UNavAreaBase> TVar15;
  FColor *pFVar16;
  int iVar17;
  longlong *plVar18;
  longlong lVar19;
  ForAnyElementType FVar20;
  ulonglong uVar21;
  uint uVar22;
  FAreaNavModifier *pFVar23;
  TTransform<double> *pTVar24;
  longlong lVar25;
  TTransform<double> *pTVar26;
  UClass *pUVar27;
  FAreaNavModifier *this_01;
  undefined1 auStackY_308 [32];
  undefined1 local_2b8;
  undefined1 local_2b7 [3];
  FColor_u_0 local_2b4;
  FColor_u_0 local_2b0;
  FColor_u_0 local_2ac;
  FAreaNavModifier *local_2a8;
  undefined1 local_2a0 [8];
  TTransform<double> *local_298;
  ulonglong local_290;
  uint local_288;
  void *local_280;
  undefined8 local_278;
  FNavigationRelevantData *local_270;
  undefined4 local_268;
  int iStack_264;
  int iStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 *local_248;
  undefined4 *local_240;
  TVector<double>_u_0 local_238;
  float local_220;
  float local_21c;
  FString local_218;
  FString local_208;
  FConvexNavAreaData local_1f8;
  FConvexNavAreaData local_1d8;
  TVector<double>_u_0 local_1b8;
  undefined4 *local_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined8 local_188;
  undefined8 local_180;
  longlong local_178;
  void **local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  longlong local_150;
  FColor_u_0 *local_148;
  TVector<double>_u_0 local_140;
  double local_128;
  double local_120;
  double local_118;
  FReadAccessScope local_108;
  FReadAccessScope local_f0;
  FReadAccessScope local_d8;
  TVector<double>_u_0 local_c0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined1 local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined1 local_68 [16];
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_308;
  pFVar3 = (param_1->Data).Object;
  plVar18 = (longlong *)0x0;
  if ((*(int *)&(pFVar3->VoxelData).field_0x10 != 0) ||
     (*(int *)&(pFVar3->CollisionData).field_0x10 != 0)) {
    if (*(char *)((longlong)this + 0x32) == '\0') {
      lVar25 = *(longlong *)((longlong)this + 8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pFVar3->ShouldUseGeometryDelegate,&local_108);
      if (((*(int *)&(pFVar3->ShouldUseGeometryDelegate).field_0x10 == 0) ||
          (plVar4 = *(longlong **)&(pFVar3->ShouldUseGeometryDelegate).field_0x8,
          plVar4 == (longlong *)0x0)) || (cVar9 = (**(code **)(*plVar4 + 0x38))(), cVar9 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_108);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_108);
        pFVar3 = (param_1->Data).Object;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &pFVar3->ShouldUseGeometryDelegate,&local_d8);
        if (*(int *)&(pFVar3->ShouldUseGeometryDelegate).field_0x10 != 0) {
          plVar18 = *(longlong **)&(pFVar3->ShouldUseGeometryDelegate).field_0x8;
        }
        cVar9 = (**(code **)(*plVar18 + 0x60))(plVar18,lVar25 + 0x2d0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_d8);
        if (cVar9 == '\0') {
          cVar9 = '\0';
          goto LAB_146e39d43;
        }
      }
      cVar9 = '\x01';
    }
    else {
      cVar9 = (**(code **)(**(longlong **)this + 0x70))();
    }
LAB_146e39d43:
    if (cVar9 != '\0') {
      bVar10 = true;
      goto LAB_146e39d4d;
    }
  }
  bVar10 = false;
LAB_146e39d4d:
  local_70 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.X;
  local_88 = (param_1->Bounds).Origin.field0_0x0._s_0.X - local_70;
  local_80 = (param_1->Bounds).Origin.field0_0x0._s_0.Y -
             (param_1->Bounds).BoxExtent.field0_0x0._s_0.Y;
  pFVar3 = (param_1->Data).Object;
  local_70 = local_70 + (param_1->Bounds).Origin.field0_0x0._s_0.X;
  local_298 = (TTransform<double> *)0x0;
  local_78 = (param_1->Bounds).Origin.field0_0x0._s_0.Z -
             (param_1->Bounds).BoxExtent.field0_0x0._s_0.Z;
  local_290 = 0;
  local_58 = 1;
  dVar7 = (param_1->Bounds).BoxExtent.field0_0x0._s_0.Z + (param_1->Bounds).Origin.field0_0x0._s_0.Z
  ;
  local_68._8_4_ = SUB84(dVar7,0);
  local_68._0_8_ =
       (param_1->Bounds).BoxExtent.field0_0x0._s_0.Y + (param_1->Bounds).Origin.field0_0x0._s_0.Y;
  local_68._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar3->NavDataPerInstanceTransformDelegate,&local_f0);
  if ((*(int *)&(pFVar3->NavDataPerInstanceTransformDelegate).field_0x10 != 0) &&
     (plVar18 = *(longlong **)&(pFVar3->NavDataPerInstanceTransformDelegate).field_0x8,
     plVar18 != (longlong *)0x0)) {
    (**(code **)(*plVar18 + 0x68))(plVar18,&local_88);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_f0);
  if ((bVar10) &&
     (pFVar3 = (param_1->Data).Object, *(int *)&(pFVar3->CollisionData).field_0x10 != 0)) {
    local_240 = *(undefined4 **)&pFVar3->CollisionData;
    local_268 = *local_240;
    iStack_264 = local_240[1];
    iStack_260 = local_240[2];
    uStack_25c = local_240[3];
    local_258 = *(undefined8 *)(local_240 + 4);
    local_250 = local_240[6];
    local_248 = local_240 + 0xc;
    local_240 = local_240 + ((longlong)iStack_264 + 2) * 6;
    uVar8 = iStack_260 * 3;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              (*(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x10),uVar8,No);
    uVar22 = 0;
    if (uVar8 != 0) {
      lVar25 = 0;
      do {
        plVar18 = *(longlong **)((longlong)this + 0x10);
        uVar2 = *(undefined4 *)(lVar25 + (longlong)local_240);
        uVar11 = 0;
        if ((int)uVar22 < (int)plVar18[1]) {
          uVar11 = ~uVar22 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar25 = lVar25 + 4;
        lVar19 = (longlong)(int)uVar22;
        uVar22 = uVar22 + 1;
        *(undefined4 *)(*plVar18 + lVar19 * 4) = uVar2;
      } while (uVar22 < uVar8);
    }
    local_1a0 = &local_268;
    local_198 = *(undefined8 *)((longlong)this + 0x18);
    local_190 = (longlong)this + 0x20;
    local_188 = *(undefined8 *)((longlong)this + 0x10);
    local_180 = *(undefined8 *)((longlong)this + 0x28);
    local_178 = (longlong)this + 0x30;
    iVar12 = (int)local_290;
    if ((int)local_290 == 0) {
      ``FRecastNavMeshGenerator::GrabDebugSnapshot'::__l31::<lambda_1>::operator()'::__l5::
      <lambda_1>::operator()(&local_1a0,&UE::Math::TTransform<double>::Identity);
      iVar12 = (int)local_290;
    }
    pTVar26 = local_298 + iVar12;
    pTVar24 = local_298;
    iVar17 = iVar12;
    while( true ) {
      if (iVar17 != iVar12) {
        `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_2a0);
      }
      if (pTVar24 == pTVar26) break;
      ``FRecastNavMeshGenerator::GrabDebugSnapshot'::__l31::<lambda_1>::operator()'::__l5::
      <lambda_1>::operator()(&local_1a0,pTVar24);
      pTVar24 = pTVar24 + 1;
      iVar17 = (int)local_290;
    }
  }
  else {
    local_270 = (param_1->Data).Object;
    local_280 = (void *)0x0;
    local_278 = 0;
    local_288 = (local_270->Modifiers).Areas.ArrayNum;
    uVar21 = (ulonglong)(int)local_288;
    this_01 = (FAreaNavModifier *)(local_270->Modifiers).Areas.AllocatorInstance.Data;
    pFVar23 = this_01 + uVar21;
    local_2a8 = pFVar23;
    while( true ) {
      pUVar27 = (UClass *)0x0;
      if ((local_270->Modifiers).Areas.ArrayNum != (int)uVar21) {
        local_2b8 = 0;
        `TCheckedPointerIterator<FAreaNavModifier_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_2b8);
      }
      if (this_01 == pFVar23) break;
      bVar1 = (this_01->ShapeType).Value;
      if (bVar1 == 0) goto LAB_146e3a287;
      this_00 = *(ANavigationData **)((longlong)this + 8);
      pUVar13 = (UClass *)FWeakObjectPtr::Get(&(this_01->AreaClassOb).WeakPtr);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar13 != (UClass *)0x0) goto LAB_146e3a02b;
LAB_146e3a059:
        pUVar13 = pUVar27;
      }
      else {
        if (pUVar13 == (UClass *)0x0) goto LAB_146e3a059;
        UE::GC::MarkAsReachable((UObject *)pUVar13);
LAB_146e3a02b:
        pUVar14 = Z_Construct_UClass_UNavAreaBase_NoRegister();
        if (pUVar14 == (UClass *)0x0) goto LAB_146e3a059;
        iVar12 = (int)pUVar14->_padding_;
        if (((int)pUVar13->_padding_ < iVar12) ||
           ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar12 * 8) !=
            &pUVar14->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (!bVar10) goto LAB_146e3a059;
      }
      iVar12 = ANavigationData::GetAreaID(this_00,pUVar13);
      pUVar13 = ANavigationData::GetAreaClass(*(ANavigationData **)((longlong)this + 8),iVar12);
      if (pUVar13 != (UClass *)0x0) {
        if ((pUVar13->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar13);
        }
        pUVar27 = (UClass *)(pUVar13->ClassDefaultObject).field0_0x0.DebugPtr;
        pUVar14 = Z_Construct_UClass_UNavArea_NoRegister();
        iVar12 = (int)pUVar14->_padding_;
        if (((*(int *)(pUVar27->_padding_ + 0x38) < iVar12) ||
            ((longlong *)
             *(undefined1 **)(*(longlong *)(pUVar27->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
             &pUVar14->_padding_)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ret->IsA(T::StaticClass())",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                ,0x1181,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      TVar15 = FNavigationSystem::GetDefaultWalkableArea();
      lVar25 = *(longlong *)TVar15.Class.field0_0x0;
      if ((lVar25 == 0) ||
         (pUVar14 = Z_Construct_UClass_UNavAreaBase_NoRegister(), pUVar14 == (UClass *)0x0)) {
LAB_146e3a130:
        pUVar14 = (UClass *)0x0;
      }
      else {
        iVar12 = (int)pUVar14->_padding_;
        if ((*(int *)(lVar25 + 0x38) < iVar12) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar25 + 0x30) + (longlong)iVar12 * 8) !=
            &pUVar14->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (!bVar10) goto LAB_146e3a130;
        pUVar14 = *(UClass **)TVar15.Class.field0_0x0;
      }
      if (pUVar13 == pUVar14) {
        pFVar16 = &FColorList::Cyan;
      }
      else if (pUVar27 == (UClass *)0x0) {
        pFVar16 = (FColor *)(*(longlong *)((longlong)this + 8) + 0x310);
      }
      else {
        pFVar16 = (FColor *)&pUVar27->_padding_;
      }
      local_2b4 = (FColor_u_0)pFVar16->field0_0x0;
      if (bVar1 == 2) {
        FAreaNavModifier::GetBox(this_01,(FBoxNavAreaData *)&local_140._s_0);
        pFVar5 = *(FVisualLogEntry **)((longlong)this + 0x20);
        ::FString::FString(&local_218,L"");
        local_c0._s_0.X = local_140._s_0.X - local_128;
        local_c0._s_0.Y = local_140._s_0.Y - local_120;
        local_a8 = local_140._s_0.X + local_128;
        local_a0 = local_140._s_0.Y + local_120;
        local_2b0._s_0.B = local_2b4._s_0.B;
        local_2b0._s_0.G = local_2b4._s_0.G;
        local_2b0._s_0.R = local_2b4._s_0.R;
        local_c0._s_0.Z = local_140._s_0.Z - local_118;
        local_98 = local_140._s_0.Z + local_118;
        local_2b0._s_0.A = 0xff;
        local_90 = 1;
        FVisualLogEntry::AddBox
                  (pFVar5,(TBox<double> *)&local_c0._s_0,&UE::Math::TMatrix<double>::Identity,
                   *(FName **)((longlong)this + 0x28),*(Type *)((longlong)this + 0x31),
                   (FColor *)&local_2b0._s_0,&local_218,0,false);
        FVar20.Data = local_218.Data.AllocatorInstance.Data;
LAB_146e3a278:
        pFVar23 = local_2a8;
        if (FVar20.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar20.Data);
          pFVar23 = local_2a8;
        }
      }
      else {
        if (bVar1 == 1) {
          FAreaNavModifier::GetCylinder(this_01,(FCylinderNavAreaData *)&local_238._s_0);
          pFVar5 = *(FVisualLogEntry **)((longlong)this + 0x20);
          ::FString::FString(&local_208,L"");
          local_2ac._s_0.B = local_2b4._s_0.B;
          local_2ac._s_0.G = local_2b4._s_0.G;
          local_2ac._s_0.R = local_2b4._s_0.R;
          local_1b8._s_0.X = local_238._s_0.X;
          local_1b8._s_0.Y = local_238._s_0.Y;
          local_2ac._s_0.A = 0xff;
          local_1b8._s_0.Z = (double)local_21c + local_238._s_0.Z;
          FVisualLogEntry::AddCylinder
                    (pFVar5,(TVector<double> *)&local_238._s_0,(TVector<double> *)&local_1b8._s_0,
                     local_220,*(FName **)((longlong)this + 0x28),*(Type *)((longlong)this + 0x31),
                     (FColor *)&local_2ac._s_0,&local_208,0,false);
          FVar20.Data = local_208.Data.AllocatorInstance.Data;
          goto LAB_146e3a278;
        }
        pFVar23 = local_2a8;
        if (bVar1 - 3 < 2) {
          local_170 = &local_280;
          local_168 = (longlong)this + 8;
          local_160 = (longlong)this + 0x20;
          local_158 = *(undefined8 *)((longlong)this + 0x28);
          local_150 = (longlong)this + 0x31;
          local_148 = &local_2b4;
          if (bVar1 == 3) {
            local_1f8.Points.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1f8.Points.ArrayNum = 0;
            local_1f8.Points.ArrayMax = 0;
            FAreaNavModifier::GetConvex(this_01,&local_1f8);
            ``FRecastNavMeshGenerator::GrabDebugSnapshot'::__l31::<lambda_1>::operator()'::__l35::
            <lambda_2>::operator()(&local_170,&local_1f8);
            FVar20.Data = local_1f8.Points.AllocatorInstance.Data;
            goto LAB_146e3a278;
          }
          iVar12 = (int)local_290;
          uVar21 = (ulonglong)(int)local_290;
          pTVar26 = local_298 + uVar21;
          pTVar24 = local_298;
          while( true ) {
            if ((int)uVar21 != iVar12) {
              local_2b7[0] = 0;
              `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_2b7);
            }
            pFVar23 = local_2a8;
            if (pTVar24 == pTVar26) break;
            local_1d8.Points.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1d8.Points.ArrayNum = 0;
            local_1d8.Points.ArrayMax = 0;
            FAreaNavModifier::GetPerInstanceConvex(this_01,pTVar24,&local_1d8);
            ``FRecastNavMeshGenerator::GrabDebugSnapshot'::__l31::<lambda_1>::operator()'::__l35::
            <lambda_2>::operator()(&local_170,&local_1d8);
            if (local_1d8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d8.Points.AllocatorInstance.Data);
            }
            uVar21 = local_290 & 0xffffffff;
            pTVar24 = pTVar24 + 1;
          }
        }
      }
LAB_146e3a287:
      this_01 = this_01 + 1;
      uVar21 = (ulonglong)local_288;
    }
    if (local_280 != (void *)0x0) {
      FMemory::Free(local_280);
    }
  }
  if (local_298 != (TTransform<double> *)0x0) {
    FMemory::Free(local_298);
  }
  return;
}

// AddGeneratedTileLayer @ 146e3daa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRecastNavMeshGenerator::AddGeneratedTileLayer
          (FRecastNavMeshGenerator *this,int param_1,FRecastTileGenerator *param_2,
          TMap<int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>_>
          *param_3,TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  dtNavMesh *this_00;
  FScriptContainerElement *pFVar5;
  ARecastNavMesh *pAVar6;
  code *pcVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastAddGeneratedTileLayer> FVar17;
  ulong64 uVar18;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName *pFVar19;
  uchar *puVar20;
  byte bVar21;
  byte bVar22;
  FScriptContainerElement *pFVar23;
  ulonglong uVar24;
  undefined1 *puVar25;
  FName FVar26;
  uint uVar27;
  FNavMeshTileData *this_03;
  undefined1 auStackY_4e8 [32];
  FColor_u_0 local_470 [2];
  ulong64 local_468;
  FRecastNavMeshGenerator *local_460;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *local_458;
  FName local_450;
  FName local_448;
  FRecastTileGenerator *local_438;
  FNavTileRef local_430;
  FName local_428;
  FNavTileRef local_420;
  FNavTileRef local_418;
  LARGE_INTEGER local_410;
  FString local_408;
  FStatMessage local_3f8;
  FName local_3e8;
  FName local_3e0;
  FName local_3d8;
  FName local_3d0;
  FName local_3c8 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  local_458 = param_4;
  FVar17 = StatPtr_STAT_Navigation_RecastAddGeneratedTileLayer;
  local_460 = this;
  local_438 = param_2;
  if (StatPtr_STAT_Navigation_RecastAddGeneratedTileLayer ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastAddGeneratedTileLayer>)0x0) {
    pFVar16 = ::FName::FName(&local_3e8,"STAT_Navigation_RecastAddGeneratedTileLayer");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastAddGeneratedTileLayer>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Navigation_RecastAddGeneratedTileLayer,*pFVar16,
                        L"Recast: sync add generated tile Layer","STATGROUP_Navigation",
                        "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar10 = false;
  bVar11 = false;
  local_448.ComparisonIndex.Value = 0;
  local_448.Number = 0;
  FVar26 = *(FName *)FVar17;
  bVar12 = false;
  bVar13 = false;
  if ((FVar26.ComparisonIndex.Value.Value == 0) && (FVar26.Number == 0)) {
LAB_146e3dc1c:
    bVar11 = bVar13;
    bVar10 = bVar12;
    bVar12 = false;
    FVar26 = local_448;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_470[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_470[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar10 = false;
      bVar11 = true;
      bVar12 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_450.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        local_450.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_450,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x17fe);
        bVar10 = true;
        bVar11 = true;
        bVar12 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e3dc1c;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar12 = true;
  }
  iVar3 = param_2->TileX;
  iVar4 = param_2->TileY;
  this_00 = this->DestNavMesh->RecastNavMeshImpl->DetourNavMesh;
  uVar18 = dtNavMesh::getTileRefAt(this_00,iVar3,iVar4,param_1);
  iVar15 = (param_2->NavigationData).ArrayNum;
  pFVar5 = (param_2->NavigationData).AllocatorInstance.Data;
  for (pFVar23 = pFVar5; pFVar23 != pFVar5 + (longlong)iVar15 * 0x58; pFVar23 = pFVar23 + 0x58) {
    if (*(int *)pFVar23 == param_1) {
      uVar27 = (uint)(((longlong)pFVar23 - (longlong)pFVar5) / 0x58);
      if (uVar27 != 0xffffffff) {
        uVar14 = 0;
        if ((int)uVar27 < iVar15) {
          uVar14 = ~uVar27 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        this_03 = (FNavMeshTileData *)
                  ((local_438->NavigationData).AllocatorInstance.Data + (longlong)(int)uVar27 * 0x58
                  );
        if (uVar18 == 0) {
          if (*(int *)&param_3->field_0x8 == *(int *)&param_3->field_0x34) goto LAB_146e3df9c;
          puVar25 = *(undefined1 **)&param_3->field_0x40;
          if (*(undefined1 **)&param_3->field_0x40 == (undefined1 *)0x0) {
            puVar25 = &param_3->field_0x38;
          }
          iVar15 = *(int *)(puVar25 + (ulonglong)(*(int *)&param_3->field_0x48 - 1U & param_1) * 4);
          if (iVar15 == -1) goto LAB_146e3df9c;
          goto LAB_146e3df80;
        }
        local_460->NumActiveTiles = local_460->NumActiveTiles + -1;
        pAVar6 = local_460->DestNavMesh;
        pFVar16 = ::FName::FName(&local_3e0,"removing");
        pFVar19 = ::FName::FName(&local_3d8,"");
        local_3b8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_3b8,"FRecastNavMeshGenerator::AddGeneratedTileLayer",0x2e,Yes);
        ARecastNavMesh::LogRecastTile
                  (pAVar6,local_3b8.Ptr,pFVar19,pFVar16,this_00,iVar3,iVar4,param_1,uVar18);
        if ((void *)local_3b8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_3b8._padding_);
        }
        dtNavMesh::removeTile(this_00,uVar18,(uchar **)0x0,(int *)0x0);
        local_430.TileRef = uVar18;
        TArray<FNavTileRef,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FNavTileRef>
                  (local_458,&local_430);
        bVar8 = (byte)this_00->m_polyBits;
        bVar9 = (byte)this_00->m_tileBits;
        bVar21 = bVar8 + bVar9;
        bVar22 = (byte)this_00->m_saltBits;
        uVar27 = ((uint)(uVar18 >> (bVar21 & 0x3f)) & (int)(1L << (bVar22 & 0x3f)) - 1U) + 1 &
                 (1 << (bVar22 & 0x1f)) - 1U;
        uVar24 = 1;
        if (uVar27 != 0) {
          uVar24 = (ulonglong)uVar27;
        }
        uVar18 = (ulonglong)((int)(1L << (bVar9 & 0x3f)) - 1U & (uint)(uVar18 >> (bVar8 & 0x3f))) <<
                 (bVar8 & 0x3f) | uVar24 << (bVar21 & 0x3f) |
                 (ulonglong)((int)(1L << (bVar8 & 0x3f)) - 1U & (uint)uVar18);
        goto LAB_146e3df9e;
      }
      break;
    }
  }
  dtNavMesh::removeTile(this_00,uVar18,(uchar **)0x0,(int *)0x0);
  local_418.TileRef = uVar18;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FNavTileRef>(local_458,&local_418);
LAB_146e3dca7:
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar12) && (FVar26 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_3f8.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
      local_3f8.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_410);
      local_3f8.StatData.Pad[4] = '\0';
      local_3f8.StatData.Pad[5] = '\0';
      local_3f8.StatData.Pad[6] = '\0';
      local_3f8.StatData.Pad[7] = '\0';
      local_3f8.StatData.Pad[0] = local_410.s.LowPart._0_1_;
      local_3f8.StatData.Pad[1] = local_410.s.LowPart._1_1_;
      local_3f8.StatData.Pad[2] = local_410.s.LowPart._2_1_;
      local_3f8.StatData.Pad[3] = local_410.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_3f8);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
  while (iVar15 = *(int *)(lVar2 + 0x10), iVar15 != -1) {
LAB_146e3df80:
    lVar2 = *(longlong *)param_3 + (longlong)iVar15 * 0x18;
    if (*(int *)(*(longlong *)param_3 + (longlong)iVar15 * 0x18) == param_1) {
      if (lVar2 != 0) {
        uVar18 = *(ulong64 *)(lVar2 + 8);
        goto LAB_146e3df9e;
      }
      break;
    }
  }
LAB_146e3df9c:
  uVar18 = 0;
LAB_146e3df9e:
  if ((((this_03->NavData).Object != (FNavData *)0x0) &&
      (((this_03->NavData).Object)->RawNavData != (uchar *)0x0)) &&
     (iVar15 = this_03->DataSize, 0 < iVar15)) {
    local_468 = 0;
    puVar20 = FNavMeshTileData::GetData(this_03);
    uVar27 = dtNavMesh::addTile(this_00,puVar20,iVar15,1,uVar18,&local_468);
    if ((((int)uVar27 < 0) && ((uVar27 & 4) != 0)) && (uVar18 != 0)) {
      iVar15 = this_03->DataSize;
      puVar20 = FNavMeshTileData::GetData(this_03);
      uVar27 = dtNavMesh::addTile(this_00,puVar20,iVar15,1,0,&local_468);
    }
    if ((int)uVar27 < 0) {
      if (((uVar27 & 4) != 0) && (1 < (byte)LogNavigation._0_1_)) {
        local_298._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_298,"FRecastNavMeshGenerator::AddGeneratedTileLayer",0x2e,Yes);
        dtNavMesh::getMaxTiles(this_00);
        local_428 = (FName)local_460->DestNavMesh->_padding_;
        ::FName::ToString(&local_428,&local_408);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
        if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_408.Data.AllocatorInstance.Data);
        }
        if ((void *)local_298._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_298._padding_);
        }
      }
    }
    else {
      local_420.TileRef = local_468;
      TArray<FNavTileRef,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FNavTileRef>
                (local_458,&local_420);
      uVar18 = local_468;
      local_460->NumActiveTiles = local_460->NumActiveTiles + 1;
      pAVar6 = local_460->DestNavMesh;
      pFVar16 = ::FName::FName(&local_3d0,"added generated");
      pFVar19 = ::FName::FName(local_3c8,"");
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"FRecastNavMeshGenerator::AddGeneratedTileLayer",0x2e,Yes);
      ARecastNavMesh::LogRecastTile
                (pAVar6,local_178.Ptr,pFVar19,pFVar16,this_00,iVar3,iVar4,param_1,uVar18);
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
      FNavMeshTileData::Release(this_03);
    }
  }
  goto LAB_146e3dca7;
}

// AddGeneratedTilesAndGetUpdatedTiles @ 146e3e240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FNavTileRef,TSizedDefaultAllocator<32>_> * __thiscall
FRecastNavMeshGenerator::AddGeneratedTilesAndGetUpdatedTiles
          (FRecastNavMeshGenerator *this,
          TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FRecastTileGenerator *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastAddGeneratedTiles> FVar12;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *pTVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  FName FVar17;
  int iVar18;
  ForElementType<unsigned_int> FVar19;
  FColor_u_0 FVar20;
  undefined1 auStackY_128 [32];
  undefined8 local_c8;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_c0;
  FName local_b0;
  undefined1 local_98 [64];
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  ulonglong uVar16;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  FVar12 = StatPtr_STAT_Navigation_RecastAddGeneratedTiles;
  if (StatPtr_STAT_Navigation_RecastAddGeneratedTiles ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastAddGeneratedTiles>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_c0,"STAT_Navigation_RecastAddGeneratedTiles");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastAddGeneratedTiles>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Navigation_RecastAddGeneratedTiles,*pFVar11,
                        L"Recast: sync add generated tiles","STATGROUP_Navigation",
                        "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar12;
  bVar7 = false;
  bVar9 = false;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8 = local_c8 & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8 = (TIntPoint<int>_u_0)FVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_c8,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x18e0);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c8 = (TIntPoint<int>_u_0)FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar8 = true;
      goto LAB_146e3e37f;
    }
  }
  bVar8 = false;
  FVar17 = local_b0;
LAB_146e3e37f:
  local_98._44_4_ = 0x80;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FVar20 = (FColor_u_0)param_1->TileY;
  iVar2 = param_1->TileX;
  local_c8._0_4_ = FVar20.Bits;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_98._32_8_ = 0;
  local_98._40_4_ = 0;
  local_98._48_4_ = 0xffffffff;
  local_98._52_4_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  if (param_1->bRegenerateCompressedLayers != 0) {
    pTVar13 = RemoveTileLayersAndGetUpdatedTiles
                        (this,&local_c0,iVar2,FVar20.Bits,
                         (TMap<int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>_>
                          *)local_98);
    if (__return_storage_ptr__ != pTVar13) {
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
      (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = pTVar13->ArrayNum;
      __return_storage_ptr__->ArrayMax = pTVar13->ArrayMax;
      pTVar13->ArrayNum = 0;
      pTVar13->ArrayMax = 0;
    }
    if ((FNavMeshTileData *)local_c0.AllocatorInstance.Data != (FNavMeshTileData *)0x0) {
      FMemory::Free(local_c0.AllocatorInstance.Data);
    }
    FVar20.Bits = (undefined4)local_c8;
  }
  uVar16 = 0;
  FVar19 = (param_1->DirtyLayers).AllocatorInstance.SecondaryData;
  iVar3 = (param_1->DirtyLayers).NumBits;
  if (FVar19 == (ForElementType<unsigned_int>)0x0) {
    FVar19 = (ForElementType<unsigned_int>)&param_1->DirtyLayers;
  }
  uVar4 = iVar3 + 0x1f;
  FVar14 = FVar19;
  if (uVar4 >> 5 == 0) {
LAB_146e3e48a:
    iVar18 = -1;
LAB_146e3e48f:
    if (this->DestNavMesh->RecastNavMeshImpl->DetourNavMesh != (dtNavMesh *)0x0) {
      local_c8._4_4_ = FVar20.Bits;
      local_c8._0_4_ = iVar2;
      bVar10 = IsAllowedToAddTileLayers(this,(TIntPoint<int>)local_c8);
      if ((bVar10) && (iVar18 != -1)) {
        uVar4 = (param_1->NavigationData).ArrayNum;
        local_c8 = (TIntPoint<int>_u_0)(param_1->NavigationData).AllocatorInstance.Data;
        local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c0.ArrayNum = uVar4;
        if (uVar4 == 0) {
          local_c0.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,uVar4,0,&local_c0.AllocatorInstance,uVar4,&local_c0.ArrayMax);
          ConstructItems<FNavMeshTileData,FNavMeshTileData,int>
                    (local_c0.AllocatorInstance.Data,(FNavMeshTileData *)local_c8,uVar4);
        }
        if (local_c0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_c0.ArrayNum);
        }
        if (__return_storage_ptr__->ArrayMax < local_c0.ArrayNum) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_c0.ArrayNum,&__return_storage_ptr__->AllocatorInstance,
                     __return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
        }
        if (iVar18 < (param_1->DirtyLayers).NumBits) {
          do {
            bVar10 = FRecastTileGenerator::IsLayerChanged(param_1,iVar18);
            if (bVar10) {
              AddGeneratedTileLayer
                        (this,iVar18,param_1,
                         (TMap<int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>_>
                          *)local_98,__return_storage_ptr__);
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < (param_1->DirtyLayers).NumBits);
        }
        DestructItems<FNavMeshTileData,int>
                  ((FNavMeshTileData *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
        if ((FNavMeshTileData *)local_c0.AllocatorInstance.Data != (FNavMeshTileData *)0x0) {
          FMemory::Free(local_c0.AllocatorInstance.Data);
        }
      }
    }
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar8) {
      FThreadStats::AddMessage(FVar17,CycleScopeEnd);
    }
    return __return_storage_ptr__;
  }
LAB_146e3e460:
  if (*(int *)FVar14 == 0) goto code_r0x000146e3e465;
  puVar1 = (uint *)((longlong)FVar19 + uVar16 * 4);
  iVar6 = 0;
  bVar10 = *puVar1 != 0;
  if (bVar10) {
    for (; (*puVar1 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
    }
  }
  iVar18 = 0x20;
  if (bVar10) {
    iVar18 = iVar6;
  }
  iVar18 = iVar18 + (int)uVar16 * 0x20;
  if (iVar18 < iVar3) goto LAB_146e3e48f;
  goto LAB_146e3e48a;
code_r0x000146e3e465:
  uVar15 = (int)uVar16 + 1;
  uVar16 = (ulonglong)uVar15;
  FVar14 = (ForElementType<unsigned_int>)((longlong)FVar14 + 4);
  if ((int)(uVar4 >> 5) <= (int)uVar15) goto LAB_146e3e48a;
  goto LAB_146e3e460;
}

// AddGeneratedTilesTimeSliced @ 146e3e630

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ETimeSliceWorkResult __thiscall
FRecastNavMeshGenerator::AddGeneratedTilesTimeSliced
          (FRecastNavMeshGenerator *this,FRecastTileGenerator *param_1,
          TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *pTVar2;
  uint *puVar3;
  longlong *plVar4;
  EAddGeneratedTilesTimeSlicedState EVar5;
  int iVar6;
  int iVar7;
  FName FVar8;
  dtNavMesh *pdVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  code *pcVar12;
  TIntPoint<int> TVar13;
  ETimeSliceWorkResult EVar14;
  bool bVar15;
  ETimeSliceWorkResult EVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RecastAddGeneratedTiles> FVar19;
  ForElementType<unsigned_int> FVar20;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *pTVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  ForElementType<unsigned_int> FVar26;
  FNameEntryId FVar27;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10 [2];
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *local_res18;
  FName local_res20;
  FName local_70;
  FName local_68;
  byte local_60;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_58;
  
  FVar19 = StatPtr_STAT_Navigation_RecastAddGeneratedTiles;
  local_res18 = param_2;
  if (StatPtr_STAT_Navigation_RecastAddGeneratedTiles ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastAddGeneratedTiles>)0x0) {
    pFVar18 = ::FName::FName(&local_70,"STAT_Navigation_RecastAddGeneratedTiles");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RecastAddGeneratedTiles>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_Navigation_RecastAddGeneratedTiles,*pFVar18,
                        L"Recast: sync add generated tiles","STATGROUP_Navigation",
                        "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  local_60 = 0;
  FVar8 = *(FName *)FVar19;
  FVar27 = FVar8.ComparisonIndex.Value;
  uVar25 = FVar8.Number;
  if ((FVar27.Value != 0) || (uVar25 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      local_60 = local_60 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar27.Value;
        local_res20.Number = uVar25;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x1890);
        local_60 = local_60 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar27.Value;
      uStackX_c = uVar25;
      local_68 = FVar8;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      local_60 = local_60 | 4;
    }
  }
  if (((this->SyncTimeSlicedData).TimeSliceManager == (FNavRegenTimeSliceManager *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("SyncTimeSlicedData.TimeSliceManager",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                          ,0x1892,L""), bVar15)) {
    pcVar12 = (code *)swi(3);
    EVar16 = (*pcVar12)();
    return EVar16;
  }
  iVar23 = param_1->TileX;
  iVar6 = param_1->TileY;
  TVar13.field0_0x0 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&param_1->TileX;
  pdVar9 = this->DestNavMesh->RecastNavMeshImpl->DetourNavMesh;
  EVar5 = (this->SyncTimeSlicedData).AddGeneratedTilesState;
  if (EVar5 == Init) {
    piVar1 = &(this->SyncTimeSlicedData).ResultTileRefsCached.ArrayMax;
    iVar7 = *piVar1;
    (this->SyncTimeSlicedData).ResultTileRefsCached.ArrayNum = 0;
    if (iVar7 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->SyncTimeSlicedData).ResultTileRefsCached.AllocatorInstance,0,piVar1);
    }
    uVar25 = (param_1->NavigationData).ArrayNum;
    if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
    }
    if (*piVar1 < (int)uVar25) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar25,&(this->SyncTimeSlicedData).ResultTileRefsCached.AllocatorInstance,
                 (this->SyncTimeSlicedData).ResultTileRefsCached.ArrayNum,piVar1);
    }
    TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
             *)&(this->SyncTimeSlicedData).OldLayerTileIdMapCached);
    TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
               *)&(this->SyncTimeSlicedData).OldLayerTileIdMapCached,
              (param_1->NavigationData).ArrayNum);
    FVar26 = (param_1->DirtyLayers).AllocatorInstance.SecondaryData;
    iVar7 = (param_1->DirtyLayers).NumBits;
    if (FVar26 == (ForElementType<unsigned_int>)0x0) {
      FVar26 = (ForElementType<unsigned_int>)&param_1->DirtyLayers;
    }
    uVar24 = 0;
    uVar25 = iVar7 + 0x1f;
    FVar20 = FVar26;
    if (uVar25 >> 5 != 0) {
LAB_146e3e886:
      if (*(int *)FVar20 == 0) goto code_r0x000146e3e88b;
      puVar3 = (uint *)((longlong)FVar26 + uVar24 * 4);
      iVar11 = 0;
      bVar15 = *puVar3 != 0;
      if (bVar15) {
        for (; (*puVar3 >> iVar11 & 1) == 0; iVar11 = iVar11 + 1) {
        }
      }
      iVar17 = 0x20;
      if (bVar15) {
        iVar17 = iVar11;
      }
      iVar17 = iVar17 + (int)uVar24 * 0x20;
      if (iVar7 <= iVar17) goto LAB_146e3e8af;
      goto LAB_146e3e8b4;
    }
LAB_146e3e8af:
    iVar17 = -1;
LAB_146e3e8b4:
    (this->SyncTimeSlicedData).AddGenTilesLayerIndex = iVar17;
    if (param_1->bRegenerateCompressedLayers != 0) {
      pTVar21 = RemoveTileLayersAndGetUpdatedTiles
                          (this,&local_58,iVar23,iVar6,
                           &(this->SyncTimeSlicedData).OldLayerTileIdMapCached);
      pTVar2 = &(this->SyncTimeSlicedData).ResultTileRefsCached;
      if (pTVar2 != pTVar21) {
        pFVar10 = (pTVar2->AllocatorInstance).Data;
        if (pFVar10 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar10);
        }
        (pTVar2->AllocatorInstance).Data = (pTVar21->AllocatorInstance).Data;
        (pTVar21->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this->SyncTimeSlicedData).ResultTileRefsCached.ArrayNum = pTVar21->ArrayNum;
        (this->SyncTimeSlicedData).ResultTileRefsCached.ArrayMax = pTVar21->ArrayMax;
        pTVar21->ArrayNum = 0;
        pTVar21->ArrayMax = 0;
      }
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
    }
    (this->SyncTimeSlicedData).AddGeneratedTilesState = AddTiles;
  }
  else if (EVar5 != AddTiles) {
    `FRecastNavMeshGenerator::AddGeneratedTilesTimeSliced'::__l30::<lambda_1>::operator()
              (&local_res8);
    EVar16 = Failed;
    bVar15 = true;
    goto LAB_146e3ea36;
  }
  EVar16 = Succeeded;
  if (((pdVar9 == (dtNavMesh *)0x0) || (bVar15 = IsAllowedToAddTileLayers(this,TVar13), !bVar15)) ||
     (iVar23 = (this->SyncTimeSlicedData).AddGenTilesLayerIndex, iVar23 == -1)) {
    EVar16 = Failed;
    bVar15 = false;
  }
  else {
    EVar14 = Succeeded;
    if (iVar23 < (param_1->DirtyLayers).NumBits) {
      plVar4 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      do {
        bVar15 = FRecastTileGenerator::IsLayerChanged(param_1,iVar23);
        if (bVar15) {
          if ((((this->SyncTimeSlicedData).TimeSliceManager)->TimeSlicer).bTimeSliceFinishedCached
              != false) {
            EVar14 = CallAgainNextTimeSlice;
            goto LAB_146e3ea26;
          }
          AddGeneratedTileLayer
                    (this,(this->SyncTimeSlicedData).AddGenTilesLayerIndex,param_1,
                     &(this->SyncTimeSlicedData).OldLayerTileIdMapCached,
                     &(this->SyncTimeSlicedData).ResultTileRefsCached);
          if ((*(int *)(*plVar4 + 0x9d4c) < ::_TSS0) &&
             (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            ::FName::FName(&AddTiles,L"AddTiles");
            _Init_thread_footer(&::_TSS0);
          }
          (((this->SyncTimeSlicedData).TimeSliceManager)->TimeSlicer).DebugSectionName = AddTiles;
          FNavRegenTimeSlicer::TestTimeSliceFinished
                    (&((this->SyncTimeSlicedData).TimeSliceManager)->TimeSlicer);
        }
        iVar23 = (this->SyncTimeSlicedData).AddGenTilesLayerIndex + 1;
        (this->SyncTimeSlicedData).AddGenTilesLayerIndex = iVar23;
      } while (iVar23 < (param_1->DirtyLayers).NumBits);
      bVar15 = true;
    }
    else {
LAB_146e3ea26:
      EVar16 = EVar14;
      bVar15 = true;
    }
  }
LAB_146e3ea36:
  pTVar2 = local_res18;
  if (((this->SyncTimeSlicedData).AddGenTilesLayerIndex == (param_1->DirtyLayers).NumBits) ||
     (!bVar15)) {
    (this->SyncTimeSlicedData).AddGenTilesLayerIndex = 0;
    pTVar21 = &(this->SyncTimeSlicedData).ResultTileRefsCached;
    (this->SyncTimeSlicedData).AddGeneratedTilesState = Init;
    if (local_res18 != pTVar21) {
      pFVar10 = (local_res18->AllocatorInstance).Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      (pTVar2->AllocatorInstance).Data = (pTVar21->AllocatorInstance).Data;
      (pTVar21->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar2->ArrayNum = (this->SyncTimeSlicedData).ResultTileRefsCached.ArrayNum;
      pTVar2->ArrayMax = (this->SyncTimeSlicedData).ResultTileRefsCached.ArrayMax;
      (this->SyncTimeSlicedData).ResultTileRefsCached.ArrayNum = 0;
      (this->SyncTimeSlicedData).ResultTileRefsCached.ArrayMax = 0;
    }
  }
  if ((local_60 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_60 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_60 & 4) != 0) {
    FThreadStats::AddMessage(local_68,CycleScopeEnd);
  }
  return EVar16;
code_r0x000146e3e88b:
  uVar22 = (int)uVar24 + 1;
  uVar24 = (ulonglong)uVar22;
  FVar20 = (ForElementType<unsigned_int>)((longlong)FVar20 + 4);
  if ((int)(uVar25 >> 5) <= (int)uVar22) goto LAB_146e3e8af;
  goto LAB_146e3e886;
}

// CalcNavMeshProperties @ 146e43410

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRecastNavMeshGenerator::CalcNavMeshProperties
          (FRecastNavMeshGenerator *this,int *param_1,int *param_2)

{
  ARecastNavMesh *pAVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined1 extraout_var [12];
  undefined1 auVar7 [16];
  FString local_28;
  
  pAVar1 = this->DestNavMesh;
  if (pAVar1 == (ARecastNavMesh *)0x0) {
    iVar5 = 0x14;
  }
  else {
    fVar6 = logf((float)pAVar1->TileNumberHardLimit);
    auVar7._0_4_ = fVar6 * __real_3fb8aa3b;
    auVar7._4_12_ = extraout_var;
    auVar7 = roundps(auVar7,ZEXT416((uint)auVar7._0_4_),2);
    iVar5 = (int)auVar7._0_4_;
  }
  iVar2 = 0x3b - iVar5;
  if (0x20 < 0x3b - iVar5) {
    iVar2 = 0x20;
  }
  iVar5 = 1 << ((byte)iVar5 & 0x1f);
  bVar3 = ARecastNavMesh::IsResizable(pAVar1);
  if (bVar3) {
    iVar4 = UE::NavMesh::Private::CalculateMaxTilesCount
                      (&this->InclusionBounds,
                       (double)(int)(this->Config)._padding_ * (double)(this->Config)._padding_,
                       this->AvgLayersPerTile,this->DestNavMesh->NavMeshVersion);
  }
  else {
    iVar4 = this->DestNavMesh->TilePoolSize;
  }
  if (((iVar4 < 0) || (iVar5 < iVar4)) && (iVar4 = iVar5, 1 < (byte)LogNavigation._0_1_)) {
    pAVar1 = this->DestNavMesh;
    if ((pAVar1 == (ARecastNavMesh *)0x0) || (pAVar1->_padding_ == 0)) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pAVar1,&local_28,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (iVar2 < 0x20) {
    *param_2 = 1 << ((byte)iVar2 & 0x1f);
  }
  else {
    *param_2 = 0x7fffffff;
  }
  *param_1 = iVar4;
  return;
}

// CalcPolyRefBits @ 146e435a0

void __cdecl
FRecastNavMeshGenerator::CalcPolyRefBits(ARecastNavMesh *param_1,int *param_2,int *param_3)

{
  int iVar1;
  float fVar2;
  undefined1 extraout_var [12];
  undefined1 auVar3 [16];
  
  if (param_1 == (ARecastNavMesh *)0x0) {
    iVar1 = 0x14;
  }
  else {
    fVar2 = logf((float)param_1->TileNumberHardLimit);
    auVar3._0_4_ = fVar2 * __real_3fb8aa3b;
    auVar3._4_12_ = extraout_var;
    auVar3 = roundps(auVar3,ZEXT416((uint)auVar3._0_4_),2);
    iVar1 = (int)auVar3._0_4_;
  }
  *param_2 = iVar1;
  iVar1 = 0x3b - iVar1;
  if (0x20 < iVar1) {
    iVar1 = 0x20;
  }
  *param_3 = iVar1;
  return;
}

// CancelBuild @ 146e44d80

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

void __thiscall FRecastNavMeshGenerator::CancelBuild(FRecastNavMeshGenerator *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  DestructItems<FPendingTileElement,int>
            (*(FPendingTileElement **)&this->PendingDirtyTiles,
             *(int *)&(this->PendingDirtyTiles).field_0x10);
  puVar1 = &(this->PendingDirtyTiles).field_0x14;
  *(undefined4 *)&(this->PendingDirtyTiles).field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)&this->PendingDirtyTiles,0,(int *)puVar1);
  }
  iVar3 = *(int *)&(this->RunningDirtyTiles).field_0x10;
  lVar5 = *(longlong *)&(this->RunningDirtyTiles).field_0x0;
  lVar2 = lVar5 + (longlong)iVar3 * 0x18;
  while( true ) {
    if (*(int *)&(this->RunningDirtyTiles).field_0x10 != iVar3) {
      `TCheckedPointerIterator<TRunningTileElement<FRecastTileGeneratorWrapper>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (lVar5 == lVar2) break;
    if (*(FAsyncTaskBase **)(lVar5 + 0x10) != (FAsyncTaskBase *)0x0) {
      FAsyncTaskBase::EnsureCompletion(*(FAsyncTaskBase **)(lVar5 + 0x10),true,false);
      plVar4 = *(longlong **)(lVar5 + 0x10);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,1);
      }
      *(undefined8 *)(lVar5 + 0x10) = 0;
    }
    lVar5 = lVar5 + 0x18;
  }
  ResetTimeSlicedTileGeneratorSync(this);
  puVar1 = &(this->RunningDirtyTiles).field_0x14;
  *(undefined4 *)&(this->RunningDirtyTiles).field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->RunningDirtyTiles,0,(int *)puVar1);
  }
  return;
}

// ConfigureBuildProperties @ 146e45570

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
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
FRecastNavMeshGenerator::ConfigureBuildProperties
          (FRecastNavMeshGenerator *this,FRecastBuildConfig *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  UEnum *this_00;
  UWorld *pUVar15;
  UClass *pUVar16;
  int iVar17;
  ARecastNavMesh *pAVar18;
  dtNavLinkBuilderJumpConfig *pdVar19;
  UNavigationSystemV1 *pUVar20;
  byte bVar21;
  ulonglong uVar22;
  uint uVar23;
  FNavLinkGenerationJumpConfig *this_01;
  float fVar24;
  float fVar25;
  double dVar26;
  undefined1 auVar27 [12];
  float fVar28;
  float fVar29;
  float fVar30;
  FName local_res10;
  FString local_e8;
  FText local_d8 [11];
  
  fVar2 = this->DestNavMesh->NavMeshResolutionParams[1].CellSize;
  if ((fVar2 == 0.0) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4457677437609710650>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                          ,0x143a,"CellSize != 0.f"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pAVar18 = this->DestNavMesh;
  fVar25 = pAVar18->AgentRadius;
  fVar24 = pAVar18->NavMeshResolutionParams[1].CellHeight;
  fVar3 = pAVar18->AgentHeight;
  fVar30 = pAVar18->AgentMaxSlope;
  fVar4 = pAVar18->NavMeshResolutionParams[1].AgentMaxStepHeight;
  FRecastBuildConfig::Reset(param_1);
  fVar9 = __real_bf000000;
  fVar8 = __real_3f800000;
  fVar28 = __real_3f800000 / fVar24;
  param_1->_padding_ = (longlong)(double)fVar24;
  dVar26 = (double)fVar30;
  param_1->_padding_ = (longlong)dVar26;
  param_1->_padding_ = (longlong)(double)fVar2;
  *(int *)&param_1->_padding_ = -((int)ROUND(fVar9 - (fVar28 + fVar28) * fVar3) >> 1);
  fVar28 = fVar25 / fVar2;
  *(int *)((longlong)&param_1->_padding_ + 4) = -((int)ROUND(fVar9 - (fVar4 + fVar4) / fVar24) >> 1)
  ;
  dVar26 = dVar26 * __real_3f91df46a2529d39;
  *(int *)&param_1->_padding_ = -((int)ROUND(fVar9 - (fVar28 + fVar28)) >> 1);
  dVar26 = tan(dVar26);
  fVar30 = fVar30 * __real_3c8efa35;
  iVar14 = 0;
  param_1->_padding_ = (longlong)(dVar26 * (double)fVar2);
  fVar24 = tanf(fVar30);
  pUVar20 = (UNavigationSystemV1 *)0x0;
  do {
    pAVar18 = this->DestNavMesh;
    uVar22 = (ulonglong)pUVar20 & 0xff;
    fVar30 = pAVar18->NavMeshResolutionParams[uVar22].CellHeight;
    fVar29 = fVar8 / fVar30;
    fVar28 = pAVar18->NavMeshResolutionParams[uVar22].CellSize;
    if ((-((int)ROUND(fVar9 - (fVar29 + fVar29) *
                              pAVar18->NavMeshResolutionParams[uVar22].AgentMaxStepHeight) >> 1) <
         -((int)ROUND(fVar9 - ((fVar28 + fVar28) * fVar24) / fVar30) >> 1)) &&
       (4 < (byte)LogNavigationDataBuild._0_1_)) {
      this_00 = StaticEnum<enum_ENavigationDataResolution>();
      if ((this_00 == (UEnum *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("EnumClass != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                              ,0xd13,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      UEnum::GetDisplayNameTextByValue(this_00,local_d8,uVar22);
      FText::ToString(local_d8);
      if (this->DestNavMesh == (ARecastNavMesh *)0x0) {
        ::FString::FString(&local_e8,L"None");
      }
      else {
        local_res10 = (FName)this->DestNavMesh->_padding_;
        ::FName::ToString(&local_res10,&local_e8);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavigationDataBuild);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_d8[0].TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8[0].TextData.Reference + 0x10))();
      }
    }
    uVar23 = (int)pUVar20 + 1;
    pUVar20 = (UNavigationSystemV1 *)(ulonglong)uVar23;
  } while ((int)uVar23 < 3);
  if (((this->DestNavMesh != (ARecastNavMesh *)0x0) && (this->DestNavMesh->bGenerateNavLinks != 0))
     && (UE::NavMesh::Private::bAllowLinkGeneration != false)) {
    if (((param_1->JumpConfigs).ArrayNum != 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("OutConfig.JumpConfigs.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                            ,0x1467,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pAVar18 = this->DestNavMesh;
    bVar21 = 0;
    if (0 < (pAVar18->NavLinkJumpConfigs).ArrayNum) {
      do {
        if (bVar21 == 0xff) break;
        if (((pAVar18->NavLinkJumpConfigs).ArrayNum <= (int)(uint)bVar21) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        piVar1 = &(param_1->JumpConfigs).ArrayMax;
        iVar11 = (param_1->JumpConfigs).ArrayNum;
        this_01 = (FNavLinkGenerationJumpConfig *)
                  ((pAVar18->NavLinkJumpConfigs).AllocatorInstance.Data + (ulonglong)bVar21 * 0x60);
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x840,&(param_1->JumpConfigs).AllocatorInstance,piVar1);
        }
        pFVar6 = (param_1->JumpConfigs).AllocatorInstance.Data;
        (param_1->JumpConfigs).ArrayNum = iVar11 + 1;
        pdVar19 = (dtNavLinkBuilderJumpConfig *)(pFVar6 + (longlong)iVar11 * 0x40);
        DefaultConstructItems<dtNavLinkBuilderJumpConfig,int>(pdVar19,1);
        FNavLinkGenerationJumpConfig::CopyToDetourConfig(this_01,pdVar19);
        pdVar19->ConfigIndex = bVar21;
        if (this_01->bEnabled == false) {
          auVar27 = ZEXT812(0);
        }
        else {
          auVar27._4_8_ = 0;
          auVar27._0_4_ = this_01->JumpLength - this_01->JumpDistanceFromEdge;
        }
        if (auVar27._0_4_ <= param_1->LinkSpillDistance) {
          auVar27._4_8_ = auVar27._4_8_;
          auVar27._0_4_ = param_1->LinkSpillDistance;
        }
        bVar21 = bVar21 + 1;
        param_1->LinkSpillDistance = auVar27._0_4_;
        pAVar18 = this->DestNavMesh;
      } while ((int)(uint)bVar21 < (pAVar18->NavLinkJumpConfigs).ArrayNum);
    }
  }
  param_1->AgentHeight = fVar3;
  param_1->AgentMaxClimb = fVar4;
  param_1->AgentRadius = fVar25;
  fVar25 = __real_44960000;
  iVar11 = iVar14;
  if (this->DestNavMesh->bGenerateNavLinks != 0) {
    dVar26 = (double)param_1->LinkSpillDistance / (double)param_1->_padding_;
    iVar11 = (int)param_1->_padding_ -
             (int)((longlong)ROUND(__real_bfe0000000000000 - (dVar26 + dVar26)) >> 1);
  }
  iVar12 = (int)param_1->_padding_ + 3;
  iVar17 = iVar12;
  if ((UE::NavMesh::Private::bUseAsymetricBorderSizes == false) &&
     (iVar17 = iVar11, iVar11 < iVar12)) {
    iVar17 = iVar12;
  }
  *(int *)((longlong)&param_1->_padding_ + 4) = iVar17;
  if (iVar11 < iVar12) {
    iVar11 = iVar12;
  }
  uVar5 = *(undefined4 *)&param_1->field_0xb8;
  *(int *)&param_1->_padding_ = iVar11;
  *(undefined4 *)&param_1->_padding_ = 0;
  *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 400;
  *(undefined4 *)&param_1->_padding_ = 6;
  *(int *)&param_1->_padding_ = (int)(fVar25 / fVar2);
  param_1->_padding_ = 0x4082c00000000000;
  param_1->_padding_ = 0x3ff0000000000000;
  fVar25 = this->DestNavMesh->MinRegionArea / fVar2;
  *(int *)&param_1->_padding_ = (int)(fVar25 * fVar25);
  fVar25 = this->DestNavMesh->MergeRegionSize / fVar2;
  *(int *)((longlong)&param_1->_padding_ + 4) = (int)(fVar25 * fVar25);
  param_1->_padding_ = (longlong)(double)this->DestNavMesh->MaxSimplificationError;
  param_1->_padding_ = (longlong)(double)this->DestNavMesh->SimplificationElevationRatio;
  uVar23 = (this->DestNavMesh->bPerformVoxelFiltering ^ ZPULL(uVar5,0,1)) & 1 ^ uVar5;
  *(uint *)&param_1->field_0xb8 = uVar23;
  uVar23 = (*(uint *)&this->DestNavMesh->field_0x5f8 >> 1 ^ uVar23) & 8 ^ uVar23;
  *(uint *)&param_1->field_0xb8 = uVar23;
  uVar23 = (*(uint *)&this->DestNavMesh->field_0x5f8 >> 1 ^ uVar23) & 0x10 ^ uVar23;
  *(uint *)&param_1->field_0xb8 = uVar23;
  uVar23 = (*(uint *)&this->DestNavMesh->field_0x5f8 >> 1 ^ uVar23) & 0x20 ^ uVar23;
  *(uint *)&param_1->field_0xb8 = uVar23;
  uVar23 = (*(uint *)&this->DestNavMesh->field_0x5f8 >> 1 ^ uVar23) & 0x40 ^ uVar23;
  *(uint *)&param_1->field_0xb8 = uVar23;
  if (this->DestNavMesh->bMarkLowHeightAreas != 0) {
    *(undefined4 *)&param_1->_padding_ = 1;
  }
  if (((this->DestNavMesh == (ARecastNavMesh *)0x0) || (this->DestNavMesh->bGenerateNavLinks == 0))
     || (uVar13 = 0x80, UE::NavMesh::Private::bAllowLinkGeneration == false)) {
    uVar13 = 0;
  }
  *(uint *)&param_1->field_0xb8 = uVar23 & 0xffffff7f | uVar13;
  pUVar15 = AActor::GetWorld((AActor *)this->DestNavMesh);
  if (pUVar15 == (UWorld *)0x0) goto LAB_146e45d27;
  pUVar20 = (UNavigationSystemV1 *)(pUVar15->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar20 == (UNavigationSystemV1 *)0x0) {
LAB_146e45d0d:
    pUVar20 = (UNavigationSystemV1 *)0x0;
  }
  else {
    pUVar16 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar11 = (int)pUVar16->_padding_;
    if ((*(int *)(*(longlong *)&pUVar20->field_0x10 + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar20->field_0x10 + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar16->_padding_)) goto LAB_146e45d0d;
  }
  if (pUVar20 != (UNavigationSystemV1 *)0x0) {
    iVar14 = UNavigationSystemV1::GetSupportedAgentIndex
                       (pUVar20,(ANavigationData *)this->DestNavMesh);
  }
LAB_146e45d27:
  param_1->AgentIndex = iVar14;
  iVar11 = (int)(this->DestNavMesh->TileSizeUU / fVar2);
  iVar14 = 1;
  if (1 < iVar11) {
    iVar14 = iVar11;
  }
  *(int *)&param_1->_padding_ = iVar14;
  if ((1 < (byte)LogNavigation._0_1_) && (iVar14 == 1)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
  }
  iVar14 = this->DestNavMesh->LayerChunkSplits;
  if (iVar14 < 1) {
    iVar14 = 1;
  }
  iVar14 = (int)param_1->_padding_ / iVar14;
  if (iVar14 < 1) {
    iVar14 = 1;
  }
  *(int *)&param_1->_padding_ = iVar14;
  iVar14 = this->DestNavMesh->RegionChunkSplits;
  if (iVar14 < 1) {
    iVar14 = 1;
  }
  iVar14 = (int)param_1->_padding_ / iVar14;
  if (iVar14 < 1) {
    iVar14 = 1;
  }
  param_1->TileCacheChunkSize = iVar14;
  param_1->LedgeSlopeFilterMode = this->DestNavMesh->LedgeSlopeFilterMode;
  *(uint *)((longlong)&param_1->_padding_ + 4) = (uint)(this->DestNavMesh->LayerPartitioning).Value;
  param_1->TileCachePartitionType = (uint)(this->DestNavMesh->RegionPartitioning).Value;
  return;
}

// ConstructTiledNavMesh @ 146e45e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FRecastNavMeshGenerator::ConstructTiledNavMesh(FRecastNavMeshGenerator *this)

{
  ARecastNavMesh *pAVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  dtNavMesh *this_00;
  FStaticBasicLogRecord *pFVar5;
  undefined1 auStack_b8 [64];
  dtNavMeshParams local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  (**(code **)(this->_padding_ + 0x18))();
  this_00 = dtAllocNavMesh();
  if (this_00 == (dtNavMesh *)0x0) {
    if ((byte)LogNavigation._0_1_ < 3) {
      return false;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    return false;
  }
  this->Version = this->Version + 1;
  local_78.orig[0] = (this->RcNavMeshOrigin).field0_0x0._s_0.X;
  local_78.orig[1] = (this->RcNavMeshOrigin).field0_0x0._s_0.Y;
  local_78.maxTiles = 0;
  local_78.maxPolys = 0;
  local_78.walkableHeight = 0.0;
  local_78.walkableRadius = 0.0;
  local_78.walkableClimb = 0.0;
  local_78.resolutionParams[0].bvQuantFactor = 0.0;
  local_78.resolutionParams[1].bvQuantFactor = 0.0;
  local_78.resolutionParams[2].bvQuantFactor = 0.0;
  local_78.orig[2] = (this->RcNavMeshOrigin).field0_0x0._s_0.Z;
  local_78.tileWidth = (double)(int)(this->Config)._padding_ * (double)(this->Config)._padding_;
  local_78.tileHeight = local_78.tileWidth;
  CalcNavMeshProperties(this,&local_78.maxTiles,&local_78.maxPolys);
  fVar2 = __real_3f800000;
  local_78.walkableClimb = (double)(this->Config).AgentMaxClimb;
  (this->Config).MaxPolysPerTile = local_78.maxPolys;
  pAVar1 = this->DestNavMesh;
  local_78.walkableHeight = (double)(this->Config).AgentHeight;
  local_78.walkableRadius = (double)(this->Config).AgentRadius;
  local_78.resolutionParams[0].bvQuantFactor =
       (double)(fVar2 / pAVar1->NavMeshResolutionParams[0].CellSize);
  local_78.resolutionParams[1].bvQuantFactor =
       (double)(fVar2 / pAVar1->NavMeshResolutionParams[1].CellSize);
  local_78.resolutionParams[2].bvQuantFactor =
       (double)(fVar2 / pAVar1->NavMeshResolutionParams[2].CellSize);
  if (local_78.maxTiles == 0) {
    if ((byte)LogNavigation._0_1_ < 3) goto LAB_146e45fe4;
    pFVar5 = &::LOG_Static;
  }
  else {
    uVar3 = dtNavMesh::init(this_00,&local_78);
    if (-1 < (int)uVar3) {
      iVar4 = GetTilesCountHelper(this_00);
      this->NumActiveTiles = iVar4;
      FPImplRecastNavMesh::SetRecastMesh(this->DestNavMesh->RecastNavMeshImpl,this_00);
      UE::NavMesh::Private::CheckTileIndicesInValidRange(&this->InclusionBounds,this->DestNavMesh);
      return true;
    }
    if ((byte)LogNavigation._0_1_ < 3) goto LAB_146e45fe4;
    pFVar5 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar5,(FLogCategoryBase *)&LogNavigation);
LAB_146e45fe4:
  dtFreeNavMesh(this_00);
  return false;
}

// CreateTileGenerator @ 146e469c0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FRecastTileGenerator,1> * __thiscall
FRecastNavMeshGenerator::CreateTileGenerator
          (FRecastNavMeshGenerator *this,TSharedRef<FRecastTileGenerator,1> *__return_storage_ptr__,
          TIntPoint<int> *param_1,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_2,double param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_Navigation_CreateTileGenerator> FVar6;
  FRecastTileGenerator *this_00;
  LARGE_INTEGER LVar7;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  LARGE_INTEGER LVar8;
  undefined4 uVar9;
  LARGE_INTEGER local_res10 [2];
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *local_res20;
  FStatMessage local_58;
  LARGE_INTEGER local_48;
  
  LVar7.QuadPart = 0;
  uVar9 = 0;
  FVar6 = StatPtr_STAT_Navigation_CreateTileGenerator;
  local_res20 = param_2;
  if (StatPtr_STAT_Navigation_CreateTileGenerator ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_CreateTileGenerator>)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_58,"STAT_Navigation_CreateTileGenerator");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_Navigation_CreateTileGenerator>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_CreateTileGenerator,
                       *pFVar5,L"Recast: create tile generator","STATGROUP_Navigation",
                       "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar8 = *(LARGE_INTEGER *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_48.s.LowPart = 0;
  local_48.s.HighPart = 0;
  if ((LVar8.s.LowPart != 0) || (LVar8.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].QuadPart = local_res10[0].QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0].s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10[0] = LVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10[0].s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x1af1);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10[0] = LVar8;
      local_48 = LVar8;
      FThreadStats::AddMessage((FName)LVar8.s,CycleScopeStart);
      bVar3 = true;
      uVar9 = local_48._0_4_;
      goto LAB_146e46b2c;
    }
  }
  bVar3 = false;
  LVar8 = local_48;
LAB_146e46b2c:
  this_00 = ::operator_new(0x5f8);
  if (this_00 != (FRecastTileGenerator *)0x0) {
    LVar7 = (LARGE_INTEGER)FRecastTileGenerator::FRecastTileGenerator(this_00,this,param_1,param_3);
  }
  local_res10[0] = LVar7;
  TSharedRef<FRecastTileGenerator,1>::TSharedRef<FRecastTileGenerator,1><FRecastTileGenerator>
            (__return_storage_ptr__,(TRawPtrProxy<FRecastTileGenerator> *)&local_res10[0].s);
  FRecastTileGenerator::Setup(__return_storage_ptr__->Object,this,local_res20);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && ((FName)LVar8.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_58.NameAndInfo.Number = LVar8.s.HighPart & 0xffff6fffU | 0x6000;
      local_58.NameAndInfo.Index.Value = uVar9;
      QueryPerformanceCounter(local_res10);
      local_58.StatData.Pad = (uchar  [8])(local_res10[0].QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_58);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return __return_storage_ptr__;
}

// DiscardCurrentBuildingTasks @ 146e477f0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

void __thiscall FRecastNavMeshGenerator::DiscardCurrentBuildingTasks(FRecastNavMeshGenerator *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  DestructItems<FPendingTileElement,int>
            (*(FPendingTileElement **)&this->PendingDirtyTiles,
             *(int *)&(this->PendingDirtyTiles).field_0x10);
  puVar1 = &(this->PendingDirtyTiles).field_0x14;
  *(undefined4 *)&(this->PendingDirtyTiles).field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)&this->PendingDirtyTiles,0,(int *)puVar1);
  }
  iVar3 = *(int *)&(this->RunningDirtyTiles).field_0x10;
  lVar5 = *(longlong *)&(this->RunningDirtyTiles).field_0x0;
  lVar2 = lVar5 + (longlong)iVar3 * 0x18;
  while( true ) {
    if (*(int *)&(this->RunningDirtyTiles).field_0x10 != iVar3) {
      `TCheckedPointerIterator<TRunningTileElement<FRecastTileGeneratorWrapper>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (lVar5 == lVar2) break;
    if (*(FAsyncTaskBase **)(lVar5 + 0x10) != (FAsyncTaskBase *)0x0) {
      FAsyncTaskBase::EnsureCompletion(*(FAsyncTaskBase **)(lVar5 + 0x10),true,false);
      plVar4 = *(longlong **)(lVar5 + 0x10);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,1);
      }
      *(undefined8 *)(lVar5 + 0x10) = 0;
    }
    lVar5 = lVar5 + 0x18;
  }
  ResetTimeSlicedTileGeneratorSync(this);
  puVar1 = &(this->RunningDirtyTiles).field_0x14;
  *(undefined4 *)&(this->RunningDirtyTiles).field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->RunningDirtyTiles,0,(int *)puVar1);
  }
  return;
}

// EnsureBuildCompletion @ 146e48220

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

void __thiscall FRecastNavMeshGenerator::EnsureBuildCompletion(FRecastNavMeshGenerator *this)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_28;
  
  iVar3 = (**(code **)(this->_padding_ + 0x48))();
  if ((this->DestNavMesh == (ARecastNavMesh *)0x0) ||
     (this->DestNavMesh->bDoFullyAsyncNavDataGathering == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  do {
    iVar4 = 1;
    if (!bVar2) {
      iVar4 = this->MaxTileGeneratorTasks;
    }
    ProcessTileTasksAndGetUpdatedTiles
              (this,&local_28,iVar4 - *(int *)&(this->RunningDirtyTiles).field_0x10);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    iVar4 = *(int *)&(this->RunningDirtyTiles).field_0x10;
    lVar5 = *(longlong *)&this->RunningDirtyTiles;
    lVar1 = lVar5 + (longlong)iVar4 * 0x18;
    while( true ) {
      if (*(int *)&(this->RunningDirtyTiles).field_0x10 != iVar4) {
        `TCheckedPointerIterator<TRunningTileElement<FRecastTileGeneratorWrapper>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (lVar5 == lVar1) break;
      FAsyncTaskBase::EnsureCompletion(*(FAsyncTaskBase **)(lVar5 + 0x10),true,false);
      lVar5 = lVar5 + 0x18;
    }
    iVar4 = (**(code **)(this->_padding_ + 0x48))(this);
  } while (0 < iVar4);
  if (0 < iVar3) {
    ARecastNavMesh::RequestDrawingUpdate(this->DestNavMesh,false);
  }
  return;
}

// ExportAggregatedGeometry @ 146e487c0

void __cdecl
FRecastNavMeshGenerator::ExportAggregatedGeometry
          (FKAggregateGeom *param_1,TNavStatArray<UE::Math::TVector<double>_> *param_2,
          TNavStatArray<int> *param_3,TNavStatArray<int> *param_4,TBox<double> *param_5,
          TTransform<double> *param_6)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  TNavStatArray<double> TStack_78;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  iVar11 = *(int *)&param_2->field_0x10;
  TStack_78._16_8_ = 0;
  TStack_78._0_8_ = 0;
  TStack_78._8_8_ = 0;
  RecastGeometryExport::ExportRigidBodyBoxElements
            (param_1,&TStack_78,param_3,param_4,param_5,param_6,iVar11);
  RecastGeometryExport::ExportRigidBodySphylElements
            (param_1,&TStack_78,param_3,param_4,param_5,param_6,iVar11);
  RecastGeometryExport::ExportRigidBodySphereElements
            (param_1,&TStack_78,param_3,param_4,param_5,param_6,iVar11);
  uVar9 = (int)(((longlong)(int)TStack_78._16_4_ / 3 + ((longlong)(int)TStack_78._16_4_ >> 0x3f) &
                0xffffffffU) >> 0x1f) + (int)TStack_78._16_4_ / 3 + ((int)TStack_78._16_4_ >> 0x1f)
          + *(int *)&param_2->field_0x10;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  puVar2 = &param_2->field_0x14;
  lVar12 = 8;
  if (*(int *)puVar2 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (0x18,8,uVar9,(ForAnyElementType *)param_2,*(int *)&param_2->field_0x10,(int *)puVar2)
    ;
  }
  if (0 < (int)TStack_78._16_4_) {
    iVar11 = TStack_78._16_4_;
    uVar9 = 1;
    do {
      uVar10 = 0;
      if ((int)(uVar9 + 1) < iVar11) {
        uVar10 = ~(uVar9 + 1) >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = TStack_78._16_4_;
      }
      uVar4 = *(undefined8 *)(lVar12 + 8 + TStack_78._0_8_);
      uVar10 = 0;
      if ((int)uVar9 < iVar11) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = TStack_78._16_4_;
      }
      uVar5 = *(undefined8 *)(lVar12 + TStack_78._0_8_);
      uVar10 = 0;
      if ((int)(uVar9 - 1) < iVar11) {
        uVar10 = ~(uVar9 - 1) >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uStack_60 = *(undefined8 *)(lVar12 + -8 + TStack_78._0_8_);
      uStack_58 = uVar5;
      uStack_50 = uVar4;
      if (((*(undefined8 **)param_2 <= &uStack_60) &&
          (&uStack_60 < *(undefined8 **)param_2 + (longlong)*(int *)puVar2 * 3)) &&
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
      iVar11 = *(int *)&param_2->field_0x10;
      if (iVar11 == *(int *)puVar2) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                           (0x818,(ForAnyElementType *)param_2,(int *)puVar2);
      }
      lVar12 = lVar12 + 0x18;
      *(int *)&param_2->field_0x10 = iVar11 + 1;
      lVar6 = *(longlong *)param_2;
      puVar3 = (undefined8 *)(lVar6 + (longlong)iVar11 * 0x18);
      *puVar3 = uStack_60;
      puVar3[1] = uStack_58;
      *(undefined8 *)(lVar6 + 0x10 + (longlong)iVar11 * 0x18) = uStack_50;
      iVar1 = uVar9 + 2;
      iVar11 = TStack_78._16_4_;
      uVar9 = uVar9 + 3;
    } while (iVar1 < (int)TStack_78._16_4_);
  }
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&TStack_78);
  return;
}

// ExportNavRelevantObjectGeometry @ 146e4c6c0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __cdecl
FRecastNavMeshGenerator::ExportNavRelevantObjectGeometry
          (INavRelevantInterface *param_1,FNavigationRelevantData *param_2)

{
  TSharedRef<FNavigationElement_const_,1> local_18;
  
  FNavigationElement::CreateFromNavRelevantInterface(&local_18,param_1);
  FRecastGeometryExport::ExportElementGeometry(local_18.Object,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// ExportNavigationData @ 146e4c700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

void __thiscall
FRecastNavMeshGenerator::ExportNavigationData(FRecastNavMeshGenerator *this,FString *param_1)

{
  int iVar1;
  FObjectPtr_u_0 *this_00;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  double dVar6;
  undefined4 uVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  UWorld *pUVar13;
  UClass *pUVar14;
  FDateTime this_01;
  FObjectPtr_u_0 FVar15;
  ULevel *pUVar16;
  TVector<double> *pTVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  FObjectPtr_u_0 FVar22;
  FObjectPtr_u_0 FVar23;
  FObjectPtr_u_0 FVar24;
  FObjectPtr_u_0 FVar25;
  FScriptContainerElement *pFVar26;
  FObjectPtr_u_0 FVar27;
  longlong lVar28;
  undefined8 *puVar29;
  ulonglong uVar30;
  FObjectPtr_u_0 FVar31;
  uint uVar32;
  FObjectPtr_u_0 FVar33;
  undefined1 auStackY_528 [32];
  FString local_4d8;
  ForAnyElementType local_4c8;
  undefined8 local_4b8;
  TNavStatArray<double> local_4b0;
  ForAnyElementType local_498;
  undefined8 local_488;
  int local_480;
  int local_47c;
  int local_478;
  int local_474;
  uint local_470;
  TNavStatArray<int> local_468;
  TArray<_public:_virtual_void___cdecl_FRecastNavMeshGenerator::ExportNavigationData(FString_const_&)const_::_28_::FAreaExportData,TSizedDefaultAllocator<32>_>
  local_450;
  longlong local_440;
  FString local_438;
  FObjectPtr_u_0 local_428;
  FObjectPtr_u_0 local_420;
  longlong local_418;
  LARGE_INTEGER local_410;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  LARGE_INTEGER local_208;
  FRecastNavMeshGenerator *local_200;
  FString *local_1f8;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  TVector<double> local_1c0;
  <lambda_1> local_1a8;
  TVector4<double>_u_0 local_178;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  TVector<double> local_130;
  TVector<double> local_118;
  TVector<double> local_100;
  TBox<double> local_e8;
  ulonglong local_b0;
  
  local_b0 = __security_cookie.value ^ (ulonglong)auStackY_528;
  local_200 = this;
  local_1f8 = param_1;
  pUVar13 = AActor::GetWorld((AActor *)this->DestNavMesh);
  FVar33.Handle = (UObject *)0x0;
  if (pUVar13 == (UWorld *)0x0) goto LAB_146e4e19d;
  FVar22 = (FObjectPtr_u_0)(pUVar13->NavigationSystem).field0_0x0.DebugPtr;
  if (FVar22.Handle == (UObject *)0x0) {
LAB_146e4c784:
    local_420.Handle = (UObject *)0x0;
    FVar22.Handle = FVar33.Handle;
  }
  else {
    local_420 = FVar22;
    pUVar14 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar11 = (int)pUVar14->_padding_;
    if ((*(int *)(*(longlong *)&(FVar22.Handle)->field_0x10 + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&(FVar22.Handle)->field_0x10 + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar14->_padding_)) goto LAB_146e4c784;
  }
  if ((FVar22.Handle != (UObject *)0x0) &&
     (lVar18 = *(longlong *)&FVar22.Handle[0x16].field_0x18, local_418 = lVar18, lVar18 != 0)) {
    QueryPerformanceCounter(&local_208);
    this_01 = FDateTime::Now();
    FDateTime::ToString((FDateTime *)this_01.Ticks,&local_218);
    dVar6 = __real_3fe0000000000000;
    uVar32 = 0;
    local_470 = 0;
    if (0 < *(int *)&FVar22.Handle[5].field_0x20) {
      local_440 = 0;
      FVar15.Handle = FVar33.Handle;
      do {
        lVar28 = local_440;
        local_4b0._16_8_ = 0;
        local_468._16_8_ = 0;
        local_4b0._0_8_ = (undefined8 *)0x0;
        local_4b0._8_8_ = 0;
        uVar10 = uVar32;
        if ((int)FVar15._0_4_ < *(int *)&FVar22.Handle[5].field_0x20) {
          uVar10 = ~FVar15._0_4_ >> 0x1f;
        }
        local_468._0_8_ = (int *)0x0;
        local_468._8_8_ = 0;
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_00 = (FObjectPtr_u_0 *)(*(longlong *)&FVar22.Handle[5].field_0x18 + lVar28 * 8);
        FVar15.Handle = FVar33.Handle;
        if (*(longlong *)(*(longlong *)&FVar22.Handle[5].field_0x18 + lVar28 * 8) != 0) {
          pUVar14 = Z_Construct_UClass_ARecastNavMesh_NoRegister();
          bVar9 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar14);
          if (bVar9) {
            FVar15.Handle = this_00->Handle;
          }
        }
        local_428 = FVar15;
        if (FVar15.Handle != (UObject *)0x0) {
          dVar2 = (this->TotalNavBounds).Min.field0_0x0._s_0.X;
          local_1a8.IndexBuffer = &local_468;
          dVar3 = (this->TotalNavBounds).Min.field0_0x0._s_0.Y;
          dVar4 = (this->TotalNavBounds).Min.field0_0x0._s_0.Z;
          local_1a8.CoordBuffer = &local_4b0;
          local_158 = ((this->TotalNavBounds).Max.field0_0x0._s_0.X - dVar2) * dVar6;
          local_150 = ((this->TotalNavBounds).Max.field0_0x0._s_0.Y - dVar3) * dVar6;
          local_1a8.bUseVirtualGeometryFilteringAndDirtying =
               (bool)((byte)(*(uint *)&FVar15.Handle[0x26].field_0x8 >> 0xc) & 1);
          local_1a8.AreaExport = &local_450;
          local_148 = ((this->TotalNavBounds).Max.field0_0x0._s_0.Z - dVar4) * dVar6;
          local_178._s_0.X = local_158 + dVar2;
          local_178._s_0.W = 0.0;
          local_178._s_0.Y = local_150 + dVar3;
          local_140 = 0;
          local_178._s_0.Z = local_148 + dVar4;
          local_450.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_450.ArrayNum = 0;
          local_450.ArrayMax = 0;
          local_1a8.__this = this;
          local_1a8.NavData = (ARecastNavMesh *)FVar15;
          TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::
          FindElementsWithBoundsTestInternal<_FRecastNavMeshGenerator::ExportNavigationData_::__l28::<lambda_1>_>
                    ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)
                     (lVar18 + 0x10),0,(FOctreeNodeContext *)(lVar18 + 0x10),
                     (FBoxCenterAndExtent *)&local_178._s_0,&local_1a8);
          pUVar13 = AActor::GetWorld((AActor *)this->DestNavMesh);
          iVar11 = UWorld::GetNumLevels(pUVar13);
          uVar10 = 0;
          FVar22.Handle = FVar33.Handle;
          if (0 < iVar11) {
            do {
              pUVar16 = UWorld::GetLevel(pUVar13,FVar22._0_4_);
              if (((pUVar16 != (ULevel *)0x0) &&
                  (&pUVar16->StaticNavigableGeometry !=
                   (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0)) &&
                 (iVar11 = (pUVar16->StaticNavigableGeometry).ArrayNum, 0 < iVar11)) {
                local_4b8 = 0;
                local_488 = 0;
                local_4c8._padding_ = 0;
                local_4c8.AllocatedSize = 0;
                local_498._padding_ = 0;
                local_498.AllocatedSize = 0;
                FVar15.Handle = FVar33.Handle;
                FVar27.Handle = FVar33.Handle;
                if (iVar11 != (iVar11 / 3 + (iVar11 >> 0x1f) +
                              (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU
                                    ) >> 0x1f)) * 3) {
                  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("VertexSoup.Num() % 3 == 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                                     ,0x419,L"");
                  if (bVar9) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  FVar27.Handle = (UObject *)(local_488 & 0xffffffff);
                  FVar15.Handle = (UObject *)(local_4b8 & 0xffffffff);
                }
                pFVar26 = (pUVar16->StaticNavigableGeometry).AllocatorInstance.Data;
                iVar11 = (pUVar16->StaticNavigableGeometry).ArrayNum;
                uVar19 = iVar11 / 3 + (iVar11 >> 0x1f) +
                         (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >>
                              0x1f);
                if (0 < (int)uVar19) {
                  iVar11 = FVar15._0_4_ + 1;
                  uVar30 = (ulonglong)uVar19;
                  do {
                    pTVar17 = Unreal2RecastPoint(&local_130,(TVector<double> *)pFVar26);
                    if ((((ulonglong)local_4c8._padding_ <= pTVar17) &&
                        (pTVar17 < (TVector<double> *)
                                   (local_4c8._padding_ + (longlong)local_4b8._4_4_ * 0x18))) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar9)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    iVar12 = (int)local_4b8;
                    if ((int)local_4b8 == local_4b8._4_4_) {
                      iVar12 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                                         (0x818,&local_4c8,(int *)((longlong)&local_4b8 + 4));
                    }
                    dVar2 = (pTVar17->field0_0x0)._s_0.Y;
                    (((TVector<double> *)(local_4c8._padding_ + (longlong)iVar12 * 0x18))->
                    field0_0x0)._s_0.X = (pTVar17->field0_0x0)._s_0.X;
                    (((TVector<double> *)(local_4c8._padding_ + (longlong)iVar12 * 0x18))->
                    field0_0x0)._s_0.Y = dVar2;
                    (((TVector<double> *)(local_4c8._padding_ + (longlong)iVar12 * 0x18))->
                    field0_0x0)._s_0.Z = (pTVar17->field0_0x0)._s_0.Z;
                    local_4b8._0_4_ = iVar12 + 1;
                    pTVar17 = Unreal2RecastPoint(&local_118,(TVector<double> *)(pFVar26 + 0x18));
                    if ((((ulonglong)local_4c8._padding_ <= pTVar17) &&
                        (pTVar17 < (TVector<double> *)
                                   (local_4c8._padding_ + (longlong)local_4b8._4_4_ * 0x18))) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar9)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    if ((int)local_4b8 == local_4b8._4_4_) {
                      local_4b8._0_4_ =
                           UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                                     (0x818,&local_4c8,(int *)((longlong)&local_4b8 + 4));
                    }
                    dVar2 = (pTVar17->field0_0x0)._s_0.Y;
                    (((TVector<double> *)(local_4c8._padding_ + (longlong)(int)local_4b8 * 0x18))->
                    field0_0x0)._s_0.X = (pTVar17->field0_0x0)._s_0.X;
                    (((TVector<double> *)(local_4c8._padding_ + (longlong)(int)local_4b8 * 0x18))->
                    field0_0x0)._s_0.Y = dVar2;
                    (((TVector<double> *)(local_4c8._padding_ + (longlong)(int)local_4b8 * 0x18))->
                    field0_0x0)._s_0.Z = (pTVar17->field0_0x0)._s_0.Z;
                    local_4b8._0_4_ = (int)local_4b8 + 1;
                    pTVar17 = Unreal2RecastPoint(&local_100,(TVector<double> *)(pFVar26 + 0x30));
                    if ((((ulonglong)local_4c8._padding_ <= pTVar17) &&
                        (pTVar17 < (TVector<double> *)
                                   (local_4c8._padding_ + (longlong)local_4b8._4_4_ * 0x18))) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar9)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    iVar12 = (int)local_4b8;
                    if ((int)local_4b8 == local_4b8._4_4_) {
                      iVar12 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                                         (0x818,&local_4c8,(int *)((longlong)&local_4b8 + 4));
                    }
                    local_4b8 = CONCAT44(local_4b8._4_4_,iVar12 + 1);
                    dVar2 = (pTVar17->field0_0x0)._s_0.Y;
                    (((TVector<double> *)(local_4c8._padding_ + (longlong)iVar12 * 0x18))->
                    field0_0x0)._s_0.X = (pTVar17->field0_0x0)._s_0.X;
                    (((TVector<double> *)(local_4c8._padding_ + (longlong)iVar12 * 0x18))->
                    field0_0x0)._s_0.Y = dVar2;
                    local_474 = iVar11 + 1;
                    (((TVector<double> *)(local_4c8._padding_ + (longlong)iVar12 * 0x18))->
                    field0_0x0)._s_0.Z = (pTVar17->field0_0x0)._s_0.Z;
                    if ((((ulonglong)local_498._padding_ <= &local_474) &&
                        (&local_474 < (int *)(local_498._padding_ + (longlong)local_488._4_4_ * 4)))
                       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar9)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    iVar12 = (int)local_488;
                    if ((int)local_488 == local_488._4_4_) {
                      iVar12 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                                         (0x404,&local_498,(int *)((longlong)&local_488 + 4));
                    }
                    iVar1 = iVar12 + 1;
                    *(int *)(local_498._padding_ + (longlong)iVar12 * 4) = local_474;
                    local_480 = iVar11;
                    local_488._0_4_ = iVar1;
                    if ((((ulonglong)local_498._padding_ <= &local_480) &&
                        (&local_480 < (int *)(local_498._padding_ + (longlong)local_488._4_4_ * 4)))
                       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar9)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    if ((int)local_488 == local_488._4_4_) {
                      local_488._0_4_ =
                           UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                                     (0x404,&local_498,(int *)((longlong)&local_488 + 4));
                    }
                    iVar12 = (int)local_488 + 1;
                    *(int *)(local_498._padding_ + (longlong)(int)local_488 * 4) = local_480;
                    local_47c = iVar11 + -1;
                    local_488._0_4_ = iVar12;
                    if ((((ulonglong)local_498._padding_ <= &local_47c) &&
                        (&local_47c < (int *)(local_498._padding_ + (longlong)local_488._4_4_ * 4)))
                       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar9)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    iVar12 = (int)local_488;
                    if ((int)local_488 == local_488._4_4_) {
                      iVar12 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                                         (0x404,&local_498,(int *)((longlong)&local_488 + 4));
                    }
                    iVar11 = iVar11 + 3;
                    local_488 = CONCAT44(local_488._4_4_,iVar12 + 1U);
                    pFVar26 = pFVar26 + 0x48;
                    *(int *)(local_498._padding_ + (longlong)iVar12 * 4) = local_47c;
                    uVar30 = uVar30 - 1;
                  } while (uVar30 != 0);
                  FVar15.Handle = (UObject *)(local_4b8 & 0xffffffff);
                  FVar27._4_4_ = 0;
                  FVar27._0_4_ = iVar12 + 1U;
                }
                uVar19 = FVar27._0_4_ + local_468._16_4_;
                if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
                }
                if ((int)local_468._20_4_ < (int)uVar19) {
                  UE::Core::Private::
                  ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                            (4,4,uVar19,(ForAnyElementType *)&local_468,local_468._16_4_,
                             (int *)((longlong)&local_468 + 0x14));
                  FVar15.Handle = (UObject *)(local_4b8 & 0xffffffff);
                  FVar27.Handle = (UObject *)(local_488 & 0xffffffff);
                }
                uVar19 = local_4b0._16_4_ + FVar15._0_4_ * 3;
                if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
                }
                if ((int)local_4b0._20_4_ < (int)uVar19) {
                  UE::Core::Private::
                  ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                            (8,8,uVar19,(ForAnyElementType *)&local_4b0,local_4b0._16_4_,
                             (int *)((longlong)&local_4b0 + 0x14));
                  FVar15.Handle = (UObject *)(local_4b8 & 0xffffffff);
                  FVar27.Handle = (UObject *)(local_488 & 0xffffffff);
                }
                FVar23.Handle = FVar33.Handle;
                FVar24.Handle = FVar33.Handle;
                if (0 < FVar27._0_4_) {
                  do {
                    uVar7 = local_4b0._16_4_;
                    uVar20 = FVar23._0_4_;
                    uVar19 = uVar10;
                    if ((int)uVar20 < FVar27._0_4_) {
                      uVar19 = ~uVar20 >> 0x1f;
                    }
                    if ((uVar19 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    local_478 = (int)uVar7 / 3 + ((int)uVar7 >> 0x1f) +
                                (int)(((longlong)(int)uVar7 / 3 + ((longlong)(int)uVar7 >> 0x3f) &
                                      0xffffffffU) >> 0x1f) +
                                *(int *)(&(FVar24.Handle)->field_0x0 + local_498._padding_);
                    if ((((ulonglong)local_468._0_8_ <= &local_478) &&
                        (&local_478 < (int *)(local_468._0_8_ + (longlong)(int)local_468._20_4_ * 4)
                        )) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar9)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    if (local_468._16_4_ == local_468._20_4_) {
                      iVar11 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                                         (0x404,(ForAnyElementType *)&local_468,
                                          (int *)((longlong)&local_468 + 0x14));
                      local_468._16_4_ = iVar11;
                    }
                    lVar18 = (longlong)(int)local_468._16_4_;
                    FVar23._0_4_ = uVar20 + 1;
                    FVar23._4_4_ = 0;
                    local_468._16_4_ = local_468._16_4_ + 1;
                    *(int *)(local_468._0_8_ + lVar18 * 4) = local_478;
                    FVar27.Handle = (UObject *)(local_488 & 0xffffffff);
                    FVar24 = (FObjectPtr_u_0)&(FVar24.Handle)->field_0x4;
                  } while ((int)FVar23._0_4_ < (int)local_488);
                  FVar15.Handle = (UObject *)(local_4b8 & 0xffffffff);
                }
                FVar24.Handle = FVar33.Handle;
                FVar27.Handle = FVar33.Handle;
                if (0 < FVar15._0_4_) {
                  do {
                    uVar20 = FVar24._0_4_;
                    uVar19 = uVar10;
                    if ((int)uVar20 < FVar15._0_4_) {
                      uVar19 = ~uVar20 >> 0x1f;
                    }
                    if ((uVar19 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    puVar29 = (undefined8 *)
                              ((longlong)(TVector<double>_u_0 *)local_4c8._padding_ +
                              (longlong)FVar27.Handle);
                    if ((((ulonglong)local_4b0._0_8_ <= puVar29) &&
                        (puVar29 < (undefined8 *)
                                   (local_4b0._0_8_ + (longlong)(int)local_4b0._20_4_ * 8))) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar9)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    if (local_4b0._16_4_ == local_4b0._20_4_) {
                      iVar11 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                                         (0x808,(ForAnyElementType *)&local_4b0,
                                          (int *)((longlong)&local_4b0 + 0x14));
                      local_4b0._16_4_ = iVar11;
                    }
                    iVar11 = local_4b0._16_4_ + 1;
                    *(undefined8 *)(local_4b0._0_8_ + (longlong)(int)local_4b0._16_4_ * 8) =
                         *puVar29;
                    uVar19 = uVar10;
                    if ((int)uVar20 < (int)local_4b8) {
                      uVar19 = ~uVar20 >> 0x1f;
                    }
                    local_4b0._16_4_ = iVar11;
                    if ((uVar19 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    puVar29 = (undefined8 *)
                              ((undefined1 *)
                               ((longlong)(TVector<double>_u_0 *)local_4c8._padding_ + 8) +
                              (longlong)FVar27.Handle);
                    if ((((ulonglong)local_4b0._0_8_ <= puVar29) &&
                        (puVar29 < (undefined8 *)
                                   (local_4b0._0_8_ + (longlong)(int)local_4b0._20_4_ * 8))) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar9)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    if (local_4b0._16_4_ == local_4b0._20_4_) {
                      local_4b0._16_4_ =
                           UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                                     (0x808,(ForAnyElementType *)&local_4b0,
                                      (int *)((longlong)&local_4b0 + 0x14));
                    }
                    iVar11 = local_4b0._16_4_ + 1;
                    *(undefined8 *)(local_4b0._0_8_ + (longlong)(int)local_4b0._16_4_ * 8) =
                         *puVar29;
                    uVar19 = uVar10;
                    if ((int)uVar20 < (int)local_4b8) {
                      uVar19 = ~uVar20 >> 0x1f;
                    }
                    local_4b0._16_4_ = iVar11;
                    if ((uVar19 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    puVar29 = (undefined8 *)
                              ((undefined1 *)
                               ((longlong)(TVector<double>_u_0 *)local_4c8._padding_ + 0x10) +
                              (longlong)FVar27.Handle);
                    if ((((ulonglong)local_4b0._0_8_ <= puVar29) &&
                        (puVar29 < (undefined8 *)
                                   (local_4b0._0_8_ + (longlong)(int)local_4b0._20_4_ * 8))) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar9)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    iVar11 = local_4b0._16_4_;
                    if (local_4b0._16_4_ == local_4b0._20_4_) {
                      iVar11 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                                         (0x808,(ForAnyElementType *)&local_4b0,
                                          (int *)((longlong)&local_4b0 + 0x14));
                    }
                    FVar24._0_4_ = uVar20 + 1;
                    FVar24._4_4_ = 0;
                    local_4b0._16_4_ = iVar11 + 1;
                    *(undefined8 *)(local_4b0._0_8_ + (longlong)iVar11 * 8) = *puVar29;
                    FVar15.Handle = (UObject *)(local_4b8 & 0xffffffff);
                    FVar27 = (FObjectPtr_u_0)&(FVar27.Handle)->field_0x18;
                  } while ((int)FVar24._0_4_ < (int)local_4b8);
                }
                NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
                          (&local_498);
                NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
                          (&local_4c8);
              }
              FVar22._0_4_ = FVar22._0_4_ + 1;
              FVar22._4_4_ = 0;
              iVar11 = UWorld::GetNumLevels(pUVar13);
            } while ((int)FVar22._0_4_ < iVar11);
          }
          local_438.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_438.Data.ArrayNum = 0;
          local_438.Data.ArrayMax = 0;
          FVar22.Handle = FVar33.Handle;
          FVar31.Handle = FVar33.Handle;
          if (0 < local_450.ArrayNum) {
            do {
              uVar20 = FVar31._0_4_;
              uVar19 = uVar10;
              if ((int)uVar20 < local_450.ArrayNum) {
                uVar19 = ~uVar20 >> 0x1f;
              }
              if ((uVar19 == 0) &&
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
              FVar8.Data = local_450.AllocatorInstance.Data;
              ::FString::PrintfImpl(&local_408,L"\nAE %d %d %f %f\n");
              uVar19 = uVar32;
              if (local_408.Data.ArrayNum != 0) {
                uVar19 = local_408.Data.ArrayNum - 1;
              }
              ::FString::AppendChars
                        (&local_438,(wchar_t *)local_408.Data.AllocatorInstance.Data,uVar19);
              if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_408.Data.AllocatorInstance.Data);
              }
              iVar11 = *(int *)(&(FVar22.Handle)->field_0x8 + (longlong)FVar8.Data);
              FVar25.Handle = FVar33.Handle;
              if (0 < iVar11) {
                do {
                  uVar21 = FVar25._0_4_;
                  uVar19 = uVar10;
                  if ((int)uVar21 < iVar11) {
                    uVar19 = ~uVar21 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  Unreal2RecastPoint(&local_1c0,
                                     (TVector<double> *)
                                     (*(longlong *)
                                       (&(FVar22.Handle)->field_0x0 +
                                       (longlong)
                                       &((FConvexNavAreaData *)&(FVar8.Data)->field_0x0)->Points) +
                                     (longlong)(int)uVar21 * 0x18));
                  ::FString::PrintfImpl(&local_3f8,L"Av %f %f %f\n");
                  uVar19 = uVar32;
                  if (local_3f8.Data.ArrayNum != 0) {
                    uVar19 = local_3f8.Data.ArrayNum - 1;
                  }
                  ::FString::AppendChars
                            (&local_438,(wchar_t *)local_3f8.Data.AllocatorInstance.Data,uVar19);
                  if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
                  }
                  iVar11 = *(int *)(&(FVar22.Handle)->field_0x8 + (longlong)FVar8.Data);
                  FVar25._0_4_ = uVar21 + 1;
                  FVar25._4_4_ = 0;
                } while ((int)FVar25._0_4_ < iVar11);
              }
              FVar31._0_4_ = uVar20 + 1;
              FVar31._4_4_ = 0;
              FVar22.Handle = FVar22.Handle + 1;
            } while ((int)FVar31._0_4_ < local_450.ArrayNum);
          }
          local_4d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4d8.Data.ArrayNum = 0;
          local_4d8.Data.ArrayMax = 0;
          if (local_450.ArrayNum != 0) {
            ::FString::AppendChars(&local_4d8,"# Area export\n",0xe);
            uVar19 = local_438.Data.ArrayNum - 1;
            if (local_438.Data.ArrayNum == 0) {
              uVar19 = uVar10;
            }
            ::FString::AppendChars
                      (&local_4d8,(wchar_t *)local_438.Data.AllocatorInstance.Data,uVar19);
            ::FString::AppendChars(&local_4d8,"\n",1);
          }
          ::FString::AppendChars(&local_4d8,"# RecastDemo specific data\n",0x1b);
          this = local_200;
          Unreal2RecastBox(&local_e8,&local_200->TotalNavBounds);
          ::FString::PrintfImpl(&local_3e8,L"rd_bbox %7.7f %7.7f %7.7f %7.7f %7.7f %7.7f\n");
          uVar19 = uVar32;
          if (local_3e8.Data.ArrayNum != 0) {
            uVar19 = local_3e8.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_3e8.Data.AllocatorInstance.Data,uVar19)
          ;
          if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
          }
          if ((*(longlong *)(local_428.Handle + 0x17) == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("CurrentGen",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                                 ,0x1f80,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          ::FString::PrintfImpl(&local_3d8,L"# AgentHeight\n");
          uVar19 = local_3d8.Data.ArrayNum - 1;
          if (local_3d8.Data.ArrayNum == 0) {
            uVar19 = uVar10;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_3d8.Data.AllocatorInstance.Data,uVar19)
          ;
          if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_3c8,L"rd_agh %5.5f\n");
          uVar19 = uVar32;
          if (local_3c8.Data.ArrayNum != 0) {
            uVar19 = local_3c8.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_3c8.Data.AllocatorInstance.Data,uVar19)
          ;
          if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_3b8,L"# AgentRadius\n");
          iVar12 = 0;
          iVar11 = local_3b8.Data.ArrayNum + -1;
          if (local_3b8.Data.ArrayNum == 0) {
            iVar11 = iVar12;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_3b8.Data.AllocatorInstance.Data,iVar11)
          ;
          if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_3a8,L"rd_agr %5.5f\n");
          uVar19 = uVar32;
          if (local_3a8.Data.ArrayNum != 0) {
            uVar19 = local_3a8.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_3a8.Data.AllocatorInstance.Data,uVar19)
          ;
          if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_398,L"# Cell Size\n");
          iVar11 = local_398.Data.ArrayNum + -1;
          if (local_398.Data.ArrayNum == 0) {
            iVar11 = iVar12;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_398.Data.AllocatorInstance.Data,iVar11)
          ;
          if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_398.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_388,L"rd_cs %5.5f\n");
          uVar19 = uVar32;
          if (local_388.Data.ArrayNum != 0) {
            uVar19 = local_388.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_388.Data.AllocatorInstance.Data,uVar19)
          ;
          if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_388.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_378,L"# Cell Height\n");
          iVar11 = local_378.Data.ArrayNum + -1;
          if (local_378.Data.ArrayNum == 0) {
            iVar11 = iVar12;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_378.Data.AllocatorInstance.Data,iVar11)
          ;
          if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_378.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_368,L"rd_ch %5.5f\n");
          uVar19 = uVar32;
          if (local_368.Data.ArrayNum != 0) {
            uVar19 = local_368.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_368.Data.AllocatorInstance.Data,uVar19)
          ;
          if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_368.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_358,L"# Agent max climb\n");
          iVar11 = local_358.Data.ArrayNum + -1;
          if (local_358.Data.ArrayNum == 0) {
            iVar11 = iVar12;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_358.Data.AllocatorInstance.Data,iVar11)
          ;
          if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_358.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_348,L"rd_amc %d\n");
          uVar19 = uVar32;
          if (local_348.Data.ArrayNum != 0) {
            uVar19 = local_348.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_348.Data.AllocatorInstance.Data,uVar19)
          ;
          if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_348.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_338,L"# Agent max slope\n");
          iVar11 = local_338.Data.ArrayNum + -1;
          if (local_338.Data.ArrayNum == 0) {
            iVar11 = iVar12;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_338.Data.AllocatorInstance.Data,iVar11)
          ;
          if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_338.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_328,L"rd_ams %5.5f\n");
          uVar19 = uVar32;
          if (local_328.Data.ArrayNum != 0) {
            uVar19 = local_328.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_328.Data.AllocatorInstance.Data,uVar19)
          ;
          if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_328.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_318,L"# Region min size\n");
          iVar11 = local_318.Data.ArrayNum + -1;
          if (local_318.Data.ArrayNum == 0) {
            iVar11 = iVar12;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_318.Data.AllocatorInstance.Data,iVar11)
          ;
          if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_318.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_308,L"rd_rmis %d\n");
          uVar19 = uVar32;
          if (local_308.Data.ArrayNum != 0) {
            uVar19 = local_308.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_308.Data.AllocatorInstance.Data,uVar19)
          ;
          if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_308.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_2f8,L"# Region merge size\n");
          iVar11 = local_2f8.Data.ArrayNum + -1;
          if (local_2f8.Data.ArrayNum == 0) {
            iVar11 = iVar12;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_2f8.Data.AllocatorInstance.Data,iVar11)
          ;
          if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_2e8,L"rd_rmas %d\n");
          uVar19 = uVar32;
          if (local_2e8.Data.ArrayNum != 0) {
            uVar19 = local_2e8.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_2e8.Data.AllocatorInstance.Data,uVar19)
          ;
          if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_2d8,L"# Max edge len\n");
          iVar11 = local_2d8.Data.ArrayNum + -1;
          if (local_2d8.Data.ArrayNum == 0) {
            iVar11 = iVar12;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_2d8.Data.AllocatorInstance.Data,iVar11)
          ;
          if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_2c8,L"rd_mel %d\n");
          uVar19 = uVar32;
          if (local_2c8.Data.ArrayNum != 0) {
            uVar19 = local_2c8.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_2c8.Data.AllocatorInstance.Data,uVar19)
          ;
          if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_2b8,L"# Perform Voxel Filtering\n");
          uVar19 = local_2b8.Data.ArrayNum - 1;
          if (local_2b8.Data.ArrayNum == 0) {
            uVar19 = uVar10;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_2b8.Data.AllocatorInstance.Data,uVar19)
          ;
          if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_2a8,L"rd_pvf %d\n");
          uVar19 = uVar32;
          if (local_2a8.Data.ArrayNum != 0) {
            uVar19 = local_2a8.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_2a8.Data.AllocatorInstance.Data,uVar19)
          ;
          if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_298,L"# Generate Detailed Mesh\n");
          uVar19 = local_298.Data.ArrayNum - 1;
          if (local_298.Data.ArrayNum == 0) {
            uVar19 = uVar10;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_298.Data.AllocatorInstance.Data,uVar19)
          ;
          if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_288,L"rd_gdm %d\n");
          uVar19 = uVar32;
          if (local_288.Data.ArrayNum != 0) {
            uVar19 = local_288.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_288.Data.AllocatorInstance.Data,uVar19)
          ;
          if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_278,L"# MaxPolysPerTile\n");
          uVar19 = local_278.Data.ArrayNum - 1;
          if (local_278.Data.ArrayNum == 0) {
            uVar19 = uVar10;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_278.Data.AllocatorInstance.Data,uVar19)
          ;
          if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_268,L"rd_mppt %d\n");
          uVar19 = uVar32;
          if (local_268.Data.ArrayNum != 0) {
            uVar19 = local_268.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_268.Data.AllocatorInstance.Data,uVar19)
          ;
          if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_268.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_258,L"# maxVertsPerPoly\n");
          uVar19 = local_258.Data.ArrayNum - 1;
          if (local_258.Data.ArrayNum == 0) {
            uVar19 = uVar10;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_258.Data.AllocatorInstance.Data,uVar19)
          ;
          if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_258.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_248,L"rd_mvpp %d\n");
          uVar19 = uVar32;
          if (local_248.Data.ArrayNum != 0) {
            uVar19 = local_248.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_248.Data.AllocatorInstance.Data,uVar19)
          ;
          if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_238,L"# Tile size\n");
          uVar19 = local_238.Data.ArrayNum - 1;
          if (local_238.Data.ArrayNum == 0) {
            uVar19 = uVar10;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_238.Data.AllocatorInstance.Data,uVar19)
          ;
          if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_228,L"rd_ts %d\n");
          uVar19 = uVar32;
          if (local_228.Data.ArrayNum != 0) {
            uVar19 = local_228.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_228.Data.AllocatorInstance.Data,uVar19)
          ;
          if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_1f0,L"\n");
          uVar19 = local_1f0.Data.ArrayNum - 1;
          if (local_1f0.Data.ArrayNum == 0) {
            uVar19 = uVar10;
          }
          ::FString::AppendChars(&local_4d8,(wchar_t *)local_1f0.Data.AllocatorInstance.Data,uVar19)
          ;
          if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_1e0,L"_NavDataSet%d_%s.obj");
          ::FString::ConcatFF(&local_1d0,local_1f8,&local_1e0);
          if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
          ExportGeomToOBJFile(&local_1d0,&local_4b0,&local_468,&local_4d8);
          if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
          }
          if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
          }
          if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_438.Data.AllocatorInstance.Data);
          }
          DestructItems<_FRecastNavMeshGenerator::ExportNavigationData_::__l28::FAreaExportData,int>
                    ((FAreaExportData *)local_450.AllocatorInstance.Data,local_450.ArrayNum);
          lVar28 = local_440;
          lVar18 = local_418;
          if ((FAreaExportData *)local_450.AllocatorInstance.Data != (FAreaExportData *)0x0) {
            FMemory::Free(local_450.AllocatorInstance.Data);
            lVar28 = local_440;
            lVar18 = local_418;
          }
        }
        NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
                  ((ForAnyElementType *)&local_468);
        NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
                  ((ForAnyElementType *)&local_4b0);
        local_440 = lVar28 + 1;
        FVar15._0_4_ = local_470 + 1;
        FVar15._4_4_ = 0;
        FVar22 = local_420;
        local_470 = FVar15._0_4_;
      } while ((int)FVar15._0_4_ < *(int *)&local_420.Handle[5].field_0x20);
    }
    if (4 < (byte)LogNavigation._0_1_) {
      QueryPerformanceCounter(&local_410);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    }
    if (local_218.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
    return;
  }
LAB_146e4e19d:
  if (1 < (byte)LogNavigation._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
  }
  return;
}

// ExportRigidBodyGeometry @ 146e51ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
FRecastNavMeshGenerator::ExportRigidBodyGeometry
          (UBodySetup *param_1,TNavStatArray<UE::Math::TVector<double>_> *param_2,
          TNavStatArray<int> *param_3,TNavStatArray<UE::Math::TVector<double>_> *param_4,
          TNavStatArray<int> *param_5,TNavStatArray<int> *param_6,TBox<double> *param_7,
          TTransform<double> *param_8)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  undefined4 uVar8;
  TTransform<double> *pTVar9;
  UBodySetup *pUVar10;
  TNavStatArray<int> *pTVar11;
  TBox<double> *pTVar12;
  FKAggregateGeom *pFVar13;
  TEnumAsByte<ECollisionTraceFlag> TVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined7 extraout_var;
  FTrimeshIndexBuffer *pFVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  TTransform<double> *pTVar22;
  longlong lVar23;
  FKConvexElem *pFVar24;
  undefined1 auStackY_248 [32];
  undefined1 auStack_1f8 [8];
  TNavStatArray<double> TStack_1f0;
  int aiStack_1d8 [2];
  TTransform<double> *pTStack_1d0;
  UBodySetup *pUStack_1c8;
  TNavStatArray<int> *pTStack_1c0;
  int aiStack_1b8 [2];
  TNavStatArray<UE::Math::TVector<double>_> *pTStack_1b0;
  TBox<double> *pTStack_1a8;
  FKAggregateGeom *pFStack_1a0;
  TNavStatArray<UE::Math::TVector<double>_> *pTStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  FTriangleMeshImplicitObject *pFStack_160;
  FTriangleMeshImplicitObject **ppFStack_158;
  TNavStatArray<double> *pTStack_150;
  TNavStatArray<int> *pTStack_148;
  TTransform<double> *pTStack_140;
  TBox<double> *pTStack_138;
  int *piStack_130;
  TTransform<double> TStack_128;
  TTransform<double> TStack_c8;
  ulonglong uStack_68;
  
  uStack_68 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pTStack_1c0 = param_5;
  pTStack_1a8 = param_7;
  pTStack_1d0 = param_8;
  pFStack_1a0 = (FKAggregateGeom *)param_6;
  pUStack_1c8 = param_1;
  pTStack_1b0 = param_2;
  pTStack_198 = param_4;
  (**(code **)(param_1->_padding_ + 0x2b0))();
  TStack_1f0._0_8_ = 0;
  TStack_1f0._8_8_ = 0;
  TStack_1f0._16_8_ = 0;
  TVar14 = UBodySetupCore::GetCollisionTraceFlag((UBodySetupCore *)param_1);
  pTVar12 = pTStack_1a8;
  pUVar10 = pUStack_1c8;
  pTVar9 = pTStack_1d0;
  if (*(char *)CONCAT71(extraout_var,TVar14.Value) == '\x03') {
    pFVar21 = (param_1->TriMeshGeometries).AllocatorInstance.Data;
    iVar17 = (param_1->TriMeshGeometries).ArrayNum;
    pFVar2 = pFVar21 + (longlong)iVar17 * 8;
    while( true ) {
      if ((pUVar10->TriMeshGeometries).ArrayNum != iVar17) {
        auStack_1f8[0] = 0;
        `TCheckedPointerIterator<TRefCountPtr<Chaos::FTriangleMeshImplicitObject>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(auStack_1f8);
      }
      param_2 = pTStack_1b0;
      param_6 = (TNavStatArray<int> *)pFStack_1a0;
      param_4 = pTStack_198;
      if (pFVar21 == pFVar2) break;
      pFStack_160 = *(FTriangleMeshImplicitObject **)pFVar21;
      if (pFStack_160 == (FTriangleMeshImplicitObject *)0x0) {
LAB_146e50cfa:
        pFVar21 = pFVar21 + 8;
      }
      else {
        pTStack_140 = pTVar9;
        pTStack_138 = pTVar12;
        aiStack_1b8[0] =
             (int)TStack_1f0._16_4_ / 3 + ((int)TStack_1f0._16_4_ >> 0x1f) +
             (int)(((longlong)(int)TStack_1f0._16_4_ / 3 +
                    ((longlong)(int)TStack_1f0._16_4_ >> 0x3f) & 0xffffffffU) >> 0x1f);
        ppFStack_158 = &pFStack_160;
        pTStack_150 = &TStack_1f0;
        piStack_130 = aiStack_1b8;
        pTStack_148 = param_3;
        pFVar19 = Chaos::FTriangleMeshImplicitObject::Elements(pFStack_160);
        if (pFVar19->bRequiresLargeIndices == false) {
          `RecastGeometryExport::ExportChaosTriMesh'::__l2::<lambda_1>::
          operator()<TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_>_>
                    (&ppFStack_158,&pFVar19->SmallIdxBuffer);
          goto LAB_146e50cfa;
        }
        `RecastGeometryExport::ExportChaosTriMesh'::__l2::<lambda_1>::
        operator()<TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_>
                  (&ppFStack_158,&pFVar19->LargeIdxBuffer);
        pFVar21 = pFVar21 + 8;
      }
    }
  }
  uVar20 = (int)(((longlong)(int)TStack_1f0._16_4_ / 3 + ((longlong)(int)TStack_1f0._16_4_ >> 0x3f)
                 & 0xffffffffU) >> 0x1f) +
           (int)TStack_1f0._16_4_ / 3 + ((int)TStack_1f0._16_4_ >> 0x1f) +
           *(int *)&param_2->field_0x10;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  if (*(int *)&param_2->field_0x14 < (int)uVar20) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (0x18,8,uVar20,(ForAnyElementType *)param_2,*(int *)&param_2->field_0x10,
               (int *)&param_2->field_0x14);
  }
  if (0 < (int)TStack_1f0._16_4_) {
    lVar23 = 8;
    iVar17 = TStack_1f0._16_4_;
    uVar20 = 1;
    do {
      uVar16 = 0;
      if ((int)(uVar20 + 1) < iVar17) {
        uVar16 = ~(uVar20 + 1) >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar17 = TStack_1f0._16_4_;
      }
      uVar4 = *(undefined8 *)(lVar23 + 8 + TStack_1f0._0_8_);
      uVar16 = 0;
      if ((int)uVar20 < iVar17) {
        uVar16 = ~uVar20 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar17 = TStack_1f0._16_4_;
      }
      uVar5 = *(undefined8 *)(lVar23 + TStack_1f0._0_8_);
      uVar16 = 0;
      if ((int)(uVar20 - 1) < iVar17) {
        uVar16 = ~(uVar20 - 1) >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uStack_190 = *(undefined8 *)(lVar23 + -8 + TStack_1f0._0_8_);
      uStack_188 = uVar5;
      uStack_180 = uVar4;
      if (((*(undefined8 **)param_2 <= &uStack_190) &&
          (&uStack_190 < *(undefined8 **)param_2 + (longlong)*(int *)&param_2->field_0x14 * 3)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar17 = *(int *)&param_2->field_0x10;
      if (iVar17 == *(int *)&param_2->field_0x14) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                           (0x818,(ForAnyElementType *)param_2,(int *)&param_2->field_0x14);
      }
      lVar23 = lVar23 + 0x18;
      *(int *)&param_2->field_0x10 = iVar17 + 1;
      lVar6 = *(longlong *)param_2;
      puVar3 = (undefined8 *)(lVar6 + (longlong)iVar17 * 0x18);
      *puVar3 = uStack_190;
      puVar3[1] = uStack_188;
      *(undefined8 *)(lVar6 + 0x10 + (longlong)iVar17 * 0x18) = uStack_180;
      iVar18 = uVar20 + 2;
      iVar17 = TStack_1f0._16_4_;
      uVar20 = uVar20 + 3;
    } while (iVar18 < (int)TStack_1f0._16_4_);
  }
  uVar8 = TStack_1f0._20_4_;
  iVar17 = *(int *)&param_4->field_0x10;
  if ((longlong)TStack_1f0._16_8_ < 0) {
    TStack_1f0._16_8_ = (ulonglong)(uint)TStack_1f0._20_4_ << 0x20;
    if (uVar8 != 0) {
      UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&TStack_1f0,0,(int *)&TStack_1f0.field_0x14);
    }
  }
  else {
    TStack_1f0._16_8_ = (ulonglong)(uint)TStack_1f0._20_4_ << 0x20;
  }
  pTVar12 = pTStack_1a8;
  pTVar11 = pTStack_1c0;
  pTVar9 = pTStack_1d0;
  uVar20 = (pUStack_1c8->AggGeom).ConvexElems.ArrayNum;
  pFStack_1a0 = &pUStack_1c8->AggGeom;
  pFVar24 = (FKConvexElem *)(pUStack_1c8->AggGeom).ConvexElems.AllocatorInstance.Data;
  if (0 < (int)uVar20) {
    pTVar22 = &pFVar24->Transform;
    pUStack_1c8 = (UBodySetup *)(ulonglong)uVar20;
    do {
      aiStack_1d8[0] =
           (int)TStack_1f0._16_4_ / 3 + ((int)TStack_1f0._16_4_ >> 0x1f) +
           (int)(((longlong)(int)TStack_1f0._16_4_ / 3 + ((longlong)(int)TStack_1f0._16_4_ >> 0x3f)
                 & 0xffffffffU) >> 0x1f);
      if (((*(int **)param_6 <= aiStack_1d8) &&
          (aiStack_1d8 < *(int **)param_6 + *(int *)&param_6->field_0x14)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar18 = *(int *)&param_6->field_0x10;
      if (iVar18 == *(int *)&param_6->field_0x14) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                           (0x404,(ForAnyElementType *)param_6,(int *)&param_6->field_0x14);
      }
      *(int *)&param_6->field_0x10 = iVar18 + 1;
      *(int *)(*(longlong *)param_6 + (longlong)iVar18 * 4) = aiStack_1d8[0];
      if (((TRefCountPtr<Chaos::FConvex> *)(pTVar22 + 1))->Reference != (FConvex *)0x0) {
        TStack_c8.Rotation.XY.m128d_f64[0] = (pTVar22->Rotation).XY.m128d_f64[0];
        TStack_c8.Rotation.XY.m128d_f64[1] = (pTVar22->Rotation).XY.m128d_f64[1];
        TStack_c8.Rotation.ZW.m128d_f64[0] = (pTVar22->Rotation).ZW.m128d_f64[0];
        TStack_c8.Rotation.ZW.m128d_f64[1] = (pTVar22->Rotation).ZW.m128d_f64[1];
        TStack_c8.Translation.XY.m128d_f64[0] = (pTVar22->Translation).XY.m128d_f64[0];
        TStack_c8.Translation.XY.m128d_f64[1] = (pTVar22->Translation).XY.m128d_f64[1];
        TStack_c8.Translation.ZW.m128d_f64[0] = (pTVar22->Translation).ZW.m128d_f64[0];
        TStack_c8.Translation.ZW.m128d_f64[1] = (pTVar22->Translation).ZW.m128d_f64[1];
        TStack_c8.Scale3D.XY.m128d_f64[0] = (pTVar22->Scale3D).XY.m128d_f64[0];
        TStack_c8.Scale3D.XY.m128d_f64[1] = (pTVar22->Scale3D).XY.m128d_f64[1];
        TStack_c8.Scale3D.ZW.m128d_f64[0] = (pTVar22->Scale3D).ZW.m128d_f64[0];
        TStack_c8.Scale3D.ZW.m128d_f64[1] = (pTVar22->Scale3D).ZW.m128d_f64[1];
        TStack_128.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        TStack_128.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        TStack_128.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        TStack_128.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        TStack_128.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        TStack_128.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        TStack_128.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        TStack_128.Translation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        TStack_128.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        TStack_128.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        TStack_128.Translation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        TStack_128.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        TStack_128.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        TStack_128.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        TStack_128.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        TStack_128.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        TStack_128.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        TStack_128.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&TStack_128,&TStack_c8,pTVar9);
        RecastGeometryExport::ExportChaosConvexMesh(pFVar24,&TStack_128,&TStack_1f0,pTVar11,pTVar12)
        ;
      }
      pFVar24 = pFVar24 + 1;
      pTVar22 = (TTransform<double> *)((longlong)(pTVar22 + 2) + 0x40);
      pUStack_1c8 = (UBodySetup *)((longlong)pUStack_1c8 - 1);
    } while (pUStack_1c8 != (UBodySetup *)0x0);
    pUStack_1c8 = (UBodySetup *)0x0;
    param_4 = pTStack_198;
  }
  pFVar13 = pFStack_1a0;
  pTVar12 = pTStack_1a8;
  lVar23 = 8;
  RecastGeometryExport::ExportRigidBodyBoxElements
            (pFStack_1a0,&TStack_1f0,pTStack_1c0,param_6,pTStack_1a8,pTStack_1d0,iVar17);
  RecastGeometryExport::ExportRigidBodySphylElements
            (pFVar13,&TStack_1f0,pTStack_1c0,param_6,pTVar12,pTStack_1d0,iVar17);
  RecastGeometryExport::ExportRigidBodySphereElements
            (pFVar13,&TStack_1f0,pTStack_1c0,param_6,pTVar12,pTStack_1d0,iVar17);
  uVar20 = (int)(((longlong)(int)TStack_1f0._16_4_ / 3 + ((longlong)(int)TStack_1f0._16_4_ >> 0x3f)
                 & 0xffffffffU) >> 0x1f) +
           (int)TStack_1f0._16_4_ / 3 + ((int)TStack_1f0._16_4_ >> 0x1f) +
           *(int *)&param_4->field_0x10;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  puVar1 = &param_4->field_0x14;
  if (*(int *)&param_4->field_0x14 < (int)uVar20) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (0x18,8,uVar20,(ForAnyElementType *)param_4,*(int *)&param_4->field_0x10,(int *)puVar1
              );
  }
  iVar17 = TStack_1f0._16_4_;
  uVar20 = 1;
  if (0 < (int)TStack_1f0._16_4_) {
    do {
      uVar16 = 0;
      if ((int)(uVar20 + 1) < iVar17) {
        uVar16 = ~(uVar20 + 1) >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar17 = TStack_1f0._16_4_;
      }
      uVar4 = *(undefined8 *)(lVar23 + 8 + TStack_1f0._0_8_);
      uVar16 = 0;
      if ((int)uVar20 < iVar17) {
        uVar16 = ~uVar20 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar17 = TStack_1f0._16_4_;
      }
      uVar5 = *(undefined8 *)(lVar23 + TStack_1f0._0_8_);
      uVar16 = 0;
      if ((int)(uVar20 - 1) < iVar17) {
        uVar16 = ~(uVar20 - 1) >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uStack_178 = *(undefined8 *)(lVar23 + -8 + TStack_1f0._0_8_);
      uStack_170 = uVar5;
      uStack_168 = uVar4;
      if (((*(undefined8 **)param_4 <= &uStack_178) &&
          (&uStack_178 < *(undefined8 **)param_4 + (longlong)*(int *)puVar1 * 3)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar17 = *(int *)&param_4->field_0x10;
      if (iVar17 == *(int *)puVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                           (0x818,(ForAnyElementType *)param_4,(int *)puVar1);
      }
      lVar23 = lVar23 + 0x18;
      *(int *)&param_4->field_0x10 = iVar17 + 1;
      lVar6 = *(longlong *)param_4;
      puVar3 = (undefined8 *)(lVar6 + (longlong)iVar17 * 0x18);
      *puVar3 = uStack_178;
      puVar3[1] = uStack_170;
      *(undefined8 *)(lVar6 + 0x10 + (longlong)iVar17 * 0x18) = uStack_168;
      iVar18 = uVar20 + 2;
      iVar17 = TStack_1f0._16_4_;
      uVar20 = uVar20 + 3;
    } while (iVar18 < (int)TStack_1f0._16_4_);
  }
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&TStack_1f0);
  return;
}

// ExportRigidBodyGeometry @ 146e51cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRecastNavMeshGenerator::ExportRigidBodyGeometry
          (UBodySetup *param_1,TNavStatArray<UE::Math::TVector<double>_> *param_2,
          TNavStatArray<int> *param_3,TBox<double> *param_4,TTransform<double> *param_5)

{
  int iVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  FName FVar8;
  code *pcVar9;
  undefined4 uVar10;
  uchar auVar11 [8];
  uchar auVar12 [8];
  FKAggregateGeom *pFVar13;
  TEnumAsByte<ECollisionTraceFlag> TVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined7 extraout_var;
  FTrimeshIndexBuffer *pFVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar21;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FScriptContainerElement *pFVar22;
  TTransform<double> *pTVar23;
  FKConvexElem *pFVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined1 auStackY_248 [32];
  undefined1 auStack_1e8 [4];
  int aiStack_1e4 [3];
  undefined1 auStack_1d8 [8];
  uchar auStack_1d0 [8];
  undefined8 uStack_1c8;
  FName FStack_1c0;
  FKAggregateGeom *pFStack_1b8;
  int aiStack_1b0 [2];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  FTriangleMeshImplicitObject *pFStack_190;
  FName FStack_188;
  FStatMessage FStack_180;
  FTriangleMeshImplicitObject **ppFStack_170;
  undefined1 *puStack_168;
  TNavStatArray<int> *pTStack_160;
  TTransform<double> *pTStack_158;
  TBox<double> *pTStack_150;
  int *piStack_148;
  FName FStack_140;
  TTransform<double> TStack_138;
  TTransform<double> TStack_d8;
  ulonglong uStack_78;
  
  uStack_78 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pFStack_1b8 = (FKAggregateGeom *)param_5;
  auStack_1d8 = (undefined1  [8])0x0;
  auStack_1d0[0] = '\0';
  auStack_1d0[1] = '\0';
  auStack_1d0[2] = '\0';
  auStack_1d0[3] = '\0';
  auStack_1d0[4] = '\0';
  auStack_1d0[5] = '\0';
  auStack_1d0[6] = '\0';
  auStack_1d0[7] = '\0';
  uStack_1c8 = 0;
  FStack_1c0 = (FName)param_2;
  (**(code **)(param_1->_padding_ + 0x2b0))();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
    ::__l2::TemporaryShapeBuffer._16_8_ = 0;
    `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
    ::__l2::TemporaryShapeBuffer._0_8_ = 0;
    `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
    ::__l2::TemporaryShapeBuffer._8_8_ = 0;
    atexit(`RecastGeometryExport::ExportRigidBodySetup'::__l2::
           _dynamic_atexit_destructor_for__TemporaryShapeBuffer__);
    _Init_thread_footer(&`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar14 = UBodySetupCore::GetCollisionTraceFlag((UBodySetupCore *)param_1);
  pFVar13 = pFStack_1b8;
  if (*(char *)CONCAT71(extraout_var,TVar14.Value) == '\x03') {
    pFVar22 = (param_1->TriMeshGeometries).AllocatorInstance.Data;
    iVar16 = (param_1->TriMeshGeometries).ArrayNum;
    pFVar3 = pFVar22 + (longlong)iVar16 * 8;
    while( true ) {
      if ((param_1->TriMeshGeometries).ArrayNum != iVar16) {
        auStack_1e8[0] = 0;
        `TCheckedPointerIterator<TRefCountPtr<Chaos::FTriangleMeshImplicitObject>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(auStack_1e8);
      }
      param_2 = (TNavStatArray<UE::Math::TVector<double>_> *)FStack_1c0;
      param_5 = (TTransform<double> *)pFStack_1b8;
      if (pFVar22 == pFVar3) break;
      pFStack_190 = *(FTriangleMeshImplicitObject **)pFVar22;
      if (pFStack_190 == (FTriangleMeshImplicitObject *)0x0) {
LAB_146e515d6:
        pFVar22 = pFVar22 + 8;
      }
      else {
        pTStack_158 = (TTransform<double> *)pFVar13;
        aiStack_1b0[0] =
             (int)uStack_1c8 / 3 + ((int)uStack_1c8 >> 0x1f) +
             (int)(((longlong)(int)uStack_1c8 / 3 + ((longlong)(int)uStack_1c8 >> 0x3f) &
                   0xffffffffU) >> 0x1f);
        ppFStack_170 = &pFStack_190;
        puStack_168 = auStack_1d8;
        piStack_148 = aiStack_1b0;
        pTStack_160 = param_3;
        pTStack_150 = param_4;
        pFVar19 = Chaos::FTriangleMeshImplicitObject::Elements(pFStack_190);
        if (pFVar19->bRequiresLargeIndices == false) {
          `RecastGeometryExport::ExportChaosTriMesh'::__l2::<lambda_1>::
          operator()<TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_>_>
                    (&ppFStack_170,&pFVar19->SmallIdxBuffer);
          goto LAB_146e515d6;
        }
        `RecastGeometryExport::ExportChaosTriMesh'::__l2::<lambda_1>::
        operator()<TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_>
                  (&ppFStack_170,&pFVar19->LargeIdxBuffer);
        pFVar22 = pFVar22 + 8;
      }
    }
  }
  uVar17 = (param_1->AggGeom).ConvexElems.ArrayNum;
  pFStack_1b8 = &param_1->AggGeom;
  pFVar24 = (FKConvexElem *)(param_1->AggGeom).ConvexElems.AllocatorInstance.Data;
  if (0 < (int)uVar17) {
    pTVar23 = &pFVar24->Transform;
    uVar26 = (ulonglong)uVar17;
    do {
      aiStack_1e4[0] =
           (int)uStack_1c8 / 3 + ((int)uStack_1c8 >> 0x1f) +
           (int)(((longlong)(int)uStack_1c8 / 3 + ((longlong)(int)uStack_1c8 >> 0x3f) & 0xffffffffU)
                >> 0x1f);
      if ((((ulonglong)
            `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
            ::__l2::TemporaryShapeBuffer._0_8_ <= aiStack_1e4) &&
          (aiStack_1e4 <
           (int *)(`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                   ::__l2::TemporaryShapeBuffer._0_8_ +
                  (longlong)
                  (int)`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                       ::__l2::TemporaryShapeBuffer._20_4_ * 4))) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar16 = `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
               ::__l2::TemporaryShapeBuffer._16_4_;
      if (`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
          ::__l2::TemporaryShapeBuffer._16_4_ ==
          `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
          ::__l2::TemporaryShapeBuffer._20_4_) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                           (0x404,(ForAnyElementType *)
                                  &`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                                   ::__l2::TemporaryShapeBuffer,
                            (int *)&`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                                    ::__l2::TemporaryShapeBuffer.field_0x14);
      }
      `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
      ::__l2::TemporaryShapeBuffer._16_4_ = iVar16 + 1;
      *(int *)(`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
               ::__l2::TemporaryShapeBuffer._0_8_ + (longlong)iVar16 * 4) = aiStack_1e4[0];
      if (((TRefCountPtr<Chaos::FConvex> *)(pTVar23 + 1))->Reference != (FConvex *)0x0) {
        TStack_d8.Rotation.XY.m128d_f64[0] = (pTVar23->Rotation).XY.m128d_f64[0];
        TStack_d8.Rotation.XY.m128d_f64[1] = (pTVar23->Rotation).XY.m128d_f64[1];
        TStack_d8.Rotation.ZW.m128d_f64[0] = (pTVar23->Rotation).ZW.m128d_f64[0];
        TStack_d8.Rotation.ZW.m128d_f64[1] = (pTVar23->Rotation).ZW.m128d_f64[1];
        TStack_d8.Translation.XY.m128d_f64[0] = (pTVar23->Translation).XY.m128d_f64[0];
        TStack_d8.Translation.XY.m128d_f64[1] = (pTVar23->Translation).XY.m128d_f64[1];
        TStack_d8.Translation.ZW.m128d_f64[0] = (pTVar23->Translation).ZW.m128d_f64[0];
        TStack_d8.Translation.ZW.m128d_f64[1] = (pTVar23->Translation).ZW.m128d_f64[1];
        TStack_d8.Scale3D.XY.m128d_f64[0] = (pTVar23->Scale3D).XY.m128d_f64[0];
        TStack_d8.Scale3D.XY.m128d_f64[1] = (pTVar23->Scale3D).XY.m128d_f64[1];
        TStack_d8.Scale3D.ZW.m128d_f64[0] = (pTVar23->Scale3D).ZW.m128d_f64[0];
        TStack_d8.Scale3D.ZW.m128d_f64[1] = (pTVar23->Scale3D).ZW.m128d_f64[1];
        TStack_138.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        TStack_138.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        TStack_138.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        TStack_138.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        TStack_138.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        TStack_138.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        TStack_138.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        TStack_138.Translation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        TStack_138.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        TStack_138.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        TStack_138.Translation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        TStack_138.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        TStack_138.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        TStack_138.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        TStack_138.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        TStack_138.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        TStack_138.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        TStack_138.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&TStack_138,&TStack_d8,param_5);
        RecastGeometryExport::ExportChaosConvexMesh
                  (pFVar24,&TStack_138,(TNavStatArray<double> *)auStack_1d8,param_3,param_4);
      }
      pFVar24 = pFVar24 + 1;
      pTVar23 = (TTransform<double> *)((longlong)(pTVar23 + 2) + 0x40);
      uVar26 = uVar26 - 1;
      param_2 = (TNavStatArray<UE::Math::TVector<double>_> *)FStack_1c0;
    } while (uVar26 != 0);
  }
  pFVar13 = pFStack_1b8;
  RecastGeometryExport::ExportRigidBodyBoxElements
            (pFStack_1b8,(TNavStatArray<double> *)auStack_1d8,param_3,
             &`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
              ::__l2::TemporaryShapeBuffer,param_4,param_5,0);
  RecastGeometryExport::ExportRigidBodySphylElements
            (pFVar13,(TNavStatArray<double> *)auStack_1d8,param_3,
             &`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
              ::__l2::TemporaryShapeBuffer,param_4,param_5,0);
  RecastGeometryExport::ExportRigidBodySphereElements
            (pFVar13,(TNavStatArray<double> *)auStack_1d8,param_3,
             &`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
              ::__l2::TemporaryShapeBuffer,param_4,param_5,0);
  uVar5 = `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
          ::__l2::TemporaryShapeBuffer._16_8_;
  uVar10 = `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
           ::__l2::TemporaryShapeBuffer._20_4_;
  `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
  ::__l2::TemporaryShapeBuffer._16_8_ =
       (ulonglong)
       (uint)`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
             ::__l2::TemporaryShapeBuffer._20_4_ << 0x20;
  if (((longlong)uVar5 < 0) && (uVar10 != 0)) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)
                     &`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                      ::__l2::TemporaryShapeBuffer,0,
               (int *)&`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                       ::__l2::TemporaryShapeBuffer.field_0x14);
  }
  uVar17 = (int)(((longlong)(int)uStack_1c8 / 3 + ((longlong)(int)uStack_1c8 >> 0x3f) & 0xffffffffU)
                >> 0x1f) + (int)uStack_1c8 / 3 + ((int)uStack_1c8 >> 0x1f) +
           *(int *)((longlong)param_2 + 0x10);
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  piVar2 = (int *)((longlong)param_2 + 0x14);
  lVar25 = 8;
  if (*piVar2 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (0x18,8,uVar17,(ForAnyElementType *)param_2,*(int *)((longlong)param_2 + 0x10),piVar2)
    ;
  }
  if (0 < (int)uStack_1c8) {
    uVar17 = 1;
    iVar16 = (int)uStack_1c8;
    do {
      uVar18 = 0;
      if ((int)(uVar17 + 1) < iVar16) {
        uVar18 = ~(uVar17 + 1) >> 0x1f;
      }
      if (uVar18 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar16 = (int)uStack_1c8;
      }
      uVar5 = *(undefined8 *)(lVar25 + 8 + (longlong)auStack_1d8);
      uVar18 = 0;
      if ((int)uVar17 < iVar16) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if (uVar18 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar16 = (int)uStack_1c8;
      }
      uVar6 = *(undefined8 *)(lVar25 + (longlong)auStack_1d8);
      uVar18 = 0;
      if ((int)(uVar17 - 1) < iVar16) {
        uVar18 = ~(uVar17 - 1) >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uStack_1a8 = *(undefined8 *)(lVar25 + -8 + (longlong)auStack_1d8);
      uStack_1a0 = uVar6;
      uStack_198 = uVar5;
      if (((*(undefined8 **)param_2 <= &uStack_1a8) &&
          (&uStack_1a8 < *(undefined8 **)param_2 + (longlong)*piVar2 * 3)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar16 = *(int *)((longlong)param_2 + 0x10);
      if (iVar16 == *piVar2) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                           (0x818,(ForAnyElementType *)param_2,piVar2);
      }
      lVar25 = lVar25 + 0x18;
      *(int *)((longlong)param_2 + 0x10) = iVar16 + 1;
      lVar7 = *(longlong *)param_2;
      puVar4 = (undefined8 *)(lVar7 + (longlong)iVar16 * 0x18);
      *puVar4 = uStack_1a8;
      puVar4[1] = uStack_1a0;
      *(undefined8 *)(lVar7 + 0x10 + (longlong)iVar16 * 0x18) = uStack_198;
      iVar1 = uVar17 + 2;
      uVar17 = uVar17 + 3;
      iVar16 = (int)uStack_1c8;
    } while (iVar1 < (int)uStack_1c8);
  }
  auVar11 = auStack_1d0;
  if (auStack_1d0 != (uchar  [8])0x0) {
    FVar21 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar20 = ::FName::FName(&FStack_140,"STAT_NavigationMemory");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar20,
                          L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                          false,ST_int64,false,false,MCR_Physical);
    }
    FVar8 = *(FName *)FVar21;
    FStack_1c0 = FVar8;
    if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this = TlsGetValue(FThreadStats::TlsSlot);
      if (this == (FThreadStats *)0x0) {
        this_00 = FThreadStatsPool::Get();
        this = FThreadStatsPool::GetFromPool(this_00);
      }
      auVar12 = auStack_1d0;
      FStack_180.NameAndInfo.Number = FVar8.Number & 0xffffbfff | 0xb000;
      auStack_1d0[0] = auVar11[0];
      auStack_1d0[1] = auVar11[1];
      auStack_1d0[2] = auVar11[2];
      auStack_1d0[3] = auVar11[3];
      auStack_1d0[4] = auVar11[4];
      auStack_1d0[5] = auVar11[5];
      auStack_1d0[6] = auVar11[6];
      auStack_1d0[7] = auVar11[7];
      FStack_180.StatData.Pad[0] = auStack_1d0[0];
      FStack_180.StatData.Pad[1] = auStack_1d0[1];
      FStack_180.StatData.Pad[2] = auStack_1d0[2];
      FStack_180.StatData.Pad[3] = auStack_1d0[3];
      FStack_180.StatData.Pad[4] = auStack_1d0[4];
      FStack_180.StatData.Pad[5] = auStack_1d0[5];
      FStack_180.StatData.Pad[6] = auStack_1d0[6];
      FStack_180.StatData.Pad[7] = auStack_1d0[7];
      auStack_1d0 = auVar12;
      FStack_188 = FVar8;
      FStack_180.NameAndInfo.Index.Value = FVar8.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this,&FStack_180);
      FStatsTrace::Add(&FStack_188,-(longlong)auVar11);
      if (this->ScopeCount == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  if (auStack_1d8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)auStack_1d8);
  }
  return;
}

// ExportVertexSoupGeometry @ 146e54d40

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRecastNavMeshGenerator::ExportVertexSoupGeometry
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          FNavigationRelevantData *param_2)

{
  int iVar1;
  FName FVar2;
  uchar auVar3 [8];
  uchar auVar4 [8];
  uint uVar5;
  UObject *pUVar6;
  longlong lVar7;
  UClass *pUVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar10;
  FThreadStats *pFVar11;
  FThreadStatsPool *pFVar12;
  int iVar13;
  FString FStack_d8;
  FStatMessage FStack_c8;
  undefined1 auStack_b8 [16];
  void *pvStack_a8;
  uchar auStack_a0 [8];
  undefined8 uStack_98;
  void *pvStack_90;
  uchar auStack_88 [8];
  undefined8 uStack_80;
  TEnumAsByte<EWalkableSlopeBehavior> TStack_78;
  undefined8 uStack_74;
  float fStack_6c;
  undefined1 uStack_38;
  undefined4 uStack_37;
  undefined2 uStack_33;
  undefined1 uStack_31;
  
  iVar13 = 0;
  pvStack_a8 = (void *)0x0;
  auStack_a0[0] = '\0';
  auStack_a0[1] = '\0';
  auStack_a0[2] = '\0';
  auStack_a0[3] = '\0';
  auStack_a0[4] = '\0';
  auStack_a0[5] = '\0';
  auStack_a0[6] = '\0';
  auStack_a0[7] = '\0';
  uStack_98 = 0;
  pvStack_90 = (void *)0x0;
  auStack_88[0] = '\0';
  auStack_88[1] = '\0';
  auStack_88[2] = '\0';
  auStack_88[3] = '\0';
  auStack_88[4] = '\0';
  auStack_88[5] = '\0';
  auStack_88[6] = '\0';
  auStack_88[7] = '\0';
  uStack_80 = 0;
  TStack_78.Value = '\0';
  uStack_74._0_4_ = 0.0;
  uStack_74._4_4_ = 0.0;
  fStack_6c = 1.0;
  auStack_b8._0_8_ = &___7FRecastGeometryExport__6B_;
  (param_2->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (param_2->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  uStack_37 = 0;
  (param_2->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (param_2->Bounds).Max.field0_0x0._s_0.X = 0.0;
  uStack_33 = 0;
  (param_2->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (param_2->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  uStack_31 = 0;
  uStack_38 = 0;
  (param_2->Bounds).IsValid = '\0';
  (param_2->Bounds).Pad[0] = '\0';
  (param_2->Bounds).Pad[1] = '\0';
  (param_2->Bounds).Pad[2] = '\0';
  (param_2->Bounds).Pad[3] = '\0';
  (param_2->Bounds).Pad[4] = '\0';
  (param_2->Bounds).Pad[5] = '\0';
  (param_2->Bounds).Pad[6] = '\0';
  auStack_b8._8_8_ = param_2;
  RecastGeometryExport::ExportVertexSoup
            (param_1,(TNavStatArray<double> *)&pvStack_a8,(TNavStatArray<int> *)&pvStack_90,
             &param_2->Bounds);
  FStack_d8.Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)
        &(((TSharedRef<FNavigationElement_const_,1> *)(auStack_b8._8_8_ + 0x100))->Object->
         OwnerUObject).WeakPtr;
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&FStack_d8);
  if ((pUVar6 == (UObject *)0x0) ||
     (lVar7 = (**(code **)(*(longlong *)pUVar6 + 0x180))(pUVar6), lVar7 == 0)) goto LAB_146e54a4a;
  lVar7 = *(longlong *)(lVar7 + 0x1a0);
  if (lVar7 == 0) {
LAB_146e54986:
    lVar7 = 0;
  }
  else {
    pUVar8 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar8->_padding_)) goto LAB_146e54986;
  }
  if (((lVar7 != 0) && (0 < *(int *)(lVar7 + 0x6c))) &&
     (*(int *)(lVar7 + 0x6c) < (int)uStack_98 / 9)) {
    FNavigationElement::GetFullName
              (((TSharedRef<FNavigationElement_const_,1> *)(auStack_b8._8_8_ + 0x100))->Object,
               &FStack_d8);
    FVar2 = (FName)L"";
    if (FStack_d8.Data.ArrayNum != 0) {
      iVar13 = FStack_d8.Data.ArrayNum + -1;
      FVar2 = (FName)FStack_d8.Data.AllocatorInstance;
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar2);
    if ((uVar5 != `void___cdecl_RecastGeometryExport::ValidateGeometryExport(FRecastGeometryExport_const&___ptr64)'
                  ::__l11::LastNameHash) && (2 < (byte)LogNavigation._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`void___cdecl_RecastGeometryExport::ValidateGeometryExport(FRecastGeometryExport_const&___ptr64)'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    }
    `void___cdecl_RecastGeometryExport::ValidateGeometryExport(FRecastGeometryExport_const&___ptr64)'
    ::__l11::LastNameHash = uVar5;
    if ((FName)FStack_d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(FStack_d8.Data.AllocatorInstance.Data);
    }
  }
LAB_146e54a4a:
  RecastGeometryExport::StoreCollisionCache((FRecastGeometryExport *)auStack_b8);
  auVar3 = auStack_88;
  if (auStack_88 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar9 = ::FName::FName((FName *)&FStack_d8,"STAT_NavigationMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar9,
                          L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                          false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar10;
    FStack_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      auVar4 = auStack_88;
      FStack_c8.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      auStack_88[0] = auVar3[0];
      auStack_88[1] = auVar3[1];
      auStack_88[2] = auVar3[2];
      auStack_88[3] = auVar3[3];
      auStack_88[4] = auVar3[4];
      auStack_88[5] = auVar3[5];
      auStack_88[6] = auVar3[6];
      auStack_88[7] = auVar3[7];
      FStack_c8.StatData.Pad[0] = auStack_88[0];
      FStack_c8.StatData.Pad[1] = auStack_88[1];
      FStack_c8.StatData.Pad[2] = auStack_88[2];
      FStack_c8.StatData.Pad[3] = auStack_88[3];
      FStack_c8.StatData.Pad[4] = auStack_88[4];
      FStack_c8.StatData.Pad[5] = auStack_88[5];
      FStack_c8.StatData.Pad[6] = auStack_88[6];
      FStack_c8.StatData.Pad[7] = auStack_88[7];
      FStack_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
      FStack_c8.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      auStack_88 = auVar4;
      FThreadStats::AddStatMessage(pFVar11,&FStack_c8);
      FStatsTrace::Add((FName *)&FStack_d8,-(longlong)auVar3);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  if (pvStack_90 != (void *)0x0) {
    FMemory::Free(pvStack_90);
  }
  auVar3 = auStack_a0;
  if (auStack_a0 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar9 = ::FName::FName((FName *)&FStack_d8,"STAT_NavigationMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar9,
                          L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                          false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar10;
    FStack_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      auVar4 = auStack_a0;
      FStack_c8.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      auStack_a0[0] = auVar3[0];
      auStack_a0[1] = auVar3[1];
      auStack_a0[2] = auVar3[2];
      auStack_a0[3] = auVar3[3];
      auStack_a0[4] = auVar3[4];
      auStack_a0[5] = auVar3[5];
      auStack_a0[6] = auVar3[6];
      auStack_a0[7] = auVar3[7];
      FStack_c8.StatData.Pad[0] = auStack_a0[0];
      FStack_c8.StatData.Pad[1] = auStack_a0[1];
      FStack_c8.StatData.Pad[2] = auStack_a0[2];
      FStack_c8.StatData.Pad[3] = auStack_a0[3];
      FStack_c8.StatData.Pad[4] = auStack_a0[4];
      FStack_c8.StatData.Pad[5] = auStack_a0[5];
      FStack_c8.StatData.Pad[6] = auStack_a0[6];
      FStack_c8.StatData.Pad[7] = auStack_a0[7];
      FStack_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
      FStack_c8.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      auStack_a0 = auVar4;
      FThreadStats::AddStatMessage(pFVar11,&FStack_c8);
      FStatsTrace::Add((FName *)&FStack_d8,-(longlong)auVar3);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  if (pvStack_a8 != (void *)0x0) {
    FMemory::Free(pvStack_a8);
  }
  return;
}

// FindInclusionBoundEncapsulatingBox @ 146e54d50

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

int __thiscall
FRecastNavMeshGenerator::FindInclusionBoundEncapsulatingBox
          (FRecastNavMeshGenerator *this,TBox<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  
  uVar13 = 0;
  if (0 < *(int *)&(this->InclusionBounds).field_0x10) {
    lVar12 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar13 < *(int *)&(this->InclusionBounds).field_0x10) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        iVar11 = (*pcVar8)();
        return iVar11;
      }
      lVar7 = *(longlong *)&this->InclusionBounds;
      dVar1 = (param_1->Min).field0_0x0._s_0.X;
      if ((*(double *)(lVar12 + lVar7) <= dVar1) &&
         (dVar2 = *(double *)(lVar12 + 0x18 + lVar7), dVar1 <= dVar2)) {
        dVar1 = (param_1->Min).field0_0x0._s_0.Y;
        dVar3 = *(double *)(lVar12 + 8 + lVar7);
        if ((dVar3 <= dVar1) && (dVar4 = *(double *)(lVar12 + 0x20 + lVar7), dVar1 <= dVar4)) {
          dVar1 = (param_1->Min).field0_0x0._s_0.Z;
          dVar5 = *(double *)(lVar12 + 0x10 + lVar7);
          if ((((((dVar5 <= dVar1) && (dVar6 = *(double *)(lVar12 + 0x28 + lVar7), dVar1 <= dVar6))
                && (dVar1 = (param_1->Max).field0_0x0._s_0.X, *(double *)(lVar12 + lVar7) <= dVar1))
               && ((dVar1 <= dVar2 && (dVar1 = (param_1->Max).field0_0x0._s_0.Y, dVar3 <= dVar1))))
              && (dVar1 <= dVar4)) &&
             ((dVar1 = (param_1->Max).field0_0x0._s_0.Z, dVar5 <= dVar1 && (dVar1 <= dVar6)))) {
            return uVar13;
          }
        }
      }
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 0x38;
    } while ((int)uVar13 < *(int *)&(this->InclusionBounds).field_0x10);
  }
  return -1;
}

// GatherGeometryOnGameThread @ 146e55d30

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

bool __thiscall FRecastNavMeshGenerator::GatherGeometryOnGameThread(FRecastNavMeshGenerator *this)

{
  if ((this->DestNavMesh != (ARecastNavMesh *)0x0) &&
     (this->DestNavMesh->bDoFullyAsyncNavDataGathering != 0)) {
    return false;
  }
  return true;
}

// GetDebugGeometry @ 146e5b970

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __cdecl
FRecastNavMeshGenerator::GetDebugGeometry(FNavigationRelevantData *param_1,FMesh *param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  TVector<double> *pTVar6;
  FScriptContainerElement *pFVar7;
  size_t _Size;
  int iVar8;
  double *pdVar9;
  TVector<float>_u_0 local_48;
  TVector<float>_u_0 local_3c;
  TVector<double> local_30;
  
  lVar3 = *(longlong *)&param_1->CollisionData;
  if (lVar3 != 0) {
    iVar8 = *(int *)(lVar3 + 4);
    if ((iVar8 != 0) && (*(int *)(lVar3 + 8) != 0)) {
      iVar4 = *(int *)(lVar3 + 8) * 3;
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x58,4,iVar8,(ForAnyElementType *)param_2,&(param_2->Vertices).ArrayNum,
                         &(param_2->Vertices).ArrayMax);
      memset((param_2->Vertices).AllocatorInstance.Data + (longlong)iVar5 * 0x58,0,
             (longlong)iVar8 * 0x58);
      pdVar9 = (double *)(lVar3 + 0x30);
      iVar8 = 0;
      pFVar7 = (param_2->Vertices).AllocatorInstance.Data;
      if (0 < *(int *)(lVar3 + 4)) {
        do {
          pTVar6 = Recast2UnrealPoint(&local_30,pdVar9);
          dVar1 = (pTVar6->field0_0x0)._s_0.Y;
          dVar2 = (pTVar6->field0_0x0)._s_0.Z;
          *(float *)pFVar7 = (float)(pTVar6->field0_0x0)._s_0.X;
          *(float *)(pFVar7 + 4) = (float)dVar1;
          *(float *)(pFVar7 + 8) = (float)dVar2;
          local_48._0_8_ = 0x3f800000;
          local_48._s_0.Z = 0.0;
          FPackedNormal::FPackedNormal
                    ((FPackedNormal *)(pFVar7 + 0x4c),(TVector<float> *)&local_48._s_0);
          local_3c._0_8_ = 0;
          local_3c._s_0.Z = 1.0;
          FPackedNormal::FPackedNormal
                    ((FPackedNormal *)(pFVar7 + 0x50),(TVector<float> *)&local_3c._s_0);
          *(undefined4 *)(pFVar7 + 0x54) = 0xffffffff;
          iVar8 = iVar8 + 1;
          pFVar7[0x53] = (FScriptContainerElement)0x7f;
          pdVar9 = pdVar9 + 3;
          ((TVector2<float>_u_0 *)(pFVar7 + 0xc))->_s_0 =
               (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          ((TVector2<float>_u_0 *)(pFVar7 + 0x14))->_s_0 =
               (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          ((TVector2<float>_u_0 *)(pFVar7 + 0x1c))->_s_0 =
               (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          ((TVector2<float>_u_0 *)(pFVar7 + 0x24))->_s_0 =
               (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          ((TVector2<float>_u_0 *)(pFVar7 + 0x2c))->_s_0 =
               (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          ((TVector2<float>_u_0 *)(pFVar7 + 0x34))->_s_0 =
               (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          ((TVector2<float>_u_0 *)(pFVar7 + 0x3c))->_s_0 =
               (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          ((TVector2<float>_u_0 *)(pFVar7 + 0x44))->_s_0 =
               (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          pFVar7 = pFVar7 + 0x58;
        } while (iVar8 < *(int *)(lVar3 + 4));
      }
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar4,&(param_2->Indices).AllocatorInstance,
                         &(param_2->Indices).ArrayNum,&(param_2->Indices).ArrayMax);
      _Size = (longlong)iVar4 << 2;
      memset((param_2->Indices).AllocatorInstance.Data + (longlong)iVar8 * 4,0,_Size);
      memcpy((param_2->Indices).AllocatorInstance.Data,
             (void *)(lVar3 + ((longlong)(*(int *)(lVar3 + 4) * 3) + 6) * 8),_Size);
    }
  }
  return;
}

// GetDirtyTilesCount @ 146e5bb80

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

int __thiscall
FRecastNavMeshGenerator::GetDirtyTilesCount(FRecastNavMeshGenerator *this,TBox<double> *param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 local_res10 [8];
  FRcTileBox local_38;
  
  if (param_1->IsValid == '\0') {
    bVar2 = `FRecastNavMeshGenerator::GetDirtyTilesCount'::__l3::<lambda_1>::operator()(local_res10)
    ;
    if (!bVar2) {
      return 0;
    }
  }
  FRcTileBox::FRcTileBox
            (&local_38,param_1,&this->RcNavMeshOrigin,
             (double)(int)(this->Config)._padding_ * (double)(this->Config)._padding_);
  iVar1 = *(int *)&(this->PendingDirtyTiles).field_0x10;
  iVar6 = 0;
  piVar3 = *(int **)&this->PendingDirtyTiles;
  piVar4 = piVar3 + (longlong)iVar1 * 0xe;
  while( true ) {
    if (*(int *)&(this->PendingDirtyTiles).field_0x10 != iVar1) {
      `TCheckedPointerIterator<FPendingTileElement_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (piVar3 == piVar4) break;
    if (((*piVar3 < local_38.XMin) || (local_38.XMax < *piVar3)) ||
       ((piVar3[1] < local_38.YMin || (local_38.YMax < piVar3[1])))) {
      piVar3 = piVar3 + 0xe;
    }
    else {
      iVar6 = iVar6 + 1;
      piVar3 = piVar3 + 0xe;
    }
  }
  iVar1 = *(int *)&(this->RunningDirtyTiles).field_0x10;
  iVar5 = 0;
  piVar4 = *(int **)&this->RunningDirtyTiles;
  piVar3 = piVar4 + (longlong)iVar1 * 6;
  while( true ) {
    if (*(int *)&(this->RunningDirtyTiles).field_0x10 != iVar1) {
      `TCheckedPointerIterator<TRunningTileElement<FRecastTileGeneratorWrapper>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (piVar4 == piVar3) break;
    if ((((*piVar4 < local_38.XMin) || (local_38.XMax < *piVar4)) || (piVar4[1] < local_38.YMin)) ||
       (local_38.YMax < piVar4[1])) {
      piVar4 = piVar4 + 6;
    }
    else {
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 6;
    }
  }
  return iVar5 + iVar6;
}

// GetNumRemaningBuildTasks @ 146e5d020

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

int __thiscall FRecastNavMeshGenerator::GetNumRemaningBuildTasks(FRecastNavMeshGenerator *this)

{
  return (uint)((this->SyncTimeSlicedData).TileGeneratorSync.Object != (FRecastTileGenerator *)0x0)
         + *(int *)&(this->RunningDirtyTiles).field_0x10 +
         *(int *)&(this->PendingDirtyTiles).field_0x10;
}

// GetNumRunningBuildTasks @ 146e5d040

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

int __thiscall FRecastNavMeshGenerator::GetNumRunningBuildTasks(FRecastNavMeshGenerator *this)

{
  return (uint)((this->SyncTimeSlicedData).TileGeneratorSync.Object != (FRecastTileGenerator *)0x0)
         + *(int *)&(this->RunningDirtyTiles).field_0x10;
}

// GetSeedLocations @ 146e5d550

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FRecastNavMeshGenerator::GetSeedLocations
          (FRecastNavMeshGenerator *this,UWorld *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  UObject *pUVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UObject *pUVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 local_58;
  undefined8 uStack_50;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_10;
  
  UWorld::GetPlayerControllerIterator(param_1,&local_48);
  do {
    iVar8 = local_48.Index;
    pTVar5 = local_48.Container;
    if (local_48.Index < 0) {
      return;
    }
    if ((local_48.Container)->ArrayNum <= local_48.Index) {
      return;
    }
    uVar7 = 0;
    if (local_48.Index < (local_48.Container)->ArrayNum) {
      uVar7 = (uint)~local_48.Index >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((pTVar5->AllocatorInstance).Data + (longlong)iVar8 * 8));
    if (pUVar9 != (UObject *)0x0) {
      pUVar1 = *(UObject **)&pUVar9[0x13].field_0x18;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar1 == (UObject *)0x0) goto LAB_146e5d739;
        UE::GC::MarkAsReachable(pUVar1);
      }
      if (pUVar1 != (UObject *)0x0) {
        pUVar9 = *(UObject **)&pUVar9[0x13].field_0x18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar9);
        }
        lVar2 = *(longlong *)(pUVar9 + 0xb);
        if (lVar2 == 0) {
          uVar10 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar11 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        }
        else {
          local_38 = *(undefined4 *)(lVar2 + 0x210);
          uStack_34 = *(undefined4 *)(lVar2 + 0x214);
          uStack_30 = *(undefined4 *)(lVar2 + 0x218);
          uStack_2c = *(undefined4 *)(lVar2 + 0x21c);
          local_28 = *(undefined8 *)(lVar2 + 0x220);
          uVar10 = (undefined4)local_28;
          uVar11 = (undefined4)((ulonglong)local_28 >> 0x20);
          uVar12 = local_38;
          uVar13 = uStack_34;
          uVar14 = uStack_30;
          uVar15 = uStack_2c;
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        local_58 = CONCAT44(uVar13,uVar12);
        uStack_50 = CONCAT44(uVar15,uVar14);
        local_10 = CONCAT44(uVar11,uVar10);
        if (((pFVar3 <= (FScriptContainerElement *)&local_58) &&
            ((FScriptContainerElement *)&local_58 < pFVar3 + (longlong)param_2->ArrayMax * 0x10)) &&
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
        iVar8 = param_2->ArrayNum;
        if (iVar8 == param_2->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar8 + 1;
        pFVar3 = (param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
        *(undefined8 *)pFVar3 = local_58;
        *(undefined8 *)(pFVar3 + 8) = uStack_50;
      }
    }
LAB_146e5d739:
    local_48.Index = local_48.Index + 1;
  } while( true );
}

// GrabDebugSnapshot @ 146e5e950

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
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
FRecastNavMeshGenerator::GrabDebugSnapshot
          (FRecastNavMeshGenerator *this,FVisualLogEntry *param_1,TBox<double> *param_2,
          FName *param_3,Type param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  ARecastNavMesh *pAVar5;
  code *pcVar6;
  double dVar7;
  Type TVar8;
  Type TVar9;
  bool bVar10;
  uint uVar11;
  UWorld *pUVar12;
  UClass *pUVar13;
  UNavigationSystemBase *pUVar14;
  uint uVar15;
  UNavigationSystemBase *pUVar16;
  UNavigationSystemBase *pUVar17;
  FObjectPtr_u_0 *this_00;
  UNavigationSystemBase *pUVar18;
  TArray<int,TSizedDefaultAllocator<32>_> local_f0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_e0;
  <lambda_1> local_d0;
  TVector4<double>_u_0 local_98;
  double local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  
  pUVar12 = AActor::GetWorld((AActor *)this->DestNavMesh);
  pUVar14 = (UNavigationSystemBase *)0x0;
  pUVar16 = pUVar14;
  pUVar17 = pUVar14;
  if (pUVar12 == (UWorld *)0x0) goto LAB_146e5e9d2;
  pUVar16 = (pUVar12->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar16 == (UNavigationSystemBase *)0x0) {
LAB_146e5e9bb:
    pUVar16 = pUVar14;
  }
  else {
    pUVar13 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar4 = (int)pUVar13->_padding_;
    if ((*(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38) < iVar4) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar13->_padding_)) goto LAB_146e5e9bb;
  }
  if (pUVar16 != (UNavigationSystemBase *)0x0) {
    pUVar17 = *(UNavigationSystemBase **)&pUVar16[0x16].field_0x18;
  }
LAB_146e5e9d2:
  dVar7 = __real_3fe0000000000000;
  if (param_1 != (FVisualLogEntry *)0x0) {
    if (pUVar17 == (UNavigationSystemBase *)0x0) {
      if (1 < (byte)LogNavigation._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
        return;
      }
    }
    else {
      TVar8 = All;
      if ((byte)(param_4 + Fatal) < All) {
        TVar8 = param_4 + Fatal;
      }
      TVar9 = NoLogging;
      if (TVar8 != NoLogging) {
        TVar9 = TVar8;
      }
      pUVar18 = pUVar14;
      if (0 < *(int *)&pUVar16[5].field_0x20) {
        do {
          uVar15 = (uint)pUVar14;
          local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e0.ArrayNum = 0;
          local_e0.ArrayMax = 0;
          local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          uVar11 = 0;
          if ((int)uVar15 < *(int *)&pUVar16[5].field_0x20) {
            uVar11 = ~uVar15 >> 0x1f;
          }
          local_f0.ArrayNum = 0;
          local_f0.ArrayMax = 0;
          if ((uVar11 == 0) &&
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
          this_00 = (FObjectPtr_u_0 *)(&pUVar18->field_0x0 + *(longlong *)&pUVar16[5].field_0x18);
          if (this_00->Handle != (UObject *)0x0) {
            pUVar13 = Z_Construct_UClass_ARecastNavMesh_NoRegister();
            bVar10 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar13);
            if ((bVar10) &&
               (pAVar5 = (ARecastNavMesh *)this_00->Handle, pAVar5 != (ARecastNavMesh *)0x0)) {
              dVar1 = (param_2->Min).field0_0x0._s_0.X;
              dVar2 = (param_2->Min).field0_0x0._s_0.Y;
              dVar3 = (param_2->Min).field0_0x0._s_0.Z;
              local_d0.Indices = &local_f0;
              local_d0.CoordBuffer = &local_e0;
              local_78 = ((param_2->Max).field0_0x0._s_0.X - dVar1) * dVar7;
              local_70 = ((param_2->Max).field0_0x0._s_0.Y - dVar2) * dVar7;
              local_d0.bUseVirtualGeometryFilteringAndDirtying =
                   pAVar5->bUseVirtualGeometryFilteringAndDirtying;
              local_d0.LogVerbosity = param_4;
              local_68 = ((param_2->Max).field0_0x0._s_0.Z - dVar3) * dVar7;
              local_98._s_0.X = dVar1 + local_78;
              local_98._s_0.Y = dVar2 + local_70;
              local_98._s_0.W = 0.0;
              local_98._s_0.Z = dVar3 + local_68;
              local_60 = 0;
              local_d0.__this = this;
              local_d0.NavData = pAVar5;
              local_d0.Snapshot = param_1;
              local_d0.CategoryName = param_3;
              local_d0.NavAreaVerbosity = TVar9;
              TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics>::
              FindElementsWithBoundsTestInternal<_FRecastNavMeshGenerator::GrabDebugSnapshot_::__l31::<lambda_1>_>
                        ((TOctree2<FNavigationOctreeElement,FNavigationOctreeSemantics> *)
                         &pUVar17->field_0x10,0,(FOctreeNodeContext *)&pUVar17->field_0x10,
                         (FBoxCenterAndExtent *)&local_98._s_0,&local_d0);
            }
          }
          if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.AllocatorInstance.Data);
          }
          if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.AllocatorInstance.Data);
          }
          pUVar14 = (UNavigationSystemBase *)(ulonglong)(uVar15 + 1);
          pUVar18 = (UNavigationSystemBase *)&pUVar18->field_0x8;
        } while ((int)(uVar15 + 1) < *(int *)&pUVar16[5].field_0x20);
      }
    }
  }
  return;
}

// GrowBoundingBox @ 146e5ec70

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

TBox<double> * __thiscall
FRecastNavMeshGenerator::GrowBoundingBox
          (FRecastNavMeshGenerator *this,TBox<double> *__return_storage_ptr__,TBox<double> *param_1,
          bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  
  if (param_2) {
    fVar12 = (this->Config).AgentHeight;
  }
  else {
    fVar12 = 0.0;
  }
  dVar1 = (this->BBoxGrowthHigh).field0_0x0._s_0.X;
  dVar2 = (param_1->Min).field0_0x0._s_0.Z;
  dVar3 = (this->BBoxGrowthLow).field0_0x0._s_0.Z;
  dVar9 = (this->BBoxGrowthHigh).field0_0x0._s_0.Y;
  dVar10 = (this->BBoxGrowthHigh).field0_0x0._s_0.Z;
  dVar11 = (param_1->Max).field0_0x0._s_0.Y;
  dVar8 = (param_1->Max).field0_0x0._s_0.Z;
  dVar4 = (param_1->Min).field0_0x0._s_0.Y;
  dVar5 = (param_1->Max).field0_0x0._s_0.X;
  dVar6 = (this->BBoxGrowthLow).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X =
       (param_1->Min).field0_0x0._s_0.X - (this->BBoxGrowthLow).field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar4 - dVar6;
  dVar8 = dVar8 + dVar10;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (dVar2 - dVar3) - (double)fVar12;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1 + dVar5;
  auVar7._8_4_ = SUB84(dVar8,0);
  auVar7._0_8_ = dVar11 + dVar9;
  auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = auVar7;
  __return_storage_ptr__->IsValid = '\x01';
  return __return_storage_ptr__;
}

// GrowDirtyBounds @ 146e5ed10

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

TBox<double> * __thiscall
FRecastNavMeshGenerator::GrowDirtyBounds
          (FRecastNavMeshGenerator *this,TBox<double> *__return_storage_ptr__,TBox<double> *param_1,
          bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  
  if (param_2) {
    fVar12 = (this->Config).AgentHeight;
  }
  else {
    fVar12 = 0.0;
  }
  dVar1 = (this->BBoxGrowthLow).field0_0x0._s_0.X;
  dVar2 = (param_1->Min).field0_0x0._s_0.Z;
  dVar3 = (this->BBoxGrowthHigh).field0_0x0._s_0.Z;
  dVar9 = (this->BBoxGrowthLow).field0_0x0._s_0.Y;
  dVar10 = (this->BBoxGrowthLow).field0_0x0._s_0.Z;
  dVar11 = (param_1->Max).field0_0x0._s_0.Y;
  dVar8 = (param_1->Max).field0_0x0._s_0.Z;
  dVar4 = (param_1->Min).field0_0x0._s_0.Y;
  dVar5 = (param_1->Max).field0_0x0._s_0.X;
  dVar6 = (this->BBoxGrowthHigh).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X =
       (param_1->Min).field0_0x0._s_0.X - (this->BBoxGrowthHigh).field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar4 - dVar6;
  dVar8 = dVar8 + dVar10;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (dVar2 - dVar3) - (double)fVar12;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1 + dVar5;
  auVar7._8_4_ = SUB84(dVar8,0);
  auVar7._0_8_ = dVar11 + dVar9;
  auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = auVar7;
  __return_storage_ptr__->IsValid = '\x01';
  return __return_storage_ptr__;
}

// HasDirtyTiles @ 146e5ee00

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

bool __thiscall
FRecastNavMeshGenerator::HasDirtyTiles(FRecastNavMeshGenerator *this,TBox<double> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 local_res10 [8];
  FRcTileBox local_28;
  
  if (param_1->IsValid == '\0') {
    local_res10[0] = 0;
    bVar3 = `FRecastNavMeshGenerator::HasDirtyTiles'::__l3::<lambda_1>::operator()(local_res10);
    if (!bVar3) {
      return false;
    }
  }
  if (((*(int *)&(this->PendingDirtyTiles).field_0x10 < 1) &&
      (*(int *)&(this->RunningDirtyTiles).field_0x10 < 1)) &&
     ((this->SyncTimeSlicedData).TileGeneratorSync.Object == (FRecastTileGenerator *)0x0)) {
    return false;
  }
  FRcTileBox::FRcTileBox
            (&local_28,param_1,&this->RcNavMeshOrigin,
             (double)(int)(this->Config)._padding_ * (double)(this->Config)._padding_);
  uVar6 = 0;
  uVar7 = uVar6;
  uVar8 = uVar6;
  while( true ) {
    iVar5 = (int)uVar7;
    uVar7 = uVar6;
    if (*(int *)&(this->PendingDirtyTiles).field_0x10 <= iVar5) {
      while( true ) {
        iVar5 = (int)uVar6;
        if (*(int *)&(this->RunningDirtyTiles).field_0x10 <= iVar5) {
          return false;
        }
        if ((iVar5 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) break;
        iVar1 = *(int *)(uVar7 + *(longlong *)&this->RunningDirtyTiles);
        if ((((local_28.XMin <= iVar1) && (iVar1 <= local_28.XMax)) &&
            (iVar1 = *(int *)(uVar7 + 4 + *(longlong *)&this->RunningDirtyTiles),
            local_28.YMin <= iVar1)) && (iVar1 <= local_28.YMax)) {
          return true;
        }
        uVar6 = (ulonglong)(iVar5 + 1);
        uVar7 = uVar7 + 0x18;
      }
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if ((iVar5 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar1 = *(int *)(uVar8 + *(longlong *)&this->PendingDirtyTiles);
    if (((local_28.XMin <= iVar1) && (iVar1 <= local_28.XMax)) &&
       ((iVar1 = *(int *)(uVar8 + 4 + *(longlong *)&this->PendingDirtyTiles), local_28.YMin <= iVar1
        && (iVar1 <= local_28.YMax)))) break;
    uVar7 = (ulonglong)(iVar5 + 1);
    uVar8 = uVar8 + 0x38;
  }
  return true;
}

// HasDirtyTiles @ 146e5efb0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

bool __thiscall FRecastNavMeshGenerator::HasDirtyTiles(FRecastNavMeshGenerator *this)

{
  if (((*(int *)&(this->PendingDirtyTiles).field_0x10 < 1) &&
      (*(int *)&(this->RunningDirtyTiles).field_0x10 < 1)) &&
     ((this->SyncTimeSlicedData).TileGeneratorSync.Object == (FRecastTileGenerator *)0x0)) {
    return false;
  }
  return true;
}

// Init @ 146e5f120

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

void __thiscall FRecastNavMeshGenerator::Init(FRecastNavMeshGenerator *this)

{
  ARecastNavMesh *pAVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  UWorld *pUVar6;
  UClass *pUVar7;
  TVector<double> *pTVar8;
  FRecastNavMeshCachedData *pFVar9;
  dtNavMeshParams *pdVar10;
  dtNavMesh *pdVar11;
  FTaskGraphInterface *pFVar12;
  dtMeshTile *pdVar13;
  int iVar14;
  uint uVar16;
  int iVar18;
  int iVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  uint uVar24;
  undefined1 auStackY_318 [32];
  int local_2c8;
  int local_2c4;
  FString local_2c0;
  TVector<double>_u_0 local_2b0;
  FName local_298;
  FString local_290;
  double local_280;
  double dStack_278;
  double local_270;
  double local_268;
  double dStack_260;
  double local_258;
  double local_250;
  double dStack_248;
  double local_240;
  double local_238;
  double dStack_230;
  double local_228;
  double local_220;
  double dStack_218;
  double local_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  TVector<double> local_1f0;
  undefined1 local_1d8 [320];
  void *local_98;
  undefined4 local_90;
  double local_78 [3];
  ulonglong local_60;
  UNavigationSystemBase *pUVar15;
  UNavigationSystemBase *pUVar17;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_318;
  if ((this->DestNavMesh == (ARecastNavMesh *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestNavMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                         ,0x14a6,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar6 = AActor::GetWorld((AActor *)this->DestNavMesh);
  pUVar15 = (UNavigationSystemBase *)0x0;
  iVar14 = 0;
  pUVar17 = pUVar15;
  if (pUVar6 == (UWorld *)0x0) {
LAB_146e5f1e3:
    (this->SyncTimeSlicedData).bTimeSliceRegenActive = false;
  }
  else {
    pUVar17 = (pUVar6->NavigationSystem).field0_0x0.DebugPtr;
    if (pUVar17 == (UNavigationSystemBase *)0x0) {
LAB_146e5f1c8:
      pUVar17 = pUVar15;
    }
    else {
      pUVar7 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
      iVar5 = (int)pUVar7->_padding_;
      if ((*(int *)(*(longlong *)&pUVar17->field_0x10 + 0x38) < iVar5) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar17->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar7->_padding_)) goto LAB_146e5f1c8;
    }
    if (pUVar17 == (UNavigationSystemBase *)0x0) goto LAB_146e5f1e3;
    (this->SyncTimeSlicedData).TimeSliceManager =
         (FNavRegenTimeSliceManager *)&pUVar17[0x23].field_0x18;
  }
  (**(code **)(this->_padding_ + 0x88))(this,&this->Config);
  iVar5 = (int)(this->Config)._padding_;
  iVar18 = *(int *)((longlong)&(this->Config)._padding_ + 4);
  dVar23 = (double)(this->Config)._padding_;
  dVar21 = (double)iVar5;
  dVar22 = (double)iVar18;
  if (UE::NavMesh::Private::bUseTightBoundExpansion == false) {
    if (iVar5 < iVar18) {
      iVar5 = iVar18;
    }
    local_220 = (dVar21 + dVar21) * dVar23;
    local_208 = (dVar22 + dVar22) * dVar23;
    dVar21 = ((double)iVar5 + (double)iVar5) * dVar23;
    (this->BBoxGrowth).field0_0x0._s_0.X = dVar21;
    (this->BBoxGrowth).field0_0x0._s_0.Y = dVar21;
    (this->BBoxGrowthLow).field0_0x0._s_0.X = local_220;
    (this->BBoxGrowthLow).field0_0x0._s_0.Y = local_220;
    (this->BBoxGrowthLow).field0_0x0._s_0.Z = local_220;
    (this->BBoxGrowthHigh).field0_0x0._s_0.X = local_208;
    (this->BBoxGrowthHigh).field0_0x0._s_0.Y = local_208;
    (this->BBoxGrowthHigh).field0_0x0._s_0.Z = local_208;
    local_238 = dVar21;
    dStack_230 = dVar21;
    local_228 = dVar21;
    dStack_218 = local_220;
    local_210 = local_220;
    dStack_200 = local_208;
    local_1f8 = local_208;
  }
  else {
    local_280 = dVar23 * dVar21;
    if (iVar5 < iVar18) {
      iVar5 = iVar18;
    }
    local_268 = dVar23 * dVar22;
    (this->BBoxGrowthLow).field0_0x0._s_0.X = local_280;
    (this->BBoxGrowthLow).field0_0x0._s_0.Y = local_280;
    (this->BBoxGrowthLow).field0_0x0._s_0.Z = dVar23;
    (this->BBoxGrowthHigh).field0_0x0._s_0.X = local_268;
    (this->BBoxGrowthHigh).field0_0x0._s_0.Y = local_268;
    (this->BBoxGrowthHigh).field0_0x0._s_0.Z = dVar23;
    dVar21 = (double)iVar5 * dVar23;
    (this->BBoxGrowth).field0_0x0._s_0.X = dVar21;
    (this->BBoxGrowth).field0_0x0._s_0.Y = dVar21;
    dStack_278 = local_280;
    local_270 = dVar23;
    dStack_260 = local_268;
    local_258 = dVar23;
    local_250 = dVar21;
    dStack_248 = dVar21;
    local_240 = dVar21;
  }
  pAVar1 = this->DestNavMesh;
  (this->BBoxGrowth).field0_0x0._s_0.Z = dVar21;
  pTVar8 = Unreal2RecastPoint(&local_1f0,&pAVar1->NavMeshOriginOffset);
  pAVar1 = this->DestNavMesh;
  dVar23 = (pTVar8->field0_0x0)._s_0.Y;
  (this->RcNavMeshOrigin).field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
  (this->RcNavMeshOrigin).field0_0x0._s_0.Y = dVar23;
  (this->RcNavMeshOrigin).field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
  pFVar9 = FRecastNavMeshCachedData::Construct((FRecastNavMeshCachedData *)local_1d8,pAVar1);
  FRecastNavMeshCachedData::operator=(&this->AdditionalCachedData,pFVar9);
  local_90 = 0;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_1d8 + 0x100));
  ResolveGeneratedLinkAreas(this,&this->Config);
  if ((((this->Config).MaxPolysPerTile < 1) &&
      (bVar4 = ARecastNavMesh::HasValidNavmesh(this->DestNavMesh), bVar4)) &&
     (pdVar10 = dtNavMesh::getParams(this->DestNavMesh->RecastNavMeshImpl->DetourNavMesh),
     pdVar10 != (dtNavMeshParams *)0x0)) {
    (this->Config).MaxPolysPerTile = pdVar10->maxPolys;
  }
  pdVar11 = ARecastNavMesh::GetRecastMesh(this->DestNavMesh);
  if (((pdVar11 != (dtNavMesh *)0x0) &&
      (pdVar11 = ARecastNavMesh::GetRecastMesh(this->DestNavMesh),
      (pdVar11->m_params).resolutionParams[1].bvQuantFactor == 0.0)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4457677437609710814>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                         ,0x14de,
                         "DestNavMesh->GetRecastMesh() == nullptr || DestNavMesh->GetRecastMesh()->getBVQuantFactor((unsigned char)ENavigationDataResolution::Default) != 0"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UpdateNavigationBounds(this);
  pFVar12 = FTaskGraphInterface::Get();
  iVar5 = (**(code **)((longlong)*pFVar12 + 0x20))(pFVar12);
  if (this->DestNavMesh == (ARecastNavMesh *)0x0) {
    iVar18 = 0x7fffffff;
  }
  else {
    iVar18 = this->DestNavMesh->MaxSimultaneousTileGenerationJobsCount;
  }
  iVar19 = 1;
  if (1 < iVar5 * 2) {
    iVar19 = iVar5 * 2;
  }
  if (iVar19 < iVar18) {
    iVar18 = iVar19;
  }
  this->MaxTileGeneratorTasks = iVar18;
  if (4 < (byte)LogNavigation._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
  }
  this->NumActiveTiles = 0;
  bVar4 = ARecastNavMesh::IsVoxelCacheEnabled();
  if (bVar4) {
    iVar5 = (int)(this->Config)._padding_ + (int)(this->Config)._padding_ +
            *(int *)((longlong)&(this->Config)._padding_ + 4);
    dVar23 = (double)(this->Config)._padding_;
    dVar21 = (double)(this->Config)._padding_;
    if (VoxelCacheContext.RasterizeHF == (rcHeightfield *)0x0) {
      local_78[0] = 0.0;
      local_78[1] = 0.0;
      local_78[2] = 0.0;
      VoxelCacheContext.RasterizeHF = rcAllocHeightfield();
      rcCreateHeightfield((rcContext *)0x0,VoxelCacheContext.RasterizeHF,iVar5,iVar5,local_78,
                          local_78,dVar21,dVar23,true);
    }
  }
  this->bInitialized = 1;
  local_2c8 = 0;
  local_2c4 = 0;
  bVar4 = ARecastNavMesh::HasValidNavmesh(this->DestNavMesh);
  if (bVar4) {
    pAVar1 = this->DestNavMesh;
    pUVar6 = AActor::GetWorld((AActor *)pAVar1);
    bVar4 = UWorld::IsGameWorld(pUVar6);
    if ((bVar4) && (*(char *)((longlong)&pAVar1->_padding_ + 4) != '\x02')) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    pdVar10 = dtNavMesh::getParams(this->DestNavMesh->RecastNavMeshImpl->DetourNavMesh);
    if (pdVar10 != (dtNavMeshParams *)0x0) {
      if (bVar4) {
        iVar5 = pdVar10->maxPolys;
LAB_146e5f731:
        (this->Config).MaxPolysPerTile = iVar5;
        pdVar11 = this->DestNavMesh->RecastNavMeshImpl->DetourNavMesh;
        if ((pdVar11 != (dtNavMesh *)0x0) &&
           (iVar5 = dtNavMesh::getMaxTiles(pdVar11), pUVar17 = pUVar15, 0 < iVar5)) {
          do {
            pdVar13 = dtNavMesh::getTile(pdVar11,(int)pUVar17);
            if ((pdVar13 != (dtMeshTile *)0x0) &&
               ((pdVar13->header != (dtMeshHeader *)0x0 && (0 < pdVar13->dataSize)))) {
              pUVar15 = (UNavigationSystemBase *)(ulonglong)((int)pUVar15 + 1);
            }
            iVar14 = (int)pUVar15;
            uVar16 = (int)pUVar17 + 1;
            pUVar17 = (UNavigationSystemBase *)(ulonglong)uVar16;
            iVar5 = dtNavMesh::getMaxTiles(pdVar11);
          } while ((int)uVar16 < iVar5);
        }
        this->NumActiveTiles = iVar14;
        return;
      }
      dVar23 = (double)(int)(this->Config)._padding_ * (double)(this->Config)._padding_;
      if ((dVar23 == pdVar10->tileHeight) && (dVar23 == pdVar10->tileWidth)) {
        Recast2UnrealPoint((TVector<double> *)&local_2b0._s_0,pdVar10->orig);
        dVar21 = FGenericPlatformMath::Fmod(local_2b0._s_0.Z,dVar23);
        dVar22 = FGenericPlatformMath::Fmod(local_2b0._s_0.Y,dVar23);
        dVar23 = FGenericPlatformMath::Fmod(local_2b0._s_0.X,dVar23);
        if ((__real_3f1a36e2e0000000 <
             (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
           ((uVar16 = SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
            uVar24 = (uint)((ulonglong)dVar22 >> 0x20) &
                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
            __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar24,uVar16) &&
            (double)CONCAT44(uVar24,uVar16) != __real_3f1a36e2e0000000 ||
            (uVar16 = SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
            uVar24 = (uint)((ulonglong)dVar21 >> 0x20) &
                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
            __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar24,uVar16) &&
            (double)CONCAT44(uVar24,uVar16) != __real_3f1a36e2e0000000)))) {
          if (2 < (byte)LogNavigation._0_1_) {
            ::FString::PrintfImpl(&local_290,L"X=%3.3f Y=%3.3f Z=%3.3f");
            if (this->DestNavMesh == (ARecastNavMesh *)0x0) {
              ::FString::FString(&local_2c0,L"None");
            }
            else {
              local_298 = (FName)this->DestNavMesh->_padding_;
              ::FName::ToString(&local_298,&local_2c0);
            }
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
            if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
            }
            if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_290.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          CalcNavMeshProperties(this,&local_2c8,&local_2c4);
          fVar20 = logf((float)pdVar10->maxTiles);
          fVar3 = __real_bf000000;
          iVar18 = -((int)ROUND(__real_bf000000 - fVar20 * __real_4038aa3b) >> 1);
          fVar20 = logf((float)local_2c8);
          iVar19 = -((int)ROUND(fVar3 - fVar20 * __real_4038aa3b) >> 1);
          if ((iVar19 == iVar18) || ((byte)LogNavigation._0_1_ < 3)) {
            UE::NavMesh::Private::CheckTileIndicesInValidRange
                      (&this->InclusionBounds,this->DestNavMesh);
            iVar5 = local_2c4;
            if (iVar19 == iVar18) goto LAB_146e5f731;
          }
          else {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
            UE::NavMesh::Private::CheckTileIndicesInValidRange
                      (&this->InclusionBounds,this->DestNavMesh);
          }
        }
      }
    }
  }
  ConstructTiledNavMesh(this);
  if ((pUVar17 != (UNavigationSystemBase *)0x0) && ((pUVar17[2].field_0x20 & 1) == 0)) {
    MarkNavBoundsDirty(this);
  }
  return;
}

// IsAllowedToAddTileLayers @ 146e5fae0

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

bool __thiscall
FRecastNavMeshGenerator::IsAllowedToAddTileLayers
          (FRecastNavMeshGenerator *this,TIntPoint<int> param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UWorld *pUVar4;
  TIntPoint<int>_u_0 local_res10 [3];
  
  local_res10[0] = param_1.field0_0x0;
  if ((this->DestNavMesh == (ARecastNavMesh *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestNavMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                         ,0x1858,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = ARecastNavMesh::IsWorldPartitionedDynamicNavmesh(this->DestNavMesh);
  if ((bVar2) && (bVar2 = IsInActiveSet(this,(TIntPoint<int> *)&local_res10[0]._s_0), !bVar2)) {
    pUVar4 = AActor::GetWorld((AActor *)this->DestNavMesh);
    if (pUVar4 != (UWorld *)0x0) {
      pUVar4 = AActor::GetWorld((AActor *)this->DestNavMesh);
      bVar2 = UWorld::IsGameWorld(pUVar4);
      if (!bVar2) {
        return true;
      }
    }
    return false;
  }
  return true;
}

// IsBuildInProgressCheckDirty @ 146e5fb80

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

bool __thiscall FRecastNavMeshGenerator::IsBuildInProgressCheckDirty(FRecastNavMeshGenerator *this)

{
  if (((*(int *)&(this->RunningDirtyTiles).field_0x10 == 0) &&
      (*(int *)&(this->PendingDirtyTiles).field_0x10 == 0)) &&
     ((this->SyncTimeSlicedData).TileGeneratorSync.Object == (FRecastTileGenerator *)0x0)) {
    return false;
  }
  return true;
}

// IsGeneratingLinks @ 146e5fbd0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

bool __thiscall FRecastNavMeshGenerator::IsGeneratingLinks(FRecastNavMeshGenerator *this)

{
  if (((this->DestNavMesh != (ARecastNavMesh *)0x0) && (this->DestNavMesh->bGenerateNavLinks != 0))
     && (UE::NavMesh::Private::bAllowLinkGeneration)) {
    return true;
  }
  return false;
}

// IsInActiveSet @ 146e5fc00

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

bool __thiscall
FRecastNavMeshGenerator::IsInActiveSet(FRecastNavMeshGenerator *this,TIntPoint<int> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  if (this->bRestrictBuildingToActiveTiles == 0) {
    return true;
  }
  iVar9 = (param_1->field0_0x0)._s_0.X;
  uVar8 = (param_1->field0_0x0)._s_0.Y;
  uVar4 = iVar9 - uVar8 ^ uVar8 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - uVar8 ^ uVar4 << 8;
  uVar6 = (uVar8 - uVar4) - uVar3 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar6) - uVar3 ^ uVar6 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar6 ^ uVar4 << 0x10;
  uVar6 = (uVar6 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar6) - uVar3 ^ uVar6 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar6 ^ uVar4 << 10;
  if (*(int *)&(this->ActiveTileSet).Elements.field_0x8 !=
      *(int *)&(this->ActiveTileSet).Elements.field_0x34) {
    FVar5 = (this->ActiveTileSet).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->ActiveTileSet).Hash;
    }
    iVar7 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->ActiveTileSet).HashSize - 1U & ((uVar6 - uVar3) - uVar4 ^ uVar3 >> 0xf))
                    * 4);
    if (iVar7 != -1) {
      lVar1 = *(longlong *)&(this->ActiveTileSet).Elements;
      while( true ) {
        uVar2 = *(undefined8 *)(lVar1 + (longlong)iVar7 * 0x10);
        if (((int)uVar2 == iVar9) && ((uint)((ulonglong)uVar2 >> 0x20) == uVar8)) break;
        iVar7 = *(int *)(lVar1 + 8 + (longlong)iVar7 * 0x10);
        if (iVar7 == -1) {
          return false;
        }
      }
      if (iVar7 != -1) {
        return true;
      }
    }
  }
  return false;
}

// IsTileChanged @ 146e5fe00

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

bool __thiscall
FRecastNavMeshGenerator::IsTileChanged(FRecastNavMeshGenerator *this,FNavTileRef param_1)

{
  return false;
}

// IsTimeSliceRegenActive @ 146e5fed0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

bool __thiscall FRecastNavMeshGenerator::IsTimeSliceRegenActive(FRecastNavMeshGenerator *this)

{
  return (this->SyncTimeSlicedData).bTimeSliceRegenActive;
}

// LogDirtyAreas @ 146e5ff60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRecastNavMeshGenerator::LogDirtyAreas
          (FRecastNavMeshGenerator *this,UObject *param_1,
          TMap<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,0>_>
          *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  TMap<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ForAnyElementType this_00;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  FNavigationDirtyAreaDebugInformation *pFVar14;
  uint *puVar15;
  UObject *pUVar16;
  FNavigationDirtyArea *pFVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  FNavigationDirtyArea *pFVar19;
  undefined1 auStackY_208 [32];
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  ForAnyElementType local_1a0;
  undefined8 local_198;
  undefined1 local_190 [4];
  uint local_18c;
  UObject *local_188;
  FString local_180;
  TMap<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,0>_>
  *local_170;
  int iStack_168;
  uint uStack_164;
  undefined1 *local_160;
  undefined4 uStack_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int local_140;
  FNavigationDirtyArea *local_138;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  TMap<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,0>_>
  *local_128;
  FRecastNavMeshGenerator *local_120;
  FName local_118;
  FString local_110;
  TMap<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,0>_>
  *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  FString local_d0;
  FString local_c0;
  FNavigationDirtyAreaDebugInformation local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10;
  local_1a0.Data = (FScriptContainerElement *)0x0;
  local_198 = 0;
  iVar1 = *(int *)&param_2->field_0x28;
  iStack_168 = 0;
  uStack_164 = 1;
  local_150 = 0;
  iStack_154 = iStack_168;
  if (iVar1 != 0) {
    puVar15 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)pTVar18;
    }
    uVar12 = *puVar15;
    local_150 = 0;
    iStack_168 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)iStack_168;
      local_150 = local_150 + 0x20;
      iStack_168 = iStack_168 + 1;
      iStack_154 = iVar1;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_168) goto LAB_146e6002e;
      uVar12 = puVar15[lVar7 + 1];
    }
    uStack_164 = -uVar12 & uVar12;
    uVar8 = (ulonglong)uStack_164 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_18c = (uint)lVar7;
    iStack_154 = local_150 + -1 + local_18c;
    if (iVar1 < iStack_154) {
      iStack_154 = iVar1;
    }
  }
LAB_146e6002e:
  uVar12 = *(uint *)&param_2->field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_148 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_158 = 0xffffffff;
  TStack_f8._padding_ = CONCAT44(uStack_164,iStack_168);
  TStack_f8.CurrentBitIndex = iStack_154;
  TStack_f8.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar12 >> 5;
  TStack_f8._28_4_ = iStack_154;
  TStack_f8.BaseBitIndex = local_150;
  uStack_d8 = CONCAT44(uStack_144,iStack_148);
  local_188 = param_1;
  local_170 = param_2;
  local_160 = (undefined1 *)pTVar18;
  iStack_14c = iStack_154;
  local_130 = pTVar18;
  local_128 = param_2;
  local_120 = this;
  local_100 = param_2;
  TStack_f8.Array = pTVar18;
  if ((((int)uVar12 < 0) || (iVar1 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(uint *)&param_2->field_0x28;
  if (uVar12 != uVar2) {
    puVar13 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar13 = (undefined1 *)pTVar18;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar9 * 4);
    while (uVar12 == 0) {
      lVar7 = (longlong)iVar9;
      uVar11 = uVar11 + 0x20;
      iVar9 = iVar9 + 1;
      uVar12 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_146e60130;
      uVar12 = *(uint *)(puVar13 + lVar7 * 4 + 4);
    }
    uVar8 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_140 = (int)lVar7;
    uVar12 = local_140 + -1 + uVar11;
    if ((int)uVar2 < (int)uVar12) {
      uVar12 = uVar2;
    }
  }
LAB_146e60130:
  do {
    pTVar5 = local_100;
    if (*(int *)&local_100->field_0x8 - *(int *)&local_100->field_0x34 != (int)uStack_d8) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    lVar7 = (longlong)TStack_f8.CurrentBitIndex;
    if (((TStack_f8.CurrentBitIndex == uVar12) && (TStack_f8.Array == pTVar18)) &&
       (pTVar5 == param_2)) {
      uVar8 = (ulonglong)(int)(uint)local_198;
      local_18c = (uint)local_198;
      pFVar10 = local_1a0.Data + 8;
      pFVar17 = (FNavigationDirtyArea *)(local_1a0.Data + uVar8 * 0x58);
      pUVar16 = local_188;
      while( true ) {
        if ((uint)local_198 != (int)uVar8) {
          `TCheckedPointerIterator<`FRecastNavMeshGenerator::LogDirtyAreas'::__l2::FNavigationDirtyAreaDebugInformation,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_190);
        }
        pFVar19 = (FNavigationDirtyArea *)(pFVar10 + -8);
        if (pFVar19 == pFVar17) break;
        if (6 < (byte)LogNavigationDirtyArea._0_1_) {
          ::FString::PrintfImpl(&local_110,L"X=%3.3f Y=%3.3f");
          FNavigationDirtyArea::GetSourceDescription(pFVar19,&local_d0);
          if (local_120->DestNavMesh == (ARecastNavMesh *)0x0) {
            ::FString::FString(&local_180,L"None");
          }
          else {
            local_118 = (FName)local_120->DestNavMesh->_padding_;
            ::FName::ToString(&local_118,&local_180);
          }
          UE::Logging::Private::BasicLog<7>
                    (&::LOG_Static,(FLogCategoryBase *)&LogNavigationDirtyArea);
          if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.Data.AllocatorInstance.Data);
          }
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
          pUVar16 = local_188;
          if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Data.AllocatorInstance.Data);
            pUVar16 = local_188;
          }
        }
        if (FVisualLogger::bIsRecording != 0) {
          FNavigationDirtyArea::GetSourceDescription(pFVar19,&local_c0);
          FVisualLogger::BoxLogfImpl
                    (pUVar16,(FName *)&LogNavigationDirtyArea.field_0x4,All,(TBox<double> *)pFVar19,
                     &UE::Math::TMatrix<double>::Identity,&FColor::Purple,false,
                     L"Tiles %d (new: %d), Source: %s");
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
          }
        }
        uVar8 = (ulonglong)local_18c;
        pFVar10 = pFVar10 + 0x58;
      }
      DestructItems<_FRecastNavMeshGenerator::LogDirtyAreas_::__l2::FNavigationDirtyAreaDebugInformation,int>
                ((FNavigationDirtyAreaDebugInformation *)local_1a0.Data,(uint)local_198);
      if ((FNavigationDirtyAreaDebugInformation *)local_1a0.Data !=
          (FNavigationDirtyAreaDebugInformation *)0x0) {
        FMemory::Free(local_1a0.Data);
      }
      return;
    }
    lVar3 = *(longlong *)pTVar5;
    iVar1 = *(int *)(lVar3 + 0x40 + lVar7 * 0x50);
    pFVar17 = *(FNavigationDirtyArea **)(lVar3 + 0x38 + lVar7 * 0x50);
    pFVar19 = (FNavigationDirtyArea *)((longlong)iVar1 * 0x58 + (longlong)pFVar17);
    while( true ) {
      if (*(int *)(lVar3 + 0x40 + lVar7 * 0x50) != iVar1) {
        local_1a7[0] = 0;
        `TCheckedPointerIterator<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_1a7);
      }
      if (pFVar17 == pFVar19) break;
      pFVar14 = (FNavigationDirtyAreaDebugInformation *)
                (local_1a0.Data + (longlong)(int)(uint)local_198 * 0x58);
      this_00.Data = local_1a0.Data;
      local_138 = pFVar17;
      if ((FNavigationDirtyAreaDebugInformation *)local_1a0.Data != pFVar14) {
        do {
          bVar6 = `FRecastNavMeshGenerator::LogDirtyAreas'::__l10::<lambda_1>::operator()
                            (&local_138,(FNavigationDirtyAreaDebugInformation *)this_00.Data);
          if (bVar6) goto LAB_146e601db;
          this_00.Data = this_00.Data + 0x58;
        } while ((FNavigationDirtyAreaDebugInformation *)this_00.Data != pFVar14);
      }
      this_00.Data = (FScriptContainerElement *)0x0;
LAB_146e601db:
      if ((FNavigationDirtyAreaDebugInformation *)this_00.Data ==
          (FNavigationDirtyAreaDebugInformation *)0x0) {
        FNavigationDirtyArea::FNavigationDirtyArea(&local_a8.DirtyArea,pFVar17);
        local_a8.NewlyAddedDirtyTiles = 0;
        local_a8.TotalDirtyTiles = 0;
        if (((local_1a0.Data <= &local_a8) &&
            (&local_a8 <
             (FNavigationDirtyAreaDebugInformation *)
             (local_1a0.Data + (longlong)local_198._4_4_ * 0x58))) &&
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
        iVar9 = (uint)local_198;
        if ((uint)local_198 == local_198._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x858,&local_1a0,(int *)((longlong)&local_198 + 4));
        }
        local_198 = CONCAT44(local_198._4_4_,iVar9 + 1);
        this_00.Data = local_1a0.Data + (longlong)iVar9 * 0x58;
        FNavigationDirtyArea::FNavigationDirtyArea
                  ((FNavigationDirtyArea *)this_00.Data,&local_a8.DirtyArea);
        ((FNavigationDirtyAreaDebugInformation *)this_00.Data)->NewlyAddedDirtyTiles =
             local_a8.NewlyAddedDirtyTiles;
        ((FNavigationDirtyAreaDebugInformation *)this_00.Data)->TotalDirtyTiles =
             local_a8.TotalDirtyTiles;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.DirtyArea.OptionalSourceElement.SharedReferenceCount.ReferenceController
                  );
      }
      if (*(char *)&pFVar17[1].Bounds.Min.field0_0x0 == '\0') {
        ((FNavigationDirtyAreaDebugInformation *)this_00.Data)->NewlyAddedDirtyTiles =
             ((FNavigationDirtyAreaDebugInformation *)this_00.Data)->NewlyAddedDirtyTiles + 1;
      }
      ((FNavigationDirtyAreaDebugInformation *)this_00.Data)->TotalDirtyTiles =
           ((FNavigationDirtyAreaDebugInformation *)this_00.Data)->TotalDirtyTiles + 1;
      pFVar17 = (FNavigationDirtyArea *)((longlong)&pFVar17[1].Bounds.Min.field0_0x0 + 8);
    }
    TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
    pTVar18 = local_130;
    param_2 = local_128;
  } while( true );
}

// LogMemUsed @ 146e60540

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FRecastNavMeshGenerator::LogMemUsed(FRecastNavMeshGenerator *this)

{
  longlong lVar1;
  int iVar2;
  FAsyncTaskBase *this_00;
  FRecastTileGenerator *pFVar3;
  int iVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  if (3 < (byte)LogNavigation._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
  }
  iVar2 = *(int *)&(this->RunningDirtyTiles).field_0x10;
  iVar4 = 0;
  lVar5 = *(longlong *)&this->RunningDirtyTiles;
  lVar1 = lVar5 + (longlong)iVar2 * 0x18;
  while( true ) {
    if (*(int *)&(this->RunningDirtyTiles).field_0x10 != iVar2) {
      `TCheckedPointerIterator<TRunningTileElement<FRecastTileGeneratorWrapper>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (lVar5 == lVar1) break;
    this_00 = *(FAsyncTaskBase **)(lVar5 + 0x10);
    FAsyncTaskBase::CheckIdle(this_00);
    iVar4 = iVar4 + *(int *)(this_00[1]._padding_ + 0x10);
    pFVar3 = (this->SyncTimeSlicedData).TileGeneratorSync.Object;
    if (pFVar3 != (FRecastTileGenerator *)0x0) {
      iVar4 = iVar4 + pFVar3->UsedMemoryOnStartup;
    }
    lVar5 = lVar5 + 0x18;
  }
  if (3 < (byte)LogNavigation._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
  }
  return *(int *)&(this->PendingDirtyTiles).field_0x14 * 0x38 + iVar4 +
         (*(int *)&(this->RunningDirtyTiles).field_0x14 + 0x33) * 0x18;
}

// MarkDirtyTiles @ 146e60b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
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
FRecastNavMeshGenerator::MarkDirtyTiles
          (FRecastNavMeshGenerator *this,
          TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType *pFVar2;
  byte *pbVar3;
  TNavStatArray<FPendingTileElement> *pTVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ARecastNavMesh *this_00;
  FNavigationElement *this_01;
  code *pcVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  FRecastNavMeshGenerator *pFVar17;
  FNavigationDirtyArea *pFVar18;
  bool bVar19;
  bool bVar20;
  char cVar21;
  bool bVar22;
  int iVar23;
  int iVar24;
  FName *pFVar25;
  TStatId TVar26;
  UWorld *pUVar27;
  UClass *pUVar28;
  FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FRecastNavMeshGenerator::MarkDirtyTiles(TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_>_const_&)_::_23_::FStat_STAT_RecastNavMeshGenerator_DirtyArea>
  FVar29;
  FNavigationElementHandle *pFVar30;
  FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FRecastNavMeshGenerator::MarkDirtyTiles(TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_>_const_&)_::_127_::FStat_STAT_RecastNavMeshGenerator_Merging>
  FVar31;
  longlong lVar32;
  byte bVar33;
  ForElementType<unsigned_int> FVar34;
  ForElementType<FSetElementId> FVar35;
  uint uVar36;
  uint uVar37;
  ulonglong uVar38;
  longlong lVar39;
  double *pdVar40;
  FScriptContainerElement *pFVar41;
  UNavigationSystemBase *pUVar42;
  longlong lVar43;
  FNameEntryId FVar44;
  int *piVar45;
  uint uVar46;
  FName FVar47;
  FScriptContainerElement *pFVar48;
  FPendingTileElement *pFVar49;
  uint uVar50;
  uint uVar51;
  int iVar52;
  FNavigationDirtyArea *this_02;
  longlong lVar53;
  longlong lVar54;
  int iVar55;
  float fVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  double dVar69;
  undefined1 auStackY_678 [32];
  FName local_610;
  undefined1 local_5ff;
  undefined1 local_5fe;
  undefined1 local_5fd;
  undefined1 local_5fc;
  undefined1 local_5fb [3];
  int local_5f8;
  FName local_5f0;
  byte local_5e8;
  uint local_5e0;
  UNavigationSystemBase *local_5d8;
  FName local_5d0;
  FColor_u_0 local_5c8;
  int local_5c4;
  FColor_u_0 local_5c0 [2];
  FName local_5b8;
  byte local_5b0;
  longlong local_5a8;
  ARecastNavMesh *local_5a0;
  FRecastNavMeshGenerator *local_598;
  undefined8 local_590;
  undefined8 local_588;
  double local_580;
  undefined8 local_578;
  undefined2 local_570;
  byte local_56e;
  ForAnyElementType local_568;
  undefined8 local_560;
  FRcTileBox local_558;
  FName local_548;
  byte local_540;
  int local_538;
  int iStack_534;
  TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_> *local_530;
  FName local_528;
  FName local_520;
  uint local_518;
  uint uStack_514;
  longlong *local_510;
  TIntPoint<int>_u_0 local_508;
  longlong *local_500;
  undefined8 uStack_4f8;
  char *local_4f0;
  undefined4 uStack_4e8;
  uint uStack_4e4;
  int local_4e0;
  undefined4 uStack_4dc;
  int iStack_4d8;
  int iStack_4d4;
  undefined1 local_4d0;
  undefined7 uStack_4cf;
  FString local_4c8;
  FNavigationElementHandle local_4b8;
  char *local_4a8;
  int local_4a0;
  int local_49c;
  LARGE_INTEGER local_498;
  FNavigationDirtyArea *local_490;
  FString local_488;
  undefined8 *local_478;
  FNavigationDirtyArea *local_470;
  FName local_468;
  undefined1 local_460 [20];
  uint uStack_44c;
  undefined1 *local_448;
  uint uStack_440;
  uint uStack_43c;
  ForAnyElementType local_438;
  int iStack_430;
  TVector<double>_u_0 local_428;
  double dStack_410;
  double local_408;
  double dStack_400;
  undefined8 local_3f8;
  FLogScopedCategoryAndVerbosityOverride local_3f0;
  FLogScopedCategoryAndVerbosityOverride local_3e0;
  FLogScopedCategoryAndVerbosityOverride local_3d0;
  FLogScopedCategoryAndVerbosityOverride local_3c0;
  FLogScopedCategoryAndVerbosityOverride local_3b0;
  FName local_3a0;
  FName local_398 [2];
  FName local_388;
  FName local_380 [2];
  FName local_370;
  FName local_368 [2];
  int local_358;
  int iStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  FString local_348;
  source_location local_338;
  source_location local_318;
  FString local_2f8 [2];
  undefined4 local_2cc;
  undefined1 local_2c8 [32];
  ForElementType<unsigned_int> local_2a8;
  uint local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  undefined1 local_290 [8];
  ForElementType<FSetElementId> local_288;
  int local_280;
  undefined1 local_278 [24];
  TVector<double>_u_0 TStack_260;
  double local_248;
  TSet<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_238;
  TVector<double>_u_0 local_1e8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  FNavigationDirtyArea local_1a8;
  undefined1 local_158;
  TVector<double>_u_0 local_148;
  double dStack_130;
  double local_128;
  double dStack_120;
  undefined8 local_118;
  TBox<double> local_110;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_678;
  FVar47.ComparisonIndex.Value = 0x9d4c;
  FVar47.Number = 0;
  local_5d0.ComparisonIndex.Value = 0x9d4c;
  local_5d0.Number = 0;
  local_598 = this;
  local_530 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_RecastNavMeshGenerator_MarkDirtyTiles =
         (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FRecastNavMeshGenerator::MarkDirtyTiles(TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FStat_STAT_RecastNavMeshGenerator_MarkDirtyTiles>
          )0x0;
    pFVar25 = ::FName::FName(&local_370,"STAT_RecastNavMeshGenerator_MarkDirtyTiles");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RecastNavMeshGenerator_MarkDirtyTiles,
               *pFVar25,L"STAT_RecastNavMeshGenerator_MarkDirtyTiles","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  local_4b8.OwnerUObject.WeakPtr.ObjectIndex = 0x1997;
  local_4a8 = 
  "void __cdecl FRecastNavMeshGenerator::MarkDirtyTiles(const class TArray<struct FNavigationDirtyArea,class TSizedDefaultAllocator<32> > &)"
  ;
  local_4b8.SubElementId = 0x15149e4b0;
  local_4b8.OwnerUObject.WeakPtr.ObjectSerialNumber = 2;
  TVar26 = FThreadSafeStaticStatInner<`FRecastNavMeshGenerator::MarkDirtyTiles'::__l2::FStat_STAT_RecastNavMeshGenerator_MarkDirtyTiles,1>
           ::GetStatId(&StatPtr_STAT_RecastNavMeshGenerator_MarkDirtyTiles);
  local_338._Column = local_4b8.OwnerUObject.WeakPtr.ObjectSerialNumber;
  local_338._Line = local_4b8.OwnerUObject.WeakPtr.ObjectIndex;
  local_338._File = (char *)local_4b8.SubElementId;
  local_338._Function = local_4a8;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_548,*(TStatIdData **)&(TVar26.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,(FSourceLocation *)&local_338);
  if ((this->bInitialized == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("bInitialized",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                          ,0x1999,L""), bVar19)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  dVar69 = (double)(int)(this->Config)._padding_ * (double)(this->Config)._padding_;
  if ((dVar69 <= 0.0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("TileSizeInWorldUnits > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                          ,0x199b,L""), bVar19)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  this_00 = this->DestNavMesh;
  pUVar27 = AActor::GetWorld((AActor *)this_00);
  bVar19 = UWorld::IsGameWorld(pUVar27);
  if ((bVar19) && (*(char *)((longlong)&this_00->_padding_ + 4) != '\x02')) {
    bVar19 = true;
  }
  else {
    bVar19 = false;
  }
  pUVar27 = AActor::GetWorld((AActor *)this->DestNavMesh);
  if ((pUVar27 != (UWorld *)0x0) &&
     (pUVar42 = (pUVar27->NavigationSystem).field0_0x0.DebugPtr,
     pUVar42 != (UNavigationSystemBase *)0x0)) {
    local_5d8 = pUVar42;
    pUVar28 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar24 = (int)pUVar28->_padding_;
    if ((iVar24 <= *(int *)(*(longlong *)&pUVar42->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar42->field_0x10 + 0x30) + (longlong)iVar24 * 8) ==
        &pUVar28->_padding_)) goto LAB_146e60df8;
  }
  local_5d8 = (UNavigationSystemBase *)0x0;
  pUVar42 = (UNavigationSystemBase *)0x0;
LAB_146e60df8:
  local_5a0 = this->DestNavMesh;
  if ((local_5a0 == (ARecastNavMesh *)0x0) ||
     (local_5a0->bUseVirtualGeometryFilteringAndDirtying == 0)) {
    bVar12 = false;
    local_5a8 = 0;
    local_510 = (longlong *)0x0;
  }
  else if (pUVar42 == (UNavigationSystemBase *)0x0) {
    local_510 = &local_5a0->_padding_;
    local_5a8 = 0;
    bVar12 = true;
  }
  else {
    local_5a8 = *(longlong *)&pUVar42[0x16].field_0x18;
    local_510 = &local_5a0->_padding_;
    bVar12 = true;
  }
  QueryPerformanceCounter(&local_498);
  uVar16 = __real_7fefffffffffffff;
  local_2c8._0_8_ = (FScriptContainerElement *)0x0;
  local_2c8._8_8_ = 0;
  local_2a8 = (ForElementType<unsigned_int>)0x0;
  local_2a0 = 0;
  local_29c = 0x80;
  local_298 = -1;
  local_294 = 0;
  local_288 = (ForElementType<FSetElementId>)0x0;
  dVar11 = (double)local_498.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  local_280 = 0;
  local_238.Elements._0_8_ = 0;
  local_238.Elements._8_8_ = 0;
  local_238.Elements._32_8_ = 0;
  local_238.Elements._40_4_ = 0;
  local_238.Elements._44_4_ = 0x80;
  local_238.Elements._48_4_ = 0xffffffff;
  local_238.Elements._52_4_ = 0;
  local_238.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_238.HashSize = 0;
  if ((this->bRestrictBuildingToActiveTiles == 0) ||
     (*(int *)&(this->ActiveTileSet).Elements.field_0x8 !=
      *(int *)&(this->ActiveTileSet).Elements.field_0x34)) {
    local_5e0 = param_1->ArrayNum;
    uVar38 = (ulonglong)(int)local_5e0;
    this_02 = (FNavigationDirtyArea *)(param_1->AllocatorInstance).Data;
    local_470 = this_02 + uVar38;
    while( true ) {
      pFVar18 = local_470;
      if (param_1->ArrayNum != (int)uVar38) {
        local_5ff = 0;
        `TCheckedPointerIterator<FNavigationDirtyArea_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_5ff);
      }
      if (this_02 == pFVar18) break;
      if ((*(int *)((longlong)FVar47 +
                   *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)) <
           ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        StatPtr_STAT_RecastNavMeshGenerator_DirtyArea =
             (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FRecastNavMeshGenerator::MarkDirtyTiles(TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_>_const_&)_::_23_::FStat_STAT_RecastNavMeshGenerator_DirtyArea>
              )0x0;
        pFVar25 = ::FName::FName(local_368,"STAT_RecastNavMeshGenerator_DirtyArea");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RecastNavMeshGenerator_DirtyArea,
                   *pFVar25,L"STAT_RecastNavMeshGenerator_DirtyArea","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS2);
      }
      FVar29 = StatPtr_STAT_RecastNavMeshGenerator_DirtyArea;
      if (StatPtr_STAT_RecastNavMeshGenerator_DirtyArea ==
          (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FRecastNavMeshGenerator::MarkDirtyTiles(TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_>_const_&)_::_23_::FStat_STAT_RecastNavMeshGenerator_DirtyArea>
           )0x0) {
        pFVar25 = ::FName::FName(&local_3a0,"STAT_RecastNavMeshGenerator_DirtyArea");
        FVar29 = (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FRecastNavMeshGenerator::MarkDirtyTiles(TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_>_const_&)_::_23_::FStat_STAT_RecastNavMeshGenerator_DirtyArea>
                  )FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_RecastNavMeshGenerator_DirtyArea,*pFVar25,
                              L"STAT_RecastNavMeshGenerator_DirtyArea","STATGROUP_Quick",
                              "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid)
        ;
      }
      local_610.ComparisonIndex.Value = 0;
      local_610.Number = 0;
      bVar15 = false;
      bVar14 = false;
      bVar13 = false;
      FVar47 = *(FName *)FVar29;
      FVar44 = FVar47.ComparisonIndex.Value;
      uVar46 = FVar47.Number;
      if ((FVar44.Value != 0) || (uVar46 != 0)) {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_5c8.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_5c8._s_0,(char *)*(FName *)((longlong)FVar29 + 0x10));
          bVar14 = false;
          bVar13 = true;
          if (-1 < CpuChannel->Enabled) {
            local_520.ComparisonIndex.Value = FVar44.Value;
            local_520.Number = uVar46;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_520,(wchar_t *)*(FName *)((longlong)FVar29 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                       ,0x19b4);
            bVar14 = true;
            bVar13 = true;
          }
        }
        bVar15 = false;
        if (FThreadStats::bPrimaryEnable != false) {
          local_518 = FVar44.Value;
          uStack_514 = uVar46;
          FThreadStats::AddMessage(FVar47,CycleScopeStart);
          bVar15 = true;
          local_610 = FVar47;
        }
      }
      if ((((((this_02->Bounds).IsValid == '\0') ||
            (bVar20 = UE::Math::TVector<double>::ContainsNaN((TVector<double> *)this_02), bVar20))
           || (bVar20 = UE::Math::TVector<double>::ContainsNaN(&(this_02->Bounds).Max), bVar20)) &&
          (local_490 = this_02,
          bVar20 = `FRecastNavMeshGenerator::MarkDirtyTiles'::__l24::<lambda_1>::operator()
                             (&local_490), !bVar20)) ||
         ((bVar19 &&
          (((this_02->Flags & DynamicModifier) == None ||
           ((this_02->Flags & NavigationBounds) != None)))))) {
LAB_146e611d1:
        if (bVar13) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar14) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar15) {
          FThreadStats::AddMessage(local_610,CycleScopeEnd);
        }
      }
      else {
        if (FVisualLogger::bIsRecording != 0) {
          FNavigationDirtyArea::GetSourceDescription(this_02,local_2f8);
          FVisualLogger::BoxLogfImpl
                    ((UObject *)local_5a0,(FName *)&LogNavigation.field_0x4,All,&this_02->Bounds,
                     &UE::Math::TMatrix<double>::Identity,&FColor::Blue,false,L"DirtyArea %s");
          if (local_2f8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f8[0].Data.AllocatorInstance.Data);
          }
        }
        lVar39 = local_5a8;
        if (((bVar12) && (pUVar42 != (UNavigationSystemBase *)0x0)) &&
           ((local_5a8 != 0 &&
            ((local_510 != (longlong *)0x0 &&
             (this_01 = (this_02->OptionalSourceElement).Object,
             this_01 != (FNavigationElement *)0x0)))))) {
          pcVar10 = *(code **)(this->_padding_ + 0xb0);
          pFVar30 = FNavigationElement::GetHandle(this_01,&local_4b8);
          local_358 = (pFVar30->OwnerUObject).WeakPtr.ObjectIndex;
          iStack_354 = (pFVar30->OwnerUObject).WeakPtr.ObjectSerialNumber;
          uStack_350 = (undefined4)pFVar30->SubElementId;
          uStack_34c = *(undefined4 *)((longlong)&pFVar30->SubElementId + 4);
          cVar21 = (*pcVar10)(this,pUVar42,lVar39);
          if (cVar21 == '\0') goto LAB_146e611d1;
        }
        local_278._0_16_ = *(undefined1 (*) [16])&(this_02->Bounds).Min.field0_0x0;
        unique0x100022b9 =
             *(undefined1 (*) [16])((longlong)&(this_02->Bounds).Min.field0_0x0 + 0x10);
        bVar20 = false;
        TStack_260._8_16_ = *(undefined1 (*) [16])((longlong)&(this_02->Bounds).Max.field0_0x0 + 8);
        local_248 = *(double *)&(this_02->Bounds).IsValid;
        if ((this_02->Flags & NavigationBounds) == None) {
          local_148._s_0.X = (this->TotalNavBounds).Min.field0_0x0._s_0.X;
          local_148._s_0.Y = (this->TotalNavBounds).Min.field0_0x0._s_0.Y;
          local_148._s_0.Z = (this->TotalNavBounds).Min.field0_0x0._s_0.Z;
          dStack_130 = (this->TotalNavBounds).Max.field0_0x0._s_0.X;
          local_128 = (this->TotalNavBounds).Max.field0_0x0._s_0.Y;
          dStack_120 = (this->TotalNavBounds).Max.field0_0x0._s_0.Z;
          local_118._0_1_ = (this->TotalNavBounds).IsValid;
          local_118._1_1_ = (this->TotalNavBounds).Pad[0];
          local_118._2_1_ = (this->TotalNavBounds).Pad[1];
          local_118._3_1_ = (this->TotalNavBounds).Pad[2];
          local_118._4_1_ = (this->TotalNavBounds).Pad[3];
          local_118._5_1_ = (this->TotalNavBounds).Pad[4];
          local_118._6_1_ = (this->TotalNavBounds).Pad[5];
          local_118._7_1_ = (this->TotalNavBounds).Pad[6];
          bVar20 = UE::Math::TBox<double>::Intersect
                             ((TBox<double> *)&local_148._s_0,&this_02->Bounds);
          if (bVar20) {
            local_428._s_0.X = (double)*(undefined8 *)&(this->TotalNavBounds).Min.field0_0x0;
            local_428._s_0.Y = *(double *)((longlong)&(this->TotalNavBounds).Min.field0_0x0 + 8);
            local_428._s_0.Z = *(double *)((longlong)&(this->TotalNavBounds).Min.field0_0x0 + 0x10);
            dStack_410 = *(double *)&(this->TotalNavBounds).Max.field0_0x0;
            local_408 = *(double *)((longlong)&(this->TotalNavBounds).Max.field0_0x0 + 8);
            dStack_400 = *(double *)((longlong)&(this->TotalNavBounds).Max.field0_0x0 + 0x10);
            local_3f8._0_1_ = (this->TotalNavBounds).IsValid;
            local_3f8._1_1_ = (this->TotalNavBounds).Pad[0];
            local_3f8._2_1_ = (this->TotalNavBounds).Pad[1];
            local_3f8._3_1_ = (this->TotalNavBounds).Pad[2];
            local_3f8._4_1_ = (this->TotalNavBounds).Pad[3];
            local_3f8._5_1_ = (this->TotalNavBounds).Pad[4];
            local_3f8._6_1_ = (this->TotalNavBounds).Pad[5];
            local_3f8._7_1_ = (this->TotalNavBounds).Pad[6];
            bVar20 = UE::Math::TBox<double>::Intersect
                               ((TBox<double> *)&local_428._s_0,&this_02->Bounds);
            if ((!bVar20) &&
               (bVar20 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<4457677437609711939>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                                    ,0x1943,"BoxA.Intersect(BoxB)"), bVar20)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            dVar5 = *(double *)((longlong)&(this_02->Bounds).Max.field0_0x0 + 0x10);
            uVar57 = SUB84(dVar5,0);
            uVar58 = (undefined4)((ulonglong)dVar5 >> 0x20);
            dVar6 = *(double *)((longlong)&(this_02->Bounds).Max.field0_0x0 + 8);
            uVar59 = SUB84(dVar6,0);
            uVar60 = (undefined4)((ulonglong)dVar6 >> 0x20);
            dVar7 = *(double *)&(this_02->Bounds).Max.field0_0x0;
            uVar63 = SUB84(dVar7,0);
            uVar64 = (undefined4)((ulonglong)dVar7 >> 0x20);
            dVar8 = *(double *)((longlong)&(this_02->Bounds).Min.field0_0x0 + 0x10);
            uVar67 = SUB84(dVar8,0);
            uVar68 = (undefined4)((ulonglong)dVar8 >> 0x20);
            dVar9 = *(double *)((longlong)&(this_02->Bounds).Min.field0_0x0 + 8);
            uVar65 = SUB84(dVar9,0);
            uVar66 = (undefined4)((ulonglong)dVar9 >> 0x20);
            uVar61 = SUB84(local_428._s_0.X,0);
            uVar62 = (undefined4)((ulonglong)local_428._0_8_ >> 0x20);
            if (dStack_400 <= dVar5) {
              uVar57 = SUB84(dStack_400,0);
              uVar58 = (undefined4)((ulonglong)dStack_400 >> 0x20);
            }
            if (local_408 <= dVar6) {
              uVar59 = SUB84(local_408,0);
              uVar60 = (undefined4)((ulonglong)local_408 >> 0x20);
            }
            if (dStack_410 <= dVar7) {
              uVar63 = SUB84(dStack_410,0);
              uVar64 = (undefined4)((ulonglong)dStack_410 >> 0x20);
            }
            if (dVar8 <= local_428._s_0.Z) {
              uVar67 = SUB84(local_428._s_0.Z,0);
              uVar68 = (undefined4)((ulonglong)local_428._16_8_ >> 0x20);
            }
            if (dVar9 <= local_428._s_0.Y) {
              uVar65 = SUB84(local_428._s_0.Y,0);
              uVar66 = (undefined4)((ulonglong)local_428._8_8_ >> 0x20);
            }
            dVar5 = *(double *)&(this_02->Bounds).Min.field0_0x0;
            if (local_428._s_0.X <= dVar5) {
              uVar61 = SUB84(dVar5,0);
              uVar62 = (undefined4)((ulonglong)dVar5 >> 0x20);
            }
            if ((this_02->Flags & UseAgentHeight) == None) {
              fVar56 = 0.0;
            }
            else {
              fVar56 = (this->Config).AgentHeight;
            }
            local_4d0 = 1;
            dVar5 = (double)CONCAT44(uVar66,uVar65) - (this->BBoxGrowthHigh).field0_0x0._s_0.Y;
            local_248 = (double)CONCAT71(uStack_4cf,1);
            dVar7 = (double)CONCAT44(uVar64,uVar63) + (this->BBoxGrowthLow).field0_0x0._s_0.X;
            dVar6 = (double)CONCAT44(uVar58,uVar57) + (this->BBoxGrowthLow).field0_0x0._s_0.Z;
            local_278._8_4_ = SUB84(dVar5,0);
            local_278._0_8_ =
                 (double)CONCAT44(uVar62,uVar61) - (this->BBoxGrowthHigh).field0_0x0._s_0.X;
            local_278._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
            unique0x10000ff2 = SUB84(dVar7,0);
            local_278._16_8_ =
                 ((double)CONCAT44(uVar68,uVar67) - (this->BBoxGrowthHigh).field0_0x0._s_0.Z) -
                 (double)fVar56;
            unique0x10000ff6 = (int)((ulonglong)dVar7 >> 0x20);
            TStack_260._16_4_ = SUB84(dVar6,0);
            TStack_260._s_0.Y =
                 (double)CONCAT44(uVar60,uVar59) + (this->BBoxGrowthLow).field0_0x0._s_0.Y;
            TStack_260._20_4_ = (int)((ulonglong)dVar6 >> 0x20);
            bVar20 = IntersectBounds((TBox<double> *)local_278,&this->InclusionBounds);
            if (bVar20) {
              uVar46 = 0;
              if (0 < *(int *)&(this->InclusionBounds).field_0x10) {
                lVar39 = 0;
                do {
                  uVar36 = 0;
                  if ((int)uVar46 < *(int *)&(this->InclusionBounds).field_0x10) {
                    uVar36 = ~uVar46 >> 0x1f;
                  }
                  if ((uVar36 == 0) &&
                     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar20)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  lVar53 = *(longlong *)&this->InclusionBounds;
                  if ((((((*(double *)(lVar39 + lVar53) <= (double)CONCAT44(uVar62,uVar61)) &&
                         (dVar5 = *(double *)(lVar39 + 0x18 + lVar53),
                         (double)CONCAT44(uVar62,uVar61) < dVar5 ||
                         (double)CONCAT44(uVar62,uVar61) == dVar5)) &&
                        (dVar6 = *(double *)(lVar39 + 8 + lVar53),
                        dVar6 <= (double)CONCAT44(uVar66,uVar65))) &&
                       (((dVar7 = *(double *)(lVar39 + 0x20 + lVar53),
                         (double)CONCAT44(uVar66,uVar65) < dVar7 ||
                         (double)CONCAT44(uVar66,uVar65) == dVar7 &&
                         (dVar8 = *(double *)(lVar39 + 0x10 + lVar53),
                         dVar8 <= (double)CONCAT44(uVar68,uVar67))) &&
                        ((dVar9 = *(double *)(lVar39 + 0x28 + lVar53),
                         (double)CONCAT44(uVar68,uVar67) < dVar9 ||
                         (double)CONCAT44(uVar68,uVar67) == dVar9 &&
                         ((*(double *)(lVar39 + lVar53) <= (double)CONCAT44(uVar64,uVar63) &&
                          ((double)CONCAT44(uVar64,uVar63) < dVar5 ||
                           (double)CONCAT44(uVar64,uVar63) == dVar5)))))))) &&
                      (dVar6 <= (double)CONCAT44(uVar60,uVar59))) &&
                     ((((double)CONCAT44(uVar60,uVar59) < dVar7 ||
                        (double)CONCAT44(uVar60,uVar59) == dVar7 &&
                       (dVar8 <= (double)CONCAT44(uVar58,uVar57))) &&
                      ((double)CONCAT44(uVar58,uVar57) < dVar9 ||
                       (double)CONCAT44(uVar58,uVar57) == dVar9)))) goto LAB_146e616a0;
                  uVar46 = uVar46 + 1;
                  lVar39 = lVar39 + 0x38;
                } while ((int)uVar46 < *(int *)&(this->InclusionBounds).field_0x10);
              }
              uVar46 = 0xffffffff;
LAB_146e616a0:
              bVar20 = uVar46 == 0xffffffff;
              goto LAB_146e616af;
            }
            if (bVar13) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if (bVar14) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if (bVar15) {
              FThreadStats::AddMessage(local_610,CycleScopeEnd);
            }
          }
          else {
            if (bVar13) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if (bVar14) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if (bVar15) {
              FThreadStats::AddMessage(local_610,CycleScopeEnd);
            }
          }
        }
        else {
LAB_146e616af:
          if ((*(int *)((longlong)local_5d0 +
                       *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)) < ::_TSS3
              ) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
            StatPtr_STAT_RecastNavMeshGenerator_CheckTilesInBounds =
                 (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FRecastNavMeshGenerator::MarkDirtyTiles(TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_>_const_&)_::_47_::FStat_STAT_RecastNavMeshGenerator_CheckTilesInBounds>
                  )0x0;
            pFVar25 = ::FName::FName(local_398,"STAT_RecastNavMeshGenerator_CheckTilesInBounds");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_RecastNavMeshGenerator_CheckTilesInBounds,*pFVar25,
                       L"STAT_RecastNavMeshGenerator_CheckTilesInBounds","STATGROUP_Quick",
                       "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
            _Init_thread_footer(&::_TSS3);
          }
          uStack_4f8 = 
          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
          ;
          local_500 = (longlong *)0x5000019ec;
          local_4f0 = 
          "void __cdecl FRecastNavMeshGenerator::MarkDirtyTiles(const class TArray<struct FNavigationDirtyArea,class TSizedDefaultAllocator<32> > &)"
          ;
          TVar26 = FThreadSafeStaticStatInner<`FRecastNavMeshGenerator::MarkDirtyTiles'::__l47::FStat_STAT_RecastNavMeshGenerator_CheckTilesInBounds,1>
                   ::GetStatId(&StatPtr_STAT_RecastNavMeshGenerator_CheckTilesInBounds);
          local_318._0_8_ = local_500;
          local_318._File = uStack_4f8;
          local_318._Function = local_4f0;
          FScopeCycleCounter::FScopeCycleCounter
                    ((FScopeCycleCounter *)&local_5b8,*(TStatIdData **)&(TVar26.StatIdPtr)->Name,
                     CycleStat|ClearEveryFrame,false,(FSourceLocation *)&local_318);
          iVar24 = 0;
          local_5f8 = 0;
          FRcTileBox::FRcTileBox(&local_558,(TBox<double> *)local_278,&this->RcNavMeshOrigin,dVar69)
          ;
          iVar23 = local_558.YMax;
          iVar52 = local_558.YMin;
          if (local_558.YMin <= local_558.YMax) {
            do {
              iVar55 = local_558.XMin;
              if (local_558.XMin <= local_558.XMax) {
                do {
                  local_508._s_0.X = iVar55;
                  local_508._s_0.Y = iVar52;
                  bVar22 = IsInActiveSet(this,(TIntPoint<int> *)&local_508._s_0);
                  if (bVar22) {
                    if ((bVar20) && ((this_02->Flags & NavigationBounds) == None)) {
                      FRecastTileGenerator::CalculateTileBounds
                                ((TBox<double> *)&local_1e8._s_0,iVar55,iVar52,
                                 &this->RcNavMeshOrigin,&this->TotalNavBounds,dVar69);
                      lVar39 = *(longlong *)&this->InclusionBounds;
                      iVar23 = *(int *)&(this->InclusionBounds).field_0x10;
                      pdVar40 = (double *)(lVar39 + 8);
                      while( true ) {
                        if (*(int *)&(this->InclusionBounds).field_0x10 != iVar23) {
                          local_5fe = 0;
                          `TCheckedPointerIterator<UE::Math::TBox<double>_const_,int,0>::operator!='
                          ::__l2::<lambda_1>::operator()(&local_5fe);
                        }
                        if (pdVar40 + -1 == (double *)((longlong)iVar23 * 0x38 + lVar39))
                        goto LAB_146e61f14;
                        if (((((pdVar40[-1] <= local_1d0) &&
                              (local_1e8._s_0.X < pdVar40[2] || local_1e8._s_0.X == pdVar40[2])) &&
                             (*pdVar40 <= local_1c8)) &&
                            ((local_1e8._s_0.Y < pdVar40[3] || local_1e8._s_0.Y == pdVar40[3] &&
                             (pdVar40[1] <= local_1c0)))) &&
                           (iVar24 = local_5f8,
                           local_1e8._s_0.Z < pdVar40[4] || local_1e8._s_0.Z == pdVar40[4])) break;
                        pdVar40 = pdVar40 + 7;
                      }
                    }
                    local_590 = CONCAT44(iVar52,iVar55);
                    local_588 = uVar16;
                    local_578 = uVar16;
                    local_570 = 0x303;
                    local_568.Data = (FScriptContainerElement *)0x0;
                    local_560 = 0;
                    local_580 = dVar11;
                    local_538 = iVar55;
                    iStack_534 = iVar52;
                    if ((bVar19) ||
                       (((this_02->Flags & Geometry) == None &&
                        ((this_02->Flags & NavigationBounds) == None)))) {
                      local_56e = 0;
                      iVar23 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x838,&local_568,(int *)((longlong)&local_560 + 4));
                      local_560 = CONCAT44(local_560._4_4_,iVar23 + 1);
                      pFVar41 = local_568.Data + (longlong)iVar23 * 0x38;
                      *(undefined8 *)pFVar41 = local_278._0_8_;
                      *(undefined8 *)(pFVar41 + 8) = local_278._8_8_;
                      *(undefined8 *)(pFVar41 + 0x10) = local_278._16_8_;
                      *(double *)(pFVar41 + 0x18) = TStack_260._s_0.X;
                      *(double *)(pFVar41 + 0x20) = TStack_260._s_0.Y;
                      *(double *)(pFVar41 + 0x28) = TStack_260._s_0.Z;
                      *(double *)(pFVar41 + 0x30) = local_248;
                    }
                    else {
                      local_56e = 1;
                    }
                    uVar36 = (int)local_590 - local_590._4_4_ ^ local_590._4_4_ >> 0xd;
                    local_5f8 = iVar24 + 1;
                    uVar46 = (-0x61c88647 - local_590._4_4_) - uVar36 ^ uVar36 << 8;
                    uVar50 = (local_590._4_4_ - uVar46) - uVar36 ^ uVar46 >> 0xd;
                    uVar36 = (uVar36 - uVar50) - uVar46 ^ uVar50 >> 0xc;
                    uVar46 = (uVar46 - uVar36) - uVar50 ^ uVar36 << 0x10;
                    uVar50 = (uVar50 - uVar46) - uVar36 ^ uVar46 >> 5;
                    uVar36 = (uVar36 - uVar50) - uVar46 ^ uVar50 >> 3;
                    uVar46 = (uVar46 - uVar36) - uVar50 ^ uVar36 << 10;
                    pFVar41 = (FScriptContainerElement *)0x0;
                    if (local_2c8._8_4_ != local_294) {
                      FVar35 = (ForElementType<FSetElementId>)local_290;
                      if (local_288 != (ForElementType<FSetElementId>)0x0) {
                        FVar35 = local_288;
                      }
                      iVar24 = *(int *)((longlong)FVar35 +
                                       (ulonglong)
                                       (local_280 - 1U &
                                       ((uVar50 - uVar46) - uVar36 ^ uVar46 >> 0xf)) * 4);
                      while (iVar24 != -1) {
                        lVar39 = (longlong)iVar24 * 0x40;
                        if ((*(int *)(local_2c8._0_8_ + lVar39) == (int)local_590) &&
                           (*(uint *)(local_2c8._0_8_ + lVar39 + 4) == local_590._4_4_)) {
                          pFVar41 = (FScriptContainerElement *)0x0;
                          if ((iVar24 != -1) &&
                             (pFVar41 = (FScriptContainerElement *)
                                        (local_2c8._0_8_ + (longlong)iVar24 * 0x40),
                             pFVar41 != (FScriptContainerElement *)0x0)) {
                            pFVar48 = pFVar41 + 0x22;
                            *pFVar48 = (FScriptContainerElement)((byte)*pFVar48 | local_56e);
                            pFVar1 = pFVar41 + 0x28;
                            if (*pFVar48 == (FScriptContainerElement)0x0) {
                              if ((pFVar1 == (FScriptContainerElement *)&local_568) &&
                                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(void*)this != (void*)&Source",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x96e,L""), bVar22)) {
                                pcVar10 = (code *)swi(3);
                                (*pcVar10)();
                                return;
                              }
                              lVar39 = (longlong)(int)local_560;
                              if ((int)local_560 != 0) {
                                iVar24 = UE::Core::Private::
                                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                   (0x38,8,(int)local_560,
                                                    (ForAnyElementType *)pFVar1,
                                                    (int *)(pFVar41 + 0x30),(int *)(pFVar41 + 0x34))
                                ;
                    /* WARNING: Load size is inaccurate */
                                memcpy(*pFVar1 + (longlong)iVar24 * 0x38,local_568.Data,
                                       lVar39 * 0x38);
                              }
                            }
                            else {
                              *(undefined4 *)(pFVar41 + 0x30) = 0;
                              if (*(int *)(pFVar41 + 0x34) != 0) {
                                UE::Core::Private::
                                ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x38,8,0,(ForAnyElementType *)pFVar1,0,
                                           (int *)(pFVar41 + 0x34));
                              }
                            }
                            goto LAB_146e61bad;
                          }
                          break;
                        }
                        iVar24 = *(int *)(local_2c8._0_8_ + lVar39 + 0x38);
                      }
                    }
                    TSet<FPendingTileElement,DefaultKeyFuncs<FPendingTileElement,0>,FDefaultSetAllocator>
                    ::Emplace<FPendingTileElement_const_&>
                              ((TSet<FPendingTileElement,DefaultKeyFuncs<FPendingTileElement,0>,FDefaultSetAllocator>
                                *)local_2c8,(FPendingTileElement *)local_460,(bool *)&local_590);
LAB_146e61bad:
                    if (6 < (byte)LogNavigationDirtyArea._0_1_) {
                      FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                                (&local_3e0,(FName)LogNavigationDirtyArea._4_8_,All);
                      bVar22 = pFVar41 != (FScriptContainerElement *)0x0;
                      uVar36 = (int)local_590 - local_590._4_4_ ^ local_590._4_4_ >> 0xd;
                      uVar46 = (-0x61c88647 - local_590._4_4_) - uVar36 ^ uVar36 << 8;
                      uVar50 = (local_590._4_4_ - uVar46) - uVar36 ^ uVar46 >> 0xd;
                      uVar36 = (uVar36 - uVar50) - uVar46 ^ uVar50 >> 0xc;
                      uVar46 = (uVar46 - uVar36) - uVar50 ^ uVar36 << 0x10;
                      uVar50 = (uVar50 - uVar46) - uVar36 ^ uVar46 >> 5;
                      uVar36 = (uVar36 - uVar50) - uVar46 ^ uVar50 >> 3;
                      uVar46 = (uVar46 - uVar36) - uVar50 ^ uVar36 << 10;
                      uVar46 = (uVar50 - uVar46) - uVar36 ^ uVar46 >> 0xf;
                      if (local_238.Elements._8_4_ != local_238.Elements._52_4_) {
                        FVar35 = (ForElementType<FSetElementId>)&local_238.Hash;
                        if (local_238.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                          FVar35 = local_238.Hash.SecondaryData;
                        }
                        iVar24 = *(int *)((longlong)FVar35 +
                                         (ulonglong)(local_238.HashSize - 1U & uVar46) * 4);
                        while (iVar24 != -1) {
                          lVar39 = (longlong)iVar24;
                          if ((*(int *)(local_238.Elements._0_8_ + lVar39 * 0x50) == (int)local_590)
                             && (*(uint *)(local_238.Elements._0_8_ + 4 + lVar39 * 0x50) ==
                                 local_590._4_4_)) {
                            if ((iVar24 != -1) &&
                               (lVar39 = (longlong)iVar24 * 0x50 + local_238.Elements._0_8_,
                               lVar39 != 0)) goto LAB_146e61e07;
                            break;
                          }
                          iVar24 = *(int *)(local_238.Elements._0_8_ + 0x48 + lVar39 * 0x50);
                        }
                      }
                      local_478 = &local_590;
                      TSet<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      ::EmplaceByHash<TKeyInitializer<FPendingTileElement_const_&>_>
                                (&local_238,(uint)&local_5c4,
                                 (TKeyInitializer<FPendingTileElement_const_&> *)(ulonglong)uVar46,
                                 (bool *)&local_478);
                      lVar39 = (longlong)local_5c4 * 0x50 + local_238.Elements._0_8_;
LAB_146e61e07:
                      pFVar2 = (ForAnyElementType *)(lVar39 + 0x38);
                      FNavigationDirtyArea::FNavigationDirtyArea(&local_1a8,this_02);
                      local_158 = bVar22;
                      if ((((FNavigationDirtyArea *)pFVar2->Data <= &local_1a8) &&
                          (&local_1a8 <
                           (FNavigationDirtyArea *)
                           ((longlong)pFVar2->Data + (longlong)*(int *)(lVar39 + 0x44) * 0x58))) &&
                         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar22)) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      iVar24 = *(int *)(lVar39 + 0x40);
                      if (iVar24 == *(int *)(lVar39 + 0x44)) {
                        iVar24 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x858,pFVar2,(int *)(lVar39 + 0x44));
                      }
                      *(int *)(lVar39 + 0x40) = iVar24 + 1;
                      pFVar41 = pFVar2->Data;
                      FNavigationDirtyArea::FNavigationDirtyArea
                                ((FNavigationDirtyArea *)(pFVar41 + (longlong)iVar24 * 0x58),
                                 &local_1a8);
                      *(undefined1 *)
                       &((FNavigationDirtyArea *)(pFVar41 + (longlong)iVar24 * 0x58))[1].Bounds.Min.
                        field0_0x0 = local_158;
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (local_1a8.OptionalSourceElement.SharedReferenceCount.
                                 ReferenceController);
                      FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogNavigationDirtyArea,All)
                      ;
                      FLogScopedCategoryAndVerbosityOverride::
                      ~FLogScopedCategoryAndVerbosityOverride(&local_3e0);
                    }
                    if (local_568.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_568.Data);
                    }
                  }
                  else if (6 < (byte)LogNavigation._0_1_) {
                    FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                              (&local_3f0,(FName)LogNavigation._4_8_,All);
                    FRecastTileGenerator::CalculateTileBounds
                              (&local_110,iVar55,iVar52,&this->RcNavMeshOrigin,&this->TotalNavBounds
                               ,dVar69);
                    if (FVisualLogger::bIsRecording != 0) {
                      FVisualLogger::BoxLogfImpl
                                ((UObject *)local_5a0,(FName *)&LogNavigation.field_0x4,All,
                                 &local_110,&UE::Math::TMatrix<double>::Identity,&FColor::Red,false,
                                 L"Not in active set");
                    }
                    FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogNavigation,All);
                    FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride
                              (&local_3f0);
                  }
LAB_146e61f14:
                  iVar55 = iVar55 + 1;
                  iVar24 = local_5f8;
                  iVar23 = local_558.YMax;
                } while (iVar55 <= local_558.XMax);
              }
              iVar52 = iVar52 + 1;
            } while (iVar52 <= iVar23);
          }
          if (2 < (byte)LogNavigationDirtyArea._0_1_) {
            FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                      (&local_3d0,(FName)LogNavigationDirtyArea._4_8_,Warning);
            if (iVar24 != 0) {
              pUVar42 = local_5d8;
              if (local_5d8 == (UNavigationSystemBase *)0x0) {
                pUVar27 = AActor::GetWorld((AActor *)this->DestNavMesh);
                if (pUVar27 == (UWorld *)0x0) {
                  local_5d8 = (UNavigationSystemBase *)0x0;
                  goto LAB_146e6215a;
                }
                pUVar42 = (pUVar27->NavigationSystem).field0_0x0.DebugPtr;
                if (pUVar42 == (UNavigationSystemBase *)0x0) {
LAB_146e61fbf:
                  pUVar42 = (UNavigationSystemBase *)0x0;
                  local_5d8 = (UNavigationSystemBase *)0x0;
                }
                else {
                  local_5d8 = pUVar42;
                  pUVar28 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
                  iVar24 = (int)pUVar28->_padding_;
                  if ((*(int *)(*(longlong *)&pUVar42->field_0x10 + 0x38) < iVar24) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(*(longlong *)&pUVar42->field_0x10 + 0x30) +
                       (longlong)iVar24 * 8) != &pUVar28->_padding_)) goto LAB_146e61fbf;
                }
                if (pUVar42 == (UNavigationSystemBase *)0x0) goto LAB_146e6215a;
              }
              if (((pUVar42[0xe].field_0x8 == '\x01') && ((pUVar42[2].field_0x20 & 1) != 0)) &&
                 (0.0 < *(float *)&pUVar42[3].field_0xc)) {
                dVar5 = TStack_260._s_0.Y - (double)local_278._8_8_;
                if (TStack_260._s_0.Y - (double)local_278._8_8_ <=
                    TStack_260._s_0.X - (double)local_278._0_8_) {
                  dVar5 = TStack_260._s_0.X - (double)local_278._0_8_;
                }
                dVar6 = TStack_260._s_0.Z - (double)local_278._16_8_;
                if (TStack_260._s_0.Z - (double)local_278._16_8_ <= dVar5) {
                  dVar6 = dVar5;
                }
                if (((double)*(float *)&pUVar42[3].field_0xc < dVar6) &&
                   (2 < (byte)LogNavigationDirtyArea._0_1_)) {
                  ::FString::PrintfImpl(&local_488,L"X=%3.3f Y=%3.3f");
                  FNavigationDirtyArea::GetSourceDescription(this_02,&local_348);
                  if (this->DestNavMesh == (ARecastNavMesh *)0x0) {
                    ::FString::FString(&local_4c8,L"None");
                  }
                  else {
                    local_468 = (FName)this->DestNavMesh->_padding_;
                    ::FName::ToString(&local_468,&local_4c8);
                  }
                  UE::Logging::Private::BasicLog<3>
                            (&::LOG_Static,(FLogCategoryBase *)&LogNavigationDirtyArea);
                  if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
                  }
                  if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_348.Data.AllocatorInstance.Data);
                  }
                  if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_488.Data.AllocatorInstance.Data);
                  }
                }
              }
            }
LAB_146e6215a:
            FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogNavigationDirtyArea,Warning);
            FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride
                      (&local_3d0);
          }
          if ((local_5b0 & 1) != 0) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if ((local_5b0 & 2) != 0) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((local_5b0 & 4) != 0) {
            FThreadStats::AddMessage(local_5b8,CycleScopeEnd);
          }
          local_5b0 = 0;
          if (bVar13) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar14) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          pUVar42 = local_5d8;
          if (bVar15) {
            FThreadStats::AddMessage(local_610,CycleScopeEnd);
            pUVar42 = local_5d8;
          }
        }
      }
      this_02 = this_02 + 1;
      uVar38 = (ulonglong)local_5e0;
      param_1 = local_530;
      FVar47 = local_5d0;
    }
  }
  local_5f8 = local_2c8._8_4_ - local_294;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    StatPtr_STAT_RecastNavMeshGenerator_Merging =
         (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FRecastNavMeshGenerator::MarkDirtyTiles(TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_>_const_&)_::_127_::FStat_STAT_RecastNavMeshGenerator_Merging>
          )0x0;
    pFVar25 = ::FName::FName(&local_388,"STAT_RecastNavMeshGenerator_Merging");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RecastNavMeshGenerator_Merging,*pFVar25,
               L"STAT_RecastNavMeshGenerator_Merging","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS4);
  }
  FVar31 = StatPtr_STAT_RecastNavMeshGenerator_Merging;
  if (StatPtr_STAT_RecastNavMeshGenerator_Merging ==
      (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FRecastNavMeshGenerator::MarkDirtyTiles(TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_>_const_&)_::_127_::FStat_STAT_RecastNavMeshGenerator_Merging>
       )0x0) {
    pFVar25 = ::FName::FName(local_380,"STAT_RecastNavMeshGenerator_Merging");
    FVar31 = (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FRecastNavMeshGenerator::MarkDirtyTiles(TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_>_const_&)_::_127_::FStat_STAT_RecastNavMeshGenerator_Merging>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RecastNavMeshGenerator_Merging,
                          *pFVar25,L"STAT_RecastNavMeshGenerator_Merging","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_5f0.ComparisonIndex.Value = 0;
  local_5f0.Number = 0;
  local_5e8 = 0;
  FVar47 = *(FName *)FVar31;
  if ((FVar47.ComparisonIndex.Value.Value != 0) || (FVar47.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_5c0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_5c0[0]._s_0,(char *)*(FName *)((longlong)FVar31 + 0x10));
      local_5e8 = local_5e8 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_528.ComparisonIndex.Value = FVar47.ComparisonIndex.Value.Value;
        local_528.Number = FVar47.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_528,(wchar_t *)*(FName *)((longlong)FVar31 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x1a57);
        local_5e8 = local_5e8 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_5f0 = FVar47;
      local_5d0 = FVar47;
      FThreadStats::AddMessage(FVar47,CycleScopeStart);
      local_5e8 = local_5e8 | 4;
    }
  }
  local_5e0 = *(uint *)&(this->PendingDirtyTiles).field_0x10;
  uVar38 = (ulonglong)(int)local_5e0;
  uVar46 = 1;
  lVar39 = *(longlong *)&this->PendingDirtyTiles;
  lVar53 = uVar38 * 0x38;
  piVar45 = (int *)(lVar39 + 0x34);
LAB_146e62462:
  while( true ) {
    if (*(int *)&(this->PendingDirtyTiles).field_0x10 != (int)uVar38) {
      local_5fd = 0;
      `TCheckedPointerIterator<FPendingTileElement,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_5fd);
    }
    if (piVar45 + -0xd == (int *)(lVar53 + lVar39)) break;
    uVar36 = piVar45[-0xc];
    iVar24 = piVar45[-0xd];
    uVar37 = iVar24 - uVar36 ^ uVar36 >> 0xd;
    uVar50 = (-0x61c88647 - uVar37) - uVar36 ^ uVar37 << 8;
    uVar51 = (uVar36 - uVar37) - uVar50 ^ uVar50 >> 0xd;
    uVar37 = (uVar37 - uVar51) - uVar50 ^ uVar51 >> 0xc;
    uVar50 = (uVar50 - uVar37) - uVar51 ^ uVar37 << 0x10;
    uVar51 = (uVar51 - uVar50) - uVar37 ^ uVar50 >> 5;
    uVar37 = (uVar37 - uVar51) - uVar50 ^ uVar51 >> 3;
    uVar50 = (uVar50 - uVar37) - uVar51 ^ uVar37 << 10;
    if (local_2c8._8_4_ == local_294) goto LAB_146e628a2;
    FVar35 = (ForElementType<FSetElementId>)local_290;
    if (local_288 != (ForElementType<FSetElementId>)0x0) {
      FVar35 = local_288;
    }
    uVar50 = *(uint *)((longlong)FVar35 +
                      (ulonglong)(local_280 - 1U & ((uVar51 - uVar50) - uVar37 ^ uVar50 >> 0xf)) * 4
                      );
    if (uVar50 == 0xffffffff) goto LAB_146e628a2;
    do {
      lVar32 = (longlong)(int)uVar50 * 0x40;
      if ((*(int *)(local_2c8._0_8_ + lVar32) == iVar24) &&
         (*(uint *)(local_2c8._0_8_ + lVar32 + 4) == uVar36)) {
        if (uVar50 == 0xffffffff) goto LAB_146e628a2;
        lVar32 = (longlong)(int)uVar50 * 0x40;
        pbVar3 = (byte *)((longlong)piVar45 + -0x12);
        *pbVar3 = *pbVar3 | (byte)*(FScriptContainerElement *)(local_2c8._0_8_ + lVar32 + 0x22);
        dVar69 = *(double *)(local_2c8._0_8_ + lVar32 + 0x10);
        uVar57 = SUB84(dVar69,0);
        uVar58 = (undefined4)((ulonglong)dVar69 >> 0x20);
        dVar11 = *(double *)(piVar45 + -9);
        if (dVar11 <= dVar69) {
          uVar57 = SUB84(dVar11,0);
          uVar58 = (undefined4)((ulonglong)dVar11 >> 0x20);
        }
        *(ulonglong *)(piVar45 + -9) = CONCAT44(uVar58,uVar57);
        if (*pbVar3 == 0) {
          pFVar48 = (FScriptContainerElement *)(local_2c8._0_8_ + lVar32 + 0x28);
          pFVar41 = (FScriptContainerElement *)(piVar45 + -3);
          if ((pFVar41 == pFVar48) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)this != (void*)&Source",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x96e,L""), bVar19)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar24 = *(int *)(pFVar48 + 8);
          if (iVar24 != 0) {
            iVar23 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x38,8,iVar24,(ForAnyElementType *)pFVar41,piVar45 + -1,piVar45);
            memcpy(*(FScriptContainerElement **)pFVar41 + (longlong)iVar23 * 0x38,
                   *(FScriptContainerElement **)pFVar48,(longlong)iVar24 * 0x38);
          }
        }
        else {
          piVar45[-1] = 0;
          if (*piVar45 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,0,(ForAnyElementType *)(piVar45 + -3),0,piVar45);
          }
        }
        if (((int)uVar50 < 0) || ((int)local_2a0 <= (int)uVar50)) {
LAB_146e62695:
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Elements.IsValidIndex(ElementIndex)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                              ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex"
                             );
          if (bVar19) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        else {
          FVar34 = (ForElementType<unsigned_int>)((longlong)local_2c8 + 0x10);
          if (local_2a8 != (ForElementType<unsigned_int>)0x0) {
            FVar34 = local_2a8;
          }
          uVar36 = uVar50;
          if ((int)uVar50 < 0) {
            uVar36 = uVar50 + 0x1f;
          }
          if ((*(uint *)((longlong)FVar34 + (longlong)((int)uVar36 >> 5) * 4) >> (uVar50 & 0x1f) & 1
              ) == 0) goto LAB_146e62695;
        }
        uVar16 = local_2c8._0_8_;
        FVar35 = (ForElementType<FSetElementId>)local_290;
        if (local_288 != (ForElementType<FSetElementId>)0x0) {
          FVar35 = local_288;
        }
        pFVar41 = (FScriptContainerElement *)
                  ((longlong)FVar35 +
                  (longlong)*(int *)(local_2c8._0_8_ + (longlong)(int)uVar50 * 0x40 + 0x3c) * 4);
        goto LAB_146e626e6;
      }
      uVar50 = *(uint *)(local_2c8._0_8_ + lVar32 + 0x38);
    } while (uVar50 != 0xffffffff);
    uVar38 = (ulonglong)local_5e0;
    piVar45 = piVar45 + 0xe;
  }
  if ((local_5e8 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_5e8 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_5e8 & 4) != 0) {
    FThreadStats::AddMessage(local_5f0,CycleScopeEnd);
  }
  local_5e8 = 0;
  if (6 < (byte)LogNavigationDirtyArea._0_1_) {
    FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
              (&local_3c0,(FName)LogNavigationDirtyArea._4_8_,All);
    if (local_5a0 != (ARecastNavMesh *)0x0) {
      LogDirtyAreas(this,(UObject *)local_5a0,
                    (TMap<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,0>_>
                     *)&local_238);
    }
    FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogNavigationDirtyArea,All);
    FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_3c0);
  }
  uVar36 = (*(int *)&(this->PendingDirtyTiles).field_0x10 - local_294) + local_2c8._8_4_;
  if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar36);
  }
  if (*(int *)&(this->PendingDirtyTiles).field_0x14 < (int)uVar36) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (0x38,8,uVar36,(ForAnyElementType *)&this->PendingDirtyTiles,
               *(int *)&(this->PendingDirtyTiles).field_0x10,
               (int *)&(this->PendingDirtyTiles).field_0x14);
  }
  uVar36 = local_2a0;
  iVar24 = 0;
  local_4e0 = 0;
  uStack_4e4 = 0;
  if (local_2a0 != 0) {
    FVar34 = (ForElementType<unsigned_int>)((longlong)local_2c8 + 0x10);
    if (local_2a8 != (ForElementType<unsigned_int>)0x0) {
      FVar34 = local_2a8;
    }
    uVar50 = *(uint *)FVar34;
    local_4e0 = 0;
    while (uVar50 == 0) {
      iVar24 = iVar24 + 1;
      local_4e0 = local_4e0 + 0x20;
      uStack_4e4 = local_2a0;
      if ((int)((local_2a0 - 1) + ((int)(local_2a0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
      goto LAB_146e62a03;
      uVar50 = *(uint *)((longlong)FVar34 + (longlong)iVar24 * 4);
    }
    uVar46 = -uVar50 & uVar50;
    uVar38 = (ulonglong)uVar46 * 2 + 1;
    lVar39 = 0x3f;
    if (uVar38 != 0) {
      for (; uVar38 >> lVar39 == 0; lVar39 = lVar39 + -1) {
      }
    }
    local_4a0 = (int)lVar39;
    uStack_4e4 = local_4e0 + -1 + local_4a0;
    if ((int)local_2a0 < (int)uStack_4e4) {
      uStack_4e4 = local_2a0;
    }
  }
LAB_146e62a03:
  local_500 = (longlong *)local_2c8;
  uStack_4dc = local_2cc;
  local_4f0 = local_2c8 + 0x10;
  iStack_4d8 = local_2c8._8_4_ - local_294;
  uVar50 = local_2a0 & 0xffffffe0;
  uStack_4e8 = 0xffffffff;
  uStack_43c = uStack_4e4;
  uStack_440._0_1_ = 0xff;
  uStack_440._1_1_ = 0xff;
  uStack_440._2_1_ = true;
  uStack_440._3_1_ = 0xff;
  uStack_4f8 = (char *)CONCAT44(uVar46,iVar24);
  stack0xfffffffffffffbb0 = (double)uStack_4f8;
  iVar24 = (int)local_2a0 >> 5;
  local_438.Data = (FScriptContainerElement *)CONCAT44(local_2cc,local_4e0);
  unique0x10002162 = iStack_4d4;
  iStack_430 = iStack_4d8;
  bVar33 = (byte)local_2a0;
  local_460._8_8_ = local_500;
  local_448 = local_4f0;
  if (((int)local_2a0 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar19)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar17 = local_598;
  if (uVar36 != local_2a0) {
    FVar34 = (ForElementType<unsigned_int>)((longlong)local_2c8 + 0x10);
    if (local_2a8 != (ForElementType<unsigned_int>)0x0) {
      FVar34 = local_2a8;
    }
    uVar46 = -1 << (bVar33 & 0x1f) & *(uint *)((longlong)FVar34 + (longlong)iVar24 * 4);
    while (uVar46 == 0) {
      iVar24 = iVar24 + 1;
      uVar50 = uVar50 + 0x20;
      uVar36 = local_2a0;
      if ((int)(((int)(local_2a0 - 1) >> 0x1f & 0x1fU) + (local_2a0 - 1)) >> 5 < iVar24)
      goto LAB_146e62b41;
      uVar46 = *(uint *)((longlong)FVar34 + (longlong)iVar24 * 4);
    }
    uVar38 = (ulonglong)(-uVar46 & uVar46) * 2 + 1;
    lVar39 = 0x3f;
    if (uVar38 != 0) {
      for (; uVar38 >> lVar39 == 0; lVar39 = lVar39 + -1) {
      }
    }
    local_49c = (int)lVar39;
    uVar36 = (uVar50 - 1) + local_49c;
    if ((int)local_2a0 < (int)uVar36) {
      uVar36 = local_2a0;
    }
  }
LAB_146e62b41:
  pTVar4 = &local_598->PendingDirtyTiles;
  while( true ) {
    uVar16 = local_460._8_8_;
    if ((int)*(longlong *)(local_460._8_8_ + 8) - *(int *)(local_460._8_8_ + 0x34) != iStack_430) {
      local_5fb[0] = 0;
      `TSparseArray<TSparseSetElement<FPendingTileElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_5fb);
    }
    if (((uStack_43c == uVar36) && (local_448 == local_2c8 + 0x10)) &&
       ((undefined1 *)uVar16 == local_2c8)) break;
    pFVar49 = (FPendingTileElement *)(*(longlong *)uVar16 + (longlong)(int)uStack_43c * 0x40);
    if (((*(FPendingTileElement **)&pTVar4->field_0x0 <= pFVar49) &&
        (pFVar49 < *(FPendingTileElement **)&pTVar4->field_0x0 +
                   *(int *)&(pFVar17->PendingDirtyTiles).field_0x14)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar19)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar24 = *(int *)&(pFVar17->PendingDirtyTiles).field_0x10;
    if (iVar24 == *(int *)&(pFVar17->PendingDirtyTiles).field_0x14) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                         (0x838,(ForAnyElementType *)pTVar4,
                          (int *)&(pFVar17->PendingDirtyTiles).field_0x14);
    }
    *(int *)&(pFVar17->PendingDirtyTiles).field_0x10 = iVar24 + 1;
    FPendingTileElement::FPendingTileElement
              ((FPendingTileElement *)((longlong)iVar24 * 0x38 + *(longlong *)&pTVar4->field_0x0),
               pFVar49);
    uVar46 = uStack_440 & ~uStack_44c;
    uStack_440._0_1_ = (char)uVar46;
    uStack_440._1_1_ = (char)(uVar46 >> 8);
    uStack_440._2_1_ = (bool)(char)(uVar46 >> 0x10);
    uStack_440._3_1_ = (char)(uVar46 >> 0x18);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_460 + 0x10));
  }
  if (0 < local_5f8) {
    (**(code **)(pFVar17->_padding_ + 0x90))(pFVar17);
  }
  local_238.HashSize = 0;
  if (local_238.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_238.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_238.Elements);
  local_280 = 0;
  if (local_288 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_288);
  }
  TSparseArray<TSparseSetElement<FPendingTileElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPendingTileElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FPendingTileElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_2c8);
  if ((local_540 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_540 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_540 & 4) != 0) {
    FThreadStats::AddMessage(local_548,CycleScopeEnd);
  }
  return;
LAB_146e626e6:
  uVar36 = *(uint *)pFVar41;
  if (uVar36 == 0xffffffff) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("NextElementIndex != INDEX_NONE",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                        ,0x2b5,L"Corrupt hash");
    if (bVar19) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else if (uVar36 == uVar50) goto LAB_146e62731;
  pFVar41 = (FScriptContainerElement *)(local_2c8._0_8_ + (longlong)(int)uVar36 * 0x40 + 0x38);
  goto LAB_146e626e6;
LAB_146e62731:
  *(uint *)pFVar41 = *(uint *)(uVar16 + (longlong)(int)uVar50 * 0x40 + 0x38);
  TSparseArray<TSparseSetElement<FPendingTileElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FPendingTileElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_2c8,uVar50,1);
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_2c8,uVar50,1);
  this = local_598;
  if ((byte)LogNavigationDirtyArea._0_1_ < 7) goto LAB_146e628a2;
  FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
            (&local_3b0,(FName)LogNavigationDirtyArea._4_8_,All);
  uVar36 = piVar45[-0xc];
  uVar51 = piVar45[-0xd] - uVar36 ^ uVar36 >> 0xd;
  uVar50 = (-0x61c88647 - uVar51) - uVar36 ^ uVar51 << 8;
  uVar37 = (uVar36 - uVar51) - uVar50 ^ uVar50 >> 0xd;
  uVar51 = (uVar51 - uVar37) - uVar50 ^ uVar37 >> 0xc;
  uVar36 = (uVar50 - uVar51) - uVar37 ^ uVar51 << 0x10;
  uVar50 = (uVar37 - uVar36) - uVar51 ^ uVar36 >> 5;
  uVar37 = (uVar51 - uVar50) - uVar36 ^ uVar50 >> 3;
  uVar36 = (uVar36 - uVar37) - uVar50 ^ uVar37 << 10;
  iVar24 = TSet<TTuple<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPendingTileElement,TArray<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FPendingTileElement>
                     (&local_238,(uVar50 - uVar36) - uVar37 ^ uVar36 >> 0xf,
                      (FPendingTileElement *)(piVar45 + -0xd));
  if (iVar24 == -1) {
    lVar32 = 0;
LAB_146e62824:
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("Pair != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                        ,0x288,L"");
    if (bVar19) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    lVar32 = (longlong)iVar24 * 0x50 + local_238.Elements._0_8_;
    if (lVar32 == 0) goto LAB_146e62824;
  }
  iVar24 = *(int *)(lVar32 + 0x40);
  lVar43 = *(longlong *)(lVar32 + 0x38);
  lVar54 = (longlong)iVar24 * 0x58 + lVar43;
  while( true ) {
    if (*(int *)(lVar32 + 0x40) != iVar24) {
      local_5fc = 0;
      `TCheckedPointerIterator<FRecastNavMeshGenerator::FNavigationDirtyAreaPerTileDebugInformation,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_5fc);
    }
    if (lVar43 == lVar54) break;
    *(undefined1 *)(lVar43 + 0x50) = 1;
    lVar43 = lVar43 + 0x58;
  }
  FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogNavigationDirtyArea,All);
  FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_3b0);
  this = local_598;
LAB_146e628a2:
  uVar38 = (ulonglong)local_5e0;
  piVar45 = piVar45 + 0xe;
  goto LAB_146e62462;
}

// MarkNavBoundsDirty @ 146e65470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

bool __thiscall FRecastNavMeshGenerator::MarkNavBoundsDirty(FRecastNavMeshGenerator *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  undefined1 auStack_128 [32];
  FNavigationDirtyArea *local_108;
  FNavigationDirtyArea *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  undefined8 local_c8;
  TSharedPtr<FNavigationElement_const_,1> local_c0;
  TVector<double>_u_0 local_b0;
  double dStack_98;
  double local_90;
  double dStack_88;
  double local_80;
  FNavigationDirtyArea local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  iVar1 = *(int *)&(this->InclusionBounds).field_0x10;
  pdVar6 = *(double **)&this->InclusionBounds;
  local_d0.Data = (FScriptContainerElement *)0x0;
  pdVar7 = pdVar6 + (longlong)iVar1 * 7;
  local_c8 = 0;
  while( true ) {
    if (*(int *)&(this->InclusionBounds).field_0x10 != iVar1) {
      local_d8[0] = 0;
      `TCheckedPointerIterator<UE::Math::TBox<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_d8);
    }
    if (pdVar6 == pdVar7) break;
    local_b0._s_0.X = *pdVar6;
    local_b0._s_0.Y = pdVar6[1];
    local_b0._s_0.Z = pdVar6[2];
    dStack_98 = pdVar6[3];
    local_90 = pdVar6[4];
    dStack_88 = pdVar6[5];
    local_80 = pdVar6[6];
    local_c0.Object = (FNavigationElement *)0x0;
    local_c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FNavigationDirtyArea::FNavigationDirtyArea
              (&local_78,(TBox<double> *)&local_b0._s_0,NavigationBounds|All,&local_c0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c0.SharedReferenceCount.ReferenceController);
    if (local_d0.Data <= &local_78) {
      if (&local_78 < (FNavigationDirtyArea *)(local_d0.Data + (longlong)local_c8._4_4_ * 0x50)) {
        local_f0 = (longlong)(int)local_c8;
        local_e8 = 0x50;
        local_108 = &local_78;
        local_100 = (FNavigationDirtyArea *)local_d0.Data;
        local_f8 = (longlong)local_c8._4_4_;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
    }
    iVar5 = (int)local_c8;
    if ((int)local_c8 == local_c8._4_4_) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&local_d0,(int *)((longlong)&local_c8 + 4));
    }
    local_c8 = CONCAT44(local_c8._4_4_,iVar5 + 1);
    FNavigationDirtyArea::FNavigationDirtyArea
              ((FNavigationDirtyArea *)(local_d0.Data + (longlong)iVar5 * 0x50),&local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.OptionalSourceElement.SharedReferenceCount.ReferenceController);
    pdVar6 = pdVar6 + 7;
  }
  bVar3 = (int)local_c8 != 0;
  if (bVar3) {
    (**(code **)(this->_padding_ + 0xa0))(this,&local_d0);
  }
  DestructItems<FNavigationDirtyArea,int>((FNavigationDirtyArea *)local_d0.Data,(int)local_c8);
  if ((FNavigationDirtyArea *)local_d0.Data != (FNavigationDirtyArea *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  return bVar3;
}

// OnAreaAdded @ 146e67000

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

void __thiscall
FRecastNavMeshGenerator::OnAreaAdded(FRecastNavMeshGenerator *this,UClass *param_1,int param_2)

{
  FRecastNavMeshCachedData::OnAreaAdded(&this->AdditionalCachedData,param_1,param_2);
  return;
}

// OnAreaRemoved @ 146e67020

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

void __thiscall
FRecastNavMeshGenerator::OnAreaRemoved(FRecastNavMeshGenerator *this,UClass *param_1)

{
  FRecastNavMeshCachedData::OnAreaRemoved(&this->AdditionalCachedData,param_1);
  return;
}

// OnNavigationBoundsChanged @ 146e67040

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

void __thiscall FRecastNavMeshGenerator::OnNavigationBoundsChanged(FRecastNavMeshGenerator *this)

{
  ARecastNavMesh *this_00;
  double dVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  UWorld *pUVar6;
  UClass *pUVar7;
  FNavigationDirtyArea *pFVar8;
  dtNavMesh *pdVar9;
  dtNavMesh *this_01;
  TBox<double> *pTVar10;
  TBox<double> *pTVar11;
  undefined1 auStackY_118 [32];
  undefined1 local_c8 [8];
  ForAnyElementType local_c0;
  undefined8 local_b8;
  FName local_b0;
  FString local_a8;
  TSharedPtr<FNavigationElement_const_,1> local_98;
  FNavigationDirtyArea local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if ((this->DestNavMesh == (ARecastNavMesh *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestNavMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                         ,0x1692,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UpdateNavigationBounds(this);
  this_00 = this->DestNavMesh;
  this_01 = (dtNavMesh *)0x0;
  if (this_00->RecastNavMeshImpl != (FPImplRecastNavMesh *)0x0) {
    this_01 = this_00->RecastNavMeshImpl->DetourNavMesh;
  }
  pUVar6 = AActor::GetWorld((AActor *)this_00);
  bVar3 = UWorld::IsGameWorld(pUVar6);
  if ((bVar3) && (*(char *)((longlong)&this_00->_padding_ + 4) != '\x02')) {
    return;
  }
  bVar3 = ARecastNavMesh::IsResizable(this->DestNavMesh);
  if (!bVar3) {
    return;
  }
  if (this_01 == (dtNavMesh *)0x0) {
    return;
  }
  pUVar6 = AActor::GetWorld((AActor *)this->DestNavMesh);
  if (pUVar6 == (UWorld *)0x0) {
    return;
  }
  pdVar9 = (dtNavMesh *)(pUVar6->NavigationSystem).field0_0x0.DebugPtr;
  if (pdVar9 != (dtNavMesh *)0x0) {
    pUVar7 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    dVar1 = (pdVar9->m_params).walkableClimb;
    iVar4 = (int)pUVar7->_padding_;
    if ((iVar4 <= *(int *)((longlong)dVar1 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)((longlong)dVar1 + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar7->_padding_)) goto LAB_146e67148;
  }
  pdVar9 = (dtNavMesh *)0x0;
LAB_146e67148:
  if ((pdVar9 != (dtNavMesh *)0x0) && ((char)pdVar9[4].m_polyBits == '\0')) {
    iVar4 = UE::NavMesh::Private::CalculateMaxTilesCount
                      (&this->InclusionBounds,
                       (double)(int)(this->Config)._padding_ * (double)(this->Config)._padding_,
                       this->AvgLayersPerTile,this->DestNavMesh->NavMeshVersion);
    iVar5 = dtNavMesh::getMaxTiles(this_01);
    if (iVar5 != iVar4) {
      if (4 < (byte)LogNavigation._0_1_) {
        local_b0 = (FName)this->DestNavMesh->_padding_;
        ::FName::ToString(&local_b0,&local_a8);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      FPImplRecastNavMesh::SetRecastMesh(this->DestNavMesh->RecastNavMeshImpl,(dtNavMesh *)0x0);
      iVar4 = *(int *)&(this->InclusionBounds).field_0x10;
      if (0 < iVar4) {
        local_c0.Data = (FScriptContainerElement *)0x0;
        local_b8 = 0;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,iVar4,&local_c0,0,(int *)((longlong)&local_b8 + 4));
        iVar4 = *(int *)&(this->InclusionBounds).field_0x10;
        pTVar10 = *(TBox<double> **)&this->InclusionBounds;
        pTVar11 = pTVar10 + iVar4;
        while( true ) {
          if (*(int *)&(this->InclusionBounds).field_0x10 != iVar4) {
            local_c8[0] = 0;
            `TCheckedPointerIterator<UE::Math::TBox<double>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_c8);
          }
          if (pTVar10 == pTVar11) break;
          local_98.Object = (FNavigationElement *)0x0;
          local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar8 = FNavigationDirtyArea::FNavigationDirtyArea
                             (&local_88,pTVar10,NavigationBounds,&local_98);
          if (((local_c0.Data <= pFVar8) &&
              (pFVar8 < (FNavigationDirtyArea *)(local_c0.Data + (longlong)local_b8._4_4_ * 0x50)))
             && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar5 = (int)local_b8;
          if ((int)local_b8 == local_b8._4_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x850,&local_c0,(int *)((longlong)&local_b8 + 4));
          }
          local_b8 = CONCAT44(local_b8._4_4_,iVar5 + 1);
          FNavigationDirtyArea::FNavigationDirtyArea
                    ((FNavigationDirtyArea *)(local_c0.Data + (longlong)iVar5 * 0x50),pFVar8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_88.OptionalSourceElement.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_98.SharedReferenceCount.ReferenceController);
          pTVar10 = pTVar10 + 1;
        }
        (**(code **)(this->_padding_ + 0x30))(this,&local_c0);
        DestructItems<FNavigationDirtyArea,int>((FNavigationDirtyArea *)local_c0.Data,(int)local_b8)
        ;
        if ((FNavigationDirtyArea *)local_c0.Data != (FNavigationDirtyArea *)0x0) {
          FMemory::Free(local_c0.Data);
        }
      }
    }
    UE::NavMesh::Private::CheckTileIndicesInValidRange(&this->InclusionBounds,this->DestNavMesh);
  }
  return;
}

// ProcessTileTasksAndGetUpdatedTiles @ 146e692b0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FNavTileRef,TSizedDefaultAllocator<32>_> * __thiscall
FRecastNavMeshGenerator::ProcessTileTasksAndGetUpdatedTiles
          (FRecastNavMeshGenerator *this,
          TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  LARGE_INTEGER *pLVar3;
  ulonglong uVar4;
  TSet<FNavTileRef,DefaultKeyFuncs<FNavTileRef,0>,FDefaultSetAllocator> *this_00;
  int iVar5;
  FName FVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAndGetUpdatedTiles(int)_::_2_::FStat_STAT_RecastNavMeshGenerator_ProcessTileTasks>
  FVar16;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *pTVar17;
  FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAndGetUpdatedTiles(int)_::_12_::FStat_STAT_RecastNavMeshGenerator_OnNavMeshGenerationFinished>
  FVar18;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar19;
  FColor_u_0 FVar20;
  uint uVar21;
  LARGE_INTEGER *pLVar22;
  LARGE_INTEGER LVar23;
  FName FVar24;
  undefined4 uVar25;
  undefined1 uVar26;
  TAlignedBytes<8,8> TVar27;
  FColor_u_0 local_res8;
  uint uStackX_c;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *local_res10;
  LARGE_INTEGER local_res20;
  undefined1 local_74 [4];
  FStatMessage local_70;
  LARGE_INTEGER local_60 [2];
  FName local_50;
  
  TVar27.Pad = *(uchar (*) [8])((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res10 = __return_storage_ptr__;
  local_70.StatData.Pad = TVar27.Pad;
  if ((*(int *)((longlong)TVar27.Pad + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RecastNavMeshGenerator_ProcessTileTasks ==
        (FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAndGetUpdatedTiles(int)_::_2_::FStat_STAT_RecastNavMeshGenerator_ProcessTileTasks>
         )0x0) {
      pFVar15 = ::FName::FName((FName *)&local_res8._s_0,
                               "STAT_RecastNavMeshGenerator_ProcessTileTasks");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RecastNavMeshGenerator_ProcessTileTasks,
                 *pFVar15,L"STAT_RecastNavMeshGenerator_ProcessTileTasks","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_RecastNavMeshGenerator_ProcessTileTasks;
  if (StatPtr_STAT_RecastNavMeshGenerator_ProcessTileTasks ==
      (FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAndGetUpdatedTiles(int)_::_2_::FStat_STAT_RecastNavMeshGenerator_ProcessTileTasks>
       )0x0) {
    pFVar15 = ::FName::FName((FName *)&local_res20.s,"STAT_RecastNavMeshGenerator_ProcessTileTasks")
    ;
    FVar16 = (FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAndGetUpdatedTiles(int)_::_2_::FStat_STAT_RecastNavMeshGenerator_ProcessTileTasks>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RecastNavMeshGenerator_ProcessTileTasks,*pFVar15,
                          L"STAT_RecastNavMeshGenerator_ProcessTileTasks","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  uVar26 = 0;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar6 = *(FName *)FVar16;
  local_res8.Bits = local_res8.Bits & 0xffffff00;
  FVar20.Bits = (uint)FVar6.ComparisonIndex.Value;
  uVar19 = FVar6.Number;
  if ((FVar20.Bits != 0) || (FVar24 = local_50, uVar19 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      uVar26 = 1;
      local_res8._s_0.B = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar20.Bits;
        uStackX_c = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x1cd0);
        uVar26 = 3;
        local_res8._s_0.B = 3;
      }
    }
    FVar24 = local_50;
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar20.Bits;
      uStackX_c = uVar19;
      FThreadStats::AddMessage(FVar6,CycleScopeStart);
      local_res8.Bits = CONCAT31(local_res8.Bits._1_3_,uVar26) | 4;
      FVar24 = FVar6;
    }
  }
  iVar13 = (**(code **)(this->_padding_ + 0x48))(this);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pTVar17 = ProcessTileTasksAsyncAndGetUpdatedTiles
                      (this,(TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)&local_60[0].s,
                       param_1);
  if (__return_storage_ptr__ != pTVar17) {
    pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (pTVar17->AllocatorInstance).Data;
    (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = pTVar17->ArrayNum;
    __return_storage_ptr__->ArrayMax = pTVar17->ArrayMax;
    pTVar17->ArrayNum = 0;
    pTVar17->ArrayMax = 0;
  }
  if ((FName)local_60[0].QuadPart != (FName)0x0) {
    FMemory::Free((void *)local_60[0]);
  }
  if (this->DestNavMesh->RecastNavMeshImpl->DetourNavMesh != (dtNavMesh *)0x0) {
    uVar19 = *(int *)&(this->TilesPendingSegmentLinkConnections).Elements.field_0x8 -
             *(int *)&(this->TilesPendingSegmentLinkConnections).Elements.field_0x34;
    uVar21 = __return_storage_ptr__->ArrayNum + uVar19;
    if (uVar19 < uVar21) {
      if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
      }
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->TilesPendingSegmentLinkConnections,uVar21);
      if (uVar21 < 4) {
        iVar14 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar14 = 1 << ((byte)lVar9 & 0x1f);
      }
      iVar5 = (this->TilesPendingSegmentLinkConnections).HashSize;
      if ((iVar5 == 0) || (iVar5 < iVar14)) {
        (this->TilesPendingSegmentLinkConnections).HashSize = iVar14;
        TSet<FNavTileRef,DefaultKeyFuncs<FNavTileRef,0>,FDefaultSetAllocator>::Rehash
                  (&this->TilesPendingSegmentLinkConnections);
      }
    }
    pLVar22 = (LARGE_INTEGER *)(__return_storage_ptr__->AllocatorInstance).Data;
    iVar14 = __return_storage_ptr__->ArrayNum;
    pLVar3 = pLVar22 + iVar14;
    while( true ) {
      if (__return_storage_ptr__->ArrayNum != iVar14) {
        `TCheckedPointerIterator<FNavTileRef,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res20);
      }
      TVar27.Pad = local_70.StatData.Pad;
      if (pLVar22 == pLVar3) break;
      local_res20 = *pLVar22;
      TSet<FNavTileRef,DefaultKeyFuncs<FNavTileRef,0>,FDefaultSetAllocator>::
      Emplace<FNavTileRef_const_&>
                (&this->TilesPendingSegmentLinkConnections,(FNavTileRef *)local_74,
                 (bool *)&local_res20);
      pLVar22 = pLVar22 + 1;
    }
  }
  iVar14 = (**(code **)(this->_padding_ + 0x48))(this);
  if ((iVar13 < 1) || (0 < iVar14)) goto LAB_146e698d0;
  if ((*(int *)((longlong)TVar27.Pad + 0x9d4c) < ::_TSS2) &&
     (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    if (StatPtr_STAT_RecastNavMeshGenerator_OnNavMeshGenerationFinished ==
        (FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAndGetUpdatedTiles(int)_::_12_::FStat_STAT_RecastNavMeshGenerator_OnNavMeshGenerationFinished>
         )0x0) {
      pFVar15 = ::FName::FName((FName *)&local_res20.s,
                               "STAT_RecastNavMeshGenerator_OnNavMeshGenerationFinished");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_RecastNavMeshGenerator_OnNavMeshGenerationFinished,*pFVar15,
                 L"STAT_RecastNavMeshGenerator_OnNavMeshGenerationFinished","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS2);
    }
    else {
      _Init_thread_footer(&::_TSS2);
    }
  }
  FVar18 = StatPtr_STAT_RecastNavMeshGenerator_OnNavMeshGenerationFinished;
  if (StatPtr_STAT_RecastNavMeshGenerator_OnNavMeshGenerationFinished ==
      (FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAndGetUpdatedTiles(int)_::_12_::FStat_STAT_RecastNavMeshGenerator_OnNavMeshGenerationFinished>
       )0x0) {
    pFVar15 = ::FName::FName((FName *)&local_70,
                             "STAT_RecastNavMeshGenerator_OnNavMeshGenerationFinished");
    FVar18 = (FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAndGetUpdatedTiles(int)_::_12_::FStat_STAT_RecastNavMeshGenerator_OnNavMeshGenerationFinished>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RecastNavMeshGenerator_OnNavMeshGenerationFinished,*pFVar15,
                          L"STAT_RecastNavMeshGenerator_OnNavMeshGenerationFinished",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  LVar23 = *(LARGE_INTEGER *)FVar18;
  uVar25 = 0;
  bVar10 = false;
  bVar12 = false;
  local_60[0]._0_4_ = 0;
  local_60[0]._4_4_ = 0;
  if ((LVar23.s.LowPart == 0) && (LVar23.s.HighPart == 0)) {
LAB_146e696dd:
    bVar11 = false;
    LVar23 = local_60[0];
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.QuadPart = local_res20.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20.s,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar10 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20 = LVar23;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20.s,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x1d07);
        bVar10 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e696dd;
    local_res20 = LVar23;
    local_60[0] = LVar23;
    FThreadStats::AddMessage((FName)LVar23.s,CycleScopeStart);
    bVar11 = true;
    uVar25 = local_60[0].s.LowPart;
  }
  if (this->RebuildAllStartTime != 0.0) {
    if (3 < (byte)LogNavigationDataBuild._0_1_) {
      QueryPerformanceCounter(&local_res20);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNavigationDataBuild);
    }
    this->RebuildAllStartTime = 0.0;
  }
  this_00 = &this->TilesPendingSegmentLinkConnections;
  (**(code **)(this->DestNavMesh->_padding_ + 0x908))();
  bVar8 = 1 < (this->TilesPendingSegmentLinkConnections).HashSize;
  if (!bVar8) {
    TSet<FNavTileRef,DefaultKeyFuncs<FNavTileRef,0>,FDefaultSetAllocator>::UnhashElements(this_00);
  }
  puVar1 = &(this->TilesPendingSegmentLinkConnections).Elements.field_0xc;
  *(undefined4 *)&(this->TilesPendingSegmentLinkConnections).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->TilesPendingSegmentLinkConnections).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TilesPendingSegmentLinkConnections).Elements.field_0x34 = 0;
  iVar13 = *(int *)&(this->TilesPendingSegmentLinkConnections).Elements.field_0x2c;
  *(undefined4 *)&(this->TilesPendingSegmentLinkConnections).Elements.field_0x28 = 0;
  if ((iVar13 < 0) || (0x80 < iVar13)) {
    *(undefined4 *)&(this->TilesPendingSegmentLinkConnections).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->TilesPendingSegmentLinkConnections).Elements.field_0x10,0);
  }
  if (bVar8) {
    (this->TilesPendingSegmentLinkConnections).HashSize = 1;
    TSet<FNavTileRef,DefaultKeyFuncs<FNavTileRef,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  (**(code **)(this->DestNavMesh->_padding_ + 0x910))();
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  __return_storage_ptr__ = local_res10;
  if ((((bVar11) && ((FName)LVar23.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    __return_storage_ptr__ = local_res10;
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_70.NameAndInfo.Number = LVar23.s.HighPart & 0xffff6fffU | 0x6000;
      local_70.NameAndInfo.Index.Value = uVar25;
      QueryPerformanceCounter(&local_res20);
      local_70.StatData.Pad = (uchar  [8])(local_res20.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_70);
      piVar2 = &this_01->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_01,false,false);
        __return_storage_ptr__ = local_res10;
      }
      else {
        __return_storage_ptr__ = local_res10;
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_01,false,false);
          __return_storage_ptr__ = local_res10;
        }
      }
    }
  }
LAB_146e698d0:
  FVar20 = local_res8;
  if ((local_res8.Bits & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((FVar20.Bits & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((FVar20.Bits & 4) != 0) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
  return __return_storage_ptr__;
}

// ProcessTileTasksAsyncAndGetUpdatedTiles @ 146e69a70

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FNavTileRef,TSizedDefaultAllocator<32>_> * __thiscall
FRecastNavMeshGenerator::ProcessTileTasksAsyncAndGetUpdatedTiles
          (FRecastNavMeshGenerator *this,
          TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  undefined1 *puVar1;
  TNavStatArray<TRunningTileElement<FRecastTileGeneratorWrapper>_> *pTVar2;
  int *piVar3;
  ARecastNavMesh *this_00;
  FRecastTileGenerator *pFVar4;
  longlong lVar5;
  FAsyncTaskBase *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  TIntPoint<int>_u_0 TVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  uint uVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAsyncAndGetUpdatedTiles(int)_::_2_::FStat_STAT_RecastNavMeshGenerator_ProcessTileTasksAsync>
  FVar22;
  UWorld *this_01;
  FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAsyncAndGetUpdatedTiles(int)_::_4_::FStat_STAT_RecastNavMeshGenerator_ProcessTileTasks_NewTasks>
  FVar23;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *pTVar24;
  TSharedRef<FRecastTileGenerator,1> *pTVar25;
  FAsyncTask<FRecastTileGeneratorWrapper> *pFVar26;
  FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAsyncAndGetUpdatedTiles(int)_::_42_::FStat_STAT_RecastNavMeshGenerator_ProcessTileTasks_FinishedTasks>
  FVar27;
  FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAsyncAndGetUpdatedTiles(int)_::_56_::FStat_STAT_RecastNavMeshGenerator_TileGeneratorRemoval>
  FVar28;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  TIntPoint<int>_u_0 *pTVar29;
  uint uVar30;
  int iVar31;
  int *piVar32;
  FAsyncTask<FRecastTileGeneratorWrapper> *pFVar33;
  longlong lVar34;
  FName FVar35;
  longlong lVar36;
  FName FVar37;
  TIntPoint<int>_u_0_s_0 *pTVar38;
  int iVar39;
  void *pvVar40;
  uint uVar41;
  wchar_t *pwVar42;
  FLLMScope local_168;
  FColor_u_0 local_164;
  FColor_u_0 local_160;
  FColor_u_0 local_15c;
  FColor_u_0 local_158 [2];
  FName local_150;
  TIntPoint<int>_u_0 local_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  FAsyncTask<FRecastTileGeneratorWrapper> *local_138;
  FName local_130;
  FName local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_100;
  FName local_f0;
  FName local_e0;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_d0;
  FMemScope local_c0;
  FStatMessage local_b8;
  LARGE_INTEGER local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_RecastNavMeshGenerator_ProcessTileTasksAsync =
         (FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAsyncAndGetUpdatedTiles(int)_::_2_::FStat_STAT_RecastNavMeshGenerator_ProcessTileTasksAsync>
          )0x0;
    pFVar21 = ::FName::FName(&local_a0,"STAT_RecastNavMeshGenerator_ProcessTileTasksAsync");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_RecastNavMeshGenerator_ProcessTileTasksAsync,*pFVar21,
               L"STAT_RecastNavMeshGenerator_ProcessTileTasksAsync","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar22 = StatPtr_STAT_RecastNavMeshGenerator_ProcessTileTasksAsync;
  if (StatPtr_STAT_RecastNavMeshGenerator_ProcessTileTasksAsync ==
      (FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAsyncAndGetUpdatedTiles(int)_::_2_::FStat_STAT_RecastNavMeshGenerator_ProcessTileTasksAsync>
       )0x0) {
    pFVar21 = ::FName::FName(&local_98,"STAT_RecastNavMeshGenerator_ProcessTileTasksAsync");
    FVar22 = (FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAsyncAndGetUpdatedTiles(int)_::_2_::FStat_STAT_RecastNavMeshGenerator_ProcessTileTasksAsync>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RecastNavMeshGenerator_ProcessTileTasksAsync,*pFVar21,
                          L"STAT_RecastNavMeshGenerator_ProcessTileTasksAsync","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar37 = *(FName *)FVar22;
  bVar11 = false;
  bVar13 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  bVar14 = false;
  bVar16 = false;
  if ((FVar37.ComparisonIndex.Value.Value != 0) || (FVar37.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_164.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_164._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar11 = false;
      bVar13 = true;
      bVar14 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_130.ComparisonIndex.Value = FVar37.ComparisonIndex.Value.Value;
        local_130.Number = FVar37.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_130,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x1b1a);
        bVar11 = true;
        bVar13 = true;
        bVar14 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_150 = FVar37;
      FThreadStats::AddMessage(FVar37,CycleScopeStart);
      bVar14 = true;
      goto LAB_146e69c92;
    }
  }
  bVar13 = bVar16;
  bVar11 = bVar14;
  bVar14 = false;
  local_150 = local_110;
  FVar37 = local_110;
LAB_146e69c92:
  pwVar42 = (wchar_t *)&DAT_00000001;
  FLLMScope::FLLMScope(&local_168,NavigationRecast,false,None,Default,true);
  FMemScope::FMemScope(&local_c0,NavigationRecast,true);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = this->DestNavMesh;
  this_01 = AActor::GetWorld((AActor *)this_00);
  bVar16 = UWorld::IsGameWorld(this_01);
  if ((!bVar16) || (bVar16 = true, *(char *)((longlong)&this_00->_padding_ + 4) == '\x02')) {
    bVar16 = false;
  }
  iVar39 = 0;
  uVar41 = *(int *)&(this->PendingDirtyTiles).field_0x10 - 1;
  if (-1 < (int)uVar41) {
    lVar36 = (longlong)(int)uVar41 * 0x38;
    do {
      if (param_1 <= iVar39) break;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        StatPtr_STAT_RecastNavMeshGenerator_ProcessTileTasks_NewTasks =
             (FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAsyncAndGetUpdatedTiles(int)_::_4_::FStat_STAT_RecastNavMeshGenerator_ProcessTileTasks_NewTasks>
              )0x0;
        pFVar21 = ::FName::FName(&local_90,"STAT_RecastNavMeshGenerator_ProcessTileTasks_NewTasks");
        pwVar42 = L"Quick";
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_RecastNavMeshGenerator_ProcessTileTasks_NewTasks,*pFVar21,
                   L"STAT_RecastNavMeshGenerator_ProcessTileTasks_NewTasks","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS1);
      }
      FVar23 = StatPtr_STAT_RecastNavMeshGenerator_ProcessTileTasks_NewTasks;
      if (StatPtr_STAT_RecastNavMeshGenerator_ProcessTileTasks_NewTasks ==
          (FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAsyncAndGetUpdatedTiles(int)_::_4_::FStat_STAT_RecastNavMeshGenerator_ProcessTileTasks_NewTasks>
           )0x0) {
        pFVar21 = ::FName::FName(&local_88,"STAT_RecastNavMeshGenerator_ProcessTileTasks_NewTasks");
        pwVar42 = L"Quick";
        FVar23 = (FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAsyncAndGetUpdatedTiles(int)_::_4_::FStat_STAT_RecastNavMeshGenerator_ProcessTileTasks_NewTasks>
                  )FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_RecastNavMeshGenerator_ProcessTileTasks_NewTasks,
                              *pFVar21,L"STAT_RecastNavMeshGenerator_ProcessTileTasks_NewTasks",
                              "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                              false,MCR_Invalid);
      }
      FVar37 = *(FName *)FVar23;
      bVar18 = false;
      bVar12 = false;
      local_100.ComparisonIndex.Value = 0;
      local_100.Number = 0;
      bVar17 = false;
      bVar15 = false;
      if ((FVar37.ComparisonIndex.Value.Value == 0) && (FVar37.Number == 0)) {
LAB_146e69f2e:
        bVar18 = bVar17;
        bVar12 = bVar15;
        bVar15 = false;
        FVar37 = local_100;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_160.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_160._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
          bVar18 = false;
          bVar12 = true;
          bVar17 = false;
          bVar15 = true;
          if (-1 < CpuChannel->Enabled) {
            local_128.ComparisonIndex.Value = FVar37.ComparisonIndex.Value.Value;
            local_128.Number = FVar37.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_128,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                       ,0x1b24);
            bVar18 = true;
            bVar12 = true;
            bVar17 = true;
            bVar15 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_146e69f2e;
        local_100 = FVar37;
        FThreadStats::AddMessage(FVar37,CycleScopeStart);
        bVar15 = true;
      }
      uVar30 = ~uVar41 >> 0x1f;
      iVar31 = *(int *)&(this->PendingDirtyTiles).field_0x10;
      pTVar29 = (TIntPoint<int>_u_0 *)(longlong)iVar31;
      uVar20 = 0;
      if ((int)uVar41 < iVar31) {
        uVar20 = uVar30;
      }
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         pwVar42 = (wchar_t *)pTVar29, bVar17)) {
        pcVar8 = (code *)swi(3);
        pTVar24 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar24;
      }
      pTVar2 = &this->RunningDirtyTiles;
      piVar32 = *(int **)&pTVar2->field_0x0;
      pTVar38 = (TIntPoint<int>_u_0_s_0 *)(*(longlong *)&this->PendingDirtyTiles + lVar36);
      local_148._s_0 = *pTVar38;
      piVar3 = piVar32 + (longlong)*(int *)&(this->RunningDirtyTiles).field_0x10 * 6;
      uStack_140 = 0;
      local_138 = (FAsyncTask<FRecastTileGeneratorWrapper> *)0x0;
      if (piVar32 != piVar3) {
        do {
          if ((*piVar32 == local_148._0_4_) && (piVar32[1] == local_148._s_0.Y)) goto LAB_146e6a265;
          piVar32 = piVar32 + 6;
        } while (piVar32 != piVar3);
      }
      pTVar25 = (TSharedRef<FRecastTileGenerator,1> *)
                (**(code **)(this->_padding_ + 0xc0))
                          (this,local_60,pTVar38,pTVar38 + 5,pTVar38[2],pwVar42);
      pFVar26 = ::operator_new(0x80);
      if (pFVar26 == (FAsyncTask<FRecastTileGeneratorWrapper> *)0x0) {
        pFVar26 = (FAsyncTask<FRecastTileGeneratorWrapper> *)0x0;
      }
      else {
        pFVar26 = FAsyncTask<FRecastTileGeneratorWrapper>::
                  FAsyncTask<FRecastTileGeneratorWrapper><TSharedRef<FRecastTileGenerator,1>_>
                            (pFVar26,pTVar25);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
      FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)pFVar26);
      pFVar4 = (pFVar26->Task).TileGenerator.Object;
      if (((((pFVar4->CompressedLayers).ArrayNum == 0) && ((pFVar4->Modifiers).ArrayNum == 0)) &&
          ((pFVar4->OffmeshLinks).ArrayNum == 0)) &&
         (((pFVar4->RawGeometry).ArrayNum == 0 &&
          ((*(int *)&(pFVar4->InclusionBounds).field_0x10 == 0 ||
           (*(int *)&(pFVar4->NavigationRelevantData).field_0x10 < 1)))))) {
        pFVar33 = pFVar26;
        if (!bVar16) {
          RemoveLayers(this,(TIntPoint<int> *)pTVar38,__return_storage_ptr__);
        }
      }
      else {
        pFVar33 = (FAsyncTask<FRecastTileGeneratorWrapper> *)0x0;
        pwVar42 = (wchar_t *)0xffffffffffffffff;
        local_138 = pFVar26;
        FAsyncTaskBase::Start
                  ((FAsyncTaskBase *)pFVar26,GNavmeshSynchronousTileGeneration != 0,GThreadPool,
                   Normal,None,-1,(wchar_t *)0x0);
        if (6 < (byte)LogNavigationDataBuild._0_1_) {
          UE::Logging::Private::BasicLog<7>
                    (&::LOG_Static,(FLogCategoryBase *)&LogNavigationDataBuild);
        }
        Count = Count + 1;
        pTVar29 = *(TIntPoint<int>_u_0 **)&pTVar2->field_0x0;
        if (((pTVar29 <= &local_148) &&
            (&local_148 < pTVar29 + (longlong)*(int *)&(this->RunningDirtyTiles).field_0x14 * 3)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), pwVar42 = (wchar_t *)pTVar29, bVar17)) {
          pcVar8 = (code *)swi(3);
          pTVar24 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
          return pTVar24;
        }
        iVar31 = *(int *)&(this->RunningDirtyTiles).field_0x10;
        puVar1 = &(this->RunningDirtyTiles).field_0x14;
        if (iVar31 == *(int *)puVar1) {
          iVar31 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                             (0x818,(ForAnyElementType *)pTVar2,(int *)puVar1);
        }
        TVar9._1_7_ = uStack_13f;
        TVar9._s_0.X._0_1_ = uStack_140;
        *(int *)&(this->RunningDirtyTiles).field_0x10 = iVar31 + 1;
        lVar5 = *(longlong *)&pTVar2->field_0x0;
        pTVar29 = (TIntPoint<int>_u_0 *)(lVar5 + (longlong)iVar31 * 0x18);
        *pTVar29 = local_148;
        pTVar29[1] = TVar9;
        *(FAsyncTask<FRecastTileGeneratorWrapper> **)(lVar5 + 0x10 + (longlong)iVar31 * 0x18) =
             local_138;
      }
      iVar31 = *(int *)&(this->PendingDirtyTiles).field_0x10;
      pTVar29 = (TIntPoint<int>_u_0 *)(longlong)iVar31;
      uVar20 = 0;
      if ((int)uVar41 < iVar31) {
        uVar20 = uVar30;
      }
      if ((uVar20 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         pwVar42 = (wchar_t *)pTVar29, bVar17)) {
        pcVar8 = (code *)swi(3);
        pTVar24 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar24;
      }
      pvVar40 = (void *)(*(longlong *)&this->PendingDirtyTiles + lVar36);
      if (*(void **)((longlong)pvVar40 + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar40 + 0x28));
      }
      iVar31 = *(int *)&(this->PendingDirtyTiles).field_0x10 + ~uVar41;
      if (iVar31 != 0) {
        memmove(pvVar40,(void *)((longlong)pvVar40 + 0x38),(longlong)iVar31 * 0x38);
      }
      puVar1 = &(this->PendingDirtyTiles).field_0x10;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      iVar39 = iVar39 + 1;
      if (pFVar33 != (FAsyncTask<FRecastTileGeneratorWrapper> *)0x0) {
        (**(code **)(pFVar33->_padding_ + 0x28))(pFVar33);
      }
LAB_146e6a265:
      if (bVar12) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar18) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar15) {
        FThreadStats::AddMessage(FVar37,CycleScopeEnd);
      }
      uVar41 = uVar41 - 1;
      lVar36 = lVar36 + -0x38;
    } while (-1 < (int)uVar41);
    FVar37 = local_150;
    if ((0 < iVar39) && (*(int *)&(this->PendingDirtyTiles).field_0x10 == 0)) {
      DestructItems<FPendingTileElement,int>
                (*(FPendingTileElement **)&(this->PendingDirtyTiles).field_0x0,0);
      *(undefined4 *)&(this->PendingDirtyTiles).field_0x10 = 0;
      if (*(int *)&(this->PendingDirtyTiles).field_0x14 != 0x40) {
        UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                  (0x38,8,0x40,(ForAnyElementType *)&this->PendingDirtyTiles,0,
                   (int *)&(this->PendingDirtyTiles).field_0x14);
      }
    }
  }
  pvVar40 = ThreadLocalStoragePointer;
  uVar41 = *(int *)&(this->RunningDirtyTiles).field_0x10 - 1;
  if (-1 < (int)uVar41) {
    lVar36 = (longlong)(int)uVar41 * 0x18;
    do {
      if ((*(int *)(*(longlong *)((longlong)pvVar40 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS2
          ) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        StatPtr_STAT_RecastNavMeshGenerator_ProcessTileTasks_FinishedTasks =
             (FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAsyncAndGetUpdatedTiles(int)_::_42_::FStat_STAT_RecastNavMeshGenerator_ProcessTileTasks_FinishedTasks>
              )0x0;
        pFVar21 = ::FName::FName(&local_80,
                                 "STAT_RecastNavMeshGenerator_ProcessTileTasks_FinishedTasks");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_RecastNavMeshGenerator_ProcessTileTasks_FinishedTasks,*pFVar21,
                   L"STAT_RecastNavMeshGenerator_ProcessTileTasks_FinishedTasks","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS2);
      }
      FVar27 = StatPtr_STAT_RecastNavMeshGenerator_ProcessTileTasks_FinishedTasks;
      if (StatPtr_STAT_RecastNavMeshGenerator_ProcessTileTasks_FinishedTasks ==
          (FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAsyncAndGetUpdatedTiles(int)_::_42_::FStat_STAT_RecastNavMeshGenerator_ProcessTileTasks_FinishedTasks>
           )0x0) {
        pFVar21 = ::FName::FName(&local_78,
                                 "STAT_RecastNavMeshGenerator_ProcessTileTasks_FinishedTasks");
        FVar27 = (FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAsyncAndGetUpdatedTiles(int)_::_42_::FStat_STAT_RecastNavMeshGenerator_ProcessTileTasks_FinishedTasks>
                  )FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_RecastNavMeshGenerator_ProcessTileTasks_FinishedTasks,
                              *pFVar21,L"STAT_RecastNavMeshGenerator_ProcessTileTasks_FinishedTasks"
                              ,"STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true
                              ,false,MCR_Invalid);
      }
      FVar37 = *(FName *)FVar27;
      bVar15 = false;
      bVar16 = false;
      local_f0.ComparisonIndex.Value = 0;
      local_f0.Number = 0;
      bVar18 = false;
      bVar12 = false;
      if ((FVar37.ComparisonIndex.Value.Value == 0) && (FVar37.Number == 0)) {
LAB_146e6a548:
        bVar15 = bVar18;
        bVar16 = bVar12;
        bVar12 = false;
        FVar37 = local_f0;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_15c.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_15c._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
          bVar15 = false;
          bVar16 = true;
          bVar18 = false;
          bVar12 = true;
          if (-1 < CpuChannel->Enabled) {
            local_120.ComparisonIndex.Value = FVar37.ComparisonIndex.Value.Value;
            local_120.Number = FVar37.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_120,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                       ,6999);
            bVar15 = true;
            bVar16 = true;
            bVar18 = true;
            bVar12 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_146e6a548;
        local_f0 = FVar37;
        FThreadStats::AddMessage(FVar37,CycleScopeStart);
        bVar12 = true;
      }
      uVar30 = ~uVar41 >> 0x1f;
      uVar20 = 0;
      if ((int)uVar41 < *(int *)&(this->RunningDirtyTiles).field_0x10) {
        uVar20 = uVar30;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        pTVar24 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar24;
      }
      lVar5 = *(longlong *)&this->RunningDirtyTiles;
      if ((*(longlong *)(lVar36 + 0x10 + lVar5) == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Element.AsyncTask",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                              ,0x1b5a,L""), bVar18)) {
        pcVar8 = (code *)swi(3);
        pTVar24 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar24;
      }
      pFVar6 = *(FAsyncTaskBase **)(lVar36 + 0x10 + lVar5);
      if ((pFVar6->WorkNotFinishedCounter).Counter == 0) {
        FAsyncTaskBase::SyncCompletion(pFVar6,false);
        pFVar6 = *(FAsyncTaskBase **)(lVar36 + 0x10 + lVar5);
        FAsyncTaskBase::CheckIdle(pFVar6);
        pFVar4 = (FRecastTileGenerator *)pFVar6[1]._padding_;
        if (*(char *)(lVar36 + 8 + lVar5) == '\0') {
          AddGeneratedTilesAndGetUpdatedTiles(this,&local_d0,pFVar4);
          if ((__return_storage_ptr__ == &local_d0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)this != (void*)&Source",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x96e,L""), bVar18)) {
            pcVar8 = (code *)swi(3);
            pTVar24 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
            return pTVar24;
          }
          lVar34 = (longlong)local_d0.ArrayNum;
          if (local_d0.ArrayNum != 0) {
            iVar39 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (8,8,local_d0.ArrayNum,&__return_storage_ptr__->AllocatorInstance,
                                &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax)
            ;
            memcpy((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar39 * 8,
                   local_d0.AllocatorInstance.Data,lVar34 << 3);
          }
          StoreCompressedTileCacheLayers
                    (this,pFVar4,*(int *)(lVar36 + lVar5),*(int *)(lVar36 + 4 + lVar5));
          ARecastNavMesh::AddTileDebugData
                    (this->DestNavMesh,*(int *)(lVar36 + lVar5),*(int *)(lVar36 + 4 + lVar5),
                     &pFVar4->DebugData);
          if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.AllocatorInstance.Data);
          }
        }
        FRecastTileGenerator::DumpSyncData(pFVar4);
        if ((*(int *)(*(longlong *)((longlong)pvVar40 + (ulonglong)_tls_index * 8) + 0x9d4c) <
             ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
          StatPtr_STAT_RecastNavMeshGenerator_TileGeneratorRemoval =
               (FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAsyncAndGetUpdatedTiles(int)_::_56_::FStat_STAT_RecastNavMeshGenerator_TileGeneratorRemoval>
                )0x0;
          pFVar21 = ::FName::FName(&local_70,"STAT_RecastNavMeshGenerator_TileGeneratorRemoval");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)
                     &StatPtr_STAT_RecastNavMeshGenerator_TileGeneratorRemoval,*pFVar21,
                     L"STAT_RecastNavMeshGenerator_TileGeneratorRemoval","STATGROUP_Quick",
                     "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
          _Init_thread_footer(&::_TSS3);
        }
        FVar28 = StatPtr_STAT_RecastNavMeshGenerator_TileGeneratorRemoval;
        if (StatPtr_STAT_RecastNavMeshGenerator_TileGeneratorRemoval ==
            (FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAsyncAndGetUpdatedTiles(int)_::_56_::FStat_STAT_RecastNavMeshGenerator_TileGeneratorRemoval>
             )0x0) {
          pFVar21 = ::FName::FName(&local_68,"STAT_RecastNavMeshGenerator_TileGeneratorRemoval");
          FVar28 = (FThreadSafeStaticStat<_protected:_class_TArray<FNavTileRef,TSizedDefaultAllocator<32>_>___cdecl_FRecastNavMeshGenerator::ProcessTileTasksAsyncAndGetUpdatedTiles(int)_::_56_::FStat_STAT_RecastNavMeshGenerator_TileGeneratorRemoval>
                    )FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_RecastNavMeshGenerator_TileGeneratorRemoval,*pFVar21,
                                L"STAT_RecastNavMeshGenerator_TileGeneratorRemoval",
                                "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,
                                true,false,MCR_Invalid);
        }
        FVar35 = *(FName *)FVar28;
        bVar18 = false;
        bVar17 = false;
        local_e0.ComparisonIndex.Value = 0;
        local_e0.Number = 0;
        if ((FVar35.ComparisonIndex.Value.Value == 0) && (FVar35.Number == 0)) {
LAB_146e6a8e4:
          bVar10 = false;
          FVar35 = local_e0;
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_158[0].Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_158[0]._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
            bVar18 = false;
            bVar17 = true;
            if (-1 < CpuChannel->Enabled) {
              local_118.ComparisonIndex.Value = FVar35.ComparisonIndex.Value.Value;
              local_118.Number = FVar35.Number;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_118,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                         ,0x1b70);
              bVar18 = true;
              bVar17 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable == false) goto LAB_146e6a8e4;
          local_e0 = FVar35;
          FThreadStats::AddMessage(FVar35,CycleScopeStart);
          bVar10 = true;
        }
        plVar7 = *(longlong **)(lVar36 + 0x10 + lVar5);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x28))(plVar7,1);
        }
        *(undefined8 *)(lVar36 + 0x10 + lVar5) = 0;
        uVar20 = 0;
        if ((int)uVar41 < *(int *)&(this->RunningDirtyTiles).field_0x10) {
          uVar20 = uVar30;
        }
        if ((uVar20 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar8 = (code *)swi(3);
          pTVar24 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
          return pTVar24;
        }
        iVar39 = *(int *)&(this->RunningDirtyTiles).field_0x10;
        iVar31 = ~uVar41 + iVar39;
        if (1 < iVar31) {
          iVar31 = 1;
        }
        if (iVar31 != 0) {
          memmove((void *)(lVar36 + *(longlong *)&this->RunningDirtyTiles),
                  (void *)(*(longlong *)&this->RunningDirtyTiles +
                          (longlong)(iVar39 - iVar31) * 0x18),(longlong)iVar31 * 0x18);
        }
        puVar1 = &(this->RunningDirtyTiles).field_0x10;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar17) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar18) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar10) {
          FThreadStats::AddMessage(FVar35,CycleScopeEnd);
        }
      }
      if (bVar16) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar15) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar12) && (FVar37 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_02 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_02 == (FThreadStats *)0x0) {
          this_03 = FThreadStatsPool::Get();
          this_02 = FThreadStatsPool::GetFromPool(this_03);
        }
        if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
          local_b8.NameAndInfo.Index = FVar37.ComparisonIndex.Value;
          local_b8.NameAndInfo.Number = FVar37.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_a8);
          local_b8.StatData.Pad[4] = '\0';
          local_b8.StatData.Pad[5] = '\0';
          local_b8.StatData.Pad[6] = '\0';
          local_b8.StatData.Pad[7] = '\0';
          local_b8.StatData.Pad[0] = local_a8.s.LowPart._0_1_;
          local_b8.StatData.Pad[1] = local_a8.s.LowPart._1_1_;
          local_b8.StatData.Pad[2] = local_a8.s.LowPart._2_1_;
          local_b8.StatData.Pad[3] = local_a8.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_02,&local_b8);
          piVar3 = &this_02->ScopeCount;
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            FThreadStats::Flush(this_02,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_02,false,false);
          }
        }
      }
      uVar41 = uVar41 - 1;
      lVar36 = lVar36 + -0x18;
      FVar37 = local_150;
    } while (-1 < (int)uVar41);
  }
  FMemScope::~FMemScope(&local_c0);
  FLLMScope::~FLLMScope(&local_168);
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar37,CycleScopeEnd);
  }
  return __return_storage_ptr__;
}

// ReAddTiles @ 146e6e290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

void __thiscall
FRecastNavMeshGenerator::ReAddTiles
          (FRecastNavMeshGenerator *this,
          TArray<FNavMeshDirtyTileElement,TSizedDefaultAllocator<32>_> *param_1)

{
  byte *pbVar1;
  ForAnyElementType *pFVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  TNavStatArray<FPendingTileElement> *pTVar6;
  code *pcVar7;
  double dVar8;
  undefined8 uVar9;
  longlong *plVar10;
  bool bVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  ForElementType<FSetElementId> FVar17;
  uint uVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  bool *pbVar21;
  FPendingTileElement *pFVar22;
  uint uVar23;
  uint *puVar24;
  int *piVar25;
  int iVar26;
  bool *pbVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double dVar30;
  undefined1 auStackY_1e8 [32];
  undefined1 local_198;
  undefined1 local_197;
  undefined1 local_196 [2];
  int local_194;
  undefined1 local_190 [8];
  int local_188;
  int local_184;
  LARGE_INTEGER local_180;
  FRecastNavMeshGenerator *local_178;
  longlong *local_170;
  int iStack_168;
  uint uStack_164;
  TBitArray<FDefaultBitArrayAllocator> *local_160;
  undefined4 uStack_158;
  uint uStack_154;
  int local_150;
  undefined4 uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 local_138;
  double local_130;
  double local_128;
  FScriptContainerElement local_120;
  FScriptContainerElement local_11f;
  undefined1 local_11e;
  void *local_118;
  undefined8 local_110;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  undefined4 local_bc;
  undefined1 local_b8 [32];
  uint *local_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  undefined1 local_80 [8];
  ForElementType<FSetElementId> local_78;
  int local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_178 = this;
  dtNavMesh::getParams(this->DestNavMesh->RecastNavMeshImpl->DetourNavMesh);
  local_8c = 0x80;
  local_b8._0_8_ = 0;
  local_b8._8_8_ = 0;
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_84 = 0;
  local_78 = (ForElementType<FSetElementId>)0x0;
  local_70 = 0;
  local_88 = 0xffffffff;
  QueryPerformanceCounter(&local_180);
  uVar9 = __real_7fefffffffffffff;
  iVar19 = param_1->ArrayNum;
  pFVar20 = (param_1->AllocatorInstance).Data;
  bVar13 = this->DestNavMesh->InvokerTilePriorityBumpIncrease;
  pFVar4 = pFVar20 + (longlong)iVar19 * 0x18;
  dVar8 = (double)local_180.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  dVar30 = (double)(int)(this->Config)._padding_ * (double)(this->Config)._padding_ *
           (double)this->DestNavMesh->InvokerTilePriorityBumpDistanceThresholdInTileUnits;
  while( true ) {
    if (param_1->ArrayNum != iVar19) {
      local_198 = 0;
      `TCheckedPointerIterator<FNavMeshDirtyTileElement_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_198);
    }
    if (pFVar20 == pFVar4) break;
    local_128 = *(double *)(pFVar20 + 8);
    local_140 = *(undefined8 *)pFVar20;
    local_120 = pFVar20[0x10];
    local_118 = (void *)0x0;
    local_110 = 0;
    local_138 = uVar9;
    local_11f = local_120;
    if (local_128 < dVar30 * dVar30) {
      local_11f = (FScriptContainerElement)0x5;
      if ((uint)bVar13 + (uint)(byte)local_120 < 5) {
        local_11f = (FScriptContainerElement)((char)local_120 + bVar13);
      }
    }
    local_11e = 1;
    local_130 = dVar8;
    TSet<FPendingTileElement,DefaultKeyFuncs<FPendingTileElement,0>,FDefaultSetAllocator>::
    Emplace<FPendingTileElement_const_&>
              ((TSet<FPendingTileElement,DefaultKeyFuncs<FPendingTileElement,0>,FDefaultSetAllocator>
                *)local_b8,(FPendingTileElement *)local_190,(bool *)&local_140);
    if (local_118 != (void *)0x0) {
      FMemory::Free(local_118);
    }
    pFVar20 = pFVar20 + 0x18;
  }
  pTVar6 = &this->PendingDirtyTiles;
  local_194 = local_b8._8_4_ - local_84;
  iVar19 = *(int *)&(this->PendingDirtyTiles).field_0x10;
  pbVar21 = *(bool **)&pTVar6->field_0x0;
  pbVar27 = pbVar21 + (longlong)iVar19 * 0x38;
LAB_146e6e456:
  do {
    if (*(int *)&(this->PendingDirtyTiles).field_0x10 != iVar19) {
      local_197 = 0;
      `TCheckedPointerIterator<FPendingTileElement,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_197);
    }
    if (pbVar21 == pbVar27) {
      uVar18 = local_b8._8_4_ - local_84;
      if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
      DestructItems<FPendingTileElement,int>
                (*(FPendingTileElement **)&pTVar6->field_0x0,
                 *(int *)&(this->PendingDirtyTiles).field_0x10);
      puVar3 = &(this->PendingDirtyTiles).field_0x14;
      *(undefined4 *)&(this->PendingDirtyTiles).field_0x10 = 0;
      if (*(uint *)puVar3 != uVar18) {
        UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                  (0x38,8,uVar18,(ForAnyElementType *)pTVar6,0,(int *)puVar3);
      }
      uVar18 = local_90;
      iVar19 = 0;
      iStack_168 = 0;
      uStack_164 = 1;
      iVar26 = 0;
      local_150 = 0;
      uStack_154 = 0;
      if (local_90 == 0) goto LAB_146e6e751;
      puVar24 = (uint *)(local_b8 + 0x10);
      if (local_98 != (uint *)0x0) {
        puVar24 = local_98;
      }
      uVar14 = *puVar24;
      iStack_168 = iVar19;
      local_150 = iVar26;
      if (uVar14 != 0) goto LAB_146e6e72c;
      break;
    }
    uVar18 = *(uint *)(pbVar21 + 4);
    uVar16 = *(int *)pbVar21 - uVar18 ^ uVar18 >> 0xd;
    uVar14 = (-0x61c88647 - uVar16) - uVar18 ^ uVar16 << 8;
    uVar23 = (uVar18 - uVar14) - uVar16 ^ uVar14 >> 0xd;
    uVar16 = (uVar16 - uVar23) - uVar14 ^ uVar23 >> 0xc;
    uVar14 = (uVar14 - uVar16) - uVar23 ^ uVar16 << 0x10;
    uVar23 = (uVar23 - uVar14) - uVar16 ^ uVar14 >> 5;
    uVar16 = (uVar16 - uVar23) - uVar14 ^ uVar23 >> 3;
    uVar14 = (uVar14 - uVar16) - uVar23 ^ uVar16 << 10;
    if (local_b8._8_4_ != local_84) {
      FVar17 = (ForElementType<FSetElementId>)local_80;
      if (local_78 != (ForElementType<FSetElementId>)0x0) {
        FVar17 = local_78;
      }
      iVar26 = *(int *)((longlong)FVar17 +
                       (ulonglong)(local_70 - 1U & ((uVar23 - uVar14) - uVar16 ^ uVar14 >> 0xf)) * 4
                       );
      while (iVar26 != -1) {
        piVar25 = (int *)((longlong)iVar26 * 0x40 + local_b8._0_8_);
        if ((*piVar25 == *(int *)pbVar21) && (piVar25[1] == uVar18)) {
          if ((iVar26 != -1) && (piVar25 != (int *)0x0)) {
            dVar8 = *(double *)(pbVar21 + 0x18);
            uVar28 = SUB84(dVar8,0);
            uVar29 = (undefined4)((ulonglong)dVar8 >> 0x20);
            dVar30 = *(double *)(piVar25 + 6);
            if (dVar30 <= dVar8) {
              uVar28 = SUB84(dVar30,0);
              uVar29 = (undefined4)((ulonglong)dVar30 >> 0x20);
            }
            *(ulonglong *)(piVar25 + 6) = CONCAT44(uVar29,uVar28);
            bVar13 = pbVar21[0x20];
            if (pbVar21[0x20] < *(byte *)(piVar25 + 8)) {
              bVar13 = *(byte *)(piVar25 + 8);
            }
            *(byte *)(piVar25 + 8) = bVar13;
            bVar13 = pbVar21[0x21];
            if (pbVar21[0x21] < *(byte *)((longlong)piVar25 + 0x21)) {
              bVar13 = *(byte *)((longlong)piVar25 + 0x21);
            }
            *(byte *)((longlong)piVar25 + 0x21) = bVar13;
            pbVar1 = (byte *)((longlong)piVar25 + 0x22);
            *pbVar1 = *pbVar1 | pbVar21[0x22];
            dVar8 = *(double *)(pbVar21 + 0x10);
            uVar28 = SUB84(dVar8,0);
            uVar29 = (undefined4)((ulonglong)dVar8 >> 0x20);
            dVar30 = *(double *)(piVar25 + 4);
            if (dVar30 <= dVar8) {
              uVar28 = SUB84(dVar30,0);
              uVar29 = (undefined4)((ulonglong)dVar30 >> 0x20);
            }
            *(ulonglong *)(piVar25 + 4) = CONCAT44(uVar29,uVar28);
            if (*pbVar1 != 0) {
              piVar25[0xc] = 0;
              if (piVar25[0xd] == 0) goto LAB_146e6e563;
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x38,8,0,(ForAnyElementType *)(piVar25 + 10),0,piVar25 + 0xd);
              pbVar21 = pbVar21 + 0x38;
              goto LAB_146e6e456;
            }
            pFVar2 = (ForAnyElementType *)(piVar25 + 10);
            if ((pFVar2 == (ForAnyElementType *)(pbVar21 + 0x28)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)this != (void*)&Source",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x96e,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar26 = *(int *)(pbVar21 + 0x30);
            if (iVar26 == 0) goto LAB_146e6e563;
            iVar12 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x38,8,iVar26,pFVar2,piVar25 + 0xc,piVar25 + 0xd);
            memcpy(pFVar2->Data + (longlong)iVar12 * 0x38,
                   ((ForAnyElementType *)(pbVar21 + 0x28))->Data,(longlong)iVar26 * 0x38);
            pbVar21 = pbVar21 + 0x38;
            goto LAB_146e6e456;
          }
          break;
        }
        iVar26 = piVar25[0xe];
      }
    }
    TSet<FPendingTileElement,DefaultKeyFuncs<FPendingTileElement,0>,FDefaultSetAllocator>::
    Emplace<FPendingTileElement_const_&>
              ((TSet<FPendingTileElement,DefaultKeyFuncs<FPendingTileElement,0>,FDefaultSetAllocator>
                *)local_b8,(FPendingTileElement *)(local_190 + 4),pbVar21);
LAB_146e6e563:
    pbVar21 = pbVar21 + 0x38;
  } while( true );
  while (uVar14 = puVar24[(longlong)iVar19 + 1], iVar19 = iStack_168, iVar26 = local_150,
        uVar14 == 0) {
    local_150 = iVar26 + 0x20;
    iStack_168 = iVar19 + 1;
    uStack_154 = local_90;
    if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_168)
    goto LAB_146e6e751;
  }
LAB_146e6e72c:
  uStack_164 = -uVar14 & uVar14;
  uVar5 = (ulonglong)uStack_164 * 2 + 1;
  lVar15 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  local_188 = (int)lVar15;
  uStack_154 = local_150 + -1 + local_188;
  if ((int)local_90 < (int)uStack_154) {
    uStack_154 = local_90;
  }
LAB_146e6e751:
  local_170 = (longlong *)local_b8;
  uStack_14c = local_bc;
  local_160 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
  uVar14 = local_90 & 0xffffffe0;
  iStack_148 = local_b8._8_4_ - local_84;
  uStack_158 = 0xffffffff;
  TStack_100.CurrentBitIndex = uStack_154;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100._padding_ = CONCAT44(uStack_164,iStack_168);
  iVar19 = (int)local_90 >> 5;
  TStack_100._28_4_ = local_bc;
  TStack_100.BaseBitIndex = local_150;
  uStack_e0 = CONCAT44(uStack_144,iStack_148);
  bVar13 = (byte)local_90;
  local_108 = local_170;
  TStack_100.Array = local_160;
  if (((int)local_90 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (uVar18 != local_90) {
    puVar24 = (uint *)(local_b8 + 0x10);
    if (local_98 != (uint *)0x0) {
      puVar24 = local_98;
    }
    uVar18 = -1 << (bVar13 & 0x1f) & puVar24[iVar19];
    while (uVar18 == 0) {
      lVar15 = (longlong)iVar19;
      uVar14 = uVar14 + 0x20;
      iVar19 = iVar19 + 1;
      uVar18 = local_90;
      if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_146e6e852;
      uVar18 = puVar24[lVar15 + 1];
    }
    uVar5 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_184 = (int)lVar15;
    uVar18 = local_184 + -1 + uVar14;
    if ((int)local_90 < (int)uVar18) {
      uVar18 = local_90;
    }
  }
LAB_146e6e852:
  while( true ) {
    plVar10 = local_108;
    if ((int)local_108[1] - *(int *)((longlong)local_108 + 0x34) != (int)uStack_e0) {
      local_196[0] = 0;
      `TSparseArray<TSparseSetElement<FPendingTileElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_196);
    }
    if (((TStack_100.CurrentBitIndex == uVar18) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10))) &&
       (plVar10 == (longlong *)local_b8)) break;
    pFVar22 = (FPendingTileElement *)(*plVar10 + (longlong)TStack_100.CurrentBitIndex * 0x40);
    if (((*(FPendingTileElement **)&pTVar6->field_0x0 <= pFVar22) &&
        (pFVar22 < *(FPendingTileElement **)&pTVar6->field_0x0 + *(int *)puVar3)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar19 = *(int *)&(this->PendingDirtyTiles).field_0x10;
    if (iVar19 == *(int *)puVar3) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                         (0x838,(ForAnyElementType *)pTVar6,(int *)puVar3);
    }
    *(int *)&(this->PendingDirtyTiles).field_0x10 = iVar19 + 1;
    FPendingTileElement::FPendingTileElement
              ((FPendingTileElement *)((longlong)iVar19 * 0x38 + *(longlong *)&pTVar6->field_0x0),
               pFVar22);
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  if (0 < local_194) {
    (**(code **)(local_178->_padding_ + 0x90))();
  }
  local_70 = 0;
  if (local_78 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_78);
  }
  TSparseArray<TSparseSetElement<FPendingTileElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPendingTileElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FPendingTileElement>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_b8);
  return;
}

// RebuildAll @ 146e6e9e0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

bool __thiscall FRecastNavMeshGenerator::RebuildAll(FRecastNavMeshGenerator *this)

{
  undefined1 *puVar1;
  double dVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  LARGE_INTEGER local_res8 [4];
  TVector<double> local_28;
  
  ARecastNavMesh::UpdateNavVersion(this->DestNavMesh);
  FPImplRecastNavMesh::ReleaseDetourNavMesh(this->DestNavMesh->RecastNavMeshImpl);
  this->DestNavMesh->bHasNoTileData = false;
  pTVar4 = Unreal2RecastPoint(&local_28,&this->DestNavMesh->NavMeshOriginOffset);
  dVar2 = (pTVar4->field0_0x0)._s_0.Y;
  (this->RcNavMeshOrigin).field0_0x0._s_0.X = (pTVar4->field0_0x0)._s_0.X;
  (this->RcNavMeshOrigin).field0_0x0._s_0.Y = dVar2;
  (this->RcNavMeshOrigin).field0_0x0._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
  ConstructTiledNavMesh(this);
  bVar3 = MarkNavBoundsDirty(this);
  if (!bVar3) {
    ARecastNavMesh::RequestDrawingUpdate(this->DestNavMesh,false);
    return true;
  }
  QueryPerformanceCounter(local_res8);
  this->RebuildAllStartTime =
       (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000;
  return true;
}

// RebuildDirtyAreas @ 146e6eab0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

void __thiscall
FRecastNavMeshGenerator::RebuildDirtyAreas
          (FRecastNavMeshGenerator *this,
          TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32>_> *param_1)

{
  if (this->DestNavMesh->RecastNavMeshImpl->DetourNavMesh == (dtNavMesh *)0x0) {
    ConstructTiledNavMesh(this);
  }
                    /* WARNING: Could not recover jumptable at 0x000146e6eaed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xa0))(this,param_1);
  return;
}

// RemoveLayers @ 146e6fcb0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRecastNavMeshGenerator::RemoveLayers
          (FRecastNavMeshGenerator *this,TIntPoint<int> *param_1,
          TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_Navigation_RemoveLayers> FVar10;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *pTVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_68;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_58;
  
  FVar10 = StatPtr_STAT_Navigation_RemoveLayers;
  if (StatPtr_STAT_Navigation_RemoveLayers ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_RemoveLayers>)0x0) {
    pFVar9 = ::FName::FName(&local_res20,"STAT_Navigation_RemoveLayers");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_Navigation_RemoveLayers>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_RemoveLayers,*pFVar9,
                        L"Recast: remove layers","STATGROUP_Navigation","STATCAT_Advanced",
                        L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x1af8);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar5 = true;
      goto LAB_146e6fe0e;
    }
  }
  bVar5 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_146e6fe0e:
  pTVar11 = RemoveTileLayersAndGetUpdatedTiles
                      (this,&local_58,(param_1->field0_0x0)._s_0.X,(param_1->field0_0x0)._s_0.Y,
                       (TMap<int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>_>
                        *)0x0);
  if (param_2 == pTVar11) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = pTVar11->ArrayNum;
  if (iVar2 != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar2,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
    memmove((param_2->AllocatorInstance).Data + (longlong)iVar8 * 8,
            (pTVar11->AllocatorInstance).Data,(longlong)iVar2 << 3);
    pTVar11->ArrayNum = 0;
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  ARecastNavMesh::MarkEmptyTileCacheLayers
            (this->DestNavMesh,(param_1->field0_0x0)._s_0.X,(param_1->field0_0x0)._s_0.Y);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_68.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_68);
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

// RemoveTileLayers @ 146e6ffc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRecastNavMeshGenerator::RemoveTileLayers
          (FRecastNavMeshGenerator *this,dtNavMesh *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ARecastNavMesh *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong64 uVar7;
  FName *pFVar8;
  FName *pFVar9;
  ForElementType<dtMeshTile_*> FVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStackY_298 [32];
  FLogScopedCategoryAndVerbosityOverride local_228;
  FName local_218;
  FName local_210;
  ForElementType<dtMeshTile_*> local_208;
  int local_180 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_298;
  if ((((param_1 == (dtNavMesh *)0x0) || (param_1->m_tileWidth <= 0.0)) ||
      (param_1->m_tileHeight <= 0.0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DetourMesh && !DetourMesh->isEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                         ,0x17cb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = dtNavMesh::getTileCountAt(param_1,param_2,param_3);
  if (0 < iVar4) {
    local_180[1] = 0x10;
    uVar12 = 0;
    local_208.SecondaryData = (ForElementType<dtMeshTile_*>)0x0;
    local_180[0] = 0;
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<dtMeshTile_*>_>
                      (8,8,iVar4,&local_208,local_180,local_180 + 1);
    FVar10 = (ForElementType<dtMeshTile_*>)&local_208;
    if (local_208.SecondaryData != (ForElementType<dtMeshTile_*>)0x0) {
      FVar10 = local_208.SecondaryData;
    }
    memset((void *)((longlong)FVar10 + (longlong)iVar5 * 8),0,(longlong)iVar4 * 8);
    FVar10 = (ForElementType<dtMeshTile_*>)&local_208;
    if (local_208.SecondaryData != (ForElementType<dtMeshTile_*>)0x0) {
      FVar10 = local_208.SecondaryData;
    }
    dtNavMesh::getTilesAt(param_1,param_2,param_3,(dtMeshTile **)FVar10,iVar4);
    if (0 < iVar4) {
      lVar11 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar12 < local_180[0]) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar10 = (ForElementType<dtMeshTile_*>)&local_208;
        if (local_208.SecondaryData != (ForElementType<dtMeshTile_*>)0x0) {
          FVar10 = local_208.SecondaryData;
        }
        uVar7 = dtNavMesh::getTileRef(param_1,*(dtMeshTile **)((longlong)FVar10 + lVar11 * 8));
        this->NumActiveTiles = this->NumActiveTiles + -1;
        if (6 < (byte)LogNavigation._0_1_) {
          FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                    (&local_228,(FName)LogNavigation._4_8_,All);
          uVar6 = 0;
          if ((int)uVar12 < local_180[0]) {
            uVar6 = ~uVar12 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          this_00 = this->DestNavMesh;
          FVar10 = (ForElementType<dtMeshTile_*>)&local_208;
          if (local_208.SecondaryData != (ForElementType<dtMeshTile_*>)0x0) {
            FVar10 = local_208.SecondaryData;
          }
          uVar1 = *(ushort *)(*(longlong *)(*(longlong *)((longlong)FVar10 + lVar11 * 8) + 8) + 2);
          pFVar8 = ::FName::FName(&local_218,"removing");
          pFVar9 = ::FName::FName(&local_210,"");
          local_178._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_178,"FRecastNavMeshGenerator::RemoveTileLayers",0x29,Yes);
          ARecastNavMesh::LogRecastTile
                    (this_00,local_178.Ptr,pFVar9,pFVar8,param_1,param_2,param_3,(uint)uVar1,uVar7);
          if ((void *)local_178._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_178._padding_);
          }
          FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogNavigation,All);
          FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride
                    (&local_228);
        }
        dtNavMesh::removeTile(param_1,uVar7,(uchar **)0x0,(int *)0x0);
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar4);
    }
    if (local_208.SecondaryData != (ForElementType<dtMeshTile_*>)0x0) {
      FMemory::Free((void *)local_208.SecondaryData);
    }
  }
  ARecastNavMesh::RemoveTileCacheLayers(this->DestNavMesh,param_2,param_3);
  ARecastNavMesh::RemoveTileDebugData(this->DestNavMesh,param_2,param_3);
  return;
}

// RemoveTileLayersAndGetUpdatedTiles @ 146e70340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

TArray<FNavTileRef,TSizedDefaultAllocator<32>_> * __thiscall
FRecastNavMeshGenerator::RemoveTileLayersAndGetUpdatedTiles
          (FRecastNavMeshGenerator *this,
          TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1,
          int param_2,
          TMap<int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>_>
          *param_3)

{
  ARecastNavMesh *this_00;
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *pTVar7;
  ulong64 uVar8;
  FName *pFVar9;
  FName *pFVar10;
  byte bVar11;
  byte bVar12;
  ulonglong uVar13;
  dtNavMesh *this_01;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStackY_248 [32];
  ForAnyElementType local_1f8;
  int local_1f0 [3];
  int local_1e4;
  int local_1e0;
  ulong64 local_1d8;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *local_1d0;
  FRecastNavMeshGenerator *local_1c8;
  TPairInitializer<int_const_&,unsigned___int64_const_&> local_1c0;
  FNavTileRef local_1b0;
  TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
  *local_1a8;
  longlong local_1a0;
  int *local_198;
  ulong64 *local_190;
  FName local_188;
  FName local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_248;
  uVar15 = 0;
  local_1a8 = (TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
               *)param_3;
  this_01 = this->DestNavMesh->RecastNavMeshImpl->DetourNavMesh;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (((this_01 != (dtNavMesh *)0x0) && (0.0 < this_01->m_tileWidth)) &&
     (0.0 < this_01->m_tileHeight)) {
    local_1e4 = param_1;
    local_1e0 = param_2;
    local_1d0 = __return_storage_ptr__;
    local_1c8 = this;
    local_1c0.Value = (ulong64 *)this_01;
    iVar5 = dtNavMesh::getTileCountAt(this_01,param_1,param_2);
    if (0 < iVar5) {
      local_1f8.Data = (FScriptContainerElement *)0x0;
      local_1f0[0] = 0;
      local_1f0[1] = 0;
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar5,&local_1f8,local_1f0,local_1f0 + 1);
      local_1a0 = (longlong)iVar5;
      memset(local_1f8.Data + (longlong)iVar6 * 8,0,(longlong)iVar5 * 8);
      dtNavMesh::getTilesAt(this_01,param_1,param_2,(dtMeshTile **)local_1f8.Data,iVar5);
      if (0 < iVar5) {
        lVar16 = 0;
        do {
          uVar14 = 0;
          if ((int)uVar15 < local_1f0[0]) {
            uVar14 = ~uVar15 >> 0x1f;
          }
          if (uVar14 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar1 = (code *)swi(3);
              pTVar7 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
              return pTVar7;
            }
          }
          local_1f0[2] = (int)*(ushort *)
                               (*(longlong *)(*(longlong *)(local_1f8.Data + lVar16 * 8) + 8) + 2);
          uVar14 = 0;
          if ((int)uVar15 < local_1f0[0]) {
            uVar14 = ~uVar15 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            pTVar7 = (TArray<FNavTileRef,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar7;
          }
          uVar8 = dtNavMesh::getTileRef(this_01,*(dtMeshTile **)(local_1f8.Data + lVar16 * 8));
          iVar5 = local_1f0[2];
          this->NumActiveTiles = this->NumActiveTiles + -1;
          this_00 = this->DestNavMesh;
          local_1d8 = uVar8;
          pFVar9 = ::FName::FName(&local_188,"removing");
          pFVar10 = ::FName::FName(&local_180,"");
          local_178._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_178,"FRecastNavMeshGenerator::RemoveTileLayersAndGetUpdatedTiles",0x3b,
                     Yes);
          this_01 = (dtNavMesh *)local_1c0.Value;
          ARecastNavMesh::LogRecastTile
                    (this_00,local_178.Ptr,pFVar10,pFVar9,(dtNavMesh *)local_1c0.Value,local_1e4,
                     local_1e0,iVar5,uVar8);
          if ((void *)local_178._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_178._padding_);
          }
          dtNavMesh::removeTile(this_01,local_1d8,(uchar **)0x0,(int *)0x0);
          local_1b0.TileRef = local_1d8;
          TArray<FNavTileRef,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FNavTileRef>
                    (local_1d0,&local_1b0);
          bVar2 = (byte)*(uint *)((longlong)this_01 + 0xf8);
          bVar3 = (byte)*(uint *)((longlong)this_01 + 0xf4);
          bVar11 = bVar2 + bVar3;
          bVar12 = (byte)*(uint *)((longlong)this_01 + 0xf0);
          uVar14 = ((uint)(local_1d8 >> (bVar11 & 0x3f)) & (int)(1L << (bVar12 & 0x3f)) - 1U) + 1 &
                   (1 << (bVar12 & 0x1f)) - 1U;
          uVar13 = 1;
          if (uVar14 != 0) {
            uVar13 = (ulonglong)uVar14;
          }
          local_1d8 = (ulonglong)
                      ((int)(1L << (bVar3 & 0x3f)) - 1U & (uint)(local_1d8 >> (bVar2 & 0x3f))) <<
                      (bVar2 & 0x3f) |
                      (ulonglong)((int)(1L << (bVar2 & 0x3f)) - 1) & local_1d8 & 0xffffffff |
                      uVar13 << (bVar11 & 0x3f);
          if (local_1a8 !=
              (TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
               *)0x0) {
            local_198 = local_1f0 + 2;
            local_190 = &local_1d8;
            TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_const_&,unsigned___int64_const_&>_>
                      (local_1a8,&local_1c0,(bool *)&local_198);
          }
          uVar15 = uVar15 + 1;
          lVar16 = lVar16 + 1;
          __return_storage_ptr__ = local_1d0;
          this = local_1c8;
          param_2 = local_1e0;
          param_1 = local_1e4;
        } while (lVar16 < local_1a0);
      }
      if (local_1f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data);
      }
    }
    ARecastNavMesh::RemoveTileCacheLayers(this->DestNavMesh,param_1,param_2);
    ARecastNavMesh::RemoveTileDebugData(this->DestNavMesh,param_1,param_2);
  }
  return __return_storage_ptr__;
}

// RemoveTiles @ 146e70750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

void __thiscall
FRecastNavMeshGenerator::RemoveTiles
          (FRecastNavMeshGenerator *this,
          TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  dtNavMesh *pdVar2;
  int *piVar3;
  FRecastTileGenerator *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  longlong lVar11;
  int *piVar12;
  byte bVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  byte bVar22;
  int iVar23;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined1 local_7e;
  void *local_78;
  undefined8 local_70;
  
  uVar9 = _UNK_1514a7508;
  uVar8 = ___xmm_bff00000000000007fefffffffffffff;
  uVar7 = __real_7fefffffffffffff;
  pdVar2 = this->DestNavMesh->RecastNavMeshImpl->DetourNavMesh;
  if (((pdVar2 == (dtNavMesh *)0x0) || (pdVar2->m_tileWidth <= 0.0)) ||
     (pdVar2->m_tileHeight <= 0.0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  local_res20 = param_1->ArrayNum;
  uVar20 = (ulonglong)(int)local_res20;
  pFVar14 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar14 + uVar20 * 8;
  do {
    if (param_1->ArrayNum != (int)uVar20) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Math::TIntPoint<int>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
    }
    if (pFVar14 == pFVar1) {
      return;
    }
    if (bVar6) {
      RemoveTileLayers(this,pdVar2,*(int *)pFVar14,*(int *)(pFVar14 + 4));
    }
    if (0 < *(int *)&(this->PendingDirtyTiles).field_0x10) {
      local_a0 = *(undefined8 *)pFVar14;
      local_88 = uVar7;
      local_80 = 0x303;
      local_7e = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
      local_98 = uVar8;
      uStack_90 = uVar9;
      if (((*(undefined8 **)&this->PendingDirtyTiles <= &local_a0) &&
          (&local_a0 <
           *(undefined8 **)&this->PendingDirtyTiles +
           (longlong)*(int *)&(this->PendingDirtyTiles).field_0x14 * 7)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar21 = *(int *)&(this->PendingDirtyTiles).field_0x10;
      lVar11 = (longlong)iVar21;
      if (iVar21 != 0) {
        piVar3 = *(int **)&this->PendingDirtyTiles;
        iVar23 = 0;
        iVar16 = 0;
        lVar15 = 0;
        iVar21 = (int)local_a0;
        iVar19 = local_a0._4_4_;
        if ((*piVar3 == (int)local_a0) && (piVar3[1] == local_a0._4_4_)) {
          bVar22 = 0;
        }
        else {
          bVar22 = 1;
        }
        do {
          lVar15 = lVar15 + 1;
          iVar17 = iVar16 + 1;
          if (lVar15 < lVar11) {
            piVar12 = piVar3 + lVar15 * 0xe;
            do {
              if ((*piVar12 == iVar21) && (piVar12[1] == iVar19)) {
                bVar13 = 0;
              }
              else {
                bVar13 = 1;
              }
              if (bVar22 != bVar13) break;
              iVar17 = iVar17 + 1;
              lVar15 = lVar15 + 1;
              piVar12 = piVar12 + 0xe;
            } while (lVar15 < lVar11);
          }
          iVar18 = iVar17 - iVar16;
          if (bVar22 == 0) {
            DestructItems<FPendingTileElement,int>
                      ((FPendingTileElement *)(piVar3 + (longlong)iVar16 * 0xe),iVar18);
            iVar21 = (int)local_a0;
            iVar19 = local_a0._4_4_;
          }
          else {
            if (iVar23 != iVar16) {
              memmove(piVar3 + (longlong)iVar23 * 0xe,piVar3 + (longlong)iVar16 * 0xe,
                      (longlong)iVar18 * 0x38);
              iVar21 = (int)local_a0;
              iVar19 = local_a0._4_4_;
            }
            iVar23 = iVar23 + iVar18;
          }
          bVar22 = bVar22 ^ 1;
          iVar16 = iVar17;
        } while (lVar15 < lVar11);
        *(int *)&(this->PendingDirtyTiles).field_0x10 = iVar23;
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
    }
    pFVar4 = (this->SyncTimeSlicedData).TileGeneratorSync.Object;
    if (((pFVar4 != (FRecastTileGenerator *)0x0) && (pFVar4->TileX == *(int *)pFVar14)) &&
       (pFVar4->TileY == *(int *)(pFVar14 + 4))) {
      ResetTimeSlicedTileGeneratorSync(this);
    }
    pFVar14 = pFVar14 + 8;
    uVar20 = (ulonglong)local_res20;
  } while( true );
}

// ResetTimeSlicedTileGeneratorSync @ 146e70d50

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

void __thiscall
FRecastNavMeshGenerator::ResetTimeSlicedTileGeneratorSync(FRecastNavMeshGenerator *this)

{
  int iVar1;
  TSharedPtr<FRecastTileGenerator,1> *pTVar2;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar2 = &(this->SyncTimeSlicedData).TileGeneratorSync;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar2 != (TSharedPtr<FRecastTileGenerator,1> *)&local_18) {
    pTVar2->Object = (FRecastTileGenerator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SyncTimeSlicedData).TileGeneratorSync.SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  (this->SyncTimeSlicedData).ProcessTileTasksSyncState = Init;
  iVar1 = (this->SyncTimeSlicedData).UpdatedTilesCache.ArrayMax;
  (this->SyncTimeSlicedData).UpdatedTilesCache.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SyncTimeSlicedData).UpdatedTilesCache.AllocatorInstance,0,
               &(this->SyncTimeSlicedData).UpdatedTilesCache.ArrayMax);
  }
  TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
           *)&(this->SyncTimeSlicedData).OldLayerTileIdMapCached);
  iVar1 = (this->SyncTimeSlicedData).ResultTileRefsCached.ArrayMax;
  (this->SyncTimeSlicedData).ResultTileRefsCached.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SyncTimeSlicedData).ResultTileRefsCached.AllocatorInstance,0,
               &(this->SyncTimeSlicedData).ResultTileRefsCached.ArrayMax);
  }
  (this->SyncTimeSlicedData).AddGenTilesLayerIndex = 0;
  (this->SyncTimeSlicedData).AddGeneratedTilesState = Init;
  return;
}

// ResolveGeneratedLinkAreas @ 146e70ed0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRecastNavMeshGenerator::ResolveGeneratedLinkAreas
          (FRecastNavMeshGenerator *this,FRecastBuildConfig *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  uint *puVar8;
  ARecastNavMesh *pAVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  FName local_res18;
  FName local_res20;
  FString local_58;
  FString local_48;
  
  pAVar9 = this->DestNavMesh;
  if (((pAVar9 != (ARecastNavMesh *)0x0) && (pAVar9->bGenerateNavLinks != 0)) &&
     (UE::NavMesh::Private::bAllowLinkGeneration)) {
    if ((pAVar9->NavLinkJumpConfigs).ArrayNum != (param_1->JumpConfigs).ArrayNum) {
      local_res8[0] = 0;
      bVar5 = `FRecastNavMeshGenerator::ResolveGeneratedLinkAreas'::__l6::<lambda_2>::operator()
                        (local_res8);
      if (!bVar5) {
        return;
      }
    }
    pAVar9 = this->DestNavMesh;
    uVar12 = 0;
    if (0 < (pAVar9->NavLinkJumpConfigs).ArrayNum) {
      lVar10 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar12 < (pAVar9->NavLinkJumpConfigs).ArrayNum) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (pAVar9->NavLinkJumpConfigs).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar12 < (param_1->JumpConfigs).ArrayNum) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = *(longlong *)(pFVar2 + lVar10 * 0x60 + 0x30);
        pFVar11 = (param_1->JumpConfigs).AllocatorInstance.Data + lVar10 * 0x40;
        if ((lVar3 != 0) &&
           (pUVar7 = Z_Construct_UClass_UNavAreaBase_NoRegister(), pUVar7 != (UClass *)0x0)) {
          iVar1 = (int)pUVar7->_padding_;
          if ((*(int *)(lVar3 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar7->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if ((bVar5) && (lVar3 = *(longlong *)(pFVar2 + lVar10 * 0x60 + 0x30), lVar3 != 0)) {
            pUVar7 = Z_Construct_UClass_UNavAreaBase_NoRegister();
            if (pUVar7 == (UClass *)0x0) {
LAB_146e710a5:
              pUVar7 = (UClass *)0x0;
            }
            else {
              iVar1 = (int)pUVar7->_padding_;
              if ((*(int *)(lVar3 + 0x38) < iVar1) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar7->_padding_)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (!bVar5) goto LAB_146e710a5;
              pUVar7 = *(UClass **)(pFVar2 + lVar10 * 0x60 + 0x30);
            }
            puVar8 = (uint *)TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                             ::Find((TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                                     *)&(this->AdditionalCachedData).AreaClassToIdMap,pUVar7);
            if (puVar8 == (uint *)0x0) {
              if (2 < (byte)LogNavigation._0_1_) {
                lVar3 = *(longlong *)(pFVar2 + lVar10 * 0x60 + 0x30);
                if ((lVar3 == 0) ||
                   (pUVar7 = Z_Construct_UClass_UNavAreaBase_NoRegister(), pUVar7 == (UClass *)0x0))
                {
LAB_146e7117a:
                  ::FString::FString(&local_58,L"None");
                }
                else {
                  iVar1 = (int)pUVar7->_padding_;
                  if ((*(int *)(lVar3 + 0x38) < iVar1) ||
                     ((longlong *)
                      *(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
                      &pUVar7->_padding_)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  if ((!bVar5) || (*(longlong *)(pFVar2 + lVar10 * 0x60 + 0x30) == 0))
                  goto LAB_146e7117a;
                  local_res18 = *(FName *)(*(longlong *)(pFVar2 + lVar10 * 0x60 + 0x30) + 0x18);
                  ::FName::ToString(&local_res18,&local_58);
                }
                UE::Logging::Private::BasicLog<3>
                          ((FStaticBasicLogRecord *)&PTR_u_FRecastTileGene_1514a2cd8,
                           (FLogCategoryBase *)&LogNavigation);
                if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_58.Data.AllocatorInstance.Data);
                }
              }
            }
            else {
              uVar6 = *puVar8;
              if (((uVar6 != (uVar6 & 0xff)) || ((int)uVar6 < 0)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IntFitsIn<OutType>(In)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                     ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"
                                    ), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar11[0x3c] = SUB41(uVar6,0);
              *(ushort *)(pFVar11 + 0x38) =
                   (this->AdditionalCachedData).FlagsPerOffMeshLinkArea[(int)*puVar8];
            }
          }
        }
        lVar3 = *(longlong *)(pFVar2 + lVar10 * 0x60 + 0x38);
        if ((lVar3 != 0) &&
           (pUVar7 = Z_Construct_UClass_UNavAreaBase_NoRegister(), pUVar7 != (UClass *)0x0)) {
          iVar1 = (int)pUVar7->_padding_;
          if ((*(int *)(lVar3 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar7->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if ((bVar5) && (lVar3 = *(longlong *)(pFVar2 + lVar10 * 0x60 + 0x38), lVar3 != 0)) {
            pUVar7 = Z_Construct_UClass_UNavAreaBase_NoRegister();
            if (pUVar7 == (UClass *)0x0) {
LAB_146e71243:
              pUVar7 = (UClass *)0x0;
            }
            else {
              iVar1 = (int)pUVar7->_padding_;
              if ((*(int *)(lVar3 + 0x38) < iVar1) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar7->_padding_)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (!bVar5) goto LAB_146e71243;
              pUVar7 = *(UClass **)(pFVar2 + lVar10 * 0x60 + 0x38);
            }
            puVar8 = (uint *)TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                             ::Find((TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                                     *)&(this->AdditionalCachedData).AreaClassToIdMap,pUVar7);
            if (puVar8 == (uint *)0x0) {
              if (2 < (byte)LogNavigation._0_1_) {
                lVar3 = *(longlong *)(pFVar2 + lVar10 * 0x60 + 0x38);
                if ((lVar3 == 0) ||
                   (pUVar7 = Z_Construct_UClass_UNavAreaBase_NoRegister(), pUVar7 == (UClass *)0x0))
                {
LAB_146e71318:
                  ::FString::FString(&local_48,L"None");
                }
                else {
                  iVar1 = (int)pUVar7->_padding_;
                  if ((*(int *)(lVar3 + 0x38) < iVar1) ||
                     ((longlong *)
                      *(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
                      &pUVar7->_padding_)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  if ((!bVar5) || (*(longlong *)(pFVar2 + lVar10 * 0x60 + 0x38) == 0))
                  goto LAB_146e71318;
                  local_res20 = *(FName *)(*(longlong *)(pFVar2 + lVar10 * 0x60 + 0x38) + 0x18);
                  ::FName::ToString(&local_res20,&local_48);
                }
                UE::Logging::Private::BasicLog<3>
                          ((FStaticBasicLogRecord *)&PTR_u_FRecastTileGene_1514a2cd8,
                           (FLogCategoryBase *)&LogNavigation);
                if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_48.Data.AllocatorInstance.Data);
                }
              }
            }
            else {
              uVar6 = *puVar8;
              if (((uVar6 != (uVar6 & 0xff)) || ((int)uVar6 < 0)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IntFitsIn<OutType>(In)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                     ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"
                                    ), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar11[0x3d] = SUB41(uVar6,0);
              *(ushort *)(pFVar11 + 0x3a) =
                   (this->AdditionalCachedData).FlagsPerOffMeshLinkArea[(int)*puVar8];
            }
          }
        }
        if ((pFVar11[0x3c] == (FScriptContainerElement)0x0) &&
           (pFVar11[0x3d] == (FScriptContainerElement)0x0)) {
          if (2 < (byte)LogNavigation._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
          }
          *pFVar11 = (FScriptContainerElement)0x0;
        }
        pAVar9 = this->DestNavMesh;
        uVar12 = uVar12 + 1;
        lVar10 = lVar10 + 1;
      } while ((int)uVar12 < (pAVar9->NavLinkJumpConfigs).ArrayNum);
    }
  }
  return;
}

// RestrictBuildingToActiveTiles @ 146e713e0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

void __thiscall
FRecastNavMeshGenerator::RestrictBuildingToActiveTiles(FRecastNavMeshGenerator *this,bool param_1)

{
  dtNavMesh *this_00;
  dtMeshHeader *pdVar1;
  int iVar2;
  dtMeshTile *pdVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
  *this_01;
  uint uVar7;
  TIntPoint<int>_u_0 local_res8;
  
  if ((((ZPULL(*(undefined4 *)&this->field_0x408,1,1) != (uint)param_1) &&
       (*(uint *)&this->field_0x408 =
             *(undefined4 *)&this->field_0x408 & 0xfffffffd | (uint)param_1 + (uint)param_1, param_1
       )) && (this_00 = this->DestNavMesh->RecastNavMeshImpl->DetourNavMesh,
             this_00 != (dtNavMesh *)0x0)) &&
     ((0.0 < this_00->m_tileWidth && (0.0 < this_00->m_tileHeight)))) {
    this_01 = &this->ActiveTileSet;
    iVar6 = 0;
    if (*(int *)&(this->ActiveTileSet).Elements.field_0x8 !=
        *(int *)&(this->ActiveTileSet).Elements.field_0x34) {
      TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
      ::UnhashElements(this_01);
      iVar2 = *(int *)&(this->ActiveTileSet).Elements.field_0xc;
      *(undefined4 *)&(this->ActiveTileSet).Elements.field_0x8 = 0;
      if (iVar2 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)this_01,0,
                   (int *)&(this->ActiveTileSet).Elements.field_0xc);
      }
      *(undefined4 *)&(this->ActiveTileSet).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->ActiveTileSet).Elements.field_0x34 = 0;
      *(undefined4 *)&(this->ActiveTileSet).Elements.field_0x28 = 0;
    }
    iVar2 = dtNavMesh::getMaxTiles(this_00);
    if (0 < iVar2) {
      do {
        pdVar3 = dtNavMesh::getTile(this_00,iVar6);
        if (((pdVar3 != (dtMeshTile *)0x0) &&
            (pdVar1 = pdVar3->header, pdVar1 != (dtMeshHeader *)0x0)) && (pdVar1->polyCount != 0)) {
          local_res8._s_0.X = pdVar1->x;
          local_res8._s_0.Y = pdVar1->y;
          uVar7 = local_res8._s_0.X - local_res8._s_0.Y ^ (uint)local_res8._s_0.Y >> 0xd;
          uVar4 = (-0x61c88647 - uVar7) - local_res8._s_0.Y ^ uVar7 << 8;
          uVar5 = (local_res8._s_0.Y - uVar7) - uVar4 ^ uVar4 >> 0xd;
          uVar7 = (uVar7 - uVar5) - uVar4 ^ uVar5 >> 0xc;
          uVar4 = (uVar4 - uVar7) - uVar5 ^ uVar7 << 0x10;
          uVar5 = (uVar5 - uVar4) - uVar7 ^ uVar4 >> 5;
          uVar7 = (uVar7 - uVar5) - uVar4 ^ uVar5 >> 3;
          uVar4 = (uVar4 - uVar7) - uVar5 ^ uVar7 << 10;
          TSet<UE::Math::TIntPoint<int>,DefaultKeyFuncs<UE::Math::TIntPoint<int>,0>,FDefaultSetAllocator>
          ::FindOrAddByHash<UE::Math::TIntPoint<int>_>
                    (this_01,(uVar5 - uVar4) - uVar7 ^ uVar4 >> 0xf,
                     (TIntPoint<int> *)&local_res8._s_0,(bool *)0x0);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar2);
    }
  }
  return;
}

// SetupTileConfig @ 146e72d30

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRecastNavMeshGenerator::SetupTileConfig
          (FRecastNavMeshGenerator *this,ENavigationDataResolution param_1,
          FRecastBuildConfig *param_2)

{
  float fVar1;
  float fVar2;
  ARecastNavMesh *pAVar3;
  code *pcVar4;
  double dVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  
  if (this->DestNavMesh == (ARecastNavMesh *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOwner()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                       ,0x1411,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((double)this->DestNavMesh->NavMeshResolutionParams[1].CellSize !=
      (double)(this->Config)._padding_) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4457677437609710610>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                       ,0x1412,
                       "GetConfig().cs == GetOwner()->GetCellSize(ENavigationDataResolution::Default)"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  fVar6 = __real_bf000000;
  pAVar3 = this->DestNavMesh;
  fVar11 = pAVar3->NavMeshResolutionParams[param_1].CellSize;
  fVar1 = pAVar3->NavMeshResolutionParams[param_1].CellHeight;
  fVar2 = pAVar3->NavMeshResolutionParams[param_1].AgentMaxStepHeight;
  fVar13 = __real_3f800000 / fVar11;
  param_2->TileResolution = param_1;
  dVar5 = (double)fVar11;
  param_2->_padding_ = (longlong)dVar5;
  dVar12 = (double)param_2->_padding_ * __real_3f91df46a2529d39;
  *(int *)&param_2->_padding_ =
       -((int)ROUND(fVar6 - (fVar13 + fVar13) * this->DestNavMesh->AgentRadius) >> 1);
  dVar12 = tan(dVar12);
  param_2->_padding_ = (longlong)(dVar12 * dVar5);
  if (((this->DestNavMesh == (ARecastNavMesh *)0x0) || (this->DestNavMesh->bGenerateNavLinks == 0))
     || (UE::NavMesh::Private::bAllowLinkGeneration == false)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  UE::NavMesh::Private::ComputeConfigBorderSizes(bVar7,param_2);
  iVar10 = 1;
  *(int *)&param_2->_padding_ = (int)(fVar13 * __real_44960000);
  fVar11 = fVar13 * this->DestNavMesh->MinRegionArea;
  *(int *)&param_2->_padding_ = (int)(fVar11 * fVar11);
  fVar11 = fVar13 * this->DestNavMesh->MergeRegionSize;
  *(int *)((longlong)&param_2->_padding_ + 4) = (int)(fVar11 * fVar11);
  iVar8 = (int)(fVar13 * this->DestNavMesh->TileSizeUU);
  iVar9 = 1;
  if (1 < iVar8) {
    iVar9 = iVar8;
  }
  *(int *)&param_2->_padding_ = iVar9;
  if ((1 < (byte)LogNavigation._0_1_) && (iVar9 == 1)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
  }
  iVar9 = this->DestNavMesh->LayerChunkSplits;
  if (iVar9 < 1) {
    iVar9 = 1;
  }
  iVar9 = (int)param_2->_padding_ / iVar9;
  if (iVar9 < 1) {
    iVar9 = 1;
  }
  *(int *)&param_2->_padding_ = iVar9;
  iVar9 = this->DestNavMesh->RegionChunkSplits;
  param_2->_padding_ = (longlong)(double)fVar1;
  if (iVar9 < 1) {
    iVar9 = 1;
  }
  iVar9 = (int)param_2->_padding_ / iVar9;
  if (iVar9 < 1) {
    iVar9 = 1;
  }
  param_2->TileCacheChunkSize = iVar9;
  if (this->DestNavMesh->bMarkLowHeightAreas == 0) {
    fVar11 = this->DestNavMesh->AgentHeight;
    iVar10 = -((int)ROUND(fVar6 - (fVar11 + fVar11) / fVar1) >> 1);
  }
  param_2->AgentMaxClimb = fVar2;
  *(int *)&param_2->_padding_ = iVar10;
  param_2->bIsTileSetupConfigCompleted = true;
  *(int *)((longlong)&param_2->_padding_ + 4) = -((int)ROUND(fVar6 - (fVar2 + fVar2) / fVar1) >> 1);
  return;
}

// ShouldDirtyTilesRequestedByElement @ 146e73160

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

bool __thiscall
FRecastNavMeshGenerator::ShouldDirtyTilesRequestedByElement
          (FRecastNavMeshGenerator *this,UNavigationSystemV1 *param_1,FNavigationOctree *param_2,
          FNavigationElementHandle *param_3,FNavDataConfig *param_4)

{
  FOctreeElementId2 FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FOctreeElementId2 *pFVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  FNavigationElementHandle local_28;
  
  local_28.OwnerUObject.WeakPtr = (param_3->OwnerUObject).WeakPtr;
  local_28.SubElementId = param_3->SubElementId;
  pFVar6 = FNavigationOctreeController::GetNavOctreeIdForElement
                     (&param_1->DefaultOctreeController,&local_28);
  if (pFVar6 != (FOctreeElementId2 *)0x0) {
    FVar1 = *pFVar6;
    uVar9 = FVar1.NodeIndex;
    pcVar2 = *(code **)(this->_padding_ + 0x70);
    uVar7 = 0;
    if ((int)uVar9 < (int)param_2->_padding_) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    uVar11 = FVar1.ElementIndex;
    lVar10 = (longlong)(int)uVar9 * 0x490 + param_2->_padding_;
    uVar7 = 0;
    if ((int)uVar11 < *(int *)(lVar10 + 0x488)) {
      uVar7 = ~uVar11 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    lVar8 = *(longlong *)(lVar10 + 0x480);
    if (*(longlong *)(lVar10 + 0x480) == 0) {
      lVar8 = lVar10;
    }
    cVar5 = (*pcVar2)(this,lVar8 + (longlong)(int)uVar11 * 0x48,param_4);
    if (cVar5 == '\0') {
      return false;
    }
  }
  return true;
}

// ShouldDirtyTilesRequestedByObject @ 146e732d0

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

bool __thiscall
FRecastNavMeshGenerator::ShouldDirtyTilesRequestedByObject
          (FRecastNavMeshGenerator *this,UNavigationSystemV1 *param_1,FNavigationOctree *param_2,
          UObject *param_3,FNavDataConfig *param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  UObject *local_res8;
  FWeakObjectPtr local_38;
  undefined8 uStack_30;
  int local_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar1 = *(code **)(this->_padding_ + 0xb0);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  local_38.ObjectIndex = 0;
  local_38.ObjectSerialNumber = 0;
  local_res8 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_res8);
  uStack_30 = 0xffffffffffffffff;
  local_28 = local_38.ObjectIndex;
  iStack_24 = local_38.ObjectSerialNumber;
  uStack_20 = 0xffffffff;
  uStack_1c = 0xffffffff;
  uVar2 = (*pcVar1)(this,param_1,param_2,&local_28,param_4);
  return (bool)uVar2;
}

// ShouldGenerateGeometryForOctreeElement @ 146e733a0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

bool __thiscall
FRecastNavMeshGenerator::ShouldGenerateGeometryForOctreeElement
          (FRecastNavMeshGenerator *this,FNavigationOctreeElement *param_1,FNavDataConfig *param_2)

{
  FNavigationRelevantData *pFVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  pFVar1 = (param_1->Data).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar1->ShouldUseGeometryDelegate,&local_28);
  if (((*(int *)&(pFVar1->ShouldUseGeometryDelegate).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(pFVar1->ShouldUseGeometryDelegate).field_0x8,
      plVar3 == (longlong *)0x0)) || (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  pFVar1 = (param_1->Data).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar1->ShouldUseGeometryDelegate,&local_28);
  if (*(int *)&(pFVar1->ShouldUseGeometryDelegate).field_0x10 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)&(pFVar1->ShouldUseGeometryDelegate).field_0x8;
  }
  cVar2 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (cVar2 != '\0') {
    return true;
  }
  return false;
}

// SortPendingBuildTiles @ 146e73470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRecastNavMeshGenerator::SortPendingBuildTiles(FRecastNavMeshGenerator *this)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FRecastNavMeshGenerator::SortPendingBuildTiles(void)_::_2_::FStat_STAT_RecastNavMeshGenerator_SortPendingBuildTiles>
  FVar16;
  UWorld *pUVar17;
  ulonglong uVar18;
  FName FVar19;
  uint uVar20;
  ForAnyElementType FVar21;
  int *piVar22;
  int *piVar23;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  double dVar26;
  double dVar27;
  undefined1 auStackY_1b8 [32];
  FIdentityFunctor local_157;
  FIdentityFunctor local_156 [6];
  ForAnyElementType local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined1 local_13f [7];
  FName local_138;
  FColor_u_0 local_130 [2];
  FName local_128;
  double local_120;
  double dStack_118;
  FName local_110;
  FLogScopedCategoryAndVerbosityOverride local_100;
  FName local_f0;
  FName local_e8;
  TVector<double>_u_0 local_e0;
  double local_c8;
  double local_c0;
  TBox<double> local_a8;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  uVar18 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RecastNavMeshGenerator_SortPendingBuildTiles ==
        (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FRecastNavMeshGenerator::SortPendingBuildTiles(void)_::_2_::FStat_STAT_RecastNavMeshGenerator_SortPendingBuildTiles>
         )0x0) {
      pFVar15 = ::FName::FName(&local_f0,"STAT_RecastNavMeshGenerator_SortPendingBuildTiles");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_RecastNavMeshGenerator_SortPendingBuildTiles,*pFVar15,
                 L"STAT_RecastNavMeshGenerator_SortPendingBuildTiles","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_RecastNavMeshGenerator_SortPendingBuildTiles;
  if (StatPtr_STAT_RecastNavMeshGenerator_SortPendingBuildTiles ==
      (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FRecastNavMeshGenerator::SortPendingBuildTiles(void)_::_2_::FStat_STAT_RecastNavMeshGenerator_SortPendingBuildTiles>
       )0x0) {
    pFVar15 = ::FName::FName(&local_e8,"STAT_RecastNavMeshGenerator_SortPendingBuildTiles");
    FVar16 = (FThreadSafeStaticStat<_protected:_virtual_void___cdecl_FRecastNavMeshGenerator::SortPendingBuildTiles(void)_::_2_::FStat_STAT_RecastNavMeshGenerator_SortPendingBuildTiles>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RecastNavMeshGenerator_SortPendingBuildTiles,*pFVar15,
                          L"STAT_RecastNavMeshGenerator_SortPendingBuildTiles","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar16;
  bVar7 = false;
  bVar8 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  bVar11 = false;
  bVar12 = false;
  if ((FVar19.ComparisonIndex.Value.Value != 0) || (FVar19.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_130[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_130[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar7 = false;
      bVar8 = true;
      bVar11 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_128.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x1aa8);
        bVar7 = true;
        bVar8 = true;
        bVar11 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_138 = FVar19;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar11 = true;
      goto LAB_146e73602;
    }
  }
  bVar8 = bVar12;
  bVar7 = bVar11;
  bVar11 = false;
  local_138 = local_110;
  FVar19 = local_110;
LAB_146e73602:
  if (this->SortPendingTilesMethod == SortWithSeedLocations) {
    pUVar17 = AActor::GetWorld((AActor *)this->DestNavMesh);
    if (pUVar17 != (UWorld *)0x0) {
      local_150.Data = (FScriptContainerElement *)0x0;
      local_148 = 0;
      (**(code **)(this->_padding_ + 0x98))(this,pUVar17,&local_150);
      dVar10 = __real_3fe0000000000000;
      bVar12 = false;
      iVar2 = (int)local_148;
      if ((int)local_148 == 0) {
        local_120 = ((this->TotalNavBounds).Min.field0_0x0._s_0.X +
                    (this->TotalNavBounds).Max.field0_0x0._s_0.X) * __real_3fe0000000000000;
        dStack_118 = ((this->TotalNavBounds).Min.field0_0x0._s_0.Y +
                     (this->TotalNavBounds).Max.field0_0x0._s_0.Y) * __real_3fe0000000000000;
        iVar13 = 0;
        if ((local_150.Data <= (FScriptContainerElement *)&local_120) &&
           ((FScriptContainerElement *)&local_120 <
            local_150.Data + (longlong)local_148._4_4_ * 0x10)) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar12) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar13 = (int)local_148;
        }
        if (iVar13 == local_148._4_4_) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_150,(int *)((longlong)&local_148 + 4));
        }
        iVar2 = iVar13 + 1;
        local_148 = CONCAT44(local_148._4_4_,iVar2);
        *(double *)(local_150.Data + (longlong)iVar13 * 0x10) = local_120;
        *(double *)(local_150.Data + (longlong)iVar13 * 0x10 + 8) = dStack_118;
        bVar12 = iVar2 == 0;
      }
      if (!bVar12 && -1 < iVar2) {
        iVar2 = *(int *)&(this->PendingDirtyTiles).field_0x10;
        piVar23 = *(int **)&this->PendingDirtyTiles;
        lVar9 = (this->Config)._padding_;
        piVar22 = piVar23 + (longlong)iVar2 * 0xe;
        dVar1 = (double)(this->Config)._padding_;
        while( true ) {
          if (*(int *)&(this->PendingDirtyTiles).field_0x10 != iVar2) {
            `TCheckedPointerIterator<FPendingTileElement,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_140);
          }
          if (piVar23 == piVar22) break;
          FRecastTileGenerator::CalculateTileBounds
                    ((TBox<double> *)&local_e0._s_0,*piVar23,piVar23[1],
                     &UE::Math::TVector<double>::ZeroVector,&this->TotalNavBounds,
                     (double)(int)lVar9 * dVar1);
          iVar13 = (int)local_148;
          uVar18 = (ulonglong)(int)local_148;
          dVar4 = local_c8 + local_e0._s_0.X;
          dVar5 = local_c0 + local_e0._s_0.Y;
          pFVar25 = local_150.Data + uVar18 * 0x10;
          FVar21.Data = local_150.Data;
          while( true ) {
            if ((int)uVar18 != iVar13) {
              `TCheckedPointerIterator<UE::Math::TVector2<double>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_13f);
            }
            if (FVar21.Data == pFVar25) break;
            dVar26 = *(double *)FVar21.Data;
            pFVar6 = FVar21.Data + 8;
            FVar21.Data = FVar21.Data + 0x10;
            dVar27 = *(double *)pFVar6 - dVar5 * dVar10;
            dVar26 = dVar26 - dVar4 * dVar10;
            dVar26 = dVar27 * dVar27 + dVar26 * dVar26;
            if (*(double *)(piVar23 + 2) <= dVar26) {
              dVar26 = *(double *)(piVar23 + 2);
            }
            *(double *)(piVar23 + 2) = dVar26;
            uVar18 = local_148 & 0xffffffff;
          }
          piVar23 = piVar23 + 0xe;
        }
        AlgoImpl::
        IntroSortInternal<FPendingTileElement,int,FIdentityFunctor,TDereferenceWrapper<FPendingTileElement,TLess<void>_>_>
                  (*(FPendingTileElement **)&this->PendingDirtyTiles,
                   *(int *)&(this->PendingDirtyTiles).field_0x10,local_157,(TLess<void> *)&local_157
                  );
        FVar19 = local_138;
      }
      if (local_150.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data);
      }
    }
  }
  else if ((this->SortPendingTilesMethod == SortByPriority) &&
          (AlgoImpl::
           IntroSortInternal<FPendingTileElement,int,FIdentityFunctor,TDereferenceWrapper<FPendingTileElement,_FRecastNavMeshGenerator::SortPendingBuildTiles_::__l26::<lambda_1>_>_>
                     (*(FPendingTileElement **)&this->PendingDirtyTiles,
                      *(int *)&(this->PendingDirtyTiles).field_0x10,local_156[0],
                      (<lambda_1> *)local_156), 6 < (byte)LogNavigation._0_1_)) {
    FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
              (&local_100,(FName)LogNavigation._4_8_,All);
    if (0 < *(int *)&(this->PendingDirtyTiles).field_0x10) {
      uVar24 = uVar18;
      do {
        uVar20 = (uint)uVar18;
        uVar14 = 0;
        if ((int)uVar20 < *(int *)&(this->PendingDirtyTiles).field_0x10) {
          uVar14 = ~uVar20 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FRecastTileGenerator::CalculateTileBounds
                  (&local_a8,*(int *)(*(longlong *)&this->PendingDirtyTiles + uVar24),
                   *(int *)(*(longlong *)&this->PendingDirtyTiles + 4 + uVar24),
                   &UE::Math::TVector<double>::ZeroVector,&this->TotalNavBounds,
                   (double)(int)(this->Config)._padding_ * (double)(this->Config)._padding_);
        if (FVisualLogger::bIsRecording != 0) {
          FVisualLogger::BoxLogfImpl
                    ((UObject *)this->DestNavMesh,(FName *)&LogNavigation.field_0x4,All,&local_a8,
                     &UE::Math::TMatrix<double>::Identity,&FColor::Silver,false,
                     L"Index: %i, Priority %i");
        }
        uVar18 = (ulonglong)(uVar20 + 1);
        uVar24 = uVar24 + 0x38;
        FVar19 = local_138;
      } while ((int)(uVar20 + 1) < *(int *)&(this->PendingDirtyTiles).field_0x10);
    }
    FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogNavigation,All);
    FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_100);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return;
}

// StoreCompressedTileCacheLayers @ 146e73e60

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRecastNavMeshGenerator::StoreCompressedTileCacheLayers
          (FRecastNavMeshGenerator *this,FRecastTileGenerator *param_1,int param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_Navigation_StoringCompressedLayers> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res10;
  FStatMessage local_48;
  FName local_38;
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_Navigation_StoringCompressedLayers;
  if (StatPtr_STAT_Navigation_StoringCompressedLayers ==
      (FThreadSafeStaticStat<FStat_STAT_Navigation_StoringCompressedLayers>)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_48,"STAT_Navigation_StoringCompressedLayers");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_Navigation_StoringCompressedLayers>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Navigation_StoringCompressedLayers
                       ,*pFVar5,L"Recast: storing compressed layers","STATGROUP_Navigation",
                       "STATCAT_Advanced",L"Navigation",true,true,ST_int64,true,false,MCR_Invalid);
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
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar8.Value;
        local_res10.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x1b03);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar8.Value;
      local_res10.s.HighPart = uVar7;
      local_38 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = local_38.ComparisonIndex.Value;
      goto LAB_146e73fce;
    }
  }
  bVar3 = false;
  FVar9 = local_38;
LAB_146e73fce:
  if ((param_1->CompressedLayers).ArrayNum == 0) {
    ARecastNavMesh::MarkEmptyTileCacheLayers(this->DestNavMesh,param_2,param_3);
  }
  else {
    ARecastNavMesh::AddTileCacheLayers(this->DestNavMesh,param_2,param_3,&param_1->CompressedLayers)
    ;
  }
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
      QueryPerformanceCounter(&local_res10);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
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

// StoreDebugData @ 146e74100

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */

void __thiscall
FRecastNavMeshGenerator::StoreDebugData
          (FRecastNavMeshGenerator *this,FRecastTileGenerator *param_1,int param_2,int param_3)

{
  ARecastNavMesh::AddTileDebugData(this->DestNavMesh,param_2,param_3,&param_1->DebugData);
  return;
}

// TickAsyncBuild @ 146e74350

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FRecastNavMeshGenerator::TickAsyncBuild(FRecastNavMeshGenerator *this,float param_1)

{
  int *piVar1;
  UNavigationSystemV1 *pUVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  LARGE_INTEGER LVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRecastNavMeshGenerator::TickAsyncBuild(float)_::_2_::FStat_STAT_RecastNavMeshGenerator_TickAsyncBuild>
  FVar12;
  UWorld *pUVar13;
  UClass *pUVar14;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRecastNavMeshGenerator::TickAsyncBuild(float)_::_9_::FStat_STAT_RecastNavMeshGenerator_OnNavMeshTilesUpdated>
  FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  UNavigationSystemV1 *this_00;
  FName FVar18;
  int iVar19;
  ulonglong uVar20;
  FNameEntryId FVar21;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FName local_res20;
  FName local_68;
  FStatMessage local_58;
  TArray<FNavTileRef,TSizedDefaultAllocator<32>_> local_48;
  
  uVar20 = (ulonglong)_tls_index;
  this_00 = (UNavigationSystemV1 *)0x0;
  FVar21.Value = 0;
  local_res8 = (LARGE_INTEGER)this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RecastNavMeshGenerator_TickAsyncBuild ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRecastNavMeshGenerator::TickAsyncBuild(float)_::_2_::FStat_STAT_RecastNavMeshGenerator_TickAsyncBuild>
         )0x0) {
      pFVar11 = ::FName::FName(&local_res18,"STAT_RecastNavMeshGenerator_TickAsyncBuild");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RecastNavMeshGenerator_TickAsyncBuild,
                 *pFVar11,L"STAT_RecastNavMeshGenerator_TickAsyncBuild","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_RecastNavMeshGenerator_TickAsyncBuild;
  if (StatPtr_STAT_RecastNavMeshGenerator_TickAsyncBuild ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRecastNavMeshGenerator::TickAsyncBuild(float)_::_2_::FStat_STAT_RecastNavMeshGenerator_TickAsyncBuild>
       )0x0) {
    pFVar11 = ::FName::FName(&local_res20,"STAT_RecastNavMeshGenerator_TickAsyncBuild");
    FVar12 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRecastNavMeshGenerator::TickAsyncBuild(float)_::_2_::FStat_STAT_RecastNavMeshGenerator_TickAsyncBuild>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RecastNavMeshGenerator_TickAsyncBuild,*pFVar11,
                          L"STAT_RecastNavMeshGenerator_TickAsyncBuild","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar12;
  bVar4 = false;
  bVar7 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  if ((FVar18.ComparisonIndex.Value.Value == 0) && (FVar18.Number == 0)) {
LAB_146e744a5:
    bVar5 = false;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18 = (FName)((ulonglong)local_res18 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18 = FVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                   ,0x1644);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146e744a5;
    local_res18 = FVar18;
    FThreadStats::AddMessage(FVar18,CycleScopeStart);
    bVar5 = true;
    local_68 = FVar18;
  }
  pUVar13 = AActor::GetWorld((AActor *)this->DestNavMesh);
  if (pUVar13 == (UWorld *)0x0) {
LAB_146e74509:
    local_res18 = (FName)this;
    bVar9 = `FRecastNavMeshGenerator::TickAsyncBuild'::__l3::<lambda_1>::operator()(&local_res18);
    if (!bVar9) goto LAB_146e74794;
  }
  else {
    pUVar2 = (UNavigationSystemV1 *)(pUVar13->NavigationSystem).field0_0x0.DebugPtr;
    if (pUVar2 != (UNavigationSystemV1 *)0x0) {
      pUVar14 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
      iVar10 = (int)pUVar14->_padding_;
      if ((iVar10 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar10 * 8) ==
          &pUVar14->_padding_)) {
        this_00 = pUVar2;
      }
    }
    if (this_00 == (UNavigationSystemV1 *)0x0) goto LAB_146e74509;
  }
  iVar10 = UNavigationSystemV1::GetNumRunningBuildTasks(this_00);
  if ((this->DestNavMesh == (ARecastNavMesh *)0x0) ||
     (iVar19 = 1, (~this->DestNavMesh->bDoFullyAsyncNavDataGathering & 1) != 0)) {
    iVar19 = this->MaxTileGeneratorTasks;
  }
  ProcessTileTasksAndGetUpdatedTiles(this,&local_48,iVar19 - iVar10);
  if (0 < local_48.ArrayNum) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8) + 0x9d4c) <
         ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      if (StatPtr_STAT_RecastNavMeshGenerator_OnNavMeshTilesUpdated ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRecastNavMeshGenerator::TickAsyncBuild(float)_::_9_::FStat_STAT_RecastNavMeshGenerator_OnNavMeshTilesUpdated>
           )0x0) {
        pFVar11 = ::FName::FName(&local_res18,"STAT_RecastNavMeshGenerator_OnNavMeshTilesUpdated");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_RecastNavMeshGenerator_OnNavMeshTilesUpdated,*pFVar11,
                   L"STAT_RecastNavMeshGenerator_OnNavMeshTilesUpdated","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS1);
      }
      else {
        _Init_thread_footer(&::_TSS1);
      }
    }
    FVar15 = StatPtr_STAT_RecastNavMeshGenerator_OnNavMeshTilesUpdated;
    if (StatPtr_STAT_RecastNavMeshGenerator_OnNavMeshTilesUpdated ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRecastNavMeshGenerator::TickAsyncBuild(float)_::_9_::FStat_STAT_RecastNavMeshGenerator_OnNavMeshTilesUpdated>
         )0x0) {
      pFVar11 = ::FName::FName(&local_res20,"STAT_RecastNavMeshGenerator_OnNavMeshTilesUpdated");
      FVar15 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRecastNavMeshGenerator::TickAsyncBuild(float)_::_9_::FStat_STAT_RecastNavMeshGenerator_OnNavMeshTilesUpdated>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_RecastNavMeshGenerator_OnNavMeshTilesUpdated,*pFVar11,
                            L"STAT_RecastNavMeshGenerator_OnNavMeshTilesUpdated","STATGROUP_Quick",
                            "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar18 = *(FName *)FVar15;
    bVar9 = false;
    bVar6 = false;
    if ((FVar18.ComparisonIndex.Value.Value == 0) && (FVar18.Number == 0)) {
LAB_146e74692:
      bVar3 = false;
      FVar18.ComparisonIndex.Value = 0;
      FVar18.Number = 0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res18 = (FName)((ulonglong)local_res18 & 0xffffffff00000000);
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res18,(char *)*(FName *)((longlong)FVar15 + 0x10));
        bVar9 = false;
        bVar6 = true;
        if (-1 < CpuChannel->Enabled) {
          local_res18 = FVar18;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_res18,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                     ,0x1667);
          bVar9 = true;
          bVar6 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_146e74692;
      local_res18 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar3 = true;
      FVar21.Value = FVar18.ComparisonIndex.Value.Value;
    }
    LVar8 = local_res8;
    (**(code **)((*(ARecastNavMesh **)(local_res8.QuadPart + 0x1b0))->_padding_ + 0x900))();
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar3) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
        local_58.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
        local_58.NameAndInfo.Index.Value = FVar21.Value;
        QueryPerformanceCounter(&local_res8);
        local_58.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
        FThreadStats::AddStatMessage(pFVar16,&local_58);
        piVar1 = &pFVar16->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar16,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar16,false,false);
        }
      }
    }
    ARecastNavMesh::RequestDrawingUpdate(*(ARecastNavMesh **)(LVar8.QuadPart + 0x1b0),false);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
LAB_146e74794:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (local_68 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_58.NameAndInfo.Index.Value = local_68.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = local_68.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_58.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar16,&local_58);
      piVar1 = &pFVar16->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  return;
}

// UpdateNavigationBounds @ 146e75670

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

void __thiscall FRecastNavMeshGenerator::UpdateNavigationBounds(FRecastNavMeshGenerator *this)

{
  TNavStatArray<UE::Math::TBox<double>_> *pTVar1;
  TBox<double> *pTVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  code *pcVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  UWorld *pUVar18;
  UClass *pUVar19;
  TBox<double> *pTVar20;
  ulonglong uVar21;
  longlong lVar22;
  double *pdVar23;
  FRecastNavMeshGenerator *pFVar24;
  UNavigationSystemV1 *this_00;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
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
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined1 auStackY_1e8 [32];
  undefined1 local_198 [8];
  double *local_190;
  ulonglong local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  double local_150;
  double *local_148;
  FRecastNavMeshGenerator *local_140;
  TBox<double> local_100;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_140 = this;
  pUVar18 = AActor::GetWorld((AActor *)this->DestNavMesh);
  if (pUVar18 == (UWorld *)0x0) goto LAB_146e75c11;
  this_00 = (UNavigationSystemV1 *)(pUVar18->NavigationSystem).field0_0x0.DebugPtr;
  if (this_00 == (UNavigationSystemV1 *)0x0) {
LAB_146e756e1:
    this_00 = (UNavigationSystemV1 *)0x0;
  }
  else {
    pUVar19 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar17 = (int)pUVar19->_padding_;
    if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar17) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar17 * 8) !=
        &pUVar19->_padding_)) goto LAB_146e756e1;
  }
  if (this_00 != (UNavigationSystemV1 *)0x0) {
    if (this_00->bWholeWorldNavigable != 0) {
      pTVar1 = &this->InclusionBounds;
      puVar25 = &(this->InclusionBounds).field_0x14;
      *(undefined4 *)&(this->InclusionBounds).field_0x10 = 0;
      if (*(int *)&(this->InclusionBounds).field_0x14 < 1) {
        UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                  (0x38,8,1,(ForAnyElementType *)pTVar1,0,(int *)puVar25);
      }
      pTVar20 = UNavigationSystemV1::GetWorldBounds(this_00,&local_100);
      pTVar2 = &this->TotalNavBounds;
      dVar4 = (pTVar20->Min).field0_0x0._s_0.Y;
      (pTVar2->Min).field0_0x0._s_0.X = (pTVar20->Min).field0_0x0._s_0.X;
      (this->TotalNavBounds).Min.field0_0x0._s_0.Y = dVar4;
      dVar4 = (pTVar20->Max).field0_0x0._s_0.X;
      (this->TotalNavBounds).Min.field0_0x0._s_0.Z = (pTVar20->Min).field0_0x0._s_0.Z;
      (this->TotalNavBounds).Max.field0_0x0._s_0.X = dVar4;
      dVar4 = (pTVar20->Max).field0_0x0._s_0.Z;
      (this->TotalNavBounds).Max.field0_0x0._s_0.Y = (pTVar20->Max).field0_0x0._s_0.Y;
      (this->TotalNavBounds).Max.field0_0x0._s_0.Z = dVar4;
      uVar8 = pTVar20->Pad[0];
      uVar9 = pTVar20->Pad[1];
      uVar10 = pTVar20->Pad[2];
      uVar11 = pTVar20->Pad[3];
      uVar12 = pTVar20->Pad[4];
      uVar13 = pTVar20->Pad[5];
      uVar14 = pTVar20->Pad[6];
      (this->TotalNavBounds).IsValid = pTVar20->IsValid;
      (this->TotalNavBounds).Pad[0] = uVar8;
      (this->TotalNavBounds).Pad[1] = uVar9;
      (this->TotalNavBounds).Pad[2] = uVar10;
      (this->TotalNavBounds).Pad[3] = uVar11;
      (this->TotalNavBounds).Pad[4] = uVar12;
      (this->TotalNavBounds).Pad[5] = uVar13;
      (this->TotalNavBounds).Pad[6] = uVar14;
      if ((this->TotalNavBounds).IsValid == '\0') {
        return;
      }
      if (((*(undefined1 **)&pTVar1->field_0x0 <= pTVar2) &&
          (pTVar2 < *(undefined1 **)&pTVar1->field_0x0 + (longlong)*(int *)puVar25 * 0x38)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar17 = *(int *)&(this->InclusionBounds).field_0x10;
      if (iVar17 == *(int *)&(this->InclusionBounds).field_0x14) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                           (0x838,(ForAnyElementType *)pTVar1,
                            (int *)&(this->InclusionBounds).field_0x14);
      }
      *(int *)&(this->InclusionBounds).field_0x10 = iVar17 + 1;
      dVar4 = (this->TotalNavBounds).Min.field0_0x0._s_0.Y;
      lVar22 = (longlong)iVar17 * 0x38;
      lVar6 = *(longlong *)&pTVar1->field_0x0;
      *(double *)(lVar22 + lVar6) = (pTVar2->Min).field0_0x0._s_0.X;
      ((double *)(lVar22 + lVar6))[1] = dVar4;
      dVar4 = (this->TotalNavBounds).Max.field0_0x0._s_0.X;
      pdVar23 = (double *)(lVar22 + 0x10 + lVar6);
      *pdVar23 = (this->TotalNavBounds).Min.field0_0x0._s_0.Z;
      pdVar23[1] = dVar4;
      dVar4 = (this->TotalNavBounds).Max.field0_0x0._s_0.Z;
      pdVar23 = (double *)(lVar22 + 0x20 + lVar6);
      *pdVar23 = (this->TotalNavBounds).Max.field0_0x0._s_0.Y;
      pdVar23[1] = dVar4;
      *(undefined8 *)(lVar22 + 0x30 + lVar6) = *(undefined8 *)&(this->TotalNavBounds).IsValid;
      return;
    }
    uVar27 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar34 = 0;
    uVar35 = 0;
    uVar36 = 0;
    uVar37 = 0;
    uVar38 = 0;
    local_150 = 0.0;
    local_160 = 0;
    uStack_158 = 0;
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    uStack_168 = 0;
    pFVar24 = this;
    if (this->DestNavMesh != (ARecastNavMesh *)0x0) {
      local_190 = (double *)0x0;
      local_188 = 0;
      (**(code **)(*(longlong *)this_00 + 0x490))(this_00,this->DestNavMesh,&local_190,0);
      pTVar1 = &this->InclusionBounds;
      TArray<UE::Math::TBox<double>,NavMeshMemory::FNavigationMemoryStat>::Reset
                ((TArray<UE::Math::TBox<double>,NavMeshMemory::FNavigationMemoryStat> *)pTVar1,
                 (int)local_188);
      iVar17 = (int)local_188;
      uVar21 = (ulonglong)(int)local_188;
      uVar39 = 0;
      uVar40 = 0;
      uVar41 = 0;
      uVar42 = 0;
      uVar45 = 0;
      uVar46 = 0;
      uVar43 = 0;
      uVar44 = 0;
      uVar47 = 0;
      uVar48 = 0;
      uVar49 = 0;
      uVar50 = 0;
      local_148 = local_190 + uVar21 * 7;
      pdVar23 = local_190;
      while( true ) {
        if ((int)uVar21 != iVar17) {
          local_198[0] = 0;
          `TCheckedPointerIterator<UE::Math::TBox<double>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_198);
        }
        pFVar24 = local_140;
        puVar26 = &(this->InclusionBounds).field_0x10;
        puVar25 = &(this->InclusionBounds).field_0x14;
        if (pdVar23 == local_148) break;
        if (((*(double **)&pTVar1->field_0x0 <= pdVar23) &&
            (pdVar23 < *(double **)&pTVar1->field_0x0 + (longlong)*(int *)puVar25 * 7)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar16 = *(int *)puVar26;
        if (iVar16 == *(int *)puVar25) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                             (0x838,(ForAnyElementType *)pTVar1,(int *)puVar25);
        }
        *(int *)puVar26 = iVar16 + 1;
        dVar4 = pdVar23[1];
        lVar22 = (longlong)iVar16 * 0x38;
        lVar6 = *(longlong *)&pTVar1->field_0x0;
        *(double *)(lVar22 + lVar6) = *pdVar23;
        ((double *)(lVar22 + lVar6))[1] = dVar4;
        dVar4 = pdVar23[3];
        pdVar3 = (double *)(lVar22 + 0x10 + lVar6);
        *pdVar3 = pdVar23[2];
        pdVar3[1] = dVar4;
        dVar4 = pdVar23[5];
        pdVar3 = (double *)(lVar22 + 0x20 + lVar6);
        *pdVar3 = pdVar23[4];
        pdVar3[1] = dVar4;
        *(double *)(lVar22 + 0x30 + lVar6) = pdVar23[6];
        if (local_150._0_1_ == '\0') {
          if (*(char *)(pdVar23 + 6) != '\0') {
            uVar27 = *(undefined4 *)pdVar23;
            uVar28 = *(undefined4 *)((longlong)pdVar23 + 4);
            uVar29 = *(undefined4 *)(pdVar23 + 1);
            uVar30 = *(undefined4 *)((longlong)pdVar23 + 0xc);
            uVar31 = *(undefined4 *)(pdVar23 + 2);
            uVar32 = *(undefined4 *)((longlong)pdVar23 + 0x14);
            uVar33 = *(undefined4 *)(pdVar23 + 3);
            uVar34 = *(undefined4 *)((longlong)pdVar23 + 0x1c);
            uVar35 = *(undefined4 *)(pdVar23 + 4);
            uVar36 = *(undefined4 *)((longlong)pdVar23 + 0x24);
            local_150 = pdVar23[6];
            uVar37 = *(undefined4 *)(pdVar23 + 5);
            uVar38 = *(undefined4 *)((longlong)pdVar23 + 0x2c);
            goto LAB_146e75a0b;
          }
        }
        else if (*(char *)(pdVar23 + 6) != '\0') {
          dVar4 = *pdVar23;
          dVar5 = pdVar23[1];
          uVar27 = SUB84(dVar4,0);
          uVar28 = (int)((ulonglong)dVar4 >> 0x20);
          if ((double)CONCAT44(uVar50,uVar49) <= dVar4) {
            uVar27 = uVar49;
            uVar28 = uVar50;
          }
          uVar29 = SUB84(dVar5,0);
          uVar30 = (int)((ulonglong)dVar5 >> 0x20);
          if ((double)CONCAT44(uVar44,uVar43) <= dVar5) {
            uVar29 = uVar43;
            uVar30 = uVar44;
          }
          dVar4 = pdVar23[2];
          uVar31 = SUB84(dVar4,0);
          uVar32 = (int)((ulonglong)dVar4 >> 0x20);
          if ((double)CONCAT44(uVar48,uVar47) <= dVar4) {
            uVar31 = uVar47;
            uVar32 = uVar48;
          }
          dVar4 = pdVar23[3];
          uVar33 = SUB84(dVar4,0);
          uVar34 = (int)((ulonglong)dVar4 >> 0x20);
          if (dVar4 <= (double)CONCAT44(uVar42,uVar41)) {
            uVar33 = uVar41;
            uVar34 = uVar42;
          }
          dVar4 = pdVar23[4];
          uVar35 = SUB84(dVar4,0);
          uVar36 = (int)((ulonglong)dVar4 >> 0x20);
          if (dVar4 <= (double)CONCAT44(uVar46,uVar45)) {
            uVar35 = uVar45;
            uVar36 = uVar46;
          }
          dVar4 = pdVar23[5];
          uVar37 = SUB84(dVar4,0);
          uVar38 = (int)((ulonglong)dVar4 >> 0x20);
          if (dVar4 <= (double)CONCAT44(uVar40,uVar39)) {
            uVar37 = uVar39;
            uVar38 = uVar40;
          }
LAB_146e75a0b:
          local_160 = CONCAT44(uVar36,uVar35);
          uStack_158 = CONCAT44(uVar38,uVar37);
          local_170 = CONCAT44(uVar32,uVar31);
          uStack_168 = CONCAT44(uVar34,uVar33);
          local_180 = CONCAT44(uVar28,uVar27);
          uStack_178 = CONCAT44(uVar30,uVar29);
          uVar39 = uVar37;
          uVar40 = uVar38;
          uVar41 = uVar33;
          uVar42 = uVar34;
          uVar43 = uVar29;
          uVar44 = uVar30;
          uVar45 = uVar35;
          uVar46 = uVar36;
          uVar47 = uVar31;
          uVar48 = uVar32;
          uVar49 = uVar27;
          uVar50 = uVar28;
        }
        uVar21 = local_188 & 0xffffffff;
        pdVar23 = pdVar23 + 7;
      }
      if (local_190 != (double *)0x0) {
        FMemory::Free(local_190);
      }
    }
    *(undefined4 *)&(pFVar24->TotalNavBounds).Min.field0_0x0 = uVar27;
    *(undefined4 *)((longlong)&(pFVar24->TotalNavBounds).Min.field0_0x0 + 4) = uVar28;
    *(undefined4 *)((longlong)&(pFVar24->TotalNavBounds).Min.field0_0x0 + 8) = uVar29;
    *(undefined4 *)((longlong)&(pFVar24->TotalNavBounds).Min.field0_0x0 + 0xc) = uVar30;
    *(undefined4 *)((longlong)&(pFVar24->TotalNavBounds).Min.field0_0x0 + 0x10) = uVar31;
    *(undefined4 *)((longlong)&(pFVar24->TotalNavBounds).Min.field0_0x0 + 0x14) = uVar32;
    *(undefined4 *)&(pFVar24->TotalNavBounds).Max.field0_0x0 = uVar33;
    *(undefined4 *)((longlong)&(pFVar24->TotalNavBounds).Max.field0_0x0 + 4) = uVar34;
    *(undefined4 *)((longlong)&(pFVar24->TotalNavBounds).Max.field0_0x0 + 8) = uVar35;
    *(undefined4 *)((longlong)&(pFVar24->TotalNavBounds).Max.field0_0x0 + 0xc) = uVar36;
    *(undefined4 *)((longlong)&(pFVar24->TotalNavBounds).Max.field0_0x0 + 0x10) = uVar37;
    *(undefined4 *)((longlong)&(pFVar24->TotalNavBounds).Max.field0_0x0 + 0x14) = uVar38;
    *(double *)&(pFVar24->TotalNavBounds).IsValid = local_150;
    return;
  }
LAB_146e75c11:
  (this->TotalNavBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->TotalNavBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->TotalNavBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->TotalNavBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->TotalNavBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->TotalNavBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->TotalNavBounds).IsValid = '\0';
  (this->TotalNavBounds).Pad[0] = '\0';
  (this->TotalNavBounds).Pad[1] = '\0';
  (this->TotalNavBounds).Pad[2] = '\0';
  (this->TotalNavBounds).Pad[3] = '\0';
  (this->TotalNavBounds).Pad[4] = '\0';
  (this->TotalNavBounds).Pad[5] = '\0';
  (this->TotalNavBounds).Pad[6] = '\0';
  return;
}

// operator() @ 1504fd830

bool __thiscall
`FRecastNavMeshGenerator::GetDirtyTilesCount'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4457677437609711980>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4457677437609711980>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fd880

bool __thiscall `FRecastNavMeshGenerator::HasDirtyTiles'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4457677437609711952>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4457677437609711952>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fd8d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall `FRecastNavMeshGenerator::TickAsyncBuild'::__l3::<lambda_1>::operator()(void *this)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UWorld *this_01;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4457677437609711190>);
  if (bVar4) {
    this_01 = AActor::GetWorld(*(AActor **)(*(longlong *)this + 0x1b0));
    if ((this_01 == (UWorld *)0x0) || (this_01->_padding_ == 0)) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_01,&local_18,(UObject *)0x0,None);
    }
    this_00 = *(UObjectBaseUtility **)(*(longlong *)this + 0x1b0);
    if ((this_00 == (UObjectBaseUtility *)0x0) || (*(longlong *)&this_00->field_0x10 == 0)) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName(this_00,&local_28,(UObject *)0x0,None);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4457677437609711190>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504fd9d1;
    }
  }
  bVar4 = false;
LAB_1504fd9d1:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504fdaa0

bool __thiscall `FRecastNavMeshGenerator::MarkDirtyTiles'::__l24::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4457677437609712055>);
  if (bVar4) {
    FNavigationDirtyArea::GetSourceDescription(*(FNavigationDirtyArea **)this,&local_28);
    ::FString::PrintfImpl(&local_48,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_58,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_38,L"IsValid=%s, Min=(%s), Max=(%s)");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    bVar3 = true;
    bVar2 = true;
    UE::Math::TBox<double>::ContainsNaN(*(TBox<double> **)this);
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4457677437609712055>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504fdc3d;
    }
  }
  bVar4 = false;
LAB_1504fdc3d:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504fdca0

bool __thiscall
`FRecastNavMeshGenerator::AddGeneratedTilesTimeSliced'::__l30::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4457677437609711822>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4457677437609711822>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fde20

bool __thiscall
`FRecastNavMeshGenerator::ResolveGeneratedLinkAreas'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4457677437609711054>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4457677437609711054>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

