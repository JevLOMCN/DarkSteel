// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 5

// FGeometryCollectionRenderData @ 1463a1fa0

FGeometryCollectionRenderData * __thiscall
FGeometryCollectionRenderData::FGeometryCollectionRenderData(FGeometryCollectionRenderData *this)

{
  this->bHasMeshData = false;
  this->bHasNaniteData = false;
  FRawStaticIndexBuffer::FRawStaticIndexBuffer(&(this->MeshResource).IndexBuffer,false);
  FPositionVertexBuffer::FPositionVertexBuffer(&(this->MeshResource).PositionVertexBuffer);
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(&(this->MeshResource).StaticMeshVertexBuffer);
  FColorVertexBuffer::FColorVertexBuffer(&(this->MeshResource).ColorVertexBuffer);
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&(this->MeshResource).BoneMapVertexBuffer);
  (this->MeshResource).BoneMapVertexBuffer._padding_ = (longlong)&___7FBoneMapVertexBuffer__6B_;
  (this->MeshResource).BoneMapVertexBuffer.NumVertices = 0;
  (this->MeshResource).BoneMapVertexBuffer.bNeedsCPUAccess = true;
  (this->MeshResource).BoneMapVertexBuffer.VertexBufferSRV.Reference = (FRHIShaderResourceView *)0x0
  ;
  (this->MeshResource).BoneMapVertexBuffer.BoneMapData = (FStaticMeshVertexDataInterface *)0x0;
  (this->MeshResource).BoneMapVertexBuffer.Data = (uchar *)0x0;
  (this->MeshDescription).NumVertices = 0;
  (this->MeshDescription).NumTriangles = 0;
  (this->MeshDescription).Sections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshDescription).Sections.ArrayNum = 0;
  (this->MeshDescription).Sections.ArrayMax = 0;
  (this->MeshDescription).SectionsNoInternal.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->MeshDescription).SectionsNoInternal.ArrayNum = 0;
  (this->MeshDescription).SectionsNoInternal.ArrayMax = 0;
  (this->MeshDescription).SubSections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshDescription).SubSections.ArrayNum = 0;
  (this->MeshDescription).SubSections.ArrayMax = 0;
  (this->NaniteResourcesPtr).Ptr = (FResources *)0x0;
  (this->PreSkinnedBounds).Origin.field0_0x0._s_0.X = 0.0;
  (this->PreSkinnedBounds).Origin.field0_0x0._s_0.Y = 0.0;
  (this->PreSkinnedBounds).Origin.field0_0x0._s_0.Z = 0.0;
  (this->PreSkinnedBounds).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->PreSkinnedBounds).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->PreSkinnedBounds).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->PreSkinnedBounds).SphereRadius = 0.0;
  this->bIsInitialized = false;
  return this;
}

// ~FGeometryCollectionRenderData @ 1463a55e0

void __thiscall
FGeometryCollectionRenderData::~FGeometryCollectionRenderData(FGeometryCollectionRenderData *this)

{
  FResources *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if (this->bIsInitialized != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionRenderData.cpp"
                       ,0x2c5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->NaniteResourcesPtr).Ptr;
  if (pFVar1 != (FResources *)0x0) {
    (**(code **)&pFVar1[-1].NumHierarchyDwords)(&pFVar1[-1].NumHierarchyDwords);
  }
  pFVar2 = (this->MeshDescription).SubSections.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MeshDescription).SectionsNoInternal.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MeshDescription).Sections.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FGeometryCollectionMeshResources::~FGeometryCollectionMeshResources(&this->MeshResource);
  return;
}

// InitResources @ 1463bb770

void __thiscall
FGeometryCollectionRenderData::InitResources
          (FGeometryCollectionRenderData *this,UGeometryCollection *param_1)

