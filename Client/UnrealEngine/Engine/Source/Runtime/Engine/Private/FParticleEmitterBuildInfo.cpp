// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FParticleEmitterBuildInfo @ 1480f3ae0

FParticleEmitterBuildInfo * __thiscall
FParticleEmitterBuildInfo::FParticleEmitterBuildInfo(FParticleEmitterBuildInfo *this)

{
  undefined1 *puVar1;
  float fVar2;
  undefined8 uVar3;
  
  this->RequiredModule = (UParticleModuleRequired *)0x0;
  this->SpawnModule = (UParticleModuleSpawn *)0x0;
  this->SpawnPerUnitModule = (UParticleModuleSpawnPerUnit *)0x0;
  (this->SpawnModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnModules).ArrayNum = 0;
  (this->SpawnModules).ArrayMax = 0;
  FComposableVectorDistribution::FComposableVectorDistribution(&this->OrbitOffset);
  FComposableVectorDistribution::FComposableVectorDistribution(&this->OrbitInitialRotation);
  FComposableVectorDistribution::FComposableVectorDistribution(&this->OrbitRotationRate);
  FComposableVectorDistribution::FComposableVectorDistribution(&this->ColorScale);
  FComposableFloatDistribution::FComposableFloatDistribution(&this->AlphaScale);
  (this->DynamicColor)._padding_ = 0;
  (this->DynamicColor)._padding_ = 0;
  *(undefined4 *)&(this->DynamicColor)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->DynamicColor)._padding_ + 4) = 0;
  (this->DynamicColor)._padding_ = 0;
  (this->DynamicColor).MinValue = 0.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DynamicColor).MaxValue = 0.0;
  (this->DynamicColor).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DynamicColor).MinValueVec.field0_0x0._s_0.Y = (double)uVar3;
  (this->DynamicColor).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DynamicColor).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DynamicColor).MaxValueVec.field0_0x0._s_0.Y = (double)uVar3;
  (this->DynamicColor).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->DynamicColor).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->DynamicAlpha)._padding_ = 0;
  (this->DynamicAlpha)._padding_ = 0;
  *(undefined4 *)&(this->DynamicAlpha)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->DynamicAlpha)._padding_ + 4) = 0;
  (this->DynamicColorScale)._padding_ = 0;
  (this->DynamicColorScale)._padding_ = 0;
  *(undefined4 *)&(this->DynamicColorScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->DynamicColorScale)._padding_ + 4) = 0;
  (this->DynamicAlpha)._padding_ = 0;
  (this->DynamicAlpha).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->DynamicColorScale)._padding_ = 0;
  (this->DynamicAlpha).MinValue = 0.0;
  (this->DynamicAlpha).MaxValue = 0.0;
  (this->DynamicColorScale).MinValue = 0.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DynamicColorScale).MaxValue = 0.0;
  (this->DynamicColorScale).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DynamicColorScale).MinValueVec.field0_0x0._s_0.Y = (double)uVar3;
  (this->DynamicColorScale).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DynamicColorScale).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DynamicColorScale).MaxValueVec.field0_0x0._s_0.Y = (double)uVar3;
  (this->DynamicColorScale).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->DynamicColorScale).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->DynamicAlphaScale)._padding_ = 0;
  (this->DynamicAlphaScale)._padding_ = 0;
  (this->DynamicAlphaScale)._padding_ = 0;
  *(undefined4 *)&(this->DynamicAlphaScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->DynamicAlphaScale)._padding_ + 4) = 0;
  (this->DynamicAlphaScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->DynamicAlphaScale).MinValue = 0.0;
  (this->DynamicAlphaScale).MaxValue = 0.0;
  FComposableVectorDistribution::FComposableVectorDistribution(&this->SizeScale);
  (this->MaxSize).field0_0x0._s_0.X = 1.0;
  (this->MaxSize).field0_0x0._s_0.Y = 1.0;
  (this->SizeScaleBySpeed).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MaxSizeScaleBySpeed).field0_0x0._s_0.X = 1.0;
  (this->MaxSizeScaleBySpeed).field0_0x0._s_0.Y = 1.0;
  FComposableFloatDistribution::FComposableFloatDistribution(&this->SubImageIndex);
  FComposableFloatDistribution::FComposableFloatDistribution(&this->DragCoefficient);
  FComposableFloatDistribution::FComposableFloatDistribution(&this->DragScale);
  this->bEnableCollision = false;
  this->CollisionResponse = '\0';
  this->CollisionMode = '\0';
  this->CollisionRadiusScale = 1.0;
  this->CollisionRadiusBias = 0.0;
  this->CollisionRandomSpread = 0.0;
  this->CollisionRandomDistribution = 1.0;
  this->Friction = 0.0;
  FComposableFloatDistribution::FComposableFloatDistribution(&this->Resilience);
  FComposableFloatDistribution::FComposableFloatDistribution(&this->ResilienceScaleOverLife);
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PointAttractorPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PointAttractorPosition).field0_0x0._s_0.Y = (double)uVar3;
  (this->PointAttractorPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->PointAttractorRadius = 0.0;
  FComposableFloatDistribution::FComposableFloatDistribution(&this->PointAttractorStrength);
  FComposableFloatDistribution::FComposableFloatDistribution(&this->VectorFieldScale);
  FComposableFloatDistribution::FComposableFloatDistribution(&this->VectorFieldScaleOverLife);
  this->GlobalVectorFieldScale = 0.0;
  this->GlobalVectorFieldTightness = -1.0;
  this->LocalVectorField = (UVectorField *)0x0;
  *&(this->LocalVectorFieldTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->LocalVectorFieldTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->LocalVectorFieldTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->LocalVectorFieldTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->LocalVectorFieldTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->LocalVectorFieldTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->LocalVectorFieldIntensity = 0.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->LocalVectorFieldTightness = 0.0;
  (this->LocalVectorFieldMinInitialRotation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LocalVectorFieldMinInitialRotation).field0_0x0._s_0.Y = (double)uVar3;
  (this->LocalVectorFieldMinInitialRotation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LocalVectorFieldMaxInitialRotation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LocalVectorFieldMaxInitialRotation).field0_0x0._s_0.Y = (double)uVar3;
  (this->LocalVectorFieldMaxInitialRotation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LocalVectorFieldRotationRate).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LocalVectorFieldRotationRate).field0_0x0._s_0.Y = (double)uVar3;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  fVar2 = __real_3f800000;
  this->bLocalVectorFieldIgnoreComponentTransform = 0;
  this->bRemoveHMDRoll = 0;
  this->bUseVelocityForMotionBlur = 0;
  this->bLocalVectorFieldUseFixDT = 0;
  this->bLocalVectorFieldTileZ = 0;
  this->bLocalVectorFieldTileY = 0;
  this->bLocalVectorFieldTileX = 0;
  (this->LocalVectorFieldRotationRate).field0_0x0._s_0.Z = (double)uVar3;
  (this->ConstantAcceleration).field0_0x0._s_0.X = 0.0;
  (this->ConstantAcceleration).field0_0x0._s_0.Y = 0.0;
  (this->ConstantAcceleration).field0_0x0._s_0.Z = 0.0;
  (this->PivotOffset).field0_0x0._s_0.X = -0.5;
  (this->PivotOffset).field0_0x0._s_0.Y = -0.5;
  this->MaxLifetime = 1.0;
  this->MaxRotationRate = 1.0;
  this->EstimatedMaxActiveParticleCount = 0;
  this->ScreenAlignment = 1;
  this->MinFacingCameraBlendDistance = 0.0;
  this->MaxFacingCameraBlendDistance = 0.0;
  FComposableFloatDistribution::InitializeWithConstant(&this->DragScale,fVar2);
  FComposableFloatDistribution::InitializeWithConstant(&this->VectorFieldScale,__real_3f800000);
  FComposableFloatDistribution::InitializeWithConstant
            (&this->VectorFieldScaleOverLife,__real_3f800000);
  return this;
}

// ~FParticleEmitterBuildInfo @ 1480f6ec0

void __thiscall
FParticleEmitterBuildInfo::~FParticleEmitterBuildInfo(FParticleEmitterBuildInfo *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  pvVar1 = *(void **)&(this->VectorFieldScaleOverLife).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->VectorFieldScale).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->PointAttractorStrength).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->ResilienceScaleOverLife).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->Resilience).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->DragScale).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->DragCoefficient).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->SubImageIndex).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->SizeScale).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->DynamicAlphaScale)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->DynamicColorScale)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->DynamicAlpha)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->DynamicColor)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->AlphaScale).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->ColorScale).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->OrbitRotationRate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->OrbitInitialRotation).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->OrbitOffset).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->SpawnModules).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

