// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 24

// FDistanceFieldSceneData @ 14485b710

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FDistanceFieldSceneData * __thiscall
FDistanceFieldSceneData::FDistanceFieldSceneData
          (FDistanceFieldSceneData *this,FDistanceFieldSceneData *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar2;
  TMap<UE::Math::TIntVector3<int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,int,0>_>
  *pTVar3;
  uint uVar4;
  void *pvVar5;
  ForElementType<FSetElementId> FVar6;
  ForElementType<FGrowOnlySpanAllocator::FLinearAllocation> FVar7;
  ForElementType<FTextureLayout3d::FTextureLayoutNode3d> FVar8;
  ForElementType<int> FVar9;
  longlong lVar10;
  
  pTVar1 = &param_1->IndicesToUpdateInObjectBuffersSet;
  this->NumObjectsInBuffer = param_1->NumObjectsInBuffer;
  this->ObjectBuffers = param_1->ObjectBuffers;
  this->HeightFieldObjectBuffers = param_1->HeightFieldObjectBuffers;
  lVar10 = (param_1->UploadHeightFieldDataBuffer)._padding_;
  pTVar2 = &this->IndicesToUpdateInObjectBuffersSet;
  (this->UploadHeightFieldDataBuffer)._padding_ = (param_1->UploadHeightFieldDataBuffer)._padding_;
  (this->UploadHeightFieldDataBuffer)._padding_ = lVar10;
  lVar10 = (param_1->UploadHeightFieldDataBuffer)._padding_;
  (this->UploadHeightFieldDataBuffer)._padding_ = (param_1->UploadHeightFieldDataBuffer)._padding_;
  (this->UploadHeightFieldDataBuffer)._padding_ = lVar10;
  (this->UploadHeightFieldDataBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadHeightFieldDataBuffer).ScatterBuffer.Reference =
       (param_1->UploadHeightFieldDataBuffer).ScatterBuffer.Reference;
  (param_1->UploadHeightFieldDataBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadHeightFieldDataBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadHeightFieldDataBuffer).UploadBuffer.Reference =
       (param_1->UploadHeightFieldDataBuffer).UploadBuffer.Reference;
  (param_1->UploadHeightFieldDataBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadHeightFieldDataBuffer).bFloat4Buffer =
       (param_1->UploadHeightFieldDataBuffer).bFloat4Buffer;
  lVar10 = (param_1->UploadHeightFieldBoundsBuffer)._padding_;
  (this->UploadHeightFieldBoundsBuffer)._padding_ =
       (param_1->UploadHeightFieldBoundsBuffer)._padding_;
  (this->UploadHeightFieldBoundsBuffer)._padding_ = lVar10;
  lVar10 = (param_1->UploadHeightFieldBoundsBuffer)._padding_;
  (this->UploadHeightFieldBoundsBuffer)._padding_ =
       (param_1->UploadHeightFieldBoundsBuffer)._padding_;
  (this->UploadHeightFieldBoundsBuffer)._padding_ = lVar10;
  (this->UploadHeightFieldBoundsBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadHeightFieldBoundsBuffer).ScatterBuffer.Reference =
       (param_1->UploadHeightFieldBoundsBuffer).ScatterBuffer.Reference;
  (param_1->UploadHeightFieldBoundsBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadHeightFieldBoundsBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadHeightFieldBoundsBuffer).UploadBuffer.Reference =
       (param_1->UploadHeightFieldBoundsBuffer).UploadBuffer.Reference;
  (param_1->UploadHeightFieldBoundsBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadHeightFieldBoundsBuffer).bFloat4Buffer =
       (param_1->UploadHeightFieldBoundsBuffer).bFloat4Buffer;
  lVar10 = (param_1->UploadDistanceFieldDataBuffer)._padding_;
  (this->UploadDistanceFieldDataBuffer)._padding_ =
       (param_1->UploadDistanceFieldDataBuffer)._padding_;
  (this->UploadDistanceFieldDataBuffer)._padding_ = lVar10;
  lVar10 = (param_1->UploadDistanceFieldDataBuffer)._padding_;
  (this->UploadDistanceFieldDataBuffer)._padding_ =
       (param_1->UploadDistanceFieldDataBuffer)._padding_;
  (this->UploadDistanceFieldDataBuffer)._padding_ = lVar10;
  (this->UploadDistanceFieldDataBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadDistanceFieldDataBuffer).ScatterBuffer.Reference =
       (param_1->UploadDistanceFieldDataBuffer).ScatterBuffer.Reference;
  (param_1->UploadDistanceFieldDataBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadDistanceFieldDataBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadDistanceFieldDataBuffer).UploadBuffer.Reference =
       (param_1->UploadDistanceFieldDataBuffer).UploadBuffer.Reference;
  (param_1->UploadDistanceFieldDataBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadDistanceFieldDataBuffer).bFloat4Buffer =
       (param_1->UploadDistanceFieldDataBuffer).bFloat4Buffer;
  lVar10 = (param_1->UploadDistanceFieldBoundsBuffer)._padding_;
  (this->UploadDistanceFieldBoundsBuffer)._padding_ =
       (param_1->UploadDistanceFieldBoundsBuffer)._padding_;
  (this->UploadDistanceFieldBoundsBuffer)._padding_ = lVar10;
  lVar10 = (param_1->UploadDistanceFieldBoundsBuffer)._padding_;
  (this->UploadDistanceFieldBoundsBuffer)._padding_ =
       (param_1->UploadDistanceFieldBoundsBuffer)._padding_;
  (this->UploadDistanceFieldBoundsBuffer)._padding_ = lVar10;
  (this->UploadDistanceFieldBoundsBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadDistanceFieldBoundsBuffer).ScatterBuffer.Reference =
       (param_1->UploadDistanceFieldBoundsBuffer).ScatterBuffer.Reference;
  (param_1->UploadDistanceFieldBoundsBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadDistanceFieldBoundsBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadDistanceFieldBoundsBuffer).UploadBuffer.Reference =
       (param_1->UploadDistanceFieldBoundsBuffer).UploadBuffer.Reference;
  (param_1->UploadDistanceFieldBoundsBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadDistanceFieldBoundsBuffer).bFloat4Buffer =
       (param_1->UploadDistanceFieldBoundsBuffer).bFloat4Buffer;
  (this->IndicesToUpdateInObjectBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndicesToUpdateInObjectBuffers).AllocatorInstance.Data =
       (param_1->IndicesToUpdateInObjectBuffers).AllocatorInstance.Data;
  (param_1->IndicesToUpdateInObjectBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndicesToUpdateInObjectBuffers).ArrayNum =
       (param_1->IndicesToUpdateInObjectBuffers).ArrayNum;
  (this->IndicesToUpdateInObjectBuffers).ArrayMax =
       (param_1->IndicesToUpdateInObjectBuffers).ArrayMax;
  (param_1->IndicesToUpdateInObjectBuffers).ArrayNum = 0;
  (param_1->IndicesToUpdateInObjectBuffers).ArrayMax = 0;
  *(undefined8 *)&pTVar2->Elements = 0;
  *(undefined8 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x34 = 0;
  (this->IndicesToUpdateInObjectBuffersSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->IndicesToUpdateInObjectBuffersSet).HashSize = 0;
  if (pTVar2 != pTVar1) {
    _Src = &(param_1->IndicesToUpdateInObjectBuffersSet).Elements.field_0x10;
    *(undefined8 *)&pTVar2->Elements = *(undefined8 *)&pTVar1->Elements;
    *(undefined8 *)&pTVar1->Elements = 0;
    *(undefined4 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x8 =
         *(undefined4 *)&(param_1->IndicesToUpdateInObjectBuffersSet).Elements.field_0x8;
    _Dst = &(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x10;
    *(undefined4 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0xc =
         *(undefined4 *)&(param_1->IndicesToUpdateInObjectBuffersSet).Elements.field_0xc;
    *(undefined8 *)&(param_1->IndicesToUpdateInObjectBuffersSet).Elements.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->IndicesToUpdateInObjectBuffersSet).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar5 = *(void **)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x20;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      *(undefined8 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x20 =
           *(undefined8 *)&(param_1->IndicesToUpdateInObjectBuffersSet).Elements.field_0x20;
      *(undefined8 *)&(param_1->IndicesToUpdateInObjectBuffersSet).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x28 =
           *(undefined4 *)&(param_1->IndicesToUpdateInObjectBuffersSet).Elements.field_0x28;
      *(undefined4 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x2c =
           *(undefined4 *)&(param_1->IndicesToUpdateInObjectBuffersSet).Elements.field_0x2c;
      *(undefined8 *)&(param_1->IndicesToUpdateInObjectBuffersSet).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x30 =
         *(undefined4 *)&(param_1->IndicesToUpdateInObjectBuffersSet).Elements.field_0x30;
    *(undefined4 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x34 =
         *(undefined4 *)&(param_1->IndicesToUpdateInObjectBuffersSet).Elements.field_0x34;
    *(undefined4 *)&(param_1->IndicesToUpdateInObjectBuffersSet).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->IndicesToUpdateInObjectBuffersSet).Elements.field_0x34 = 0;
  }
  if ((param_1->IndicesToUpdateInObjectBuffersSet).Hash.SecondaryData ==
      (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->IndicesToUpdateInObjectBuffersSet).Hash.InlineData =
         *(undefined4 *)(param_1->IndicesToUpdateInObjectBuffersSet).Hash.InlineData;
  }
  FVar6 = (this->IndicesToUpdateInObjectBuffersSet).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  (this->IndicesToUpdateInObjectBuffersSet).Hash.SecondaryData =
       (param_1->IndicesToUpdateInObjectBuffersSet).Hash.SecondaryData;
  (param_1->IndicesToUpdateInObjectBuffersSet).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->IndicesToUpdateInObjectBuffersSet).HashSize =
       (param_1->IndicesToUpdateInObjectBuffersSet).HashSize;
  (param_1->IndicesToUpdateInObjectBuffersSet).HashSize = 0;
  TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator>::
  TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator>
            (&this->AssetStateArray,&param_1->AssetStateArray);
  (this->AssetDataBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->AssetDataBuffer).Reference = (param_1->AssetDataBuffer).Reference;
  (param_1->AssetDataBuffer).Reference = (FRDGPooledBuffer *)0x0;
  lVar10 = (param_1->AssetDataUploadBuffer)._padding_;
  (this->AssetDataUploadBuffer)._padding_ = (param_1->AssetDataUploadBuffer)._padding_;
  (this->AssetDataUploadBuffer)._padding_ = lVar10;
  lVar10 = (param_1->AssetDataUploadBuffer)._padding_;
  (this->AssetDataUploadBuffer)._padding_ = (param_1->AssetDataUploadBuffer)._padding_;
  (this->AssetDataUploadBuffer)._padding_ = lVar10;
  (this->AssetDataUploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->AssetDataUploadBuffer).ScatterBuffer.Reference =
       (param_1->AssetDataUploadBuffer).ScatterBuffer.Reference;
  (param_1->AssetDataUploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->AssetDataUploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->AssetDataUploadBuffer).UploadBuffer.Reference =
       (param_1->AssetDataUploadBuffer).UploadBuffer.Reference;
  (param_1->AssetDataUploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->AssetDataUploadBuffer).bFloat4Buffer = (param_1->AssetDataUploadBuffer).bFloat4Buffer;
  (this->StreamingRequestReadbackBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StreamingRequestReadbackBuffers).AllocatorInstance.Data =
       (param_1->StreamingRequestReadbackBuffers).AllocatorInstance.Data;
  (param_1->StreamingRequestReadbackBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->StreamingRequestReadbackBuffers).ArrayNum =
       (param_1->StreamingRequestReadbackBuffers).ArrayNum;
  (this->StreamingRequestReadbackBuffers).ArrayMax =
       (param_1->StreamingRequestReadbackBuffers).ArrayMax;
  (param_1->StreamingRequestReadbackBuffers).ArrayNum = 0;
  (param_1->StreamingRequestReadbackBuffers).ArrayMax = 0;
  this->MaxStreamingReadbackBuffers = param_1->MaxStreamingReadbackBuffers;
  this->ReadbackBuffersWriteIndex = param_1->ReadbackBuffersWriteIndex;
  this->ReadbackBuffersNumPending = param_1->ReadbackBuffersNumPending;
  (this->IndirectionTableAllocator).MaxSize = (param_1->IndirectionTableAllocator).MaxSize;
  (this->IndirectionTableAllocator).FreeSpans.AllocatorInstance.SecondaryData =
       (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0;
  if ((param_1->IndirectionTableAllocator).FreeSpans.AllocatorInstance.SecondaryData ==
      (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
    memmove(&(this->IndirectionTableAllocator).FreeSpans,
            &(param_1->IndirectionTableAllocator).FreeSpans,0x50);
  }
  FVar7 = (this->IndirectionTableAllocator).FreeSpans.AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  (this->IndirectionTableAllocator).FreeSpans.AllocatorInstance.SecondaryData =
       (param_1->IndirectionTableAllocator).FreeSpans.AllocatorInstance.SecondaryData;
  (param_1->IndirectionTableAllocator).FreeSpans.AllocatorInstance.SecondaryData =
       (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0;
  (this->IndirectionTableAllocator).FreeSpans.ArrayNum =
       (param_1->IndirectionTableAllocator).FreeSpans.ArrayNum;
  (this->IndirectionTableAllocator).FreeSpans.ArrayMax =
       (param_1->IndirectionTableAllocator).FreeSpans.ArrayMax;
  (param_1->IndirectionTableAllocator).FreeSpans.ArrayNum = 0;
  (param_1->IndirectionTableAllocator).FreeSpans.ArrayMax = 10;
  (this->IndirectionTableAllocator).bDeferMerges = (param_1->IndirectionTableAllocator).bDeferMerges
  ;
  (this->IndirectionTable).Reference = (FRDGPooledBuffer *)0x0;
  (this->IndirectionTable).Reference = (param_1->IndirectionTable).Reference;
  (param_1->IndirectionTable).Reference = (FRDGPooledBuffer *)0x0;
  (this->IndirectionTableUploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->IndirectionTableUploadBuffer).ScatterBuffer.Reference =
       (param_1->IndirectionTableUploadBuffer).ScatterBuffer.Reference;
  (param_1->IndirectionTableUploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->IndirectionTableUploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->IndirectionTableUploadBuffer).UploadBuffer.Reference =
       (param_1->IndirectionTableUploadBuffer).UploadBuffer.Reference;
  (param_1->IndirectionTableUploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->IndirectionAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->IndirectionAtlas).Reference = (param_1->IndirectionAtlas).Reference;
  (param_1->IndirectionAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->IndirectionAtlasLayout).MinSizeX = (param_1->IndirectionAtlasLayout).MinSizeX;
  (this->IndirectionAtlasLayout).MinSizeY = (param_1->IndirectionAtlasLayout).MinSizeY;
  (this->IndirectionAtlasLayout).MinSizeZ = (param_1->IndirectionAtlasLayout).MinSizeZ;
  (this->IndirectionAtlasLayout).SizeX = (param_1->IndirectionAtlasLayout).SizeX;
  (this->IndirectionAtlasLayout).SizeY = (param_1->IndirectionAtlasLayout).SizeY;
  (this->IndirectionAtlasLayout).SizeZ = (param_1->IndirectionAtlasLayout).SizeZ;
  (this->IndirectionAtlasLayout).bPowerOfTwoSize = (param_1->IndirectionAtlasLayout).bPowerOfTwoSize
  ;
  (this->IndirectionAtlasLayout).bAlignByFour = (param_1->IndirectionAtlasLayout).bAlignByFour;
  (this->IndirectionAtlasLayout).bAllowShrink = (param_1->IndirectionAtlasLayout).bAllowShrink;
  (this->IndirectionAtlasLayout).Nodes.AllocatorInstance.SecondaryData =
       (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0;
  if ((param_1->IndirectionAtlasLayout).Nodes.AllocatorInstance.SecondaryData ==
      (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
    memmove(&(this->IndirectionAtlasLayout).Nodes,&(param_1->IndirectionAtlasLayout).Nodes,0x8c);
  }
  FVar8 = (this->IndirectionAtlasLayout).Nodes.AllocatorInstance.SecondaryData;
  if (FVar8 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
    FMemory::Free((void *)FVar8);
  }
  pTVar3 = &(this->IndirectionAtlasLayout).UsedLeaves;
  (this->IndirectionAtlasLayout).Nodes.AllocatorInstance.SecondaryData =
       (param_1->IndirectionAtlasLayout).Nodes.AllocatorInstance.SecondaryData;
  (param_1->IndirectionAtlasLayout).Nodes.AllocatorInstance.SecondaryData =
       (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0;
  (this->IndirectionAtlasLayout).Nodes.ArrayNum = (param_1->IndirectionAtlasLayout).Nodes.ArrayNum;
  (this->IndirectionAtlasLayout).Nodes.ArrayMax = (param_1->IndirectionAtlasLayout).Nodes.ArrayMax;
  (param_1->IndirectionAtlasLayout).Nodes.ArrayNum = 0;
  (param_1->IndirectionAtlasLayout).Nodes.ArrayMax = 5;
  (this->IndirectionAtlasLayout).FreeNodeIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->IndirectionAtlasLayout).FreeNodeIndices.AllocatorInstance.Data =
       (param_1->IndirectionAtlasLayout).FreeNodeIndices.AllocatorInstance.Data;
  (param_1->IndirectionAtlasLayout).FreeNodeIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->IndirectionAtlasLayout).FreeNodeIndices.ArrayNum =
       (param_1->IndirectionAtlasLayout).FreeNodeIndices.ArrayNum;
  (this->IndirectionAtlasLayout).FreeNodeIndices.ArrayMax =
       (param_1->IndirectionAtlasLayout).FreeNodeIndices.ArrayMax;
  (param_1->IndirectionAtlasLayout).FreeNodeIndices.ArrayNum = 0;
  (param_1->IndirectionAtlasLayout).FreeNodeIndices.ArrayMax = 0;
  (this->IndirectionAtlasLayout).UnusedLeaves.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->IndirectionAtlasLayout).UnusedLeaves.AllocatorInstance.Data =
       (param_1->IndirectionAtlasLayout).UnusedLeaves.AllocatorInstance.Data;
  (param_1->IndirectionAtlasLayout).UnusedLeaves.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->IndirectionAtlasLayout).UnusedLeaves.ArrayNum =
       (param_1->IndirectionAtlasLayout).UnusedLeaves.ArrayNum;
  (this->IndirectionAtlasLayout).UnusedLeaves.ArrayMax =
       (param_1->IndirectionAtlasLayout).UnusedLeaves.ArrayMax;
  (param_1->IndirectionAtlasLayout).UnusedLeaves.ArrayNum = 0;
  (param_1->IndirectionAtlasLayout).UnusedLeaves.ArrayMax = 0;
  *(undefined8 *)&pTVar3->field_0x0 = 0;
  *(undefined8 *)&(this->IndirectionAtlasLayout).UsedLeaves.field_0x8 = 0;
  *(undefined8 *)&(this->IndirectionAtlasLayout).UsedLeaves.field_0x20 = 0;
  *(undefined4 *)&(this->IndirectionAtlasLayout).UsedLeaves.field_0x28 = 0;
  *(undefined4 *)&(this->IndirectionAtlasLayout).UsedLeaves.field_0x2c = 0x80;
  *(undefined4 *)&(this->IndirectionAtlasLayout).UsedLeaves.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IndirectionAtlasLayout).UsedLeaves.field_0x34 = 0;
  *(undefined8 *)&(this->IndirectionAtlasLayout).UsedLeaves.field_0x40 = 0;
  *(undefined4 *)&(this->IndirectionAtlasLayout).UsedLeaves.field_0x48 = 0;
  TSet<TTuple<UE::Math::TIntVector3<int>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,int,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<UE::Math::TIntVector3<int>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,int,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<UE::Math::TIntVector3<int>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,int,0>,FDefaultSetAllocator>
              *)pTVar3,
             (TSet<TTuple<UE::Math::TIntVector3<int>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,int,0>,FDefaultSetAllocator>
              *)&(param_1->IndirectionAtlasLayout).UsedLeaves);
  (this->IndirectionUploadIndicesBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->IndirectionUploadIndicesBuffer).Buffer.Reference =
       (param_1->IndirectionUploadIndicesBuffer).Buffer.Reference;
  (param_1->IndirectionUploadIndicesBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->IndirectionUploadIndicesBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->IndirectionUploadIndicesBuffer).SRV.Reference =
       (param_1->IndirectionUploadIndicesBuffer).SRV.Reference;
  (param_1->IndirectionUploadIndicesBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  uVar4 = (param_1->IndirectionUploadIndicesBuffer).NumBytes;
  (this->IndirectionUploadDataBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->IndirectionUploadIndicesBuffer).NumBytes = uVar4;
  (this->IndirectionUploadDataBuffer).Buffer.Reference =
       (param_1->IndirectionUploadDataBuffer).Buffer.Reference;
  (param_1->IndirectionUploadDataBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->IndirectionUploadDataBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->IndirectionUploadDataBuffer).SRV.Reference =
       (param_1->IndirectionUploadDataBuffer).SRV.Reference;
  (param_1->IndirectionUploadDataBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->IndirectionUploadDataBuffer).NumBytes = (param_1->IndirectionUploadDataBuffer).NumBytes;
  (this->DistanceFieldAtlasBlockAllocator).MaxNumBlocks =
       (param_1->DistanceFieldAtlasBlockAllocator).MaxNumBlocks;
  (this->DistanceFieldAtlasBlockAllocator).FreeBlocks.AllocatorInstance.SecondaryData =
       (ForElementType<int>)0x0;
  if ((param_1->DistanceFieldAtlasBlockAllocator).FreeBlocks.AllocatorInstance.SecondaryData ==
      (ForElementType<int>)0x0) {
    memmove(&(this->DistanceFieldAtlasBlockAllocator).FreeBlocks,
            &(param_1->DistanceFieldAtlasBlockAllocator).FreeBlocks,0x10);
  }
  FVar9 = (this->DistanceFieldAtlasBlockAllocator).FreeBlocks.AllocatorInstance.SecondaryData;
  if (FVar9 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  (this->DistanceFieldAtlasBlockAllocator).FreeBlocks.AllocatorInstance.SecondaryData =
       (param_1->DistanceFieldAtlasBlockAllocator).FreeBlocks.AllocatorInstance.SecondaryData;
  (param_1->DistanceFieldAtlasBlockAllocator).FreeBlocks.AllocatorInstance.SecondaryData =
       (ForElementType<int>)0x0;
  (this->DistanceFieldAtlasBlockAllocator).FreeBlocks.ArrayNum =
       (param_1->DistanceFieldAtlasBlockAllocator).FreeBlocks.ArrayNum;
  (this->DistanceFieldAtlasBlockAllocator).FreeBlocks.ArrayMax =
       (param_1->DistanceFieldAtlasBlockAllocator).FreeBlocks.ArrayMax;
  (param_1->DistanceFieldAtlasBlockAllocator).FreeBlocks.ArrayNum = 0;
  (param_1->DistanceFieldAtlasBlockAllocator).FreeBlocks.ArrayMax = 4;
  (this->DistanceFieldBrickVolumeTexture).Reference = (IPooledRenderTarget *)0x0;
  (this->DistanceFieldBrickVolumeTexture).Reference =
       (param_1->DistanceFieldBrickVolumeTexture).Reference;
  (param_1->DistanceFieldBrickVolumeTexture).Reference = (IPooledRenderTarget *)0x0;
  *(undefined8 *)&(this->BrickTextureDimensionsInBricks).field0_0x0 =
       *(undefined8 *)&(param_1->BrickTextureDimensionsInBricks).field0_0x0;
  (this->BrickTextureDimensionsInBricks).field0_0x0._s_0.Z =
       (param_1->BrickTextureDimensionsInBricks).field0_0x0._s_0.Z;
  (this->BrickUploadCoordinatesBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->BrickUploadCoordinatesBuffer).Buffer.Reference =
       (param_1->BrickUploadCoordinatesBuffer).Buffer.Reference;
  (param_1->BrickUploadCoordinatesBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->BrickUploadCoordinatesBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->BrickUploadCoordinatesBuffer).SRV.Reference =
       (param_1->BrickUploadCoordinatesBuffer).SRV.Reference;
  (param_1->BrickUploadCoordinatesBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  uVar4 = (param_1->BrickUploadCoordinatesBuffer).NumBytes;
  (this->BrickUploadDataBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->BrickUploadCoordinatesBuffer).NumBytes = uVar4;
  (this->BrickUploadDataBuffer).Buffer.Reference = (param_1->BrickUploadDataBuffer).Buffer.Reference
  ;
  (param_1->BrickUploadDataBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->BrickUploadDataBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->BrickUploadDataBuffer).SRV.Reference = (param_1->BrickUploadDataBuffer).SRV.Reference;
  (param_1->BrickUploadDataBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  uVar4 = (param_1->BrickUploadDataBuffer).NumBytes;
  (this->ReadRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BrickUploadDataBuffer).NumBytes = uVar4;
  (this->ReadRequests).AllocatorInstance.Data = (param_1->ReadRequests).AllocatorInstance.Data;
  (param_1->ReadRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadRequests).ArrayNum = (param_1->ReadRequests).ArrayNum;
  (this->ReadRequests).ArrayMax = (param_1->ReadRequests).ArrayMax;
  (param_1->ReadRequests).ArrayNum = 0;
  (param_1->ReadRequests).ArrayMax = 0;
  (this->PrimitiveInstanceMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitiveInstanceMapping).AllocatorInstance.Data =
       (param_1->PrimitiveInstanceMapping).AllocatorInstance.Data;
  (param_1->PrimitiveInstanceMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitiveInstanceMapping).ArrayNum = (param_1->PrimitiveInstanceMapping).ArrayNum;
  (this->PrimitiveInstanceMapping).ArrayMax = (param_1->PrimitiveInstanceMapping).ArrayMax;
  (param_1->PrimitiveInstanceMapping).ArrayNum = 0;
  (param_1->PrimitiveInstanceMapping).ArrayMax = 0;
  (this->HeightfieldPrimitives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HeightfieldPrimitives).AllocatorInstance.Data =
       (param_1->HeightfieldPrimitives).AllocatorInstance.Data;
  (param_1->HeightfieldPrimitives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HeightfieldPrimitives).ArrayNum = (param_1->HeightfieldPrimitives).ArrayNum;
  (this->HeightfieldPrimitives).ArrayMax = (param_1->HeightfieldPrimitives).ArrayMax;
  (param_1->HeightfieldPrimitives).ArrayNum = 0;
  (param_1->HeightfieldPrimitives).ArrayMax = 0;
  TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>::
  TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>
            (&this->PendingAddOperations,&param_1->PendingAddOperations);
  TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>::
  TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>
            (&this->PendingUpdateOperations,&param_1->PendingUpdateOperations);
  (this->PendingRemoveOperations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingRemoveOperations).AllocatorInstance.Data =
       (param_1->PendingRemoveOperations).AllocatorInstance.Data;
  (param_1->PendingRemoveOperations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingRemoveOperations).ArrayNum = (param_1->PendingRemoveOperations).ArrayNum;
  (this->PendingRemoveOperations).ArrayMax = (param_1->PendingRemoveOperations).ArrayMax;
  (param_1->PendingRemoveOperations).ArrayNum = 0;
  (param_1->PendingRemoveOperations).ArrayMax = 0;
  this->PrimitiveModifiedBounds[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PrimitiveModifiedBounds[0].AllocatorInstance.Data =
       param_1->PrimitiveModifiedBounds[0].AllocatorInstance.Data;
  param_1->PrimitiveModifiedBounds[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PrimitiveModifiedBounds[0].ArrayNum = param_1->PrimitiveModifiedBounds[0].ArrayNum;
  this->PrimitiveModifiedBounds[0].ArrayMax = param_1->PrimitiveModifiedBounds[0].ArrayMax;
  param_1->PrimitiveModifiedBounds[0].ArrayNum = 0;
  param_1->PrimitiveModifiedBounds[0].ArrayMax = 0;
  this->PrimitiveModifiedBounds[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PrimitiveModifiedBounds[1].AllocatorInstance.Data =
       param_1->PrimitiveModifiedBounds[1].AllocatorInstance.Data;
  param_1->PrimitiveModifiedBounds[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PrimitiveModifiedBounds[1].ArrayNum = param_1->PrimitiveModifiedBounds[1].ArrayNum;
  this->PrimitiveModifiedBounds[1].ArrayMax = param_1->PrimitiveModifiedBounds[1].ArrayMax;
  param_1->PrimitiveModifiedBounds[1].ArrayNum = 0;
  param_1->PrimitiveModifiedBounds[1].ArrayMax = 0;
  TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>::
  TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>
            (&this->PendingHeightFieldAddOps,&param_1->PendingHeightFieldAddOps);
  (this->PendingHeightFieldRemoveOps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingHeightFieldRemoveOps).AllocatorInstance.Data =
       (param_1->PendingHeightFieldRemoveOps).AllocatorInstance.Data;
  (param_1->PendingHeightFieldRemoveOps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingHeightFieldRemoveOps).ArrayNum = (param_1->PendingHeightFieldRemoveOps).ArrayNum;
  (this->PendingHeightFieldRemoveOps).ArrayMax = (param_1->PendingHeightFieldRemoveOps).ArrayMax;
  (param_1->PendingHeightFieldRemoveOps).ArrayNum = 0;
  (param_1->PendingHeightFieldRemoveOps).ArrayMax = 0;
  this->HeightFieldAtlasGeneration = param_1->HeightFieldAtlasGeneration;
  this->HFVisibilityAtlasGenerattion = param_1->HFVisibilityAtlasGenerattion;
  this->bTrackAllPrimitives = param_1->bTrackAllPrimitives;
  this->bCanUse16BitObjectIndices = param_1->bCanUse16BitObjectIndices;
  return this;
}

// FDistanceFieldSceneData @ 14485c100

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FDistanceFieldSceneData * __thiscall
FDistanceFieldSceneData::FDistanceFieldSceneData
          (FDistanceFieldSceneData *this,EShaderPlatform param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FDistanceFieldSceneData *pFVar7;
  
  (this->UploadHeightFieldDataBuffer)._padding_ = 0;
  piVar1 = &(this->StreamingRequestReadbackBuffers).ArrayNum;
  (this->UploadHeightFieldDataBuffer)._padding_ = 0;
  piVar2 = &(this->StreamingRequestReadbackBuffers).ArrayMax;
  (this->UploadHeightFieldDataBuffer)._padding_ = 0;
  *(undefined4 *)&(this->UploadHeightFieldDataBuffer)._padding_ = 0;
  (this->UploadHeightFieldDataBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadHeightFieldDataBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadHeightFieldDataBuffer).bFloat4Buffer = false;
  (this->UploadHeightFieldBoundsBuffer)._padding_ = 0;
  (this->UploadHeightFieldBoundsBuffer)._padding_ = 0;
  (this->UploadHeightFieldBoundsBuffer)._padding_ = 0;
  *(undefined4 *)&(this->UploadHeightFieldBoundsBuffer)._padding_ = 0;
  (this->UploadHeightFieldBoundsBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadHeightFieldBoundsBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadHeightFieldBoundsBuffer).bFloat4Buffer = false;
  (this->UploadDistanceFieldDataBuffer)._padding_ = 0;
  (this->UploadDistanceFieldDataBuffer)._padding_ = 0;
  (this->UploadDistanceFieldDataBuffer)._padding_ = 0;
  *(undefined4 *)&(this->UploadDistanceFieldDataBuffer)._padding_ = 0;
  (this->UploadDistanceFieldDataBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadDistanceFieldDataBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadDistanceFieldDataBuffer).bFloat4Buffer = false;
  (this->UploadDistanceFieldBoundsBuffer)._padding_ = 0;
  (this->UploadDistanceFieldBoundsBuffer)._padding_ = 0;
  (this->UploadDistanceFieldBoundsBuffer)._padding_ = 0;
  *(undefined4 *)&(this->UploadDistanceFieldBoundsBuffer)._padding_ = 0;
  (this->UploadDistanceFieldBoundsBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadDistanceFieldBoundsBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UploadDistanceFieldBoundsBuffer).bFloat4Buffer = false;
  (this->IndicesToUpdateInObjectBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndicesToUpdateInObjectBuffers).ArrayNum = 0;
  (this->IndicesToUpdateInObjectBuffers).ArrayMax = 0;
  *(undefined8 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements = 0;
  *(undefined8 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x20 = 0;
  this->NumObjectsInBuffer = 0;
  *(undefined4 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x34 = 0;
  (this->IndicesToUpdateInObjectBuffersSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->IndicesToUpdateInObjectBuffersSet).HashSize = 0;
  *(undefined8 *)&(this->AssetStateArray).Elements = 0;
  *(undefined8 *)&(this->AssetStateArray).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AssetStateArray).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AssetStateArray).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AssetStateArray).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AssetStateArray).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AssetStateArray).Elements.field_0x34 = 0;
  (this->AssetStateArray).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AssetStateArray).HashSize = 0;
  (this->AssetDataBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->AssetDataUploadBuffer)._padding_ = 0;
  (this->AssetDataUploadBuffer)._padding_ = 0;
  (this->AssetDataUploadBuffer)._padding_ = 0;
  *(undefined4 *)&(this->AssetDataUploadBuffer)._padding_ = 0;
  (this->AssetDataUploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->AssetDataUploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->AssetDataUploadBuffer).bFloat4Buffer = false;
  (this->StreamingRequestReadbackBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  this->MaxStreamingReadbackBuffers = 4;
  this->ReadbackBuffersWriteIndex = 0;
  (this->IndirectionTableAllocator).FreeSpans.AllocatorInstance.SecondaryData =
       (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0;
  this->ReadbackBuffersNumPending = 0;
  (this->IndirectionTableAllocator).MaxSize = 0;
  (this->IndirectionTableAllocator).FreeSpans.ArrayNum = 0;
  (this->IndirectionTableAllocator).FreeSpans.ArrayMax = 10;
  (this->IndirectionTableAllocator).bDeferMerges = false;
  (this->IndirectionTable).Reference = (FRDGPooledBuffer *)0x0;
  (this->IndirectionTableUploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->IndirectionTableUploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->IndirectionAtlas).Reference = (IPooledRenderTarget *)0x0;
  FTextureLayout3d::FTextureLayout3d
            (&this->IndirectionAtlasLayout,8,8,8,0x200,0x200,0x200,false,true,false);
  (this->IndirectionUploadIndicesBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->IndirectionUploadIndicesBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->IndirectionUploadIndicesBuffer).NumBytes = 0;
  (this->IndirectionUploadDataBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->IndirectionUploadDataBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->IndirectionUploadDataBuffer).NumBytes = 0;
  (this->DistanceFieldAtlasBlockAllocator).MaxNumBlocks = 0;
  (this->DistanceFieldAtlasBlockAllocator).FreeBlocks.AllocatorInstance.SecondaryData =
       (ForElementType<int>)0x0;
  (this->DistanceFieldAtlasBlockAllocator).FreeBlocks.ArrayNum = 0;
  (this->DistanceFieldAtlasBlockAllocator).FreeBlocks.ArrayMax = 4;
  (this->DistanceFieldBrickVolumeTexture).Reference = (IPooledRenderTarget *)0x0;
  (this->BrickUploadCoordinatesBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->BrickUploadCoordinatesBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->BrickUploadCoordinatesBuffer).NumBytes = 0;
  (this->BrickUploadDataBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->BrickUploadDataBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->BrickUploadDataBuffer).NumBytes = 0;
  (this->ReadRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadRequests).ArrayNum = 0;
  (this->ReadRequests).ArrayMax = 0;
  (this->PrimitiveInstanceMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitiveInstanceMapping).ArrayNum = 0;
  (this->PrimitiveInstanceMapping).ArrayMax = 0;
  (this->HeightfieldPrimitives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HeightfieldPrimitives).ArrayNum = 0;
  (this->HeightfieldPrimitives).ArrayMax = 0;
  *(undefined8 *)&(this->PendingAddOperations).Elements = 0;
  *(undefined8 *)&(this->PendingAddOperations).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingAddOperations).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingAddOperations).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingAddOperations).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingAddOperations).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingAddOperations).Elements.field_0x34 = 0;
  (this->PendingAddOperations).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingAddOperations).HashSize = 0;
  *(undefined8 *)&(this->PendingUpdateOperations).Elements = 0;
  *(undefined8 *)&(this->PendingUpdateOperations).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingUpdateOperations).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingUpdateOperations).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingUpdateOperations).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingUpdateOperations).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingUpdateOperations).Elements.field_0x34 = 0;
  (this->PendingUpdateOperations).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingUpdateOperations).HashSize = 0;
  (this->PendingRemoveOperations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingRemoveOperations).ArrayNum = 0;
  (this->PendingRemoveOperations).ArrayMax = 0;
  this->PrimitiveModifiedBounds[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PrimitiveModifiedBounds[0].ArrayNum = 0;
  this->PrimitiveModifiedBounds[0].ArrayMax = 0;
  this->PrimitiveModifiedBounds[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PrimitiveModifiedBounds[1].ArrayNum = 0;
  this->PrimitiveModifiedBounds[1].ArrayMax = 0;
  *(undefined8 *)&(this->PendingHeightFieldAddOps).Elements = 0;
  *(undefined8 *)&(this->PendingHeightFieldAddOps).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingHeightFieldAddOps).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingHeightFieldAddOps).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingHeightFieldAddOps).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingHeightFieldAddOps).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingHeightFieldAddOps).Elements.field_0x34 = 0;
  (this->PendingHeightFieldAddOps).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingHeightFieldAddOps).HashSize = 0;
  (this->PendingHeightFieldRemoveOps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingHeightFieldRemoveOps).ArrayNum = 0;
  (this->PendingHeightFieldRemoveOps).ArrayMax = 0;
  this->HeightFieldAtlasGeneration = 0;
  this->HFVisibilityAtlasGenerattion = 0;
  this->ObjectBuffers = (FDistanceFieldObjectBuffers *)0x0;
  this->HeightFieldObjectBuffers = (FDistanceFieldObjectBuffers *)0x0;
  bVar5 = ShouldAllPrimitivesHaveDistanceField(param_1);
  this->bTrackAllPrimitives = bVar5;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xbb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FDistanceFieldSceneData *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].Language != LANGUAGE_Metal) {
    if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xc1,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FDistanceFieldSceneData *)(*pcVar4)();
        return pFVar7;
      }
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].Language != LANGUAGE_OpenGL) {
      bVar5 = true;
      goto LAB_14485c568;
    }
  }
  bVar5 = false;
LAB_14485c568:
  uVar3 = this->MaxStreamingReadbackBuffers;
  this->bCanUse16BitObjectIndices = bVar5;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar3,&(this->StreamingRequestReadbackBuffers).AllocatorInstance,piVar1,
                     piVar2);
  memset((this->StreamingRequestReadbackBuffers).AllocatorInstance.Data + (longlong)iVar6 * 8,0,
         (longlong)(int)uVar3 << 3);
  return this;
}

// ~FDistanceFieldSceneData @ 14485dca0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FDistanceFieldSceneData::~FDistanceFieldSceneData(FDistanceFieldSceneData *this)

{
  longlong *plVar1;
  FDistanceFieldObjectBuffers *pFVar2;
  FRDGPooledBuffer *pFVar3;
  FScriptContainerElement *pFVar4;
  ForElementType<FSetElementId> FVar5;
  FRHIShaderResourceView *pFVar6;
  FRHIBuffer *pFVar7;
  IPooledRenderTarget *pIVar8;
  ForElementType<int> FVar9;
  ForElementType<FGrowOnlySpanAllocator::FLinearAllocation> FVar10;
  undefined1 *puVar11;
  longlong lVar12;
  TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator> *this_00
  ;
  
  pFVar2 = this->ObjectBuffers;
  if (pFVar2 != (FDistanceFieldObjectBuffers *)0x0) {
    pFVar3 = (pFVar2->Data).Reference;
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar12 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    pFVar3 = (pFVar2->Bounds).Reference;
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar12 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    ::operator_delete(pFVar2,0x10);
  }
  pFVar2 = this->HeightFieldObjectBuffers;
  if (pFVar2 != (FDistanceFieldObjectBuffers *)0x0) {
    pFVar3 = (pFVar2->Data).Reference;
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar12 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    pFVar3 = (pFVar2->Bounds).Reference;
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar12 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    ::operator_delete(pFVar2,0x10);
  }
  DestructItems<FHeightFieldPrimitiveRemoveInfo,int>
            ((FHeightFieldPrimitiveRemoveInfo *)
             (this->PendingHeightFieldRemoveOps).AllocatorInstance.Data,
             (this->PendingHeightFieldRemoveOps).ArrayNum);
  pFVar4 = (this->PendingHeightFieldRemoveOps).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this_00 = &this->PendingHeightFieldAddOps;
  (this->PendingHeightFieldAddOps).HashSize = 0;
  FVar5 = (this->PendingHeightFieldAddOps).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this_00->Elements);
  lVar12 = 2;
  do {
    puVar11 = (undefined1 *)(this_00 + -1);
    this_00 = (TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>
               *)((longlong)(this_00 + -1) + 0x40);
    lVar12 = lVar12 + -1;
    if (*(void **)((longlong)puVar11 + 0x40) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)puVar11 + 0x40));
    }
  } while (lVar12 != 0);
  DestructItems<FPrimitiveRemoveInfo,int>
            ((FPrimitiveRemoveInfo *)(this->PendingRemoveOperations).AllocatorInstance.Data,
             (this->PendingRemoveOperations).ArrayNum);
  pFVar4 = (this->PendingRemoveOperations).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  (this->PendingUpdateOperations).HashSize = 0;
  FVar5 = (this->PendingUpdateOperations).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingUpdateOperations).Elements);
  (this->PendingAddOperations).HashSize = 0;
  FVar5 = (this->PendingAddOperations).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingAddOperations).Elements);
  pFVar4 = (this->HeightfieldPrimitives).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->PrimitiveInstanceMapping).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FDistanceFieldReadRequest,int>
            ((FDistanceFieldReadRequest *)(this->ReadRequests).AllocatorInstance.Data,
             (this->ReadRequests).ArrayNum);
  pFVar4 = (this->ReadRequests).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar6 = (this->BrickUploadDataBuffer).SRV.Reference;
  if (pFVar6 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar6);
  }
  pFVar7 = (this->BrickUploadDataBuffer).Buffer.Reference;
  if (pFVar7 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar7);
  }
  pFVar6 = (this->BrickUploadCoordinatesBuffer).SRV.Reference;
  if (pFVar6 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar6);
  }
  pFVar7 = (this->BrickUploadCoordinatesBuffer).Buffer.Reference;
  if (pFVar7 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar7);
  }
  pIVar8 = (this->DistanceFieldBrickVolumeTexture).Reference;
  if (pIVar8 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar8->_padding_ + 0x38))();
  }
  FVar9 = (this->DistanceFieldAtlasBlockAllocator).FreeBlocks.AllocatorInstance.SecondaryData;
  if (FVar9 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  pFVar6 = (this->IndirectionUploadDataBuffer).SRV.Reference;
  if (pFVar6 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar6);
  }
  pFVar7 = (this->IndirectionUploadDataBuffer).Buffer.Reference;
  if (pFVar7 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar7);
  }
  pFVar6 = (this->IndirectionUploadIndicesBuffer).SRV.Reference;
  if (pFVar6 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar6);
  }
  pFVar7 = (this->IndirectionUploadIndicesBuffer).Buffer.Reference;
  if (pFVar7 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar7);
  }
  FTextureLayout3d::~FTextureLayout3d(&this->IndirectionAtlasLayout);
  pIVar8 = (this->IndirectionAtlas).Reference;
  if (pIVar8 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar8->_padding_ + 0x38))();
  }
  FRDGAsyncScatterUploadBuffer::~FRDGAsyncScatterUploadBuffer(&this->IndirectionTableUploadBuffer);
  pFVar3 = (this->IndirectionTable).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar12 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  FVar10 = (this->IndirectionTableAllocator).FreeSpans.AllocatorInstance.SecondaryData;
  if (FVar10 != (ForElementType<FGrowOnlySpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  pFVar4 = (this->StreamingRequestReadbackBuffers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FRDGScatterUploadBuffer::~FRDGScatterUploadBuffer(&this->AssetDataUploadBuffer);
  pFVar3 = (this->AssetDataBuffer).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar12 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  (this->AssetStateArray).HashSize = 0;
  FVar5 = (this->AssetStateArray).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<FDistanceFieldAssetState>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FDistanceFieldAssetState>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AssetStateArray).Elements);
  (this->IndicesToUpdateInObjectBuffersSet).HashSize = 0;
  FVar5 = (this->IndicesToUpdateInObjectBuffersSet).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->IndicesToUpdateInObjectBuffersSet).Elements);
  pFVar4 = (this->IndicesToUpdateInObjectBuffers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FRDGScatterUploadBuffer::~FRDGScatterUploadBuffer(&this->UploadDistanceFieldBoundsBuffer);
  FRDGScatterUploadBuffer::~FRDGScatterUploadBuffer(&this->UploadDistanceFieldDataBuffer);
  FRDGScatterUploadBuffer::~FRDGScatterUploadBuffer(&this->UploadHeightFieldBoundsBuffer);
  FRDGScatterUploadBuffer::~FRDGScatterUploadBuffer(&this->UploadHeightFieldDataBuffer);
  return;
}

// operator() @ 144860ff0

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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
`FDistanceFieldSceneData::GenerateStreamingRequests'::__l5::<lambda_1>::operator()
          (void *this,FSceneRenderer *param_1,FViewInfo *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  FGlobalShaderMap *this_00;
  FRDGBuilder *pFVar7;
  code *pcVar8;
  FRDGBufferSRV *pFVar9;
  TConsoleVariableData<int> *pTVar10;
  bool bVar11;
  bool bVar12;
  undefined1 uVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  FRDGBufferUAV *pFVar18;
  FDistanceFieldObjectBufferParameters *pFVar19;
  FGlobalShaderType *pFVar20;
  FShaderType *pFVar21;
  FName this_01;
  TIntVector3<int> *pTVar22;
  FRDGEventName *pFVar23;
  FShaderParametersMetadata *pFVar24;
  undefined8 *puVar25;
  float fVar26;
  float fVar27;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined8 *local_128;
  undefined8 local_120;
  float local_118;
  undefined8 local_114;
  float local_10c;
  FRDGBufferUAVDesc local_108;
  FRDGBufferUAVDesc local_f8;
  TIntVector3<int>_u_0 local_e8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_d8;
  FString local_c8;
  TShaderRefBase<FComputeDistanceFieldAssetWantedMipsCS,FShaderMapPointerTable> local_b8;
  TIntVector3<int> local_a8;
  FRDGEventName local_98;
  FDistanceFieldObjectBufferParameters local_78;
  
  puVar25 = (undefined8 *)0x0;
  bVar11 = (bool)(**(code **)(*(longlong *)param_1 + 0x70))(param_1,param_2);
  lVar6 = *(longlong *)this;
  fVar26 = (float)(double)param_2->_padding_;
  fVar27 = (float)(double)param_2->_padding_;
  local_118 = (float)(double)param_2->_padding_;
  local_120 = CONCAT44(fVar27,fVar26);
  local_10c = (float)((double)param_2->_padding_ - (double)local_118);
  local_114 = CONCAT44((float)((double)param_2->_padding_ - (double)fVar27),
                       (float)((double)param_2->_padding_ - (double)fVar26));
  puVar17 = FMemStackBase::Alloc((FMemStackBase *)(lVar6 + 0x18),0xc0,0x10);
  if (puVar17 == (undefined8 *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return (bool)uVar13;
    }
  }
  else {
    puVar17[2] = 0;
    *puVar17 = &
               ___7__TObject_VFParameters_FComputeDistanceFieldAssetWantedMipsCS___FRDGAllocator__6B_
    ;
    puVar17[3] = 0;
    puVar17[4] = 0;
    puVar17[5] = 0;
    puVar17[7] = 0;
    puVar17[8] = 0;
    puVar25 = puVar17;
  }
  local_128 = puVar25;
  if (((*(undefined8 ***)(lVar6 + 0x40) <= &local_128) &&
      (&local_128 < *(undefined8 ***)(lVar6 + 0x40) + *(int *)(lVar6 + 0x4c))) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return (bool)uVar13;
  }
  iVar15 = *(int *)(lVar6 + 0x48);
  if (iVar15 == *(int *)(lVar6 + 0x4c)) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)(lVar6 + 0x40),(int *)(lVar6 + 0x4c));
  }
  *(int *)(lVar6 + 0x48) = iVar15 + 1;
  *(undefined8 **)(*(longlong *)(lVar6 + 0x40) + (longlong)iVar15 * 8) = local_128;
  local_108.Buffer = (FRDGBuffer *)**(longlong **)((longlong)this + 8);
  local_108._padding_._2_1_ = 0;
  bVar14 = 0;
  if ((((local_108.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar14 = 0x1c;
  }
  local_108._padding_._0_2_ = (ushort)bVar14;
  pFVar18 = FRDGBuilder::CreateUAV(*(FRDGBuilder **)this,&local_108,None);
  ((FParameters *)(puVar25 + 2))->RWDistanceFieldAssetWantedNumMips = pFVar18;
  local_f8.Buffer = (FRDGBuffer *)**(longlong **)((longlong)this + 0x10);
  bVar14 = 0;
  local_f8._padding_._2_1_ = 0;
  if ((((local_f8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar14 = 0x1c;
  }
  local_f8._padding_._0_2_ = (ushort)bVar14;
  pFVar18 = FRDGBuilder::CreateUAV(*(FRDGBuilder **)this,&local_f8,None);
  puVar25[3] = pFVar18;
  pFVar19 = DistanceField::SetupObjectBufferParameters
                      (&local_78,*(FRDGBuilder **)this,
                       *(FDistanceFieldSceneData **)((longlong)this + 0x18));
  pFVar9 = pFVar19->SceneObjectData;
  puVar25[4] = pFVar19->SceneObjectBounds;
  puVar25[5] = pFVar9;
  pFVar9 = pFVar19->SceneHeightfieldObjectBounds;
  puVar25[6] = *(undefined8 *)&pFVar19->NumSceneObjects;
  puVar25[7] = pFVar9;
  uVar5 = *(undefined8 *)&pFVar19->NumSceneHeightfieldObjects;
  puVar25[8] = pFVar19->SceneHeightfieldObjectData;
  puVar25[9] = uVar5;
  pTVar10 = CVarDebugForceNumMips.Ref;
  bVar12 = IsInParallelRenderingThread();
  if ((!bVar12) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return (bool)uVar13;
  }
  iVar15 = 3;
  if (pTVar10->ShadowedValue[1] < 3) {
    iVar15 = pTVar10->ShadowedValue[1];
  }
  iVar16 = 0;
  if (0 < iVar15) {
    iVar16 = iVar15;
  }
  *(int *)(puVar25 + 10) = iVar16;
  dVar1 = (double)param_2->_padding_;
  dVar2 = (double)param_2->_padding_;
  dVar3 = (double)param_2->_padding_;
  dVar4 = (double)param_2->_padding_;
  *(float *)(puVar25 + 0xc) = (float)((double)param_2->_padding_ + (double)param_2->_padding_);
  *(float *)((longlong)puVar25 + 100) = (float)(dVar1 + dVar2);
  *(float *)(puVar25 + 0xd) = (float)(dVar3 + dVar4);
  fVar26 = GlobalDistanceField::GetClipmapExtent
                     (GAOGlobalDistanceFieldNumClipmaps + -1,
                      *(FScene **)(*(longlong *)((longlong)this + 0x20) + 8),bVar11);
  *(float *)(puVar25 + 0xe) = fVar26;
  *(float *)((longlong)puVar25 + 0x74) = fVar26;
  *(float *)(puVar25 + 0xf) = fVar26;
  dVar1 = (double)param_2->_padding_;
  dVar2 = (double)param_2->_padding_;
  dVar3 = (double)param_2->_padding_;
  dVar4 = (double)param_2->_padding_;
  *(float *)(puVar25 + 0x10) = (float)((double)param_2->_padding_ + (double)param_2->_padding_);
  *(float *)((longlong)puVar25 + 0x84) = (float)(dVar1 + dVar2);
  *(float *)(puVar25 + 0x11) = (float)(dVar3 + dVar4);
  iVar16 = GAOGlobalDistanceFieldNumClipmaps / 2 + -1;
  iVar15 = 0;
  if (0 < iVar16) {
    iVar15 = iVar16;
  }
  fVar26 = GlobalDistanceField::GetClipmapExtent
                     (iVar15,*(FScene **)(*(longlong *)((longlong)this + 0x20) + 8),bVar11);
  *(float *)(puVar25 + 0x12) = fVar26;
  *(float *)((longlong)puVar25 + 0x94) = fVar26;
  *(float *)(puVar25 + 0x13) = fVar26;
  puVar25[0x14] = local_120;
  *(float *)(puVar25 + 0x15) = local_118;
  puVar25[0x16] = local_114;
  *(float *)(puVar25 + 0x17) = local_10c;
  this_00 = *(FGlobalShaderMap **)(*(longlong *)((longlong)this + 0x20) + 0x18);
  pFVar20 = FComputeDistanceFieldAssetWantedMipsCS::GetStaticType();
  if (*(int *)&pFVar20->field_0x50 != 1) {
    local_res10[0] = 0;
    `FGlobalShaderMap::GetShader<FComputeDistanceFieldAssetWantedMipsCS>'::__l2::<lambda_1>::
    operator()(local_res10);
  }
  pFVar21 = (FShaderType *)FComputeDistanceFieldAssetWantedMipsCS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_d8,pFVar21,0);
  if (local_d8.ShaderContent == (FShader *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res18);
    ::FName::ToString((FName *)this_01,&local_c8);
    FComputeDistanceFieldAssetWantedMipsCS::GetStaticType();
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return (bool)uVar13;
    }
  }
  FComputeDistanceFieldAssetWantedMipsCS::GetStaticType();
  local_b8.ShaderContent = (FComputeDistanceFieldAssetWantedMipsCS *)local_d8.ShaderContent;
  local_b8.ShaderMap = local_d8.ShaderMap;
  pTVar22 = FComputeShaderUtils::GetGroupCountWrapped
                      (&local_a8,**(int **)((longlong)this + 0x18),0x40);
  uVar5 = *(undefined8 *)&pTVar22->field0_0x0;
  iVar15 = (pTVar22->field0_0x0)._s_0.Z;
  pFVar23 = FRDGEventName::FRDGEventName(&local_98,1,L"ComputeWantedMips");
  pFVar7 = *(FRDGBuilder **)this;
  pFVar24 = FComputeDistanceFieldAssetWantedMipsCS::FParameters::FTypeInfo::GetStructMetadata();
  local_e8._0_8_ = uVar5;
  local_e8._s_0.Z = iVar15;
  FComputeShaderUtils::AddPass<FComputeDistanceFieldAssetWantedMipsCS>
            (pFVar7,pFVar23,Compute,&local_b8,pFVar24,(FParameters *)(puVar25 + 2),
             (TIntVector3<int> *)&local_e8._s_0);
  if (local_98.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return true;
}

// operator() @ 144861ba0

void __thiscall
`FDistanceFieldSceneData::GenerateStreamingRequests'::__l5::<lambda_2>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FRDGResource *this_00;
  FRHIGPUBufferReadback *this_01;
  
  this_00 = *(FRDGResource **)((longlong)this + 8);
  this_01 = *(FRHIGPUBufferReadback **)this;
  FRDGResource::ValidateRHIAccess(this_00);
  FRHIGPUBufferReadback::EnqueueCopy(this_01,param_2,(FRHIBuffer *)this_00->ResourceRHI,0);
  return;
}

// operator() @ 144861e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FDistanceFieldSceneData::UpdateDistanceFieldObjectBuffers'::__l51::<lambda_2>::operator()
          (void *this,int param_1)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  FDFMatrix *pFVar15;
  FPrimitiveBounds *pFVar16;
  FCachedSystemScalabilityCVars *pFVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  float *pfVar22;
  undefined4 *puVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_5c8 [32];
  longlong local_5a8;
  longlong local_5a0;
  float local_598;
  float local_594;
  ulonglong local_590;
  float local_588;
  undefined4 local_584;
  longlong *local_580;
  int local_578;
  int iStack_574;
  int local_570;
  undefined8 local_568;
  float local_560;
  undefined8 local_55c;
  float local_554;
  float local_550;
  float fStack_54c;
  float fStack_548;
  float fStack_544;
  undefined8 local_540;
  undefined4 local_538;
  float local_528;
  float fStack_524;
  float fStack_520;
  int iStack_51c;
  wchar_t *local_518;
  wchar_t **local_510;
  undefined8 local_508;
  longlong local_500;
  TVector<float>_u_0 local_4f8 [4];
  wchar_t *local_4c8;
  wchar_t **local_4c0 [17];
  TMatrix<float> local_438;
  TMatrix<float> local_3f8;
  TMatrix<float> local_3b8;
  TMatrix<float> local_378;
  TMatrix<float> local_338;
  TMatrix<float> local_2f8;
  TMatrix<double> local_2b8;
  TMatrix<float> local_238;
  TMatrix<float> local_1f8;
  TMatrix<float> local_1b8;
  TMatrix<float> local_178;
  FDFMatrix local_138;
  ulonglong local_e8;
  
  uVar10 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar9 = __real_322bcc77;
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_5c8;
  local_500 = (longlong)param_1;
  iVar18 = *(int *)(*(longlong *)((longlong)this + 8) + local_500 * 8);
  uVar25 = (ulonglong)iVar18;
  if (iVar18 < *(int *)(*(longlong *)((longlong)this + 8) + 4 + local_500 * 8) + iVar18) {
    lVar26 = uVar25 << 2;
    fVar33 = __real_3f800000;
    fVar36 = __real_3f000000;
    do {
      lVar5 = *(longlong *)this;
      uVar24 = (uint)uVar25;
      iVar18 = *(int *)(lVar5 + 0x100);
      uVar19 = 0;
      if ((int)uVar24 < iVar18) {
        uVar19 = ~uVar24 >> 0x1f;
      }
      if (uVar19 == 0) {
        local_5a8 = (longlong)(int)uVar24;
        local_5a0 = (longlong)iVar18;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar18 = *(int *)(*(longlong *)(lVar5 + 0xf8) + lVar26);
      if ((iVar18 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldObjectManagement.cpp"
                              ,0x251,
                              L"Invalid instances should\'ve been skipped in ProcessPrimitiveUpdate(...)"
                             ), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar5 = *(longlong *)this;
      iVar20 = *(int *)(lVar5 + 0x480);
      if (iVar18 < iVar20) {
        if ((iVar18 < 0) &&
           (local_5a8 = (longlong)iVar18, local_5a0 = (longlong)iVar20,
           bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = *(longlong *)(lVar5 + 0x478);
        lVar21 = (longlong)iVar18 * 0x60;
        local_580 = *(longlong **)(*(longlong *)(lVar21 + lVar5) + 8);
        if (1 < *(int *)((longlong)this + 0x18)) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DFUpdateCS);
        }
        lVar6 = *(longlong *)this;
        *(int *)(*(longlong *)(lVar6 + 0x88) + (ulonglong)*(uint *)(lVar6 + 0x98) * 4) = iVar18;
        iVar20 = *(int *)(lVar6 + 0x98);
        *(int *)(lVar6 + 0x98) = iVar20 + 1;
        puVar23 = (undefined4 *)
                  ((ulonglong)(uint)(iVar20 * *(int *)(lVar6 + 0xa0)) + *(longlong *)(lVar6 + 0x90))
        ;
        lVar6 = *(longlong *)this;
        *(int *)(*(longlong *)(lVar6 + 0xc0) + (ulonglong)*(uint *)(lVar6 + 0xd0) * 4) = iVar18;
        iVar18 = *(int *)(lVar6 + 0xd0);
        *(int *)(lVar6 + 0xd0) = iVar18 + 1;
        pfVar22 = (float *)((ulonglong)(uint)(iVar18 * *(int *)(lVar6 + 0xd8)) +
                           *(longlong *)(lVar6 + 200));
        if (1 < *(int *)((longlong)this + 0x18)) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DFUpdateCS);
        }
        local_590 = 0;
        (**(code **)(*local_580 + 0xe8))(local_580,&local_590,&local_584);
        local_2b8.M[3][1] = *(double *)(lVar21 + 0x10 + lVar5);
        local_2b8.M[3][2] = *(double *)(lVar21 + 0x18 + lVar5);
        local_550 = *(float *)(local_590 + 8);
        fStack_54c = *(float *)(local_590 + 0xc);
        fStack_548 = *(float *)(local_590 + 0x10);
        fStack_544 = *(float *)(local_590 + 0x14);
        local_540 = *(undefined8 *)(local_590 + 0x18);
        fVar31 = (float)((ulonglong)local_540 >> 0x20);
        local_538 = *(undefined4 *)(local_590 + 0x20);
        fVar37 = (fStack_544 - local_550) * fVar36;
        fVar27 = ((float)local_540 - fStack_54c) * fVar36;
        fVar38 = (fVar31 - fStack_548) * fVar36;
        local_508 = CONCAT44(fVar31,fVar27);
        local_2b8.M[3][0] = *(double *)(lVar21 + 8 + lVar5);
        if (fVar27 <= fVar37) {
          fVar27 = fVar37;
        }
        if (fVar27 <= fVar38) {
          fVar27 = fVar38;
        }
        dVar8 = (double)((*(float *)(lVar21 + 0x50 + lVar5) + *(float *)(lVar21 + 0x44 + lVar5)) *
                        fVar36) + local_2b8.M[3][0];
        fVar31 = (float)dVar8;
        fVar35 = (float)(dVar8 - (double)fVar31);
        dVar8 = (double)((*(float *)(lVar21 + 0x48 + lVar5) + *(float *)(lVar21 + 0x54 + lVar5)) *
                        fVar36) + local_2b8.M[3][1];
        fVar32 = (float)dVar8;
        local_588 = (float)(dVar8 - (double)fVar32);
        dVar8 = (double)((*(float *)(lVar21 + 0x4c + lVar5) + *(float *)(lVar21 + 0x58 + lVar5)) *
                        fVar36) + local_2b8.M[3][2];
        fVar34 = (float)dVar8;
        local_598 = (float)(dVar8 - (double)fVar34);
        local_55c = CONCAT44(local_588,fVar35);
        local_568 = CONCAT44(fVar32,fVar31);
        local_4f8[0]._0_8_ = CONCAT44(fVar32,fVar31);
        uVar1 = *(undefined8 *)(lVar21 + 0x20 + lVar5);
        local_2b8.M[0][0] = (double)(float)uVar1;
        local_2b8.M[0][1] = (double)(float)((ulonglong)uVar1 >> 0x20);
        local_2b8.M[0][2] = (double)*(float *)(lVar21 + 0x28 + lVar5);
        uVar1 = *(undefined8 *)(lVar21 + 0x2c + lVar5);
        local_2b8.M[1][0] = (double)(float)uVar1;
        local_2b8.M[1][1] = (double)(float)((ulonglong)uVar1 >> 0x20);
        local_2b8.M[1][2] = (double)*(float *)(lVar21 + 0x34 + lVar5);
        uVar1 = *(undefined8 *)(lVar21 + 0x38 + lVar5);
        local_2b8.M[2][0] = (double)(float)uVar1;
        local_2b8.M[2][1] = (double)(float)((ulonglong)uVar1 >> 0x20);
        local_2b8.M[2][2] = (double)*(float *)(lVar21 + 0x40 + lVar5);
        local_2b8.M[3][3] = __real_3ff0000000000000;
        local_2b8.M[0][3] = 0.0;
        local_2b8.M[1][3] = 0.0;
        local_2b8.M[2][3] = 0.0;
        local_594 = fVar33 / fVar27;
        local_560 = fVar34;
        local_554 = local_598;
        local_4f8[0]._8_4_ = fVar34;
        pFVar15 = FDFMatrix::MakeToRelativeWorldMatrix
                            (&local_138,(TVector<float> *)&local_4f8[0]._s_0,&local_2b8);
        local_238.M[0][0] = (pFVar15->M).M[0][0];
        local_238.M[0][1] = (pFVar15->M).M[0][1];
        local_238.M[0][2] = (pFVar15->M).M[0][2];
        local_238.M[0][3] = (pFVar15->M).M[0][3];
        local_238.M[1][0] = (pFVar15->M).M[1][0];
        local_238.M[1][1] = (pFVar15->M).M[1][1];
        local_238.M[1][2] = (pFVar15->M).M[1][2];
        local_238.M[1][3] = (pFVar15->M).M[1][3];
        local_238.M[2][0] = (pFVar15->M).M[2][0];
        local_238.M[2][1] = (pFVar15->M).M[2][1];
        local_238.M[2][2] = (pFVar15->M).M[2][2];
        local_238.M[2][3] = (pFVar15->M).M[2][3];
        local_238.M[3]._0_8_ = *(undefined8 *)(pFVar15->M).M[3];
        local_238.M[3]._8_8_ = *(undefined8 *)((pFVar15->M).M[3] + 2);
        if (((((((float)((uint)local_238.M[0][0] & uVar10) <= fVar9) &&
               ((float)((uint)local_238.M[0][1] & uVar10) <= fVar9)) &&
              ((float)((uint)local_238.M[0][2] & uVar10) <= fVar9)) &&
             (((float)((uint)local_238.M[1][0] & uVar10) <= fVar9 &&
              ((float)((uint)local_238.M[1][1] & uVar10) <= fVar9)))) &&
            (((float)((uint)local_238.M[1][2] & uVar10) <= fVar9 &&
             (((float)((uint)local_238.M[2][0] & uVar10) <= fVar9 &&
              ((float)((uint)local_238.M[2][1] & uVar10) <= fVar9)))))) &&
           ((float)((uint)local_238.M[2][2] & uVar10) <= fVar9)) {
          local_4c8 = 
          L"TMatrix<T>::InverseFast(), trying to invert a NIL matrix, this results in NaNs! Use Inverse() instead."
          ;
          if (1 < (byte)LogUnrealMath._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`private:_static_void___cdecl_UE::Math::TMatrix<float>::ErrorEnsure(wchar_t_const*___ptr64)'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
          }
          local_4c0[0] = &local_4c8;
          `UE::Math::TMatrix<float>::ErrorEnsure'::__l2::<lambda_1>::operator()(local_4c0);
        }
        bVar14 = FMath::MatrixInverse(&local_1b8,&local_238);
        if (!bVar14) {
          local_518 = 
          L"TMatrix<T>::InverseFast(), trying to invert a non-invertible matrix, this results in NaNs! Use Inverse() instead."
          ;
          if (1 < (byte)LogUnrealMath._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`private:_static_void___cdecl_UE::Math::TMatrix<float>::ErrorEnsure(wchar_t_const*___ptr64)'
                        ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
          }
          local_510 = &local_518;
          `UE::Math::TMatrix<float>::ErrorEnsure'::__l2::<lambda_1>::operator()(&local_510);
        }
        fVar13 = fStack_548;
        fVar12 = fStack_54c;
        fVar11 = local_550;
        fVar30 = *(float *)(lVar21 + 0x50 + lVar5) - *(float *)(lVar21 + 0x44 + lVar5);
        fVar28 = *(float *)(lVar21 + 0x54 + lVar5) - *(float *)(lVar21 + 0x48 + lVar5);
        fVar29 = *(float *)(lVar21 + 0x58 + lVar5) - *(float *)(lVar21 + 0x4c + lVar5);
        *pfVar22 = fVar31;
        pfVar22[1] = fVar32;
        pfVar22[2] = fVar34;
        pfVar22[3] = 1.0;
        pfVar22[4] = fVar35;
        pfVar22[5] = local_588;
        pfVar22[6] = local_598;
        pfVar22[7] = SQRT((fVar28 * fVar28 + fVar30 * fVar30 + fVar29 * fVar29) * __real_3e800000);
        bVar2 = *(byte *)((longlong)local_580 + 0x7d);
        bVar3 = *(byte *)(local_580 + 0xf);
        bVar4 = *(byte *)((longlong)local_580 + 0x81);
        local_3f8.M[0][1] = 0.0;
        local_3f8.M[0][2] = 0.0;
        local_3f8.M[0][3] = 0.0;
        local_3f8.M[1][0] = 0.0;
        local_3f8.M[1][2] = 0.0;
        local_3f8.M[1][3] = 0.0;
        local_3f8.M[2][0] = 0.0;
        local_3f8.M[2][1] = 0.0;
        local_3f8.M[2][3] = 0.0;
        lVar6 = local_580[0xd];
        local_3f8.M[0][0] = __real_3f800000 / (fVar33 / fVar27);
        local_3f8.M[3][0] = ___xmm_3f800000000000000000000000000000;
        local_3f8.M[3][1] = _UNK_150689644;
        local_3f8.M[3][2] = _UNK_150689648;
        local_3f8.M[3][3] = _UNK_15068964c;
        pfVar22[8] = fVar30 * fVar36;
        pfVar22[9] = fVar28 * fVar36;
        pfVar22[10] = fVar29 * fVar36;
        pfVar22[0xb] = (float)((bVar3 >> 1 & 1) << 4 | (bVar4 >> 1 & 1) << 2 | (bVar2 >> 4 & 1) << 5
                               | (bVar2 >> 2 & 1) << 3 | (bVar2 >> 1 & 1) * 2 |
                              (uint)((char)lVar6 == '\x02'));
        local_338.M[0][0] = ___xmm_0000000000000000000000003f800000;
        local_338.M[0][1] = _UNK_1506894f4;
        local_338.M[0][2] = _UNK_1506894f8;
        local_338.M[0][3] = _UNK_1506894fc;
        local_338.M[1][0] = ___xmm_00000000000000003f80000000000000;
        local_338.M[1][1] = _UNK_150689504;
        local_338.M[1][2] = _UNK_150689508;
        local_338.M[1][3] = _UNK_15068950c;
        local_338.M[2][0] = ___xmm_000000003f8000000000000000000000;
        local_338.M[2][1] = _UNK_150689534;
        local_338.M[2][2] = _UNK_150689538;
        local_338.M[2][3] = _UNK_15068953c;
        local_338.M[3][3] = 1.0;
        fVar33 = fStack_544 * fVar36;
        fVar27 = (float)local_540 * fVar36;
        local_338.M[3][0] = local_550 * fVar36 + fVar33;
        fVar36 = local_540._4_4_ * fVar36;
        local_338.M[3][1] = fStack_54c * __real_3f000000 + fVar27;
        local_338.M[3][2] = fStack_548 * __real_3f000000 + fVar36;
        local_3f8.M[1][1] = local_3f8.M[0][0];
        local_3f8.M[2][2] = local_3f8.M[0][0];
        VectorMatrixMultiply(&local_1f8,&local_3f8,&local_338);
        VectorMatrixMultiply(&local_438,&local_1f8,&local_238);
        local_2f8.M[0][0] = ___xmm_0000000000000000000000003f800000;
        local_2f8.M[0][1] = _UNK_1506894f4;
        local_2f8.M[0][2] = _UNK_1506894f8;
        local_2f8.M[0][3] = _UNK_1506894fc;
        local_2f8.M[1][0] = ___xmm_00000000000000003f80000000000000;
        local_2f8.M[1][1] = _UNK_150689504;
        local_2f8.M[1][2] = _UNK_150689508;
        local_2f8.M[1][3] = _UNK_15068950c;
        local_2f8.M[2][0] = ___xmm_000000003f8000000000000000000000;
        local_2f8.M[2][1] = _UNK_150689534;
        local_2f8.M[2][2] = _UNK_150689538;
        local_2f8.M[2][3] = _UNK_15068953c;
        local_2f8.M[3][3] = 1.0;
        local_2f8.M[3][0] = fVar11 * __real_bf000000 - fVar33;
        local_2f8.M[3][1] = fVar12 * __real_bf000000 - fVar27;
        local_2f8.M[3][2] = fVar13 * __real_bf000000 - fVar36;
        VectorMatrixMultiply(&local_178,&local_1b8,&local_2f8);
        local_3b8.M[0][0] = local_594;
        local_3b8.M[1][1] = local_594;
        local_3b8.M[2][2] = local_594;
        local_3b8.M[3][0] = ___xmm_3f800000000000000000000000000000;
        local_3b8.M[3][1] = _UNK_150689644;
        local_3b8.M[3][2] = _UNK_150689648;
        local_3b8.M[3][3] = _UNK_15068964c;
        local_3b8.M[0][1] = 0.0;
        local_3b8.M[0][2] = 0.0;
        local_3b8.M[0][3] = 0.0;
        local_3b8.M[1][0] = 0.0;
        local_3b8.M[1][2] = 0.0;
        local_3b8.M[1][3] = 0.0;
        local_3b8.M[2][0] = 0.0;
        local_3b8.M[2][1] = 0.0;
        local_3b8.M[2][3] = 0.0;
        VectorMatrixMultiply(&local_378,&local_178,&local_3b8);
        *puVar23 = (undefined4)local_568;
        puVar23[1] = local_568._4_4_;
        puVar23[2] = local_560;
        puVar23[3] = 0x3f800000;
        fVar33 = (float)local_508 * local_594;
        puVar23[4] = local_378.M[0][0];
        puVar23[5] = local_378.M[1][0];
        puVar23[6] = local_378.M[2][0];
        puVar23[7] = local_378.M[3][0];
        puVar23[8] = local_378.M[0][1];
        puVar23[9] = local_378.M[1][1];
        puVar23[10] = local_378.M[2][1];
        puVar23[0xb] = local_378.M[3][1];
        puVar23[0xc] = local_378.M[0][2];
        puVar23[0xd] = local_378.M[1][2];
        puVar23[0xe] = local_378.M[2][2];
        puVar23[0xf] = local_378.M[3][2];
        local_570 = *(int *)(local_590 + 0x30) * 7;
        local_578 = (int)*(undefined8 *)(local_590 + 0x28);
        local_578 = local_578 * 7;
        iStack_574 = (int)((ulonglong)*(undefined8 *)(local_590 + 0x28) >> 0x20);
        iStack_574 = iStack_574 * 7;
        iVar18 = 1;
        if (*(char *)(local_590 + 0x24) != '\0') {
          iVar18 = -1;
        }
        fVar31 = (fVar37 * local_594 * GMeshSDFSurfaceBiasExpand) / (float)local_578;
        fVar27 = (fVar33 * GMeshSDFSurfaceBiasExpand) / (float)iStack_574;
        fVar36 = (fVar38 * local_594 * GMeshSDFSurfaceBiasExpand) / (float)local_570;
        puVar23[0x10] = fVar37 * local_594;
        puVar23[0x11] = fVar33;
        puVar23[0x12] = fVar38 * local_594;
        puVar23[0x13] = SQRT(fVar27 * fVar27 + fVar31 * fVar31 + fVar36 * fVar36) * (float)iVar18;
        pFVar16 = TScenePrimitiveArray<FPrimitiveBounds>::Get
                            (*(TScenePrimitiveArray<FPrimitiveBounds> **)((longlong)this + 0x10),
                             *(int *)(*(longlong *)(lVar21 + lVar5) + 0x188));
        fVar33 = pFVar16->MinDrawDistance;
        fVar36 = pFVar16->MaxCullDistance;
        if (fVar36 <= 0.0) {
          fVar36 = 0.0;
        }
        pFVar17 = GetCachedScalabilityCVars();
        fVar36 = fVar36 * pFVar17->ViewDistanceScale;
        iVar18 = *(int *)(*(longlong *)(lVar21 + lVar5) + 0x224);
        if (local_580[0x13] != 0) {
          iVar18 = iVar18 + *(int *)(lVar21 + 0x5c + lVar5);
        }
        puVar23[0x14] = fVar33 * fVar33;
        puVar23[0x15] = fVar36 * fVar36;
        puVar23[0x16] = local_584;
        puVar23[0x17] = iVar18;
        puVar23[0x18] = local_438.M[0][0];
        puVar23[0x19] = local_438.M[1][0];
        puVar23[0x1a] = local_438.M[2][0];
        puVar23[0x1b] = local_438.M[3][0];
        local_528 = 0.0;
        puVar23[0x1c] = local_438.M[0][1];
        puVar23[0x1d] = local_438.M[1][1];
        puVar23[0x1e] = local_438.M[2][1];
        puVar23[0x1f] = local_438.M[3][1];
        puVar23[0x20] = local_438.M[0][2];
        puVar23[0x21] = local_438.M[1][2];
        puVar23[0x22] = local_438.M[2][2];
        puVar23[0x23] = local_438.M[3][2];
        fVar33 = local_438.M[0][1] * local_438.M[0][1] + local_438.M[0][0] * local_438.M[0][0] +
                 local_438.M[0][2] * local_438.M[0][2];
        if (fVar9 < fVar33) {
          local_528 = SQRT(fVar33);
        }
        fStack_524 = 0.0;
        fVar33 = local_438.M[1][1] * local_438.M[1][1] + local_438.M[1][0] * local_438.M[1][0] +
                 local_438.M[1][2] * local_438.M[1][2];
        if (fVar9 < fVar33) {
          fStack_524 = SQRT(fVar33);
        }
        fStack_520 = 0.0;
        fVar33 = local_438.M[2][1] * local_438.M[2][1] + local_438.M[2][0] * local_438.M[2][0] +
                 local_438.M[2][2] * local_438.M[2][2];
        if (fVar9 < fVar33) {
          fStack_520 = SQRT(fVar33);
        }
        lVar5 = *(longlong *)this;
        uVar19 = ((uint)(local_590 >> 0x14) & 0xffff ^ (uint)(local_590 >> 4)) * -0x7a143595;
        uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
        iVar18 = -1;
        if (*(int *)(lVar5 + 0x160) != *(int *)(lVar5 + 0x18c)) {
          lVar21 = lVar5 + 400;
          if (*(longlong *)(lVar5 + 0x198) != 0) {
            lVar21 = *(longlong *)(lVar5 + 0x198);
          }
          iVar20 = *(int *)(lVar21 + (ulonglong)
                                     (*(int *)(lVar5 + 0x1a0) - 1U & (uVar19 >> 0x10 ^ uVar19)) * 4)
          ;
          if (iVar20 != -1) {
            do {
              if (*(ulonglong *)((longlong)iVar20 * 0xe8 + *(longlong *)(lVar5 + 0x158)) ==
                  local_590) {
                iVar18 = iVar20;
                if (iVar20 != -1) goto LAB_144862c47;
                break;
              }
              iVar20 = *(int *)((longlong)iVar20 * 0xe8 + 0xe0 + *(longlong *)(lVar5 + 0x158));
            } while (iVar20 != -1);
          }
        }
        iVar20 = iVar18;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("AssetStateSetId.IsValidId()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldObjectManagement.cpp"
                            ,0x2be,L"");
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
LAB_144862c47:
        fVar36 = __real_3f000000;
        fVar33 = __real_3f800000;
        *(ulonglong *)(puVar23 + 0x24) = CONCAT44(fStack_524,local_528);
        *(ulonglong *)(puVar23 + 0x26) = CONCAT44(iVar20,fStack_520);
        iStack_51c = iVar20;
      }
      uVar25 = (ulonglong)(uVar24 + 1);
      lVar26 = lVar26 + 4;
    } while ((int)(uVar24 + 1) <
             *(int *)(*(longlong *)((longlong)this + 8) + 4 + local_500 * 8) +
             *(int *)(*(longlong *)((longlong)this + 8) + local_500 * 8));
  }
  return;
}

// AsyncUpdate @ 144867a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FDistanceFieldSceneData::AsyncUpdate
          (FDistanceFieldSceneData *this,FRHICommandListBase *param_1,
          FDistanceFieldAsyncUpdateParameters *param_2)

{
  undefined8 *puVar1;
  EIoErrorCode EVar2;
  undefined4 uVar3;
  FName FVar4;
  IPooledRenderTarget *pIVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  FDistanceFieldSceneData *pFVar14;
  FRHICommandListBase *pFVar15;
  FDistanceFieldAsyncUpdateParameters *pFVar16;
  bool bVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  FName *pFVar22;
  FThreadSafeStaticStat<_private:_void___cdecl_FDistanceFieldSceneData::AsyncUpdate(FRHICommandListBase_&,FDistanceFieldAsyncUpdateParameters_&)_::_2_::FStat_STAT_FDistanceFieldSceneData_AsyncUpdate>
  FVar23;
  longlong lVar24;
  TIntVector4<int> *pTVar25;
  uchar *puVar26;
  uint *puVar27;
  TVector4<float> *pTVar28;
  longlong lVar29;
  FIoStatus *pFVar30;
  void *pvVar31;
  TEventRef<unsigned_int> TVar32;
  long64 lVar33;
  FIoRequest FVar34;
  FWriteBuffer *pFVar35;
  IAsyncReadFileHandle *pIVar36;
  undefined8 uVar37;
  ulonglong uVar38;
  int *piVar39;
  uint uVar40;
  TArray<FDistanceFieldReadRequest,TSizedDefaultAllocator<32>_> *pTVar41;
  longlong lVar42;
  longlong lVar43;
  FRDGScatterUploader *pFVar44;
  float *pfVar45;
  uint uVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  FScriptContainerElement *pFVar51;
  FScriptContainerElement *pFVar52;
  int *piVar53;
  void *pvVar54;
  bool bVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  undefined1 auStackY_328 [32];
  undefined1 local_2c6;
  undefined1 local_2c5;
  undefined1 local_2c4 [4];
  uint local_2c0;
  FName local_2b8;
  undefined8 local_2b0;
  int local_2a8;
  int local_2a0;
  int local_29c;
  int local_298;
  longlong local_290;
  longlong local_288;
  FDistanceFieldSceneData *local_280;
  FRHICommandListBase *local_278;
  FColor_u_0 local_270;
  int local_26c;
  longlong local_268;
  longlong local_260;
  FDistanceFieldAsyncUpdateParameters *local_258;
  longlong local_250;
  longlong local_248;
  FScriptContainerElement *local_240;
  undefined8 local_238;
  FName local_230;
  FName local_228;
  undefined8 local_218;
  int local_210;
  undefined8 local_208;
  int local_200;
  int local_1f8;
  undefined4 uStack_1f4;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  int local_1e8;
  uint local_1e4;
  int local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined4 local_1c0;
  int local_1bc;
  longlong local_1b8;
  FIoRequest local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  FScriptContainerElement *local_198;
  FName local_190;
  undefined1 local_188 [16];
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  void *local_148;
  FIoRequest local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  longlong local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  FIoBatch local_108;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FIoStatus local_d8;
  longlong local_c8;
  ulonglong uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 *local_a8;
  longlong local_a0;
  FIoReadOptions local_98 [3];
  
  local_98[0].TargetVa = (void *)(__security_cookie.value ^ (ulonglong)auStackY_328);
  local_280 = this;
  local_278 = param_1;
  local_258 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FDistanceFieldSceneData_AsyncUpdate ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FDistanceFieldSceneData::AsyncUpdate(FRHICommandListBase_&,FDistanceFieldAsyncUpdateParameters_&)_::_2_::FStat_STAT_FDistanceFieldSceneData_AsyncUpdate>
         )0x0) {
      pFVar22 = ::FName::FName(&local_f0,"STAT_FDistanceFieldSceneData_AsyncUpdate");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FDistanceFieldSceneData_AsyncUpdate,
                 *pFVar22,L"STAT_FDistanceFieldSceneData_AsyncUpdate","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar23 = StatPtr_STAT_FDistanceFieldSceneData_AsyncUpdate;
  if (StatPtr_STAT_FDistanceFieldSceneData_AsyncUpdate ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FDistanceFieldSceneData::AsyncUpdate(FRHICommandListBase_&,FDistanceFieldAsyncUpdateParameters_&)_::_2_::FStat_STAT_FDistanceFieldSceneData_AsyncUpdate>
       )0x0) {
    pFVar22 = ::FName::FName(&local_e8,"STAT_FDistanceFieldSceneData_AsyncUpdate");
    FVar23 = (FThreadSafeStaticStat<_private:_void___cdecl_FDistanceFieldSceneData::AsyncUpdate(FRHICommandListBase_&,FDistanceFieldAsyncUpdateParameters_&)_::_2_::FStat_STAT_FDistanceFieldSceneData_AsyncUpdate>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FDistanceFieldSceneData_AsyncUpdate,*pFVar22,
                          L"STAT_FDistanceFieldSceneData_AsyncUpdate","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar4 = *(FName *)FVar23;
  bVar7 = false;
  bVar8 = false;
  local_228.ComparisonIndex.Value = 0;
  local_228.Number = 0;
  bVar17 = false;
  bVar55 = false;
  if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_270.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_270._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
      bVar7 = false;
      bVar8 = true;
      bVar17 = false;
      bVar55 = true;
      if (-1 < CpuChannel->Enabled) {
        local_230.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        local_230.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_230,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                   ,0x249);
        bVar7 = true;
        bVar8 = true;
        bVar17 = true;
        bVar55 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_2b8 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar17 = true;
      goto LAB_144867bcb;
    }
  }
  bVar8 = bVar55;
  bVar7 = bVar17;
  bVar17 = false;
  local_2b8 = local_228;
LAB_144867bcb:
  bVar55 = -1 < CpuChannel->Enabled;
  if (bVar55) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId586,"FDistanceFieldSceneData::AsyncUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
               ,0x24a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId586);
  }
  pIVar5 = (this->IndirectionAtlas).Reference;
  iVar49 = GPixelFormats[3].BlockBytes << 9;
  local_26c = iVar49;
  if (pIVar5 == (IPooledRenderTarget *)0x0) {
    local_2b0 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    uVar37 = local_2b0;
    local_2a8 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    local_2b0._4_4_ =
         (int)((ulonglong)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_ >> 0x20);
    local_2a0 = local_2b0._4_4_;
    local_2b0._0_4_ = (int)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    local_29c = (int)local_2b0;
    local_2b0 = uVar37;
  }
  else {
    lVar24 = (**(code **)(pIVar5->_padding_ + 0x10))();
    local_29c = *(int *)(lVar24 + 0x2c);
    local_2a0 = *(int *)(lVar24 + 0x30);
  }
  pFVar15 = local_278;
  uVar40 = (param_2->AtlasUpload).NumBrickUploadCoordinatesBytes;
  local_298 = 0;
  if (uVar40 != 0) {
    pTVar25 = FRHICommandListBase::LockBuffer
                        (local_278,
                         (((param_2->AtlasUpload).BrickUploadCoordinatesBuffer)->Buffer).Reference,0
                         ,uVar40,RLM_WriteOnly);
    (param_2->AtlasUpload).BrickUploadCoordinatesPtr = pTVar25;
  }
  uVar40 = (param_2->AtlasUpload).NumBrickUploadDataBytes;
  if (uVar40 != 0) {
    puVar26 = FRHICommandListBase::LockBuffer
                        (pFVar15,(((param_2->AtlasUpload).BrickUploadDataBuffer)->Buffer).Reference,
                         0,uVar40,RLM_WriteOnly);
    (param_2->AtlasUpload).BrickUploadDataPtr = puVar26;
  }
  uVar40 = (param_2->IndirectionAtlasUpload).NumIndirectionUploadIndicesBytes;
  if (uVar40 != 0) {
    puVar27 = FRHICommandListBase::LockBuffer
                        (pFVar15,(((param_2->IndirectionAtlasUpload).IndirectionUploadIndicesBuffer)
                                 ->Buffer).Reference,0,uVar40,RLM_WriteOnly);
    (param_2->IndirectionAtlasUpload).IndirectionUploadIndicesPtr = puVar27;
  }
  uVar40 = (param_2->IndirectionAtlasUpload).NumIndirectionUploadDataBytes;
  if (uVar40 != 0) {
    pTVar28 = FRHICommandListBase::LockBuffer
                        (pFVar15,(((param_2->IndirectionAtlasUpload).IndirectionUploadDataBuffer)->
                                 Buffer).Reference,0,uVar40,RLM_WriteOnly);
    (param_2->IndirectionAtlasUpload).IndirectionUploadDataPtr = pTVar28;
  }
  if (param_2->IndirectionTableUploader != (FRDGScatterUploader *)0x0) {
    FRDGScatterUploader::Lock(param_2->IndirectionTableUploader,pFVar15);
  }
  fVar13 = __real_3a802008;
  iVar12 = _UNK_150631e0c;
  iVar11 = _UNK_150631e08;
  iVar10 = __xmm_00000003000000020000000100000000._4_4_;
  iVar21 = (int)__xmm_00000003000000020000000100000000;
  fVar9 = __real_3f800000;
  local_2c0 = (param_2->ReadRequestsToUpload).ArrayNum;
  uVar38 = (ulonglong)(int)local_2c0;
  pFVar51 = (param_2->ReadRequestsToUpload).AllocatorInstance.Data;
  local_198 = pFVar51 + uVar38 * 0x50;
  local_268 = 0;
  while( true ) {
    pFVar52 = local_198;
    local_240 = pFVar51;
    if ((param_2->ReadRequestsToUpload).ArrayNum != (int)uVar38) {
      local_2c6 = 0;
      `TCheckedPointerIterator<FDistanceFieldReadRequest,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_2c6);
    }
    if (pFVar51 == pFVar52) break;
    local_1e8 = *(int *)pFVar51;
    local_1e4 = *(uint *)(pFVar51 + 4);
    local_1e0 = *(int *)(pFVar51 + 8);
    local_1d8 = *(longlong *)(pFVar51 + 0x10);
    local_1d0 = *(longlong *)(pFVar51 + 0x18);
    local_1c8 = *(longlong *)(pFVar51 + 0x20);
    local_1c0 = *(undefined4 *)(pFVar51 + 0x28);
    local_1bc = *(int *)(pFVar51 + 0x2c);
    local_1b8 = *(longlong *)(pFVar51 + 0x30);
    FIoRequest::FIoRequest(&local_1b0,(FIoRequest *)(pFVar51 + 0x38));
    uVar40 = local_1e4;
    local_1a8 = *(undefined8 *)(pFVar51 + 0x40);
    lVar43 = (longlong)(int)local_1e4;
    lVar24 = *(longlong *)&(this->AssetStateArray).Elements;
    local_1a0 = *(undefined8 *)(pFVar51 + 0x48);
    lVar29 = (longlong)local_1e8;
    lVar42 = lVar29 * 0xe8 + 0x10 + lVar24;
    uVar19 = 0;
    if ((int)local_1e4 < *(int *)(lVar42 + 200)) {
      uVar19 = ~local_1e4 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar24 = *(longlong *)(lVar29 * 0xe8 + lVar24);
    if (*(longlong *)(lVar42 + 0xc0) != 0) {
      lVar42 = *(longlong *)(lVar42 + 0xc0);
    }
    lVar43 = lVar43 * 0x40;
    lVar29 = (ulonglong)(2 - uVar40) * 0x38;
    local_248 = local_1d0;
    if (local_1c8 != 0) {
      local_248 = local_1b8;
    }
    iVar49 = local_1e0 * iVar49;
    uVar40 = *(int *)(lVar29 + 0x2c + lVar24) * *(int *)(lVar29 + 0x30 + lVar24) *
             *(int *)(lVar29 + 0x28 + lVar24);
    local_260 = lVar43;
    if ((local_1d8 != *(longlong *)(lVar24 + 0x108)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("ReadRequest.BuiltDataId == AssetState.BuiltData->GetId()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                            ,0x269,L""), bVar18)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((local_1bc != iVar49 + uVar40 * 4) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("ReadRequest.BulkSize == ExpectedBulkSize",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                            ,0x270,
                            L"Bulk size mismatch: BulkSize %u, ExpectedSize %u, NumIndirectionEntries %u, NumBricks %u, ReversedMip %u"
                           ), bVar18)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_288 = lVar43 + 0x20 + lVar42;
    lVar24 = *(longlong *)(local_288 + 0x10);
    if (lVar24 != 0) {
      local_288 = lVar24;
    }
    piVar53 = (int *)0x0;
    local_290 = 0;
    if (GDistanceFieldOffsetDataStructure == 0) {
      pFVar44 = param_2->IndirectionTableUploader;
      uVar38 = 0;
      iVar49 = *(int *)(lVar43 + 0xc + lVar42);
      lVar24 = pFVar44->_padding_ + (ulonglong)(uint)pFVar44->_padding_ * 4;
      if (uVar40 != 0) {
        if (0xf < uVar40) {
          do {
            iVar50 = (int)uVar38;
            uVar46 = iVar50 + 8;
            uVar19 = iVar50 + 4;
            piVar53 = (int *)(lVar24 + uVar38 * 4);
            *piVar53 = iVar50 + iVar49 + iVar21;
            piVar53[1] = iVar50 + iVar49 + iVar10;
            piVar53[2] = iVar50 + iVar49 + iVar11;
            piVar53[3] = iVar50 + iVar49 + iVar12;
            piVar53 = (int *)(lVar24 + (ulonglong)uVar19 * 4);
            *piVar53 = uVar19 + iVar49 + iVar21;
            piVar53[1] = uVar19 + iVar49 + iVar10;
            piVar53[2] = uVar19 + iVar49 + iVar11;
            piVar53[3] = uVar19 + iVar49 + iVar12;
            iVar20 = iVar50 + iVar49;
            uVar19 = iVar50 + 0x10;
            uVar38 = (ulonglong)uVar19;
            piVar53 = (int *)(lVar24 + (ulonglong)uVar46 * 4);
            *piVar53 = uVar46 + iVar49 + iVar21;
            piVar53[1] = uVar46 + iVar49 + iVar10;
            piVar53[2] = uVar46 + iVar49 + iVar11;
            piVar53[3] = uVar46 + iVar49 + iVar12;
            auVar59._4_4_ = iVar20 + 0xd;
            auVar59._0_4_ = iVar20 + 0xc;
            auVar59._12_4_ = iVar20 + 0xf;
            auVar59._8_4_ = iVar20 + 0xe;
            *(undefined1 (*) [16])(lVar24 + (ulonglong)(iVar50 + 0xc) * 4) = auVar59;
          } while (uVar19 < uVar40 - (uVar40 & 0xf));
          if (uVar40 <= uVar19) goto LAB_144868032;
        }
        piVar53 = (int *)(lVar24 + uVar38 * 4);
        do {
          iVar50 = (int)uVar38;
          uVar19 = iVar50 + 1;
          uVar38 = (ulonglong)uVar19;
          *piVar53 = iVar50 + iVar49;
          piVar53 = piVar53 + 1;
        } while (uVar19 < uVar40);
      }
LAB_144868032:
      iVar49 = (int)pFVar44->_padding_;
      piVar53 = (int *)((ulonglong)(uint)(iVar49 * (int)pFVar44->_padding_) + pFVar44->_padding_);
LAB_144868174:
      *(uint *)&pFVar44->_padding_ = iVar49 + uVar40;
    }
    else if (GDistanceFieldOffsetDataStructure == 1) {
      pFVar44 = param_2->IndirectionTableUploader;
      uVar38 = 0;
      iVar49 = *(int *)(lVar43 + 0xc + lVar42);
      lVar24 = pFVar44->_padding_ + (ulonglong)(uint)pFVar44->_padding_ * 4;
      if (uVar40 != 0) {
        if (0xf < uVar40) {
          do {
            iVar50 = (int)uVar38;
            uVar46 = iVar50 + 8;
            uVar19 = iVar50 + 4;
            piVar39 = (int *)(lVar24 + uVar38 * 4);
            *piVar39 = iVar50 + iVar49 + iVar21;
            piVar39[1] = iVar50 + iVar49 + iVar10;
            piVar39[2] = iVar50 + iVar49 + iVar11;
            piVar39[3] = iVar50 + iVar49 + iVar12;
            piVar39 = (int *)(lVar24 + (ulonglong)uVar19 * 4);
            *piVar39 = uVar19 + iVar49 + iVar21;
            piVar39[1] = uVar19 + iVar49 + iVar10;
            piVar39[2] = uVar19 + iVar49 + iVar11;
            piVar39[3] = uVar19 + iVar49 + iVar12;
            iVar20 = iVar50 + iVar49;
            uVar19 = iVar50 + 0x10;
            uVar38 = (ulonglong)uVar19;
            piVar39 = (int *)(lVar24 + (ulonglong)uVar46 * 4);
            *piVar39 = uVar46 + iVar49 + iVar21;
            piVar39[1] = uVar46 + iVar49 + iVar10;
            piVar39[2] = uVar46 + iVar49 + iVar11;
            piVar39[3] = uVar46 + iVar49 + iVar12;
            auVar60._4_4_ = iVar20 + 0xd;
            auVar60._0_4_ = iVar20 + 0xc;
            auVar60._12_4_ = iVar20 + 0xf;
            auVar60._8_4_ = iVar20 + 0xe;
            *(undefined1 (*) [16])(lVar24 + (ulonglong)(iVar50 + 0xc) * 4) = auVar60;
          } while (uVar19 < uVar40 - (uVar40 & 0xf));
          if (uVar40 <= uVar19) goto LAB_144868162;
        }
        piVar39 = (int *)(uVar38 * 4 + lVar24);
        do {
          iVar50 = (int)uVar38;
          uVar19 = iVar50 + 1;
          uVar38 = (ulonglong)uVar19;
          *piVar39 = iVar50 + iVar49;
          piVar39 = piVar39 + 1;
        } while (uVar19 < uVar40);
      }
LAB_144868162:
      iVar49 = (int)pFVar44->_padding_;
      local_290 = (ulonglong)(uint)(iVar49 * (int)pFVar44->_padding_) + pFVar44->_padding_;
      goto LAB_144868174;
    }
    iVar49 = 0;
    if (0 < (int)uVar40) {
      pfVar45 = (float *)(local_290 + 8);
      local_250 = local_268 << 4;
      local_188._8_8_ = local_248 - (longlong)piVar53;
      do {
        uVar19 = *(uint *)((longlong)piVar53 + local_188._8_8_);
        iVar50 = -1;
        fVar56 = 0.0;
        fVar57 = 0.0;
        fVar58 = 0.0;
        fVar61 = 0.0;
        if ((uVar19 != 0xffffffff) &&
           ((int)(uVar19 / (uint)GDistanceFieldBlockAllocatorSizeInBricks) <
            *(int *)(local_260 + 0x38 + lVar42))) {
          local_218 = *(undefined8 *)&(local_280->BrickTextureDimensionsInBricks).field0_0x0;
          local_210 = (local_280->BrickTextureDimensionsInBricks).field0_0x0._s_0.Z;
          iVar50 = GDistanceFieldBlockAllocatorSizeInBricks *
                   *(int *)(local_288 +
                           (longlong)(int)(uVar19 / (uint)GDistanceFieldBlockAllocatorSizeInBricks)
                           * 4) + uVar19 % (uint)GDistanceFieldBlockAllocatorSizeInBricks;
          iVar20 = (int)((ulonglong)local_218 >> 0x20);
          fVar58 = (float)(iVar50 % (int)local_218) * fVar13;
          fVar56 = (float)(iVar50 / (iVar20 * (int)local_218)) * fVar13;
          fVar57 = (float)(int)((longlong)
                                ((ulonglong)
                                 (uint)((int)((longlong)iVar50 / (longlong)(int)local_218) >> 0x1f)
                                 << 0x20 | (longlong)iVar50 / (longlong)(int)local_218 & 0xffffffffU
                                ) % (longlong)iVar20) * fVar13;
          fVar61 = fVar9;
        }
        if (GDistanceFieldOffsetDataStructure == 0) {
          *piVar53 = iVar50;
        }
        else if (GDistanceFieldOffsetDataStructure == 1) {
          if (local_290 != 0) {
            pfVar45[-2] = fVar58;
            pfVar45[-1] = fVar57;
            *pfVar45 = fVar56;
            pfVar45[1] = fVar61;
          }
        }
        else if (GDistanceFieldOffsetDataStructure == 2) {
          iVar50 = *(int *)(local_260 + lVar42);
          iVar20 = *(int *)(local_260 + 4 + lVar42);
          uVar37 = *(undefined8 *)(local_260 + 0x10 + lVar42);
          local_2b0._0_4_ = (int)uVar37;
          local_2b0._4_4_ = (int)((ulonglong)uVar37 >> 0x20);
          local_2b0._0_4_ = (int)local_2b0 + iVar49 % iVar50;
          local_2b0._4_4_ =
               local_2b0._4_4_ +
               (int)((longlong)
                     ((ulonglong)(uint)((int)((longlong)iVar49 / (longlong)iVar50) >> 0x1f) << 0x20
                     | (longlong)iVar49 / (longlong)iVar50 & 0xffffffffU) % (longlong)iVar20);
          local_2a8 = *(int *)(local_260 + 0x18 + lVar42) + iVar49 / (iVar20 * iVar50);
          (local_258->IndirectionAtlasUpload).IndirectionUploadIndicesPtr[local_268] =
               (local_2a8 * local_2a0 + local_2b0._4_4_) * local_29c + (int)local_2b0;
          local_268 = local_268 + 1;
          pTVar28 = (local_258->IndirectionAtlasUpload).IndirectionUploadDataPtr;
          *(float *)((longlong)&pTVar28->field0_0x0 + local_250) = fVar58;
          *(float *)((longlong)&pTVar28->field0_0x0 + local_250 + 4) = fVar57;
          *(float *)((longlong)&pTVar28->field0_0x0 + local_250 + 8) = fVar56;
          *(float *)((longlong)&pTVar28->field0_0x0 + local_250 + 0xc) = fVar61;
          local_250 = local_250 + 0x10;
        }
        iVar49 = iVar49 + 1;
        piVar53 = piVar53 + 1;
        pfVar45 = pfVar45 + 4;
        lVar43 = local_260;
      } while (iVar49 < (int)uVar40);
    }
    if ((*(int *)(lVar43 + 0x1c + lVar42) != local_1e0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("MipState.NumBricks == ReadRequest.NumDistanceFieldBricks",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                            ,0x2b3,L""), bVar18)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    param_2 = local_258;
    iVar49 = local_26c;
    iVar50 = local_298;
    lVar24 = (longlong)local_298;
    memcpy((local_258->AtlasUpload).BrickUploadDataPtr + (uint)(local_298 * local_26c),
           (void *)(local_248 + (longlong)(int)uVar40 * 4),(ulonglong)(uint)(local_1e0 * local_26c))
    ;
    this = local_280;
    local_298 = *(int *)(lVar43 + 0x1c + lVar42);
    if (0 < local_298) {
      uStack_1ec = 0;
      lVar24 = lVar24 << 4;
      iVar20 = 0;
      do {
        local_208 = *(undefined8 *)&(local_280->BrickTextureDimensionsInBricks).field0_0x0;
        iVar48 = iVar20 + 1;
        local_200 = (local_280->BrickTextureDimensionsInBricks).field0_0x0._s_0.Z;
        iVar47 = GDistanceFieldBlockAllocatorSizeInBricks *
                 *(int *)(local_288 +
                         (longlong)(iVar20 / GDistanceFieldBlockAllocatorSizeInBricks) * 4) +
                 iVar20 % GDistanceFieldBlockAllocatorSizeInBricks;
        local_1f8 = iVar47 % (int)local_208;
        iVar20 = (int)((ulonglong)local_208 >> 0x20);
        uStack_1f4 = (undefined4)
                     ((longlong)
                      ((ulonglong)(uint)((int)((longlong)iVar47 / (longlong)(int)local_208) >> 0x1f)
                       << 0x20 | (longlong)iVar47 / (longlong)(int)local_208 & 0xffffffffU) %
                     (longlong)iVar20);
        uStack_1f0 = iVar47 / (iVar20 * (int)local_208);
        puVar1 = (undefined8 *)
                 ((longlong)&((param_2->AtlasUpload).BrickUploadCoordinatesPtr)->field0_0x0 + lVar24
                 );
        *puVar1 = CONCAT44(uStack_1f4,local_1f8);
        puVar1[1] = (ulonglong)uStack_1f0;
        local_298 = *(int *)(lVar43 + 0x1c + lVar42);
        lVar24 = lVar24 + 0x10;
        iVar20 = iVar48;
      } while (iVar48 < local_298);
    }
    local_298 = iVar50 + local_298;
    FIoRequest::~FIoRequest(&local_1b0);
    pFVar51 = local_240 + 0x50;
    uVar38 = (ulonglong)local_2c0;
  }
  iVar49 = (param_2->ReadRequestsToCleanUp).ArrayNum;
  pFVar51 = (param_2->ReadRequestsToCleanUp).AllocatorInstance.Data;
  pFVar52 = pFVar51 + (longlong)iVar49 * 0x50;
  while( true ) {
    if ((param_2->ReadRequestsToCleanUp).ArrayNum != iVar49) {
      local_2c5 = 0;
      `TCheckedPointerIterator<FDistanceFieldReadRequest,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_2c5);
    }
    if (pFVar51 == pFVar52) break;
    local_178 = *(undefined4 *)pFVar51;
    local_174 = *(undefined4 *)(pFVar51 + 4);
    local_170 = *(undefined4 *)(pFVar51 + 8);
    local_168 = *(undefined8 *)(pFVar51 + 0x10);
    local_160 = *(undefined8 *)(pFVar51 + 0x18);
    local_158 = *(undefined8 *)(pFVar51 + 0x20);
    local_150 = *(undefined4 *)(pFVar51 + 0x28);
    local_14c = *(undefined4 *)(pFVar51 + 0x2c);
    local_148 = *(void **)(pFVar51 + 0x30);
    FIoRequest::FIoRequest(&local_140,(FIoRequest *)(pFVar51 + 0x38));
    local_130 = *(undefined8 **)(pFVar51 + 0x48);
    local_138 = *(undefined8 **)(pFVar51 + 0x40);
    if (local_130 == (undefined8 *)0x0) {
      pFVar30 = FIoRequest::Status(&local_140,&local_d8);
      EVar2 = pFVar30->ErrorCode;
      FIoStatus::~FIoStatus(&local_d8);
      if ((EVar2 == Unknown) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("ReadRequest.Request.Status().IsCompleted()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                              ,0x2d5,L""), bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      if ((*(char *)((longlong)local_130 + 0x41) == '\0') &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("ReadRequest.AsyncRequest->PollCompletion()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                              ,0x2cf,L""), bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_130 != (undefined8 *)0x0) {
        (**(code **)*local_130)();
      }
      if (local_138 != (undefined8 *)0x0) {
        (**(code **)*local_138)(local_138);
      }
    }
    FMemory::Free(local_148);
    FIoRequest::~FIoRequest(&local_140);
    pFVar51 = pFVar51 + 0x50;
  }
  FIoBatch::FIoBatch(&local_108);
  local_2c0 = (param_2->NewReadRequests).ArrayNum;
  uVar38 = (ulonglong)(int)local_2c0;
  pFVar51 = (param_2->NewReadRequests).AllocatorInstance.Data;
  pFVar52 = pFVar51 + uVar38 * 0x50;
  pvVar54 = ThreadLocalStoragePointer;
  do {
    while( true ) {
      if ((param_2->NewReadRequests).ArrayNum != (int)uVar38) {
        local_2c4[0] = 0;
        `TCheckedPointerIterator<FDistanceFieldReadRequest,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_2c4);
      }
      if (pFVar51 == pFVar52) {
        FIoBatch::Issue(&local_108);
        pFVar14 = local_280;
        FVar4 = local_2b8;
        pTVar41 = &local_280->ReadRequests;
        if ((pTVar41 == &param_2->NewReadRequests) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar18)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar16 = local_258;
        iVar49 = (local_258->NewReadRequests).ArrayNum;
        if (iVar49 != 0) {
          iVar21 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x50,8,iVar49,&pTVar41->AllocatorInstance,
                              &(pFVar14->ReadRequests).ArrayNum,&(pFVar14->ReadRequests).ArrayMax);
          ConstructItems<FDistanceFieldReadRequest,FDistanceFieldReadRequest,int>
                    ((pTVar41->AllocatorInstance).Data + (longlong)iVar21 * 0x50,
                     (FDistanceFieldReadRequest *)(pFVar16->NewReadRequests).AllocatorInstance.Data,
                     iVar49);
        }
        pFVar15 = local_278;
        if ((pFVar16->AtlasUpload).BrickUploadCoordinatesPtr != (TIntVector4<int> *)0x0) {
          FRHICommandListBase::UnlockBuffer
                    (local_278,
                     (((pFVar16->AtlasUpload).BrickUploadCoordinatesBuffer)->Buffer).Reference);
        }
        if ((pFVar16->AtlasUpload).BrickUploadDataPtr != (uchar *)0x0) {
          FRHICommandListBase::UnlockBuffer
                    (pFVar15,(((pFVar16->AtlasUpload).BrickUploadDataBuffer)->Buffer).Reference);
        }
        if ((pFVar16->IndirectionAtlasUpload).IndirectionUploadIndicesPtr != (uint *)0x0) {
          FRHICommandListBase::UnlockBuffer
                    (pFVar15,(((pFVar16->IndirectionAtlasUpload).IndirectionUploadIndicesBuffer)->
                             Buffer).Reference);
        }
        if ((pFVar16->IndirectionAtlasUpload).IndirectionUploadDataPtr != (TVector4<float> *)0x0) {
          FRHICommandListBase::UnlockBuffer
                    (pFVar15,(((pFVar16->IndirectionAtlasUpload).IndirectionUploadDataBuffer)->
                             Buffer).Reference);
        }
        if (pFVar16->IndirectionTableUploader != (FRDGScatterUploader *)0x0) {
          FRDGScatterUploader::Unlock(pFVar16->IndirectionTableUploader,pFVar15);
        }
        FIoBatch::~FIoBatch(&local_108);
        if (bVar55) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar8) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar7) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar17) {
          FThreadStats::AddMessage(FVar4,CycleScopeEnd);
        }
        return;
      }
      if ((*(int *)(pFVar51 + 0x2c) == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("ReadRequest.BulkSize > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                              ,0x2df,L""), bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pvVar31 = FMemory::Malloc((ulonglong)*(uint *)(pFVar51 + 0x2c),0);
      *(void **)(pFVar51 + 0x30) = pvVar31;
      uVar40 = FBulkData::GetBulkDataFlags(*(FBulkData **)(pFVar51 + 0x20));
      if ((int)uVar40 < 0) break;
      pIVar36 = FBulkData::OpenAsyncReadHandle(*(FBulkData **)(pFVar51 + 0x20));
      uVar3 = *(undefined4 *)(pFVar51 + 0x2c);
      *(IAsyncReadFileHandle **)(pFVar51 + 0x40) = pIVar36;
      pcVar6 = *(code **)((longlong)*pIVar36 + 0x10);
      lVar33 = FBulkData::GetBulkDataOffsetInFile(*(FBulkData **)(pFVar51 + 0x20));
      uVar37 = (*pcVar6)(pIVar36,(ulonglong)*(uint *)(pFVar51 + 0x28) + lVar33,uVar3,1);
      pvVar54 = ThreadLocalStoragePointer;
      *(undefined8 *)(pFVar51 + 0x48) = uVar37;
LAB_1448688de:
      uVar38 = (ulonglong)local_2c0;
      pFVar51 = pFVar51 + 0x50;
    }
    if ((MetadataChannel->Enabled < 0) || (IoStoreChannel->Enabled < 0)) {
      local_238 = 0;
      TVar32 = (TEventRef<unsigned_int>)&local_238;
    }
    else {
      ::FName::FName(&local_190,"DistanceField");
      TVar32 = FStringTrace::GetNameRef(&local_e0);
    }
    uVar37 = *(undefined8 *)TVar32;
    bVar18 = false;
    if ((-1 < MetadataChannel->Enabled) && (-1 < IoStoreChannel->Enabled)) {
      UE::Trace::Private::FLogScope::ScopedEnter<FMetadataIoStoreTagFields>
                ((TLogScope<0> *)&local_a8);
      bVar18 = true;
      *local_a8 = (int)uVar37;
      *(undefined8 *)(local_a0 + 0x28) = *(undefined8 *)(local_a0 + 0x20);
    }
    FBulkData::CreateChunkId(*(FBulkData **)(pFVar51 + 0x20),(FIoChunkId *)local_98);
    uVar40 = *(uint *)(pFVar51 + 0x2c);
    uStack_110 = 0;
    lVar33 = FBulkData::GetBulkDataOffsetInFile(*(FBulkData **)(pFVar51 + 0x20));
    local_128 = (ulonglong)*(uint *)(pFVar51 + 0x28) + lVar33;
    uVar37 = *(undefined8 *)(pFVar51 + 0x30);
    local_118._0_4_ = (undefined4)uVar37;
    local_118._4_4_ = (undefined4)((ulonglong)uVar37 >> 0x20);
    local_b8 = (undefined4)local_118;
    uStack_b4 = local_118._4_4_;
    uStack_b0 = uStack_110;
    uStack_ac = uStack_10c;
    uStack_120 = (ulonglong)uVar40;
    local_118 = uVar37;
    local_c8 = local_128;
    uStack_c0 = (ulonglong)uVar40;
    FVar34 = FIoBatch::Read(&local_108,(FIoChunkId *)local_188,local_98,(int)&local_c8);
    FIoRequest::operator=((FIoRequest *)(pFVar51 + 0x38),(FIoRequest *)FVar34.Impl);
    FIoRequest::~FIoRequest((FIoRequest *)local_188);
    if (!bVar18) goto LAB_1448688de;
    lVar24 = *(longlong *)((longlong)pvVar54 + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar24 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar35 = *(FWriteBuffer **)(lVar24 + 0x20);
    if ((int)pFVar35 - *(int *)&pFVar35->Cursor < 1) {
      pFVar35 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar35->Cursor = '\n';
    pFVar35->Cursor = pFVar35->Cursor + 1;
    pFVar51 = pFVar51 + 0x50;
    pFVar35->Committed = pFVar35->Cursor;
    uVar38 = (ulonglong)local_2c0;
  } while( true );
}

// DefragmentIndirectionAtlas @ 14486f3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FDistanceFieldSceneData::DefragmentIndirectionAtlas
          (FDistanceFieldSceneData *this,TIntVector3<int> *param_1,
          TArray<FDistanceFieldAssetMipRelocation,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FTextureLayout3d::FTextureLayoutNode3d,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>_>
  *_Dst;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FTextureLayout3d::FUnusedLeaf,TSizedDefaultAllocator<32>_> *pTVar2;
  ulonglong uVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FTextureLayout3d::FUnusedLeaf,TSizedDefaultAllocator<32>_> *pTVar5;
  TMap<UE::Math::TIntVector3<int>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,int,0>_>
  *pTVar6;
  ForElementType<FTextureLayout3d::FTextureLayoutNode3d> FVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  TConsoleVariableData<int> *pTVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  FTextureLayout3d *pFVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  uint *puVar20;
  undefined1 auStackY_298 [32];
  FIdentityFunctor local_248 [8];
  ForAnyElementType local_240;
  int local_238;
  int iStack_234;
  FEntry local_230;
  undefined8 local_220;
  uint uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  uint uStack_20c;
  undefined8 uStack_208;
  uint local_200;
  TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator>
  *local_1f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f0;
  int local_1d0;
  TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator>
  *local_1c8;
  undefined8 local_1c0;
  TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator>
  *local_1b0;
  int iStack_1a8;
  uint uStack_1a4;
  undefined1 *local_1a0;
  undefined4 uStack_198;
  int iStack_194;
  int local_190;
  int iStack_18c;
  undefined1 local_178 [288];
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_1f8 = &this->AssetStateArray;
  local_240.Data = (FScriptContainerElement *)0x0;
  TStack_1f0.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->AssetStateArray).Elements.field_0x10;
  local_238 = 0;
  iStack_234 = 0;
  iVar14 = *(int *)&(this->AssetStateArray).Elements.field_0x28;
  iStack_1a8 = 0;
  local_190 = 0;
  uStack_1a4 = 1;
  iStack_194 = 0;
  if (iVar14 != 0) {
    puVar20 = *(uint **)&(this->AssetStateArray).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)TStack_1f0.Array;
    }
    uVar18 = *puVar20;
    while (uVar18 == 0) {
      lVar16 = (longlong)iStack_1a8;
      local_190 = local_190 + 0x20;
      iStack_1a8 = iStack_1a8 + 1;
      iStack_194 = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1a8) goto LAB_14486f49d;
      uVar18 = puVar20[lVar16 + 1];
    }
    uStack_1a4 = -uVar18 & uVar18;
    uVar3 = (ulonglong)uStack_1a4 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_1d0 = (int)lVar16;
    iStack_194 = local_1d0 + -1 + local_190;
    if (iVar14 < iStack_194) {
      iStack_194 = iVar14;
    }
  }
LAB_14486f49d:
  uStack_198 = 0xffffffff;
  TStack_1f0._padding_ = CONCAT44(uStack_1a4,iStack_1a8);
  TStack_1f0.UnvisitedBitMask = 0xffffffff;
  TStack_1f0._28_4_ = iStack_194;
  TStack_1f0.BaseBitIndex = local_190;
  local_1c8 = local_1f8;
  local_1b0 = local_1f8;
  local_1a0 = (undefined1 *)TStack_1f0.Array;
  iStack_18c = iStack_194;
  TStack_1f0.CurrentBitIndex = iStack_194;
  if (iStack_194 < iVar14) {
    do {
      uVar18 = 0;
      lVar16 = (longlong)TStack_1f0.CurrentBitIndex * 0xe8 + *(longlong *)&local_1f8->Elements;
      if (0 < *(int *)(lVar16 + 0xd8)) {
        lVar19 = 0;
        do {
          uVar12 = 0;
          if ((int)uVar18 < *(int *)(lVar16 + 0xd8)) {
            uVar12 = ~uVar18 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar17 = lVar16 + 0x10;
          if (*(longlong *)(lVar16 + 0xd0) != 0) {
            lVar17 = *(longlong *)(lVar16 + 0xd0);
          }
          local_230.AssetSetId.Index = TStack_1f0.CurrentBitIndex;
          local_230.Size =
               (ulong64)(*(int *)(lVar19 + 8 + lVar17) * *(int *)(lVar19 + 4 + lVar17) *
                        *(int *)(lVar19 + lVar17));
          local_230.ReversedMipIndex = uVar18;
          if (((local_240.Data <= &local_230) &&
              (&local_230 < (FEntry *)(local_240.Data + (longlong)iStack_234 * 0x10))) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (local_238 == iStack_234) {
            local_238 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&local_240,&iStack_234);
          }
          lVar17 = (longlong)local_238;
          uVar18 = uVar18 + 1;
          lVar19 = lVar19 + 0x40;
          local_238 = local_238 + 1;
          *(ulonglong *)(local_240.Data + lVar17 * 0x10) =
               CONCAT44(local_230.ReversedMipIndex,local_230.AssetSetId.Index);
          *(ulong64 *)(local_240.Data + lVar17 * 0x10 + 8) = local_230.Size;
        } while ((int)uVar18 < *(int *)(lVar16 + 0xd8));
      }
      TStack_1f0.UnvisitedBitMask = TStack_1f0.UnvisitedBitMask & ~TStack_1f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f0);
    } while (TStack_1f0.CurrentBitIndex < (TStack_1f0.Array)->NumBits);
  }
  AlgoImpl::
  IntroSortInternal<_FDistanceFieldSceneData::DefragmentIndirectionAtlas_::__l2::FEntry,int,FIdentityFunctor,TDereferenceWrapper<_FDistanceFieldSceneData::DefragmentIndirectionAtlas_::__l2::FEntry,_FDistanceFieldSceneData::DefragmentIndirectionAtlas_::__l2::FMeshDistanceFieldSorter>_>
            ((FEntry *)local_240.Data,local_238,local_248[0],(FMeshDistanceFieldSorter *)local_248);
  pTVar10 = CVarMaxIndirectionAtlasSizeXYZ.Ref;
  bVar11 = IsInParallelRenderingThread();
  if ((!bVar11) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar18 = pTVar10->ShadowedValue[1];
  pFVar15 = FTextureLayout3d::FTextureLayout3d
                      ((FTextureLayout3d *)local_178,(param_1->field0_0x0)._s_0.X,
                       (param_1->field0_0x0)._s_0.Y,(param_1->field0_0x0)._s_0.Z,uVar18,uVar18,
                       uVar18,false,false,true);
  _Dst = &(this->IndirectionAtlasLayout).Nodes;
  (this->IndirectionAtlasLayout).MinSizeX = pFVar15->MinSizeX;
  (this->IndirectionAtlasLayout).MinSizeY = pFVar15->MinSizeY;
  (this->IndirectionAtlasLayout).MinSizeZ = pFVar15->MinSizeZ;
  (this->IndirectionAtlasLayout).SizeX = pFVar15->SizeX;
  (this->IndirectionAtlasLayout).SizeY = pFVar15->SizeY;
  (this->IndirectionAtlasLayout).SizeZ = pFVar15->SizeZ;
  (this->IndirectionAtlasLayout).bPowerOfTwoSize = pFVar15->bPowerOfTwoSize;
  (this->IndirectionAtlasLayout).bAlignByFour = pFVar15->bAlignByFour;
  (this->IndirectionAtlasLayout).bAllowShrink = pFVar15->bAllowShrink;
  if (_Dst != &pFVar15->Nodes) {
    if ((pFVar15->Nodes).AllocatorInstance.SecondaryData ==
        (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      memmove(_Dst,&pFVar15->Nodes,0x8c);
    }
    FVar7 = (this->IndirectionAtlasLayout).Nodes.AllocatorInstance.SecondaryData;
    if (FVar7 != (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
      FMemory::Free((void *)FVar7);
    }
    (this->IndirectionAtlasLayout).Nodes.AllocatorInstance.SecondaryData =
         (pFVar15->Nodes).AllocatorInstance.SecondaryData;
    (pFVar15->Nodes).AllocatorInstance.SecondaryData =
         (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0;
    (this->IndirectionAtlasLayout).Nodes.ArrayNum = (pFVar15->Nodes).ArrayNum;
    (this->IndirectionAtlasLayout).Nodes.ArrayMax = (pFVar15->Nodes).ArrayMax;
    (pFVar15->Nodes).ArrayNum = 0;
    (pFVar15->Nodes).ArrayMax = 5;
  }
  pTVar1 = &pFVar15->FreeNodeIndices;
  pTVar4 = &(this->IndirectionAtlasLayout).FreeNodeIndices;
  if (pTVar4 != pTVar1) {
    pFVar8 = (pTVar4->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->IndirectionAtlasLayout).FreeNodeIndices.ArrayNum = (pFVar15->FreeNodeIndices).ArrayNum;
    (this->IndirectionAtlasLayout).FreeNodeIndices.ArrayMax = (pFVar15->FreeNodeIndices).ArrayMax;
    (pFVar15->FreeNodeIndices).ArrayNum = 0;
    (pFVar15->FreeNodeIndices).ArrayMax = 0;
  }
  pTVar2 = &pFVar15->UnusedLeaves;
  pTVar5 = &(this->IndirectionAtlasLayout).UnusedLeaves;
  if (pTVar5 != pTVar2) {
    pFVar8 = (pTVar5->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (pTVar5->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->IndirectionAtlasLayout).UnusedLeaves.ArrayNum = (pFVar15->UnusedLeaves).ArrayNum;
    (this->IndirectionAtlasLayout).UnusedLeaves.ArrayMax = (pFVar15->UnusedLeaves).ArrayMax;
    (pFVar15->UnusedLeaves).ArrayNum = 0;
    (pFVar15->UnusedLeaves).ArrayMax = 0;
  }
  pTVar6 = &(this->IndirectionAtlasLayout).UsedLeaves;
  if (pTVar6 != &pFVar15->UsedLeaves) {
    TSet<TTuple<UE::Math::TIntVector3<int>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,int,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<UE::Math::TIntVector3<int>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,int,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<UE::Math::TIntVector3<int>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,int,0>,FDefaultSetAllocator>
                *)pTVar6,
               (TSet<TTuple<UE::Math::TIntVector3<int>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,int,0>,FDefaultSetAllocator>
                *)&pFVar15->UsedLeaves);
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector3<int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_178 + 0xe0));
  if ((FScriptContainerElement *)local_178._208_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_178._208_8_);
  }
  if ((FScriptContainerElement *)local_178._192_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_178._192_8_);
  }
  if ((ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)local_178._176_8_ !=
      (ForElementType<FTextureLayout3d::FTextureLayoutNode3d>)0x0) {
    FMemory::Free((void *)local_178._176_8_);
  }
  uVar18 = 0;
  if (0 < local_238) {
    lVar16 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar18 < local_238) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar12 = *(uint *)(local_240.Data + lVar16 + 4);
      lVar19 = *(longlong *)&local_1c8->Elements + 0x10 +
               (longlong)*(int *)(local_240.Data + lVar16) * 0xe8;
      uVar13 = 0;
      if ((int)uVar12 < *(int *)(lVar19 + 200)) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (*(longlong *)(lVar19 + 0xc0) != 0) {
        lVar19 = *(longlong *)(lVar19 + 0xc0);
      }
      puVar20 = (uint *)(lVar19 + (longlong)(int)uVar12 * 0x40);
      local_1c0 = *(undefined8 *)(puVar20 + 4);
      uVar12 = puVar20[6];
      FTextureLayout3d::AddElement
                (&this->IndirectionAtlasLayout,puVar20 + 4,puVar20 + 5,puVar20 + 6,*puVar20,
                 puVar20[1],puVar20[2]);
      uStack_218 = puVar20[2];
      local_220 = *(undefined8 *)puVar20;
      pFVar8 = (param_2->AllocatorInstance).Data;
      local_200 = puVar20[6];
      uStack_214 = (undefined4)local_1c0;
      uStack_210 = (undefined4)((ulonglong)local_1c0 >> 0x20);
      uStack_208 = *(undefined8 *)(puVar20 + 4);
      uStack_20c = uVar12;
      if (((pFVar8 <= (FScriptContainerElement *)&local_220) &&
          ((FScriptContainerElement *)&local_220 < pFVar8 + (longlong)param_2->ArrayMax * 0x24)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar14 = param_2->ArrayNum;
      if (iVar14 == param_2->ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x424,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      uVar18 = uVar18 + 1;
      param_2->ArrayNum = iVar14 + 1;
      lVar16 = lVar16 + 0x10;
      lVar19 = (longlong)iVar14;
      pFVar8 = (param_2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar8 + lVar19 * 0x24) = local_220;
      *(ulonglong *)(pFVar8 + lVar19 * 0x24 + 8) = CONCAT44(uStack_214,uStack_218);
      *(ulonglong *)(pFVar8 + lVar19 * 0x24 + 0x10) = CONCAT44(uStack_20c,uStack_210);
      *(undefined8 *)(pFVar8 + lVar19 * 0x24 + 0x18) = uStack_208;
      *(uint *)(pFVar8 + lVar19 * 0x24 + 0x20) = local_200;
    } while ((int)uVar18 < local_238);
  }
  if ((FEntry *)local_240.Data != (FEntry *)0x0) {
    FMemory::Free(local_240.Data);
  }
  return;
}

// GenerateStreamingRequests @ 144879c90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDistanceFieldSceneData::GenerateStreamingRequests
          (FDistanceFieldSceneData *this,FRDGBuilder *param_1,FSceneRenderUpdateInputs *param_2)

{
  FSceneRenderer **ppFVar1;
  ulonglong uVar2;
  FSceneRenderer *pFVar3;
  FGlobalShaderMap *this_00;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  FRDGTexture *pFVar7;
  FRHISamplerState *pFVar8;
  undefined8 uVar9;
  FRDGBuilder *this_01;
  FRDGBuffer *pFVar10;
  bool bVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  FRHIGPUBufferReadback *this_02;
  FName *pFVar16;
  FRHIGPUBufferReadback *pFVar17;
  FRDGBufferUAV *pFVar18;
  undefined8 *puVar19;
  FRDGBufferSRV *pFVar20;
  FDistanceFieldObjectBufferParameters *pFVar21;
  FDistanceFieldAtlasParameters *pFVar22;
  FGlobalShaderType *pFVar23;
  FShaderType *pFVar24;
  FName this_03;
  FRDGEventName *pFVar25;
  FShaderParametersMetadata *pFVar26;
  FRHIGPUMask FVar27;
  FViewInfo *pFVar28;
  uint uVar29;
  FSceneRenderer **ppFVar30;
  FViewInfo *pFVar31;
  undefined1 local_res8 [8];
  FRDGBuilder *local_res10;
  FSceneRenderUpdateInputs *local_res18;
  undefined1 local_res20 [8];
  undefined8 *local_2b0;
  undefined8 *local_2a8;
  FRDGEventName *local_2a0;
  uint local_298;
  FRDGBuffer *local_290;
  undefined1 local_288 [16];
  FRDGBuffer **local_278;
  FDistanceFieldSceneData *local_270;
  FSceneRenderUpdateInputs *local_268;
  FRDGBuffer *local_260;
  FRDGBufferUAVDesc local_258;
  FRDGBufferUAVDesc local_248;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_238;
  TIntVector3<int>_u_0 local_228;
  undefined4 local_218;
  FRHIComputeCommandList *local_210;
  FRDGBufferSRVDesc local_208;
  <lambda_2> local_1e8;
  FRDGBufferDesc local_1d8;
  FName local_1c0;
  undefined1 local_1b8 [8];
  FString local_1b0;
  TShaderRefBase<FGenerateDistanceFieldAssetStreamingRequestsCS,FShaderMapPointerTable> local_198;
  FRDGBufferDesc local_188;
  FRDGEventName local_170;
  FRDGEventName local_158;
  FDistanceFieldObjectBufferParameters local_138;
  FDistanceFieldAtlasParameters local_108;
  
  pFVar17 = (FRHIGPUBufferReadback *)0x0;
  if ((this->ReadbackBuffersNumPending < this->MaxStreamingReadbackBuffers) &&
     (0 < this->NumObjectsInBuffer)) {
    local_210 = (FRHIComputeCommandList *)param_1->_padding_;
    FVar27.GPUMask = *(uint *)&local_210->field_0x29c;
    local_res10 = param_1;
    local_res18 = param_2;
    local_298 = FVar27.GPUMask;
    FRHIComputeCommandList::SetGPUMask
              (local_210,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
    uVar29 = this->ReadbackBuffersWriteIndex;
    uVar15 = 0;
    if ((int)uVar29 < (this->StreamingRequestReadbackBuffers).ArrayNum) {
      uVar15 = ~uVar29 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(longlong *)
         ((this->StreamingRequestReadbackBuffers).AllocatorInstance.Data + (longlong)(int)uVar29 * 8
         ) == 0) {
      this_02 = ::operator_new(0x58);
      if (this_02 != (FRHIGPUBufferReadback *)0x0) {
        pFVar16 = ::FName::FName(&local_1c0,L"DistanceFields.StreamingRequestReadBack");
        pFVar17 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(this_02,*pFVar16);
      }
      uVar29 = this->ReadbackBuffersWriteIndex;
      uVar15 = 0;
      if ((int)uVar29 < (this->StreamingRequestReadbackBuffers).ArrayNum) {
        uVar15 = ~uVar29 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(FRHIGPUBufferReadback **)
       ((this->StreamingRequestReadbackBuffers).AllocatorInstance.Data + (longlong)(int)uVar29 * 8)
           = pFVar17;
    }
    iVar14 = *(int *)&(this->AssetStateArray).Elements.field_0x8;
    local_288._8_4_ = 0x10109;
    iVar13 = 1;
    if (iVar14 != 0) {
      iVar13 = iVar14;
    }
    local_278 = (FRDGBuffer **)0x0;
    local_188.Metadata = (FShaderParametersMetadata *)0x0;
    uVar2 = (ulonglong)(iVar13 - 1) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_288._4_4_ = 1 << ((byte)lVar4 & 0x1f);
    local_288._0_4_ = 4;
    local_218 = (undefined4)lVar4;
    local_188.BytesPerElement = 4;
    local_188.NumElements = local_288._4_4_;
    local_188.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_188._12_4_ = local_288._12_4_;
    local_260 = FRDGBuilder::CreateBuffer
                          (param_1,&local_188,L"DistanceFields.DistanceFieldAssetWantedNumMips",None
                          );
    local_258._padding_._2_1_ = 0;
    bVar12 = 0;
    if (((local_260->Desc).Usage & DrawIndirect) != None) {
      bVar12 = 0x1c;
    }
    local_258._padding_._0_2_ = (ushort)bVar12;
    local_258.Buffer = local_260;
    pFVar18 = FRDGBuilder::CreateUAV(param_1,&local_258,None);
    AddClearUAVPass(param_1,pFVar18,1,Compute);
    local_288._8_4_ = 0x10109;
    local_288._0_8_ = 0x1fff00000004;
    local_278 = (FRDGBuffer **)0x0;
    local_1d8.BytesPerElement = 4;
    local_1d8.NumElements = 0x1fff;
    local_1d8._12_4_ = local_288._12_4_;
    local_1d8.Usage = StructuredBuffer|ShaderResource|SourceCopy|UnorderedAccess|Static;
    local_1d8.Metadata = (FShaderParametersMetadata *)0x0;
    local_290 = FRDGBuilder::CreateBuffer
                          (param_1,&local_1d8,L"DistanceFields.DistanceFieldStreamingRequests",None)
    ;
    ppFVar30 = (param_2->Renderers).DataPtr;
    local_288._8_8_ = &local_260;
    local_278 = &local_290;
    ppFVar1 = ppFVar30 + (param_2->Renderers).ArrayNum;
    local_270 = this;
    local_288._0_8_ = param_1;
    local_268 = param_2;
    for (; ppFVar30 != ppFVar1; ppFVar30 = ppFVar30 + 1) {
      pFVar3 = *ppFVar30;
      iVar13 = *(int *)&pFVar3->field_0x18;
      pFVar28 = *(FViewInfo **)&pFVar3->field_0x10;
      pFVar31 = pFVar28 + iVar13;
      while( true ) {
        if (*(int *)&pFVar3->field_0x18 != iVar13) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FViewInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar28 == pFVar31) break;
        bVar11 = `FDistanceFieldSceneData::GenerateStreamingRequests'::__l5::<lambda_1>::operator()
                           (local_288,pFVar3,pFVar28);
        param_1 = local_res10;
        FVar27.GPUMask = local_298;
        if (!bVar11) goto LAB_144879fa6;
        pFVar28 = pFVar28 + 1;
      }
      FVar27.GPUMask = local_298;
      param_1 = local_res10;
    }
LAB_144879fa6:
    puVar19 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x120,0x10);
    if (puVar19 == (undefined8 *)0x0) {
      puVar19 = (undefined8 *)0x0;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      puVar19[2] = 0;
      *puVar19 = &
                 ___7__TObject_VFParameters_FGenerateDistanceFieldAssetStreamingRequestsCS___FRDGAllocator__6B_
      ;
      puVar19[3] = 0;
      puVar19[4] = 0;
      puVar19[5] = 0;
      puVar19[7] = 0;
      puVar19[8] = 0;
      puVar19[10] = 0;
      puVar19[0xb] = 0;
      puVar19[0xc] = 0;
      puVar19[0xd] = 0;
      puVar19[0xe] = 0;
      puVar19[0xf] = 0;
    }
    local_2b0 = puVar19;
    if ((((undefined8 **)param_1->_padding_ <= &local_2b0) &&
        (&local_2b0 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar13 = (int)param_1->_padding_;
    if (iVar13 == *(int *)((longlong)&param_1->_padding_ + 4)) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&param_1->_padding_,
                          (int *)((longlong)&param_1->_padding_ + 4));
    }
    this_01 = local_res10;
    *(int *)&param_1->_padding_ = iVar13 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar13 * 8) = local_2b0;
    local_248._padding_._2_1_ = 0;
    local_248.Buffer = local_290;
    bVar12 = 0;
    if (((local_290->Desc).Usage & DrawIndirect) != None) {
      bVar12 = 0x1c;
    }
    local_248._padding_._0_2_ = (ushort)bVar12;
    pFVar18 = FRDGBuilder::CreateUAV(local_res10,&local_248,None);
    ((FParameters *)(puVar19 + 2))->RWDistanceFieldAssetStreamingRequests = pFVar18;
    local_208._padding_._0_4_ = 0xffffffff;
    local_208._padding_._4_4_ = 0;
    local_208._padding_ = 0;
    local_208.Buffer = local_260;
    local_208._padding_._0_1_ = 0;
    if (((local_260->Desc).Usage & DrawIndirect) != None) {
      local_208._padding_._0_1_ = 0x1c;
    }
    pFVar20 = FRDGBuilder::CreateSRV(this_01,&local_208);
    puVar19[3] = pFVar20;
    pFVar21 = DistanceField::SetupObjectBufferParameters(&local_138,this_01,this);
    pFVar20 = pFVar21->SceneObjectData;
    puVar19[4] = pFVar21->SceneObjectBounds;
    puVar19[5] = pFVar20;
    pFVar20 = pFVar21->SceneHeightfieldObjectBounds;
    puVar19[6] = *(undefined8 *)&pFVar21->NumSceneObjects;
    puVar19[7] = pFVar20;
    uVar6 = *(undefined8 *)&pFVar21->NumSceneHeightfieldObjects;
    puVar19[8] = pFVar21->SceneHeightfieldObjectData;
    puVar19[9] = uVar6;
    pFVar22 = DistanceField::SetupAtlasParameters(&local_108,this_01,this);
    pFVar20 = pFVar22->DistanceFieldIndirectionTable;
    puVar19[10] = pFVar22->SceneDistanceFieldAssetData;
    puVar19[0xb] = pFVar20;
    pFVar7 = pFVar22->DistanceFieldIndirectionAtlas;
    puVar19[0xc] = pFVar22->DistanceFieldIndirection2Table;
    puVar19[0xd] = pFVar7;
    pFVar8 = pFVar22->DistanceFieldSampler;
    puVar19[0xe] = pFVar22->DistanceFieldBrickTexture;
    puVar19[0xf] = pFVar8;
    uVar6 = *(undefined8 *)((longlong)&(pFVar22->DistanceFieldBrickSize).field0_0x0 + 8);
    puVar19[0x10] = *(undefined8 *)&(pFVar22->DistanceFieldBrickSize).field0_0x0;
    puVar19[0x11] = uVar6;
    uVar6 = *(undefined8 *)((longlong)&(pFVar22->DistanceFieldUniqueDataBrickSize).field0_0x0 + 8);
    puVar19[0x12] = *(undefined8 *)&(pFVar22->DistanceFieldUniqueDataBrickSize).field0_0x0;
    puVar19[0x13] = uVar6;
    uVar6 = *(undefined8 *)
             ((longlong)&(pFVar22->DistanceFieldBrickAtlasSizeInBricks).field0_0x0 + 8);
    puVar19[0x14] = *(undefined8 *)&(pFVar22->DistanceFieldBrickAtlasSizeInBricks).field0_0x0;
    puVar19[0x15] = uVar6;
    uVar6 = *(undefined8 *)((longlong)&(pFVar22->DistanceFieldBrickAtlasMask).field0_0x0 + 8);
    puVar19[0x16] = *(undefined8 *)&(pFVar22->DistanceFieldBrickAtlasMask).field0_0x0;
    puVar19[0x17] = uVar6;
    uVar6 = *(undefined8 *)((longlong)&(pFVar22->DistanceFieldBrickAtlasSizeLog2).field0_0x0 + 8);
    puVar19[0x18] = *(undefined8 *)&(pFVar22->DistanceFieldBrickAtlasSizeLog2).field0_0x0;
    puVar19[0x19] = uVar6;
    uVar6 = *(undefined8 *)((longlong)&(pFVar22->DistanceFieldBrickAtlasTexelSize).field0_0x0 + 8);
    puVar19[0x1a] = *(undefined8 *)&(pFVar22->DistanceFieldBrickAtlasTexelSize).field0_0x0;
    puVar19[0x1b] = uVar6;
    uVar6 = *(undefined8 *)
             ((longlong)&(pFVar22->DistanceFieldBrickAtlasHalfTexelSize).field0_0x0 + 8);
    puVar19[0x1c] = *(undefined8 *)&(pFVar22->DistanceFieldBrickAtlasHalfTexelSize).field0_0x0;
    puVar19[0x1d] = uVar6;
    uVar6 = *(undefined8 *)
             ((longlong)&(pFVar22->DistanceFieldBrickOffsetToAtlasUVScale).field0_0x0 + 8);
    puVar19[0x1e] = *(undefined8 *)&(pFVar22->DistanceFieldBrickOffsetToAtlasUVScale).field0_0x0;
    puVar19[0x1f] = uVar6;
    uVar6 = *(undefined8 *)&(pFVar22->DistanceFieldUniqueDataBrickSizeInAtlasTexels).field0_0x0;
    uVar9 = *(undefined8 *)
             ((longlong)&(pFVar22->DistanceFieldUniqueDataBrickSizeInAtlasTexels).field0_0x0 + 8);
    *(int *)(puVar19 + 0x22) = iVar14;
    puVar19[0x20] = uVar6;
    puVar19[0x21] = uVar9;
    *(undefined4 *)((longlong)puVar19 + 0x114) = 0xfff;
    this_00 = local_res18->GlobalShaderMap;
    pFVar23 = FGenerateDistanceFieldAssetStreamingRequestsCS::GetStaticType();
    if (*(int *)&pFVar23->field_0x50 != 1) {
      local_res20[0] = 0;
      `FGlobalShaderMap::GetShader<FGenerateDistanceFieldAssetStreamingRequestsCS>'::__l2::
      <lambda_1>::operator()(local_res20);
    }
    pFVar24 = (FShaderType *)FGenerateDistanceFieldAssetStreamingRequestsCS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_238,pFVar24,0);
    if (local_238.ShaderContent == (FShader *)0x0) {
      this_03 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_1b8);
      ::FName::ToString((FName *)this_03,&local_1b0);
      FGenerateDistanceFieldAssetStreamingRequestsCS::GetStaticType();
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
      }
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FGenerateDistanceFieldAssetStreamingRequestsCS::GetStaticType();
    local_198.ShaderContent =
         (FGenerateDistanceFieldAssetStreamingRequestsCS *)local_238.ShaderContent;
    pFVar25 = FRDGEventName::FRDGEventName(&local_170,1,L"GenerateStreamingRequests");
    pFVar26 = FGenerateDistanceFieldAssetStreamingRequestsCS::FParameters::FTypeInfo::
              GetStructMetadata();
    local_228._s_0.Y = 1;
    local_228._s_0.Z = 1;
    local_228._s_0.X = (int)(iVar14 + 0x3f + (iVar14 + 0x3f >> 0x1f & 0x3fU)) >> 6;
    FComputeShaderUtils::AddPass<FGenerateDistanceFieldAssetStreamingRequestsCS>
              (local_res10,pFVar25,Compute,&local_198,pFVar26,(FParameters *)(puVar19 + 2),
               (TIntVector3<int> *)&local_228._s_0);
    if (local_170.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_170.FormattedEventName.Data.AllocatorInstance.Data);
    }
    uVar29 = this->ReadbackBuffersWriteIndex;
    uVar15 = 0;
    if ((int)uVar29 < (this->StreamingRequestReadbackBuffers).ArrayNum) {
      uVar15 = ~uVar29 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar10 = local_290;
    local_1e8.StreamingRequestsBuffer = local_290;
    local_1e8.ReadbackBuffer =
         *(FRHIGPUBufferReadback **)
          ((this->StreamingRequestReadbackBuffers).AllocatorInstance.Data +
          (longlong)(int)uVar29 * 8);
    local_2a0 = FRDGEventName::FRDGEventName(&local_158,1,L"DistanceFieldAssetReadback");
    puVar19 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x20,0x10);
    if (puVar19 == (undefined8 *)0x0) {
      puVar19 = (undefined8 *)0x0;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      puVar19[2] = 0;
      *puVar19 = &___7__TObject_VFReadbackBufferParameters___FRDGAllocator__6B_;
      *(undefined4 *)(puVar19 + 3) = 0x80;
    }
    local_2a8 = puVar19;
    if ((((undefined8 **)param_1->_padding_ <= &local_2a8) &&
        (&local_2a8 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar14 = (int)param_1->_padding_;
    if (iVar14 == *(int *)((longlong)&param_1->_padding_ + 4)) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&param_1->_padding_,
                          (int *)((longlong)&param_1->_padding_ + 4));
    }
    *(int *)&param_1->_padding_ = iVar14 + 1;
    local_238.ShaderContent = (FShader *)pFVar10;
    local_238.ShaderMap._0_4_ = 0x80;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar14 * 8) = local_2a8;
    *(FRDGBuffer **)&((FReadbackBufferParameters *)(puVar19 + 2))->Buffer = pFVar10;
    puVar19[3] = CONCAT44(local_238.ShaderMap._4_4_,0x80);
    FRDGBuilder::
    AddPass<FReadbackBufferParameters,_FDistanceFieldSceneData::GenerateStreamingRequests_::__l5::<lambda_2>_>
              (local_res10,local_2a0,(FReadbackBufferParameters *)(puVar19 + 2),Readback,&local_1e8)
    ;
    if (local_158.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_158.FormattedEventName.Data.AllocatorInstance.Data);
    }
    uVar29 = this->MaxStreamingReadbackBuffers;
    uVar15 = this->ReadbackBuffersNumPending + 1;
    this->ReadbackBuffersWriteIndex = (this->ReadbackBuffersWriteIndex + 1) % uVar29;
    if (uVar15 < uVar29) {
      uVar29 = uVar15;
    }
    this->ReadbackBuffersNumPending = uVar29;
    FRHIComputeCommandList::SetGPUMask(local_210,FVar27);
  }
  return;
}

// HasPendingOperations @ 1448871e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FDistanceFieldSceneData::HasPendingOperations(FDistanceFieldSceneData *this)

{
  if (((*(int *)&(this->PendingAddOperations).Elements.field_0x8 -
        *(int *)&(this->PendingAddOperations).Elements.field_0x34 < 1) &&
      (*(int *)&(this->PendingUpdateOperations).Elements.field_0x8 -
       *(int *)&(this->PendingUpdateOperations).Elements.field_0x34 < 1)) &&
     ((this->PendingRemoveOperations).ArrayNum < 1)) {
    return false;
  }
  return true;
}

// ListMeshDistanceFields @ 144888d00

/* WARNING: Removing unreachable block (ram,0x0001448894b4) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDistanceFieldSceneData::ListMeshDistanceFields(FDistanceFieldSceneData *this,bool param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  IPooledRenderTarget *pIVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 local_res18 [8];
  int local_res20;
  ForAnyElementType local_1a8;
  int local_1a0 [2];
  ForAnyElementType local_198;
  undefined8 local_190;
  uint local_188;
  longlong local_180;
  longlong local_170;
  longlong local_168;
  int local_160;
  int iStack_15c;
  int local_158;
  FMeshDistanceFieldStats local_150;
  undefined8 local_120;
  int local_118;
  int local_114;
  longlong local_110;
  FString local_108;
  TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator>
  *local_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  FString local_a0 [6];
  
  iVar13 = 0;
  local_188 = 0;
  local_168 = 0;
  local_198.Data = (FScriptContainerElement *)0x0;
  local_190 = 0;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0[0] = 0;
  local_1a0[1] = 0;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,3,&local_1a8,local_1a0,local_1a0 + 1);
  local_f8 = &this->AssetStateArray;
  pFVar9 = local_1a8.Data + (longlong)iVar7 * 0x10;
  local_e8 = &(this->AssetStateArray).Elements.field_0x10;
  uStack_ec = 1;
  local_d8 = 0;
  *(undefined8 *)pFVar9 = 0;
  *(undefined8 *)(pFVar9 + 8) = 0;
  *(undefined8 *)(pFVar9 + 0x10) = 0;
  *(undefined8 *)(pFVar9 + 0x18) = 0;
  *(undefined8 *)(pFVar9 + 0x20) = 0;
  *(undefined8 *)(pFVar9 + 0x28) = 0;
  iVar7 = *(int *)&(this->AssetStateArray).Elements.field_0x28;
  iVar15 = GPixelFormats[3].BlockBytes << 9;
  iStack_dc = 0;
  if (iVar7 != 0) {
    puVar14 = *(uint **)&(this->AssetStateArray).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)local_e8;
    }
    uVar11 = *puVar14;
    local_d8 = 0;
    iVar13 = 0;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar13;
      local_d8 = local_d8 + 0x20;
      iVar13 = iVar13 + 1;
      iStack_dc = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_144888e3d;
      uVar11 = puVar14[lVar10 + 1];
    }
    uStack_ec = -uVar11 & uVar11;
    uVar16 = (ulonglong)uStack_ec * 2 + 1;
    lVar10 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_114 = (int)lVar10;
    iStack_dc = local_114 + -1 + local_d8;
    if (iVar7 < iStack_dc) {
      iStack_dc = iVar7;
    }
  }
LAB_144888e3d:
  uStack_e0 = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_ec,iVar13);
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0._28_4_ = iStack_dc;
  TStack_c0.BaseBitIndex = local_d8;
  local_res20 = iVar15;
  iStack_f0 = iVar13;
  iStack_d4 = iStack_dc;
  local_c8 = local_f8;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_e8;
  TStack_c0.CurrentBitIndex = iStack_dc;
  if (iStack_dc < iVar7) {
    do {
      uVar11 = 0;
      local_170 = (longlong)TStack_c0.CurrentBitIndex * 0xe8;
      local_110 = *(longlong *)&local_c8->Elements;
      uVar1 = *(undefined8 *)(*(longlong *)(local_170 + local_110) + 0x28);
      local_158 = *(int *)(*(longlong *)(local_170 + local_110) + 0x30) * 7;
      local_150.BrickMemoryBytes = 0;
      local_150.IndirectionMemoryBytes = 0;
      iStack_15c = (int)((ulonglong)uVar1 >> 0x20);
      local_150.Resolution.field0_0x0._s_0.Y = iStack_15c * 7;
      local_160 = (int)uVar1;
      local_150.Resolution.field0_0x0._s_0.X = local_160 * 7;
      _local_160 = CONCAT44(local_150.Resolution.field0_0x0._s_0.Y,
                            local_150.Resolution.field0_0x0._s_0.X);
      uVar1 = *(undefined8 *)(*(longlong *)(local_170 + local_110) + 0x110);
      local_150.AssetName.ComparisonIndex.Value = (uint)uVar1;
      local_150.AssetName.Number = (uint)((ulonglong)uVar1 >> 0x20);
      local_150.LoadedMips = *(int *)(local_170 + 0xd8 + local_110);
      local_150.WantedMips = *(int *)(local_170 + 0xc + local_110);
      local_150.Resolution.field0_0x0._s_0.Z = local_158;
      if (0 < *(int *)(local_170 + 0xd8 + local_110)) {
        lVar10 = 0;
        local_180 = local_110 + 0x10 + local_170;
        lVar18 = 0;
        do {
          lVar17 = local_180;
          uVar12 = ~uVar11 >> 0x1f;
          uVar8 = 0;
          if ((int)uVar11 < *(int *)(local_180 + 200)) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
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
          lVar2 = *(longlong *)(lVar17 + 0xc0);
          if (lVar2 != 0) {
            lVar17 = lVar2;
          }
          uVar16 = (ulonglong)(uint)(iVar15 * *(int *)(lVar18 + 0x1c + lVar17));
          local_168 = local_168 +
                      ((uint)(GDistanceFieldBlockAllocatorSizeInBricks *
                              *(int *)(lVar18 + 0x38 + lVar17) * local_res20) - uVar16);
          uVar8 = 0;
          if ((int)uVar11 < local_1a0[0]) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
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
          *(ulonglong *)(local_1a8.Data + lVar10) = *(longlong *)(local_1a8.Data + lVar10) + uVar16;
          local_150.BrickMemoryBytes = local_150.BrickMemoryBytes + uVar16;
          lVar17 = (longlong)
                   (*(int *)(lVar18 + 8 + lVar17) * *(int *)(lVar18 + 4 + lVar17) *
                   *(int *)(lVar18 + lVar17)) * 4;
          uVar8 = 0;
          if ((int)uVar11 < local_1a0[0]) {
            uVar8 = uVar12;
          }
          if ((uVar8 == 0) &&
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
          uVar11 = uVar11 + 1;
          lVar18 = lVar18 + 0x40;
          *(longlong *)(local_1a8.Data + lVar10 + 8) =
               *(longlong *)(local_1a8.Data + lVar10 + 8) + lVar17;
          lVar10 = lVar10 + 0x10;
          local_150.IndirectionMemoryBytes = local_150.IndirectionMemoryBytes + lVar17;
          iVar15 = local_res20;
        } while ((int)uVar11 < *(int *)(local_170 + 0xd8 + local_110));
      }
      if (((local_198.Data <= &local_150) &&
          (&local_150 <
           (FMeshDistanceFieldStats *)(local_198.Data + (longlong)local_190._4_4_ * 0x30))) &&
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
      iVar7 = (int)local_190;
      if ((int)local_190 == local_190._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_198,(int *)((longlong)&local_190 + 4));
      }
      lVar10 = (longlong)iVar7;
      local_190 = CONCAT44(local_190._4_4_,iVar7 + 1);
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      *(ulonglong *)(local_198.Data + lVar10 * 0x30) =
           CONCAT44(local_150.WantedMips,local_150.LoadedMips);
      *(ulong64 *)(local_198.Data + lVar10 * 0x30 + 8) = local_150.BrickMemoryBytes;
      *(ulong64 *)(local_198.Data + lVar10 * 0x30 + 0x10) = local_150.IndirectionMemoryBytes;
      *(ulong64 *)(local_198.Data + lVar10 * 0x30 + 0x10 + 8) =
           CONCAT44(local_150.Resolution.field0_0x0._s_0.Y,local_150.Resolution.field0_0x0._s_0.X);
      *(ulonglong *)(local_198.Data + lVar10 * 0x30 + 0x20) =
           CONCAT44(local_150.AssetName.ComparisonIndex.Value,local_150.Resolution.field0_0x0._s_0.Z
                   );
      *(ulonglong *)(local_198.Data + lVar10 * 0x30 + 0x20 + 8) =
           CONCAT44(local_150._44_4_,local_150.AssetName.Number);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    } while (TStack_c0.CurrentBitIndex < (TStack_c0.Array)->NumBits);
  }
  AlgoImpl::
  IntroSortInternal<_FDistanceFieldSceneData::ListMeshDistanceFields_::__l2::FMeshDistanceFieldStats,int,FIdentityFunctor,TDereferenceWrapper<_FDistanceFieldSceneData::ListMeshDistanceFields_::__l2::FMeshDistanceFieldStats,_FDistanceFieldSceneData::ListMeshDistanceFields_::__l2::FMeshDistanceFieldStatsSorter>_>
            ((FMeshDistanceFieldStats *)local_198.Data,(int)local_190,(FIdentityFunctor)param_1,
             (FMeshDistanceFieldStatsSorter *)local_res18);
  local_118 = (this->BrickTextureDimensionsInBricks).field0_0x0._s_0.Z;
  uVar1 = *(undefined8 *)&(this->BrickTextureDimensionsInBricks).field0_0x0;
  local_120._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
  local_170 = CONCAT44(local_170._4_4_,local_120._4_4_ * 8);
  pIVar3 = (this->IndirectionAtlas).Reference;
  local_120 = uVar1;
  if (pIVar3 == (IPooledRenderTarget *)0x0) {
    local_180 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  }
  else {
    lVar10 = (**(code **)(pIVar3->_padding_ + 0x10))();
    local_180 = *(undefined8 *)(lVar10 + 0x2c);
  }
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((4 < (byte)LogDistanceField._0_1_) &&
     (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDistanceField),
     4 < (byte)LogDistanceField._0_1_)) {
    if (local_1a0[0] < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if ((local_1a0[0] < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDistanceField);
    if (4 < (byte)LogDistanceField._0_1_) {
      if (local_1a0[0] < 2) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((local_1a0[0] < 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDistanceField);
      if (4 < (byte)LogDistanceField._0_1_) {
        if (local_1a0[0] < 3) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if ((local_1a0[0] < 3) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDistanceField);
      }
    }
  }
  if (param_1) {
    if (((4 < (byte)LogDistanceField._0_1_) &&
        (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDistanceField),
        4 < (byte)LogDistanceField._0_1_)) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDistanceField),
       4 < (byte)LogDistanceField._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDistanceField);
    }
    uVar11 = 0;
    if (0 < (int)local_190) {
      lVar10 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < (int)local_190) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar5.Data = local_198.Data;
        if (4 < (byte)LogDistanceField._0_1_) {
          ::FName::ToString((FName *)(local_198.Data + lVar10 + 0x24),local_a0);
          if (*(int *)(FVar5.Data + lVar10) != *(int *)(FVar5.Data + lVar10 + 4)) {
            local_188 = local_188 | 1;
            ::FString::PrintfImpl(&local_108,L" / %u");
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDistanceField);
          if (((local_188 & 1) != 0) &&
             (local_188 = local_188 & 0xfffffffe,
             local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          if (local_a0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0[0].Data.AllocatorInstance.Data);
          }
        }
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 0x30;
      } while ((int)uVar11 < (int)local_190);
    }
  }
  if (local_1a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  if ((FMeshDistanceFieldStats *)local_198.Data != (FMeshDistanceFieldStats *)0x0) {
    FMemory::Free(local_198.Data);
  }
  return;
}

// ProcessReadRequests @ 14488df50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FDistanceFieldSceneData::ProcessReadRequests
          (FDistanceFieldSceneData *this,
          TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FDistanceFieldReadRequest,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FDistanceFieldReadRequest,TSizedDefaultAllocator<32>_> *param_4)

{
  TArray<FDistanceFieldReadRequest,TSizedDefaultAllocator<32>_> *this_00;
  EIoErrorCode EVar1;
  undefined1 *puVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FIoStatus *pFVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_138 [4];
  uint local_134;
  undefined8 local_130;
  int local_128;
  uint local_124;
  int iStack_120;
  uint local_11c;
  undefined4 uStack_118;
  ulonglong local_110;
  uint local_108;
  int local_104;
  int local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  FIoRequest local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined4 local_b8;
  int local_a8;
  int local_a4;
  int iStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  FIoRequest FStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  FIoStatus local_50;
  
  pTVar4 = CVarTextureUploadLimitKBytes.Ref;
  local_134 = 0;
  local_b8 = 0;
  local_128 = GPixelFormats[3].BlockBytes << 9;
  bVar5 = IsInParallelRenderingThread();
  if ((!bVar5) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar18 = (param_2->AllocatorInstance).Data;
  iVar7 = param_2->ArrayNum;
  local_58 = (longlong)pTVar4->ShadowedValue[1] << 10;
  pFVar13 = pFVar18 + (longlong)iVar7 * 8;
  local_110 = 0;
  while( true ) {
    uVar15 = 0;
    if (param_2->ArrayNum != iVar7) {
      local_138[0] = 0;
      `TCheckedPointerIterator<FDistanceFieldAssetMipId,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_138);
    }
    if (pFVar18 == pFVar13) break;
    local_130 = *(longlong *)pFVar18;
    iVar6 = (int)local_130;
    plVar16 = (longlong *)((longlong)iVar6 * 0xe8 + *(longlong *)&(this->AssetStateArray).Elements);
    iVar14 = (int)((ulonglong)local_130 >> 0x20);
    if ((iVar14 != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReversedMipIndex == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                           ,0x39b,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar10 = (ulonglong)(2 - iVar14) * 0x38 + *plVar16;
    local_110 = local_110 + (uint)(local_128 * *(int *)(lVar10 + 0x34));
    local_88 = 0;
    local_78 = 0;
    FStack_70.Impl = (FIoRequestImpl *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    local_98 = *(undefined8 *)(*plVar16 + 0x108);
    pFVar12 = (param_3->AllocatorInstance).Data;
    _local_a4 = CONCAT44(*(undefined4 *)(lVar10 + 0x34),local_130._4_4_);
    local_90 = *(undefined8 *)(*plVar16 + 0xd0);
    local_80 = (ulonglong)*(uint *)(*plVar16 + 0xd8) << 0x20;
    local_a8 = iVar6;
    if (((pFVar12 <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 < pFVar12 + (longlong)param_3->ArrayMax * 0x50)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = param_3->ArrayNum;
    if (iVar6 == param_3->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar6 + 1;
    pFVar12 = (param_3->AllocatorInstance).Data + (longlong)iVar6 * 0x50;
    *(int *)pFVar12 = local_a8;
    *(int *)(pFVar12 + 4) = local_a4;
    *(int *)(pFVar12 + 8) = iStack_a0;
    *(undefined8 *)(pFVar12 + 0x10) = local_98;
    *(undefined8 *)(pFVar12 + 0x18) = local_90;
    *(undefined8 *)(pFVar12 + 0x20) = local_88;
    *(int *)(pFVar12 + 0x28) = (int)local_80;
    *(int *)(pFVar12 + 0x2c) = local_80._4_4_;
    *(undefined8 *)(pFVar12 + 0x30) = local_78;
    FIoRequest::FIoRequest((FIoRequest *)(pFVar12 + 0x38),&FStack_70);
    *(undefined8 *)(pFVar12 + 0x40) = local_68;
    *(undefined8 *)(pFVar12 + 0x48) = uStack_60;
    FIoRequest::~FIoRequest(&FStack_70);
    pFVar18 = pFVar18 + 8;
  }
  if (0 < (this->ReadRequests).ArrayNum) {
    this_00 = &this->ReadRequests;
    local_130 = 0;
    do {
      lVar10 = local_130;
      uVar11 = 0;
      if ((int)uVar15 < (this->ReadRequests).ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar13 = (this_00->AllocatorInstance).Data + lVar10;
      local_108 = *(uint *)pFVar13;
      local_104 = *(int *)(pFVar13 + 4);
      local_100 = *(int *)(pFVar13 + 8);
      local_f8 = *(longlong *)(pFVar13 + 0x10);
      local_f0 = *(undefined8 *)(pFVar13 + 0x18);
      local_e8 = *(undefined8 *)(pFVar13 + 0x20);
      local_e0 = *(undefined4 *)(pFVar13 + 0x28);
      local_dc = *(undefined4 *)(pFVar13 + 0x2c);
      local_d8 = *(undefined8 *)(pFVar13 + 0x30);
      FIoRequest::FIoRequest(&local_d0,(FIoRequest *)(pFVar13 + 0x38));
      local_c8 = *(undefined8 *)(pFVar13 + 0x40);
      local_c0 = *(longlong *)(pFVar13 + 0x48);
      if (local_c0 == 0) {
        local_134 = local_134 | 1;
        pFVar8 = FIoRequest::Status(&local_d0,&local_50);
        local_134 = local_134 & 0xfffffffe;
        EVar1 = pFVar8->ErrorCode;
        FIoStatus::~FIoStatus(&local_50);
        bVar5 = EVar1 == Unknown;
      }
      else {
        bVar5 = *(char *)(local_c0 + 0x41) == '\0';
      }
      if (!bVar5) {
        uVar11 = 0;
        if ((int)uVar15 < (this->ReadRequests).ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TArray<FDistanceFieldReadRequest,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (this_00,uVar15);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,&this_00->AllocatorInstance,(this->ReadRequests).ArrayNum,
                   &(this->ReadRequests).ArrayMax);
        uVar11 = local_108;
        local_130 = local_130 + -0x50;
        uVar15 = uVar15 - 1;
        if (((local_108 != 0xffffffff) && (-1 < (int)local_108)) &&
           ((int)local_108 < *(int *)&(this->AssetStateArray).Elements.field_0x8)) {
          if ((*(int *)&(this->AssetStateArray).Elements.field_0x28 <= (int)local_108) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          puVar2 = *(undefined1 **)&(this->AssetStateArray).Elements.field_0x20;
          puVar17 = &(this->AssetStateArray).Elements.field_0x10;
          if (puVar2 != (undefined1 *)0x0) {
            puVar17 = puVar2;
          }
          uVar9 = uVar11 & 0x1f;
          if ((int)uVar11 < 0) {
            uVar11 = uVar11 + 0x1f;
          }
          if ((((*(uint *)(puVar17 + (longlong)((int)uVar11 >> 5) * 4) >> uVar9 & 1) != 0) &&
              (plVar16 = (longlong *)
                         (*(longlong *)&(this->AssetStateArray).Elements +
                         (longlong)(int)local_108 * 0xe8),
              local_f8 == *(longlong *)(*plVar16 + 0x108))) && (local_104 == (int)plVar16[0x1b])) {
            local_124 = local_108;
            iStack_120 = local_104;
            local_110 = local_110 + (uint)(local_100 * local_128);
            pFVar13 = (param_2->AllocatorInstance).Data;
            if (((pFVar13 <= (FScriptContainerElement *)&local_124) &&
                ((FScriptContainerElement *)&local_124 < pFVar13 + (longlong)param_2->ArrayMax * 8))
               && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar7 = param_2->ArrayNum;
            if (iVar7 == param_2->ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar7 + 1;
            uStack_118 = 0;
            *(ulonglong *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8) =
                 CONCAT44(iStack_120,local_124);
            pFVar13 = (param_1->AllocatorInstance).Data;
            local_11c = local_108;
            if (((pFVar13 <= (FScriptContainerElement *)&local_11c) &&
                ((FScriptContainerElement *)&local_11c < pFVar13 + (longlong)param_1->ArrayMax * 8))
               && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar7 = param_1->ArrayNum;
            if (iVar7 == param_1->ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
            }
            param_1->ArrayNum = iVar7 + 1;
            *(ulonglong *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) =
                 CONCAT44(uStack_118,local_11c);
            pFVar13 = (param_3->AllocatorInstance).Data;
            if (((pFVar13 <= (FScriptContainerElement *)&local_108) &&
                ((FScriptContainerElement *)&local_108 <
                 pFVar13 + (longlong)param_3->ArrayMax * 0x50)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar7 = param_3->ArrayNum;
            if (iVar7 == param_3->ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x850,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            param_3->ArrayNum = iVar7 + 1;
            pFVar13 = (param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x50;
            *(uint *)pFVar13 = local_108;
            *(int *)(pFVar13 + 4) = local_104;
            *(int *)(pFVar13 + 8) = local_100;
            *(longlong *)(pFVar13 + 0x10) = local_f8;
            *(undefined8 *)(pFVar13 + 0x18) = local_f0;
            *(undefined8 *)(pFVar13 + 0x20) = local_e8;
            *(undefined4 *)(pFVar13 + 0x28) = local_e0;
            *(undefined4 *)(pFVar13 + 0x2c) = local_dc;
            *(undefined8 *)(pFVar13 + 0x30) = local_d8;
            FIoRequest::FIoRequest((FIoRequest *)(pFVar13 + 0x38),&local_d0);
            *(undefined8 *)(pFVar13 + 0x40) = local_c8;
            *(longlong *)(pFVar13 + 0x48) = local_c0;
          }
        }
        pFVar13 = (param_4->AllocatorInstance).Data;
        if (((pFVar13 <= (FScriptContainerElement *)&local_108) &&
            ((FScriptContainerElement *)&local_108 < pFVar13 + (longlong)param_4->ArrayMax * 0x50))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = param_4->ArrayNum;
        if (iVar7 == param_4->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x850,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar7 + 1;
        pFVar13 = (param_4->AllocatorInstance).Data + (longlong)iVar7 * 0x50;
        *(uint *)pFVar13 = local_108;
        *(int *)(pFVar13 + 4) = local_104;
        *(int *)(pFVar13 + 8) = local_100;
        *(longlong *)(pFVar13 + 0x10) = local_f8;
        *(undefined8 *)(pFVar13 + 0x18) = local_f0;
        *(undefined8 *)(pFVar13 + 0x20) = local_e8;
        *(undefined4 *)(pFVar13 + 0x28) = local_e0;
        *(undefined4 *)(pFVar13 + 0x2c) = local_dc;
        *(undefined8 *)(pFVar13 + 0x30) = local_d8;
        FIoRequest::FIoRequest((FIoRequest *)(pFVar13 + 0x38),&local_d0);
        *(undefined8 *)(pFVar13 + 0x40) = local_c8;
        *(longlong *)(pFVar13 + 0x48) = local_c0;
      }
      if (local_58 <= local_110) {
        FIoRequest::~FIoRequest(&local_d0);
        break;
      }
      FIoRequest::~FIoRequest(&local_d0);
      uVar15 = uVar15 + 1;
      local_130 = local_130 + 0x50;
    } while ((int)uVar15 < (this->ReadRequests).ArrayNum);
  }
  if ((param_1 == param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar7 = param_2->ArrayNum;
  if (iVar7 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,iVar7,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
    memcpy((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8,(param_2->AllocatorInstance).Data
           ,(longlong)iVar7 << 3);
  }
  return;
}

// ProcessStreamingRequestsFromGPU @ 14488e870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDistanceFieldSceneData::ProcessStreamingRequestsFromGPU
          (FDistanceFieldSceneData *this,
          TArray<FDistanceFieldReadRequest,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_> *param_2)

{
  ForElementType<FDistanceFieldAssetMipState> *pFVar1;
  TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  TConsoleVariableData<int> *pTVar9;
  TConsoleVariableData<int> *pTVar10;
  TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FDistanceFieldReadRequest,TSizedDefaultAllocator<32>_> *pTVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<_private:_void___cdecl_FDistanceFieldSceneData::ProcessStreamingRequestsFromGPU(TArray<FDistanceFieldReadRequest,TSizedDefaultAllocator<32>_>_&,TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_STAT_DistanceFieldProcessStreamingRequests>
  FVar19;
  uint *puVar20;
  ForElementType<FDistanceFieldAssetMipState> *pFVar21;
  ForElementType<int> FVar22;
  uint uVar23;
  ForElementType<int> _Src;
  FScriptContainerElement *pFVar24;
  FName FVar25;
  uint uVar26;
  int iVar27;
  uchar *_Src_00;
  FScriptContainerElement *pFVar28;
  undefined1 *puVar29;
  longlong lVar30;
  longlong lVar31;
  longlong *plVar32;
  bool bVar33;
  undefined1 auStackY_1b8 [32];
  uint local_154;
  undefined1 local_14f;
  undefined1 local_14e [2];
  int local_14c;
  FName local_148;
  uint local_140;
  undefined4 uStack_13c;
  uint *local_138;
  FColor_u_0 local_130;
  uint local_12c;
  uint local_128;
  longlong *local_120;
  uint local_118;
  undefined8 local_114;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  FIoRequest FStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_> *local_a8;
  TArray<FDistanceFieldReadRequest,TSizedDefaultAllocator<32>_> *local_a0;
  FName local_98;
  FName local_90;
  TIntVector3<int>_u_0 local_88;
  int local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  ForElementType<int> local_68;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  uVar26 = 0;
  local_a8 = param_2;
  local_a0 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_DistanceFieldProcessStreamingRequests ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FDistanceFieldSceneData::ProcessStreamingRequestsFromGPU(TArray<FDistanceFieldReadRequest,TSizedDefaultAllocator<32>_>_&,TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_STAT_DistanceFieldProcessStreamingRequests>
         )0x0) {
      pFVar18 = ::FName::FName(&local_98,"STAT_DistanceFieldProcessStreamingRequests");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DistanceFieldProcessStreamingRequests,
                 *pFVar18,L"STAT_DistanceFieldProcessStreamingRequests","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar19 = StatPtr_STAT_DistanceFieldProcessStreamingRequests;
  if (StatPtr_STAT_DistanceFieldProcessStreamingRequests ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FDistanceFieldSceneData::ProcessStreamingRequestsFromGPU(TArray<FDistanceFieldReadRequest,TSizedDefaultAllocator<32>_>_&,TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_STAT_DistanceFieldProcessStreamingRequests>
       )0x0) {
    pFVar18 = ::FName::FName(&local_90,"STAT_DistanceFieldProcessStreamingRequests");
    FVar19 = (FThreadSafeStaticStat<_private:_void___cdecl_FDistanceFieldSceneData::ProcessStreamingRequestsFromGPU(TArray<FDistanceFieldReadRequest,TSizedDefaultAllocator<32>_>_&,TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_STAT_DistanceFieldProcessStreamingRequests>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_DistanceFieldProcessStreamingRequests,*pFVar18,
                          L"STAT_DistanceFieldProcessStreamingRequests","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar19;
  bVar7 = false;
  bVar8 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  bVar13 = false;
  bVar33 = false;
  if ((FVar25.ComparisonIndex.Value.Value != 0) || (FVar25.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_130.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_130._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar7 = false;
      bVar8 = true;
      bVar13 = false;
      bVar33 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_c8.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c8,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                   ,0x310);
        bVar7 = true;
        bVar8 = true;
        bVar13 = true;
        bVar33 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_148 = FVar25;
      local_c0 = FVar25;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar13 = true;
      goto LAB_14488ea07;
    }
  }
  bVar8 = bVar33;
  bVar7 = bVar13;
  bVar13 = false;
  local_c0 = local_b8;
  FVar25 = local_b8;
LAB_14488ea07:
  bVar33 = -1 < CpuChannel->Enabled;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId785,"DistanceFieldProcessStreamingRequests",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
               ,0x311);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId785);
  }
  uVar16 = this->ReadbackBuffersNumPending;
  local_148 = (FName)0x0;
  while (uVar16 != 0) {
    uVar23 = ((this->MaxStreamingReadbackBuffers - uVar16) + this->ReadbackBuffersWriteIndex) %
             this->MaxStreamingReadbackBuffers;
    uVar16 = uVar26;
    if ((int)uVar23 < (this->StreamingRequestReadbackBuffers).ArrayNum) {
      uVar16 = ~uVar23 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar30 = *(longlong *)
              ((this->StreamingRequestReadbackBuffers).AllocatorInstance.Data +
              (longlong)(int)uVar23 * 8);
    lVar31 = *(longlong *)(lVar30 + 8);
    if ((lVar31 != 0) &&
       ((*(int *)(lVar31 + 0x18) != 0 ||
        (cVar15 = (**(code **)(**(longlong **)(lVar30 + 8) + 0x20))(), cVar15 == '\0')))) break;
    this->ReadbackBuffersNumPending = this->ReadbackBuffersNumPending - 1;
    uVar16 = uVar26;
    if ((int)uVar23 < (this->StreamingRequestReadbackBuffers).ArrayNum) {
      uVar16 = ~uVar23 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_148 = *(FName *)((this->StreamingRequestReadbackBuffers).AllocatorInstance.Data +
                          (longlong)(int)uVar23 * 8);
    uVar16 = this->ReadbackBuffersNumPending;
  }
  pTVar9 = CVarBrickAtlasSizeXYInBricks.Ref;
  bVar14 = IsInParallelRenderingThread();
  if ((!bVar14) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar10 = CVarMaxAtlasDepthInBricks.Ref;
  iVar27 = pTVar9->ShadowedValue[1];
  bVar14 = IsInParallelRenderingThread();
  if ((!bVar14) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar17 = (this->ReadRequests).ArrayNum;
  uVar16 = (pTVar10->ShadowedValue[1] + -1) * iVar27 * iVar27;
  pFVar24 = (this->ReadRequests).AllocatorInstance.Data;
  local_12c = uVar26;
  if (0 < (int)uVar16) {
    local_12c = uVar16;
  }
  iVar27 = ((this->DistanceFieldAtlasBlockAllocator).MaxNumBlocks -
           (this->DistanceFieldAtlasBlockAllocator).FreeBlocks.ArrayNum) *
           GDistanceFieldBlockAllocatorSizeInBricks;
  pFVar28 = pFVar24 + (longlong)iVar17 * 0x50;
  while( true ) {
    if ((this->ReadRequests).ArrayNum != iVar17) {
      local_14f = 0;
      `TCheckedPointerIterator<FDistanceFieldReadRequest,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_14f);
    }
    if (pFVar24 == pFVar28) break;
    iVar27 = iVar27 + *(int *)(pFVar24 + 8);
    pFVar24 = pFVar24 + 0x50;
  }
  if (local_148 != (FName)0x0) {
    puVar20 = FRHIGPUBufferReadback::Lock((FRHIGPUBufferReadback *)local_148,0x7ffc);
    uVar26 = 0xfff;
    if (*puVar20 < 0xfff) {
      uVar26 = *puVar20;
    }
    local_14c = 0;
    local_138 = puVar20;
    local_128 = uVar26;
    do {
      local_154 = 0;
      iVar17 = local_14c;
      if (uVar26 != 0) {
        do {
          uVar26 = puVar20[local_154 * 2 + 1];
          if ((-1 < (int)uVar26) &&
             ((int)uVar26 < *(int *)&(this->AssetStateArray).Elements.field_0x8)) {
            if ((*(int *)&(this->AssetStateArray).Elements.field_0x28 <= (int)uVar26) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5c6,L""), puVar20 = local_138, bVar14)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            puVar5 = *(undefined1 **)&(this->AssetStateArray).Elements.field_0x20;
            puVar29 = &(this->AssetStateArray).Elements.field_0x10;
            if (puVar5 != (undefined1 *)0x0) {
              puVar29 = puVar5;
            }
            uVar16 = uVar26;
            if ((int)uVar26 < 0) {
              uVar16 = uVar26 + 0x1f;
            }
            if ((*(uint *)(puVar29 + (longlong)((int)uVar16 >> 5) * 4) >> (uVar26 & 0x1f) & 1) != 0)
            {
              plVar32 = (longlong *)
                        ((longlong)(int)uVar26 * 0xe8 +
                        *(longlong *)&(this->AssetStateArray).Elements);
              uVar16 = puVar20[local_154 * 2 + 2];
              local_120 = plVar32;
              if ((3 < (int)uVar16) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("WantedNumMips <= DistanceField::NumMips && WantedNumMips <= AssetState.BuiltData->Mips.Num()"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                                      ,0x345,L""), bVar14)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar3 = (int)plVar32[0x1b];
              *(uint *)((longlong)plVar32 + 0xc) = uVar16;
              if ((int)uVar16 < iVar3) {
                if (iVar17 == 0) {
                  if ((iVar3 < 2) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("AssetState.ReversedMips.Num() > 1",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                                          ,0x34a,L""), bVar14)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pFVar1 = (ForElementType<FDistanceFieldAssetMipState> *)(plVar32 + 2);
                  if (((int)plVar32[0x1b] < 1) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pFVar21 = pFVar1;
                  if ((ForElementType<FDistanceFieldAssetMipState> *)plVar32[0x1a] !=
                      (ForElementType<FDistanceFieldAssetMipState> *)0x0) {
                    pFVar21 = (ForElementType<FDistanceFieldAssetMipState> *)plVar32[0x1a];
                  }
                  FDistanceFieldAssetMipState::FDistanceFieldAssetMipState
                            ((FDistanceFieldAssetMipState *)&local_88._s_0,
                             (FDistanceFieldAssetMipState *)
                             (pFVar21->InlineData + (longlong)((int)plVar32[0x1b] + -1) * 0x40));
                  lVar30 = plVar32[0x1b];
                  pFVar21 = pFVar1;
                  if ((ForElementType<FDistanceFieldAssetMipState> *)plVar32[0x1a] !=
                      (ForElementType<FDistanceFieldAssetMipState> *)0x0) {
                    pFVar21 = (ForElementType<FDistanceFieldAssetMipState> *)plVar32[0x1a];
                  }
                  _Src_00 = pFVar21->InlineData + (longlong)(int)lVar30 * 0x40;
                  if (*(void **)(_Src_00 + -0x10) != (void *)0x0) {
                    FMemory::Free(*(void **)(_Src_00 + -0x10));
                  }
                  iVar17 = (int)plVar32[0x1b] - (int)lVar30;
                  if (iVar17 != 0) {
                    memmove(_Src_00 + -0x40,_Src_00,(longlong)iVar17 << 6);
                  }
                  iVar17 = (int)plVar32[0x1b] + -1;
                  *(int *)(plVar32 + 0x1b) = iVar17;
                  UE::Core::Private::
                  ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FDistanceFieldAssetMipState>_>
                            (0x40,8,pFVar1,iVar17,(int *)((longlong)plVar32 + 0xdc));
                  if ((uint)GDistanceFieldOffsetDataStructure < 2) {
                    FGrowOnlySpanAllocator::Free
                              (&this->IndirectionTableAllocator,local_7c,
                               local_88._s_0.Z * local_88._s_0.Y * local_88._s_0.X);
                  }
                  else {
                    FTextureLayout3d::RemoveElement
                              (&this->IndirectionAtlasLayout,local_78,local_74,local_70,
                               local_88._s_0.X,local_88._s_0.Y,local_88._s_0.Z);
                  }
                  if (0 < local_6c) {
                    if ((local_50 < 1) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("MipState.AllocatedBlocks.Num() > 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                                            ,0x359,L""), bVar14)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pTVar2 = &(this->DistanceFieldAtlasBlockAllocator).FreeBlocks;
                    if ((pTVar2 == (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                    *)&local_68) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(void*)this != (void*)&Source",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x96e,L""), bVar14)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    lVar30 = (longlong)local_50;
                    if (local_50 != 0) {
                      iVar17 = UE::Core::Private::
                               ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                         (4,4,local_50,&pTVar2->AllocatorInstance,
                                          &(this->DistanceFieldAtlasBlockAllocator).FreeBlocks.
                                           ArrayNum,
                                          &(this->DistanceFieldAtlasBlockAllocator).FreeBlocks.
                                           ArrayMax);
                      _Src = (ForElementType<int>)&local_68;
                      if (local_68.SecondaryData != (ForElementType<int>)0x0) {
                        _Src = local_68.SecondaryData;
                      }
                      FVar22 = (this->DistanceFieldAtlasBlockAllocator).FreeBlocks.AllocatorInstance
                               .SecondaryData;
                      if (FVar22 == (ForElementType<int>)0x0) {
                        FVar22 = (ForElementType<int>)
                                 &(this->DistanceFieldAtlasBlockAllocator).FreeBlocks;
                      }
                      memcpy((void *)((longlong)FVar22 + (longlong)iVar17 * 4),(void *)_Src,
                             lVar30 << 2);
                    }
                  }
                  pTVar11 = local_a8;
                  uStack_13c = 0;
                  pFVar24 = (local_a8->AllocatorInstance).Data;
                  local_140 = uVar26;
                  if (((pFVar24 <= (FScriptContainerElement *)&local_140) &&
                      ((FScriptContainerElement *)&local_140 <
                       pFVar24 + (longlong)local_a8->ArrayMax * 8)) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar14)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar17 = pTVar11->ArrayNum;
                  if (iVar17 == pTVar11->ArrayMax) {
                    iVar17 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x408,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
                  }
                  pTVar11->ArrayNum = iVar17 + 1;
                  *(ulonglong *)((pTVar11->AllocatorInstance).Data + (longlong)iVar17 * 8) =
                       CONCAT44(uStack_13c,local_140);
                  iVar17 = local_14c;
                  if (local_68.SecondaryData != (ForElementType<int>)0x0) {
                    FMemory::Free((void *)local_68.SecondaryData);
                    iVar17 = local_14c;
                  }
                }
              }
              else if (iVar3 < (int)uVar16) {
                if (iVar17 == 0) {
                  if (1 < iVar3) goto LAB_14488f0bd;
LAB_14488f122:
                  bVar14 = true;
                }
                else {
                  if (iVar3 == 2) goto LAB_14488f122;
LAB_14488f0bd:
                  bVar14 = false;
                }
                if ((iVar27 <= (int)local_12c) && (bVar14)) {
                  iVar4 = (this->ReadRequests).ArrayNum;
                  pFVar24 = (this->ReadRequests).AllocatorInstance.Data;
                  pFVar28 = pFVar24 + (longlong)iVar4 * 0x50;
                  while( true ) {
                    if ((this->ReadRequests).ArrayNum != iVar4) {
                      local_14e[0] = 0;
                      `TCheckedPointerIterator<FDistanceFieldReadRequest_const_,int,0>::operator!='
                      ::__l2::<lambda_1>::operator()(local_14e);
                    }
                    pTVar12 = local_a0;
                    iVar17 = local_14c;
                    if (pFVar24 == pFVar28) break;
                    if (*(uint *)pFVar24 == uVar26) goto LAB_14488f2c7;
                    pFVar24 = pFVar24 + 0x50;
                  }
                  lVar30 = *local_120;
                  lVar31 = (ulonglong)(2 - iVar3) * 0x38 + lVar30;
                  if (*(int *)(lVar31 + 0x5c) != 0) {
                    local_e8 = 0;
                    FStack_e0.Impl = (FIoRequestImpl *)0x0;
                    local_d8 = 0;
                    uStack_d0 = 0;
                    local_100 = 0;
                    local_108 = *(undefined8 *)(lVar30 + 0x108);
                    local_f8 = lVar30 + 0xe0;
                    pFVar24 = (local_a0->AllocatorInstance).Data;
                    local_114 = CONCAT44(*(undefined4 *)(lVar31 + 0x34),iVar3);
                    local_f0 = CONCAT44(*(int *)(lVar31 + 0x5c),*(undefined4 *)(lVar31 + 0x58));
                    local_118 = uVar26;
                    if (((pFVar24 <= (FScriptContainerElement *)&local_118) &&
                        ((FScriptContainerElement *)&local_118 <
                         pFVar24 + (longlong)local_a0->ArrayMax * 0x50)) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar14)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar17 = pTVar12->ArrayNum;
                    if (iVar17 == pTVar12->ArrayMax) {
                      iVar17 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x850,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
                    }
                    pTVar12->ArrayNum = iVar17 + 1;
                    pFVar24 = (pTVar12->AllocatorInstance).Data + (longlong)iVar17 * 0x50;
                    *(uint *)pFVar24 = local_118;
                    *(uint *)(pFVar24 + 4) = (uint)local_114;
                    *(uint *)(pFVar24 + 8) = local_114._4_4_;
                    *(undefined8 *)(pFVar24 + 0x10) = local_108;
                    *(undefined8 *)(pFVar24 + 0x18) = local_100;
                    *(longlong *)(pFVar24 + 0x20) = local_f8;
                    *(uint *)(pFVar24 + 0x28) = (uint)local_f0;
                    *(uint *)(pFVar24 + 0x2c) = local_f0._4_4_;
                    *(undefined8 *)(pFVar24 + 0x30) = local_e8;
                    FIoRequest::FIoRequest((FIoRequest *)(pFVar24 + 0x38),&FStack_e0);
                    *(undefined8 *)(pFVar24 + 0x40) = local_d8;
                    *(undefined8 *)(pFVar24 + 0x48) = uStack_d0;
                    iVar27 = iVar27 + *(int *)(lVar31 + 0x34);
                    FIoRequest::~FIoRequest(&FStack_e0);
                    iVar17 = local_14c;
                  }
                }
              }
            }
          }
LAB_14488f2c7:
          local_154 = local_154 + 1;
          puVar20 = local_138;
          uVar26 = local_128;
        } while (local_154 < local_128);
      }
      local_14c = iVar17 + 1;
    } while (local_14c < 2);
    FRHIGPUBufferReadback::Unlock((FRHIGPUBufferReadback *)local_148);
    FVar25 = local_c0;
  }
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  return;
}

// ResizeBrickAtlasIfNeeded @ 14489d4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRDGTexture * __thiscall
FDistanceFieldSceneData::ResizeBrickAtlasIfNeeded
          (FDistanceFieldSceneData *this,FRDGBuilder *param_1,FGlobalShaderMap *param_2)

{
  int *piVar1;
  TRefCountPtr<IPooledRenderTarget> *pTVar2;
  ulonglong uVar3;
  ushort uVar4;
  IPooledRenderTarget *pIVar5;
  IPooledRenderTarget *pIVar6;
  code *pcVar7;
  FRDGBufferSRV *pFVar8;
  FRHISamplerState *pFVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  TConsoleVariableData<int> *pTVar12;
  TConsoleVariableData<int> *pTVar13;
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  FRDGTexture *pFVar18;
  longlong lVar19;
  undefined8 *puVar20;
  FRDGTextureUAV *pFVar21;
  FDistanceFieldAtlasParameters *pFVar22;
  FGlobalShaderType *pFVar23;
  FShaderType *pFVar24;
  FName this_00;
  FRDGEventName *pFVar25;
  FShaderParametersMetadata *pFVar26;
  TRefCountPtr<IPooledRenderTarget> *pTVar27;
  int iVar28;
  uint uVar29;
  undefined1 auStackY_2b8 [32];
  undefined1 local_268 [16];
  undefined8 local_258;
  FParameters *local_248;
  undefined8 *local_240;
  int local_238;
  int iStack_234;
  FDistanceFieldSceneData *local_230;
  TIntVector3<int>_u_0 local_228;
  FRDGTextureUAVDesc local_218;
  undefined4 local_200;
  FGlobalShaderMap *local_1f8;
  undefined8 local_1f0;
  uint local_1e8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1d8;
  undefined1 local_1c8 [8];
  FString local_1c0;
  TShaderRefBase<FCopyDistanceFieldAtlasCS,FShaderMapPointerTable> local_1a8;
  FRDGEventName local_198;
  FDistanceFieldAtlasParameters local_178;
  undefined1 local_b8 [28];
  int local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined2 local_8c;
  undefined4 local_8a;
  undefined4 local_86;
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_230 = this;
  local_1f8 = param_2;
  if ((*(int *)(param_1->_padding_ + 0x29c) !=
       (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("GraphBuilder.RHICmdList.GetGPUMask() == FRHIGPUMask::All()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                          ,0x3e0,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    pFVar18 = (FRDGTexture *)(*pcVar7)();
    return pFVar18;
  }
  pTVar12 = CVarBrickAtlasSizeXYInBricks.Ref;
  bVar15 = IsInParallelRenderingThread();
  if ((!bVar15) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar15)) {
    pcVar7 = (code *)swi(3);
    pFVar18 = (FRDGTexture *)(*pcVar7)();
    return pFVar18;
  }
  pTVar13 = CVarMaxAtlasDepthInBricks.Ref;
  iVar17 = pTVar12->ShadowedValue[1];
  iVar28 = (GDistanceFieldBlockAllocatorSizeInBricks *
            (this->DistanceFieldAtlasBlockAllocator).MaxNumBlocks + -1 + iVar17 * iVar17) /
           (iVar17 * iVar17);
  bVar15 = IsInParallelRenderingThread();
  if ((!bVar15) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar15)) {
    pcVar7 = (code *)swi(3);
    pFVar18 = (FRDGTexture *)(*pcVar7)();
    return pFVar18;
  }
  pTVar12 = CVarResizeAtlasEveryFrame.Ref;
  if (pTVar13->ShadowedValue[1] < iVar28) {
    uVar29 = (iVar28 + 3 >> 0x1f & 3U) + iVar28 + 3 & 0xfffffffc;
  }
  else {
    iVar16 = 1;
    if (iVar28 != 0) {
      iVar16 = iVar28;
    }
    uVar3 = (ulonglong)(iVar16 - 1) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_200 = (undefined4)lVar19;
    uVar29 = 1 << ((byte)lVar19 & 0x1f);
  }
  local_258 = (FRDGTexture *)CONCAT44(iVar17,iVar17);
  bVar15 = IsInParallelRenderingThread();
  if ((!bVar15) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar15)) {
    pcVar7 = (code *)swi(3);
    pFVar18 = (FRDGTexture *)(*pcVar7)();
    return pFVar18;
  }
  iVar28 = pTVar12->ShadowedValue[1];
  pTVar2 = &this->DistanceFieldBrickVolumeTexture;
  if (pTVar2->Reference != (IPooledRenderTarget *)0x0) {
    lVar19 = (**(code **)(pTVar2->Reference->_padding_ + 0x10))();
    if ((((*(int *)(lVar19 + 0x2c) == iVar17 * 8) && (*(int *)(lVar19 + 0x30) == iVar17 * 8)) &&
        ((uint)*(ushort *)(lVar19 + 0x34) == uVar29 * 8)) && (iVar28 == 0)) {
      pFVar18 = FRDGBuilder::RegisterExternalTexture(param_1,pTVar2,None);
      return pFVar18;
    }
  }
  uVar14 = local_258;
  uVar11 = FClearValueBinding::Black.Value._4_8_;
  uVar10 = FClearValueBinding::Black._0_8_;
  local_258 = (FRDGTexture *)CONCAT44(local_258._4_4_,FClearValueBinding::Black.Value.Color[3]);
  local_1f0 = uVar14;
  local_248 = (FParameters *)CONCAT44(local_248._4_4_,local_258._4_4_ * 8);
  iStack_234 = local_258._4_4_ * 8;
  local_1e8 = uVar29;
  if (0xffff < (int)(uVar29 * 8)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Size.Z <= TNumericLimits<decltype(FRDGTextureDesc::Depth)>::Max()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                        ,0x29e,L"Depth parameter (Size.Z) exceeds valid range");
    if (bVar15) {
      pcVar7 = (code *)swi(3);
      pFVar18 = (FRDGTexture *)(*pcVar7)();
      return pFVar18;
    }
    iStack_234 = (int)local_248;
  }
  local_b8._24_4_ = (undefined4)local_258;
  local_9c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_98 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 1;
  local_94._4_4_ = iStack_234;
  local_94._0_4_ = iVar17 * 8;
  local_b8._0_8_ = 0x20808;
  local_b8._8_8_ = uVar10;
  local_b8._16_8_ = uVar11;
  local_8c = (undefined2)(uVar29 * 8);
  local_8a = 0x1010001;
  local_86 = 0xff000302;
  local_238 = iVar17 * 8;
  pFVar18 = FRDGBuilder::CreateTexture
                      (param_1,(FRDGTextureDesc *)local_b8,
                       L"DistanceFields.DistanceFieldBrickTexture",None);
  local_258 = pFVar18;
  if (pTVar2->Reference != (IPooledRenderTarget *)0x0) {
    puVar20 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0xe0,0x10);
    if (puVar20 == (undefined8 *)0x0) {
      puVar20 = (undefined8 *)0x0;
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        pFVar18 = (FRDGTexture *)(*pcVar7)();
        return pFVar18;
      }
    }
    else {
      *puVar20 = &___7__TObject_VFParameters_FCopyDistanceFieldAtlasCS___FRDGAllocator__6B_;
      puVar20[2] = 0;
      puVar20[4] = 0;
      puVar20[5] = 0;
      puVar20[6] = 0;
      puVar20[7] = 0;
      puVar20[8] = 0;
      puVar20[9] = 0;
    }
    local_240 = puVar20;
    if ((((undefined8 **)param_1->_padding_ <= &local_240) &&
        (&local_240 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar7 = (code *)swi(3);
      pFVar18 = (FRDGTexture *)(*pcVar7)();
      return pFVar18;
    }
    iVar17 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar17 == *piVar1) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar17 + 1;
    local_218._padding_._1_1_ = 0;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar17 * 8) = local_240;
    local_218._padding_._0_1_ = (pFVar18->Desc).field_0x34;
    local_218._padding_._2_4_ = 0;
    local_218._padding_._6_1_ = 0;
    local_218._padding_._0_1_ = 0;
    local_248 = (FParameters *)(puVar20 + 2);
    local_218.Texture = pFVar18;
    pFVar21 = FRDGBuilder::CreateUAV(param_1,&local_218,None);
    ((FParameters *)(puVar20 + 2))->RWDistanceFieldBrickAtlas = pFVar21;
    pFVar22 = DistanceField::SetupAtlasParameters(&local_178,param_1,this);
    pFVar8 = pFVar22->DistanceFieldIndirectionTable;
    puVar20[4] = pFVar22->SceneDistanceFieldAssetData;
    puVar20[5] = pFVar8;
    pFVar18 = pFVar22->DistanceFieldIndirectionAtlas;
    puVar20[6] = pFVar22->DistanceFieldIndirection2Table;
    puVar20[7] = pFVar18;
    pFVar9 = pFVar22->DistanceFieldSampler;
    puVar20[8] = pFVar22->DistanceFieldBrickTexture;
    puVar20[9] = pFVar9;
    uVar10 = *(undefined8 *)((longlong)&(pFVar22->DistanceFieldBrickSize).field0_0x0 + 8);
    puVar20[10] = *(undefined8 *)&(pFVar22->DistanceFieldBrickSize).field0_0x0;
    puVar20[0xb] = uVar10;
    uVar10 = *(undefined8 *)((longlong)&(pFVar22->DistanceFieldUniqueDataBrickSize).field0_0x0 + 8);
    puVar20[0xc] = *(undefined8 *)&(pFVar22->DistanceFieldUniqueDataBrickSize).field0_0x0;
    puVar20[0xd] = uVar10;
    uVar10 = *(undefined8 *)
              ((longlong)&(pFVar22->DistanceFieldBrickAtlasSizeInBricks).field0_0x0 + 8);
    puVar20[0xe] = *(undefined8 *)&(pFVar22->DistanceFieldBrickAtlasSizeInBricks).field0_0x0;
    puVar20[0xf] = uVar10;
    uVar10 = *(undefined8 *)((longlong)&(pFVar22->DistanceFieldBrickAtlasMask).field0_0x0 + 8);
    puVar20[0x10] = *(undefined8 *)&(pFVar22->DistanceFieldBrickAtlasMask).field0_0x0;
    puVar20[0x11] = uVar10;
    uVar10 = *(undefined8 *)((longlong)&(pFVar22->DistanceFieldBrickAtlasSizeLog2).field0_0x0 + 8);
    puVar20[0x12] = *(undefined8 *)&(pFVar22->DistanceFieldBrickAtlasSizeLog2).field0_0x0;
    puVar20[0x13] = uVar10;
    uVar10 = *(undefined8 *)((longlong)&(pFVar22->DistanceFieldBrickAtlasTexelSize).field0_0x0 + 8);
    puVar20[0x14] = *(undefined8 *)&(pFVar22->DistanceFieldBrickAtlasTexelSize).field0_0x0;
    puVar20[0x15] = uVar10;
    uVar10 = *(undefined8 *)
              ((longlong)&(pFVar22->DistanceFieldBrickAtlasHalfTexelSize).field0_0x0 + 8);
    puVar20[0x16] = *(undefined8 *)&(pFVar22->DistanceFieldBrickAtlasHalfTexelSize).field0_0x0;
    puVar20[0x17] = uVar10;
    uVar10 = *(undefined8 *)
              ((longlong)&(pFVar22->DistanceFieldBrickOffsetToAtlasUVScale).field0_0x0 + 8);
    puVar20[0x18] = *(undefined8 *)&(pFVar22->DistanceFieldBrickOffsetToAtlasUVScale).field0_0x0;
    puVar20[0x19] = uVar10;
    uVar10 = *(undefined8 *)
              ((longlong)&(pFVar22->DistanceFieldUniqueDataBrickSizeInAtlasTexels).field0_0x0 + 8);
    puVar20[0x1a] =
         *(undefined8 *)&(pFVar22->DistanceFieldUniqueDataBrickSizeInAtlasTexels).field0_0x0;
    puVar20[0x1b] = uVar10;
    pFVar23 = FCopyDistanceFieldAtlasCS::GetStaticType();
    if (*(int *)&pFVar23->field_0x50 != 1) {
      local_268[0] = 0;
      `FGlobalShaderMap::GetShader<FCopyDistanceFieldAtlasCS>'::__l2::<lambda_1>::operator()
                (local_268);
    }
    pFVar24 = (FShaderType *)FCopyDistanceFieldAtlasCS::GetStaticType();
    FGlobalShaderMap::GetShader(local_1f8,&local_1d8,pFVar24,0);
    if (CONCAT44(local_1d8.ShaderContent._4_4_,local_1d8.ShaderContent._0_4_) == 0) {
      this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_1c8);
      ::FName::ToString((FName *)this_00,&local_1c0);
      FCopyDistanceFieldAtlasCS::GetStaticType();
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
      }
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        pFVar18 = (FRDGTexture *)(*pcVar7)();
        return pFVar18;
      }
    }
    FCopyDistanceFieldAtlasCS::GetStaticType();
    local_1a8.ShaderContent._0_4_ = local_1d8.ShaderContent._0_4_;
    local_1a8.ShaderContent._4_4_ = local_1d8.ShaderContent._4_4_;
    local_1a8.ShaderMap._0_4_ = local_1d8.ShaderMap._0_4_;
    local_1a8.ShaderMap._4_4_ = local_1d8.ShaderMap._4_4_;
    lVar19 = (**(code **)(pTVar2->Reference->_padding_ + 0x10))();
    uVar4 = *(ushort *)(lVar19 + 0x34);
    iVar17 = *(int *)(lVar19 + 0x2c) + 3;
    iVar28 = *(int *)(lVar19 + 0x30) + 3;
    pFVar25 = FRDGEventName::FRDGEventName(&local_198,1,L"CopyDistanceFieldAtlas");
    pFVar26 = FCopyDistanceFieldAtlasCS::FParameters::FTypeInfo::GetStructMetadata();
    local_228._s_0.X = (int)((iVar17 >> 0x1f & 3U) + iVar17) >> 2;
    local_228._s_0.Y = (int)((iVar28 >> 0x1f & 3U) + iVar28) >> 2;
    local_228._s_0.Z = uVar4 + 3 >> 2;
    FComputeShaderUtils::AddPass<FCopyDistanceFieldAtlasCS>
              (param_1,pFVar25,Compute,&local_1a8,pFVar26,local_248,
               (TIntVector3<int> *)&local_228._s_0);
    this = local_230;
    if (local_198.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_198.FormattedEventName.Data.AllocatorInstance.Data);
      this = local_230;
    }
  }
  pFVar18 = local_258;
  *(undefined8 *)&(this->BrickTextureDimensionsInBricks).field0_0x0 = uVar14;
  (this->BrickTextureDimensionsInBricks).field0_0x0._s_0.Z = uVar29;
  pTVar27 = FRDGBuilder::ConvertToExternalTexture(param_1,local_258);
  pIVar5 = pTVar2->Reference;
  pIVar6 = pTVar27->Reference;
  if (pIVar5 != pIVar6) {
    pTVar2->Reference = pIVar6;
    if (pIVar6 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar6->_padding_ + 0x30))();
    }
    if (pIVar5 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar5->_padding_ + 0x38))(pIVar5);
    }
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  return pFVar18;
}

// ResizeIndirectionAtlasIfNeeded @ 14489db90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

bool __thiscall
FDistanceFieldSceneData::ResizeIndirectionAtlasIfNeeded
          (FDistanceFieldSceneData *this,FRDGBuilder *param_1,FGlobalShaderMap *param_2,
          FRDGTexture **param_3)

{
  longlong *plVar1;
  longlong lVar2;
  IPooledRenderTarget *pIVar3;
  IPooledRenderTarget *pIVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  TConsoleVariableData<int> *pTVar10;
  ForAnyElementType FVar11;
  FMemStackBase *this_00;
  FRDGBuilder *this_01;
  FDistanceFieldSceneData *pFVar12;
  bool bVar13;
  bool bVar14;
  undefined1 uVar15;
  bool bVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<_private:_bool___cdecl_FDistanceFieldSceneData::ResizeIndirectionAtlasIfNeeded(FRDGBuilder_&,FGlobalShaderMap_*,FRDGTexture_*_&)_::_2_::FStat_STAT_ResizeIndirectionAtlasIfNeeded>
  FVar19;
  longlong lVar20;
  FRDGTexture *pFVar21;
  FShaderType *pFVar22;
  FName this_02;
  FRDGTexture *pFVar23;
  undefined8 *puVar24;
  FRDGEventName *pFVar25;
  FShaderParametersMetadata *pFVar26;
  TRefCountPtr<IPooledRenderTarget> *pTVar27;
  int iVar28;
  longlong lVar29;
  FName FVar30;
  int iVar31;
  ulonglong uVar32;
  undefined8 *puVar33;
  int iVar34;
  uint *puVar35;
  uint uVar36;
  undefined4 uVar37;
  longlong lVar38;
  FRDGBuilder *this_03;
  uint uVar39;
  uint uVar40;
  ulonglong uVar41;
  FName FVar42;
  bool bVar43;
  undefined1 auStackY_1358 [32];
  int local_12f0;
  TArray<FDistanceFieldAssetMipRelocation,TSizedDefaultAllocator<32>_> local_12d8;
  int local_12c8;
  uint local_12c4;
  undefined8 local_12c0;
  int local_12b0;
  FName local_12a8;
  FRDGTexture *local_12a0;
  undefined8 *local_1298;
  FRDGBuilder *local_1290;
  FGlobalShaderMap *local_1288;
  FColor_u_0 local_1280 [2];
  FName local_1278;
  FDistanceFieldSceneData *local_1270;
  FName local_1268;
  int local_1260;
  int iStack_125c;
  FRDGTexture **local_1258;
  undefined8 local_1250;
  undefined4 uStack_1248;
  undefined4 uStack_1244;
  undefined4 uStack_1240;
  undefined4 uStack_123c;
  undefined8 uStack_1238;
  undefined4 local_1230;
  TIntVector3<int>_u_0 local_122c;
  FName local_1220;
  TIntVector3<int>_u_0 local_1208;
  TIntVector3<int>_u_0 local_11f8;
  TIntVector3<int>_u_0 local_11e8;
  FRDGTextureUAVDesc local_11d8;
  int local_11c0;
  void *local_11b8;
  TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator>
  *local_11b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_11a8;
  TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator>
  *local_1188;
  int iStack_1180;
  uint uStack_117c;
  undefined1 *local_1178;
  undefined4 uStack_1170;
  int iStack_116c;
  int local_1168;
  undefined4 uStack_1164;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1158;
  FName local_1148;
  FString local_1140;
  TShaderRefBase<FCopyDistanceFieldIndirectionAtlasCS,FShaderMapPointerTable> local_1128;
  FString local_1118;
  FString local_1108;
  FName local_10f8;
  FRDGEventName local_10f0 [2];
  undefined4 local_10bc;
  undefined1 local_10b8 [24];
  float local_10a0;
  int local_109c;
  undefined4 local_1098;
  undefined8 local_1094;
  undefined2 local_108c;
  undefined4 local_108a;
  undefined4 local_1086;
  void *local_1078;
  undefined4 local_1070;
  undefined4 local_106c;
  uchar local_1068 [4096];
  ulonglong local_68;
  undefined8 uStack_48;
  
  uStack_48 = 0x14489dbaf;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1358;
  local_12c4 = 0;
  local_1290 = param_1;
  local_1288 = param_2;
  local_1270 = this;
  local_1258 = param_3;
  if ((*(int *)(param_1->_padding_ + 0x29c) !=
       (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("GraphBuilder.RHICmdList.GetGPUMask() == FRHIGPUMask::All()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                          ,0x433,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    uVar15 = (*pcVar5)();
    return (bool)uVar15;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ResizeIndirectionAtlasIfNeeded ==
        (FThreadSafeStaticStat<_private:_bool___cdecl_FDistanceFieldSceneData::ResizeIndirectionAtlasIfNeeded(FRDGBuilder_&,FGlobalShaderMap_*,FRDGTexture_*_&)_::_2_::FStat_STAT_ResizeIndirectionAtlasIfNeeded>
         )0x0) {
      pFVar18 = ::FName::FName(&local_1148,"STAT_ResizeIndirectionAtlasIfNeeded");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResizeIndirectionAtlasIfNeeded,*pFVar18,
                 L"STAT_ResizeIndirectionAtlasIfNeeded","STATGROUP_Quick","STATCAT_Advanced",
                 L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar19 = StatPtr_STAT_ResizeIndirectionAtlasIfNeeded;
  if (StatPtr_STAT_ResizeIndirectionAtlasIfNeeded ==
      (FThreadSafeStaticStat<_private:_bool___cdecl_FDistanceFieldSceneData::ResizeIndirectionAtlasIfNeeded(FRDGBuilder_&,FGlobalShaderMap_*,FRDGTexture_*_&)_::_2_::FStat_STAT_ResizeIndirectionAtlasIfNeeded>
       )0x0) {
    pFVar18 = ::FName::FName(&local_10f8,"STAT_ResizeIndirectionAtlasIfNeeded");
    FVar19 = (FThreadSafeStaticStat<_private:_bool___cdecl_FDistanceFieldSceneData::ResizeIndirectionAtlasIfNeeded(FRDGBuilder_&,FGlobalShaderMap_*,FRDGTexture_*_&)_::_2_::FStat_STAT_ResizeIndirectionAtlasIfNeeded>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResizeIndirectionAtlasIfNeeded,
                          *pFVar18,L"STAT_ResizeIndirectionAtlasIfNeeded","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar30 = *(FName *)FVar19;
  bVar14 = false;
  bVar6 = false;
  local_1220.ComparisonIndex.Value = 0;
  local_1220.Number = 0;
  bVar13 = false;
  bVar43 = false;
  if ((FVar30.ComparisonIndex.Value.Value == 0) && (FVar30.Number == 0)) {
LAB_14489dd85:
    bVar6 = bVar43;
    bVar14 = bVar13;
    bVar13 = false;
    local_1278 = local_1220;
    FVar30 = local_1220;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1280[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1280[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar14 = false;
      bVar6 = true;
      bVar13 = false;
      bVar43 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1268.ComparisonIndex.Value = FVar30.ComparisonIndex.Value.Value;
        local_1268.Number = FVar30.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1268,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                   ,0x435);
        bVar14 = true;
        bVar6 = true;
        bVar13 = true;
        bVar43 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14489dd85;
    local_12a8 = FVar30;
    local_1278 = FVar30;
    FThreadStats::AddMessage(FVar30,CycleScopeStart);
    bVar13 = true;
  }
  bVar43 = -1 < CpuChannel->Enabled;
  if (bVar43) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1078,
               "FDistanceFieldSceneData::ResizeIndirectionAtlasIfNeeded",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
               ,0x436);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1078);
  }
  local_12a8 = (FName)&this->IndirectionAtlas;
  if (((TRefCountPtr<IPooledRenderTarget> *)local_12a8)->Reference == (IPooledRenderTarget *)0x0) {
    iVar17 = (int)((ulonglong)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_ >> 0x20);
    local_12f0 = (int)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    uVar37 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  }
  else {
    lVar20 = (**(code **)(((TRefCountPtr<IPooledRenderTarget> *)local_12a8)->Reference->_padding_ +
                         0x10))();
    local_12f0 = *(int *)(lVar20 + 0x2c);
    iVar17 = *(int *)(lVar20 + 0x30);
    uVar37 = (uint)*(ushort *)(lVar20 + 0x34);
  }
  pTVar10 = CVarDefragmentIndirectionAtlas.Ref;
  iVar31 = MinIndirectionAtlasSizeXYZ;
  if (MinIndirectionAtlasSizeXYZ < local_12f0) {
    iVar31 = local_12f0;
  }
  local_12a0 = (FRDGTexture *)CONCAT44(local_12a0._4_4_,local_12f0);
  iVar34 = MinIndirectionAtlasSizeXYZ;
  if (MinIndirectionAtlasSizeXYZ < iVar17) {
    iVar34 = iVar17;
  }
  uVar36 = MinIndirectionAtlasSizeXYZ;
  if (MinIndirectionAtlasSizeXYZ < (int)uVar37) {
    uVar36 = uVar37;
  }
  local_12c0 = (FMemStackBase *)CONCAT44(local_12c0._4_4_,uVar37);
  for (; iVar31 < (int)(this->IndirectionAtlasLayout).SizeX;
      iVar31 = (int)((float)iVar31 + (float)iVar31)) {
  }
  for (; iVar34 < (int)(this->IndirectionAtlasLayout).SizeY;
      iVar34 = (int)((float)iVar34 + (float)iVar34)) {
  }
  for (; (int)uVar36 < (int)(this->IndirectionAtlasLayout).SizeZ;
      uVar36 = (uint)((float)(int)uVar36 + (float)(int)uVar36)) {
  }
  local_12c8 = iVar34;
  local_12b0 = iVar31;
  if (((local_12f0 != iVar31) || (iVar17 != iVar34)) || (uVar37 != uVar36)) {
    bVar16 = IsInParallelRenderingThread();
    if ((!bVar16) &&
       (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar15 = (*pcVar5)();
      return (bool)uVar15;
    }
    if (pTVar10->ShadowedValue[1] != 0) {
      local_12d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_12d8.ArrayNum = 0;
      local_12d8.ArrayMax = 0;
      FCsvProfiler::RecordEventfInternal
                (_GCsvCategory_DistanceField.Index,L"DefragmentIndirectionAtlas");
      if (-1 < BookmarkChannel->Enabled) {
        if (__BookmarkPoint1087 == false) {
          FMiscTrace::OutputBookmarkSpec
                    (&__BookmarkPoint1087,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                     ,0x43f,L"DistanceField/DefragmentIndirectionAtlas");
          __BookmarkPoint1087 = true;
        }
        uVar36 = CallstackTrace_GetCurrentId();
        local_1068[0] = '\0';
        FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint1087,uVar36,1,local_1068);
      }
      pFVar12 = local_1270;
      local_1208._s_0.X = MinIndirectionAtlasSizeXYZ;
      local_1208._s_0.Y = MinIndirectionAtlasSizeXYZ;
      local_1208._s_0.Z = MinIndirectionAtlasSizeXYZ;
      DefragmentIndirectionAtlas(local_1270,(TIntVector3<int> *)&local_1208._s_0,&local_12d8);
      iVar31 = MinIndirectionAtlasSizeXYZ;
      if (MinIndirectionAtlasSizeXYZ < local_12f0) {
        iVar31 = local_12f0;
      }
      iVar34 = MinIndirectionAtlasSizeXYZ;
      if (MinIndirectionAtlasSizeXYZ < iVar17) {
        iVar34 = iVar17;
      }
      uVar36 = MinIndirectionAtlasSizeXYZ;
      if (MinIndirectionAtlasSizeXYZ < (int)uVar37) {
        uVar36 = uVar37;
      }
      for (; iVar31 < (int)(pFVar12->IndirectionAtlasLayout).SizeX;
          iVar31 = (int)((float)iVar31 + (float)iVar31)) {
      }
      for (; iVar34 < (int)(pFVar12->IndirectionAtlasLayout).SizeY;
          iVar34 = (int)((float)iVar34 + (float)iVar34)) {
      }
      local_12c0 = (FMemStackBase *)CONCAT44(iVar34,iVar31);
      for (; (int)uVar36 < (int)(pFVar12->IndirectionAtlasLayout).SizeZ;
          uVar36 = (uint)((float)(int)uVar36 + (float)(int)uVar36)) {
      }
      goto LAB_14489e3d3;
    }
  }
  iVar28 = 0;
  local_12d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_12d8.ArrayNum = 0;
  local_12d8.ArrayMax = 0;
  if (((local_12f0 != iVar31) || (iVar17 != iVar34)) || (iVar34 = local_12c8, uVar37 != uVar36)) {
    local_11b0 = &local_1270->AssetStateArray;
    uStack_117c = 1;
    iVar31 = *(int *)&(local_1270->AssetStateArray).Elements.field_0x28;
    TStack_11a8.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(local_1270->AssetStateArray).Elements.field_0x10;
    local_1168 = 0;
    iStack_116c = iVar28;
    iStack_1180 = iVar28;
    if (iVar31 != 0) {
      puVar35 = *(uint **)&(local_1270->AssetStateArray).Elements.field_0x20;
      if (puVar35 == (uint *)0x0) {
        puVar35 = (uint *)TStack_11a8.Array;
      }
      uVar40 = *puVar35;
      local_1168 = 0;
      while (uVar40 == 0) {
        lVar20 = (longlong)iStack_1180;
        local_1168 = local_1168 + 0x20;
        iStack_1180 = iStack_1180 + 1;
        iStack_116c = iVar31;
        if ((int)(iVar31 + -1 + (iVar31 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1180)
        goto LAB_14489e183;
        uVar40 = puVar35[lVar20 + 1];
      }
      uStack_117c = -uVar40 & uVar40;
      uVar32 = (ulonglong)uStack_117c * 2 + 1;
      lVar20 = 0x3f;
      if (uVar32 != 0) {
        for (; uVar32 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_11c0 = (int)lVar20;
      iStack_116c = local_11c0 + -1 + local_1168;
      if (iVar31 < iStack_116c) {
        iStack_116c = iVar31;
      }
    }
LAB_14489e183:
    uStack_1170 = 0xffffffff;
    uStack_1164 = local_10bc;
    TStack_11a8._padding_ = CONCAT44(uStack_117c,iStack_1180);
    TStack_11a8.CurrentBitIndex = iStack_116c;
    TStack_11a8.UnvisitedBitMask = 0xffffffff;
    TStack_11a8._28_4_ = local_10bc;
    TStack_11a8.BaseBitIndex = local_1168;
    local_1188 = local_11b0;
    local_1178 = (undefined1 *)TStack_11a8.Array;
    if (iStack_116c < iVar31) {
      iVar31 = iStack_116c;
      do {
        lVar38 = (longlong)iVar31 * 0xe8;
        lVar20 = *(longlong *)&local_11b0->Elements;
        if (0 < *(int *)(lVar20 + 0xd8 + lVar38)) {
          lVar2 = lVar20 + lVar38;
          uVar32 = 0;
          uVar41 = 0;
          do {
            uVar39 = (uint)uVar41;
            uVar40 = 0;
            if ((int)uVar39 < *(int *)(lVar2 + 0xd8)) {
              uVar40 = ~uVar39 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar5 = (code *)swi(3);
              uVar15 = (*pcVar5)();
              return (bool)uVar15;
            }
            lVar29 = lVar2 + 0x10;
            if (*(longlong *)(lVar2 + 0xd0) != 0) {
              lVar29 = *(longlong *)(lVar2 + 0xd0);
            }
            uStack_1248 = *(undefined4 *)(lVar29 + 8 + uVar32);
            local_1250 = *(undefined8 *)(lVar29 + uVar32);
            uStack_123c = *(undefined4 *)(lVar29 + 0x18 + uVar32);
            uStack_1238 = *(undefined8 *)(lVar29 + 0x10 + uVar32);
            uStack_1244 = (undefined4)uStack_1238;
            uStack_1240 = (undefined4)((ulonglong)uStack_1238 >> 0x20);
            local_1230 = uStack_123c;
            if (((local_12d8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1250) &&
                ((FScriptContainerElement *)&local_1250 <
                 local_12d8.AllocatorInstance.Data + (longlong)local_12d8.ArrayMax * 0x24)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar16)) {
              pcVar5 = (code *)swi(3);
              uVar15 = (*pcVar5)();
              return (bool)uVar15;
            }
            if (local_12d8.ArrayNum == local_12d8.ArrayMax) {
              local_12d8.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x424,&local_12d8.AllocatorInstance,&local_12d8.ArrayMax);
            }
            lVar29 = (longlong)local_12d8.ArrayNum;
            uVar41 = (ulonglong)(uVar39 + 1);
            uVar32 = uVar32 + 0x40;
            local_12d8.ArrayNum = local_12d8.ArrayNum + 1;
            *(undefined8 *)(local_12d8.AllocatorInstance.Data + lVar29 * 0x24) = local_1250;
            *(ulonglong *)(local_12d8.AllocatorInstance.Data + lVar29 * 0x24 + 8) =
                 CONCAT44(uStack_1244,uStack_1248);
            *(ulonglong *)(local_12d8.AllocatorInstance.Data + lVar29 * 0x24 + 0x10) =
                 CONCAT44(uStack_123c,uStack_1240);
            *(undefined8 *)(local_12d8.AllocatorInstance.Data + lVar29 * 0x24 + 0x10 + 8) =
                 uStack_1238;
            *(undefined4 *)(local_12d8.AllocatorInstance.Data + lVar29 * 0x24 + 0x20) = local_1230;
          } while ((int)(uVar39 + 1) < *(int *)(lVar20 + 0xd8 + lVar38));
        }
        TStack_11a8.UnvisitedBitMask = TStack_11a8.UnvisitedBitMask & ~TStack_11a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_11a8);
        FVar30 = local_1278;
        iVar31 = TStack_11a8.CurrentBitIndex;
      } while (TStack_11a8.CurrentBitIndex < (TStack_11a8.Array)->NumBits);
    }
    local_12f0 = (int)local_12a0;
    uVar37 = (uint)local_12c0;
    iVar34 = local_12c8;
    iVar31 = local_12b0;
  }
LAB_14489e3d3:
  uVar9 = FClearValueBinding::Black.Value.Color[3];
  uVar8 = FClearValueBinding::Black.Value._4_8_;
  uVar7 = FClearValueBinding::Black._0_8_;
  if (((*(IPooledRenderTarget **)local_12a8 == (IPooledRenderTarget *)0x0) || (local_12f0 != iVar31)
      ) || ((iVar17 != iVar34 || ((uVar37 != uVar36 || (local_12d8.ArrayNum != 0)))))) {
    if ((0xffff < (int)uVar36) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Size.Z <= TNumericLimits<decltype(FRDGTextureDesc::Depth)>::Max()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphDefinitions.h"
                            ,0x29e,L"Depth parameter (Size.Z) exceeds valid range"), bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar15 = (*pcVar5)();
      return (bool)uVar15;
    }
    this_01 = local_1290;
    local_108c = (undefined2)uVar36;
    uVar36 = 0;
    local_109c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_106c = 1;
    local_1094._4_4_ = iVar34;
    local_1094._0_4_ = iVar31;
    local_10b8._0_8_ = 0x20808;
    local_10b8._8_8_ = uVar7;
    local_10b8._16_8_ = uVar8;
    local_10a0 = (float)uVar9;
    local_1098 = 0;
    local_108a = 0x1010001;
    local_1086 = 0xff001202;
    local_1078 = (void *)0x0;
    local_1070 = 0;
    local_1260 = iVar31;
    iStack_125c = iVar34;
    pFVar21 = FRDGBuilder::CreateTexture
                        (local_1290,(FRDGTextureDesc *)local_10b8,
                         L"DistanceFields.DistanceFieldIndirectionAtlas",None);
    local_12a0 = pFVar21;
    if ((pFVar21 == (FRDGTexture *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("NewIndirectAtlasRDG",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                            ,0x459,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar15 = (*pcVar5)();
      return (bool)uVar15;
    }
    FVar42 = local_12a8;
    this_03 = this_01;
    if (*(IPooledRenderTarget **)local_12a8 != (IPooledRenderTarget *)0x0) {
      pFVar22 = (FShaderType *)FCopyDistanceFieldIndirectionAtlasCS::GetStaticType();
      FGlobalShaderMap::GetShader(local_1288,&local_1158,pFVar22,0);
      if (local_1158.ShaderContent == (FShader *)0x0) {
        this_02 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_11b8);
        ::FName::ToString((FName *)this_02,&local_1140);
        FCopyDistanceFieldIndirectionAtlasCS::GetStaticType();
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_1140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1140.Data.AllocatorInstance.Data);
        }
        if (bVar16) {
          pcVar5 = (code *)swi(3);
          uVar15 = (*pcVar5)();
          return (bool)uVar15;
        }
      }
      FCopyDistanceFieldIndirectionAtlasCS::GetStaticType();
      local_1128.ShaderContent = (FCopyDistanceFieldIndirectionAtlasCS *)local_1158.ShaderContent;
      local_1128.ShaderMap = local_1158.ShaderMap;
      pFVar23 = FRDGBuilder::RegisterExternalTexture
                          (this_01,(TRefCountPtr<IPooledRenderTarget> *)FVar42,None);
      local_11d8._padding_._0_1_ = (pFVar21->Desc).field_0x34;
      local_11d8._padding_._1_1_ = 0;
      local_11d8._padding_._2_4_ = 0;
      local_11d8._padding_._6_1_ = 0;
      local_11d8._padding_._0_1_ = 0;
      local_11d8.Texture = pFVar21;
      local_1288 = (FGlobalShaderMap *)FRDGBuilder::CreateUAV(this_01,&local_11d8,SkipBarrier);
      if (0 < local_12d8.ArrayNum) {
        local_12c0 = (FMemStackBase *)&this_01->_padding_;
        lVar20 = 0;
        plVar1 = &this_01->_padding_;
        do {
          this_00 = local_12c0;
          puVar33 = (undefined8 *)0x0;
          uVar40 = 0;
          if ((int)uVar36 < local_12d8.ArrayNum) {
            uVar40 = ~uVar36 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            uVar15 = (*pcVar5)();
            return (bool)uVar15;
          }
          FVar11.Data = local_12d8.AllocatorInstance.Data;
          puVar24 = FMemStackBase::Alloc(this_00,0x50,0x10);
          if (puVar24 == (undefined8 *)0x0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                                ,0x61,L"");
            if (bVar16) {
              pcVar5 = (code *)swi(3);
              uVar15 = (*pcVar5)();
              return (bool)uVar15;
            }
          }
          else {
            puVar24[2] = 0;
            *puVar24 = &
                       ___7__TObject_VFParameters_FCopyDistanceFieldIndirectionAtlasCS___FRDGAllocator__6B_
            ;
            puVar24[3] = 0;
            puVar33 = puVar24;
          }
          local_1298 = puVar33;
          if ((((undefined8 **)*plVar1 <= &local_1298) &&
              (&local_1298 < (undefined8 **)*plVar1 + *(int *)((longlong)&this_01->_padding_ + 4)))
             && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar16)) {
            pcVar5 = (code *)swi(3);
            uVar15 = (*pcVar5)();
            return (bool)uVar15;
          }
          iVar17 = (int)this_01->_padding_;
          if (iVar17 == *(int *)((longlong)&this_01->_padding_ + 4)) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)plVar1,
                                (int *)((longlong)&this_01->_padding_ + 4));
          }
          local_12c4 = local_12c4 | 1;
          *(int *)&this_01->_padding_ = iVar17 + 1;
          *(undefined8 **)(*plVar1 + (longlong)iVar17 * 8) = local_1298;
          ((FParameters *)(puVar33 + 2))->RWIndirectionAtlas = (FRDGTextureUAV *)local_1288;
          puVar33[3] = pFVar23;
          puVar33[4] = *(undefined8 *)(FVar11.Data + lVar20);
          *(undefined4 *)(puVar33 + 5) = *(undefined4 *)(FVar11.Data + lVar20 + 8);
          puVar33[6] = *(undefined8 *)(FVar11.Data + lVar20 + 0xc);
          *(undefined4 *)(puVar33 + 7) = *(undefined4 *)(FVar11.Data + lVar20 + 0x14);
          puVar33[8] = *(undefined8 *)(FVar11.Data + lVar20 + 0x18);
          *(undefined4 *)(puVar33 + 9) = *(undefined4 *)(FVar11.Data + lVar20 + 0x20);
          *(undefined4 *)((longlong)puVar33 + 0x4c) = 1;
          iVar17 = *(int *)(FVar11.Data + lVar20 + 8) * *(int *)(FVar11.Data + lVar20 + 4) *
                   *(int *)(FVar11.Data + lVar20) + 0x3f;
          pFVar25 = FRDGEventName::FRDGEventName
                              (local_10f0,L"CopyDistanceFieldIndirectionAtlas (Index %d)");
          pFVar26 = FCopyDistanceFieldIndirectionAtlasCS::FParameters::FTypeInfo::GetStructMetadata
                              ();
          local_11f8._s_0.Y = 1;
          local_11f8._s_0.Z = 1;
          local_11f8._s_0.X = (int)((iVar17 >> 0x1f & 0x3fU) + iVar17) >> 6;
          FComputeShaderUtils::AddPass<FCopyDistanceFieldIndirectionAtlasCS>
                    (local_1290,pFVar25,Compute,&local_1128,pFVar26,(FParameters *)(puVar33 + 2),
                     (TIntVector3<int> *)&local_11f8._s_0);
          uVar40 = local_12c4;
          if (((local_12c4 & 2) != 0) &&
             (uVar40 = local_12c4 & 0xfffffffd, local_11b8 != (void *)0x0)) {
            FMemory::Free(local_11b8);
          }
          local_12c4 = uVar40 & 0xfffffffe;
          if (local_10f0[0].FormattedEventName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_10f0[0].FormattedEventName.Data.AllocatorInstance.Data);
          }
          uVar36 = uVar36 + 1;
          lVar20 = lVar20 + 0x24;
          FVar30 = local_1278;
          this_03 = local_1290;
          pFVar21 = local_12a0;
          FVar42 = local_12a8;
        } while ((int)uVar36 < local_12d8.ArrayNum);
      }
    }
    pTVar27 = FRDGBuilder::ConvertToExternalTexture(this_03,pFVar21);
    pIVar3 = ((TRefCountPtr<IPooledRenderTarget> *)FVar42)->Reference;
    pIVar4 = pTVar27->Reference;
    if (pIVar3 != pIVar4) {
      ((TRefCountPtr<IPooledRenderTarget> *)FVar42)->Reference = pIVar4;
      if (pIVar4 != (IPooledRenderTarget *)0x0) {
        (**(code **)(pIVar4->_padding_ + 0x30))();
      }
      if (pIVar3 != (IPooledRenderTarget *)0x0) {
        (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3);
      }
    }
    *local_1258 = pFVar21;
    if (4 < (byte)LogDistanceField._0_1_) {
      local_122c._s_0.X = (local_1270->IndirectionAtlasLayout).SizeX;
      local_122c._s_0.Y = (local_1270->IndirectionAtlasLayout).SizeY;
      local_122c._s_0.Z = (local_1270->IndirectionAtlasLayout).SizeZ;
      UE::Math::TIntVector3<int>::ToString((TIntVector3<int> *)&local_122c._s_0,&local_1108);
      lVar20 = (**(code **)(((TRefCountPtr<IPooledRenderTarget> *)FVar42)->Reference->_padding_ +
                           0x10))();
      local_11e8._s_0.X = *(int *)(lVar20 + 0x2c);
      local_11e8._s_0.Y = *(int *)(lVar20 + 0x30);
      local_11e8._s_0.Z = (int)*(ushort *)(lVar20 + 0x34);
      UE::Math::TIntVector3<int>::ToString((TIntVector3<int> *)&local_11e8._s_0,&local_1118);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogDistanceField);
      if (local_1118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1118.Data.AllocatorInstance.Data);
      }
      if (local_1108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1108.Data.AllocatorInstance.Data);
      }
    }
    if (local_1078 != (void *)0x0) {
      FMemory::Free(local_1078);
    }
    bVar16 = true;
  }
  else {
    pFVar21 = FRDGBuilder::RegisterExternalTexture
                        (local_1290,(TRefCountPtr<IPooledRenderTarget> *)local_12a8,None);
    bVar16 = false;
    *local_1258 = pFVar21;
  }
  if (local_12d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_12d8.AllocatorInstance.Data);
  }
  if (bVar43) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar30,CycleScopeEnd);
  }
  return bVar16;
}

// UpdateDistanceFieldAtlas @ 1448ac3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001448aceb0) */
/* WARNING: Removing unreachable block (ram,0x0001448ad7d3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FDistanceFieldSceneData::UpdateDistanceFieldAtlas
          (FDistanceFieldSceneData *this,FRDGBuilder *param_1,FRDGExternalAccessQueue *param_2,
          FSceneRenderUpdateInputs *param_3,
          TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FSetElementId,TSizedDefaultAllocator<32>_> *param_5)

{
  uint *puVar1;
  uchar *puVar2;
  TArray<FDistanceFieldReadRequest,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong *plVar4;
  int *piVar5;
  undefined8 uVar6;
  char cVar7;
  ushort uVar8;
  ForElementType<unsigned_int> FVar9;
  TSparseArrayBase<232,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar10;
  FScriptContainerElement *pFVar11;
  ForElementType<FDistanceFieldAssetMipState> *pFVar12;
  FRDGPooledBuffer *pFVar13;
  IPooledRenderTarget *pIVar14;
  FRHICommandListBase *pFVar15;
  FGlobalShaderMap *pFVar16;
  FResource *pFVar17;
  code *pcVar18;
  bool bVar19;
  bool bVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  atomic<UE::Tasks::Private::FTaskBase_*> aVar25;
  FSceneRenderUpdateInputs *pFVar26;
  FRDGExternalAccessQueue *pFVar27;
  FRDGTexture *pFVar28;
  FTaskHandle *pFVar29;
  undefined4 uVar30;
  bool bVar31;
  bool bVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  int iVar37;
  FName *pFVar38;
  TStatId TVar39;
  FRDGScope *this_00;
  ForElementType<FDistanceFieldAssetMipState> *pFVar40;
  longlong lVar41;
  undefined8 *puVar42;
  FRDGScatterUploader *pFVar43;
  FThreadSafeStaticStat<_public:_void___cdecl_FDistanceFieldSceneData::UpdateDistanceFieldAtlas(FRDGBuilder_&,FRDGExternalAccessQueue_&,FSceneRenderUpdateInputs_const_&,TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_>_&,TArray<FSetElementId,TSizedDefaultAllocator<32>_>_&)_::_109_::FStat_STAT_WaitOnDistanceFieldStreamingUpdate>
  FVar44;
  FShaderType *pFVar45;
  FName FVar46;
  undefined8 *puVar47;
  FRDGTextureUAV *pFVar48;
  FRDGEventName *pFVar49;
  FShaderParametersMetadata *pFVar50;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FGlobalShaderType *pFVar51;
  undefined4 uVar52;
  TSparseArrayBase<232,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar53;
  longlong lVar54;
  FNameEntryId FVar55;
  ulonglong uVar56;
  uint uVar57;
  FName FVar58;
  ForElementType<FDistanceFieldAssetMipState> *pFVar59;
  ulonglong uVar60;
  longlong lVar61;
  uint *puVar62;
  ForElementType<unsigned_int> FVar63;
  uint uVar64;
  longlong lVar65;
  FScriptContainerElement *pFVar66;
  atomic<unsigned___int64> aVar67;
  longlong *plVar68;
  FRDGBuffer *pFVar69;
  bool bVar70;
  bool bVar71;
  float fVar72;
  undefined1 auStackY_408 [32];
  wchar_t *pwVar73;
  uint local_3a4;
  bool local_3a0;
  int local_390;
  undefined1 local_38c;
  undefined1 local_38b;
  undefined1 local_38a [2];
  atomic<UE::Tasks::Private::FTaskBase_*> local_388;
  uint local_380;
  TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_> local_378;
  FRDGBuffer *local_368;
  TArray<FDistanceFieldReadRequest,TSizedDefaultAllocator<32>_> local_360;
  atomic<unsigned___int64> local_350;
  TArray<FDistanceFieldReadRequest,TSizedDefaultAllocator<32>_> local_348;
  TArray<FDistanceFieldReadRequest,TSizedDefaultAllocator<32>_> local_338;
  uint local_328;
  undefined4 uStack_324;
  FName local_320;
  FName local_318;
  undefined8 *local_308;
  undefined8 *local_300;
  undefined8 *local_2f8;
  FSceneRenderUpdateInputs *local_2f0;
  FRDGExternalAccessQueue *local_2e8;
  FRDGTexture *local_2e0;
  FColor_u_0 local_2d8 [2];
  FRDGTexture *local_2d0;
  FName local_2c8;
  byte local_2c0;
  FTaskHandle *local_2b8;
  undefined8 local_2b0;
  FName local_2a8;
  FRDGTextureUAVDesc local_2a0;
  FRDGTextureUAVDesc local_288;
  FName local_270;
  undefined8 local_260;
  int local_258;
  TIntVector3<int>_u_0 local_248;
  TIntVector3<int>_u_0 local_238;
  undefined4 local_228;
  undefined4 local_224;
  LARGE_INTEGER local_220;
  <lambda_2> local_218;
  undefined4 local_208;
  undefined4 local_204;
  FStatMessage local_200;
  void *local_1f0;
  TRDGEventScopeGuard<FRDGScope_RHI> local_1e8;
  char local_1d8;
  FSourceLocation local_1c8;
  undefined1 local_1a8 [40];
  FShaderMapBase *pFStack_180;
  FName local_170;
  FName local_168;
  FName local_160;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<25>_const_*,std::tuple<>_> local_158;
  FString local_148;
  TShaderRefBase<FScatterUploadDistanceFieldIndirectionAtlasCS,FShaderMapPointerTable> local_138;
  FString local_128;
  TShaderRefBase<FScatterUploadDistanceFieldAtlasCS,FShaderMapPointerTable> local_118;
  undefined1 local_108 [20];
  uint uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  FRDGEventName local_e0;
  FRDGEventName local_c8;
  undefined1 local_a8 [48];
  longlong local_78;
  uchar local_70 [8];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_408;
  local_350 = (atomic<unsigned___int64>)param_4;
  lVar41 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_380 = 0;
  local_388 = (atomic<UE::Tasks::Private::FTaskBase_*>)this;
  local_2f0 = param_3;
  local_2e8 = param_2;
  if ((*(int *)(lVar41 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_UpdateDistanceFieldAtlas =
         (FThreadSafeStaticStat<_public:_void___cdecl_FDistanceFieldSceneData::UpdateDistanceFieldAtlas(FRDGBuilder_&,FRDGExternalAccessQueue_&,FSceneRenderUpdateInputs_const_&,TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_>_&,TArray<FSetElementId,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_STAT_UpdateDistanceFieldAtlas>
          )0x0;
    pFVar38 = ::FName::FName(&local_170,"STAT_UpdateDistanceFieldAtlas");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateDistanceFieldAtlas,*pFVar38,
               L"STAT_UpdateDistanceFieldAtlas","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  TVar39 = FThreadSafeStaticStatInner<`FDistanceFieldSceneData::UpdateDistanceFieldAtlas'::__l2::FStat_STAT_UpdateDistanceFieldAtlas,1>
           ::GetStatId(&StatPtr_STAT_UpdateDistanceFieldAtlas);
  local_1c8.Impl._Line = 0x592;
  local_1c8.Impl._Function =
       "void __cdecl FDistanceFieldSceneData::UpdateDistanceFieldAtlas(class FRDGBuilder &,class FRDGExternalAccessQueue &,const struct FSceneRenderUpdateInputs &,class TArray<class FDistanceFieldAssetMipId,class TSizedDefaultAllocator<32> > &,class TArray<class FSetElementId,class TSizedDefaultAllocator<32> > &)"
  ;
  local_1c8.Impl._Column = 2;
  local_1c8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_2c8,*(TStatIdData **)&(TVar39.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_1c8);
  bVar70 = -1 < CpuChannel->Enabled;
  if (bVar70) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1427,"FDistanceFieldSceneData::UpdateDistanceFieldAtlas",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
               ,0x593);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1427);
  }
  cVar7 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_1d8 = '\0';
  if ((cVar7 != '\0') && ((cVar7 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(lVar41 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_f0 = 0;
      uStack_ec = 0;
      ::Desc._12_8_ = ZEXT48(uStack_f4);
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_UpdateDistanceF;
      ::Desc._padding_ = (longlong)u_UpdateDistanceF;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 0x594;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FDistanceFieldSceneData::UpdateDistanceFieldAtlas'::__l7::Desc::operator()<>'::__l3
             ::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_158._Myfirst._Val = &::Desc;
    local_1e8.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    local_1e8.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<25>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_158);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_1d8 = '\x01';
  }
  if ((*(int *)(param_1->_padding_ + 0x29c) !=
       (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("GraphBuilder.RHICmdList.GetGPUMask() == FRHIGPUMask::All()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                          ,0x597,L""), bVar31)) {
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  local_368 = (FRDGBuffer *)&this->AssetStateArray;
  local_378.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.ArrayNum = 0;
  local_378.ArrayMax = 0;
  uVar64 = param_5->ArrayNum;
  uVar56 = (ulonglong)(int)uVar64;
  FVar58 = (FName)(param_5->AllocatorInstance).Data;
  local_318 = (FName)((longlong)FVar58 + uVar56 * 4);
  local_2e0 = (FRDGTexture *)local_368;
  do {
    pFVar28 = local_2e0;
    FVar46 = local_318;
    local_320 = FVar58;
    if (param_5->ArrayNum != (int)uVar56) {
      local_38c = 0;
      `TCheckedPointerIterator<FSetElementId,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_38c);
      local_368 = (FRDGBuffer *)pFVar28;
    }
    aVar25 = local_388;
    if (FVar58 == FVar46) {
      uVar64 = 0;
      local_348.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_348.ArrayNum = 0;
      local_348.ArrayMax = 0;
      ProcessStreamingRequestsFromGPU((FDistanceFieldSceneData *)local_388,&local_348,&local_378);
      aVar67 = local_350;
      local_360.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_360.ArrayNum = 0;
      local_360.ArrayMax = 0;
      local_338.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_338.ArrayNum = 0;
      local_338.ArrayMax = 0;
      ProcessReadRequests((FDistanceFieldSceneData *)aVar25,&local_378,
                          (TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_> *)local_350,
                          &local_360,&local_338);
      pFVar69 = local_368;
      uVar23 = _UNK_15076cb18;
      uVar6 = ___xmm_ffffffff000000000000000000000000;
      iVar33 = *(int *)((longlong)aVar67 + 8);
      local_3a4 = 0;
      local_390 = 0;
      lVar41 = local_78;
      uVar52 = local_70._0_4_;
      uVar30 = local_70._4_4_;
      if (0 < iVar33) {
        do {
          local_70._4_4_ = uVar30;
          local_70._0_4_ = uVar52;
          local_78 = lVar41;
          uVar57 = uVar64;
          if (GDFReverseAtlasAllocationOrder != 0) {
            uVar57 = ~uVar64 + iVar33;
          }
          uVar35 = 0;
          if ((int)uVar57 < iVar33) {
            uVar35 = ~uVar57 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          plVar68 = (longlong *)
                    ((longlong)
                     *(int *)((((TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_> *)
                               aVar67)->AllocatorInstance).Data + (longlong)(int)uVar57 * 8) * 0xe8
                    + *(longlong *)&pFVar69->_padding_);
          uVar35 = 0;
          if ((int)uVar57 < *(int *)((longlong)local_350 + 8)) {
            uVar35 = ~uVar57 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          pFVar59 = (ForElementType<FDistanceFieldAssetMipState> *)(plVar68 + 2);
          iVar33 = *(int *)(((ForAnyElementType *)local_350)->Data + (longlong)(int)uVar57 * 8 + 4);
          if ((iVar33 != (int)plVar68[0x1b]) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ReversedMipIndex == AssetState.ReversedMips.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                                  ,0x5cf,L""), bVar31)) {
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          uVar24 = _UNK_15076cb18;
          uVar22 = ___xmm_ffffffff000000000000000000000000;
          lVar65 = *plVar68;
          __xmm_ffffffff000000000000000000000000 = (uchar)uVar6;
          UNK_15076cb11 = SUB81(uVar6,1);
          UNK_15076cb12 = SUB81(uVar6,2);
          UNK_15076cb13 = SUB81(uVar6,3);
          UNK_15076cb14 = SUB81(uVar6,4);
          UNK_15076cb15 = SUB81(uVar6,5);
          UNK_15076cb16 = SUB81(uVar6,6);
          UNK_15076cb17 = SUB81(uVar6,7);
          local_a8[0] = __xmm_ffffffff000000000000000000000000;
          local_a8[1] = UNK_15076cb11;
          local_a8[2] = UNK_15076cb12;
          local_a8[3] = UNK_15076cb13;
          local_a8[4] = UNK_15076cb14;
          local_a8[5] = UNK_15076cb15;
          local_a8[6] = UNK_15076cb16;
          local_a8[7] = UNK_15076cb17;
          UNK_15076cb18 = (uchar)uVar23;
          UNK_15076cb19 = SUB81(uVar23,1);
          UNK_15076cb1a = SUB81(uVar23,2);
          UNK_15076cb1b = SUB81(uVar23,3);
          UNK_15076cb1c = SUB81(uVar23,4);
          UNK_15076cb1d = SUB81(uVar23,5);
          UNK_15076cb1e = SUB81(uVar23,6);
          UNK_15076cb1f = SUB81(uVar23,7);
          local_a8[8] = UNK_15076cb18;
          local_a8[9] = UNK_15076cb19;
          local_a8[10] = UNK_15076cb1a;
          local_a8[0xb] = UNK_15076cb1b;
          local_a8[0xc] = UNK_15076cb1c;
          local_a8[0xd] = UNK_15076cb1d;
          local_a8[0xe] = UNK_15076cb1e;
          local_a8[0xf] = UNK_15076cb1f;
          local_70[4] = '\x04';
          local_70[5] = '\0';
          local_70[6] = '\0';
          local_70[7] = '\0';
          lVar61 = (ulonglong)(2 - iVar33) * 0x38;
          local_78 = 0;
          local_70[0] = '\0';
          local_70[1] = '\0';
          local_70[2] = '\0';
          local_70[3] = '\0';
          local_a8._28_4_ = *(undefined4 *)(lVar61 + 0x34 + lVar65);
          ___xmm_ffffffff000000000000000000000000 = uVar22;
          _UNK_15076cb18 = uVar24;
          FDistanceFieldBlockAllocator::Allocate
                    ((FDistanceFieldBlockAllocator *)((longlong)aVar25 + 0x3f8),
                     (*(int *)(lVar61 + 0x34 + lVar65) + -1 +
                     GDistanceFieldBlockAllocatorSizeInBricks) /
                     GDistanceFieldBlockAllocatorSizeInBricks,
                     (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                     (local_a8 + 0x20));
          local_a8._0_8_ = *(undefined8 *)(lVar61 + 0x28 + lVar65);
          uVar57 = *(uint *)(lVar61 + 0x30 + lVar65);
          local_a8._8_4_ = uVar57;
          iVar33 = uVar57 * SUB84(local_a8._0_8_,4) * (uint)local_a8._0_8_;
          if ((uint)GDistanceFieldOffsetDataStructure < 2) {
            iVar34 = FGrowOnlySpanAllocator::Allocate
                               ((FGrowOnlySpanAllocator *)((longlong)aVar25 + 0x208),iVar33);
            local_a8._12_4_ = iVar34;
          }
          else {
            FTextureLayout3d::AddElement
                      ((FTextureLayout3d *)((longlong)aVar25 + 0x298),(uint *)(local_a8 + 0x10),
                       (uint *)(local_a8 + 0x14),(uint *)(local_a8 + 0x18),(uint)local_a8._0_8_,
                       SUB84(local_a8._0_8_,4),uVar57);
          }
          pFVar12 = (ForElementType<FDistanceFieldAssetMipState> *)plVar68[0x1a];
          pFVar40 = pFVar59;
          if (pFVar12 != (ForElementType<FDistanceFieldAssetMipState> *)0x0) {
            pFVar40 = pFVar12;
          }
          if (pFVar40 <= (ForElementType<FDistanceFieldAssetMipState> *)local_a8) {
            pFVar40 = pFVar59;
            if (pFVar12 != (ForElementType<FDistanceFieldAssetMipState> *)0x0) {
              pFVar40 = pFVar12;
            }
            if ((local_a8 <
                 pFVar40->InlineData + (longlong)*(int *)((longlong)plVar68 + 0xdc) * 0x40) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar31)) {
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
          }
          iVar34 = (int)plVar68[0x1b];
          if (iVar34 == *(int *)((longlong)plVar68 + 0xdc)) {
            iVar34 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FDistanceFieldAssetMipState>_>
                               (0x840,pFVar59,(int *)((longlong)plVar68 + 0xdc));
          }
          *(int *)(plVar68 + 0x1b) = iVar34 + 1;
          if ((ForElementType<FDistanceFieldAssetMipState> *)plVar68[0x1a] !=
              (ForElementType<FDistanceFieldAssetMipState> *)0x0) {
            pFVar59 = (ForElementType<FDistanceFieldAssetMipState> *)plVar68[0x1a];
          }
          lVar54 = (longlong)iVar34 * 0x40;
          *(undefined8 *)(pFVar59->InlineData + lVar54) = local_a8._0_8_;
          *(undefined4 *)(pFVar59->InlineData + lVar54 + 8) = local_a8._8_4_;
          *(undefined4 *)(pFVar59->InlineData + lVar54 + 0xc) = local_a8._12_4_;
          *(undefined8 *)(pFVar59->InlineData + lVar54 + 0x10) = local_a8._16_8_;
          *(undefined4 *)(pFVar59->InlineData + lVar54 + 0x18) = local_a8._24_4_;
          *(undefined4 *)(pFVar59->InlineData + lVar54 + 0x1c) = local_a8._28_4_;
          puVar2 = pFVar59->InlineData + lVar54 + 0x30;
          puVar2[0] = '\0';
          puVar2[1] = '\0';
          puVar2[2] = '\0';
          puVar2[3] = '\0';
          puVar2[4] = '\0';
          puVar2[5] = '\0';
          puVar2[6] = '\0';
          puVar2[7] = '\0';
          if (local_78 == 0) {
            memmove(pFVar59->InlineData + lVar54 + 0x20,local_a8 + 0x20,0x10);
          }
          if (*(void **)(pFVar59->InlineData + lVar54 + 0x30) != (void *)0x0) {
            FMemory::Free(*(void **)(pFVar59->InlineData + lVar54 + 0x30));
          }
          local_3a4 = local_3a4 + iVar33;
          *(longlong *)(pFVar59->InlineData + lVar54 + 0x30) = local_78;
          local_78._0_1_ = '\0';
          local_78._1_1_ = '\0';
          local_78._2_1_ = '\0';
          local_78._3_1_ = '\0';
          local_78._4_1_ = '\0';
          local_78._5_1_ = '\0';
          local_78._6_1_ = '\0';
          local_78._7_1_ = '\0';
          lVar41 = local_78;
          *(undefined4 *)(pFVar59->InlineData + lVar54 + 0x38) = local_70._0_4_;
          *(undefined4 *)(pFVar59->InlineData + lVar54 + 0x3c) = local_70._4_4_;
          local_70[0] = '\0';
          local_70[1] = '\0';
          local_70[2] = '\0';
          local_70[3] = '\0';
          uVar52 = local_70._0_4_;
          local_70[4] = '\x04';
          local_70[5] = '\0';
          local_70[6] = '\0';
          local_70[7] = '\0';
          uVar30 = local_70._4_4_;
          local_390 = local_390 + *(int *)(lVar61 + 0x34 + lVar65);
          local_70[4] = '\x04';
          local_70[5] = '\0';
          local_70[6] = '\0';
          local_70[7] = '\0';
          local_70[0] = '\0';
          local_70[1] = '\0';
          local_70[2] = '\0';
          local_70[3] = '\0';
          local_78._0_1_ = '\0';
          local_78._1_1_ = '\0';
          local_78._2_1_ = '\0';
          local_78._3_1_ = '\0';
          local_78._4_1_ = '\0';
          local_78._5_1_ = '\0';
          local_78._6_1_ = '\0';
          local_78._7_1_ = '\0';
          uVar64 = uVar64 + 1;
          iVar33 = *(int *)((longlong)local_350 + 8);
          aVar67 = local_350;
        } while ((int)uVar64 < iVar33);
      }
      pFVar26 = local_2f0;
      local_2e0 = ResizeBrickAtlasIfNeeded
                            ((FDistanceFieldSceneData *)aVar25,param_1,local_2f0->GlobalShaderMap);
      local_3a0 = false;
      iVar33 = 1;
      if (*(int *)((longlong)aVar25 + 0x160) != 0) {
        iVar33 = *(int *)((longlong)aVar25 + 0x160);
      }
      uVar56 = (ulonglong)(iVar33 - 1) * 2 + 1;
      lVar41 = 0x3f;
      if (uVar56 != 0) {
        for (; uVar56 >> lVar41 == 0; lVar41 = lVar41 + -1) {
        }
      }
      local_228 = (undefined4)lVar41;
      local_368 = ResizeStructuredBufferIfNeeded
                            (param_1,(TRefCountPtr<FRDGPooledBuffer> *)((longlong)aVar25 + 0x1a8),
                             0x90 << ((byte)lVar41 & 0x1f),L"DistanceFields.AssetData");
      puVar47 = (undefined8 *)0x0;
      uVar64 = 0;
      pFVar69 = (FRDGBuffer *)0x0;
      local_2d0 = (FRDGTexture *)0x0;
      if (GDistanceFieldOffsetDataStructure == 0) {
        iVar33 = ((FGrowOnlySpanAllocator *)((longlong)aVar25 + 0x208))->MaxSize;
        iVar34 = 1;
        if (iVar33 != 0) {
          iVar34 = iVar33;
        }
        uVar56 = (ulonglong)(iVar34 - 1) * 2 + 1;
        lVar41 = 0x3f;
        if (uVar56 != 0) {
          for (; uVar56 >> lVar41 == 0; lVar41 = lVar41 + -1) {
          }
        }
        uVar35 = 4 << ((byte)lVar41 & 0x1f);
        local_224 = (undefined4)lVar41;
        uVar57 = 0x10;
        if (0x10 < uVar35) {
          uVar57 = uVar35;
        }
        pFVar69 = ResizeByteAddressBufferIfNeeded
                            (param_1,(TRefCountPtr<FRDGPooledBuffer> *)((longlong)aVar25 + 0x278),
                             uVar57,L"DistanceFields.IndirectionTable.Uint");
      }
      else if (GDistanceFieldOffsetDataStructure == 1) {
        iVar33 = ((FGrowOnlySpanAllocator *)((longlong)aVar25 + 0x208))->MaxSize;
        iVar34 = 1;
        if (iVar33 != 0) {
          iVar34 = iVar33;
        }
        uVar56 = (ulonglong)(iVar34 - 1) * 2 + 1;
        lVar41 = 0x3f;
        if (uVar56 != 0) {
          for (; uVar56 >> lVar41 == 0; lVar41 = lVar41 + -1) {
          }
        }
        uVar35 = 1 << ((byte)lVar41 & 0x1f);
        local_204 = (undefined4)lVar41;
        uVar57 = 0x10;
        if (0x10 < uVar35) {
          uVar57 = uVar35;
        }
        pFVar69 = ResizeBufferIfNeeded
                            (param_1,(TRefCountPtr<FRDGPooledBuffer> *)((longlong)aVar25 + 0x278),
                             PF_A2B10G10R10,uVar57,L"DistanceFields.IndirectionTable.Float");
      }
      else {
        local_3a0 = ResizeIndirectionAtlasIfNeeded
                              ((FDistanceFieldSceneData *)aVar25,param_1,pFVar26->GlobalShaderMap,
                               &local_2d0);
      }
      local_258 = *(int *)((longlong)aVar25 + 0x430);
      uVar6 = *(undefined8 *)&((TIntVector3<int> *)((longlong)aVar25 + 0x428))->field0_0x0;
      pFVar13 = ((TRefCountPtr<FRDGPooledBuffer> *)((longlong)aVar25 + 0x278))->Reference;
      local_260._4_4_ = (int)((ulonglong)uVar6 >> 0x20);
      local_260._0_4_ = (int)uVar6;
      uVar56 = (ulonglong)
               (local_258 * GPixelFormats[3].BlockBytes * local_260._4_4_ * (int)local_260 * 0x200);
      if (pFVar13 != (FRDGPooledBuffer *)0x0) {
        uVar64 = (pFVar13->Desc).NumElements * (pFVar13->Desc).BytesPerElement;
      }
      pIVar14 = ((TRefCountPtr<IPooledRenderTarget> *)((longlong)aVar25 + 0x290))->Reference;
      local_260 = uVar6;
      if (pIVar14 == (IPooledRenderTarget *)0x0) {
        local_318.ComparisonIndex.Value = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_4_;
        local_318.Number = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._4_4_;
        FVar58 = local_318;
        local_318.ComparisonIndex.Value =
             (uint)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
        FVar55.Value = local_318.ComparisonIndex.Value;
        uVar52 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
        local_318 = FVar58;
      }
      else {
        lVar41 = (**(code **)(pIVar14->_padding_ + 0x10))();
        FVar55.Value = *(int *)(lVar41 + 0x2c);
        uVar52 = (uint)*(ushort *)(lVar41 + 0x34);
        local_318 = (FName)*(undefined8 *)(lVar41 + 0x2c);
      }
      uVar57 = local_318.Number * FVar55.Value * uVar52 * GPixelFormats[0x12].BlockBytes;
      uVar60 = (ulonglong)(int)uVar57;
      if (__CsvProfilerStat1553 == false) {
        FCsvProfilerTrace::OutputInlineStat("AtlasMB",_GCsvCategory_DistanceField.Index);
        __CsvProfilerStat1553 = true;
      }
      fVar21 = __real_35800000;
      if ((longlong)uVar56 < 0) {
        fVar72 = (float)(uVar56 >> 1) + (float)(uVar56 >> 1);
      }
      else {
        fVar72 = (float)(longlong)uVar56;
      }
      FCsvProfiler::RecordCustomStat
                ("AtlasMB",_GCsvCategory_DistanceField.Index,fVar72 * __real_35800000,Set);
      if (__CsvProfilerStat1554 == false) {
        FCsvProfilerTrace::OutputInlineStat("IndirectionTableMB",_GCsvCategory_DistanceField.Index);
        __CsvProfilerStat1554 = true;
      }
      FCsvProfiler::RecordCustomStat
                ("IndirectionTableMB",_GCsvCategory_DistanceField.Index,(float)uVar64 * fVar21,Set);
      if (__CsvProfilerStat1555 == false) {
        FCsvProfilerTrace::OutputInlineStat("IndirectionAtlasMB",_GCsvCategory_DistanceField.Index);
        __CsvProfilerStat1555 = true;
      }
      if ((longlong)uVar60 < 0) {
        fVar72 = (float)(uVar60 >> 1 | (ulonglong)(uVar57 & 1));
        fVar72 = fVar72 + fVar72;
      }
      else {
        fVar72 = (float)(longlong)uVar60;
      }
      FCsvProfiler::RecordCustomStat
                ("IndirectionAtlasMB",_GCsvCategory_DistanceField.Index,fVar72 * fVar21,Set);
      puVar42 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x98,0x10);
      if (puVar42 == (undefined8 *)0x0) {
        bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("Object",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                            ,0x61,L"");
        if (bVar31) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
      }
      else {
        puVar42[1] = 0;
        *puVar42 = &___7__TObject_UFDistanceFieldAsyncUpdateParameters___FRDGAllocator__6B_;
        puVar42[2] = (FReadBuffer *)((longlong)aVar25 + 0x438);
        puVar42[7] = (FReadBuffer *)((longlong)aVar25 + 0x3c8);
        puVar42[3] = (FReadBuffer *)((longlong)aVar25 + 0x450);
        puVar42[8] = (FReadBuffer *)((longlong)aVar25 + 0x3e0);
        puVar42[4] = 0;
        puVar42[5] = 0;
        puVar42[6] = 0;
        puVar42[9] = 0;
        puVar42[10] = 0;
        puVar42[0xb] = 0;
        puVar42[0xc] = 0;
        puVar42[0xd] = 0;
        puVar42[0xe] = 0;
        puVar42[0xf] = 0;
        puVar42[0x10] = 0;
        puVar42[0x11] = 0;
        puVar42[0x12] = 0;
        puVar47 = puVar42;
      }
      plVar68 = &param_1->_padding_;
      local_308 = puVar47;
      if ((((undefined8 **)param_1->_padding_ <= &local_308) &&
          (&local_308 <
           (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar31)) {
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      iVar33 = (int)param_1->_padding_;
      if (iVar33 == *(int *)((longlong)&param_1->_padding_ + 4)) {
        iVar33 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)plVar68,
                            (int *)((longlong)&param_1->_padding_ + 4));
      }
      aVar67 = (atomic<unsigned___int64>)(puVar47 + 1);
      *(int *)&param_1->_padding_ = iVar33 + 1;
      *(undefined8 **)(*plVar68 + (longlong)iVar33 * 8) = local_308;
      *(atomic<UE::Tasks::Private::FTaskBase_*> *)aVar67 = local_388;
      local_350 = aVar67;
      if (local_360.ArrayNum == 0) {
        if (local_3a4 != 0) {
LAB_1448ad43c:
          bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("ReadRequestsToUpload.Num() == 0 && NumIndirectionTableAdds == 0 || ReadRequestsToUpload.Num() > 0 && NumIndirectionTableAdds > 0"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                              ,0x61d,L"");
          if (bVar31) {
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          if (0 < (int)local_3a4) goto LAB_1448ad46f;
        }
      }
      else {
        if ((local_360.ArrayNum < 1) || ((int)local_3a4 < 1)) goto LAB_1448ad43c;
LAB_1448ad46f:
        if (GDistanceFieldOffsetDataStructure == 0) {
          pwVar73 = L"DistanceFields.IndirectionTableUploadBuffer.Uint";
          uVar64 = 4;
        }
        else {
          if (GDistanceFieldOffsetDataStructure != 1) {
            pFVar15 = (FRHICommandListBase *)param_1->_padding_;
            uVar64 = 1;
            if (local_3a4 != 0) {
              uVar64 = local_3a4;
            }
            uVar56 = (ulonglong)(uVar64 - 1) * 2 + 1;
            lVar41 = 0x3f;
            if (uVar56 != 0) {
              for (; uVar56 >> lVar41 == 0; lVar41 = lVar41 + -1) {
              }
            }
            uVar64 = 1 << ((byte)lVar41 & 0x1f);
            local_208 = (undefined4)lVar41;
            *(uint *)(puVar47 + 0xb) = uVar64 * 4;
            if (((FReadBuffer *)puVar47[7])->NumBytes < uVar64 * 4) {
              FReadBuffer::Initialize
                        ((FReadBuffer *)puVar47[7],pFVar15,
                         L"DistanceFields.IndirectionUploadIndicesBuffer",4,uVar64,PF_R32_UINT,
                         Volatile,(FResourceArrayUploadInterface *)0x0);
            }
            *(uint *)((longlong)puVar47 + 0x5c) = uVar64 << 4;
            if (((FReadBuffer *)puVar47[8])->NumBytes < uVar64 << 4) {
              FReadBuffer::Initialize
                        ((FReadBuffer *)puVar47[8],pFVar15,
                         L"DistanceFields.IndirectionUploadDataBuffer",0x10,uVar64,PF_A32B32G32R32F,
                         Volatile,(FResourceArrayUploadInterface *)0x0);
            }
            goto LAB_1448ad35b;
          }
          pwVar73 = L"DistanceFields.IndirectionFloatUploadBuffer.Float";
          uVar64 = 0x10;
        }
        pFVar43 = FRDGAsyncScatterUploadBuffer::Begin
                            ((FRDGAsyncScatterUploadBuffer *)((longlong)local_388 + 0x280),param_1,
                             (FRDGViewableResource *)pFVar69,local_3a4,uVar64,pwVar73);
        puVar47[0xc] = pFVar43;
      }
LAB_1448ad35b:
      iVar33 = GPixelFormats[0x30].BlockBytes;
      if (0 < local_390) {
        pFVar15 = (FRHICommandListBase *)param_1->_padding_;
        uVar56 = (ulonglong)(local_390 - 1) * 2 + 1;
        lVar41 = 0x3f;
        if (uVar56 != 0) {
          for (; uVar56 >> lVar41 == 0; lVar41 = lVar41 + -1) {
          }
        }
        uVar57 = 1 << ((byte)lVar41 & 0x1f);
        uVar64 = GPixelFormats[0x30].BlockBytes * uVar57;
        local_218.UpdateParameters._4_4_ = (undefined4)lVar41;
        *(uint *)(puVar47 + 6) = uVar64;
        if (((FReadBuffer *)puVar47[2])->NumBytes < uVar64) {
          FReadBuffer::Initialize
                    ((FReadBuffer *)puVar47[2],pFVar15,
                     L"DistanceFields.BrickUploadCoordinatesBuffer",iVar33,uVar57,
                     PF_R32G32B32A32_UINT,Volatile,(FResourceArrayUploadInterface *)0x0);
        }
        iVar33 = GPixelFormats[3].BlockBytes;
        lVar41 = 0x3f;
        if (uVar56 != 0) {
          for (; uVar56 >> lVar41 == 0; lVar41 = lVar41 + -1) {
          }
        }
        uVar35 = 0x200 << ((byte)lVar41 & 0x1f);
        uVar57 = GPixelFormats[3].BlockBytes * uVar35;
        local_218.UpdateParameters._0_4_ = (undefined4)lVar41;
        *(uint *)((longlong)puVar47 + 0x34) = uVar57;
        uVar64 = ((FReadBuffer *)puVar47[3])->NumBytes;
        if ((uVar64 < uVar57) || (uVar57 * 2 < uVar64)) {
          FReadBuffer::Initialize
                    ((FReadBuffer *)puVar47[3],pFVar15,L"DistanceFields.BrickUploadDataBuffer",
                     iVar33,uVar35,PF_G8,Volatile,(FResourceArrayUploadInterface *)0x0);
        }
      }
      if (((local_348.ArrayNum != 0) || (local_360.ArrayNum != 0)) || (local_338.ArrayNum != 0)) {
        pTVar3 = (TArray<FDistanceFieldReadRequest,TSizedDefaultAllocator<32>_> *)(puVar47 + 0xd);
        if (pTVar3 != &local_348) {
          DestructItems<FDistanceFieldReadRequest,int>
                    ((FDistanceFieldReadRequest *)(pTVar3->AllocatorInstance).Data,
                     *(int *)(puVar47 + 0xe));
          pFVar11 = (pTVar3->AllocatorInstance).Data;
          if (pFVar11 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar11);
          }
          (pTVar3->AllocatorInstance).Data = local_348.AllocatorInstance.Data;
          local_348.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(puVar47 + 0xe) = local_348.ArrayNum;
          *(int *)((longlong)puVar47 + 0x74) = local_348.ArrayMax;
          local_348.ArrayNum = 0;
          local_348.ArrayMax = 0;
        }
        pTVar3 = (TArray<FDistanceFieldReadRequest,TSizedDefaultAllocator<32>_> *)(puVar47 + 0xf);
        if (pTVar3 != &local_360) {
          DestructItems<FDistanceFieldReadRequest,int>
                    ((FDistanceFieldReadRequest *)(pTVar3->AllocatorInstance).Data,
                     *(int *)(puVar47 + 0x10));
          pFVar11 = (pTVar3->AllocatorInstance).Data;
          if (pFVar11 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar11);
          }
          (pTVar3->AllocatorInstance).Data = local_360.AllocatorInstance.Data;
          local_360.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(puVar47 + 0x10) = local_360.ArrayNum;
          *(int *)((longlong)puVar47 + 0x84) = local_360.ArrayMax;
          local_360.ArrayNum = 0;
          local_360.ArrayMax = 0;
        }
        pTVar3 = (TArray<FDistanceFieldReadRequest,TSizedDefaultAllocator<32>_> *)(puVar47 + 0x11);
        if (pTVar3 != &local_338) {
          DestructItems<FDistanceFieldReadRequest,int>
                    ((FDistanceFieldReadRequest *)(pTVar3->AllocatorInstance).Data,
                     *(int *)(puVar47 + 0x12));
          pFVar11 = (pTVar3->AllocatorInstance).Data;
          if (pFVar11 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar11);
          }
          (pTVar3->AllocatorInstance).Data = local_338.AllocatorInstance.Data;
          local_338.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(puVar47 + 0x12) = local_338.ArrayNum;
          *(int *)((longlong)puVar47 + 0x94) = local_338.ArrayMax;
          local_338.ArrayNum = 0;
          local_338.ArrayMax = 0;
        }
        local_1a8._0_8_ = local_388;
        local_2b8 = (FTaskHandle *)0x0;
        local_2b0 = 0;
        local_1a8._8_8_ = aVar67;
        FRDGBuilder::
        AddCommandListSetupTask<_FDistanceFieldSceneData::UpdateDistanceFieldAtlas_::__l106::<lambda_2>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
                  (param_1,&local_218,(FPipe *)local_1a8,
                   (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)0x0,
                   (ETaskPriority)&local_2b8,true,Execute);
        pFVar29 = local_2b8;
        DestructItems<UE::Tasks::Private::FTaskHandle,int>(local_2b8,(int)local_2b0);
        if (pFVar29 != (FTaskHandle *)0x0) {
          FMemory::Free(pFVar29);
        }
        if (local_218.__this != (FDistanceFieldSceneData *)0x0) {
          LOCK();
          plVar4 = &((local_218.__this)->UploadHeightFieldDataBuffer)._padding_;
          lVar41 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar41 == 1) {
            (*(code *)**(undefined8 **)local_218.__this)(local_218.__this,1);
          }
        }
      }
      if ((local_390 < 1) && ((int)local_3a4 < 1)) goto LAB_1448adda0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
        StatPtr_STAT_WaitOnDistanceFieldStreamingUpdate =
             (FThreadSafeStaticStat<_public:_void___cdecl_FDistanceFieldSceneData::UpdateDistanceFieldAtlas(FRDGBuilder_&,FRDGExternalAccessQueue_&,FSceneRenderUpdateInputs_const_&,TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_>_&,TArray<FSetElementId,TSizedDefaultAllocator<32>_>_&)_::_109_::FStat_STAT_WaitOnDistanceFieldStreamingUpdate>
              )0x0;
        pFVar38 = ::FName::FName(&local_168,"STAT_WaitOnDistanceFieldStreamingUpdate");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WaitOnDistanceFieldStreamingUpdate,
                   *pFVar38,L"STAT_WaitOnDistanceFieldStreamingUpdate","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS3);
      }
      FVar44 = StatPtr_STAT_WaitOnDistanceFieldStreamingUpdate;
      if (StatPtr_STAT_WaitOnDistanceFieldStreamingUpdate ==
          (FThreadSafeStaticStat<_public:_void___cdecl_FDistanceFieldSceneData::UpdateDistanceFieldAtlas(FRDGBuilder_&,FRDGExternalAccessQueue_&,FSceneRenderUpdateInputs_const_&,TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_>_&,TArray<FSetElementId,TSizedDefaultAllocator<32>_>_&)_::_109_::FStat_STAT_WaitOnDistanceFieldStreamingUpdate>
           )0x0) {
        pFVar38 = ::FName::FName(&local_160,"STAT_WaitOnDistanceFieldStreamingUpdate");
        FVar44 = (FThreadSafeStaticStat<_public:_void___cdecl_FDistanceFieldSceneData::UpdateDistanceFieldAtlas(FRDGBuilder_&,FRDGExternalAccessQueue_&,FSceneRenderUpdateInputs_const_&,TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_>_&,TArray<FSetElementId,TSizedDefaultAllocator<32>_>_&)_::_109_::FStat_STAT_WaitOnDistanceFieldStreamingUpdate>
                  )FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_WaitOnDistanceFieldStreamingUpdate,*pFVar38,
                              L"STAT_WaitOnDistanceFieldStreamingUpdate","STATGROUP_Quick",
                              "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid)
        ;
      }
      FVar58 = *(FName *)FVar44;
      bVar31 = false;
      bVar20 = false;
      local_270.ComparisonIndex.Value = 0;
      local_270.Number = 0;
      if ((FVar58.ComparisonIndex.Value.Value == 0) && (FVar58.Number == 0)) {
LAB_1448ad909:
        bVar19 = false;
        FVar58 = local_270;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_2d8[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_2d8[0]._s_0,(char *)*(FName *)((longlong)FVar44 + 0x10));
          bVar31 = false;
          bVar20 = true;
          if (-1 < CpuChannel->Enabled) {
            local_2a8.ComparisonIndex.Value = FVar58.ComparisonIndex.Value.Value;
            local_2a8.Number = FVar58.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_2a8,(wchar_t *)*(FName *)((longlong)FVar44 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                       ,0x645);
            bVar31 = true;
            bVar20 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_1448ad909;
        local_320 = FVar58;
        FThreadStats::AddMessage(FVar58,CycleScopeStart);
        bVar19 = true;
      }
      bVar71 = -1 < CpuChannel->Enabled;
      if (bVar71) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1606,"WaitOnDistanceFieldStreamingUpdate",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                   ,0x646);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1606);
      }
      if (0 < (int)local_3a4) {
        if ((uint)GDistanceFieldOffsetDataStructure < 2) {
          FRDGAsyncScatterUploadBuffer::End
                    ((FRDGAsyncScatterUploadBuffer *)((longlong)local_388 + 0x280),param_1,
                     (FRDGScatterUploader *)puVar47[0xc]);
          pFVar27 = local_2e8;
          if (pFVar69 != (FRDGBuffer *)0x0) {
            piVar5 = &(local_2e8->Resources).ArrayMax;
            iVar33 = (local_2e8->Resources).ArrayNum;
            if (iVar33 == *piVar5) {
              iVar33 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                                 (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)
                                        local_2e8,piVar5);
            }
            (pFVar27->Resources).ArrayNum = iVar33 + 1;
            pFVar17 = (pFVar27->Resources).AllocatorInstance.Data;
            pFVar17[iVar33].Resource = (FRDGViewableResource *)pFVar69;
            pFVar17[iVar33].Access = SRVMask;
            pFVar17[iVar33].Pipelines = All;
          }
        }
        else {
          pFVar16 = local_2f0->GlobalShaderMap;
          pFVar45 = (FShaderType *)FScatterUploadDistanceFieldIndirectionAtlasCS::GetStaticType();
          FGlobalShaderMap::GetShader
                    (pFVar16,(TShaderRefBase<FShader,FShaderMapPointerTable> *)(local_1a8 + 0x10),
                     pFVar45,0);
          if ((FScatterUploadDistanceFieldIndirectionAtlasCS *)local_1a8._16_8_ ==
              (FScatterUploadDistanceFieldIndirectionAtlasCS *)0x0) {
            FVar46 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_108);
            ::FName::ToString((FName *)FVar46,&local_148);
            FScatterUploadDistanceFieldIndirectionAtlasCS::GetStaticType();
            bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("Shader.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                ,0xc0,L"Failed to find shader type %s in Platform %s");
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
            }
            if (bVar32) {
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
          }
          FScatterUploadDistanceFieldIndirectionAtlasCS::GetStaticType();
          local_138.ShaderContent =
               (FScatterUploadDistanceFieldIndirectionAtlasCS *)local_1a8._16_8_;
          local_138.ShaderMap = (FShaderMapBase *)local_1a8._24_8_;
          puVar47 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x40,0x10);
          if (puVar47 == (undefined8 *)0x0) {
            bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                                ,0x61,L"");
            if (bVar32) {
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
          }
          else {
            *puVar47 = &
                       ___7__TObject_VFParameters_FScatterUploadDistanceFieldIndirectionAtlasCS___FRDGAllocator__6B_
            ;
            puVar47[2] = 0;
            puVar47[3] = 0;
            puVar47[4] = 0;
          }
          local_300 = puVar47;
          if ((((undefined8 **)*plVar68 <= &local_300) &&
              (&local_300 < (undefined8 **)*plVar68 + *(int *)((longlong)&param_1->_padding_ + 4)))
             && (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar32)) {
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          iVar33 = (int)param_1->_padding_;
          if (iVar33 == *(int *)((longlong)&param_1->_padding_ + 4)) {
            iVar33 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)plVar68,
                                (int *)((longlong)&param_1->_padding_ + 4));
          }
          pFVar28 = local_2d0;
          *(int *)&param_1->_padding_ = iVar33 + 1;
          local_2a0._padding_._1_1_ = 0;
          local_2a0.Texture = local_2d0;
          *(undefined8 **)(*plVar68 + (longlong)iVar33 * 8) = local_300;
          local_2a0._padding_._0_1_ = (local_2d0->Desc).field_0x34;
          local_2a0._padding_._2_4_ = 0;
          local_2a0._padding_._6_1_ = 0;
          local_2a0._padding_._0_1_ = 0;
          pFVar48 = FRDGBuilder::CreateUAV(param_1,&local_2a0,None);
          ((FParameters *)(puVar47 + 2))->RWIndirectionAtlas = pFVar48;
          puVar47[3] = *(undefined8 *)
                        ((longlong)
                         *(atomic<UE::Tasks::Private::FTaskBase_*> *)((longlong)local_350 + 0x30) +
                        8);
          puVar47[4] = *(undefined8 *)
                        ((longlong)
                         *(atomic<UE::Tasks::Private::FTaskBase_*> *)((longlong)local_350 + 0x38) +
                        8);
          uVar52 = *(undefined4 *)&(pFVar28->Desc).field_0x28;
          uVar8 = *(ushort *)&(pFVar28->Desc).field_0x2c;
          *(undefined4 *)(puVar47 + 6) = *(undefined4 *)&(pFVar28->Desc).field_0x24;
          *(undefined4 *)((longlong)puVar47 + 0x34) = uVar52;
          *(uint *)(puVar47 + 7) = (uint)uVar8;
          *(uint *)((longlong)puVar47 + 0x3c) = local_3a4;
          pFVar49 = FRDGEventName::FRDGEventName
                              (&local_e0,1,L"ScatterUploadDistanceFieldIndirectionAtlas");
          pFVar50 = FScatterUploadDistanceFieldIndirectionAtlasCS::FParameters::FTypeInfo::
                    GetStructMetadata();
          local_248._s_0.Y = 1;
          local_248._s_0.Z = 1;
          local_248._s_0.X =
               (int)(local_3a4 + 0x3f + ((int)(local_3a4 + 0x3f) >> 0x1f & 0x3fU)) >> 6;
          FComputeShaderUtils::AddPass<FScatterUploadDistanceFieldIndirectionAtlasCS>
                    (param_1,pFVar49,Compute,&local_138,pFVar50,(FParameters *)(puVar47 + 2),
                     (TIntVector3<int> *)&local_248._s_0);
          if (local_e0.FormattedEventName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.FormattedEventName.Data.AllocatorInstance.Data);
          }
          FRDGExternalAccessQueue::Add(local_2e8,(FRDGViewableResource *)local_2d0,SRVMask,Graphics)
          ;
          local_380 = 0;
        }
      }
      if (bVar71) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar20) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar31) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((bVar19) && (FVar58 != (FName)0x0)) &&
         ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))))
      {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
          local_200.NameAndInfo.Index = FVar58.ComparisonIndex.Value;
          local_200.NameAndInfo.Number = FVar58.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_220);
          local_200.StatData.Pad[4] = '\0';
          local_200.StatData.Pad[5] = '\0';
          local_200.StatData.Pad[6] = '\0';
          local_200.StatData.Pad[7] = '\0';
          local_200.StatData.Pad[0] = local_220.s.LowPart._0_1_;
          local_200.StatData.Pad[1] = local_220.s.LowPart._1_1_;
          local_200.StatData.Pad[2] = local_220.s.LowPart._2_1_;
          local_200.StatData.Pad[3] = local_220.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_01,&local_200);
          piVar5 = &this_01->ScopeCount;
          *piVar5 = *piVar5 + -1;
          if (*piVar5 == 0) {
            FThreadStats::Flush(this_01,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_01,false,false);
          }
        }
      }
LAB_1448adda0:
      aVar67 = local_350;
      if (0 < local_390) {
        lVar41 = (longlong)
                 ((longlong)GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Z * 4 +
                 (ulonglong)
                 (GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.Z >> 0x1f & 7)) >>
                 3;
        iVar33 = 0x7fffffff;
        if (lVar41 < 0x7fffffff) {
          iVar33 = (int)lVar41;
        }
        local_3a4 = 0;
        iVar34 = local_390;
        do {
          puVar47 = (undefined8 *)0x0;
          iVar37 = iVar34;
          if (iVar33 < iVar34) {
            iVar37 = iVar33;
          }
          puVar42 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x40,0x10);
          if (puVar42 == (undefined8 *)0x0) {
            bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                                ,0x61,L"");
            if (bVar31) {
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
          }
          else {
            puVar42[2] = 0;
            *puVar42 = &
                       ___7__TObject_VFParameters_FScatterUploadDistanceFieldAtlasCS___FRDGAllocator__6B_
            ;
            puVar42[3] = 0;
            puVar42[4] = 0;
            puVar47 = puVar42;
          }
          local_2f8 = puVar47;
          if ((((undefined8 **)*plVar68 <= &local_2f8) &&
              (&local_2f8 < (undefined8 **)*plVar68 + *(int *)((longlong)&param_1->_padding_ + 4)))
             && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar31)) {
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          iVar36 = (int)param_1->_padding_;
          if (iVar36 == *(int *)((longlong)&param_1->_padding_ + 4)) {
            iVar36 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)plVar68,
                                (int *)((longlong)&param_1->_padding_ + 4));
          }
          *(int *)&param_1->_padding_ = iVar36 + 1;
          local_288._padding_._1_1_ = 0;
          *(undefined8 **)(*plVar68 + (longlong)iVar36 * 8) = local_2f8;
          local_288.Texture = local_2e0;
          local_288._padding_._0_1_ = (local_2e0->Desc).field_0x34;
          local_288._padding_._2_4_ = 0;
          local_288._padding_._6_1_ = 0;
          local_288._padding_._0_1_ = 0;
          pFVar48 = FRDGBuilder::CreateUAV(param_1,&local_288,None);
          ((FParameters *)(puVar47 + 2))->RWDistanceFieldBrickAtlas = pFVar48;
          puVar47[3] = *(undefined8 *)
                        ((longlong)
                         *(atomic<UE::Tasks::Private::FTaskBase_*> *)((longlong)aVar67 + 8) + 8);
          uVar6 = *(undefined8 *)
                   ((longlong)*(atomic<UE::Tasks::Private::FTaskBase_*> *)((longlong)aVar67 + 0x10)
                   + 8);
          *(uint *)(puVar47 + 5) = local_3a4;
          puVar47[4] = uVar6;
          *(int *)((longlong)puVar47 + 0x2c) = iVar37;
          *(undefined4 *)(puVar47 + 6) = 8;
          pFVar16 = local_2f0->GlobalShaderMap;
          pFVar51 = FScatterUploadDistanceFieldAtlasCS::GetStaticType();
          if (*(int *)&pFVar51->field_0x50 != 1) {
            local_38a[0] = 0;
            `FGlobalShaderMap::GetShader<FScatterUploadDistanceFieldAtlasCS>'::__l2::<lambda_1>::
            operator()(local_38a);
          }
          pFVar45 = (FShaderType *)FScatterUploadDistanceFieldAtlasCS::GetStaticType();
          FGlobalShaderMap::GetShader
                    (pFVar16,(TShaderRefBase<FShader,FShaderMapPointerTable> *)(local_1a8 + 0x20),
                     pFVar45,0);
          if ((FScatterUploadDistanceFieldAtlasCS *)local_1a8._32_8_ ==
              (FScatterUploadDistanceFieldAtlasCS *)0x0) {
            FVar58 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_1f0);
            ::FName::ToString((FName *)FVar58,&local_128);
            FScatterUploadDistanceFieldAtlasCS::GetStaticType();
            bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("Shader.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                                ,0xc0,L"Failed to find shader type %s in Platform %s");
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
            if (bVar31) {
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
          }
          FScatterUploadDistanceFieldAtlasCS::GetStaticType();
          local_118.ShaderContent = (FScatterUploadDistanceFieldAtlasCS *)local_1a8._32_8_;
          local_118.ShaderMap = pFStack_180;
          pFVar49 = FRDGEventName::FRDGEventName(&local_c8,1,L"ScatterUploadDistanceFieldAtlas");
          pFVar50 = FScatterUploadDistanceFieldAtlasCS::FParameters::FTypeInfo::GetStructMetadata();
          local_238._s_0.X = 2;
          iVar37 = iVar37 * 8 + 3;
          local_238._s_0.Y = 2;
          local_238._s_0.Z = (int)(iVar37 + (iVar37 >> 0x1f & 3U)) >> 2;
          FComputeShaderUtils::AddPass<FScatterUploadDistanceFieldAtlasCS>
                    (param_1,pFVar49,Compute,&local_118,pFVar50,(FParameters *)(puVar47 + 2),
                     (TIntVector3<int> *)&local_238._s_0);
          uVar64 = local_380;
          local_380 = local_380 & 0xfffffff7;
          if (local_c8.FormattedEventName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.FormattedEventName.Data.AllocatorInstance.Data);
          }
          if (((uVar64 & 4) != 0) && (local_380 = uVar64 & 0xfffffff3, local_1f0 != (void *)0x0)) {
            FMemory::Free(local_1f0);
          }
          iVar34 = iVar34 - iVar33;
          local_3a4 = local_3a4 + iVar33;
        } while ((int)local_3a4 < local_390);
      }
      pFVar69 = local_368;
      aVar25 = local_388;
      if (local_3a0 == false) {
        UploadAssetData((FDistanceFieldSceneData *)local_388,param_1,&local_378,local_368);
      }
      else {
        UploadAllAssetData((FDistanceFieldSceneData *)local_388,param_1,local_368);
      }
      GenerateStreamingRequests((FDistanceFieldSceneData *)aVar25,param_1,local_2f0);
      if (GDistanceFieldAtlasLogStats != 0) {
        ListMeshDistanceFields((FDistanceFieldSceneData *)aVar25,1 < GDistanceFieldAtlasLogStats);
        GDistanceFieldAtlasLogStats = 0;
      }
      pFVar28 = local_2e0;
      pFVar27 = local_2e8;
      if (local_2e0 != (FRDGTexture *)0x0) {
        iVar33 = (local_2e8->Resources).ArrayNum;
        piVar5 = &(local_2e8->Resources).ArrayMax;
        if (iVar33 == *piVar5) {
          iVar33 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                             (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)local_2e8,
                              piVar5);
        }
        (pFVar27->Resources).ArrayNum = iVar33 + 1;
        pFVar17 = (pFVar27->Resources).AllocatorInstance.Data;
        pFVar17[iVar33].Resource = (FRDGViewableResource *)pFVar28;
        pFVar17[iVar33].Access = SRVMask;
        pFVar17[iVar33].Pipelines = All;
      }
      if (pFVar69 != (FRDGBuffer *)0x0) {
        iVar33 = (pFVar27->Resources).ArrayNum;
        piVar5 = &(pFVar27->Resources).ArrayMax;
        if (iVar33 == *piVar5) {
          iVar33 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                             (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)pFVar27,
                              piVar5);
        }
        (pFVar27->Resources).ArrayNum = iVar33 + 1;
        pFVar17 = (pFVar27->Resources).AllocatorInstance.Data;
        pFVar17[iVar33].Resource = (FRDGViewableResource *)pFVar69;
        pFVar17[iVar33].Access = SRVMask;
        pFVar17[iVar33].Pipelines = All;
      }
      DestructItems<FDistanceFieldReadRequest,int>
                ((FDistanceFieldReadRequest *)local_338.AllocatorInstance.Data,local_338.ArrayNum);
      if ((FDistanceFieldReadRequest *)local_338.AllocatorInstance.Data !=
          (FDistanceFieldReadRequest *)0x0) {
        FMemory::Free(local_338.AllocatorInstance.Data);
      }
      DestructItems<FDistanceFieldReadRequest,int>
                ((FDistanceFieldReadRequest *)local_360.AllocatorInstance.Data,local_360.ArrayNum);
      if ((FDistanceFieldReadRequest *)local_360.AllocatorInstance.Data !=
          (FDistanceFieldReadRequest *)0x0) {
        FMemory::Free(local_360.AllocatorInstance.Data);
      }
      DestructItems<FDistanceFieldReadRequest,int>
                ((FDistanceFieldReadRequest *)local_348.AllocatorInstance.Data,local_348.ArrayNum);
      if ((FDistanceFieldReadRequest *)local_348.AllocatorInstance.Data !=
          (FDistanceFieldReadRequest *)0x0) {
        FMemory::Free(local_348.AllocatorInstance.Data);
      }
      if (local_378.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.AllocatorInstance.Data);
      }
      if (local_1d8 != '\0') {
        TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_1e8);
      }
      if (bVar70) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_2c0 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_2c0 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_2c0 & 4) != 0) {
        FThreadStats::AddMessage(local_2c8,CycleScopeEnd);
      }
      return;
    }
    uVar57 = *(uint *)FVar58;
    local_368 = (FRDGBuffer *)((longlong)local_388 + 0x158);
    lVar65 = (longlong)(int)uVar57 * 0xe8;
    lVar41 = *(longlong *)
              &((TSparseArrayBase<232,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_368)->Data;
    if ((*(int *)(lVar41 + 8 + lVar65) != 0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("AssetState.RefCount == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                            ,0x59e,L""), bVar31)) {
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    aVar25 = local_388;
    iVar33 = *(int *)(lVar41 + 0xd8 + lVar65);
    lVar61 = lVar41 + 0x10 + lVar65;
    if (*(longlong *)(lVar61 + 0xc0) != 0) {
      lVar61 = *(longlong *)(lVar61 + 0xc0);
    }
    puVar62 = (uint *)(lVar61 + 0x14);
    while( true ) {
      if (*(int *)(lVar41 + 0xd8 + lVar65) != iVar33) {
        local_38b = 0;
        `TCheckedPointerIterator<FDistanceFieldAssetMipState_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_38b);
      }
      puVar1 = puVar62 + -5;
      if (puVar1 == (uint *)((longlong)iVar33 * 0x40 + lVar61)) break;
      if ((uint)GDistanceFieldOffsetDataStructure < 2) {
        FGrowOnlySpanAllocator::Free
                  ((FGrowOnlySpanAllocator *)((longlong)aVar25 + 0x208),puVar62[-2],
                   puVar62[-4] * puVar62[-3] * *puVar1);
      }
      else {
        FTextureLayout3d::RemoveElement
                  ((FTextureLayout3d *)((longlong)aVar25 + 0x298),puVar62[-1],*puVar62,puVar62[1],
                   *puVar1,puVar62[-4],puVar62[-3]);
      }
      if (0 < (int)puVar62[2]) {
        if (((int)puVar62[9] < 1) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("MipState.AllocatedBlocks.Num() > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                                ,0x5ae,L""), bVar31)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        FDistanceFieldBlockAllocator::Free
                  ((FDistanceFieldBlockAllocator *)((longlong)aVar25 + 0x3f8),
                   (TArray<int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                   (puVar62 + 3));
      }
      puVar62 = puVar62 + 0x10;
    }
    uStack_324 = 0;
    local_328 = uVar57;
    if (((local_378.AllocatorInstance.Data <= (FScriptContainerElement *)&local_328) &&
        ((FScriptContainerElement *)&local_328 <
         local_378.AllocatorInstance.Data + (longlong)local_378.ArrayMax * 8)) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar31)) {
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
    iVar33 = local_378.ArrayNum;
    if (local_378.ArrayNum == local_378.ArrayMax) {
      iVar33 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_378.AllocatorInstance,&local_378.ArrayMax);
    }
    pFVar69 = local_368;
    local_378.ArrayNum = iVar33 + 1;
    *(ulonglong *)(local_378.AllocatorInstance.Data + (longlong)iVar33 * 8) =
         CONCAT44(uStack_324,local_328);
    if (((int)uVar57 < 0) ||
       (((TBitArray<FDefaultBitArrayAllocator> *)&local_368->_padding_)->NumBits <= (int)uVar57)) {
LAB_1448ac9dd:
      bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("Elements.IsValidIndex(ElementIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                          ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
      if (bVar31) {
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
    }
    else {
      FVar63 = (ForElementType<unsigned_int>)&local_368->_padding_;
      if ((((TBitArray<FDefaultBitArrayAllocator> *)&local_368->_padding_)->NumBits <= (int)uVar57)
         && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar31)) {
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      FVar9 = (((TBitArray<FDefaultBitArrayAllocator> *)&pFVar69->_padding_)->AllocatorInstance).
              SecondaryData;
      if (FVar9 != (ForElementType<unsigned_int>)0x0) {
        FVar63 = FVar9;
      }
      uVar35 = uVar57;
      if ((int)uVar57 < 0) {
        uVar35 = uVar57 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar63 + (longlong)((int)uVar35 >> 5) * 4) >> (uVar57 & 0x1f) & 1) ==
          0) goto LAB_1448ac9dd;
    }
    pTVar10 = *(TSparseArrayBase<232,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                **)&(((TSparseArrayBase<232,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)((longlong)pFVar69 + 0x38))->Data).ArrayNum;
    pFVar11 = (((TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<232,8>_>,TSizedDefaultAllocator<32>_>
                 *)&pFVar69->_padding_)->AllocatorInstance).Data;
    pTVar53 = (TSparseArrayBase<232,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)((longlong)pFVar69 + 0x38);
    if (pTVar10 !=
        (TSparseArrayBase<232,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)0x0) {
      pTVar53 = pTVar10;
    }
    pFVar66 = (FScriptContainerElement *)
              ((pTVar53->AllocationFlags).AllocatorInstance.InlineData +
              (longlong)*(int *)(pFVar11 + lVar65 + 0xe4) * 4 + -0x10);
    while( true ) {
      uVar35 = *(uint *)pFVar66;
      if ((uVar35 == 0xffffffff) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("NextElementIndex != INDEX_NONE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                              ,0x2b5,L"Corrupt hash"), bVar31)) {
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      if (uVar35 == uVar57) break;
      pFVar66 = (((TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<232,8>_>,TSizedDefaultAllocator<32>_>
                   *)&pFVar69->_padding_)->AllocatorInstance).Data +
                (longlong)(int)uVar35 * 0xe8 + 0xe0;
    }
    *(uint *)pFVar66 = *(uint *)(pFVar11 + lVar65 + 0xe0);
    TSparseArray<TSparseSetElement<FDistanceFieldAssetState>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<FDistanceFieldAssetState>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)pFVar69,uVar57,1);
    TSparseArrayBase<232,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized
              ((TSparseArrayBase<232,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)pFVar69,uVar57,1);
    FVar58 = (FName)((longlong)local_320 + 4);
    uVar56 = (ulonglong)uVar64;
  } while( true );
}

// UpdateDistanceFieldObjectBuffers @ 1448ae2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001448aec8b) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDistanceFieldSceneData::UpdateDistanceFieldObjectBuffers
          (FDistanceFieldSceneData *this,FRDGBuilder *param_1,FRDGExternalAccessQueue *param_2,
          FScene *param_3,TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FSetElementId,TSizedDefaultAllocator<32>_> *param_5)

{
  TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined1 *puVar6;
  FResource *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  FRDGBuffer *pFVar13;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar14;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar15;
  TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator> *pTVar16
  ;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  uint uVar21;
  FName *pFVar22;
  FThreadSafeStaticStat<_public:_void___cdecl_FDistanceFieldSceneData::UpdateDistanceFieldObjectBuffers(FRDGBuilder_&,FRDGExternalAccessQueue_&,FScene_*,TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_>_&,TArray<FSetElementId,TSizedDefaultAllocator<32>_>_&)_::_12_::FStat_STAT_UpdateDistanceFieldObjectBuffers>
  FVar23;
  FRDGScope *this_00;
  FDistanceFieldObjectBuffers *pFVar24;
  FDistanceFieldObjectBuffers *pFVar25;
  FThreadSafeStaticStat<_public:_void___cdecl_FDistanceFieldSceneData::UpdateDistanceFieldObjectBuffers(FRDGBuilder_&,FRDGExternalAccessQueue_&,FScene_*,TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_>_&,TArray<FSetElementId,TSizedDefaultAllocator<32>_>_&)_::_34_::FStat_STAT_UploadDistanceFieldObjectDataAndBounds>
  FVar26;
  FThreadSafeStaticStat<_public:_void___cdecl_FDistanceFieldSceneData::UpdateDistanceFieldObjectBuffers(FRDGBuilder_&,FRDGExternalAccessQueue_&,FScene_*,TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_>_&,TArray<FSetElementId,TSizedDefaultAllocator<32>_>_&)_::_77_::FStat_STAT_UpdateObjectData_VerifyIntegrity>
  FVar27;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  byte bVar28;
  longlong lVar29;
  int iVar30;
  FNameEntryId FVar31;
  FName FVar32;
  FName FVar33;
  uint uVar34;
  int *piVar35;
  TBitArray<FDefaultBitArrayAllocator> *pTVar36;
  FScriptContainerElement *pFVar37;
  FName FVar38;
  int iVar39;
  undefined1 *puVar40;
  uint *puVar41;
  FNameEntryId FVar42;
  bool bVar43;
  undefined1 auStackY_348 [32];
  <lambda_1> local_2e5;
  undefined1 local_2e4;
  undefined1 local_2e3 [3];
  FName local_2e0;
  FName local_2d8;
  FName local_2d0;
  FRDGBuilder *local_2c8;
  FRDGExternalAccessQueue *local_2c0;
  FRDGBuffer *local_2b8;
  FColor_u_0 local_2b0;
  FColor_u_0 local_2ac;
  undefined4 local_2a8;
  FColor_u_0 local_2a4;
  FScene *local_2a0;
  int local_298 [2];
  FName local_290;
  TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>
  *local_280;
  undefined8 uStack_278;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_270;
  uint uStack_268;
  int iStack_264;
  int iStack_260;
  undefined4 uStack_25c;
  int local_258;
  undefined4 uStack_254;
  FName local_250;
  FName local_248;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> local_240;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_230;
  FName local_210;
  FName local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f0;
  undefined4 local_1d0;
  FDistanceFieldSceneData *local_1c8;
  FStatMessage local_1c0;
  LARGE_INTEGER local_1b0;
  TRDGEventScopeGuard<FRDGScope_RHI> local_1a8;
  char local_198;
  int local_190;
  int local_18c;
  TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>
  *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  code *local_128;
  FDistanceFieldSceneData **local_120;
  TArrayView<std::nullptr_t,int> local_118;
  FDistanceFieldSceneData *local_108;
  undefined4 *local_100;
  TScenePrimitiveArray<FPrimitiveBounds> *local_f8;
  int local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<33>_const_*,std::tuple<>_> local_d0;
  FName local_c0;
  FName local_b8;
  FName local_b0 [2];
  uint uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_6c;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_2e0 = (FName)param_4;
  local_2b8 = (FRDGBuffer *)param_5;
  local_2c8 = param_1;
  local_2c0 = param_2;
  local_2a0 = param_3;
  local_1c8 = this;
  if ((*(int *)(param_1->_padding_ + 0x29c) !=
       (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("GraphBuilder.RHICmdList.GetGPUMask() == FRHIGPUMask::All()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldObjectManagement.cpp"
                          ,499,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (GDFParallelUpdate == 0) {
LAB_1448ae396:
    bVar17 = false;
  }
  else {
    bVar18 = FApp::ShouldUseThreadingForPerformance();
    bVar17 = true;
    if (!bVar18) goto LAB_1448ae396;
  }
  if ((((*(int *)&(this->PendingAddOperations).Elements.field_0x8 -
         *(int *)&(this->PendingAddOperations).Elements.field_0x34 < 1) &&
       (*(int *)&(this->PendingUpdateOperations).Elements.field_0x8 -
        *(int *)&(this->PendingUpdateOperations).Elements.field_0x34 < 1)) &&
      ((this->PendingRemoveOperations).ArrayNum < 1)) &&
     ((this->IndicesToUpdateInObjectBuffers).ArrayNum < 1)) {
    return;
  }
  piVar35 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  pFVar25 = (FDistanceFieldObjectBuffers *)0x0;
  if ((*piVar35 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_UpdateDistanceFieldObjectBuffers =
         (FThreadSafeStaticStat<_public:_void___cdecl_FDistanceFieldSceneData::UpdateDistanceFieldObjectBuffers(FRDGBuilder_&,FRDGExternalAccessQueue_&,FScene_*,TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_>_&,TArray<FSetElementId,TSizedDefaultAllocator<32>_>_&)_::_12_::FStat_STAT_UpdateDistanceFieldObjectBuffers>
          )0x0;
    pFVar22 = ::FName::FName(&local_c0,"STAT_UpdateDistanceFieldObjectBuffers");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateDistanceFieldObjectBuffers,*pFVar22,
               L"STAT_UpdateDistanceFieldObjectBuffers","STATGROUP_Quick","STATCAT_Advanced",
               L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar23 = StatPtr_STAT_UpdateDistanceFieldObjectBuffers;
  if (StatPtr_STAT_UpdateDistanceFieldObjectBuffers ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FDistanceFieldSceneData::UpdateDistanceFieldObjectBuffers(FRDGBuilder_&,FRDGExternalAccessQueue_&,FScene_*,TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_>_&,TArray<FSetElementId,TSizedDefaultAllocator<32>_>_&)_::_12_::FStat_STAT_UpdateDistanceFieldObjectBuffers>
       )0x0) {
    pFVar22 = ::FName::FName(&local_b8,"STAT_UpdateDistanceFieldObjectBuffers");
    FVar23 = (FThreadSafeStaticStat<_public:_void___cdecl_FDistanceFieldSceneData::UpdateDistanceFieldObjectBuffers(FRDGBuilder_&,FRDGExternalAccessQueue_&,FScene_*,TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_>_&,TArray<FSetElementId,TSizedDefaultAllocator<32>_>_&)_::_12_::FStat_STAT_UpdateDistanceFieldObjectBuffers>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UpdateDistanceFieldObjectBuffers,*pFVar22,
                          L"STAT_UpdateDistanceFieldObjectBuffers","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar38 = *(FName *)FVar23;
  local_210.ComparisonIndex.Value = 0;
  local_210.Number = 0;
  bVar11 = false;
  bVar18 = false;
  if ((FVar38.ComparisonIndex.Value.Value == 0) && (FVar38.Number == 0)) {
LAB_1448ae5df:
    bVar12 = false;
    local_2d8 = local_210;
    FVar38 = local_210;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2b0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2b0._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
      bVar11 = false;
      bVar18 = true;
      if (-1 < CpuChannel->Enabled) {
        local_248.ComparisonIndex.Value = FVar38.ComparisonIndex.Value.Value;
        local_248.Number = FVar38.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_248,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldObjectManagement.cpp"
                   ,0x1f9);
        bVar11 = true;
        bVar18 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1448ae5df;
    local_2d8 = FVar38;
    FThreadStats::AddMessage(FVar38,CycleScopeStart);
    bVar12 = true;
  }
  cVar4 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_198 = '\0';
  if ((cVar4 != '\0') && ((cVar4 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*piVar35 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_98 = 0;
      uStack_94 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_9c);
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_UpdateDistanceF;
      ::Desc._padding_ = (longlong)u_UpdateDistanceF;
      ::Desc._padding_._0_4_ = 0x1fa;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FDistanceFieldSceneData::UpdateDistanceFieldObjectBuffers'::__l17::Desc::
             operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_d0._Myfirst._Val = &::Desc;
    local_1a8.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    local_1a8.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<33>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_d0);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_198 = '\x01';
  }
  if (this->ObjectBuffers == (FDistanceFieldObjectBuffers *)0x0) {
    pFVar24 = ::operator_new(0x10);
    if (pFVar24 != (FDistanceFieldObjectBuffers *)0x0) {
      (pFVar24->Bounds).Reference = (FRDGPooledBuffer *)0x0;
      (pFVar24->Data).Reference = (FRDGPooledBuffer *)0x0;
      pFVar25 = pFVar24;
    }
    this->ObjectBuffers = pFVar25;
  }
  ProcessDistanceFieldObjectRemoves(this,param_5);
  if (((0 < *(int *)&(this->PendingAddOperations).Elements.field_0x8 -
            *(int *)&(this->PendingAddOperations).Elements.field_0x34) ||
      (0 < *(int *)&(this->PendingUpdateOperations).Elements.field_0x8 -
           *(int *)&(this->PendingUpdateOperations).Elements.field_0x34)) &&
     (GDFReverseAtlasAllocationOrder == GDFPreviousReverseAtlasAllocationOrder)) {
    local_240.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTVar36 = (TBitArray<FDefaultBitArrayAllocator> *)
              &(this->PendingAddOperations).Elements.field_0x10;
    local_240.ArrayNum = 0;
    local_240.ArrayMax = 0;
    pTVar1 = &this->PendingAddOperations;
    local_1f0._padding_._0_4_ = 0;
    local_1f0._padding_._4_4_ = 1;
    local_1f0.UnvisitedBitMask = 0xffffffff;
    local_1f0.CurrentBitIndex = 0;
    local_1f0.BaseBitIndex = 0;
    local_1f0.Array = pTVar36;
    if (*(int *)&(this->PendingAddOperations).Elements.field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1f0);
    }
    uVar21 = *(uint *)&(this->PendingAddOperations).Elements.field_0x28;
    uStack_278 = CONCAT44(local_1f0._padding_._4_4_,(undefined4)local_1f0._padding_);
    bVar28 = (byte)uVar21 & 0x1f;
    local_258 = *(int *)&(this->PendingAddOperations).Elements.field_0x8 -
                *(int *)&(this->PendingAddOperations).Elements.field_0x34;
    iStack_264 = local_1f0.CurrentBitIndex;
    uStack_268 = local_1f0.UnvisitedBitMask;
    uStack_25c = local_1f0._28_4_;
    iStack_260 = local_1f0.BaseBitIndex;
    local_230._padding_._0_4_ = (int)uVar21 >> 5;
    local_230._padding_._4_4_ = 1 << bVar28;
    local_230.UnvisitedBitMask = -1 << bVar28;
    pTStack_270 = local_1f0.Array;
    local_230.BaseBitIndex = uVar21 & 0xffffffe0;
    uStack_130 = CONCAT44(uStack_254,local_258);
    TStack_150.Array = local_1f0.Array;
    local_280 = pTVar1;
    local_230.Array = pTVar36;
    local_230.CurrentBitIndex = uVar21;
    local_158 = pTVar1;
    TStack_150._padding_ = uStack_278;
    TStack_150._16_8_ = _uStack_268;
    TStack_150._24_8_ = _iStack_260;
    if (((int)uVar21 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar19)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar13 = local_2b8;
    FVar38 = local_2e0;
    if (uVar21 != *(uint *)&(this->PendingAddOperations).Elements.field_0x28) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_230);
      pFVar13 = local_2b8;
      FVar38 = local_2e0;
      uVar21 = local_230.CurrentBitIndex;
      pTVar36 = local_230.Array;
    }
    while( true ) {
      pTVar16 = local_158;
      if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
          (int)uStack_130) {
        local_2e4 = 0;
        `TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2e4);
      }
      if (((TStack_150.CurrentBitIndex == uVar21) && (TStack_150.Array == pTVar36)) &&
         (pTVar16 == pTVar1)) break;
      ProcessPrimitiveUpdate
                (true,this,
                 *(FPrimitiveSceneInfo **)
                  (*(longlong *)&pTVar16->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10),
                 &local_240,(TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_> *)FVar38,
                 (TArray<FSetElementId,TSizedDefaultAllocator<32>_> *)pFVar13);
      TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
    }
    pTStack_270 = (TBitArray<FDefaultBitArrayAllocator> *)
                  &(this->PendingUpdateOperations).Elements.field_0x10;
    iVar30 = *(int *)&(this->PendingUpdateOperations).Elements.field_0x28;
    local_280 = &this->PendingUpdateOperations;
    iVar39 = 0;
    uVar21 = 1;
    iStack_260 = 0;
    iStack_264 = 0;
    if (iVar30 != 0) {
      puVar41 = *(uint **)&(this->PendingUpdateOperations).Elements.field_0x20;
      if (puVar41 == (uint *)0x0) {
        puVar41 = (uint *)pTStack_270;
      }
      uVar34 = *puVar41;
      iStack_260 = 0;
      while (uVar34 == 0) {
        lVar29 = (longlong)iVar39;
        iStack_260 = iStack_260 + 0x20;
        iVar39 = iVar39 + 1;
        iStack_264 = iVar30;
        if ((int)(iVar30 + -1 + (iVar30 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar39) goto LAB_1448ae9c3;
        uVar34 = puVar41[lVar29 + 1];
      }
      uVar21 = ~(uVar34 - 1) & uVar34;
      uVar3 = (ulonglong)uVar21 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      local_190 = (int)lVar29;
      iStack_264 = local_190 + -1 + iStack_260;
      if (iVar30 < iStack_264) {
        iStack_264 = iVar30;
      }
    }
LAB_1448ae9c3:
    local_258 = *(int *)&(this->PendingUpdateOperations).Elements.field_0x8 -
                *(int *)&(this->PendingUpdateOperations).Elements.field_0x34;
    uVar34 = *(uint *)&(this->PendingUpdateOperations).Elements.field_0x28;
    uStack_278 = CONCAT44(uVar21,iVar39);
    uStack_268 = 0xffffffff;
    uVar21 = uVar34 & 0xffffffe0;
    uStack_25c = local_6c;
    TStack_180._padding_ = uStack_278;
    iVar30 = (int)uVar34 >> 5;
    uStack_160 = CONCAT44(uStack_254,local_258);
    TStack_180.UnvisitedBitMask = 0xffffffff;
    TStack_180.CurrentBitIndex = iStack_264;
    TStack_180.BaseBitIndex = iStack_260;
    TStack_180._28_4_ = local_6c;
    local_188 = local_280;
    TStack_180.Array = pTStack_270;
    if (((int)uVar34 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar19)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar5 = *(uint *)&(this->PendingUpdateOperations).Elements.field_0x28;
    if (uVar34 != uVar5) {
      puVar6 = *(undefined1 **)&(this->PendingUpdateOperations).Elements.field_0x20;
      puVar40 = &(this->PendingUpdateOperations).Elements.field_0x10;
      if (puVar6 != (undefined1 *)0x0) {
        puVar40 = puVar6;
      }
      uVar34 = -1 << ((byte)uVar34 & 0x1f) & *(uint *)(puVar40 + (longlong)iVar30 * 4);
      while (uVar34 == 0) {
        lVar29 = (longlong)iVar30;
        uVar21 = uVar21 + 0x20;
        iVar30 = iVar30 + 1;
        uVar34 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar30)
        goto LAB_1448aeae4;
        uVar34 = *(uint *)(puVar40 + lVar29 * 4 + 4);
      }
      uVar3 = (ulonglong)(~(uVar34 - 1) & uVar34) * 2 + 1;
      lVar29 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      local_18c = (int)lVar29;
      uVar34 = (uVar21 - 1) + local_18c;
      if ((int)uVar5 < (int)uVar34) {
        uVar34 = uVar5;
      }
    }
LAB_1448aeae4:
    while( true ) {
      pTVar1 = local_188;
      if (*(int *)&(local_188->Elements).field_0x8 - *(int *)&(local_188->Elements).field_0x34 !=
          (int)uStack_160) {
        local_2e3[0] = 0;
        `TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2e3);
      }
      if (((TStack_180.CurrentBitIndex == uVar34) &&
          (TStack_180.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)
           &(this->PendingUpdateOperations).Elements.field_0x10)) &&
         (pTVar1 == &this->PendingUpdateOperations)) break;
      ProcessPrimitiveUpdate
                (false,this,
                 *(FPrimitiveSceneInfo **)
                  (*(longlong *)&pTVar1->Elements + (longlong)TStack_180.CurrentBitIndex * 0x10),
                 &local_240,
                 (TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_> *)local_2e0,
                 (TArray<FSetElementId,TSizedDefaultAllocator<32>_> *)pFVar13);
      TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
    }
    TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>::Reset
              (&this->PendingAddOperations);
    TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>::Reset
              (&this->PendingUpdateOperations);
    FVar38 = local_2d8;
    param_1 = local_2c8;
    if (local_240.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.AllocatorInstance.Data);
      param_1 = local_2c8;
    }
  }
  GDFPreviousReverseAtlasAllocationOrder = GDFReverseAtlasAllocationOrder;
  if ((this->IndicesToUpdateInObjectBuffers).ArrayNum < 1) goto LAB_1448af30c;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    StatPtr_STAT_UploadDistanceFieldObjectDataAndBounds =
         (FThreadSafeStaticStat<_public:_void___cdecl_FDistanceFieldSceneData::UpdateDistanceFieldObjectBuffers(FRDGBuilder_&,FRDGExternalAccessQueue_&,FScene_*,TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_>_&,TArray<FSetElementId,TSizedDefaultAllocator<32>_>_&)_::_34_::FStat_STAT_UploadDistanceFieldObjectDataAndBounds>
          )0x0;
    pFVar22 = ::FName::FName(local_b0,"STAT_UploadDistanceFieldObjectDataAndBounds");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UploadDistanceFieldObjectDataAndBounds,
               *pFVar22,L"STAT_UploadDistanceFieldObjectDataAndBounds","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS3);
  }
  FVar26 = StatPtr_STAT_UploadDistanceFieldObjectDataAndBounds;
  if (StatPtr_STAT_UploadDistanceFieldObjectDataAndBounds ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FDistanceFieldSceneData::UpdateDistanceFieldObjectBuffers(FRDGBuilder_&,FRDGExternalAccessQueue_&,FScene_*,TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_>_&,TArray<FSetElementId,TSizedDefaultAllocator<32>_>_&)_::_34_::FStat_STAT_UploadDistanceFieldObjectDataAndBounds>
       )0x0) {
    pFVar22 = ::FName::FName(&local_e8,"STAT_UploadDistanceFieldObjectDataAndBounds");
    FVar26 = (FThreadSafeStaticStat<_public:_void___cdecl_FDistanceFieldSceneData::UpdateDistanceFieldObjectBuffers(FRDGBuilder_&,FRDGExternalAccessQueue_&,FScene_*,TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_>_&,TArray<FSetElementId,TSizedDefaultAllocator<32>_>_&)_::_34_::FStat_STAT_UploadDistanceFieldObjectDataAndBounds>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UploadDistanceFieldObjectDataAndBounds,*pFVar22,
                          L"STAT_UploadDistanceFieldObjectDataAndBounds","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar26;
  bVar10 = false;
  bVar19 = false;
  local_200.ComparisonIndex.Value = 0;
  local_200.Number = 0;
  bVar20 = false;
  bVar43 = false;
  if ((FVar32.ComparisonIndex.Value.Value == 0) && (FVar32.Number == 0)) {
LAB_1448aedd2:
    bVar10 = bVar20;
    bVar19 = bVar43;
    bVar43 = false;
    FVar32 = local_200;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2ac.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2ac._s_0,(char *)*(FName *)((longlong)FVar26 + 0x10));
      bVar10 = false;
      bVar19 = true;
      bVar20 = false;
      bVar43 = true;
      if (-1 < CpuChannel->Enabled) {
        local_250.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value;
        local_250.Number = FVar32.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_250,(wchar_t *)*(FName *)((longlong)FVar26 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldObjectManagement.cpp"
                   ,0x228);
        bVar10 = true;
        bVar19 = true;
        bVar20 = true;
        bVar43 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1448aedd2;
    local_2e0 = FVar32;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    bVar43 = true;
  }
  if ((0x1000000 < (uint)this->NumObjectsInBuffer) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumObjectsInBuffer <= (1U << (24u))",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldObjectManagement.cpp"
                          ,0x22b,L""), bVar20)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar30 = 1;
  if (this->NumObjectsInBuffer != 0) {
    iVar30 = this->NumObjectsInBuffer;
  }
  uVar3 = (ulonglong)(iVar30 - 1) * 2 + 1;
  lVar29 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar29 == 0; lVar29 = lVar29 + -1) {
    }
  }
  local_1d0 = (undefined4)lVar29;
  local_2e0 = (FName)ResizeStructuredBufferIfNeeded
                               (param_1,&this->ObjectBuffers->Data,0xa0 << ((byte)lVar29 & 0x1f),
                                L"DistanceFields.DFObjectData");
  local_2b8 = ResizeStructuredBufferIfNeeded
                        (param_1,&this->ObjectBuffers->Bounds,0x30 << ((byte)lVar29 & 0x1f),
                         L"DistanceFields.DFObjectBounds");
  if (((this->IndicesToUpdateInObjectBuffers).ArrayNum !=
       *(int *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x8 -
       *(int *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x34) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IndicesToUpdateInObjectBuffers.Num() == IndicesToUpdateInObjectBuffersSet.Num()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldObjectManagement.cpp"
                          ,0x23a,L""), bVar20)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar21 = (this->IndicesToUpdateInObjectBuffers).ArrayNum;
  uVar34 = 0x200000;
  if ((int)uVar21 < 0x200000) {
    uVar34 = uVar21;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DFUpdateCS,4000);
    atexit(`FDistanceFieldSceneData::UpdateDistanceFieldObjectBuffers'::__l34::
           _dynamic_atexit_destructor_for__DFUpdateCS__);
    _Init_thread_footer(&::_TSS4);
  }
  if (0 < (int)uVar34) {
    FRDGScatterUploadBuffer::Init
              (&this->UploadDistanceFieldDataBuffer,param_1,uVar34,0xa0,true,
               L"DistanceFields.DFObjectDataUploadBuffer");
    FRDGScatterUploadBuffer::Init
              (&this->UploadDistanceFieldBoundsBuffer,local_2c8,uVar34,0x30,true,
               L"DistanceFields.DFObjectBoundsUploadBuffer");
    local_f8 = &local_2a0->PrimitiveBounds;
    if (((int)uVar34 < 0x100) || (!bVar17)) {
      local_f0 = 1;
      local_64 = uVar34;
    }
    else {
      local_60 = (int)(uVar34 + 3) >> 2;
      local_58 = local_60 * 2;
      local_50 = local_60 * 3;
      local_4c = uVar34 + local_60 * -3;
      local_f0 = (0 < local_4c) + 3;
      local_64 = local_60;
      local_5c = local_60;
      local_54 = local_60;
    }
    local_100 = &local_68;
    local_128 = UE::Core::Private::Function::
                TFunctionRefCaller<`FDistanceFieldSceneData::UpdateDistanceFieldObjectBuffers'::__l51::<lambda_2>,void,int>
                ::Call;
    local_120 = &local_108;
    local_68 = 0;
    local_118.DataPtr = (void **)0x0;
    local_118.ArrayNum = 0;
    local_108 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_f0,1,(TFunctionRef<void___cdecl(int)> *)&local_128,
               local_2e5,(uint)(local_f0 == 1),&local_118);
    FRDGScatterUploadBuffer::ResourceUploadToInternal
              (&this->UploadDistanceFieldDataBuffer,local_2c8,(FRDGViewableResource *)local_2e0);
    pFVar13 = local_2b8;
    FRDGScatterUploadBuffer::ResourceUploadToInternal
              (&this->UploadDistanceFieldBoundsBuffer,local_2c8,(FRDGViewableResource *)local_2b8);
    FVar33 = local_2e0;
    if (local_2e0 != (FName)0x0) {
      iVar30 = (local_2c0->Resources).ArrayNum;
      piVar35 = &(local_2c0->Resources).ArrayMax;
      if (iVar30 == *piVar35) {
        iVar30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                           (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)local_2c0,
                            piVar35);
      }
      (local_2c0->Resources).ArrayNum = iVar30 + 1;
      pFVar7 = (local_2c0->Resources).AllocatorInstance.Data;
      pFVar7[iVar30].Resource = (FRDGViewableResource *)FVar33;
      pFVar7[iVar30].Access = SRVMask;
      pFVar7[iVar30].Pipelines = All;
    }
    if (pFVar13 != (FRDGBuffer *)0x0) {
      iVar30 = (local_2c0->Resources).ArrayNum;
      piVar35 = &(local_2c0->Resources).ArrayMax;
      if (iVar30 == *piVar35) {
        iVar30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                           (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)local_2c0,
                            piVar35);
      }
      (local_2c0->Resources).ArrayNum = iVar30 + 1;
      pFVar7 = (local_2c0->Resources).AllocatorInstance.Data;
      pFVar7[iVar30].Resource = (FRDGViewableResource *)pFVar13;
      pFVar7[iVar30].Access = SRVMask;
      pFVar7[iVar30].Pipelines = All;
    }
    if (*(int *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x8 !=
        *(int *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x34) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements
                (&this->IndicesToUpdateInObjectBuffersSet);
      iVar30 = *(int *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0xc;
      *(undefined4 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x8 = 0;
      if (iVar30 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)&this->IndicesToUpdateInObjectBuffersSet,0,
                   (int *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0xc);
      }
      *(undefined4 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x34 = 0;
      *(undefined4 *)&(this->IndicesToUpdateInObjectBuffersSet).Elements.field_0x28 = 0;
    }
    pTVar2 = &this->IndicesToUpdateInObjectBuffers;
    if ((int)uVar34 < (this->IndicesToUpdateInObjectBuffers).ArrayNum) {
      if (((int)uVar34 < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar8 = (pTVar2->AllocatorInstance).Data;
      iVar30 = (this->IndicesToUpdateInObjectBuffers).ArrayNum - uVar34;
      if (iVar30 != 0) {
        memmove(pFVar8,pFVar8 + (longlong)(int)uVar34 * 4,(longlong)iVar30 << 2);
      }
      piVar35 = &(this->IndicesToUpdateInObjectBuffers).ArrayNum;
      *piVar35 = *piVar35 - uVar34;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&pTVar2->AllocatorInstance,(this->IndicesToUpdateInObjectBuffers).ArrayNum,
                 &(this->IndicesToUpdateInObjectBuffers).ArrayMax);
      pFVar37 = (pTVar2->AllocatorInstance).Data;
      iVar30 = (this->IndicesToUpdateInObjectBuffers).ArrayNum;
      pFVar8 = pFVar37 + (longlong)iVar30 * 4;
      while( true ) {
        if ((this->IndicesToUpdateInObjectBuffers).ArrayNum != iVar30) {
          local_2e5 = (<lambda_1>)0x0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_2e5)
          ;
        }
        if (pFVar37 == pFVar8) break;
        local_2a8 = *(undefined4 *)pFVar37;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&this->IndicesToUpdateInObjectBuffersSet,local_298,(bool *)&local_2a8);
        pFVar37 = pFVar37 + 4;
      }
      pTVar14 = &this->IndicesToUpdateInObjectBuffersSet;
      pTVar15 = &this->IndicesToUpdateInObjectBuffersSet;
      this = local_1c8;
      if (((local_1c8->IndicesToUpdateInObjectBuffers).ArrayNum !=
           *(int *)&(pTVar14->Elements).field_0x8 - *(int *)&(pTVar15->Elements).field_0x34) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IndicesToUpdateInObjectBuffers.Num() == IndicesToUpdateInObjectBuffersSet.Num()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldObjectManagement.cpp"
                              ,0x2dc,L""), bVar17)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    else {
      (this->IndicesToUpdateInObjectBuffers).ArrayNum = 0;
      if ((this->IndicesToUpdateInObjectBuffers).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&pTVar2->AllocatorInstance,0,
                   &(this->IndicesToUpdateInObjectBuffers).ArrayMax);
      }
    }
  }
  if (bVar19) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar43) {
    FThreadStats::AddMessage(FVar32,CycleScopeEnd);
  }
LAB_1448af30c:
  FVar42.Value = 0;
  if ((this->NumObjectsInBuffer != (this->PrimitiveInstanceMapping).ArrayNum) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumObjectsInBuffer == PrimitiveInstanceMapping.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldObjectManagement.cpp"
                          ,0x2e5,L""), bVar17)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (bVerifySceneIntegrity != false) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
      StatPtr_STAT_UpdateObjectData_VerifyIntegrity =
           (FThreadSafeStaticStat<_public:_void___cdecl_FDistanceFieldSceneData::UpdateDistanceFieldObjectBuffers(FRDGBuilder_&,FRDGExternalAccessQueue_&,FScene_*,TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_>_&,TArray<FSetElementId,TSizedDefaultAllocator<32>_>_&)_::_77_::FStat_STAT_UpdateObjectData_VerifyIntegrity>
            )0x0;
      pFVar22 = ::FName::FName(&local_e0,"STAT_UpdateObjectData_VerifyIntegrity");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateObjectData_VerifyIntegrity,
                 *pFVar22,L"STAT_UpdateObjectData_VerifyIntegrity","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS6);
    }
    FVar27 = StatPtr_STAT_UpdateObjectData_VerifyIntegrity;
    if (StatPtr_STAT_UpdateObjectData_VerifyIntegrity ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FDistanceFieldSceneData::UpdateDistanceFieldObjectBuffers(FRDGBuilder_&,FRDGExternalAccessQueue_&,FScene_*,TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_>_&,TArray<FSetElementId,TSizedDefaultAllocator<32>_>_&)_::_77_::FStat_STAT_UpdateObjectData_VerifyIntegrity>
         )0x0) {
      pFVar22 = ::FName::FName(&local_d8,"STAT_UpdateObjectData_VerifyIntegrity");
      FVar27 = (FThreadSafeStaticStat<_public:_void___cdecl_FDistanceFieldSceneData::UpdateDistanceFieldObjectBuffers(FRDGBuilder_&,FRDGExternalAccessQueue_&,FScene_*,TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_>_&,TArray<FSetElementId,TSizedDefaultAllocator<32>_>_&)_::_77_::FStat_STAT_UpdateObjectData_VerifyIntegrity>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_UpdateObjectData_VerifyIntegrity,*pFVar22,
                            L"STAT_UpdateObjectData_VerifyIntegrity","STATGROUP_Quick",
                            "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar32 = *(FName *)FVar27;
    bVar17 = false;
    bVar19 = false;
    local_290.ComparisonIndex.Value = 0;
    local_290.Number = 0;
    FVar31 = FVar32.ComparisonIndex.Value;
    uVar21 = FVar32.Number;
    if ((FVar31.Value == 0) && (uVar21 == 0)) {
      VerifyIntegrity(this);
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_2a4.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_2a4._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
        bVar17 = false;
        bVar19 = true;
        if (-1 < CpuChannel->Enabled) {
          local_2d0.ComparisonIndex.Value = FVar31.Value;
          local_2d0.Number = uVar21;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_2d0,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldObjectManagement.cpp"
                     ,0x2e9);
          bVar17 = true;
          bVar19 = true;
        }
      }
      bVar43 = FThreadStats::bPrimaryEnable != false;
      FVar33 = local_290;
      if (bVar43) {
        local_2d0.ComparisonIndex.Value = FVar31.Value;
        local_2d0.Number = uVar21;
        local_290 = FVar32;
        FThreadStats::AddMessage(FVar32,CycleScopeStart);
        FVar42 = local_290.ComparisonIndex.Value;
        FVar33 = FVar32;
      }
      VerifyIntegrity(this);
      if (bVar19) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar17) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar43) && (FVar33 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
          local_1c0.NameAndInfo.Number = FVar33.Number & 0xffff6fff | 0x6000;
          local_1c0.NameAndInfo.Index.Value = FVar42.Value;
          QueryPerformanceCounter(&local_1b0);
          local_1c0.StatData.Pad[4] = '\0';
          local_1c0.StatData.Pad[5] = '\0';
          local_1c0.StatData.Pad[6] = '\0';
          local_1c0.StatData.Pad[7] = '\0';
          local_1c0.StatData.Pad[0] = local_1b0.s.LowPart._0_1_;
          local_1c0.StatData.Pad[1] = local_1b0.s.LowPart._1_1_;
          local_1c0.StatData.Pad[2] = local_1b0.s.LowPart._2_1_;
          local_1c0.StatData.Pad[3] = local_1b0.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_01,&local_1c0);
          piVar35 = &this_01->ScopeCount;
          *piVar35 = *piVar35 + -1;
          if (*piVar35 == 0) {
            FThreadStats::Flush(this_01,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_01,false,false);
          }
        }
      }
    }
  }
  if (local_198 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_1a8);
  }
  if (bVar18) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar38,CycleScopeEnd);
  }
  return;
}

// UploadAllAssetData @ 1448b2230

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDistanceFieldSceneData::UploadAllAssetData
          (FDistanceFieldSceneData *this,FRDGBuilder *param_1,FRDGBuffer *param_2)

{
  TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator>
  *pTVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  longlong lVar16;
  undefined4 local_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  TSparseSet<FDistanceFieldAssetState,TFDistanceFieldAssetStateFuncs,FDefaultSparseSetAllocator>
  *local_70;
  int iStack_68;
  uint uStack_64;
  undefined1 *local_60;
  undefined4 uStack_58;
  uint uStack_54;
  int local_50;
  
  uVar10 = (*(int *)&(this->AssetStateArray).Elements.field_0x8 -
           *(int *)&(this->AssetStateArray).Elements.field_0x34) * 3;
  if (uVar10 != 0) {
    uVar9 = 1;
    if ((*(int *)(param_1->_padding_ + 0x29c) !=
         (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("GraphBuilder.RHICmdList.GetGPUMask() == FRHIGPUMask::All()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                           ,0x56c,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FRDGScatterUploadBuffer::Init
              (&this->AssetDataUploadBuffer,param_1,uVar10,0x30,true,
               L"DistanceFields.DFAssetDataUploadBuffer");
    pTVar1 = &this->AssetStateArray;
    iStack_68 = 0;
    uVar10 = *(uint *)&(this->AssetStateArray).Elements.field_0x28;
    local_60 = &(this->AssetStateArray).Elements.field_0x10;
    local_50 = 0;
    TStack_90.CurrentBitIndex = 0;
    if (uVar10 != 0) {
      puVar15 = *(uint **)&(this->AssetStateArray).Elements.field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)local_60;
      }
      uVar3 = *puVar15;
      while (uVar3 == 0) {
        lVar11 = (longlong)iStack_68;
        local_50 = local_50 + 0x20;
        iStack_68 = iStack_68 + 1;
        TStack_90.CurrentBitIndex = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_68)
        goto LAB_1448b2360;
        uVar3 = puVar15[lVar11 + 1];
      }
      uVar9 = -uVar3 & uVar3;
      uVar12 = (ulonglong)uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      TStack_90.CurrentBitIndex = (int)lVar11 + -1 + local_50;
      if ((int)uVar10 < TStack_90.CurrentBitIndex) {
        TStack_90.CurrentBitIndex = uVar10;
      }
    }
LAB_1448b2360:
    uStack_58 = 0xffffffff;
    TStack_90._padding_ = CONCAT44(uVar9,iStack_68);
    TStack_90._28_4_ = local_9c;
    TStack_90.BaseBitIndex = local_50;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    local_70 = pTVar1;
    uStack_64 = uVar9;
    uStack_54 = TStack_90.CurrentBitIndex;
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_60;
    if (TStack_90.CurrentBitIndex < (int)uVar10) {
      do {
        iVar5 = TStack_90.CurrentBitIndex;
        lVar16 = (longlong)TStack_90.CurrentBitIndex * 0xe8;
        lVar11 = *(longlong *)&pTVar1->Elements;
        if ((TStack_90.CurrentBitIndex < 0) ||
           (*(int *)&(this->AssetStateArray).Elements.field_0x8 <= TStack_90.CurrentBitIndex)) {
LAB_1448b24cf:
          *(int *)((this->AssetDataUploadBuffer)._padding_ +
                  (ulonglong)(uint)(this->AssetDataUploadBuffer)._padding_ * 4) = iVar5 * 3;
          iVar5 = (int)(this->AssetDataUploadBuffer)._padding_;
          uVar12 = (ulonglong)(uint)(iVar5 * (int)(this->AssetDataUploadBuffer)._padding_);
          *(int *)&(this->AssetDataUploadBuffer)._padding_ = iVar5 + 1;
          lVar11 = (this->AssetDataUploadBuffer)._padding_;
          *(undefined8 *)(uVar12 + lVar11) = 0;
          ((undefined8 *)(uVar12 + lVar11))[1] = 0;
          puVar2 = (undefined8 *)(uVar12 + 0x10 + lVar11);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(uVar12 + 0x20 + lVar11);
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        else {
          if (*(int *)&(this->AssetStateArray).Elements.field_0x28 <= TStack_90.CurrentBitIndex) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L"");
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          puVar6 = *(undefined1 **)&(this->AssetStateArray).Elements.field_0x20;
          puVar14 = &(this->AssetStateArray).Elements.field_0x10;
          if (puVar6 != (undefined1 *)0x0) {
            puVar14 = puVar6;
          }
          uVar10 = iVar5;
          if (iVar5 < 0) {
            uVar10 = iVar5 + 0x1f;
          }
          if ((*(uint *)(puVar14 + (longlong)((int)uVar10 >> 5) * 4) >> (iVar5 & 0x1fU) & 1) == 0)
          goto LAB_1448b24cf;
          iVar13 = 0;
          if (0 < *(int *)(lVar16 + 0xd8 + lVar11)) {
            do {
              *(int *)((this->AssetDataUploadBuffer)._padding_ +
                      (ulonglong)(uint)(this->AssetDataUploadBuffer)._padding_ * 4) =
                   iVar5 * 3 + iVar13;
              iVar4 = (int)(this->AssetDataUploadBuffer)._padding_;
              *(int *)&(this->AssetDataUploadBuffer)._padding_ = iVar4 + 1;
              EncodeAssetData((FDistanceFieldAssetState *)(*(longlong *)&pTVar1->Elements + lVar16),
                              iVar13,(TVector4<float> *)
                                     ((ulonglong)
                                      (uint)(iVar4 * (int)(this->AssetDataUploadBuffer)._padding_) +
                                     (this->AssetDataUploadBuffer)._padding_));
              iVar13 = iVar13 + 1;
            } while (iVar13 < *(int *)(lVar16 + 0xd8 + lVar11));
          }
        }
        TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
      } while (TStack_90.CurrentBitIndex < (TStack_90.Array)->NumBits);
    }
    FRDGScatterUploadBuffer::ResourceUploadToInternal
              (&this->AssetDataUploadBuffer,param_1,(FRDGViewableResource *)param_2);
  }
  return;
}

// UploadAssetData @ 1448b2590

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDistanceFieldSceneData::UploadAssetData
          (FDistanceFieldSceneData *this,FRDGBuilder *param_1,
          TArray<FDistanceFieldAssetMipId,TSizedDefaultAllocator<32>_> *param_2,FRDGBuffer *param_3)

{
  FRDGScatterUploadBuffer *this_00;
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  TVector4<float> *pTVar11;
  FScriptContainerElement *pFVar12;
  undefined1 *puVar13;
  undefined1 local_res18 [8];
  FRDGBuffer *local_res20;
  
  if (param_2->ArrayNum == 0) {
    return;
  }
  local_res20 = param_3;
  if ((*(int *)(param_1->_padding_ + 0x29c) !=
       (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphBuilder.RHICmdList.GetGPUMask() == FRHIGPUMask::All()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldStreaming.cpp"
                         ,0x549,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = &this->AssetDataUploadBuffer;
  FRDGScatterUploadBuffer::Init
            (this_00,param_1,param_2->ArrayNum,0x30,true,
             L"DistanceFields.DFAssetDataAssetDataUploadBuffer");
  uVar2 = param_2->ArrayNum;
  uVar10 = (ulonglong)(int)uVar2;
  pFVar12 = (param_2->AllocatorInstance).Data;
  pFVar1 = pFVar12 + uVar10 * 8;
  do {
    while( true ) {
      if (param_2->ArrayNum != (int)uVar10) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FDistanceFieldAssetMipId_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar12 == pFVar1) {
        FRDGScatterUploadBuffer::ResourceUploadToInternal
                  (this_00,param_1,(FRDGViewableResource *)local_res20);
        return;
      }
      uVar7 = (uint)*(undefined8 *)pFVar12;
      iVar6 = (int)((ulonglong)*(undefined8 *)pFVar12 >> 0x20);
      *(uint *)(this_00->_padding_ + (ulonglong)(uint)(this->AssetDataUploadBuffer)._padding_ * 4) =
           iVar6 + uVar7 * 3;
      iVar3 = (int)(this->AssetDataUploadBuffer)._padding_;
      *(int *)&(this->AssetDataUploadBuffer)._padding_ = iVar3 + 1;
      pTVar11 = (TVector4<float> *)
                ((ulonglong)(uint)(iVar3 * (int)(this->AssetDataUploadBuffer)._padding_) +
                (this->AssetDataUploadBuffer)._padding_);
      if (((uVar7 != 0xffffffff) && (-1 < (int)uVar7)) &&
         ((int)uVar7 < *(int *)&(this->AssetStateArray).Elements.field_0x8)) break;
LAB_1448b275d:
      uVar10 = (ulonglong)uVar2;
      *(undefined8 *)&pTVar11->field0_0x0 = 0;
      *(undefined8 *)((longlong)&pTVar11->field0_0x0 + 8) = 0;
      pFVar12 = pFVar12 + 8;
      *(undefined8 *)&pTVar11[1].field0_0x0 = 0;
      *(undefined8 *)((longlong)&pTVar11[1].field0_0x0 + 8) = 0;
      *(undefined8 *)&pTVar11[2].field0_0x0 = 0;
      *(undefined8 *)((longlong)&pTVar11[2].field0_0x0 + 8) = 0;
    }
    if ((*(int *)&(this->AssetStateArray).Elements.field_0x28 <= (int)uVar7) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar4 = *(undefined1 **)&(this->AssetStateArray).Elements.field_0x20;
    puVar13 = &(this->AssetStateArray).Elements.field_0x10;
    if (puVar4 != (undefined1 *)0x0) {
      puVar13 = puVar4;
    }
    uVar9 = uVar7;
    if ((int)uVar7 < 0) {
      uVar9 = uVar7 + 0x1f;
    }
    if ((*(uint *)(puVar13 + (longlong)((int)uVar9 >> 5) * 4) >> (uVar7 & 0x1f) & 1) == 0)
    goto LAB_1448b275d;
    EncodeAssetData((FDistanceFieldAssetState *)
                    ((longlong)(int)uVar7 * 0xe8 + *(longlong *)&(this->AssetStateArray).Elements),
                    iVar6,pTVar11);
    uVar10 = (ulonglong)uVar2;
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// AddPrimitive @ 14541b5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FDistanceFieldSceneData::AddPrimitive(FDistanceFieldSceneData *this,FPrimitiveSceneInfo *param_1)

{
  undefined1 *puVar1;
  FPrimitiveSceneProxy *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_158 [32];
  UTexture2D *local_138;
  FPrimitiveSceneInfo *local_130;
  undefined1 local_128 [8];
  UTexture2D *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  undefined4 local_54;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  pFVar2 = param_1->Proxy;
  if (((((this->bTrackAllPrimitives != false) || (pFVar2->bCastsDynamicIndirectShadow != '\0')) &&
       (pFVar2->bAffectDistanceFieldLighting != '\0')) &&
      (((pFVar2->DrawInGame != '\0' || (pFVar2->bCastHiddenShadow != '\0')) ||
       (pFVar2->bAffectIndirectLightingWhileHidden != '\0')))) &&
     (pFVar2->bCastDynamicShadow != '\0' || pFVar2->bAffectDynamicIndirectLighting != '\0')) {
    local_130 = param_1;
    if (pFVar2->bSupportsHeightfieldRepresentation != '\0') {
      local_58 = param_1->InstanceSceneDataOffset;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = UE::Math::TMatrix<double>::Identity.M[0][0];
      dStack_f0 = UE::Math::TMatrix<double>::Identity.M[0][1];
      local_e8 = UE::Math::TMatrix<double>::Identity.M[0][2];
      dStack_e0 = UE::Math::TMatrix<double>::Identity.M[0][3];
      local_d8 = UE::Math::TMatrix<double>::Identity.M[1][0];
      dStack_d0 = UE::Math::TMatrix<double>::Identity.M[1][1];
      local_c8 = UE::Math::TMatrix<double>::Identity.M[1][2];
      dStack_c0 = UE::Math::TMatrix<double>::Identity.M[1][3];
      local_b8 = UE::Math::TMatrix<double>::Identity.M[2][0];
      dStack_b0 = UE::Math::TMatrix<double>::Identity.M[2][1];
      local_a8 = UE::Math::TMatrix<double>::Identity.M[2][2];
      dStack_a0 = UE::Math::TMatrix<double>::Identity.M[2][3];
      local_98 = UE::Math::TMatrix<double>::Identity.M[3][0];
      dStack_90 = UE::Math::TMatrix<double>::Identity.M[3][1];
      local_88 = UE::Math::TMatrix<double>::Identity.M[3][2];
      dStack_80 = UE::Math::TMatrix<double>::Identity.M[3][3];
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_54 = 0;
      local_28 = 0xffffffff;
      (**(code **)(pFVar2->_padding_ + 0x108))(pFVar2,&local_120,&local_138,&local_118);
      FLandscapeTextureAtlas::AddAllocation
                ((FLandscapeTextureAtlas *)&GHeightFieldTextureAtlas,local_120,0);
      if (local_138 != (UTexture2D *)0x0) {
        if (3 < local_28) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Desc.VisibilityChannel >= 0 && Desc.VisibilityChannel < 4",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                             ,0x240,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        FLandscapeTextureAtlas::AddAllocation
                  ((FLandscapeTextureAtlas *)&GHFVisibilityTextureAtlas,local_138,local_28);
      }
      TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>::
      Emplace<FPrimitiveSceneInfo_*_const_&>
                (&this->PendingHeightFieldAddOps,(FPrimitiveSceneInfo **)local_128,
                 (bool *)&local_130);
    }
    if (pFVar2->bSupportsDistanceFieldRepresentation != 0) {
      TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>::
      Emplace<FPrimitiveSceneInfo_*_const_&>
                (&this->PendingAddOperations,(FPrimitiveSceneInfo **)(local_128 + 4),
                 (bool *)&local_130);
    }
  }
  return;
}

// Release @ 145447ff0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FDistanceFieldSceneData::Release(FDistanceFieldSceneData *this)

{
  FRHIGPUBufferReadback *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (this->ObjectBuffers != (FDistanceFieldObjectBuffers *)0x0) {
    FDistanceFieldObjectBuffers::Release(this->ObjectBuffers);
  }
  uVar5 = 0;
  uVar7 = uVar5;
  if (0 < (this->StreamingRequestReadbackBuffers).ArrayNum) {
    do {
      uVar4 = (uint)uVar5;
      uVar6 = ~uVar4 >> 0x1f;
      uVar3 = 0;
      if ((int)uVar4 < (this->StreamingRequestReadbackBuffers).ArrayNum) {
        uVar3 = uVar6;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(longlong *)((this->StreamingRequestReadbackBuffers).AllocatorInstance.Data + uVar7) != 0
         ) {
        uVar3 = 0;
        if ((int)uVar4 < (this->StreamingRequestReadbackBuffers).ArrayNum) {
          uVar3 = uVar6;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = *(FRHIGPUBufferReadback **)
                   ((this->StreamingRequestReadbackBuffers).AllocatorInstance.Data + uVar7);
        if (this_00 != (FRHIGPUBufferReadback *)0x0) {
          FRHIGPUBufferReadback::~FRHIGPUBufferReadback(this_00);
          ::operator_delete(this_00,0x58);
        }
        uVar3 = 0;
        if ((int)uVar4 < (this->StreamingRequestReadbackBuffers).ArrayNum) {
          uVar3 = uVar6;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(undefined8 *)((this->StreamingRequestReadbackBuffers).AllocatorInstance.Data + uVar7) = 0;
      }
      uVar5 = (ulonglong)(uVar4 + 1);
      uVar7 = uVar7 + 8;
    } while ((int)(uVar4 + 1) < (this->StreamingRequestReadbackBuffers).ArrayNum);
  }
  return;
}

// RemovePrimitive @ 14544bba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FDistanceFieldSceneData::RemovePrimitive(FDistanceFieldSceneData *this,FPrimitiveSceneInfo *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  TArray<FPrimitiveRemoveInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FHeightFieldPrimitiveRemoveInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  FPrimitiveSceneProxy *pFVar5;
  longlong lVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  int iVar12;
  uint uVar13;
  ForElementType<int> FVar14;
  ForElementType<FSetElementId> FVar15;
  ForElementType<int> FVar16;
  FPrimitiveRemoveInfo *pFVar17;
  undefined1 auStackY_2f8 [32];
  undefined1 local_2a8 [4];
  undefined1 local_2a4 [4];
  UTexture2D *local_2a0;
  UTexture2D *local_298;
  double local_290;
  double dStack_288;
  double local_280;
  double dStack_278;
  double local_270;
  double dStack_268;
  double local_260;
  undefined1 local_228;
  undefined7 uStack_227;
  FPrimitiveRemoveInfo local_220;
  FPrimitiveRemoveInfo local_1e8;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  FPrimitiveSceneInfo *local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  int local_b8;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  pFVar5 = param_1->Proxy;
  if ((((this->bTrackAllPrimitives != false) || (pFVar5->bCastsDynamicIndirectShadow != '\0')) &&
      (pFVar5->bAffectDistanceFieldLighting != '\0')) &&
     ((((pFVar5->DrawInGame != '\0' || (pFVar5->bCastHiddenShadow != '\0')) ||
       (pFVar5->bAffectIndirectLightingWhileHidden != '\0')) &&
      (pFVar5->bCastDynamicShadow != '\0' || pFVar5->bAffectDynamicIndirectLighting != '\0')))) {
    if (pFVar5->bSupportsDistanceFieldRepresentation != 0) {
      TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>::
      Remove(&this->PendingAddOperations,param_1);
      TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>::
      Remove(&this->PendingUpdateOperations,param_1);
      iVar12 = (param_1->DistanceFieldInstanceIndices).ArrayNum;
      if (0 < iVar12) {
        pTVar3 = &this->PendingRemoveOperations;
        local_220.bOftenMoving = (param_1->Proxy->Mobility).Value == '\x02';
        local_220.DistanceFieldInstanceIndices.AllocatorInstance.SecondaryData =
             (ForElementType<int>)0x0;
        FVar16 = (param_1->DistanceFieldInstanceIndices).AllocatorInstance.SecondaryData;
        if (FVar16 == (ForElementType<int>)0x0) {
          FVar16 = (ForElementType<int>)&param_1->DistanceFieldInstanceIndices;
        }
        local_220.Primitive = param_1;
        local_220.DistanceFieldInstanceIndices.ArrayNum = iVar12;
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,iVar12,0,&local_220.DistanceFieldInstanceIndices.AllocatorInstance,iVar12,
                   &local_220.DistanceFieldInstanceIndices.ArrayMax);
        FVar14 = (ForElementType<int>)&local_220.DistanceFieldInstanceIndices;
        if (local_220.DistanceFieldInstanceIndices.AllocatorInstance.SecondaryData !=
            (ForElementType<int>)0x0) {
          FVar14 = local_220.DistanceFieldInstanceIndices.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar14,(void *)FVar16,(longlong)iVar12 << 2);
        (**(code **)(param_1->Proxy->_padding_ + 0xe8))
                  (param_1->Proxy,&local_220.DistanceFieldData,local_2a8);
        pFVar17 = (FPrimitiveRemoveInfo *)(pTVar3->AllocatorInstance).Data;
        if (((pFVar17 <= &local_220) &&
            (&local_220 < pFVar17 + (this->PendingRemoveOperations).ArrayMax)) &&
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
        iVar12 = (this->PendingRemoveOperations).ArrayNum;
        piVar2 = &(this->PendingRemoveOperations).ArrayMax;
        if (iVar12 == *piVar2) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&pTVar3->AllocatorInstance,piVar2);
        }
        (this->PendingRemoveOperations).ArrayNum = iVar12 + 1;
        FPrimitiveRemoveInfo::FPrimitiveRemoveInfo
                  ((FPrimitiveRemoveInfo *)
                   ((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 0x30),&local_220);
        if (local_220.DistanceFieldInstanceIndices.AllocatorInstance.SecondaryData !=
            (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_220.DistanceFieldInstanceIndices.AllocatorInstance.
                                SecondaryData);
        }
      }
      piVar2 = &(param_1->DistanceFieldInstanceIndices).ArrayMax;
      (param_1->DistanceFieldInstanceIndices).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,0,&(param_1->DistanceFieldInstanceIndices).AllocatorInstance,0,piVar2);
      }
    }
    if (pFVar5->bSupportsHeightfieldRepresentation != '\0') {
      local_b8 = param_1->InstanceSceneDataOffset;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = UE::Math::TMatrix<double>::Identity.M[0][0];
      dStack_150 = UE::Math::TMatrix<double>::Identity.M[0][1];
      local_148 = UE::Math::TMatrix<double>::Identity.M[0][2];
      dStack_140 = UE::Math::TMatrix<double>::Identity.M[0][3];
      local_138 = UE::Math::TMatrix<double>::Identity.M[1][0];
      dStack_130 = UE::Math::TMatrix<double>::Identity.M[1][1];
      local_128 = UE::Math::TMatrix<double>::Identity.M[1][2];
      dStack_120 = UE::Math::TMatrix<double>::Identity.M[1][3];
      local_118 = UE::Math::TMatrix<double>::Identity.M[2][0];
      dStack_110 = UE::Math::TMatrix<double>::Identity.M[2][1];
      local_108 = UE::Math::TMatrix<double>::Identity.M[2][2];
      dStack_100 = UE::Math::TMatrix<double>::Identity.M[2][3];
      local_f8 = UE::Math::TMatrix<double>::Identity.M[3][0];
      dStack_f0 = UE::Math::TMatrix<double>::Identity.M[3][1];
      local_e8 = UE::Math::TMatrix<double>::Identity.M[3][2];
      dStack_e0 = UE::Math::TMatrix<double>::Identity.M[3][3];
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_b4 = 0;
      local_88 = 0xffffffff;
      (**(code **)(pFVar5->_padding_ + 0x108))(pFVar5,&local_2a0);
      FLandscapeTextureAtlas::RemoveAllocation
                ((FLandscapeTextureAtlas *)&GHeightFieldTextureAtlas,local_2a0);
      if (local_298 != (UTexture2D *)0x0) {
        FLandscapeTextureAtlas::RemoveAllocation
                  ((FLandscapeTextureAtlas *)&GHFVisibilityTextureAtlas,local_298);
      }
      TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>::
      Remove(&this->PendingHeightFieldAddOps,param_1);
      iVar12 = (param_1->DistanceFieldInstanceIndices).ArrayNum;
      if (0 < iVar12) {
        pTVar4 = &this->PendingHeightFieldRemoveOps;
        local_1e8.bOftenMoving = (param_1->Proxy->Mobility).Value == '\x02';
        local_1e8.DistanceFieldInstanceIndices.AllocatorInstance.SecondaryData =
             (ForElementType<int>)0x0;
        FVar16 = (param_1->DistanceFieldInstanceIndices).AllocatorInstance.SecondaryData;
        if (FVar16 == (ForElementType<int>)0x0) {
          FVar16 = (ForElementType<int>)&param_1->DistanceFieldInstanceIndices;
        }
        local_1e8.Primitive = param_1;
        local_1e8.DistanceFieldInstanceIndices.ArrayNum = iVar12;
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,iVar12,0,&local_1e8.DistanceFieldInstanceIndices.AllocatorInstance,iVar12,
                   &local_1e8.DistanceFieldInstanceIndices.ArrayMax);
        FVar14 = (ForElementType<int>)&local_1e8.DistanceFieldInstanceIndices;
        if (local_1e8.DistanceFieldInstanceIndices.AllocatorInstance.SecondaryData !=
            (ForElementType<int>)0x0) {
          FVar14 = local_1e8.DistanceFieldInstanceIndices.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)FVar14,(void *)FVar16,(longlong)iVar12 << 2);
        (**(code **)(param_1->Proxy->_padding_ + 0xe8))
                  (param_1->Proxy,&local_1e8.DistanceFieldData,local_2a4);
        pFVar5 = param_1->Proxy;
        pFVar17 = (FPrimitiveRemoveInfo *)(pTVar4->AllocatorInstance).Data;
        local_228 = 1;
        local_290 = (pFVar5->Bounds).Origin.field0_0x0._s_0.X;
        dStack_288 = (pFVar5->Bounds).Origin.field0_0x0._s_0.Y;
        local_280 = (pFVar5->Bounds).Origin.field0_0x0._s_0.Z;
        dStack_278 = (pFVar5->Bounds).BoxExtent.field0_0x0._s_0.X;
        local_270 = (pFVar5->Bounds).BoxExtent.field0_0x0._s_0.Y;
        dStack_268 = (pFVar5->Bounds).BoxExtent.field0_0x0._s_0.Z;
        local_260 = (pFVar5->Bounds).SphereRadius;
        local_188 = (FPrimitiveSceneInfo *)CONCAT71(uStack_227,1);
        local_1b8._8_4_ = SUB84(dStack_288 - local_270,0);
        local_1b8._0_8_ = local_290 - dStack_278;
        local_1b8._12_4_ = (int)((ulonglong)(dStack_288 - local_270) >> 0x20);
        local_198._8_4_ = SUB84(local_280 + dStack_268,0);
        local_198._0_8_ = dStack_288 + local_270;
        local_198._12_4_ = (int)((ulonglong)(local_280 + dStack_268) >> 0x20);
        local_1a8._8_4_ = SUB84(local_290 + dStack_278,0);
        local_1a8._0_8_ = local_280 - dStack_268;
        local_1a8._12_4_ = (int)((ulonglong)(local_290 + dStack_278) >> 0x20);
        if (((pFVar17 <= &local_1e8) &&
            (&local_1e8 <
             (FPrimitiveRemoveInfo *)
             ((longlong)pFVar17 + (longlong)(this->PendingHeightFieldRemoveOps).ArrayMax * 0x68)))
           && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar12 = (this->PendingHeightFieldRemoveOps).ArrayNum;
        piVar2 = &(this->PendingHeightFieldRemoveOps).ArrayMax;
        if (iVar12 == *piVar2) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x868,&pTVar4->AllocatorInstance,piVar2);
        }
        (this->PendingHeightFieldRemoveOps).ArrayNum = iVar12 + 1;
        pFVar17 = (FPrimitiveRemoveInfo *)
                  ((pTVar4->AllocatorInstance).Data + (longlong)iVar12 * 0x68);
        FPrimitiveRemoveInfo::FPrimitiveRemoveInfo(pFVar17,&local_1e8);
        auVar10 = local_198;
        auVar9 = local_1a8;
        auVar8 = local_1b8;
        pFVar17[1].Primitive = (FPrimitiveSceneInfo *)local_1b8._0_8_;
        pFVar17[1].bOftenMoving = (bool)local_1b8[8];
        *(undefined3 *)&pFVar17[1].field_0x9 = local_1b8._9_3_;
        pFVar17[1]._padding_ = local_1b8._12_4_;
        pFVar17[1].DistanceFieldInstanceIndices.AllocatorInstance.InlineData[0] = local_1a8[0];
        pFVar17[1].DistanceFieldInstanceIndices.AllocatorInstance.InlineData[1] = local_1a8[1];
        pFVar17[1].DistanceFieldInstanceIndices.AllocatorInstance.InlineData[2] = local_1a8[2];
        pFVar17[1].DistanceFieldInstanceIndices.AllocatorInstance.InlineData[3] = local_1a8[3];
        pFVar17[1].DistanceFieldInstanceIndices.AllocatorInstance._padding_ = local_1a8._4_4_;
        pFVar17[1].DistanceFieldInstanceIndices.AllocatorInstance.SecondaryData =
             (ForElementType<int>)local_1a8._8_8_;
        pFVar17[1].DistanceFieldInstanceIndices.ArrayNum = local_198._0_4_;
        pFVar17[1].DistanceFieldInstanceIndices.ArrayMax = local_198._4_4_;
        pFVar17[1].DistanceFieldData = (FDistanceFieldVolumeData *)local_198._8_8_;
        pFVar17[2].Primitive = local_188;
        local_1b8 = auVar8;
        local_1a8 = auVar9;
        local_198 = auVar10;
        if (local_1e8.DistanceFieldInstanceIndices.AllocatorInstance.SecondaryData !=
            (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_1e8.DistanceFieldInstanceIndices.AllocatorInstance.
                                SecondaryData);
        }
      }
      piVar2 = &(param_1->DistanceFieldInstanceIndices).ArrayMax;
      (param_1->DistanceFieldInstanceIndices).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,0,&(param_1->DistanceFieldInstanceIndices).AllocatorInstance,0,piVar2);
      }
    }
  }
  uVar13 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
  if (*(int *)&(this->PendingAddOperations).Elements.field_0x8 !=
      *(int *)&(this->PendingAddOperations).Elements.field_0x34) {
    FVar15 = (this->PendingAddOperations).Hash.SecondaryData;
    if (FVar15 == (ForElementType<FSetElementId>)0x0) {
      FVar15 = (ForElementType<FSetElementId>)&(this->PendingAddOperations).Hash;
    }
    iVar12 = *(int *)((longlong)FVar15 +
                     (ulonglong)
                     ((this->PendingAddOperations).HashSize - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
    if (iVar12 != -1) {
      lVar6 = *(longlong *)&(this->PendingAddOperations).Elements;
      do {
        if (*(FPrimitiveSceneInfo **)(lVar6 + (longlong)iVar12 * 0x10) == param_1) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!PendingAddOperations.Contains(InPrimitive)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                              ,0x28c,
                              L"Primitive is being removed from the scene, but didn\'t remove from Distance Field Scene properly - a crash will occur when processing PendingAddOperations.  This can happen if the proxy\'s properties have changed without recreating its render state."
                             );
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          break;
        }
        iVar12 = *(int *)(lVar6 + 8 + (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  uVar13 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
  if (*(int *)&(this->PendingUpdateOperations).Elements.field_0x8 !=
      *(int *)&(this->PendingUpdateOperations).Elements.field_0x34) {
    FVar15 = (this->PendingUpdateOperations).Hash.SecondaryData;
    if (FVar15 == (ForElementType<FSetElementId>)0x0) {
      FVar15 = (ForElementType<FSetElementId>)&(this->PendingUpdateOperations).Hash;
    }
    iVar12 = *(int *)((longlong)FVar15 +
                     (ulonglong)
                     ((this->PendingUpdateOperations).HashSize - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4
                     );
    if (iVar12 != -1) {
      lVar6 = *(longlong *)&(this->PendingUpdateOperations).Elements;
      do {
        if (*(FPrimitiveSceneInfo **)(lVar6 + (longlong)iVar12 * 0x10) == param_1) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!PendingUpdateOperations.Contains(InPrimitive)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                              ,0x28d,
                              L"Primitive is being removed from the scene, but didn\'t remove from Distance Field Scene properly - a crash will occur when processing PendingUpdateOperations.  This can happen if the proxy\'s properties have changed without recreating its render state."
                             );
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          break;
        }
        iVar12 = *(int *)(lVar6 + 8 + (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  uVar13 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
  if (*(int *)&(this->PendingHeightFieldAddOps).Elements.field_0x8 !=
      *(int *)&(this->PendingHeightFieldAddOps).Elements.field_0x34) {
    FVar15 = (this->PendingHeightFieldAddOps).Hash.SecondaryData;
    if (FVar15 == (ForElementType<FSetElementId>)0x0) {
      FVar15 = (ForElementType<FSetElementId>)&(this->PendingHeightFieldAddOps).Hash;
    }
    iVar12 = *(int *)((longlong)FVar15 +
                     (ulonglong)
                     ((this->PendingHeightFieldAddOps).HashSize - 1U & (uVar13 >> 0x10 ^ uVar13)) *
                     4);
    if (iVar12 != -1) {
      lVar6 = *(longlong *)&(this->PendingHeightFieldAddOps).Elements;
      do {
        if (*(FPrimitiveSceneInfo **)(lVar6 + (longlong)iVar12 * 0x10) == param_1) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!PendingHeightFieldAddOps.Contains(InPrimitive)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                              ,0x28f,
                              L"Primitive is being removed from the scene, but didn\'t remove from Distance Field Scene properly - a crash will occur when processing PendingHeightFieldAddOps.  This can happen if the proxy\'s properties have changed without recreating its render state."
                             );
          if (!bVar11) {
            return;
          }
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar12 = *(int *)(lVar6 + 8 + (longlong)iVar12 * 0x10);
      } while (iVar12 != -1);
    }
  }
  return;
}

// UpdatePrimitive @ 14545e4b0

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
FDistanceFieldSceneData::UpdatePrimitive(FDistanceFieldSceneData *this,FPrimitiveSceneInfo *param_1)

{
  undefined1 *puVar1;
  FPrimitiveSceneProxy *pFVar2;
  longlong lVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  FPrimitiveSceneInfo *local_res8;
  FPrimitiveSceneInfo *local_res10 [3];
  
  pFVar2 = param_1->Proxy;
  if ((((this->bTrackAllPrimitives != false) || (pFVar2->bCastsDynamicIndirectShadow != '\0')) &&
      (pFVar2->bAffectDistanceFieldLighting != '\0')) &&
     ((((pFVar2->DrawInGame != '\0' || (pFVar2->bCastHiddenShadow != '\0')) ||
       (pFVar2->bAffectIndirectLightingWhileHidden != '\0')) &&
      ((pFVar2->bCastDynamicShadow != '\0' || pFVar2->bAffectDynamicIndirectLighting != '\0' &&
       (pFVar2->bSupportsDistanceFieldRepresentation != 0)))))) {
    uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    if (*(int *)&(this->PendingAddOperations).Elements.field_0x8 !=
        *(int *)&(this->PendingAddOperations).Elements.field_0x34) {
      FVar5 = (this->PendingAddOperations).Hash.SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&(this->PendingAddOperations).Hash;
      }
      iVar6 = *(int *)((longlong)FVar5 +
                      (ulonglong)((this->PendingAddOperations).HashSize - 1U & uVar4) * 4);
      if (iVar6 != -1) {
        lVar3 = *(longlong *)&(this->PendingAddOperations).Elements;
        do {
          if (*(FPrimitiveSceneInfo **)(lVar3 + (longlong)iVar6 * 0x10) == param_1) {
            if (iVar6 != -1) {
              return;
            }
            break;
          }
          iVar6 = *(int *)(lVar3 + 8 + (longlong)iVar6 * 0x10);
        } while (iVar6 != -1);
      }
    }
    if (*(int *)&(this->PendingUpdateOperations).Elements.field_0x8 !=
        *(int *)&(this->PendingUpdateOperations).Elements.field_0x34) {
      FVar5 = (this->PendingUpdateOperations).Hash.SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&(this->PendingUpdateOperations).Hash;
      }
      iVar6 = *(int *)((longlong)FVar5 +
                      (ulonglong)((this->PendingUpdateOperations).HashSize - 1U & uVar4) * 4);
      if (iVar6 != -1) {
        lVar3 = *(longlong *)&(this->PendingUpdateOperations).Elements;
        do {
          if (*(FPrimitiveSceneInfo **)(lVar3 + (longlong)iVar6 * 0x10) == param_1) {
            return;
          }
          iVar6 = *(int *)(lVar3 + 8 + (longlong)iVar6 * 0x10);
        } while (iVar6 != -1);
      }
    }
    if (0 < (param_1->DistanceFieldInstanceIndices).ArrayNum) {
      local_res10[0] = param_1;
      TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>::
      Emplace<FPrimitiveSceneInfo_*_const_&>
                (&this->PendingUpdateOperations,&local_res8,(bool *)local_res10);
    }
  }
  return;
}

// VerifyIntegrity @ 145464000

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FDistanceFieldSceneData::VerifyIntegrity(FDistanceFieldSceneData *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  
  if ((this->NumObjectsInBuffer != (this->PrimitiveInstanceMapping).ArrayNum) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumObjectsInBuffer == PrimitiveInstanceMapping.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                         ,0x2a6,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar6 = 0;
  if (0 < (this->PrimitiveInstanceMapping).ArrayNum) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->PrimitiveInstanceMapping).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = (this->PrimitiveInstanceMapping).AllocatorInstance.Data + lVar9;
      if (((*(longlong *)pFVar8 == 0) || (*(int *)(*(longlong *)pFVar8 + 0x118) < 1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("PrimitiveAndInstance.Primitive && PrimitiveAndInstance.Primitive->DistanceFieldInstanceIndices.Num() > 0"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                             ,0x2ac,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(pFVar8 + 0x5c) < 0) ||
          (*(int *)(*(longlong *)pFVar8 + 0x118) <= *(int *)(pFVar8 + 0x5c))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("PrimitiveAndInstance.Primitive->DistanceFieldInstanceIndices.IsValidIndex(PrimitiveAndInstance.InstanceIndex)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                             ,0x2ad,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)pFVar8;
      uVar4 = *(uint *)(pFVar8 + 0x5c);
      uVar5 = 0;
      if ((int)uVar4 < *(int *)(lVar1 + 0x118)) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar7 = lVar1 + 0x108;
      if (*(longlong *)(lVar1 + 0x110) != 0) {
        lVar7 = *(longlong *)(lVar1 + 0x110);
      }
      uVar4 = *(uint *)(lVar7 + (longlong)(int)uVar4 * 4);
      if (((uVar4 != uVar6) && (uVar4 != 0xffffffff)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InstanceIndex == PrimitiveInstanceIndex || InstanceIndex == -1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                             ,0x2b0,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = uVar6 + 1;
      lVar9 = lVar9 + 0x60;
    } while ((int)uVar6 < (this->PrimitiveInstanceMapping).ArrayNum);
  }
  return;
}