{
  longlong lVar1;
  
  if (this->bIsInitialized != false) {
    ReleaseResources(this);
  }
  if (this->bHasMeshData != false) {
    lVar1 = param_1->_padding_;
    (this->MeshResource).IndexBuffer._padding_ = lVar1;
    (this->MeshResource).StaticMeshVertexBuffer._padding_ = lVar1;
    (this->MeshResource).PositionVertexBuffer._padding_ = lVar1;
    (this->MeshResource).ColorVertexBuffer._padding_ = lVar1;
    (this->MeshResource).BoneMapVertexBuffer._padding_ = lVar1;
    BeginInitResource((FRenderResource *)&this->MeshResource,(FRenderCommandPipe *)0x0);
    BeginInitResource((FRenderResource *)&(this->MeshResource).PositionVertexBuffer,
                      (FRenderCommandPipe *)0x0);
    BeginInitResource((FRenderResource *)&(this->MeshResource).StaticMeshVertexBuffer,
                      (FRenderCommandPipe *)0x0);
    BeginInitResource((FRenderResource *)&(this->MeshResource).ColorVertexBuffer,
                      (FRenderCommandPipe *)0x0);
    BeginInitResource((FRenderResource *)&(this->MeshResource).BoneMapVertexBuffer,
                      (FRenderCommandPipe *)0x0);
  }
  if (this->bHasNaniteData != false) {
    Nanite::FResources::InitResources((this->NaniteResourcesPtr).Ptr,(UObject *)param_1);
  }
  this->bIsInitialized = true;
  return;
}

// ReleaseResources @ 1463c2270

void __thiscall FGeometryCollectionRenderData::ReleaseResources(FGeometryCollectionRenderData *this)

{
  if (this->bIsInitialized != false) {
    if (this->bHasMeshData != false) {
      BeginReleaseResource((FRenderResource *)&this->MeshResource,(FRenderCommandPipe *)0x0);
      BeginReleaseResource
                ((FRenderResource *)&(this->MeshResource).PositionVertexBuffer,
                 (FRenderCommandPipe *)0x0);
      BeginReleaseResource
                ((FRenderResource *)&(this->MeshResource).StaticMeshVertexBuffer,
                 (FRenderCommandPipe *)0x0);
      BeginReleaseResource
                ((FRenderResource *)&(this->MeshResource).ColorVertexBuffer,
                 (FRenderCommandPipe *)0x0);
      BeginReleaseResource
                ((FRenderResource *)&(this->MeshResource).BoneMapVertexBuffer,
                 (FRenderCommandPipe *)0x0);
    }
    if (this->bHasNaniteData != false) {
      Nanite::FResources::ReleaseResources((this->NaniteResourcesPtr).Ptr);
    }
    this->bIsInitialized = false;
  }
  return;
}

// Serialize @ 1463c4ae0

void __thiscall
FGeometryCollectionRenderData::Serialize
          (FGeometryCollectionRenderData *this,FArchive *param_1,UGeometryCollection *param_2)

