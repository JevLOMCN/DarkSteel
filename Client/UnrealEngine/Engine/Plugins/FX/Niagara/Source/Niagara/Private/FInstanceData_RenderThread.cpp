// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// FInstanceData_RenderThread @ 148f7eb80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInstanceData_RenderThread * __thiscall
NDISocketReaderLocal::FInstanceData_RenderThread::FInstanceData_RenderThread
          (FInstanceData_RenderThread *this,FInstanceData_RenderThread *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  pFVar2 = (param_1->DataToUpload).AllocatorInstance.Data;
  this->_padding_ = param_1->_padding_;
  (this->DataToUpload).AllocatorInstance.Data = pFVar2;
  (this->DataToUpload).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataToUpload).AllocatorInstance.Data = (param_1->DataToUpload).AllocatorInstance.Data;
  (param_1->DataToUpload).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataToUpload).ArrayNum = (param_1->DataToUpload).ArrayNum;
  (this->DataToUpload).ArrayMax = (param_1->DataToUpload).ArrayMax;
  (param_1->DataToUpload).ArrayNum = 0;
  (param_1->DataToUpload).ArrayMax = 0;
  (this->PooledBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->PooledBuffer).Reference = (param_1->PooledBuffer).Reference;
  (param_1->PooledBuffer).Reference = (FRDGPooledBuffer *)0x0;
  return this;
}

// FInstanceData_RenderThread @ 148f7ec30

FInstanceData_RenderThread * __thiscall
NDIStaticMeshLocal::FInstanceData_RenderThread::FInstanceData_RenderThread
          (FInstanceData_RenderThread *this,FInstanceData_RenderThread *param_1)

