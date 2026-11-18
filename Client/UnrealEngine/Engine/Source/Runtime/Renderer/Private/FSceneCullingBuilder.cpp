// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 16

// <lambda_3> @ 145476550

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

<lambda_3> * __thiscall
`FSceneCullingBuilder::UploadToGPU'::__l53::<lambda_3>::<lambda_3>(void *this,<lambda_3> *param_1)

{
  *(FSceneCullingBuilder **)this = param_1->__this;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  if ((param_1->FreeChunkBits).AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0)
  {
    memmove((void *)((longlong)this + 8),&param_1->FreeChunkBits,0x10);
  }
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  *(ForElementType<unsigned_int> *)((longlong)this + 0x18) =
       (param_1->FreeChunkBits).AllocatorInstance.SecondaryData;
  (param_1->FreeChunkBits).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  *(int *)((longlong)this + 0x20) = (param_1->FreeChunkBits).NumBits;
  *(int *)((longlong)this + 0x24) = (param_1->FreeChunkBits).MaxBits;
  (param_1->FreeChunkBits).NumBits = 0;
  (param_1->FreeChunkBits).MaxBits = 0;
  return this;
}

// FSceneCullingBuilder @ 145478220

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FSceneCullingBuilder * __thiscall
FSceneCullingBuilder::FSceneCullingBuilder
          (FSceneCullingBuilder *this,FSceneCulling *param_1,bool param_2)

{
  int *piVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  FSceneCullingBuilder *pFVar5;
  longlong lVar6;
  longlong lVar7;
  
  this->CachedCellIdIndex = -1;
  (this->Stats).CompRangeCount = 0;
  (this->Stats).CopiedIdCount = 0;
  this->SpatialHash = &param_1->SpatialHash;
  (this->Stats).VisitedIdCount = 0;
  this->SpatialHashMap = &(param_1->SpatialHash).HashMap;
  (this->RemovedInstanceFlags).AllocatorInstance.Data = (uint *)0x0;
  (this->RemovedInstanceFlags).NumBits = 0;
  (this->RemovedInstanceFlags).MaxBits = 0;
  (this->TempCells).AllocatorInstance.Data = (FTempCell *)0x0;
  (this->TempCells).ArrayNum = 0;
  (this->TempCells).ArrayMax = 0;
  this->SceneCulling = param_1;
  (this->BlockDataUploader)._padding_ =
       (longlong)
       &
       ___7__TBufferScatterUploader_UFCellBlockData_HLSL_UE__UFStructuredBufferTraits_Implementation_RendererPrivateUtils_3__00_Implementation_RendererPrivateUtils_UE__6B_
  ;
  piVar1 = &(this->BlockDataUploader).UploadData.ScatterOffsets.ArrayMax;
  *piVar1 = 0;
  this->ExplicitBoundsMode = Disabled;
  (this->Stats).RangeCount = 0;
  this->LowestFreeCacheIndex = 0;
  this->TotalCellChunkDataCount = 0;
  (this->TempCellMask).AllocatorInstance.Data = (uint *)0x0;
  (this->TempCellMask).NumBits = 0;
  (this->TempCellMask).MaxBits = 0;
  this->NumDirtyBlocks = 0;
  (this->DirtyBlocks).AllocatorInstance.Data = (uint *)0x0;
  (this->DirtyBlocks).NumBits = 0;
  (this->DirtyBlocks).MaxBits = 0;
  (this->DirtyChunks).AllocatorInstance.Data = (uint *)0x0;
  (this->DirtyChunks).NumBits = 0;
  (this->DirtyChunks).MaxBits = 0;
  (this->DirtyCellBoundsMaskStatic).AllocatorInstance.Data = (uint *)0x0;
  (this->DirtyCellBoundsMaskStatic).NumBits = 0;
  (this->DirtyCellBoundsMaskStatic).MaxBits = 0;
  (this->DirtyCellBoundsMaskDynamic).AllocatorInstance.Data = (uint *)0x0;
  (this->DirtyCellBoundsMaskDynamic).NumBits = 0;
  (this->DirtyCellBoundsMaskDynamic).MaxBits = 0;
  (this->DirtyCellBoundsIndices).AllocatorInstance.Data = (int *)0x0;
  (this->DirtyCellBoundsIndices).ArrayNum = 0;
  (this->DirtyCellBoundsIndices).ArrayMax = 0;
  (this->DirtyChunkBoundsData).AllocatorInstance.Data = (TIntVector2<int> *)0x0;
  (this->DirtyChunkBoundsData).ArrayNum = 0;
  (this->DirtyChunkBoundsData).ArrayMax = 0;
  (this->BlockDataUploader).UploadDataProxy = (FUploadData *)0x0;
  (this->BlockDataUploader).UploadData.Values.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BlockDataUploader).UploadData.Values.ArrayNum = 0;
  (this->BlockDataUploader).UploadData.Values.ArrayMax = 0;
  (this->BlockDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->BlockDataUploader).UploadData.ScatterOffsets.ArrayNum = 0;
  if ((this->BlockDataUploader).UploadData.ScatterOffsets.ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BlockDataUploader).UploadData.ScatterOffsets.AllocatorInstance,
               (this->BlockDataUploader).UploadData.ScatterOffsets.ArrayNum,piVar1);
  }
  (this->ItemChunkDataUploader).UploadDataProxy = (FUploadData *)0x0;
  (this->ItemChunkDataUploader)._padding_ =
       (longlong)
       &
       ___7__TBufferScatterUploader_IUFStructuredBufferTraits_Implementation_RendererPrivateUtils_UE___0EA__Implementation_RendererPrivateUtils_UE__6B_
  ;
  piVar1 = &(this->ItemChunkDataUploader).UploadData.ScatterOffsets.ArrayMax;
  (this->ItemChunkDataUploader).UploadData.Values.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  (this->ItemChunkDataUploader).UploadData.Values.ArrayNum = 0;
  (this->ItemChunkDataUploader).UploadData.Values.ArrayMax = 0;
  (this->ItemChunkDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ItemChunkDataUploader).UploadData.ScatterOffsets.ArrayNum = 0;
  if ((this->ItemChunkDataUploader).UploadData.ScatterOffsets.ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ItemChunkDataUploader).UploadData.ScatterOffsets.AllocatorInstance,
               (this->ItemChunkDataUploader).UploadData.ScatterOffsets.ArrayNum,piVar1);
  }
  (this->CellHeaderUploader).UploadDataProxy = (FUploadData *)0x0;
  (this->CellHeaderUploader)._padding_ =
       (longlong)
       &
       ___7__TBufferScatterUploader_UFPackedCellHeader_HLSL_UE__UFStructuredBufferTraits_Implementation_RendererPrivateUtils_3__00_Implementation_RendererPrivateUtils_UE__6B_
  ;
  piVar1 = &(this->CellHeaderUploader).UploadData.ScatterOffsets.ArrayMax;
  (this->CellHeaderUploader).UploadData.Values.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  (this->CellHeaderUploader).UploadData.Values.ArrayNum = 0;
  (this->CellHeaderUploader).UploadData.Values.ArrayMax = 0;
  (this->CellHeaderUploader).UploadData.ScatterOffsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CellHeaderUploader).UploadData.ScatterOffsets.ArrayNum = 0;
  if ((this->CellHeaderUploader).UploadData.ScatterOffsets.ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->CellHeaderUploader).UploadData.ScatterOffsets.AllocatorInstance,
               (this->CellHeaderUploader).UploadData.ScatterOffsets.ArrayNum,piVar1);
  }
  (this->ItemChunkUploader).UploadDataProxy = (FUploadData *)0x0;
  (this->ItemChunkUploader)._padding_ =
       (longlong)
       &
       ___7__TBufferScatterUploader_IUFStructuredBufferTraits_Implementation_RendererPrivateUtils_UE___00_Implementation_RendererPrivateUtils_UE__6B_
  ;
  piVar1 = &(this->ItemChunkUploader).UploadData.ScatterOffsets.ArrayMax;
  (this->ItemChunkUploader).UploadData.Values.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  (this->ItemChunkUploader).UploadData.Values.ArrayNum = 0;
  (this->ItemChunkUploader).UploadData.Values.ArrayMax = 0;
  (this->ItemChunkUploader).UploadData.ScatterOffsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ItemChunkUploader).UploadData.ScatterOffsets.ArrayNum = 0;
  if ((this->ItemChunkUploader).UploadData.ScatterOffsets.ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ItemChunkUploader).UploadData.ScatterOffsets.AllocatorInstance,
               (this->ItemChunkUploader).UploadData.ScatterOffsets.ArrayNum,piVar1);
  }
  this->DynamicInstancedPrimitiveState = Dynamic;
  this->TotalUpdatedInstances = 0;
  this->TotalAddedInstances = 0;
  this->TotalRemovedInstances = 0;
  this->bUsePrecomputed = false;
  lVar7 = this->SceneCulling->_padding_;
  lVar6 = 0x3790;
  if (*(char *)(lVar7 + 0x3858) == '\0') {
    lVar6 = 0x378c;
  }
  TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::SetNum<bool>
            (&this->RemovedInstanceFlags,*(int *)(lVar6 + lVar7),false);
  lVar7 = this->SceneCulling->_padding_;
  lVar6 = 0x4c28;
  if (*(char *)(lVar7 + 0x4cf0) == '\0') {
    lVar6 = 0x4c24;
  }
  TArray<FSceneCulling::FPrimitiveState,TSizedDefaultAllocator<32>_>::SetNum
            (&this->SceneCulling->PrimitiveStates,*(int *)(lVar6 + lVar7),Default);
  pTVar3 = CVarSceneCullingPrecomputed.Ref;
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    lVar7 = 4;
    if (!bVar4) goto LAB_1454784ed;
  }
  lVar7 = 0;
LAB_1454784ed:
  this->bUsePrecomputed = *(int *)((longlong)pTVar3->ShadowedValue + lVar7) != 0;
  pTVar3 = CVarTreatDynamicInstancedAsUncullable.Ref;
  bVar4 = IsInParallelRenderingThread();
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSceneCullingBuilder *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (pTVar3->ShadowedValue[1] != 0) {
    this->DynamicInstancedPrimitiveState = UnCullable;
  }
  return this;
}

// ~FSceneCullingBuilder @ 1454795d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSceneCullingBuilder::~FSceneCullingBuilder(FSceneCullingBuilder *this)

{
  FScriptContainerElement *pFVar1;
  TIntVector2<int> *pTVar2;
  int *piVar3;
  uint *puVar4;
  FTempCell *pFVar5;
  
  pFVar1 = (this->ItemChunkUploader).UploadData.ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ItemChunkUploader).UploadData.Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CellHeaderUploader).UploadData.ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CellHeaderUploader).UploadData.Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ItemChunkDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ItemChunkDataUploader).UploadData.Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BlockDataUploader).UploadData.ScatterOffsets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BlockDataUploader).UploadData.Values.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->DirtyChunkBoundsData).AllocatorInstance.Data;
  if (pTVar2 != (TIntVector2<int> *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pTVar2);
  }
  piVar3 = (this->DirtyCellBoundsIndices).AllocatorInstance.Data;
  if (piVar3 != (int *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(piVar3);
  }
  puVar4 = (this->DirtyCellBoundsMaskDynamic).AllocatorInstance.Data;
  if (puVar4 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar4);
  }
  puVar4 = (this->DirtyCellBoundsMaskStatic).AllocatorInstance.Data;
  if (puVar4 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar4);
  }
  puVar4 = (this->DirtyChunks).AllocatorInstance.Data;
  if (puVar4 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar4);
  }
  puVar4 = (this->DirtyBlocks).AllocatorInstance.Data;
  if (puVar4 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar4);
  }
  puVar4 = (this->TempCellMask).AllocatorInstance.Data;
  if (puVar4 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar4);
  }
  DestructItems<FSceneCullingBuilder::FTempCell,int>
            ((this->TempCells).AllocatorInstance.Data,(this->TempCells).ArrayNum);
  pFVar5 = (this->TempCells).AllocatorInstance.Data;
  if (pFVar5 != (FTempCell *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar5);
  }
  puVar4 = (this->RemovedInstanceFlags).AllocatorInstance.Data;
  if (puVar4 != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(puVar4);
    return;
  }
  return;
}

// AllocateCacheEntry @ 145492eb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall FSceneCullingBuilder::AllocateCacheEntry(FSceneCullingBuilder *this)

{
  FSceneCulling *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  FSparseArrayAllocationInfo local_18;
  
  TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::AddUninitializedAtLowestFreeIndex
            ((TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *)
             &this->SceneCulling->CellIndexCache,&local_18,&this->LowestFreeCacheIndex);
  if (local_18.Pointer != (undefined8 *)0x0) {
    *(undefined8 *)local_18.Pointer = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined1 *)local_18.Pointer = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
  }
  pFVar1 = this->SceneCulling;
  if ((-1 < local_18.Index) && (local_18.Index < *(int *)&(pFVar1->CellIndexCache).field_0x28)) {
    if ((*(int *)&(pFVar1->CellIndexCache).field_0x28 <= local_18.Index) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    puVar5 = *(undefined1 **)&(pFVar1->CellIndexCache).field_0x20;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(pFVar1->CellIndexCache).field_0x10;
    }
    if ((*(uint *)(puVar5 + (longlong)
                            ((int)(local_18.Index + (local_18.Index >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (local_18.Index & 0x1fU) & 1) != 0) {
      return local_18.Index;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("SceneCulling.CellIndexCache.IsValidIndex(CacheIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                     ,0x628,L"");
  if (!bVar3) {
    return local_18.Index;
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// AllocateChunk @ 145492f90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __thiscall FSceneCullingBuilder::AllocateChunk(FSceneCullingBuilder *this)

{
  uint *puVar1;
  FSceneCulling *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  pFVar2 = this->SceneCulling;
  iVar6 = (pFVar2->FreeChunks).ArrayNum;
  if (iVar6 == 0) {
    if (pFVar2->bPackedCellDataLocked != false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bPackedCellDataLocked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                         ,0xb20,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    uVar5 = (pFVar2->PackedCellData).ArrayNum;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&pFVar2->PackedCellData,uVar5 + 0x40,No);
    uVar5 = uVar5 >> 6;
  }
  else {
    if (iVar6 < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
    }
    iVar6 = (pFVar2->FreeChunks).ArrayNum;
    uVar5 = *(uint *)((pFVar2->FreeChunks).AllocatorInstance.Data + (longlong)iVar6 * 4 + -4);
    (pFVar2->FreeChunks).ArrayNum = iVar6 + -1;
  }
  iVar6 = uVar5 + 1;
  if ((int)(uVar5 + 1) < (this->DirtyChunks).NumBits) {
    iVar6 = (this->DirtyChunks).NumBits;
  }
  TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::SetNum<bool>
            (&this->DirtyChunks,iVar6,false);
  if (((int)uVar5 < 0) || ((this->DirtyChunks).NumBits <= (int)uVar5)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  puVar1 = (this->DirtyChunks).AllocatorInstance.Data +
           ((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5);
  *puVar1 = *puVar1 | 1 << ((byte)uVar5 & 0x1f);
  return uVar5;
}

// FreeCacheEntry @ 1454a6540

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSceneCullingBuilder::FreeCacheEntry(FSceneCullingBuilder *this,int param_1)

{
  int *piVar1;
  FSceneCulling *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 *puVar5;
  
  pFVar2 = this->SceneCulling;
  if ((-1 < param_1) && (param_1 < *(int *)&(pFVar2->CellIndexCache).field_0x28)) {
    if ((*(int *)&(pFVar2->CellIndexCache).field_0x28 <= param_1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar5 = *(undefined1 **)&(pFVar2->CellIndexCache).field_0x20;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(pFVar2->CellIndexCache).field_0x10;
    }
    if ((*(uint *)(puVar5 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_1454a65e6;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("SceneCulling.CellIndexCache.IsValidIndex(CacheIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                     ,0x630,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1454a65e6:
  pFVar2 = this->SceneCulling;
  piVar1 = &pFVar2->TotalCellIndexCacheItems;
  *piVar1 = *piVar1 - *(int *)(*(longlong *)&pFVar2->CellIndexCache + 0x10 +
                              (longlong)param_1 * 0x18);
  TSparseArray<FSceneCulling::FCellIndexCacheEntry,FDefaultSparseArrayAllocator>::RemoveAt
            (&this->SceneCulling->CellIndexCache,param_1,1);
  this->LowestFreeCacheIndex = 0;
  return;
}

// GetCacheEntry @ 1454a74b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FCellIndexCacheEntry * __thiscall
FSceneCullingBuilder::GetCacheEntry(FSceneCullingBuilder *this,int param_1)

{
  FSceneCulling *pFVar1;
  code *pcVar2;
  bool bVar3;
  FCellIndexCacheEntry *pFVar4;
  undefined1 *puVar5;
  
  pFVar1 = this->SceneCulling;
  if ((-1 < param_1) && (param_1 < *(int *)&(pFVar1->CellIndexCache).field_0x28)) {
    if (*(int *)&(pFVar1->CellIndexCache).field_0x28 <= param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FCellIndexCacheEntry *)(*pcVar2)();
        return pFVar4;
      }
    }
    puVar5 = *(undefined1 **)&(pFVar1->CellIndexCache).field_0x20;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(pFVar1->CellIndexCache).field_0x10;
    }
    if ((*(uint *)(puVar5 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_1454a754b;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("SceneCulling.CellIndexCache.IsValidIndex(CacheIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                     ,0x638,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FCellIndexCacheEntry *)(*pcVar2)();
    return pFVar4;
  }
LAB_1454a754b:
  return (FCellIndexCacheEntry *)
         (*(longlong *)&this->SceneCulling->CellIndexCache + (longlong)param_1 * 0x18);
}

// IsTempCell @ 1454ac300

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FSceneCullingBuilder::IsTempCell(FSceneCullingBuilder *this,int param_1)

{
  if (((-1 < param_1) && (param_1 < (this->TempCellMask).NumBits)) &&
     (((this->TempCellMask).AllocatorInstance.Data[(uint)param_1 >> 5] >> (param_1 & 0x1fU) & 1) !=
      0)) {
    return true;
  }
  return false;
}

// MarkCellForRemove @ 1454ac970

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FSceneCullingBuilder::MarkCellForRemove
          (FSceneCullingBuilder *this,int param_1,int param_2,EType param_3)

{
  int *piVar1;
  TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *this_00;
  uint *puVar2;
  FSceneCulling *pFVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FTempCell *pFVar12;
  undefined4 local_40;
  
  pFVar3 = this->SceneCulling;
  uVar9 = 0;
  if (param_1 < (pFVar3->CellHeaders).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = &this->TempCellMask;
  uVar4 = *(ulonglong *)((pFVar3->CellHeaders).AllocatorInstance.Data + (longlong)param_1 * 8);
  uVar11 = (uint)uVar4;
  uVar9 = (uint)(uVar4 >> 0x20);
  if ((param_1 < 0) || ((this->TempCellMask).NumBits <= param_1)) {
    TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::PadToNum
              (this_00,(this->SceneCulling->CellHeaders).ArrayNum,false);
    if (-1 < param_1) goto LAB_1454acb07;
LAB_1454acb0c:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if (((this_00->AllocatorInstance).Data[(uint)param_1 >> 5] >> (param_1 & 0x1fU) & 1) != 0) {
      if ((uVar9 != 0xffffffff) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CellHeader.Packed1 == TempCellMarker",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                             ,0x539,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar9 = 0;
      if ((int)uVar11 < (this->TempCells).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar12 = (this->TempCells).AllocatorInstance.Data + (int)uVar11;
      goto LAB_1454accb1;
    }
    TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::PadToNum
              (this_00,(this->SceneCulling->CellHeaders).ArrayNum,false);
LAB_1454acb07:
    if ((this->TempCellMask).NumBits <= param_1) goto LAB_1454acb0c;
  }
  piVar1 = &(this->TempCells).ArrayMax;
  puVar2 = (this_00->AllocatorInstance).Data + ((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5);
  *puVar2 = *puVar2 | 1 << ((byte)param_1 & 0x1f);
  uVar7 = (this->TempCells).ArrayNum;
  if (uVar7 == *piVar1) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSceneCullingBuilder::FTempCell>_>
                      (0x158,8,&(this->TempCells).AllocatorInstance,piVar1);
  }
  (this->TempCells).ArrayNum = uVar7 + 1;
  DefaultConstructItems<FSceneCullingBuilder::FTempCell,int>
            ((this->TempCells).AllocatorInstance.Data + (int)uVar7,1);
  uVar8 = 0;
  if ((int)uVar7 < (this->TempCells).ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar12 = (this->TempCells).AllocatorInstance.Data + (int)uVar7;
  uVar10 = (uint)(uVar4 >> 0x15);
  pFVar12->CellOffset = param_1;
  local_40 = CONCAT31(local_40._1_3_,(uVar4 & 0x1fffff) != 0);
  uVar8 = (uVar11 & 0x1fffff) - 1;
  if ((uVar4 & 0x1fffff) == 0) {
    uVar8 = uVar11 & 0x1fffff;
  }
  uVar4 = CONCAT44(uVar8,uVar10) & 0xffffffff001fffff;
  (pFVar12->PrevCellHeader).NumItemChunks = uVar8 + (uVar10 & 0x1fffff);
  (pFVar12->PrevCellHeader).ItemChunksOffset = uVar9 >> 10;
  (pFVar12->PrevCellHeader).NumStaticChunks = (int)uVar4;
  (pFVar12->PrevCellHeader).NumDynamicChunks = (int)(uVar4 >> 0x20);
  *(undefined4 *)&(pFVar12->PrevCellHeader).bIsValid = local_40;
  pFVar3 = this->SceneCulling;
  uVar9 = 0;
  if (param_1 < (pFVar3->CellHeaders).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(ulonglong *)((pFVar3->CellHeaders).AllocatorInstance.Data + (longlong)param_1 * 8) =
       (ulonglong)uVar7 | 0xffffffff00000000;
LAB_1454accb1:
  if (((pFVar12->PrevCellHeader).bIsValid == false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidCell(TempCell.PrevCellHeader)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                         ,0x71f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar12->RemovedInstanceCount[(int)param_3] =
       pFVar12->RemovedInstanceCount[(int)param_3] + param_2;
  pFVar12->bAnyChange[(int)param_3] = true;
  if (param_3 == Dynamic) {
    piVar1 = &this->SceneCulling->NumDynamicInstances;
    *piVar1 = *piVar1 - param_2;
    return;
  }
  piVar1 = &this->SceneCulling->NumStaticInstances;
  *piVar1 = *piVar1 - param_2;
  return;
}

// MarkForRemove @ 1454acd40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FSceneCullingBuilder::MarkForRemove
          (FSceneCullingBuilder *this,int param_1,int param_2,int param_3,EType param_4)

{
  TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::SetRange
            (&this->RemovedInstanceFlags,param_2,param_3,true);
  MarkCellForRemove(this,param_1,param_3,param_4);
  return;
}

// MarkInstancesForRemoval @ 1454acda0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSceneCullingBuilder::MarkInstancesForRemoval
          (FSceneCullingBuilder *this,FPersistentPrimitiveIndex param_1,FPrimitiveSceneInfo *param_2
          )

{
  int iVar1;
  FSceneCulling *pFVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_SceneCulling_RemovedInstanceCount> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FCellIndexCacheEntry *this_02;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  int local_res8;
  uint local_res10 [2];
  FPrimitiveState local_b8;
  int local_90;
  int local_8c;
  FPrimitiveState local_88;
  FName local_60;
  FName local_58;
  FStatMessage local_50;
  FName local_40;
  
  pFVar2 = this->SceneCulling;
  uVar11 = 0;
  lVar10 = (longlong)param_1.Index;
  uVar9 = 0;
  if (param_1.Index < (pFVar2->PrimitiveStates).ArrayNum) {
    uVar9 = (uint)~param_1.Index >> 0x1f;
  }
  local_res10[0] = param_1.Index;
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (pFVar2->PrimitiveStates).AllocatorInstance.Data;
  local_b8.InstanceDataOffset = *(int *)(pFVar3 + lVar10 * 0x28);
  uVar15 = *(uint *)(pFVar3 + lVar10 * 0x28 + 8) & 7;
  iVar1 = *(int *)(pFVar3 + lVar10 * 0x28 + 4);
  uVar16 = *(uint *)(pFVar3 + lVar10 * 0x28 + 0x10) & 0xfffffff;
  local_88.State = Unknown;
  local_88.bDynamic = false;
  local_88.Payload = 0xfffffff;
  local_b8.State = *(uint *)(pFVar3 + lVar10 * 0x28 + 8);
  local_88.InstanceDataOffset = -1;
  local_b8.bDynamic = pFVar3[lVar10 * 0x28 + 0xc];
  local_88.NumInstances = 0;
  local_b8.Payload = *(uint *)(pFVar3 + lVar10 * 0x28 + 0x10);
  local_b8.InstanceSceneDataImmutable.Object =
       *(FInstanceSceneDataImmutable **)(pFVar3 + lVar10 * 0x28 + 0x18);
  local_b8.InstanceSceneDataImmutable.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(pFVar3 + lVar10 * 0x28 + 0x20);
  *(undefined8 *)(pFVar3 + lVar10 * 0x28 + 0x20) = 0;
  *(undefined8 *)(pFVar3 + lVar10 * 0x28 + 0x18) = 0;
  lVar10 = (longlong)(int)local_res10[0];
  pFVar2 = this->SceneCulling;
  local_88.InstanceSceneDataImmutable.Object = (FInstanceSceneDataImmutable *)0x0;
  local_88.InstanceSceneDataImmutable.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  uVar9 = 0;
  if ((int)local_res10[0] < (pFVar2->PrimitiveStates).ArrayNum) {
    uVar9 = ~local_res10[0] >> 0x1f;
  }
  local_b8.NumInstances = iVar1;
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FSceneCulling::FPrimitiveState::operator=
            ((FPrimitiveState *)((pFVar2->PrimitiveStates).AllocatorInstance.Data + lVar10 * 0x28),
             &local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.InstanceSceneDataImmutable.SharedReferenceCount.ReferenceController);
  if ((((iVar1 < 1) && (uVar15 != 0)) && (uVar15 != 3)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrimitiveState.NumInstances > 0 || PrimitiveState.State == FPrimitiveState::Unknown || PrimitiveState.State == FPrimitiveState::UnCullable"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                         ,0x75d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar15 != 0) {
    if (uVar15 == 3) {
      pFVar2 = this->SceneCulling;
      pFVar3 = (pFVar2->UnCullablePrimitives).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_res10) &&
          ((FScriptContainerElement *)local_res10 <
           pFVar3 + (longlong)(pFVar2->UnCullablePrimitives).ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar1 = (pFVar2->UnCullablePrimitives).ArrayNum;
      if (iVar1 != 0) {
        pFVar3 = (pFVar2->UnCullablePrimitives).AllocatorInstance.Data;
        local_res8._0_1_ = *(uint *)pFVar3 != local_res10[0];
        uVar12 = uVar11;
        uVar14 = uVar11;
        uVar9 = local_res10[0];
        do {
          uVar16 = (uint)uVar12;
          uVar15 = uVar16;
          do {
            uVar11 = uVar11 + 1;
            uVar15 = uVar15 + 1;
            uVar12 = (ulonglong)uVar15;
            if ((longlong)iVar1 <= (longlong)uVar11) break;
          } while (local_res8._0_1_ == (*(uint *)(pFVar3 + uVar11 * 4) != uVar9));
          if (local_res8._0_1_ != false) {
            uVar13 = (uint)uVar14;
            if (uVar13 != uVar16) {
              memmove(pFVar3 + (longlong)(int)uVar13 * 4,pFVar3 + (longlong)(int)uVar16 * 4,
                      (longlong)(int)(uVar15 - uVar16) << 2);
              uVar9 = local_res10[0];
            }
            uVar14 = (ulonglong)(uVar13 + (uVar15 - uVar16));
          }
          local_res8._0_1_ = (bool)(local_res8._0_1_ ^ 1);
        } while ((longlong)uVar11 < (longlong)iVar1);
        (pFVar2->UnCullablePrimitives).ArrayNum = (int)uVar14;
      }
    }
    else {
      if ((iVar1 != 0) && (FThreadStats::bPrimaryEnable != false)) {
        FVar8 = StatPtr_STAT_SceneCulling_RemovedInstanceCount;
        if (StatPtr_STAT_SceneCulling_RemovedInstanceCount ==
            (FThreadSafeStaticStat<FStat_STAT_SceneCulling_RemovedInstanceCount>)0x0) {
          pFVar7 = ::FName::FName(&local_40,"STAT_SceneCulling_RemovedInstanceCount");
          FVar8 = (FThreadSafeStaticStat<FStat_STAT_SceneCulling_RemovedInstanceCount>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)
                             &StatPtr_STAT_SceneCulling_RemovedInstanceCount,*pFVar7,
                             L"Removed Instances","STATGROUP_SceneCulling","STATCAT_Advanced",
                             L"SceneCulling",true,true,ST_int64,false,false,MCR_Invalid);
        }
        FVar4 = *(FName *)FVar8;
        local_60 = FVar4;
        if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          this_00 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_00 == (FThreadStats *)0x0) {
            this_01 = FThreadStatsPool::Get();
            this_00 = FThreadStatsPool::GetFromPool(this_01);
          }
          local_50.NameAndInfo.Index = local_60.ComparisonIndex.Value;
          local_50.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
          local_58 = FVar4;
          local_50.StatData.Pad = (uchar  [8])(longlong)iVar1;
          FThreadStats::AddStatMessage(this_00,&local_50);
          FStatsTrace::Add(&local_58,(longlong)iVar1);
          if (this_00->ScopeCount == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
      TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::SetRange
                (&this->RemovedInstanceFlags,local_b8.InstanceDataOffset,iVar1,true);
      if (uVar15 == 1) {
        MarkCellForRemove(this,uVar16,iVar1,local_b8.bDynamic);
      }
      else if (uVar15 == 2) {
        RemovePrecomputed(this,&local_b8);
      }
      else if (uVar15 - 4 < 2) {
        this_02 = GetCacheEntry(this,uVar16);
        local_res8 = 0;
        if (0 < (this_02->Items).ArrayNum) {
          do {
            FSceneCulling::FCellIndexCacheEntry::LoadAndStepItem(this_02,&local_90);
            MarkCellForRemove(this,local_8c,local_90,(uint)(uVar15 == 4));
            local_res8 = local_res8 + 1;
          } while (local_res8 < (this_02->Items).ArrayNum);
        }
        FreeCacheEntry(this,uVar16);
      }
      else {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                           ,0x78e,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.InstanceSceneDataImmutable.SharedReferenceCount.ReferenceController);
  return;
}

// ProcessPostSceneUpdate @ 1454ae040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001454ae554) */
/* WARNING: Removing unreachable block (ram,0x0001454af287) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FSceneCullingBuilder::ProcessPostSceneUpdate
          (FSceneCullingBuilder *this,FScenePostUpdateChangeSet *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  FUploadData *pFVar3;
  TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTVar4;
  FUploadData *pFVar5;
  TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,64>
  *this_00;
  FUploadData *pFVar6;
  TArray<UE::Math::TIntVector2<int>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar7;
  FPackedCellHeader *pFVar8;
  undefined4 uVar9;
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>
  *pTVar10;
  FSceneCulling *pFVar11;
  FScriptContainerElement *pFVar12;
  FPackedCellHeader *pFVar13;
  undefined8 uVar14;
  TRobinHoodHashMap<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
  *this_01;
  TIntVector2<int>_u_0 *pTVar15;
  code *pcVar16;
  byte bVar17;
  char cVar18;
  TIntVector2<int> TVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  bool bVar23;
  bool bVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  FHashElementId FVar30;
  FIteratorState FVar31;
  TStatId TVar32;
  ulonglong uVar33;
  uint *puVar34;
  TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar35;
  TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar36;
  TKeyValue<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock>
  *pTVar37;
  ForElementType<unsigned_int> *pFVar38;
  undefined4 extraout_var;
  ulonglong uVar39;
  ForElementType<unsigned_int> FVar40;
  FScriptContainerElement *pFVar41;
  ForElementType<unsigned_int> FVar42;
  uint uVar43;
  longlong lVar44;
  FScriptContainerElement *pFVar45;
  FTempCell *pFVar46;
  FSceneCulling *pFVar47;
  FTempCell *pFVar48;
  ForElementType<unsigned_int> FVar49;
  FUpdateCommand *pFVar50;
  uint uVar51;
  int iVar52;
  FUpdateCommand *pFVar53;
  TArray<UE::HLSL::FCellBlockData,TSizedDefaultAllocator<32>_> *pTVar54;
  ForElementType<unsigned_int> FVar55;
  ulonglong uVar56;
  uint uVar57;
  FSceneCullingBuilder *pFVar58;
  uint uVar59;
  longlong lVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar64;
  TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar65;
  bool bVar66;
  bool bVar67;
  bool bVar68;
  float fVar69;
  float fVar70;
  undefined1 auStackY_398 [32];
  byte local_347;
  ulonglong local_340;
  uint local_338;
  int local_310;
  undefined1 local_30c;
  undefined1 local_30b;
  undefined1 local_30a;
  undefined1 local_309;
  char local_308;
  undefined1 local_307 [7];
  uint local_300 [2];
  FSceneCulling *local_2f8;
  uint local_2f0 [2];
  undefined8 local_2e8;
  ulonglong local_2e0;
  uint local_2d8 [2];
  undefined4 local_2d0 [2];
  uint local_2c8;
  uint local_2c4;
  uint local_2c0 [2];
  uint local_2b8 [2];
  undefined1 local_2b0 [8];
  FScriptContainerElement local_2a8 [4];
  int local_2a4;
  FScriptContainerElement local_2a0 [4];
  int local_29c;
  int local_298;
  int local_294;
  int local_290;
  undefined1 local_28c [76];
  TIntVector2<int>_u_0 local_240;
  uint local_238;
  ForElementType<unsigned_int> local_230;
  FLLMScope local_228 [2];
  float local_220 [2];
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  undefined4 uStack_204;
  uint local_200;
  uint local_1fc;
  uint local_1f8 [2];
  FName local_1f0;
  byte local_1e8;
  FSceneCullingBuilder *local_1e0;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float local_1c4;
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  undefined1 local_190 [4];
  FName local_18c;
  FSceneCullingBuilder *local_180;
  FMemScope local_178 [2];
  FSourceLocation local_168;
  TArrayView<unsigned_int_const_,int> local_148;
  TArrayView<unsigned_int_const_,int> local_138 [2];
  int local_118;
  int iStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int local_108;
  uint local_104;
  ForElementType<unsigned_int> local_100;
  uint local_78;
  uint local_74 [3];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_1e0 = this;
  FLLMScope::FLLMScope(local_228,LLMTagDeclaration_SceneCulling.UniqueName,false,None,Default,true);
  local_18c = LLMTagDeclaration_SceneCulling.UniqueName;
  FMemScope::FMemScope(local_178,&local_18c,true);
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"SceneCulling_Update_Post");
  bVar66 = -1 < CpuChannel->Enabled;
  if (bVar66) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FSceneCullingBuilder::ProcessPostSceneUpdate(FScenePostUpdateChangeSet_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId2360,"SceneCulling_Update_Post",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
               ,0x938);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FSceneCullingBuilder::ProcessPostSceneUpdate(FScenePostUpdateChangeSet_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId2360);
  }
  TVar32 = FThreadSafeStaticStatInner<FStat_STAT_SceneCulling_Update_Post,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_SceneCulling_Update_Post,1> *)
                      &StatPtr_STAT_SceneCulling_Update_Post);
  local_168.Impl._Line = 0x939;
  local_168.Impl._Function =
       "void __cdecl FSceneCullingBuilder::ProcessPostSceneUpdate(const class FScenePostUpdateChangeSet &)"
  ;
  local_168.Impl._Column = 3;
  local_168.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_1f0,*(TStatIdData **)&(TVar32.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_168);
  if (`public:_void___cdecl_FSceneCullingBuilder::ProcessPostSceneUpdate(FScenePostUpdateChangeSet_const&___ptr64)___ptr64'
      ::__l2::__CsvProfilerStat2362 == false) {
    FCsvProfilerTrace::OutputInlineStat("PostSceneUpdate",_GCsvCategory_SceneCulling.Index);
    `public:_void___cdecl_FSceneCullingBuilder::ProcessPostSceneUpdate(FScenePostUpdateChangeSet_const&___ptr64)___ptr64'
    ::__l2::__CsvProfilerStat2362 = true;
  }
  local_200 = _GCsvCategory_SceneCulling.Index;
  FCsvProfiler::BeginStat("PostSceneUpdate",_GCsvCategory_SceneCulling.Index,"CSV_PostSceneUpdate");
  lVar60 = this->SceneCulling->_padding_;
  lVar44 = 0x4c28;
  if (*(char *)(lVar60 + 0x4cf0) == '\0') {
    lVar44 = 0x4c24;
  }
  TArray<FSceneCulling::FPrimitiveState,TSizedDefaultAllocator<32>_>::SetNum
            (&this->SceneCulling->PrimitiveStates,*(int *)(lVar44 + lVar60),No);
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"SceneCulling_Post_UpdateInstances");
  bVar67 = -1 < CpuChannel->Enabled;
  if (bVar67) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FSceneCullingBuilder::ProcessPostSceneUpdate(FScenePostUpdateChangeSet_const&___ptr64)___ptr64'
                ::__l6::__CpuProfilerEventSpecId2369,"SceneCulling_Post_UpdateInstances",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
               ,0x941);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FSceneCullingBuilder::ProcessPostSceneUpdate(FScenePostUpdateChangeSet_const&___ptr64)___ptr64'
               ::__l6::__CpuProfilerEventSpecId2369);
  }
  pTVar10 = param_1->PrimitiveUpdates;
  iVar52 = (pTVar10->Commands).ArrayNum;
  pFVar53 = (FUpdateCommand *)(pTVar10->Commands).AllocatorInstance.Data;
  pFVar50 = pFVar53 + iVar52;
  local_180 = this;
  while( true ) {
    if ((pTVar10->Commands).ArrayNum != iVar52) {
      local_30c = 0;
      `TCheckedPointerIterator<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::FUpdateCommand_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_30c);
    }
    if (pFVar53 == pFVar50) break;
    if ((pFVar53->bDeleted == false) &&
       ((pFVar53->bAdded != false || ((pFVar53->DirtyFlags & AllCulling) != None)))) {
      `FSceneCullingBuilder::ProcessPostSceneUpdate'::__l6::<lambda_1>::operator()
                (&local_180,pFVar53);
    }
    pFVar53 = pFVar53 + 1;
  }
  if (bVar67) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"BuildHierarchy_FinalizeGrid");
  bVar67 = -1 < CpuChannel->Enabled;
  if (bVar67) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FSceneCullingBuilder::FinalizeTempCellsAndUncullable(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1466,"BuildHierarchy_FinalizeGrid",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
               ,0x5ba);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FSceneCullingBuilder::FinalizeTempCellsAndUncullable(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1466);
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"BuildHierarchy_Consolidate");
  if (CpuChannel->Enabled < 0) {
    FSpanAllocator::Consolidate(&this->SceneCulling->CellChunkIdAllocator);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FSceneCullingBuilder::FinalizeTempCellsAndUncullable(void)___ptr64'
                ::__l3::__CpuProfilerEventSpecId1470,"BuildHierarchy_Consolidate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
               ,0x5be);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FSceneCullingBuilder::FinalizeTempCellsAndUncullable(void)___ptr64'
               ::__l3::__CpuProfilerEventSpecId1470);
    FSpanAllocator::Consolidate(&this->SceneCulling->CellChunkIdAllocator);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  UE::RendererPrivateUtils::Implementation::
  TBufferScatterUploader<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
  ::Reserve(&this->CellHeaderUploader,(this->TempCells).ArrayNum);
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"BuildHierarchy_FinalizeChunks");
  bVar68 = -1 < CpuChannel->Enabled;
  if (bVar68) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FSceneCullingBuilder::FinalizeTempCellsAndUncullable(void)___ptr64'
                ::__l4::__CpuProfilerEventSpecId1478,"BuildHierarchy_FinalizeChunks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
               ,0x5c6);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FSceneCullingBuilder::FinalizeTempCellsAndUncullable(void)___ptr64'
               ::__l4::__CpuProfilerEventSpecId1478);
  }
  uVar63 = (this->TempCells).ArrayNum;
  uVar39 = (ulonglong)(int)uVar63;
  pFVar48 = (this->TempCells).AllocatorInstance.Data;
  pFVar46 = pFVar48 + uVar39;
  while( true ) {
    if ((this->TempCells).ArrayNum != (int)uVar39) {
      local_30b = 0;
      `TCheckedPointerIterator<FSceneCullingBuilder::FTempCell,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_30b);
    }
    if (pFVar48 == pFVar46) break;
    this->TotalRemovedInstances =
         this->TotalRemovedInstances +
         pFVar48->RemovedInstanceCount[0] + pFVar48->RemovedInstanceCount[1];
    if ((pFVar48->PrevCellHeader).bIsValid == false) {
      local_238 = 0;
      uVar57 = 0xffffffff;
      uVar59 = 0;
    }
    else {
      local_238 = (pFVar48->PrevCellHeader).NumItemChunks;
      uVar59 = (pFVar48->PrevCellHeader).NumStaticChunks;
      uVar57 = (pFVar48->PrevCellHeader).ItemChunksOffset;
    }
    iVar52 = pFVar48->RemovedInstanceCount[1];
    uVar51 = uVar57 + uVar59;
    iVar25 = local_238 + uVar57;
    lVar60 = (longlong)(int)uVar51;
    if (lVar60 < iVar25) {
      do {
        if (iVar52 < 1) break;
        pFVar47 = this->SceneCulling;
        uVar28 = 0;
        if ((int)uVar51 < (pFVar47->PackedCellChunkData).ArrayNum) {
          uVar28 = ~uVar51 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        uVar28 = *(uint *)((pFVar47->PackedCellChunkData).AllocatorInstance.Data + lVar60 * 4);
        local_2e8 = (FTempCell *)CONCAT44(local_2e8._4_4_,uVar28);
        if ((int)uVar28 < 0) {
          if (((this->RemovedInstanceFlags).NumBits <= (int)(uVar28 & 0x7fffffff)) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar23)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          if (((this->RemovedInstanceFlags).AllocatorInstance.Data[(int)(uVar28 & 0x7fffffff) >> 5]
               >> (uVar28 & 0x1f) & 1) == 0) {
            this->TotalCellChunkDataCount = this->TotalCellChunkDataCount + 1;
            pTVar65 = &pFVar48->Builders[1].PackedChunkIds;
            pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)pFVar48->Builders[1].PackedChunkIds.AllocatorInstance.SecondaryData.Data;
            pTVar35 = pTVar36;
            if (pTVar36 ==
                (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
              pTVar35 = pTVar65;
            }
            local_28c._12_4_ = uVar28;
            if (pTVar35 <= local_28c + 0xc) {
              if (pTVar36 ==
                  (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)0x0) {
                pTVar36 = pTVar65;
              }
              if ((local_28c + 0xc <
                   (pTVar36->AllocatorInstance).InlineData +
                   (longlong)pFVar48->Builders[1].PackedChunkIds.ArrayMax * 4) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar23)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
            }
            iVar26 = pFVar48->Builders[1].PackedChunkIds.ArrayNum;
            piVar1 = &pFVar48->Builders[1].PackedChunkIds.ArrayMax;
            if (iVar26 == *piVar1) {
              iVar26 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                                 (0x404,&pTVar65->AllocatorInstance,piVar1);
            }
            pFVar48->Builders[1].PackedChunkIds.ArrayNum = iVar26 + 1;
            pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)pFVar48->Builders[1].PackedChunkIds.AllocatorInstance.SecondaryData.Data;
            if (pTVar36 !=
                (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
              pTVar65 = pTVar36;
            }
            *(undefined4 *)((pTVar65->AllocatorInstance).InlineData + (longlong)iVar26 * 4) =
                 local_28c._12_4_;
          }
          else {
            iVar52 = iVar52 + -0x40;
          }
        }
        else {
          pFVar47 = this->SceneCulling;
          uVar27 = uVar28 & 0xffffff;
          uVar62 = uVar28 >> 0x18;
          piVar1 = &(this->Stats).VisitedIdCount;
          *piVar1 = *piVar1 + uVar62;
          uVar39 = 0;
          puVar34 = FSceneCulling::LockChunkCellData(pFVar47,uVar27,1);
          if (uVar28 >> 0x18 == 0) {
LAB_1454ae744:
            uVar56 = (ulonglong)local_2e8;
            if (uVar62 != 0x40) goto LAB_1454ae838;
            this->TotalCellChunkDataCount = this->TotalCellChunkDataCount + 1;
            pTVar65 = &pFVar48->Builders[1].PackedChunkIds;
            pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)pFVar48->Builders[1].PackedChunkIds.AllocatorInstance.SecondaryData.Data;
            local_28c[0x14] = (uchar)local_2e8;
            local_28c[0x15] = local_2e8._1_1_;
            local_28c[0x16] = local_2e8._2_1_;
            local_28c[0x17] = local_2e8._3_1_;
            pTVar35 = pTVar36;
            if (pTVar36 ==
                (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
              pTVar35 = pTVar65;
            }
            local_2e8 = (FTempCell *)uVar56;
            if (pTVar35 <= local_28c + 0x14) {
              if (pTVar36 ==
                  (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)0x0) {
                pTVar36 = pTVar65;
              }
              if ((local_28c + 0x14 <
                   (pTVar36->AllocatorInstance).InlineData +
                   (longlong)pFVar48->Builders[1].PackedChunkIds.ArrayMax * 4) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar23)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
            }
            iVar26 = pFVar48->Builders[1].PackedChunkIds.ArrayNum;
            piVar1 = &pFVar48->Builders[1].PackedChunkIds.ArrayMax;
            if (iVar26 == *piVar1) {
              iVar26 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                                 (0x404,&pTVar65->AllocatorInstance,piVar1);
            }
            pFVar48->Builders[1].PackedChunkIds.ArrayNum = iVar26 + 1;
            pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)pFVar48->Builders[1].PackedChunkIds.AllocatorInstance.SecondaryData.Data;
            if (pTVar36 !=
                (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
              pTVar65 = pTVar36;
            }
            *(undefined4 *)((pTVar65->AllocatorInstance).InlineData + (longlong)iVar26 * 4) =
                 local_28c._20_4_;
          }
          else {
            uVar56 = (ulonglong)uVar62;
            local_2e0 = 0;
            local_28c._68_8_ = puVar34;
            do {
              uVar61 = *(uint *)local_28c._68_8_;
              if ((((int)uVar61 < 0) || ((this->RemovedInstanceFlags).NumBits <= (int)uVar61)) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar23)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              uVar43 = uVar61 & 0x1f;
              if ((int)uVar61 < 0) {
                uVar61 = uVar61 + 0x1f;
              }
              if (((this->RemovedInstanceFlags).AllocatorInstance.Data[(int)uVar61 >> 5] >> uVar43 &
                  1) != 0) {
                uVar39 = uVar39 | 1L << (local_2e0 & 0x3f);
                iVar52 = iVar52 + -1;
              }
              local_2e0 = local_2e0 + 1;
              local_28c._68_8_ = local_28c._68_8_ + 4;
              uVar56 = uVar56 - 1;
            } while (uVar56 != 0);
            if (uVar39 == 0) goto LAB_1454ae744;
LAB_1454ae838:
            uVar39 = 0xffffffffffffffffU >> (0x40U - (char)(uVar28 >> 0x18) & 0x3f) & ~uVar39;
            while (uVar39 != 0) {
              pFVar47 = this->SceneCulling;
              uVar56 = 0;
              bVar23 = uVar39 != 0;
              if (bVar23) {
                for (; (uVar39 >> uVar56 & 1) == 0; uVar56 = uVar56 + 1) {
                }
              }
              local_1a8 = (undefined4)uVar56;
              uVar39 = uVar39 & uVar39 - 1;
              uVar33 = 0x40;
              if (bVar23) {
                uVar33 = uVar56 & 0xffffffff;
              }
              uVar28 = puVar34[uVar33];
              piVar1 = &(this->Stats).CopiedIdCount;
              *piVar1 = *piVar1 + 1;
              local_2e8._4_4_ = (undefined4)((ulonglong)local_2e8 >> 0x20);
              local_2e8 = (FTempCell *)CONCAT44(local_2e8._4_4_,uVar28);
              iVar26 = pFVar48->Builders[1].CurrentChunkCount;
              if (0x3f < iVar26) {
                uVar28 = pFVar48->Builders[1].CurrentChunkId;
                if (uVar28 != 0xffffffff) {
                  pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                             *)pFVar48->Builders[1].PackedChunkIds.AllocatorInstance.SecondaryData.
                               Data;
                  pTVar65 = &pFVar48->Builders[1].PackedChunkIds;
                  local_28c._28_4_ = iVar26 << 0x18 | uVar28;
                  pTVar35 = pTVar36;
                  if (pTVar36 ==
                      (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)0x0) {
                    pTVar35 = pTVar65;
                  }
                  if (pTVar35 <= local_28c + 0x1c) {
                    if (pTVar36 ==
                        (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                         *)0x0) {
                      pTVar36 = pTVar65;
                    }
                    if ((local_28c + 0x1c <
                         (pTVar36->AllocatorInstance).InlineData +
                         (longlong)pFVar48->Builders[1].PackedChunkIds.ArrayMax * 4) &&
                       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar23)) {
                      pcVar16 = (code *)swi(3);
                      (*pcVar16)();
                      return;
                    }
                  }
                  iVar26 = pFVar48->Builders[1].PackedChunkIds.ArrayNum;
                  piVar1 = &pFVar48->Builders[1].PackedChunkIds.ArrayMax;
                  if (iVar26 == *piVar1) {
                    iVar26 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                                       (0x404,&pTVar65->AllocatorInstance,piVar1);
                  }
                  pFVar48->Builders[1].PackedChunkIds.ArrayNum = iVar26 + 1;
                  pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                             *)pFVar48->Builders[1].PackedChunkIds.AllocatorInstance.SecondaryData.
                               Data;
                  if (pTVar36 !=
                      (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)0x0) {
                    pTVar65 = pTVar36;
                  }
                  *(undefined4 *)((pTVar65->AllocatorInstance).InlineData + (longlong)iVar26 * 4) =
                       local_28c._28_4_;
                }
                pFVar48->Builders[1].CurrentChunkId = -1;
                uVar28 = AllocateChunk(this);
                pFVar48->Builders[1].CurrentChunkId = uVar28;
                pFVar48->Builders[1].CurrentChunkCount = 0;
                this->TotalCellChunkDataCount = this->TotalCellChunkDataCount + 1;
              }
              iVar26 = pFVar48->Builders[1].CurrentChunkCount;
              uVar62 = pFVar48->Builders[1].CurrentChunkId * 0x40 + iVar26;
              pFVar48->Builders[1].CurrentChunkCount = iVar26 + 1;
              uVar28 = 0;
              if ((int)uVar62 < (pFVar47->PackedCellData).ArrayNum) {
                uVar28 = ~uVar62 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              *(undefined4 *)
               ((pFVar47->PackedCellData).AllocatorInstance.Data + (longlong)(int)uVar62 * 4) =
                   (undefined4)local_2e8;
            }
            pFVar47 = this->SceneCulling;
            pTVar64 = &pFVar47->FreeChunks;
            pFVar41 = (pTVar64->AllocatorInstance).Data;
            local_28c._36_4_ = uVar27;
            if (((pFVar41 <= (FScriptContainerElement *)(local_28c + 0x24)) &&
                ((FScriptContainerElement *)(local_28c + 0x24) <
                 pFVar41 + (longlong)(pFVar47->FreeChunks).ArrayMax * 4)) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar23)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            iVar26 = (pFVar47->FreeChunks).ArrayNum;
            piVar1 = &(pFVar47->FreeChunks).ArrayMax;
            if (iVar26 == *piVar1) {
              iVar26 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar64->AllocatorInstance,piVar1);
            }
            (pFVar47->FreeChunks).ArrayNum = iVar26 + 1;
            *(undefined4 *)((pTVar64->AllocatorInstance).Data + (longlong)iVar26 * 4) =
                 local_28c._36_4_;
          }
          pFVar47 = this->SceneCulling;
          if ((pFVar47->bPackedCellDataLocked == false) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("bPackedCellDataLocked",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                                  ,0xb45,L""), bVar23)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          pFVar47->bPackedCellDataLocked = false;
        }
        uVar51 = uVar51 + 1;
        lVar60 = lVar60 + 1;
      } while (lVar60 < iVar25);
    }
    if ((int)uVar51 < iVar25) {
      pFVar47 = this->SceneCulling;
      uVar28 = iVar25 - 1;
      uVar27 = 0;
      if ((int)uVar28 < (pFVar47->PackedCellChunkData).ArrayNum) {
        uVar27 = ~uVar28 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      uVar28 = *(uint *)((pFVar47->PackedCellChunkData).AllocatorInstance.Data +
                        (longlong)(int)uVar28 * 4);
      uVar27 = pFVar48->Builders[1].CurrentChunkId;
      uVar62 = uVar28 >> 0x18;
      if ((int)uVar28 < 0) {
        uVar62 = 0x40;
      }
      if ((uVar27 != 0xffffffff) && (iVar26 = pFVar48->Builders[1].CurrentChunkCount, 0x3f < iVar26)
         ) {
        pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)pFVar48->Builders[1].PackedChunkIds.AllocatorInstance.SecondaryData.Data;
        pTVar65 = &pFVar48->Builders[1].PackedChunkIds;
        local_28c._4_4_ = iVar26 << 0x18 | uVar27;
        pTVar35 = pTVar36;
        if (pTVar36 ==
            (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)0x0) {
          pTVar35 = pTVar65;
        }
        if (pTVar35 <= local_28c + 4) {
          if (pTVar36 ==
              (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)0x0) {
            pTVar36 = pTVar65;
          }
          if ((local_28c + 4 <
               (pTVar36->AllocatorInstance).InlineData +
               (longlong)pFVar48->Builders[1].PackedChunkIds.ArrayMax * 4) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar23)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
        }
        iVar26 = pFVar48->Builders[1].PackedChunkIds.ArrayNum;
        piVar1 = &pFVar48->Builders[1].PackedChunkIds.ArrayMax;
        if (iVar26 == *piVar1) {
          iVar26 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                             (0x404,&pTVar65->AllocatorInstance,piVar1);
        }
        pFVar48->Builders[1].PackedChunkIds.ArrayNum = iVar26 + 1;
        uVar27 = 0xffffffff;
        pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)pFVar48->Builders[1].PackedChunkIds.AllocatorInstance.SecondaryData.Data;
        if (pTVar36 !=
            (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)0x0) {
          pTVar65 = pTVar36;
        }
        *(undefined4 *)((pTVar65->AllocatorInstance).InlineData + (longlong)iVar26 * 4) =
             local_28c._4_4_;
        pFVar48->Builders[1].CurrentChunkId = -1;
      }
      if ((uVar62 == 0x40) || (uVar27 == 0xffffffff)) {
        uVar27 = 1;
      }
      else {
        uVar27 = 0;
      }
      iVar25 = (iVar25 - (uVar27 ^ 1)) - uVar51;
      if (0 < iVar25) {
        pFVar47 = this->SceneCulling;
        uVar61 = 0;
        if ((int)uVar51 < (pFVar47->PackedCellChunkData).ArrayNum) {
          uVar61 = ~uVar51 >> 0x1f;
        }
        if ((uVar61 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        local_148.DataPtr =
             (uint *)((pFVar47->PackedCellChunkData).AllocatorInstance.Data +
                     (longlong)(int)uVar51 * 4);
        local_148.ArrayNum = iVar25;
        TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
        ::Append<TArrayView<unsigned_int_const_,int>_>
                  (&pFVar48->Builders[1].PackedChunkIds,&local_148);
      }
      if ((char)uVar27 == '\0') {
        piVar1 = &(this->Stats).VisitedIdCount;
        *piVar1 = *piVar1 + uVar62;
        uVar51 = (uVar28 & 0xffffff) << 6;
        if (uVar62 != 0) {
          local_340 = (ulonglong)uVar62;
          do {
            pFVar47 = this->SceneCulling;
            piVar1 = &(this->Stats).CopiedIdCount;
            *piVar1 = *piVar1 + 1;
            uVar27 = 0;
            if ((int)uVar51 < (pFVar47->PackedCellData).ArrayNum) {
              uVar27 = ~uVar51 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            uVar9 = *(undefined4 *)
                     ((pFVar47->PackedCellData).AllocatorInstance.Data + (longlong)(int)uVar51 * 4);
            pFVar47 = this->SceneCulling;
            iVar25 = pFVar48->Builders[1].CurrentChunkCount;
            if (0x3f < iVar25) {
              uVar27 = pFVar48->Builders[1].CurrentChunkId;
              if (uVar27 != 0xffffffff) {
                pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                           *)pFVar48->Builders[1].PackedChunkIds.AllocatorInstance.SecondaryData.
                             Data;
                pTVar65 = &pFVar48->Builders[1].PackedChunkIds;
                local_28c._44_4_ = iVar25 << 0x18 | uVar27;
                pTVar35 = pTVar36;
                if (pTVar36 ==
                    (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                     *)0x0) {
                  pTVar35 = pTVar65;
                }
                if (pTVar35 <= local_28c + 0x2c) {
                  if (pTVar36 ==
                      (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)0x0) {
                    pTVar36 = pTVar65;
                  }
                  if ((local_28c + 0x2c <
                       (pTVar36->AllocatorInstance).InlineData +
                       (longlong)pFVar48->Builders[1].PackedChunkIds.ArrayMax * 4) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar23)) {
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                }
                iVar25 = pFVar48->Builders[1].PackedChunkIds.ArrayNum;
                piVar1 = &pFVar48->Builders[1].PackedChunkIds.ArrayMax;
                if (iVar25 == *piVar1) {
                  iVar25 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                                     (0x404,&pTVar65->AllocatorInstance,piVar1);
                }
                pFVar48->Builders[1].PackedChunkIds.ArrayNum = iVar25 + 1;
                pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                           *)pFVar48->Builders[1].PackedChunkIds.AllocatorInstance.SecondaryData.
                             Data;
                if (pTVar36 !=
                    (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                     *)0x0) {
                  pTVar65 = pTVar36;
                }
                *(undefined4 *)((pTVar65->AllocatorInstance).InlineData + (longlong)iVar25 * 4) =
                     local_28c._44_4_;
              }
              pFVar48->Builders[1].CurrentChunkId = -1;
              uVar27 = AllocateChunk(this);
              pFVar48->Builders[1].CurrentChunkId = uVar27;
              pFVar48->Builders[1].CurrentChunkCount = 0;
              this->TotalCellChunkDataCount = this->TotalCellChunkDataCount + 1;
            }
            iVar25 = pFVar48->Builders[1].CurrentChunkCount;
            uVar62 = pFVar48->Builders[1].CurrentChunkId * 0x40 + iVar25;
            pFVar48->Builders[1].CurrentChunkCount = iVar25 + 1;
            uVar27 = 0;
            if ((int)uVar62 < (pFVar47->PackedCellData).ArrayNum) {
              uVar27 = ~uVar62 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            uVar51 = uVar51 + 1;
            local_340 = local_340 - 1;
            *(undefined4 *)
             ((pFVar47->PackedCellData).AllocatorInstance.Data + (longlong)(int)uVar62 * 4) = uVar9;
          } while (local_340 != 0);
        }
        FSceneCulling::FreeChunk(this->SceneCulling,uVar28 & 0xffffff);
      }
    }
    uVar51 = pFVar48->Builders[1].CurrentChunkId;
    if (uVar51 != 0xffffffff) {
      pTVar65 = &pFVar48->Builders[1].PackedChunkIds;
      pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)pFVar48->Builders[1].PackedChunkIds.AllocatorInstance.SecondaryData.Data;
      local_28c._48_4_ = pFVar48->Builders[1].CurrentChunkCount << 0x18 | uVar51;
      pTVar35 = pTVar36;
      if (pTVar36 ==
          (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)0x0) {
        pTVar35 = pTVar65;
      }
      if (pTVar35 <= local_28c + 0x30) {
        if (pTVar36 ==
            (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)0x0) {
          pTVar36 = pTVar65;
        }
        if ((local_28c + 0x30 <
             (pTVar36->AllocatorInstance).InlineData +
             (longlong)pFVar48->Builders[1].PackedChunkIds.ArrayMax * 4) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
      }
      iVar25 = pFVar48->Builders[1].PackedChunkIds.ArrayNum;
      piVar1 = &pFVar48->Builders[1].PackedChunkIds.ArrayMax;
      if (iVar25 == *piVar1) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                           (0x404,&pTVar65->AllocatorInstance,piVar1);
      }
      pFVar48->Builders[1].PackedChunkIds.ArrayNum = iVar25 + 1;
      pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)pFVar48->Builders[1].PackedChunkIds.AllocatorInstance.SecondaryData.Data;
      if (pTVar36 !=
          (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)0x0) {
        pTVar65 = pTVar36;
      }
      *(undefined4 *)((pTVar65->AllocatorInstance).InlineData + (longlong)iVar25 * 4) =
           local_28c._48_4_;
    }
    local_2e0 = CONCAT44(local_2e0._4_4_,pFVar48->Builders[1].PackedChunkIds.ArrayNum);
    pFVar48->Builders[1].CurrentChunkId = -1;
    if ((iVar52 != 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumToRemove == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                            ,0x4aa,L""), bVar23)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    lVar60 = (longlong)(int)uVar57;
    iVar52 = pFVar48->RemovedInstanceCount[0];
    iVar25 = uVar59 + uVar57;
    pFVar47 = (FSceneCulling *)(longlong)iVar25;
    uVar59 = uVar57;
    local_2f8 = pFVar47;
    if (lVar60 < (longlong)pFVar47) {
      do {
        if (iVar52 < 1) break;
        pFVar11 = this->SceneCulling;
        uVar51 = 0;
        if ((int)uVar59 < (pFVar11->PackedCellChunkData).ArrayNum) {
          uVar51 = ~uVar59 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        uVar51 = *(uint *)((pFVar11->PackedCellChunkData).AllocatorInstance.Data + lVar60 * 4);
        if ((int)uVar51 < 0) {
          if (((this->RemovedInstanceFlags).NumBits <= (int)(uVar51 & 0x7fffffff)) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar23)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          if (((this->RemovedInstanceFlags).AllocatorInstance.Data[(int)(uVar51 & 0x7fffffff) >> 5]
               >> (uVar51 & 0x1f) & 1) == 0) {
            this->TotalCellChunkDataCount = this->TotalCellChunkDataCount + 1;
            pTVar65 = &pFVar48->Builders[0].PackedChunkIds;
            pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)pFVar48->Builders[0].PackedChunkIds.AllocatorInstance.SecondaryData.Data;
            pTVar35 = pTVar36;
            if (pTVar36 ==
                (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
              pTVar35 = pTVar65;
            }
            local_28c._52_4_ = uVar51;
            if (pTVar35 <= local_28c + 0x34) {
              if (pTVar36 ==
                  (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)0x0) {
                pTVar36 = pTVar65;
              }
              if ((local_28c + 0x34 <
                   (pTVar36->AllocatorInstance).InlineData +
                   (longlong)pFVar48->Builders[0].PackedChunkIds.ArrayMax * 4) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar23)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
            }
            iVar26 = pFVar48->Builders[0].PackedChunkIds.ArrayNum;
            piVar1 = &pFVar48->Builders[0].PackedChunkIds.ArrayMax;
            if (iVar26 == *piVar1) {
              iVar26 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                                 (0x404,&pTVar65->AllocatorInstance,piVar1);
            }
            pFVar48->Builders[0].PackedChunkIds.ArrayNum = iVar26 + 1;
            pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)pFVar48->Builders[0].PackedChunkIds.AllocatorInstance.SecondaryData.Data;
            if (pTVar36 !=
                (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
              pTVar65 = pTVar36;
            }
            *(undefined4 *)((pTVar65->AllocatorInstance).InlineData + (longlong)iVar26 * 4) =
                 local_28c._52_4_;
          }
          else {
            iVar52 = iVar52 + -0x40;
          }
        }
        else {
          pFVar11 = this->SceneCulling;
          uVar28 = uVar51 >> 0x18;
          piVar1 = &(this->Stats).VisitedIdCount;
          *piVar1 = *piVar1 + uVar28;
          local_2e8 = (FTempCell *)(CONCAT44(local_2e8._4_4_,uVar51) & 0xffffffff00ffffff);
          uVar39 = 0;
          puVar34 = FSceneCulling::LockChunkCellData(pFVar11,uVar51 & 0xffffff,1);
          local_230.Data = puVar34;
          if (uVar51 >> 0x18 == 0) {
LAB_1454af477:
            if (uVar28 != 0x40) goto LAB_1454af56d;
            this->TotalCellChunkDataCount = this->TotalCellChunkDataCount + 1;
            pTVar65 = &pFVar48->Builders[0].PackedChunkIds;
            pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)pFVar48->Builders[0].PackedChunkIds.AllocatorInstance.SecondaryData.Data;
            pTVar35 = pTVar36;
            if (pTVar36 ==
                (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
              pTVar35 = pTVar65;
            }
            local_28c._60_4_ = uVar51;
            if (pTVar35 <= local_28c + 0x3c) {
              if (pTVar36 ==
                  (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)0x0) {
                pTVar36 = pTVar65;
              }
              if ((local_28c + 0x3c <
                   (pTVar36->AllocatorInstance).InlineData +
                   (longlong)pFVar48->Builders[0].PackedChunkIds.ArrayMax * 4) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar23)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
            }
            iVar26 = pFVar48->Builders[0].PackedChunkIds.ArrayNum;
            piVar1 = &pFVar48->Builders[0].PackedChunkIds.ArrayMax;
            if (iVar26 == *piVar1) {
              iVar26 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                                 (0x404,&pTVar65->AllocatorInstance,piVar1);
            }
            pFVar48->Builders[0].PackedChunkIds.ArrayNum = iVar26 + 1;
            pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)pFVar48->Builders[0].PackedChunkIds.AllocatorInstance.SecondaryData.Data;
            if (pTVar36 !=
                (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)0x0) {
              pTVar65 = pTVar36;
            }
            *(undefined4 *)((pTVar65->AllocatorInstance).InlineData + (longlong)iVar26 * 4) =
                 local_28c._60_4_;
          }
          else {
            uVar56 = (ulonglong)uVar28;
            local_340 = 0;
            do {
              uVar27 = *puVar34;
              local_28c._68_8_ = puVar34;
              if ((((int)uVar27 < 0) || ((this->RemovedInstanceFlags).NumBits <= (int)uVar27)) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar23)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              uVar62 = uVar27 & 0x1f;
              if ((int)uVar27 < 0) {
                uVar27 = uVar27 + 0x1f;
              }
              if (((this->RemovedInstanceFlags).AllocatorInstance.Data[(int)uVar27 >> 5] >> uVar62 &
                  1) != 0) {
                uVar39 = uVar39 | 1L << (local_340 & 0x3f);
                iVar52 = iVar52 + -1;
              }
              local_340 = local_340 + 1;
              puVar34 = (uint *)(local_28c._68_8_ + 4);
              uVar56 = uVar56 - 1;
            } while (uVar56 != 0);
            local_28c._68_8_ = puVar34;
            if (uVar39 == 0) goto LAB_1454af477;
LAB_1454af56d:
            FVar40.Data = local_230.Data;
            uVar39 = 0xffffffffffffffffU >> (0x40U - (char)(uVar51 >> 0x18) & 0x3f) & ~uVar39;
            while (uVar39 != 0) {
              pFVar47 = this->SceneCulling;
              uVar56 = 0;
              bVar23 = uVar39 != 0;
              if (bVar23) {
                for (; (uVar39 >> uVar56 & 1) == 0; uVar56 = uVar56 + 1) {
                }
              }
              local_1a4 = (undefined4)uVar56;
              uVar39 = uVar39 & uVar39 - 1;
              uVar33 = 0x40;
              if (bVar23) {
                uVar33 = uVar56 & 0xffffffff;
              }
              uVar51 = FVar40.Data[uVar33];
              piVar1 = &(this->Stats).CopiedIdCount;
              *piVar1 = *piVar1 + 1;
              iVar26 = pFVar48->Builders[0].CurrentChunkCount;
              if (0x3f < iVar26) {
                uVar28 = pFVar48->Builders[0].CurrentChunkId;
                if (uVar28 != 0xffffffff) {
                  pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                             *)pFVar48->Builders[0].PackedChunkIds.AllocatorInstance.SecondaryData.
                               Data;
                  pTVar65 = &pFVar48->Builders[0].PackedChunkIds;
                  local_2d8[0] = iVar26 << 0x18 | uVar28;
                  pTVar35 = pTVar36;
                  if (pTVar36 ==
                      (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)0x0) {
                    pTVar35 = pTVar65;
                  }
                  if (pTVar35 <= local_2d8) {
                    if (pTVar36 ==
                        (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                         *)0x0) {
                      pTVar36 = pTVar65;
                    }
                    if ((local_2d8 <
                         (pTVar36->AllocatorInstance).InlineData +
                         (longlong)pFVar48->Builders[0].PackedChunkIds.ArrayMax * 4) &&
                       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar23)) {
                      pcVar16 = (code *)swi(3);
                      (*pcVar16)();
                      return;
                    }
                  }
                  iVar26 = pFVar48->Builders[0].PackedChunkIds.ArrayNum;
                  piVar1 = &pFVar48->Builders[0].PackedChunkIds.ArrayMax;
                  if (iVar26 == *piVar1) {
                    iVar26 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                                       (0x404,&pTVar65->AllocatorInstance,piVar1);
                  }
                  pFVar48->Builders[0].PackedChunkIds.ArrayNum = iVar26 + 1;
                  pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                             *)pFVar48->Builders[0].PackedChunkIds.AllocatorInstance.SecondaryData.
                               Data;
                  if (pTVar36 !=
                      (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)0x0) {
                    pTVar65 = pTVar36;
                  }
                  *(uint *)((pTVar65->AllocatorInstance).InlineData + (longlong)iVar26 * 4) =
                       local_2d8[0];
                }
                pFVar48->Builders[0].CurrentChunkId = -1;
                uVar28 = AllocateChunk(this);
                pFVar48->Builders[0].CurrentChunkId = uVar28;
                pFVar48->Builders[0].CurrentChunkCount = 0;
                this->TotalCellChunkDataCount = this->TotalCellChunkDataCount + 1;
              }
              iVar26 = pFVar48->Builders[0].CurrentChunkCount;
              uVar27 = pFVar48->Builders[0].CurrentChunkId * 0x40 + iVar26;
              pFVar48->Builders[0].CurrentChunkCount = iVar26 + 1;
              uVar28 = 0;
              if ((int)uVar27 < (pFVar47->PackedCellData).ArrayNum) {
                uVar28 = ~uVar27 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              *(uint *)((pFVar47->PackedCellData).AllocatorInstance.Data + (longlong)(int)uVar27 * 4
                       ) = uVar51;
              pFVar47 = local_2f8;
            }
            pFVar11 = this->SceneCulling;
            pTVar64 = &pFVar11->FreeChunks;
            local_2d0[0] = (undefined4)local_2e8;
            pFVar41 = (pTVar64->AllocatorInstance).Data;
            if (((pFVar41 <= (FScriptContainerElement *)(local_2d8 + 2)) &&
                ((FScriptContainerElement *)(local_2d8 + 2) <
                 pFVar41 + (longlong)(pFVar11->FreeChunks).ArrayMax * 4)) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar23)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            iVar26 = (pFVar11->FreeChunks).ArrayNum;
            piVar1 = &(pFVar11->FreeChunks).ArrayMax;
            if (iVar26 == *piVar1) {
              iVar26 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar64->AllocatorInstance,piVar1);
            }
            (pFVar11->FreeChunks).ArrayNum = iVar26 + 1;
            *(undefined4 *)((pTVar64->AllocatorInstance).Data + (longlong)iVar26 * 4) = local_2d0[0]
            ;
          }
          pFVar11 = this->SceneCulling;
          if ((pFVar11->bPackedCellDataLocked == false) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("bPackedCellDataLocked",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                                  ,0xb45,L""), bVar23)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          pFVar11->bPackedCellDataLocked = false;
        }
        uVar59 = uVar59 + 1;
        lVar60 = lVar60 + 1;
      } while (lVar60 < (longlong)pFVar47);
    }
    if ((int)uVar59 < iVar25) {
      local_2f8 = this->SceneCulling;
      uVar51 = iVar25 - 1;
      uVar28 = 0;
      if ((int)uVar51 < (local_2f8->PackedCellChunkData).ArrayNum) {
        uVar28 = ~uVar51 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      uVar28 = pFVar48->Builders[0].CurrentChunkId;
      uVar51 = *(uint *)((local_2f8->PackedCellChunkData).AllocatorInstance.Data +
                        (longlong)(int)uVar51 * 4);
      uVar27 = uVar51 >> 0x18;
      if ((int)uVar51 < 0) {
        uVar27 = 0x40;
      }
      if ((uVar28 != 0xffffffff) && (iVar26 = pFVar48->Builders[0].CurrentChunkCount, 0x3f < iVar26)
         ) {
        pTVar65 = &pFVar48->Builders[0].PackedChunkIds;
        local_2c8 = iVar26 << 0x18 | uVar28;
        pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)pFVar48->Builders[0].PackedChunkIds.AllocatorInstance.SecondaryData.Data;
        pTVar35 = pTVar36;
        if (pTVar36 ==
            (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)0x0) {
          pTVar35 = pTVar65;
        }
        if (pTVar35 <= local_2d8 + 4) {
          if (pTVar36 ==
              (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)0x0) {
            pTVar36 = pTVar65;
          }
          if ((local_2d8 + 4 <
               (pTVar36->AllocatorInstance).InlineData +
               (longlong)pFVar48->Builders[0].PackedChunkIds.ArrayMax * 4) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar23)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
        }
        iVar26 = pFVar48->Builders[0].PackedChunkIds.ArrayNum;
        piVar1 = &pFVar48->Builders[0].PackedChunkIds.ArrayMax;
        if (iVar26 == *piVar1) {
          iVar26 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                             (0x404,&pTVar65->AllocatorInstance,piVar1);
        }
        uVar28 = 0xffffffff;
        pFVar48->Builders[0].PackedChunkIds.ArrayNum = iVar26 + 1;
        pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)pFVar48->Builders[0].PackedChunkIds.AllocatorInstance.SecondaryData.Data;
        if (pTVar36 !=
            (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)0x0) {
          pTVar65 = pTVar36;
        }
        *(uint *)((pTVar65->AllocatorInstance).InlineData + (longlong)iVar26 * 4) = local_2c8;
        pFVar48->Builders[0].CurrentChunkId = -1;
      }
      if ((uVar27 == 0x40) || (uVar28 == 0xffffffff)) {
        uVar28 = 1;
      }
      else {
        uVar28 = 0;
      }
      iVar25 = (iVar25 - (uVar28 ^ 1)) - uVar59;
      if (0 < iVar25) {
        local_2f8 = this->SceneCulling;
        uVar62 = 0;
        if ((int)uVar59 < (local_2f8->PackedCellChunkData).ArrayNum) {
          uVar62 = ~uVar59 >> 0x1f;
        }
        if ((uVar62 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        local_138[0].DataPtr =
             (uint *)((local_2f8->PackedCellChunkData).AllocatorInstance.Data +
                     (longlong)(int)uVar59 * 4);
        local_138[0].ArrayNum = iVar25;
        TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
        ::Append<TArrayView<unsigned_int_const_,int>_>
                  (&pFVar48->Builders[0].PackedChunkIds,local_138);
      }
      if ((char)uVar28 == '\0') {
        piVar1 = &(this->Stats).VisitedIdCount;
        *piVar1 = *piVar1 + uVar27;
        uVar59 = (uVar51 & 0xffffff) << 6;
        if (uVar27 != 0) {
          local_340 = (ulonglong)uVar27;
          do {
            local_2f8 = this->SceneCulling;
            piVar1 = &(this->Stats).CopiedIdCount;
            *piVar1 = *piVar1 + 1;
            uVar28 = 0;
            if ((int)uVar59 < (local_2f8->PackedCellData).ArrayNum) {
              uVar28 = ~uVar59 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            uVar9 = *(undefined4 *)
                     ((local_2f8->PackedCellData).AllocatorInstance.Data + (longlong)(int)uVar59 * 4
                     );
            pFVar47 = this->SceneCulling;
            iVar25 = pFVar48->Builders[0].CurrentChunkCount;
            if (0x3f < iVar25) {
              uVar28 = pFVar48->Builders[0].CurrentChunkId;
              if (uVar28 != 0xffffffff) {
                pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                           *)pFVar48->Builders[0].PackedChunkIds.AllocatorInstance.SecondaryData.
                             Data;
                pTVar65 = &pFVar48->Builders[0].PackedChunkIds;
                local_2c4 = iVar25 << 0x18 | uVar28;
                pTVar35 = pTVar36;
                if (pTVar36 ==
                    (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                     *)0x0) {
                  pTVar35 = pTVar65;
                }
                if (pTVar35 <= &local_2c4) {
                  if (pTVar36 ==
                      (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                       *)0x0) {
                    pTVar36 = pTVar65;
                  }
                  if ((&local_2c4 <
                       (pTVar36->AllocatorInstance).InlineData +
                       (longlong)pFVar48->Builders[0].PackedChunkIds.ArrayMax * 4) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar23)) {
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                }
                iVar25 = pFVar48->Builders[0].PackedChunkIds.ArrayNum;
                piVar1 = &pFVar48->Builders[0].PackedChunkIds.ArrayMax;
                if (iVar25 == *piVar1) {
                  iVar25 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                                     (0x404,&pTVar65->AllocatorInstance,piVar1);
                }
                pFVar48->Builders[0].PackedChunkIds.ArrayNum = iVar25 + 1;
                pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                           *)pFVar48->Builders[0].PackedChunkIds.AllocatorInstance.SecondaryData.
                             Data;
                if (pTVar36 !=
                    (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                     *)0x0) {
                  pTVar65 = pTVar36;
                }
                *(uint *)((pTVar65->AllocatorInstance).InlineData + (longlong)iVar25 * 4) =
                     local_2c4;
              }
              pFVar48->Builders[0].CurrentChunkId = -1;
              uVar28 = AllocateChunk(this);
              pFVar48->Builders[0].CurrentChunkId = uVar28;
              pFVar48->Builders[0].CurrentChunkCount = 0;
              this->TotalCellChunkDataCount = this->TotalCellChunkDataCount + 1;
            }
            iVar25 = pFVar48->Builders[0].CurrentChunkCount;
            uVar27 = pFVar48->Builders[0].CurrentChunkId * 0x40 + iVar25;
            pFVar48->Builders[0].CurrentChunkCount = iVar25 + 1;
            uVar28 = 0;
            if ((int)uVar27 < (pFVar47->PackedCellData).ArrayNum) {
              uVar28 = ~uVar27 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            uVar59 = uVar59 + 1;
            local_340 = local_340 - 1;
            *(undefined4 *)
             ((pFVar47->PackedCellData).AllocatorInstance.Data + (longlong)(int)uVar27 * 4) = uVar9;
          } while (local_340 != 0);
        }
        FSceneCulling::FreeChunk(this->SceneCulling,uVar51 & 0xffffff);
      }
    }
    uVar59 = pFVar48->Builders[0].CurrentChunkId;
    if (uVar59 != 0xffffffff) {
      pTVar65 = &pFVar48->Builders[0].PackedChunkIds;
      pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)pFVar48->Builders[0].PackedChunkIds.AllocatorInstance.SecondaryData.Data;
      local_2c0[0] = pFVar48->Builders[0].CurrentChunkCount << 0x18 | uVar59;
      pTVar35 = pTVar36;
      if (pTVar36 ==
          (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)0x0) {
        pTVar35 = pTVar65;
      }
      if (pTVar35 <= local_2c0) {
        if (pTVar36 ==
            (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)0x0) {
          pTVar36 = pTVar65;
        }
        if ((local_2c0 <
             (pTVar36->AllocatorInstance).InlineData +
             (longlong)pFVar48->Builders[0].PackedChunkIds.ArrayMax * 4) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
      }
      iVar25 = pFVar48->Builders[0].PackedChunkIds.ArrayNum;
      piVar1 = &pFVar48->Builders[0].PackedChunkIds.ArrayMax;
      if (iVar25 == *piVar1) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                           (0x404,&pTVar65->AllocatorInstance,piVar1);
      }
      pFVar48->Builders[0].PackedChunkIds.ArrayNum = iVar25 + 1;
      pTVar36 = (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)pFVar48->Builders[0].PackedChunkIds.AllocatorInstance.SecondaryData.Data;
      if (pTVar36 !=
          (TArray<unsigned_int,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)0x0) {
        pTVar65 = pTVar36;
      }
      *(uint *)((pTVar65->AllocatorInstance).InlineData + (longlong)iVar25 * 4) = local_2c0[0];
    }
    uVar59 = (int)local_2e0 + pFVar48->Builders[0].PackedChunkIds.ArrayNum;
    pFVar48->Builders[0].CurrentChunkId = -1;
    if ((iVar52 != 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumToRemove == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                            ,0x4b1,L""), bVar23)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    pTVar37 = Experimental::RobinHoodHashTable_Private::
              TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
              ::FData::Get((FData *)this->SpatialHashMap,
                           (int)((pFVar48->CellOffset >> 0x1f & 0x1ffU) + pFVar48->CellOffset) >> 9)
    ;
    uVar51 = local_238;
    puVar2 = &(pTVar37->Pair).field_0x1c;
    *(uint *)puVar2 = *(int *)puVar2 + (uVar59 - local_238);
    if ((*(int *)puVar2 < 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Block.NumItemChunks >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                            ,0x4ba,L""), bVar23)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    uVar28 = uVar57;
    if ((uVar57 != 0xffffffff) && (uVar51 != uVar59)) {
      FSpanAllocator::Free(&this->SceneCulling->CellChunkIdAllocator,uVar57,uVar51);
      TBitArray<FDefaultBitArrayAllocator>::SetRange
                (&this->SceneCulling->UsedChunkIdMask,uVar57,uVar51,false);
      uVar28 = 0xffffffff;
    }
    if ((uVar59 != 0) && (uVar28 == 0xffffffff)) {
      uVar28 = FSpanAllocator::Allocate(&this->SceneCulling->CellChunkIdAllocator,uVar59);
      TBitArray<FDefaultBitArrayAllocator>::PadToNum
                (&this->SceneCulling->UsedChunkIdMask,uVar59 + uVar28,false);
      TBitArray<FDefaultBitArrayAllocator>::SetRange
                (&this->SceneCulling->UsedChunkIdMask,uVar28,uVar59,true);
    }
    pFVar48->ItemChunksOffset = uVar28;
    if (uVar57 != uVar28) {
      pFVar48->bAnyChange[0] = true;
      pFVar48->bAnyChange[1] = true;
    }
    pFVar48 = pFVar48 + 1;
    uVar39 = (ulonglong)uVar63;
  }
  if (bVar68) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"BuildHierarchy_FreeUncullable");
  bVar68 = -1 < CpuChannel->Enabled;
  if (bVar68) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FSceneCullingBuilder::FinalizeTempCellsAndUncullable(void)___ptr64'
                ::__l9::__CpuProfilerEventSpecId1488,"BuildHierarchy_FreeUncullable",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
               ,0x5d0);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FSceneCullingBuilder::FinalizeTempCellsAndUncullable(void)___ptr64'
               ::__l9::__CpuProfilerEventSpecId1488);
  }
  pFVar47 = this->SceneCulling;
  if (0 < pFVar47->UncullableNumItemChunks) {
    iVar52 = 0;
    do {
      if ((pFVar47->UncullableItemChunksOffset == -1) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("SceneCulling.UncullableItemChunksOffset != INDEX_NONE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                              ,0x5d4,L""), bVar23)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pFVar47 = this->SceneCulling;
      uVar59 = pFVar47->UncullableItemChunksOffset + iVar52;
      uVar63 = 0;
      if ((int)uVar59 < (pFVar47->PackedCellChunkData).ArrayNum) {
        uVar63 = ~uVar59 >> 0x1f;
      }
      if ((uVar63 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      uVar63 = *(uint *)((pFVar47->PackedCellChunkData).AllocatorInstance.Data +
                        (longlong)(int)uVar59 * 4);
      if (-1 < (int)uVar63) {
        pFVar47 = this->SceneCulling;
        pTVar64 = &pFVar47->FreeChunks;
        local_2b8[0] = uVar63 & 0xffffff;
        pFVar41 = (pTVar64->AllocatorInstance).Data;
        if (((pFVar41 <= (FScriptContainerElement *)local_2b8) &&
            ((FScriptContainerElement *)local_2b8 <
             pFVar41 + (longlong)(pFVar47->FreeChunks).ArrayMax * 4)) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        iVar25 = (pFVar47->FreeChunks).ArrayNum;
        piVar1 = &(pFVar47->FreeChunks).ArrayMax;
        if (iVar25 == *piVar1) {
          iVar25 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar64->AllocatorInstance,piVar1);
        }
        (pFVar47->FreeChunks).ArrayNum = iVar25 + 1;
        *(uint *)((pTVar64->AllocatorInstance).Data + (longlong)iVar25 * 4) = local_2b8[0];
      }
      pFVar47 = this->SceneCulling;
      iVar52 = iVar52 + 1;
    } while (iVar52 < pFVar47->UncullableNumItemChunks);
  }
  if (bVar68) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"BuildHierarchy_ChunkBuilder");
  bVar68 = -1 < CpuChannel->Enabled;
  if (bVar68) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FSceneCullingBuilder::FinalizeTempCellsAndUncullable(void)___ptr64'
                ::__l22::__CpuProfilerEventSpecId1504,"BuildHierarchy_ChunkBuilder",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
               ,0x5e0);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FSceneCullingBuilder::FinalizeTempCellsAndUncullable(void)___ptr64'
               ::__l22::__CpuProfilerEventSpecId1504);
  }
  pFVar47 = this->SceneCulling;
  FVar40.Data = (uint *)0x0;
  local_108 = 0x40;
  local_104 = 0xffffffff;
  iVar25 = 0x40;
  local_100.SecondaryData.Data = (uint *)0x0;
  local_78 = 0;
  local_74[0] = 0x20;
  pFVar45 = (pFVar47->UnCullablePrimitives).AllocatorInstance.Data;
  iVar52 = (pFVar47->UnCullablePrimitives).ArrayNum;
  pFVar41 = pFVar45 + (longlong)iVar52 * 4;
  while( true ) {
    if ((pFVar47->UnCullablePrimitives).ArrayNum != iVar52) {
      local_30a = 0;
      `TCheckedPointerIterator<FPersistentPrimitiveIndex,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_30a);
      FVar40.Data = local_100.SecondaryData.Data;
      iVar25 = local_108;
    }
    if (pFVar45 == pFVar41) break;
    pFVar11 = this->SceneCulling;
    uVar63 = *(uint *)pFVar45;
    lVar60 = (longlong)(int)uVar63;
    uVar59 = 0;
    if ((int)uVar63 < (pFVar11->PrimitiveStates).ArrayNum) {
      uVar59 = ~uVar63 >> 0x1f;
    }
    if ((uVar59 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       FVar40.Data = local_100.SecondaryData.Data, iVar25 = local_108, bVar23)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    pFVar12 = (pFVar11->PrimitiveStates).AllocatorInstance.Data;
    if ((((byte)*(undefined4 *)(pFVar12 + lVar60 * 0x28 + 8) & 7) != 3) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("PrimitiveState.State == FPrimitiveState::UnCullable",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                            ,0x5e6,L""), FVar40.Data = local_100.SecondaryData.Data,
       iVar25 = local_108, bVar23)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    uVar63 = *(uint *)(pFVar12 + lVar60 * 0x28);
    if ((uVar63 != 0xffffffff) && (uVar59 = *(uint *)(pFVar12 + lVar60 * 0x28 + 4), 0 < (int)uVar59)
       ) {
      if (0x3f < (int)uVar59) {
        uVar39 = (ulonglong)(uVar59 >> 6);
        uVar59 = uVar59 + (uVar59 >> 6) * -0x40;
        do {
          piVar1 = &(this->Stats).CompRangeCount;
          *piVar1 = *piVar1 + 1;
          this->TotalCellChunkDataCount = this->TotalCellChunkDataCount + 1;
          local_2b0._0_4_ = uVar63 | 0x80000000;
          pFVar38 = &local_100;
          if ((ForElementType<unsigned_int> *)FVar40.Data != (ForElementType<unsigned_int> *)0x0) {
            pFVar38 = (ForElementType<unsigned_int> *)FVar40.Data;
          }
          if (pFVar38 <= (ForElementType<unsigned_int> *)local_2b0) {
            pFVar38 = &local_100;
            if ((ForElementType<unsigned_int> *)FVar40.Data != (ForElementType<unsigned_int> *)0x0)
            {
              pFVar38 = (ForElementType<unsigned_int> *)FVar40.Data;
            }
            if ((local_2b0 < pFVar38->InlineData + (longlong)(int)local_74[0] * 4) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), FVar40.Data = local_100.SecondaryData.Data, bVar23)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
          }
          if (local_78 == local_74[0]) {
            local_78 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                                 (0x404,&local_100,(int *)local_74);
            FVar40.Data = local_100.SecondaryData.Data;
          }
          pFVar38 = &local_100;
          if ((ForElementType<unsigned_int> *)FVar40.Data != (ForElementType<unsigned_int> *)0x0) {
            pFVar38 = (ForElementType<unsigned_int> *)FVar40.Data;
          }
          lVar60 = (longlong)(int)local_78;
          uVar63 = uVar63 + 0x40;
          local_78 = local_78 + 1;
          *(undefined4 *)(pFVar38->InlineData + lVar60 * 4) = local_2b0._0_4_;
          uVar39 = uVar39 - 1;
          FVar40.Data = local_100.SecondaryData.Data;
          iVar25 = local_108;
        } while (uVar39 != 0);
      }
      iVar26 = uVar59 + uVar63;
      for (; (int)uVar63 < iVar26; uVar63 = uVar63 + 1) {
        pFVar11 = this->SceneCulling;
        if (0x3f < iVar25) {
          if (local_104 != 0xffffffff) {
            local_28c._0_4_ = iVar25 << 0x18 | local_104;
            pFVar38 = &local_100;
            if ((ForElementType<unsigned_int> *)FVar40.Data != (ForElementType<unsigned_int> *)0x0)
            {
              pFVar38 = (ForElementType<unsigned_int> *)FVar40.Data;
            }
            if (pFVar38 <= (ForElementType<unsigned_int> *)local_28c) {
              pFVar38 = &local_100;
              if ((ForElementType<unsigned_int> *)FVar40.Data != (ForElementType<unsigned_int> *)0x0
                 ) {
                pFVar38 = (ForElementType<unsigned_int> *)FVar40.Data;
              }
              if ((local_28c < pFVar38->InlineData + (longlong)(int)local_74[0] * 4) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), FVar40.Data = local_100.SecondaryData.Data, bVar23)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
            }
            if (local_78 == local_74[0]) {
              local_78 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                                   (0x404,&local_100,(int *)local_74);
              FVar40.Data = local_100.SecondaryData.Data;
            }
            lVar60 = (longlong)(int)local_78;
            pFVar38 = &local_100;
            if ((ForElementType<unsigned_int> *)FVar40.Data != (ForElementType<unsigned_int> *)0x0)
            {
              pFVar38 = (ForElementType<unsigned_int> *)FVar40.Data;
            }
            local_78 = local_78 + 1;
            *(undefined4 *)(pFVar38->InlineData + lVar60 * 4) = local_28c._0_4_;
          }
          local_104 = 0xffffffff;
          local_104 = AllocateChunk(this);
          iVar25 = 0;
          this->TotalCellChunkDataCount = this->TotalCellChunkDataCount + 1;
        }
        uVar57 = local_104 * 0x40 + iVar25;
        local_108 = iVar25 + 1;
        uVar59 = 0;
        if ((int)uVar57 < (pFVar11->PackedCellData).ArrayNum) {
          uVar59 = ~uVar57 >> 0x1f;
        }
        if ((uVar59 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        *(uint *)((pFVar11->PackedCellData).AllocatorInstance.Data + (longlong)(int)uVar57 * 4) =
             uVar63;
        FVar40.Data = local_100.SecondaryData.Data;
        iVar25 = local_108;
      }
    }
    pFVar45 = pFVar45 + 4;
  }
  if (local_104 != 0xffffffff) {
    local_2b0._4_4_ = iVar25 << 0x18 | local_104;
    pFVar38 = &local_100;
    if ((ForElementType<unsigned_int> *)FVar40.Data != (ForElementType<unsigned_int> *)0x0) {
      pFVar38 = (ForElementType<unsigned_int> *)FVar40.Data;
    }
    if (pFVar38 <= (ForElementType<unsigned_int> *)(local_2b0 + 4)) {
      pFVar38 = &local_100;
      if ((ForElementType<unsigned_int> *)FVar40.Data != (ForElementType<unsigned_int> *)0x0) {
        pFVar38 = (ForElementType<unsigned_int> *)FVar40.Data;
      }
      if ((local_2b0 + 4 < pFVar38->InlineData + (longlong)(int)local_74[0] * 4) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), FVar40.Data = local_100.SecondaryData.Data, bVar23)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
    }
    if (local_78 == local_74[0]) {
      local_78 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<unsigned_int>_>
                           (0x404,&local_100,(int *)local_74);
      FVar40.Data = local_100.SecondaryData.Data;
    }
    lVar60 = (longlong)(int)local_78;
    pFVar38 = &local_100;
    if ((ForElementType<unsigned_int> *)FVar40.Data != (ForElementType<unsigned_int> *)0x0) {
      pFVar38 = (ForElementType<unsigned_int> *)FVar40.Data;
    }
    local_78 = local_78 + 1;
    *(undefined4 *)(pFVar38->InlineData + lVar60 * 4) = local_2b0._4_4_;
  }
  uVar63 = local_78;
  pFVar47 = this->SceneCulling;
  local_104 = 0xffffffff;
  iVar52 = pFVar47->UncullableItemChunksOffset;
  if ((iVar52 != -1) && (uVar59 = pFVar47->UncullableNumItemChunks, uVar59 != local_78)) {
    FSpanAllocator::Free(&pFVar47->CellChunkIdAllocator,iVar52,uVar59);
    TBitArray<FDefaultBitArrayAllocator>::SetRange
              (&this->SceneCulling->UsedChunkIdMask,iVar52,uVar59,false);
    pFVar47 = this->SceneCulling;
    iVar52 = -1;
  }
  if ((uVar63 != 0) && (iVar52 == -1)) {
    iVar52 = FSpanAllocator::Allocate(&pFVar47->CellChunkIdAllocator,uVar63);
    TBitArray<FDefaultBitArrayAllocator>::PadToNum
              (&this->SceneCulling->UsedChunkIdMask,uVar63 + iVar52,false);
    TBitArray<FDefaultBitArrayAllocator>::SetRange
              (&this->SceneCulling->UsedChunkIdMask,iVar52,uVar63,true);
  }
  this->SceneCulling->UncullableItemChunksOffset = iVar52;
  this->SceneCulling->UncullableNumItemChunks = local_78;
  pFVar47 = this->SceneCulling;
  lVar60 = 0x318;
  if ((pFVar47->CellChunkIdAllocator).bGrowOnly == false) {
    lVar60 = 0x314;
  }
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum
            (&pFVar47->PackedCellChunkData,
             *(int *)((longlong)(pFVar47->SpatialHash).RecCellSizes + lVar60 + -0x70),Default);
  uVar63 = local_78;
  if (local_78 != 0) {
    uVar59 = 0;
    iVar52 = this->SceneCulling->UncullableItemChunksOffset;
    if (local_78 != 0) {
      do {
        uVar57 = 0;
        if ((int)uVar59 < (int)local_78) {
          uVar57 = ~uVar59 >> 0x1f;
        }
        if ((uVar57 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        uVar57 = uVar59 + iVar52;
        FVar40.Data = (uint *)&local_100;
        if ((ForElementType<unsigned_int> *)local_100.SecondaryData.Data !=
            (ForElementType<unsigned_int> *)0x0) {
          FVar40.Data = local_100.SecondaryData.Data;
        }
        uVar51 = *(uint *)(((ForElementType<unsigned_int> *)FVar40.Data)->InlineData +
                          (longlong)(int)uVar59 * 4);
        pFVar47 = this->SceneCulling;
        uVar28 = 0;
        if ((int)uVar57 < (pFVar47->PackedCellChunkData).ArrayNum) {
          uVar28 = ~uVar57 >> 0x1f;
        }
        local_1fc = uVar51;
        if ((uVar28 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        *(uint *)((pFVar47->PackedCellChunkData).AllocatorInstance.Data + (longlong)(int)uVar57 * 4)
             = uVar51;
        UE::RendererPrivateUtils::Implementation::
        TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
        ::Add(&this->ItemChunkUploader,&local_1fc,uVar57);
        uVar59 = uVar59 + 1;
      } while (uVar59 < uVar63);
    }
  }
  if ((ForElementType<unsigned_int> *)local_100.SecondaryData.Data !=
      (ForElementType<unsigned_int> *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_100.SecondaryData.Data);
  }
  if (bVar68) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"BuildHierarchy_OutputChunkIds");
  bVar68 = -1 < CpuChannel->Enabled;
  if (bVar68) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FSceneCullingBuilder::FinalizeTempCellsAndUncullable(void)___ptr64'
                ::__l40::__CpuProfilerEventSpecId1528,"BuildHierarchy_OutputChunkIds",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
               ,0x5f8);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FSceneCullingBuilder::FinalizeTempCellsAndUncullable(void)___ptr64'
               ::__l40::__CpuProfilerEventSpecId1528);
  }
  TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::SetNum<bool>
            (&this->DirtyBlocks,*(int *)&(this->SpatialHash->HashMap).field_0x8,false);
  this->NumDirtyBlocks = 0;
  uVar63 = (this->TempCells).ArrayNum;
  uVar39 = (ulonglong)(int)uVar63;
  pFVar48 = (this->TempCells).AllocatorInstance.Data;
  local_230.Data = (uint *)(pFVar48 + uVar39);
  while( true ) {
    FVar40.Data = local_230.Data;
    local_2e8 = pFVar48;
    if ((this->TempCells).ArrayNum != (int)uVar39) {
      local_309 = 0;
      `TCheckedPointerIterator<FSceneCullingBuilder::FTempCell,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_309);
    }
    if (pFVar48 == (FTempCell *)FVar40.Data) break;
    uVar59 = pFVar48->CellOffset;
    pFVar47 = this->SceneCulling;
    uVar57 = 0;
    if ((int)uVar59 < (pFVar47->CellHeaders).ArrayNum) {
      uVar57 = ~uVar59 >> 0x1f;
    }
    if ((uVar57 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    pFVar8 = (FPackedCellHeader *)
             ((pFVar47->CellHeaders).AllocatorInstance.Data + (longlong)(int)uVar59 * 8);
    uVar59 = pFVar48->CellOffset;
    if (((int)uVar59 < 0) || ((this->TempCellMask).NumBits <= (int)uVar59)) {
LAB_1454b0af5:
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsTempCell(TempCell.CellOffset)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                          ,0x601,L"");
      if (bVar23) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
    }
    else {
      uVar57 = uVar59 & 0x1f;
      if ((int)uVar59 < 0) {
        uVar59 = uVar59 + 0x1f;
      }
      if (((this->TempCellMask).AllocatorInstance.Data[(int)uVar59 >> 5] >> uVar57 & 1) == 0)
      goto LAB_1454b0af5;
    }
    if ((pFVar8->Packed1 != 0xffffffff) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("OutPackedCellHeader.Packed1 == TempCellMarker",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                            ,0x602,L""), bVar23)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    iVar52 = (int)(pFVar48->CellOffset + (pFVar48->CellOffset >> 0x1f & 0x1ffU)) >> 9;
    if (((iVar52 < 0) || ((this->DirtyBlocks).NumBits <= iVar52)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar23)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    iVar25 = iVar52;
    if (iVar52 < 0) {
      iVar25 = iVar52 + 0x1f;
    }
    puVar34 = (this->DirtyBlocks).AllocatorInstance.Data + (iVar25 >> 5);
    *puVar34 = *puVar34 | 1 << ((byte)iVar52 & 0x1f);
    this->NumDirtyBlocks = this->NumDirtyBlocks + 1;
    if ((pFVar48->Builders[0].PackedChunkIds.ArrayNum == 0) &&
       (pFVar48->Builders[1].PackedChunkIds.ArrayNum == 0)) {
      pFVar47 = this->SceneCulling;
      iVar52 = pFVar48->CellOffset;
      if (((iVar52 < 0) || ((pFVar47->CellOccupancyMask).NumBits <= iVar52)) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar23)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      FVar49 = (pFVar47->CellOccupancyMask).AllocatorInstance.SecondaryData;
      FVar55 = (ForElementType<unsigned_int>)&pFVar47->CellOccupancyMask;
      if (FVar49 != (ForElementType<unsigned_int>)0x0) {
        FVar55 = FVar49;
      }
      iVar25 = iVar52;
      if (iVar52 < 0) {
        iVar25 = iVar52 + 0x1f;
      }
      puVar34 = (uint *)((longlong)FVar55 + (longlong)(iVar25 >> 5) * 4);
      *puVar34 = *puVar34 & ~(1 << ((byte)iVar52 & 0x1f));
      *pFVar8 = InvalidPackedCell;
    }
    else {
      pFVar47 = this->SceneCulling;
      iVar52 = pFVar48->CellOffset;
      if (((iVar52 < 0) || ((pFVar47->CellOccupancyMask).NumBits <= iVar52)) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar23)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      FVar49 = (pFVar47->CellOccupancyMask).AllocatorInstance.SecondaryData;
      FVar55 = (ForElementType<unsigned_int>)&pFVar47->CellOccupancyMask;
      if (FVar49 != (ForElementType<unsigned_int>)0x0) {
        FVar55 = FVar49;
      }
      iVar25 = iVar52;
      if (iVar52 < 0) {
        iVar25 = iVar52 + 0x1f;
      }
      puVar34 = (uint *)((longlong)FVar55 + (longlong)(iVar25 >> 5) * 4);
      *puVar34 = *puVar34 | 1 << ((byte)iVar52 & 0x1f);
      uVar59 = pFVar48->ItemChunksOffset;
      uVar57 = pFVar48->Builders[0].PackedChunkIds.ArrayNum;
      uVar51 = pFVar48->Builders[1].PackedChunkIds.ArrayNum;
      if ((0x3fffff < uVar59) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("CellHeader.ItemChunksOffset < (1u << (22u))",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                              ,399,L""), bVar23)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      if ((0x1fffff < uVar57) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("CellHeader.NumStaticChunks < (1u << (21u))",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                              ,400,L""), bVar23)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      if ((0x1ffffe < uVar51) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("CellHeader.NumDynamicChunks < ((1u << (21u)) - 1u)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                              ,0x192,L""), bVar23)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      *pFVar8 = (FPackedCellHeader)
                (((ulonglong)uVar59 << 0x15 | (ulonglong)uVar57) << 0x15 | (ulonglong)(uVar51 + 1));
      iVar52 = pFVar48->ItemChunksOffset;
      uVar59 = pFVar48->Builders[0].PackedChunkIds.ArrayNum;
      if (uVar59 != 0) {
        uVar57 = 0;
        local_2f8 = (FSceneCulling *)&local_2e8->Builders[0].PackedChunkIds;
        do {
          pFVar47 = local_2f8;
          uVar51 = 0;
          if ((int)uVar57 < local_2e8->Builders[0].PackedChunkIds.ArrayNum) {
            uVar51 = ~uVar57 >> 0x1f;
          }
          if ((uVar51 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          pFVar11 = (FSceneCulling *)(pFVar47->SpatialHash).RecCellSizes[2];
          uVar51 = uVar57 + iVar52;
          if (pFVar11 != (FSceneCulling *)0x0) {
            pFVar47 = pFVar11;
          }
          uVar9 = *(undefined4 *)
                   ((longlong)(pFVar47->SpatialHash).RecCellSizes +
                   (longlong)(int)uVar57 * 4 + -0x70);
          pFVar47 = this->SceneCulling;
          uVar28 = 0;
          if ((int)uVar51 < (pFVar47->PackedCellChunkData).ArrayNum) {
            uVar28 = ~uVar51 >> 0x1f;
          }
          local_2a8 = (FScriptContainerElement  [4])uVar9;
          if ((uVar28 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          *(undefined4 *)
           ((pFVar47->PackedCellChunkData).AllocatorInstance.Data + (longlong)(int)uVar51 * 4) =
               uVar9;
          if (((this->ItemChunkUploader).UploadDataProxy != (FUploadData *)0x0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UploadDataProxy == nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                                  ,0x116,L""), bVar23)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          pFVar3 = &(this->ItemChunkUploader).UploadData;
          pFVar41 = (pFVar3->Values).AllocatorInstance.Data;
          if (((pFVar41 <= local_2a8) &&
              (local_2a8 <
               pFVar41 + (longlong)(this->ItemChunkUploader).UploadData.Values.ArrayMax * 4)) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar23)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          iVar25 = (this->ItemChunkUploader).UploadData.Values.ArrayNum;
          if (iVar25 == (this->ItemChunkUploader).UploadData.Values.ArrayMax) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pFVar3,
                                &(this->ItemChunkUploader).UploadData.Values.ArrayMax);
          }
          (this->ItemChunkUploader).UploadData.Values.ArrayNum = iVar25 + 1;
          piVar1 = &(this->ItemChunkUploader).UploadData.ScatterOffsets.ArrayMax;
          *(FScriptContainerElement (*) [4])
           ((pFVar3->Values).AllocatorInstance.Data + (longlong)iVar25 * 4) = local_2a8;
          local_2a4 = uVar57 + iVar52;
          pFVar41 = (this->ItemChunkUploader).UploadData.ScatterOffsets.AllocatorInstance.Data;
          if (((pFVar41 <= (FScriptContainerElement *)&local_2a4) &&
              ((FScriptContainerElement *)&local_2a4 < pFVar41 + (longlong)*piVar1 * 4)) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar23)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          iVar25 = (this->ItemChunkUploader).UploadData.ScatterOffsets.ArrayNum;
          if (iVar25 == *piVar1) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(this->ItemChunkUploader).UploadData.ScatterOffsets.
                                       AllocatorInstance,piVar1);
          }
          (this->ItemChunkUploader).UploadData.ScatterOffsets.ArrayNum = iVar25 + 1;
          uVar57 = uVar57 + 1;
          *(int *)((this->ItemChunkUploader).UploadData.ScatterOffsets.AllocatorInstance.Data +
                  (longlong)iVar25 * 4) = local_2a4;
        } while (uVar57 < uVar59);
      }
      iVar52 = local_2e8->Builders[0].PackedChunkIds.ArrayNum + local_2e8->ItemChunksOffset;
      uVar59 = local_2e8->Builders[1].PackedChunkIds.ArrayNum;
      if (uVar59 != 0) {
        uVar57 = 0;
        local_2f8 = (FSceneCulling *)&local_2e8->Builders[1].PackedChunkIds;
        do {
          pFVar47 = local_2f8;
          uVar51 = 0;
          if ((int)uVar57 < local_2e8->Builders[1].PackedChunkIds.ArrayNum) {
            uVar51 = ~uVar57 >> 0x1f;
          }
          if ((uVar51 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          pFVar11 = (FSceneCulling *)(pFVar47->SpatialHash).RecCellSizes[2];
          uVar51 = uVar57 + iVar52;
          if (pFVar11 != (FSceneCulling *)0x0) {
            pFVar47 = pFVar11;
          }
          uVar9 = *(undefined4 *)
                   ((longlong)(pFVar47->SpatialHash).RecCellSizes +
                   (longlong)(int)uVar57 * 4 + -0x70);
          pFVar47 = this->SceneCulling;
          uVar28 = 0;
          if ((int)uVar51 < (pFVar47->PackedCellChunkData).ArrayNum) {
            uVar28 = ~uVar51 >> 0x1f;
          }
          local_2a0 = (FScriptContainerElement  [4])uVar9;
          if ((uVar28 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          *(undefined4 *)
           ((pFVar47->PackedCellChunkData).AllocatorInstance.Data + (longlong)(int)uVar51 * 4) =
               uVar9;
          if (((this->ItemChunkUploader).UploadDataProxy != (FUploadData *)0x0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UploadDataProxy == nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                                  ,0x116,L""), bVar23)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          pFVar3 = &(this->ItemChunkUploader).UploadData;
          pFVar41 = (pFVar3->Values).AllocatorInstance.Data;
          if (((pFVar41 <= local_2a0) &&
              (local_2a0 <
               pFVar41 + (longlong)(this->ItemChunkUploader).UploadData.Values.ArrayMax * 4)) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar23)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          iVar25 = (this->ItemChunkUploader).UploadData.Values.ArrayNum;
          if (iVar25 == (this->ItemChunkUploader).UploadData.Values.ArrayMax) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pFVar3,
                                &(this->ItemChunkUploader).UploadData.Values.ArrayMax);
          }
          (this->ItemChunkUploader).UploadData.Values.ArrayNum = iVar25 + 1;
          piVar1 = &(this->ItemChunkUploader).UploadData.ScatterOffsets.ArrayMax;
          *(FScriptContainerElement (*) [4])
           ((pFVar3->Values).AllocatorInstance.Data + (longlong)iVar25 * 4) = local_2a0;
          local_29c = uVar57 + iVar52;
          pFVar41 = (this->ItemChunkUploader).UploadData.ScatterOffsets.AllocatorInstance.Data;
          if (((pFVar41 <= (FScriptContainerElement *)&local_29c) &&
              ((FScriptContainerElement *)&local_29c < pFVar41 + (longlong)*piVar1 * 4)) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar23)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          iVar25 = (this->ItemChunkUploader).UploadData.ScatterOffsets.ArrayNum;
          if (iVar25 == *piVar1) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(this->ItemChunkUploader).UploadData.ScatterOffsets.
                                       AllocatorInstance,piVar1);
          }
          (this->ItemChunkUploader).UploadData.ScatterOffsets.ArrayNum = iVar25 + 1;
          uVar57 = uVar57 + 1;
          *(int *)((this->ItemChunkUploader).UploadData.ScatterOffsets.AllocatorInstance.Data +
                  (longlong)iVar25 * 4) = local_29c;
        } while (uVar57 < uVar59);
      }
      pFVar48 = local_2e8;
      local_308 = local_2e8->bAnyChange[1];
      uVar59 = local_2e8->CellOffset;
      bVar23 = local_2e8->bAnyChange[0];
      local_300[0] = uVar59;
      if (this->ExplicitBoundsMode == Incremental) {
        if ((((int)uVar59 < 0) || ((this->DirtyCellBoundsMaskStatic).NumBits <= (int)uVar59)) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar24)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        uVar57 = local_300[0];
        uVar51 = uVar59 & 0x1f;
        if ((int)uVar59 < 0) {
          uVar59 = uVar59 + 0x1f;
        }
        if (((this->DirtyCellBoundsMaskStatic).AllocatorInstance.Data[(int)uVar59 >> 5] >> uVar51 &
            1) == 0) {
          if ((((int)local_300[0] < 0) ||
              ((this->DirtyCellBoundsMaskDynamic).NumBits <= (int)local_300[0])) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar24)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          uVar59 = uVar57 & 0x1f;
          if ((int)uVar57 < 0) {
            uVar57 = uVar57 + 0x1f;
          }
          if (((this->DirtyCellBoundsMaskDynamic).AllocatorInstance.Data[(int)uVar57 >> 5] >> uVar59
              & 1) == 0) {
            pTVar4 = &this->DirtyCellBoundsIndices;
            puVar34 = (uint *)(pTVar4->AllocatorInstance).Data;
            if (((puVar34 <= local_300) &&
                (local_300 < puVar34 + (this->DirtyCellBoundsIndices).ArrayMax)) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar24)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            iVar52 = (this->DirtyCellBoundsIndices).ArrayNum;
            piVar1 = &(this->DirtyCellBoundsIndices).ArrayMax;
            if (iVar52 == *piVar1) {
              iVar52 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                                 (0x404,&pTVar4->AllocatorInstance,piVar1);
            }
            (this->DirtyCellBoundsIndices).ArrayNum = iVar52 + 1;
            (pTVar4->AllocatorInstance).Data[iVar52] = local_300[0];
          }
        }
        uVar59 = local_300[0];
        if ((((int)local_300[0] < 0) ||
            ((this->DirtyCellBoundsMaskStatic).NumBits <= (int)local_300[0])) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar24)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        uVar51 = local_300[0];
        uVar57 = uVar59;
        if ((int)uVar59 < 0) {
          uVar57 = uVar59 + 0x1f;
        }
        puVar34 = (this->DirtyCellBoundsMaskStatic).AllocatorInstance.Data;
        uVar28 = 1 << ((byte)uVar59 & 0x1f);
        uVar59 = puVar34[(int)uVar57 >> 5];
        if (bVar23 == false) {
          uVar59 = uVar59 & ~uVar28;
        }
        else {
          uVar59 = uVar59 | uVar28;
        }
        puVar34[(int)uVar57 >> 5] = uVar59;
        if ((((int)local_300[0] < 0) ||
            ((this->DirtyCellBoundsMaskDynamic).NumBits <= (int)local_300[0])) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar23)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        uVar59 = uVar51;
        if ((int)uVar51 < 0) {
          uVar59 = uVar51 + 0x1f;
        }
        puVar34 = (this->DirtyCellBoundsMaskDynamic).AllocatorInstance.Data;
        iVar52 = (int)uVar59 >> 5;
        uVar59 = 1 << ((byte)uVar51 & 0x1f);
        if (local_308 == '\0') {
          puVar34[iVar52] = ~uVar59 & puVar34[iVar52];
        }
        else {
          puVar34[iVar52] = uVar59 | puVar34[iVar52];
        }
      }
    }
    iVar52 = pFVar48->CellOffset;
    if (((this->CellHeaderUploader).UploadDataProxy != (FUploadData *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("UploadDataProxy == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                            ,0x116,L""), bVar23)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    pFVar5 = &(this->CellHeaderUploader).UploadData;
    pFVar13 = (FPackedCellHeader *)(pFVar5->Values).AllocatorInstance.Data;
    if (((pFVar13 <= pFVar8) &&
        (pFVar8 < pFVar13 + (this->CellHeaderUploader).UploadData.Values.ArrayMax)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar23)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    iVar25 = (this->CellHeaderUploader).UploadData.Values.ArrayNum;
    piVar1 = &(this->CellHeaderUploader).UploadData.Values.ArrayMax;
    if (iVar25 == *piVar1) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,(ForAnyElementType *)pFVar5,piVar1);
    }
    (this->CellHeaderUploader).UploadData.Values.ArrayNum = iVar25 + 1;
    pTVar64 = &(this->CellHeaderUploader).UploadData.ScatterOffsets;
    *(FPackedCellHeader *)((pFVar5->Values).AllocatorInstance.Data + (longlong)iVar25 * 8) = *pFVar8
    ;
    pFVar41 = (pTVar64->AllocatorInstance).Data;
    local_298 = iVar52;
    if (((pFVar41 <= (FScriptContainerElement *)&local_298) &&
        ((FScriptContainerElement *)&local_298 <
         pFVar41 + (longlong)(this->CellHeaderUploader).UploadData.ScatterOffsets.ArrayMax * 4)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar23)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    iVar52 = (this->CellHeaderUploader).UploadData.ScatterOffsets.ArrayNum;
    piVar1 = &(this->CellHeaderUploader).UploadData.ScatterOffsets.ArrayMax;
    if (iVar52 == *piVar1) {
      iVar52 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar64->AllocatorInstance,piVar1);
    }
    (this->CellHeaderUploader).UploadData.ScatterOffsets.ArrayNum = iVar52 + 1;
    pFVar48 = pFVar48 + 1;
    *(int *)((pTVar64->AllocatorInstance).Data + (longlong)iVar52 * 4) = local_298;
    uVar39 = (ulonglong)uVar63;
  }
  if (bVar68) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  DestructItems<FSceneCullingBuilder::FTempCell,int>
            ((this->TempCells).AllocatorInstance.Data,(this->TempCells).ArrayNum);
  (this->TempCells).ArrayNum = 0;
  if ((this->TempCells).ArrayMax != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSceneCullingBuilder::FTempCell>_>
              (0x158,8,0,&(this->TempCells).AllocatorInstance,0,&(this->TempCells).ArrayMax);
  }
  if (bVar67) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  uVar63 = (this->DirtyChunks).NumBits;
  this_00 = &this->ItemChunkDataUploader;
  puVar34 = (this->DirtyChunks).AllocatorInstance.Data;
  iVar25 = 0;
  uVar39 = 0;
  iVar52 = uVar63 + 0x1f;
  iVar52 = (int)(iVar52 + (iVar52 >> 0x1f & 0x1fU)) >> 5;
  uVar63 = uVar63 & 0x8000001f;
  if ((int)uVar63 < 0) {
    uVar63 = (uVar63 - 1 | 0xffffffe0) + 1;
  }
  uVar59 = 0xffffffff >> ((byte)(0x20 - uVar63) & 0x1f);
  if (0x1f < (int)(0x20 - uVar63)) {
    uVar59 = 0xffffffff;
  }
  uVar63 = 0xffffffff;
  if (iVar52 == 1) {
    uVar63 = uVar59;
  }
  if (0 < iVar52) {
    do {
      uVar57 = puVar34[uVar39] & uVar63;
      if (uVar63 == 0xffffffff) {
        uVar57 = puVar34[uVar39];
      }
      uVar51 = (int)uVar39 + 1;
      uVar39 = (ulonglong)uVar51;
      uVar56 = (ulonglong)uVar57 - ((ulonglong)(uVar57 >> 1) & 0x5555555555555555);
      uVar56 = (uVar56 >> 2 & 0x3333333333333333) + (uVar56 & 0x3333333333333333);
      iVar25 = iVar25 + (uint)(byte)(((uVar56 >> 4) + uVar56 & 0xf0f0f0f0f0f0f0f) *
                                     0x101010101010101 >> 0x38);
      uVar63 = 0xffffffff;
      if (uVar51 == iVar52 - 1U) {
        uVar63 = uVar59;
      }
      this = local_1e0;
    } while ((int)uVar51 < iVar52);
  }
  UE::RendererPrivateUtils::Implementation::
  TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,64>
  ::Reserve(this_00,iVar25);
  iVar52 = (this->DirtyChunks).NumBits;
  iVar25 = 0;
  uVar63 = 1;
  iVar26 = 0;
  iVar29 = 0;
  if (iVar52 != 0) {
    puVar34 = (this->DirtyChunks).AllocatorInstance.Data;
    uVar59 = *puVar34;
    while (uVar59 == 0) {
      lVar60 = (longlong)iVar25;
      iVar26 = iVar26 + 0x20;
      iVar25 = iVar25 + 1;
      iVar29 = iVar52;
      if ((int)(iVar52 + -1 + (iVar52 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_1454b18da;
      uVar59 = puVar34[lVar60 + 1];
    }
    uVar63 = -uVar59 & uVar59;
    uVar39 = (ulonglong)uVar63 * 2 + 1;
    lVar60 = 0x3f;
    if (uVar39 != 0) {
      for (; uVar39 >> lVar60 == 0; lVar60 = lVar60 + -1) {
      }
    }
    local_1a0 = (int)lVar60;
    iVar29 = local_1a0 + -1 + iVar26;
    if (iVar52 < iVar29) {
      iVar29 = iVar52;
    }
  }
LAB_1454b18da:
  local_338 = 0xffffffff;
  if (iVar29 < iVar52) {
    local_2f8 = (FSceneCulling *)&(this->ItemChunkDataUploader).UploadData.Values.ArrayMax;
    local_230.Data = (uint *)&(this->ItemChunkDataUploader).UploadData.Values.ArrayNum;
    pTVar64 = &(this->ItemChunkDataUploader).UploadData.ScatterOffsets;
    do {
      pFVar47 = this->SceneCulling;
      uVar57 = iVar29 * 0x40;
      uVar59 = 0;
      if ((int)uVar57 < (pFVar47->PackedCellData).ArrayNum) {
        uVar59 = ~uVar57 >> 0x1f;
      }
      if ((uVar59 == 0) &&
         (bVar67 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar67)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pFVar41 = (pFVar47->PackedCellData).AllocatorInstance.Data;
      if (((this->ItemChunkDataUploader).UploadDataProxy != (FUploadData *)0x0) &&
         (bVar67 = ::FDebug::CheckVerifyFailedImpl2
                             ("UploadDataProxy == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                              ,0x123,L""), bVar67)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar52 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,0x40,(ForAnyElementType *)&(this->ItemChunkDataUploader).UploadData,
                          (int *)local_230.Data,(int *)local_2f8);
      lVar60 = 2;
      pFVar45 = (this->ItemChunkDataUploader).UploadData.Values.AllocatorInstance.Data +
                (longlong)iVar52 * 4;
      pFVar41 = pFVar41 + (longlong)(int)uVar57 * 4;
      do {
        uVar14 = *(undefined8 *)(pFVar41 + 8);
        *(undefined8 *)pFVar45 = *(undefined8 *)pFVar41;
        *(undefined8 *)(pFVar45 + 8) = uVar14;
        uVar14 = *(undefined8 *)(pFVar41 + 0x18);
        *(undefined8 *)(pFVar45 + 0x10) = *(undefined8 *)(pFVar41 + 0x10);
        *(undefined8 *)(pFVar45 + 0x18) = uVar14;
        uVar14 = *(undefined8 *)(pFVar41 + 0x28);
        *(undefined8 *)(pFVar45 + 0x20) = *(undefined8 *)(pFVar41 + 0x20);
        *(undefined8 *)(pFVar45 + 0x28) = uVar14;
        uVar14 = *(undefined8 *)(pFVar41 + 0x38);
        *(undefined8 *)(pFVar45 + 0x30) = *(undefined8 *)(pFVar41 + 0x30);
        *(undefined8 *)(pFVar45 + 0x38) = uVar14;
        uVar14 = *(undefined8 *)(pFVar41 + 0x48);
        *(undefined8 *)(pFVar45 + 0x40) = *(undefined8 *)(pFVar41 + 0x40);
        *(undefined8 *)(pFVar45 + 0x48) = uVar14;
        uVar14 = *(undefined8 *)(pFVar41 + 0x58);
        *(undefined8 *)(pFVar45 + 0x50) = *(undefined8 *)(pFVar41 + 0x50);
        *(undefined8 *)(pFVar45 + 0x58) = uVar14;
        uVar14 = *(undefined8 *)(pFVar41 + 0x68);
        *(undefined8 *)(pFVar45 + 0x60) = *(undefined8 *)(pFVar41 + 0x60);
        *(undefined8 *)(pFVar45 + 0x68) = uVar14;
        uVar14 = *(undefined8 *)(pFVar41 + 0x78);
        *(undefined8 *)(pFVar45 + 0x70) = *(undefined8 *)(pFVar41 + 0x70);
        *(undefined8 *)(pFVar45 + 0x78) = uVar14;
        lVar60 = lVar60 + -1;
        pFVar45 = pFVar45 + 0x80;
        pFVar41 = pFVar41 + 0x80;
      } while (lVar60 != 0);
      pFVar41 = (pTVar64->AllocatorInstance).Data;
      local_294 = iVar29;
      if (((pFVar41 <= (FScriptContainerElement *)&local_294) &&
          ((FScriptContainerElement *)&local_294 <
           pFVar41 + (longlong)(this->ItemChunkDataUploader).UploadData.ScatterOffsets.ArrayMax * 4)
          ) && (bVar67 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar67)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar52 = (this->ItemChunkDataUploader).UploadData.ScatterOffsets.ArrayNum;
      if (iVar52 == (this->ItemChunkDataUploader).UploadData.ScatterOffsets.ArrayMax) {
        iVar52 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar64->AllocatorInstance,
                            &(this->ItemChunkDataUploader).UploadData.ScatterOffsets.ArrayMax);
      }
      (this->ItemChunkDataUploader).UploadData.ScatterOffsets.ArrayNum = iVar52 + 1;
      *(int *)((pTVar64->AllocatorInstance).Data + (longlong)iVar52 * 4) = local_294;
      iVar52 = (this->DirtyChunks).NumBits;
      puVar34 = (this->DirtyChunks).AllocatorInstance.Data;
      local_338 = local_338 & ~uVar63;
      uVar59 = local_338 & puVar34[iVar25];
      while (uVar59 == 0) {
        lVar60 = (longlong)iVar25;
        iVar26 = iVar26 + 0x20;
        iVar25 = iVar25 + 1;
        iVar29 = iVar52;
        if ((int)(iVar52 + -1 + (iVar52 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_1454b1b66;
        uVar59 = puVar34[lVar60 + 1];
        local_338 = 0xffffffff;
      }
      uVar63 = -uVar59 & uVar59;
      uVar39 = (ulonglong)uVar63 * 2 + 1;
      lVar60 = 0x3f;
      if (uVar39 != 0) {
        for (; uVar39 >> lVar60 == 0; lVar60 = lVar60 + -1) {
        }
      }
      local_19c = (int)lVar60;
      iVar29 = iVar26 + -1 + local_19c;
      if (iVar52 < iVar29) {
        iVar29 = iVar52;
      }
LAB_1454b1b66:
    } while (iVar29 < (this->DirtyChunks).NumBits);
  }
  UE::RendererPrivateUtils::Implementation::
  TBufferScatterUploader<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
  ::Reserve(&this->BlockDataUploader,this->NumDirtyBlocks);
  pFVar47 = this->SceneCulling;
  pTVar54 = &pFVar47->CellBlockData;
  iVar52 = (pFVar47->CellBlockData).ArrayNum;
  uVar63 = *(uint *)&this->SpatialHashMap->field_0x8;
  if (iVar52 < (int)uVar63) {
    iVar25 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,4,uVar63 - iVar52,&pTVar54->AllocatorInstance,
                        &(pFVar47->CellBlockData).ArrayNum,&(pFVar47->CellBlockData).ArrayMax);
    DefaultConstructItems<UE::HLSL::FCellBlockData,int>
              ((pTVar54->AllocatorInstance).Data + (longlong)iVar25 * 0x20,uVar63 - iVar52);
  }
  else {
    if ((int)uVar63 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar63);
    }
    if ((int)uVar63 < iVar52) {
      uVar59 = iVar52 - uVar63;
      if (((int)(uVar59 | uVar63) < 0) &&
         (bVar67 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar67)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      if (uVar59 != 0) {
        pFVar41 = (pTVar54->AllocatorInstance).Data + (longlong)(int)uVar63 * 0x20;
        iVar52 = ((pFVar47->CellBlockData).ArrayNum - uVar63) - uVar59;
        if (iVar52 != 0) {
          memmove(pFVar41,pFVar41 + (longlong)(int)uVar59 * 0x20,(longlong)iVar52 << 5);
        }
        iVar52 = (pFVar47->CellBlockData).ArrayNum - uVar59;
        (pFVar47->CellBlockData).ArrayNum = iVar52;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,4,&pTVar54->AllocatorInstance,iVar52,&(pFVar47->CellBlockData).ArrayMax);
      }
    }
  }
  iVar52 = (this->DirtyBlocks).NumBits;
  uVar63 = 1;
  iVar25 = 0;
  local_310 = 0;
  FVar30.Index = 0;
  if (iVar52 != 0) {
    puVar34 = (this->DirtyBlocks).AllocatorInstance.Data;
    uVar59 = *puVar34;
    local_310 = 0;
    while (uVar59 == 0) {
      local_310 = local_310 + 0x20;
      lVar60 = (longlong)iVar25;
      iVar25 = iVar25 + 1;
      FVar30.Index = iVar52;
      if ((int)(iVar52 + -1 + (iVar52 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_1454b1d52;
      uVar59 = puVar34[lVar60 + 1];
    }
    uVar63 = -uVar59 & uVar59;
    uVar39 = (ulonglong)uVar63 * 2 + 1;
    lVar60 = 0x3f;
    if (uVar39 != 0) {
      for (; uVar39 >> lVar60 == 0; lVar60 = lVar60 + -1) {
      }
    }
    local_198 = (int)lVar60;
    FVar30.Index = local_198 + -1 + local_310;
    if (iVar52 < FVar30.Index) {
      FVar30.Index = iVar52;
    }
  }
LAB_1454b1d52:
  local_338 = 0xffffffff;
  iVar26 = local_310;
  if (FVar30.Index < iVar52) {
    do {
      pTVar37 = Experimental::RobinHoodHashTable_Private::
                TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
                ::FData::Get((FData *)this->SpatialHashMap,FVar30.Index);
      uStack_204 = 0xdeafbead;
      local_220 = (float  [2])0x0;
      fStack_218 = 0.0;
      fStack_214 = 0.0;
      fStack_210 = 0.0;
      fStack_20c = 0.0;
      if (*(int *)&(pTVar37->Pair).field_0x1c == 0) {
        iVar52 = *(int *)&(pTVar37->Pair).field_0x18;
        uVar39 = (ulonglong)iVar52;
        if (iVar52 < iVar52 + 0x200) {
          bVar17 = (byte)iVar52 & 0x1f;
          uVar59 = 1 << bVar17 | 1U >> 0x20 - bVar17;
          lVar60 = uVar39 << 3;
          do {
            pFVar47 = this->SceneCulling;
            uVar57 = (uint)uVar39;
            if ((((int)uVar57 < 0) || ((pFVar47->CellOccupancyMask).NumBits <= (int)uVar57)) &&
               (bVar67 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar67)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            FVar49 = (pFVar47->CellOccupancyMask).AllocatorInstance.SecondaryData;
            FVar55 = (ForElementType<unsigned_int>)&pFVar47->CellOccupancyMask;
            if (FVar49 != (ForElementType<unsigned_int>)0x0) {
              FVar55 = FVar49;
            }
            uVar51 = uVar57;
            if ((int)uVar57 < 0) {
              uVar51 = uVar57 + 0x1f;
            }
            if (((*(uint *)((longlong)FVar55 + (longlong)((int)uVar51 >> 5) * 4) & uVar59) != 0) &&
               (bVar67 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!SceneCulling.CellOccupancyMask[CellIndex]",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                                    ,0x970,L""), bVar67)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            pFVar47 = this->SceneCulling;
            uVar51 = 0;
            if ((int)uVar57 < (pFVar47->CellHeaders).ArrayNum) {
              uVar51 = ~uVar57 >> 0x1f;
            }
            if ((uVar51 == 0) &&
               (bVar67 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar67)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            if ((*(int *)((pFVar47->CellHeaders).AllocatorInstance.Data + lVar60) != 0) &&
               (bVar67 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!IsValidCell(SceneCulling.CellHeaders[CellIndex])",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                                    ,0x971,L""), bVar67)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            uVar39 = (ulonglong)(uVar57 + 1);
            uVar59 = uVar59 << 1 | (uint)((int)uVar59 < 0);
            lVar60 = lVar60 + 8;
            iVar26 = local_310;
          } while ((int)(uVar57 + 1) < *(int *)&(pTVar37->Pair).field_0x18 + 0x200);
        }
        Experimental::RobinHoodHashTable_Private::
        TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
        ::RemoveByElementId((TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
                             *)this->SpatialHashMap,FVar30);
        uStack_1b4 = 0;
        uStack_1b0 = 0;
        local_1c0 = 0;
        uStack_1b8 = 0;
        local_1c0._0_4_ = 0.0;
        local_1c0._4_4_ = 0.0;
        uStack_1ac = 0;
        local_220 = (float  [2])0x0;
        fStack_218 = 0.0;
        fStack_214 = 0.0;
        fStack_208 = 0.0;
        fStack_210 = 0.0;
        fStack_20c = 0.0;
        fVar69 = (float)local_1c0;
        fVar70 = local_1c0._4_4_;
      }
      else {
        uVar14 = *(undefined8 *)&(pTVar37->Pair).field_0x8;
        local_118 = *(int *)&pTVar37->Pair;
        iStack_114 = *(int *)&(pTVar37->Pair).field_0x4;
        uStack_110 = *(undefined4 *)&(pTVar37->Pair).field_0x8;
        uStack_10c = *(undefined4 *)&(pTVar37->Pair).field_0xc;
        cVar18 = (char)((ulonglong)uVar14 >> 0x20);
        fVar70 = (float)(ulonglong)(1L << (cVar18 + 1U & 0x3f));
        fStack_218 = (float)(int)uVar14 * fVar70;
        fVar69 = (float)local_118 * fVar70;
        fVar70 = (float)iStack_114 * fVar70;
        fStack_214 = fVar69 - fVar69;
        fStack_20c = fStack_218 - fStack_218;
        fStack_210 = fVar70 - fVar70;
        local_220[1] = fVar70;
        local_220[0] = fVar69;
        fStack_208 = (float)(ulonglong)(1L << (cVar18 - 2U & 0x3f));
        local_1d8 = fVar69;
        fStack_1d4 = fVar70;
        fStack_1d0 = fStack_218;
        fStack_1cc = fStack_214;
        fStack_1c8 = fStack_210;
        local_1c4 = fStack_20c;
      }
      fVar22 = fStack_214;
      fVar21 = fStack_218;
      if ((-1 < FVar30.Index) &&
         (pFVar47 = this->SceneCulling, FVar30.Index < (pFVar47->CellBlockData).ArrayNum)) {
        uVar14 = CONCAT44(fStack_20c,fStack_210);
        uVar20 = CONCAT44(uStack_204,fStack_208);
        uVar59 = 0;
        if (FVar30.Index < (pFVar47->CellBlockData).ArrayNum) {
          uVar59 = (uint)~FVar30.Index >> 0x1f;
        }
        if ((uVar59 == 0) &&
           (bVar67 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar67)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pFVar45 = (pFVar47->CellBlockData).AllocatorInstance.Data;
        pFVar41 = pFVar45 + (longlong)FVar30.Index * 0x20;
        *(float *)pFVar41 = fVar69;
        *(float *)(pFVar41 + 4) = fVar70;
        *(float *)(pFVar41 + 8) = fVar21;
        *(float *)(pFVar41 + 0xc) = fVar22;
        pFVar45 = pFVar45 + (longlong)FVar30.Index * 0x20 + 0x10;
        *(undefined8 *)pFVar45 = uVar14;
        *(undefined8 *)(pFVar45 + 8) = uVar20;
        if (((this->BlockDataUploader).UploadDataProxy != (FUploadData *)0x0) &&
           (bVar67 = ::FDebug::CheckVerifyFailedImpl2
                               ("UploadDataProxy == nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                                ,0x116,L""), bVar67)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pFVar6 = &(this->BlockDataUploader).UploadData;
        pFVar41 = (pFVar6->Values).AllocatorInstance.Data;
        if (((pFVar41 <= (FScriptContainerElement *)local_220) &&
            ((FScriptContainerElement *)local_220 <
             pFVar41 + (longlong)(this->BlockDataUploader).UploadData.Values.ArrayMax * 0x20)) &&
           (bVar67 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar67)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        iVar52 = (this->BlockDataUploader).UploadData.Values.ArrayNum;
        piVar1 = &(this->BlockDataUploader).UploadData.Values.ArrayMax;
        if (iVar52 == *piVar1) {
          iVar52 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x420,(ForAnyElementType *)pFVar6,piVar1);
        }
        (this->BlockDataUploader).UploadData.Values.ArrayNum = iVar52 + 1;
        pFVar45 = (pFVar6->Values).AllocatorInstance.Data;
        pTVar64 = &(this->BlockDataUploader).UploadData.ScatterOffsets;
        pFVar41 = pFVar45 + (longlong)iVar52 * 0x20;
        *(float (*) [2])pFVar41 = local_220;
        *(ulonglong *)(pFVar41 + 8) = CONCAT44(fStack_214,fStack_218);
        pFVar45 = pFVar45 + (longlong)iVar52 * 0x20 + 0x10;
        *(ulonglong *)pFVar45 = CONCAT44(fStack_20c,fStack_210);
        *(ulonglong *)(pFVar45 + 8) = CONCAT44(uStack_204,fStack_208);
        pFVar41 = (pTVar64->AllocatorInstance).Data;
        local_290 = FVar30.Index;
        if (((pFVar41 <= (FScriptContainerElement *)&local_290) &&
            ((FScriptContainerElement *)&local_290 <
             pFVar41 + (longlong)(this->BlockDataUploader).UploadData.ScatterOffsets.ArrayMax * 4))
           && (bVar67 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar67)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        iVar52 = (this->BlockDataUploader).UploadData.ScatterOffsets.ArrayNum;
        piVar1 = &(this->BlockDataUploader).UploadData.ScatterOffsets.ArrayMax;
        if (iVar52 == *piVar1) {
          iVar52 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar64->AllocatorInstance,piVar1);
        }
        (this->BlockDataUploader).UploadData.ScatterOffsets.ArrayNum = iVar52 + 1;
        *(int *)((pTVar64->AllocatorInstance).Data + (longlong)iVar52 * 4) = local_290;
      }
      iVar52 = (this->DirtyBlocks).NumBits;
      puVar34 = (this->DirtyBlocks).AllocatorInstance.Data;
      local_338 = local_338 & ~uVar63;
      uVar59 = local_338 & puVar34[iVar25];
      while (uVar59 == 0) {
        iVar26 = iVar26 + 0x20;
        lVar60 = (longlong)iVar25;
        iVar25 = iVar25 + 1;
        FVar30.Index = iVar52;
        local_310 = iVar26;
        if ((int)(iVar52 + -1 + (iVar52 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_1454b234f;
        uVar59 = puVar34[lVar60 + 1];
        local_338 = 0xffffffff;
      }
      uVar63 = -uVar59 & uVar59;
      uVar39 = (ulonglong)uVar63 * 2 + 1;
      lVar60 = 0x3f;
      if (uVar39 != 0) {
        for (; uVar39 >> lVar60 == 0; lVar60 = lVar60 + -1) {
        }
      }
      local_194 = (int)lVar60;
      FVar30.Index = local_194 + -1 + iVar26;
      if (iVar52 < FVar30.Index) {
        FVar30.Index = iVar52;
      }
LAB_1454b234f:
    } while (FVar30.Index < (this->DirtyBlocks).NumBits);
  }
  pFVar47 = this->SceneCulling;
  FVar49 = (ForElementType<unsigned_int>)&pFVar47->BlockLevelOccupancyMask;
  (pFVar47->BlockLevelOccupancyMask).NumBits = 0x40;
  if (((pFVar47->BlockLevelOccupancyMask).MaxBits + 0x1fU & 0xffffffe0) < 0x40) {
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation((ForElementType<unsigned_int> *)FVar49,0,2,4);
    (pFVar47->BlockLevelOccupancyMask).MaxBits = 0x40;
  }
  FVar55 = (pFVar47->BlockLevelOccupancyMask).AllocatorInstance.SecondaryData;
  FVar42 = FVar49;
  if (FVar55 != (ForElementType<unsigned_int>)0x0) {
    FVar42 = FVar55;
  }
  *(undefined8 *)FVar42 = 0;
  iVar52 = (pFVar47->BlockLevelOccupancyMask).NumBits;
  uVar59 = iVar52 >> 0x1f & 0x1f;
  uVar63 = iVar52 + uVar59;
  iVar52 = (uVar63 & 0x1f) - uVar59;
  if (iVar52 != 0) {
    FVar55 = (pFVar47->BlockLevelOccupancyMask).AllocatorInstance.SecondaryData;
    if (FVar55 != (ForElementType<unsigned_int>)0x0) {
      FVar49 = FVar55;
    }
    puVar34 = (uint *)((longlong)FVar49 + (longlong)((int)uVar63 >> 5) * 4);
    *puVar34 = *puVar34 & 0xffffffffU >> (0x20U - (char)iVar52 & 0x1f);
  }
  this_01 = this->SpatialHashMap;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
  ::FData::Next((FData *)this_01,(FIteratorState)(uint)local_1f8);
  uVar63 = *(uint *)&this_01->field_0x8;
  while (local_1f8[0] != uVar63) {
    pTVar37 = Experimental::RobinHoodHashTable_Private::
              TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
              ::FData::Get((FData *)this_01,local_1f8[0]);
    pFVar47 = this->SceneCulling;
    iVar52 = *(int *)&(pTVar37->Pair).field_0xc;
    if (((iVar52 < 0) || ((pFVar47->BlockLevelOccupancyMask).NumBits <= iVar52)) &&
       (bVar67 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar67)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    FVar49 = (pFVar47->BlockLevelOccupancyMask).AllocatorInstance.SecondaryData;
    FVar55 = (ForElementType<unsigned_int>)&pFVar47->BlockLevelOccupancyMask;
    if (FVar49 != (ForElementType<unsigned_int>)0x0) {
      FVar55 = FVar49;
    }
    iVar25 = iVar52;
    if (iVar52 < 0) {
      iVar25 = iVar52 + 0x1f;
    }
    puVar34 = (uint *)((longlong)FVar55 + (longlong)(iVar25 >> 5) * 4);
    *puVar34 = *puVar34 | 1 << ((byte)iVar52 & 0x1f);
    FVar31 = Experimental::RobinHoodHashTable_Private::
             TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
             ::FData::Next((FData *)this_01,(uint)local_190);
    local_1f8[0] = *(uint *)CONCAT44(extraout_var,FVar31.Index);
  }
  if (this->ExplicitBoundsMode == Full) {
    if (((this->DirtyCellBoundsIndices).ArrayNum != 0) &&
       (bVar67 = ::FDebug::CheckVerifyFailedImpl2
                           ("DirtyCellBoundsIndices.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                            ,0x998,L""), bVar67)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    pFVar47 = this->SceneCulling;
    local_2f0[0] = 0;
    if (0 < (pFVar47->CellHeaders).ArrayNum) {
      do {
        uVar63 = local_2f0[0];
        uVar59 = 0;
        if ((int)local_2f0[0] < (pFVar47->CellHeaders).ArrayNum) {
          uVar59 = ~local_2f0[0] >> 0x1f;
        }
        if ((uVar59 == 0) &&
           (bVar67 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar67)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        if (*(int *)((pFVar47->CellHeaders).AllocatorInstance.Data + (longlong)(int)uVar63 * 8) != 0
           ) {
          pTVar4 = &this->DirtyCellBoundsIndices;
          puVar34 = (uint *)(pTVar4->AllocatorInstance).Data;
          if (((puVar34 <= local_2f0) &&
              (local_2f0 < puVar34 + (this->DirtyCellBoundsIndices).ArrayMax)) &&
             (bVar67 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar67)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          iVar52 = (this->DirtyCellBoundsIndices).ArrayNum;
          piVar1 = &(this->DirtyCellBoundsIndices).ArrayMax;
          if (iVar52 == *piVar1) {
            iVar52 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                               (0x404,&pTVar4->AllocatorInstance,piVar1);
          }
          (this->DirtyCellBoundsIndices).ArrayNum = iVar52 + 1;
          (pTVar4->AllocatorInstance).Data[iVar52] = local_2f0[0];
        }
        pFVar47 = this->SceneCulling;
        local_2f0[0] = local_2f0[0] + 1;
      } while ((int)local_2f0[0] < (pFVar47->CellHeaders).ArrayNum);
    }
  }
  iVar52 = (this->DirtyCellBoundsIndices).ArrayNum;
  if (iVar52 == 0) {
LAB_1454b2899:
    iVar52 = (this->DirtyChunks).MaxBits;
    (this->DirtyChunks).NumBits = 0;
    if ((iVar52 < 0) || (0 < iVar52)) {
      (this->DirtyChunks).MaxBits = 0;
      TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::Realloc
                (&this->DirtyChunks,0);
    }
    iVar52 = (this->DirtyBlocks).MaxBits;
    (this->DirtyBlocks).NumBits = 0;
    if ((iVar52 < 0) || (0 < iVar52)) {
      (this->DirtyBlocks).MaxBits = 0;
      TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::Realloc
                (&this->DirtyBlocks,0);
    }
    iVar52 = (this->RemovedInstanceFlags).MaxBits;
    (this->RemovedInstanceFlags).NumBits = 0;
    if ((iVar52 < 0) || (0 < iVar52)) {
      (this->RemovedInstanceFlags).MaxBits = 0;
      TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::Realloc
                (&this->RemovedInstanceFlags,0);
    }
    iVar52 = (this->DirtyCellBoundsMaskDynamic).MaxBits;
    (this->DirtyCellBoundsMaskDynamic).NumBits = 0;
    if ((iVar52 < 0) || (0 < iVar52)) {
      (this->DirtyCellBoundsMaskDynamic).MaxBits = 0;
      TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::Realloc
                (&this->DirtyCellBoundsMaskDynamic,0);
    }
    iVar52 = (this->DirtyCellBoundsMaskStatic).MaxBits;
    (this->DirtyCellBoundsMaskStatic).NumBits = 0;
    if ((iVar52 < 0) || (0 < iVar52)) {
      (this->DirtyCellBoundsMaskStatic).MaxBits = 0;
      TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::Realloc
                (&this->DirtyCellBoundsMaskStatic,0);
    }
    FCsvProfiler::EndStat("PostSceneUpdate",local_200);
    if ((local_1e8 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_1e8 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_1e8 & 4) != 0) {
      FThreadStats::AddMessage(local_1f0,CycleScopeEnd);
    }
    local_1e8 = 0;
    if (bVar66) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    FMemScope::~FMemScope(local_178);
    FLLMScope::~FLLMScope(local_228);
    return;
  }
  pFVar47 = (FSceneCulling *)(this->DirtyCellBoundsIndices).AllocatorInstance.Data;
  local_2f8 = (FSceneCulling *)
              ((longlong)(pFVar47->SpatialHash).RecCellSizes + (longlong)iVar52 * 4 + -0x70);
  do {
    pFVar11 = local_2f8;
    if ((this->DirtyCellBoundsIndices).ArrayNum != iVar52) {
      local_307[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_307);
    }
    if (pFVar47 == pFVar11) goto LAB_1454b2899;
    if (this->ExplicitBoundsMode == Full) {
LAB_1454b26d1:
      local_347 = 1;
    }
    else {
      uVar63 = (uint)pFVar47->_padding_;
      if ((((int)uVar63 < 0) || ((this->DirtyCellBoundsMaskStatic).NumBits <= (int)uVar63)) &&
         (bVar67 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar67)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      uVar59 = uVar63 & 0x1f;
      if ((int)uVar63 < 0) {
        uVar63 = uVar63 + 0x1f;
      }
      local_347 = 0;
      if (((this->DirtyCellBoundsMaskStatic).AllocatorInstance.Data[(int)uVar63 >> 5] >> uVar59 & 1)
          != 0) goto LAB_1454b26d1;
    }
    uVar63 = (uint)pFVar47->_padding_;
    pFVar11 = this->SceneCulling;
    uVar59 = 0;
    if ((int)uVar63 < (pFVar11->CellHeaders).ArrayNum) {
      uVar59 = ~uVar63 >> 0x1f;
    }
    if ((uVar59 == 0) &&
       (bVar67 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar67)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    uVar39 = *(ulonglong *)
              ((pFVar11->CellHeaders).AllocatorInstance.Data + (longlong)(int)uVar63 * 8);
    uVar57 = (uint)(uVar39 >> 0x15) & 0x1fffff;
    uVar59 = (uint)uVar39 & 0x1fffff;
    uVar63 = uVar59 - 1;
    if ((uVar39 & 0x1fffff) == 0) {
      if ((uVar39 & 0x1fffff) == 0) {
        uVar63 = uVar59;
      }
      bVar67 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidCell(CellHeader)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                          ,0x9ab,L"");
      if (bVar67) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
    }
    else if ((uVar39 & 0x1fffff) == 0) {
      uVar63 = uVar59;
    }
    uVar63 = uVar63 + uVar57;
    uVar59 = 0;
    if (local_347 == 0) {
      uVar59 = uVar57;
    }
    pFVar58 = this;
    if (uVar59 < uVar63) {
      pTVar7 = &this->DirtyChunkBoundsData;
      do {
        local_240._s_0.X = (int)pFVar47->_padding_;
        pTVar15 = &((pTVar7->AllocatorInstance).Data)->field0_0x0;
        local_240._s_0.Y = uVar59 + (uint)(uVar39 >> 0x2a);
        if (((pTVar15 <= &local_240) &&
            (&local_240 < pTVar15 + (this->DirtyChunkBoundsData).ArrayMax)) &&
           (bVar67 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar67)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        iVar25 = (this->DirtyChunkBoundsData).ArrayNum;
        if (iVar25 == (this->DirtyChunkBoundsData).ArrayMax) {
          iVar25 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<int>_>_>
                             (0x408,&pTVar7->AllocatorInstance,
                              &(this->DirtyChunkBoundsData).ArrayMax);
        }
        TVar19.field0_0x0._s_0.Y = local_240._s_0.Y;
        TVar19.field0_0x0._s_0.X = local_240._s_0.X;
        uVar59 = uVar59 + 1;
        (this->DirtyChunkBoundsData).ArrayNum = iVar25 + 1;
        (pTVar7->AllocatorInstance).Data[iVar25].field0_0x0 = TVar19.field0_0x0;
        pFVar58 = local_1e0;
      } while (uVar59 < uVar63);
    }
    *(uint *)&pFVar47->_padding_ = (int)pFVar47->_padding_ * 2 | (uint)local_347;
    pFVar47 = (FSceneCulling *)((longlong)&pFVar47->_padding_ + 4);
    this = pFVar58;
  } while( true );
}

// ProcessPreSceneUpdate @ 1454b29f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSceneCullingBuilder::ProcessPreSceneUpdate
          (FSceneCullingBuilder *this,FScenePreUpdateChangeSet *param_1)

{
  TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTVar1;
  uint *puVar2;
  FSceneCulling *pFVar3;
  FPrimitiveSceneInfo *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  pFVar3 = this->SceneCulling;
  if ((pFVar3->bForceFullExplictBoundsBuild == false) &&
     (*(longlong *)&(pFVar3->ExplicitChunkBoundsBuffer).field_0x18 != 0)) {
    this->ExplicitBoundsMode = Incremental;
    pTVar1 = &this->DirtyCellBoundsMaskStatic;
    iVar8 = (pFVar3->CellHeaders).ArrayNum;
    (this->DirtyCellBoundsMaskStatic).NumBits = iVar8;
    uVar7 = iVar8 + 0x1f;
    uVar10 = uVar7 >> 5;
    if (uVar7 >> 5 != 0) {
      if ((this->DirtyCellBoundsMaskStatic).MaxBits + 0x1fU >> 5 < uVar10) {
        TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>
        ::ResizeAllocation(&pTVar1->AllocatorInstance,0,uVar10,4);
        (this->DirtyCellBoundsMaskStatic).MaxBits = uVar10 << 5;
      }
      memset((pTVar1->AllocatorInstance).Data,0,(ulonglong)uVar10 << 2);
      iVar8 = (this->DirtyCellBoundsMaskStatic).NumBits;
      uVar10 = iVar8 >> 0x1f & 0x1f;
      uVar7 = iVar8 + uVar10;
      iVar8 = (uVar7 & 0x1f) - uVar10;
      if (iVar8 != 0) {
        puVar2 = (pTVar1->AllocatorInstance).Data + ((int)uVar7 >> 5);
        *puVar2 = *puVar2 & 0xffffffffU >> (-(char)iVar8 & 0x1fU);
      }
    }
    pTVar1 = &this->DirtyCellBoundsMaskDynamic;
    iVar8 = (this->SceneCulling->CellHeaders).ArrayNum;
    (this->DirtyCellBoundsMaskDynamic).NumBits = iVar8;
    uVar7 = iVar8 + 0x1f;
    uVar10 = uVar7 >> 5;
    if (uVar7 >> 5 != 0) {
      if ((this->DirtyCellBoundsMaskDynamic).MaxBits + 0x1fU >> 5 < uVar10) {
        TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>
        ::ResizeAllocation(&pTVar1->AllocatorInstance,0,uVar10,4);
        (this->DirtyCellBoundsMaskDynamic).MaxBits = uVar10 << 5;
      }
      memset((pTVar1->AllocatorInstance).Data,0,(ulonglong)uVar10 << 2);
      iVar8 = (this->DirtyCellBoundsMaskDynamic).NumBits;
      uVar10 = iVar8 >> 0x1f & 0x1f;
      uVar7 = iVar8 + uVar10;
      iVar8 = (uVar7 & 0x1f) - uVar10;
      if (iVar8 != 0) {
        puVar2 = (pTVar1->AllocatorInstance).Data + ((int)uVar7 >> 5);
        *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar8 & 0x1f);
      }
    }
  }
  else {
    this->ExplicitBoundsMode = Full;
  }
  uVar7 = (this->SceneCulling->CellHeaders).ArrayNum;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  uVar11 = 0;
  (this->DirtyCellBoundsIndices).ArrayNum = 0;
  if ((this->DirtyCellBoundsIndices).ArrayMax < (int)uVar7) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
              (4,4,uVar7,&(this->DirtyCellBoundsIndices).AllocatorInstance,0,
               &(this->DirtyCellBoundsIndices).ArrayMax);
  }
  lVar9 = 0x318;
  if ((this->SceneCulling->CellChunkIdAllocator).bGrowOnly == false) {
    lVar9 = 0x314;
  }
  uVar7 = *(uint *)((longlong)(this->SceneCulling->SpatialHash).RecCellSizes + lVar9 + -0x70);
  if (-1 < (int)uVar7) {
    (this->DirtyChunkBoundsData).ArrayNum = 0;
    if ((this->DirtyChunkBoundsData).ArrayMax < (int)uVar7) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::Math::TIntVector2<int>_>_>
                (8,4,uVar7,&(this->DirtyChunkBoundsData).AllocatorInstance,0,
                 &(this->DirtyChunkBoundsData).ArrayMax);
    }
    uVar12 = uVar11;
    uVar13 = uVar11;
    if (0 < (param_1->RemovedPrimitiveIds).ArrayNum) {
      do {
        uVar10 = (uint)uVar11;
        uVar7 = 0;
        if ((int)uVar10 < (param_1->RemovedPrimitiveSceneInfos).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = *(FPrimitiveSceneInfo **)
                  (uVar13 + (longlong)(param_1->RemovedPrimitiveSceneInfos).DataPtr);
        uVar7 = 0;
        if ((int)uVar10 < (param_1->RemovedPrimitiveIds).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        MarkInstancesForRemoval
                  (this,(FPersistentPrimitiveIndex)
                        *(int *)((longlong)&((param_1->RemovedPrimitiveIds).DataPtr)->Index + uVar12
                                ),pFVar4);
        uVar11 = (ulonglong)(uVar10 + 1);
        uVar12 = uVar12 + 4;
        uVar13 = uVar13 + 8;
      } while ((int)(uVar10 + 1) < (param_1->RemovedPrimitiveIds).ArrayNum);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
}

// PublishStats @ 1454b3ba0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSceneCullingBuilder::PublishStats(FSceneCullingBuilder *this)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_SceneCulling_RangeCount> FVar3;
  FThreadStats *pFVar4;
  FThreadStatsPool *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_SceneCulling_CompRangeCount> FVar6;
  FThreadSafeStaticStat<FStat_STAT_SceneCulling_CopiedIdCount> FVar7;
  FThreadSafeStaticStat<FStat_STAT_SceneCulling_VisitedIdCount> FVar8;
  uchar auVar9 [8];
  FName local_res8;
  FStatMessage local_38;
  
  auVar9 = (uchar  [8])(longlong)(this->Stats).RangeCount;
  if ((auVar9 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable)) {
    FVar3 = StatPtr_STAT_SceneCulling_RangeCount;
    if (StatPtr_STAT_SceneCulling_RangeCount ==
        (FThreadSafeStaticStat<FStat_STAT_SceneCulling_RangeCount>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_SceneCulling_RangeCount");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_SceneCulling_RangeCount>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_RangeCount,*pFVar2,
                         L"Ranges Added","STATGROUP_SceneCulling","STATCAT_Advanced",L"SceneCulling"
                         ,true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar3;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar9;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar9);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar9 = (uchar  [8])(longlong)(this->Stats).CompRangeCount;
  if ((auVar9 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar6 = StatPtr_STAT_SceneCulling_CompRangeCount;
    if (StatPtr_STAT_SceneCulling_CompRangeCount ==
        (FThreadSafeStaticStat<FStat_STAT_SceneCulling_CompRangeCount>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_SceneCulling_CompRangeCount");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_SceneCulling_CompRangeCount>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_CompRangeCount,
                         *pFVar2,L"Num Comp. Ranges","STATGROUP_SceneCulling","STATCAT_Advanced",
                         L"SceneCulling",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar6;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar9;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar9);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar9 = (uchar  [8])(longlong)(this->Stats).CopiedIdCount;
  if ((auVar9 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar7 = StatPtr_STAT_SceneCulling_CopiedIdCount;
    if (StatPtr_STAT_SceneCulling_CopiedIdCount ==
        (FThreadSafeStaticStat<FStat_STAT_SceneCulling_CopiedIdCount>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_SceneCulling_CopiedIdCount");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_SceneCulling_CopiedIdCount>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_CopiedIdCount,
                         *pFVar2,L"Update Copied Id Count","STATGROUP_SceneCulling",
                         "STATCAT_Advanced",L"SceneCulling",true,true,ST_int64,false,false,
                         MCR_Invalid);
    }
    FVar1 = *(FName *)FVar7;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar9;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar9);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  auVar9 = (uchar  [8])(longlong)(this->Stats).VisitedIdCount;
  if ((auVar9 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar8 = StatPtr_STAT_SceneCulling_VisitedIdCount;
    if (StatPtr_STAT_SceneCulling_VisitedIdCount ==
        (FThreadSafeStaticStat<FStat_STAT_SceneCulling_VisitedIdCount>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_SceneCulling_VisitedIdCount");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_SceneCulling_VisitedIdCount>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_VisitedIdCount,
                         *pFVar2,L"Update Visited Id Count","STATGROUP_SceneCulling",
                         "STATCAT_Advanced",L"SceneCulling",true,true,ST_int64,false,false,
                         MCR_Invalid);
    }
    FVar1 = *(FName *)FVar8;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar9;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar9);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  (this->Stats).RangeCount = 0;
  (this->Stats).CompRangeCount = 0;
  (this->Stats).CopiedIdCount = 0;
  (this->Stats).VisitedIdCount = 0;
  if (`public:_void___cdecl_FSceneCullingBuilder::PublishStats(void)___ptr64'::__l31::
      __CsvProfilerStat2195 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumUpdatedInstances",_GCsvCategory_SceneCulling.Index);
    `public:_void___cdecl_FSceneCullingBuilder::PublishStats(void)___ptr64'::__l31::
    __CsvProfilerStat2195 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumUpdatedInstances",_GCsvCategory_SceneCulling.Index,this->TotalUpdatedInstances,
             Accumulate);
  if (`public:_void___cdecl_FSceneCullingBuilder::PublishStats(void)___ptr64'::__l35::
      __CsvProfilerStat2196 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumAddedInstances",_GCsvCategory_SceneCulling.Index);
    `public:_void___cdecl_FSceneCullingBuilder::PublishStats(void)___ptr64'::__l35::
    __CsvProfilerStat2196 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumAddedInstances",_GCsvCategory_SceneCulling.Index,this->TotalAddedInstances,
             Accumulate);
  if (`public:_void___cdecl_FSceneCullingBuilder::PublishStats(void)___ptr64'::__l39::
      __CsvProfilerStat2197 == false) {
    FCsvProfilerTrace::OutputInlineStat("NumRemovedInstances",_GCsvCategory_SceneCulling.Index);
    `public:_void___cdecl_FSceneCullingBuilder::PublishStats(void)___ptr64'::__l39::
    __CsvProfilerStat2197 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumRemovedInstances",_GCsvCategory_SceneCulling.Index,this->TotalRemovedInstances,
             Accumulate);
  FSceneCulling::PublishStats(this->SceneCulling);
  return;
}

// RemovePrecomputed @ 1454b5ac0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FSceneCullingBuilder::RemovePrecomputed(FSceneCullingBuilder *this,FPrimitiveState *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FInstanceSceneDataImmutable *pFVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  TKeyValue<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock>
  *pTVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  char cVar15;
  longlong lVar16;
  char cVar17;
  longlong lVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  char cVar21;
  longlong lVar22;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20;
  int local_68;
  
  if ((param_1->InstanceSceneDataImmutable).Object == (FInstanceSceneDataImmutable *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("PrimitiveState.InstanceSceneDataImmutable",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                        ,0x74c,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((param_1->InstanceSceneDataImmutable).Object == (FInstanceSceneDataImmutable *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (param_1->InstanceSceneDataImmutable).Object;
  local_res20 = (pFVar3->CompressedInstanceSpatialHashes).ArrayNum;
  uVar14 = (ulonglong)(int)local_res20;
  pFVar20 = (pFVar3->CompressedInstanceSpatialHashes).AllocatorInstance.Data;
  pFVar1 = pFVar20 + uVar14 * 0x28;
  while( true ) {
    if ((pFVar3->CompressedInstanceSpatialHashes).ArrayNum != (int)uVar14) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FInstanceSceneDataBuffers::FCompressedSpatialHashItem_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar20 == pFVar1) break;
    lVar5 = *(longlong *)pFVar20;
    lVar6 = *(longlong *)(pFVar20 + 8);
    iVar13 = this->CachedCellIdIndex;
    lVar2 = *(longlong *)(pFVar20 + 0x20);
    lVar7 = *(longlong *)(pFVar20 + 0x10);
    lVar8 = *(longlong *)(pFVar20 + 0x18);
    if ((((iVar13 == -1) || ((this->CachedCellLoc).Level != *(int *)(pFVar20 + 0x18))) ||
        ((this->CachedCellLoc).Coord.field0_0x0._s_0.X != lVar5)) ||
       (((this->CachedCellLoc).Coord.field0_0x0._s_0.Y != *(longlong *)(pFVar20 + 8) ||
        ((this->CachedCellLoc).Coord.field0_0x0._s_0.Z != lVar7)))) {
      iVar13 = (int)(lVar7 >> 3);
      iVar12 = (int)(lVar5 >> 3);
      iVar19 = (int)(*(longlong *)(pFVar20 + 8) >> 3);
      Experimental::RobinHoodHashTable_Private::
      TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
      ::FindIdByHash((TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
                      *)this->SpatialHashMap,(FHashType)(uint)local_res18,
                     (FBlockLocAligned *)
                     (ulonglong)
                     ((*(int *)(pFVar20 + 0x18) + 3) * -0x34a05b27 + iVar13 * -0x338d5bbd +
                      iVar19 * -0x3662f0df + iVar12 * -0x3b71d0b5 & 0x7fffffff));
      uVar9 = local_res18[0];
      if (local_res18[0] == 0xffffffff) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("BlockId.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                            ,0x5a0,L"");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pTVar11 = Experimental::RobinHoodHashTable_Private::
                TRobinHoodHashTable<FSceneCulling::FBlockLocAligned,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FCellBlock,THierarchicalSpatialHashGrid<FSceneCulling::FBlockTraits>::FHasher,TSizedDefaultAllocator<32>_>
                ::FData::Get((FData *)this->SpatialHashMap,uVar9);
      lVar18 = lVar5 + (longlong)iVar12 * -8;
      lVar16 = lVar6 + (longlong)iVar19 * -8;
      lVar22 = lVar7 + (longlong)iVar13 * -8;
      cVar17 = (char)lVar18;
      if (lVar18 != cVar17) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      cVar15 = (char)lVar16;
      if (lVar16 != cVar15) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      cVar21 = (char)lVar22;
      if (lVar22 != cVar21) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
        if (bVar10) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar13 = *(int *)&(pTVar11->Pair).field_0x18;
      (this->CachedCellLoc).Coord.field0_0x0._s_0.X = lVar5;
      (this->CachedCellLoc).Coord.field0_0x0._s_0.Y = lVar6;
      iVar13 = iVar13 + ((int)cVar15 + cVar21 * 8) * 8 + (int)cVar17;
      this->CachedCellIdIndex = iVar13;
      (this->CachedCellLoc).Coord.field0_0x0._s_0.Z = lVar7;
      *(longlong *)&(this->CachedCellLoc).Level = lVar8;
    }
    local_68 = (int)lVar2;
    MarkCellForRemove(this,iVar13,local_68,Static);
    uVar14 = (ulonglong)local_res20;
    pFVar20 = pFVar20 + 0x28;
  }
  return;
}

// UploadToGPU @ 1454c1c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FSceneCullingBuilder::UploadToGPU
          (FSceneCullingBuilder *this,FRDGBuilder *param_1,FSceneUniformBuffer *param_2)

{
  longlong *plVar1;
  int *piVar2;
  TPersistentBuffer<UE::HLSL::FPackedChunkAttributes,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
  *this_00;
  uint *puVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  char cVar7;
  EUniformBufferBindingFlags EVar8;
  FUploadData *pFVar9;
  FUploadData *pFVar10;
  FUploadData *pFVar11;
  FUploadData *pFVar12;
  FSceneCulling *pFVar13;
  FRDGPooledBuffer *pFVar14;
  FRDGPooledBuffer *pFVar15;
  code *pcVar16;
  TConsoleVariableData<int> *pTVar17;
  bool bVar18;
  EShaderPlatform EVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_SceneCulling_UploadedChunks> FVar24;
  FThreadStats *pFVar25;
  FThreadStatsPool *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_SceneCulling_UploadedCells> FVar27;
  FThreadSafeStaticStat<FStat_STAT_SceneCulling_UploadedItems> FVar28;
  FThreadSafeStaticStat<FStat_STAT_SceneCulling_UploadedBlocks> FVar29;
  FRDGBuffer *pFVar30;
  TRefCountPtr<FRDGPooledBuffer> *pTVar31;
  FRDGScope *this_01;
  longlong lVar32;
  undefined8 *puVar33;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar34;
  FShaderParametersMetadata *pFVar35;
  FRDGBufferSRV *pFVar36;
  FRDGBufferUAV *pFVar37;
  FGlobalShaderMap *this_02;
  FGlobalShaderType *pFVar38;
  FShaderType *pFVar39;
  FName FVar40;
  TIntVector3<int> *pTVar41;
  FRDGEventName *pFVar42;
  byte bVar43;
  ForElementType<unsigned_int> FVar44;
  FRHIGPUMask FVar45;
  longlong lVar46;
  FScriptContainerElement *pFVar47;
  uint uVar48;
  uint uVar49;
  FNameEntryId FVar50;
  undefined1 auStackY_4a8 [32];
  undefined1 local_448;
  undefined1 local_447 [7];
  uint local_440;
  uint uStack_43c;
  uint local_438;
  undefined8 *local_430;
  FRDGBuffer *local_428;
  FRDGBufferUAVDesc local_420;
  FRDGBufferUAVDesc local_410;
  TRDGUniformBuffer<FSceneUniformParameters> *local_3f8;
  EUniformBufferBindingFlags EStack_3f0;
  undefined7 uStack_3ef;
  FName local_3e8;
  FName local_3e0;
  FRDGBuffer *local_3d8;
  FRDGBuffer *local_3d0;
  FRDGBuffer *local_3c8;
  FRDGBuffer *local_3c0;
  FRDGBuffer *local_3b8;
  <lambda_2> local_3b0;
  <lambda_4> local_3a8;
  <lambda_5> local_3a0;
  FRHIComputeCommandList *local_398;
  TRDGEventScopeGuard<FRDGScope_RHI> local_390;
  char local_380;
  undefined4 local_378;
  uint uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_368;
  FStatMessage local_360;
  TIntVector3<int>_u_0 local_348;
  FStatMessage local_338;
  FName local_328;
  FName local_320;
  FStatMessage local_318;
  FStatMessage local_308;
  FRDGBufferSRVDesc local_2f8;
  FRDGBufferSRVDesc local_2d8;
  FRDGBufferSRVDesc local_2b8;
  FRDGBufferSRVDesc local_298;
  FRDGBufferSRVDesc local_278;
  FScatterInfo local_258;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_248;
  FCellBlockData *local_238;
  int iStack_230;
  undefined4 uStack_22c;
  FPackedCellHeader *local_228;
  int iStack_220;
  undefined4 uStack_21c;
  FScriptContainerElement *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  FScriptContainerElement *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  FScatterInfo local_1f8;
  FScatterInfo local_1e8;
  FString local_1d8;
  TShaderRefBase<FComputeExplicitChunkBounds_CS,FShaderMapPointerTable> local_1c8;
  TArrayView<UE::HLSL::FCellBlockData_const_,int> local_1b8;
  TArrayView<unsigned_int_const_,int> local_1a8;
  TArrayView<UE::HLSL::FPackedCellHeader_const_,int> local_198;
  FName local_188;
  FName local_180;
  FName local_178;
  FRDGBufferDesc local_170;
  TArrayView<unsigned_int_const_,int> local_158;
  FName local_148;
  undefined1 local_140 [8];
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<40>_const_*,std::tuple<>_> local_138;
  uint uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  FRDGEventName local_108;
  TIntVector3<int> local_f0;
  FScatterInfo local_e0;
  FScopedCapture local_d0;
  ForElementType<unsigned_int> local_98;
  undefined8 local_80;
  <lambda_3> local_78;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  local_3f8 = (TRDGUniformBuffer<FSceneUniformParameters> *)param_2;
  EVar19 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->SceneCulling->_padding_);
  bVar18 = UseNanite(EVar19,true,true);
  if (bVar18) {
    pFVar9 = (this->CellHeaderUploader).UploadDataProxy;
    if (pFVar9 == (FUploadData *)0x0) {
      iVar20 = (this->CellHeaderUploader).UploadData.ScatterOffsets.ArrayNum;
    }
    else {
      iVar20 = (pFVar9->ScatterOffsets).ArrayNum;
    }
    if ((iVar20 < 1) ||
       (iVar20 = GCaptureNextSceneCullingUpdate + -1, bVar18 = GCaptureNextSceneCullingUpdate != 0,
       GCaptureNextSceneCullingUpdate = iVar20, bVar18)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    RenderCaptureInterface::FScopedCapture::FScopedCapture
              (&local_d0,bVar18,param_1,L"SceneCulling.UploadToGPU",(wchar_t *)0x0);
    if (GCaptureNextSceneCullingUpdate < -1) {
      GCaptureNextSceneCullingUpdate = -1;
    }
    pFVar10 = (this->ItemChunkUploader).UploadDataProxy;
    if (pFVar10 == (FUploadData *)0x0) {
      iVar20 = (this->ItemChunkUploader).UploadData.ScatterOffsets.ArrayNum;
    }
    else {
      iVar20 = (pFVar10->ScatterOffsets).ArrayNum;
    }
    if ((iVar20 != 0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar24 = StatPtr_STAT_SceneCulling_UploadedChunks;
      if (StatPtr_STAT_SceneCulling_UploadedChunks ==
          (FThreadSafeStaticStat<FStat_STAT_SceneCulling_UploadedChunks>)0x0) {
        pFVar23 = ::FName::FName(&local_148,"STAT_SceneCulling_UploadedChunks");
        FVar24 = (FThreadSafeStaticStat<FStat_STAT_SceneCulling_UploadedChunks>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_UploadedChunks,
                            *pFVar23,L"Update Uploaded Chunks","STATGROUP_SceneCulling",
                            "STATCAT_Advanced",L"SceneCulling",true,true,ST_int64,false,false,
                            MCR_Invalid);
      }
      FVar40 = *(FName *)FVar24;
      FVar50 = FVar40.ComparisonIndex.Value;
      uVar49 = FVar40.Number;
      local_440 = FVar50.Value;
      uStack_43c = uVar49;
      if (((FVar40 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar25 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar25 == (FThreadStats *)0x0) {
          pFVar26 = FThreadStatsPool::Get();
          pFVar25 = FThreadStatsPool::GetFromPool(pFVar26);
        }
        local_318.NameAndInfo.Number = uVar49 & 0xffffafff | 0xa000;
        local_328 = FVar40;
        local_318.StatData.Pad = (uchar  [8])(longlong)iVar20;
        local_318.NameAndInfo.Index.Value = FVar50.Value;
        FThreadStats::AddStatMessage(pFVar25,&local_318);
        FStatsTrace::Add(&local_328,(longlong)iVar20);
        if (pFVar25->ScopeCount == 0) {
          FThreadStats::Flush(pFVar25,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar25,false,false);
        }
      }
    }
    pFVar9 = (this->CellHeaderUploader).UploadDataProxy;
    if (pFVar9 == (FUploadData *)0x0) {
      iVar20 = (this->CellHeaderUploader).UploadData.ScatterOffsets.ArrayNum;
    }
    else {
      iVar20 = (pFVar9->ScatterOffsets).ArrayNum;
    }
    if ((iVar20 != 0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar27 = StatPtr_STAT_SceneCulling_UploadedCells;
      if (StatPtr_STAT_SceneCulling_UploadedCells ==
          (FThreadSafeStaticStat<FStat_STAT_SceneCulling_UploadedCells>)0x0) {
        pFVar23 = ::FName::FName(&local_178,"STAT_SceneCulling_UploadedCells");
        FVar27 = (FThreadSafeStaticStat<FStat_STAT_SceneCulling_UploadedCells>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_UploadedCells,
                            *pFVar23,L"Update Uploaded Cells","STATGROUP_SceneCulling",
                            "STATCAT_Advanced",L"SceneCulling",true,true,ST_int64,false,false,
                            MCR_Invalid);
      }
      FVar40 = *(FName *)FVar27;
      FVar50 = FVar40.ComparisonIndex.Value;
      uVar49 = FVar40.Number;
      local_440 = FVar50.Value;
      uStack_43c = uVar49;
      if (((FVar40 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar25 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar25 == (FThreadStats *)0x0) {
          pFVar26 = FThreadStatsPool::Get();
          pFVar25 = FThreadStatsPool::GetFromPool(pFVar26);
        }
        local_308.NameAndInfo.Number = uVar49 & 0xffffafff | 0xa000;
        local_320 = FVar40;
        local_308.StatData.Pad = (uchar  [8])(longlong)iVar20;
        local_308.NameAndInfo.Index.Value = FVar50.Value;
        FThreadStats::AddStatMessage(pFVar25,&local_308);
        FStatsTrace::Add(&local_320,(longlong)iVar20);
        if (pFVar25->ScopeCount == 0) {
          FThreadStats::Flush(pFVar25,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar25,false,false);
        }
      }
    }
    pFVar11 = (this->ItemChunkDataUploader).UploadDataProxy;
    if (pFVar11 == (FUploadData *)0x0) {
      iVar20 = (this->ItemChunkDataUploader).UploadData.ScatterOffsets.ArrayNum;
    }
    else {
      iVar20 = (pFVar11->ScatterOffsets).ArrayNum;
    }
    if ((iVar20 != 0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar28 = StatPtr_STAT_SceneCulling_UploadedItems;
      if (StatPtr_STAT_SceneCulling_UploadedItems ==
          (FThreadSafeStaticStat<FStat_STAT_SceneCulling_UploadedItems>)0x0) {
        pFVar23 = ::FName::FName(&local_180,"STAT_SceneCulling_UploadedItems");
        FVar28 = (FThreadSafeStaticStat<FStat_STAT_SceneCulling_UploadedItems>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_UploadedItems,
                            *pFVar23,L"Update Uploaded Items","STATGROUP_SceneCulling",
                            "STATCAT_Advanced",L"SceneCulling",true,true,ST_int64,false,false,
                            MCR_Invalid);
      }
      FVar40 = *(FName *)FVar28;
      FVar50 = FVar40.ComparisonIndex.Value;
      uVar49 = FVar40.Number;
      local_440 = FVar50.Value;
      uStack_43c = uVar49;
      if (((FVar40 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar25 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar25 == (FThreadStats *)0x0) {
          pFVar26 = FThreadStatsPool::Get();
          pFVar25 = FThreadStatsPool::GetFromPool(pFVar26);
        }
        local_360.NameAndInfo.Number = uVar49 & 0xffffafff | 0xa000;
        local_3e8 = FVar40;
        local_360.StatData.Pad = (uchar  [8])(longlong)iVar20;
        local_360.NameAndInfo.Index.Value = FVar50.Value;
        FThreadStats::AddStatMessage(pFVar25,&local_360);
        FStatsTrace::Add(&local_3e8,(longlong)iVar20);
        if (pFVar25->ScopeCount == 0) {
          FThreadStats::Flush(pFVar25,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar25,false,false);
        }
      }
    }
    pFVar12 = (this->BlockDataUploader).UploadDataProxy;
    if (pFVar12 == (FUploadData *)0x0) {
      iVar20 = (this->BlockDataUploader).UploadData.ScatterOffsets.ArrayNum;
    }
    else {
      iVar20 = (pFVar12->ScatterOffsets).ArrayNum;
    }
    if ((iVar20 != 0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar29 = StatPtr_STAT_SceneCulling_UploadedBlocks;
      if (StatPtr_STAT_SceneCulling_UploadedBlocks ==
          (FThreadSafeStaticStat<FStat_STAT_SceneCulling_UploadedBlocks>)0x0) {
        pFVar23 = ::FName::FName(&local_188,"STAT_SceneCulling_UploadedBlocks");
        FVar29 = (FThreadSafeStaticStat<FStat_STAT_SceneCulling_UploadedBlocks>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SceneCulling_UploadedBlocks,
                            *pFVar23,L"Update Uploaded Blocks","STATGROUP_SceneCulling",
                            "STATCAT_Advanced",L"SceneCulling",true,true,ST_int64,false,false,
                            MCR_Invalid);
      }
      FVar40 = *(FName *)FVar29;
      FVar50 = FVar40.ComparisonIndex.Value;
      uVar49 = FVar40.Number;
      local_440 = FVar50.Value;
      uStack_43c = uVar49;
      if (((FVar40 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar25 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar25 == (FThreadStats *)0x0) {
          pFVar26 = FThreadStatsPool::Get();
          pFVar25 = FThreadStatsPool::GetFromPool(pFVar26);
        }
        local_338.NameAndInfo.Number = uVar49 & 0xffffafff | 0xa000;
        local_3e0 = FVar40;
        local_338.StatData.Pad = (uchar  [8])(longlong)iVar20;
        local_338.NameAndInfo.Index.Value = FVar50.Value;
        FThreadStats::AddStatMessage(pFVar25,&local_338);
        FStatsTrace::Add(&local_3e0,(longlong)iVar20);
        if (pFVar25->ScopeCount == 0) {
          FThreadStats::Flush(pFVar25,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar25,false,false);
        }
      }
    }
    local_398 = (FRHIComputeCommandList *)param_1->_padding_;
    FVar45.GPUMask = *(uint *)&local_398->field_0x29c;
    local_438 = FVar45.GPUMask;
    FRHIComputeCommandList::SetGPUMask
              (local_398,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
    local_1f8.ScatterOffsetsRDG = (FRDGBuffer *)0x0;
    local_1f8.NumScatters = 0;
    local_3d8 = UE::RendererPrivateUtils::Implementation::
                TBufferScatterUploader<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
                ::ResizeAndUploadTo(&this->BlockDataUploader,param_1,
                                    &this->SceneCulling->CellBlockDataBuffer,
                                    (this->SceneCulling->CellBlockData).ArrayNum,&local_1f8);
    local_3d0 = UE::RendererPrivateUtils::Implementation::
                TBufferScatterUploader<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
                ::ResizeAndUploadTo(&this->CellHeaderUploader,param_1,
                                    &this->SceneCulling->CellHeadersBuffer,
                                    (this->SceneCulling->CellHeaders).ArrayNum,&local_e0);
    local_1e8.ScatterOffsetsRDG = (FRDGBuffer *)0x0;
    local_1e8.NumScatters = 0;
    local_3c8 = UE::RendererPrivateUtils::Implementation::
                TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,64>
                ::ResizeAndUploadTo(&this->ItemChunkDataUploader,param_1,
                                    &this->SceneCulling->InstanceIdsBuffer,
                                    (this->SceneCulling->PackedCellData).ArrayNum,&local_1e8);
    local_258.ScatterOffsetsRDG = (FRDGBuffer *)0x0;
    local_258.NumScatters = 0;
    local_3c0 = UE::RendererPrivateUtils::Implementation::
                TBufferScatterUploader<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits,1>
                ::ResizeAndUploadTo(&this->ItemChunkUploader,param_1,
                                    &this->SceneCulling->ItemChunksBuffer,
                                    (this->SceneCulling->PackedCellChunkData).ArrayNum,&local_258);
    pFVar13 = this->SceneCulling;
    iVar21 = (pFVar13->UsedChunkIdMask).NumBits;
    FVar44 = (pFVar13->UsedChunkIdMask).AllocatorInstance.SecondaryData;
    iVar20 = iVar21 + 0x1f;
    iVar21 = iVar21 + 7;
    uVar49 = (int)((iVar20 >> 0x1f & 0x1fU) + iVar20) >> 5;
    if (FVar44 == (ForElementType<unsigned_int>)0x0) {
      FVar44 = (ForElementType<unsigned_int>)&pFVar13->UsedChunkIdMask;
    }
    if ((int)uVar49 < 1) {
      uVar49 = 1;
    }
    pFVar30 = CreateStructuredBuffer
                        (param_1,L"SceneCulling.UsedChunkIdMask",4,uVar49,(void *)FVar44,
                         (longlong)((int)(iVar21 + (iVar21 >> 0x1f & 7U)) >> 3),None);
    pTVar31 = FRDGBuilder::ConvertToExternalBuffer(param_1,pFVar30);
    pFVar14 = pTVar31->Reference;
    pFVar15 = (this->SceneCulling->UsedChunkIdMaskBuffer).Reference;
    if (pFVar15 != pFVar14) {
      (this->SceneCulling->UsedChunkIdMaskBuffer).Reference = pFVar14;
      if (pFVar14 != (FRDGPooledBuffer *)0x0) {
        LOCK();
        *(int *)&pFVar14->_padding_ = (int)pFVar14->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar15 != (FRDGPooledBuffer *)0x0) {
        plVar1 = &pFVar15->_padding_;
        LOCK();
        lVar32 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar32 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar15->_padding_)(pFVar15,1);
        }
      }
    }
    cVar7 = *(char *)((longlong)&param_1->_padding_ + 6);
    local_380 = '\0';
    if ((cVar7 != '\0') && ((cVar7 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder&___ptr64,FSceneUniformBuffer&___ptr64)___ptr64'::`39'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder&___ptr64,FSceneUniformBuffer&___ptr64)___ptr64'::`39'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder&___ptr64,FSceneUniformBuffer&___ptr64)___ptr64'::`39'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        local_118 = 0;
        uStack_114 = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder&___ptr64,FSceneUniformBuffer&___ptr64)___ptr64'::`39'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._12_8_ = ZEXT48(uStack_11c);
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder&___ptr64,FSceneUniformBuffer&___ptr64)___ptr64'::`39'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._4_4_ = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder&___ptr64,FSceneUniformBuffer&___ptr64)___ptr64'::`39'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_SceneCulling_Co;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder&___ptr64,FSceneUniformBuffer&___ptr64)___ptr64'::`39'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_SceneCulling_Co;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder&___ptr64,FSceneUniformBuffer&___ptr64)___ptr64'::`39'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder&___ptr64,FSceneUniformBuffer&___ptr64)___ptr64'::`39'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._0_4_ = 0x8c5;
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)
                   &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder&___ptr64,FSceneUniformBuffer&___ptr64)___ptr64'::`39'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                    ::__l2::Desc.Cs,4000);
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder&___ptr64,FSceneUniformBuffer&___ptr64)___ptr64'::`39'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder&___ptr64,FSceneUniformBuffer&___ptr64)___ptr64'::`39'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceGpuSpecId = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder&___ptr64,FSceneUniformBuffer&___ptr64)___ptr64'::`39'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FSceneCullingBuilder::UploadToGPU'::__l39::Desc::operator()<>'::__l3::<lambda_1>::
               operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder&___ptr64,FSceneUniformBuffer&___ptr64)___ptr64'::`39'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_138._Myfirst._Val =
           &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FSceneCullingBuilder::UploadToGPU(FRDGBuilder&___ptr64,FSceneUniformBuffer&___ptr64)___ptr64'::`39'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
            ::__l2::Desc;
      local_390.State = (FRDGScopeState *)param_1;
      this_01 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)this_01;
      local_390.Scope = this_01;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<40>_const_*,std::tuple<>_>_>
                (&(this_01->Impl).Impl,(FRDGScopeState *)param_1,&local_138);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this_01,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(this_01,(FRHIComputeCommandList *)param_1->_padding_);
      }
      local_380 = '\x01';
    }
    if ((this->ExplicitBoundsMode == Disabled) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("ExplicitBoundsMode != EExplicitBoundsUpdateMode::Disabled",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCulling.cpp"
                            ,0x8c6,L""), bVar18)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    pFVar13 = this->SceneCulling;
    lVar46 = 0x318;
    lVar32 = 0x318;
    this_00 = &pFVar13->ExplicitChunkBoundsBuffer;
    if ((pFVar13->CellChunkIdAllocator).bGrowOnly == false) {
      lVar32 = 0x314;
    }
    iVar20 = *(int *)((longlong)(pFVar13->SpatialHash).RecCellSizes + lVar32 + -0x70);
    if ((pFVar13->ExplicitChunkBoundsBuffer).field_0x10 != '\0') {
      iVar21 = 1;
      if (iVar20 != 0) {
        iVar21 = iVar20;
      }
      uVar5 = (ulonglong)(iVar21 - 1) * 2 + 1;
      lVar32 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      local_440 = (uint)lVar32;
      iVar20 = 1 << ((byte)lVar32 & 0x1f);
    }
    if (iVar20 < *(int *)&this_00->field_0x0) {
      iVar20 = *(int *)&this_00->field_0x0;
    }
    if (((iVar20 * 0x14 & 0xfU) != 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(NumBytes & 15) == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                            ,0xb2,L""), bVar18)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    uStack_374 = iVar20 * 5 & 0x3fffffff;
    uStack_370 = 0x10119;
    local_378 = 4;
    local_170._0_8_ = CONCAT44(iVar20 * 5,4) & 0x3fffffffffffffff;
    local_170._12_4_ = uStack_36c;
    local_170.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
    local_368 = 0;
    local_170.Metadata = (FShaderParametersMetadata *)0x0;
    local_3b8 = UE::RendererPrivateUtils::Implementation::FPersistentBuffer::ResizeBufferIfNeeded
                          ((FPersistentBuffer *)this_00,param_1,&local_170);
    pFVar13 = this->SceneCulling;
    if ((pFVar13->CellChunkIdAllocator).bGrowOnly == false) {
      lVar46 = 0x314;
    }
    local_428 = UE::RendererPrivateUtils::Implementation::
                TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>
                ::ResizeBufferIfNeeded
                          (&pFVar13->ExplicitChunkCellIdsBuffer,param_1,
                           *(int *)((longlong)(pFVar13->SpatialHash).RecCellSizes + lVar46 + -0x70))
    ;
    if ((this->DirtyChunkBoundsData).ArrayNum != 0) {
      puVar33 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x70,0x10);
      if (puVar33 == (undefined8 *)0x0) {
        puVar33 = (undefined8 *)0x0;
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                            ,0x61,L"");
        if (bVar18) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
      }
      else {
        *(undefined1 *)(puVar33 + 3) = 1;
        *puVar33 = &___7__TObject_VFParameters_FComputeExplicitChunkBounds_CS___FRDGAllocator__6B_;
        puVar33[2] = 0;
        puVar33[7] = 0;
        puVar33[8] = 0;
        puVar33[9] = 0;
        puVar33[10] = 0;
        puVar33[0xb] = 0;
        puVar33[0xc] = 0;
        puVar33[0xd] = 0;
      }
      local_430 = puVar33;
      if ((((undefined8 **)param_1->_padding_ <= &local_430) &&
          (&local_430 <
           (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar20 = (int)param_1->_padding_;
      piVar2 = (int *)((longlong)&param_1->_padding_ + 4);
      if (iVar20 == *piVar2) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&param_1->_padding_,piVar2);
      }
      *(int *)&param_1->_padding_ = iVar20 + 1;
      *(undefined8 **)(param_1->_padding_ + (longlong)iVar20 * 8) = local_430;
      pTVar34 = FSceneUniformBuffer::GetBuffer((FSceneUniformBuffer *)local_3f8,param_1);
      pFVar35 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
      local_2f8._padding_._0_4_ = 0xffffffff;
      EVar8 = pFVar35->BindingFlags;
      *(undefined4 *)(puVar33 + 4) = 9;
      *(undefined4 *)((longlong)puVar33 + 0x24) = 3;
      EStack_3f0 = Static;
      if (EVar8 != StaticAndShader) {
        EStack_3f0 = EVar8;
      }
      *(undefined4 *)(puVar33 + 5) = 7;
      *(TRDGUniformBuffer<FSceneUniformParameters> **)&((FParameters *)(puVar33 + 2))->Scene =
           pTVar34;
      puVar33[3] = CONCAT71(uStack_3ef,EStack_3f0);
      local_2f8._padding_._4_4_ = 0;
      local_2f8._padding_ = 0;
      *(int *)((longlong)puVar33 + 0x2c) = (this->SceneCulling->SpatialHash).FirstLevel;
      local_2f8.Buffer = local_3d8;
      local_2f8._padding_._0_1_ = 0;
      if (((local_3d8->Desc).Usage & DrawIndirect) != None) {
        local_2f8._padding_._0_1_ = 0x1c;
      }
      local_3f8 = pTVar34;
      pFVar36 = FRDGBuilder::CreateSRV(param_1,&local_2f8);
      puVar33[7] = pFVar36;
      local_2d8._padding_._0_1_ = 0;
      local_2d8.Buffer = local_3d0;
      local_2d8._padding_._4_4_ = 0;
      local_2d8._padding_._0_4_ = 0xffffffff;
      local_2d8._padding_ = 0;
      if (((local_3d0->Desc).Usage & DrawIndirect) != None) {
        local_2d8._padding_._0_1_ = 0x1c;
      }
      pFVar36 = FRDGBuilder::CreateSRV(param_1,&local_2d8);
      puVar33[8] = pFVar36;
      local_2b8._padding_._0_1_ = 0;
      local_2b8.Buffer = local_3c8;
      local_2b8._padding_._4_4_ = 0;
      local_2b8._padding_._0_4_ = 0xffffffff;
      local_2b8._padding_ = 0;
      if (((local_3c8->Desc).Usage & DrawIndirect) != None) {
        local_2b8._padding_._0_1_ = 0x1c;
      }
      pFVar36 = FRDGBuilder::CreateSRV(param_1,&local_2b8);
      puVar33[10] = pFVar36;
      local_298._padding_._0_1_ = 0;
      local_298._padding_._4_4_ = 0;
      local_298._padding_._0_4_ = 0xffffffff;
      local_298._padding_ = 0;
      local_298.Buffer = local_3c0;
      if (((local_3c0->Desc).Usage & DrawIndirect) != None) {
        local_298._padding_._0_1_ = 0x1c;
      }
      pFVar36 = FRDGBuilder::CreateSRV(param_1,&local_298);
      puVar33[9] = pFVar36;
      iVar20 = (this->DirtyChunkBoundsData).ArrayNum;
      local_278.Buffer =
           CreateStructuredBuffer<UE::Math::TIntVector2<int>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                     (param_1,L"SceneCulling.DirtyChunkBoundsData",&this->DirtyChunkBoundsData);
      local_278._padding_._0_1_ = 0;
      local_278._padding_._4_4_ = 0;
      local_278._padding_ = 0;
      local_278._padding_._0_4_ = 0xffffffff;
      if ((((local_278.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_278._padding_._0_1_ = 0x1c;
      }
      pFVar36 = FRDGBuilder::CreateSRV(param_1,&local_278);
      puVar33[0xb] = pFVar36;
      local_420.Buffer = local_3b8;
      bVar43 = 0;
      local_420._padding_._2_1_ = 0;
      *(int *)(puVar33 + 6) = iVar20;
      if (((local_3b8->Desc).Usage & DrawIndirect) != None) {
        bVar43 = 0x1c;
      }
      local_420._padding_._0_2_ = (ushort)bVar43;
      pFVar37 = FRDGBuilder::CreateUAV(param_1,&local_420,None);
      puVar33[0xc] = pFVar37;
      local_410.Buffer = local_428;
      bVar43 = 0;
      local_410._padding_._2_1_ = 0;
      if (((local_428->Desc).Usage & DrawIndirect) != None) {
        bVar43 = 0x1c;
      }
      local_410._padding_._0_2_ = (ushort)bVar43;
      pFVar37 = FRDGBuilder::CreateUAV(param_1,&local_410,None);
      puVar33[0xd] = pFVar37;
      this_02 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                   [*(int *)(this->SceneCulling->_padding_ + 8)]);
      pFVar38 = FComputeExplicitChunkBounds_CS::GetStaticType();
      if (*(int *)&pFVar38->field_0x50 != 1) {
        local_448 = 0;
        `FGlobalShaderMap::GetShader<FComputeExplicitChunkBounds_CS>'::__l2::<lambda_1>::operator()
                  (&local_448);
      }
      pFVar39 = (FShaderType *)FComputeExplicitChunkBounds_CS::GetStaticType();
      FGlobalShaderMap::GetShader(this_02,&local_248,pFVar39,0);
      if (local_248.ShaderContent == (FShader *)0x0) {
        FVar40 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_140);
        ::FName::ToString((FName *)FVar40,&local_1d8);
        FComputeExplicitChunkBounds_CS::GetStaticType();
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        if (bVar18) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
      }
      FComputeExplicitChunkBounds_CS::GetStaticType();
      local_1c8.ShaderContent = (FComputeExplicitChunkBounds_CS *)local_248.ShaderContent;
      local_1c8.ShaderMap = local_248.ShaderMap;
      pTVar41 = FComputeShaderUtils::GetGroupCountWrapped(&local_f0,iVar20);
      uVar6 = *(undefined8 *)&pTVar41->field0_0x0;
      iVar20 = (pTVar41->field0_0x0)._s_0.Z;
      pFVar42 = FRDGEventName::FRDGEventName(&local_108,1,L"ComputeExplicitChunkBounds");
      pFVar35 = FComputeExplicitChunkBounds_CS::FParameters::FTypeInfo::GetStructMetadata();
      local_348._0_8_ = uVar6;
      local_348._s_0.Z = iVar20;
      FComputeShaderUtils::AddPass<FComputeExplicitChunkBounds_CS>
                (param_1,pFVar42,Compute,&local_1c8,pFVar35,(FParameters *)(puVar33 + 2),
                 (TIntVector3<int> *)&local_348._s_0);
      if (local_108.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_108.FormattedEventName.Data.AllocatorInstance.Data);
      }
    }
    if (local_380 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_390);
    }
    pTVar17 = CVarValidateGPUData.Ref;
    bVar18 = IsInParallelRenderingThread();
    if ((!bVar18) &&
       (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar18)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    if (pTVar17->ShadowedValue[1] != 0) {
      pFVar13 = this->SceneCulling;
      local_238 = (FCellBlockData *)(pFVar13->CellBlockData).AllocatorInstance.Data;
      iVar20 = (pFVar13->CellBlockData).ArrayNum;
      local_3b0.__this = this;
      if ((iVar20 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      local_1b8._12_4_ = uStack_22c;
      local_1b8.ArrayNum = iVar20;
      local_1b8.DataPtr = local_238;
      iStack_230 = iVar20;
      UE::RendererPrivateUtils::Implementation::
      TPersistentBuffer<UE::HLSL::FCellBlockData,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>
      ::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_2>_>
                (&pFVar13->CellBlockDataBuffer,param_1,&local_1b8,&local_3b0);
      uVar49 = (uint)(this->SceneCulling->PackedCellData).ArrayNum >> 6;
      local_98.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_80 = CONCAT44(0x80,uVar49);
      uVar49 = uVar49 + 0x1f;
      uVar48 = uVar49 >> 5;
      if (uVar49 >> 5 != 0) {
        if (4 < uVar48) {
          TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
          ResizeAllocation(&local_98,0,uVar48,4);
          local_80 = CONCAT44(uVar48 << 5,(uint)local_80);
        }
        FVar44 = (ForElementType<unsigned_int>)&local_98;
        if (local_98.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar44 = local_98.SecondaryData;
        }
        memset((void *)FVar44,0,(ulonglong)uVar48 << 2);
        uVar49 = (uint)local_80 & 0x8000001f;
        if ((int)uVar49 < 0) {
          uVar49 = (uVar49 - 1 | 0xffffffe0) + 1;
        }
        if (uVar49 != 0) {
          FVar44 = (ForElementType<unsigned_int>)&local_98;
          if (local_98.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar44 = local_98.SecondaryData;
          }
          puVar3 = (uint *)((longlong)FVar44 +
                           (longlong)
                           ((int)((uint)local_80 + ((int)(uint)local_80 >> 0x1f & 0x1fU)) >> 5) * 4)
          ;
          *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)uVar49 & 0x1f);
        }
      }
      pFVar13 = this->SceneCulling;
      pFVar47 = (pFVar13->FreeChunks).AllocatorInstance.Data;
      iVar20 = (pFVar13->FreeChunks).ArrayNum;
      pFVar4 = pFVar47 + (longlong)iVar20 * 4;
      while( true ) {
        if ((pFVar13->FreeChunks).ArrayNum != iVar20) {
          local_447[0] = 0;
          `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_447);
        }
        FVar45.GPUMask = local_438;
        if (pFVar47 == pFVar4) break;
        iVar21 = *(int *)pFVar47;
        if (((iVar21 < 0) || ((int)(uint)local_80 <= iVar21)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar18)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        FVar44 = (ForElementType<unsigned_int>)&local_98;
        if (local_98.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar44 = local_98.SecondaryData;
        }
        iVar22 = iVar21;
        if (iVar21 < 0) {
          iVar22 = iVar21 + 0x1f;
        }
        puVar3 = (uint *)((longlong)FVar44 + (longlong)(iVar22 >> 5) * 4);
        *puVar3 = *puVar3 | 1 << ((byte)iVar21 & 0x1f);
        pFVar47 = pFVar47 + 4;
      }
      pFVar13 = this->SceneCulling;
      if (local_98.SecondaryData == (ForElementType<unsigned_int>)0x0) {
        local_78.FreeChunkBits.AllocatorInstance.InlineData[0] = local_98.InlineData[0];
        local_78.FreeChunkBits.AllocatorInstance.InlineData[1] = local_98.InlineData[1];
        local_78.FreeChunkBits.AllocatorInstance.InlineData[2] = local_98.InlineData[2];
        local_78.FreeChunkBits.AllocatorInstance.InlineData[3] = local_98.InlineData[3];
        local_78.FreeChunkBits.AllocatorInstance.InlineData[4] = local_98.InlineData[4];
        local_78.FreeChunkBits.AllocatorInstance.InlineData[5] = local_98.InlineData[5];
        local_78.FreeChunkBits.AllocatorInstance.InlineData[6] = local_98.InlineData[6];
        local_78.FreeChunkBits.AllocatorInstance.InlineData[7] = local_98.InlineData[7];
        local_78.FreeChunkBits.AllocatorInstance.InlineData[8] = local_98.InlineData[8];
        local_78.FreeChunkBits.AllocatorInstance.InlineData[9] = local_98.InlineData[9];
        local_78.FreeChunkBits.AllocatorInstance.InlineData[10] = local_98.InlineData[10];
        local_78.FreeChunkBits.AllocatorInstance.InlineData[0xb] = local_98.InlineData[0xb];
        local_78.FreeChunkBits.AllocatorInstance.InlineData[0xc] = local_98.InlineData[0xc];
        local_78.FreeChunkBits.AllocatorInstance.InlineData[0xd] = local_98.InlineData[0xd];
        local_78.FreeChunkBits.AllocatorInstance.InlineData[0xe] = local_98.InlineData[0xe];
        local_78.FreeChunkBits.AllocatorInstance.InlineData[0xf] = local_98.InlineData[0xf];
      }
      local_78.FreeChunkBits.AllocatorInstance.SecondaryData = local_98.SecondaryData;
      local_78.FreeChunkBits.NumBits = (uint)local_80;
      local_78.FreeChunkBits.MaxBits = local_80._4_4_;
      local_80 = 0;
      local_98.SecondaryData = (ForElementType<unsigned_int>)0x0;
      iVar20 = (pFVar13->PackedCellData).ArrayNum;
      local_208 = (pFVar13->PackedCellData).AllocatorInstance.Data;
      local_78.__this = this;
      if ((iVar20 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      local_1a8._12_4_ = uStack_1fc;
      local_1a8.ArrayNum = iVar20;
      local_1a8.DataPtr = (uint *)local_208;
      iStack_200 = iVar20;
      UE::RendererPrivateUtils::Implementation::
      TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>
      ::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_3>_>
                (&pFVar13->InstanceIdsBuffer,param_1,&local_1a8,&local_78);
      if (local_78.FreeChunkBits.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_78.FreeChunkBits.AllocatorInstance.SecondaryData);
      }
      pFVar13 = this->SceneCulling;
      local_228 = (FPackedCellHeader *)(pFVar13->CellHeaders).AllocatorInstance.Data;
      iVar20 = (pFVar13->CellHeaders).ArrayNum;
      local_3a8.__this = this;
      if ((iVar20 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      local_198._12_4_ = uStack_21c;
      local_198.ArrayNum = iVar20;
      local_198.DataPtr = local_228;
      iStack_220 = iVar20;
      UE::RendererPrivateUtils::Implementation::
      TPersistentBuffer<UE::HLSL::FPackedCellHeader,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>
      ::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_4>_>
                (&pFVar13->CellHeadersBuffer,param_1,&local_198,&local_3a8);
      pFVar13 = this->SceneCulling;
      local_218 = (pFVar13->PackedCellChunkData).AllocatorInstance.Data;
      iStack_210 = (pFVar13->PackedCellChunkData).ArrayNum;
      local_3a0.__this = this;
      if ((iStack_210 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar18)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      local_158._12_4_ = uStack_20c;
      local_158.ArrayNum = iStack_210;
      local_158.DataPtr = (uint *)local_218;
      UE::RendererPrivateUtils::Implementation::
      TPersistentBuffer<unsigned_int,UE::RendererPrivateUtils::Implementation::FStructuredBufferTraits>
      ::ValidateGPUData<_FSceneCullingBuilder::UploadToGPU_::__l53::<lambda_5>_>
                (&pFVar13->ItemChunksBuffer,param_1,&local_158,&local_3a0);
      if (local_98.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_98.SecondaryData);
      }
    }
    FRHIComputeCommandList::SetGPUMask(local_398,FVar45);
    RenderCaptureInterface::FScopedCapture::~FScopedCapture(&local_d0);
  }
  return;
}

