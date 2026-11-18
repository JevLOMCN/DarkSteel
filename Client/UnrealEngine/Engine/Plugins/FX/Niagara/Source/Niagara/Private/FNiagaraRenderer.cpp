// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 37

// FNiagaraRenderer @ 149333780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraRenderer * __thiscall
FNiagaraRenderer::FNiagaraRenderer
          (FNiagaraRenderer *this,Type param_1,UNiagaraRendererProperties *param_2,
          FNiagaraEmitterInstance *param_3)

{
  uint uVar1;
  uint uVar2;
  
  this->_padding_ = (longlong)&___7FNiagaraRenderer__6B_;
  this->DynamicDataRender = (FNiagaraDynamicDataBase *)0x0;
  (this->RayTracingDynamicVertexBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->RayTracingDynamicVertexBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->RayTracingDynamicVertexBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->RayTracingDynamicVertexBuffer).NumBytes = 0;
  (this->RayTracingDynamicVertexBuffer).ClassName.ComparisonIndex = 0;
  *(undefined8 *)&(this->RayTracingDynamicVertexBuffer).ClassName.Number = 0;
  uVar2 = 0;
  (this->RayTracingDynamicVertexBuffer).OwnerName.Number = 0;
  FRenderResource::FRenderResource((FRenderResource *)&this->RayTracingGeometry);
  (this->RayTracingGeometry).DynamicGeometrySharedBufferGenerationID = -1;
  (this->RayTracingGeometry)._padding_ = (longlong)&___7FRayTracingGeometry__6B_;
  (this->RayTracingGeometry).RawDataHeader.Reserved[0] = 0xffffffff;
  (this->RayTracingGeometry).RawDataHeader.Reserved[1] = 0xffffffff;
  (this->RayTracingGeometry).RawData._padding_ = (longlong)&___7__TResourceArray_E_0A___6B_;
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
  uVar1 = param_3->bLocalSpace ^ *(uint *)&this->field_0x140 & 0xfffffffe;
  *(uint *)&this->field_0x140 = uVar1 & 0xfffffffd;
  if (param_2 != (UNiagaraRendererProperties *)0x0) {
    uVar2 = (uint)(param_2->MotionVectorSetting != Disable);
  }
  *(uint *)&this->field_0x140 = uVar2 * 4 | uVar1 & 0xfffffff9;
  this->SimTarget = param_3->SimTarget;
  this->FeatureLevel = param_1;
  FNiagaraEmitterInstance::GetEmitterStatID(param_3,(bool)((char)this + 'P'),false);
  (this->BaseMaterials_GT).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseMaterials_GT).ArrayNum = 0;
  (this->BaseMaterials_GT).ArrayMax = 0;
  (this->BaseMaterialRelevance_GT).field0_0x0.Raw = 0;
  return this;
}

// ~FNiagaraRenderer @ 1493365a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraRenderer::~FNiagaraRenderer(FNiagaraRenderer *this)

