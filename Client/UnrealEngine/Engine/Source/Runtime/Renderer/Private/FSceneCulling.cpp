// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 17

// FSceneCulling @ 145477c90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSceneCulling * __thiscall FSceneCulling::FSceneCulling(FSceneCulling *this,FScene *param_1)

{
  void *_Src;
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  double dVar6;
  TConsoleVariableData<float> *pTVar7;
  TConsoleVariableData<float> *pTVar8;
  bool bVar9;
  EShaderPlatform EVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  FSceneCulling *pFVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  double dVar18;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  FString local_68 [4];
  
  this->_padding_ = (longlong)param_1;
  lVar15 = 0;
  (this->PrimitiveStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitiveStates).ArrayNum = 0;
  (this->PrimitiveStates).ArrayMax = 0;
  *(undefined8 *)&this->CellIndexCache = 0;
  *(undefined8 *)&(this->CellIndexCache).field_0x8 = 0;
  *(undefined8 *)&(this->CellIndexCache).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FSceneCulling__6B_;
  *(undefined4 *)&(this->CellIndexCache).field_0x28 = 0;
  *(undefined4 *)&(this->CellIndexCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->CellIndexCache).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CellIndexCache).field_0x34 = 0;
  this->NumDynamicInstances = 0;
  this->NumStaticInstances = 0;
  EVar10 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
  bVar9 = UseNanite(EVar10,true,true);
  this->bIsEnabled = bVar9;
  this->bForceFullExplictBoundsBuild = false;
  pTVar8 = CVarSceneCullingMaxCellSize.Ref;
  bVar9 = IsInParallelGameThread();
  if (!bVar9) {
    bVar9 = IsInGameThread();
    lVar13 = 4;
    if (!bVar9) goto LAB_145477d37;
  }
  lVar13 = lVar15;
LAB_145477d37:
  pTVar7 = CVarSceneCullingMinCellSize.Ref;
  dVar4 = (double)*(float *)((longlong)pTVar8->ShadowedValue + lVar13);
  bVar9 = IsInParallelGameThread();
  if ((bVar9) || (bVar9 = IsInGameThread(), lVar13 = 4, bVar9)) {
    lVar13 = lVar15;
  }
  dVar3 = (double)*(float *)((longlong)pTVar7->ShadowedValue + lVar13);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
  ::
  TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
              *)&(this->SpatialHash).HashMap);
  dVar6 = __real_3ff0000000000000;
  uVar16 = 1;
  iVar1 = 0x1f;
  uVar11 = (uint)(longlong)(dVar3 - __real_3ff0000000000000);
  if (uVar11 != 0) {
    for (; uVar11 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  dVar18 = dVar4 - __real_3ff0000000000000;
  iVar17 = 0;
  if (uVar11 != 0) {
    iVar17 = iVar1;
  }
  (this->SpatialHash).FirstLevel = iVar17;
  iVar1 = 0x1f;
  uVar11 = (uint)(longlong)dVar18;
  if (uVar11 != 0) {
    for (; uVar11 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar12 = 0;
  if (uVar11 != 0) {
    iVar12 = iVar1;
  }
  (this->SpatialHash).LastLevel = iVar12;
  if ((((double)(ulonglong)(1L << ((byte)iVar17 + 1 & 0x3f)) < dVar3) ||
      (dVar3 <= (double)(ulonglong)(1L << ((byte)iVar17 & 0x3f)))) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetCellSize(FirstLevel) >= MinCellSize && GetCellSize(FirstLevel - 1) < MinCellSize"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\HierarchicalSpatialHashGrid.h"
                         ,0x10f,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    pFVar14 = (FSceneCulling *)(*pcVar2)();
    return pFVar14;
  }
  bVar5 = (byte)(this->SpatialHash).LastLevel;
  if ((((double)(ulonglong)(1L << (bVar5 + 1 & 0x3f)) < dVar4) ||
      (dVar4 <= (double)(ulonglong)(1L << (bVar5 & 0x3f)))) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetCellSize(LastLevel) >= MaxCellSize && GetCellSize(LastLevel - 1) < MaxCellSize"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\HierarchicalSpatialHashGrid.h"
                         ,0x110,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    pFVar14 = (FSceneCulling *)(*pcVar2)();
    return pFVar14;
  }
  (this->SpatialHash).LastLevelCellSize =
       (double)(ulonglong)(1L << ((char)(this->SpatialHash).LastLevel + 1U & 0x3f));
  (this->SpatialHash).MaxCullingDistance = 8796093022208.0;
  do {
    uVar16 = uVar16 << 1 | (ulonglong)((longlong)uVar16 < 0);
    *(double *)((longlong)(this->SpatialHash).RecCellSizes + lVar15) = dVar6 / (double)uVar16;
    lVar15 = lVar15 + 8;
  } while (lVar15 < 0x200);
  (this->ActiveUpdaterImplementation).Ptr = (FSceneCullingBuilder *)0x0;
  (this->PackedCellChunkData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackedCellChunkData).ArrayNum = 0;
  (this->PackedCellChunkData).ArrayMax = 0;
  FSpanAllocator::FSpanAllocator(&this->CellChunkIdAllocator,false);
  (this->PackedCellData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackedCellData).ArrayNum = 0;
  (this->PackedCellData).ArrayMax = 0;
  (this->FreeChunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeChunks).ArrayNum = 0;
  (this->FreeChunks).ArrayMax = 0;
  (this->CellHeaders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CellHeaders).ArrayNum = 0;
  (this->CellHeaders).ArrayMax = 0;
  (this->CellOccupancyMask).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->CellOccupancyMask).NumBits = 0;
  (this->CellOccupancyMask).MaxBits = 0x80;
  (this->BlockLevelOccupancyMask).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->BlockLevelOccupancyMask).NumBits = 0;
  (this->BlockLevelOccupancyMask).MaxBits = 0x80;
  (this->UsedChunkIdMask).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->UsedChunkIdMask).NumBits = 0;
  (this->UsedChunkIdMask).MaxBits = 0x80;
  (this->CellBlockData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CellBlockData).ArrayNum = 0;
  (this->CellBlockData).ArrayMax = 0;
  (this->UnCullablePrimitives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UnCullablePrimitives).ArrayNum = 0;
  (this->UnCullablePrimitives).ArrayMax = 0;
  this->UncullableItemChunksOffset = -1;
  this->UncullableNumItemChunks = 0;
  this->SmallFootprintCellSideThreshold = 0x10;
  this->bTestCellVsQueryBounds = true;
  this->bUseAsyncUpdate = true;
  this->bUseAsyncQuery = true;
  this->bPackedCellDataLocked = false;
  UE::RendererPrivateUtils::Implementation::FPersistentBuffer::FPersistentBuffer
            ((FPersistentBuffer *)&this->CellHeadersBuffer,0x10,L"SceneCulling.CellHeaders",true);
  UE::RendererPrivateUtils::Implementation::FPersistentBuffer::FPersistentBuffer
            ((FPersistentBuffer *)&this->ItemChunksBuffer,0x10,L"SceneCulling.ItemChunks",true);
  UE::RendererPrivateUtils::Implementation::FPersistentBuffer::FPersistentBuffer
            ((FPersistentBuffer *)&this->InstanceIdsBuffer,0x10,L"SceneCulling.Items",true);
  UE::RendererPrivateUtils::Implementation::FPersistentBuffer::FPersistentBuffer
            ((FPersistentBuffer *)&this->CellBlockDataBuffer,0x10,L"SceneCulling.CellBlockData",true
            );
  UE::RendererPrivateUtils::Implementation::FPersistentBuffer::FPersistentBuffer
            ((FPersistentBuffer *)&this->ExplicitChunkBoundsBuffer,0x10,
             L"SceneCulling.ExplicitChunkBounds",true);
  UE::RendererPrivateUtils::Implementation::FPersistentBuffer::FPersistentBuffer
            ((FPersistentBuffer *)&this->ExplicitChunkCellIdsBuffer,0x10,
             L"SceneCulling.ExplicitChunkBounds",true);
  (this->UsedChunkIdMaskBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->PostUpdateTaskHandle).Pimpl.Reference = (FTaskBase *)0x0;
  EVar10 = FSceneInterface::GetShaderPlatform((FSceneInterface *)param_1);
  bVar9 = UseNanite(EVar10,true,true);
  if ((!bVar9) && (4 < (byte)LogRenderer._0_1_)) {
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = *(int *)(this->_padding_ + 0x4d98);
    lVar15 = (longlong)local_70;
    _Src = *(void **)(this->_padding_ + 0x4d90);
    if (local_70 == 0) {
      local_6c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_70,0,&local_78,local_70,&local_6c);
      memcpy(local_78.Data,_Src,lVar15 * 2);
    }
    EVar10 = FSceneInterface::GetShaderPlatform((FSceneInterface *)param_1);
    ::LexToString(local_68,EVar10,true);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
  }
  return this;
}

