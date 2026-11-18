// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 8

// FGeomCacheTrackProxy @ 14ca055b0

FGeomCacheTrackProxy * __thiscall
FGeomCacheTrackProxy::FGeomCacheTrackProxy(FGeomCacheTrackProxy *this,Type param_1)

{
  FGeomCacheVertexFactory *this_00;
  
  *(undefined ***)this = &___7FGeomCacheTrackProxy__6B_;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this->PositionBuffers);
  this->PositionBuffers[0]._padding_ = (longlong)&___7FGeomCacheVertexBuffer__6B_;
  this->PositionBuffers[0].BufferSRV.Reference = (FRHIShaderResourceView *)0x0;
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)(this->PositionBuffers + 1));
  this->PositionBuffers[1]._padding_ = (longlong)&___7FGeomCacheVertexBuffer__6B_;
  this->PositionBuffers[1].BufferSRV.Reference = (FRHIShaderResourceView *)0x0;
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&this->TangentXBuffer);
  *(undefined8 *)&(this->TangentXBuffer).field_0x30 = 0;
  *(undefined ***)&this->TangentXBuffer = &___7FGeomCacheTangentBuffer__6B_;
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&this->TangentZBuffer);
  *(undefined8 *)&(this->TangentZBuffer).field_0x30 = 0;
  *(undefined ***)&this->TangentZBuffer = &___7FGeomCacheTangentBuffer__6B_;
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&this->TextureCoordinatesBuffer);
  (this->TextureCoordinatesBuffer)._padding_ = (longlong)&___7FGeomCacheVertexBuffer__6B_;
  (this->TextureCoordinatesBuffer).BufferSRV.Reference = (FRHIShaderResourceView *)0x0;
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&this->ColorBuffer);
  *(undefined8 *)&(this->ColorBuffer).field_0x30 = 0;
  *(undefined ***)&this->ColorBuffer = &___7FGeomCacheColorBuffer__6B_;
  FIndexBuffer::FIndexBuffer((FIndexBuffer *)&this->IndexBuffer);
  (this->IndexBuffer).NumAllocatedIndices = 0;
  (this->IndexBuffer).NumValidIndices = 0;
  (this->IndexBuffer)._padding_ = (longlong)&___7FGeomCacheIndexBuffer__6B_;
  this_00 = &this->VertexFactory;
  (this->IndexBuffer).BufferSRV.Reference = (FRHIShaderResourceView *)0x0;
  FVertexFactory::FVertexFactory((FVertexFactory *)this_00,param_1);
  *(undefined ***)&this_00->field_0x0 = &___7FGeometryCacheVertexVertexFactory__6B_;
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&(this->VertexFactory).field_0x140);
  *(undefined8 *)&(this->VertexFactory).field_0x170 = 0;
  *(undefined8 *)&(this->VertexFactory).field_0x178 = 0;
  *(undefined8 *)&(this->VertexFactory).field_0x168 = 0xffffffffffffffff;
  *(undefined8 *)&(this->VertexFactory).field_0x180 = 0;
  *(undefined8 *)&(this->VertexFactory).field_0x188 = 0;
  *(undefined8 *)&(this->VertexFactory).field_0x190 = 0;
  *(undefined8 *)&(this->VertexFactory).field_0x198 = 0;
  *(undefined4 *)&(this->VertexFactory).field_0x1e0 = 0;
  *(undefined4 *)&(this->VertexFactory).field_0x1e4 = 4;
  *(undefined8 *)&(this->VertexFactory).field_0x1e8 = 0;
  *(undefined8 *)&(this->VertexFactory).field_0x1f0 = 0;
  *(undefined8 *)&(this->VertexFactory).field_0x1f8 = 0;
  *(undefined8 *)&(this->VertexFactory).field_0x200 = 0;
  (this->VertexFactory).field_0x208 = 0;
  *(undefined ***)&this_00->field_0x0 = &___7FGeomCacheVertexFactory__6B_;
  this->bInitializedRayTracing = false;
  FRenderResource::FRenderResource((FRenderResource *)&this->RayTracingGeometry);
  (this->RayTracingGeometry).DynamicGeometrySharedBufferGenerationID = -1;
  (this->RayTracingGeometry)._padding_ = (longlong)&___7FRayTracingGeometry__6B_;
  (this->RayTracingGeometry).RawData._padding_ = (longlong)&___7__TResourceArray_E_0A___6B_;
  (this->RayTracingGeometry).RawDataHeader.Reserved[0] = 0xffffffff;
  (this->RayTracingGeometry).RawDataHeader.Reserved[1] = 0xffffffff;
  (this->RayTracingGeometry).RawDataHeader.Reserved[2] = 0xffffffff;
  (this->RayTracingGeometry).RawDataHeader.Reserved[3] = 0xffffffff;
  (this->RayTracingGeometry).RawDataHeader.Reserved[4] = 0xffffffff;
  (this->RayTracingGeometry).RawDataHeader.Reserved[5] = 0xffffffff;
  (this->RayTracingGeometry).RawData._padding_ = 0;
  (this->RayTracingGeometry).RawData._padding_ = 0;
  (this->RayTracingGeometry).RawData.bNeedsCPUAccess = false;
  (this->RayTracingGeometry).LastUpdatedFrame = 0;
  (this->RayTracingGeometry).NumUpdatesSinceLastBuild = 0;
  FRayTracingGeometryInitializer::FRayTracingGeometryInitializer
            (&(this->RayTracingGeometry).Initializer);
  (this->RayTracingGeometry).GroupHandle = -1;
  (this->RayTracingGeometry).LODIndex = -1;
  (this->RayTracingGeometry).RayTracingGeometryRHI.Reference = (FRHIRayTracingGeometry *)0x0;
  (this->RayTracingGeometry).GeometryState = Invalid;
  (this->RayTracingGeometry).RayTracingBuildRequestIndex = -1;
  (this->RayTracingGeometry).RayTracingGeometryHandle = -1;
  return this;
}

