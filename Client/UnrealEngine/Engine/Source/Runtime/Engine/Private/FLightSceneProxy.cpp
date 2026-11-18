// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 60

// AffectsBounds @ 1478b38e0

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
FLightSceneProxy::AffectsBounds(FLightSceneProxy *this,TBoxSphereBounds<double,double> *param_1)

{
  return true;
}

// GetAtmosphereTransmittanceTowardSun @ 1478cfa00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLinearColor * __thiscall
FLightSceneProxy::GetAtmosphereTransmittanceTowardSun
          (FLightSceneProxy *this,FLinearColor *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  return __return_storage_ptr__;
}

// GetCastCloudShadows @ 1478d02f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall FLightSceneProxy::GetCastCloudShadows(FLightSceneProxy *this)

{
  return false;
}

// GetCastShadowsOnAtmosphere @ 1478d0320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall FLightSceneProxy::GetCastShadowsOnAtmosphere(FLightSceneProxy *this)

{
  return false;
}

// GetCastShadowsOnClouds @ 1478d0340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall FLightSceneProxy::GetCastShadowsOnClouds(FLightSceneProxy *this)

{
  return false;
}

// GetCloudScatteredLuminanceScale @ 1478d0370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLinearColor * __thiscall
FLightSceneProxy::GetCloudScatteredLuminanceScale
          (FLightSceneProxy *this,FLinearColor *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  return __return_storage_ptr__;
}

// GetCloudShadowDepthBias @ 1478d03a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall FLightSceneProxy::GetCloudShadowDepthBias(FLightSceneProxy *this)

{
  return 0.0;
}

// GetCloudShadowExtent @ 1478d03c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall FLightSceneProxy::GetCloudShadowExtent(FLightSceneProxy *this)

{
  return __real_3f800000;
}

// GetCloudShadowMapResolutionScale @ 1478d03e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall FLightSceneProxy::GetCloudShadowMapResolutionScale(FLightSceneProxy *this)

{
  return __real_3f800000;
}

// GetCloudShadowOnAtmosphereStrength @ 1478d0400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall FLightSceneProxy::GetCloudShadowOnAtmosphereStrength(FLightSceneProxy *this)

{
  return __real_3f800000;
}

// GetCloudShadowOnSurfaceStrength @ 1478d0420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall FLightSceneProxy::GetCloudShadowOnSurfaceStrength(FLightSceneProxy *this)

{
  return __real_3f800000;
}

// GetCloudShadowRaySampleCountScale @ 1478d0440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall FLightSceneProxy::GetCloudShadowRaySampleCountScale(FLightSceneProxy *this)

{
  return __real_3f800000;
}

// GetCloudShadowStrength @ 1478d0460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall FLightSceneProxy::GetCloudShadowStrength(FLightSceneProxy *this)

{
  return __real_3f800000;
}

// GetDirectionalLightDistanceFadeParameters @ 1478d1240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

TVector2<double> * __thiscall
FLightSceneProxy::GetDirectionalLightDistanceFadeParameters
          (FLightSceneProxy *this,TVector2<double> *__return_storage_ptr__,Type param_1,bool param_2
          ,int param_3)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  return __return_storage_ptr__;
}

// GetDirectionalLightForwardShadingPriority @ 1478d1270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

int __thiscall FLightSceneProxy::GetDirectionalLightForwardShadingPriority(FLightSceneProxy *this)

{
  return 0;
}

// GetEffectiveScreenRadius @ 1478d45a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall
FLightSceneProxy::GetEffectiveScreenRadius(FLightSceneProxy *this,FViewMatrices *param_1)

{
  return 0.0;
}

// GetEffectiveScreenRadius @ 1478d45b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall
FLightSceneProxy::GetEffectiveScreenRadius
          (FLightSceneProxy *this,FViewMatrices *param_1,TIntPoint<int> *param_2)

{
  return 0.0;
}

// GetFadeRange @ 1478d4720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall FLightSceneProxy::GetFadeRange(FLightSceneProxy *this)

{
  return 0.0;
}

// GetLightPositionForLightShafts @ 1478d5630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

TVector<double> * __thiscall
FLightSceneProxy::GetLightPositionForLightShafts
          (FLightSceneProxy *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (this->Position).field0_0x0._s_0.Y;
  dVar2 = (this->Position).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Position).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// GetLightShaftOcclusionParameters @ 1478d59e0

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
FLightSceneProxy::GetLightShaftOcclusionParameters
          (FLightSceneProxy *this,float *param_1,float *param_2)

{
  *param_1 = 0.0;
  *param_2 = 1.0;
  return false;
}

// GetLightSourceAngle @ 1478d5a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall FLightSceneProxy::GetLightSourceAngle(FLightSceneProxy *this)

{
  return 0.0;
}

// GetMaxDrawDistance @ 1478d6320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall FLightSceneProxy::GetMaxDrawDistance(FLightSceneProxy *this)

{
  return 0.0;
}

// GetNumViewDependentWholeSceneShadows @ 1478d68e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

uint __thiscall
FLightSceneProxy::GetNumViewDependentWholeSceneShadows
          (FLightSceneProxy *this,FSceneView *param_1,bool param_2)

{
  return 0;
}

// GetOuterConeAngle @ 1478d6950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall FLightSceneProxy::GetOuterConeAngle(FLightSceneProxy *this)

{
  return 0.0;
}

