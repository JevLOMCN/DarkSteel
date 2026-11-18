// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// FSkeletalMeshLODRenderData @ 148620d80

FSkeletalMeshLODRenderData * __thiscall
FSkeletalMeshLODRenderData::FSkeletalMeshLODRenderData
          (FSkeletalMeshLODRenderData *this,bool param_1)

{
  FSkinWeightProfileStack *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  
  (this->MultiSizeIndexContainer).DataTypeSize = '\x02';
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSkeletalMeshLODRenderData__6B_;
  (this->RenderSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderSections).ArrayNum = 0;
  (this->RenderSections).ArrayMax = 0;
  (this->MultiSizeIndexContainer).IndexBuffer = (FRawStaticIndexBuffer16or32Interface *)0x0;
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer
            (&(this->StaticVertexBuffers).StaticMeshVertexBuffer);
  FPositionVertexBuffer::FPositionVertexBuffer(&(this->StaticVertexBuffers).PositionVertexBuffer);
  FColorVertexBuffer::FColorVertexBuffer(&(this->StaticVertexBuffers).ColorVertexBuffer);
  FSkinWeightVertexBuffer::FSkinWeightVertexBuffer(&this->SkinWeightVertexBuffer);
  FSkeletalMeshVertexClothBuffer::FSkeletalMeshVertexClothBuffer(&this->ClothVertexBuffer);
  FMorphTargetVertexInfoBuffers::FMorphTargetVertexInfoBuffers(&this->MorphTargetVertexInfoBuffers);
  *(undefined8 *)&(this->SkinWeightProfilesData).ProfileStackToBuffer = 0;
  *(undefined8 *)&(this->SkinWeightProfilesData).ProfileStackToBuffer.field_0x8 = 0;
  *(undefined8 *)&(this->SkinWeightProfilesData).ProfileStackToBuffer.field_0x20 = 0;
  (this->SkinWeightProfilesData).BaseBuffer = (FSkinWeightVertexBuffer *)0x0;
  (this->SkinWeightProfilesData).DefaultOverrideSkinWeightBuffer = (FSkinWeightVertexBuffer *)0x0;
  *(undefined4 *)&(this->SkinWeightProfilesData).ProfileStackToBuffer.field_0x28 = 0;
  *(undefined4 *)&(this->SkinWeightProfilesData).ProfileStackToBuffer.field_0x2c = 0x80;
  *(undefined4 *)&(this->SkinWeightProfilesData).ProfileStackToBuffer.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkinWeightProfilesData).ProfileStackToBuffer.field_0x34 = 0;
  *(undefined8 *)&(this->SkinWeightProfilesData).ProfileStackToBuffer.field_0x40 = 0;
  *(undefined4 *)&(this->SkinWeightProfilesData).ProfileStackToBuffer.field_0x48 = 0;
  *(undefined8 *)&(this->SkinWeightProfilesData).OverrideData = 0;
  *(undefined8 *)&(this->SkinWeightProfilesData).OverrideData.field_0x8 = 0;
  *(undefined8 *)&(this->SkinWeightProfilesData).OverrideData.field_0x20 = 0;
  *(undefined4 *)&(this->SkinWeightProfilesData).OverrideData.field_0x28 = 0;
  *(undefined4 *)&(this->SkinWeightProfilesData).OverrideData.field_0x2c = 0x80;
  *(undefined4 *)&(this->SkinWeightProfilesData).OverrideData.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkinWeightProfilesData).OverrideData.field_0x34 = 0;
  *(undefined8 *)&(this->SkinWeightProfilesData).OverrideData.field_0x40 = 0;
  *(undefined4 *)&(this->SkinWeightProfilesData).OverrideData.field_0x48 = 0;
  (this->SkinWeightProfilesData).bDefaultOverridden = false;
  (this->SkinWeightProfilesData).bStaticOverridden = false;
  (this->SkinWeightProfilesData).DefaultProfileStack.Layers.Elements[0].ComparisonIndex = 0;
  (this->SkinWeightProfilesData).DefaultProfileStack.Layers.Elements[0].Number = 0;
  pFVar1 = &(this->SkinWeightProfilesData).DefaultProfileStack;
  (pFVar1->Layers).Elements[1].ComparisonIndex = 0;
  (pFVar1->Layers).Elements[1].Number = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->SkinWeightProfilesData).ReadbackData,4000);
  (this->SkinWeightProfilesData).ReadbackData.BufferReadback.Ptr = (FRHIGPUBufferReadback *)0x0;
  (this->SkinWeightProfilesData).ReadbackData.ReadbackData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SkinWeightProfilesData).ReadbackData.ReadbackData.ArrayNum = 0;
  (this->SkinWeightProfilesData).ReadbackData.ReadbackData.ArrayMax = 0;
  (this->SkinWeightProfilesData).ReadbackData.ReadbackFinishedFrameIndex = 0xffffffff;
  *(undefined8 *)&(this->VertexAttributeBuffers).Buffers = 0;
  *(undefined8 *)&(this->VertexAttributeBuffers).Buffers.field_0x8 = 0;
  *(undefined8 *)&(this->VertexAttributeBuffers).Buffers.field_0x20 = 0;
  *(undefined4 *)&(this->VertexAttributeBuffers).Buffers.field_0x28 = 0;
  *(undefined4 *)&(this->VertexAttributeBuffers).Buffers.field_0x2c = 0x80;
  *(undefined4 *)&(this->VertexAttributeBuffers).Buffers.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VertexAttributeBuffers).Buffers.field_0x34 = 0;
  *(undefined8 *)&(this->VertexAttributeBuffers).Buffers.field_0x40 = 0;
  *(undefined4 *)&(this->VertexAttributeBuffers).Buffers.field_0x48 = 0;
  FSkeletalMeshHalfEdgeBuffer::FSkeletalMeshHalfEdgeBuffer(&this->HalfEdgeBuffer);
  (this->ActiveBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBoneIndices).ArrayNum = 0;
  (this->ActiveBoneIndices).ArrayMax = 0;
  (this->RequiredBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequiredBones).ArrayNum = 0;
  (this->RequiredBones).ArrayMax = 0;
  this->BuffersSize = 0;
  FRayTracingGeometry::FRayTracingGeometry(&this->SourceRayTracingGeometry);
  *(undefined8 *)&this->StreamingBulkData = 0;
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
  this->NumReferencingStaticSkeletalMeshObjects = 0;
  this->bStreamedDataInlined = 1;
  this->bIsLODOptional = 0;
  this->bReferencedByStaticSkeletalMeshObjects_RenderThread = false;
  FRayTracingGeometry::FRayTracingGeometry(&this->StaticRayTracingGeometry);
  if (param_1) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  return this;
}

// DecrementMemoryStats @ 148636d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSkeletalMeshLODRenderData::DecrementMemoryStats(FSkeletalMeshLODRenderData *this)