// ~FSceneCulling @ 145479360

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSceneCulling::~FSceneCulling(FSceneCulling *this)

{
  atomic<unsigned_int> *paVar1;
  longlong *plVar2;
  int *piVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  FTaskBase *pFVar6;
  FRDGPooledBuffer *pFVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  ForElementType<unsigned_int> FVar10;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar11;
  FSceneCullingBuilder *pFVar12;
  longlong lVar13;
  
  pFVar6 = (this->PostUpdateTaskHandle).Pimpl.Reference;
  if (pFVar6 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar6->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  pFVar7 = (this->UsedChunkIdMaskBuffer).Reference;
  if (pFVar7 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar7->_padding_;
    LOCK();
    lVar13 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar13 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar7->_padding_)(pFVar7,1);
    }
  }
  puVar8 = *(undefined8 **)&(this->ExplicitChunkCellIdsBuffer).field_0x18;
  if (puVar8 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar8 + 1);
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (piVar3 != (int *)0x0)) {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
  puVar8 = *(undefined8 **)&(this->ExplicitChunkBoundsBuffer).field_0x18;
  if (puVar8 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar8 + 1);
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (piVar3 != (int *)0x0)) {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
  puVar8 = *(undefined8 **)&(this->CellBlockDataBuffer).field_0x18;
  if (puVar8 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar8 + 1);
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (piVar3 != (int *)0x0)) {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
  puVar8 = *(undefined8 **)&(this->InstanceIdsBuffer).field_0x18;
  if (puVar8 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar8 + 1);
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (piVar3 != (int *)0x0)) {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
  puVar8 = *(undefined8 **)&(this->ItemChunksBuffer).field_0x18;
  if (puVar8 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar8 + 1);
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (piVar3 != (int *)0x0)) {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
  puVar8 = *(undefined8 **)&(this->CellHeadersBuffer).field_0x18;
  if (puVar8 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar8 + 1);
    LOCK();
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (piVar3 != (int *)0x0)) {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
  pFVar9 = (this->UnCullablePrimitives).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  pFVar9 = (this->CellBlockData).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  FVar10 = (this->UsedChunkIdMask).AllocatorInstance.SecondaryData;
  if (FVar10 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  FVar10 = (this->BlockLevelOccupancyMask).AllocatorInstance.SecondaryData;
  if (FVar10 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  FVar10 = (this->CellOccupancyMask).AllocatorInstance.SecondaryData;
  if (FVar10 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  pFVar9 = (this->CellHeaders).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  pFVar9 = (this->FreeChunks).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  pFVar9 = (this->PackedCellData).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  FVar11 = (this->CellChunkIdAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
  if (FVar11 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar11);
  }
  FVar11 = (this->CellChunkIdAllocator).FreeSpans.AllocatorInstance.SecondaryData;
  if (FVar11 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar11);
  }
  pFVar9 = (this->PackedCellChunkData).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  pFVar12 = (this->ActiveUpdaterImplementation).Ptr;
  if (pFVar12 != (FSceneCullingBuilder *)0x0) {
    (**(code **)&pFVar12[-1].TotalAddedInstances)(&pFVar12[-1].TotalAddedInstances);
  }
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
  ::
  ~TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
              *)&(this->SpatialHash).HashMap);
  TSparseArray<FSceneCulling::FCellIndexCacheEntry,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FSceneCulling::FCellIndexCacheEntry,FDefaultSparseArrayAllocator>
            (&this->CellIndexCache);
  DestructItems<FSceneCulling::FPrimitiveState,int>
            ((FPrimitiveState *)(this->PrimitiveStates).AllocatorInstance.Data,
             (this->PrimitiveStates).ArrayNum);
  pFVar9 = (this->PrimitiveStates).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  this->_padding_ = (longlong)&___7ISceneExtension__6B_;
  return;
}

