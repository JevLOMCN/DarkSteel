// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FRayTracingInstanceCollector @ 1484bbb40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRayTracingInstanceCollector * __thiscall
FRayTracingInstanceCollector::FRayTracingInstanceCollector
          (FRayTracingInstanceCollector *this,Type param_1,
          TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *param_2,
          bool param_3)

{
  bool bVar1;
  
  TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
  TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
            ((TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
              *)this,0);
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(Type *)&this->_padding_ = param_1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 3;
  bVar1 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)param_1);
  *(bool *)&this->_padding_ = bVar1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  (this->Views).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Views).ArrayNum = 0;
  (this->Views).ArrayMax = 0;
  (this->RayTracingInstances).AllocatorInstance.Data = (FRayTracingInstanceAndViewIndex *)0x0;
  (this->RayTracingInstances).ArrayNum = 0;
  (this->RayTracingInstances).ArrayMax = 0;
  (this->RDGPooledBuffers).AllocatorInstance.SecondaryData.Data =
       (TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator> *)0x0;
  (this->RDGPooledBuffers).ArrayNum = 0;
  (this->RDGPooledBuffers).ArrayMax = 2;
  (this->RayTracingGeometriesToUpdate).AllocatorInstance.Data =
       (FRayTracingDynamicGeometryUpdateRequest *)0x0;
  (this->RayTracingGeometriesToUpdate).ArrayNum = 0;
  (this->RayTracingGeometriesToUpdate).ArrayMax = 0;
  *(undefined8 *)&(this->ReferencedGeometryGroups).Elements = 0;
  *(undefined8 *)&(this->ReferencedGeometryGroups).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedGeometryGroups).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedGeometryGroups).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedGeometryGroups).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedGeometryGroups).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencedGeometryGroups).Elements.field_0x34 = 0;
  (this->ReferencedGeometryGroups).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencedGeometryGroups).HashSize = 0;
  *(undefined8 *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements = 0;
  *(undefined8 *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencedGeometryGroupsForDynamicUpdate).Elements.field_0x34 = 0;
  (this->ReferencedGeometryGroupsForDynamicUpdate).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->ReferencedGeometryGroupsForDynamicUpdate).HashSize = 0;
  this->bTrackReferencedGeometryGroups = param_3;
  return this;
}

// AddRayTracingGeometryUpdate @ 1484c1d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001484c1fe9) */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FRayTracingInstanceCollector::AddRayTracingGeometryUpdate
          (FRayTracingInstanceCollector *this,int param_1,
          FRayTracingDynamicGeometryUpdateParams *param_2)