{
  FRHIShaderResourceView *pFVar1;
  FRHIBuffer *pFVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  this->bIsValid = param_1->bIsValid;
  this->bGpuUniformDistribution = param_1->bGpuUniformDistribution;
  uVar3 = *(undefined8 *)((param_1->Transform).M[0] + 2);
  *(undefined8 *)(this->Transform).M[0] = *(undefined8 *)(param_1->Transform).M[0];
  *(undefined8 *)((this->Transform).M[0] + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->Transform).M[1] + 2);
  *(undefined8 *)(this->Transform).M[1] = *(undefined8 *)(param_1->Transform).M[1];
  *(undefined8 *)((this->Transform).M[1] + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->Transform).M[2] + 2);
  *(undefined8 *)(this->Transform).M[2] = *(undefined8 *)(param_1->Transform).M[2];
  *(undefined8 *)((this->Transform).M[2] + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->Transform).M[3] + 2);
  *(undefined8 *)(this->Transform).M[3] = *(undefined8 *)(param_1->Transform).M[3];
  *(undefined8 *)((this->Transform).M[3] + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->PrevTransform).M[0] + 2);
  *(undefined8 *)(this->PrevTransform).M[0] = *(undefined8 *)(param_1->PrevTransform).M[0];
  *(undefined8 *)((this->PrevTransform).M[0] + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->PrevTransform).M[1] + 2);
  *(undefined8 *)(this->PrevTransform).M[1] = *(undefined8 *)(param_1->PrevTransform).M[1];
  *(undefined8 *)((this->PrevTransform).M[1] + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->PrevTransform).M[2] + 2);
  *(undefined8 *)(this->PrevTransform).M[2] = *(undefined8 *)(param_1->PrevTransform).M[2];
  *(undefined8 *)((this->PrevTransform).M[2] + 2) = uVar3;
  uVar3 = *(undefined8 *)((param_1->PrevTransform).M[3] + 2);
  *(undefined8 *)(this->PrevTransform).M[3] = *(undefined8 *)(param_1->PrevTransform).M[3];
  *(undefined8 *)((this->PrevTransform).M[3] + 2) = uVar3;
  fVar4 = (param_1->Rotation).Y;
  fVar5 = (param_1->Rotation).Z;
  fVar6 = (param_1->Rotation).W;
  (this->Rotation).X = (param_1->Rotation).X;
  (this->Rotation).Y = fVar4;
  (this->Rotation).Z = fVar5;
  (this->Rotation).W = fVar6;
  fVar4 = (param_1->PrevRotation).Y;
  fVar5 = (param_1->PrevRotation).Z;
  fVar6 = (param_1->PrevRotation).W;
  (this->PrevRotation).X = (param_1->PrevRotation).X;
  (this->PrevRotation).Y = fVar4;
  (this->PrevRotation).Z = fVar5;
  (this->PrevRotation).W = fVar6;
  this->DeltaSeconds = param_1->DeltaSeconds;
  *(undefined8 *)&(this->PreSkinnedLocalBoundsCenter).field0_0x0 =
       *(undefined8 *)&(param_1->PreSkinnedLocalBoundsCenter).field0_0x0;
  (this->PreSkinnedLocalBoundsCenter).field0_0x0._s_0.Z =
       (param_1->PreSkinnedLocalBoundsCenter).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->PreSkinnedLocalBoundsExtents).field0_0x0 =
       *(undefined8 *)&(param_1->PreSkinnedLocalBoundsExtents).field0_0x0;
  (this->PreSkinnedLocalBoundsExtents).field0_0x0._s_0.Z =
       (param_1->PreSkinnedLocalBoundsExtents).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->OwnerToMeshVector).field0_0x0 =
       *(undefined8 *)&(param_1->OwnerToMeshVector).field0_0x0;
  (this->OwnerToMeshVector).field0_0x0._s_0.Z = (param_1->OwnerToMeshVector).field0_0x0._s_0.Z;
  (this->DistanceFieldPrimitiveId).PrimIDValue = (param_1->DistanceFieldPrimitiveId).PrimIDValue;
  *(undefined8 *)&(this->NumTriangles).field0_0x0 =
       *(undefined8 *)&(param_1->NumTriangles).field0_0x0;
  (this->NumTriangles).field0_0x0._s_0.Z = (param_1->NumTriangles).field0_0x0._s_0.Z;
  this->NumVertices = param_1->NumVertices;
  this->NumUVs = param_1->NumUVs;
  (this->MeshIndexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
  pFVar1 = (param_1->MeshIndexBufferSRV).Reference;
  (this->MeshIndexBufferSRV).Reference = pFVar1;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar1);
  }
  (this->MeshPositionBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
  pFVar1 = (param_1->MeshPositionBufferSRV).Reference;
  (this->MeshPositionBufferSRV).Reference = pFVar1;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar1);
  }
  (this->MeshTangentBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
  pFVar1 = (param_1->MeshTangentBufferSRV).Reference;
  (this->MeshTangentBufferSRV).Reference = pFVar1;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar1);
  }
  (this->MeshUVBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
  pFVar1 = (param_1->MeshUVBufferSRV).Reference;
  (this->MeshUVBufferSRV).Reference = pFVar1;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar1);
  }
  (this->MeshColorBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
  pFVar1 = (param_1->MeshColorBufferSRV).Reference;
  (this->MeshColorBufferSRV).Reference = pFVar1;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar1);
  }
  (this->MeshUniformSamplingTriangleSRV).Reference = (FRHIShaderResourceView *)0x0;
  pFVar1 = (param_1->MeshUniformSamplingTriangleSRV).Reference;
  (this->MeshUniformSamplingTriangleSRV).Reference = pFVar1;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar1);
  }
  *(undefined8 *)&(this->SectionCounts).field0_0x0 =
       *(undefined8 *)&(param_1->SectionCounts).field0_0x0;
  (this->SectionCounts).field0_0x0._s_0.Z = (param_1->SectionCounts).field0_0x0._s_0.Z;
  (this->SectionInfos).Buffer.Reference = (FRHIBuffer *)0x0;
  pFVar2 = (param_1->SectionInfos).Buffer.Reference;
  (this->SectionInfos).Buffer.Reference = pFVar2;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar2);
  }
  (this->SectionInfos).SRV.Reference = (FRHIShaderResourceView *)0x0;
  pFVar1 = (param_1->SectionInfos).SRV.Reference;
  (this->SectionInfos).SRV.Reference = pFVar1;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar1);
  }
  (this->SectionInfos).NumBytes = (param_1->SectionInfos).NumBytes;
  (this->FilteredAndUnfilteredSections).Buffer.Reference = (FRHIBuffer *)0x0;
  pFVar2 = (param_1->FilteredAndUnfilteredSections).Buffer.Reference;
  (this->FilteredAndUnfilteredSections).Buffer.Reference = pFVar2;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar2);
  }
  (this->FilteredAndUnfilteredSections).SRV.Reference = (FRHIShaderResourceView *)0x0;
  pFVar1 = (param_1->FilteredAndUnfilteredSections).SRV.Reference;
  (this->FilteredAndUnfilteredSections).SRV.Reference = pFVar1;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar1);
  }
  (this->FilteredAndUnfilteredSections).NumBytes = (param_1->FilteredAndUnfilteredSections).NumBytes
  ;
  *(undefined8 *)&(this->SocketCounts).field0_0x0 =
       *(undefined8 *)&(param_1->SocketCounts).field0_0x0;
  (this->SocketCounts).field0_0x0._s_0.Z = (param_1->SocketCounts).field0_0x0._s_0.Z;
  (this->SocketTransforms).Buffer.Reference = (FRHIBuffer *)0x0;
  pFVar2 = (param_1->SocketTransforms).Buffer.Reference;
  (this->SocketTransforms).Buffer.Reference = pFVar2;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar2);
  }
  (this->SocketTransforms).SRV.Reference = (FRHIShaderResourceView *)0x0;
  pFVar1 = (param_1->SocketTransforms).SRV.Reference;
  (this->SocketTransforms).SRV.Reference = pFVar1;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar1);
  }
  (this->SocketTransforms).NumBytes = (param_1->SocketTransforms).NumBytes;
  (this->FilteredAndUnfilteredSockets).Buffer.Reference = (FRHIBuffer *)0x0;
  pFVar2 = (param_1->FilteredAndUnfilteredSockets).Buffer.Reference;
  (this->FilteredAndUnfilteredSockets).Buffer.Reference = pFVar2;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar2);
  }
  (this->FilteredAndUnfilteredSockets).SRV.Reference = (FRHIShaderResourceView *)0x0;
  pFVar1 = (param_1->FilteredAndUnfilteredSockets).SRV.Reference;
  (this->FilteredAndUnfilteredSockets).SRV.Reference = pFVar1;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar1);
  }
  (this->FilteredAndUnfilteredSockets).NumBytes = (param_1->FilteredAndUnfilteredSockets).NumBytes;
  this->GPUMemoryUsage = param_1->GPUMemoryUsage;
  this->UvMappingBuffer = param_1->UvMappingBuffer;
  this->UvMappingSet = param_1->UvMappingSet;
  return this;
}