// GetOuterSpaceIlluminance @ 1478d6980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLinearColor * __thiscall
FLightSceneProxy::GetOuterSpaceIlluminance
          (FLightSceneProxy *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&(this->Color).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetOuterSpaceLuminance @ 1478d69c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLinearColor * __thiscall
FLightSceneProxy::GetOuterSpaceLuminance
          (FLightSceneProxy *this,FLinearColor *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  return __return_storage_ptr__;
}

// GetPerPixelTransmittanceEnabled @ 1478d7d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall FLightSceneProxy::GetPerPixelTransmittanceEnabled(FLightSceneProxy *this)

{
  return false;
}

// GetRadius @ 1478da390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall FLightSceneProxy::GetRadius(FLightSceneProxy *this)

{
  return __real_7f7fffff;
}

// GetShadowSourceAngleFactor @ 1478da530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall FLightSceneProxy::GetShadowSourceAngleFactor(FLightSceneProxy *this)

{
  return __real_3f800000;
}

// GetShadowSplitBounds @ 1478da990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

TSphere<double> * __thiscall
FLightSceneProxy::GetShadowSplitBounds
          (FLightSceneProxy *this,TSphere<double> *__return_storage_ptr__,FSceneView *param_1,
          int param_2,bool param_3,FShadowCascadeSettings *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  __return_storage_ptr__->W = 0.0;
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = (double)uVar1;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetShadowSplitBoundsDepthRange @ 1478db460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

TSphere<double> * __thiscall
FLightSceneProxy::GetShadowSplitBoundsDepthRange
          (FLightSceneProxy *this,TSphere<double> *__return_storage_ptr__,FSceneView *param_1,
          TVector<double> *param_2,float param_3,float param_4,FShadowCascadeSettings *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  __return_storage_ptr__->W = 0.0;
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = (double)uVar1;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetSourceRadius @ 1478db8e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall FLightSceneProxy::GetSourceRadius(FLightSceneProxy *this)

{
  return 0.0;
}

// GetSunIlluminanceAccountingForSkyAtmospherePerPixelTransmittance @ 1478dd7b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLinearColor * __thiscall
FLightSceneProxy::GetSunIlluminanceAccountingForSkyAtmospherePerPixelTransmittance
          (FLightSceneProxy *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&(this->Color).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetSunIlluminanceOnGroundPostTransmittance @ 1478dd830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLinearColor * __thiscall
FLightSceneProxy::GetSunIlluminanceOnGroundPostTransmittance
          (FLightSceneProxy *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&(this->Color).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetSunLightHalfApexAngleRadian @ 1478dd870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall FLightSceneProxy::GetSunLightHalfApexAngleRadian(FLightSceneProxy *this)

{
  return __real_3b9bd869;
}

// GetTraceDistance @ 1478dd950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __thiscall FLightSceneProxy::GetTraceDistance(FLightSceneProxy *this)

{
  return 0.0;
}

// GetUsePerPixelAtmosphereTransmittance @ 1478ddcd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall FLightSceneProxy::GetUsePerPixelAtmosphereTransmittance(FLightSceneProxy *this)

{
  return false;
}

// GetViewDependentWholeSceneProjectedShadowInitializer @ 1478deaa0

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
FLightSceneProxy::GetViewDependentWholeSceneProjectedShadowInitializer
          (FLightSceneProxy *this,FSceneView *param_1,int param_2,bool param_3,
          FWholeSceneProjectedShadowInitializer *param_4)

{
  return false;
}

// GetWholeSceneProjectedShadowInitializer @ 1478ded70

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
FLightSceneProxy::GetWholeSceneProjectedShadowInitializer
          (FLightSceneProxy *this,FSceneViewFamily *param_1,
          TArray<FWholeSceneProjectedShadowInitializer,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  return false;
}

// HasSourceTexture @ 1478df4c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall FLightSceneProxy::HasSourceTexture(FLightSceneProxy *this)

{
  return false;
}

// IsInverseSquared @ 1478e1290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall FLightSceneProxy::IsInverseSquared(FLightSceneProxy *this)

{
  return true;
}

// IsLocalLight @ 1478e12f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall FLightSceneProxy::IsLocalLight(FLightSceneProxy *this)

{
  return false;
}

// IsRectLight @ 1478e1980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall FLightSceneProxy::IsRectLight(FLightSceneProxy *this)

{
  return false;
}

// SetAtmosphereRelatedProperties @ 1478ef8c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
FLightSceneProxy::SetAtmosphereRelatedProperties
          (FLightSceneProxy *this,FLinearColor *param_1,FLinearColor *param_2)

{
  return;
}

// SetScissorRect @ 1478f4f30

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
FLightSceneProxy::SetScissorRect
          (FLightSceneProxy *this,FRHICommandList *param_1,FSceneView *param_2,
          TIntRect<int> *param_3,TIntRect<int> *param_4)

{
  return false;
}

// ShouldCreateRayTracedCascade @ 1478f6f60

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
FLightSceneProxy::ShouldCreateRayTracedCascade
          (FLightSceneProxy *this,Type param_1,bool param_2,int param_3)

{
  return false;
}

// FLightSceneProxy @ 147ea5080

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

FLightSceneProxy * __thiscall
FLightSceneProxy::FLightSceneProxy(FLightSceneProxy *this,ULightComponent *param_1)

{
  undefined1 uVar1;
  FGenericStaticFeatureLevel FVar2;
  TAtomic<FMinimalName> TVar3;
  void *_Src;
  ULightComponent *pUVar4;
  UTextureLightProfile *pUVar5;
  UMaterialInterface *pUVar6;
  code *pcVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  bool bVar16;
  uchar uVar17;
  char cVar18;
  bool bVar19;
  EShaderPlatform EVar20;
  FStaticShaderPlatform FVar21;
  FSceneInterface *pFVar22;
  FUObjectItem *pFVar23;
  FUObjectItem *this_00;
  ULevel *this_01;
  UPackage *pUVar24;
  ForAnyElementType FVar25;
  FLightSceneProxy *pFVar26;
  FLightComponentMapBuildData *pFVar27;
  FLinearColor *pFVar28;
  longlong lVar29;
  FName FVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  int iVar34;
  FName FVar35;
  FString *pFVar36;
  float fVar37;
  FName local_res8;
  FName local_res10;
  FString local_58;
  FString local_48;
  FLinearColor local_38;
  
  FVar30.ComparisonIndex.Value = 0;
  FVar30.Number = 0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  this->_padding_ = (longlong)&___7FLightSceneProxy__6B_;
  this->LightComponent = param_1;
  pFVar22 = UActorComponent::GetScene((UActorComponent *)param_1);
  this->SceneInterface = pFVar22;
  (this->Position).field0_0x0._s_0.X = 0.0;
  (this->Position).field0_0x0._s_0.W = 1.0;
  (this->Position).field0_0x0._s_0.Y = 0.0;
  (this->Position).field0_0x0._s_0.Z = 0.0;
  this->IndirectLightingScale = *(float *)((longlong)&param_1->_padding_ + 4);
  fVar37 = *(float *)&param_1->_padding_;
  if (fVar37 <= 0.0) {
    fVar37 = 0.0;
  }
  this->VolumetricScatteringIntensity = fVar37;
  fVar37 = __real_bf800000;
  if ((param_1->bOverrideRayEndBias != 0) && (fVar37 = param_1->RayEndBias, fVar37 <= 0.0)) {
    fVar37 = 0.0;
  }
  this->RayEndBias = fVar37;
  this->ShadowResolutionScale = param_1->ShadowResolutionScale;
  this->ShadowBias = param_1->ShadowBias;
  this->ShadowSlopeBias = param_1->ShadowSlopeBias;
  this->ShadowSharpen = param_1->ShadowSharpen;
  this->ContactShadowLength = param_1->ContactShadowLength;
  this->ContactShadowCastingIntensity = param_1->ContactShadowCastingIntensity;
  this->ContactShadowNonCastingIntensity = param_1->ContactShadowNonCastingIntensity;
  this->SpecularScale = param_1->SpecularScale;
  this->DiffuseScale = param_1->DiffuseScale;
  uVar13 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  uVar14 = *(undefined4 *)&param_1->_padding_;
  uVar15 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->LightGuid).A = *(undefined4 *)&param_1->_padding_;
  (this->LightGuid).B = uVar13;
  (this->LightGuid).C = uVar14;
  (this->LightGuid).D = uVar15;
  this->RayStartOffsetDepthScale = param_1->RayStartOffsetDepthScale;
  this->IESTexture = (UTextureLightProfile *)0x0;
  bVar31 = (this->bContactShadowLengthInWS ^ param_1->ContactShadowLengthInWS) & 1 ^
           this->field_0x1d8;
  bVar32 = 0;
  this->field_0x1d8 = bVar31;
  bVar12 = false;
  bVar19 = true;
  bVar33 = bVar32;
  if (*(char *)((longlong)&param_1->_padding_ + 3) == '\x02') {
    bVar33 = 2;
  }
  this->field_0x1d8 = bVar33 | bVar31 & 0xfd;
  bVar16 = ULightComponentBase::HasStaticLighting((ULightComponentBase *)param_1);
  this->bStaticLighting = bVar16;
  bVar16 = ULightComponentBase::HasStaticShadowing((ULightComponentBase *)param_1);
  bVar33 = this->field_0x1d8;
  this->bStaticShadowing = bVar16;
  bVar31 = bVar32;
  if (((byte)*(undefined4 *)((longlong)&param_1->_padding_ + 4) & 10) == 10) {
    bVar31 = 0x10;
  }
  this->field_0x1d8 = bVar31 | bVar16 << 3 | bVar33 & 0xe7;
  if (((byte)*(undefined4 *)((longlong)&param_1->_padding_ + 4) & 6) == 6) {
    bVar32 = 0x20;
  }
  bVar32 = bVar32 | bVar31 | bVar16 << 3 | bVar33 & 199;
  this->field_0x1d8 = bVar32;
  bVar32 = ((char)(*(uint *)&param_1->field_0x2dc >> 1) << 6 ^ bVar32) & 0x40 ^ bVar32;
  this->field_0x1d8 = bVar32;
  if (((param_1->_padding_ & 0x2000000000) == 0) || ((bVar32 & 0x18) != 0x10)) {
    bVar33 = 0;
  }
  else {
    bVar33 = 0x80;
  }
  this->field_0x1d8 = bVar32 & 0x7f | bVar33;
  bVar33 = ((byte)(*(uint *)((longlong)&param_1->_padding_ + 4) >> 6) ^ this->bCastVolumetricShadow)
           & 1 ^ this->field_0x1d9;
  this->field_0x1d9 = bVar33;
  bVar33 = ((char)(*(uint *)((longlong)&param_1->_padding_ + 4) >> 7) * '\x02' ^ bVar33) & 2 ^
           bVar33;
  this->field_0x1d9 = bVar33;
  bVar33 = ((byte)*(undefined4 *)&param_1->field_0x2dc & 0xfc ^ bVar33) & 4 ^ bVar33;
  this->field_0x1d9 = bVar33;
  this->field_0x1d9 = ((byte)*(undefined4 *)&param_1->field_0x2dc & 0xf8 ^ bVar33) & 8 ^ bVar33;
  if ((param_1->_padding_ & 0x200000000) == 0) {
    uVar17 = '\0';
  }
  else {
    uVar17 = (uchar)param_1->_padding_;
  }
  (this->CastRaytracedShadow).Value = uVar17;
  bVar33 = (this->bAffectReflection ^ *(byte *)((longlong)&param_1->_padding_ + 4)) & 1 ^
           this->field_0x1db;
  this->field_0x1db = bVar33;
  bVar33 = ((char)(*(uint *)((longlong)&param_1->_padding_ + 4) >> 1) * '\x02' ^ bVar33) & 2 ^
           bVar33;
  this->field_0x1db = bVar33;
  this->field_0x1db =
       ((char)(*(uint *)((longlong)&param_1->_padding_ + 4) >> 4) << 2 ^ bVar33) & 4 ^ bVar33;
  cVar18 = (**(code **)(param_1->_padding_ + 0x688))(param_1);
  bVar33 = (cVar18 << 3 ^ this->field_0x1db) & 8U ^ this->field_0x1db;
  this->field_0x1db = bVar33;
  this->field_0x1db = (param_1->bUseRayTracedDistanceFieldShadows << 4 ^ bVar33 & 0xf) & 0x1f;
  bVar16 = UObject::IsSelected((UObject *)param_1);
  if ((bVar16) || (bVar16 = UActorComponent::IsOwnerSelected((UActorComponent *)param_1), bVar16)) {
    bVar33 = 1;
  }
  else {
    bVar33 = 0;
  }
  this->bSelected = '\0';
  this->field_0x1dc = this->field_0x1dc | bVar33;
  this->field_0x1dc =
       ((char)(*(uint *)&param_1->field_0x2dc >> 4) * '\x02' ^ this->field_0x1dc) & 2U ^
       this->field_0x1dc;
  (this->MegaLightsShadowMethod).Value = (param_1->MegaLightsShadowMethod).Value;
  this->LightFunctionAtlasLightIndex = '\0';
  uVar17 = (**(code **)(param_1->_padding_ + 0x690))(param_1);
  this->AtmosphereSunLightIndex = uVar17;
  (**(code **)(param_1->_padding_ + 0x698))(param_1,&this->AtmosphereSunDiskColorScale);
  uVar17 = (**(code **)(param_1->_padding_ + 0x668))(param_1);
  this->LightType = uVar17;
  this->LightingChannelMask = (byte)param_1->LightingChannels & 7;
  this->ViewLightingChannelMask = (byte)param_1->ViewLightingChannels & 0x1f;
  (this->StatId).StatIdPtr = &TStatId::TStatId_NAME_None;
  pFVar23 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4))
  ;
  TVar3 = ((pFVar23->StatID).StatIdPtr)->Name;
  if ((TVar3._0_4_ == 0) && (TVar3._4_4_ == 0)) {
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4));
    FUObjectItem::CreateStatID(this_00);
  }
  (this->StatId).StatIdPtr = (pFVar23->StatID).StatIdPtr;
  uVar13 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->ComponentName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
  (this->ComponentName).Number = uVar13;
  FVar35 = FVar30;
  if ((AActor *)param_1->_padding_ != (AActor *)0x0) {
    this_01 = AActor::GetLevel((AActor *)param_1->_padding_);
    pUVar24 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_01);
    FVar35 = (FName)pUVar24->_padding_;
  }
  this->LevelName = FVar35;
  this->SamplesPerPixel = 1;
  this->FarShadowDistance = 0.0;
  this->FarShadowCascadeCount = 0;
  this->ShadowAmount = 1.0;
  this->DeepShadowLayerDistribution = *(float *)&param_1->_padding_;
  this->IESAtlasId = 0xffffffff;
  lVar29 = param_1->_padding_;
  if (lVar29 == 0) {
    local_res10 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res10,&local_48);
    pFVar36 = &local_48;
    FVar25.Data = local_48.Data.AllocatorInstance.Data;
  }
  else {
    if (*(int *)(lVar29 + 0x1f0) < 2) {
      local_res8 = *(FName *)(lVar29 + 0x18);
      ::FName::ToString(&local_res8,&local_58);
    }
    else {
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar34 = *(int *)(lVar29 + 0x1f0);
      _Src = *(void **)(lVar29 + 0x1e8);
      local_58.Data.ArrayNum = iVar34;
      if (iVar34 == 0) {
        local_58.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar34,0,(ForAnyElementType *)&local_58,iVar34,&local_58.Data.ArrayMax);
        memcpy(local_58.Data.AllocatorInstance.Data,_Src,(longlong)iVar34 * 2);
      }
    }
    pFVar36 = &local_58;
    FVar25.Data = local_58.Data.AllocatorInstance.Data;
    bVar19 = false;
    bVar12 = true;
  }
  (this->OwnerNameOrLabel).Data.AllocatorInstance.Data = FVar25.Data;
  (pFVar36->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OwnerNameOrLabel).Data.ArrayNum = (pFVar36->Data).ArrayNum;
  (this->OwnerNameOrLabel).Data.ArrayMax = (pFVar36->Data).ArrayMax;
  (pFVar36->Data).ArrayNum = 0;
  (pFVar36->Data).ArrayMax = 0;
  if ((bVar19) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar12) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((this->SceneInterface == (FSceneInterface *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("SceneInterface",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LightSceneProxy.cpp"
                          ,0x50,L""), bVar19)) {
    pcVar7 = (code *)swi(3);
    pFVar26 = (FLightSceneProxy *)(*pcVar7)();
    return pFVar26;
  }
  FVar2.FeatureLevel = this->SceneInterface->FeatureLevel;
  EVar20 = FSceneInterface::GetShaderPlatform(this->SceneInterface);
  bVar19 = UseVirtualShadowMaps(EVar20,FVar2);
  this->bUseVirtualShadowMaps = bVar19;
  FVar2.FeatureLevel = this->SceneInterface->FeatureLevel;
  EVar20 = FSceneInterface::GetShaderPlatform(this->SceneInterface);
  bVar19 = UseNonNaniteVirtualShadowMaps(EVar20,FVar2);
  if (bVar19) {
    bVar33 = this->field_0x1d8;
    this->field_0x1d8 = (bVar33 * '\x02' ^ bVar33) & 8 ^ bVar33;
  }
  if (FReadOnlyCVARCache::bAllowStaticLighting == false) {
    bVar33 = this->field_0x1d8;
    this->field_0x1d8 = (bVar33 * '\x02' ^ bVar33) & 8 ^ bVar33;
  }
  pFVar27 = ULightComponent::GetLightComponentMapBuildData(param_1);
  if ((pFVar27 == (FLightComponentMapBuildData *)0x0) ||
     (this->bStaticLighting != '\0' || this->bStaticShadowing != '\x01')) {
    iVar34 = -1;
  }
  else {
    iVar34 = pFVar27->ShadowMapChannel;
  }
  this->ShadowMapChannel = iVar34;
  iVar8 = param_1->PreviewShadowMapChannel;
  if (param_1->PreviewShadowMapChannel == -1) {
    iVar8 = iVar34;
  }
  pUVar4 = this->LightComponent;
  this->PreviewShadowMapChannel = iVar8;
  this->StaticShadowDepthMap = &pUVar4->StaticShadowDepthMap;
  pUVar5 = (pUVar4->IESTexture).field0_0x0.DebugPtr;
  if (pUVar5 != (UTextureLightProfile *)0x0) {
    this->IESTexture = pUVar5;
  }
  pFVar28 = ULightComponent::GetColoredLightBrightness(pUVar4,&local_38);
  fVar37 = (pFVar28->field0_0x0)._s_0.G;
  fVar9 = (pFVar28->field0_0x0)._s_0.B;
  fVar10 = (pFVar28->field0_0x0)._s_0.A;
  pUVar4 = this->LightComponent;
  (this->Color).field0_0x0._s_0.R = (pFVar28->field0_0x0)._s_0.R;
  (this->Color).field0_0x0._s_0.G = fVar37;
  (this->Color).field0_0x0._s_0.B = fVar9;
  (this->Color).field0_0x0._s_0.A = fVar10;
  pUVar6 = (pUVar4->LightFunctionMaterial).field0_0x0.DebugPtr;
  if ((pUVar6 != (UMaterialInterface *)0x0) &&
     (lVar29 = (**(code **)(pUVar6->_padding_ + 0x2d8))(), *(char *)(lVar29 + 0x148) == '\x02')) {
    FVar30 = (FName)(**(code **)(((this->LightComponent->LightFunctionMaterial).field0_0x0.DebugPtr)
                                 ->_padding_ + 0x310))();
  }
  this->LightFunctionMaterial = (FMaterialRenderProxy *)FVar30;
  pUVar4 = this->LightComponent;
  dVar11 = (pUVar4->LightFunctionScale).field0_0x0._s_0.Y;
  (this->LightFunctionScale).field0_0x0._s_0.X = (pUVar4->LightFunctionScale).field0_0x0._s_0.X;
  (this->LightFunctionScale).field0_0x0._s_0.Y = dVar11;
  (this->LightFunctionScale).field0_0x0._s_0.Z = (pUVar4->LightFunctionScale).field0_0x0._s_0.Z;
  this->LightFunctionFadeDistance = pUVar4->LightFunctionFadeDistance;
  this->LightFunctionDisabledBrightness = pUVar4->DisabledBrightness;
  this->SamplesPerPixel = *(uint *)((longlong)&pUVar4->_padding_ + 4);
  if (this->bCastDynamicShadow == '\0') goto LAB_147ea5872;
  FVar21.Platform = FSceneInterface::GetShaderPlatform(this->SceneInterface);
  bVar19 = IsMobilePlatform(FVar21);
  if (!bVar19) goto LAB_147ea5872;
  if (this->LightType == '\x01') {
    EVar20 = FSceneInterface::GetShaderPlatform(this->SceneInterface);
    bVar19 = DoesRuntimeSupportOnePassPointLightShadows(EVar20);
    if (bVar19) goto LAB_147ea5840;
LAB_147ea5864:
    this->bCastDynamicShadow = '\0';
  }
  else {
LAB_147ea5840:
    if (this->LightType == '\x03') goto LAB_147ea5864;
    if (this->LightType == '\x02') {
      FVar21.Platform = FSceneInterface::GetShaderPlatform(this->SceneInterface);
      bVar19 = IsMobileMovableSpotlightShadowsEnabled(FVar21);
      if (!bVar19) goto LAB_147ea5864;
    }
  }
  this->bTransmission = '\0';
LAB_147ea5872:
  this->VSMTexelDitherScale = 1.0;
  this->VSMResolutionLodBias = 0.0;
  return this;
}