{
  int *piVar1;
  TRefCountPtr<FRHIBuffer> *pTVar2;
  FRHIBuffer *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TRefCountPtr<FRHIBuffer> this_00;
  int iVar6;
  longlong lVar7;
  FRayTracingDynamicGeometryUpdateRequest *pFVar8;
  TArray<FRayTracingInstanceCollector::FRayTracingDynamicGeometryUpdateRequest,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar9;
  bool bVar10;
  undefined1 auStack_128 [32];
  FRayTracingDynamicGeometryUpdateRequest *local_108;
  FRayTracingDynamicGeometryUpdateRequest *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  FRayTracingDynamicGeometryUpdateRequest local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_d8.Params.WorldToInstance.M[1]._0_8_ = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  local_d8.Params.WorldToInstance.M[1]._8_8_ = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  local_d8.Params.Geometry = (FRayTracingGeometry *)0x0;
  local_d8.Params.Buffer = (FRWBuffer *)0x0;
  local_d8.Params.WorldToInstance.M[0]._0_8_ = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  local_d8.Params.WorldToInstance.M[0]._8_8_ = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  local_d8.Params.WorldToInstance.M[2]._0_8_ = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  local_d8.Params.WorldToInstance.M[2]._8_8_ = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  local_d8.Params.MeshBatches.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Params.MeshBatches.ArrayNum = 0;
  local_d8.Params.MeshBatches.ArrayMax = 0;
  local_d8.Params.bUsingIndirectDraw = false;
  local_d8.Params.NumVertices = 0;
  local_d8.Params.VertexBufferSize = 0;
  local_d8.Params.NumTriangles = 0;
  local_d8.Params.bApplyWorldPositionOffset = true;
  local_d8.Params.InstanceId = 0;
  local_d8.Params.WorldToInstance.M[3]._0_8_ = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  local_d8.Params.WorldToInstance.M[3]._8_8_ = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  local_d8.Params.bAlphaMasked = false;
  local_d8.Params.IndexBuffer.Reference = (FRHIBuffer *)0x0;
  if (&local_d8 != (FRayTracingDynamicGeometryUpdateRequest *)param_2) {
    DestructItems<FMeshBatch,int>((FMeshBatch *)0x0,0);
    if (local_d8.Params.MeshBatches.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Params.MeshBatches.AllocatorInstance.Data);
    }
    local_d8.Params.MeshBatches.AllocatorInstance.Data =
         (param_2->MeshBatches).AllocatorInstance.Data;
    (param_2->MeshBatches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Params.MeshBatches.ArrayNum = (param_2->MeshBatches).ArrayNum;
    local_d8.Params.MeshBatches.ArrayMax = (param_2->MeshBatches).ArrayMax;
    (param_2->MeshBatches).ArrayNum = 0;
    (param_2->MeshBatches).ArrayMax = 0;
  }
  this_00.Reference = local_d8.Params.IndexBuffer.Reference;
  local_d8.Params.bUsingIndirectDraw = param_2->bUsingIndirectDraw;
  pTVar2 = &param_2->IndexBuffer;
  local_d8.Params.WorldToInstance.M[0]._0_8_ = *(undefined8 *)(param_2->WorldToInstance).M[0];
  local_d8.Params.WorldToInstance.M[0]._8_8_ = *(undefined8 *)((param_2->WorldToInstance).M[0] + 2);
  local_d8.Params.WorldToInstance.M[1]._0_8_ = *(undefined8 *)(param_2->WorldToInstance).M[1];
  local_d8.Params.WorldToInstance.M[1]._8_8_ = *(undefined8 *)((param_2->WorldToInstance).M[1] + 2);
  local_d8.Params.NumVertices = param_2->NumVertices;
  local_d8.Params.VertexBufferSize = param_2->VertexBufferSize;
  local_d8.Params.NumTriangles = param_2->NumTriangles;
  local_d8.Params.Geometry = param_2->Geometry;
  local_d8.Params.Buffer = param_2->Buffer;
  local_d8.Params.bApplyWorldPositionOffset = param_2->bApplyWorldPositionOffset;
  local_d8.Params.InstanceId = param_2->InstanceId;
  local_d8.Params.bAlphaMasked = param_2->bAlphaMasked;
  local_d8.Params.WorldToInstance.M[2]._0_8_ = *(undefined8 *)(param_2->WorldToInstance).M[2];
  local_d8.Params.WorldToInstance.M[2]._8_8_ = *(undefined8 *)((param_2->WorldToInstance).M[2] + 2);
  local_d8.Params.WorldToInstance.M[3]._0_8_ = *(undefined8 *)(param_2->WorldToInstance).M[3];
  local_d8.Params.WorldToInstance.M[3]._8_8_ = *(undefined8 *)((param_2->WorldToInstance).M[3] + 2);
  if (&local_d8.Params.IndexBuffer != pTVar2) {
    pFVar3 = pTVar2->Reference;
    pTVar2->Reference = (FRHIBuffer *)0x0;
    bVar10 = local_d8.Params.IndexBuffer.Reference != (FRHIBuffer *)0x0;
    local_d8.Params.IndexBuffer.Reference = pFVar3;
    if (bVar10) {
      FRHIResource::Release((FRHIResource *)this_00.Reference);
    }
  }
  pTVar9 = &this->RayTracingGeometriesToUpdate;
  pFVar8 = (pTVar9->AllocatorInstance).Data;
  local_d8.ViewIndex = param_1;
  if ((pFVar8 <= &local_d8) &&
     (lVar7 = (longlong)(this->RayTracingGeometriesToUpdate).ArrayMax, &local_d8 < pFVar8 + lVar7))
  {
    local_f0 = (longlong)(this->RayTracingGeometriesToUpdate).ArrayNum;
    local_e8 = 0xa0;
    local_108 = &local_d8;
    local_100 = pFVar8;
    local_f8 = lVar7;
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar6 = (this->RayTracingGeometriesToUpdate).ArrayNum;
  piVar1 = &(this->RayTracingGeometriesToUpdate).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingInstanceCollector::FRayTracingDynamicGeometryUpdateRequest>_>
                      (0x10a0,&pTVar9->AllocatorInstance,piVar1);
  }
  (this->RayTracingGeometriesToUpdate).ArrayNum = iVar6 + 1;
  pFVar8 = (pTVar9->AllocatorInstance).Data + iVar6;
  (pFVar8->Params).MeshBatches.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar8->Params).MeshBatches.AllocatorInstance.Data =
       local_d8.Params.MeshBatches.AllocatorInstance.Data;
  (pFVar8->Params).MeshBatches.ArrayNum = local_d8.Params.MeshBatches.ArrayNum;
  (pFVar8->Params).MeshBatches.ArrayMax = local_d8.Params.MeshBatches.ArrayMax;
  (pFVar8->Params).bUsingIndirectDraw = local_d8.Params.bUsingIndirectDraw;
  (pFVar8->Params).NumVertices = local_d8.Params.NumVertices;
  (pFVar8->Params).VertexBufferSize = local_d8.Params.VertexBufferSize;
  (pFVar8->Params).NumTriangles = local_d8.Params.NumTriangles;
  (pFVar8->Params).Geometry = local_d8.Params.Geometry;
  (pFVar8->Params).Buffer = local_d8.Params.Buffer;
  (pFVar8->Params).bApplyWorldPositionOffset = local_d8.Params.bApplyWorldPositionOffset;
  (pFVar8->Params).InstanceId = local_d8.Params.InstanceId;
  *(undefined8 *)(pFVar8->Params).WorldToInstance.M[0] = local_d8.Params.WorldToInstance.M[0]._0_8_;
  *(undefined8 *)((pFVar8->Params).WorldToInstance.M[0] + 2) =
       local_d8.Params.WorldToInstance.M[0]._8_8_;
  *(undefined8 *)(pFVar8->Params).WorldToInstance.M[1] = local_d8.Params.WorldToInstance.M[1]._0_8_;
  *(undefined8 *)((pFVar8->Params).WorldToInstance.M[1] + 2) =
       local_d8.Params.WorldToInstance.M[1]._8_8_;
  *(undefined8 *)(pFVar8->Params).WorldToInstance.M[2] = local_d8.Params.WorldToInstance.M[2]._0_8_;
  *(undefined8 *)((pFVar8->Params).WorldToInstance.M[2] + 2) =
       local_d8.Params.WorldToInstance.M[2]._8_8_;
  *(undefined8 *)(pFVar8->Params).WorldToInstance.M[3] = local_d8.Params.WorldToInstance.M[3]._0_8_;
  *(undefined8 *)((pFVar8->Params).WorldToInstance.M[3] + 2) =
       local_d8.Params.WorldToInstance.M[3]._8_8_;
  (pFVar8->Params).IndexBuffer.Reference = (FRHIBuffer *)0x0;
  (pFVar8->Params).bAlphaMasked = local_d8.Params.bAlphaMasked;
  (pFVar8->Params).IndexBuffer.Reference = local_d8.Params.IndexBuffer.Reference;
  pFVar8->ViewIndex = local_d8.ViewIndex;
  local_d8.Params.IndexBuffer.Reference = (FRHIBuffer *)0x0;
  local_d8.Params.MeshBatches.ArrayNum = 0;
  local_d8.Params.MeshBatches.ArrayMax = 0;
  local_d8.Params.MeshBatches.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  DestructItems<FMeshBatch,int>((FMeshBatch *)0x0,0);
  if (local_d8.Params.MeshBatches.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Params.MeshBatches.AllocatorInstance.Data);
  }
  if (pTVar2->Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pTVar2->Reference);
  }
  DestructItems<FMeshBatch,int>
            ((FMeshBatch *)(param_2->MeshBatches).AllocatorInstance.Data,
             (param_2->MeshBatches).ArrayNum);
  pFVar4 = (param_2->MeshBatches).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// AddRayTracingGeometryUpdate @ 1484c2060