// FInstanceData_RenderThread @ 148f7efb0

/* WARNING: Type propagation algorithm not settling */

FInstanceData_RenderThread * __thiscall
NDIUObjectPropertyReaderLocal::FInstanceData_RenderThread::FInstanceData_RenderThread
          (FInstanceData_RenderThread *this,FInstanceData_RenderThread *param_1)

{
  bool bVar1;
  double dVar2;
  
  (this->CachedTransform).bIsSet = false;
  bVar1 = (param_1->CachedTransform).bIsSet;
  (this->CachedTransform).bIsSet = bVar1;
  if (bVar1 != false) {
    dVar2 = (param_1->CachedTransform).TypedValue.Rotation.XY.m128d_f64[1];
    (this->CachedTransform).TypedValue.Rotation.XY.m128d_f64[0] =
         (param_1->CachedTransform).TypedValue.Rotation.XY.m128d_f64[0];
    (this->CachedTransform).TypedValue.Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->CachedTransform).TypedValue.Rotation.ZW.m128d_f64[1];
    (this->CachedTransform).TypedValue.Rotation.ZW.m128d_f64[0] =
         (param_1->CachedTransform).TypedValue.Rotation.ZW.m128d_f64[0];
    (this->CachedTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_1->CachedTransform).TypedValue.Translation.XY.m128d_f64[1];
    (this->CachedTransform).TypedValue.Translation.XY.m128d_f64[0] =
         (param_1->CachedTransform).TypedValue.Translation.XY.m128d_f64[0];
    (this->CachedTransform).TypedValue.Translation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->CachedTransform).TypedValue.Translation.ZW.m128d_f64[1];
    (this->CachedTransform).TypedValue.Translation.ZW.m128d_f64[0] =
         (param_1->CachedTransform).TypedValue.Translation.ZW.m128d_f64[0];
    (this->CachedTransform).TypedValue.Translation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_1->CachedTransform).TypedValue.Scale3D.XY.m128d_f64[1];
    (this->CachedTransform).TypedValue.Scale3D.XY.m128d_f64[0] =
         (param_1->CachedTransform).TypedValue.Scale3D.XY.m128d_f64[0];
    (this->CachedTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->CachedTransform).TypedValue.Scale3D.ZW.m128d_f64[1];
    (this->CachedTransform).TypedValue.Scale3D.ZW.m128d_f64[0] =
         (param_1->CachedTransform).TypedValue.Scale3D.ZW.m128d_f64[0];
    (this->CachedTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar2;
  }
  (this->CachedInvTransform).bIsSet = false;
  bVar1 = (param_1->CachedInvTransform).bIsSet;
  (this->CachedInvTransform).bIsSet = bVar1;
  if (bVar1 != false) {
    dVar2 = (param_1->CachedInvTransform).TypedValue.Rotation.XY.m128d_f64[1];
    (this->CachedInvTransform).TypedValue.Rotation.XY.m128d_f64[0] =
         (param_1->CachedInvTransform).TypedValue.Rotation.XY.m128d_f64[0];
    (this->CachedInvTransform).TypedValue.Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->CachedInvTransform).TypedValue.Rotation.ZW.m128d_f64[1];
    (this->CachedInvTransform).TypedValue.Rotation.ZW.m128d_f64[0] =
         (param_1->CachedInvTransform).TypedValue.Rotation.ZW.m128d_f64[0];
    (this->CachedInvTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_1->CachedInvTransform).TypedValue.Translation.XY.m128d_f64[1];
    (this->CachedInvTransform).TypedValue.Translation.XY.m128d_f64[0] =
         (param_1->CachedInvTransform).TypedValue.Translation.XY.m128d_f64[0];
    (this->CachedInvTransform).TypedValue.Translation.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->CachedInvTransform).TypedValue.Translation.ZW.m128d_f64[1];
    (this->CachedInvTransform).TypedValue.Translation.ZW.m128d_f64[0] =
         (param_1->CachedInvTransform).TypedValue.Translation.ZW.m128d_f64[0];
    (this->CachedInvTransform).TypedValue.Translation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (param_1->CachedInvTransform).TypedValue.Scale3D.XY.m128d_f64[1];
    (this->CachedInvTransform).TypedValue.Scale3D.XY.m128d_f64[0] =
         (param_1->CachedInvTransform).TypedValue.Scale3D.XY.m128d_f64[0];
    (this->CachedInvTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dVar2;
    dVar2 = (param_1->CachedInvTransform).TypedValue.Scale3D.ZW.m128d_f64[1];
    (this->CachedInvTransform).TypedValue.Scale3D.ZW.m128d_f64[0] =
         (param_1->CachedInvTransform).TypedValue.Scale3D.ZW.m128d_f64[0];
    (this->CachedInvTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar2;
  }
  (this->PropertyData).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->PropertyData).Buffer.Reference = (param_1->PropertyData).Buffer.Reference;
  (param_1->PropertyData).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->PropertyData).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PropertyData).SRV.Reference = (param_1->PropertyData).SRV.Reference;
  (param_1->PropertyData).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PropertyData).NumBytes = (param_1->PropertyData).NumBytes;
  (this->PropertyOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyOffsets).AllocatorInstance.Data = (param_1->PropertyOffsets).AllocatorInstance.Data
  ;
  (param_1->PropertyOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyOffsets).ArrayNum = (param_1->PropertyOffsets).ArrayNum;
  (this->PropertyOffsets).ArrayMax = (param_1->PropertyOffsets).ArrayMax;
  (param_1->PropertyOffsets).ArrayNum = 0;
  (param_1->PropertyOffsets).ArrayMax = 0;
  (this->GpuFunctionToPropertyRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GpuFunctionToPropertyRemap).AllocatorInstance.Data =
       (param_1->GpuFunctionToPropertyRemap).AllocatorInstance.Data;
  (param_1->GpuFunctionToPropertyRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GpuFunctionToPropertyRemap).ArrayNum = (param_1->GpuFunctionToPropertyRemap).ArrayNum;
  (this->GpuFunctionToPropertyRemap).ArrayMax = (param_1->GpuFunctionToPropertyRemap).ArrayMax;
  (param_1->GpuFunctionToPropertyRemap).ArrayNum = 0;
  (param_1->GpuFunctionToPropertyRemap).ArrayMax = 0;
  return this;
}