// ~FLightSceneProxy @ 147ea9030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall FLightSceneProxy::~FLightSceneProxy(FLightSceneProxy *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FLightSceneProxy__6B_;
  pFVar1 = (this->OwnerNameOrLabel).Data.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ApplyWorldOffset @ 147eb0b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall FLightSceneProxy::ApplyWorldOffset(FLightSceneProxy *this,TVector<double> *param_1)

{
  TMatrix<double> *_Src;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_1b8 [32];
  wchar_t *****local_198;
  wchar_t *****local_190;
  undefined1 local_188 [112];
  undefined1 local_118 [16];
  TMatrix<double> local_108;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  _Src = &this->LightToWorld;
  if (((this->LightToWorld).M[2] + 3 < local_188) || (local_188 + 0x58 < _Src)) {
    local_188._0_8_ = _Src->M[0][0];
    local_188._8_8_ = (this->LightToWorld).M[0][1];
    local_188._16_8_ = (this->LightToWorld).M[0][2];
    local_188._24_8_ = (this->LightToWorld).M[0][3];
    local_188._32_8_ = (this->LightToWorld).M[1][0];
    local_188._40_8_ = (this->LightToWorld).M[1][1];
    local_188._48_8_ = (this->LightToWorld).M[1][2];
    local_188._56_8_ = (this->LightToWorld).M[1][3];
    local_188._64_8_ = (this->LightToWorld).M[2][0];
    local_188._72_8_ = (this->LightToWorld).M[2][1];
    local_188._80_8_ = (this->LightToWorld).M[2][2];
    local_188._88_8_ = (this->LightToWorld).M[2][3];
  }
  else {
    memcpy(local_188,_Src,0x60);
  }
  dVar1 = (this->LightToWorld).M[3][3];
  dVar2 = (this->Position).field0_0x0._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = (param_1->field0_0x0)._s_0.X;
  dVar12 = (this->Position).field0_0x0._s_0.Y + (param_1->field0_0x0)._s_0.Y;
  dVar13 = (this->Position).field0_0x0._s_0.W + __real_3ff0000000000000;
  dVar8 = (this->LightToWorld).M[3][0] + (param_1->field0_0x0)._s_0.X;
  dVar9 = (this->LightToWorld).M[3][1] + (param_1->field0_0x0)._s_0.Y;
  uVar19 = SUB84(dVar9,0);
  uVar20 = (undefined4)((ulonglong)dVar9 >> 0x20);
  dVar6 = dVar3 + (this->LightToWorld).M[3][2];
  dVar9 = (this->Position).field0_0x0._s_0.Z;
  *(undefined4 *)_Src->M[0] = local_188._0_4_;
  *(undefined4 *)((longlong)(this->LightToWorld).M[0] + 4) = local_188._4_4_;
  *(undefined4 *)((this->LightToWorld).M[0] + 1) = local_188._8_4_;
  *(undefined4 *)((longlong)(this->LightToWorld).M[0] + 0xc) = local_188._12_4_;
  *(undefined4 *)((this->LightToWorld).M[0] + 2) = local_188._16_4_;
  *(undefined4 *)((longlong)(this->LightToWorld).M[0] + 0x14) = local_188._20_4_;
  *(undefined4 *)((this->LightToWorld).M[0] + 3) = local_188._24_4_;
  *(undefined4 *)((longlong)(this->LightToWorld).M[0] + 0x1c) = local_188._28_4_;
  *(undefined4 *)(this->LightToWorld).M[1] = local_188._32_4_;
  *(undefined4 *)((longlong)(this->LightToWorld).M[1] + 4) = local_188._36_4_;
  *(undefined4 *)((this->LightToWorld).M[1] + 1) = local_188._40_4_;
  *(undefined4 *)((longlong)(this->LightToWorld).M[1] + 0xc) = local_188._44_4_;
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar17 = SUB84(dVar1,0);
  uVar18 = (undefined4)((ulonglong)dVar1 >> 0x20);
  *(undefined4 *)((this->LightToWorld).M[1] + 2) = local_188._48_4_;
  *(undefined4 *)((longlong)(this->LightToWorld).M[1] + 0x14) = local_188._52_4_;
  *(undefined4 *)((this->LightToWorld).M[1] + 3) = local_188._56_4_;
  *(undefined4 *)((longlong)(this->LightToWorld).M[1] + 0x1c) = local_188._60_4_;
  *(undefined4 *)(this->LightToWorld).M[2] = local_188._64_4_;
  *(undefined4 *)((longlong)(this->LightToWorld).M[2] + 4) = local_188._68_4_;
  *(undefined4 *)((this->LightToWorld).M[2] + 1) = local_188._72_4_;
  *(undefined4 *)((longlong)(this->LightToWorld).M[2] + 0xc) = local_188._76_4_;
  *(undefined4 *)((this->LightToWorld).M[2] + 2) = local_188._80_4_;
  *(undefined4 *)((longlong)(this->LightToWorld).M[2] + 0x14) = local_188._84_4_;
  *(undefined4 *)((this->LightToWorld).M[2] + 3) = local_188._88_4_;
  *(undefined4 *)((longlong)(this->LightToWorld).M[2] + 0x1c) = local_188._92_4_;
  auVar7._8_4_ = uVar19;
  auVar7._0_8_ = dVar8;
  auVar7._12_4_ = uVar20;
  *(undefined1 (*) [16])(this->LightToWorld).M[3] = auVar7;
  local_118._8_4_ = uVar17;
  local_118._0_8_ = dVar6;
  local_118._12_4_ = uVar18;
  auVar5._8_4_ = uVar17;
  auVar5._0_8_ = dVar6;
  auVar5._12_4_ = uVar18;
  *(undefined1 (*) [16])((this->LightToWorld).M[3] + 2) = auVar5;
  local_188._104_4_ = uVar19;
  local_188._96_8_ = dVar8;
  local_188._108_4_ = uVar20;
  if (((((((double)CONCAT44(local_188._4_4_ & uVar15,local_188._0_4_ & uVar14) <
           __real_3e45798ee0000000 ||
           (double)CONCAT44(local_188._4_4_ & uVar15,local_188._0_4_ & uVar14) ==
           __real_3e45798ee0000000) &&
         ((double)CONCAT44(local_188._12_4_ & uVar15,local_188._8_4_ & uVar14) <
          __real_3e45798ee0000000 ||
          (double)CONCAT44(local_188._12_4_ & uVar15,local_188._8_4_ & uVar14) ==
          __real_3e45798ee0000000)) &&
        ((double)CONCAT44(local_188._20_4_ & uVar15,local_188._16_4_ & uVar14) <
         __real_3e45798ee0000000 ||
         (double)CONCAT44(local_188._20_4_ & uVar15,local_188._16_4_ & uVar14) ==
         __real_3e45798ee0000000)) &&
       (((double)CONCAT44(local_188._36_4_ & uVar15,local_188._32_4_ & uVar14) <
         __real_3e45798ee0000000 ||
         (double)CONCAT44(local_188._36_4_ & uVar15,local_188._32_4_ & uVar14) ==
         __real_3e45798ee0000000 &&
        ((double)CONCAT44(local_188._44_4_ & uVar15,local_188._40_4_ & uVar14) <
         __real_3e45798ee0000000 ||
         (double)CONCAT44(local_188._44_4_ & uVar15,local_188._40_4_ & uVar14) ==
         __real_3e45798ee0000000)))) &&
      (((double)CONCAT44(local_188._52_4_ & uVar15,local_188._48_4_ & uVar14) <
        __real_3e45798ee0000000 ||
        (double)CONCAT44(local_188._52_4_ & uVar15,local_188._48_4_ & uVar14) ==
        __real_3e45798ee0000000 &&
       (((double)CONCAT44(local_188._68_4_ & uVar15,local_188._64_4_ & uVar14) <
         __real_3e45798ee0000000 ||
         (double)CONCAT44(local_188._68_4_ & uVar15,local_188._64_4_ & uVar14) ==
         __real_3e45798ee0000000 &&
        ((double)CONCAT44(local_188._76_4_ & uVar15,local_188._72_4_ & uVar14) <
         __real_3e45798ee0000000 ||
         (double)CONCAT44(local_188._76_4_ & uVar15,local_188._72_4_ & uVar14) ==
         __real_3e45798ee0000000)))))) &&
     ((double)CONCAT44(local_188._84_4_ & uVar15,local_188._80_4_ & uVar14) <
      __real_3e45798ee0000000 ||
      (double)CONCAT44(local_188._84_4_ & uVar15,local_188._80_4_ & uVar14) ==
      __real_3e45798ee0000000)) {
    local_198 = (wchar_t *****)0x150687b30;
    if (1 < (byte)LogUnrealMath._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`private:_static_void___cdecl_UE::Math::TMatrix<double>::ErrorEnsure(wchar_t_const*___ptr64)'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
    }
    local_190 = (wchar_t *****)&local_198;
    `UE::Math::TMatrix<double>::ErrorEnsure'::__l2::<lambda_1>::operator()(&local_190);
  }
  bVar16 = FMath::MatrixInverse(&local_108,(TMatrix<double> *)local_188);
  if (!bVar16) {
    local_190 = (wchar_t *****)0x150687c00;
    if (1 < (byte)LogUnrealMath._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`private:_static_void___cdecl_UE::Math::TMatrix<double>::ErrorEnsure(wchar_t_const*___ptr64)'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
    }
    local_198 = (wchar_t *****)&local_190;
    `UE::Math::TMatrix<double>::ErrorEnsure'::__l2::<lambda_1>::operator()(&local_198);
  }
  (this->WorldToLight).M[0][0] = local_108.M[0][0];
  (this->WorldToLight).M[0][1] = local_108.M[0][1];
  (this->WorldToLight).M[0][2] = local_108.M[0][2];
  (this->WorldToLight).M[0][3] = local_108.M[0][3];
  (this->WorldToLight).M[1][0] = local_108.M[1][0];
  (this->WorldToLight).M[1][1] = local_108.M[1][1];
  (this->WorldToLight).M[1][2] = local_108.M[1][2];
  (this->WorldToLight).M[1][3] = local_108.M[1][3];
  (this->WorldToLight).M[2][0] = local_108.M[2][0];
  (this->WorldToLight).M[2][1] = local_108.M[2][1];
  (this->WorldToLight).M[2][2] = local_108.M[2][2];
  (this->WorldToLight).M[2][3] = local_108.M[2][3];
  (this->WorldToLight).M[3][0] = local_108.M[3][0];
  (this->WorldToLight).M[3][1] = local_108.M[3][1];
  auVar11._8_4_ = SUB84(dVar12,0);
  auVar11._0_8_ = dVar2 + dVar4;
  auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])&(this->Position).field0_0x0 = auVar11;
  (this->WorldToLight).M[3][2] = local_108.M[3][2];
  (this->WorldToLight).M[3][3] = local_108.M[3][3];
  auVar10._8_4_ = SUB84(dVar13,0);
  auVar10._0_8_ = dVar3 + dVar9;
  auVar10._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->Position).field0_0x0 + 0x10) = auVar10;
  return;
}