{
  byte bVar1;
  FRawStaticIndexBuffer16or32Interface *pFVar2;
  FName FVar3;
  int iVar4;
  uint uVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_SkeletalMeshIndexMemory> FVar7;
  FThreadStats *pFVar8;
  FThreadStatsPool *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory> FVar10;
  uchar auVar11 [8];
  uchar auVar12 [8];
  uchar auVar13 [8];
  uchar auVar14 [8];
  uchar auVar15 [8];
  FName local_res8;
  FStatMessage local_38;
  
  pFVar2 = (this->MultiSizeIndexContainer).IndexBuffer;
  if (pFVar2 != (FRawStaticIndexBuffer16or32Interface *)0x0) {
    bVar1 = (this->MultiSizeIndexContainer).DataTypeSize;
    iVar4 = (**(code **)(pFVar2->_padding_ + 0x50))();
    iVar4 = iVar4 * (uint)bVar1;
    if (iVar4 != 0) {
      FVar7 = StatPtr_STAT_SkeletalMeshIndexMemory;
      if (StatPtr_STAT_SkeletalMeshIndexMemory ==
          (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshIndexMemory>)0x0) {
        pFVar6 = ::FName::FName(&local_res8,"STAT_SkeletalMeshIndexMemory");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshIndexMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMeshIndexMemory,
                           *pFVar6,L"SkeletalMesh Index Memory","STATGROUP_Memory",
                           "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,MCR_Physical
                          );
      }
      FVar3 = *(FName *)FVar7;
      local_res8 = FVar3;
      if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar8 == (FThreadStats *)0x0) {
          pFVar9 = FThreadStatsPool::Get();
          pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
        }
        local_38.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
        local_res8 = FVar3;
        local_38.StatData.Pad = (uchar  [8])(longlong)iVar4;
        local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar8,&local_38);
        FStatsTrace::Add(&local_res8,-(longlong)iVar4);
        if (pFVar8->ScopeCount == 0) {
          FThreadStats::Flush(pFVar8,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar8,false,false);
        }
      }
    }
  }
  uVar5 = (this->StaticVertexBuffers).PositionVertexBuffer.NumVertices *
          (this->StaticVertexBuffers).PositionVertexBuffer.Stride;
  auVar12[4] = '\0';
  auVar12[5] = '\0';
  auVar12[6] = '\0';
  auVar12[7] = '\0';
  auVar12._0_4_ = uVar5;
  if (uVar5 != 0) {
    FVar10 = StatPtr_STAT_SkeletalMeshVertexMemory;
    if (StatPtr_STAT_SkeletalMeshVertexMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)0x0) {
      pFVar6 = ::FName::FName(&local_res8,"STAT_SkeletalMeshVertexMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMeshVertexMemory,
                          *pFVar6,L"SkeletalMesh Vertex Memory","STATGROUP_Memory",
                          "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar3 = *(FName *)FVar10;
    local_res8 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_38.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar3;
      local_38.StatData.Pad = auVar12;
      local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar12);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  uVar5 = ((this->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
           (this->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordStride +
          (this->StaticVertexBuffers).StaticMeshVertexBuffer.TangentsStride) *
          (this->StaticVertexBuffers).StaticMeshVertexBuffer.NumVertices;
  auVar13[4] = '\0';
  auVar13[5] = '\0';
  auVar13[6] = '\0';
  auVar13[7] = '\0';
  auVar13._0_4_ = uVar5;
  if (uVar5 != 0) {
    FVar10 = StatPtr_STAT_SkeletalMeshVertexMemory;
    if (StatPtr_STAT_SkeletalMeshVertexMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)0x0) {
      pFVar6 = ::FName::FName(&local_res8,"STAT_SkeletalMeshVertexMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMeshVertexMemory,
                          *pFVar6,L"SkeletalMesh Vertex Memory","STATGROUP_Memory",
                          "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar3 = *(FName *)FVar10;
    local_res8 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_38.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar3;
      local_38.StatData.Pad = auVar13;
      local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar13);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  uVar5 = ((uint)((this->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneWeight != false) +
          ((this->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneIndex != false) + 2) *
          (this->SkinWeightVertexBuffer).DataVertexBuffer.NumBoneWeights +
          (this->SkinWeightVertexBuffer).LookupVertexBuffer.NumVertices * 4;
  auVar15[4] = '\0';
  auVar15[5] = '\0';
  auVar15[6] = '\0';
  auVar15[7] = '\0';
  auVar15._0_4_ = uVar5;
  if (uVar5 != 0) {
    FVar10 = StatPtr_STAT_SkeletalMeshVertexMemory;
    if (StatPtr_STAT_SkeletalMeshVertexMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)0x0) {
      pFVar6 = ::FName::FName(&local_res8,"STAT_SkeletalMeshVertexMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMeshVertexMemory,
                          *pFVar6,L"SkeletalMesh Vertex Memory","STATGROUP_Memory",
                          "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar3 = *(FName *)FVar10;
    local_res8 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_38.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar3;
      local_38.StatData.Pad = auVar15;
      local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar15);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  uVar5 = FColorVertexBuffer::GetAllocatedSize(&(this->StaticVertexBuffers).ColorVertexBuffer);
  auVar14[4] = '\0';
  auVar14[5] = '\0';
  auVar14[6] = '\0';
  auVar14[7] = '\0';
  auVar14[0] = (char)uVar5;
  auVar14[1] = (char)(uVar5 >> 8);
  auVar14[2] = (char)(uVar5 >> 0x10);
  auVar14[3] = (char)(uVar5 >> 0x18);
  if (uVar5 != 0) {
    FVar10 = StatPtr_STAT_SkeletalMeshVertexMemory;
    if (StatPtr_STAT_SkeletalMeshVertexMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)0x0) {
      pFVar6 = ::FName::FName(&local_res8,"STAT_SkeletalMeshVertexMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMeshVertexMemory,
                          *pFVar6,L"SkeletalMesh Vertex Memory","STATGROUP_Memory",
                          "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar3 = *(FName *)FVar10;
    local_res8 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_38.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar3;
      local_38.StatData.Pad = auVar14;
      local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar14);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  uVar5 = (this->ClothVertexBuffer).NumVertices * (this->ClothVertexBuffer).Stride;
  auVar11[4] = '\0';
  auVar11[5] = '\0';
  auVar11[6] = '\0';
  auVar11[7] = '\0';
  auVar11._0_4_ = uVar5;
  if (uVar5 != 0) {
    FVar10 = StatPtr_STAT_SkeletalMeshVertexMemory;
    if (StatPtr_STAT_SkeletalMeshVertexMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)0x0) {
      pFVar6 = ::FName::FName(&local_res8,"STAT_SkeletalMeshVertexMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMeshVertexMemory,
                          *pFVar6,L"SkeletalMesh Vertex Memory","STATGROUP_Memory",
                          "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar3 = *(FName *)FVar10;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar3;
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_38.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar3;
      local_38.StatData.Pad = auVar11;
      local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar11);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  return;
}

// FindSectionIndex @ 148641240

/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

uint __thiscall
FSkeletalMeshLODRenderData::FindSectionIndex
          (FSkeletalMeshLODRenderData *this,FSkelMeshRenderSection *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  
  pFVar1 = (this->RenderSections).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return 0xffffffff;
  }
  uVar2 = (uint)(((longlong)param_1 - (longlong)pFVar1) / 0x118);
  if ((uint)(this->RenderSections).ArrayNum <= uVar2) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// GenerateClassStripFlags @ 148641740

uchar __cdecl
FSkeletalMeshLODRenderData::GenerateClassStripFlags
          (FArchive *param_1,USkinnedAsset *param_2,int param_3)

{
  return '\0';
}

// GetCPUAccessMemoryOverhead @ 148645a60

ulong64 __thiscall
FSkeletalMeshLODRenderData::GetCPUAccessMemoryOverhead(FSkeletalMeshLODRenderData *this)

{
  uint uVar1;
  FRawStaticIndexBuffer16or32Interface *pFVar2;
  FStaticMeshVertexDataInterface *pFVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulong64 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  pFVar2 = (this->MultiSizeIndexContainer).IndexBuffer;
  uVar12 = 0;
  uVar7 = 0;
  uVar11 = uVar12;
  if (pFVar2 != (FRawStaticIndexBuffer16or32Interface *)0x0) {
    cVar4 = (**(code **)(pFVar2->_padding_ + 0x48))(pFVar2);
    uVar6 = uVar7;
    if (cVar4 != '\0') {
      uVar6 = (**(code **)(pFVar2->_padding_ + 0x88))(pFVar2);
    }
    uVar11 = (ulonglong)(int)uVar6;
  }
  pFVar3 = (this->StaticVertexBuffers).StaticMeshVertexBuffer.TangentsData;
  uVar8 = uVar12;
  if ((((pFVar3 != (FStaticMeshVertexDataInterface *)0x0) &&
       ((this->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData !=
        (FStaticMeshVertexDataInterface *)0x0)) &&
      (cVar4 = (**(code **)((longlong)*pFVar3 + 0x58))(), cVar4 != '\0')) &&
     (cVar4 = (**(code **)((longlong)
                           *(this->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData + 0x58))
                        (), cVar4 != '\0')) {
    uVar8 = (ulonglong)
            (((this->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
              (this->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordStride +
             (this->StaticVertexBuffers).StaticMeshVertexBuffer.TangentsStride) *
            (this->StaticVertexBuffers).StaticMeshVertexBuffer.NumVertices);
  }
  bVar5 = FPositionVertexBuffer::GetAllowCPUAccess
                    (&(this->StaticVertexBuffers).PositionVertexBuffer);
  uVar9 = uVar12;
  if (bVar5) {
    uVar9 = (ulonglong)
            ((this->StaticVertexBuffers).PositionVertexBuffer.NumVertices *
            (this->StaticVertexBuffers).PositionVertexBuffer.Stride);
  }
  bVar5 = FColorVertexBuffer::GetAllowCPUAccess(&(this->StaticVertexBuffers).ColorVertexBuffer);
  if (bVar5) {
    uVar7 = FColorVertexBuffer::GetAllocatedSize(&(this->StaticVertexBuffers).ColorVertexBuffer);
  }
  if ((this->SkinWeightVertexBuffer).DataVertexBuffer.bNeedsCPUAccess != false) {
    uVar12 = (ulonglong)
             (((uint)((this->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneWeight != false)
              + ((this->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneIndex != false) + 2) *
              (this->SkinWeightVertexBuffer).DataVertexBuffer.NumBoneWeights +
             (this->SkinWeightVertexBuffer).LookupVertexBuffer.NumVertices * 4);
  }
  uVar6 = (this->ClothVertexBuffer).NumVertices;
  uVar1 = (this->ClothVertexBuffer).Stride;
  uVar10 = FSkinWeightProfilesData::GetCPUAccessMemoryOverhead(&this->SkinWeightProfilesData);
  return uVar12 + (ulonglong)(uVar6 * uVar1) + uVar11 + uVar8 + uVar9 + (ulonglong)uVar7 + uVar10;
}

// GetNumOptionalLODsAllowed @ 14864c4d0

int __cdecl
FSkeletalMeshLODRenderData::GetNumOptionalLODsAllowed
          (ITargetPlatform *param_1,USkinnedAsset *param_2)

{
  return 0;
}

// GetResourceSizeEx @ 14864d430

void __thiscall
FSkeletalMeshLODRenderData::GetResourceSizeEx
          (FSkeletalMeshLODRenderData *this,FResourceSizeEx *param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  FRawStaticIndexBuffer16or32Interface *pFVar6;
  int iVar7;
  uint uVar8;
  ulong64 uVar9;
  FName local_res8;
  
  pFVar6 = (this->MultiSizeIndexContainer).IndexBuffer;
  if (pFVar6 != (FRawStaticIndexBuffer16or32Interface *)0x0) {
    iVar7 = (**(code **)(pFVar6->_padding_ + 0x88))();
    ::FName::FName(&local_res8,L"IndexBuffer");
    FResourceSizeEx::AddUnknownMemoryBytes(param_1,&local_res8,(longlong)iVar7);
  }
  uVar8 = (this->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
  uVar3 = (this->StaticVertexBuffers).PositionVertexBuffer.Stride;
  ::FName::FName(&local_res8,L"PositionVertexBuffer");
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,&local_res8,(ulonglong)(uVar8 * uVar3));
  uVar8 = (this->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
  uVar3 = (this->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordStride;
  uVar4 = (this->StaticVertexBuffers).StaticMeshVertexBuffer.TangentsStride;
  uVar5 = (this->StaticVertexBuffers).StaticMeshVertexBuffer.NumVertices;
  ::FName::FName(&local_res8,L"TexcoordBuffer and TangentBuffer");
  FResourceSizeEx::AddUnknownMemoryBytes
            (param_1,&local_res8,(ulonglong)((uVar8 * uVar3 + uVar4) * uVar5));
  bVar1 = (this->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneWeight;
  bVar2 = (this->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneIndex;
  uVar8 = (this->SkinWeightVertexBuffer).LookupVertexBuffer.NumVertices;
  uVar3 = (this->SkinWeightVertexBuffer).DataVertexBuffer.NumBoneWeights;
  ::FName::FName(&local_res8,L"SkinWeightVertexBuffer");
  FResourceSizeEx::AddUnknownMemoryBytes
            (param_1,&local_res8,
             (ulonglong)(((uint)(bVar1 != false) + (bVar2 != false) + 2) * uVar3 + uVar8 * 4));
  uVar8 = FColorVertexBuffer::GetAllocatedSize(&(this->StaticVertexBuffers).ColorVertexBuffer);
  ::FName::FName(&local_res8,L"ColorVertexBuffer");
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,&local_res8,(ulonglong)uVar8);
  uVar8 = (this->ClothVertexBuffer).NumVertices;
  uVar3 = (this->ClothVertexBuffer).Stride;
  ::FName::FName(&local_res8,L"ClothVertexBuffer");
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,&local_res8,(ulonglong)(uVar8 * uVar3));
  uVar9 = FSkinWeightProfilesData::GetResourcesSize(&this->SkinWeightProfilesData);
  ::FName::FName(&local_res8,L"SkinWeightProfilesData");
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,&local_res8,uVar9);
  iVar7 = FSkeletalMeshVertexAttributeRenderData::GetResourceSize(&this->VertexAttributeBuffers);
  ::FName::FName(&local_res8,L"VertexAttributeData");
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,&local_res8,(longlong)iVar7);
  iVar7 = FSkeletalMeshHalfEdgeBuffer::GetResourceSize(&this->HalfEdgeBuffer);
  ::FName::FName(&local_res8,L"HalfEdgeBuffer");
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,&local_res8,(longlong)iVar7);
  return;
}

// GetSectionFromVertexIndex @ 14864daa0

void __thiscall
FSkeletalMeshLODRenderData::GetSectionFromVertexIndex
          (FSkeletalMeshLODRenderData *this,int param_1,int *param_2,int *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  *param_2 = 0;
  uVar6 = 0;
  *param_3 = 0;
  if (0 < (this->RenderSections).ArrayNum) {
    lVar8 = 0;
    iVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->RenderSections).ArrayNum) {
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
      pFVar1 = (this->RenderSections).AllocatorInstance.Data;
      *param_2 = uVar6;
      iVar5 = *(int *)(pFVar1 + lVar8 + 0x48) + iVar7;
      if (param_1 < iVar5) {
        *param_3 = param_1 - iVar7;
        return;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x118;
      iVar7 = iVar5;
    } while ((int)uVar6 < (this->RenderSections).ArrayNum);
  }
  return;
}

// GetTotalFaces @ 1486501d0

int __thiscall FSkeletalMeshLODRenderData::GetTotalFaces(FSkeletalMeshLODRenderData *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = 0;
  uVar5 = 0;
  if (0 < (this->RenderSections).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->RenderSections).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + *(int *)((this->RenderSections).AllocatorInstance.Data + lVar6 + 8);
      lVar6 = lVar6 + 0x118;
    } while ((int)uVar5 < (this->RenderSections).ArrayNum);
  }
  return iVar4;
}

// HasClothData @ 148651850

bool __thiscall FSkeletalMeshLODRenderData::HasClothData(FSkeletalMeshLODRenderData *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar8 = 0;
  uVar9 = uVar8;
  if (0 < (this->RenderSections).ArrayNum) {
    do {
      uVar7 = (uint)uVar8;
      uVar6 = 0;
      if ((int)uVar7 < (this->RenderSections).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (this->RenderSections).AllocatorInstance.Data;
      iVar1 = *(int *)(pFVar2 + uVar9 + 0x30);
      if (iVar1 != 0) {
        if ((iVar1 < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (*(int *)(*(longlong *)(pFVar2 + uVar9 + 0x28) + 8) != 0) {
          return true;
        }
      }
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar9 = uVar9 + 0x118;
    } while ((int)(uVar7 + 1) < (this->RenderSections).ArrayNum);
  }
  return false;
}

// IncrementMemoryStats @ 148651b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSkeletalMeshLODRenderData::IncrementMemoryStats(FSkeletalMeshLODRenderData *this,bool param_1)

{
  byte bVar1;
  FRawStaticIndexBuffer16or32Interface *pFVar2;
  FName FVar3;
  int iVar4;
  uint uVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_SkeletalMeshIndexMemory> FVar7;
  FThreadStats *pFVar8;
  FThreadStatsPool *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory> FVar10;
  uchar auVar11 [8];
  uchar auVar12 [8];
  uchar auVar13 [8];
  uchar auVar14 [8];
  uchar auVar15 [8];
  FName local_res8;
  FStatMessage local_38;
  
  pFVar2 = (this->MultiSizeIndexContainer).IndexBuffer;
  if (pFVar2 != (FRawStaticIndexBuffer16or32Interface *)0x0) {
    bVar1 = (this->MultiSizeIndexContainer).DataTypeSize;
    iVar4 = (**(code **)(pFVar2->_padding_ + 0x50))();
    iVar4 = iVar4 * (uint)bVar1;
    if (iVar4 != 0) {
      FVar7 = StatPtr_STAT_SkeletalMeshIndexMemory;
      if (StatPtr_STAT_SkeletalMeshIndexMemory ==
          (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshIndexMemory>)0x0) {
        pFVar6 = ::FName::FName(&local_res8,"STAT_SkeletalMeshIndexMemory");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshIndexMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMeshIndexMemory,
                           *pFVar6,L"SkeletalMesh Index Memory","STATGROUP_Memory",
                           "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,MCR_Physical
                          );
      }
      FVar3 = *(FName *)FVar7;
      local_res8 = FVar3;
      if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar8 == (FThreadStats *)0x0) {
          pFVar9 = FThreadStatsPool::Get();
          pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
        }
        local_38.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
        local_res8 = FVar3;
        local_38.StatData.Pad = (uchar  [8])(longlong)iVar4;
        local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar8,&local_38);
        FStatsTrace::Add(&local_res8,(longlong)iVar4);
        if (pFVar8->ScopeCount == 0) {
          FThreadStats::Flush(pFVar8,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar8,false,false);
        }
      }
    }
  }
  uVar5 = (this->StaticVertexBuffers).PositionVertexBuffer.NumVertices *
          (this->StaticVertexBuffers).PositionVertexBuffer.Stride;
  auVar12[4] = '\0';
  auVar12[5] = '\0';
  auVar12[6] = '\0';
  auVar12[7] = '\0';
  auVar12._0_4_ = uVar5;
  if (uVar5 != 0) {
    FVar10 = StatPtr_STAT_SkeletalMeshVertexMemory;
    if (StatPtr_STAT_SkeletalMeshVertexMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)0x0) {
      pFVar6 = ::FName::FName(&local_res8,"STAT_SkeletalMeshVertexMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMeshVertexMemory,
                          *pFVar6,L"SkeletalMesh Vertex Memory","STATGROUP_Memory",
                          "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar3 = *(FName *)FVar10;
    local_res8 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_38.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_res8 = FVar3;
      local_38.StatData.Pad = auVar12;
      local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar12);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  uVar5 = ((this->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
           (this->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordStride +
          (this->StaticVertexBuffers).StaticMeshVertexBuffer.TangentsStride) *
          (this->StaticVertexBuffers).StaticMeshVertexBuffer.NumVertices;
  auVar13[4] = '\0';
  auVar13[5] = '\0';
  auVar13[6] = '\0';
  auVar13[7] = '\0';
  auVar13._0_4_ = uVar5;
  if (uVar5 != 0) {
    FVar10 = StatPtr_STAT_SkeletalMeshVertexMemory;
    if (StatPtr_STAT_SkeletalMeshVertexMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)0x0) {
      pFVar6 = ::FName::FName(&local_res8,"STAT_SkeletalMeshVertexMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMeshVertexMemory,
                          *pFVar6,L"SkeletalMesh Vertex Memory","STATGROUP_Memory",
                          "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar3 = *(FName *)FVar10;
    local_res8 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_38.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_res8 = FVar3;
      local_38.StatData.Pad = auVar13;
      local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar13);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  uVar5 = ((uint)((this->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneWeight != false) +
          ((this->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneIndex != false) + 2) *
          (this->SkinWeightVertexBuffer).DataVertexBuffer.NumBoneWeights +
          (this->SkinWeightVertexBuffer).LookupVertexBuffer.NumVertices * 4;
  auVar14[4] = '\0';
  auVar14[5] = '\0';
  auVar14[6] = '\0';
  auVar14[7] = '\0';
  auVar14._0_4_ = uVar5;
  if (uVar5 != 0) {
    FVar10 = StatPtr_STAT_SkeletalMeshVertexMemory;
    if (StatPtr_STAT_SkeletalMeshVertexMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)0x0) {
      pFVar6 = ::FName::FName(&local_res8,"STAT_SkeletalMeshVertexMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMeshVertexMemory,
                          *pFVar6,L"SkeletalMesh Vertex Memory","STATGROUP_Memory",
                          "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar3 = *(FName *)FVar10;
    local_res8 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_38.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_res8 = FVar3;
      local_38.StatData.Pad = auVar14;
      local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar14);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  if (param_1) {
    uVar5 = FColorVertexBuffer::GetAllocatedSize(&(this->StaticVertexBuffers).ColorVertexBuffer);
    auVar15[4] = '\0';
    auVar15[5] = '\0';
    auVar15[6] = '\0';
    auVar15[7] = '\0';
    auVar15[0] = (char)uVar5;
    auVar15[1] = (char)(uVar5 >> 8);
    auVar15[2] = (char)(uVar5 >> 0x10);
    auVar15[3] = (char)(uVar5 >> 0x18);
    if (uVar5 != 0) {
      FVar10 = StatPtr_STAT_SkeletalMeshVertexMemory;
      if (StatPtr_STAT_SkeletalMeshVertexMemory ==
          (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)0x0) {
        pFVar6 = ::FName::FName(&local_res8,"STAT_SkeletalMeshVertexMemory");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMeshVertexMemory,
                            *pFVar6,L"SkeletalMesh Vertex Memory","STATGROUP_Memory",
                            "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,
                            MCR_Physical);
      }
      FVar3 = *(FName *)FVar10;
      local_res8 = FVar3;
      if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar8 == (FThreadStats *)0x0) {
          pFVar9 = FThreadStatsPool::Get();
          pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
        }
        local_38.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
        local_res8 = FVar3;
        local_38.StatData.Pad = auVar15;
        local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar8,&local_38);
        FStatsTrace::Add(&local_res8,(long64)auVar15);
        if (pFVar8->ScopeCount == 0) {
          FThreadStats::Flush(pFVar8,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar8,false,false);
        }
      }
    }
  }
  uVar5 = (this->ClothVertexBuffer).NumVertices;
  if ((uVar5 != 0) &&
     (uVar5 = uVar5 * (this->ClothVertexBuffer).Stride, auVar11[4] = '\0', auVar11[5] = '\0',
     auVar11[6] = '\0', auVar11[7] = '\0', auVar11._0_4_ = uVar5, uVar5 != 0)) {
    FVar10 = StatPtr_STAT_SkeletalMeshVertexMemory;
    if (StatPtr_STAT_SkeletalMeshVertexMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)0x0) {
      pFVar6 = ::FName::FName(&local_res8,"STAT_SkeletalMeshVertexMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMeshVertexMemory,
                          *pFVar6,L"SkeletalMesh Vertex Memory","STATGROUP_Memory",
                          "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,MCR_Physical)
      ;
    }
    FVar3 = *(FName *)FVar10;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar3;
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_38.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_res8 = FVar3;
      local_38.StatData.Pad = auVar11;
      local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar11);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  return;
}

// InitMorphResources @ 148654d70

void __thiscall FSkeletalMeshLODRenderData::InitMorphResources(FSkeletalMeshLODRenderData *this)

{
  if ((((this->MorphTargetVertexInfoBuffers).bRHIInitialized == false) &&
      ((this->MorphTargetVertexInfoBuffers).bIsMorphCPUDataValid != false)) &&
     ((this->MorphTargetVertexInfoBuffers).NumTotalBatches != 0)) {
    if ((int)(this->MorphTargetVertexInfoBuffers)._padding_ != -1) {
      BeginReleaseResource
                ((FRenderResource *)&this->MorphTargetVertexInfoBuffers,
                 &UE::RenderCommandPipe::SkeletalMesh);
    }
    BeginInitResource((FRenderResource *)&this->MorphTargetVertexInfoBuffers,
                      &UE::RenderCommandPipe::SkeletalMesh);
    return;
  }
  return;
}

// InitResources @ 148655ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FSkeletalMeshLODRenderData::InitResources
          (FSkeletalMeshLODRenderData *this,bool param_1,int param_2,USkinnedAsset *param_3)

{
  TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *pTVar1;
  uint uVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  FSkeletalMeshLODRenderData *pFVar5;
  bool bVar6;
  FString *pFVar7;
  FName *pFVar8;
  TArray<UMorphTarget_*,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  int iVar11;
  FName FVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_218 [32];
  undefined1 local_1c8;
  undefined1 local_1c7 [7];
  FName local_1c0;
  ForAnyElementType local_1b8;
  int local_1b0;
  int iStack_1ac;
  uint local_1a8;
  FRayTracingGeometrySegment local_1a0;
  int local_178;
  USkinnedAsset *local_170;
  FSkeletalMeshLODRenderData *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  FRayTracingGeometryInitializer local_148;
  FName local_d8;
  FString local_d0;
  FRHIBuffer *local_b8;
  undefined8 local_b0;
  uint local_a8;
  undefined4 local_a4;
  ERayTracingGeometryInitializerType local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  FResourceArrayUploadInterface *local_88;
  uint local_80 [6];
  FRHIRayTracingGeometry *local_68;
  FDebugName local_60;
  FName local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_178 = param_2;
  local_170 = param_3;
  local_168 = this;
  pFVar7 = USkinnedAsset::GetLODPathName(&local_d0,param_3,param_2);
  iVar13 = (pFVar7->Data).ArrayNum;
  iVar11 = iVar13 + -1;
  if (iVar13 == 0) {
    iVar11 = 0;
  }
  pFVar8 = ::FName::FName(&local_d8,iVar11,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,
                          FNAME_Add);
  local_1c0 = *pFVar8;
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (this->bStreamedDataInlined != 0) {
    IncrementMemoryStats(this,param_1);
  }
  FMultiSizeIndexContainer::SetOwnerName(&this->MultiSizeIndexContainer,&local_1c0);
  FMultiSizeIndexContainer::InitResources(&this->MultiSizeIndexContainer);
  (this->StaticVertexBuffers).PositionVertexBuffer._padding_ = (longlong)local_1c0;
  BeginInitResource((FRenderResource *)&(this->StaticVertexBuffers).PositionVertexBuffer,
                    &UE::RenderCommandPipe::SkeletalMesh);
  (this->StaticVertexBuffers).StaticMeshVertexBuffer._padding_ = (longlong)local_1c0;
  BeginInitResource((FRenderResource *)&this->StaticVertexBuffers,
                    &UE::RenderCommandPipe::SkeletalMesh);
  FSkinWeightVertexBuffer::SetOwnerName(&this->SkinWeightVertexBuffer,&local_1c0);
  FSkinWeightVertexBuffer::BeginInitResources(&this->SkinWeightVertexBuffer);
  if (param_1) {
    (this->StaticVertexBuffers).ColorVertexBuffer._padding_ = (longlong)local_1c0;
    BeginInitResource((FRenderResource *)&(this->StaticVertexBuffers).ColorVertexBuffer,
                      &UE::RenderCommandPipe::SkeletalMesh);
  }
  if ((this->ClothVertexBuffer).NumVertices != 0) {
    (this->ClothVertexBuffer)._padding_ = (longlong)local_1c0;
    BeginInitResource((FRenderResource *)&this->ClothVertexBuffer,
                      &UE::RenderCommandPipe::SkeletalMesh);
  }
  iVar13 = (this->RenderSections).ArrayNum;
  pTVar1 = &this->RenderSections;
  pFVar14 = (pTVar1->AllocatorInstance).Data;
  pFVar16 = pFVar14 + (longlong)iVar13 * 0x118;
  while( true ) {
    if ((this->RenderSections).ArrayNum != iVar13) {
      local_1c8 = 0;
      `TCheckedPointerIterator<FSkelMeshRenderSection,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1c8);
    }
    if (pFVar14 == pFVar16) break;
    if (*(int *)(pFVar14 + 0xd0) != 0) {
      *(FName *)(pFVar14 + 0x70) = local_1c0;
      BeginInitResource((FRenderResource *)(pFVar14 + 0x68),&UE::RenderCommandPipe::SkeletalMesh);
    }
    pFVar14 = pFVar14 + 0x118;
  }
  if (((param_3 != (USkinnedAsset *)0x0) &&
      (pTVar9 = (TArray<UMorphTarget_*,TSizedDefaultAllocator<32>_> *)
                (**(code **)(*(longlong *)param_3 + 0x458))(param_3), pTVar9->ArrayNum != 0)) &&
     ((this->MorphTargetVertexInfoBuffers).bResourcesInitialized == false)) {
    lVar10 = (**(code **)(*(longlong *)param_3 + 0x330))(param_3,param_2);
    FMorphTargetVertexInfoBuffers::InitMorphResources
              (&this->MorphTargetVertexInfoBuffers,GMaxRHIShaderPlatform,pTVar1,pTVar9,
               (this->StaticVertexBuffers).StaticMeshVertexBuffer.NumVertices,param_2,
               *(float *)(lVar10 + 0xbc));
  }
  if ((((this->MorphTargetVertexInfoBuffers).bRHIInitialized == false) &&
      ((this->MorphTargetVertexInfoBuffers).bIsMorphCPUDataValid != false)) &&
     ((this->MorphTargetVertexInfoBuffers).NumTotalBatches != 0)) {
    (this->MorphTargetVertexInfoBuffers)._padding_ = (longlong)local_1c0;
    BeginInitResource((FRenderResource *)&this->MorphTargetVertexInfoBuffers,
                      &UE::RenderCommandPipe::SkeletalMesh);
  }
  FSkeletalMeshVertexAttributeRenderData::InitResources(&this->VertexAttributeBuffers);
  (this->HalfEdgeBuffer)._padding_ = (longlong)local_1c0;
  BeginInitResource((FRenderResource *)&this->HalfEdgeBuffer,&UE::RenderCommandPipe::SkeletalMesh);
  bVar6 = IsRayTracingAllowed();
  if (bVar6) {
    local_160 = 0xffffffffffffffff;
    local_158 = 0xffffffffffffffff;
    local_150 = 0xffffffffffffffff;
    if ((((this->SourceRayTracingGeometry).RawDataHeader.Reserved[0] != 0xffffffff) ||
        ((this->SourceRayTracingGeometry).RawDataHeader.Reserved[1] != 0xffffffff)) ||
       (((this->SourceRayTracingGeometry).RawDataHeader.Reserved[2] != 0xffffffff ||
        ((((this->SourceRayTracingGeometry).RawDataHeader.Reserved[3] != 0xffffffff ||
          ((this->SourceRayTracingGeometry).RawDataHeader.Reserved[4] != 0xffffffff)) ||
         ((this->SourceRayTracingGeometry).RawDataHeader.Reserved[5] != 0xffffffff)))))) {
      uVar2 = (this->RenderSections).ArrayNum;
      uVar15 = 0;
      local_1a8 = 0;
      local_1b8.Data = (FScriptContainerElement *)0x0;
      local_1b0 = 0;
      iStack_1ac = 0;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if (0 < (int)uVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,uVar2,&local_1b8,0,&iStack_1ac);
      }
      iVar13 = (this->RenderSections).ArrayNum;
      pFVar14 = (pTVar1->AllocatorInstance).Data;
      pFVar16 = pFVar14 + (longlong)iVar13 * 0x118;
      FVar12.ComparisonIndex.Value = 0;
      FVar12.Number = 0;
      while( true ) {
        if ((this->RenderSections).ArrayNum != iVar13) {
          local_1c7[0] = 0;
          `TCheckedPointerIterator<FSkelMeshRenderSection,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_1c7);
        }
        if (pFVar14 == pFVar16) break;
        local_1a0.VertexBuffer.Reference = (FRHIBuffer *)0x0;
        local_1a0.NumPrimitives = *(uint *)(pFVar14 + 8);
        local_1a0.FirstPrimitive = *(uint *)(pFVar14 + 4) / 3;
        local_1a0.VertexBufferElementType = VET_Float3;
        local_1a0.VertexBufferOffset = 0;
        local_1a0.VertexBufferStride = 0xc;
        local_1a0.MaxVertices = 0;
        local_1a0.bForceOpaque = false;
        local_1a0.bAllowDuplicateAnyHitShaderInvocation = true;
        if ((pFVar14[0x110] != (FScriptContainerElement)0x0) ||
           (local_1a0.bEnabled = true, pFVar14[0xe] == (FScriptContainerElement)0x0)) {
          local_1a0.bEnabled = false;
        }
        if (((local_1b8.Data <= &local_1a0) &&
            (&local_1a0 <
             (FRayTracingGeometrySegment *)(local_1b8.Data + (longlong)iStack_1ac * 0x28))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_1b0 == iStack_1ac) {
          local_1b0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x828,&local_1b8,&iStack_1ac);
        }
        FVar4.Data = local_1b8.Data;
        lVar10 = (longlong)local_1b0;
        local_1b0 = local_1b0 + 1;
        *(undefined8 *)&local_1b8.Data[lVar10 * 0x28].field_0x0 = 0;
        *(FRHIBuffer **)&local_1b8.Data[lVar10 * 0x28].field_0x0 = local_1a0.VertexBuffer.Reference;
        if (local_1a0.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
          FRHIResource::AddRef((FRHIResource *)local_1a0.VertexBuffer.Reference);
        }
        *(EVertexElementType *)(FVar4.Data + lVar10 * 0x28 + 8) = local_1a0.VertexBufferElementType;
        *(uint *)(FVar4.Data + lVar10 * 0x28 + 0xc) = local_1a0.VertexBufferOffset;
        *(uint *)(FVar4.Data + lVar10 * 0x28 + 0x10) = local_1a0.VertexBufferStride;
        *(uint *)(FVar4.Data + lVar10 * 0x28 + 0x14) = local_1a0.MaxVertices;
        *(uint *)(FVar4.Data + lVar10 * 0x28 + 0x18) = local_1a0.FirstPrimitive;
        *(uint *)(FVar4.Data + lVar10 * 0x28 + 0x1c) = local_1a0.NumPrimitives;
        FVar4.Data[lVar10 * 0x28 + 0x20] = (FScriptContainerElement)local_1a0.bForceOpaque;
        FVar4.Data[lVar10 * 0x28 + 0x21] =
             (FScriptContainerElement)local_1a0.bAllowDuplicateAnyHitShaderInvocation;
        FVar4.Data[lVar10 * 0x28 + 0x22] = (FScriptContainerElement)local_1a0.bEnabled;
        uVar15 = local_1a8 + *(int *)(pFVar14 + 8);
        local_1a8 = uVar15;
        if (local_1a0.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)local_1a0.VertexBuffer.Reference);
        }
        pFVar14 = pFVar14 + 0x118;
      }
      local_b8 = (FRHIBuffer *)0x0;
      local_b0 = 0;
      local_a8 = 0;
      local_a4 = 0x10000;
      local_a0 = Rendering;
      local_98.Data = (FScriptContainerElement *)0x0;
      local_90 = 0;
      local_88 = (FResourceArrayUploadInterface *)0x0;
      local_80[0] = 0xffffffff;
      local_80[1] = 0xffffffff;
      local_80[2] = 0xffffffff;
      local_80[3] = 0xffffffff;
      local_80[4] = 0xffffffff;
      local_80[5] = 0xffffffff;
      local_68 = (FRHIRayTracingGeometry *)0x0;
      FDebugName::FDebugName(&local_60);
      local_54.ComparisonIndex.Value = 0;
      local_54.Number = 0;
      if (local_170 != (USkinnedAsset *)0x0) {
        FVar12.ComparisonIndex.Value = *(uint *)&local_170->field_0x18;
        FVar12.Number = *(uint *)&local_170->field_0x1c;
      }
      FDebugName::operator=(&local_60,FVar12);
      local_54 = local_1c0;
      local_a4 = CONCAT13(1,(undefined3)local_a4);
      local_a8 = uVar15;
      DestructItems<FRayTracingGeometrySegment,int>
                ((FRayTracingGeometrySegment *)local_98.Data,(int)local_90);
      pFVar5 = local_168;
      iVar13 = local_1b0;
      FVar4.Data = local_1b8.Data;
      local_90 = CONCAT44(local_90._4_4_,local_1b0);
      if ((local_1b0 == 0) && (local_90._4_4_ == 0)) {
        local_90 = 0;
        local_90._0_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,local_1b0,local_90._4_4_,&local_98,local_1b0,
                   (int *)((longlong)&local_90 + 4));
        ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
                  (local_98.Data,(FRayTracingGeometrySegment *)FVar4.Data,iVar13);
      }
      local_148.IndexBuffer.Reference = local_b8;
      iVar13 = (int)local_90;
      if (local_b8 != (FRHIBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_b8);
        iVar13 = (int)local_90;
      }
      FVar4.Data = local_98.Data;
      local_148.IndexBufferOffset = (uint)local_b0;
      local_148.GeometryType = local_b0._4_4_;
      local_148.TotalPrimitiveCount = local_a8;
      local_148.bFastBuild = (bool)(undefined1)local_a4;
      local_148.bAllowUpdate = (bool)local_a4._1_1_;
      local_148.bAllowCompaction = (bool)local_a4._2_1_;
      local_148.bTemplate = (bool)local_a4._3_1_;
      local_148.Type = local_a0;
      local_148.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.Segments.ArrayNum = iVar13;
      if (iVar13 == 0) {
        local_148.Segments.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar13,0,&local_148.Segments.AllocatorInstance,iVar13,
                   &local_148.Segments.ArrayMax);
        ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
                  (local_148.Segments.AllocatorInstance.Data,
                   (FRayTracingGeometrySegment *)FVar4.Data,iVar13);
      }
      local_148.OfflineData = local_88;
      local_148.SourceGeometry = local_68;
      local_148.DebugName.Number = local_60.Number;
      local_148.OfflineDataHeader.Reserved[0] = local_80[0];
      local_148.OfflineDataHeader.Reserved[1] = local_80[1];
      local_148.OfflineDataHeader.Reserved[2] = local_80[2];
      local_148.OfflineDataHeader.Reserved[3] = local_80[3];
      local_148.OwnerName = local_54;
      local_148.OfflineDataHeader.Reserved[4] = local_80[4];
      local_148.OfflineDataHeader.Reserved[5] = local_80[5];
      local_148.DebugName.Name = local_60.Name;
      FRayTracingGeometry::SetInitializer(&pFVar5->SourceRayTracingGeometry,&local_148);
      (pFVar5->SourceRayTracingGeometry).LODIndex = (schar)local_178;
      (pFVar5->SourceRayTracingGeometry)._padding_ = (longlong)local_1c0;
      BeginInitResource((FRenderResource *)&pFVar5->SourceRayTracingGeometry,
                        &UE::RenderCommandPipe::SkeletalMesh);
      DestructItems<FRayTracingGeometrySegment,int>
                ((FRayTracingGeometrySegment *)local_98.Data,(int)local_90);
      if ((FRayTracingGeometrySegment *)local_98.Data != (FRayTracingGeometrySegment *)0x0) {
        FMemory::Free(local_98.Data);
      }
      if (local_b8 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_b8);
      }
      DestructItems<FRayTracingGeometrySegment,int>
                ((FRayTracingGeometrySegment *)local_1b8.Data,local_1b0);
      if ((FRayTracingGeometrySegment *)local_1b8.Data != (FRayTracingGeometrySegment *)0x0) {
        FMemory::Free(local_1b8.Data);
      }
    }
  }
  return;
}

// IsLODCookedOut @ 148659a50

bool __cdecl
FSkeletalMeshLODRenderData::IsLODCookedOut
          (ITargetPlatform *param_1,USkinnedAsset *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 == (USkinnedAsset *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkinnedAsset",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshLODRenderData.cpp"
                       ,0x271,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// IsLODInlined @ 148659a90

bool __cdecl
FSkeletalMeshLODRenderData::IsLODInlined
          (ITargetPlatform *param_1,USkinnedAsset *param_2,int param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 == (USkinnedAsset *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkinnedAsset",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshLODRenderData.cpp"
                       ,0x286,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// NumNonClothingSections @ 14865a6d0

int __thiscall FSkeletalMeshLODRenderData::NumNonClothingSections(FSkeletalMeshLODRenderData *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  lVar10 = (longlong)(this->RenderSections).ArrayNum;
  uVar7 = 0;
  iVar5 = 0;
  uVar8 = uVar7;
  uVar9 = uVar7;
  if (0 < lVar10) {
    do {
      uVar6 = (uint)uVar7;
      uVar4 = 0;
      if ((int)uVar6 < (this->RenderSections).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
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
      pFVar1 = (this->RenderSections).AllocatorInstance.Data;
      iVar5 = *(int *)(pFVar1 + uVar8 + 0x30);
      if (iVar5 == 0) {
LAB_14865a7a4:
        uVar9 = (ulonglong)((int)uVar9 + 1);
      }
      else {
        if ((iVar5 < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        if (*(int *)(*(longlong *)(pFVar1 + uVar8 + 0x28) + 8) == 0) goto LAB_14865a7a4;
      }
      iVar5 = (int)uVar9;
      uVar7 = (ulonglong)(uVar6 + 1);
      lVar10 = lVar10 + -1;
      uVar8 = uVar8 + 0x118;
    } while (lVar10 != 0);
  }
  return iVar5;
}

// ReleaseCPUResources @ 14865f1b0

void __thiscall
FSkeletalMeshLODRenderData::ReleaseCPUResources(FSkeletalMeshLODRenderData *this,bool param_1)

{
  FRawStaticIndexBuffer16or32Interface *pFVar1;
  
  if (!PRIVATE_GIsRunningCommandlet) {
    if ((this->MultiSizeIndexContainer).IndexBuffer != (FRawStaticIndexBuffer16or32Interface *)0x0)
    {
      pFVar1 = FMultiSizeIndexContainer::GetIndexBuffer(&this->MultiSizeIndexContainer);
      (**(code **)(pFVar1->_padding_ + 0x80))(pFVar1,0);
    }
    FSkinWeightVertexBuffer::CleanUp(&this->SkinWeightVertexBuffer);
    FPositionVertexBuffer::CleanUp(&(this->StaticVertexBuffers).PositionVertexBuffer);
    FStaticMeshVertexBuffer::CleanUp(&(this->StaticVertexBuffers).StaticMeshVertexBuffer);
    if (param_1) {
      FSkeletalMeshVertexClothBuffer::CleanUp(&this->ClothVertexBuffer);
      FColorVertexBuffer::CleanUp(&(this->StaticVertexBuffers).ColorVertexBuffer);
      FSkinWeightProfilesData::ReleaseCPUResources(&this->SkinWeightProfilesData);
      FSkeletalMeshVertexAttributeRenderData::CleanUp(&this->VertexAttributeBuffers);
      FSkeletalMeshHalfEdgeBuffer::CleanUp(&this->HalfEdgeBuffer);
    }
  }
  return;
}

// ReleaseResources @ 14865f5d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSkeletalMeshLODRenderData::ReleaseResources(FSkeletalMeshLODRenderData *this)

{
  int iVar1;
  FName FVar2;
  bool bVar3;
  uchar auVar4 [8];
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FName local_res8;
  FStatMessage local_28;
  
  DecrementMemoryStats(this);
  FMultiSizeIndexContainer::ReleaseResources(&this->MultiSizeIndexContainer);
  BeginReleaseResource
            ((FRenderResource *)&(this->StaticVertexBuffers).PositionVertexBuffer,
             &UE::RenderCommandPipe::SkeletalMesh);
  BeginReleaseResource
            ((FRenderResource *)&this->StaticVertexBuffers,&UE::RenderCommandPipe::SkeletalMesh);
  FSkinWeightVertexBuffer::BeginReleaseResources(&this->SkinWeightVertexBuffer);
  BeginReleaseResource
            ((FRenderResource *)&(this->StaticVertexBuffers).ColorVertexBuffer,
             &UE::RenderCommandPipe::SkeletalMesh);
  BeginReleaseResource
            ((FRenderResource *)&this->ClothVertexBuffer,&UE::RenderCommandPipe::SkeletalMesh);
  iVar1 = (this->RenderSections).ArrayNum;
  pFVar7 = (this->RenderSections).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x118;
  while( true ) {
    if ((this->RenderSections).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSkelMeshRenderSection,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar7 == pFVar8) break;
    BeginReleaseResource((FRenderResource *)(pFVar7 + 0x68),&UE::RenderCommandPipe::SkeletalMesh);
    pFVar7 = pFVar7 + 0x118;
  }
  BeginReleaseResource
            ((FRenderResource *)&this->MorphTargetVertexInfoBuffers,
             &UE::RenderCommandPipe::SkeletalMesh);
  auVar4 = (uchar  [8])FSkinWeightProfilesData::GetResourcesSize(&this->SkinWeightProfilesData);
  if (auVar4 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_SkeletalMeshVertexMemory;
    if (StatPtr_STAT_SkeletalMeshVertexMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)0x0) {
      pFVar5 = ::FName::FName(&local_res8,"STAT_SkeletalMeshVertexMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_SkeletalMeshVertexMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMeshVertexMemory,*pFVar5
                         ,L"SkeletalMesh Vertex Memory","STATGROUP_Memory","STATCAT_Advanced",
                         L"Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar6;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar2;
      local_28.StatData.Pad = auVar4;
      local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar4);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FSkinWeightProfilesData::ReleaseResources(&this->SkinWeightProfilesData);
  FSkeletalMeshVertexAttributeRenderData::ReleaseResources(&this->VertexAttributeBuffers);
  BeginReleaseResource
            ((FRenderResource *)&this->HalfEdgeBuffer,&UE::RenderCommandPipe::SkeletalMesh);
  bVar3 = IsRayTracingAllowed();
  if (bVar3) {
    BeginReleaseResource
              ((FRenderResource *)&this->SourceRayTracingGeometry,
               &UE::RenderCommandPipe::SkeletalMesh);
    BeginReleaseResource
              ((FRenderResource *)&this->StaticRayTracingGeometry,
               &UE::RenderCommandPipe::SkeletalMesh);
  }
  return;
}

// Serialize @ 1486622d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSkeletalMeshLODRenderData::Serialize
          (FSkeletalMeshLODRenderData *this,FArchive *param_1,UObject *param_2,int param_3)

{
  uint *puVar1;
  FNameEntryId FVar2;
  FName FVar3;
  ulonglong *puVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_void___cdecl_FSkeletalMeshLODRenderData::Serialize(FArchive_&,UObject_*,int)_::_2_::FStat_STAT_SkeletalMeshLODRenderData_Serialize>
  FVar11;
  UClass *pUVar12;
  FSkeletalMeshRenderData *this_00;
  long64 lVar13;
  FString *pFVar14;
  IConsoleManager *pIVar15;
  longlong *plVar16;
  TConsoleVariableData<int> *pTVar17;
  FName FVar18;
  wchar_t *pwVar19;
  bool bVar20;
  longlong lVar21;
  wchar_t *pwVar22;
  byte bVar23;
  bool local_78;
  byte local_77;
  bool local_76 [2];
  FStripDataFlags local_74 [2];
  FMultiSizeIndexContainer local_70;
  undefined8 local_60;
  FString local_58;
  FName local_48;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_SkeletalMeshLODRenderData_Serialize ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FSkeletalMeshLODRenderData::Serialize(FArchive_&,UObject_*,int)_::_2_::FStat_STAT_SkeletalMeshLODRenderData_Serialize>
         )0x0) {
      pFVar10 = ::FName::FName((FName *)&local_70,"STAT_SkeletalMeshLODRenderData_Serialize");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkeletalMeshLODRenderData_Serialize,
                 *pFVar10,L"FSkeletalMeshLODRenderData::Serialize","STATGROUP_LoadTime",
                 "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_SkeletalMeshLODRenderData_Serialize;
  if (StatPtr_STAT_SkeletalMeshLODRenderData_Serialize ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FSkeletalMeshLODRenderData::Serialize(FArchive_&,UObject_*,int)_::_2_::FStat_STAT_SkeletalMeshLODRenderData_Serialize>
       )0x0) {
    pFVar10 = ::FName::FName((FName *)&local_58,"STAT_SkeletalMeshLODRenderData_Serialize");
    FVar11 = (FThreadSafeStaticStat<_public:_void___cdecl_FSkeletalMeshLODRenderData::Serialize(FArchive_&,UObject_*,int)_::_2_::FStat_STAT_SkeletalMeshLODRenderData_Serialize>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_SkeletalMeshLODRenderData_Serialize,*pFVar10,
                          L"FSkeletalMeshLODRenderData::Serialize","STATGROUP_LoadTime",
                          "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar11;
  bVar23 = 0;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  local_77 = 0;
  if ((FVar3.ComparisonIndex.Value.Value != 0) || (FVar18 = local_48, FVar3.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_70._0_8_ = local_70._0_8_ & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_70,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar23 = 1;
      local_77 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_70._0_8_ = FVar3;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_70,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshLODRenderData.cpp"
                   ,0x3ab);
        bVar23 = 3;
        local_77 = 3;
      }
    }
    FVar18 = local_48;
    if (FThreadStats::bPrimaryEnable != false) {
      local_70._0_8_ = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      local_77 = bVar23 | 4;
      FVar18 = FVar3;
    }
  }
  if (param_2 == (UObject *)0x0) {
    pFVar14 = GetTypeName<USkinnedAsset>((FString *)&local_70);
    if ((pFVar14->Data).ArrayNum == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar22);
  }
  pUVar12 = Z_Construct_UClass_USkinnedAsset_NoRegister();
  iVar7 = (int)pUVar12->_padding_;
  if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar7) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
      &pUVar12->_padding_)) {
    pFVar14 = GetTypeName<USkinnedAsset>((FString *)&local_70);
    pwVar22 = L"";
    if ((pFVar14->Data).ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    pFVar14 = GetFullNameForCastLogError<UObject>(&local_58,param_2);
    if ((pFVar14->Data).ArrayNum != 0) {
      pwVar22 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar22,pwVar19);
  }
  FStripDataFlags::FStripDataFlags(local_74,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  if (((param_1->field_0x28 & 4) == 0) ||
     (((*(longlong *)&param_1->field_0x68 != 0 &&
       (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) ||
      ((*(uint *)&param_1->field_0x34 & 0x1000) == 0)))) {
    puVar4 = *(ulonglong **)&param_1->field_0x8;
    local_78 = false;
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      local_70._0_8_ = local_70._0_8_ & 0xffffffff00000000;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_70,4);
      if (1 < (uint)local_70._0_4_) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar9 = local_70._0_4_;
      if ((param_1->field_0x28 & 1) != 0) goto LAB_14866256c;
LAB_148662581:
      bVar23 = false;
    }
    else {
      uVar9 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
LAB_14866256c:
      local_78 = uVar9 != 0;
      if (!local_78) goto LAB_148662581;
      bVar23 = true;
    }
    puVar4 = *(ulonglong **)&param_1->field_0x8;
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      local_58.Data.AllocatorInstance.Data._0_4_ = 0;
      if ((param_1->field_0x28 & 1) == 0) {
        local_58.Data.AllocatorInstance.Data._0_4_ = (uint)((bool)bVar23 != false);
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_58,4);
      if (1 < local_58.Data.AllocatorInstance.Data._0_4_) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      FVar2.Value = local_58.Data.AllocatorInstance.Data._0_4_;
      if ((param_1->field_0x28 & 1) != 0) goto LAB_1486625f0;
    }
    else {
      FVar2.Value = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
LAB_1486625f0:
      bVar23 = FVar2.Value != 0;
    }
    *(uint *)&this->field_0x658 =
         ((uint)bVar23 ^ ZPULL(*(undefined4 *)&this->field_0x658,0,1)) & 1 ^
         *(undefined4 *)&this->field_0x658;
  }
  else {
    local_76[0] = this->bStreamedDataInlined;
    local_78 = false;
    ::operator<<(param_1,&local_78);
    ::operator<<(param_1,local_76);
    bVar23 = local_76[0];
  }
  lVar21 = 4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar15 = IConsoleManager::Get();
    plVar16 = (longlong *)
              (**(code **)((longlong)*pIVar15 + 0xc0))(pIVar15,L"r.FreeSkeletalMeshBuffers",1);
    pTVar17 = (TConsoleVariableData<int> *)0x0;
    if (plVar16 != (longlong *)0x0) {
      pTVar17 = (TConsoleVariableData<int> *)(**(code **)(*plVar16 + 0x68))(plVar16);
    }
    ::CVar = pTVar17;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar17 = ::CVar;
  if (::CVar == (TConsoleVariableData<int> *)0x0) {
    bVar5 = true;
  }
  else {
    bVar5 = IsInParallelGameThread();
    if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
      lVar21 = 0;
    }
    bVar5 = *(int *)((longlong)pTVar17->ShadowedValue + lVar21) == 0;
  }
  bVar20 = bVar5;
  if ((local_74[0].GlobalStripFlags & 2) == 0) {
    if (bVar5 == false) {
      this_00 = (FSkeletalMeshRenderData *)(**(code **)(*(longlong *)param_2 + 0x398))();
      iVar7 = FGPUBaseSkinVertexFactory::GetMaxGPUSkinBones((ITargetPlatform *)0x0);
      iVar8 = FSkeletalMeshRenderData::GetMaxBonesPerSection(this_00,0);
      if ((iVar8 <= iVar7) &&
         (cVar6 = (**(code **)(*(longlong *)param_2 + 0x468))(param_2,param_3), cVar6 == '\0')) {
        bVar20 = false;
        goto LAB_1486626b3;
      }
    }
    bVar20 = true;
  }
LAB_1486626b3:
  if ((((param_1->field_0x2b & 0x10) != 0) && (bVar20 != false)) &&
     (5 < (byte)LogSkeletalMesh._0_1_)) {
    local_70._0_4_ = *(undefined4 *)&param_2->field_0x18;
    local_70._4_4_ = *(uint *)&param_2->field_0x1c;
    ::FName::ToString((FName *)&local_70,&local_58);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
    if ((void *)CONCAT44(local_58.Data.AllocatorInstance.Data._4_4_,
                         local_58.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_58.Data.AllocatorInstance.Data._4_4_,
                                     local_58.Data.AllocatorInstance.Data._0_4_));
    }
  }
  TArrayPrivateFriend::Serialize<unsigned_short,TSizedDefaultAllocator<32>_>
            (param_1,&this->RequiredBones);
  if (((local_74[0].GlobalStripFlags & 2) == 0) && (local_78 == false)) {
    TArrayPrivateFriend::Serialize<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_>
              (param_1,&this->RenderSections);
    TArrayPrivateFriend::Serialize<unsigned_short,TSizedDefaultAllocator<32>_>
              (param_1,&this->ActiveBoneIndices);
    local_70._0_8_ = &this->BuffersSize;
    ::operator<<(param_1,(uint *)local_70._0_8_);
    if (bVar23 == 0) {
      if ((param_1->field_0x2b & 0x10) != 0) {
        FBulkData::Serialize((FBulkData *)&this->StreamingBulkData,param_1,param_2,false,1,None);
        uVar9 = FBulkData::GetBulkDataFlags((FBulkData *)&this->StreamingBulkData);
        this->bIsLODOptional = 0;
        *(uint *)&this->field_0x658 = *(uint *)&this->field_0x658 | uVar9 >> 10 & 2;
        lVar13 = FBulkData::GetBulkDataSize((FBulkData *)&this->StreamingBulkData);
        if (lVar13 == 0) {
          *(undefined4 *)local_70._0_8_ = 0;
        }
        else {
          (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID)
          ;
          FMultiSizeIndexContainer::SerializeMetaData(&this->MultiSizeIndexContainer,param_1,bVar20)
          ;
          if ((((param_1->field_0x28 & 1) != 0) &&
              (iVar7 = FArchiveState::CustomVer
                                 ((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID),
              iVar7 < 3)) && ((local_74[0].ClassStripFlags & 1) == 0)) {
            local_70.DataTypeSize = 2;
            local_70.IndexBuffer = (FRawStaticIndexBuffer16or32Interface *)0x0;
            FMultiSizeIndexContainer::SerializeMetaData(&local_70,param_1,bVar20);
            FMultiSizeIndexContainer::~FMultiSizeIndexContainer(&local_70);
          }
          FStaticMeshVertexBuffer::SerializeMetaData
                    (&(this->StaticVertexBuffers).StaticMeshVertexBuffer,param_1);
          FPositionVertexBuffer::SerializeMetaData
                    (&(this->StaticVertexBuffers).PositionVertexBuffer,param_1);
          FColorVertexBuffer::SerializeMetaData
                    (&(this->StaticVertexBuffers).ColorVertexBuffer,param_1);
          if ((param_1->field_0x28 & 1) != 0) {
            (this->SkinWeightVertexBuffer).DataVertexBuffer.bNeedsCPUAccess = bVar20;
            (this->SkinWeightVertexBuffer).LookupVertexBuffer.bNeedsCPUAccess = bVar20;
          }
          FSkinWeightVertexBuffer::SerializeMetaData(&this->SkinWeightVertexBuffer,param_1);
          bVar5 = HasClothData(this);
          if (bVar5) {
            FSkeletalMeshVertexClothBuffer::SerializeMetaData(&this->ClothVertexBuffer,param_1);
          }
          FSkinWeightProfilesData::SerializeMetaData(&this->SkinWeightProfilesData,param_1);
          FSkinWeightProfilesData::Init(&this->SkinWeightProfilesData,&this->SkinWeightVertexBuffer)
          ;
          ::operator<<(param_1,&(this->SourceRayTracingGeometry).RawDataHeader);
          if (((param_1->field_0x28 & 1) != 0) &&
             (bVar5 = RayTracing::ShouldForceRuntimeBLAS(), bVar5)) {
            local_70._0_8_ = (FName)0xffffffffffffffff;
            local_70.IndexBuffer = (FRawStaticIndexBuffer16or32Interface *)0xffffffffffffffff;
            local_60 = 0xffffffffffffffff;
            (this->SourceRayTracingGeometry).RawDataHeader.Reserved[0] = 0xffffffff;
            (this->SourceRayTracingGeometry).RawDataHeader.Reserved[1] = 0xffffffff;
            (this->SourceRayTracingGeometry).RawDataHeader.Reserved[2] = 0xffffffff;
            (this->SourceRayTracingGeometry).RawDataHeader.Reserved[3] = 0xffffffff;
            (this->SourceRayTracingGeometry).RawDataHeader.Reserved[4] = 0xffffffff;
            (this->SourceRayTracingGeometry).RawDataHeader.Reserved[5] = 0xffffffff;
          }
        }
      }
    }
    else {
      SerializeStreamedData(this,param_1,(USkinnedAsset *)param_2,param_3,'\0',bVar20,bVar5);
      this->bIsLODOptional = 0;
    }
  }
  bVar23 = local_77;
  if ((local_77 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar23 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar23 & 4) != 0) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return;
}

// SerializeAvailabilityInfo @ 148663280

void __thiscall
FSkeletalMeshLODRenderData::SerializeAvailabilityInfo
          (FSkeletalMeshLODRenderData *this,FArchive *param_1,int param_2,bool param_3,bool param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 in_register_00000084;
  FMultiSizeIndexContainer local_18;
  
  (**(code **)(*(longlong *)param_1 + 0x230))
            (param_1,&FUE5ReleaseStreamObjectVersion::GUID,CONCAT44(in_register_00000084,param_2));
  FMultiSizeIndexContainer::SerializeMetaData(&this->MultiSizeIndexContainer,param_1,param_4);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID)
    ;
    if ((iVar2 < 3) && (!param_3)) {
      local_18.DataTypeSize = '\x02';
      local_18.IndexBuffer = (FRawStaticIndexBuffer16or32Interface *)0x0;
      FMultiSizeIndexContainer::SerializeMetaData(&local_18,param_1,param_4);
      FMultiSizeIndexContainer::~FMultiSizeIndexContainer(&local_18);
    }
  }
  FStaticMeshVertexBuffer::SerializeMetaData
            (&(this->StaticVertexBuffers).StaticMeshVertexBuffer,param_1);
  FPositionVertexBuffer::SerializeMetaData
            (&(this->StaticVertexBuffers).PositionVertexBuffer,param_1);
  FColorVertexBuffer::SerializeMetaData(&(this->StaticVertexBuffers).ColorVertexBuffer,param_1);
  if ((param_1->field_0x28 & 1) != 0) {
    (this->SkinWeightVertexBuffer).DataVertexBuffer.bNeedsCPUAccess = param_4;
    (this->SkinWeightVertexBuffer).LookupVertexBuffer.bNeedsCPUAccess = param_4;
  }
  FSkinWeightVertexBuffer::SerializeMetaData(&this->SkinWeightVertexBuffer,param_1);
  bVar1 = HasClothData(this);
  if (bVar1) {
    FSkeletalMeshVertexClothBuffer::SerializeMetaData(&this->ClothVertexBuffer,param_1);
  }
  FSkinWeightProfilesData::SerializeMetaData(&this->SkinWeightProfilesData,param_1);
  FSkinWeightProfilesData::Init(&this->SkinWeightProfilesData,&this->SkinWeightVertexBuffer);
  ::operator<<(param_1,&(this->SourceRayTracingGeometry).RawDataHeader);
  if ((param_1->field_0x28 & 1) != 0) {
    bVar1 = RayTracing::ShouldForceRuntimeBLAS();
    if (bVar1) {
      (this->SourceRayTracingGeometry).RawDataHeader.Reserved[0] = 0xffffffff;
      (this->SourceRayTracingGeometry).RawDataHeader.Reserved[1] = 0xffffffff;
      (this->SourceRayTracingGeometry).RawDataHeader.Reserved[2] = 0xffffffff;
      (this->SourceRayTracingGeometry).RawDataHeader.Reserved[3] = 0xffffffff;
      (this->SourceRayTracingGeometry).RawDataHeader.Reserved[4] = 0xffffffff;
      (this->SourceRayTracingGeometry).RawDataHeader.Reserved[5] = 0xffffffff;
    }
  }
  return;
}

// SerializeStreamedData @ 1486633f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FSkeletalMeshLODRenderData::SerializeStreamedData
          (FSkeletalMeshLODRenderData *this,FArchive *param_1,USkinnedAsset *param_2,int param_3,
          uchar param_4,bool param_5,bool param_6)

{
  uint *puVar1;
  FName *pFVar2;
  ulonglong *puVar3;
  code *pcVar4;
  void *pvVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  EShaderPlatform EVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  FName *pFVar16;
  uchar uVar17;
  undefined1 local_res8 [8];
  FStripDataFlags local_res10 [4];
  FStripDataFlags local_res18 [4];
  int local_res20;
  uint local_b8;
  FName local_b4;
  void *local_a8;
  undefined8 local_a0;
  FName *local_98;
  ulonglong local_90;
  FMultiSizeIndexContainer local_88;
  FString local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  local_res20 = param_3;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5SpecialProjectStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  FStripDataFlags::FStripDataFlags(local_res10,param_1,param_4,&GOldestLoadablePackageFileUEVersion)
  ;
  FMultiSizeIndexContainer::Serialize(&this->MultiSizeIndexContainer,param_1,param_5);
  if (((this->MultiSizeIndexContainer).IndexBuffer == (FRawStaticIndexBuffer16or32Interface *)0x0)
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("IndexBuffer != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                            ,0x51,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ((this->MultiSizeIndexContainer).IndexBuffer)->_padding_ =
       (longlong)SkeletalMeshResourceNames::MultiSizeIndexContainerName;
  if ((param_1->field_0x28 & 1) != 0) {
    (this->SkinWeightVertexBuffer).DataVertexBuffer.bNeedsCPUAccess = param_5;
    (this->SkinWeightVertexBuffer).LookupVertexBuffer.bNeedsCPUAccess = param_5;
  }
  FPositionVertexBuffer::Serialize
            (&(this->StaticVertexBuffers).PositionVertexBuffer,param_1,param_5);
  (this->StaticVertexBuffers).PositionVertexBuffer._padding_ =
       (longlong)SkeletalMeshResourceNames::StaticPositionVertexBufferName;
  FStaticMeshVertexBuffer::Serialize
            (&(this->StaticVertexBuffers).StaticMeshVertexBuffer,param_1,param_5);
  (this->StaticVertexBuffers).StaticMeshVertexBuffer._padding_ =
       (longlong)SkeletalMeshResourceNames::StaticMeshVertexBufferName;
  ::operator<<(param_1,&this->SkinWeightVertexBuffer);
  if ((param_2 != (USkinnedAsset *)0x0) &&
     (cVar7 = (**(code **)(*(longlong *)param_2 + 0x470))(param_2), cVar7 != '\0')) {
    FColorVertexBuffer::Serialize(&(this->StaticVertexBuffers).ColorVertexBuffer,param_1,param_6);
    (this->StaticVertexBuffers).ColorVertexBuffer._padding_ =
         (longlong)SkeletalMeshResourceNames::StaticColorVertexBufferName;
  }
  if ((((param_1->field_0x28 & 1) != 0) &&
      (iVar10 = FArchiveState::CustomVer
                          ((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID),
      iVar10 < 3)) && ((local_res10[0].ClassStripFlags & 1) == 0)) {
    local_88.DataTypeSize = '\x02';
    local_88.IndexBuffer = (FRawStaticIndexBuffer16or32Interface *)0x0;
    FMultiSizeIndexContainer::Serialize(&local_88,param_1,param_6);
    FMultiSizeIndexContainer::~FMultiSizeIndexContainer(&local_88);
  }
  bVar6 = HasClothData(this);
  if (bVar6) {
    ::operator<<(param_1,&this->ClothVertexBuffer);
    (this->ClothVertexBuffer)._padding_ = (longlong)SkeletalMeshResourceNames::ClothVertexBufferName
    ;
  }
  ::operator<<(param_1,&this->SkinWeightProfilesData);
  FSkinWeightProfilesData::Init(&this->SkinWeightProfilesData,&this->SkinWeightVertexBuffer);
  if ((((param_1->field_0x28 & 1) != 0) && ((param_1->field_0x29 & 2) == 0)) &&
     (param_2 != (USkinnedAsset *)0x0)) {
    (**(code **)(*(longlong *)param_2 + 0x488))(param_2,param_3);
  }
  ::operator<<(param_1,&(this->SourceRayTracingGeometry).RawDataHeader);
  TArray<unsigned_char,TMemoryImageAllocator<0>_>::BulkSerialize
            ((TArray<unsigned_char,TMemoryImageAllocator<0>_> *)
             &(this->SourceRayTracingGeometry).RawData._padding_,param_1,false);
  (this->SourceRayTracingGeometry)._padding_ =
       (longlong)SkeletalMeshResourceNames::SourceRayTracingGeometryName;
  if (((param_1->field_0x28 & 1) != 0) && (bVar6 = RayTracing::ShouldForceRuntimeBLAS(), bVar6)) {
    local_68 = 0xffffffffffffffff;
    local_60 = 0xffffffffffffffff;
    local_58 = 0xffffffffffffffff;
    (this->SourceRayTracingGeometry).RawDataHeader.Reserved[0] = 0xffffffff;
    (this->SourceRayTracingGeometry).RawDataHeader.Reserved[1] = 0xffffffff;
    (this->SourceRayTracingGeometry).RawDataHeader.Reserved[2] = 0xffffffff;
    (this->SourceRayTracingGeometry).RawDataHeader.Reserved[3] = 0xffffffff;
    (this->SourceRayTracingGeometry).RawDataHeader.Reserved[4] = 0xffffffff;
    (this->SourceRayTracingGeometry).RawDataHeader.Reserved[5] = 0xffffffff;
    (**(code **)((this->SourceRayTracingGeometry).RawData._padding_ + 0x18))
              (&(this->SourceRayTracingGeometry).RawData);
  }
  if (((((param_1->field_0x28 & 4) == 0) ||
       (bVar6 = FMorphTargetVertexInfoBuffers::IsPlatformShaderSupported(GMaxRHIShaderPlatform),
       !bVar6)) || (param_2 == (USkinnedAsset *)0x0)) ||
     (lVar12 = (**(code **)(*(longlong *)param_2 + 0x458))(param_2), *(int *)(lVar12 + 8) < 1)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  lVar12 = *(longlong *)&param_1->field_0x68;
  if ((lVar12 != 0) && (*(longlong *)(lVar12 + 0x10) != 0)) {
    bVar6 = false;
    cVar7 = (**(code **)(*(longlong *)(*(longlong *)(lVar12 + 8) + 8) + 0xb0))
                      (*(longlong *)(lVar12 + 8) + 8);
    if ((cVar7 == '\0') &&
       ((param_2 != (USkinnedAsset *)0x0 &&
        (lVar12 = (**(code **)(*(longlong *)param_2 + 0x458))(param_2), 0 < *(int *)(lVar12 + 8)))))
    {
      plVar13 = (longlong *)0x0;
      local_98 = (FName *)0x0;
      local_90 = 0;
      if (*(longlong *)&param_1->field_0x68 != 0) {
        plVar13 = *(longlong **)(*(longlong *)&param_1->field_0x68 + 8);
      }
      (**(code **)(*plVar13 + 0xb8))(plVar13,&local_98);
      iVar10 = (int)local_90;
      uVar14 = (ulonglong)(int)local_90;
      pFVar2 = local_98 + uVar14;
      pFVar16 = local_98;
      while( true ) {
        if ((int)uVar14 != iVar10) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar16 == pFVar2) goto LAB_14866378d;
        EVar9 = ShaderFormatToLegacyShaderPlatform(*pFVar16);
        bVar8 = FMorphTargetVertexInfoBuffers::IsPlatformShaderSupported(EVar9);
        if (bVar8) break;
        uVar14 = local_90 & 0xffffffff;
        pFVar16 = pFVar16 + 1;
      }
      bVar6 = true;
LAB_14866378d:
      param_3 = local_res20;
      if (local_98 != (FName *)0x0) {
        FMemory::Free(local_98);
        param_3 = local_res20;
      }
    }
  }
  iVar10 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FUE5SpecialProjectStreamObjectVersion::GUID);
  if (iVar10 < 7) goto LAB_1486638d6;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_b8 = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_b8 = (uint)bVar6;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_b8,4);
    if (1 < local_b8) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar15 = local_b8;
    if ((param_1->field_0x28 & 1) != 0) goto LAB_148663820;
  }
  else {
    uVar15 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
LAB_148663820:
    bVar6 = uVar15 != 0;
  }
  if ((bVar6) && (param_2 != (USkinnedAsset *)0x0)) {
    ::operator<<(param_1,&this->MorphTargetVertexInfoBuffers);
    (this->MorphTargetVertexInfoBuffers)._padding_ =
         (longlong)SkeletalMeshResourceNames::MorphTargetVertexInfoBuffersName;
    lVar12 = (**(code **)(*(longlong *)param_2 + 0x330))(param_2,param_3);
    if (*(float *)(lVar12 + 0xbc) * __real_3951b717 !=
        (this->MorphTargetVertexInfoBuffers).PositionPrecision) {
      local_b4.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
      local_b4.Number = *(uint *)&param_2->field_0x1c;
      ::FName::ToString(&local_b4,&local_78);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PositionPrecision == MorphTargetVertexInfoBuffers.GetPositionPrecision()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshLODRenderData.cpp"
                         ,0x369,
                         L"Morph target render data position tollerance for the skeleton %s does not match the expected tolerance in the LOD info."
                        );
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
LAB_1486638d6:
  iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if (0x70 < iVar10) {
    FSkeletalMeshVertexAttributeRenderData::Serialize(&this->VertexAttributeBuffers,param_1);
  }
  iVar10 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
  if (0x85 < iVar10) {
    lVar12 = *(longlong *)&param_1->field_0x68;
    uVar17 = '\0';
    if ((lVar12 != 0) && (*(longlong *)(lVar12 + 0x10) != 0)) {
      local_a8 = (void *)0x0;
      local_a0 = 0;
      (**(code **)(**(longlong **)(lVar12 + 8) + 0xb8))(*(longlong **)(lVar12 + 8),&local_a8);
      pvVar5 = ThreadLocalStoragePointer;
      uVar15 = 0;
      if (0 < (int)local_a0) {
        do {
          uVar11 = 0;
          if ((int)uVar15 < (int)local_a0) {
            uVar11 = ~uVar15 >> 0x1f;
          }
          if ((uVar11 == 0) &&
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
          EVar9 = ShaderFormatToLegacyShaderPlatform
                            (*(FName *)((longlong)local_a8 + (longlong)(int)uVar15 * 8));
          if ((*(int *)(*(longlong *)((longlong)pvVar5 + (ulonglong)_tls_index * 8) + 0x9d4c) <
               ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            MeshDeformerProvider = IMeshDeformerProvider::Get();
            _Init_thread_footer(&::_TSS0);
          }
          if ((MeshDeformerProvider != (IMeshDeformerProvider *)0x0) &&
             (cVar7 = (**(code **)((longlong)*MeshDeformerProvider + 8))(MeshDeformerProvider,EVar9)
             , cVar7 != '\0')) {
            if (local_a8 != (void *)0x0) {
              FMemory::Free(local_a8);
            }
            goto LAB_148663a47;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_a0);
      }
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
      uVar17 = '\x01';
    }
LAB_148663a47:
    FStripDataFlags::FStripDataFlags
              (local_res18,param_1,uVar17,&GOldestLoadablePackageFileUEVersion);
    if ((local_res18[0].ClassStripFlags & 1) == 0) {
      ::operator<<(param_1,&this->HalfEdgeBuffer);
      (this->HalfEdgeBuffer)._padding_ = (longlong)SkeletalMeshResourceNames::HalfEdgeBufferName;
    }
  }
  return;
}

// ShouldForceKeepCPUResources @ 148668250

bool __cdecl FSkeletalMeshLODRenderData::ShouldForceKeepCPUResources(void)

{
  bool bVar1;
  IConsoleManager *pIVar2;
  longlong *plVar3;
  TConsoleVariableData<int> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  
  pTVar5 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar2 = IConsoleManager::Get();
    plVar3 = (longlong *)
             (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.FreeSkeletalMeshBuffers",1);
    pTVar4 = pTVar5;
    if (plVar3 != (longlong *)0x0) {
      pTVar4 = (TConsoleVariableData<int> *)(**(code **)(*plVar3 + 0x68))(plVar3);
    }
    ::CVar = pTVar4;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar4 = ::CVar;
  if (::CVar == (TConsoleVariableData<int> *)0x0) {
    return true;
  }
  bVar1 = IsInParallelGameThread();
  if ((!bVar1) && (bVar1 = IsInGameThread(), !bVar1)) {
    pTVar5 = (TConsoleVariableData<int> *)&DAT_00000004;
  }
  return *(int *)((longlong)pTVar4->ShadowedValue + (longlong)pTVar5->ShadowedValue) == 0;
}

// ShouldKeepCPUResources @ 148668330

bool __cdecl
FSkeletalMeshLODRenderData::ShouldKeepCPUResources(USkinnedAsset *param_1,int param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  FSkeletalMeshRenderData *this;
  
  if (!param_3) {
    this = (FSkeletalMeshRenderData *)(**(code **)(*(longlong *)param_1 + 0x398))();
    iVar2 = FGPUBaseSkinVertexFactory::GetMaxGPUSkinBones((ITargetPlatform *)0x0);
    iVar3 = FSkeletalMeshRenderData::GetMaxBonesPerSection(this,0);
    if (iVar3 <= iVar2) {
      cVar1 = (**(code **)(*(longlong *)param_1 + 0x468))(param_1,param_2);
      if (cVar1 == '\0') {
        return false;
      }
    }
  }
  return true;
}