// ~FInstanceData_RenderThread @ 148f81b90

void __thiscall
NDIStaticMeshLocal::FInstanceData_RenderThread::~FInstanceData_RenderThread
          (FInstanceData_RenderThread *this)

{
  FRHIShaderResourceView *pFVar1;
  FRHIBuffer *pFVar2;
  
  Release(this);
  pFVar1 = (this->FilteredAndUnfilteredSockets).SRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->FilteredAndUnfilteredSockets).Buffer.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->SocketTransforms).SRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->SocketTransforms).Buffer.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->FilteredAndUnfilteredSections).SRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->FilteredAndUnfilteredSections).Buffer.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->SectionInfos).SRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->SectionInfos).Buffer.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->MeshUniformSamplingTriangleSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->MeshColorBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->MeshUVBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->MeshTangentBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->MeshPositionBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->MeshIndexBufferSRV).Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
    return;
  }
  return;
}

// Init @ 148fc16b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
NDIStaticMeshLocal::FInstanceData_RenderThread::Init
          (FInstanceData_RenderThread *this,FRHICommandListBase *param_1,FGpuInitializeData *param_2
          )

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  FStaticMeshLODResources *pFVar2;
  FRHIResource *this_00;
  FRHIShaderResourceView *pFVar3;
  FName this_01;
  bool bVar4;
  char cVar5;
  bool bVar6;
  TRefCountPtr<FRHIShaderResourceView> TVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar9;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  byte bVar10;
  int iVar11;
  FName FVar12;
  FRHIShaderResourceView *pFVar13;
  FName FVar14;
  uchar auVar15 [8];
  uint uVar16;
  FName this_04;
  FName local_res8;
  FRHICommandListBase *local_res10;
  FStatMessage local_58;
  FString local_48;
  
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
  uVar16 = 0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pFVar2 = (param_2->LODResource).Reference;
  local_res10 = param_1;
  if (pFVar2 == (FStaticMeshLODResources *)0x0) {
    *(undefined8 *)&(this->NumTriangles).field0_0x0 =
         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    (this->NumTriangles).field0_0x0._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z
    ;
    this->NumVertices = 0;
    this->NumUVs = 0;
    this->bIsValid = false;
    this->bGpuUniformDistribution = false;
    *(undefined8 *)&(this->SectionCounts).field0_0x0 =
         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    (this->SectionCounts).field0_0x0._s_0.Z =
         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    goto LAB_148fc1ba0;
  }
  this_00 = (FRHIResource *)(pFVar2->IndexBuffer)._padding_;
  if (this_00 == (FRHIResource *)0x0) {
    (**(code **)((pFVar2->IndexBuffer).IndexStorage._padding_ + 0x30))();
LAB_148fc17cc:
    if (4 < (byte)LogNiagara._0_1_) {
      ::FName::ToString(&param_2->StaticMeshFName,&local_48);
      ::FName::ToString(&param_2->SystemFName,(FString *)&local_58);
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_NDIStaticMeshLocal::FInstanceData_RenderThread::Init(FRHICommandListBase&___ptr64,NDIStaticMeshLocal::FGpuInitializeData&___ptr64)___ptr64'
                  ::__l11::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_58.StatData.Pad != (uchar  [8])0x0) {
        FMemory::Free((void *)local_58.StatData.Pad);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    FVar12 = (FName)(this->MeshIndexBufferSRV).Reference;
    if (FVar12 != (FName)0x0) {
      (this->MeshIndexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
LAB_148fc1857:
      FRHIResource::Release((FRHIResource *)FVar12);
    }
  }
  else {
    FRHIResource::AddRef(this_00);
    cVar5 = (**(code **)((((param_2->LODResource).Reference)->IndexBuffer).IndexStorage._padding_ +
                        0x30))();
    if ((((uint)this_00[9].AtomicFlags.Packed & 0x100) == 0) ||
       ((bVar6 = AreBufferSRVsAlwaysCreatedByDefault(GMaxRHIShaderPlatform), !bVar6 &&
        (cVar5 == '\0')))) goto LAB_148fc17cc;
    local_58.NameAndInfo.Index.Value = 0;
    local_58.NameAndInfo.Number = 0;
    bVar10 = 0x20;
    if ((((param_2->LODResource).Reference)->IndexBuffer).b32Bit != false) {
      bVar10 = 0x1c;
    }
    local_58.StatData.Pad._0_2_ = (ushort)bVar10 << 8;
    local_58.StatData.Pad[2] = 1;
    local_58.StatData.Pad[3] = '\0';
    local_58.StatData.Pad[4] = '\0';
    local_58.StatData.Pad[5] = '\0';
    local_58.StatData.Pad[6] = '\0';
    local_58.StatData.Pad[7] = '\0';
    TVar7 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)&local_res8,(FInitializer *)this_00);
    pTVar1 = &this->MeshIndexBufferSRV;
    if ((FRHIShaderResourceView *)pTVar1 != TVar7.Reference) {
      pFVar3 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar1->Reference = *TVar7.Reference;
      *(undefined8 *)TVar7.Reference = 0;
      if (pFVar3 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar3);
      }
    }
    FVar12 = local_res8;
    if (local_res8 != (FName)0x0) goto LAB_148fc1857;
  }
  pFVar3 = (this->MeshPositionBufferSRV).Reference;
  pFVar13 = (((param_2->LODResource).Reference)->VertexBuffers).PositionVertexBuffer.
            PositionComponentSRV.Reference;
  if (pFVar3 != pFVar13) {
    (this->MeshPositionBufferSRV).Reference = pFVar13;
    if (pFVar13 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar13);
    }
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  pFVar3 = (this->MeshTangentBufferSRV).Reference;
  pFVar13 = (((param_2->LODResource).Reference)->VertexBuffers).StaticMeshVertexBuffer.TangentsSRV.
            Reference;
  if (pFVar3 != pFVar13) {
    (this->MeshTangentBufferSRV).Reference = pFVar13;
    if (pFVar13 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar13);
    }
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  pFVar3 = (this->MeshUVBufferSRV).Reference;
  pFVar13 = (((param_2->LODResource).Reference)->VertexBuffers).StaticMeshVertexBuffer.
            TextureCoordinatesSRV.Reference;
  if (pFVar3 != pFVar13) {
    (this->MeshUVBufferSRV).Reference = pFVar13;
    if (pFVar13 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar13);
    }
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  pFVar3 = (this->MeshColorBufferSRV).Reference;
  if (param_2->OverrideColorBuffer == (FColorVertexBuffer *)0x0) {
    pFVar13 = (((param_2->LODResource).Reference)->VertexBuffers).ColorVertexBuffer.
              ColorComponentsSRV.Reference;
  }
  else {
    pFVar13 = (param_2->OverrideColorBuffer->ColorComponentsSRV).Reference;
  }
  if (pFVar3 != pFVar13) {
    (this->MeshColorBufferSRV).Reference = pFVar13;
    if (pFVar13 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar13);
    }
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  pFVar2 = (param_2->LODResource).Reference;
  iVar11 = (pFVar2->IndexBuffer).CachedNumIndices;
  if (iVar11 < 0) {
    iVar11 = (int)(pFVar2->IndexBuffer).IndexStorage._padding_;
    if ((pFVar2->IndexBuffer).b32Bit == false) {
      iVar11 = iVar11 / 2;
    }
    else {
      iVar11 = (int)((iVar11 >> 0x1f & 3U) + iVar11) >> 2;
    }
  }
  (this->NumTriangles).field0_0x0._s_0.X =
       iVar11 / 3 + (iVar11 >> 0x1f) +
       (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f);
  (this->NumTriangles).field0_0x0._s_0.Y = param_2->NumFilteredTriangles;
  (this->NumTriangles).field0_0x0._s_0.Z = param_2->NumUnfilteredTriangles;
  this->NumVertices =
       (((param_2->LODResource).Reference)->VertexBuffers).PositionVertexBuffer.NumVertices;
  if ((this->MeshUVBufferSRV).Reference != (FRHIShaderResourceView *)0x0) {
    uVar16 = (((param_2->LODResource).Reference)->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords
    ;
  }
  this->NumUVs = uVar16;
  if ((((this->MeshIndexBufferSRV).Reference == (FRHIShaderResourceView *)0x0) ||
      ((this->MeshPositionBufferSRV).Reference == (FRHIShaderResourceView *)0x0)) ||
     ((this->MeshTangentBufferSRV).Reference == (FRHIShaderResourceView *)0x0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  this->bIsValid = bVar6;
  if (param_2->bGpuUniformDistribution == false) {
    bVar4 = false;
    bVar6 = true;
    FVar12 = local_res8;
    this_04 = FVar14;
  }
  else {
    FVar12 = (FName)(((param_2->LODResource).Reference)->AreaWeightedSectionSamplersBuffer).
                    BufferSectionTriangleSRV.Reference;
    if (FVar12 != (FName)0x0) {
      FRHIResource::AddRef((FRHIResource *)FVar12);
    }
    bVar4 = true;
    bVar6 = false;
    FVar14 = local_res8;
    this_04 = FVar12;
  }
  this_01 = (FName)(this->MeshUniformSamplingTriangleSRV).Reference;
  if (this_01 != this_04) {
    (this->MeshUniformSamplingTriangleSRV).Reference = (FRHIShaderResourceView *)this_04;
    if (this_04 != (FName)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_04);
    }
    if (this_01 != (FName)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  if ((bVar6) && (FVar14 != (FName)0x0)) {
    FRHIResource::Release((FRHIResource *)FVar14);
  }
  if ((bVar4) && (FVar12 != (FName)0x0)) {
    FRHIResource::Release((FRHIResource *)FVar12);
  }
  param_1 = local_res10;
  if ((param_2->bGpuUniformDistribution == false) ||
     ((this->MeshUniformSamplingTriangleSRV).Reference == (FRHIShaderResourceView *)0x0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  this->bGpuUniformDistribution = bVar6;
  (this->SectionCounts).field0_0x0._s_0.X = param_2->NumSections;
  (this->SectionCounts).field0_0x0._s_0.Y = param_2->NumFilteredSections;
  (this->SectionCounts).field0_0x0._s_0.Z = param_2->NumUnfilteredSections;
  uVar16 = (uint)(param_2->SectionInfos)._padding_;
  if (0 < (int)uVar16) {
    FReadBuffer::Initialize
              (&this->SectionInfos,local_res10,L"NDISkelMesh_SectionInfos",0x10,uVar16,
               PF_R32G32B32A32_UINT,Static,(FResourceArrayUploadInterface *)&param_2->SectionInfos);
  }
  uVar16 = (uint)(param_2->FilteredAndUnfilteredSections)._padding_;
  if (0 < (int)uVar16) {
    FReadBuffer::Initialize
              (&this->FilteredAndUnfilteredSections,param_1,
               L"NDISkelMesh_FilteredAndUnfilteredSections",2,uVar16,PF_R16_UINT,Static,
               (FResourceArrayUploadInterface *)&param_2->FilteredAndUnfilteredSections);
  }
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
LAB_148fc1ba0:
  (this->SocketCounts).field0_0x0._s_0.X = param_2->NumSockets;
  (this->SocketCounts).field0_0x0._s_0.Y = param_2->NumFilteredSockets;
  (this->SocketCounts).field0_0x0._s_0.Z = param_2->NumUnfilteredSockets;
  uVar16 = (uint)(param_2->SocketTransforms)._padding_;
  if (0 < (int)uVar16) {
    FReadBuffer::Initialize
              (&this->SocketTransforms,param_1,L"NDISkelMesh_SocketTransforms",0x10,uVar16,
               PF_A32B32G32R32F,Static,(FResourceArrayUploadInterface *)&param_2->SocketTransforms);
  }
  uVar16 = (uint)(param_2->FilteredAndUnfilteredSockets)._padding_;
  if (0 < (int)uVar16) {
    FReadBuffer::Initialize
              (&this->FilteredAndUnfilteredSockets,param_1,
               L"NDISkelMesh_FilteredAndUnfilteredSockets",2,uVar16,PF_R16_UINT,Static,
               (FResourceArrayUploadInterface *)&param_2->FilteredAndUnfilteredSockets);
  }
  auVar15._0_4_ =
       (this->FilteredAndUnfilteredSockets).NumBytes + (this->SocketTransforms).NumBytes +
       (this->FilteredAndUnfilteredSections).NumBytes + (this->SectionInfos).NumBytes;
  auVar15[4] = '\0';
  auVar15[5] = '\0';
  auVar15[6] = '\0';
  auVar15[7] = '\0';
  this->GPUMemoryUsage = (long64)auVar15;
  if (auVar15._0_4_ != 0) {
    FVar9 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar8 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar8,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar14 = *(FName *)FVar9;
    if (((FVar14 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar14;
      this_02 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_02 == (FThreadStats *)0x0) {
        this_03 = FThreadStatsPool::Get();
        this_02 = FThreadStatsPool::GetFromPool(this_03);
      }
      local_58.NameAndInfo =
           (FStatNameAndInfo)((ulonglong)FVar14 & 0xffffafffffffffff | 0xa00000000000);
      local_res8 = FVar14;
      local_58.StatData.Pad = auVar15;
      FThreadStats::AddStatMessage(this_02,&local_58);
      FStatsTrace::Add(&local_res8,(long64)auVar15);
      if (this_02->ScopeCount == 0) {
        FThreadStats::Flush(this_02,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// Release @ 148fca5e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
NDIStaticMeshLocal::FInstanceData_RenderThread::Release(FInstanceData_RenderThread *this)

{
  uchar auVar1 [8];
  FName FVar2;
  FRHIShaderResourceView *pFVar3;
  FRHIBuffer *pFVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_28;
  
  auVar1 = (uchar  [8])this->GPUMemoryUsage;
  this->bIsValid = false;
  if (auVar1 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar5 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar5,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
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
      local_28.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_res8 = FVar2;
      local_28.StatData.Pad = auVar1;
      local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,(long64)auVar1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  this->GPUMemoryUsage = 0;
  pFVar3 = (this->MeshIndexBufferSRV).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->MeshIndexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = (this->MeshPositionBufferSRV).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->MeshPositionBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = (this->MeshTangentBufferSRV).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->MeshTangentBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = (this->MeshUVBufferSRV).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->MeshUVBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = (this->MeshColorBufferSRV).Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->MeshColorBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  (this->SectionInfos).NumBytes = 0;
  pFVar4 = (this->SectionInfos).Buffer.Reference;
  if (pFVar4 != (FRHIBuffer *)0x0) {
    (this->SectionInfos).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar3 = (this->SectionInfos).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->SectionInfos).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  (this->FilteredAndUnfilteredSections).NumBytes = 0;
  pFVar4 = (this->FilteredAndUnfilteredSections).Buffer.Reference;
  if (pFVar4 != (FRHIBuffer *)0x0) {
    (this->FilteredAndUnfilteredSections).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar3 = (this->FilteredAndUnfilteredSections).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->FilteredAndUnfilteredSections).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  (this->SocketTransforms).NumBytes = 0;
  pFVar4 = (this->SocketTransforms).Buffer.Reference;
  if (pFVar4 != (FRHIBuffer *)0x0) {
    (this->SocketTransforms).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar3 = (this->SocketTransforms).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->SocketTransforms).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  (this->FilteredAndUnfilteredSockets).NumBytes = 0;
  pFVar4 = (this->FilteredAndUnfilteredSockets).Buffer.Reference;
  if (pFVar4 != (FRHIBuffer *)0x0) {
    (this->FilteredAndUnfilteredSockets).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar3 = (this->FilteredAndUnfilteredSockets).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->FilteredAndUnfilteredSockets).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  return;
}