// GetBoundingSphere @ 147ebeef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

TSphere<double> * __thiscall
FLightSceneProxy::GetBoundingSphere(FLightSceneProxy *this,TSphere<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  __return_storage_ptr__->W = 2097152.0;
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = (double)uVar1;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetIESTextureResource @ 147ec0440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FTexture * __thiscall FLightSceneProxy::GetIESTextureResource(FLightSceneProxy *this)

{
  UTextureLightProfile *pUVar1;
  bool bVar2;
  undefined1 auStackX_10 [24];
  
  pUVar1 = this->IESTexture;
  if (pUVar1 == (UTextureLightProfile *)0x0) {
    return (FTexture *)0x0;
  }
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = IsInSlateThread();
      if (!bVar2) {
        bVar2 = (*IsInAsyncLoadingThread)();
        if (!bVar2) {
          bVar2 = IsInParallelRenderingThread();
          if (!bVar2) {
            bVar2 = IsInRHIThread();
            if (!bVar2) {
              `UTexture::GetResource'::__l2::<lambda_1>::operator()(auStackX_10);
              return (FTexture *)0x0;
            }
          }
          return (FTexture *)pUVar1->_padding_;
        }
      }
    }
  }
  return (FTexture *)pUVar1->_padding_;
}

// GetLightShaderParameters @ 147ec13b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
FLightSceneProxy::GetLightShaderParameters
          (FLightSceneProxy *this,FLightRenderParameters *param_1,uint param_2)

{
  return;
}

// GetPerObjectProjectedShadowInitializer @ 147ec2a10

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
FLightSceneProxy::GetPerObjectProjectedShadowInitializer
          (FLightSceneProxy *this,TBoxSphereBounds<double,double> *param_1,
          FPerObjectProjectedShadowInitializer *param_2)

{
  return false;
}

// GetScissorRect @ 147ec5f90

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
FLightSceneProxy::GetScissorRect
          (FLightSceneProxy *this,TIntRect<int> *param_1,FSceneView *param_2,TIntRect<int> *param_3)

{
  (param_1->field0_0x0)._s_0.Min.field0_0x0 = (param_3->field0_0x0)._s_0.Min.field0_0x0;
  (param_1->field0_0x0)._s_0.Max.field0_0x0 = (param_3->field0_0x0)._s_0.Max.field0_0x0;
  return false;
}

// SetColor @ 147edc080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall FLightSceneProxy::SetColor(FLightSceneProxy *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->Color).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8) = uVar1;
  return;
}

// SetLightFunctionMaterial_GameThread @ 147edc800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
FLightSceneProxy::SetLightFunctionMaterial_GameThread
          (FLightSceneProxy *this,ULightComponent *param_1)

{
  UMaterialInterface *pUVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FLightSceneProxy *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FLightSceneProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar5 = 0;
  pUVar1 = (param_1->LightFunctionMaterial).field0_0x0.DebugPtr;
  if (pUVar1 != (UMaterialInterface *)0x0) {
    lVar4 = (**(code **)(pUVar1->_padding_ + 0x2d8))();
    if (*(char *)(lVar4 + 0x148) == '\x02') {
      uVar5 = (**(code **)(((param_1->LightFunctionMaterial).field0_0x0.DebugPtr)->_padding_ + 0x310
                          ))();
    }
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FLightSceneProxy::SetLightFunctionMaterial_GameThread'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FLightSceneProxy::SetLightFunctionMaterial_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  local_68 = uVar5;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FLightSceneProxy::SetLightFunctionMaterial_GameThread_::__l2::TSTR_FUpdateTransmissionCommand229>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar6 = (FRenderCommandTag *)
             TRenderCommandTag<`FLightSceneProxy::SetLightFunctionMaterial_GameThread'::__l2::TSTR_FUpdateTransmissionCommand229>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar6);
    uVar8 = (ulonglong)local_28;
    if (2 < uVar8) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar7 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar7 = local_30;
        }
        (*(code *)(*pppuVar7)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar7 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar7 = local_60;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  return;
}

// SetTransform @ 147edd2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
FLightSceneProxy::SetTransform
          (FLightSceneProxy *this,TMatrix<double> *param_1,TVector4<double> *param_2)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_c8 [32];
  wchar_t *****local_a8;
  wchar_t *****local_a0;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  dVar2 = __real_3e45798ee0000000;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  dVar1 = param_1->M[0][1];
  (this->LightToWorld).M[0][0] = param_1->M[0][0];
  (this->LightToWorld).M[0][1] = dVar1;
  dVar1 = param_1->M[0][3];
  (this->LightToWorld).M[0][2] = param_1->M[0][2];
  (this->LightToWorld).M[0][3] = dVar1;
  dVar1 = param_1->M[1][1];
  (this->LightToWorld).M[1][0] = param_1->M[1][0];
  (this->LightToWorld).M[1][1] = dVar1;
  dVar1 = param_1->M[1][3];
  (this->LightToWorld).M[1][2] = param_1->M[1][2];
  (this->LightToWorld).M[1][3] = dVar1;
  dVar1 = param_1->M[2][1];
  (this->LightToWorld).M[2][0] = param_1->M[2][0];
  (this->LightToWorld).M[2][1] = dVar1;
  dVar1 = param_1->M[2][3];
  (this->LightToWorld).M[2][2] = param_1->M[2][2];
  (this->LightToWorld).M[2][3] = dVar1;
  dVar1 = param_1->M[3][1];
  (this->LightToWorld).M[3][0] = param_1->M[3][0];
  (this->LightToWorld).M[3][1] = dVar1;
  dVar1 = param_1->M[3][3];
  (this->LightToWorld).M[3][2] = param_1->M[3][2];
  (this->LightToWorld).M[3][3] = dVar1;
  dVar1 = param_1->M[0][0];
  uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((((((double)CONCAT44(uVar5,uVar4) < dVar2 || (double)CONCAT44(uVar5,uVar4) == dVar2) &&
         (dVar1 = param_1->M[0][1],
         uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         (double)CONCAT44(uVar5,uVar4) < dVar2 || (double)CONCAT44(uVar5,uVar4) == dVar2)) &&
        (dVar1 = param_1->M[0][2],
        uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar5,uVar4) < dVar2 || (double)CONCAT44(uVar5,uVar4) == dVar2)) &&
       ((dVar1 = param_1->M[1][0],
        uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar5,uVar4) < dVar2 || (double)CONCAT44(uVar5,uVar4) == dVar2 &&
        (dVar1 = param_1->M[1][1],
        uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar5,uVar4) < dVar2 || (double)CONCAT44(uVar5,uVar4) == dVar2)))) &&
      ((dVar1 = param_1->M[1][2],
       uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar5,uVar4) < dVar2 || (double)CONCAT44(uVar5,uVar4) == dVar2 &&
       ((dVar1 = param_1->M[2][0],
        uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar5,uVar4) < dVar2 || (double)CONCAT44(uVar5,uVar4) == dVar2 &&
        (dVar1 = param_1->M[2][1],
        uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar5,uVar4) < dVar2 || (double)CONCAT44(uVar5,uVar4) == dVar2)))))) &&
     (dVar1 = param_1->M[2][2],
     uVar4 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar5 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar5,uVar4) < dVar2 || (double)CONCAT44(uVar5,uVar4) == dVar2)) {
    local_a8 = (wchar_t *****)0x150687b30;
    if (1 < (byte)LogUnrealMath._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`private:_static_void___cdecl_UE::Math::TMatrix<double>::ErrorEnsure(wchar_t_const*___ptr64)'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
    }
    local_a0 = (wchar_t *****)&local_a8;
    `UE::Math::TMatrix<double>::ErrorEnsure'::__l2::<lambda_1>::operator()(&local_a0);
  }
  bVar3 = FMath::MatrixInverse(&local_98,param_1);
  if (!bVar3) {
    local_a0 = (wchar_t *****)0x150687c00;
    if (1 < (byte)LogUnrealMath._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`private:_static_void___cdecl_UE::Math::TMatrix<double>::ErrorEnsure(wchar_t_const*___ptr64)'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogUnrealMath);
    }
    local_a8 = (wchar_t *****)&local_a0;
    `UE::Math::TMatrix<double>::ErrorEnsure'::__l2::<lambda_1>::operator()(&local_a8);
  }
  (this->WorldToLight).M[0][0] = local_98.M[0][0];
  (this->WorldToLight).M[0][1] = local_98.M[0][1];
  (this->WorldToLight).M[0][2] = local_98.M[0][2];
  (this->WorldToLight).M[0][3] = local_98.M[0][3];
  (this->WorldToLight).M[1][0] = local_98.M[1][0];
  (this->WorldToLight).M[1][1] = local_98.M[1][1];
  (this->WorldToLight).M[1][2] = local_98.M[1][2];
  (this->WorldToLight).M[1][3] = local_98.M[1][3];
  (this->WorldToLight).M[2][0] = local_98.M[2][0];
  (this->WorldToLight).M[2][1] = local_98.M[2][1];
  (this->WorldToLight).M[2][2] = local_98.M[2][2];
  (this->WorldToLight).M[2][3] = local_98.M[2][3];
  (this->WorldToLight).M[3][0] = local_98.M[3][0];
  (this->WorldToLight).M[3][1] = local_98.M[3][1];
  (this->WorldToLight).M[3][2] = local_98.M[3][2];
  (this->WorldToLight).M[3][3] = local_98.M[3][3];
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->Position).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->Position).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_2->field0_0x0)._s_0.W;
  (this->Position).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  (this->Position).field0_0x0._s_0.W = dVar1;
  return;
}

