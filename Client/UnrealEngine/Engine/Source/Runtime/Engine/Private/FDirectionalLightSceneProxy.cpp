// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 42

// FDirectionalLightSceneProxy @ 1478a6d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FDirectionalLightSceneProxy * __thiscall
FDirectionalLightSceneProxy::FDirectionalLightSceneProxy
          (FDirectionalLightSceneProxy *this,UDirectionalLightComponent *param_1)

{
  byte *pbVar1;
  float fVar2;
  undefined4 uVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  byte bVar8;
  EShaderPlatform EVar9;
  EShadingPath EVar10;
  FSceneInterface *this_00;
  FDirectionalLightSceneProxy *pFVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  
  FLightSceneProxy::FLightSceneProxy((FLightSceneProxy *)this,(ULightComponent *)param_1);
  this->_padding_ = (longlong)&___7FDirectionalLightSceneProxy__6B_;
  this->ShadowCascadeBiasDistribution = param_1->ShadowCascadeBiasDistribution;
  this->bEnableLightShaftOcclusion = param_1->bEnableLightShaftOcclusion;
  this->bUseInsetShadowsForMovableObjects = param_1->bUseInsetShadowsForMovableObjects;
  this->OcclusionMaskDarkness = param_1->OcclusionMaskDarkness;
  this->OcclusionDepthRange = param_1->OcclusionDepthRange;
  dVar5 = (param_1->LightShaftOverrideDirection).field0_0x0._s_0.Y;
  (this->LightShaftOverrideDirection).field0_0x0._s_0.X =
       (param_1->LightShaftOverrideDirection).field0_0x0._s_0.X;
  (this->LightShaftOverrideDirection).field0_0x0._s_0.Y = dVar5;
  (this->LightShaftOverrideDirection).field0_0x0._s_0.Z =
       (param_1->LightShaftOverrideDirection).field0_0x0._s_0.Z;
  this->bPerPixelTransmittanceEnabled = param_1->bPerPixelAtmosphereTransmittance;
  (this->SunDiscOuterSpaceLuminance).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->TransmittanceTowardSun).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  uVar12 = param_1->DynamicShadowCascades;
  if ((int)uVar12 < 1) {
    uVar12 = 0;
  }
  this->DynamicShadowCascades = uVar12;
  this->CascadeDistributionExponent = param_1->CascadeDistributionExponent;
  this->CascadeTransitionFraction = param_1->CascadeTransitionFraction;
  this->ShadowDistanceFadeoutFraction = param_1->ShadowDistanceFadeoutFraction;
  dVar5 = __real_3e45798ee0000000;
  if (*(char *)((longlong)&param_1->_padding_ + 4) == '\0') {
    fVar14 = 0.0;
  }
  else {
    fVar14 = param_1->DistanceFieldShadowDistance;
  }
  this->DistanceFieldShadowDistance = fVar14;
  this->ForwardShadingPriority = param_1->ForwardShadingPriority;
  this->LightSourceAngle = param_1->LightSourceAngle;
  this->LightSourceSoftAngle = param_1->LightSourceSoftAngle;
  this->ShadowSourceAngleFactor = param_1->ShadowSourceAngleFactor;
  fVar14 = param_1->TraceDistance;
  if (__real_49742400 <= param_1->TraceDistance) {
    fVar14 = __real_49742400;
  }
  if (fVar14 <= __real_447a0000) {
    fVar14 = __real_447a0000;
  }
  this->TraceDistance = fVar14;
  uVar12 = (param_1->bCastShadowsOnClouds ^ ZPULL(*(undefined4 *)&this->field_0x2c8,0,1)) & 1 ^
           *(undefined4 *)&this->field_0x2c8;
  *(uint *)&this->field_0x2c8 = uVar12;
  uVar12 = (*(uint *)&param_1->field_0x440 >> 1 ^ uVar12) & 2 ^ uVar12;
  *(uint *)&this->field_0x2c8 = uVar12;
  *(uint *)&this->field_0x2c8 = (*(uint *)&param_1->field_0x440 >> 1 ^ uVar12) & 4 ^ uVar12;
  this->CloudShadowExtent = param_1->CloudShadowExtent;
  this->CloudShadowStrength = param_1->CloudShadowStrength;
  this->CloudShadowOnAtmosphereStrength = param_1->CloudShadowOnAtmosphereStrength;
  this->CloudShadowOnSurfaceStrength = param_1->CloudShadowOnSurfaceStrength;
  this->CloudShadowDepthBias = param_1->CloudShadowDepthBias;
  this->CloudShadowMapResolutionScale = param_1->CloudShadowMapResolutionScale;
  this->CloudShadowRaySampleCountScale = param_1->CloudShadowRaySampleCountScale;
  uVar3 = *(undefined4 *)&this->field_0x2f8;
  uVar6 = *(undefined8 *)((longlong)&(param_1->CloudScatteredLuminanceScale).field0_0x0 + 8);
  *(undefined8 *)&(this->CloudScatteredLuminanceScale).field0_0x0 =
       *(undefined8 *)&(param_1->CloudScatteredLuminanceScale).field0_0x0;
  *(undefined8 *)((longlong)&(this->CloudScatteredLuminanceScale).field0_0x0 + 8) = uVar6;
  *(uint *)&this->field_0x2f8 =
       (ZPULL(uVar3,0,1) ^ param_1->bPerPixelAtmosphereTransmittance) & 1 ^ uVar3;
  UE::Math::TVector<double>::Normalize(&this->LightShaftOverrideDirection,dVar5);
  fVar14 = param_1->DynamicShadowDistanceMovableLight;
  if ((*(char *)((longlong)&param_1->_padding_ + 3) != '\x02') &&
     (FReadOnlyCVARCache::bAllowStaticLighting != false)) {
    fVar14 = param_1->DynamicShadowDistanceStationaryLight;
  }
  this->WholeSceneDynamicShadowRadius = fVar14;
  if ((param_1->FarShadowCascadeCount != 0) &&
     (__real_42c80000 < param_1->FarShadowDistance - fVar14)) {
    *(float *)&this->_padding_ = param_1->FarShadowDistance;
    *(int *)((longlong)&this->_padding_ + 4) = param_1->FarShadowCascadeCount;
  }
  this_00 = UActorComponent::GetScene((UActorComponent *)param_1);
  if (this_00 == (FSceneInterface *)0x0) {
    bVar7 = true;
LAB_1478a70a1:
    if (((*(char *)((longlong)&param_1->_padding_ + 3) != '\x01') ||
        (param_1->bUseInsetShadowsForMovableObjects != 0)) || (bVar7)) {
      bVar8 = 0;
    }
    else {
      bVar8 = 0x80;
    }
    bVar8 = *(byte *)((longlong)&this->_padding_ + 3) & 0x7f | bVar8;
  }
  else {
    EVar9 = FSceneInterface::GetShaderPlatform(this_00);
    if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar9].bContainsValidPlatformInfo == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0xe2,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FDirectionalLightSceneProxy *)(*pcVar4)();
        return pFVar11;
      }
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar9].MaxFeatureLevel != ES3_1) {
      EVar10 = FSceneInterface::GetShadingPath(this_00->FeatureLevel);
      bVar7 = EVar10 == Deferred;
      goto LAB_1478a70a1;
    }
    if ((*(char *)((longlong)&param_1->_padding_ + 3) == '\x01') &&
       (param_1->bCastModulatedShadows == 0)) {
      bVar8 = *(byte *)((longlong)&this->_padding_ + 3) & 0x7f | 0x80;
    }
    else {
      bVar8 = *(byte *)((longlong)&this->_padding_ + 3) & 0x7f;
    }
  }
  *(byte *)((longlong)&this->_padding_ + 3) = bVar8;
  if (param_1->bCastModulatedShadows == 0) {
LAB_1478a70fd:
    bVar8 = 0;
  }
  else {
    if (this_00 != (FSceneInterface *)0x0) {
      FSceneInterface::GetShaderPlatform(this_00);
      if ((FReadOnlyCVARCache::bMobileDeferredShadingValue != false) &&
         (FReadOnlyCVARCache::bMobileHDR != false)) goto LAB_1478a70fd;
    }
    bVar8 = 0x40;
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xbf;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | bVar8;
  fVar14 = FLinearColor::sRGBToLinearTable[(param_1->ModulatedShadowColor).field0_0x0._s_0.G];
  fVar2 = FLinearColor::sRGBToLinearTable[(param_1->ModulatedShadowColor).field0_0x0._s_0.B];
  fVar13 = (float)(param_1->ModulatedShadowColor).field0_0x0._s_0.A * __real_3b808081;
  *(float *)&this->_padding_ =
       FLinearColor::sRGBToLinearTable[(param_1->ModulatedShadowColor).field0_0x0._s_0.R];
  *(float *)((longlong)&this->_padding_ + 4) = fVar14;
  *(float *)&this->_padding_ = fVar2;
  *(float *)((longlong)&this->_padding_ + 4) = fVar13;
  *(float *)&this->_padding_ = param_1->ShadowAmount;
  return this;
}

// ComputeAccumulatedScale @ 1478bbef0