void __thiscall
FRayTracingInstanceCollector::AddRayTracingGeometryUpdate
          (FRayTracingInstanceCollector *this,FRayTracingDynamicGeometryUpdateParams *param_1)

{
  FRHIBuffer *this_00;
  FScriptContainerElement *pFVar1;
  FRayTracingDynamicGeometryUpdateParams local_98;
  
  local_98.MeshBatches.AllocatorInstance.Data = (param_1->MeshBatches).AllocatorInstance.Data;
  (param_1->MeshBatches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.MeshBatches.ArrayNum = (param_1->MeshBatches).ArrayNum;
  local_98.MeshBatches.ArrayMax = (param_1->MeshBatches).ArrayMax;
  (param_1->MeshBatches).ArrayNum = 0;
  (param_1->MeshBatches).ArrayMax = 0;
  local_98.bUsingIndirectDraw = param_1->bUsingIndirectDraw;
  local_98.WorldToInstance.M[0]._0_8_ = *(undefined8 *)(param_1->WorldToInstance).M[0];
  local_98.WorldToInstance.M[0]._8_8_ = *(undefined8 *)((param_1->WorldToInstance).M[0] + 2);
  local_98.NumVertices = param_1->NumVertices;
  local_98.WorldToInstance.M[1]._0_8_ = *(undefined8 *)(param_1->WorldToInstance).M[1];
  local_98.WorldToInstance.M[1]._8_8_ = *(undefined8 *)((param_1->WorldToInstance).M[1] + 2);
  local_98.VertexBufferSize = param_1->VertexBufferSize;
  local_98.NumTriangles = param_1->NumTriangles;
  local_98.Geometry = param_1->Geometry;
  local_98.Buffer = param_1->Buffer;
  local_98.bApplyWorldPositionOffset = param_1->bApplyWorldPositionOffset;
  local_98.InstanceId = param_1->InstanceId;
  local_98.bAlphaMasked = param_1->bAlphaMasked;
  local_98.WorldToInstance.M[2]._0_8_ = *(undefined8 *)(param_1->WorldToInstance).M[2];
  local_98.WorldToInstance.M[2]._8_8_ = *(undefined8 *)((param_1->WorldToInstance).M[2] + 2);
  local_98.WorldToInstance.M[3]._0_8_ = *(undefined8 *)(param_1->WorldToInstance).M[3];
  local_98.WorldToInstance.M[3]._8_8_ = *(undefined8 *)((param_1->WorldToInstance).M[3] + 2);
  local_98.IndexBuffer.Reference = (param_1->IndexBuffer).Reference;
  (param_1->IndexBuffer).Reference = (FRHIBuffer *)0x0;
  AddRayTracingGeometryUpdate(this,0,&local_98);
  this_00 = (param_1->IndexBuffer).Reference;
  if (this_00 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  DestructItems<FMeshBatch,int>
            ((FMeshBatch *)(param_1->MeshBatches).AllocatorInstance.Data,
             (param_1->MeshBatches).ArrayNum);
  pFVar1 = (param_1->MeshBatches).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// AddRayTracingInstance @ 1484c2150

/* WARNING: Removing unreachable block (ram,0x0001484c23fa) */
/* WARNING: Removing unreachable block (ram,0x0001484c2408) */

void __thiscall
FRayTracingInstanceCollector::AddRayTracingInstance
          (FRayTracingInstanceCollector *this,int param_1,FRayTracingInstance *param_2)

{
  TArray<FMeshBatch,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  TArray<FRayTracingInstanceCollector::FRayTracingInstanceAndViewIndex,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FRayTracingInstanceAndViewIndex *pFVar10;
  FRayTracingInstanceAndViewIndex local_a8;
  
  local_a8.Instance.Geometry = param_2->Geometry;
  pTVar1 = &param_2->Materials;
  local_a8.Instance.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Instance.Materials.ArrayNum = 0;
  local_a8.Instance.Materials.ArrayMax = 0;
  local_a8.Instance.MaterialsView.DataPtr = (FMeshBatch *)0x0;
  local_a8.Instance.MaterialsView._8_8_ = local_a8.Instance.MaterialsView._8_8_ & 0xffffffff00000000
  ;
  local_a8.Instance.bApplyLocalBoundsTransform = false;
  local_a8.Instance.bThinGeometry = false;
  local_a8.Instance.InstanceLayer = NearField;
  local_a8.Instance.bInstanceMaskAndFlagsDirty = true;
  local_a8.Instance.NumTransforms = 0;
  local_a8.Instance.PrimitiveInstanceIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  local_a8.Instance.PrimitiveInstanceIndices.ArrayNum = 0;
  local_a8.Instance.PrimitiveInstanceIndices.ArrayMax = 0;
  local_a8.Instance.PrimitiveInstanceIndicesView.DataPtr = (uint *)0x0;
  local_a8.Instance.PrimitiveInstanceIndicesView._8_8_ =
       local_a8.Instance.PrimitiveInstanceIndicesView._8_8_ & 0xffffffff00000000;
  local_a8.Instance.InstanceTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Instance.InstanceTransforms.ArrayNum = 0;
  local_a8.Instance.InstanceTransforms.ArrayMax = 0;
  local_a8.Instance.InstanceTransformsView.DataPtr = (TMatrix<double> *)0x0;
  local_a8.Instance.InstanceTransformsView._8_8_ =
       local_a8.Instance.InstanceTransformsView._8_8_ & 0xffffffff00000000;
  if (&local_a8.Instance.Materials != pTVar1) {
    DestructItems<FMeshBatch,int>((FMeshBatch *)0x0,0);
    if (local_a8.Instance.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Instance.Materials.AllocatorInstance.Data);
    }
    local_a8.Instance.Materials.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_a8.Instance.Materials.ArrayNum = (param_2->Materials).ArrayNum;
    local_a8.Instance.Materials.ArrayMax = (param_2->Materials).ArrayMax;
    (param_2->Materials).ArrayNum = 0;
    (param_2->Materials).ArrayMax = 0;
  }
  pTVar2 = &param_2->PrimitiveInstanceIndices;
  local_a8.Instance.MaterialsView.DataPtr = (param_2->MaterialsView).DataPtr;
  local_a8.Instance.MaterialsView.ArrayNum = (param_2->MaterialsView).ArrayNum;
  local_a8.Instance.MaterialsView._12_4_ = *(undefined4 *)&(param_2->MaterialsView).field_0xc;
  local_a8.Instance.bApplyLocalBoundsTransform = param_2->bApplyLocalBoundsTransform;
  local_a8.Instance.bThinGeometry = param_2->bThinGeometry;
  local_a8.Instance.InstanceLayer = param_2->InstanceLayer;
  local_a8.Instance.bInstanceMaskAndFlagsDirty = param_2->bInstanceMaskAndFlagsDirty;
  local_a8.Instance.NumTransforms = param_2->NumTransforms;
  if (&local_a8.Instance.PrimitiveInstanceIndices != pTVar2) {
    if (local_a8.Instance.PrimitiveInstanceIndices.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Instance.PrimitiveInstanceIndices.AllocatorInstance.Data);
    }
    local_a8.Instance.PrimitiveInstanceIndices.AllocatorInstance.Data =
         (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_a8.Instance.PrimitiveInstanceIndices.ArrayNum =
         (param_2->PrimitiveInstanceIndices).ArrayNum;
    local_a8.Instance.PrimitiveInstanceIndices.ArrayMax =
         (param_2->PrimitiveInstanceIndices).ArrayMax;
    (param_2->PrimitiveInstanceIndices).ArrayNum = 0;
    (param_2->PrimitiveInstanceIndices).ArrayMax = 0;
  }
  local_a8.Instance.PrimitiveInstanceIndicesView.DataPtr =
       (param_2->PrimitiveInstanceIndicesView).DataPtr;
  local_a8.Instance.PrimitiveInstanceIndicesView.ArrayNum =
       (param_2->PrimitiveInstanceIndicesView).ArrayNum;
  local_a8.Instance.PrimitiveInstanceIndicesView._12_4_ =
       *(undefined4 *)&(param_2->PrimitiveInstanceIndicesView).field_0xc;
  pTVar3 = &param_2->InstanceTransforms;
  if (&local_a8.Instance.InstanceTransforms != pTVar3) {
    if (local_a8.Instance.InstanceTransforms.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Instance.InstanceTransforms.AllocatorInstance.Data);
    }
    local_a8.Instance.InstanceTransforms.AllocatorInstance.Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_a8.Instance.InstanceTransforms.ArrayNum = (param_2->InstanceTransforms).ArrayNum;
    local_a8.Instance.InstanceTransforms.ArrayMax = (param_2->InstanceTransforms).ArrayMax;
    (param_2->InstanceTransforms).ArrayNum = 0;
    (param_2->InstanceTransforms).ArrayMax = 0;
  }
  local_a8.Instance.InstanceTransformsView.DataPtr = (param_2->InstanceTransformsView).DataPtr;
  local_a8.Instance.InstanceTransformsView.ArrayNum = (param_2->InstanceTransformsView).ArrayNum;
  local_a8.Instance.InstanceTransformsView._12_4_ =
       *(undefined4 *)&(param_2->InstanceTransformsView).field_0xc;
  pTVar5 = &this->RayTracingInstances;
  pFVar10 = (pTVar5->AllocatorInstance).Data;
  local_a8.ViewIndex = param_1;
  if (((pFVar10 <= &local_a8) && (&local_a8 < pFVar10 + (this->RayTracingInstances).ArrayMax)) &&
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
  iVar9 = (this->RayTracingInstances).ArrayNum;
  piVar4 = &(this->RayTracingInstances).ArrayMax;
  if (iVar9 == *piVar4) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRayTracingInstanceCollector::FRayTracingInstanceAndViewIndex>_>
                      (0x878,&pTVar5->AllocatorInstance,piVar4);
  }
  (this->RayTracingInstances).ArrayNum = iVar9 + 1;
  pFVar10 = (pTVar5->AllocatorInstance).Data + iVar9;
  (pFVar10->Instance).Geometry = local_a8.Instance.Geometry;
  (pFVar10->Instance).Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar10->Instance).Materials.AllocatorInstance.Data =
       local_a8.Instance.Materials.AllocatorInstance.Data;
  (pFVar10->Instance).Materials.ArrayNum = local_a8.Instance.Materials.ArrayNum;
  (pFVar10->Instance).Materials.ArrayMax = local_a8.Instance.Materials.ArrayMax;
  (pFVar10->Instance).MaterialsView.DataPtr = local_a8.Instance.MaterialsView.DataPtr;
  (pFVar10->Instance).MaterialsView.ArrayNum = local_a8.Instance.MaterialsView.ArrayNum;
  *(undefined4 *)&(pFVar10->Instance).MaterialsView.field_0xc =
       local_a8.Instance.MaterialsView._12_4_;
  (pFVar10->Instance).bApplyLocalBoundsTransform = local_a8.Instance.bApplyLocalBoundsTransform;
  (pFVar10->Instance).bThinGeometry = local_a8.Instance.bThinGeometry;
  (pFVar10->Instance).InstanceLayer = local_a8.Instance.InstanceLayer;
  (pFVar10->Instance).bInstanceMaskAndFlagsDirty = local_a8.Instance.bInstanceMaskAndFlagsDirty;
  (pFVar10->Instance).PrimitiveInstanceIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (pFVar10->Instance).NumTransforms = local_a8.Instance.NumTransforms;
  (pFVar10->Instance).PrimitiveInstanceIndices.AllocatorInstance.Data =
       local_a8.Instance.PrimitiveInstanceIndices.AllocatorInstance.Data;
  (pFVar10->Instance).PrimitiveInstanceIndices.ArrayNum =
       local_a8.Instance.PrimitiveInstanceIndices.ArrayNum;
  (pFVar10->Instance).PrimitiveInstanceIndices.ArrayMax =
       local_a8.Instance.PrimitiveInstanceIndices.ArrayMax;
  (pFVar10->Instance).PrimitiveInstanceIndicesView.DataPtr =
       local_a8.Instance.PrimitiveInstanceIndicesView.DataPtr;
  (pFVar10->Instance).PrimitiveInstanceIndicesView.ArrayNum =
       local_a8.Instance.PrimitiveInstanceIndicesView.ArrayNum;
  *(undefined4 *)&(pFVar10->Instance).PrimitiveInstanceIndicesView.field_0xc =
       local_a8.Instance.PrimitiveInstanceIndicesView._12_4_;
  (pFVar10->Instance).InstanceTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar10->Instance).InstanceTransforms.AllocatorInstance.Data =
       local_a8.Instance.InstanceTransforms.AllocatorInstance.Data;
  (pFVar10->Instance).InstanceTransforms.ArrayNum = local_a8.Instance.InstanceTransforms.ArrayNum;
  (pFVar10->Instance).InstanceTransforms.ArrayMax = local_a8.Instance.InstanceTransforms.ArrayMax;
  (pFVar10->Instance).InstanceTransformsView.DataPtr =
       local_a8.Instance.InstanceTransformsView.DataPtr;
  (pFVar10->Instance).InstanceTransformsView.ArrayNum =
       local_a8.Instance.InstanceTransformsView.ArrayNum;
  *(undefined4 *)&(pFVar10->Instance).InstanceTransformsView.field_0xc =
       local_a8.Instance.InstanceTransformsView._12_4_;
  pFVar10->ViewIndex = local_a8.ViewIndex;
  local_a8.Instance.InstanceTransforms.ArrayNum = 0;
  local_a8.Instance.InstanceTransforms.ArrayMax = 0;
  local_a8.Instance.InstanceTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Instance.PrimitiveInstanceIndices.ArrayNum = 0;
  local_a8.Instance.PrimitiveInstanceIndices.ArrayMax = 0;
  local_a8.Instance.PrimitiveInstanceIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  local_a8.Instance.Materials.ArrayNum = 0;
  local_a8.Instance.Materials.ArrayMax = 0;
  local_a8.Instance.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  DestructItems<FMeshBatch,int>((FMeshBatch *)0x0,0);
  if (local_a8.Instance.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Instance.Materials.AllocatorInstance.Data);
  }
  pFVar6 = (pTVar3->AllocatorInstance).Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  DestructItems<FMeshBatch,int>
            ((FMeshBatch *)(pTVar1->AllocatorInstance).Data,(param_2->Materials).ArrayNum);
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return;
}