{
  undefined1 *puVar1;
  FGeometryCollectionMeshDescription *pFVar2;
  TArray<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  uint *puVar5;
  FStaticMeshVertexDataInterface *pFVar6;
  uint *puVar7;
  FScriptContainerElement *pFVar8;
  FGeometryCollection *this_00;
  longlong *plVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  uchar *puVar13;
  FArchive *pFVar14;
  uint local_res8 [2];
  uint local_res10;
  UGeometryCollection *local_res18;
  float local_res20 [2];
  undefined8 local_270 [2];
  undefined8 local_260 [2];
  undefined8 local_250 [2];
  undefined1 local_240 [432];
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  undefined8 uStack_70;
  TRefCountPtr<FRHIShaderResourceView> local_68;
  FStaticMeshVertexDataInterface *pFStack_60;
  uchar *local_58;
  
  puVar13 = (uchar *)0x0;
  iVar12 = 0;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x28;
  local_res18 = param_2;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    local_res8[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res8[0] = (uint)(this->bHasMeshData != false);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar1 & 1) != 0) {
      this->bHasMeshData = local_res8[0] != 0;
    }
  }
  else {
    this->bHasMeshData = *piVar4 != 0;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    local_res10 = 0;
    if ((*puVar1 & 1) == 0) {
      local_res10 = (uint)(this->bHasNaniteData != false);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1);
    if (1 < local_res10) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar1 & 1) != 0) {
      this->bHasNaniteData = local_res10 != 0;
    }
  }
  else {
    this->bHasNaniteData = *piVar4 != 0;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if (this->bHasMeshData == false) {
    if ((*puVar1 & 1) != 0) {
      FRawStaticIndexBuffer::FRawStaticIndexBuffer((FRawStaticIndexBuffer *)local_240,false);
      FPositionVertexBuffer::FPositionVertexBuffer((FPositionVertexBuffer *)(local_240 + 0x50));
      FStaticMeshVertexBuffer::FStaticMeshVertexBuffer
                ((FStaticMeshVertexBuffer *)(local_240 + 0xa0));
      FColorVertexBuffer::FColorVertexBuffer((FColorVertexBuffer *)(local_240 + 0x158));
      local_240._424_8_ = 0;
      lStack_90 = 0;
      local_58 = (uchar *)0x0;
      local_88 = 0;
      lStack_80 = 0;
      local_78 = 0;
      uStack_70._0_4_ = 0;
      uStack_70._4_1_ = false;
      uStack_70._5_3_ = 0;
      local_68.Reference = (FRHIShaderResourceView *)0x0;
      pFStack_60 = (FStaticMeshVertexDataInterface *)0x0;
      FVertexBuffer::FVertexBuffer((FVertexBuffer *)(local_240 + 0x1a8));
      uStack_70._5_3_ = SUB83(uStack_70,5);
      uStack_70._0_4_ = 0;
      uStack_70._4_1_ = true;
      local_240._424_8_ = &___7FBoneMapVertexBuffer__6B_;
      local_58 = (uchar *)0x0;
      local_68.Reference = (FRHIShaderResourceView *)0x0;
      pFStack_60 = (FStaticMeshVertexDataInterface *)0x0;
      FGeometryCollectionMeshResources::operator=
                (&this->MeshResource,(FGeometryCollectionMeshResources *)local_240);
      local_240._424_8_ = &___7FBoneMapVertexBuffer__6B_;
      if (pFStack_60 != (FStaticMeshVertexDataInterface *)0x0) {
        (**(code **)*pFStack_60)();
      }
      pFStack_60 = (FStaticMeshVertexDataInterface *)0x0;
      if (local_68.Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_68.Reference);
      }
      FVertexBuffer::~FVertexBuffer((FVertexBuffer *)(local_240 + 0x1a8));
      FColorVertexBuffer::~FColorVertexBuffer((FColorVertexBuffer *)(local_240 + 0x158));
      FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer
                ((FStaticMeshVertexBuffer *)(local_240 + 0xa0));
      FPositionVertexBuffer::~FPositionVertexBuffer((FPositionVertexBuffer *)(local_240 + 0x50));
      FRawStaticIndexBuffer::~FRawStaticIndexBuffer((FRawStaticIndexBuffer *)local_240);
      (this->MeshDescription).NumVertices = 0;
      (this->MeshDescription).NumTriangles = 0;
      pTVar3 = &(this->MeshDescription).Sections;
      if (pTVar3 != (TArray<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_> *)local_270)
      {
        pFVar8 = (pTVar3->AllocatorInstance).Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this->MeshDescription).Sections.ArrayNum = 0;
        (this->MeshDescription).Sections.ArrayMax = 0;
      }
      pTVar3 = &(this->MeshDescription).SectionsNoInternal;
      if (pTVar3 != (TArray<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_> *)local_260)
      {
        pFVar8 = (pTVar3->AllocatorInstance).Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this->MeshDescription).SectionsNoInternal.ArrayNum = 0;
        (this->MeshDescription).SectionsNoInternal.ArrayMax = 0;
      }
      pTVar3 = &(this->MeshDescription).SubSections;
      if (pTVar3 != (TArray<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_> *)local_250)
      {
        pFVar8 = (pTVar3->AllocatorInstance).Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this->MeshDescription).SubSections.ArrayNum = 0;
        (this->MeshDescription).SubSections.ArrayMax = 0;
      }
    }
  }
  else {
    if (((*puVar1 & 1) == 0) || (1 < (int)GMaxRHIFeatureLevel)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    FRawStaticIndexBuffer::Serialize(&(this->MeshResource).IndexBuffer,param_1,false);
    FPositionVertexBuffer::Serialize(&(this->MeshResource).PositionVertexBuffer,param_1,bVar11);
    FStaticMeshVertexBuffer::Serialize(&(this->MeshResource).StaticMeshVertexBuffer,param_1,false);
    FColorVertexBuffer::Serialize(&(this->MeshResource).ColorVertexBuffer,param_1,false);
    (this->MeshResource).BoneMapVertexBuffer.bNeedsCPUAccess = bVar11;
    puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
      puVar5 = &(this->MeshResource).BoneMapVertexBuffer.NumVertices;
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar5,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar5);
      }
    }
    else {
      (this->MeshResource).BoneMapVertexBuffer.NumVertices = *puVar5;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    if ((param_1->field_0x28 & 1) != 0) {
      FBoneMapVertexBuffer::AllocateData(&(this->MeshResource).BoneMapVertexBuffer,bVar11);
    }
    pFVar6 = (this->MeshResource).BoneMapVertexBuffer.BoneMapData;
    if (pFVar6 != (FStaticMeshVertexDataInterface *)0x0) {
      (**(code **)((longlong)*pFVar6 + 0x40))(pFVar6,param_1,0);
      if ((this->MeshResource).BoneMapVertexBuffer.NumVertices != 0) {
        puVar13 = (uchar *)(**(code **)((longlong)
                                        *(this->MeshResource).BoneMapVertexBuffer.BoneMapData + 0x30
                                       ))();
      }
      (this->MeshResource).BoneMapVertexBuffer.Data = puVar13;
    }
    pFVar2 = &this->MeshDescription;
    puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&pFVar2->NumVertices);
      }
    }
    else {
      pFVar2->NumVertices = *puVar5;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar5 = &(this->MeshDescription).NumTriangles;
    puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar5,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar5);
      }
    }
    else {
      *puVar5 = *puVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    pFVar14 = TArrayPrivateFriend::
              Serialize<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_>
                        (param_1,&(this->MeshDescription).Sections);
    TArrayPrivateFriend::Serialize<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_>
              (pFVar14,&(this->MeshDescription).SectionsNoInternal);
    TArrayPrivateFriend::Serialize<FGeometryCollectionMeshElement,TSizedDefaultAllocator<32>_>
              (param_1,&(this->MeshDescription).SubSections);
    param_2 = local_res18;
  }
  if (this->bHasNaniteData == false) {
    if ((param_1->field_0x28 & 1) != 0) {
      ClearNaniteResources(&this->NaniteResourcesPtr);
    }
  }
  else {
    InitNaniteResources(&this->NaniteResourcesPtr,false);
    if ((param_1->field_0x28 & 4) != 0) {
      this_00 = (param_2->GeometryCollection).Object;
      if (this_00 != (FGeometryCollection *)0x0) {
        iVar12 = FManagedArrayCollection::NumElements
                           ((FManagedArrayCollection *)this_00,FGeometryCollection::GeometryGroup);
      }
      if ((param_2->EnableNanite == false) ||
         (iVar12 != (((this->NaniteResourcesPtr).Ptr)->HierarchyRootOffsets).ArrayNum)) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
    }
    Nanite::FResources::Serialize((this->NaniteResourcesPtr).Ptr,param_1,(UObject *)param_2,true);
  }
  pFVar14 = UE::Math::operator<<(param_1,&(this->PreSkinnedBounds).Origin);
  UE::Math::operator<<(pFVar14,&(this->PreSkinnedBounds).BoxExtent);
  if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
    if (((param_1->field_0x28 & 1) == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ar.IsLoading()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\BoxSphereBounds.h"
                            ,0x1a2,L"float -> double conversion applied outside of load!"), bVar11))
    {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    plVar9 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar9[1] < (float *)*plVar9 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res20);
      }
    }
    else {
      local_res20[0] = *(float *)*plVar9;
      *plVar9 = *plVar9 + 4;
    }
    (this->PreSkinnedBounds).SphereRadius = (double)local_res20[0];
    return;
  }
  ::operator<<(param_1,&(this->PreSkinnedBounds).SphereRadius);
  return;
}