// ~FGeomCacheTrackProxy @ 14ca089d0

void __thiscall FGeomCacheTrackProxy::~FGeomCacheTrackProxy(FGeomCacheTrackProxy *this)

{
  FRHIShaderResourceView *pFVar1;
  FRHIResource *pFVar2;
  FScriptContainerElement *pFVar3;
  
  *(undefined ***)this = &___7FGeomCacheTrackProxy__6B_;
  FRayTracingGeometry::~FRayTracingGeometry(&this->RayTracingGeometry);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&(this->VertexFactory).field_0x140);
  FVertexFactory::~FVertexFactory((FVertexFactory *)&this->VertexFactory);
  pFVar1 = (this->IndexBuffer).BufferSRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)&this->IndexBuffer);
  pFVar2 = *(FRHIResource **)&(this->ColorBuffer).field_0x30;
  if (pFVar2 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar2);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->ColorBuffer);
  pFVar1 = (this->TextureCoordinatesBuffer).BufferSRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->TextureCoordinatesBuffer);
  pFVar2 = *(FRHIResource **)&(this->TangentZBuffer).field_0x30;
  if (pFVar2 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar2);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->TangentZBuffer);
  pFVar2 = *(FRHIResource **)&(this->TangentXBuffer).field_0x30;
  if (pFVar2 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar2);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->TangentXBuffer);
  pFVar1 = this->PositionBuffers[1].BufferSRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)(this->PositionBuffers + 1));
  pFVar1 = this->PositionBuffers[0].BufferSRV.Reference;
  if (pFVar1 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this->PositionBuffers);
  pFVar3 = (this->Materials).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// FindSampleIndexesFromTime @ 14ca16090

void __thiscall
FGeomCacheTrackProxy::FindSampleIndexesFromTime
          (FGeomCacheTrackProxy *this,float param_1,bool param_2,bool param_3,int *param_4,
          int *param_5,float *param_6)

{
  int iVar1;
  UGeometryCacheTrackStreamable *this_00;
  UClass *pUVar2;
  
  this_00 = (UGeometryCacheTrackStreamable *)this->Track;
  if (this_00 != (UGeometryCacheTrackStreamable *)0x0) {
    pUVar2 = UGeometryCacheTrackStreamable::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      UGeometryCacheTrackStreamable::FindSampleIndexesFromTime
                (this_00,param_1,param_2,param_3,param_4,param_5,param_6);
    }
  }
  return;
}

// GetMeshData @ 14ca1e1f0

bool __thiscall
FGeomCacheTrackProxy::GetMeshData
          (FGeomCacheTrackProxy *this,int param_1,FGeometryCacheMeshData *param_2)