float __cdecl
FDirectionalLightSceneProxy::ComputeAccumulatedScale(float param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
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
  
  fVar3 = 0.0;
  if (0 < param_2) {
    iVar1 = 0;
    fVar12 = 0.0;
    fVar11 = __real_3f800000;
    if (7 < param_3) {
      iVar2 = 2;
      do {
        if (iVar1 < param_2) {
          fVar3 = fVar3 + fVar11;
        }
        fVar4 = fVar11 * param_1;
        if (iVar2 + -1 < param_2) {
          fVar3 = fVar3 + fVar4;
        }
        fVar5 = fVar4 * param_1;
        if (iVar2 < param_2) {
          fVar3 = fVar3 + fVar5;
        }
        fVar6 = fVar5 * param_1;
        if (iVar2 + 1 < param_2) {
          fVar3 = fVar3 + fVar6;
        }
        fVar7 = fVar6 * param_1;
        if (iVar2 + 2 < param_2) {
          fVar3 = fVar3 + fVar7;
        }
        fVar8 = fVar7 * param_1;
        if (iVar2 + 3 < param_2) {
          fVar3 = fVar3 + fVar8;
        }
        fVar9 = fVar8 * param_1;
        if (iVar2 + 4 < param_2) {
          fVar3 = fVar3 + fVar9;
        }
        fVar10 = fVar9 * param_1;
        if (iVar2 + 5 < param_2) {
          fVar3 = fVar3 + fVar10;
        }
        iVar1 = iVar1 + 8;
        fVar12 = fVar12 + fVar11 + fVar4 + fVar5 + fVar6 + fVar7 + fVar8 + fVar9 + fVar10;
        iVar2 = iVar2 + 8;
        fVar11 = fVar10 * param_1;
      } while (iVar1 < param_3 + -7);
    }
    for (; iVar1 < param_3; iVar1 = iVar1 + 1) {
      if (iVar1 < param_2) {
        fVar3 = fVar3 + fVar11;
      }
      fVar12 = fVar12 + fVar11;
      fVar11 = fVar11 * param_1;
    }
    fVar3 = fVar3 / fVar12;
  }
  return fVar3;
}

// GetAtmosphereTransmittanceTowardSun @ 1478cf9e0

FLinearColor * __thiscall
FDirectionalLightSceneProxy::GetAtmosphereTransmittanceTowardSun
          (FDirectionalLightSceneProxy *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->TransmittanceTowardSun).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->TransmittanceTowardSun).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetCSMMaxDistance @ 1478d0160

float __thiscall
FDirectionalLightSceneProxy::GetCSMMaxDistance
          (FDirectionalLightSceneProxy *this,bool param_1,int param_2)