{
  FNiagaraDynamicDataBase *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FNiagaraRenderer__6B_;
  pFVar1 = this->DynamicDataRender;
  if (pFVar1 != (FNiagaraDynamicDataBase *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  this->DynamicDataRender = (FNiagaraDynamicDataBase *)0x0;
  pFVar2 = (this->BaseMaterials_GT).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FRayTracingGeometry::~FRayTracingGeometry(&this->RayTracingGeometry);
  FRWBuffer::~FRWBuffer(&this->RayTracingDynamicVertexBuffer);
  return;
}

// AreViewsRenderingOpaqueOnly @ 14933d750

bool __cdecl
FNiagaraRenderer::AreViewsRenderingOpaqueOnly
          (TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,int param_2,bool param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  iVar8 = param_1->ArrayNum;
  uVar6 = 0;
  if (0 < iVar8) {
    lVar7 = 0;
    do {
      if (((uint)param_2 >> (uVar6 & 0x1f) & 1) != 0) {
        uVar5 = 0;
        if ((int)uVar6 < iVar8) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        lVar1 = *(longlong *)((param_1->AllocatorInstance).Data + lVar7);
        if ((*(longlong *)(lVar1 + 0x11e0) == 0) &&
           ((*(longlong *)(lVar1 + 0x20) == 0 || (param_3)))) {
          return false;
        }
      }
      iVar8 = param_1->ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < iVar8);
  }
  return true;
}

// CalcMacroUVParameters @ 14933e720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector4<float> * __cdecl
FNiagaraRenderer::CalcMacroUVParameters
          (TVector4<float> *__return_storage_ptr__,FSceneView *param_1,TVector<double> *param_2,
          float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  int iVar19;
  double dVar20;
  double dStack_c0;
  
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  if (0.0 < param_3) {
    dVar1 = (param_2->field0_0x0)._s_0.X;
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    dVar3 = (param_2->field0_0x0)._s_0.Z;
    dVar12 = (param_1->ViewMatrices).ViewProjectionMatrix.M[1][0];
    dVar13 = (param_1->ViewMatrices).ViewProjectionMatrix.M[1][1];
    dVar14 = (param_1->ViewMatrices).ViewProjectionMatrix.M[0][0];
    dVar15 = (param_1->ViewMatrices).ViewProjectionMatrix.M[0][1];
    dVar16 = (param_1->ViewMatrices).ViewProjectionMatrix.M[2][0];
    dVar17 = (param_1->ViewMatrices).ViewProjectionMatrix.M[2][1];
    dVar6 = dVar2 * dVar12 + dVar1 * dVar14;
    dVar8 = dVar2 * dVar13 + dVar1 * dVar15;
    auVar5._8_4_ = SUB84(dVar8,0);
    auVar5._0_8_ = dVar6;
    auVar5._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    dStack_c0 = auVar5._8_8_;
    dVar6 = dVar6 + dVar3 * dVar16;
    dStack_c0 = dStack_c0 + dVar3 * dVar17;
    auVar4._8_4_ = SUB84(dStack_c0,0);
    auVar4._0_8_ = dVar6;
    auVar4._12_4_ = (int)((ulonglong)dStack_c0 >> 0x20);
    dStack_c0 = auVar4._8_8_;
    dVar9 = (double)param_3;
    dVar8 = dVar2 * (param_1->ViewMatrices).ViewProjectionMatrix.M[1][3] +
            dVar1 * (param_1->ViewMatrices).ViewProjectionMatrix.M[0][3] +
            dVar3 * (param_1->ViewMatrices).ViewProjectionMatrix.M[2][3] +
            __real_3ff0000000000000 * (param_1->ViewMatrices).ViewProjectionMatrix.M[3][3];
    if (dVar8 <= __real_3ee4f8b580000000) {
      dVar8 = __real_3ee4f8b580000000;
    }
    dVar10 = dVar9 * (param_1->ViewMatrices).TranslatedViewMatrix.M[0][0] + dVar1;
    dVar20 = dVar9 * (param_1->ViewMatrices).TranslatedViewMatrix.M[2][0] + dVar3;
    dVar7 = (dStack_c0 +
            __real_3ff0000000000000 * (param_1->ViewMatrices).ViewProjectionMatrix.M[3][1]) *
            (__real_3ff0000000000000 / dVar8);
    dVar11 = (dVar6 + __real_3ff0000000000000 * (param_1->ViewMatrices).ViewProjectionMatrix.M[3][0]
             ) * (__real_3ff0000000000000 / dVar8);
    dVar6 = dVar9 * (param_1->ViewMatrices).TranslatedViewMatrix.M[1][0] + dVar2;
    dVar1 = dVar9 * (param_1->ViewMatrices).TranslatedViewMatrix.M[0][1] + dVar1;
    dVar8 = dVar6 * (param_1->ViewMatrices).ViewProjectionMatrix.M[1][3] +
            dVar10 * (param_1->ViewMatrices).ViewProjectionMatrix.M[0][3] +
            dVar20 * (param_1->ViewMatrices).ViewProjectionMatrix.M[2][3] +
            __real_3ff0000000000000 * (param_1->ViewMatrices).ViewProjectionMatrix.M[3][3];
    dVar2 = dVar9 * (param_1->ViewMatrices).TranslatedViewMatrix.M[1][1] + dVar2;
    dVar3 = dVar9 * (param_1->ViewMatrices).TranslatedViewMatrix.M[2][1] + dVar3;
    if (dVar8 <= __real_3f1a36e2e0000000) {
      dVar8 = __real_3f1a36e2e0000000;
    }
    dVar9 = __real_3ff0000000000000 * (param_1->ViewMatrices).ViewProjectionMatrix.M[3][1];
    dVar6 = (dVar6 * dVar12 + dVar10 * dVar14 + dVar20 * dVar16 +
            __real_3ff0000000000000 * (param_1->ViewMatrices).ViewProjectionMatrix.M[3][0]) / dVar8
            - dVar11;
    if (__real_42a0000000000000 <= dVar6) {
      dVar6 = __real_42a0000000000000;
    }
    dVar8 = dVar2 * (param_1->ViewMatrices).ViewProjectionMatrix.M[1][3] +
            dVar1 * (param_1->ViewMatrices).ViewProjectionMatrix.M[0][3] +
            dVar3 * (param_1->ViewMatrices).ViewProjectionMatrix.M[2][3] +
            __real_3ff0000000000000 * (param_1->ViewMatrices).ViewProjectionMatrix.M[3][3];
    if (dVar8 <= __real_3f1a36e2e0000000) {
      dVar8 = __real_3f1a36e2e0000000;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = (float)dVar11;
    dVar1 = (dVar2 * dVar13 + dVar1 * dVar15 + dVar3 * dVar17 + dVar9) / dVar8 - dVar7;
    if (__real_42a0000000000000 <= dVar1) {
      dVar1 = __real_42a0000000000000;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)dVar7;
    if ((((dVar6 != 0.0) && (dVar1 != 0.0)) && (iVar19 = _isnan(dVar6), iVar19 == 0)) &&
       (((iVar19 = _finite(dVar6), iVar19 != 0 && (iVar19 = _isnan(dVar1), iVar19 == 0)) &&
        (iVar19 = _finite(dVar1), fVar18 = __real_bf800000, iVar19 != 0)))) {
      (__return_storage_ptr__->field0_0x0)._s_0.Z = __real_3f800000 / (float)dVar6;
      (__return_storage_ptr__->field0_0x0)._s_0.W = fVar18 / (float)dVar1;
    }
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// CreateRenderThreadResources @ 149343dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraRenderer::CreateRenderThreadResources(FNiagaraRenderer *this,FRHICommandListBase *param_1)

{
  return;
}

// DestroyRenderState_Concurrent @ 149345250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraRenderer::DestroyRenderState_Concurrent(FNiagaraRenderer *this)

{
  return;
}

// GatherSimpleLights @ 149347960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraRenderer::GatherSimpleLights(FNiagaraRenderer *this,FSimpleLightArray *param_1)

{
  return;
}

// GenerateDynamicData @ 149348330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNiagaraDynamicDataBase * __thiscall
FNiagaraRenderer::GenerateDynamicData
          (FNiagaraRenderer *this,FNiagaraSceneProxy *param_1,UNiagaraRendererProperties *param_2,
          FNiagaraEmitterInstance *param_3)

{
  return (FNiagaraDynamicDataBase *)0x0;
}

// GetDummyByteAddressBuffer @ 14934f8e0

FRHIShaderResourceView * __cdecl FNiagaraRenderer::GetDummyByteAddressBuffer(void)

{
  return (FRHIShaderResourceView *)DummyByteAddressBuffer._56_8_;
}

// GetDummyFloat2Buffer @ 14934f8f0

FRHIShaderResourceView * __cdecl FNiagaraRenderer::GetDummyFloat2Buffer(void)

{
  return (FRHIShaderResourceView *)DummyFloat2Buffer._64_8_;
}

// GetDummyFloat4Buffer @ 14934f900

FRHIShaderResourceView * __cdecl FNiagaraRenderer::GetDummyFloat4Buffer(void)

{
  return (FRHIShaderResourceView *)DummyFloat4Buffer._64_8_;
}

// GetDummyFloatBuffer @ 14934f910

FRHIShaderResourceView * __cdecl FNiagaraRenderer::GetDummyFloatBuffer(void)

{
  return (FRHIShaderResourceView *)DummyFloatBuffer._64_8_;
}

// GetDummyHalfBuffer @ 14934f920

FRHIShaderResourceView * __cdecl FNiagaraRenderer::GetDummyHalfBuffer(void)

{
  return (FRHIShaderResourceView *)DummyHalfBuffer._64_8_;
}

// GetDummyIntBuffer @ 14934f930

FRHIShaderResourceView * __cdecl FNiagaraRenderer::GetDummyIntBuffer(void)

{
  return (FRHIShaderResourceView *)DummyIntBuffer._64_8_;
}

// GetDummyUInt2Buffer @ 14934f940

FRHIShaderResourceView * __cdecl FNiagaraRenderer::GetDummyUInt2Buffer(void)

{
  return (FRHIShaderResourceView *)DummyUInt2Buffer._64_8_;
}

// GetDummyUInt4Buffer @ 14934f950

FRHIShaderResourceView * __cdecl FNiagaraRenderer::GetDummyUInt4Buffer(void)

{
  return (FRHIShaderResourceView *)DummyUInt4Buffer._64_8_;
}

// GetDummyUIntBuffer @ 14934f960

FRHIShaderResourceView * __cdecl FNiagaraRenderer::GetDummyUIntBuffer(void)

{
  return (FRHIShaderResourceView *)DummyUIntBuffer._64_8_;
}

// GetDummyWhiteColorBuffer @ 14934f970

FRHIShaderResourceView * __cdecl FNiagaraRenderer::GetDummyWhiteColorBuffer(void)

{
  return (FRHIShaderResourceView *)DummyWhiteColorBuffer._64_8_;
}

// GetDynamicDataSize @ 14934f980

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FNiagaraRenderer::GetDynamicDataSize(FNiagaraRenderer *this)

{
  return 0;
}

// GetDynamicMeshElements @ 14934f9c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraRenderer::GetDynamicMeshElements
          (FNiagaraRenderer *this,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FSceneViewFamily *param_2,uint param_3,FMeshElementCollector *param_4,
          FNiagaraSceneProxy *param_5)

{
  return;
}

// GetDynamicRayTracingInstances @ 149351f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraRenderer::GetDynamicRayTracingInstances
          (FNiagaraRenderer *this,FRayTracingInstanceCollector *param_1,FNiagaraSceneProxy *param_2)

{
  return;
}

// GetUsedMaterials @ 149356fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraRenderer::GetUsedMaterials
          (FNiagaraRenderer *this,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 == &this->BaseMaterials_GT) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (this->BaseMaterials_GT).ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
    memcpy((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8,
           (this->BaseMaterials_GT).AllocatorInstance.Data,(longlong)iVar1 << 3);
  }
  return;
}

// GetViewRelevance @ 1493570f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FNiagaraRenderer::GetViewRelevance
          (FNiagaraRenderer *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1,FNiagaraSceneProxy *param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  FMaterialRelevance_u_0 local_res8 [4];
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  bVar2 = *(byte *)((longlong)&__return_storage_ptr__->_padding_ + 4) | 4;
  uVar1 = *(uint *)&__return_storage_ptr__->field_0x8;
  uVar3 = uVar1 | 0x80;
  *(byte *)((longlong)&__return_storage_ptr__->_padding_ + 4) = bVar2;
  __return_storage_ptr__->bRenderInMainPass = 1;
  if (this->DynamicDataRender != (FNiagaraDynamicDataBase *)0x0) {
    *(byte *)((longlong)&__return_storage_ptr__->_padding_ + 4) =
         ((byte)((uint)*(undefined4 *)&(param_1->Family->EngineShowFlags).field_0xc >> 0x1c) << 2 ^
         bVar2) & 4 ^ bVar2;
    *(uint *)&__return_storage_ptr__->field_0x8 =
         (*(int *)&this->field_0x140 << 0xc ^ uVar3) & 0x8000 ^ uVar3;
    local_res8[0] = (this->DynamicDataRender->MaterialRelevance).field0_0x0;
    FMaterialRelevance::SetPrimitiveViewRelevance
              ((FMaterialRelevance *)&local_res8[0]._s_0,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// Initialize @ 149358030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

void __thiscall
FNiagaraRenderer::Initialize
          (FNiagaraRenderer *this,UNiagaraRendererProperties *param_1,
          FNiagaraEmitterInstance *param_2,FNiagaraSystemInstanceController *param_3)

{
  int *piVar1;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  char cVar8;
  char cVar9;
  bool bVar10;
  EBlendMode EVar11;
  UMaterial *pUVar12;
  UClass *pUVar13;
  UMaterialInterface *pUVar14;
  FMaterialRelevance FVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  uint uVar19;
  undefined1 local_res18 [8];
  FNiagaraSystemInstanceController *local_res20;
  undefined1 local_58 [24];
  
  pTVar2 = &this->BaseMaterials_GT;
  iVar18 = 0;
  piVar1 = &(this->BaseMaterials_GT).ArrayMax;
  (this->BaseMaterials_GT).ArrayNum = 0;
  local_res20 = param_3;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  (**(code **)(param_1->_padding_ + 0x2c0))(param_1,param_2,pTVar2);
  cVar8 = (**(code **)(param_1->_padding_ + 0x330))(param_1);
  this->bRendersInSecondaryDepthPass = 0;
  pFVar17 = (pTVar2->AllocatorInstance).Data;
  iVar5 = (this->BaseMaterials_GT).ArrayNum;
  pFVar3 = pFVar17 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->BaseMaterials_GT).ArrayNum != iVar5) {
      `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar17 == pFVar3) break;
    cVar9 = (**(code **)(this->_padding_ + 0x50))(this,*(longlong *)pFVar17);
    if (cVar9 == '\0') {
      pUVar12 = UMaterial::GetDefaultMaterial(MD_Surface);
      *(UMaterial **)pFVar17 = pUVar12;
    }
    else {
      lVar7 = *(longlong *)pFVar17;
      if ((lVar7 != 0) && (cVar8 != '\0')) {
        pUVar13 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
        lVar7 = *(longlong *)(lVar7 + 0x10);
        iVar6 = (int)pUVar13->_padding_;
        if (((*(int *)(lVar7 + 0x38) < iVar6) ||
            ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar6 * 8) !=
             &pUVar13->_padding_)) &&
           (pUVar14 = FNiagaraSystemInstanceController::GetMaterialOverride
                                (local_res20,param_1,iVar18), pUVar14 != (UMaterialInterface *)0x0))
        {
          *(UMaterialInterface **)pFVar17 = pUVar14;
        }
      }
    }
    iVar18 = iVar18 + 1;
    if (*(UMaterialInterface **)pFVar17 != (UMaterialInterface *)0x0) {
      FVar15 = UMaterialInterface::GetRelevance_Concurrent
                         (*(UMaterialInterface **)pFVar17,(EShaderPlatform)local_58);
      uVar16 = *(uint *)&(this->BaseMaterialRelevance_GT).field0_0x0 >> 0x12;
      (this->BaseMaterialRelevance_GT).field0_0x0.Raw =
           (this->BaseMaterialRelevance_GT).field0_0x0.Raw | *(ulonglong *)FVar15.field0_0x0;
      uVar19 = *(uint *)FVar15.field0_0x0 >> 0x12;
      if (((byte)(*(uint *)FVar15.field0_0x0 >> 0x12) & 0x3f) < ((byte)uVar16 & 0x3f)) {
        uVar19 = uVar16;
      }
      uVar16 = (uint)(this->BaseMaterialRelevance_GT).field0_0x0.Raw;
      *(uint *)&(this->BaseMaterialRelevance_GT).field0_0x0 =
           (uVar19 << 0x12 ^ uVar16) & 0xfc0000 ^ uVar16;
      EVar11 = (**(code **)(**(longlong **)pFVar17 + 0x460))();
      bVar10 = IsOpaqueOrMaskedBlendMode(EVar11);
      if ((bVar10) && (param_2->bNeedsPartialDepthTexture != '\0')) {
        uVar19 = 8;
      }
      else {
        uVar19 = 0;
      }
      *(uint *)&this->field_0x140 =
           (*(uint *)&this->field_0x140 & 8 | uVar19) ^ *(uint *)&this->field_0x140 & 0xfffffff7;
    }
    pFVar17 = pFVar17 + 8;
  }
  return;
}

// IsMaterialValid @ 14935f2f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNiagaraRenderer::IsMaterialValid(FNiagaraRenderer *this,UMaterialInterface *param_1)

{
  return param_1 != (UMaterialInterface *)0x0;
}

// IsRendererEnabled @ 14935f370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNiagaraRenderer::IsRendererEnabled
          (FNiagaraRenderer *this,UNiagaraRendererProperties *param_1,
          FNiagaraEmitterInstance *param_2)

{
  FNiagaraTypeDefinition *pFVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  
  if ((param_1->RendererEnabledBinding).ParamMapVariable.Name != (FName)0x0) {
    pFVar1 = FNiagaraTypeDefinitionHandle::Resolve
                       (&(param_1->RendererEnabledBinding).ParamMapVariable.TypeDefHandle);
    if ((pFVar1->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
      piVar2 = (int *)(**(code **)((param_2->RendererBindings)._padding_ + 0x58))
                                (&param_2->RendererBindings,
                                 &(param_1->RendererEnabledBinding).ParamMapVariable,0);
      if (((piVar2 != (int *)0x0) && (*piVar2 != -1)) &&
         (pFVar3 = (param_2->RendererBindings).ParameterData.AllocatorInstance.Data + *piVar2,
         pFVar3 != (FScriptContainerElement *)0x0)) {
        return *(int *)pFVar3 != 0;
      }
    }
  }
  return true;
}

// IsViewRenderingOpaqueOnly @ 14935f500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl FNiagaraRenderer::IsViewRenderingOpaqueOnly(FSceneView *param_1,bool param_2)

{
  if ((param_1->CustomRenderPass == (FCustomRenderPassBase *)0x0) &&
     ((param_1->DynamicMeshElementsShadowCullFrustum == (FConvexVolume *)0x0 || (param_2)))) {
    return false;
  }
  return true;
}

// OnSystemComplete_GameThread @ 149360b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraRenderer::OnSystemComplete_GameThread
          (FNiagaraRenderer *this,UNiagaraRendererProperties *param_1,
          FNiagaraEmitterInstance *param_2)

{
  return;
}

// PostSystemTick_GameThread @ 149361550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraRenderer::PostSystemTick_GameThread
          (FNiagaraRenderer *this,UNiagaraRendererProperties *param_1,
          FNiagaraEmitterInstance *param_2)

{
  return;
}

// ProcessMaterialParameterBindings @ 149363b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraRenderer::ProcessMaterialParameterBindings
          (FNiagaraRenderer *this,FNiagaraRendererMaterialParameters *param_1,
          FNiagaraEmitterInstance *param_2,TArrayView<UMaterialInterface_*_const,int> *param_3)

{
  int iVar1;
  FNiagaraSystemSimulation *pFVar2;
  UMaterialInstanceDynamic *this_00;
  FName FVar3;
  double dVar4;
  FName FVar5;
  FName FVar6;
  UTexture *this_01;
  bool bVar7;
  UClass *pUVar8;
  FNiagaraVariableBase *pFVar9;
  FNiagaraTypeDefinition *pFVar10;
  FNiagaraVariableBase *pFVar11;
  FName *pFVar12;
  FTextureResource *pFVar13;
  longlong *plVar14;
  ulonglong uVar15;
  FName *pFVar16;
  UMaterialInterface **ppUVar17;
  FNiagaraMaterialAttributeBinding *this_02;
  UMaterialInterface **ppUVar18;
  FNiagaraTypeDefinitionHandle *this_03;
  UTexture *local_res10;
  TVector<double>_u_0 local_118;
  undefined1 local_f8 [12];
  uint uStack_ec;
  undefined1 local_e8;
  undefined7 uStack_e7;
  undefined8 uStack_e0;
  UTexture *local_d8;
  uint local_d0;
  FNiagaraVariableBase *local_c8;
  FNiagaraPosition local_c0;
  FNiagaraMaterialAttributeBinding *local_b0;
  UMaterialInterface **local_a8;
  FNiagaraSystemInstance *local_a0;
  UMaterialInterface **local_98;
  TReferenceControllerBase<1> *local_90;
  FNiagaraPosition local_88;
  FNiagaraLWCConverter local_78;
  FLinearColor local_60 [3];
  
  if (((((0 < (param_1->AttributeBindings).ArrayNum) || (0 < (param_1->ScalarParameters).ArrayNum))
       || (0 < (param_1->VectorParameters).ArrayNum)) || (0 < (param_1->TextureParameters).ArrayNum)
      ) && ((param_2 != (FNiagaraEmitterInstance *)0x0 &&
            (local_a0 = param_2->ParentSystemInstance, local_a0 != (FNiagaraSystemInstance *)0x0))))
  {
    pFVar2 = (local_a0->SystemSimulation).Object;
    local_90 = (local_a0->SystemSimulation).SharedReferenceCount.ReferenceController;
    if (local_90 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_90->SharedReferenceCount = (atomic<int>)((int)local_90->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar6 = _UNK_15076b1f8;
    FVar5 = ___xmm_3f8000003f8000003f8000003f800000;
    dVar4 = __real_3ff0000000000000;
    if (pFVar2 != (FNiagaraSystemSimulation *)0x0) {
      ppUVar17 = param_3->DataPtr;
      ppUVar18 = ppUVar17 + param_3->ArrayNum;
      local_a8 = ppUVar17;
      local_98 = ppUVar18;
      if (ppUVar17 != ppUVar18) {
        do {
          this_00 = (UMaterialInstanceDynamic *)*ppUVar17;
          if (this_00 != (UMaterialInstanceDynamic *)0x0) {
            local_a8 = ppUVar17;
            pUVar8 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
            iVar1 = (int)pUVar8->_padding_;
            if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar8->_padding_)) {
              this_02 = (FNiagaraMaterialAttributeBinding *)
                        (param_1->AttributeBindings).AllocatorInstance.Data;
              local_d0 = (param_1->AttributeBindings).ArrayNum;
              uVar15 = (ulonglong)(int)local_d0;
              local_c8 = &this_02->NiagaraChildVariable;
              local_b0 = this_02 + uVar15;
              this_03 = &(this_02->NiagaraChildVariable).TypeDefHandle;
              while( true ) {
                pFVar11 = local_c8;
                if ((param_1->AttributeBindings).ArrayNum != (int)uVar15) {
                  `TCheckedPointerIterator<FNiagaraMaterialAttributeBinding_const_,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(&local_res10);
                }
                if (this_02 == local_b0) break;
                pFVar9 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable(this_02);
                pFVar10 = FNiagaraTypeDefinitionHandle::Resolve(&pFVar9->TypeDefHandle);
                if ((((TObjectPtr<UObject>_u_0)(pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr ==
                      FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0) &&
                    (pFVar10->UnderlyingType == FNiagaraTypeDefinition::Vec4Def.UnderlyingType)) &&
                   (pFVar10->Flags == FNiagaraTypeDefinition::Vec4Def.Flags)) {
LAB_149363fae:
                  local_118._s_0.X = (double)FVar5;
                  local_118._s_0.Y = (double)FVar6;
                  pFVar11 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable(this_02);
                  FNiagaraEmitterInstance::GetBoundRendererValue_GT
                            (param_2,pFVar11,&this_02->NiagaraChildVariable,&local_118);
                  local_f8._0_8_ = local_118._s_0.X;
                  stack0xffffffffffffff10 = local_118._s_0.Y;
                  UMaterialInstanceDynamic::SetVectorParameterValue
                            (this_00,this_02->MaterialParameterName,(FLinearColor *)local_f8);
                }
                else {
                  pFVar9 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable(this_02);
                  pFVar10 = FNiagaraTypeDefinitionHandle::Resolve(&pFVar9->TypeDefHandle);
                  bVar7 = FNiagaraTypeDefinition::IsDataInterface(pFVar10);
                  if (((bVar7) &&
                      (pFVar10 = FNiagaraTypeDefinitionHandle::Resolve(this_03),
                      (TObjectPtr<UObject>_u_0)(pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr ==
                      FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0)) &&
                     ((pFVar10->UnderlyingType == FNiagaraTypeDefinition::Vec4Def.UnderlyingType &&
                      (pFVar10->Flags == FNiagaraTypeDefinition::Vec4Def.Flags))))
                  goto LAB_149363fae;
                  pFVar9 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable(this_02);
                  pFVar10 = FNiagaraTypeDefinitionHandle::Resolve(&pFVar9->TypeDefHandle);
                  if ((((TObjectPtr<UObject>_u_0)(pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr ==
                        FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0) &&
                      (pFVar10->UnderlyingType == FNiagaraTypeDefinition::ColorDef.UnderlyingType))
                     && (pFVar10->Flags == FNiagaraTypeDefinition::ColorDef.Flags))
                  goto LAB_149363fae;
                  pFVar9 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable(this_02);
                  pFVar10 = FNiagaraTypeDefinitionHandle::Resolve(&pFVar9->TypeDefHandle);
                  bVar7 = FNiagaraTypeDefinition::IsDataInterface(pFVar10);
                  if ((((bVar7) &&
                       (pFVar10 = FNiagaraTypeDefinitionHandle::Resolve
                                            (&(this_02->NiagaraChildVariable).TypeDefHandle),
                       (TObjectPtr<UObject>_u_0)(pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr ==
                       FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0)) &&
                      (pFVar10->UnderlyingType == FNiagaraTypeDefinition::ColorDef.UnderlyingType))
                     && (pFVar10->Flags == FNiagaraTypeDefinition::ColorDef.Flags))
                  goto LAB_149363fae;
                  pFVar9 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable(this_02);
                  pFVar10 = FNiagaraTypeDefinitionHandle::Resolve(&pFVar9->TypeDefHandle);
                  if ((((TObjectPtr<UObject>_u_0)(pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr ==
                        FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0) &&
                      (pFVar10->UnderlyingType == FNiagaraTypeDefinition::Vec3Def.UnderlyingType))
                     && (pFVar10->Flags == FNiagaraTypeDefinition::Vec3Def.Flags))
                  goto LAB_149363fae;
                  pFVar9 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable(this_02);
                  pFVar10 = FNiagaraTypeDefinitionHandle::Resolve(&pFVar9->TypeDefHandle);
                  bVar7 = FNiagaraTypeDefinition::IsDataInterface(pFVar10);
                  if (((bVar7) &&
                      (pFVar10 = FNiagaraTypeDefinitionHandle::Resolve
                                           (&(this_02->NiagaraChildVariable).TypeDefHandle),
                      (TObjectPtr<UObject>_u_0)(pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr ==
                      FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0)) &&
                     ((pFVar10->UnderlyingType == FNiagaraTypeDefinition::Vec3Def.UnderlyingType &&
                      (pFVar10->Flags == FNiagaraTypeDefinition::Vec3Def.Flags))))
                  goto LAB_149363fae;
                  pFVar9 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable(this_02);
                  pFVar10 = FNiagaraTypeDefinitionHandle::Resolve(&pFVar9->TypeDefHandle);
                  if ((((TObjectPtr<UObject>_u_0)(pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr ==
                        FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
                      (pFVar10->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType
                      )) && (pFVar10->Flags == FNiagaraTypeDefinition::PositionDef.Flags)) {
LAB_149363e77:
                    local_c0._0_8_ = 0;
                    local_c0._8_4_ = 0;
                    pFVar11 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable(this_02)
                    ;
                    FNiagaraEmitterInstance::GetBoundRendererValue_GT
                              (param_2,pFVar11,&this_02->NiagaraChildVariable,&local_c0);
                    FNiagaraSystemInstance::GetLWCConverter(local_a0,&local_78,false);
                    local_88._0_8_ = local_c0._0_8_;
                    local_88._8_4_ = local_c0._8_4_;
                    FNiagaraLWCConverter::ConvertSimulationPositionToWorld
                              (&local_78,(TVector<double> *)&local_118._s_0,&local_88);
                    local_f8._0_8_ = local_118._s_0.X;
                    stack0xffffffffffffff10 = local_118._s_0.Y;
                    _local_e8 = local_118._s_0.Z;
                    uStack_e0 = dVar4;
                    UMaterialInstanceDynamic::SetDoubleVectorParameterValue
                              (this_00,this_02->MaterialParameterName,(TVector4<double> *)local_f8);
                    FVar3 = this_02->MaterialParameterName;
                    pFVar12 = (FName *)FLinearColor::FLinearColor
                                                 (local_60,(TVector<double> *)&local_118._s_0);
                    local_f8._0_8_ = *pFVar12;
                    unique0x100007c7 = pFVar12[1];
                    UMaterialInstanceDynamic::SetVectorParameterValue
                              (this_00,FVar3,(FLinearColor *)local_f8);
                  }
                  else {
                    pFVar9 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable(this_02);
                    pFVar10 = FNiagaraTypeDefinitionHandle::Resolve(&pFVar9->TypeDefHandle);
                    bVar7 = FNiagaraTypeDefinition::IsDataInterface(pFVar10);
                    if (((bVar7) &&
                        (pFVar10 = FNiagaraTypeDefinitionHandle::Resolve
                                             (&(this_02->NiagaraChildVariable).TypeDefHandle),
                        (TObjectPtr<UObject>_u_0)(pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr ==
                        FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0)) &&
                       ((pFVar10->UnderlyingType ==
                         FNiagaraTypeDefinition::PositionDef.UnderlyingType &&
                        (pFVar10->Flags == FNiagaraTypeDefinition::PositionDef.Flags))))
                    goto LAB_149363e77;
                    pFVar9 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable(this_02);
                    pFVar10 = FNiagaraTypeDefinitionHandle::Resolve(&pFVar9->TypeDefHandle);
                    if ((((TObjectPtr<UObject>_u_0)(pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr
                          == FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0) &&
                        (pFVar10->UnderlyingType == FNiagaraTypeDefinition::Vec2Def.UnderlyingType))
                       && (pFVar10->Flags == FNiagaraTypeDefinition::Vec2Def.Flags))
                    goto LAB_149363fae;
                    pFVar9 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable(this_02);
                    pFVar10 = FNiagaraTypeDefinitionHandle::Resolve(&pFVar9->TypeDefHandle);
                    bVar7 = FNiagaraTypeDefinition::IsDataInterface(pFVar10);
                    if ((((bVar7) &&
                         (pFVar10 = FNiagaraTypeDefinitionHandle::Resolve
                                              (&(this_02->NiagaraChildVariable).TypeDefHandle),
                         (TObjectPtr<UObject>_u_0)(pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr
                         == FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0)) &&
                        (pFVar10->UnderlyingType == FNiagaraTypeDefinition::Vec2Def.UnderlyingType))
                       && (pFVar10->Flags == FNiagaraTypeDefinition::Vec2Def.Flags))
                    goto LAB_149363fae;
                    pFVar9 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable(this_02);
                    pFVar10 = FNiagaraTypeDefinitionHandle::Resolve(&pFVar9->TypeDefHandle);
                    if ((((TObjectPtr<UObject>_u_0)(pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr
                          == FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0) &&
                        (pFVar10->UnderlyingType == FNiagaraTypeDefinition::FloatDef.UnderlyingType)
                        ) && (pFVar10->Flags == FNiagaraTypeDefinition::FloatDef.Flags)) {
LAB_149364070:
                      local_res10 = (UTexture *)CONCAT44(local_res10._4_4_,0x3f800000);
                      pFVar11 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable
                                          (this_02);
                      FNiagaraEmitterInstance::GetBoundRendererValue_GT
                                (param_2,pFVar11,&this_02->NiagaraChildVariable,&local_res10);
                      UMaterialInstanceDynamic::SetScalarParameterValue
                                (this_00,this_02->MaterialParameterName,local_res10._0_4_);
                    }
                    else {
                      pFVar9 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable
                                         (this_02);
                      pFVar10 = FNiagaraTypeDefinitionHandle::Resolve(&pFVar9->TypeDefHandle);
                      bVar7 = FNiagaraTypeDefinition::IsDataInterface(pFVar10);
                      if (((bVar7) &&
                          (pFVar10 = FNiagaraTypeDefinitionHandle::Resolve
                                               (&(this_02->NiagaraChildVariable).TypeDefHandle),
                          (TObjectPtr<UObject>_u_0)(pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr
                          == FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0)) &&
                         ((pFVar10->UnderlyingType ==
                           FNiagaraTypeDefinition::FloatDef.UnderlyingType &&
                          (pFVar10->Flags == FNiagaraTypeDefinition::FloatDef.Flags))))
                      goto LAB_149364070;
                      pFVar9 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable
                                         (this_02);
                      pFVar10 = FNiagaraTypeDefinitionHandle::Resolve(&pFVar9->TypeDefHandle);
                      if ((((TObjectPtr<UObject>_u_0)
                            (pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr ==
                            FNiagaraTypeDefinition::UObjectDef.ClassStructOrEnum.field0_0x0) &&
                          (pFVar10->UnderlyingType ==
                           FNiagaraTypeDefinition::UObjectDef.UnderlyingType)) &&
                         (pFVar10->Flags == FNiagaraTypeDefinition::UObjectDef.Flags)) {
LAB_1493641ac:
                        local_res10 = (UTexture *)0x0;
                        pFVar9 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable
                                           (this_02);
                        FNiagaraEmitterInstance::GetBoundRendererValue_GT
                                  (param_2,pFVar9,pFVar11,&local_res10);
                        this_01 = local_res10;
                        if (local_res10 == (UTexture *)0x0) {
LAB_14936420e:
                          local_d8 = (UTexture *)0x0;
LAB_149364217:
                          plVar14 = (longlong *)(**(code **)(this_00->_padding_ + 0x2d8))(this_00);
                          if (plVar14 == (longlong *)0x0) goto LAB_14936427b;
                          local_f8._0_8_ = (ulonglong)this_02->MaterialParameterName & 0xffffffff;
                          uStack_ec = 0xffffffff;
                          local_f8._8_4_ = (this_02->MaterialParameterName).Number;
                          local_e8 = 2;
                          (**(code **)(*plVar14 + 0x418))(plVar14,local_f8,&local_d8,0);
                        }
                        else {
                          pUVar8 = Z_Construct_UClass_UTexture_NoRegister();
                          iVar1 = (int)pUVar8->_padding_;
                          if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
                             ((longlong *)
                              *(undefined1 **)
                               (*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
                              &pUVar8->_padding_)) goto LAB_14936420e;
                          local_d8 = this_01;
                          pFVar13 = UTexture::GetResource(this_01);
                          if (pFVar13 == (FTextureResource *)0x0) goto LAB_149364217;
                        }
                        UMaterialInstanceDynamic::SetTextureParameterValue
                                  (this_00,this_02->MaterialParameterName,local_d8);
                      }
                      else {
                        pFVar9 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable
                                           (this_02);
                        pFVar10 = FNiagaraTypeDefinitionHandle::Resolve(&pFVar9->TypeDefHandle);
                        if ((((TObjectPtr<UObject>_u_0)
                              (pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr ==
                              FNiagaraTypeDefinition::UTextureDef.ClassStructOrEnum.field0_0x0) &&
                            (pFVar10->UnderlyingType ==
                             FNiagaraTypeDefinition::UTextureDef.UnderlyingType)) &&
                           (pFVar10->Flags == FNiagaraTypeDefinition::UTextureDef.Flags))
                        goto LAB_1493641ac;
                        pFVar9 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable
                                           (this_02);
                        pFVar10 = FNiagaraTypeDefinitionHandle::Resolve(&pFVar9->TypeDefHandle);
                        if ((((TObjectPtr<UObject>_u_0)
                              (pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr ==
                              FNiagaraTypeDefinition::UTextureRenderTargetDef.ClassStructOrEnum.
                              field0_0x0) &&
                            (pFVar10->UnderlyingType ==
                             FNiagaraTypeDefinition::UTextureRenderTargetDef.UnderlyingType)) &&
                           (pFVar10->Flags == FNiagaraTypeDefinition::UTextureRenderTargetDef.Flags)
                           ) goto LAB_1493641ac;
                        pFVar9 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable
                                           (this_02);
                        pFVar10 = FNiagaraTypeDefinitionHandle::Resolve(&pFVar9->TypeDefHandle);
                        bVar7 = FNiagaraTypeDefinition::IsDataInterface(pFVar10);
                        if ((((bVar7) &&
                             (pFVar10 = FNiagaraTypeDefinitionHandle::Resolve
                                                  (&(this_02->NiagaraChildVariable).TypeDefHandle),
                             (TObjectPtr<UObject>_u_0)
                             (pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr ==
                             FNiagaraTypeDefinition::UTextureDef.ClassStructOrEnum.field0_0x0)) &&
                            (pFVar10->UnderlyingType ==
                             FNiagaraTypeDefinition::UTextureDef.UnderlyingType)) &&
                           (pFVar10->Flags == FNiagaraTypeDefinition::UTextureDef.Flags))
                        goto LAB_1493641ac;
                      }
                    }
                  }
                }
LAB_14936427b:
                this_02 = this_02 + 1;
                uVar15 = (ulonglong)local_d0;
                this_03 = this_03 + 0xb;
                local_c8 = (FNiagaraVariableBase *)&local_c8[3].TypeDefHandle;
              }
              iVar1 = (param_1->ScalarParameters).ArrayNum;
              pFVar16 = (FName *)(param_1->ScalarParameters).AllocatorInstance.Data;
              pFVar12 = (FName *)((longlong)pFVar16 + (longlong)iVar1 * 0xc);
              while( true ) {
                if ((param_1->ScalarParameters).ArrayNum != iVar1) {
                  `TCheckedPointerIterator<FNiagaraRendererMaterialScalarParameter_const_,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(&local_res10);
                }
                if (pFVar16 == pFVar12) break;
                UMaterialInstanceDynamic::SetScalarParameterValue
                          (this_00,*pFVar16,(float)pFVar16[1].ComparisonIndex.Value);
                pFVar16 = (FName *)&pFVar16[1].Number;
              }
              iVar1 = (param_1->VectorParameters).ArrayNum;
              pFVar16 = (FName *)(param_1->VectorParameters).AllocatorInstance.Data;
              pFVar12 = pFVar16 + (longlong)iVar1 * 3;
              while( true ) {
                if ((param_1->VectorParameters).ArrayNum != iVar1) {
                  `TCheckedPointerIterator<FNiagaraRendererMaterialVectorParameter_const_,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(&local_res10);
                }
                if (pFVar16 == pFVar12) break;
                local_f8._0_8_ = pFVar16[1];
                unique0x10000807 = pFVar16[2];
                UMaterialInstanceDynamic::SetVectorParameterValue
                          (this_00,*pFVar16,(FLinearColor *)local_f8);
                pFVar16 = pFVar16 + 3;
              }
              iVar1 = (param_1->TextureParameters).ArrayNum;
              pFVar12 = (FName *)(param_1->TextureParameters).AllocatorInstance.Data;
              pFVar16 = pFVar12 + (longlong)iVar1 * 2;
              while( true ) {
                if ((param_1->TextureParameters).ArrayNum != iVar1) {
                  `TCheckedPointerIterator<FNiagaraRendererMaterialTextureParameter_const_,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(&local_res10);
                }
                ppUVar17 = local_a8;
                ppUVar18 = local_98;
                if (pFVar12 == pFVar16) break;
                if ((pFVar12[1] != (FName)0x0) &&
                   ((*(uint *)((longlong)pFVar12[1] + 8) >> 0x1e & 1) == 0)) {
                  UMaterialInstanceDynamic::SetTextureParameterValue
                            (this_00,*pFVar12,(UTexture *)pFVar12[1]);
                }
                pFVar12 = pFVar12 + 2;
              }
            }
          }
          ppUVar17 = ppUVar17 + 1;
          local_a8 = ppUVar17;
        } while (ppUVar17 != ppUVar18);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
  }
  return;
}

// ReleaseRenderThreadResources @ 149365620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraRenderer::ReleaseRenderThreadResources(FNiagaraRenderer *this)

{
  return;
}

// SetDynamicData_RenderThread @ 14936a290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraRenderer::SetDynamicData_RenderThread
          (FNiagaraRenderer *this,FNiagaraDynamicDataBase *param_1)

{
  FNiagaraDynamicDataBase *pFVar1;
  
  pFVar1 = this->DynamicDataRender;
  if (pFVar1 != (FNiagaraDynamicDataBase *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  this->DynamicDataRender = param_1;
  return;
}

// SortAndCullIndices @ 14936edd0

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
FNiagaraRenderer::SortAndCullIndices
          (FNiagaraGPUSortInfo *param_1,FNiagaraDataBuffer *param_2,FAllocation *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSortParticles> FVar11;
  uint *puVar12;
  FTlsAutoCleanup *pFVar13;
  FParticleOrderAsUint *pFVar14;
  FScriptContainerElement *pFVar15;
  int *piVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  FName FVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  int *piVar22;
  FScriptContainerElement *pFVar23;
  FAllocation *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_c8;
  TRadixSortKeyCastUint32<FParticleOrderAsUint> local_c7 [3];
  FColor_u_0 local_c4;
  FMemMark local_c0;
  FName local_98;
  FParticleOrderAsUint *local_90;
  FName local_88;
  code *local_78;
  FAllocation **local_70;
  code *local_68;
  undefined1 *local_60;
  code *local_58;
  undefined1 *local_50;
  FName local_48 [2];
  
  pFVar20 = (FScriptContainerElement *)0x0;
  FVar11 = StatPtr_STAT_NiagaraSortParticles;
  local_res18 = param_3;
  if (StatPtr_STAT_NiagaraSortParticles ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSortParticles>)0x0) {
    pFVar10 = ::FName::FName(local_48,"STAT_NiagaraSortParticles");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSortParticles>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSortParticles,*pFVar10,
                        L"Sort Particles","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true
                        ,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar11;
  bVar6 = false;
  bVar5 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  bVar8 = false;
  bVar7 = false;
  if ((FVar19.ComparisonIndex.Value.Value != 0) || (FVar19.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c4._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar5 = true;
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_98.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRenderer.cpp"
                   ,0x370);
        bVar6 = true;
        bVar5 = true;
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar7 = true;
      goto LAB_14936ef1e;
    }
  }
  bVar6 = bVar8;
  bVar5 = bVar7;
  bVar7 = false;
  FVar19 = local_88;
LAB_14936ef1e:
  iVar9 = 0;
  piVar22 = (int *)local_res18->Buffer;
  if ((param_1->SortMode == None) || (param_1->SortAttributeOffset == -1)) {
    if (param_1->bEnableCulling == false) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRenderer.cpp"
                         ,0x3a2,
                         L"Either sorting or culling must be enabled or we don\'t generate output buffers"
                        );
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
    }
    else {
      pFVar21 = pFVar20;
      if (param_1->RendererVisTagAttributeOffset != -1) {
        pFVar21 = (param_2->Int32Data).AllocatorInstance.Data +
                  param_1->RendererVisTagAttributeOffset * param_2->Int32Stride;
      }
      iVar2 = param_1->RendererVisibility;
      pFVar18 = pFVar20;
      if (param_1->MeshIndexAttributeOffset != -1) {
        pFVar18 = (param_2->Int32Data).AllocatorInstance.Data +
                  param_1->MeshIndexAttributeOffset * param_2->Int32Stride;
      }
      lVar17 = (longlong)(int)param_2->NumInstances;
      iVar3 = param_1->MeshIndex;
      if (0 < lVar17) {
        pFVar15 = pFVar18;
        pFVar23 = pFVar20;
        do {
          if (((pFVar21 == (FScriptContainerElement *)0x0) ||
              (*(int *)(pFVar15 + ((longlong)pFVar21 - (longlong)pFVar18)) == iVar2)) &&
             ((pFVar18 == (FScriptContainerElement *)0x0 || (*(int *)pFVar15 == iVar3)))) {
            pFVar23 = (FScriptContainerElement *)(ulonglong)((int)pFVar23 + 1);
            *piVar22 = (int)pFVar20;
            piVar22 = piVar22 + 1;
          }
          iVar9 = (int)pFVar23;
          pFVar20 = (FScriptContainerElement *)(ulonglong)((int)pFVar20 + 1);
          pFVar15 = pFVar15 + 4;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
    }
  }
  else {
    uVar1 = param_2->NumInstances;
    puVar12 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_70 = &local_res18;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar13 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_78,puVar12);
    local_c0.Mem = (FMemStackBase *)(pFVar13 + 2);
    local_c0.Top = (local_c0.Mem)->Top;
    local_c0.SavedChunk = *(FTaggedMemory **)(pFVar13 + 4);
    local_c0.bPopped = false;
    local_c0.NextTopmostMark = *(FMemMark **)(pFVar13 + 5);
    pFVar13[5] = (FTlsAutoCleanup)&local_c0;
    *(int *)(pFVar13 + 6) = *(int *)(pFVar13 + 6) + 1;
    puVar12 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_60 = local_res20;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar13 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_68,puVar12);
    local_90 = FMemStackBase::Alloc((FMemStackBase *)(pFVar13 + 2),(longlong)(int)uVar1 << 3,4);
    if (param_1->bEnableCulling == false) {
      iVar9 = FNiagaraSortCullHelper<0>::BuildParticleOrder(param_1,param_2,local_90);
    }
    else {
      iVar9 = FNiagaraSortCullHelper<1>::BuildParticleOrder(param_1,param_2,local_90);
    }
    if ((GNiagaraRadixSortThreshold == -1) || (iVar9 <= GNiagaraRadixSortThreshold)) {
      if ((iVar9 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
      pFVar14 = local_90;
      AlgoImpl::
      IntroSortInternal<FParticleOrderAsUint,int,UE::Core::Private::TProjectionMemberData<unsigned_int_FParticleOrderAsUint::*>,TLess<void>_>
                (local_90,iVar9,(TProjectionMemberData<unsigned_int_FParticleOrderAsUint::*>)0x0,
                 local_res18._0_1_);
      if (0 < iVar9) {
        piVar16 = &pFVar14->Index;
        do {
          iVar2 = *piVar16;
          piVar16 = piVar16 + 2;
          piVar22[(longlong)pFVar20] = iVar2;
          pFVar20 = pFVar20 + 1;
        } while ((longlong)pFVar20 < (longlong)iVar9);
      }
    }
    else {
      puVar12 = TThreadSingleton<FMemStack>::GetTlsSlot();
      local_50 = &local_c8;
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar13 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_58,puVar12);
      pFVar14 = FMemStackBase::Alloc((FMemStackBase *)(pFVar13 + 2),(longlong)iVar9 * 8,4);
      RadixSort32<FParticleOrderAsUint,int,TRadixSortKeyCastUint32<FParticleOrderAsUint>_>
                (pFVar14,local_90,iVar9,local_c7);
      if (0 < iVar9) {
        piVar16 = &pFVar14->Index;
        do {
          iVar2 = *piVar16;
          piVar16 = piVar16 + 2;
          piVar22[(longlong)pFVar20] = iVar2;
          pFVar20 = pFVar20 + 1;
        } while ((longlong)pFVar20 < (longlong)iVar9);
      }
    }
    if (local_c0.bPopped == false) {
      if (((local_c0.Mem)->TopMark != &local_c0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mem.TopMark == this",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                             ,0x215,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
      local_c0.bPopped = true;
      (local_c0.Mem)->NumMarks = (local_c0.Mem)->NumMarks + -1;
      if (local_c0.SavedChunk != (local_c0.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_c0.Mem,local_c0.SavedChunk);
      }
      (local_c0.Mem)->Top = local_c0.Top;
      (local_c0.Mem)->TopMark = local_c0.NextTopmostMark;
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return iVar9;
}

// SortIndices @ 14936f290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FNiagaraRenderer::SortIndices
          (FNiagaraGPUSortInfo *param_1,FNiagaraRendererVariableInfo *param_2,
          FNiagaraDataBuffer *param_3,FAllocation *param_4)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  ENiagaraSortMode EVar5;
  ushort uVar6;
  uint uVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSortParticles> FVar16;
  uint *puVar17;
  FTlsAutoCleanup *pFVar18;
  FParticleOrderAsUint *pFVar19;
  FScriptContainerElement *pFVar20;
  FParticleOrderAsUint *pFVar21;
  int iVar22;
  int *piVar23;
  ulonglong uVar24;
  FName FVar25;
  int iVar26;
  longlong lVar27;
  FScriptContainerElement *pFVar28;
  uint uVar29;
  uint uVar30;
  ulonglong uVar31;
  int *piVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  FNiagaraRendererVariableInfo *local_res10;
  undefined1 local_150;
  undefined1 local_14f;
  undefined1 local_14e;
  TRadixSortKeyCastUint32<FParticleOrderAsUint> local_14d;
  FColor_u_0 local_14c;
  FName local_148;
  FMemMark local_140;
  FName local_118;
  FScriptContainerElement *local_110;
  int *local_108;
  FName local_100;
  code *local_f0;
  undefined1 *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  FName local_c0 [16];
  
  iVar26 = 2;
  FVar16 = StatPtr_STAT_NiagaraSortParticles;
  if (StatPtr_STAT_NiagaraSortParticles ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSortParticles>)0x0) {
    pFVar15 = ::FName::FName(local_c0,"STAT_NiagaraSortParticles");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSortParticles>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSortParticles,*pFVar15,
                        L"Sort Particles","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true
                        ,ST_int64,true,false,MCR_Invalid);
  }
  bVar10 = false;
  bVar9 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  FVar25 = *(FName *)FVar16;
  bVar12 = false;
  bVar11 = false;
  if ((FVar25.ComparisonIndex.Value.Value == 0) && (FVar25.Number == 0)) {
LAB_14936f40c:
    bVar10 = bVar12;
    bVar9 = bVar11;
    bVar11 = false;
    local_148 = local_100;
    FVar25 = local_100;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_14c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_14c._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar10 = false;
      bVar9 = true;
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_118.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_118,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRenderer.cpp"
                   ,0x26c);
        bVar10 = true;
        bVar9 = true;
        bVar12 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14936f40c;
    local_148 = FVar25;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    bVar11 = true;
  }
  uVar7 = param_3->NumInstances;
  if (((uchar *)(ulonglong)(uint)param_4->ReadBuffer->_padding_ <
       param_4->Buffer + ((ulonglong)uVar7 * 4 - param_4->ReadBuffer->_padding_)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutIndices.ReadBuffer->NumBytes >= (OutIndices.Buffer - OutIndices.ReadBuffer->MappedBuffer) + NumInstances * sizeof(int32)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRenderer.cpp"
                          ,0x26f,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((param_1->SortMode == None) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("SortInfo.SortMode != ENiagaraSortMode::None",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRenderer.cpp"
                          ,0x270,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((param_1->SortAttributeOffset == -1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("SortInfo.SortAttributeOffset != INDEX_NONE",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRenderer.cpp"
                          ,0x271,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((GNiagaraRadixSortThreshold == -1) ||
     (bVar12 = true, (int)uVar7 <= GNiagaraRadixSortThreshold)) {
    bVar12 = false;
  }
  piVar32 = (int *)param_4->Buffer;
  bVar4 = param_2->bHalfType;
  local_108 = piVar32;
  puVar17 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_e8 = &local_150;
  local_f0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar18 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_f0,puVar17);
  local_140.Mem = (FMemStackBase *)(pFVar18 + 2);
  local_140.Top = (local_140.Mem)->Top;
  local_140.SavedChunk = *(FTaggedMemory **)(pFVar18 + 4);
  local_140.bPopped = false;
  local_140.NextTopmostMark = *(FMemMark **)(pFVar18 + 5);
  pFVar18[5] = (FTlsAutoCleanup)&local_140;
  *(int *)(pFVar18 + 6) = *(int *)(pFVar18 + 6) + 1;
  puVar17 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_d8 = &local_14f;
  local_e0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar18 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_e0,puVar17);
  pFVar19 = FMemStackBase::Alloc((FMemStackBase *)(pFVar18 + 2),(ulonglong)uVar7 * 8,4);
  EVar5 = param_1->SortMode;
  local_res10 = param_2;
  if ((EVar5 == ViewDepth) || (EVar5 == ViewDistance)) {
    uVar6 = param_2->DatasetOffset;
    if (bVar4 == false) {
      uVar29 = 0xffffffff;
      if (uVar6 != 0xffff) {
        uVar29 = (uint)uVar6;
      }
      uVar13 = param_3->FloatStride;
      pFVar28 = (param_3->FloatData).AllocatorInstance.Data;
      uVar30 = uVar29 * uVar13;
      uVar14 = (uVar29 + 2) * uVar13;
      uVar31 = 0;
      uVar13 = (uVar29 + 1) * uVar13;
      if (EVar5 == ViewDepth) {
        if (uVar7 < 4) {
          if (uVar7 == 0) goto LAB_14936f7c2;
          dVar37 = (param_1->ViewOrigin).field0_0x0._s_0.X;
          dVar38 = (param_1->ViewOrigin).field0_0x0._s_0.Y;
          dVar39 = (param_1->ViewOrigin).field0_0x0._s_0.Z;
          uVar3 = *(undefined8 *)((longlong)&(param_1->ViewDirection).field0_0x0 + 0x10);
          uVar40 = (undefined4)uVar3;
          uVar41 = (undefined4)((ulonglong)uVar3 >> 0x20);
          uVar3 = *(undefined8 *)&(param_1->ViewDirection).field0_0x0;
          uVar42 = (undefined4)uVar3;
          uVar43 = (undefined4)((ulonglong)uVar3 >> 0x20);
          uVar3 = *(undefined8 *)((longlong)&(param_1->ViewDirection).field0_0x0 + 8);
          uVar44 = (undefined4)uVar3;
          uVar45 = (undefined4)((ulonglong)uVar3 >> 0x20);
          uVar24 = uVar31;
        }
        else {
          dVar37 = (param_1->ViewOrigin).field0_0x0._s_0.X;
          dVar38 = (param_1->ViewOrigin).field0_0x0._s_0.Y;
          dVar39 = (param_1->ViewOrigin).field0_0x0._s_0.Z;
          dVar1 = (param_1->ViewDirection).field0_0x0._s_0.Z;
          uVar40 = SUB84(dVar1,0);
          uVar41 = (undefined4)((ulonglong)dVar1 >> 0x20);
          dVar2 = (param_1->ViewDirection).field0_0x0._s_0.X;
          uVar42 = SUB84(dVar2,0);
          uVar43 = (undefined4)((ulonglong)dVar2 >> 0x20);
          dVar36 = (param_1->ViewDirection).field0_0x0._s_0.Y;
          uVar44 = SUB84(dVar36,0);
          uVar45 = (undefined4)((ulonglong)dVar36 >> 0x20);
          pFVar21 = pFVar19 + 1;
          do {
            iVar22 = (int)uVar31;
            lVar27 = (longlong)iVar22;
            pFVar21[-1].Index = iVar22;
            pFVar21[1].Index = iVar26;
            pFVar21[-1].OrderAsUint =
                 ~((uint)(float)(((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar13) -
                                 dVar38) * dVar36 +
                                 ((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar30) -
                                 dVar37) * dVar2 +
                                ((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar14) -
                                dVar39) * dVar1) | 0x80000000);
            lVar27 = (longlong)iVar26;
            pFVar21->OrderAsUint =
                 ~((uint)(float)(((double)*(float *)(pFVar28 + lVar27 * 4 + ((ulonglong)uVar13 - 4))
                                 - dVar38) * dVar36 +
                                 ((double)*(float *)(pFVar28 + lVar27 * 4 + ((ulonglong)uVar30 - 4))
                                 - dVar37) * dVar2 +
                                ((double)*(float *)(pFVar28 + lVar27 * 4 + ((ulonglong)uVar14 - 4))
                                - dVar39) * dVar1) | 0x80000000);
            pFVar21->Index = iVar26 + -1;
            lVar27 = (longlong)iVar26;
            pFVar21[1].OrderAsUint =
                 ~((uint)(float)(((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar13) -
                                 dVar38) * dVar36 +
                                 ((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar30) -
                                 dVar37) * dVar2 +
                                ((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar14) -
                                dVar39) * dVar1) | 0x80000000);
            lVar27 = (longlong)iVar26;
            uVar29 = iVar22 + 4;
            uVar31 = (ulonglong)uVar29;
            pFVar21[2].OrderAsUint =
                 ~((uint)(float)(((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar13 + 4) -
                                 dVar38) * dVar36 +
                                 ((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar30 + 4) -
                                 dVar37) * dVar2 +
                                ((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar14 + 4) -
                                dVar39) * dVar1) | 0x80000000);
            pFVar21[2].Index = iVar26 + 1;
            iVar26 = iVar26 + 4;
            pFVar21 = pFVar21 + 4;
          } while (uVar29 < uVar7 - 3);
          uVar24 = (ulonglong)((uVar7 - 4 >> 2) + 1) << 2;
          if (uVar7 <= uVar29) goto LAB_14936f7c2;
        }
        pFVar21 = pFVar19 + uVar24;
        do {
          iVar26 = (int)uVar31;
          lVar27 = (longlong)iVar26;
          pFVar21->Index = iVar26;
          uVar31 = (ulonglong)(iVar26 + 1U);
          pFVar21->OrderAsUint =
               ~((uint)(float)(((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar13) -
                               dVar38) * (double)CONCAT44(uVar45,uVar44) +
                               ((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar30) -
                               dVar37) * (double)CONCAT44(uVar43,uVar42) +
                              ((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar14) - dVar39
                              ) * (double)CONCAT44(uVar41,uVar40)) | 0x80000000);
          pFVar21 = pFVar21 + 1;
        } while (iVar26 + 1U < uVar7);
      }
      else {
        if (uVar7 < 4) {
          if (uVar7 == 0) goto LAB_14936f7c2;
          dVar37 = (param_1->ViewOrigin).field0_0x0._s_0.X;
          dVar38 = (param_1->ViewOrigin).field0_0x0._s_0.Y;
          dVar39 = (param_1->ViewOrigin).field0_0x0._s_0.Z;
          uVar24 = uVar31;
        }
        else {
          dVar37 = (param_1->ViewOrigin).field0_0x0._s_0.X;
          dVar38 = (param_1->ViewOrigin).field0_0x0._s_0.Y;
          dVar39 = (param_1->ViewOrigin).field0_0x0._s_0.Z;
          pFVar21 = pFVar19 + 1;
          do {
            iVar22 = (int)uVar31;
            lVar27 = (longlong)iVar22;
            pFVar21[-1].Index = iVar22;
            pFVar21[1].Index = iVar26;
            pFVar21[-1].OrderAsUint =
                 ~((uint)(float)(((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar13) -
                                 dVar38) * ((double)*(float *)(pFVar28 +
                                                              lVar27 * 4 + (ulonglong)uVar13) -
                                           dVar38) +
                                 ((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar30) -
                                 dVar37) * ((double)*(float *)(pFVar28 +
                                                              lVar27 * 4 + (ulonglong)uVar30) -
                                           dVar37) +
                                ((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar14) -
                                dVar39) * ((double)*(float *)(pFVar28 +
                                                             lVar27 * 4 + (ulonglong)uVar14) -
                                          dVar39)) | 0x80000000);
            lVar27 = (longlong)iVar26;
            pFVar21->OrderAsUint =
                 ~((uint)(float)(((double)*(float *)(pFVar28 + lVar27 * 4 + ((ulonglong)uVar13 - 4))
                                 - dVar38) *
                                 ((double)*(float *)(pFVar28 + lVar27 * 4 + ((ulonglong)uVar13 - 4))
                                 - dVar38) +
                                 ((double)*(float *)(pFVar28 + lVar27 * 4 + ((ulonglong)uVar30 - 4))
                                 - dVar37) *
                                 ((double)*(float *)(pFVar28 + lVar27 * 4 + ((ulonglong)uVar30 - 4))
                                 - dVar37) +
                                ((double)*(float *)(pFVar28 + lVar27 * 4 + ((ulonglong)uVar14 - 4))
                                - dVar39) *
                                ((double)*(float *)(pFVar28 + lVar27 * 4 + ((ulonglong)uVar14 - 4))
                                - dVar39)) | 0x80000000);
            pFVar21->Index = iVar26 + -1;
            lVar27 = (longlong)iVar26;
            pFVar21[1].OrderAsUint =
                 ~((uint)(float)(((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar13) -
                                 dVar38) * ((double)*(float *)(pFVar28 +
                                                              lVar27 * 4 + (ulonglong)uVar13) -
                                           dVar38) +
                                 ((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar30) -
                                 dVar37) * ((double)*(float *)(pFVar28 +
                                                              lVar27 * 4 + (ulonglong)uVar30) -
                                           dVar37) +
                                ((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar14) -
                                dVar39) * ((double)*(float *)(pFVar28 +
                                                             lVar27 * 4 + (ulonglong)uVar14) -
                                          dVar39)) | 0x80000000);
            lVar27 = (longlong)iVar26;
            uVar29 = iVar22 + 4;
            uVar31 = (ulonglong)uVar29;
            pFVar21[2].OrderAsUint =
                 ~((uint)(float)(((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar13 + 4) -
                                 dVar38) * ((double)*(float *)(pFVar28 +
                                                              lVar27 * 4 + (ulonglong)uVar13 + 4) -
                                           dVar38) +
                                 ((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar30 + 4) -
                                 dVar37) * ((double)*(float *)(pFVar28 +
                                                              lVar27 * 4 + (ulonglong)uVar30 + 4) -
                                           dVar37) +
                                ((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar14 + 4) -
                                dVar39) * ((double)*(float *)(pFVar28 +
                                                             lVar27 * 4 + (ulonglong)uVar14 + 4) -
                                          dVar39)) | 0x80000000);
            pFVar21[2].Index = iVar26 + 1;
            iVar26 = iVar26 + 4;
            pFVar21 = pFVar21 + 4;
          } while (uVar29 < uVar7 - 3);
          uVar24 = (ulonglong)((uVar7 - 4 >> 2) + 1) << 2;
          if (uVar7 <= uVar29) goto LAB_14936f7c2;
        }
        pFVar21 = pFVar19 + uVar24;
        do {
          iVar26 = (int)uVar31;
          lVar27 = (longlong)iVar26;
          pFVar21->Index = iVar26;
          uVar31 = (ulonglong)(iVar26 + 1U);
          pFVar21->OrderAsUint =
               ~((uint)(float)(((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar13) -
                               dVar38) * ((double)*(float *)(pFVar28 +
                                                            lVar27 * 4 + (ulonglong)uVar13) - dVar38
                                         ) +
                               ((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar30) -
                               dVar37) * ((double)*(float *)(pFVar28 +
                                                            lVar27 * 4 + (ulonglong)uVar30) - dVar37
                                         ) +
                              ((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar14) - dVar39
                              ) * ((double)*(float *)(pFVar28 + lVar27 * 4 + (ulonglong)uVar14) -
                                  dVar39)) | 0x80000000);
          pFVar21 = pFVar21 + 1;
        } while (iVar26 + 1U < uVar7);
      }
    }
    else {
      uVar29 = 0xffffffff;
      if (uVar6 != 0xffff) {
        uVar29 = (uint)uVar6;
      }
      uVar13 = param_3->HalfStride;
      pFVar28 = (param_3->HalfData).AllocatorInstance.Data;
      local_res10 = (FNiagaraRendererVariableInfo *)(pFVar28 + uVar29 * uVar13);
      uVar14 = (uVar29 + 1) * uVar13;
      pFVar20 = pFVar28 + (uVar29 + 2) * uVar13;
      uVar29 = 0;
      local_110 = pFVar20;
      if (EVar5 == ViewDepth) {
        if (uVar7 != 0) {
          dVar37 = (param_1->ViewOrigin).field0_0x0._s_0.X;
          dVar38 = (param_1->ViewOrigin).field0_0x0._s_0.Y;
          dVar39 = (param_1->ViewOrigin).field0_0x0._s_0.Z;
          dVar1 = (param_1->ViewDirection).field0_0x0._s_0.Z;
          dVar2 = (param_1->ViewDirection).field0_0x0._s_0.X;
          dVar36 = (param_1->ViewDirection).field0_0x0._s_0.Y;
          pFVar21 = pFVar19;
          do {
            lVar27 = (longlong)(int)uVar29;
            fVar33 = FGenericPlatformMath::LoadHalf
                               ((ushort *)(pFVar28 + lVar27 * 2 + (ulonglong)uVar14));
            fVar34 = FGenericPlatformMath::LoadHalf(&local_res10->DatasetOffset + lVar27);
            fVar35 = FGenericPlatformMath::LoadHalf((ushort *)(pFVar20 + lVar27 * 2));
            pFVar21->Index = uVar29;
            uVar29 = uVar29 + 1;
            pFVar21->OrderAsUint =
                 ~((uint)(float)(((double)fVar33 - dVar38) * dVar36 +
                                 ((double)fVar34 - dVar37) * dVar2 +
                                ((double)fVar35 - dVar39) * dVar1) | 0x80000000);
            pFVar21 = pFVar21 + 1;
            FVar25 = local_148;
            piVar32 = local_108;
          } while (uVar29 < uVar7);
        }
      }
      else if (uVar7 != 0) {
        dVar37 = (param_1->ViewOrigin).field0_0x0._s_0.X;
        dVar38 = (param_1->ViewOrigin).field0_0x0._s_0.Y;
        dVar39 = (param_1->ViewOrigin).field0_0x0._s_0.Z;
        pFVar21 = pFVar19;
        do {
          lVar27 = (longlong)(int)uVar29;
          fVar33 = FGenericPlatformMath::LoadHalf(&local_res10->DatasetOffset + lVar27);
          dVar2 = (double)fVar33 - dVar37;
          fVar33 = FGenericPlatformMath::LoadHalf
                             ((ushort *)(pFVar28 + lVar27 * 2 + (ulonglong)uVar14));
          dVar1 = (double)fVar33 - dVar38;
          fVar33 = FGenericPlatformMath::LoadHalf((ushort *)(pFVar20 + lVar27 * 2));
          pFVar21->Index = uVar29;
          uVar29 = uVar29 + 1;
          dVar36 = (double)fVar33 - dVar39;
          pFVar21->OrderAsUint =
               ~((uint)(float)(dVar1 * dVar1 + dVar2 * dVar2 + dVar36 * dVar36) | 0x80000000);
          pFVar21 = pFVar21 + 1;
          FVar25 = local_148;
          piVar32 = local_108;
        } while (uVar29 < uVar7);
      }
    }
  }
  else {
    uVar29 = 0xffffffff;
    uVar6 = param_2->DatasetOffset;
    if (bVar4 == false) {
      if (uVar6 != 0xffff) {
        uVar29 = (uint)uVar6;
      }
      uVar29 = uVar29 * param_3->FloatStride;
      pFVar28 = (param_3->FloatData).AllocatorInstance.Data;
      uVar31 = 0;
      if (EVar5 == CustomAscending) {
        if (uVar7 < 4) {
          uVar24 = uVar31;
          if (uVar7 == 0) goto LAB_14936f7c2;
        }
        else {
          pFVar20 = pFVar28 + (ulonglong)uVar29 + 8;
          piVar23 = &pFVar19[2].Index;
          do {
            fVar33 = *(float *)(pFVar20 + -8);
            if (0.0 <= fVar33) {
              uVar13 = (uint)fVar33 | 0x80000000;
            }
            else {
              uVar13 = ~(uint)fVar33;
            }
            fVar33 = *(float *)(pFVar20 + -4);
            piVar23[-5] = uVar13;
            piVar23[-4] = (int)uVar31;
            if (0.0 <= fVar33) {
              uVar13 = (uint)fVar33 | 0x80000000;
            }
            else {
              uVar13 = ~(uint)fVar33;
            }
            fVar33 = *(float *)pFVar20;
            piVar23[-3] = uVar13;
            piVar23[-2] = iVar26 + -1;
            if (0.0 <= fVar33) {
              uVar13 = (uint)fVar33 | 0x80000000;
            }
            else {
              uVar13 = ~(uint)fVar33;
            }
            fVar33 = *(float *)(pFVar20 + 4);
            ((FParticleOrderAsUint *)(piVar23 + -1))->OrderAsUint = uVar13;
            *piVar23 = iVar26;
            local_res10 = (FNiagaraRendererVariableInfo *)(ulonglong)(uint)fVar33;
            if (0.0 <= fVar33) {
              uVar13 = (uint)fVar33 | 0x80000000;
            }
            else {
              uVar13 = ~(uint)fVar33;
            }
            piVar23[1] = uVar13;
            pFVar20 = pFVar20 + 0x10;
            uVar13 = (int)uVar31 + 4;
            uVar31 = (ulonglong)uVar13;
            piVar23[2] = iVar26 + 1;
            iVar26 = iVar26 + 4;
            piVar23 = piVar23 + 8;
          } while (uVar13 < uVar7 - 3);
          uVar24 = (ulonglong)((uVar7 - 4 >> 2) + 1) << 2;
          if (uVar7 <= uVar13) goto LAB_14936f7c2;
        }
        pFVar28 = pFVar28 + uVar24 * 4 + (ulonglong)uVar29;
        pFVar21 = pFVar19 + uVar24;
        do {
          fVar33 = *(float *)pFVar28;
          local_res10 = (FNiagaraRendererVariableInfo *)(ulonglong)(uint)fVar33;
          if (0.0 <= fVar33) {
            uVar29 = (uint)fVar33 | 0x80000000;
          }
          else {
            uVar29 = ~(uint)fVar33;
          }
          pFVar21->Index = (int)uVar31;
          pFVar28 = pFVar28 + 4;
          pFVar21->OrderAsUint = uVar29;
          uVar29 = (int)uVar31 + 1;
          uVar31 = (ulonglong)uVar29;
          pFVar21 = pFVar21 + 1;
        } while (uVar29 < uVar7);
      }
      else {
        if (uVar7 < 4) {
          uVar24 = uVar31;
          if (uVar7 == 0) goto LAB_14936f7c2;
        }
        else {
          pFVar20 = pFVar28 + (ulonglong)uVar29 + 8;
          piVar23 = &pFVar19[2].Index;
          do {
            fVar33 = *(float *)(pFVar20 + -8);
            if (0.0 <= fVar33) {
              uVar13 = (uint)fVar33 | 0x80000000;
            }
            else {
              uVar13 = ~(uint)fVar33;
            }
            fVar33 = *(float *)(pFVar20 + -4);
            piVar23[-5] = ~uVar13;
            piVar23[-4] = (int)uVar31;
            if (0.0 <= fVar33) {
              uVar13 = (uint)fVar33 | 0x80000000;
            }
            else {
              uVar13 = ~(uint)fVar33;
            }
            fVar33 = *(float *)pFVar20;
            piVar23[-3] = ~uVar13;
            piVar23[-2] = iVar26 + -1;
            if (0.0 <= fVar33) {
              uVar13 = (uint)fVar33 | 0x80000000;
            }
            else {
              uVar13 = ~(uint)fVar33;
            }
            fVar33 = *(float *)(pFVar20 + 4);
            ((FParticleOrderAsUint *)(piVar23 + -1))->OrderAsUint = ~uVar13;
            *piVar23 = iVar26;
            local_res10 = (FNiagaraRendererVariableInfo *)(ulonglong)(uint)fVar33;
            if (0.0 <= fVar33) {
              uVar13 = (uint)fVar33 | 0x80000000;
            }
            else {
              uVar13 = ~(uint)fVar33;
            }
            pFVar20 = pFVar20 + 0x10;
            piVar23[1] = ~uVar13;
            uVar13 = (int)uVar31 + 4;
            uVar31 = (ulonglong)uVar13;
            iVar22 = iVar26 + 1;
            iVar26 = iVar26 + 4;
            piVar23[2] = iVar22;
            piVar23 = piVar23 + 8;
          } while (uVar13 < uVar7 - 3);
          uVar24 = (ulonglong)((uVar7 - 4 >> 2) + 1) << 2;
          if (uVar7 <= uVar13) goto LAB_14936f7c2;
        }
        pFVar28 = pFVar28 + uVar24 * 4 + (ulonglong)uVar29;
        pFVar21 = pFVar19 + uVar24;
        do {
          fVar33 = *(float *)pFVar28;
          local_res10 = (FNiagaraRendererVariableInfo *)(ulonglong)(uint)fVar33;
          if (0.0 <= fVar33) {
            uVar29 = (uint)fVar33 | 0x80000000;
          }
          else {
            uVar29 = ~(uint)fVar33;
          }
          pFVar21->Index = (int)uVar31;
          pFVar21->OrderAsUint = ~uVar29;
          pFVar28 = pFVar28 + 4;
          pFVar21 = pFVar21 + 1;
          uVar29 = (int)uVar31 + 1;
          uVar31 = (ulonglong)uVar29;
        } while (uVar29 < uVar7);
      }
    }
    else {
      if (uVar6 != 0xffff) {
        uVar29 = (uint)uVar6;
      }
      pFVar28 = (param_3->HalfData).AllocatorInstance.Data + uVar29 * param_3->HalfStride;
      uVar29 = 0;
      if (EVar5 == CustomAscending) {
        if (uVar7 != 0) {
          piVar23 = &pFVar19->Index;
          do {
            uVar6 = *(ushort *)pFVar28;
            pFVar28 = pFVar28 + 2;
            *piVar23 = uVar29;
            uVar13 = ~(uint)uVar6;
            if ((short)uVar6 < 0) {
              uVar13 = uVar6 | 0x8000;
            }
            uVar29 = uVar29 + 1;
            ((FParticleOrderAsUint *)(piVar23 + -1))->OrderAsUint = uVar13;
            *(undefined2 *)((longlong)piVar23 + -2) = 0;
            piVar23 = piVar23 + 2;
          } while (uVar29 < uVar7);
        }
      }
      else if (uVar7 != 0) {
        piVar23 = &pFVar19->Index;
        do {
          uVar6 = *(ushort *)pFVar28;
          pFVar28 = pFVar28 + 2;
          *piVar23 = uVar29;
          uVar13 = ~(uint)uVar6;
          if ((short)uVar6 < 0) {
            uVar13 = uVar6 | 0x8000;
          }
          uVar29 = uVar29 + 1;
          ((FParticleOrderAsUint *)(piVar23 + -1))->OrderAsUint = ~uVar13;
          *(undefined2 *)((longlong)piVar23 + -2) = 0;
          piVar23 = piVar23 + 2;
        } while (uVar29 < uVar7);
      }
    }
  }
LAB_14936f7c2:
  uVar31 = (ulonglong)uVar7;
  if (bVar12) {
    puVar17 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_c8 = &local_14e;
    local_d0 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar18 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_d0,puVar17);
    pFVar21 = FMemStackBase::Alloc((FMemStackBase *)(pFVar18 + 2),uVar31 * 8,4);
    RadixSort32<FParticleOrderAsUint,unsigned_int,TRadixSortKeyCastUint32<FParticleOrderAsUint>_>
              (pFVar21,pFVar19,uVar7,&local_14d);
    if (uVar7 != 0) {
      piVar23 = &pFVar21->Index;
      do {
        iVar26 = *piVar23;
        piVar23 = piVar23 + 2;
        *piVar32 = iVar26;
        piVar32 = piVar32 + 1;
        uVar31 = uVar31 - 1;
      } while (uVar31 != 0);
    }
  }
  else {
    if (((int)uVar7 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<FParticleOrderAsUint,int,UE::Core::Private::TProjectionMemberData<unsigned_int_FParticleOrderAsUint::*>,TLess<void>_>
              (pFVar19,uVar7,(TProjectionMemberData<unsigned_int_FParticleOrderAsUint::*>)0x0,
               local_res10._0_1_);
    if (uVar7 != 0) {
      piVar23 = &pFVar19->Index;
      do {
        iVar26 = *piVar23;
        piVar23 = piVar23 + 2;
        *piVar32 = iVar26;
        piVar32 = piVar32 + 1;
        uVar31 = uVar31 - 1;
      } while (uVar31 != 0);
    }
  }
  if (local_140.bPopped == false) {
    if (((local_140.Mem)->TopMark != &local_140) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_140.bPopped = true;
    (local_140.Mem)->NumMarks = (local_140.Mem)->NumMarks + -1;
    if (local_140.SavedChunk != (local_140.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_140.Mem,local_140.SavedChunk);
    }
    (local_140.Mem)->Top = local_140.Top;
    (local_140.Mem)->TopMark = local_140.NextTopmostMark;
    local_140.Top = (uchar *)0x0;
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  return;
}

// TransferDataToGPU @ 1493740d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParticleRenderData * __cdecl
FNiagaraRenderer::TransferDataToGPU
          (FParticleRenderData *__return_storage_ptr__,FRHICommandListBase *param_1,
          FGlobalDynamicReadBuffer *param_2,FNiagaraRendererLayout *param_3,
          TArrayView<unsigned_int_const_,int> *param_4,FNiagaraDataBuffer *param_5)

{
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  uchar *puVar3;
  code *pcVar4;
  FDynamicAllocReadBuffer *pFVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FParticleRenderData *pFVar10;
  FAllocation *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  FAllocation local_b8;
  FAllocation local_a0;
  FAllocation local_88;
  FAllocation local_70;
  FAllocation local_58;
  FAllocation local_40;
  
  uVar9 = param_5->NumInstances;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h"
                         ,0x9c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FParticleRenderData *)(*pcVar4)();
    return pFVar10;
  }
  uVar12 = param_3->TotalFloatComponents_RT * uVar9;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h"
                         ,0x9d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FParticleRenderData *)(*pcVar4)();
    return pFVar10;
  }
  uVar16 = param_3->TotalHalfComponents_RT * uVar9;
  uVar7 = uVar9 * param_4->ArrayNum;
  (__return_storage_ptr__->FloatData).Buffer = (uchar *)0x0;
  (__return_storage_ptr__->FloatData).ReadBuffer = (FDynamicAllocReadBuffer *)0x0;
  (__return_storage_ptr__->HalfData).Buffer = (uchar *)0x0;
  (__return_storage_ptr__->HalfData).ReadBuffer = (FDynamicAllocReadBuffer *)0x0;
  (__return_storage_ptr__->IntData).Buffer = (uchar *)0x0;
  (__return_storage_ptr__->IntData).ReadBuffer = (FDynamicAllocReadBuffer *)0x0;
  __return_storage_ptr__->FloatStride = 0;
  __return_storage_ptr__->HalfStride = 0;
  __return_storage_ptr__->IntStride = 0;
  if (uVar12 == 0) {
    pFVar11 = &local_b8;
    local_b8.Buffer = (uchar *)0x0;
    local_b8.ReadBuffer = (FDynamicAllocReadBuffer *)0x0;
  }
  else {
    pFVar11 = FGlobalDynamicReadBuffer::AllocateFloat(param_2,&local_70,uVar12);
  }
  pFVar5 = pFVar11->ReadBuffer;
  (__return_storage_ptr__->FloatData).Buffer = pFVar11->Buffer;
  (__return_storage_ptr__->FloatData).ReadBuffer = pFVar5;
  (__return_storage_ptr__->FloatData).SRV = pFVar11->SRV;
  if (uVar16 == 0) {
    pFVar11 = &local_a0;
    local_a0.Buffer = (uchar *)0x0;
    local_a0.ReadBuffer = (FDynamicAllocReadBuffer *)0x0;
  }
  else {
    pFVar11 = FGlobalDynamicReadBuffer::AllocateHalf(param_2,&local_58,uVar16);
  }
  pFVar5 = pFVar11->ReadBuffer;
  (__return_storage_ptr__->HalfData).Buffer = pFVar11->Buffer;
  (__return_storage_ptr__->HalfData).ReadBuffer = pFVar5;
  (__return_storage_ptr__->HalfData).SRV = pFVar11->SRV;
  if (uVar7 == 0) {
    pFVar11 = &local_88;
    local_88.Buffer = (uchar *)0x0;
    local_88.ReadBuffer = (FDynamicAllocReadBuffer *)0x0;
  }
  else {
    pFVar11 = FGlobalDynamicReadBuffer::AllocateInt32(param_2,&local_40,uVar7);
  }
  pFVar5 = pFVar11->ReadBuffer;
  (__return_storage_ptr__->IntData).Buffer = pFVar11->Buffer;
  (__return_storage_ptr__->IntData).ReadBuffer = pFVar5;
  uVar8 = uVar9 * 4;
  if (uVar12 == 0) {
    uVar8 = 0;
  }
  (__return_storage_ptr__->IntData).SRV = pFVar11->SRV;
  __return_storage_ptr__->FloatStride = uVar8;
  uVar12 = uVar9 * 2;
  if (uVar16 == 0) {
    uVar12 = 0;
  }
  __return_storage_ptr__->HalfStride = uVar12;
  uVar12 = 0;
  if (uVar7 != 0) {
    uVar12 = uVar9 * 4;
  }
  __return_storage_ptr__->IntStride = uVar12;
  bVar6 = IsInParallelRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h"
                         ,0x9b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FParticleRenderData *)(*pcVar4)();
    return pFVar10;
  }
  pFVar13 = (param_3->VFVariables_RT).AllocatorInstance.Data;
  iVar14 = (param_3->VFVariables_RT).ArrayNum;
  if ((iVar14 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FParticleRenderData *)(*pcVar4)();
    return pFVar10;
  }
  pFVar1 = pFVar13 + (longlong)iVar14 * 8;
  if (pFVar13 != pFVar1) {
    do {
      uVar2 = *(ushort *)(pFVar13 + 2);
      if ((uVar2 != 0xffff) && (pFVar13[6] != (FScriptContainerElement)0x0)) {
        if (pFVar13[7] == (FScriptContainerElement)0x0) {
          iVar14 = 0;
          if (*(ushort *)(pFVar13 + 4) != 0) {
            do {
              uVar9 = (uint)*(ushort *)pFVar13;
              if (*(ushort *)pFVar13 == 0xffff) {
                uVar9 = 0xffffffff;
              }
              memcpy((__return_storage_ptr__->FloatData).Buffer +
                     __return_storage_ptr__->FloatStride * ((uint)uVar2 + iVar14),
                     (param_5->FloatData).AllocatorInstance.Data +
                     (uVar9 + iVar14) * param_5->FloatStride,
                     (ulonglong)__return_storage_ptr__->FloatStride);
              iVar14 = iVar14 + 1;
            } while (iVar14 < (int)(uint)*(ushort *)(pFVar13 + 4));
          }
        }
        else {
          iVar14 = 0;
          if (*(ushort *)(pFVar13 + 4) != 0) {
            do {
              uVar9 = (uint)*(ushort *)pFVar13;
              if (*(ushort *)pFVar13 == 0xffff) {
                uVar9 = 0xffffffff;
              }
              memcpy((__return_storage_ptr__->HalfData).Buffer +
                     __return_storage_ptr__->HalfStride * ((uint)uVar2 + iVar14),
                     (param_5->HalfData).AllocatorInstance.Data +
                     (uVar9 + iVar14) * param_5->HalfStride,
                     (ulonglong)__return_storage_ptr__->HalfStride);
              iVar14 = iVar14 + 1;
            } while (iVar14 < (int)(uint)*(ushort *)(pFVar13 + 4));
          }
        }
      }
      pFVar13 = pFVar13 + 8;
    } while (pFVar13 != pFVar1);
  }
  if (0 < (int)uVar7) {
    iVar14 = param_4->ArrayNum;
    uVar9 = 0;
    if (0 < iVar14) {
      lVar15 = 0;
      do {
        uVar12 = __return_storage_ptr__->IntStride;
        puVar3 = (__return_storage_ptr__->IntData).Buffer;
        uVar7 = 0;
        if ((int)uVar9 < iVar14) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FParticleRenderData *)(*pcVar4)();
          return pFVar10;
        }
        memcpy(puVar3 + uVar9 * uVar12,
               (param_5->Int32Data).AllocatorInstance.Data +
               *(int *)((longlong)param_4->DataPtr + lVar15) * param_5->Int32Stride,
               (ulonglong)__return_storage_ptr__->IntStride);
        iVar14 = param_4->ArrayNum;
        uVar9 = uVar9 + 1;
        lVar15 = lVar15 + 4;
      } while ((int)uVar9 < iVar14);
    }
  }
  return __return_storage_ptr__;
}

// UseLocalSpace @ 1493751e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FNiagaraRenderer::UseLocalSpace(FNiagaraRenderer *this,FNiagaraSceneProxy *param_1)

{
  if ((this->bLocalSpace == 0) && ((param_1->DynamicData).bUseCullProxy == false)) {
    return false;
  }
  return true;
}

// ViewFamilySupportLowLatencyTranslucency @ 149375220

bool __cdecl FNiagaraRenderer::ViewFamilySupportLowLatencyTranslucency(FSceneViewFamily *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  if (param_1->ViewMode == VMI_Lit) {
    pFVar2 = (param_1->Views).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (longlong)(param_1->Views).ArrayNum * 8;
    while( true ) {
      if (pFVar2 == pFVar1) {
        return true;
      }
      if (0.0 < *(float *)(*(longlong *)pFVar2 + 0x1200)) break;
      pFVar2 = pFVar2 + 8;
    }
  }
  return false;
}

