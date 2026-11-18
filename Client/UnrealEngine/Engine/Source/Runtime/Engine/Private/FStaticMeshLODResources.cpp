// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 31

// UpdateIndexMemoryStats<1> @ 14870ed90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStaticMeshLODResources::UpdateIndexMemoryStats<1>(FStaticMeshLODResources *this)

{
  FAdditionalStaticMeshIndexBuffers *pFVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_StaticMeshIndexMemory> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar5;
  uchar auVar6 [8];
  FName local_res8;
  FStatMessage local_18;
  
  uVar5 = *(int *)((longlong)&(this->DepthOnlyIndexBuffer).IndexStorage._padding_ + 4) +
          *(int *)((longlong)&(this->IndexBuffer).IndexStorage._padding_ + 4);
  pFVar1 = this->AdditionalIndexBuffers;
  this->StaticMeshIndexMemory = uVar5;
  if (pFVar1 != (FAdditionalStaticMeshIndexBuffers *)0x0) {
    uVar5 = uVar5 + *(int *)((longlong)&(pFVar1->WireframeIndexBuffer).IndexStorage._padding_ + 4);
    this->StaticMeshIndexMemory = uVar5;
    uVar5 = *(int *)((longlong)&(pFVar1->ReversedIndexBuffer).IndexStorage._padding_ + 4) + uVar5;
    this->StaticMeshIndexMemory = uVar5;
    uVar5 = *(int *)((longlong)&(pFVar1->ReversedDepthOnlyIndexBuffer).IndexStorage._padding_ + 4) +
            uVar5;
    this->StaticMeshIndexMemory = uVar5;
  }
  auVar6[4] = '\0';
  auVar6[5] = '\0';
  auVar6[6] = '\0';
  auVar6[7] = '\0';
  auVar6[0] = (char)uVar5;
  auVar6[1] = (char)(uVar5 >> 8);
  auVar6[2] = (char)(uVar5 >> 0x10);
  auVar6[3] = (char)(uVar5 >> 0x18);
  if (uVar5 != 0) {
    FVar4 = StatPtr_STAT_StaticMeshIndexMemory;
    if (StatPtr_STAT_StaticMeshIndexMemory ==
        (FThreadSafeStaticStat<FStat_STAT_StaticMeshIndexMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_StaticMeshIndexMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_StaticMeshIndexMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshIndexMemory,*pFVar3,
                         L"StaticMesh Index Memory","STATGROUP_MemoryStaticMesh","STATCAT_Advanced",
                         L"Memory StaticMesh",true,false,ST_int64,false,false,MCR_Physical);
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
      local_res8 = FVar2;
      local_18.StatData.Pad = auVar6;
      local_18.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_18);
      FStatsTrace::Add(&local_res8,(long64)auVar6);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// UpdateIndexMemoryStats<0> @ 14870ef80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStaticMeshLODResources::UpdateIndexMemoryStats<0>(FStaticMeshLODResources *this)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_StaticMeshIndexMemory> FVar3;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar4 [8];
  FName local_res8;
  FStatMessage local_18;
  
  auVar4[4] = '\0';
  auVar4[5] = '\0';
  auVar4[6] = '\0';
  auVar4[7] = '\0';
  auVar4._0_4_ = this->StaticMeshIndexMemory;
  if (auVar4 != (uchar  [8])0x0) {
    FVar3 = StatPtr_STAT_StaticMeshIndexMemory;
    if (StatPtr_STAT_StaticMeshIndexMemory ==
        (FThreadSafeStaticStat<FStat_STAT_StaticMeshIndexMemory>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_StaticMeshIndexMemory");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_StaticMeshIndexMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshIndexMemory,*pFVar2,
                         L"StaticMesh Index Memory","STATGROUP_MemoryStaticMesh","STATCAT_Advanced",
                         L"Memory StaticMesh",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar3;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_18.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_18.StatData.Pad = auVar4;
      local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_18);
      FStatsTrace::Add(&local_res8,-(longlong)auVar4);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// UpdateVertexMemoryStats<1> @ 14870f120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStaticMeshLODResources::UpdateVertexMemoryStats<1>(FStaticMeshLODResources *this)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_StaticMeshVertexMemory> FVar3;
  FThreadStats *pFVar4;
  FThreadStatsPool *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_ResourceVertexColorMemory> FVar6;
  uchar auVar7 [8];
  uchar auVar8 [8];
  FName local_res8;
  FStatMessage local_38;
  
  auVar7._0_4_ = (this->VertexBuffers).ColorVertexBuffer.NumVertices *
                 (this->VertexBuffers).ColorVertexBuffer.Stride;
  auVar7[4] = '\0';
  auVar7[5] = '\0';
  auVar7[6] = '\0';
  auVar7[7] = '\0';
  auVar8._0_4_ = ((this->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
                  (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordStride +
                 (this->VertexBuffers).StaticMeshVertexBuffer.TangentsStride) *
                 (this->VertexBuffers).StaticMeshVertexBuffer.NumVertices +
                 (this->VertexBuffers).PositionVertexBuffer.NumVertices *
                 (this->VertexBuffers).PositionVertexBuffer.Stride;
  auVar8[4] = '\0';
  auVar8[5] = '\0';
  auVar8[6] = '\0';
  auVar8[7] = '\0';
  if (auVar8._0_4_ != 0) {
    FVar3 = StatPtr_STAT_StaticMeshVertexMemory;
    if (StatPtr_STAT_StaticMeshVertexMemory ==
        (FThreadSafeStaticStat<FStat_STAT_StaticMeshVertexMemory>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_StaticMeshVertexMemory");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_StaticMeshVertexMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshVertexMemory,*pFVar2,
                         L"StaticMesh Vertex Memory","STATGROUP_MemoryStaticMesh","STATCAT_Advanced"
                         ,L"Memory StaticMesh",true,false,ST_int64,false,false,MCR_Physical);
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
      local_38.StatData.Pad = auVar8;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar8);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  if (auVar7 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_ResourceVertexColorMemory;
    if (StatPtr_STAT_ResourceVertexColorMemory ==
        (FThreadSafeStaticStat<FStat_STAT_ResourceVertexColorMemory>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_ResourceVertexColorMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_ResourceVertexColorMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResourceVertexColorMemory,
                         *pFVar2,L"StaticMesh VxColor Resource Mem","STATGROUP_MemoryStaticMesh",
                         "STATCAT_Advanced",L"Memory StaticMesh",true,false,ST_int64,false,false,
                         MCR_Physical);
    }
    FVar1 = *(FName *)FVar6;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar7;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar7);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  return;
}

// UpdateVertexMemoryStats<0> @ 14870f430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStaticMeshLODResources::UpdateVertexMemoryStats<0>(FStaticMeshLODResources *this)

{
  uint uVar1;
  uint uVar2;
  FName FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_StaticMeshVertexMemory> FVar5;
  FThreadStats *pFVar6;
  FThreadStatsPool *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_ResourceVertexColorMemory> FVar8;
  uchar auVar9 [8];
  uchar auVar10 [8];
  FName local_res8;
  FStatMessage local_38;
  
  uVar1 = (this->VertexBuffers).ColorVertexBuffer.NumVertices;
  uVar2 = (this->VertexBuffers).ColorVertexBuffer.Stride;
  auVar9._0_4_ = ((this->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
                  (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordStride +
                 (this->VertexBuffers).StaticMeshVertexBuffer.TangentsStride) *
                 (this->VertexBuffers).StaticMeshVertexBuffer.NumVertices +
                 (this->VertexBuffers).PositionVertexBuffer.NumVertices *
                 (this->VertexBuffers).PositionVertexBuffer.Stride;
  auVar9[4] = '\0';
  auVar9[5] = '\0';
  auVar9[6] = '\0';
  auVar9[7] = '\0';
  if (auVar9._0_4_ != 0) {
    FVar5 = StatPtr_STAT_StaticMeshVertexMemory;
    if (StatPtr_STAT_StaticMeshVertexMemory ==
        (FThreadSafeStaticStat<FStat_STAT_StaticMeshVertexMemory>)0x0) {
      pFVar4 = ::FName::FName(&local_res8,"STAT_StaticMeshVertexMemory");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_StaticMeshVertexMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshVertexMemory,*pFVar4,
                         L"StaticMesh Vertex Memory","STATGROUP_MemoryStaticMesh","STATCAT_Advanced"
                         ,L"Memory StaticMesh",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar3 = *(FName *)FVar5;
    local_res8 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar6 == (FThreadStats *)0x0) {
        pFVar7 = FThreadStatsPool::Get();
        pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
      }
      local_38.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar3;
      local_38.StatData.Pad = auVar9;
      local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar6,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar9);
      if (pFVar6->ScopeCount == 0) {
        FThreadStats::Flush(pFVar6,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar6,false,false);
      }
    }
  }
  auVar10[4] = '\0';
  auVar10[5] = '\0';
  auVar10[6] = '\0';
  auVar10[7] = '\0';
  auVar10._0_4_ = uVar1 * uVar2;
  if (auVar10 != (uchar  [8])0x0) {
    FVar8 = StatPtr_STAT_ResourceVertexColorMemory;
    if (StatPtr_STAT_ResourceVertexColorMemory ==
        (FThreadSafeStaticStat<FStat_STAT_ResourceVertexColorMemory>)0x0) {
      pFVar4 = ::FName::FName(&local_res8,"STAT_ResourceVertexColorMemory");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_ResourceVertexColorMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResourceVertexColorMemory,
                         *pFVar4,L"StaticMesh VxColor Resource Mem","STATGROUP_MemoryStaticMesh",
                         "STATCAT_Advanced",L"Memory StaticMesh",true,false,ST_int64,false,false,
                         MCR_Physical);
    }
    FVar3 = *(FName *)FVar8;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar3;
      pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar6 == (FThreadStats *)0x0) {
        pFVar7 = FThreadStatsPool::Get();
        pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
      }
      local_38.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar3;
      local_38.StatData.Pad = auVar10;
      local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar6,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar10);
      if (pFVar6->ScopeCount == 0) {
        FThreadStats::Flush(pFVar6,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar6,false,false);
      }
    }
  }
  return;
}

// FStaticMeshLODResources @ 148711e10

FStaticMeshLODResources * __thiscall
FStaticMeshLODResources::FStaticMeshLODResources(FStaticMeshLODResources *this,bool param_1)

{
  undefined1 *puVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FStaticMeshLODResources__6B_;
  *(undefined8 *)&(this->Sections).field_0x20 = 0;
  *(undefined4 *)&(this->Sections).field_0x28 = 0;
  *(undefined4 *)&(this->Sections).field_0x2c = 1;
  this->bHasDepthOnlyIndices = 0;
  this->bIsOptionalLOD = 0;
  this->bBuffersInlined = 0;
  this->bHasWireframeIndices = 0;
  this->bHasColorVertexData = 0;
  this->bHasReversedDepthOnlyIndices = 0;
  this->bHasReversedIndices = 0;
  (this->SourceMeshBounds).Origin.field0_0x0._s_0.X = 0.0;
  (this->SourceMeshBounds).Origin.field0_0x0._s_0.Y = 0.0;
  (this->SourceMeshBounds).Origin.field0_0x0._s_0.Z = 0.0;
  (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->SourceMeshBounds).SphereRadius = 0.0;
  *(undefined8 *)&this->StreamingBulkData = 0;
  this->DistanceFieldData = (FDistanceFieldVolumeData *)0x0;
  this->CardRepresentationData = (FCardRepresentationData *)0x0;
  this->RayTracingGeometry = (FRayTracingGeometry *)0x0;
  this->MaxDeviation = 0.0;
  this->DepthOnlyNumTriangles = 0;
  this->BuffersSize = 0;
  *(undefined8 *)&(this->StreamingBulkData).field_0x8 = 0;
  *(undefined8 *)&(this->StreamingBulkData).field_0x10 = 0;
  *(undefined4 *)&(this->StreamingBulkData).field_0xd = 0xffffffff;
  (this->StreamingBulkData).field_0x11 = 0xff;
  uVar2 = FIoChunkId::InvalidChunkId.Id[1];
  uVar3 = FIoChunkId::InvalidChunkId.Id[2];
  uVar4 = FIoChunkId::InvalidChunkId.Id[3];
  uVar5 = FIoChunkId::InvalidChunkId.Id[4];
  uVar6 = FIoChunkId::InvalidChunkId.Id[5];
  uVar7 = FIoChunkId::InvalidChunkId.Id[6];
  uVar8 = FIoChunkId::InvalidChunkId.Id[7];
  (this->StreamingBulkData).field_0x18 = FIoChunkId::InvalidChunkId.Id[0];
  (this->StreamingBulkData).field_0x19 = uVar2;
  (this->StreamingBulkData).field_0x1a = uVar3;
  (this->StreamingBulkData).field_0x1b = uVar4;
  (this->StreamingBulkData).field_0x1c = uVar5;
  (this->StreamingBulkData).field_0x1d = uVar6;
  (this->StreamingBulkData).field_0x1e = uVar7;
  (this->StreamingBulkData).field_0x1f = uVar8;
  uVar2 = FIoChunkId::InvalidChunkId.Id[9];
  uVar3 = FIoChunkId::InvalidChunkId.Id[10];
  uVar4 = FIoChunkId::InvalidChunkId.Id[0xb];
  (this->StreamingBulkData).field_0x20 = FIoChunkId::InvalidChunkId.Id[8];
  (this->StreamingBulkData).field_0x21 = uVar2;
  (this->StreamingBulkData).field_0x22 = uVar3;
  (this->StreamingBulkData).field_0x23 = uVar4;
  this->StaticMeshIndexMemory = 0;
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(&(this->VertexBuffers).StaticMeshVertexBuffer);
  FPositionVertexBuffer::FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FColorVertexBuffer::FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FRawStaticIndexBuffer::FRawStaticIndexBuffer(&this->IndexBuffer,false);
  FRawStaticIndexBuffer::FRawStaticIndexBuffer(&this->DepthOnlyIndexBuffer,false);
  this->AdditionalIndexBuffers = (FAdditionalStaticMeshIndexBuffers *)0x0;
  FWeightedRandomSampler::FWeightedRandomSampler
            ((FWeightedRandomSampler *)&this->AreaWeightedSampler);
  (this->AreaWeightedSampler)._padding_ = (longlong)&___7FStaticMeshAreaWeightedSectionSampler__6B_;
  (this->AreaWeightedSampler).Owner.Reference = (FStaticMeshLODResources *)0x0;
  (this->AreaWeightedSectionSamplers).AllocatorInstance = (ForAnyElementType)0x0;
  (this->AreaWeightedSectionSamplers).ArrayNum = 0;
  (this->AreaWeightedSectionSamplers).ArrayMax = 0;
  FRenderResource::FRenderResource((FRenderResource *)&this->AreaWeightedSectionSamplersBuffer);
  (this->AreaWeightedSectionSamplersBuffer)._padding_ =
       (longlong)&___7FStaticMeshSectionAreaWeightedTriangleSamplerBuffer__6B_;
  (this->AreaWeightedSectionSamplersBuffer).BufferSectionTriangleRHI.Reference = (FRHIBuffer *)0x0;
  (this->AreaWeightedSectionSamplersBuffer).BufferSectionTriangleSRV.Reference =
       (FRHIShaderResourceView *)0x0;
  (this->AreaWeightedSectionSamplersBuffer).Samplers =
       (TArray<FStaticMeshSectionAreaWeightedTriangleSampler,TMemoryImageAllocator<0>_> *)0x0;
  if (param_1) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  return this;
}

// ~FStaticMeshLODResources @ 148714320

void __thiscall FStaticMeshLODResources::~FStaticMeshLODResources(FStaticMeshLODResources *this)

{
  longlong *plVar1;
  TArray<FStaticMeshSectionAreaWeightedTriangleSampler,TMemoryImageAllocator<0>_> *this_00;
  FDistanceFieldVolumeData *pFVar2;
  FCardRepresentationData *pFVar3;
  FAdditionalStaticMeshIndexBuffers *this_01;
  FRayTracingGeometry *pFVar4;
  FRHIShaderResourceView *this_02;
  FRHIBuffer *this_03;
  FStaticMeshLODResources *pFVar5;
  void *pvVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  ForAnyElementType FVar10;
  
  this->_padding_ = (longlong)&___7FStaticMeshLODResources__6B_;
  if ((int)this->_padding_ != 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x5b9,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar2 = this->DistanceFieldData;
  if (pFVar2 != (FDistanceFieldVolumeData *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  pFVar3 = this->CardRepresentationData;
  if (pFVar3 != (FCardRepresentationData *)0x0) {
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  this_01 = this->AdditionalIndexBuffers;
  if (this_01 != (FAdditionalStaticMeshIndexBuffers *)0x0) {
    FRawStaticIndexBuffer::~FRawStaticIndexBuffer(&this_01->WireframeIndexBuffer);
    FRawStaticIndexBuffer::~FRawStaticIndexBuffer(&this_01->ReversedDepthOnlyIndexBuffer);
    FRawStaticIndexBuffer::~FRawStaticIndexBuffer(&this_01->ReversedIndexBuffer);
    ::operator_delete(this_01,0xf0);
  }
  pFVar4 = this->RayTracingGeometry;
  if (pFVar4 != (FRayTracingGeometry *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  (this->AreaWeightedSectionSamplersBuffer)._padding_ =
       (longlong)&___7FStaticMeshSectionAreaWeightedTriangleSamplerBuffer__6B_;
  this_02 = (this->AreaWeightedSectionSamplersBuffer).BufferSectionTriangleSRV.Reference;
  if (this_02 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_02);
  }
  this_03 = (this->AreaWeightedSectionSamplersBuffer).BufferSectionTriangleRHI.Reference;
  if (this_03 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_03);
  }
  FRenderResource::~FRenderResource((FRenderResource *)&this->AreaWeightedSectionSamplersBuffer);
  this_00 = &this->AreaWeightedSectionSamplers;
  FVar10 = this_00->AllocatorInstance;
  if (((ulonglong)FVar10 & 1) != 0) {
    FVar10 = (ForAnyElementType)
             ((longlong)&(this_00->AllocatorInstance).field_0x0 + ((longlong)FVar10 >> 0x18));
  }
  DestructItems<FStaticMeshSectionAreaWeightedTriangleSampler,int>
            ((FStaticMeshSectionAreaWeightedTriangleSampler *)FVar10,
             (this->AreaWeightedSectionSamplers).ArrayNum);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)this_00);
  pFVar5 = (this->AreaWeightedSampler).Owner.Reference;
  if (pFVar5 != (FStaticMeshLODResources *)0x0) {
    plVar1 = &pFVar5->_padding_;
    LOCK();
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  FWeightedRandomSampler::~FWeightedRandomSampler
            ((FWeightedRandomSampler *)&this->AreaWeightedSampler);
  FRawStaticIndexBuffer::~FRawStaticIndexBuffer(&this->DepthOnlyIndexBuffer);
  FRawStaticIndexBuffer::~FRawStaticIndexBuffer(&this->IndexBuffer);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&(this->VertexBuffers).StaticMeshVertexBuffer);
  FBulkData::~FBulkData((FBulkData *)&this->StreamingBulkData);
  pvVar6 = *(void **)&(this->Sections).field_0x20;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  return;
}

// operator() @ 14871a9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
`FStaticMeshLODResources::InitResources'::__l38::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FStaticMeshLODResources *this_00;
  FRayTracingGeometry *this_01;
  ForAnyElementType FVar1;
  int iVar2;
  undefined1 auStackY_158 [32];
  FRayTracingGeometryInitializer local_118;
  FDebugName local_a8;
  FRayTracingGeometryInitializer local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_98.bFastBuild = false;
  local_98.bAllowUpdate = false;
  local_98.bAllowCompaction = true;
  local_98.bTemplate = false;
  local_98.IndexBuffer.Reference = (FRHIBuffer *)0x0;
  local_98.IndexBufferOffset = 0;
  local_98.GeometryType = RTGT_Triangles;
  local_98.TotalPrimitiveCount = 0;
  local_98.Type = Rendering;
  local_98.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Segments.ArrayNum = 0;
  local_98.Segments.ArrayMax = 0;
  local_98.OfflineData = (FResourceArrayUploadInterface *)0x0;
  local_98.SourceGeometry = (FRHIRayTracingGeometry *)0x0;
  local_98.OfflineDataHeader.Reserved[0] = 0xffffffff;
  local_98.OfflineDataHeader.Reserved[1] = 0xffffffff;
  local_98.OfflineDataHeader.Reserved[2] = 0xffffffff;
  local_98.OfflineDataHeader.Reserved[3] = 0xffffffff;
  local_98.OfflineDataHeader.Reserved[4] = 0xffffffff;
  local_98.OfflineDataHeader.Reserved[5] = 0xffffffff;
  FDebugName::FDebugName(&local_98.DebugName);
  this_00 = *(FStaticMeshLODResources **)this;
  local_98.OwnerName.ComparisonIndex.Value = 0;
  local_98.OwnerName.Number = 0;
  FDebugName::FDebugName(&local_a8,*(FName *)((longlong)this + 8));
  FStaticMeshLODResources::SetupRayTracingGeometryInitializer
            (this_00,&local_98,&local_a8,(FName *)((longlong)this + 0x10));
  this_01 = *(FRayTracingGeometry **)(*(longlong *)this + 0x50);
  local_118.IndexBuffer.Reference = local_98.IndexBuffer.Reference;
  if (local_98.IndexBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_98.IndexBuffer.Reference);
  }
  FVar1.Data = local_98.Segments.AllocatorInstance.Data;
  iVar2 = local_98.Segments.ArrayNum;
  local_118.IndexBufferOffset = local_98.IndexBufferOffset;
  local_118.GeometryType = local_98.GeometryType;
  local_118.TotalPrimitiveCount = local_98.TotalPrimitiveCount;
  local_118.bFastBuild = local_98.bFastBuild;
  local_118.bAllowUpdate = local_98.bAllowUpdate;
  local_118.bAllowCompaction = local_98.bAllowCompaction;
  local_118.bTemplate = local_98.bTemplate;
  local_118.Type = local_98.Type;
  local_118.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Segments.ArrayNum = local_98.Segments.ArrayNum;
  if (local_98.Segments.ArrayNum == 0) {
    local_118.Segments.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,local_98.Segments.ArrayNum,0,&local_118.Segments.AllocatorInstance,
               local_98.Segments.ArrayNum,&local_118.Segments.ArrayMax);
    ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
              (local_118.Segments.AllocatorInstance.Data,(FRayTracingGeometrySegment *)FVar1.Data,
               iVar2);
  }
  local_118.OfflineData = local_98.OfflineData;
  local_118.SourceGeometry = local_98.SourceGeometry;
  local_118.DebugName.Number = local_98.DebugName.Number;
  local_118.OfflineDataHeader.Reserved[0] = local_98.OfflineDataHeader.Reserved[0];
  local_118.OfflineDataHeader.Reserved[1] = local_98.OfflineDataHeader.Reserved[1];
  local_118.OfflineDataHeader.Reserved[2] = local_98.OfflineDataHeader.Reserved[2];
  local_118.OfflineDataHeader.Reserved[3] = local_98.OfflineDataHeader.Reserved[3];
  local_118.OwnerName = local_98.OwnerName;
  local_118.OfflineDataHeader.Reserved[4] = local_98.OfflineDataHeader.Reserved[4];
  local_118.OfflineDataHeader.Reserved[5] = local_98.OfflineDataHeader.Reserved[5];
  local_118.DebugName.Name = local_98.DebugName.Name;
  FRayTracingGeometry::SetInitializer(this_01,&local_118);
  DestructItems<FRayTracingGeometrySegment,int>
            ((FRayTracingGeometrySegment *)local_98.Segments.AllocatorInstance.Data,
             local_98.Segments.ArrayNum);
  if ((FRayTracingGeometrySegment *)local_98.Segments.AllocatorInstance.Data !=
      (FRayTracingGeometrySegment *)0x0) {
    FMemory::Free(local_98.Segments.AllocatorInstance.Data);
  }
  if (local_98.IndexBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_98.IndexBuffer.Reference);
  }
  return;
}

// operator() @ 14871b6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FStaticMeshLODResources::InitResources'::__l2::<lambda_3>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  FRHICommandListImmediate *pFVar2;
  TStringBuilderBase<wchar_t> *pTVar3;
  TStringBuilderBase<wchar_t> *pTVar4;
  void *pvVar5;
  undefined1 auStack_488 [32];
  FRHICommandListImmediate *local_468;
  TStringBuilderBase<wchar_t> *local_460;
  FName local_458 [2];
  TStringBuilderBase<wchar_t> local_448;
  wchar_t local_428 [512];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_488;
  local_448.Base = local_428;
  local_460 = &local_448;
  local_448.CurPos = local_428;
  local_448.bIsDynamic = false;
  local_448.bIsExternal = false;
  local_448.End = (wchar_t *)local_28;
  local_458[0] = *(FName *)((longlong)this + 8);
  lVar1 = *(longlong *)(*(longlong *)this + 0x248);
  local_468 = param_1;
  if (lVar1 != 0) {
    ::FName::ToString(local_458,&local_448);
    pTVar3 = local_460;
    if (local_460->End < local_460->CurPos + 3) {
      TStringBuilderBase<wchar_t>::Extend(local_460,3);
    }
    pvVar5 = FGenericPlatformString::Memcpy(pTVar3->CurPos,L"_IB",6);
    pTVar3->CurPos = (wchar_t *)((longlong)pvVar5 + 6);
    pTVar3 = local_460;
    pFVar2 = local_468;
    if (local_460->End < local_460->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(local_460,1);
    }
    *pTVar3->CurPos = L'\0';
    (**(code **)(GDynamicRHI->_padding_ + 0x210))(GDynamicRHI,pFVar2,lVar1,pTVar3->Base);
  }
  lVar1 = *(longlong *)(*(longlong *)this + 0x1a8);
  if (lVar1 != 0) {
    local_460->CurPos = local_460->Base;
    ::FName::ToString(local_458,local_460);
    pTVar3 = local_460;
    if (local_460->End < local_460->CurPos + 3) {
      TStringBuilderBase<wchar_t>::Extend(local_460,3);
    }
    pvVar5 = FGenericPlatformString::Memcpy(pTVar3->CurPos,L"_VB",6);
    pTVar4 = local_460;
    pFVar2 = local_468;
    pTVar3->CurPos = (wchar_t *)((longlong)pvVar5 + 6);
    if (local_460->End < local_460->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(local_460,1);
    }
    *pTVar4->CurPos = L'\0';
    (**(code **)(GDynamicRHI->_padding_ + 0x210))(GDynamicRHI,pFVar2,lVar1,pTVar4->Base);
  }
  lVar1 = *(longlong *)(*(longlong *)this + 0x138);
  if (lVar1 != 0) {
    local_460->CurPos = local_460->Base;
    ::FName::ToString(local_458,local_460);
    pTVar3 = local_460;
    if (local_460->End < local_460->CurPos + 3) {
      TStringBuilderBase<wchar_t>::Extend(local_460,3);
    }
    pvVar5 = FGenericPlatformString::Memcpy(pTVar3->CurPos,L"_TC",6);
    pTVar4 = local_460;
    pFVar2 = local_468;
    pTVar3->CurPos = (wchar_t *)((longlong)pvVar5 + 6);
    if (local_460->End < local_460->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(local_460,1);
    }
    *pTVar4->CurPos = L'\0';
    (**(code **)(GDynamicRHI->_padding_ + 0x210))(GDynamicRHI,pFVar2,lVar1,pTVar4->Base);
  }
  lVar1 = *(longlong *)(*(longlong *)this + 0x110);
  if (lVar1 != 0) {
    local_460->CurPos = local_460->Base;
    ::FName::ToString(local_458,local_460);
    pTVar3 = local_460;
    if (local_460->End < local_460->CurPos + 3) {
      TStringBuilderBase<wchar_t>::Extend(local_460,3);
    }
    pvVar5 = FGenericPlatformString::Memcpy(pTVar3->CurPos,L"_TB",6);
    pTVar4 = local_460;
    pFVar2 = local_468;
    pTVar3->CurPos = (wchar_t *)((longlong)pvVar5 + 6);
    if (local_460->End < local_460->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(local_460,1);
    }
    *pTVar4->CurPos = L'\0';
    (**(code **)(GDynamicRHI->_padding_ + 0x210))(GDynamicRHI,pFVar2,lVar1,pTVar4->Base);
  }
  lVar1 = *(longlong *)(*(longlong *)this + 0x1f8);
  if (lVar1 != 0) {
    local_460->CurPos = local_460->Base;
    ::FName::ToString(local_458,local_460);
    pTVar3 = local_460;
    if (local_460->End < local_460->CurPos + 3) {
      TStringBuilderBase<wchar_t>::Extend(local_460,3);
    }
    pvVar5 = FGenericPlatformString::Memcpy(pTVar3->CurPos,L"_CB",6);
    pTVar4 = local_460;
    pFVar2 = local_468;
    pTVar3->CurPos = (wchar_t *)((longlong)pvVar5 + 6);
    if (local_460->End < local_460->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(local_460,1);
    }
    *pTVar4->CurPos = L'\0';
    (**(code **)(GDynamicRHI->_padding_ + 0x210))(GDynamicRHI,pFVar2,lVar1,pTVar4->Base);
  }
  lVar1 = *(longlong *)(*(longlong *)this + 0x298);
  if (lVar1 != 0) {
    local_460->CurPos = local_460->Base;
    ::FName::ToString(local_458,local_460);
    pTVar3 = local_460;
    if (local_460->End < local_460->CurPos + 0xd) {
      TStringBuilderBase<wchar_t>::Extend(local_460,0xd);
    }
    pvVar5 = FGenericPlatformString::Memcpy(pTVar3->CurPos,L"_IB_DepthOnly",0x1a);
    pTVar4 = local_460;
    pFVar2 = local_468;
    pTVar3->CurPos = (wchar_t *)((longlong)pvVar5 + 0x1a);
    if (local_460->End < local_460->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(local_460,1);
    }
    *pTVar4->CurPos = L'\0';
    (**(code **)(GDynamicRHI->_padding_ + 0x210))(GDynamicRHI,pFVar2,lVar1,pTVar4->Base);
  }
  if (*(longlong *)(*(longlong *)this + 0x2c8) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x2c8) + 0xc0);
    if (lVar1 != 0) {
      local_460->CurPos = local_460->Base;
      ::FName::ToString(local_458,local_460);
      pTVar3 = local_460;
      if (local_460->End < local_460->CurPos + 0xd) {
        TStringBuilderBase<wchar_t>::Extend(local_460,0xd);
      }
      pvVar5 = FGenericPlatformString::Memcpy(pTVar3->CurPos,L"_IB_WireFrame",0x1a);
      pTVar4 = local_460;
      pFVar2 = local_468;
      pTVar3->CurPos = (wchar_t *)((longlong)pvVar5 + 0x1a);
      if (local_460->End < local_460->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(local_460,1);
      }
      *pTVar4->CurPos = L'\0';
      (**(code **)(GDynamicRHI->_padding_ + 0x210))(GDynamicRHI,pFVar2,lVar1,pTVar4->Base);
    }
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x2c8) + 0x20);
    if (lVar1 != 0) {
      local_460->CurPos = local_460->Base;
      ::FName::ToString(local_458,local_460);
      pTVar3 = local_460;
      if (local_460->End < local_460->CurPos + 0xc) {
        TStringBuilderBase<wchar_t>::Extend(local_460,0xc);
      }
      pvVar5 = FGenericPlatformString::Memcpy(pTVar3->CurPos,L"_IB_Reversed",0x18);
      pTVar4 = local_460;
      pFVar2 = local_468;
      pTVar3->CurPos = (wchar_t *)((longlong)pvVar5 + 0x18);
      if (local_460->End < local_460->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(local_460,1);
      }
      *pTVar4->CurPos = L'\0';
      (**(code **)(GDynamicRHI->_padding_ + 0x210))(GDynamicRHI,pFVar2,lVar1,pTVar4->Base);
    }
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x2c8) + 0x70);
    if (lVar1 != 0) {
      local_460->CurPos = local_460->Base;
      ::FName::ToString(local_458,local_460);
      pTVar3 = local_460;
      if (local_460->End < local_460->CurPos + 0x16) {
        TStringBuilderBase<wchar_t>::Extend(local_460,0x16);
      }
      pvVar5 = FGenericPlatformString::Memcpy(pTVar3->CurPos,L"_IB_DepthOnly_Reversed",0x2c);
      pTVar4 = local_460;
      pFVar2 = local_468;
      pTVar3->CurPos = (wchar_t *)((longlong)pvVar5 + 0x2c);
      if (local_460->End < local_460->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(local_460,1);
      }
      *pTVar4->CurPos = L'\0';
      (**(code **)(GDynamicRHI->_padding_ + 0x210))(GDynamicRHI,pFVar2,lVar1,pTVar4->Base);
    }
  }
  lVar1 = *(longlong *)(*(longlong *)this + 0x338);
  if (lVar1 != 0) {
    local_460->CurPos = local_460->Base;
    ::FName::ToString(local_458,local_460);
    pTVar3 = local_460;
    if (local_460->End < local_460->CurPos + 0x1a) {
      TStringBuilderBase<wchar_t>::Extend(local_460,0x1a);
    }
    pvVar5 = FGenericPlatformString::Memcpy(pTVar3->CurPos,L"_AreaWeightSectionSamplers",0x34);
    pTVar4 = local_460;
    pFVar2 = local_468;
    pTVar3->CurPos = (wchar_t *)((longlong)pvVar5 + 0x34);
    if (local_460->End < local_460->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(local_460,1);
    }
    *pTVar4->CurPos = L'\0';
    (**(code **)(GDynamicRHI->_padding_ + 0x210))(GDynamicRHI,pFVar2,lVar1,pTVar4->Base);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_448);
  return;
}

// AccumIndexBufferSize @ 14871d8a0

void __cdecl
FStaticMeshLODResources::AccumIndexBufferSize(FRawStaticIndexBuffer *param_1,uint *param_2)

{
  *param_2 = *param_2 + (int)(param_1->IndexStorage)._padding_;
  return;
}

// AccumRayTracingGeometrySize @ 14871d8b0

void __cdecl
FStaticMeshLODResources::AccumRayTracingGeometrySize(FRayTracingGeometry *param_1,uint *param_2)

{
  *param_2 = *param_2 + (int)(param_1->RawData)._padding_;
  return;
}

// AccumVertexBuffersSize @ 14871d8c0

void __cdecl
FStaticMeshLODResources::AccumVertexBuffersSize(FStaticMeshVertexBuffers *param_1,uint *param_2)

{
  uint uVar1;
  
  *param_2 = *param_2 +
             (param_1->PositionVertexBuffer).NumVertices * (param_1->PositionVertexBuffer).Stride;
  uVar1 = *param_2 +
          ((param_1->StaticMeshVertexBuffer).NumTexCoords *
           (param_1->StaticMeshVertexBuffer).TexcoordStride +
          (param_1->StaticMeshVertexBuffer).TangentsStride) *
          (param_1->StaticMeshVertexBuffer).NumVertices;
  *param_2 = uVar1;
  *param_2 = (param_1->ColorVertexBuffer).NumVertices * (param_1->ColorVertexBuffer).Stride + uVar1;
  return;
}

// ClearAvailabilityInfo @ 14872a160

void __thiscall FStaticMeshLODResources::ClearAvailabilityInfo(FStaticMeshLODResources *this)

{
  undefined1 *puVar1;
  FAdditionalStaticMeshIndexBuffers *this_00;
  
  this->bHasDepthOnlyIndices = 0;
  this->bHasWireframeIndices = 0;
  this->bHasColorVertexData = 0;
  this->bHasReversedDepthOnlyIndices = 0;
  this->bHasReversedIndices = 0;
  this->DepthOnlyNumTriangles = 0;
  FStaticMeshVertexBuffer::ClearMetaData(&(this->VertexBuffers).StaticMeshVertexBuffer);
  FPositionVertexBuffer::ClearMetaData(&(this->VertexBuffers).PositionVertexBuffer);
  FColorVertexBuffer::ClearMetaData(&(this->VertexBuffers).ColorVertexBuffer);
  FRawStaticIndexBuffer::ClearMetaData(&this->IndexBuffer);
  FRawStaticIndexBuffer::ClearMetaData(&this->IndexBuffer);
  FRawStaticIndexBuffer::ClearMetaData(&this->DepthOnlyIndexBuffer);
  if (this->AdditionalIndexBuffers != (FAdditionalStaticMeshIndexBuffers *)0x0) {
    FRawStaticIndexBuffer::ClearMetaData(&this->AdditionalIndexBuffers->ReversedIndexBuffer);
    FRawStaticIndexBuffer::ClearMetaData
              (&this->AdditionalIndexBuffers->ReversedDepthOnlyIndexBuffer);
    FRawStaticIndexBuffer::ClearMetaData(&this->AdditionalIndexBuffers->WireframeIndexBuffer);
  }
  this_00 = this->AdditionalIndexBuffers;
  if (this_00 != (FAdditionalStaticMeshIndexBuffers *)0x0) {
    FRawStaticIndexBuffer::~FRawStaticIndexBuffer(&this_00->WireframeIndexBuffer);
    FRawStaticIndexBuffer::~FRawStaticIndexBuffer(&this_00->ReversedDepthOnlyIndexBuffer);
    FRawStaticIndexBuffer::~FRawStaticIndexBuffer(&this_00->ReversedIndexBuffer);
    ::operator_delete(this_00,0xf0);
  }
  this->AdditionalIndexBuffers = (FAdditionalStaticMeshIndexBuffers *)0x0;
  return;
}

// DecrementMemoryStats @ 14872f850

void __thiscall FStaticMeshLODResources::DecrementMemoryStats(FStaticMeshLODResources *this)

{
  UpdateVertexMemoryStats<0>(this);
  UpdateIndexMemoryStats<0>(this);
  return;
}

// DiscardCPUData @ 148730250

void __thiscall FStaticMeshLODResources::DiscardCPUData(FStaticMeshLODResources *this)

{
  FRayTracingGeometry *pFVar1;
  
  FStaticMeshVertexBuffer::CleanUp(&(this->VertexBuffers).StaticMeshVertexBuffer);
  FPositionVertexBuffer::CleanUp(&(this->VertexBuffers).PositionVertexBuffer);
  FColorVertexBuffer::CleanUp(&(this->VertexBuffers).ColorVertexBuffer);
  FRawStaticIndexBuffer::Discard(&this->IndexBuffer);
  FRawStaticIndexBuffer::Discard(&this->DepthOnlyIndexBuffer);
  if (this->AdditionalIndexBuffers != (FAdditionalStaticMeshIndexBuffers *)0x0) {
    FRawStaticIndexBuffer::Discard(&this->AdditionalIndexBuffers->ReversedIndexBuffer);
    FRawStaticIndexBuffer::Discard(&this->AdditionalIndexBuffers->ReversedDepthOnlyIndexBuffer);
    FRawStaticIndexBuffer::Discard(&this->AdditionalIndexBuffers->WireframeIndexBuffer);
  }
  pFVar1 = this->RayTracingGeometry;
  if (pFVar1 != (FRayTracingGeometry *)0x0) {
    (**(code **)((pFVar1->RawData)._padding_ + 0x18))(&pFVar1->RawData);
  }
  return;
}

// GenerateClassStripFlags @ 1487352c0

uchar __cdecl
FStaticMeshLODResources::GenerateClassStripFlags(FArchive *param_1,UStaticMesh *param_2,int param_3)

{
  return '\0';
}

// GetCPUAccessMemoryOverhead @ 148739f90

ulong64 __thiscall
FStaticMeshLODResources::GetCPUAccessMemoryOverhead(FStaticMeshLODResources *this)

{
  FAdditionalStaticMeshIndexBuffers *pFVar1;
  FStaticMeshVertexDataInterface *pFVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  cVar3 = (**(code **)((this->IndexBuffer).IndexStorage._padding_ + 0x30))();
  iVar9 = 0;
  if (cVar3 == '\0') {
    iVar8 = 0;
  }
  else {
    iVar8 = (this->IndexBuffer).CachedNumIndices;
    if (iVar8 < 0) {
      iVar8 = (int)(this->IndexBuffer).IndexStorage._padding_;
      if ((this->IndexBuffer).b32Bit == false) {
        iVar8 = iVar8 / 2;
      }
      else {
        iVar8 = (int)((iVar8 >> 0x1f & 3U) + iVar8) >> 2;
      }
    }
  }
  cVar3 = (**(code **)((this->DepthOnlyIndexBuffer).IndexStorage._padding_ + 0x30))();
  if (cVar3 == '\0') {
    iVar5 = 0;
  }
  else {
    iVar5 = (this->DepthOnlyIndexBuffer).CachedNumIndices;
    if (iVar5 < 0) {
      iVar5 = (int)(this->DepthOnlyIndexBuffer).IndexStorage._padding_;
      if ((this->DepthOnlyIndexBuffer).b32Bit == false) {
        iVar5 = iVar5 / 2;
      }
      else {
        iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2;
      }
    }
  }
  pFVar1 = this->AdditionalIndexBuffers;
  iVar8 = iVar8 + iVar5;
  if (pFVar1 != (FAdditionalStaticMeshIndexBuffers *)0x0) {
    cVar3 = (**(code **)((pFVar1->ReversedDepthOnlyIndexBuffer).IndexStorage._padding_ + 0x30))
                      (&(pFVar1->ReversedDepthOnlyIndexBuffer).IndexStorage);
    if (cVar3 == '\0') {
      iVar5 = 0;
    }
    else {
      pFVar1 = this->AdditionalIndexBuffers;
      iVar5 = (pFVar1->ReversedDepthOnlyIndexBuffer).CachedNumIndices;
      if (iVar5 < 0) {
        iVar5 = (int)(pFVar1->ReversedDepthOnlyIndexBuffer).IndexStorage._padding_;
        if ((pFVar1->ReversedDepthOnlyIndexBuffer).b32Bit == false) {
          iVar5 = iVar5 / 2;
        }
        else {
          iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2;
        }
      }
    }
    cVar3 = (**(code **)((this->AdditionalIndexBuffers->ReversedIndexBuffer).IndexStorage._padding_
                        + 0x30))();
    if (cVar3 == '\0') {
      iVar6 = 0;
    }
    else {
      pFVar1 = this->AdditionalIndexBuffers;
      iVar6 = (pFVar1->ReversedIndexBuffer).CachedNumIndices;
      if (iVar6 < 0) {
        iVar6 = (int)(pFVar1->ReversedIndexBuffer).IndexStorage._padding_;
        if ((pFVar1->ReversedIndexBuffer).b32Bit == false) {
          iVar6 = iVar6 / 2;
        }
        else {
          iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
        }
      }
    }
    cVar3 = (**(code **)((this->AdditionalIndexBuffers->WireframeIndexBuffer).IndexStorage._padding_
                        + 0x30))();
    if (cVar3 == '\0') {
      iVar7 = 0;
    }
    else {
      pFVar1 = this->AdditionalIndexBuffers;
      iVar7 = (pFVar1->WireframeIndexBuffer).CachedNumIndices;
      if (iVar7 < 0) {
        iVar7 = (int)(pFVar1->WireframeIndexBuffer).IndexStorage._padding_;
        if ((pFVar1->WireframeIndexBuffer).b32Bit == false) {
          iVar7 = iVar7 / 2;
        }
        else {
          iVar7 = (int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2;
        }
      }
    }
    iVar8 = iVar8 + iVar5 + iVar6 + iVar7;
  }
  pFVar2 = (this->VertexBuffers).StaticMeshVertexBuffer.TangentsData;
  iVar5 = iVar9;
  if ((((pFVar2 != (FStaticMeshVertexDataInterface *)0x0) &&
       ((this->VertexBuffers).StaticMeshVertexBuffer.TexcoordData !=
        (FStaticMeshVertexDataInterface *)0x0)) &&
      (cVar3 = (**(code **)((longlong)*pFVar2 + 0x58))(), cVar3 != '\0')) &&
     (cVar3 = (**(code **)((longlong)*(this->VertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                          0x58))(), cVar3 != '\0')) {
    iVar5 = ((this->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
             (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordStride +
            (this->VertexBuffers).StaticMeshVertexBuffer.TangentsStride) *
            (this->VertexBuffers).StaticMeshVertexBuffer.NumVertices;
  }
  bVar4 = FPositionVertexBuffer::GetAllowCPUAccess(&(this->VertexBuffers).PositionVertexBuffer);
  iVar6 = iVar9;
  if (bVar4) {
    iVar6 = (this->VertexBuffers).PositionVertexBuffer.NumVertices *
            (this->VertexBuffers).PositionVertexBuffer.Stride;
  }
  bVar4 = FColorVertexBuffer::GetAllowCPUAccess(&(this->VertexBuffers).ColorVertexBuffer);
  if (bVar4) {
    iVar9 = (this->VertexBuffers).ColorVertexBuffer.NumVertices *
            (this->VertexBuffers).ColorVertexBuffer.Stride;
  }
  iVar7 = 2;
  if ((this->IndexBuffer).b32Bit != false) {
    iVar7 = 4;
  }
  return (ulonglong)(uint)(iVar7 * iVar8 + iVar9 + iVar6 + iVar5);
}

// GetNumOptionalLODsAllowed @ 14873cfa0

int __cdecl
FStaticMeshLODResources::GetNumOptionalLODsAllowed(ITargetPlatform *param_1,UStaticMesh *param_2)

{
  return 0;
}

// GetNumTexCoords @ 14873d050

int __thiscall FStaticMeshLODResources::GetNumTexCoords(FStaticMeshLODResources *this)

{
  return (this->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
}

// GetNumTriangles @ 14873d0f0

int __thiscall FStaticMeshLODResources::GetNumTriangles(FStaticMeshLODResources *this)

{
  FStaticMeshSectionArray *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FStaticMeshSectionArray *pFVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar5 = 0;
  uVar7 = 0;
  if (0 < *(int *)&(this->Sections).field_0x28) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < *(int *)&(this->Sections).field_0x28) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pFVar1 = *(FStaticMeshSectionArray **)&(this->Sections).field_0x20;
      pFVar6 = &this->Sections;
      if (pFVar1 != (FStaticMeshSectionArray *)0x0) {
        pFVar6 = pFVar1;
      }
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + *(int *)(&pFVar6->field_0x8 + lVar8);
      lVar8 = lVar8 + 0x1c;
    } while ((int)uVar7 < *(int *)&(this->Sections).field_0x28);
  }
  return iVar5;
}

// GetNumVertices @ 14873d240

int __thiscall FStaticMeshLODResources::GetNumVertices(FStaticMeshLODResources *this)

{
  return (this->VertexBuffers).StaticMeshVertexBuffer.NumVertices;
}

// GetPlatformMinLODIdx @ 14873e1c0

int __cdecl
FStaticMeshLODResources::GetPlatformMinLODIdx(ITargetPlatform *param_1,UStaticMesh *param_2)

{
  return 0;
}

// GetResourceSizeEx @ 14873ef00

void __thiscall
FStaticMeshLODResources::GetResourceSizeEx(FStaticMeshLODResources *this,FResourceSizeEx *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  FAdditionalStaticMeshIndexBuffers *pFVar6;
  ulong64 uVar7;
  int iVar8;
  int iVar9;
  FName local_res8;
  
  uVar2 = (this->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
  uVar3 = (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordStride;
  uVar4 = (this->VertexBuffers).StaticMeshVertexBuffer.TangentsStride;
  uVar5 = (this->VertexBuffers).StaticMeshVertexBuffer.NumVertices;
  ::FName::FName(&local_res8,L"TexcoordBuffer and TangentBuffer");
  FResourceSizeEx::AddUnknownMemoryBytes
            (param_1,&local_res8,(ulonglong)((uVar2 * uVar3 + uVar4) * uVar5));
  uVar2 = (this->VertexBuffers).PositionVertexBuffer.NumVertices;
  uVar3 = (this->VertexBuffers).PositionVertexBuffer.Stride;
  ::FName::FName(&local_res8,L"PositionVertexBuffer");
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,&local_res8,(ulonglong)(uVar2 * uVar3));
  uVar2 = (this->VertexBuffers).ColorVertexBuffer.NumVertices;
  uVar3 = (this->VertexBuffers).ColorVertexBuffer.Stride;
  ::FName::FName(&local_res8,L"ColorVertexBuffer");
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,&local_res8,(ulonglong)(uVar2 * uVar3));
  bVar1 = (this->IndexBuffer).b32Bit;
  iVar8 = (this->IndexBuffer).CachedNumIndices;
  iVar9 = 2;
  if (bVar1 != false) {
    iVar9 = 4;
  }
  if (iVar8 < 0) {
    iVar8 = (int)(this->IndexBuffer).IndexStorage._padding_;
    if (bVar1 == false) {
      iVar8 = iVar8 / 2;
    }
    else {
      iVar8 = (int)((iVar8 >> 0x1f & 3U) + iVar8) >> 2;
    }
  }
  ::FName::FName(&local_res8,L"IndexBuffer");
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,&local_res8,(longlong)(iVar8 * iVar9));
  iVar8 = (this->DepthOnlyIndexBuffer).CachedNumIndices;
  if (iVar8 < 0) {
    iVar8 = (int)(this->DepthOnlyIndexBuffer).IndexStorage._padding_;
    if ((this->DepthOnlyIndexBuffer).b32Bit == false) {
      iVar8 = iVar8 / 2;
    }
    else {
      iVar8 = (int)((iVar8 >> 0x1f & 3U) + iVar8) >> 2;
    }
  }
  ::FName::FName(&local_res8,L"DepthOnlyIndexBuffer");
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,&local_res8,(longlong)(iVar8 * iVar9));
  pFVar6 = this->AdditionalIndexBuffers;
  if (pFVar6 != (FAdditionalStaticMeshIndexBuffers *)0x0) {
    iVar8 = (pFVar6->ReversedDepthOnlyIndexBuffer).CachedNumIndices;
    if (iVar8 < 0) {
      iVar8 = (int)(pFVar6->ReversedDepthOnlyIndexBuffer).IndexStorage._padding_;
      if ((pFVar6->ReversedDepthOnlyIndexBuffer).b32Bit == false) {
        iVar8 = iVar8 / 2;
      }
      else {
        iVar8 = (int)((iVar8 >> 0x1f & 3U) + iVar8) >> 2;
      }
    }
    ::FName::FName(&local_res8,L"ReversedDepthOnlyIndexBuffer");
    FResourceSizeEx::AddUnknownMemoryBytes(param_1,&local_res8,(longlong)(iVar8 * iVar9));
    pFVar6 = this->AdditionalIndexBuffers;
    iVar8 = (pFVar6->ReversedIndexBuffer).CachedNumIndices;
    if (iVar8 < 0) {
      iVar8 = (int)(pFVar6->ReversedIndexBuffer).IndexStorage._padding_;
      if ((pFVar6->ReversedIndexBuffer).b32Bit == false) {
        iVar8 = iVar8 / 2;
      }
      else {
        iVar8 = (int)((iVar8 >> 0x1f & 3U) + iVar8) >> 2;
      }
    }
    ::FName::FName(&local_res8,L"ReversedIndexBuffer");
    FResourceSizeEx::AddUnknownMemoryBytes(param_1,&local_res8,(longlong)(iVar8 * iVar9));
    pFVar6 = this->AdditionalIndexBuffers;
    iVar8 = (pFVar6->WireframeIndexBuffer).CachedNumIndices;
    if (iVar8 < 0) {
      iVar8 = (int)(pFVar6->WireframeIndexBuffer).IndexStorage._padding_;
      if ((pFVar6->WireframeIndexBuffer).b32Bit == false) {
        iVar8 = iVar8 / 2;
      }
      else {
        iVar8 = (int)((iVar8 >> 0x1f & 3U) + iVar8) >> 2;
      }
    }
    ::FName::FName(&local_res8,L"WireframeIndexBuffer");
    FResourceSizeEx::AddUnknownMemoryBytes(param_1,&local_res8,(longlong)(iVar8 * iVar9));
  }
  uVar2 = *(uint *)&(this->Sections).field_0x2c;
  if (uVar2 < 2) {
    uVar7 = 0;
  }
  else {
    uVar7 = (longlong)(int)uVar2 * 0x1c;
  }
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,uVar7);
  return;
}

// IncrementMemoryStats @ 1487430f0

void __thiscall FStaticMeshLODResources::IncrementMemoryStats(FStaticMeshLODResources *this)

{
  UpdateIndexMemoryStats<1>(this);
  UpdateVertexMemoryStats<1>(this);
  return;
}

// InitResources @ 1487472c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStaticMeshLODResources::InitResources
          (FStaticMeshLODResources *this,UStaticMesh *param_1,int param_2)

{
  FName FVar1;
  FAdditionalStaticMeshIndexBuffers *pFVar2;
  bool bVar3;
  FString *pFVar4;
  FName *pFVar5;
  FRenderCommandList *pFVar6;
  FCommandList *pFVar7;
  FRenderCommandTag *pFVar8;
  code *pcVar9;
  code **ppcVar10;
  undefined ***pppuVar11;
  int iVar12;
  ulonglong uVar13;
  code *pcVar14;
  undefined1 auStack_208 [32];
  FScriptContainerElement *local_1e8;
  int local_1e0;
  FName local_1d8;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  code *local_198 [2];
  code *local_188 [3];
  code **local_170;
  code *local_168 [2];
  undefined **local_158;
  FStaticMeshLODResources *pFStack_150;
  code *local_148;
  undefined ***local_140;
  code *local_138 [2];
  undefined **local_128;
  FStaticMeshLODResources *pFStack_120;
  undefined8 local_118;
  undefined ***local_110;
  code *local_108 [2];
  code *local_f8 [3];
  code **local_e0;
  byte local_d8;
  undefined1 local_c8 [16];
  undefined **local_b8;
  FStaticMeshLODResources *pFStack_b0;
  undefined8 local_a8;
  undefined ***local_a0;
  byte local_98;
  undefined1 local_88 [16];
  undefined **local_78;
  FStaticMeshLODResources *pFStack_70;
  code *local_68;
  undefined ***local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
  pcVar9 = (code *)0x0;
  local_1d8.ComparisonIndex.Value = 0;
  pcVar14 = pcVar9;
  if (param_1 != (UStaticMesh *)0x0) {
    pFVar4 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)param_1,&local_1b0,(UObject *)0x0);
    if ((pFVar4->Data).ArrayNum == 0) {
      pcVar14 = (code *)0x1;
    }
    else {
      pcVar14 = (code *)0x1;
    }
  }
  ::FString::PrintfImpl(&local_1d0,L"%s [LOD%d]");
  iVar12 = local_1d0.Data.ArrayNum + -1;
  if (local_1d0.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  pFVar5 = ::FName::FName(&local_1d8,iVar12,(wchar_t *)local_1d0.Data.AllocatorInstance.Data,
                          FNAME_Add);
  FVar1 = *pFVar5;
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  if ((pcVar14 != (code *)0x0) &&
     (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  if (this->bBuffersInlined != 0) {
    UpdateIndexMemoryStats<1>(this);
  }
  (this->IndexBuffer)._padding_ = (longlong)FVar1;
  BeginInitResource((FRenderResource *)&this->IndexBuffer,(FRenderCommandPipe *)0x0);
  if (this->bHasWireframeIndices != 0) {
    pFVar2 = this->AdditionalIndexBuffers;
    (pFVar2->WireframeIndexBuffer)._padding_ = (longlong)FVar1;
    BeginInitResource((FRenderResource *)&pFVar2->WireframeIndexBuffer,(FRenderCommandPipe *)0x0);
  }
  (this->VertexBuffers).StaticMeshVertexBuffer._padding_ = (longlong)FVar1;
  BeginInitResource((FRenderResource *)&this->VertexBuffers,(FRenderCommandPipe *)0x0);
  (this->VertexBuffers).PositionVertexBuffer._padding_ = (longlong)FVar1;
  BeginInitResource((FRenderResource *)&(this->VertexBuffers).PositionVertexBuffer,
                    (FRenderCommandPipe *)0x0);
  if (this->bHasColorVertexData != 0) {
    (this->VertexBuffers).ColorVertexBuffer._padding_ = (longlong)FVar1;
    BeginInitResource((FRenderResource *)&(this->VertexBuffers).ColorVertexBuffer,
                      (FRenderCommandPipe *)0x0);
  }
  if (this->bHasReversedIndices != 0) {
    pFVar2 = this->AdditionalIndexBuffers;
    *(FName *)&(pFVar2->ReversedIndexBuffer)._padding_ = FVar1;
    BeginInitResource((FRenderResource *)pFVar2,(FRenderCommandPipe *)0x0);
  }
  if (this->bHasDepthOnlyIndices != 0) {
    (this->DepthOnlyIndexBuffer)._padding_ = (longlong)FVar1;
    BeginInitResource((FRenderResource *)&this->DepthOnlyIndexBuffer,(FRenderCommandPipe *)0x0);
  }
  if (this->bHasReversedDepthOnlyIndices != 0) {
    pFVar2 = this->AdditionalIndexBuffers;
    (pFVar2->ReversedDepthOnlyIndexBuffer)._padding_ = (longlong)FVar1;
    BeginInitResource((FRenderResource *)&pFVar2->ReversedDepthOnlyIndexBuffer,
                      (FRenderCommandPipe *)0x0);
  }
  if (param_1 != (UStaticMesh *)0x0) {
    if (((param_1->bSupportGpuUniformlyDistributedSampling != '\0') &&
        (param_1->bSupportUniformlyDistributedSampling != '\0')) &&
       (0 < (int)(this->AreaWeightedSampler)._padding_)) {
      (this->AreaWeightedSectionSamplersBuffer).Samplers = &this->AreaWeightedSectionSamplers;
      (this->AreaWeightedSectionSamplersBuffer)._padding_ = (longlong)FVar1;
      BeginInitResource((FRenderResource *)&this->AreaWeightedSectionSamplersBuffer,
                        (FRenderCommandPipe *)0x0);
    }
    if ((param_1->bSupportRayTracing == '\0') &&
       (this->RayTracingGeometry != (FRayTracingGeometry *)0x0)) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_1c0,(UObject *)0x0);
      local_1e8 = (FScriptContainerElement *)L"";
      if (local_1c0.Data.ArrayNum != 0) {
        local_1e8 = local_1c0.Data.AllocatorInstance.Data;
      }
      local_1e0 = param_2;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RayTracingGeometry == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                         ,0x61e,
                         L"Unexpected RayTracingGeometry on \'%s\' LOD:%d (ray tracing support is disabled on this UStaticMesh)."
                        );
      if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
  bVar3 = IsRayTracingAllowed();
  if ((bVar3) && (this->RayTracingGeometry != (FRayTracingGeometry *)0x0)) {
    pcVar14 = pcVar9;
    if (param_1 != (UStaticMesh *)0x0) {
      pcVar14 = (code *)param_1->_padding_;
    }
    local_198[0] = (code *)0x0;
    local_170 = FMemory::Malloc(0x20,8);
    *local_170 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`FStaticMeshLODResources::InitResources'::`38'::<lambda_1>,1,1>
                          ::_vftable_;
    local_170[1] = (code *)this;
    local_170[2] = pcVar14;
    *(FName *)(local_170 + 3) = FVar1;
    if (local_170 + 1 != (code **)0x0) {
      local_198[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FStaticMeshLODResources::InitResources'::__l38::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
    }
    pFVar6 = FRenderCommandList::GetInstanceTLS();
    if (pFVar6 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FStaticMeshLODResources::InitResources_::__l38::TSTR_InitStaticMeshRayTracingGeometry1572>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_198);
    }
    else {
      pFVar7 = FRenderCommandList::GetRenderThread(pFVar6);
      local_108[0] = local_198[0];
      local_e0 = local_170;
      local_170 = (code **)0x0;
      local_f8[0] = local_188[0];
      local_f8[1] = local_188[1];
      local_f8[2] = local_188[2];
      local_198[0] = (code *)0x0;
      local_d8 = 2;
      pFVar8 = (FRenderCommandTag *)
               TRenderCommandTag<`FStaticMeshLODResources::InitResources'::__l38::TSTR_InitStaticMeshRayTracingGeometry1572>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar7,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_108,pFVar8);
      uVar13 = (ulonglong)local_d8;
      if ((2 < uVar13) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if (local_108[0] != (code *)0x0) {
          ppcVar10 = local_108 + 2;
          if (local_e0 != (code **)0x0) {
            ppcVar10 = local_e0;
          }
          (**(code **)(*ppcVar10 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13])
                  ((TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    *)local_108);
      }
    }
    if (local_198[0] != (code *)0x0) {
      ppcVar10 = local_198 + 2;
      if (local_170 != (code **)0x0) {
        ppcVar10 = local_170;
      }
      (**(code **)(*ppcVar10 + 0x10))();
    }
  }
  local_110 = (undefined ***)0x0;
  local_128 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FStaticMeshLODResources::InitResources'::`2'::<lambda_2>,1,0>
               ::_vftable_;
  local_138[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FStaticMeshLODResources::InitResources'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
                 ::Call;
  pFStack_120 = this;
  pFVar6 = FRenderCommandList::GetInstanceTLS();
  if (pFVar6 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FStaticMeshLODResources::InitResources_::__l2::TSTR_UpdateMemoryStats1585>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_138);
  }
  else {
    pFVar7 = FRenderCommandList::GetRenderThread(pFVar6);
    local_c8._0_8_ = local_138[0];
    local_a0 = local_110;
    local_b8 = local_128;
    pFStack_b0 = pFStack_120;
    local_a8 = local_118;
    local_138[0] = (code *)0x0;
    local_98 = 2;
    pFVar8 = (FRenderCommandTag *)
             TRenderCommandTag<`FStaticMeshLODResources::InitResources'::__l2::TSTR_UpdateMemoryStats1585>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar7,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                       *)local_c8,pFVar8);
    uVar13 = (ulonglong)local_98;
    if ((2 < uVar13) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_c8._0_8_ != (code *)0x0) {
        pppuVar11 = (undefined ***)(local_c8 + 0x10);
        if (local_a0 != (undefined ***)0x0) {
          pppuVar11 = local_a0;
        }
        (*(code *)(*pppuVar11)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13])(local_c8);
    }
  }
  if (local_138[0] != (code *)0x0) {
    pppuVar11 = &local_128;
    if (local_110 != (undefined ***)0x0) {
      pppuVar11 = local_110;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  if (param_1 != (UStaticMesh *)0x0) {
    pcVar9 = (code *)param_1->_padding_;
  }
  local_140 = (undefined ***)0x0;
  local_168[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FStaticMeshLODResources::InitResources'::__l2::<lambda_3>,void,FRHICommandListImmediate_&>
                 ::Call;
  local_158 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FStaticMeshLODResources::InitResources'::`2'::<lambda_3>,1,0>
               ::_vftable_;
  pFStack_150 = this;
  local_148 = pcVar9;
  pFVar6 = FRenderCommandList::GetInstanceTLS();
  if (pFVar6 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FStaticMeshLODResources::InitResources_::__l2::TSTR_NameRHIResources1596>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_168);
  }
  else {
    pFVar7 = FRenderCommandList::GetRenderThread(pFVar6);
    local_88._0_8_ = local_168[0];
    local_60 = local_140;
    local_78 = local_158;
    pFStack_70 = pFStack_150;
    local_68 = local_148;
    local_168[0] = (code *)0x0;
    local_58 = 2;
    pFVar8 = (FRenderCommandTag *)
             TRenderCommandTag<`FStaticMeshLODResources::InitResources'::__l2::TSTR_NameRHIResources1596>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar7,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                       *)local_88,pFVar8);
    uVar13 = (ulonglong)local_58;
    if ((2 < uVar13) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_88._0_8_ != (code *)0x0) {
        pppuVar11 = (undefined ***)(local_88 + 0x10);
        if (local_60 != (undefined ***)0x0) {
          pppuVar11 = local_60;
        }
        (*(code *)(*pppuVar11)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13])(local_88);
    }
  }
  if (local_168[0] != (code *)0x0) {
    pppuVar11 = &local_158;
    if (local_140 != (undefined ***)0x0) {
      pppuVar11 = local_140;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  return;
}

// IsLODCookedOut @ 14874b5c0

bool __cdecl
FStaticMeshLODResources::IsLODCookedOut(ITargetPlatform *param_1,UStaticMesh *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 == (UStaticMesh *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StaticMesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x1ff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// IsLODInlined @ 14874b600

bool __cdecl
FStaticMeshLODResources::IsLODInlined
          (ITargetPlatform *param_1,UStaticMesh *param_2,int param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 == (UStaticMesh *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StaticMesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                       ,0x219,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// ReleaseResources @ 1487524d0

void __thiscall FStaticMeshLODResources::ReleaseResources(FStaticMeshLODResources *this)

{
  UpdateVertexMemoryStats<0>(this);
  UpdateIndexMemoryStats<0>(this);
  BeginReleaseResource((FRenderResource *)&this->IndexBuffer,(FRenderCommandPipe *)0x0);
  BeginReleaseResource((FRenderResource *)&this->VertexBuffers,(FRenderCommandPipe *)0x0);
  BeginReleaseResource
            ((FRenderResource *)&(this->VertexBuffers).PositionVertexBuffer,
             (FRenderCommandPipe *)0x0);
  BeginReleaseResource
            ((FRenderResource *)&(this->VertexBuffers).ColorVertexBuffer,(FRenderCommandPipe *)0x0);
  BeginReleaseResource((FRenderResource *)&this->DepthOnlyIndexBuffer,(FRenderCommandPipe *)0x0);
  BeginReleaseResource
            ((FRenderResource *)&this->AreaWeightedSectionSamplersBuffer,(FRenderCommandPipe *)0x0);
  if (this->AdditionalIndexBuffers != (FAdditionalStaticMeshIndexBuffers *)0x0) {
    BeginReleaseResource((FRenderResource *)this->AdditionalIndexBuffers,(FRenderCommandPipe *)0x0);
    BeginReleaseResource
              ((FRenderResource *)&this->AdditionalIndexBuffers->WireframeIndexBuffer,
               (FRenderCommandPipe *)0x0);
    BeginReleaseResource
              ((FRenderResource *)&this->AdditionalIndexBuffers->ReversedDepthOnlyIndexBuffer,
               (FRenderCommandPipe *)0x0);
  }
  if (this->RayTracingGeometry != (FRayTracingGeometry *)0x0) {
    BeginReleaseResource((FRenderResource *)this->RayTracingGeometry,(FRenderCommandPipe *)0x0);
  }
  return;
}

// Serialize @ 148756dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStaticMeshLODResources::Serialize
          (FStaticMeshLODResources *this,FArchive *param_1,UObject *param_2,int param_3)

{
  uint *puVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  FName FVar5;
  float *pfVar6;
  ulonglong *puVar7;
  FAdditionalStaticMeshIndexBuffers *this_00;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_void___cdecl_FStaticMeshLODResources::Serialize(FArchive_&,UObject_*,int)_::_2_::FStat_STAT_StaticMeshLODResources_Serialize>
  FVar13;
  UClass *pUVar14;
  FRayTracingGeometry *this_01;
  FRayTracingGeometry *pFVar15;
  FNameEntryId FVar16;
  undefined1 *puVar17;
  UStaticMesh *pUVar18;
  uint local_res8;
  uint uStackX_c;
  FStripDataFlags local_res10 [4];
  uint local_res18 [2];
  uint local_78;
  FColor_u_0 local_74;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  byte local_50;
  FStaticMeshBuffersSize local_48;
  
  pUVar18 = (UStaticMesh *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_StaticMeshLODResources_Serialize ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FStaticMeshLODResources::Serialize(FArchive_&,UObject_*,int)_::_2_::FStat_STAT_StaticMeshLODResources_Serialize>
         )0x0) {
      pFVar12 = ::FName::FName(&local_68,"STAT_StaticMeshLODResources_Serialize");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshLODResources_Serialize,
                 *pFVar12,L"FStaticMeshLODResources::Serialize","STATGROUP_LoadTime",
                 "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_StaticMeshLODResources_Serialize;
  if (StatPtr_STAT_StaticMeshLODResources_Serialize ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FStaticMeshLODResources::Serialize(FArchive_&,UObject_*,int)_::_2_::FStat_STAT_StaticMeshLODResources_Serialize>
       )0x0) {
    pFVar12 = ::FName::FName(&local_60,"STAT_StaticMeshLODResources_Serialize");
    FVar13 = (FThreadSafeStaticStat<_public:_void___cdecl_FStaticMeshLODResources::Serialize(FArchive_&,UObject_*,int)_::_2_::FStat_STAT_StaticMeshLODResources_Serialize>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_StaticMeshLODResources_Serialize,*pFVar12,
                          L"FStaticMeshLODResources::Serialize","STATGROUP_LoadTime",
                          "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  local_50 = 0;
  FVar5 = *(FName *)FVar13;
  FVar16 = FVar5.ComparisonIndex.Value;
  uVar11 = FVar5.Number;
  if ((FVar16.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_74.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_74._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      local_50 = local_50 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_70.ComparisonIndex.Value = FVar16.Value;
        local_70.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_70,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                   ,0x36c);
        local_50 = local_50 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar16.Value;
      uStackX_c = uVar11;
      local_58 = FVar5;
      FThreadStats::AddMessage(FVar5,CycleScopeStart);
      local_50 = local_50 | 4;
    }
  }
  if (param_2 != (UObject *)0x0) {
    pUVar14 = UStaticMesh::StaticClass();
    iVar3 = (int)pUVar14->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar14->_padding_)) {
      pUVar18 = (UStaticMesh *)param_2;
    }
  }
  FStripDataFlags::FStripDataFlags(local_res10,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  TArrayPrivateFriend::
  Serialize<FStaticMeshSection,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            (param_1,(TArray<FStaticMeshSection,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                      *)&this->Sections);
  UE::Math::operator<<(param_1,&this->SourceMeshBounds);
  pfVar2 = &this->MaxDeviation;
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((pUVar18 == (UStaticMesh *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                         ,0x1ff,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  puVar7 = *(ulonglong **)&param_1->field_0x8;
  bVar9 = false;
  puVar1 = (uint *)*puVar7 + 1;
  if ((uint *)puVar7[1] < puVar1) {
    local_78 = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_78,4);
    if (1 < local_78) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar11 = local_78;
    if ((param_1->field_0x28 & 1) != 0) goto LAB_148757031;
LAB_14875703d:
    if ((pUVar18 == (UStaticMesh *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StaticMesh",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                            ,0x219,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar11 = 0;
  }
  else {
    uVar11 = *(uint *)*puVar7;
    *puVar7 = (ulonglong)puVar1;
LAB_148757031:
    bVar9 = uVar11 != 0;
    if (!bVar9) goto LAB_14875703d;
    uVar11 = 1;
  }
  puVar7 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar7 + 1;
  if ((uint *)puVar7[1] < puVar1) {
    local_res18[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res18[0] = uVar11;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    if (1 < local_res18[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res18[0];
    if ((param_1->field_0x28 & 1) == 0) goto LAB_1487570cd;
  }
  else {
    uVar4 = *(uint *)*puVar7;
    *puVar7 = (ulonglong)puVar1;
  }
  uVar11 = (uint)(uVar4 != 0);
LAB_1487570cd:
  puVar17 = &this->field_0x94;
  this->bBuffersInlined = 0;
  *(uint *)puVar17 = *(uint *)puVar17 | uVar11 << 5;
  if (((local_res10[0].GlobalStripFlags & 2) == 0) && (!bVar9)) {
    local_res8 = CONCAT31(local_res8._1_3_,this->RayTracingGeometry != (FRayTracingGeometry *)0x0);
    ::operator<<(param_1,(bool *)&local_res8);
    if ((local_res8._0_1_ != false) && (this->RayTracingGeometry == (FRayTracingGeometry *)0x0)) {
      if (((param_1->field_0x28 & 1) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ar.IsLoading()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMesh.cpp"
                             ,0x3a0,
                             L"bHasRayTracingGeometry unexpectedly changed even though we are not loading data."
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      this_01 = ::operator_new(0x100);
      pFVar15 = (FRayTracingGeometry *)0x0;
      if (this_01 != (FRayTracingGeometry *)0x0) {
        memset(this_01,0,0x100);
        pFVar15 = FRayTracingGeometry::FRayTracingGeometry(this_01);
      }
      this->RayTracingGeometry = pFVar15;
    }
    puVar17 = &this->field_0x94;
    local_48.SerializedBuffersSize = 0;
    local_48.DepthOnlyIBSize = 0;
    local_48.ReversedIBsSize = 0;
    if ((char)uVar11 == '\0') {
      FBulkData::Serialize((FBulkData *)&this->StreamingBulkData,param_1,param_2,false,1,None);
      uVar11 = FBulkData::GetBulkDataFlags((FBulkData *)&this->StreamingBulkData);
      this->bIsOptionalLOD = 0;
      *(uint *)puVar17 = *(uint *)puVar17 | uVar11 >> 5 & 0x40;
      SerializeAvailabilityInfo(this,param_1);
      ::operator<<(param_1,&local_48);
      uVar11 = FStaticMeshBuffersSize::CalcBuffersSize(&local_48);
      this->BuffersSize = uVar11;
      if (((param_1->field_0x28 & 1) != 0) && (ZPULL(*(undefined4 *)puVar17,6,1) != 0)) {
        this->DepthOnlyNumTriangles = 0;
        *(uint *)puVar17 = *(undefined4 *)puVar17 & 0xffffffe0;
        FStaticMeshVertexBuffer::ClearMetaData(&(this->VertexBuffers).StaticMeshVertexBuffer);
        FPositionVertexBuffer::ClearMetaData(&(this->VertexBuffers).PositionVertexBuffer);
        FColorVertexBuffer::ClearMetaData(&(this->VertexBuffers).ColorVertexBuffer);
        FRawStaticIndexBuffer::ClearMetaData(&this->IndexBuffer);
        FRawStaticIndexBuffer::ClearMetaData(&this->IndexBuffer);
        FRawStaticIndexBuffer::ClearMetaData(&this->DepthOnlyIndexBuffer);
        if (this->AdditionalIndexBuffers != (FAdditionalStaticMeshIndexBuffers *)0x0) {
          FRawStaticIndexBuffer::ClearMetaData(&this->AdditionalIndexBuffers->ReversedIndexBuffer);
          FRawStaticIndexBuffer::ClearMetaData
                    (&this->AdditionalIndexBuffers->ReversedDepthOnlyIndexBuffer);
          FRawStaticIndexBuffer::ClearMetaData(&this->AdditionalIndexBuffers->WireframeIndexBuffer);
        }
        this_00 = this->AdditionalIndexBuffers;
        if (this_00 != (FAdditionalStaticMeshIndexBuffers *)0x0) {
          FRawStaticIndexBuffer::~FRawStaticIndexBuffer(&this_00->WireframeIndexBuffer);
          FRawStaticIndexBuffer::~FRawStaticIndexBuffer(&this_00->ReversedDepthOnlyIndexBuffer);
          FRawStaticIndexBuffer::~FRawStaticIndexBuffer(&this_00->ReversedIndexBuffer);
          ::operator_delete(this_00,0xf0);
        }
        this->AdditionalIndexBuffers = (FAdditionalStaticMeshIndexBuffers *)0x0;
      }
    }
    else {
      SerializeBuffers(this,param_1,pUVar18,'\0',&local_48);
      ::operator<<(param_1,&local_48);
      uVar11 = FStaticMeshBuffersSize::CalcBuffersSize(&local_48);
      this->BuffersSize = uVar11;
    }
  }
  if ((local_50 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_50 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_50 & 4) != 0) {
    FThreadStats::AddMessage(local_58,CycleScopeEnd);
  }
  return;
}

// SerializeAvailabilityInfo @ 148759730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FStaticMeshLODResources::SerializeAvailabilityInfo(FStaticMeshLODResources *this,FArchive *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint *puVar3;
  longlong *plVar4;
  TConsoleVariableData<int> *pTVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  int iVar8;
  FAdditionalStaticMeshIndexBuffers *pFVar9;
  uint uVar10;
  FAdditionalStaticMeshIndexBuffers *pFVar11;
  FRawStaticIndexBuffer *this_00;
  FRayTracingGeometry *pFVar12;
  uint uVar13;
  undefined1 auStack_2b8 [32];
  uint local_298 [4];
  FRawStaticIndexBuffer local_288;
  FAdditionalStaticMeshIndexBuffers local_238;
  FRayTracingGeometry local_148;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  pTVar5 = CVarSupportDepthOnlyIndexBuffers.Ref;
  bVar7 = IsInParallelGameThread();
  pFVar11 = (FAdditionalStaticMeshIndexBuffers *)0x0;
  if (bVar7) {
LAB_14875979e:
    pFVar9 = pFVar11;
  }
  else {
    bVar7 = IsInGameThread();
    pFVar9 = (FAdditionalStaticMeshIndexBuffers *)&DAT_00000004;
    if (bVar7) goto LAB_14875979e;
  }
  pTVar6 = CVarSupportReversedIndexBuffers.Ref;
  iVar8 = *(int *)((longlong)&(pFVar9->ReversedIndexBuffer)._padding_ +
                  (longlong)pTVar5->ShadowedValue);
  bVar7 = IsInParallelGameThread();
  if (bVar7) {
LAB_1487597c1:
    pFVar9 = pFVar11;
  }
  else {
    bVar7 = IsInGameThread();
    pFVar9 = (FAdditionalStaticMeshIndexBuffers *)&DAT_00000004;
    if (bVar7) goto LAB_1487597c1;
  }
  iVar2 = *(int *)((longlong)&(pFVar9->ReversedIndexBuffer)._padding_ +
                  (longlong)pTVar6->ShadowedValue);
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->DepthOnlyNumTriangles,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&this->DepthOnlyNumTriangles);
    }
  }
  else {
    this->DepthOnlyNumTriangles = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_298,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_298);
    }
  }
  else {
    local_298[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  uVar13 = 0;
  uVar10 = uVar13;
  if (iVar8 != 0) {
    uVar10 = this->DepthOnlyNumTriangles;
  }
  this->DepthOnlyNumTriangles = uVar10;
  if ((iVar8 == 0) || ((local_298[0] & 2) == 0)) {
    uVar10 = 2;
  }
  else {
    uVar13 = 1;
    uVar10 = 3;
  }
  if ((iVar2 == 0) || ((local_298[0] & 4) == 0)) {
    uVar10 = *(uint *)&this->field_0x94 & 0xfffffffc | uVar13;
    if (iVar2 != 0) goto LAB_1487598b2;
  }
  else {
    uVar10 = *(uint *)&this->field_0x94 & 0xfffffffe | uVar10;
LAB_1487598b2:
    pFVar9 = (FAdditionalStaticMeshIndexBuffers *)&DAT_00000004;
    if ((local_298[0] & 8) != 0) goto LAB_1487598ba;
  }
  pFVar9 = pFVar11;
LAB_1487598ba:
  uVar10 = uVar10 & 0xfffffffb | (uint)pFVar9;
  uVar10 = (local_298[0] >> 1 ^ uVar10) & 8 ^ uVar10;
  *(uint *)&this->field_0x94 = (local_298[0] >> 1 ^ uVar10) & 0x10 ^ uVar10;
  FStaticMeshVertexBuffer::SerializeMetaData(&(this->VertexBuffers).StaticMeshVertexBuffer,param_1);
  FPositionVertexBuffer::SerializeMetaData(&(this->VertexBuffers).PositionVertexBuffer,param_1);
  FColorVertexBuffer::SerializeMetaData(&(this->VertexBuffers).ColorVertexBuffer,param_1);
  FRawStaticIndexBuffer::SerializeMetaData(&this->IndexBuffer,param_1);
  FRawStaticIndexBuffer::FRawStaticIndexBuffer(&local_238.ReversedIndexBuffer,false);
  FRawStaticIndexBuffer::FRawStaticIndexBuffer(&local_238.ReversedDepthOnlyIndexBuffer,false);
  FRawStaticIndexBuffer::FRawStaticIndexBuffer(&local_238.WireframeIndexBuffer,false);
  pFVar9 = &local_238;
  if ((((iVar8 != 0) || (iVar2 != 0)) &&
      (this->bHasDepthOnlyIndices != 0 ||
       (this->bHasReversedIndices != 0 || this->bHasWireframeIndices != 0))) &&
     (pFVar9 = this->AdditionalIndexBuffers,
     this->AdditionalIndexBuffers == (FAdditionalStaticMeshIndexBuffers *)0x0)) {
    pFVar9 = ::operator_new(0xf0);
    if (pFVar9 != (FAdditionalStaticMeshIndexBuffers *)0x0) {
      memset(pFVar9,0,0xf0);
      FRawStaticIndexBuffer::FRawStaticIndexBuffer(&pFVar9->ReversedIndexBuffer,false);
      FRawStaticIndexBuffer::FRawStaticIndexBuffer(&pFVar9->ReversedDepthOnlyIndexBuffer,false);
      FRawStaticIndexBuffer::FRawStaticIndexBuffer(&pFVar9->WireframeIndexBuffer,false);
      pFVar11 = pFVar9;
    }
    this->AdditionalIndexBuffers = pFVar11;
    pFVar9 = pFVar11;
  }
  FRawStaticIndexBuffer::SerializeMetaData(&pFVar9->ReversedIndexBuffer,param_1);
  if (this->bHasReversedIndices == 0) {
    FRawStaticIndexBuffer::Discard(&pFVar9->ReversedIndexBuffer);
    FRawStaticIndexBuffer::ClearMetaData(&pFVar9->ReversedIndexBuffer);
  }
  FRawStaticIndexBuffer::SerializeMetaData(&this->DepthOnlyIndexBuffer,param_1);
  if (this->bHasDepthOnlyIndices == 0) {
    FRawStaticIndexBuffer::Discard(&this->DepthOnlyIndexBuffer);
    FRawStaticIndexBuffer::ClearMetaData(&this->DepthOnlyIndexBuffer);
  }
  FRawStaticIndexBuffer::SerializeMetaData(&pFVar9->ReversedDepthOnlyIndexBuffer,param_1);
  if (this->bHasReversedDepthOnlyIndices == 0) {
    FRawStaticIndexBuffer::Discard(&pFVar9->ReversedDepthOnlyIndexBuffer);
    FRawStaticIndexBuffer::ClearMetaData(&pFVar9->ReversedDepthOnlyIndexBuffer);
  }
  this_00 = &pFVar9->WireframeIndexBuffer;
  FRawStaticIndexBuffer::SerializeMetaData(this_00,param_1);
  if (this->bHasWireframeIndices == 0) {
    FRawStaticIndexBuffer::Discard(this_00);
    FRawStaticIndexBuffer::ClearMetaData(this_00);
  }
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar8 = FArchiveState::CustomVer
                        ((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID), iVar8 < 3)
     ) {
    FRawStaticIndexBuffer::FRawStaticIndexBuffer(&local_288,false);
    FRawStaticIndexBuffer::SerializeMetaData(&local_288,param_1);
    FRawStaticIndexBuffer::~FRawStaticIndexBuffer(&local_288);
  }
  FRenderResource::FRenderResource((FRenderResource *)&local_148);
  local_148.RawDataHeader.Reserved[0] = 0xffffffff;
  local_148.RawDataHeader.Reserved[1] = 0xffffffff;
  local_148._padding_ = (longlong)&___7FRayTracingGeometry__6B_;
  local_148.RawDataHeader.Reserved[2] = 0xffffffff;
  local_148.RawDataHeader.Reserved[3] = 0xffffffff;
  local_148.RawData._padding_ = (longlong)&___7__TResourceArray_E_0A___6B_;
  local_148.RawDataHeader.Reserved[4] = 0xffffffff;
  local_148.RawDataHeader.Reserved[5] = 0xffffffff;
  local_148.RawData._padding_ = 0;
  local_148.RawData._padding_ = 0;
  local_148.RawData.bNeedsCPUAccess = false;
  local_148.DynamicGeometrySharedBufferGenerationID = -1;
  local_148.LastUpdatedFrame = 0;
  local_148.NumUpdatesSinceLastBuild = 0;
  FRayTracingGeometryInitializer::FRayTracingGeometryInitializer(&local_148.Initializer);
  local_148.GroupHandle = -1;
  local_148.LODIndex = -1;
  pFVar12 = &local_148;
  if (this->RayTracingGeometry != (FRayTracingGeometry *)0x0) {
    pFVar12 = this->RayTracingGeometry;
  }
  local_148.RayTracingGeometryRHI.Reference = (FRHIRayTracingGeometry *)0x0;
  local_148.GeometryState = Invalid;
  local_148.RayTracingBuildRequestIndex = -1;
  local_148.RayTracingGeometryHandle = -1;
  ::operator<<(param_1,&pFVar12->RawDataHeader);
  if (((param_1->field_0x28 & 1) != 0) && (bVar7 = RayTracing::ShouldForceRuntimeBLAS(), bVar7)) {
    (pFVar12->RawDataHeader).Reserved[0] = 0xffffffff;
    (pFVar12->RawDataHeader).Reserved[1] = 0xffffffff;
    (pFVar12->RawDataHeader).Reserved[2] = 0xffffffff;
    (pFVar12->RawDataHeader).Reserved[3] = 0xffffffff;
    (pFVar12->RawDataHeader).Reserved[4] = 0xffffffff;
    (pFVar12->RawDataHeader).Reserved[5] = 0xffffffff;
  }
  if (local_148.RayTracingGeometryRHI.Reference != (FRHIRayTracingGeometry *)0x0) {
    FRHIResource::Release((FRHIResource *)local_148.RayTracingGeometryRHI.Reference);
  }
  DestructItems<FRayTracingGeometrySegment,int>
            ((FRayTracingGeometrySegment *)local_148.Initializer.Segments.AllocatorInstance.Data,
             local_148.Initializer.Segments.ArrayNum);
  if ((FRayTracingGeometrySegment *)local_148.Initializer.Segments.AllocatorInstance.Data !=
      (FRayTracingGeometrySegment *)0x0) {
    FMemory::Free(local_148.Initializer.Segments.AllocatorInstance.Data);
  }
  if (local_148.Initializer.IndexBuffer.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_148.Initializer.IndexBuffer.Reference);
  }
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_148.RawData._padding_);
  local_148.RawData._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  FRenderResource::~FRenderResource((FRenderResource *)&local_148);
  FRawStaticIndexBuffer::~FRawStaticIndexBuffer(&local_238.WireframeIndexBuffer);
  FRawStaticIndexBuffer::~FRawStaticIndexBuffer(&local_238.ReversedDepthOnlyIndexBuffer);
  FRawStaticIndexBuffer::~FRawStaticIndexBuffer(&local_238.ReversedIndexBuffer);
  return;
}

// SerializeBuffers @ 148759c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FStaticMeshLODResources::SerializeBuffers
          (FStaticMeshLODResources *this,FArchive *param_1,UStaticMesh *param_2,uchar param_3,
          FStaticMeshBuffersSize *param_4)

{
  TArray<FStaticMeshSectionAreaWeightedTriangleSampler,TMemoryImageAllocator<0>_> *this_00;
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FAdditionalStaticMeshIndexBuffers *pFVar9;
  uint uVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  FRayTracingGeometry *pFVar13;
  FAdditionalStaticMeshIndexBuffers *pFVar14;
  bool bVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  undefined1 auStackY_318 [32];
  char local_2d6 [2];
  FStripDataFlags local_2d4 [2];
  uint local_2d0;
  uint local_2cc;
  FName local_2c8;
  FString local_2c0;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  FRawStaticIndexBuffer local_298;
  FAdditionalStaticMeshIndexBuffers local_248;
  FRayTracingGeometry local_158;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_318;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  pTVar2 = CVarSupportDepthOnlyIndexBuffers.Ref;
  pFVar14 = (FAdditionalStaticMeshIndexBuffers *)0x0;
  if (this->bHasDepthOnlyIndices == 0) {
    bVar3 = IsInParallelGameThread();
    if (bVar3) {
LAB_148759cb3:
      pFVar9 = pFVar14;
    }
    else {
      bVar3 = IsInGameThread();
      pFVar9 = (FAdditionalStaticMeshIndexBuffers *)&DAT_00000004;
      if (bVar3) goto LAB_148759cb3;
    }
    local_2d6[0] = '\0';
    if (*(int *)((longlong)pTVar2->ShadowedValue + (longlong)&pFVar9->ReversedIndexBuffer) == 1)
    goto LAB_148759cc1;
  }
  else {
LAB_148759cc1:
    local_2d6[0] = '\x01';
  }
  pTVar2 = CVarSupportReversedIndexBuffers.Ref;
  if (this->bHasReversedIndices == 0 && this->bHasReversedDepthOnlyIndices == 0) {
    bVar3 = IsInParallelGameThread();
    if (bVar3) {
LAB_148759ceb:
      pFVar9 = pFVar14;
    }
    else {
      bVar3 = IsInGameThread();
      pFVar9 = (FAdditionalStaticMeshIndexBuffers *)&DAT_00000004;
      if (bVar3) goto LAB_148759ceb;
    }
    bVar3 = false;
    if (*(int *)((longlong)pTVar2->ShadowedValue + (longlong)&pFVar9->ReversedIndexBuffer) == 1)
    goto LAB_148759cf9;
  }
  else {
LAB_148759cf9:
    bVar3 = true;
  }
  uVar18 = 0;
  if ((param_2 == (UStaticMesh *)0x0) || (param_2->bAllowCPUAccess == '\0')) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
    if (4 < (byte)LogStaticMesh._0_1_) {
      local_2c8 = (FName)param_2->_padding_;
      ::FName::ToString(&local_2c8,&local_2c0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
      if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
      }
    }
  }
  FStripDataFlags::FStripDataFlags(local_2d4,param_1,param_3,&GOldestLoadablePackageFileUEVersion);
  FPositionVertexBuffer::Serialize(&(this->VertexBuffers).PositionVertexBuffer,param_1,bVar15);
  FStaticMeshVertexBuffer::Serialize(&(this->VertexBuffers).StaticMeshVertexBuffer,param_1,bVar15);
  FColorVertexBuffer::Serialize(&(this->VertexBuffers).ColorVertexBuffer,param_1,bVar15);
  param_4->SerializedBuffersSize = 0;
  param_4->DepthOnlyIBSize = 0;
  param_4->ReversedIBsSize = 0;
  uVar10 = (this->VertexBuffers).PositionVertexBuffer.NumVertices *
           (this->VertexBuffers).PositionVertexBuffer.Stride;
  param_4->SerializedBuffersSize = uVar10;
  uVar10 = uVar10 + ((this->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
                     (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordStride +
                    (this->VertexBuffers).StaticMeshVertexBuffer.TangentsStride) *
                    (this->VertexBuffers).StaticMeshVertexBuffer.NumVertices;
  param_4->SerializedBuffersSize = uVar10;
  param_4->SerializedBuffersSize =
       (this->VertexBuffers).ColorVertexBuffer.NumVertices *
       (this->VertexBuffers).ColorVertexBuffer.Stride + uVar10;
  FRawStaticIndexBuffer::Serialize(&this->IndexBuffer,param_1,bVar15);
  param_4->SerializedBuffersSize =
       param_4->SerializedBuffersSize + (int)(this->IndexBuffer).IndexStorage._padding_;
  local_2d0 = local_2d4[0].ClassStripFlags & 4;
  local_2cc = local_2d4[0].ClassStripFlags & 8;
  bVar4 = local_2d4[0].GlobalStripFlags & 1;
  FRawStaticIndexBuffer::FRawStaticIndexBuffer(&local_248.ReversedIndexBuffer,false);
  FRawStaticIndexBuffer::FRawStaticIndexBuffer(&local_248.ReversedDepthOnlyIndexBuffer,false);
  FRawStaticIndexBuffer::FRawStaticIndexBuffer(&local_248.WireframeIndexBuffer,false);
  pFVar9 = &local_248;
  if ((local_2d6[0] != '\0') || (bVar3)) {
    if ((local_2d0 == 0) || ((bVar4 == 0 || (local_2d6[0] != '\0')))) {
      pFVar9 = this->AdditionalIndexBuffers;
      if (this->AdditionalIndexBuffers == (FAdditionalStaticMeshIndexBuffers *)0x0) {
        pFVar9 = ::operator_new(0xf0);
        if (pFVar9 != (FAdditionalStaticMeshIndexBuffers *)0x0) {
          memset(pFVar9,0,0xf0);
          FRawStaticIndexBuffer::FRawStaticIndexBuffer(&pFVar9->ReversedIndexBuffer,false);
          FRawStaticIndexBuffer::FRawStaticIndexBuffer(&pFVar9->ReversedDepthOnlyIndexBuffer,false);
          FRawStaticIndexBuffer::FRawStaticIndexBuffer(&pFVar9->WireframeIndexBuffer,false);
          pFVar14 = pFVar9;
        }
        this->AdditionalIndexBuffers = pFVar14;
        pFVar9 = pFVar14;
      }
      goto LAB_148759eea;
    }
  }
  else {
LAB_148759eea:
    if (local_2d0 == 0) {
      FRawStaticIndexBuffer::Serialize(&pFVar9->ReversedIndexBuffer,param_1,bVar15);
      param_4->ReversedIBsSize =
           param_4->ReversedIBsSize + (int)(pFVar9->ReversedIndexBuffer).IndexStorage._padding_;
      param_4->SerializedBuffersSize =
           param_4->SerializedBuffersSize +
           (int)(pFVar9->ReversedIndexBuffer).IndexStorage._padding_;
      if (!bVar3) {
        FRawStaticIndexBuffer::Discard(&pFVar9->ReversedIndexBuffer);
        FRawStaticIndexBuffer::ClearMetaData(&pFVar9->ReversedIndexBuffer);
      }
    }
  }
  FRawStaticIndexBuffer::Serialize(&this->DepthOnlyIndexBuffer,param_1,bVar15);
  param_4->DepthOnlyIBSize =
       param_4->DepthOnlyIBSize + (int)(this->DepthOnlyIndexBuffer).IndexStorage._padding_;
  param_4->SerializedBuffersSize =
       param_4->SerializedBuffersSize + (int)(this->DepthOnlyIndexBuffer).IndexStorage._padding_;
  if (local_2d6[0] == '\0') {
    FRawStaticIndexBuffer::Discard(&this->DepthOnlyIndexBuffer);
    FRawStaticIndexBuffer::ClearMetaData(&this->DepthOnlyIndexBuffer);
  }
  if (local_2d0 == 0) {
    FRawStaticIndexBuffer::Serialize(&pFVar9->ReversedDepthOnlyIndexBuffer,param_1,bVar15);
    param_4->ReversedIBsSize =
         param_4->ReversedIBsSize +
         (int)(pFVar9->ReversedDepthOnlyIndexBuffer).IndexStorage._padding_;
    param_4->SerializedBuffersSize =
         param_4->SerializedBuffersSize +
         (int)(pFVar9->ReversedDepthOnlyIndexBuffer).IndexStorage._padding_;
    if (!bVar3) {
      FRawStaticIndexBuffer::Discard(&pFVar9->ReversedDepthOnlyIndexBuffer);
      FRawStaticIndexBuffer::ClearMetaData(&pFVar9->ReversedDepthOnlyIndexBuffer);
    }
  }
  if (bVar4 == 0) {
    FRawStaticIndexBuffer::Serialize(&pFVar9->WireframeIndexBuffer,param_1,bVar15);
    param_4->SerializedBuffersSize =
         param_4->SerializedBuffersSize + (int)(pFVar9->WireframeIndexBuffer).IndexStorage._padding_
    ;
  }
  if ((((param_1->field_0x28 & 1) != 0) &&
      (iVar5 = FArchiveState::CustomVer
                         ((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID), iVar5 < 3
      )) && ((local_2d4[0].ClassStripFlags & 1) == 0)) {
    FRawStaticIndexBuffer::FRawStaticIndexBuffer(&local_298,false);
    FRawStaticIndexBuffer::Serialize(&local_298,param_1,bVar15);
    FRawStaticIndexBuffer::~FRawStaticIndexBuffer(&local_298);
  }
  if (local_2cc == 0) {
    FRayTracingGeometry::FRayTracingGeometry(&local_158);
    pFVar13 = &local_158;
    if (this->RayTracingGeometry != (FRayTracingGeometry *)0x0) {
      pFVar13 = this->RayTracingGeometry;
    }
    ::operator<<(param_1,&pFVar13->RawDataHeader);
    TArray<unsigned_char,TMemoryImageAllocator<0>_>::BulkSerialize
              ((TArray<unsigned_char,TMemoryImageAllocator<0>_> *)&(pFVar13->RawData)._padding_,
               param_1,false);
    param_4->SerializedBuffersSize =
         param_4->SerializedBuffersSize + (int)(pFVar13->RawData)._padding_;
    if (((param_1->field_0x28 & 1) != 0) && (bVar3 = RayTracing::ShouldForceRuntimeBLAS(), bVar3)) {
      local_2b0 = 0xffffffffffffffff;
      local_2a8 = 0xffffffffffffffff;
      local_2a0 = 0xffffffffffffffff;
      (pFVar13->RawDataHeader).Reserved[0] = 0xffffffff;
      (pFVar13->RawDataHeader).Reserved[1] = 0xffffffff;
      (pFVar13->RawDataHeader).Reserved[2] = 0xffffffff;
      (pFVar13->RawDataHeader).Reserved[3] = 0xffffffff;
      (pFVar13->RawDataHeader).Reserved[4] = 0xffffffff;
      (pFVar13->RawDataHeader).Reserved[5] = 0xffffffff;
      (**(code **)((pFVar13->RawData)._padding_ + 0x18))();
    }
    if (local_158.RayTracingGeometryRHI.Reference != (FRHIRayTracingGeometry *)0x0) {
      FRHIResource::Release((FRHIResource *)local_158.RayTracingGeometryRHI.Reference);
    }
    DestructItems<FRayTracingGeometrySegment,int>
              ((FRayTracingGeometrySegment *)local_158.Initializer.Segments.AllocatorInstance.Data,
               local_158.Initializer.Segments.ArrayNum);
    if ((FRayTracingGeometrySegment *)local_158.Initializer.Segments.AllocatorInstance.Data !=
        (FRayTracingGeometrySegment *)0x0) {
      FMemory::Free(local_158.Initializer.Segments.AllocatorInstance.Data);
    }
    if (local_158.Initializer.IndexBuffer.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_158.Initializer.IndexBuffer.Reference);
    }
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)&local_158.RawData._padding_);
    local_158.RawData._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
    FRenderResource::~FRenderResource((FRenderResource *)&local_158);
  }
  uVar10 = *(uint *)&(this->Sections).field_0x28;
  this_00 = &this->AreaWeightedSectionSamplers;
  iVar5 = (this->AreaWeightedSectionSamplers).ArrayNum;
  if (iVar5 < (int)uVar10) {
    iVar6 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (0x40,8,uVar10 - iVar5,&this_00->AllocatorInstance,
                       &(this->AreaWeightedSectionSamplers).ArrayNum,
                       &(this->AreaWeightedSectionSamplers).ArrayMax);
    FVar12 = this_00->AllocatorInstance;
    if (((ulonglong)FVar12 & 1) != 0) {
      FVar12 = (ForAnyElementType)
               ((longlong)&(this_00->AllocatorInstance).field_0x0 + ((longlong)FVar12 >> 0x18));
    }
    DefaultConstructItems<FStaticMeshSectionAreaWeightedTriangleSampler,int>
              ((void *)((longlong)iVar6 * 0x40 + (longlong)FVar12),uVar10 - iVar5);
  }
  else {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if ((int)uVar10 < iVar5) {
      uVar16 = iVar5 - uVar10;
      if (((int)(uVar16 | uVar10) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (uVar16 != 0) {
        TArray<FStaticMeshSectionAreaWeightedTriangleSampler,TMemoryImageAllocator<0>_>::
        RemoveAtImpl(this_00,uVar10,uVar16);
        UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (0x40,8,&this_00->AllocatorInstance,(this->AreaWeightedSectionSamplers).ArrayNum,
                   &(this->AreaWeightedSectionSamplers).ArrayMax);
      }
    }
  }
  FVar12 = (this->AreaWeightedSectionSamplers).AllocatorInstance;
  if (((ulonglong)FVar12 & 1) != 0) {
    FVar12 = (ForAnyElementType)
             ((longlong)&(this->AreaWeightedSectionSamplers).AllocatorInstance.field_0x0 +
             ((longlong)FVar12 >> 0x18));
  }
  iVar5 = (this->AreaWeightedSectionSamplers).ArrayNum;
  FVar17 = (ForAnyElementType)((longlong)FVar12 + (longlong)iVar5 * 0x40);
  while( true ) {
    if ((this->AreaWeightedSectionSamplers).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FStaticMeshSectionAreaWeightedTriangleSampler,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_2d6);
    }
    if (FVar12 == FVar17) break;
    (**(code **)(*(longlong *)FVar12 + 0x18))(FVar12);
    FVar12 = (ForAnyElementType)((longlong)FVar12 + 0x40);
  }
  (**(code **)((this->AreaWeightedSampler)._padding_ + 0x18))(&this->AreaWeightedSampler,param_1);
  if ((param_1->field_0x29 & 2) != 0) goto LAB_14875a3ee;
  pFVar14 = this->AdditionalIndexBuffers;
  if ((pFVar14 == (FAdditionalStaticMeshIndexBuffers *)0x0) || (bVar4 != 0)) {
LAB_14875a2bb:
    uVar10 = uVar18;
  }
  else {
    iVar5 = (pFVar9->WireframeIndexBuffer).CachedNumIndices;
    if (iVar5 < 0) {
      iVar5 = (int)(pFVar9->WireframeIndexBuffer).IndexStorage._padding_;
      if ((pFVar9->WireframeIndexBuffer).b32Bit == false) {
        iVar5 = iVar5 / 2;
      }
      else {
        iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2;
      }
    }
    uVar10 = 0x10;
    if (iVar5 == 0) goto LAB_14875a2bb;
  }
  uVar16 = *(uint *)&this->field_0x94;
  iVar5 = (this->DepthOnlyIndexBuffer).CachedNumIndices;
  if (iVar5 < 0) {
    iVar5 = (int)(this->DepthOnlyIndexBuffer).IndexStorage._padding_;
    if ((this->DepthOnlyIndexBuffer).b32Bit == false) {
      iVar5 = iVar5 / 2;
    }
    else {
      iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2;
    }
  }
  uVar11 = (uint)(iVar5 != 0);
  *(uint *)&this->field_0x94 = uVar11 | uVar16 & 0xffffffee | uVar10;
  uVar8 = 0;
  if ((pFVar14 == (FAdditionalStaticMeshIndexBuffers *)0x0) || (local_2d0 != 0)) {
LAB_14875a340:
    uVar7 = uVar8;
  }
  else {
    iVar5 = (pFVar9->ReversedIndexBuffer).CachedNumIndices;
    if (iVar5 < 0) {
      iVar5 = (int)(pFVar9->ReversedIndexBuffer).IndexStorage._padding_;
      if ((pFVar9->ReversedIndexBuffer).b32Bit == false) {
        iVar5 = iVar5 / 2;
      }
      else {
        iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2;
      }
    }
    uVar7 = 2;
    if (iVar5 == 0) goto LAB_14875a340;
  }
  *(uint *)&this->field_0x94 = uVar11 | uVar16 & 0xffffffec | uVar10 | uVar7;
  if ((pFVar14 != (FAdditionalStaticMeshIndexBuffers *)0x0) && (local_2d0 == 0)) {
    iVar5 = (pFVar9->ReversedDepthOnlyIndexBuffer).CachedNumIndices;
    if (iVar5 < 0) {
      iVar5 = (int)(pFVar9->ReversedDepthOnlyIndexBuffer).IndexStorage._padding_;
      if ((pFVar9->ReversedDepthOnlyIndexBuffer).b32Bit == false) {
        iVar5 = iVar5 / 2;
      }
      else {
        iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2;
      }
    }
    if (iVar5 != 0) {
      uVar8 = 4;
    }
  }
  if ((this->VertexBuffers).ColorVertexBuffer.NumVertices != 0) {
    uVar18 = 8;
  }
  *(uint *)&this->field_0x94 = uVar11 | uVar16 & 0xffffffe0 | uVar10 | uVar7 | uVar8 | uVar18;
  iVar5 = (this->DepthOnlyIndexBuffer).CachedNumIndices;
  if (iVar5 < 0) {
    iVar5 = (int)(this->DepthOnlyIndexBuffer).IndexStorage._padding_;
    if ((this->DepthOnlyIndexBuffer).b32Bit == false) {
      iVar5 = iVar5 / 2;
    }
    else {
      iVar5 = (int)((iVar5 >> 0x1f & 3U) + iVar5) >> 2;
    }
  }
  this->DepthOnlyNumTriangles =
       iVar5 / 3 + (iVar5 >> 0x1f) +
       (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f);
LAB_14875a3ee:
  FRawStaticIndexBuffer::~FRawStaticIndexBuffer(&local_248.WireframeIndexBuffer);
  FRawStaticIndexBuffer::~FRawStaticIndexBuffer(&local_248.ReversedDepthOnlyIndexBuffer);
  FRawStaticIndexBuffer::~FRawStaticIndexBuffer(&local_248.ReversedIndexBuffer);
  return;
}

// SetupRayTracingGeometryInitializer @ 14875be30

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FStaticMeshLODResources::SetupRayTracingGeometryInitializer
          (FStaticMeshLODResources *this,FRayTracingGeometryInitializer *param_1,FDebugName *param_2
          ,FName *param_3)

{
  TArray<FRayTracingGeometrySegment,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  FRHIBuffer *pFVar6;
  FRHIBuffer *this_00;
  code *pcVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  int iVar10;
  FStaticMeshSectionArray *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  ForAnyElementType local_68;
  undefined8 local_60;
  FRayTracingGeometrySegment local_58;
  
  (param_1->DebugName).Name = param_2->Name;
  (param_1->DebugName).Number = param_2->Number;
  param_1->OwnerName = *param_3;
  pFVar6 = (FRHIBuffer *)(this->IndexBuffer)._padding_;
  this_00 = (param_1->IndexBuffer).Reference;
  if (this_00 != pFVar6) {
    (param_1->IndexBuffer).Reference = pFVar6;
    if (pFVar6 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar6);
    }
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  local_60._0_4_ = 0;
  param_1->GeometryType = RTGT_Triangles;
  param_1->TotalPrimitiveCount = 0;
  param_1->bFastBuild = false;
  uVar4 = *(uint *)&(this->Sections).field_0x28;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  if (-1 < (int)uVar4) {
    if (0 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar4,&local_68,0,(int *)((longlong)&local_60 + 4));
    }
    pFVar11 = *(FStaticMeshSectionArray **)&(this->Sections).field_0x20;
    iVar5 = *(int *)&(this->Sections).field_0x28;
    if (pFVar11 == (FStaticMeshSectionArray *)0x0) {
      pFVar11 = &this->Sections;
    }
    pFVar12 = (FScriptContainerElement *)&pFVar11->field_0x16;
    iVar10 = (int)local_60;
    while( true ) {
      if (*(int *)&(this->Sections).field_0x28 != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FStaticMeshSection_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
        iVar10 = (int)local_60;
      }
      if (pFVar12 + -0x16 ==
          (FScriptContainerElement *)(&pFVar11->field_0x0 + (longlong)iVar5 * 0x1c)) break;
      pFVar6 = (FRHIBuffer *)(this->VertexBuffers).PositionVertexBuffer._padding_;
      local_58.VertexBuffer.Reference = (FRHIBuffer *)0x0;
      local_58.VertexBufferElementType = VET_Float3;
      local_58.VertexBufferOffset = 0;
      local_58.VertexBufferStride = 0xc;
      local_58.MaxVertices = 0;
      local_58.FirstPrimitive = 0;
      local_58.NumPrimitives = 0;
      local_58.bForceOpaque = false;
      local_58.bAllowDuplicateAnyHitShaderInvocation = true;
      local_58.bEnabled = true;
      if (pFVar6 != (FRHIBuffer *)0x0) {
        local_58.VertexBuffer.Reference = pFVar6;
        FRHIResource::AddRef((FRHIResource *)pFVar6);
        iVar10 = (int)local_60;
      }
      local_58.VertexBufferStride = (this->VertexBuffers).PositionVertexBuffer.Stride;
      local_58.MaxVertices = (this->VertexBuffers).PositionVertexBuffer.NumVertices;
      local_58.bEnabled = *(bool *)pFVar12;
      local_58.bForceOpaque = (bool)pFVar12[2];
      local_58.VertexBufferElementType = VET_Float3;
      local_58.VertexBufferOffset = 0;
      local_58.NumPrimitives = *(uint *)(pFVar12 + -0xe);
      local_58.FirstPrimitive = *(uint *)(pFVar12 + -0x12) / 3;
      if ((local_68.Data <= &local_58) &&
         (&local_58 <
          (FRayTracingGeometrySegment *)(local_68.Data + (longlong)local_60._4_4_ * 0x28))) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = (int)local_60;
      }
      if (iVar10 == local_60._4_4_) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,&local_68,(int *)((longlong)&local_60 + 4));
      }
      local_60 = CONCAT44(local_60._4_4_,iVar10 + 1);
      *(undefined8 *)&local_68.Data[(longlong)iVar10 * 0x28].field_0x0 = 0;
      pFVar3 = local_68.Data + (longlong)iVar10 * 0x28;
      *(FRHIBuffer **)&pFVar3->field_0x0 = local_58.VertexBuffer.Reference;
      if (local_58.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_58.VertexBuffer.Reference);
      }
      *(EVertexElementType *)(pFVar3 + 8) = local_58.VertexBufferElementType;
      *(uint *)(pFVar3 + 0xc) = local_58.VertexBufferOffset;
      *(uint *)(pFVar3 + 0x10) = local_58.VertexBufferStride;
      *(uint *)(pFVar3 + 0x14) = local_58.MaxVertices;
      *(uint *)(pFVar3 + 0x18) = local_58.FirstPrimitive;
      *(uint *)(pFVar3 + 0x1c) = local_58.NumPrimitives;
      pFVar3[0x20] = (FScriptContainerElement)local_58.bForceOpaque;
      pFVar3[0x21] = (FScriptContainerElement)local_58.bAllowDuplicateAnyHitShaderInvocation;
      pFVar3[0x22] = (FScriptContainerElement)local_58.bEnabled;
      param_1->TotalPrimitiveCount = param_1->TotalPrimitiveCount + *(int *)(pFVar12 + -0xe);
      if (local_58.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_58.VertexBuffer.Reference);
      }
      pFVar12 = pFVar12 + 0x1c;
      iVar10 = (int)local_60;
    }
    pTVar1 = &param_1->Segments;
    if (pTVar1 != (TArray<FRayTracingGeometrySegment,TSizedDefaultAllocator<32>_> *)&local_68) {
      DestructItems<FRayTracingGeometrySegment,int>
                ((FRayTracingGeometrySegment *)(pTVar1->AllocatorInstance).Data,
                 (param_1->Segments).ArrayNum);
      FVar8.Data = local_68.Data;
      iVar5 = (int)local_60;
      piVar2 = &(param_1->Segments).ArrayMax;
      (param_1->Segments).ArrayNum = (int)local_60;
      if (((int)local_60 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
        iVar10 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,(int)local_60,*piVar2,&pTVar1->AllocatorInstance,(int)local_60,piVar2);
        ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
                  ((pTVar1->AllocatorInstance).Data,(FRayTracingGeometrySegment *)FVar8.Data,iVar5);
        iVar10 = (int)local_60;
      }
    }
    DestructItems<FRayTracingGeometrySegment,int>
              ((FRayTracingGeometrySegment *)local_68.Data,iVar10);
    if ((FRayTracingGeometrySegment *)local_68.Data != (FRayTracingGeometrySegment *)0x0) {
      FMemory::Free(local_68.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
}