// SetTransmission_GameThread @ 147edd510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
FLightSceneProxy::SetTransmission_GameThread(FLightSceneProxy *this,ULightComponent *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_b8 [48];
  code *local_88 [2];
  undefined **local_78;
  FLightSceneProxy *pFStack_70;
  uint local_68;
  undefined1 uStack_64;
  undefined2 uStack_63;
  undefined1 uStack_61;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FLightSceneProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  uVar1 = *(uint *)((longlong)&param_1->_padding_ + 4);
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FLightSceneProxy::SetTransmission_GameThread'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_68 = uVar1 >> 5 & 1;
  local_60 = (undefined ***)0x0;
  uStack_64 = ((byte)uVar1 & 10) == 10;
  uStack_63 = auStack_b8._45_2_;
  uStack_61 = auStack_b8[0x2f];
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FLightSceneProxy::SetTransmission_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FLightSceneProxy::SetTransmission_GameThread_::__l2::TSTR_FSetTransmissionCommand205>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_38._4_1_ = uStack_64;
    local_38._0_4_ = local_68;
    local_38._5_2_ = uStack_63;
    local_38._7_1_ = uStack_61;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`FLightSceneProxy::SetTransmission_GameThread'::__l2::TSTR_FSetTransmissionCommand205>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar4);
    uVar6 = (ulonglong)local_28;
    if (2 < uVar6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar5 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar5 = local_30;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar5 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar5 = local_60;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return;
}

// ShouldCreatePerObjectShadowsForDynamicObjects @ 147ede670

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
FLightSceneProxy::ShouldCreatePerObjectShadowsForDynamicObjects(FLightSceneProxy *this)

{
  return this->bStaticLighting == '\0' && this->bStaticShadowing == '\x01';
}

// UseCSMForDynamicObjects @ 147ee5f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __thiscall FLightSceneProxy::UseCSMForDynamicObjects(FLightSceneProxy *this)

{
  return false;
}