{
  code *pcVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  IConsoleManager *pIVar4;
  longlong *plVar5;
  TConsoleVariableData<float> *pTVar6;
  TConsoleVariableData<float> *pTVar7;
  float fVar8;
  float fVar9;
  
  pTVar7 = (TConsoleVariableData<float> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_float___cdecl_FDirectionalLightSceneProxy::GetCSMMaxDistance(bool,int)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_float___cdecl_FDirectionalLightSceneProxy::GetCSMMaxDistance(bool,int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_float___cdecl_FDirectionalLightSceneProxy::GetCSMMaxDistance(bool,int)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar4 = IConsoleManager::Get();
    plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"r.Shadow.DistanceScale",1)
    ;
    pTVar6 = pTVar7;
    if (plVar5 != (longlong *)0x0) {
      pTVar6 = (TConsoleVariableData<float> *)(**(code **)(*plVar5 + 0x70))(plVar5);
    }
    `private:_float___cdecl_FDirectionalLightSceneProxy::GetCSMMaxDistance(bool,int)const___ptr64'::
    __l2::CVar = pTVar6;
    _Init_thread_footer(&`private:_float___cdecl_FDirectionalLightSceneProxy::GetCSMMaxDistance(bool,int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = `private:_float___cdecl_FDirectionalLightSceneProxy::GetCSMMaxDistance(bool,int)const___ptr64'
           ::__l2::CVar;
  if (param_2 < 1) {
    fVar8 = 0.0;
  }
  else {
    bVar3 = IsInParallelRenderingThread();
    if ((!bVar3) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar3)) {
      pcVar1 = (code *)swi(3);
      fVar8 = (float)(*pcVar1)();
      return fVar8;
    }
    pTVar2 = CVarUnbuiltWholeSceneDynamicShadowRadius.Ref;
    fVar8 = pTVar6->ShadowedValue[1];
    if (__real_40000000 <= pTVar6->ShadowedValue[1]) {
      fVar8 = __real_40000000;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    if (param_1) {
      fVar9 = this->WholeSceneDynamicShadowRadius;
    }
    else {
      bVar3 = IsInParallelGameThread();
      if ((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) {
        pTVar7 = (TConsoleVariableData<float> *)&DAT_00000004;
      }
      fVar9 = *(float *)((longlong)pTVar7->ShadowedValue + (longlong)pTVar2->ShadowedValue);
    }
    fVar8 = fVar8 * fVar9;
  }
  return fVar8;
}

// GetCastCloudShadows @ 1478d02d0

bool __thiscall FDirectionalLightSceneProxy::GetCastCloudShadows(FDirectionalLightSceneProxy *this)

{
  return this->bCastCloudShadows;
}

// GetCastShadowsOnAtmosphere @ 1478d0300

bool __thiscall
FDirectionalLightSceneProxy::GetCastShadowsOnAtmosphere(FDirectionalLightSceneProxy *this)

{
  return this->bCastShadowsOnAtmosphere;
}

// GetCastShadowsOnClouds @ 1478d0330

bool __thiscall
FDirectionalLightSceneProxy::GetCastShadowsOnClouds(FDirectionalLightSceneProxy *this)

{
  return this->bCastShadowsOnClouds;
}

// GetCloudScatteredLuminanceScale @ 1478d0350

FLinearColor * __thiscall
FDirectionalLightSceneProxy::GetCloudScatteredLuminanceScale
          (FDirectionalLightSceneProxy *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->CloudScatteredLuminanceScale).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->CloudScatteredLuminanceScale).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetCloudShadowDepthBias @ 1478d0390

float __thiscall
FDirectionalLightSceneProxy::GetCloudShadowDepthBias(FDirectionalLightSceneProxy *this)

{
  return this->CloudShadowDepthBias;
}

// GetCloudShadowExtent @ 1478d03b0

float __thiscall
FDirectionalLightSceneProxy::GetCloudShadowExtent(FDirectionalLightSceneProxy *this)

{
  return this->CloudShadowExtent;
}

// GetCloudShadowMapResolutionScale @ 1478d03d0

float __thiscall
FDirectionalLightSceneProxy::GetCloudShadowMapResolutionScale(FDirectionalLightSceneProxy *this)

{
  return this->CloudShadowMapResolutionScale;
}

// GetCloudShadowOnAtmosphereStrength @ 1478d03f0

float __thiscall
FDirectionalLightSceneProxy::GetCloudShadowOnAtmosphereStrength(FDirectionalLightSceneProxy *this)

{
  return this->CloudShadowOnAtmosphereStrength;
}

// GetCloudShadowOnSurfaceStrength @ 1478d0410

float __thiscall
FDirectionalLightSceneProxy::GetCloudShadowOnSurfaceStrength(FDirectionalLightSceneProxy *this)

{
  return this->CloudShadowOnSurfaceStrength;
}

// GetCloudShadowRaySampleCountScale @ 1478d0430

float __thiscall
FDirectionalLightSceneProxy::GetCloudShadowRaySampleCountScale(FDirectionalLightSceneProxy *this)

{
  return this->CloudShadowRaySampleCountScale;
}

// GetCloudShadowStrength @ 1478d0450

float __thiscall
FDirectionalLightSceneProxy::GetCloudShadowStrength(FDirectionalLightSceneProxy *this)

{
  return this->CloudShadowStrength;
}

// GetDirectionalLightDistanceFadeParameters @ 1478d10d0

TVector2<double> * __thiscall
FDirectionalLightSceneProxy::GetDirectionalLightDistanceFadeParameters
          (FDirectionalLightSceneProxy *this,TVector2<double> *__return_storage_ptr__,Type param_1,
          bool param_2,int param_3)

{
  TConsoleVariableData<float> *pTVar1;
  TConsoleVariableData<float> *pTVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((this->_padding_ & 0x20000000) == 0) {
    fVar7 = GetCSMMaxDistance(this,param_2,param_3);
    cVar3 = (**(code **)(this->_padding_ + 0xf0))(this,param_1,param_2,param_3);
    if (cVar3 != '\0') {
      fVar7 = GetDistanceFieldShadowDistance(this);
    }
    pTVar1 = CVarFarShadowDistanceOverride.Ref;
    bVar4 = IsInParallelGameThread();
    lVar6 = 4;
    if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
      lVar5 = 0;
    }
    else {
      lVar5 = 4;
    }
    pTVar2 = CVarFarShadowDistanceOverride.Ref;
    if (*(float *)((longlong)pTVar1->ShadowedValue + lVar5) <= 0.0) {
      fVar9 = *(float *)&this->_padding_;
    }
    else {
      bVar4 = IsInParallelGameThread();
      if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
        fVar9 = pTVar2->ShadowedValue[0];
      }
      else {
        fVar9 = pTVar2->ShadowedValue[1];
      }
    }
    pTVar1 = CVarCSMShadowDistanceFadeoutMultiplier.Ref;
    if (fVar9 <= fVar7) {
      fVar9 = fVar7;
    }
    bVar4 = IsInParallelGameThread();
    if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
      lVar6 = 0;
    }
    fVar8 = *(float *)((longlong)pTVar1->ShadowedValue + lVar6) *
            this->ShadowDistanceFadeoutFraction * fVar9;
    fVar7 = fVar8;
    if (fVar8 <= __real_38d1b717) {
      fVar7 = __real_38d1b717;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(fVar9 - fVar8);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(__real_3f800000 / fVar7);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  return __return_storage_ptr__;
}

// GetDirectionalLightForwardShadingPriority @ 1478d1260

int __thiscall
FDirectionalLightSceneProxy::GetDirectionalLightForwardShadingPriority
          (FDirectionalLightSceneProxy *this)

{
  return this->ForwardShadingPriority;
}

// GetDistanceFieldShadowDistance @ 1478d1280

float __thiscall
FDirectionalLightSceneProxy::GetDistanceFieldShadowDistance(FDirectionalLightSceneProxy *this)

{
  code *pcVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  float fVar4;
  
  bVar3 = DoesProjectSupportDistanceFields();
  pTVar2 = CVarRTDFDistanceScale.Ref;
  if (!bVar3) {
    return 0.0;
  }
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  fVar4 = pTVar2->ShadowedValue[1];
  if (__real_461c4000 <= pTVar2->ShadowedValue[1]) {
    fVar4 = __real_461c4000;
  }
  if (fVar4 <= __real_38d1b717) {
    fVar4 = __real_38d1b717;
  }
  return fVar4 * this->DistanceFieldShadowDistance;
}

// GetLightPositionForLightShafts @ 1478d5580

TVector<double> * __thiscall
FDirectionalLightSceneProxy::GetLightPositionForLightShafts
          (FDirectionalLightSceneProxy *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (this->LightShaftOverrideDirection).field0_0x0._s_0.X;
  dVar1 = (this->LightShaftOverrideDirection).field0_0x0._s_0.Y;
  dVar2 = (this->LightShaftOverrideDirection).field0_0x0._s_0.Z;
  if (dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2 <= 0.0) {
    dVar1 = (double)this->_padding_;
    dVar2 = (double)this->_padding_;
    dVar3 = (double)this->_padding_;
  }
  else {
    dVar1 = (this->LightShaftOverrideDirection).field0_0x0._s_0.X;
    dVar2 = (this->LightShaftOverrideDirection).field0_0x0._s_0.Y;
    dVar3 = (this->LightShaftOverrideDirection).field0_0x0._s_0.Z;
  }
  dVar2 = dVar2 * __real_42a0000000000000;
  dVar3 = dVar3 * __real_42a0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (param_1->field0_0x0)._s_0.X - dVar1 * __real_42a0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y - dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z - dVar3;
  return __return_storage_ptr__;
}

// GetLightShaderParameters @ 1478d5660

void __thiscall
FDirectionalLightSceneProxy::GetLightShaderParameters
          (FDirectionalLightSceneProxy *this,FLightRenderParameters *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  undefined1 local_18 [16];
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_1->WorldPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_1->WorldPosition).field0_0x0._s_0.Y = (double)uVar4;
  uVar7 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  (param_1->WorldPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  param_1->InvRadius = 0.0;
  param_1->FalloffExponent = 0.0;
  puVar6 = (undefined8 *)(**(code **)(this->_padding_ + 0x138))(uVar7,local_18);
  uVar5 = __xmm_80000000000000008000000000000000;
  uVar4 = puVar6[1];
  *(undefined8 *)&(param_1->Color).field0_0x0 = *puVar6;
  *(undefined8 *)((longlong)&(param_1->Color).field0_0x0 + 8) = uVar4;
  lVar1 = this->_padding_;
  uVar9 = (uint)uVar5;
  uVar10 = (uint)((ulonglong)uVar5 >> 0x20);
  lVar2 = this->_padding_;
  (param_1->Direction).field0_0x0._s_0.X =
       (float)(double)CONCAT44((uint)((ulonglong)this->_padding_ >> 0x20) ^ uVar10,
                               (uint)this->_padding_ ^ uVar9);
  (param_1->Direction).field0_0x0._s_0.Y =
       (float)(double)CONCAT44((uint)((ulonglong)lVar1 >> 0x20) ^ uVar10,(uint)lVar1 ^ uVar9);
  (param_1->Direction).field0_0x0._s_0.Z =
       (float)(double)CONCAT44((uint)((ulonglong)lVar2 >> 0x20) ^ uVar10,(uint)lVar2 ^ uVar9);
  lVar1 = this->_padding_;
  lVar2 = this->_padding_;
  (param_1->Tangent).field0_0x0._s_0.X =
       (float)(double)CONCAT44((uint)((ulonglong)this->_padding_ >> 0x20) ^ uVar10,
                               (uint)this->_padding_ ^ uVar9);
  (param_1->Tangent).field0_0x0._s_0.Y =
       (float)(double)CONCAT44((uint)((ulonglong)lVar1 >> 0x20) ^ uVar10,(uint)lVar1 ^ uVar9);
  (param_1->Tangent).field0_0x0._s_0.Z =
       (float)(double)CONCAT44((uint)((ulonglong)lVar2 >> 0x20) ^ uVar10,(uint)lVar2 ^ uVar9);
  (param_1->SpotAngles).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  fVar8 = *(float *)&this->_padding_;
  if (__real_3f800000 <= *(float *)&this->_padding_) {
    fVar8 = __real_3f800000;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  param_1->SpecularScale = fVar8;
  fVar8 = *(float *)((longlong)&this->_padding_ + 4);
  if (__real_3f800000 <= fVar8) {
    fVar8 = __real_3f800000;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  param_1->DiffuseScale = fVar8;
  fVar8 = sinf(this->LightSourceAngle * __real_3c0efa35);
  param_1->SourceRadius = fVar8;
  fVar8 = sinf(this->LightSourceSoftAngle * __real_3c0efa35);
  param_1->SourceLength = 0.0;
  param_1->RectLightBarnCosAngle = 0.0;
  param_1->SoftSourceRadius = fVar8;
  param_1->RectLightBarnLength = -2.0;
  (param_1->RectLightAtlasUVOffset).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  (param_1->RectLightAtlasUVScale).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  param_1->RectLightAtlasMaxLevel = 32.0;
  param_1->IESAtlasIndex = -1.0;
  param_1->LightFunctionAtlasLightIndex = (uint)*(byte *)((longlong)&this->_padding_ + 6);
  bVar3 = *(byte *)((longlong)&this->_padding_ + 3);
  param_1->InverseExposureBlend = 0.0;
  param_1->bAffectsTranslucentLighting = bVar3 >> 2 & 1;
  return;
}

// GetLightShaftOcclusionParameters @ 1478d59c0

bool __thiscall
FDirectionalLightSceneProxy::GetLightShaftOcclusionParameters
          (FDirectionalLightSceneProxy *this,float *param_1,float *param_2)

{
  *param_1 = this->OcclusionMaskDarkness;
  *param_2 = this->OcclusionDepthRange;
  return this->bEnableLightShaftOcclusion;
}

// GetLightSourceAngle @ 1478d5a00

float __thiscall FDirectionalLightSceneProxy::GetLightSourceAngle(FDirectionalLightSceneProxy *this)

{
  return this->LightSourceAngle;
}

// GetNumShadowMappedCascades @ 1478d6720

uint __thiscall
FDirectionalLightSceneProxy::GetNumShadowMappedCascades
          (FDirectionalLightSceneProxy *this,uint param_1,bool param_2)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  IConsoleManager *pIVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  
  pTVar1 = CVarUnbuiltNumWholeSceneDynamicShadowCascades.Ref;
  uVar8 = 0;
  uVar6 = this->DynamicShadowCascades;
  if (param_2) goto LAB_1478d67c5;
  bVar2 = IsInParallelGameThread();
  if (bVar2) {
LAB_1478d676b:
    lVar7 = 0;
  }
  else {
    bVar2 = IsInGameThread();
    lVar7 = 4;
    if (bVar2) goto LAB_1478d676b;
  }
  uVar6 = *(uint *)((longlong)pTVar1->ShadowedValue + lVar7);
  if ((int)uVar6 < 0) {
    uVar6 = uVar8;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_unsigned_int___cdecl_FDirectionalLightSceneProxy::GetNumShadowMappedCascades(unsigned_int,bool)const___ptr64'
      ::__l5::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_unsigned_int___cdecl_FDirectionalLightSceneProxy::GetNumShadowMappedCascades(unsigned_int,bool)const___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
    if (`private:_unsigned_int___cdecl_FDirectionalLightSceneProxy::GetNumShadowMappedCascades(unsigned_int,bool)const___ptr64'
        ::__l5::_thread_safe_static_guard_0__ == -1) {
      pIVar5 = IConsoleManager::Get();
      `private:_unsigned_int___cdecl_FDirectionalLightSceneProxy::GetNumShadowMappedCascades(unsigned_int,bool)const___ptr64'
      ::__l5::CVarUnbuiltPreviewShadowsInGame =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar5 + 0xc0))(pIVar5,L"r.Shadow.UnbuiltPreviewInGame",1);
      _Init_thread_footer(&`private:_unsigned_int___cdecl_FDirectionalLightSceneProxy::GetNumShadowMappedCascades(unsigned_int,bool)const___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
  }
  iVar4 = (**(code **)(*(longlong *)
                        `private:_unsigned_int___cdecl_FDirectionalLightSceneProxy::GetNumShadowMappedCascades(unsigned_int,bool)const___ptr64'
                        ::__l5::CVarUnbuiltPreviewShadowsInGame + 200))();
  if (iVar4 == 0) {
    cVar3 = (**(code **)(*(longlong *)this->_padding_ + 0x4b8))();
    if (cVar3 == '\0') {
      uVar6 = uVar8;
    }
  }
LAB_1478d67c5:
  fVar9 = GetCSMMaxDistance(this,param_2,param_1);
  if (0.0 < fVar9) {
    uVar8 = uVar6;
  }
  if ((int)uVar8 < (int)param_1) {
    param_1 = uVar8;
  }
  return param_1;
}

// GetNumViewDependentWholeSceneShadows @ 1478d6850

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall
FDirectionalLightSceneProxy::GetNumViewDependentWholeSceneShadows
          (FDirectionalLightSceneProxy *this,FSceneView *param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  
  pTVar3 = CVarMaxNumFarShadowCascades.Ref;
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      lVar6 = 4;
      goto LAB_1478d689a;
    }
  }
  lVar6 = 0;
LAB_1478d689a:
  uVar2 = *(uint *)((longlong)pTVar3->ShadowedValue + lVar6);
  uVar5 = GetNumShadowMappedCascades(this,param_1->MaxShadowCascades,param_2);
  if (uVar2 < uVar1) {
    uVar1 = uVar2;
  }
  return uVar5 + uVar1;
}

// GetOuterSpaceIlluminance @ 1478d6960

FLinearColor * __thiscall
FDirectionalLightSceneProxy::GetOuterSpaceIlluminance
          (FDirectionalLightSceneProxy *this,FLinearColor *__return_storage_ptr__)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  *(longlong *)&__return_storage_ptr__->field0_0x0 = this->_padding_;
  *(longlong *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = lVar1;
  return __return_storage_ptr__;
}

// GetOuterSpaceLuminance @ 1478d69a0

FLinearColor * __thiscall
FDirectionalLightSceneProxy::GetOuterSpaceLuminance
          (FDirectionalLightSceneProxy *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->SunDiscOuterSpaceLuminance).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->SunDiscOuterSpaceLuminance).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetPerObjectProjectedShadowInitializer @ 1478d7930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FDirectionalLightSceneProxy::GetPerObjectProjectedShadowInitializer
          (FDirectionalLightSceneProxy *this,TBoxSphereBounds<double,double> *param_1,
          FPerObjectProjectedShadowInitializer *param_2)

{
  float fVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  TConsoleVariableData<float> *pTVar9;
  TConsoleVariableData<float> *pTVar10;
  bool bVar11;
  undefined1 uVar12;
  TInverseRotationMatrix<double> *pTVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  undefined1 auStackY_158 [32];
  TVector<double>_u_0 local_128;
  double local_110;
  double local_108;
  double dStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  TRotator<double> local_d0;
  TInverseRotationMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar2 = *(undefined8 *)&(param_1->Origin).field0_0x0;
  uVar6 = *(uint *)((longlong)&(param_1->Origin).field0_0x0 + 8);
  uVar14 = *(uint *)((longlong)&(param_1->Origin).field0_0x0 + 0xc);
  uVar15 = *(uint *)((longlong)&(param_1->Origin).field0_0x0 + 0x10);
  uVar16 = *(uint *)((longlong)&(param_1->Origin).field0_0x0 + 0x14);
  *(ulonglong *)param_2 =
       CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_,
                (uint)uVar2 ^ (uint)__xmm_80000000000000008000000000000000);
  uVar14 = uVar14 ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar15 = uVar15 ^ _UNK_15066df78;
  uVar16 = uVar16 ^ _UNK_15066df7c;
  *(uint *)&param_2->field_0x8 = uVar6 ^ (uint)__xmm_80000000000000008000000000000000;
  *(uint *)&param_2->field_0xc = uVar14;
  *(uint *)&param_2->field_0x10 = uVar15;
  *(uint *)&param_2->field_0x14 = uVar16;
  dVar5 = __real_3ff0000000000000;
  local_128._s_0.X = (double)this->_padding_;
  local_128._s_0.Y = (double)this->_padding_;
  local_128._s_0.Z = (double)this->_padding_;
  dVar17 = local_128._s_0.Y * local_128._s_0.Y + local_128._s_0.X * local_128._s_0.X +
           local_128._s_0.Z * local_128._s_0.Z;
  if (dVar17 != __real_3ff0000000000000) {
    if (dVar17 < __real_3e45798ee0000000) {
      local_128._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_128._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_128._s_0.Z =
           (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
    }
    else {
      local_110 = __real_3ff0000000000000 / SQRT(dVar17);
      local_128._s_0.X = local_128._s_0.X * local_110;
      local_128._s_0.Y = local_128._s_0.Y * local_110;
      local_128._s_0.Z = local_128._s_0.Z * local_110;
    }
  }
  UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_128._s_0,&local_d0);
  pTVar13 = UE::Math::TInverseRotationMatrix<double>::TInverseRotationMatrix<double>
                      (&local_b8,&local_d0);
  uVar2 = *(undefined8 *)&pTVar13->field_0x8;
  *(undefined8 *)&param_2->field_0x20 = *(undefined8 *)pTVar13;
  *(undefined8 *)&param_2->field_0x28 = uVar2;
  uVar2 = *(undefined8 *)&pTVar13->field_0x18;
  *(undefined8 *)&param_2->field_0x30 = *(undefined8 *)&pTVar13->field_0x10;
  *(undefined8 *)&param_2->field_0x38 = uVar2;
  uVar2 = *(undefined8 *)&pTVar13->field_0x28;
  *(undefined8 *)&param_2->field_0x40 = *(undefined8 *)&pTVar13->field_0x20;
  *(undefined8 *)&param_2->field_0x48 = uVar2;
  uVar2 = *(undefined8 *)&pTVar13->field_0x38;
  *(undefined8 *)&param_2->field_0x50 = *(undefined8 *)&pTVar13->field_0x30;
  *(undefined8 *)&param_2->field_0x58 = uVar2;
  uVar2 = *(undefined8 *)&pTVar13->field_0x48;
  *(undefined8 *)&param_2->field_0x60 = *(undefined8 *)&pTVar13->field_0x40;
  *(undefined8 *)&param_2->field_0x68 = uVar2;
  uVar2 = *(undefined8 *)&pTVar13->field_0x58;
  *(undefined8 *)&param_2->field_0x70 = *(undefined8 *)&pTVar13->field_0x50;
  *(undefined8 *)&param_2->field_0x78 = uVar2;
  uVar2 = *(undefined8 *)&pTVar13->field_0x68;
  *(undefined8 *)&param_2->field_0x80 = *(undefined8 *)&pTVar13->field_0x60;
  *(undefined8 *)&param_2->field_0x88 = uVar2;
  uVar2 = *(undefined8 *)&pTVar13->field_0x78;
  *(undefined8 *)&param_2->field_0x90 = *(undefined8 *)&pTVar13->field_0x70;
  *(undefined8 *)&param_2->field_0x98 = uVar2;
  dVar5 = dVar5 / param_1->SphereRadius;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])&param_2->field_0xa0 = auVar4;
  uStack_f4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uStack_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  dStack_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar7 = *(undefined8 *)&(param_1->BoxExtent).field0_0x0;
  uVar8 = *(undefined8 *)((longlong)&(param_1->BoxExtent).field0_0x0 + 8);
  uVar2 = *(undefined8 *)((longlong)&(param_1->BoxExtent).field0_0x0 + 0x10);
  local_d8 = param_1->SphereRadius;
  local_f0._0_4_ = (undefined4)uVar7;
  local_f0._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  *(double *)&param_2->field_0xb0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(double *)&param_2->field_0xb8 = dStack_100;
  uStack_e8._0_4_ = (undefined4)uVar8;
  uStack_e8._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)&param_2->field_0xc0 = uStack_f8;
  *(undefined4 *)&param_2->field_0xc4 = uStack_f4;
  *(undefined4 *)&param_2->field_0xc8 = (undefined4)local_f0;
  *(undefined4 *)&param_2->field_0xcc = local_f0._4_4_;
  uStack_e0 = (undefined4)uVar2;
  uStack_dc = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)&param_2->field_0xd0 = (undefined4)uStack_e8;
  *(undefined4 *)&param_2->field_0xd4 = uStack_e8._4_4_;
  *(undefined4 *)&param_2->field_0xd8 = uStack_e0;
  *(undefined4 *)&param_2->field_0xdc = uStack_dc;
  *(double *)&param_2->field_0xe0 = local_d8;
  *(undefined8 *)&param_2->field_0xf0 = 0;
  *(undefined8 *)&param_2->field_0xf8 = 0;
  *(undefined8 *)&param_2->field_0x100 = 0;
  *(undefined8 *)&param_2->field_0x108 = 0x3ff0000000000000;
  *(undefined4 *)&param_2->field_0x110 = 0xc9800000;
  pTVar10 = CVarPerObjectCastDistanceMin.Ref;
  local_f0 = uVar7;
  uStack_e8 = uVar8;
  bVar11 = IsInParallelRenderingThread();
  if ((!bVar11) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar11)) {
    pcVar3 = (code *)swi(3);
    uVar12 = (*pcVar3)();
    return (bool)uVar12;
  }
  pTVar9 = CVarPerObjectCastDistanceRadiusScale.Ref;
  fVar1 = pTVar10->ShadowedValue[1];
  bVar11 = IsInParallelRenderingThread();
  if ((!bVar11) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar11)) {
    pcVar3 = (code *)swi(3);
    uVar12 = (*pcVar3)();
    return (bool)uVar12;
  }
  dVar5 = (double)pTVar9->ShadowedValue[1] * param_1->SphereRadius;
  if (__real_42a0000000000000 <= dVar5) {
    dVar5 = __real_42a0000000000000;
  }
  if (dVar5 <= (double)fVar1) {
    dVar5 = (double)fVar1;
  }
  *(float *)&param_2->field_0x114 = (float)dVar5;
  return true;
}

// GetPerPixelTransmittanceEnabled @ 1478d7d00

bool __thiscall
FDirectionalLightSceneProxy::GetPerPixelTransmittanceEnabled(FDirectionalLightSceneProxy *this)

{
  return this->bPerPixelTransmittanceEnabled;
}

// GetShadowSourceAngleFactor @ 1478da520

float __thiscall
FDirectionalLightSceneProxy::GetShadowSourceAngleFactor(FDirectionalLightSceneProxy *this)

{
  return this->ShadowSourceAngleFactor;
}

// GetShadowSplitBounds @ 1478da540

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSphere<double> * __thiscall
FDirectionalLightSceneProxy::GetShadowSplitBounds
          (FDirectionalLightSceneProxy *this,TSphere<double> *__return_storage_ptr__,
          FSceneView *param_1,int param_2,bool param_3,FShadowCascadeSettings *param_4)

{
  code *pcVar1;
  uint uVar2;
  TConsoleVariableData<float> *pTVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  IConsoleManager *pIVar9;
  longlong *plVar10;
  TConsoleVariableData<float> *pTVar11;
  TSphere<double> *pTVar12;
  longlong lVar13;
  TConsoleVariableData<int> *pTVar14;
  ulonglong uVar15;
  longlong lVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  TVector<double>_u_0 local_c8 [5];
  
  uVar6 = GetNumShadowMappedCascades(this,param_1->MaxShadowCascades,param_3);
  cVar4 = (**(code **)(this->_padding_ + 0xf0))
                    (this,param_1->FeatureLevel,param_3,param_1->MaxShadowCascades);
  uVar7 = (**(code **)(this->_padding_ + 0xb8))(this,param_1,param_3);
  uVar8 = (cVar4 != '\0') + uVar6;
  if (uVar8 < uVar7) {
    uVar8 = uVar7;
  }
  bVar17 = param_2 == -1;
  uVar2 = param_2;
  if (bVar17) {
    uVar2 = uVar6;
  }
  fVar18 = GetSplitDistance(this,param_1,uVar2,param_3,bVar17);
  fVar19 = GetSplitDistance(this,param_1,uVar2 + 1,param_3,bVar17);
  uVar15 = (ulonglong)_tls_index;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0x9d4c) <
      `private:_float___cdecl_FDirectionalLightSceneProxy::GetShadowTransitionScale(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_float___cdecl_FDirectionalLightSceneProxy::GetShadowTransitionScale(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_float___cdecl_FDirectionalLightSceneProxy::GetShadowTransitionScale(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pIVar9 = IConsoleManager::Get();
      plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0xc0))(pIVar9);
      pTVar11 = (TConsoleVariableData<float> *)0x0;
      if (plVar10 != (longlong *)0x0) {
        pTVar11 = (TConsoleVariableData<float> *)(**(code **)(*plVar10 + 0x70))(plVar10);
      }
      `private:_float___cdecl_FDirectionalLightSceneProxy::GetShadowTransitionScale(void)const___ptr64'
      ::__l2::CVar = pTVar11;
      _Init_thread_footer(&`private:_float___cdecl_FDirectionalLightSceneProxy::GetShadowTransitionScale(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar11 = `private:_float___cdecl_FDirectionalLightSceneProxy::GetShadowTransitionScale(void)const___ptr64'
            ::__l2::CVar;
  bVar5 = IsInParallelRenderingThread();
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pTVar12 = (TSphere<double> *)(*pcVar1)();
      return pTVar12;
    }
  }
  pTVar3 = CVarRtdfFarTransitionScale.Ref;
  fVar22 = pTVar11->ShadowedValue[1];
  if (__real_40000000 <= pTVar11->ShadowedValue[1]) {
    fVar22 = __real_40000000;
  }
  lVar16 = 4;
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  fVar22 = fVar22 * this->CascadeTransitionFraction;
  fVar21 = (fVar19 - fVar18) * fVar22;
  if ((int)uVar2 < (int)(uVar8 - 1)) {
    fVar23 = fVar19 + fVar21;
  }
  else {
    fVar23 = fVar19;
    if ((!param_3) || ((this->_padding_ & 8) == 0)) {
      if (param_2 == -1) {
        bVar5 = IsInParallelGameThread();
        if (bVar5) {
LAB_1478da77d:
          lVar13 = 0;
        }
        else {
          bVar5 = IsInGameThread();
          if (bVar5) goto LAB_1478da77d;
          lVar13 = 4;
        }
        fVar20 = *(float *)((longlong)pTVar3->ShadowedValue + lVar13);
        if (__real_3f800000 <= fVar20) {
          fVar20 = __real_3f800000;
        }
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        fVar21 = fVar21 * fVar20;
      }
      fVar19 = fVar19 - fVar21;
    }
  }
  if (param_4 != (FShadowCascadeSettings *)0x0) {
    param_4->SplitFarFadeRegion = fVar21;
    param_4->SplitNearFadeRegion = 0.0;
    if (uVar2 != 0) {
      fVar21 = GetSplitDistance(this,param_1,uVar2 - 1,param_3,bVar17);
      fVar20 = GetSplitDistance(this,param_1,uVar2,param_3,bVar17);
      param_4->SplitNearFadeRegion = (fVar20 - fVar21) * fVar22;
    }
    param_4->SplitFar = fVar23;
    param_4->SplitNear = fVar18;
    param_4->FadePlaneOffset = fVar19;
    param_4->FadePlaneLength = fVar23 - fVar19;
    param_4->CascadeBiasDistribution = this->ShadowCascadeBiasDistribution;
    param_4->ShadowSplitIndex = uVar2;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0x9d4c) <
      `private:_virtual_struct_UE::Math::TSphere<double>___cdecl_FDirectionalLightSceneProxy::GetShadowSplitBounds(FSceneView_const&___ptr64,int,bool,FShadowCascadeSettings*___ptr64)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_virtual_struct_UE::Math::TSphere<double>___cdecl_FDirectionalLightSceneProxy::GetShadowSplitBounds(FSceneView_const&___ptr64,int,bool,FShadowCascadeSettings*___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_virtual_struct_UE::Math::TSphere<double>___cdecl_FDirectionalLightSceneProxy::GetShadowSplitBounds(FSceneView_const&___ptr64,int,bool,FShadowCascadeSettings*___ptr64)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pIVar9 = IConsoleManager::Get();
      plVar10 = (longlong *)
                (**(code **)((longlong)*pIVar9 + 0xc0))
                          (pIVar9,L"r.SkyAtmosphere.SampleLightShadowmap");
      pTVar14 = (TConsoleVariableData<int> *)0x0;
      if (plVar10 != (longlong *)0x0) {
        pTVar14 = (TConsoleVariableData<int> *)(**(code **)(*plVar10 + 0x68))(plVar10);
      }
      `private:_virtual_struct_UE::Math::TSphere<double>___cdecl_FDirectionalLightSceneProxy::GetShadowSplitBounds(FSceneView_const&___ptr64,int,bool,FShadowCascadeSettings*___ptr64)const___ptr64'
      ::__l2::CVarSkyAtmosphereSampleLightShadowmap = pTVar14;
      _Init_thread_footer(&`private:_virtual_struct_UE::Math::TSphere<double>___cdecl_FDirectionalLightSceneProxy::GetShadowSplitBounds(FSceneView_const&___ptr64,int,bool,FShadowCascadeSettings*___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar14 = `private:_virtual_struct_UE::Math::TSphere<double>___cdecl_FDirectionalLightSceneProxy::GetShadowSplitBounds(FSceneView_const&___ptr64,int,bool,FShadowCascadeSettings*___ptr64)const___ptr64'
            ::__l2::CVarSkyAtmosphereSampleLightShadowmap;
  if (((this->bCastShadowsOnClouds == 0 && this->bCastShadowsOnAtmosphere == 0) ||
      (uVar2 + 1 != uVar7)) ||
     (`private:_virtual_struct_UE::Math::TSphere<double>___cdecl_FDirectionalLightSceneProxy::GetShadowSplitBounds(FSceneView_const&___ptr64,int,bool,FShadowCascadeSettings*___ptr64)const___ptr64'
      ::__l2::CVarSkyAtmosphereSampleLightShadowmap == (TConsoleVariableData<int> *)0x0))
  goto LAB_1478da902;
  bVar5 = IsInParallelGameThread();
  if (bVar5) {
LAB_1478da8dd:
    lVar16 = 0;
  }
  else {
    bVar5 = IsInGameThread();
    if (bVar5) goto LAB_1478da8dd;
  }
  if (*(int *)((longlong)pTVar14->ShadowedValue + lVar16) != 0) {
    fVar18 = GetSplitDistance(this,param_1,0,param_3,bVar17);
  }
LAB_1478da902:
  local_c8[0]._0_8_ = (param_1->ViewMatrices).ViewOrigin.field0_0x0._s_0.X;
  local_c8[0]._8_8_ = (param_1->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
  local_c8[0]._16_8_ = (param_1->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z;
  GetShadowSplitBoundsDepthRange
            (this,__return_storage_ptr__,param_1,(TVector<double> *)&local_c8[0]._s_0,fVar18,fVar23,
             param_4);
  return __return_storage_ptr__;
}

// GetShadowSplitBoundsDepthRange @ 1478da9c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSphere<double> * __thiscall
FDirectionalLightSceneProxy::GetShadowSplitBoundsDepthRange
          (FDirectionalLightSceneProxy *this,TSphere<double> *__return_storage_ptr__,
          FSceneView *param_1,TVector<double> *param_2,float param_3,float param_4,
          FShadowCascadeSettings *param_5)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  FViewMatrices *pFVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  undefined4 uVar25;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  double dVar26;
  double dVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_188;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  
  pFVar13 = FSceneView::GetShadowViewMatrices(param_1);
  fVar17 = __real_3f800000;
  dVar4 = __real_3ff0000000000000;
  uVar28 = (uint)__xmm_80000000000000008000000000000000;
  uVar29 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  pdVar1 = (pFVar13->ProjectionMatrix).M[3] + 3;
  dVar23 = (pFVar13->ViewMatrix).M[0][2];
  local_1a8._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)this->_padding_ >> 0x20) ^ uVar29,
                        (uint)this->_padding_ ^ uVar28);
  dVar19 = (pFVar13->ProjectionNoAAMatrix).M[1][1];
  dVar2 = (pFVar13->ViewMatrix).M[1][2];
  dVar3 = (pFVar13->ViewMatrix).M[2][2];
  local_1a8._s_0.X =
       (double)CONCAT44((uint)((ulonglong)this->_padding_ >> 0x20) ^ uVar29,
                        (uint)this->_padding_ ^ uVar28);
  local_1a8._s_0.Y =
       (double)CONCAT44((uint)((ulonglong)this->_padding_ >> 0x20) ^ uVar29,
                        (uint)this->_padding_ ^ uVar28);
  dVar18 = __real_3ff0000000000000 / (pFVar13->ProjectionNoAAMatrix).M[0][0];
  if (__real_3ff0000000000000 < *pdVar1 || __real_3ff0000000000000 == *pdVar1) {
    uVar14 = (undefined4)__real_3fe921fb60000000;
    uVar25 = (undefined4)((ulonglong)__real_3fe921fb60000000 >> 0x20);
    fVar15 = atanf(__real_3f800000 / (float)(dVar19 * dVar18));
    dVar19 = (double)fVar15;
  }
  else {
    dVar18 = atan(dVar18);
    uVar14 = SUB84(dVar18,0);
    uVar25 = (undefined4)((ulonglong)dVar18 >> 0x20);
    dVar19 = atan(dVar4 / dVar19);
  }
  fVar34 = (float)(pFVar13->ProjectionNoAAMatrix).M[2][0];
  fVar35 = (float)(pFVar13->ProjectionNoAAMatrix).M[2][1];
  fVar15 = tanf((float)(double)CONCAT44(uVar25,uVar14));
  fVar36 = fVar15 * param_3;
  fVar16 = tanf((float)dVar19);
  fVar30 = fVar16 * param_3;
  dVar19 = (pFVar13->ViewMatrix).M[2][1];
  dVar4 = (pFVar13->ViewMatrix).M[0][1];
  dVar18 = (pFVar13->ViewMatrix).M[0][0];
  dVar11 = (double)(float)((uint)fVar36 ^ __xmm_80000000800000008000000080000000);
  dVar5 = (pFVar13->ViewMatrix).M[1][0];
  dVar33 = (pFVar13->ViewMatrix).M[2][0];
  dVar6 = (pFVar13->ViewMatrix).M[1][1];
  dVar8 = (double)(fVar34 + fVar17);
  dVar12 = (double)(fVar17 - fVar34);
  dVar31 = (double)(fVar35 + fVar17);
  dVar9 = (double)(float)((uint)fVar30 ^ __xmm_80000000800000008000000080000000);
  dVar20 = (double)fVar30;
  fVar15 = fVar15 * param_4;
  dVar32 = (double)fVar36;
  local_e8 = (double)(__real_3f800000 - fVar35);
  fVar16 = fVar16 * param_4;
  local_140 = dVar4 * dVar9 * dVar31;
  dVar26 = (double)(float)((uint)fVar15 ^ __xmm_80000000800000008000000080000000);
  local_138 = dVar6 * dVar9 * dVar31;
  local_130 = dVar19 * dVar9 * dVar31;
  dVar10 = dVar4 * dVar20 * local_e8;
  dVar9 = dVar6 * dVar20 * local_e8;
  dVar6 = dVar19 * dVar20 * local_e8;
  dVar19 = (pFVar13->ViewMatrix).M[1][1];
  dVar21 = (double)(float)((uint)fVar16 ^ __xmm_80000000800000008000000080000000);
  dVar20 = (double)fVar15;
  dVar27 = dVar4 * dVar21 * dVar31;
  local_d8 = dVar19 * dVar21 * dVar31;
  dVar22 = (double)fVar16;
  dVar31 = (pFVar13->ViewMatrix).M[2][1] * dVar21 * dVar31;
  dVar21 = dVar19 * dVar22 * local_e8;
  local_f8 = dVar4 * dVar22 * local_e8;
  local_e8 = (pFVar13->ViewMatrix).M[2][1] * dVar22 * local_e8;
  dVar19 = (double)param_3;
  local_158 = dVar19 * dVar23 + (param_2->field0_0x0)._s_0.X;
  local_150 = dVar19 * dVar2 + (param_2->field0_0x0)._s_0.Y;
  local_148 = dVar19 * dVar3 + (param_2->field0_0x0)._s_0.Z;
  local_170 = dVar18 * dVar32 * dVar12 + local_158;
  local_168 = dVar5 * dVar32 * dVar12 + local_150;
  dVar19 = dVar33 * dVar32 * dVar12 + local_148;
  local_188._s_0.X = local_170 + dVar10;
  local_188._s_0.Y = local_168 + dVar9;
  local_160 = dVar19 + local_130;
  local_188._s_0.Z = dVar19 + dVar6;
  local_170 = local_170 + local_140;
  local_168 = local_168 + local_138;
  local_158 = dVar18 * dVar11 * dVar8 + local_158;
  local_140 = local_158 + local_140;
  local_158 = local_158 + dVar10;
  local_148 = dVar33 * dVar11 * dVar8 + local_148;
  local_150 = dVar5 * dVar11 * dVar8 + local_150;
  local_138 = local_150 + local_138;
  local_150 = local_150 + dVar9;
  local_130 = local_148 + local_130;
  local_148 = local_148 + dVar6;
  dVar19 = (double)param_4;
  local_e0 = dVar19 * dVar23 + (param_2->field0_0x0)._s_0.X;
  local_d0 = dVar19 * dVar3 + (param_2->field0_0x0)._s_0.Z;
  local_f0 = dVar19 * dVar2 + (param_2->field0_0x0)._s_0.Y;
  local_128 = dVar18 * dVar20 * dVar12 + local_e0;
  local_118 = dVar33 * dVar20 * dVar12 + local_d0;
  local_120 = dVar5 * dVar20 * dVar12 + local_f0;
  local_110 = local_128 + dVar27;
  local_128 = local_128 + local_f8;
  local_100 = local_118 + dVar31;
  local_118 = local_118 + local_e8;
  local_108 = local_120 + local_d8;
  local_120 = local_120 + dVar21;
  local_e0 = dVar18 * dVar26 * dVar8 + local_e0;
  local_f0 = dVar5 * dVar26 * dVar8 + local_f0;
  local_d8 = local_f0 + local_d8;
  local_f0 = local_f0 + dVar21;
  local_d0 = dVar33 * dVar26 * dVar8 + local_d0;
  local_f8 = local_e0 + local_f8;
  local_e0 = local_e0 + dVar27;
  local_e8 = local_d0 + local_e8;
  local_d0 = local_d0 + dVar31;
  fVar17 = param_4 - (((fVar30 * fVar30 + fVar36 * fVar36) - (fVar16 * fVar16 + fVar15 * fVar15)) *
                      (__real_3f000000 / (param_4 - param_3)) +
                     (param_4 - param_3) * __real_3f000000);
  if (param_4 <= fVar17) {
    fVar17 = param_4;
  }
  if (fVar17 <= param_3) {
    fVar17 = param_3;
  }
  dVar19 = (double)fVar17;
  dVar2 = dVar2 * dVar19 + (param_2->field0_0x0)._s_0.Y;
  dVar4 = dVar23 * dVar19 + (param_2->field0_0x0)._s_0.X;
  dVar33 = dVar3 * dVar19 + (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = dVar4;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z = dVar33;
  dVar23 = (dVar2 - local_168) * (dVar2 - local_168) + (dVar4 - local_170) * (dVar4 - local_170) +
           (dVar33 - local_160) * (dVar33 - local_160);
  dVar19 = (dVar4 - local_158) * (dVar4 - local_158) + (dVar2 - local_150) * (dVar2 - local_150) +
           (dVar33 - local_148) * (dVar33 - local_148);
  dVar3 = (dVar2 - local_138) * (dVar2 - local_138) + (dVar4 - local_140) * (dVar4 - local_140) +
          (dVar33 - local_130) * (dVar33 - local_130);
  dVar5 = (dVar2 - local_120) * (dVar2 - local_120) + (dVar4 - local_128) * (dVar4 - local_128) +
          (dVar33 - local_118) * (dVar33 - local_118);
  dVar18 = (dVar2 - local_188._s_0.Y) * (dVar2 - local_188._s_0.Y) +
           (dVar4 - local_188._s_0.X) * (dVar4 - local_188._s_0.X) +
           (dVar33 - local_188._s_0.Z) * (dVar33 - local_188._s_0.Z);
  if (dVar18 <= 0.0) {
    dVar18 = 0.0;
  }
  if (dVar18 <= dVar23) {
    dVar18 = dVar23;
  }
  if (dVar18 <= dVar19) {
    dVar18 = dVar19;
  }
  if (dVar18 <= dVar3) {
    dVar18 = dVar3;
  }
  if (dVar18 <= dVar5) {
    dVar18 = dVar5;
  }
  dVar23 = (dVar4 - local_110) * (dVar4 - local_110) + (dVar2 - local_108) * (dVar2 - local_108) +
           (dVar33 - local_100) * (dVar33 - local_100);
  if (dVar18 <= dVar23) {
    dVar18 = dVar23;
  }
  dVar23 = (dVar4 - local_f8) * (dVar4 - local_f8) + (dVar2 - local_f0) * (dVar2 - local_f0) +
           (dVar33 - local_e8) * (dVar33 - local_e8);
  if (dVar18 <= dVar23) {
    dVar18 = dVar23;
  }
  auVar24._0_8_ =
       (dVar4 - local_e0) * (dVar4 - local_e0) + (dVar2 - local_d8) * (dVar2 - local_d8) +
       (dVar33 - local_d0) * (dVar33 - local_d0);
  auVar24._8_8_ = 0;
  if (dVar18 <= auVar24._0_8_) {
    dVar18 = auVar24._0_8_;
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar18;
  auVar24 = sqrtpd(auVar24,auVar7);
  dVar23 = auVar24._0_8_;
  if (auVar24._0_8_ <= __real_3ff0000000000000) {
    dVar23 = __real_3ff0000000000000;
  }
  __return_storage_ptr__->W = dVar23;
  if (param_5 != (FShadowCascadeSettings *)0x0) {
    ComputeShadowCullingVolume
              (param_1->bReverseCulling,(TVector<double> *)&local_188._s_0,
               (TVector<double> *)&local_1a8._s_0,&param_5->ShadowBoundsAccurate,
               &param_5->NearFrustumPlane,&param_5->FarFrustumPlane);
  }
  return __return_storage_ptr__;
}

// GetSplitDistance @ 1478dbc70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall
FDirectionalLightSceneProxy::GetSplitDistance
          (FDirectionalLightSceneProxy *this,FSceneView *param_1,uint param_2,bool param_3,
          bool param_4)

{
  uint uVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  TConsoleVariableData<float> *pTVar4;
  TConsoleVariableData<float> *pTVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar7 = GetNumShadowMappedCascades(this,param_1->MaxShadowCascades,param_3);
  fVar10 = GetCSMMaxDistance(this,param_3,param_1->MaxShadowCascades);
  pTVar3 = CVarMaxNumFarShadowCascades.Ref;
  fVar11 = param_1->NearClippingDistance;
  fVar12 = __real_40800000;
  if (param_3) {
    fVar12 = this->CascadeDistributionExponent;
  }
  if (uVar7 < param_2) {
    if (param_4) {
      if ((param_2 != uVar7 + 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("SplitIndex == NumNearCascades + 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\DirectionalLightComponent.cpp"
                             ,0x30d,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        fVar11 = (float)(*pcVar2)();
        return fVar11;
      }
      fVar10 = GetDistanceFieldShadowDistance(this);
    }
    else {
      uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
      bVar6 = IsInParallelGameThread();
      lVar9 = 4;
      if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
        lVar8 = 0;
      }
      else {
        lVar8 = 4;
      }
      pTVar4 = CVarFarShadowDistanceOverride.Ref;
      if (*(uint *)((longlong)pTVar3->ShadowedValue + lVar8) < uVar1) {
        uVar1 = *(uint *)((longlong)pTVar3->ShadowedValue + lVar8);
      }
      bVar6 = IsInParallelGameThread();
      if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
        lVar8 = 0;
      }
      else {
        lVar8 = 4;
      }
      pTVar5 = CVarFarShadowDistanceOverride.Ref;
      if (*(float *)((longlong)pTVar4->ShadowedValue + lVar8) <= 0.0) {
        fVar11 = *(float *)&this->_padding_;
      }
      else {
        bVar6 = IsInParallelGameThread();
        if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
          lVar9 = 0;
        }
        fVar11 = *(float *)((longlong)pTVar5->ShadowedValue + lVar9);
      }
      fVar12 = ComputeAccumulatedScale(fVar12,param_2 - uVar7,uVar1);
      fVar10 = fVar12 * (fVar11 - fVar10) + fVar10;
    }
  }
  else {
    fVar12 = ComputeAccumulatedScale(fVar12,param_2,uVar7);
    fVar10 = fVar12 * (fVar10 - fVar11) + fVar11;
  }
  return fVar10;
}

// GetSunIlluminanceAccountingForSkyAtmospherePerPixelTransmittance @ 1478dd6a0

FLinearColor * __thiscall
FDirectionalLightSceneProxy::GetSunIlluminanceAccountingForSkyAtmospherePerPixelTransmittance
          (FDirectionalLightSceneProxy *this,FLinearColor *__return_storage_ptr__)

{
  code *pcVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 local_48 [16];
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  if ((this->_padding_ & 0x8000000) == 0) {
    lVar2 = this->_padding_;
    *(longlong *)&__return_storage_ptr__->field0_0x0 = this->_padding_;
    *(longlong *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = lVar2;
    return __return_storage_ptr__;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x120);
  if (this->bPerPixelTransmittanceEnabled != false) {
    pfVar3 = (float *)(*pcVar1)();
    local_38._s_0.X = (double)*pfVar3;
    local_38._s_0.Y = (double)pfVar3[1];
    local_38._s_0.Z = (double)pfVar3[2];
    FLinearColor::FLinearColor(__return_storage_ptr__,(TVector<double> *)&local_38._s_0);
    return __return_storage_ptr__;
  }
  pfVar3 = (float *)(*pcVar1)(this,local_48);
  pfVar4 = (float *)(**(code **)(this->_padding_ + 0x128))(this,&local_38);
  local_20._s_0.X = (double)(*pfVar4 * *pfVar3);
  local_20._s_0.Y = (double)(pfVar4[1] * pfVar3[1]);
  local_20._s_0.Z = (double)(pfVar4[2] * pfVar3[2]);
  FLinearColor::FLinearColor(__return_storage_ptr__,(TVector<double> *)&local_20._s_0);
  return __return_storage_ptr__;
}

// GetSunIlluminanceOnGroundPostTransmittance @ 1478dd7d0

FLinearColor * __thiscall
FDirectionalLightSceneProxy::GetSunIlluminanceOnGroundPostTransmittance
          (FDirectionalLightSceneProxy *this,FLinearColor *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  pfVar7 = (float *)(**(code **)(this->_padding_ + 0x120))(this,local_28);
  pfVar8 = (float *)(**(code **)(this->_padding_ + 0x128))(this,local_18);
  fVar1 = pfVar7[1];
  fVar2 = pfVar7[2];
  fVar3 = pfVar7[3];
  fVar4 = pfVar8[1];
  fVar5 = pfVar8[2];
  fVar6 = pfVar8[3];
  (__return_storage_ptr__->field0_0x0)._s_0.R = *pfVar7 * *pfVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar1 * fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar2 * fVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar3 * fVar6;
  return __return_storage_ptr__;
}

// GetSunLightHalfApexAngleRadian @ 1478dd850

float __thiscall
FDirectionalLightSceneProxy::GetSunLightHalfApexAngleRadian(FDirectionalLightSceneProxy *this)

{
  return this->LightSourceAngle * __real_3c0efa36;
}

// GetTraceDistance @ 1478dd940

float __thiscall FDirectionalLightSceneProxy::GetTraceDistance(FDirectionalLightSceneProxy *this)

{
  return this->TraceDistance;
}

// GetUsePerPixelAtmosphereTransmittance @ 1478ddcc0

bool __thiscall
FDirectionalLightSceneProxy::GetUsePerPixelAtmosphereTransmittance
          (FDirectionalLightSceneProxy *this)

{
  return this->bPerPixelAtmosphereTransmittance;
}

// GetViewDependentWholeSceneProjectedShadowInitializer @ 1478de780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FDirectionalLightSceneProxy::GetViewDependentWholeSceneProjectedShadowInitializer
          (FDirectionalLightSceneProxy *this,FSceneView *param_1,int param_2,bool param_3,
          FWholeSceneProjectedShadowInitializer *param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  TInverseRotationMatrix<double> *pTVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar16 [16];
  undefined1 auStackY_1d8 [32];
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_190;
  ulonglong uStack_178;
  double local_128;
  TInverseRotationMatrix<double> local_118;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  GetShadowSplitBounds
            (this,(TSphere<double> *)&local_190._s_0,param_1,param_2,param_3,
             &param_4->CascadeSettings);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uStack_178;
  auVar16 = roundpd(unaff_XMM8,auVar16,2);
  uVar10 = GetNumShadowMappedCascades(this,param_1->MaxShadowCascades,param_3);
  uVar7 = _UNK_15066df7c;
  uVar6 = _UNK_15066df78;
  uVar14 = __xmm_80000000000000008000000000000000._4_4_;
  uVar13 = (uint)__xmm_80000000000000008000000000000000;
  dVar1 = auVar16._0_8_;
  dVar2 = dVar1 * ___real_3fe279a74b20663a;
  uVar12 = param_2;
  if (param_2 == -1) {
    uVar12 = uVar10;
  }
  (param_4->CascadeSettings).ShadowSplitIndex = uVar12;
  dVar4 = (double)(float)dVar2;
  *(uint *)param_4 = local_190._0_4_ ^ uVar13;
  *(uint *)&param_4->field_0x4 = local_190._4_4_ ^ uVar14;
  *(uint *)&param_4->field_0x8 = local_190._8_4_ ^ uVar6;
  *(uint *)&param_4->field_0xc = local_190._12_4_ ^ uVar7;
  *(ulonglong *)&param_4->field_0x10 =
       CONCAT44((uint)((ulonglong)local_190._16_8_ >> 0x20) ^ uVar14,
                SUB84(local_190._s_0.Z,0) ^ uVar13);
  dVar2 = __real_3ff0000000000000;
  local_1a8._s_0.X = (double)this->_padding_;
  local_1a8._s_0.Y = (double)this->_padding_;
  local_1a8._s_0.Z = (double)this->_padding_;
  dVar15 = local_1a8._s_0.Y * local_1a8._s_0.Y + local_1a8._s_0.X * local_1a8._s_0.X +
           local_1a8._s_0.Z * local_1a8._s_0.Z;
  if (dVar15 != __real_3ff0000000000000) {
    if (dVar15 < __real_3e45798ee0000000) {
      local_1a8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_1a8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1a8._s_0.Z =
           (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                            UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
    }
    else {
      dVar15 = __real_3ff0000000000000 / SQRT(dVar15);
      local_1a8._s_0.X = local_1a8._s_0.X * dVar15;
      local_1a8._s_0.Y = local_1a8._s_0.Y * dVar15;
      local_1a8._s_0.Z = local_1a8._s_0.Z * dVar15;
    }
  }
  local_128 = dVar4;
  UE::Math::TVector<double>::ToOrientationRotator
            ((TVector<double> *)&local_1a8._s_0,(TRotator<double> *)&local_190._s_0);
  pTVar11 = UE::Math::TInverseRotationMatrix<double>::TInverseRotationMatrix<double>
                      (&local_118,(TRotator<double> *)&local_190._s_0);
  dVar2 = dVar2 / dVar1;
  uVar5 = *(undefined8 *)&pTVar11->field_0x8;
  *(undefined8 *)&param_4->field_0x20 = *(undefined8 *)pTVar11;
  *(undefined8 *)&param_4->field_0x28 = uVar5;
  uVar5 = *(undefined8 *)&pTVar11->field_0x18;
  *(undefined8 *)&param_4->field_0x30 = *(undefined8 *)&pTVar11->field_0x10;
  *(undefined8 *)&param_4->field_0x38 = uVar5;
  uVar5 = *(undefined8 *)&pTVar11->field_0x28;
  *(undefined8 *)&param_4->field_0x40 = *(undefined8 *)&pTVar11->field_0x20;
  *(undefined8 *)&param_4->field_0x48 = uVar5;
  uVar5 = *(undefined8 *)&pTVar11->field_0x38;
  *(undefined8 *)&param_4->field_0x50 = *(undefined8 *)&pTVar11->field_0x30;
  *(undefined8 *)&param_4->field_0x58 = uVar5;
  uVar5 = *(undefined8 *)&pTVar11->field_0x48;
  *(undefined8 *)&param_4->field_0x60 = *(undefined8 *)&pTVar11->field_0x40;
  *(undefined8 *)&param_4->field_0x68 = uVar5;
  uVar5 = *(undefined8 *)&pTVar11->field_0x58;
  *(undefined8 *)&param_4->field_0x70 = *(undefined8 *)&pTVar11->field_0x50;
  *(undefined8 *)&param_4->field_0x78 = uVar5;
  uVar5 = *(undefined8 *)&pTVar11->field_0x68;
  *(undefined8 *)&param_4->field_0x80 = *(undefined8 *)&pTVar11->field_0x60;
  *(undefined8 *)&param_4->field_0x88 = uVar5;
  uVar5 = *(undefined8 *)&pTVar11->field_0x78;
  *(undefined8 *)&param_4->field_0x90 = *(undefined8 *)&pTVar11->field_0x70;
  *(undefined8 *)&param_4->field_0x98 = uVar5;
  auVar3._8_4_ = SUB84(dVar2,0);
  auVar3._0_8_ = dVar2;
  auVar3._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&param_4->field_0xa0 = auVar3;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&param_4->field_0xb0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&param_4->field_0xb8 = uVar5;
  *(undefined4 *)&param_4->field_0xc0 = uVar8;
  *(undefined4 *)&param_4->field_0xc4 = uVar9;
  *(double *)&param_4->field_0xc8 = dVar4;
  uVar13 = auVar16._0_4_ ^ uVar13;
  uVar14 = auVar16._4_4_ ^ uVar14;
  *(double *)&param_4->field_0xd0 = dVar4;
  *(int *)&param_4->field_0xd8 = SUB84(local_128,0);
  *(int *)&param_4->field_0xdc = (int)((ulonglong)local_128 >> 0x20);
  *(double *)&param_4->field_0xe0 = dVar1;
  *(undefined8 *)&param_4->field_0xf0 = 0;
  *(undefined8 *)&param_4->field_0xf8 = 0;
  *(undefined8 *)&param_4->field_0x100 = 0;
  *(undefined8 *)&param_4->field_0x108 = 0x3ff0000000000000;
  param_4->bRayTracedDistanceField = param_2 == -1;
  if (__real_c130000000000000 <= (double)CONCAT44(uVar14,uVar13)) {
    uVar13 = SUB84(__real_c130000000000000,0);
    uVar14 = (uint)((ulonglong)__real_c130000000000000 >> 0x20);
  }
  *(float *)&param_4->field_0x110 = (float)(double)CONCAT44(uVar14,uVar13);
  *(float *)&param_4->field_0x114 = (float)dVar1 - (float)(double)CONCAT44(uVar14,uVar13);
  if ((param_2 == -1) || ((param_4->CascadeSettings).ShadowSplitIndex < (int)uVar10)) {
    (param_4->CascadeSettings).bFarShadowCascade = false;
  }
  else {
    (param_4->CascadeSettings).bFarShadowCascade = true;
  }
  return true;
}

// SetAtmosphereRelatedProperties @ 1478ef8a0

void __thiscall
FDirectionalLightSceneProxy::SetAtmosphereRelatedProperties
          (FDirectionalLightSceneProxy *this,FLinearColor *param_1,FLinearColor *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->TransmittanceTowardSun).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->TransmittanceTowardSun).field0_0x0 + 8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  *(undefined8 *)&(this->SunDiscOuterSpaceLuminance).field0_0x0 =
       *(undefined8 *)&param_2->field0_0x0;
  *(undefined8 *)((longlong)&(this->SunDiscOuterSpaceLuminance).field0_0x0 + 8) = uVar1;
  return;
}

// ShouldCreatePerObjectShadowsForDynamicObjects @ 1478f6cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall
FDirectionalLightSceneProxy::ShouldCreatePerObjectShadowsForDynamicObjects
          (FDirectionalLightSceneProxy *this)

{
  bool bVar1;
  
  bVar1 = FLightSceneProxy::ShouldCreatePerObjectShadowsForDynamicObjects((FLightSceneProxy *)this);
  if ((((bVar1) &&
       (this->WholeSceneDynamicShadowRadius <= GMaxCSMRadiusToAllowPerObjectShadows &&
        GMaxCSMRadiusToAllowPerObjectShadows != this->WholeSceneDynamicShadowRadius)) &&
      (this->bUseInsetShadowsForMovableObjects != false)) &&
     (-1 < *(char *)((longlong)&this->_padding_ + 3))) {
    return true;
  }
  return false;
}

// ShouldCreateRayTracedCascade @ 1478f6d90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall
FDirectionalLightSceneProxy::ShouldCreateRayTracedCascade
          (FDirectionalLightSceneProxy *this,Type param_1,bool param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  IConsoleManager *pIVar7;
  float fVar8;
  float fVar9;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_virtual_bool___cdecl_FDirectionalLightSceneProxy::ShouldCreateRayTracedCascade(ERHIFeatureLevel::Type,bool,int)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_bool___cdecl_FDirectionalLightSceneProxy::ShouldCreateRayTracedCascade(ERHIFeatureLevel::Type,bool,int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_bool___cdecl_FDirectionalLightSceneProxy::ShouldCreateRayTracedCascade(ERHIFeatureLevel::Type,bool,int)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pIVar7 = IConsoleManager::Get();
    `public:_virtual_bool___cdecl_FDirectionalLightSceneProxy::ShouldCreateRayTracedCascade(ERHIFeatureLevel::Type,bool,int)const___ptr64'
    ::__l2::CVarDistanceFieldShadowing =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"r.DistanceFieldShadowing",1);
    _Init_thread_footer(&`public:_virtual_bool___cdecl_FDirectionalLightSceneProxy::ShouldCreateRayTracedCascade(ERHIFeatureLevel::Type,bool,int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_virtual_bool___cdecl_FDirectionalLightSceneProxy::ShouldCreateRayTracedCascade(ERHIFeatureLevel::Type,bool,int)const___ptr64'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_virtual_bool___cdecl_FDirectionalLightSceneProxy::ShouldCreateRayTracedCascade(ERHIFeatureLevel::Type,bool,int)const___ptr64'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_virtual_bool___cdecl_FDirectionalLightSceneProxy::ShouldCreateRayTracedCascade(ERHIFeatureLevel::Type,bool,int)const___ptr64'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    pIVar7 = IConsoleManager::Get();
    `public:_virtual_bool___cdecl_FDirectionalLightSceneProxy::ShouldCreateRayTracedCascade(ERHIFeatureLevel::Type,bool,int)const___ptr64'
    ::__l2::CVarHFShadowing =
         (IConsoleVariable *)
         (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"r.HeightFieldShadowing",1);
    _Init_thread_footer(&`public:_virtual_bool___cdecl_FDirectionalLightSceneProxy::ShouldCreateRayTracedCascade(ERHIFeatureLevel::Type,bool,int)const___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if ((`public:_virtual_bool___cdecl_FDirectionalLightSceneProxy::ShouldCreateRayTracedCascade(ERHIFeatureLevel::Type,bool,int)const___ptr64'
       ::__l2::CVarDistanceFieldShadowing != (IConsoleVariable *)0x0) &&
     (iVar5 = (**(code **)(*(longlong *)
                            `public:_virtual_bool___cdecl_FDirectionalLightSceneProxy::ShouldCreateRayTracedCascade(ERHIFeatureLevel::Type,bool,int)const___ptr64'
                            ::__l2::CVarDistanceFieldShadowing + 200))(), iVar5 == 0)) {
    if (`public:_virtual_bool___cdecl_FDirectionalLightSceneProxy::ShouldCreateRayTracedCascade(ERHIFeatureLevel::Type,bool,int)const___ptr64'
        ::__l2::CVarHFShadowing == (IConsoleVariable *)0x0) {
      return false;
    }
    iVar5 = (**(code **)(*(longlong *)
                          `public:_virtual_bool___cdecl_FDirectionalLightSceneProxy::ShouldCreateRayTracedCascade(ERHIFeatureLevel::Type,bool,int)const___ptr64'
                          ::__l2::CVarHFShadowing + 200))();
    if (iVar5 == 0) {
      return false;
    }
  }
  uVar6 = GetNumShadowMappedCascades(this,param_3,param_2);
  fVar8 = GetDistanceFieldShadowDistance(this);
  if ((uVar6 == 0) || (fVar9 = GetCSMMaxDistance(this,param_2,param_3), fVar8 <= fVar9)) {
    bVar2 = false;
    bVar3 = false;
    if ((uVar6 == 0) && (0.0 < fVar8)) {
      bVar3 = true;
      goto LAB_1478f6e5f;
    }
  }
  else {
    bVar3 = true;
  }
  bVar2 = bVar3;
  bVar3 = false;
LAB_1478f6e5f:
  bVar4 = DoesPlatformSupportDistanceFieldShadowing
                    (GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1]);
  if ((bVar4) && ((bVar2 || (bVar3)))) {
    return true;
  }
  return false;
}

// UseCSMForDynamicObjects @ 1478fe420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall
FDirectionalLightSceneProxy::UseCSMForDynamicObjects(FDirectionalLightSceneProxy *this)

{
  bool bVar1;
  
  bVar1 = FLightSceneProxy::ShouldCreatePerObjectShadowsForDynamicObjects((FLightSceneProxy *)this);
  if (((bVar1) && (*(char *)((longlong)&this->_padding_ + 3) < '\0')) &&
     (0.0 < this->WholeSceneDynamicShadowRadius)) {
    return true;
  }
  return false;
}