{
  int iVar1;
  UGeometryCacheTrack *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = this->Track;
  if (pUVar2 != (UGeometryCacheTrack *)0x0) {
    pUVar4 = UGeometryCacheTrackStreamable::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      bVar3 = FGeometryCacheTrackStreamableRenderResource::DecodeMeshData
                        ((FGeometryCacheTrackStreamableRenderResource *)&pUVar2[1].MatrixSampleTimes
                         ,param_1,param_2);
      return bVar3;
    }
  }
  return false;
}

// GetVisibilitySample @ 14ca1fdb0

FVisibilitySample * __thiscall
FGeomCacheTrackProxy::GetVisibilitySample(FGeomCacheTrackProxy *this,float param_1,bool param_2)

{
  int iVar1;
  UGeometryCacheTrackStreamable *this_00;
  UClass *pUVar2;
  FVisibilitySample *pFVar3;
  
  this_00 = (UGeometryCacheTrackStreamable *)this->Track;
  if (this_00 != (UGeometryCacheTrackStreamable *)0x0) {
    pUVar2 = UGeometryCacheTrackStreamable::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      pFVar3 = UGeometryCacheTrackStreamable::GetVisibilitySample(this_00,param_1,param_2);
      return pFVar3;
    }
  }
  return &FVisibilitySample::InvisibleSample;
}

// InitRenderResources @ 14ca22160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGeomCacheTrackProxy::InitRenderResources
          (FGeomCacheTrackProxy *this,FRHICommandListBase *param_1,int param_2,int param_3)

