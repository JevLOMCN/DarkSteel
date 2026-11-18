// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FSkyLightSceneProxy @ 1479a3f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSkyLightSceneProxy * __thiscall
FSkyLightSceneProxy::FSkyLightSceneProxy(FSkyLightSceneProxy *this,USkyLightComponent *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  char cVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar10;
  FSkyLightSceneProxy *pFVar11;
  byte bVar12;
  byte bVar13;
  code **ppcVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_108 [32];
  TSHVectorRGB<3> *local_e8;
  undefined8 uStack_e0;
  float *local_d8;
  float *pfStack_d0;
  float local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  FLinearColor *local_b8;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  this->LightComponent = param_1;
  this->ProcessedTexture = (FTexture *)(param_1->ProcessedSkyTexture).Reference;
  this->SkyDistanceThreshold = param_1->SkyDistanceThreshold;
  this->BlendDestinationProcessedTexture =
       (FTexture *)(param_1->BlendDestinationProcessedSkyTexture).Reference;
  bVar13 = 0;
  bVar12 = ((byte)(*(uint *)((longlong)&param_1->_padding_ + 4) >> 1) ^ this->bCastShadows) & 1 ^
           this->field_0x20;
  this->field_0x20 = bVar12;
  if (*(char *)((longlong)&param_1->_padding_ + 3) == '\x01') {
    bVar13 = 2;
  }
  this->field_0x20 = bVar13 | bVar12 & 0xfd;
  bVar9 = ULightComponentBase::HasStaticLighting((ULightComponentBase *)param_1);
  bVar13 = bVar9 << 2 | this->field_0x20 & 0xfb;
  this->bHasStaticLighting = bVar9;
  this->field_0x20 =
       ((char)(*(uint *)((longlong)&param_1->_padding_ + 4) >> 6) << 3 ^ bVar13) & 8 ^ bVar13;
  (this->CastRayTracedShadow).Value = (uchar)param_1->_padding_;
  bVar13 = (this->bAffectReflection ^ *(byte *)((longlong)&param_1->_padding_ + 4)) & 1 ^
           this->field_0x22;
  this->field_0x22 = bVar13;
  bVar13 = ((char)(*(uint *)((longlong)&param_1->_padding_ + 4) >> 1) * '\x02' ^ bVar13) & 2 ^
           bVar13;
  this->field_0x22 = bVar13;
  this->field_0x22 =
       ((char)(*(uint *)((longlong)&param_1->_padding_ + 4) >> 5) << 2 ^ bVar13) & 4 ^ bVar13;
  (this->OcclusionCombineMode).Value = (param_1->OcclusionCombineMode).Value;
  this->IndirectLightingIntensity = *(float *)((longlong)&param_1->_padding_ + 4);
  fVar16 = *(float *)&param_1->_padding_;
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  this->VolumetricScatteringIntensity = fVar16;
  (this->IrradianceEnvironmentMap).R.V[0] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[1] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[2] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[3] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[4] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[5] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[6] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[7] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[8] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[9] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[10] = 0.0;
  (this->IrradianceEnvironmentMap).R.V[0xb] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[0] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[1] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[2] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[3] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[4] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[5] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[6] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[7] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[8] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[9] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[10] = 0.0;
  (this->IrradianceEnvironmentMap).G.V[0xb] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[0] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[1] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[2] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[3] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[4] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[5] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[6] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[7] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[8] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[9] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[10] = 0.0;
  (this->IrradianceEnvironmentMap).B.V[0xb] = 0.0;
  this->OcclusionMaxDistance = param_1->OcclusionMaxDistance;
  this->Contrast = param_1->Contrast;
  fVar16 = param_1->OcclusionExponent;
  if (__real_41200000 <= param_1->OcclusionExponent) {
    fVar16 = __real_41200000;
  }
  if (fVar16 <= __real_3dcccccd) {
    fVar16 = __real_3dcccccd;
  }
  this->OcclusionExponent = fVar16;
  fVar16 = __real_3b808081;
  fVar17 = param_1->MinOcclusion;
  if (__real_3f800000 <= param_1->MinOcclusion) {
    fVar17 = __real_3f800000;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  this->MinOcclusion = fVar17;
  (this->OcclusionTint).field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[(param_1->OcclusionTint).field0_0x0._s_0.R];
  (this->OcclusionTint).field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[(param_1->OcclusionTint).field0_0x0._s_0.G];
  (this->OcclusionTint).field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[(param_1->OcclusionTint).field0_0x0._s_0.B];
  (this->OcclusionTint).field0_0x0._s_0.A =
       (float)(param_1->OcclusionTint).field0_0x0._s_0.A * fVar16;
  this->bCloudAmbientOcclusion = param_1->bCloudAmbientOcclusion;
  this->CloudAmbientOcclusionExtent = param_1->CloudAmbientOcclusionExtent;
  this->CloudAmbientOcclusionStrength = param_1->CloudAmbientOcclusionStrength;
  this->CloudAmbientOcclusionMapResolutionScale = param_1->CloudAmbientOcclusionMapResolutionScale;
  this->CloudAmbientOcclusionApertureScale = param_1->CloudAmbientOcclusionApertureScale;
  this->SamplesPerPixel = *(int *)((longlong)&param_1->_padding_ + 4);
  if ((param_1->bRealTimeCapture == false) ||
     (((cVar4 = *(char *)((longlong)&param_1->_padding_ + 3), cVar4 != '\x02' && (cVar4 != '\x01'))
      || (GSkylightRealTimeReflectionCapture < 1)))) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  this->bRealTimeCaptureEnabled = bVar9;
  dVar7 = (double)param_1->_padding_;
  dVar6 = (double)param_1->_padding_;
  (this->CapturePosition).field0_0x0._s_0.X = (double)param_1->_padding_;
  (this->CapturePosition).field0_0x0._s_0.Y = dVar7;
  (this->CapturePosition).field0_0x0._s_0.Z = dVar6;
  this->CaptureCubeMapResolution = param_1->CubemapResolution;
  uVar8 = *(undefined8 *)((longlong)&(param_1->LowerHemisphereColor).field0_0x0 + 8);
  local_a8[0] = (code *)0x0;
  *(undefined8 *)&(this->LowerHemisphereColor).field0_0x0 =
       *(undefined8 *)&(param_1->LowerHemisphereColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->LowerHemisphereColor).field0_0x0 + 8) = uVar8;
  this->bLowerHemisphereIsSolidColor = param_1->bLowerHemisphereIsBlack;
  fVar17 = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)&param_1->_padding_ + 1)];
  fVar1 = FLinearColor::sRGBToLinearTable[(byte)param_1->_padding_];
  bVar13 = *(byte *)((longlong)&param_1->_padding_ + 3);
  fVar2 = *(float *)((longlong)&param_1->_padding_ + 4);
  (this->LightColor).field0_0x0._s_0.R =
       fVar2 * FLinearColor::sRGBToLinearTable[*(byte *)((longlong)&param_1->_padding_ + 2)];
  (this->LightColor).field0_0x0._s_0.G = fVar2 * fVar17;
  (this->LightColor).field0_0x0._s_0.B = fVar2 * fVar1;
  (this->LightColor).field0_0x0._s_0.A = (float)bVar13 * fVar16 * fVar2;
  local_e8 = &param_1->IrradianceEnvironmentMap;
  uStack_e0 = &param_1->BlendDestinationIrradianceEnvironmentMap;
  local_d8 = &param_1->AverageBrightness;
  pfStack_d0 = &param_1->BlendDestinationAverageBrightness;
  this->bMovable = *(char *)((longlong)&param_1->_padding_ + 3) == '\x02';
  fVar16 = param_1->BlendFraction;
  local_b8 = &param_1->SpecifiedCubemapColorScale;
  uStack_c0 = this;
  local_80 = FMemory::Malloc(0x40,8);
  *local_80 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FSkyLightSceneProxy::FSkyLightSceneProxy'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_80[1] = (code *)local_e8;
  *(undefined4 *)(local_80 + 2) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)local_80 + 0x14) = uStack_e0._4_4_;
  local_80[3] = (code *)local_d8;
  local_80[4] = (code *)pfStack_d0;
  *(float *)(local_80 + 5) = fVar16;
  *(undefined4 *)((longlong)local_80 + 0x2c) = uStack_c4;
  *(undefined4 *)(local_80 + 6) = (undefined4)uStack_c0;
  *(undefined4 *)((longlong)local_80 + 0x34) = uStack_c0._4_4_;
  local_80[7] = (code *)local_b8;
  if (local_80 + 1 != (code **)0x0) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSkyLightSceneProxy::FSkyLightSceneProxy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  local_c8 = fVar16;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSkyLightSceneProxy::FSkyLightSceneProxy_::__l2::TSTR_FInitSkyProxy277>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_80 = (code **)0x0;
    local_78._16_8_ = local_98[0];
    local_78._24_8_ = local_98[1];
    local_78._32_8_ = local_98[2];
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar10 = (FRenderCommandTag *)
              TRenderCommandTag<`FSkyLightSceneProxy::FSkyLightSceneProxy'::__l2::TSTR_FInitSkyProxy277>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar10);
    uVar15 = (ulonglong)local_48;
    if (2 < uVar15) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FSkyLightSceneProxy *)(*pcVar5)();
        return pFVar11;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        ppcVar14 = (code **)(local_78 + 0x10);
        if (local_50 != (code **)0x0) {
          ppcVar14 = local_50;
        }
        (**(code **)(*ppcVar14 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    ppcVar14 = local_a8 + 2;
    if (local_80 != (code **)0x0) {
      ppcVar14 = local_80;
    }
    (**(code **)(*ppcVar14 + 0x10))();
  }
  return this;
}

// GetEffectiveLightColor @ 1479c8db0

FLinearColor * __thiscall
FSkyLightSceneProxy::GetEffectiveLightColor
          (FSkyLightSceneProxy *this,FLinearColor *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (this->SpecifiedCubemapColorScale).field0_0x0._s_0.G;
  fVar2 = (this->SpecifiedCubemapColorScale).field0_0x0._s_0.B;
  fVar3 = (this->SpecifiedCubemapColorScale).field0_0x0._s_0.A;
  fVar4 = GSkylightIntensityMultiplier * (this->LightColor).field0_0x0._s_0.G;
  fVar5 = GSkylightIntensityMultiplier * (this->LightColor).field0_0x0._s_0.B;
  fVar6 = GSkylightIntensityMultiplier * (this->LightColor).field0_0x0._s_0.A;
  (__return_storage_ptr__->field0_0x0)._s_0.R =
       (this->SpecifiedCubemapColorScale).field0_0x0._s_0.R *
       GSkylightIntensityMultiplier * (this->LightColor).field0_0x0._s_0.R;
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar1 * fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar2 * fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar3 * fVar6;
  return __return_storage_ptr__;
}

// Initialize @ 1479d8450

void __thiscall
FSkyLightSceneProxy::Initialize
          (FSkyLightSceneProxy *this,float param_1,TSHVectorRGB<3> *param_2,TSHVectorRGB<3> *param_3
          ,float *param_4,float *param_5,FLinearColor *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
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
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined8 uVar71;
  float fVar72;
  
  fVar72 = __real_3f800000;
  uVar71 = *(undefined8 *)((longlong)&param_6->field0_0x0 + 8);
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  *(undefined8 *)&(this->SpecifiedCubemapColorScale).field0_0x0 =
       *(undefined8 *)&param_6->field0_0x0;
  *(undefined8 *)((longlong)&(this->SpecifiedCubemapColorScale).field0_0x0 + 8) = uVar71;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->BlendFraction = param_1;
  if ((param_1 <= 0.0) || (this->BlendDestinationProcessedTexture == (FTexture *)0x0)) {
    uVar71 = *(undefined8 *)((param_2->R).V + 2);
    *(undefined8 *)(this->IrradianceEnvironmentMap).R.V = *(undefined8 *)(param_2->R).V;
    *(undefined8 *)((this->IrradianceEnvironmentMap).R.V + 2) = uVar71;
    uVar71 = *(undefined8 *)((param_2->R).V + 6);
    *(undefined8 *)((this->IrradianceEnvironmentMap).R.V + 4) = *(undefined8 *)((param_2->R).V + 4);
    *(undefined8 *)((this->IrradianceEnvironmentMap).R.V + 6) = uVar71;
    uVar71 = *(undefined8 *)((param_2->R).V + 10);
    *(undefined8 *)((this->IrradianceEnvironmentMap).R.V + 8) = *(undefined8 *)((param_2->R).V + 8);
    *(undefined8 *)((this->IrradianceEnvironmentMap).R.V + 10) = uVar71;
    uVar71 = *(undefined8 *)((param_2->G).V + 2);
    *(undefined8 *)(this->IrradianceEnvironmentMap).G.V = *(undefined8 *)(param_2->G).V;
    *(undefined8 *)((this->IrradianceEnvironmentMap).G.V + 2) = uVar71;
    uVar71 = *(undefined8 *)((param_2->G).V + 6);
    *(undefined8 *)((this->IrradianceEnvironmentMap).G.V + 4) = *(undefined8 *)((param_2->G).V + 4);
    *(undefined8 *)((this->IrradianceEnvironmentMap).G.V + 6) = uVar71;
    uVar71 = *(undefined8 *)((param_2->G).V + 10);
    *(undefined8 *)((this->IrradianceEnvironmentMap).G.V + 8) = *(undefined8 *)((param_2->G).V + 8);
    *(undefined8 *)((this->IrradianceEnvironmentMap).G.V + 10) = uVar71;
    uVar71 = *(undefined8 *)((param_2->B).V + 2);
    *(undefined8 *)(this->IrradianceEnvironmentMap).B.V = *(undefined8 *)(param_2->B).V;
    *(undefined8 *)((this->IrradianceEnvironmentMap).B.V + 2) = uVar71;
    uVar71 = *(undefined8 *)((param_2->B).V + 6);
    *(undefined8 *)((this->IrradianceEnvironmentMap).B.V + 4) = *(undefined8 *)((param_2->B).V + 4);
    *(undefined8 *)((this->IrradianceEnvironmentMap).B.V + 6) = uVar71;
    uVar71 = *(undefined8 *)((param_2->B).V + 10);
    *(undefined8 *)((this->IrradianceEnvironmentMap).B.V + 8) = *(undefined8 *)((param_2->B).V + 8);
    *(undefined8 *)((this->IrradianceEnvironmentMap).B.V + 10) = uVar71;
    fVar72 = *param_4;
    this->BlendFraction = 0.0;
    this->AverageBrightness = fVar72;
  }
  else {
    if (fVar72 <= param_1) {
      uVar71 = *(undefined8 *)((param_3->R).V + 2);
      *(undefined8 *)(this->IrradianceEnvironmentMap).R.V = *(undefined8 *)(param_3->R).V;
      *(undefined8 *)((this->IrradianceEnvironmentMap).R.V + 2) = uVar71;
      uVar71 = *(undefined8 *)((param_3->R).V + 6);
      *(undefined8 *)((this->IrradianceEnvironmentMap).R.V + 4) =
           *(undefined8 *)((param_3->R).V + 4);
      *(undefined8 *)((this->IrradianceEnvironmentMap).R.V + 6) = uVar71;
      uVar71 = *(undefined8 *)((param_3->R).V + 10);
      *(undefined8 *)((this->IrradianceEnvironmentMap).R.V + 8) =
           *(undefined8 *)((param_3->R).V + 8);
      *(undefined8 *)((this->IrradianceEnvironmentMap).R.V + 10) = uVar71;
      uVar71 = *(undefined8 *)((param_3->G).V + 2);
      *(undefined8 *)(this->IrradianceEnvironmentMap).G.V = *(undefined8 *)(param_3->G).V;
      *(undefined8 *)((this->IrradianceEnvironmentMap).G.V + 2) = uVar71;
      uVar71 = *(undefined8 *)((param_3->G).V + 6);
      *(undefined8 *)((this->IrradianceEnvironmentMap).G.V + 4) =
           *(undefined8 *)((param_3->G).V + 4);
      *(undefined8 *)((this->IrradianceEnvironmentMap).G.V + 6) = uVar71;
      uVar71 = *(undefined8 *)((param_3->G).V + 10);
      *(undefined8 *)((this->IrradianceEnvironmentMap).G.V + 8) =
           *(undefined8 *)((param_3->G).V + 8);
      *(undefined8 *)((this->IrradianceEnvironmentMap).G.V + 10) = uVar71;
      uVar71 = *(undefined8 *)((param_3->B).V + 2);
      *(undefined8 *)(this->IrradianceEnvironmentMap).B.V = *(undefined8 *)(param_3->B).V;
      *(undefined8 *)((this->IrradianceEnvironmentMap).B.V + 2) = uVar71;
      uVar71 = *(undefined8 *)((param_3->B).V + 6);
      *(undefined8 *)((this->IrradianceEnvironmentMap).B.V + 4) =
           *(undefined8 *)((param_3->B).V + 4);
      *(undefined8 *)((this->IrradianceEnvironmentMap).B.V + 6) = uVar71;
      uVar71 = *(undefined8 *)((param_3->B).V + 10);
      *(undefined8 *)((this->IrradianceEnvironmentMap).B.V + 8) =
           *(undefined8 *)((param_3->B).V + 8);
      *(undefined8 *)((this->IrradianceEnvironmentMap).B.V + 10) = uVar71;
      fVar72 = *param_5;
    }
    else {
      fVar72 = fVar72 - param_1;
      fVar1 = (param_3->R).V[1];
      fVar2 = (param_3->R).V[2];
      fVar3 = (param_3->R).V[3];
      fVar4 = (param_2->R).V[1];
      fVar5 = (param_2->R).V[2];
      fVar6 = (param_2->R).V[3];
      fVar7 = (param_2->R).V[4];
      fVar8 = (param_2->R).V[5];
      fVar9 = (param_2->R).V[6];
      fVar10 = (param_2->R).V[7];
      fVar11 = (param_2->R).V[8];
      fVar12 = (param_2->R).V[9];
      fVar13 = (param_2->R).V[10];
      fVar14 = (param_2->R).V[0xb];
      fVar15 = (param_2->G).V[0];
      fVar16 = (param_2->G).V[1];
      fVar17 = (param_2->G).V[2];
      fVar18 = (param_2->G).V[3];
      fVar19 = (param_2->G).V[4];
      fVar20 = (param_2->G).V[5];
      fVar21 = (param_2->G).V[6];
      fVar22 = (param_2->G).V[7];
      fVar23 = (param_3->R).V[4];
      fVar24 = (param_3->R).V[5];
      fVar25 = (param_3->R).V[6];
      fVar26 = (param_3->R).V[7];
      fVar27 = (param_2->G).V[8];
      fVar28 = (param_2->G).V[9];
      fVar29 = (param_2->G).V[10];
      fVar30 = (param_2->G).V[0xb];
      fVar31 = (param_2->B).V[0];
      fVar32 = (param_2->B).V[1];
      fVar33 = (param_2->B).V[2];
      fVar34 = (param_2->B).V[3];
      fVar35 = (param_2->B).V[8];
      fVar36 = (param_2->B).V[9];
      fVar37 = (param_2->B).V[10];
      fVar38 = (param_2->B).V[0xb];
      fVar39 = (param_2->B).V[4];
      fVar40 = (param_2->B).V[5];
      fVar41 = (param_2->B).V[6];
      fVar42 = (param_2->B).V[7];
      fVar43 = (param_3->R).V[8];
      fVar44 = (param_3->R).V[9];
      fVar45 = (param_3->R).V[10];
      fVar46 = (param_3->R).V[0xb];
      fVar47 = (param_3->G).V[0];
      fVar48 = (param_3->G).V[1];
      fVar49 = (param_3->G).V[2];
      fVar50 = (param_3->G).V[3];
      fVar51 = (param_3->G).V[4];
      fVar52 = (param_3->G).V[5];
      fVar53 = (param_3->G).V[6];
      fVar54 = (param_3->G).V[7];
      fVar55 = (param_3->G).V[8];
      fVar56 = (param_3->G).V[9];
      fVar57 = (param_3->G).V[10];
      fVar58 = (param_3->G).V[0xb];
      fVar59 = (param_3->B).V[0];
      fVar60 = (param_3->B).V[1];
      fVar61 = (param_3->B).V[2];
      fVar62 = (param_3->B).V[3];
      fVar63 = (param_3->B).V[8];
      fVar64 = (param_3->B).V[9];
      fVar65 = (param_3->B).V[10];
      fVar66 = (param_3->B).V[0xb];
      fVar67 = (param_3->B).V[4];
      fVar68 = (param_3->B).V[5];
      fVar69 = (param_3->B).V[6];
      fVar70 = (param_3->B).V[7];
      (this->IrradianceEnvironmentMap).R.V[0] =
           fVar72 * (param_2->R).V[0] + param_1 * (param_3->R).V[0];
      (this->IrradianceEnvironmentMap).R.V[1] = fVar72 * fVar4 + param_1 * fVar1;
      (this->IrradianceEnvironmentMap).R.V[2] = fVar72 * fVar5 + param_1 * fVar2;
      (this->IrradianceEnvironmentMap).R.V[3] = fVar72 * fVar6 + param_1 * fVar3;
      (this->IrradianceEnvironmentMap).R.V[4] = fVar72 * fVar7 + param_1 * fVar23;
      (this->IrradianceEnvironmentMap).R.V[5] = fVar72 * fVar8 + param_1 * fVar24;
      (this->IrradianceEnvironmentMap).R.V[6] = fVar72 * fVar9 + param_1 * fVar25;
      (this->IrradianceEnvironmentMap).R.V[7] = fVar72 * fVar10 + param_1 * fVar26;
      (this->IrradianceEnvironmentMap).R.V[8] = fVar72 * fVar11 + param_1 * fVar43;
      (this->IrradianceEnvironmentMap).R.V[9] = fVar72 * fVar12 + param_1 * fVar44;
      (this->IrradianceEnvironmentMap).R.V[10] = fVar72 * fVar13 + param_1 * fVar45;
      (this->IrradianceEnvironmentMap).R.V[0xb] = fVar72 * fVar14 + param_1 * fVar46;
      (this->IrradianceEnvironmentMap).G.V[0] = fVar72 * fVar15 + param_1 * fVar47;
      (this->IrradianceEnvironmentMap).G.V[1] = fVar72 * fVar16 + param_1 * fVar48;
      (this->IrradianceEnvironmentMap).G.V[2] = fVar72 * fVar17 + param_1 * fVar49;
      (this->IrradianceEnvironmentMap).G.V[3] = fVar72 * fVar18 + param_1 * fVar50;
      (this->IrradianceEnvironmentMap).G.V[4] = fVar72 * fVar19 + param_1 * fVar51;
      (this->IrradianceEnvironmentMap).G.V[5] = fVar72 * fVar20 + param_1 * fVar52;
      (this->IrradianceEnvironmentMap).G.V[6] = fVar72 * fVar21 + param_1 * fVar53;
      (this->IrradianceEnvironmentMap).G.V[7] = fVar72 * fVar22 + param_1 * fVar54;
      (this->IrradianceEnvironmentMap).G.V[8] = fVar72 * fVar27 + param_1 * fVar55;
      (this->IrradianceEnvironmentMap).G.V[9] = fVar72 * fVar28 + param_1 * fVar56;
      (this->IrradianceEnvironmentMap).G.V[10] = fVar72 * fVar29 + param_1 * fVar57;
      (this->IrradianceEnvironmentMap).G.V[0xb] = fVar72 * fVar30 + param_1 * fVar58;
      (this->IrradianceEnvironmentMap).B.V[0] = fVar72 * fVar31 + param_1 * fVar59;
      (this->IrradianceEnvironmentMap).B.V[1] = fVar72 * fVar32 + param_1 * fVar60;
      (this->IrradianceEnvironmentMap).B.V[2] = fVar72 * fVar33 + param_1 * fVar61;
      (this->IrradianceEnvironmentMap).B.V[3] = fVar72 * fVar34 + param_1 * fVar62;
      (this->IrradianceEnvironmentMap).B.V[4] = fVar72 * fVar39 + param_1 * fVar67;
      (this->IrradianceEnvironmentMap).B.V[5] = fVar72 * fVar40 + param_1 * fVar68;
      (this->IrradianceEnvironmentMap).B.V[6] = fVar72 * fVar41 + param_1 * fVar69;
      (this->IrradianceEnvironmentMap).B.V[7] = fVar72 * fVar42 + param_1 * fVar70;
      (this->IrradianceEnvironmentMap).B.V[8] = fVar72 * fVar35 + param_1 * fVar63;
      (this->IrradianceEnvironmentMap).B.V[9] = fVar72 * fVar36 + param_1 * fVar64;
      (this->IrradianceEnvironmentMap).B.V[10] = fVar72 * fVar37 + param_1 * fVar65;
      (this->IrradianceEnvironmentMap).B.V[0xb] = fVar72 * fVar38 + param_1 * fVar66;
      fVar72 = param_1 * *param_5 + fVar72 * *param_4;
    }
    this->AverageBrightness = fVar72;
  }
  return;
}

