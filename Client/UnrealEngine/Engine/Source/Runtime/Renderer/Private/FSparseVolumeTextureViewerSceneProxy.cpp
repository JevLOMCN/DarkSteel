// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// FSparseVolumeTextureViewerSceneProxy @ 145666530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSparseVolumeTextureViewerSceneProxy * __thiscall
FSparseVolumeTextureViewerSceneProxy::FSparseVolumeTextureViewerSceneProxy
          (FSparseVolumeTextureViewerSceneProxy *this,USparseVolumeTextureViewerComponent *param_1,
          FName param_2)

{
  USparseVolumeTextureFrame *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FTextureRenderResources *pFVar5;
  
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,param_2);
  this->TextureRenderResources = (FTextureRenderResources *)0x0;
  this->_padding_ = (longlong)&___7FSparseVolumeTextureViewerSceneProxy__6B_;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->GlobalTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->GlobalTransform).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->GlobalTransform).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->GlobalTransform).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->GlobalTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->GlobalTransform).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->GlobalTransform).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->GlobalTransform).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->GlobalTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->GlobalTransform).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->GlobalTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->GlobalTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->FrameTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->FrameTransform).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->FrameTransform).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->FrameTransform).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->FrameTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->FrameTransform).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->FrameTransform).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->FrameTransform).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->FrameTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->FrameTransform).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->FrameTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->FrameTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  pUVar1 = (param_1->SparseVolumeTextureFrame).field0_0x0.DebugPtr;
  if (pUVar1 != (USparseVolumeTextureFrame *)0x0) {
    pFVar5 = (FTextureRenderResources *)(**(code **)(*(longlong *)pUVar1 + 0x310))();
    this->TextureRenderResources = pFVar5;
  }
  return this;
}

// ~FSparseVolumeTextureViewerSceneProxy @ 145667210

void __thiscall
FSparseVolumeTextureViewerSceneProxy::~FSparseVolumeTextureViewerSceneProxy
          (FSparseVolumeTextureViewerSceneProxy *this)

{
  this->_padding_ = (longlong)&___7FPrimitiveSceneProxy__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// CreateRenderThreadResources @ 145679ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSparseVolumeTextureViewerSceneProxy::CreateRenderThreadResources
          (FSparseVolumeTextureViewerSceneProxy *this,FRHICommandListBase *param_1)

{
  return;
}

// DestroyRenderThreadResources @ 14567a900

void __thiscall
FSparseVolumeTextureViewerSceneProxy::DestroyRenderThreadResources
          (FSparseVolumeTextureViewerSceneProxy *this)

{
  return;
}

// GetDynamicMeshElements @ 145683190

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSparseVolumeTextureViewerSceneProxy::GetDynamicMeshElements
          (FSparseVolumeTextureViewerSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPrimitiveDrawInterface *pFVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  TVector<double>_u_0 local_68;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  
  iVar8 = param_1->ArrayNum;
  uVar5 = 0;
  if (0 < iVar8) {
    lVar6 = 0;
    uVar7 = 1;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar8) {
        uVar3 = ~uVar5 >> 0x1f;
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
      bVar2 = FPrimitiveSceneProxy::IsShown
                        ((FPrimitiveSceneProxy *)this,
                         *(FSceneView **)((param_1->AllocatorInstance).Data + lVar6));
      if ((bVar2) && ((param_3 & uVar7) != 0)) {
        pFVar4 = FMeshElementCollector::GetPDI(param_4,uVar5);
        local_68._s_0.X = (double)this->_padding_;
        local_68._s_0.Y = (double)this->_padding_;
        local_68._s_0.Z = (double)this->_padding_;
        lStack_50 = this->_padding_;
        local_48 = this->_padding_;
        lStack_40 = this->_padding_;
        local_38 = this->_padding_;
        FPrimitiveSceneProxy::RenderBounds
                  ((FPrimitiveSceneProxy *)this,pFVar4,&param_2->EngineShowFlags,
                   (TBoxSphereBounds<double,double> *)&local_68._s_0,(this->_padding_ & 0x600) != 0)
        ;
      }
      iVar8 = param_1->ArrayNum;
      uVar5 = uVar5 + 1;
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < iVar8);
  }
  return;
}

// GetMemoryFootprint @ 145683560

uint __thiscall
FSparseVolumeTextureViewerSceneProxy::GetMemoryFootprint(FSparseVolumeTextureViewerSceneProxy *this)

{
  return *(int *)((longlong)&this->_padding_ + 4) * 4 + 0x370;
}

// GetTypeHash @ 14568ac00

ulong64 __thiscall
FSparseVolumeTextureViewerSceneProxy::GetTypeHash(FSparseVolumeTextureViewerSceneProxy *this)

{
  return 0x155147f90;
}

// GetViewRelevance @ 14568b130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FSparseVolumeTextureViewerSceneProxy::GetViewRelevance
          (FSparseVolumeTextureViewerSceneProxy *this,
          FPrimitiveViewRelevance *__return_storage_ptr__,FSceneView *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar5 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  puVar2 = &__return_storage_ptr__->field_0x8;
  uVar6 = (uint)bVar5 << 2 | *(uint *)puVar2 & 0xfffffffa | 2;
  puVar3 = &__return_storage_ptr__->field_0x8;
  __return_storage_ptr__->bStaticRelevance = 0;
  __return_storage_ptr__->bDrawRelevance = bVar5;
  __return_storage_ptr__->bDynamicRelevance = 1;
  bVar4 = *(byte *)((longlong)&this->_padding_ + 3);
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xfb;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 5);
  *pbVar1 = *pbVar1 | 4;
  *(uint *)&__return_storage_ptr__->field_0x8 = ((uint)bVar4 << 4 ^ uVar6) & 0x80 ^ uVar6;
  return __return_storage_ptr__;
}