// AddRayTracingInstance @ 1484c2480

void __thiscall
FRayTracingInstanceCollector::AddRayTracingInstance
          (FRayTracingInstanceCollector *this,FRayTracingInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  FRayTracingInstance local_78;
  
  local_78.Geometry = param_1->Geometry;
  local_78.Materials.AllocatorInstance.Data = (param_1->Materials).AllocatorInstance.Data;
  (param_1->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Materials.ArrayNum = (param_1->Materials).ArrayNum;
  local_78.Materials.ArrayMax = (param_1->Materials).ArrayMax;
  (param_1->Materials).ArrayNum = 0;
  (param_1->Materials).ArrayMax = 0;
  local_78.MaterialsView.DataPtr = (param_1->MaterialsView).DataPtr;
  local_78.MaterialsView.ArrayNum = (param_1->MaterialsView).ArrayNum;
  local_78.MaterialsView._12_4_ = *(undefined4 *)&(param_1->MaterialsView).field_0xc;
  local_78.bApplyLocalBoundsTransform = param_1->bApplyLocalBoundsTransform;
  local_78.bThinGeometry = param_1->bThinGeometry;
  local_78.InstanceLayer = param_1->InstanceLayer;
  local_78.bInstanceMaskAndFlagsDirty = param_1->bInstanceMaskAndFlagsDirty;
  local_78.NumTransforms = param_1->NumTransforms;
  local_78.PrimitiveInstanceIndices.AllocatorInstance.Data =
       (param_1->PrimitiveInstanceIndices).AllocatorInstance.Data;
  (param_1->PrimitiveInstanceIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.PrimitiveInstanceIndices.ArrayNum = (param_1->PrimitiveInstanceIndices).ArrayNum;
  local_78.PrimitiveInstanceIndices.ArrayMax = (param_1->PrimitiveInstanceIndices).ArrayMax;
  (param_1->PrimitiveInstanceIndices).ArrayNum = 0;
  (param_1->PrimitiveInstanceIndices).ArrayMax = 0;
  local_78.PrimitiveInstanceIndicesView.DataPtr = (param_1->PrimitiveInstanceIndicesView).DataPtr;
  local_78.PrimitiveInstanceIndicesView.ArrayNum = (param_1->PrimitiveInstanceIndicesView).ArrayNum;
  local_78.PrimitiveInstanceIndicesView._12_4_ =
       *(undefined4 *)&(param_1->PrimitiveInstanceIndicesView).field_0xc;
  local_78.InstanceTransforms.AllocatorInstance.Data =
       (param_1->InstanceTransforms).AllocatorInstance.Data;
  (param_1->InstanceTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.InstanceTransforms.ArrayNum = (param_1->InstanceTransforms).ArrayNum;
  local_78.InstanceTransforms.ArrayMax = (param_1->InstanceTransforms).ArrayMax;
  (param_1->InstanceTransforms).ArrayNum = 0;
  (param_1->InstanceTransforms).ArrayMax = 0;
  local_78.InstanceTransformsView.DataPtr = (param_1->InstanceTransformsView).DataPtr;
  local_78.InstanceTransformsView.ArrayNum = (param_1->InstanceTransformsView).ArrayNum;
  local_78.InstanceTransformsView._12_4_ =
       *(undefined4 *)&(param_1->InstanceTransformsView).field_0xc;
  AddRayTracingInstance(this,0,&local_78);
  pFVar1 = (param_1->InstanceTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->PrimitiveInstanceIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMeshBatch,int>
            ((FMeshBatch *)(param_1->Materials).AllocatorInstance.Data,(param_1->Materials).ArrayNum
            );
  pFVar1 = (param_1->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// AddReferencedGeometryGroup @ 1484c2590

void __thiscall
FRayTracingInstanceCollector::AddReferencedGeometryGroup
          (FRayTracingInstanceCollector *this,int param_1)

{
  int local_res8 [2];
  int local_res10 [6];
  
  if (this->bTrackReferencedGeometryGroups != false) {
    local_res10[0] = param_1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->ReferencedGeometryGroups,local_res8,(bool *)local_res10);
  }
  return;
}

// AddReferencedGeometryGroupForDynamicUpdate @ 1484c25d0

void __thiscall
FRayTracingInstanceCollector::AddReferencedGeometryGroupForDynamicUpdate
          (FRayTracingInstanceCollector *this,int param_1)

{
  int local_res8 [2];
  int local_res10 [6];
  
  if (this->bTrackReferencedGeometryGroups != false) {
    local_res10[0] = param_1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->ReferencedGeometryGroupsForDynamicUpdate,local_res8,(bool *)local_res10);
  }
  return;
}

// AddViewMeshArrays @ 1484c2ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRayTracingInstanceCollector::AddViewMeshArrays
          (FRayTracingInstanceCollector *this,FSceneView *param_1,
          FGPUScenePrimitiveCollector *param_2)

{
  int *piVar1;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator> *pTVar8;
  undefined1 auStackY_e8 [32];
  FSceneView *local_98 [2];
  undefined1 local_88 [24];
  undefined8 uStack_70;
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_50;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pTVar2 = &this->Views;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  local_98[0] = param_1;
  if ((pFVar4 <= (FScriptContainerElement *)local_98) &&
     ((FScriptContainerElement *)local_98 < pFVar4 + (longlong)(this->Views).ArrayMax * 8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->Views).ArrayNum;
  piVar1 = &(this->Views).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  local_50.InlineData[0] = '\0';
  local_50.InlineData[1] = '\0';
  local_50.InlineData[2] = '\0';
  local_50.InlineData[3] = '\0';
  local_50._padding_ = 0;
  (this->Views).ArrayNum = iVar7 + 1;
  pTVar3 = &this->RDGPooledBuffers;
  local_88._16_8_ = 0;
  uStack_70 = 0;
  local_40 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  *(FSceneView **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_98[0];
  pTVar8 = (this->RDGPooledBuffers).AllocatorInstance.SecondaryData.Data;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  if (pTVar8 == (TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>
                 *)0x0) {
    pTVar8 = (TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator> *)
             pTVar3;
  }
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_50.SecondaryData = (ForElementType<FSetElementId>)0x0;
  if ((pTVar8 <= (TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>
                  *)local_88) &&
     ((TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator> *)
      local_88 < pTVar8 + (this->RDGPooledBuffers).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->RDGPooledBuffers).ArrayNum;
  piVar1 = &(this->RDGPooledBuffers).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>_>_>
                      (0x850,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->RDGPooledBuffers).ArrayNum = iVar7 + 1;
  pTVar8 = (this->RDGPooledBuffers).AllocatorInstance.SecondaryData.Data;
  if (pTVar8 == (TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>
                 *)0x0) {
    pTVar8 = (TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator> *)
             pTVar3;
  }
  TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>::
  TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator>
            (pTVar8 + iVar7,
             (TSet<FRDGPooledBuffer_*,DefaultKeyFuncs<FRDGPooledBuffer_*,0>,FDefaultSetAllocator> *)
             local_88);
  local_40 = local_40 & 0xffffffff00000000;
  if (local_50.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_50.SecondaryData);
  }
  iVar7 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar7 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  FMeshElementCollector::AddViewMeshArrays
            ((FMeshElementCollector *)this,local_98[0],
             (TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
              *)0x0,(FSimpleElementCollector *)0x0,param_2,(FSimpleElementCollector *)0x0);
  return;
}

// SetVisibilityMap @ 1484fcd90

void __thiscall
FRayTracingInstanceCollector::SetVisibilityMap(FRayTracingInstanceCollector *this,uint param_1)

{
  this->VisibilityMap = param_1;
  return;
}