// operator() @ 14547d520

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FSceneCulling::TestSphere<`FSceneInstanceCullingQuery::ComputeResult'::__l9::FResultConsumer>'::
__l4::<lambda_1>::operator()(void *this,TLocation<__int64> *param_1)

{
  double *pdVar1;
  code *pcVar2;
  bool bVar3;
  TKeyValue<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock>
  *pTVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  char cVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  char cVar16;
  ulonglong uVar17;
  double dVar18;
  uint local_res8 [2];
  longlong *local_res10;
  FCellBlock *local_res18;
  undefined5 uStack_165;
  TFootprint<signed_char> local_158;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  TVector<float>_u_0 local_138;
  float local_12c;
  TFootprint<signed_char> local_128;
  ulonglong local_118;
  ulonglong uStack_110;
  ulonglong local_108;
  TIntVector3<__int64>_u_0 local_f8;
  <lambda_1> local_d8;
  longlong local_a8;
  long64 lStack_a0;
  longlong local_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  
  local_13c = param_1->Level;
  local_148 = *(int *)&(param_1->Coord).field0_0x0;
  local_144 = *(int *)((longlong)&(param_1->Coord).field0_0x0 + 8);
  local_140 = *(int *)((longlong)&(param_1->Coord).field0_0x0 + 0x10);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
  ::FindIdByHash(*(TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
                   **)this,(FHashType)(uint)local_res8,
                 (FBlockLocAligned *)
                 (ulonglong)
                 (local_148 * -0x3b71d0b5 + local_13c * -0x34a05b27 + local_144 * -0x3662f0df +
                  local_140 * -0x338d5bbd & 0x7fffffff));
  if (local_res8[0] != 0xffffffff) {
    pTVar4 = Experimental::RobinHoodHashTable_Private::
             TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
             ::FData::Get(*(FData **)this,local_res8[0]);
    pdVar1 = *(double **)((longlong)this + 0x10);
    local_res18 = (FCellBlock *)&(pTVar4->Pair).field_0x10;
    local_a8 = (param_1->Coord).field0_0x0._s_0.X;
    lStack_a0 = (param_1->Coord).field0_0x0._s_0.Y;
    local_f8._s_0.Z = (param_1->Coord).field0_0x0._s_0.Z;
    dVar18 = (double)**(float **)((longlong)this + 8);
    local_12c = (float)pdVar1[3] + **(float **)((longlong)this + 0x18) * __real_3f000000;
    local_138._s_0.Y = (float)(pdVar1[1] - (double)(param_1->Coord).field0_0x0._s_0.Y * dVar18);
    lVar10 = (param_1->Coord).field0_0x0._s_0.Y;
    local_138._s_0.Z = (float)(pdVar1[2] - (double)local_f8._s_0.Z * dVar18);
    local_res10 = *(longlong **)((longlong)this + 0x20);
    local_138._s_0.X = (float)(*pdVar1 - (double)local_a8 * dVar18);
    local_90 = *local_res10;
    lStack_88 = local_res10[1];
    local_98 = (param_1->Coord).field0_0x0._s_0.Z;
    local_80 = local_res10[2];
    uVar13 = local_90 + local_a8 * -8;
    uVar8 = local_res10[1] + lVar10 * -8;
    uVar5 = local_80 + local_98 * -8;
    uVar17 = 7;
    if ((longlong)uVar5 < 7) {
      uVar17 = uVar5;
    }
    uVar5 = 7;
    if ((longlong)uVar8 < 7) {
      uVar5 = uVar8;
    }
    uVar8 = 7;
    if ((longlong)uVar13 < 7) {
      uVar8 = uVar13;
    }
    uVar11 = 0;
    uVar13 = uVar11;
    if (0 < (longlong)uVar8) {
      uVar13 = uVar8;
    }
    uVar8 = uVar11;
    if (0 < (longlong)uVar5) {
      uVar8 = uVar5;
    }
    local_78 = local_res10[3];
    lStack_70 = local_res10[4];
    uVar5 = uVar11;
    if (0 < (longlong)uVar17) {
      uVar5 = uVar17;
    }
    local_68 = local_res10[5];
    uVar9 = local_res10[4] + lVar10 * -8;
    uVar6 = local_68 + local_98 * -8;
    uVar14 = local_78 + local_a8 * -8;
    uVar17 = 7;
    if ((longlong)uVar6 < 7) {
      uVar17 = uVar6;
    }
    uVar6 = 7;
    if ((longlong)uVar9 < 7) {
      uVar6 = uVar9;
    }
    uVar9 = 7;
    if ((longlong)uVar14 < 7) {
      uVar9 = uVar14;
    }
    local_118 = uVar11;
    if (0 < (longlong)uVar9) {
      local_118 = uVar9;
    }
    uStack_110 = uVar11;
    if (0 < (longlong)uVar6) {
      uStack_110 = uVar6;
    }
    local_108 = uVar11;
    if (0 < (longlong)uVar17) {
      local_108 = uVar17;
    }
    cVar16 = (char)uVar13;
    if (uVar13 != (longlong)cVar16) {
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
    cVar12 = (char)uVar8;
    if (uVar8 != (longlong)cVar12) {
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
    cVar7 = (char)uVar5;
    if (uVar5 != (longlong)cVar7) {
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
    local_f8._s_0.X = local_118;
    local_f8._s_0.Y = uStack_110;
    local_f8._s_0.Z = local_108;
    UE::Math::TIntVector3<signed_char>::TIntVector3<signed_char><__int64>
              ((TIntVector3<signed_char> *)&uStack_165,(TIntVector3<__int64> *)&local_f8._s_0);
    local_128.Min.field0_0x0._s_0.Y = cVar12;
    local_128.Min.field0_0x0._s_0.X = cVar16;
    local_128.Min.field0_0x0._s_0.Z = cVar7;
    local_128._3_5_ = uStack_165;
    local_158.Max.field0_0x0._0_1_ = (undefined1)uStack_165;
    local_128.Level = (int)local_res10[6];
    local_158.Max.field0_0x0._1_1_ = (undefined1)((uint5)uStack_165 >> 8);
    local_158.Max.field0_0x0._2_1_ = (undefined1)((uint5)uStack_165 >> 0x10);
    cVar7 = cVar7 >> 1;
    cVar16 = cVar16 >> 1;
    cVar12 = cVar12 >> 1;
    if (cVar7 <= (char)local_158.Max.field0_0x0._2_1_ >> 1) {
      lVar10 = (longlong)cVar7 << 2;
      uVar17 = (ulonglong)(byte)((((char)local_158.Max.field0_0x0._2_1_ >> 1) - cVar7) + 1);
      do {
        if (cVar12 <= (char)local_158.Max.field0_0x0._1_1_ >> 1) {
          lVar15 = (longlong)cVar12;
          uVar5 = (ulonglong)(byte)((((char)local_158.Max.field0_0x0._1_1_ >> 1) - cVar12) + 1);
          do {
            if (cVar16 <= (char)local_158.Max.field0_0x0._0_1_ >> 1) {
              uVar13 = (ulonglong)(byte)((((char)local_158.Max.field0_0x0._0_1_ >> 1) - cVar16) + 1)
              ;
              uVar8 = (longlong)cVar16 + (lVar10 + lVar15) * 4;
              do {
                uVar11 = uVar11 | 1L << (uVar8 & 0x3f);
                uVar13 = uVar13 - 1;
                uVar8 = uVar8 + 1;
              } while (uVar13 != 0);
            }
            lVar15 = lVar15 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        lVar10 = lVar10 + 4;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    if ((local_res18->CoarseCellMask & uVar11) != 0) {
      local_d8.Block = local_res18;
      local_d8.LevelCellSize = *(float **)((longlong)this + 0x18);
      local_d8.__this = *(FSceneCulling **)((longlong)this + 0x28);
      local_d8.BlockLocalSphere = (TSphere<float> *)&local_138;
      local_d8.ResultConsumer = *(FResultConsumer **)((longlong)this + 0x30);
      local_158._0_8_ = local_128._0_8_;
      THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::TFootprint<signed_char>::
      ForEach<__FSceneCulling::TestSphere<_FSceneInstanceCullingQuery::ComputeResult_::__l9::FResultConsumer>_::__l4::<lambda_1>::operator()_::__l8::<lambda_1>_>
                (&local_128,&local_d8);
    }
  }
  return;
}

// BeginUpdate @ 145497f70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FSceneCulling::BeginUpdate(FSceneCulling *this,FRDGBuilder *param_1,bool param_2)

{
  TPimplPtr<FSceneCullingBuilder,0> *pTVar1;
  void *_Src;
  FSceneCullingBuilder *pFVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  EShaderPlatform EVar8;
  undefined8 *puVar9;
  FSceneInterface *this_00;
  longlong lVar10;
  longlong local_48;
  ForAnyElementType local_40;
  Type local_38;
  int local_34;
  FString local_30;
  
  pTVar1 = &this->ActiveUpdaterImplementation;
  if ((pTVar1->Ptr != (FSceneCullingBuilder *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ActiveUpdaterImplementation.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                         ,0xa5d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if (this->bIsEnabled != false) {
    EVar8 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
    bVar6 = UseNanite(EVar8,true,true);
    if ((!bVar6) && (4 < (byte)LogRenderer._0_1_)) {
      this_00 = (FSceneInterface *)this->_padding_;
      local_40.Data = (FScriptContainerElement *)0x0;
      local_38 = this_00[0x4d9].FeatureLevel;
      lVar10 = (longlong)(int)local_38;
      _Src = (void *)this_00[0x4d9]._padding_;
      if (local_38 == ES2_REMOVED) {
        local_34 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_38,0,&local_40,local_38,&local_34);
        memcpy(local_40.Data,_Src,lVar10 * 2);
        this_00 = (FSceneInterface *)this->_padding_;
      }
      EVar8 = FSceneInterface::GetShaderPlatform(this_00);
      ::LexToString(&local_30,EVar8,true);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
      if (local_40.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data);
      }
    }
  }
  EVar8 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
  bVar6 = UseNanite(EVar8,true,true);
  this->bIsEnabled = bVar6;
  pTVar5 = CVarSceneCullingUseForceRebuildExplicitChunkBounds.Ref;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  this->bForceFullExplictBoundsBuild = pTVar5->ShadowedValue[1];
  pTVar4 = CVarSmallFootprintSideThreshold.Ref;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  this->SmallFootprintCellSideThreshold = pTVar4->ShadowedValue[1];
  pTVar4 = CVarSceneCullingAsyncUpdate.Ref;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  this->bUseAsyncUpdate = pTVar4->ShadowedValue[1] != 0;
  pTVar4 = CVarSceneCullingAsyncQuery.Ref;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  this->bUseAsyncQuery = pTVar4->ShadowedValue[1] != 0;
  if (this->bIsEnabled == false) {
    Empty(this);
  }
  else {
    puVar9 = ::operator_new(0x1f0);
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9[1] = 0;
      *puVar9 = UE::Core::Private::PimplPtr::DeleterFunc<FSceneCullingBuilder>;
      FSceneCullingBuilder::FSceneCullingBuilder((FSceneCullingBuilder *)(puVar9 + 2),this,param_2);
    }
    if ((TPimplPtr<FSceneCullingBuilder,0> *)&local_48 == pTVar1) {
      if ((FSceneCullingBuilder *)(puVar9 + 2) != (FSceneCullingBuilder *)0x0) {
        (*(code *)*puVar9)(puVar9);
      }
    }
    else {
      pFVar2 = pTVar1->Ptr;
      pTVar1->Ptr = (FSceneCullingBuilder *)(puVar9 + 2);
      if (pFVar2 != (FSceneCullingBuilder *)0x0) {
        (**(code **)&pFVar2[-1].TotalAddedInstances)(&pFVar2[-1].TotalAddedInstances);
      }
    }
  }
  return this->bIsEnabled;
}

// CreateRenderer @ 14549c100

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ISceneExtensionRenderer * __thiscall
FSceneCulling::CreateRenderer
          (FSceneCulling *this,FSceneRendererBase *param_1,FEngineShowFlags *param_2)

{
  ISceneExtensionRenderer *pIVar1;
  
  pIVar1 = ::operator_new(0xb0);
  if (pIVar1 != (ISceneExtensionRenderer *)0x0) {
    pIVar1->SceneRendererInternal = param_1;
    pIVar1->_padding_ = (longlong)&___7FSceneCullingRenderer__6B_;
    pIVar1[3].SceneRendererInternal = (FSceneRendererBase *)0x0;
    pIVar1[4]._padding_ = 0;
    pIVar1[4].SceneRendererInternal = (FSceneRendererBase *)0x0;
    pIVar1[5]._padding_ = 0;
    pIVar1[5].SceneRendererInternal = (FSceneRendererBase *)0x0;
    pIVar1[6]._padding_ = 0;
    pIVar1[6].SceneRendererInternal = (FSceneRendererBase *)0x0;
    pIVar1[7]._padding_ = 0;
    pIVar1[7].SceneRendererInternal = (FSceneRendererBase *)0x0;
    pIVar1[8]._padding_ = 0;
    pIVar1[8].SceneRendererInternal = (FSceneRendererBase *)0x0;
    pIVar1[9]._padding_ = 0;
    pIVar1[9].SceneRendererInternal = (FSceneRendererBase *)0x0;
    pIVar1[10]._padding_ = 0;
    pIVar1[1]._padding_ = (longlong)this;
    return pIVar1;
  }
  return (ISceneExtensionRenderer *)0x0;
}

// CreateUpdater @ 14549f050

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ISceneExtensionUpdater * __thiscall FSceneCulling::CreateUpdater(FSceneCulling *this)

{
  ISceneExtensionUpdater *pIVar1;
  
  pIVar1 = ::operator_new(0x28);
  if (pIVar1 != (ISceneExtensionUpdater *)0x0) {
    pIVar1[1] = (ISceneExtensionUpdater)0x0;
    *pIVar1 = (ISceneExtensionUpdater)&___7FUpdater_FSceneCulling__6B_;
    pIVar1[2] = (ISceneExtensionUpdater)0x0;
    pIVar1[3] = (ISceneExtensionUpdater)this;
    *(undefined4 *)(pIVar1 + 4) = 0;
    return pIVar1;
  }
  return (ISceneExtensionUpdater *)0x0;
}

// Empty @ 1454a1170

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSceneCulling::Empty(FSceneCulling *this)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  FRDGPooledBuffer *pFVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_SceneCulling.UniqueName,false,None,Default,true)
  ;
  local_res10 = LLMTagDeclaration_SceneCulling.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  iVar6 = *(int *)&(this->SpatialHash).HashMap.field_0x54;
  puVar2 = &(this->SpatialHash).HashMap.field_0x54;
  *(undefined4 *)&(this->SpatialHash).HashMap.field_0x50 = 0;
  if (iVar6 != 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,1,(ForElementType<unsigned_int> *)&(this->SpatialHash).HashMap.field_0x40,0,
               (int *)puVar2);
  }
  iVar6 = *(int *)&(this->SpatialHash).HashMap.field_0x50;
  if (iVar6 == *(int *)puVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (0x404,(ForElementType<unsigned_int> *)&(this->SpatialHash).HashMap.field_0x40
                       ,(int *)puVar2);
  }
  puVar2 = &(this->SpatialHash).HashMap.field_0x58;
  *(int *)&(this->SpatialHash).HashMap.field_0x50 = iVar6 + 1;
  puVar7 = &(this->SpatialHash).HashMap.field_0x6c;
  iVar6 = *(int *)puVar7;
  *(undefined4 *)&(this->SpatialHash).HashMap.field_0x68 = 0;
  if (iVar6 != 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
              (4,4,1,(ForElementType<Experimental::FHashType> *)puVar2,0,(int *)puVar7);
  }
  iVar6 = *(int *)&(this->SpatialHash).HashMap.field_0x68;
  if (iVar6 == *(int *)&(this->SpatialHash).HashMap.field_0x6c) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                      (0x404,(ForElementType<Experimental::FHashType> *)puVar2,(int *)puVar7);
  }
  *(int *)&(this->SpatialHash).HashMap.field_0x68 = iVar6 + 1;
  puVar7 = *(undefined1 **)&(this->SpatialHash).HashMap.field_0x60;
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = puVar2;
  }
  DefaultConstructItems<Experimental::FHashType,int>(puVar7 + (longlong)iVar6 * 4,1);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
  ::FData::Empty((FData *)&(this->SpatialHash).HashMap);
  *(undefined8 *)&(this->SpatialHash).HashMap.field_0x70 = 0;
  piVar1 = &(this->PackedCellChunkData).ArrayMax;
  (this->PackedCellChunkData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PackedCellChunkData).AllocatorInstance,0,piVar1);
  }
  FSpanAllocator::Empty(&this->CellChunkIdAllocator);
  piVar1 = &(this->PackedCellData).ArrayMax;
  (this->PackedCellData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PackedCellData).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->FreeChunks).ArrayMax;
  (this->FreeChunks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FreeChunks).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->CellHeaders).ArrayMax;
  (this->CellHeaders).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->CellHeaders).AllocatorInstance,0,piVar1);
  }
  iVar6 = (this->CellOccupancyMask).MaxBits;
  (this->CellOccupancyMask).NumBits = 0;
  if ((iVar6 < 0) || (0x80 < iVar6)) {
    (this->CellOccupancyMask).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->CellOccupancyMask,0);
  }
  iVar6 = (this->BlockLevelOccupancyMask).MaxBits;
  (this->BlockLevelOccupancyMask).NumBits = 0;
  if ((iVar6 < 0) || (0x80 < iVar6)) {
    (this->BlockLevelOccupancyMask).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->BlockLevelOccupancyMask,0);
  }
  piVar1 = &(this->CellBlockData).ArrayMax;
  (this->CellBlockData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,0,&(this->CellBlockData).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->UnCullablePrimitives).ArrayMax;
  (this->UnCullablePrimitives).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->UnCullablePrimitives).AllocatorInstance,0,piVar1);
  }
  this->UncullableNumItemChunks = 0;
  this->UncullableItemChunksOffset = -1;
  DestructItems<FSceneCulling::FPrimitiveState,int>
            ((FPrimitiveState *)(this->PrimitiveStates).AllocatorInstance.Data,
             (this->PrimitiveStates).ArrayNum);
  piVar1 = &(this->PrimitiveStates).ArrayMax;
  (this->PrimitiveStates).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->PrimitiveStates).AllocatorInstance,0,piVar1);
  }
  TSparseArray<FSceneCulling::FCellIndexCacheEntry,FDefaultSparseArrayAllocator>::DestroyElements
            (&this->CellIndexCache,0,*(int *)&(this->CellIndexCache).field_0x8);
  puVar2 = &(this->CellIndexCache).field_0xc;
  *(undefined4 *)&(this->CellIndexCache).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->CellIndexCache,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->CellIndexCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CellIndexCache).field_0x34 = 0;
  iVar6 = *(int *)&(this->CellIndexCache).field_0x2c;
  *(undefined4 *)&(this->CellIndexCache).field_0x28 = 0;
  if ((iVar6 < 0) || (0x80 < iVar6)) {
    *(undefined4 *)&(this->CellIndexCache).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CellIndexCache).field_0x10,0);
  }
  this->TotalCellIndexCacheItems = 0;
  this->NumDynamicInstances = 0;
  this->NumStaticInstances = 0;
  UE::RendererPrivateUtils::Implementation::FPersistentBuffer::Empty
            ((FPersistentBuffer *)&this->CellHeadersBuffer);
  UE::RendererPrivateUtils::Implementation::FPersistentBuffer::Empty
            ((FPersistentBuffer *)&this->ItemChunksBuffer);
  UE::RendererPrivateUtils::Implementation::FPersistentBuffer::Empty
            ((FPersistentBuffer *)&this->InstanceIdsBuffer);
  UE::RendererPrivateUtils::Implementation::FPersistentBuffer::Empty
            ((FPersistentBuffer *)&this->CellBlockDataBuffer);
  UE::RendererPrivateUtils::Implementation::FPersistentBuffer::Empty
            ((FPersistentBuffer *)&this->ExplicitChunkBoundsBuffer);
  UE::RendererPrivateUtils::Implementation::FPersistentBuffer::Empty
            ((FPersistentBuffer *)&this->ExplicitChunkCellIdsBuffer);
  pFVar4 = (this->UsedChunkIdMaskBuffer).Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    (this->UsedChunkIdMaskBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar3 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// EndUpdate @ 1454a1e40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSceneCulling::EndUpdate
          (FSceneCulling *this,FRDGBuilder *param_1,FSceneUniformBuffer *param_2,bool param_3)

{
  if (this->bIsEnabled != false) {
    FinalizeUpdateAndClear(this,param_1,param_2,param_3);
    ValidateAllInstanceAllocations(this);
    return;
  }
  return;
}

// FinalizeUpdateAndClear @ 1454a5720

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSceneCulling::FinalizeUpdateAndClear
          (FSceneCulling *this,FRDGBuilder *param_1,FSceneUniformBuffer *param_2,bool param_3)

{
  int *piVar1;
  FTaskBase *pFVar2;
  FSceneCullingBuilder *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_SceneCulling_Update_FinalizeAndClear> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FLLMScope local_res8 [2];
  FRDGBuilder *local_res10;
  FColor_u_0 local_88 [2];
  FName local_80;
  FName local_78;
  LARGE_INTEGER local_70;
  FMemScope local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  
  local_res10 = param_1;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_SceneCulling.UniqueName,false,None,Default,true)
  ;
  local_78 = LLMTagDeclaration_SceneCulling.UniqueName;
  FMemScope::FMemScope(&local_68,&local_78,true);
  if ((this->ActiveUpdaterImplementation).Ptr == (FSceneCullingBuilder *)0x0) {
    pFVar2 = (this->PostUpdateTaskHandle).Pimpl.Reference;
    if (((pFVar2 != (FTaskBase *)0x0) && ((pFVar2->Subsequents).bIsClosed == (atomic<bool>)0x0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActiveUpdaterImplementation.IsValid() || PostUpdateTaskHandle.IsCompleted()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                           ,0xac0,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((this->ActiveUpdaterImplementation).Ptr == (FSceneCullingBuilder *)0x0) goto LAB_1454a5b00;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"SceneCulling_Update_FinalizeAndClear");
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2757,"SceneCulling_Update_FinalizeAndClear",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
               ,0xac5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2757);
  }
  FVar12.Value = 0;
  FVar10 = StatPtr_STAT_SceneCulling_Update_FinalizeAndClear;
  if (StatPtr_STAT_SceneCulling_Update_FinalizeAndClear ==
      (FThreadSafeStaticStat<FStat_STAT_SceneCulling_Update_FinalizeAndClear>)0x0) {
    pFVar9 = ::FName::FName(&local_60,"STAT_SceneCulling_Update_FinalizeAndClear");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_SceneCulling_Update_FinalizeAndClear>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_SceneCulling_Update_FinalizeAndClear,*pFVar9,
                        L"Update Finalize","STATGROUP_SceneCulling","STATCAT_Advanced",
                        L"SceneCulling",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar11 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar11 == 0)) {
LAB_1454a598c:
    bVar6 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_88[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = FVar13.Value;
        local_80.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                   ,0xac6);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1454a598c;
    local_80.ComparisonIndex.Value = FVar13.Value;
    local_80.Number = uVar11;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar6 = true;
    FVar12.Value = local_58.ComparisonIndex.Value;
  }
  pFVar2 = (this->PostUpdateTaskHandle).Pimpl.Reference;
  if (pFVar2 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar2);
  }
  FSceneCullingBuilder::UploadToGPU((this->ActiveUpdaterImplementation).Ptr,local_res10,param_2);
  if (param_3) {
    FSceneCullingBuilder::PublishStats((this->ActiveUpdaterImplementation).Ptr);
  }
  pFVar3 = (this->ActiveUpdaterImplementation).Ptr;
  if (pFVar3 != (FSceneCullingBuilder *)0x0) {
    (this->ActiveUpdaterImplementation).Ptr = (FSceneCullingBuilder *)0x0;
    (**(code **)&pFVar3[-1].TotalAddedInstances)();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar14 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar12.Value;
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
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
LAB_1454a5b00:
  FMemScope::~FMemScope(&local_68);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// FreeChunk @ 1454a6630

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSceneCulling::FreeChunk(FSceneCulling *this,uint param_1)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint local_res10 [6];
  
  pTVar2 = &this->FreeChunks;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_res10[0] = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(this->FreeChunks).ArrayMax * 4))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->FreeChunks).ArrayNum;
  piVar1 = &(this->FreeChunks).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->FreeChunks).ArrayNum = iVar6 + 1;
  *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_res10[0];
  return;
}

// GetCellLoc @ 1454a7570

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TLocation<__int64> * __thiscall
FSceneCulling::GetCellLoc
          (FSceneCulling *this,TLocation<__int64> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  TLocation<__int64> *pTVar7;
  TKeyValue<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock>
  *pTVar8;
  
  __return_storage_ptr__->Level = -0x80000000;
  if ((-1 < param_1) && (param_1 < (this->CellHeaders).ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (this->CellHeaders).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TLocation<__int64> *)(*pcVar1)();
        return pTVar7;
      }
    }
    if (*(int *)((this->CellHeaders).AllocatorInstance.Data + (longlong)param_1 * 8) != 0) {
      pTVar8 = Experimental::RobinHoodHashTable_Private::
               TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
               ::FData::Get((FData *)&(this->SpatialHash).HashMap,(uint)param_1 >> 9);
      iVar2 = *(int *)&pTVar8->Pair;
      iVar3 = *(int *)&(pTVar8->Pair).field_0x4;
      iVar4 = *(int *)&(pTVar8->Pair).field_0x8;
      __return_storage_ptr__->Level = *(int *)&(pTVar8->Pair).field_0xc + -3;
      (__return_storage_ptr__->Coord).field0_0x0._s_0.X =
           (ulonglong)(param_1 & 7) + (longlong)iVar2 * 8;
      (__return_storage_ptr__->Coord).field0_0x0._s_0.Y =
           (ulonglong)((uint)param_1 >> 3 & 7) + (longlong)iVar3 * 8;
      (__return_storage_ptr__->Coord).field0_0x0._s_0.Z =
           (ulonglong)((uint)param_1 >> 6 & 7) + (longlong)iVar4 * 8;
    }
  }
  return __return_storage_ptr__;
}

// GetUpdateTaskHandle @ 1454aab80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FTaskHandle __thiscall FSceneCulling::GetUpdateTaskHandle(FSceneCulling *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> in_RDX;
  
  if ((this->ActiveUpdaterImplementation).Ptr == (FSceneCullingBuilder *)0x0) {
    (in_RDX.Reference)->_padding_ = 0;
  }
  else {
    pFVar3 = (this->PostUpdateTaskHandle).Pimpl.Reference;
    if (pFVar3 == (FTaskBase *)0x0) {
      (in_RDX.Reference)->_padding_ = 0;
    }
    else {
      LOCK();
      pFVar3->RefCount = (atomic<unsigned_int>)((int)pFVar3->RefCount + 1);
      UNLOCK();
      (in_RDX.Reference)->_padding_ = (longlong)pFVar3;
      LOCK();
      pFVar3->RefCount = (atomic<unsigned_int>)((int)pFVar3->RefCount + 1);
      UNLOCK();
      LOCK();
      paVar1 = &pFVar3->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
        return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)in_RDX.Reference;
      }
    }
  }
  return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)in_RDX.Reference;
}

// IsSmallCullingVolume @ 1454ac1a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FSceneCulling::IsSmallCullingVolume(FSceneCulling *this,FCullingVolume *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  
  dVar1 = (param_1->Sphere).W;
  if (0.0 < dVar1) {
    iVar5 = (this->SpatialHash).FirstLevel;
    dVar2 = (param_1->Sphere).Center.field0_0x0._s_0.X;
    dVar3 = (param_1->Sphere).Center.field0_0x0._s_0.Z;
    dVar4 = (param_1->Sphere).Center.field0_0x0._s_0.Y;
    dVar9 = (this->SpatialHash).RecCellSizes[iVar5];
    dVar9 = dVar9 + dVar9;
    dVar1 = (double)((float)(ulonglong)(1L << ((char)iVar5 + 1U & 0x3f)) * __real_3f000000) + dVar1;
    lVar8 = ((longlong)ROUND((dVar2 + dVar1) * dVar9 - __real_3fe0000000000000) >> 1) -
            ((longlong)ROUND((dVar2 - dVar1) * dVar9 - __real_3fe0000000000000) >> 1);
    lVar7 = ((longlong)ROUND((dVar4 + dVar1) * dVar9 - __real_3fe0000000000000) >> 1) -
            ((longlong)ROUND((dVar4 - dVar1) * dVar9 - __real_3fe0000000000000) >> 1);
    lVar6 = ((longlong)ROUND((dVar3 + dVar1) * dVar9 - __real_3fe0000000000000) >> 1) -
            ((longlong)ROUND((dVar3 - dVar1) * dVar9 - __real_3fe0000000000000) >> 1);
    if (lVar7 < lVar8) {
      lVar7 = lVar8;
    }
    if (lVar6 < lVar7) {
      lVar6 = lVar7;
    }
    return lVar6 <= this->SmallFootprintCellSideThreshold;
  }
  return false;
}

// LockChunkCellData @ 1454ac5b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint * __thiscall FSceneCulling::LockChunkCellData(FSceneCulling *this,uint param_1,int param_2)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int local_38 [4];
  
  if (this->bPackedCellDataLocked != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bPackedCellDataLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                       ,0xb32,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      puVar6 = (uint *)(*pcVar3)();
      return puVar6;
    }
  }
  iVar8 = param_2 - (this->FreeChunks).ArrayNum;
  if (0 < iVar8) {
    uVar9 = (this->PackedCellData).ArrayNum;
    pTVar1 = &this->FreeChunks;
    iVar7 = 0;
    do {
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      local_38[0] = iVar7 + (uVar9 >> 6);
      if ((pFVar2 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->FreeChunks).ArrayMax * 4))
      {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          puVar6 = (uint *)(*pcVar3)();
          return puVar6;
        }
      }
      iVar5 = (this->FreeChunks).ArrayNum;
      if (iVar5 == (this->FreeChunks).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar1->AllocatorInstance,&(this->FreeChunks).ArrayMax);
      }
      iVar7 = iVar7 + 1;
      (this->FreeChunks).ArrayNum = iVar5 + 1;
      *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_38[0];
    } while (iVar7 < iVar8);
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->PackedCellData,iVar8 * 0x40 + (this->PackedCellData).ArrayNum,Default);
  }
  uVar10 = param_1 * 0x40;
  this->bPackedCellDataLocked = true;
  uVar9 = 0;
  if ((int)uVar10 < (this->PackedCellData).ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      puVar6 = (uint *)(*pcVar3)();
      return puVar6;
    }
  }
  return (uint *)((this->PackedCellData).AllocatorInstance.Data + (longlong)(int)uVar10 * 4);
}

// PublishStats @ 1454b2d10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSceneCulling::PublishStats(FSceneCulling *this)

{
  int iVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_SceneCulling_BlockCount> FVar4;
  FThreadStats *pFVar5;
  FThreadStatsPool *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_SceneCulling_CellCount> FVar7;
  FThreadSafeStaticStat<FStat_STAT_SceneCulling_ItemChunkCount> FVar8;
  FThreadSafeStaticStat<FStat_STAT_SceneCulling_ExplicitChunkCount> FVar9;
  FThreadSafeStaticStat<FStat_STAT_SceneCulling_CompressedChunkCount> FVar10;
  FThreadSafeStaticStat<FStat_STAT_SceneCulling_ItemBufferSize> FVar11;
  FThreadSafeStaticStat<FStat_STAT_SceneCulling_ChunkOccupancy> FVar12;
  FThreadSafeStaticStat<FStat_STAT_SceneCulling_SceneInstanceCount> FVar13;
  FThreadSafeStaticStat<FStat_STAT_SceneCulling_IdCacheSize> FVar14;
  FThreadSafeStaticStat<FStat_STAT_SceneCulling_NumStaticInstances> FVar15;
  FThreadSafeStaticStat<FStat_STAT_SceneCulling_NumDynamicInstances> FVar16;
  int iVar17;
  uchar auVar18 [8];
  FName local_res8;
  uchar local_res10 [8];
  FStatMessage local_58 [2];
  
  if (FThreadStats::bPrimaryEnable) {
    FVar4 = StatPtr_STAT_SceneCulling_BlockCount;
    if (StatPtr_STAT_SceneCulling_BlockCount ==
        (FThreadSafeStaticStat<FStat_STAT_SceneCulling_BlockCount>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_SceneCulling_BlockCount");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_SceneCulling_BlockCount>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_BlockCount,*pFVar3,
                         L"Block Count","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling",
                         true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar4;
    auVar18 = (uchar  [8])(longlong)(this->CellBlockData).ArrayNum;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_58[0].NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
      local_res8 = FVar2;
      local_58[0].StatData.Pad = auVar18;
      local_58[0].NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,local_58);
      FStatsTrace::Set(&local_res8,(long64)auVar18);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar7 = StatPtr_STAT_SceneCulling_CellCount;
      if (StatPtr_STAT_SceneCulling_CellCount ==
          (FThreadSafeStaticStat<FStat_STAT_SceneCulling_CellCount>)0x0) {
        pFVar3 = ::FName::FName(&local_res8,"STAT_SceneCulling_CellCount");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_SceneCulling_CellCount>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_CellCount,*pFVar3
                           ,L"Cell Count","STATGROUP_SceneCulling","STATCAT_Advanced",
                           L"SceneCulling",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar2 = *(FName *)FVar7;
      auVar18 = (uchar  [8])(longlong)(this->CellHeaders).ArrayNum;
      local_res8 = FVar2;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar5 == (FThreadStats *)0x0) {
          pFVar6 = FThreadStatsPool::Get();
          pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
        }
        local_58[0].NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
        local_res8 = FVar2;
        local_58[0].StatData.Pad = auVar18;
        local_58[0].NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar5,local_58);
        FStatsTrace::Set(&local_res8,(long64)auVar18);
        if (pFVar5->ScopeCount == 0) {
          FThreadStats::Flush(pFVar5,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar5,false,false);
        }
      }
    }
  }
  iVar1 = (this->CellChunkIdAllocator).CurrentSize;
  if (FThreadStats::bPrimaryEnable != false) {
    FVar8 = StatPtr_STAT_SceneCulling_ItemChunkCount;
    if (StatPtr_STAT_SceneCulling_ItemChunkCount ==
        (FThreadSafeStaticStat<FStat_STAT_SceneCulling_ItemChunkCount>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_SceneCulling_ItemChunkCount");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_SceneCulling_ItemChunkCount>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_ItemChunkCount,
                         *pFVar3,L"Chunk ID Count","STATGROUP_SceneCulling","STATCAT_Advanced",
                         L"SceneCulling",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar8;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_58[0].NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
      local_res8 = FVar2;
      local_58[0].StatData.Pad = (uchar  [8])(longlong)iVar1;
      local_58[0].NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,local_58);
      FStatsTrace::Set(&local_res8,(longlong)iVar1);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
  }
  iVar17 = ((uint)(this->PackedCellData).ArrayNum >> 6) - (this->FreeChunks).ArrayNum;
  if (FThreadStats::bPrimaryEnable != false) {
    FVar9 = StatPtr_STAT_SceneCulling_ExplicitChunkCount;
    if (StatPtr_STAT_SceneCulling_ExplicitChunkCount ==
        (FThreadSafeStaticStat<FStat_STAT_SceneCulling_ExplicitChunkCount>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_SceneCulling_ExplicitChunkCount");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_SceneCulling_ExplicitChunkCount>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_ExplicitChunkCount,
                         *pFVar3,L"Explicit Chunk Count","STATGROUP_SceneCulling","STATCAT_Advanced"
                         ,L"SceneCulling",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar9;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_58[0].NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
      local_res8 = FVar2;
      local_58[0].StatData.Pad = (uchar  [8])(longlong)iVar17;
      local_58[0].NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,local_58);
      FStatsTrace::Set(&local_res8,(longlong)iVar17);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar10 = StatPtr_STAT_SceneCulling_CompressedChunkCount;
      if (StatPtr_STAT_SceneCulling_CompressedChunkCount ==
          (FThreadSafeStaticStat<FStat_STAT_SceneCulling_CompressedChunkCount>)0x0) {
        pFVar3 = ::FName::FName(&local_res8,"STAT_SceneCulling_CompressedChunkCount");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_SceneCulling_CompressedChunkCount>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_SceneCulling_CompressedChunkCount,*pFVar3,
                            L"Compressed Chunk Count","STATGROUP_SceneCulling","STATCAT_Advanced",
                            L"SceneCulling",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar2 = *(FName *)FVar10;
      local_res8 = FVar2;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar5 == (FThreadStats *)0x0) {
          pFVar6 = FThreadStatsPool::Get();
          pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
        }
        local_58[0].NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
        local_res8 = FVar2;
        local_58[0].StatData.Pad = (uchar  [8])(longlong)(iVar1 - iVar17);
        local_58[0].NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar5,local_58);
        FStatsTrace::Set(&local_res8,(longlong)(iVar1 - iVar17));
        if (pFVar5->ScopeCount == 0) {
          FThreadStats::Flush(pFVar5,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar5,false,false);
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar11 = StatPtr_STAT_SceneCulling_ItemBufferSize;
        if (StatPtr_STAT_SceneCulling_ItemBufferSize ==
            (FThreadSafeStaticStat<FStat_STAT_SceneCulling_ItemBufferSize>)0x0) {
          pFVar3 = ::FName::FName(&local_res8,"STAT_SceneCulling_ItemBufferSize");
          FVar11 = (FThreadSafeStaticStat<FStat_STAT_SceneCulling_ItemBufferSize>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_ItemBufferSize
                              ,*pFVar3,L"Item Buffer Size","STATGROUP_SceneCulling",
                              "STATCAT_Advanced",L"SceneCulling",true,true,ST_int64,false,false,
                              MCR_Invalid);
        }
        FVar2 = *(FName *)FVar11;
        auVar18 = (uchar  [8])(longlong)(this->PackedCellData).ArrayNum;
        local_res8 = FVar2;
        if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar5 == (FThreadStats *)0x0) {
            pFVar6 = FThreadStatsPool::Get();
            pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
          }
          local_58[0].NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
          local_res8 = FVar2;
          local_58[0].StatData.Pad = auVar18;
          local_58[0].NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar5,local_58);
          FStatsTrace::Set(&local_res8,(long64)auVar18);
          if (pFVar5->ScopeCount == 0) {
            FThreadStats::Flush(pFVar5,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar5,false,false);
          }
        }
      }
    }
  }
  iVar17 = *(int *)(this->_padding_ + 0x3788);
  if (FThreadStats::bPrimaryEnable != false) {
    FVar12 = StatPtr_STAT_SceneCulling_ChunkOccupancy;
    if (StatPtr_STAT_SceneCulling_ChunkOccupancy ==
        (FThreadSafeStaticStat<FStat_STAT_SceneCulling_ChunkOccupancy>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_SceneCulling_ChunkOccupancy");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_SceneCulling_ChunkOccupancy>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_ChunkOccupancy,
                          *pFVar3,L"Chunk Occupancy","STATGROUP_SceneCulling","STATCAT_Advanced",
                          L"SceneCulling",true,true,NumBits,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar12;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      auVar18 = (uchar  [8])(double)((float)iVar17 / (float)(uint)(iVar1 << 6));
      local_58[0].NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
      local_res8 = FVar2;
      local_58[0].StatData.Pad = auVar18;
      local_58[0].NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,local_58);
      FStatsTrace::Set(&local_res8,(double)auVar18);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar13 = StatPtr_STAT_SceneCulling_SceneInstanceCount;
      if (StatPtr_STAT_SceneCulling_SceneInstanceCount ==
          (FThreadSafeStaticStat<FStat_STAT_SceneCulling_SceneInstanceCount>)0x0) {
        pFVar3 = ::FName::FName(&local_res8,"STAT_SceneCulling_SceneInstanceCount");
        FVar13 = (FThreadSafeStaticStat<FStat_STAT_SceneCulling_SceneInstanceCount>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_SceneCulling_SceneInstanceCount,*pFVar3,
                            L"Scene Instance Count","STATGROUP_SceneCulling","STATCAT_Advanced",
                            L"SceneCulling",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar2 = *(FName *)FVar13;
      auVar18 = (uchar  [8])(longlong)*(int *)(this->_padding_ + 0x3788);
      local_res8 = FVar2;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar5 == (FThreadStats *)0x0) {
          pFVar6 = FThreadStatsPool::Get();
          pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
        }
        local_58[0].NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
        local_res8 = FVar2;
        local_58[0].StatData.Pad = auVar18;
        local_58[0].NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar5,local_58);
        FStatsTrace::Set(&local_res8,(long64)auVar18);
        if (pFVar5->ScopeCount == 0) {
          FThreadStats::Flush(pFVar5,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar5,false,false);
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar14 = StatPtr_STAT_SceneCulling_IdCacheSize;
        if (StatPtr_STAT_SceneCulling_IdCacheSize ==
            (FThreadSafeStaticStat<FStat_STAT_SceneCulling_IdCacheSize>)0x0) {
          pFVar3 = ::FName::FName(&local_res8,"STAT_SceneCulling_IdCacheSize");
          FVar14 = (FThreadSafeStaticStat<FStat_STAT_SceneCulling_IdCacheSize>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_IdCacheSize,
                              *pFVar3,L"Total Id Cache Size","STATGROUP_SceneCulling",
                              "STATCAT_Advanced",L"SceneCulling",true,true,ST_int64,false,false,
                              MCR_Invalid);
        }
        FVar2 = *(FName *)FVar14;
        iVar1 = this->TotalCellIndexCacheItems;
        local_res8 = FVar2;
        if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar5 == (FThreadStats *)0x0) {
            pFVar6 = FThreadStatsPool::Get();
            pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
          }
          local_58[0].NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
          local_res8 = FVar2;
          local_58[0].StatData.Pad = (uchar  [8])(longlong)iVar1;
          local_58[0].NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar5,local_58);
          FStatsTrace::Set(&local_res8,(longlong)iVar1);
          if (pFVar5->ScopeCount == 0) {
            FThreadStats::Flush(pFVar5,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar5,false,false);
          }
        }
        if (FThreadStats::bPrimaryEnable != false) {
          FVar15 = StatPtr_STAT_SceneCulling_NumStaticInstances;
          if (StatPtr_STAT_SceneCulling_NumStaticInstances ==
              (FThreadSafeStaticStat<FStat_STAT_SceneCulling_NumStaticInstances>)0x0) {
            pFVar3 = ::FName::FName(&local_res8,"STAT_SceneCulling_NumStaticInstances");
            FVar15 = (FThreadSafeStaticStat<FStat_STAT_SceneCulling_NumStaticInstances>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_SceneCulling_NumStaticInstances,*pFVar3,
                                L"Num Static Instances","STATGROUP_SceneCulling","STATCAT_Advanced",
                                L"SceneCulling",true,true,ST_int64,false,false,MCR_Invalid);
          }
          FVar2 = *(FName *)FVar15;
          iVar1 = this->NumStaticInstances;
          local_res8 = FVar2;
          if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar5 == (FThreadStats *)0x0) {
              pFVar6 = FThreadStatsPool::Get();
              pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
            }
            local_58[0].NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
            local_res8 = FVar2;
            local_58[0].StatData.Pad = (uchar  [8])(longlong)iVar1;
            local_58[0].NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar5,local_58);
            FStatsTrace::Set(&local_res8,(longlong)iVar1);
            if (pFVar5->ScopeCount == 0) {
              FThreadStats::Flush(pFVar5,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar5,false,false);
            }
          }
          if (FThreadStats::bPrimaryEnable != false) {
            FVar16 = StatPtr_STAT_SceneCulling_NumDynamicInstances;
            if (StatPtr_STAT_SceneCulling_NumDynamicInstances ==
                (FThreadSafeStaticStat<FStat_STAT_SceneCulling_NumDynamicInstances>)0x0) {
              pFVar3 = ::FName::FName(&local_res8,"STAT_SceneCulling_NumDynamicInstances");
              FVar16 = (FThreadSafeStaticStat<FStat_STAT_SceneCulling_NumDynamicInstances>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_SceneCulling_NumDynamicInstances,*pFVar3,
                                  L"Num Dynamic Instances","STATGROUP_SceneCulling",
                                  "STATCAT_Advanced",L"SceneCulling",true,true,ST_int64,false,false,
                                  MCR_Invalid);
            }
            FVar2 = *(FName *)FVar16;
            local_res10 = (uchar  [8])(longlong)this->NumDynamicInstances;
            local_res8 = FVar2;
            if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar5 == (FThreadStats *)0x0) {
                pFVar6 = FThreadStatsPool::Get();
                pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
              }
              auVar18 = local_res10;
              local_58[0].NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
              local_58[0].StatData.Pad[0] = local_res10[0];
              local_58[0].StatData.Pad[1] = local_res10[1];
              local_58[0].StatData.Pad[2] = local_res10[2];
              local_58[0].StatData.Pad[3] = local_res10[3];
              local_58[0].StatData.Pad[4] = local_res10[4];
              local_58[0].StatData.Pad[5] = local_res10[5];
              local_58[0].StatData.Pad[6] = local_res10[6];
              local_58[0].StatData.Pad[7] = local_res10[7];
              local_res8 = FVar2;
              local_58[0].NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
              FThreadStats::AddStatMessage(pFVar5,local_58);
              FStatsTrace::Set(&local_res8,(long64)auVar18);
              if (pFVar5->ScopeCount == 0) {
                FThreadStats::Flush(pFVar5,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar5,false,false);
              }
            }
          }
        }
      }
    }
  }
  if (__CsvProfilerStat2613 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumStaticInstances",_GCsvCategory_SceneCulling.Index);
    __CsvProfilerStat2613 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumStaticInstances",_GCsvCategory_SceneCulling.Index,this->NumStaticInstances,
             Accumulate);
  if (__CsvProfilerStat2614 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumDynamicInstances",_GCsvCategory_SceneCulling.Index);
    __CsvProfilerStat2614 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumDynamicInstances",_GCsvCategory_SceneCulling.Index,this->NumDynamicInstances,
             Accumulate);
  return;
}

// ShouldCreateExtension @ 1454bb170

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __cdecl FSceneCulling::ShouldCreateExtension(FScene *param_1)

{
  bool bVar1;
  
  if (*(int *)&param_1->field_0x8 == 5) {
    bVar1 = DoesPlatformSupportNanite(SP_NumPlatforms,true);
    return bVar1;
  }
  bVar1 = DoesPlatformSupportNanite
                    (GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&param_1->field_0x8],true);
  return bVar1;
}

// ValidateAllInstanceAllocations @ 1454c3140

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSceneCulling::ValidateAllInstanceAllocations(FSceneCulling *this)

{
  int iVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<unsigned_int> FVar11;
  ForElementType<unsigned_int> FVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  
  pTVar3 = CVarValidateAllInstanceAllocations.Ref;
  bVar4 = IsInParallelRenderingThread();
  if ((!bVar4) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pTVar3->ShadowedValue[1] != 0) {
    iVar1 = (this->CellOccupancyMask).NumBits;
    iVar13 = 0;
    iVar15 = 0;
    if (iVar1 != 0) {
      FVar11 = (this->CellOccupancyMask).AllocatorInstance.SecondaryData;
      if (FVar11 == (ForElementType<unsigned_int>)0x0) {
        FVar11 = (ForElementType<unsigned_int>)&this->CellOccupancyMask;
      }
      uVar5 = *(uint *)FVar11;
      while (uVar5 == 0) {
        lVar6 = (longlong)iVar15;
        iVar13 = iVar13 + 0x20;
        iVar15 = iVar15 + 1;
        if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) {
          return;
        }
        uVar5 = *(uint *)((uchar *)((longlong)FVar11 + 4) + lVar6 * 4);
      }
      uVar5 = -uVar5 & uVar5;
      uVar16 = (ulonglong)uVar5 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uVar8 = (int)lVar6 + -1 + iVar13;
      if ((int)uVar8 < iVar1) {
        uVar14 = 0xffffffff;
        do {
          uVar7 = 0;
          if ((int)uVar8 < (this->CellHeaders).ArrayNum) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
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
          uVar16 = *(ulonglong *)
                    ((this->CellHeaders).AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
          uVar9 = uVar16 >> 0x2a;
          uVar7 = (uint)uVar16 & 0x1fffff;
          uVar8 = uVar7 - 1;
          if ((uVar16 & 0x1fffff) == 0) {
            if ((uVar16 & 0x1fffff) == 0) {
              uVar8 = uVar7;
            }
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidCell(CellHeader)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                               ,0xaed,L"");
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          else if ((uVar16 & 0x1fffff) == 0) {
            uVar8 = uVar7;
          }
          uVar8 = uVar8 + ((uint)(uVar16 >> 0x15) & 0x1fffff);
          if (uVar8 != 0) {
            uVar16 = (ulonglong)uVar8;
            do {
              uVar7 = (uint)uVar9;
              uVar8 = 0;
              if ((int)uVar7 < (this->PackedCellChunkData).ArrayNum) {
                uVar8 = ~uVar7 >> 0x1f;
              }
              if ((uVar8 == 0) &&
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
              uVar8 = *(uint *)((this->PackedCellChunkData).AllocatorInstance.Data +
                               (longlong)(int)uVar7 * 4);
              if ((int)uVar8 < 0) {
                uVar10 = 0;
                do {
                  bVar4 = FSpanAllocator::IsFree
                                    ((FSpanAllocator *)(this->_padding_ + 0x3788),
                                     uVar10 + (uVar8 & 0x7fffffff));
                  if ((bVar4) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("!Scene.GPUScene.GetInstanceSceneDataAllocator().IsFree(InstanceId)"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                                         ,0xafd,L""), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar10 < 0x40);
              }
              else {
                uVar10 = (uVar8 & 0xffffff) << 6;
                if (uVar8 >> 0x18 != 0) {
                  uVar9 = (ulonglong)(uVar8 >> 0x18);
                  do {
                    uVar8 = 0;
                    if ((int)uVar10 < (this->PackedCellData).ArrayNum) {
                      uVar8 = ~uVar10 >> 0x1f;
                    }
                    if ((uVar8 == 0) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar4)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    bVar4 = FSpanAllocator::IsFree
                                      ((FSpanAllocator *)(this->_padding_ + 0x3788),
                                       *(int *)((this->PackedCellData).AllocatorInstance.Data +
                                               (longlong)(int)uVar10 * 4));
                    if ((bVar4) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("!Scene.GPUScene.GetInstanceSceneDataAllocator().IsFree(InstanceId)"
                                           ,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                                           ,0xb0b,L""), bVar4)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    uVar10 = uVar10 + 1;
                    uVar9 = uVar9 - 1;
                  } while (uVar9 != 0);
                }
              }
              uVar9 = (ulonglong)(uVar7 + 1);
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          uVar7 = (this->CellOccupancyMask).NumBits;
          uVar14 = uVar14 & ~uVar5;
          FVar11 = (this->CellOccupancyMask).AllocatorInstance.SecondaryData;
          FVar12 = (ForElementType<unsigned_int>)&this->CellOccupancyMask;
          if (FVar11 != (ForElementType<unsigned_int>)0x0) {
            FVar12 = FVar11;
          }
          uVar8 = uVar14 & *(uint *)((longlong)FVar12 + (longlong)iVar15 * 4);
          while (uVar8 == 0) {
            lVar6 = (longlong)iVar15;
            iVar13 = iVar13 + 0x20;
            iVar15 = iVar15 + 1;
            uVar8 = uVar7;
            if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
            goto LAB_1454c352c;
            uVar14 = 0xffffffff;
            uVar8 = *(uint *)((uchar *)((longlong)FVar12 + 4) + lVar6 * 4);
          }
          uVar5 = -uVar8 & uVar8;
          uVar16 = (ulonglong)uVar5 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          uVar8 = (int)lVar6 + -1 + iVar13;
          if ((int)uVar7 < (int)uVar8) {
            uVar8 = uVar7;
          }
LAB_1454c352c:
        } while ((int)uVar8 < (int)uVar7);
      }
    }
  }
  return;
}