{
  FGeomCacheVertexBuffer *pFVar1;
  FGeomCacheColorBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 auStackY_138 [32];
  FDataType local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (param_2 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumVertices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                       ,0x59e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_3 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumIndices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                       ,0x59f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)&(this->TangentXBuffer).field_0x18 != -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->IsInitialized() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Public\\GeometryCacheSceneProxy.h"
                       ,0x1d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_2 * 4;
  *(int *)&(this->TangentXBuffer).field_0x28 = iVar5;
  if (*(int *)&(this->TangentZBuffer).field_0x18 != -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->IsInitialized() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Public\\GeometryCacheSceneProxy.h"
                       ,0x1d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = &this->TextureCoordinatesBuffer;
  *(int *)&(this->TangentZBuffer).field_0x28 = iVar5;
  if ((int)(this->TextureCoordinatesBuffer)._padding_ != -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->IsInitialized() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Public\\GeometryCacheSceneProxy.h"
                       ,0x1d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = &this->ColorBuffer;
  (this->TextureCoordinatesBuffer).SizeInBytes = param_2 * 8;
  if (*(int *)&(this->ColorBuffer).field_0x18 != -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->IsInitialized() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Public\\GeometryCacheSceneProxy.h"
                       ,0x1d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(int *)&(this->ColorBuffer).field_0x28 = iVar5;
  if ((int)this->PositionBuffers[0]._padding_ != -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->IsInitialized() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Public\\GeometryCacheSceneProxy.h"
                       ,0x1d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->PositionBuffers[0].SizeInBytes = param_2 * 0xc;
  if ((int)this->PositionBuffers[1]._padding_ != -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("this->IsInitialized() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Public\\GeometryCacheSceneProxy.h"
                       ,0x1d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->PositionBuffers[1].SizeInBytes = param_2 * 0xc;
  (this->IndexBuffer).NumAllocatedIndices = param_3;
  *(undefined8 *)(this->PositionBufferFrameTimes + 1) = 0xffffffffbf800000;
  (this->IndexBuffer).NumValidIndices = 0;
  local_e8.PositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_e8.PositionComponent.StreamOffset = 0;
  local_e8.PositionComponent.Offset = '\0';
  local_e8.PositionComponent.Stride = '\0';
  local_e8.PositionComponent.Type.Value = '\0';
  local_e8.PositionComponent.VertexStreamUsage = Default;
  local_e8.TangentBasisComponents[0].VertexBuffer = (FVertexBuffer *)0x0;
  local_e8.TangentBasisComponents[0].StreamOffset = 0;
  local_e8.TangentBasisComponents[0].Offset = '\0';
  local_e8.TangentBasisComponents[0].Stride = '\0';
  local_e8.TangentBasisComponents[0].Type.Value = '\0';
  local_e8.TangentBasisComponents[0].VertexStreamUsage = Default;
  local_e8.TangentBasisComponents[1].VertexBuffer = (FVertexBuffer *)0x0;
  local_e8.TangentBasisComponents[1].StreamOffset = 0;
  local_e8.TangentBasisComponents[1].Offset = '\0';
  local_e8.TangentBasisComponents[1].Stride = '\0';
  local_e8.TangentBasisComponents[1].Type.Value = '\0';
  local_e8.TangentBasisComponents[1].VertexStreamUsage = Default;
  local_e8.TextureCoordinates.ArrayNum = 0;
  local_e8.ColorComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_e8.ColorComponent.StreamOffset = 0;
  local_e8.ColorComponent.Offset = '\0';
  local_e8.ColorComponent.Stride = '\0';
  local_e8.ColorComponent.Type.Value = '\0';
  local_e8.ColorComponent.VertexStreamUsage = Default;
  local_e8.MotionBlurDataComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_e8.MotionBlurDataComponent.StreamOffset = 0;
  local_e8.MotionBlurDataComponent.Offset = '\0';
  local_e8.MotionBlurDataComponent.Stride = '\0';
  local_e8.MotionBlurDataComponent.Type.Value = '\0';
  local_e8.MotionBlurDataComponent.VertexStreamUsage = Default;
  local_e8.bIsDummyData = false;
  this->PositionBufferFrameIndices[0] = 0xffffffff;
  this->PositionBufferFrameIndices[1] = 0xffffffff;
  this->PositionBufferFrameTimes[0] = -1.0;
  local_e8.TextureCoordinates.ArrayMax = 4;
  FGeomCacheVertexFactory::InitComponentVF
            ((FVertexBuffer *)this->PositionBuffers,(FVertexBuffer *)(this->PositionBuffers + 1),
             (FVertexBuffer *)&this->TangentXBuffer,(FVertexBuffer *)&this->TangentZBuffer,
             (FVertexBuffer *)pFVar1,(FVertexBuffer *)pFVar2,&local_e8);
  FGeometryCacheVertexVertexFactory::SetData
            ((FGeometryCacheVertexVertexFactory *)&this->VertexFactory,param_1,&local_e8);
  (**(code **)(this->PositionBuffers[0]._padding_ + 0x18))(this->PositionBuffers,param_1);
  (**(code **)(this->PositionBuffers[1]._padding_ + 0x18))(this->PositionBuffers + 1,param_1);
  (**(code **)(*(longlong *)&this->TangentXBuffer + 0x18))(&this->TangentXBuffer,param_1);
  (**(code **)(*(longlong *)&this->TangentZBuffer + 0x18))(&this->TangentZBuffer,param_1);
  (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,param_1);
  (**(code **)(*(longlong *)&pFVar2->field_0x0 + 0x18))(pFVar2,param_1);
  (**(code **)((this->IndexBuffer)._padding_ + 0x18))(&this->IndexBuffer,param_1);
  (**(code **)(*(longlong *)&this->VertexFactory + 0x18))(&this->VertexFactory,param_1);
  this->bResourcesInitialized = true;
  return;
}

// IsTopologyCompatible @ 14ca23c50

bool __thiscall
FGeomCacheTrackProxy::IsTopologyCompatible(FGeomCacheTrackProxy *this,int param_1,int param_2)

{
  int iVar1;
  UGeometryCacheTrack *pUVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  
  pUVar2 = this->Track;
  if (pUVar2 != (UGeometryCacheTrack *)0x0) {
    pUVar4 = UGeometryCacheTrackStreamable::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
                    /* WARNING: Could not recover jumptable at 0x00014ca23cb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(longlong *)pUVar2[2]._padding_ + 0x18))
                        ((longlong *)pUVar2[2]._padding_,param_1,param_2);
      return (bool)uVar3;
    }
  }
  return false;
}

// UpdateMeshData @ 14ca2dca0

bool __thiscall
FGeomCacheTrackProxy::UpdateMeshData
          (FGeomCacheTrackProxy *this,float param_1,bool param_2,int *param_3,
          FGeometryCacheMeshData *param_4)

{
  int iVar1;
  UGeometryCacheTrack *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = this->Track;
  if (pUVar2 != (UGeometryCacheTrack *)0x0) {
    pUVar4 = UGeometryCacheTrackStreamable::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      bVar3 = FGeometryCacheTrackStreamableRenderResource::UpdateMeshData
                        ((FGeometryCacheTrackStreamableRenderResource *)&pUVar2[1].MatrixSampleTimes
                         ,param_1,param_2,param_3,param_4);
      return bVar3;
    }
  }
  return false;
}

