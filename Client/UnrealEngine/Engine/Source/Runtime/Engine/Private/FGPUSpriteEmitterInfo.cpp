// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147315db0

UScriptStruct * __cdecl FGPUSpriteEmitterInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGPUSpriteEmitterInfo.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FGPUSpriteEmitterInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo,(UObject *)pUVar1,
                         L"GPUSpriteEmitterInfo");
  }
  return Z_Registration_Info_UScriptStruct_FGPUSpriteEmitterInfo.OuterSingleton;
}

// FGPUSpriteEmitterInfo @ 147318350

FGPUSpriteEmitterInfo * __thiscall
FGPUSpriteEmitterInfo::FGPUSpriteEmitterInfo(FGPUSpriteEmitterInfo *this)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  
  (this->SpawnModules).ArrayNum = 0;
  (this->SpawnModules).ArrayMax = 0;
  (this->RequiredModule).field0_0x0.DebugPtr = (UParticleModuleRequired *)0x0;
  (this->SpawnModule).field0_0x0.DebugPtr = (UParticleModuleSpawn *)0x0;
  (this->SpawnPerUnitModule).field0_0x0.DebugPtr = (UParticleModuleSpawnPerUnit *)0x0;
  (this->SpawnModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalVectorField).Field.field0_0x0.DebugPtr = (UVectorField *)0x0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalVectorField).Transform.Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->LocalVectorField).Transform.Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalVectorField).Transform.Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->LocalVectorField).Transform.Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalVectorField).Transform.Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->LocalVectorField).Transform.Scale3D.ZW.m128d_f64 = auVar9;
  (this->LocalVectorField).bIgnoreComponentTransform = 0;
  (this->LocalVectorField).bUseFixDT = 0;
  (this->LocalVectorField).bTileZ = 0;
  (this->LocalVectorField).bTileY = 0;
  (this->LocalVectorField).bTileX = 0;
  (this->LocalVectorField).MinInitialRotation.Pitch = 0.0;
  (this->LocalVectorField).MinInitialRotation.Yaw = 0.0;
  (this->LocalVectorField).MinInitialRotation.Roll = 0.0;
  (this->LocalVectorField).MaxInitialRotation.Pitch = 0.0;
  (this->LocalVectorField).MaxInitialRotation.Yaw = 0.0;
  (this->LocalVectorField).MaxInitialRotation.Roll = 0.0;
  (this->LocalVectorField).RotationRate.Pitch = 0.0;
  (this->LocalVectorField).RotationRate.Yaw = 0.0;
  (this->LocalVectorField).RotationRate.Roll = 0.0;
  (this->LocalVectorField).Intensity = 0.0;
  (this->LocalVectorField).Tightness = 0.0;
  FFloatDistribution::FFloatDistribution(&this->VectorFieldScale);
  FFloatDistribution::FFloatDistribution(&this->DragCoefficient);
  FFloatDistribution::FFloatDistribution(&this->PointAttractorStrength);
  FFloatDistribution::FFloatDistribution(&this->Resilience);
  this->bEnableCollision = 0;
  this->bUseVelocityForMotionBlur = 0;
  this->bRemoveHMDRoll = 0;
  (this->ConstantAcceleration).field0_0x0._s_0.X = 0.0;
  (this->ConstantAcceleration).field0_0x0._s_0.Y = 0.0;
  (this->ConstantAcceleration).field0_0x0._s_0.Z = 0.0;
  (this->PointAttractorPosition).field0_0x0._s_0.X = 0.0;
  (this->PointAttractorPosition).field0_0x0._s_0.Y = 0.0;
  (this->PointAttractorPosition).field0_0x0._s_0.Z = 0.0;
  this->PointAttractorRadiusSq = 0.0;
  (this->OrbitOffsetBase).field0_0x0._s_0.X = 0.0;
  (this->OrbitOffsetBase).field0_0x0._s_0.Y = 0.0;
  (this->OrbitOffsetBase).field0_0x0._s_0.Z = 0.0;
  (this->OrbitOffsetRange).field0_0x0._s_0.X = 0.0;
  (this->OrbitOffsetRange).field0_0x0._s_0.Y = 0.0;
  (this->OrbitOffsetRange).field0_0x0._s_0.Z = 0.0;
  (this->InvMaxSize).field0_0x0._s_0.X = 0.0;
  (this->InvMaxSize).field0_0x0._s_0.Y = 0.0;
  this->InvRotationRateScale = 0.0;
  this->MaxLifetime = 0.0;
  this->MaxParticleCount = 0;
  this->ScreenAlignment = '\0';
  this->LockAxisFlag = '\0';
  (this->CollisionMode).Value = '\0';
  this->MinFacingCameraBlendDistance = 0.0;
  this->MaxFacingCameraBlendDistance = 0.0;
  (this->DynamicColor)._padding_ = 0;
  (this->DynamicColor)._padding_ = 0;
  (this->DynamicColor)._padding_ = 0;
  *(undefined4 *)&(this->DynamicColor)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->DynamicColor)._padding_ + 4) = 0;
  (this->DynamicColor).MinValue = 0.0;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DynamicColor).MaxValue = 0.0;
  (this->DynamicColor).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DynamicColor).MinValueVec.field0_0x0._s_0.Y = (double)uVar10;
  (this->DynamicColor).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DynamicColor).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DynamicColor).MaxValueVec.field0_0x0._s_0.Y = (double)uVar10;
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
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DynamicColorScale).MaxValue = 0.0;
  (this->DynamicColorScale).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DynamicColorScale).MinValueVec.field0_0x0._s_0.Y = (double)uVar10;
  (this->DynamicColorScale).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DynamicColorScale).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DynamicColorScale).MaxValueVec.field0_0x0._s_0.Y = (double)uVar10;
  (this->DynamicColorScale).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->DynamicColorScale).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->DynamicAlphaScale)._padding_ = 0;
  (this->DynamicAlphaScale)._padding_ = 0;
  (this->DynamicAlphaScale)._padding_ = 0;
  *(undefined4 *)&(this->DynamicAlphaScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->DynamicAlphaScale)._padding_ + 4) = 0;
  (this->DynamicAlphaScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  this->Resources = (FGPUSpriteResources *)0x0;
  (this->DynamicAlphaScale).MinValue = 0.0;
  (this->DynamicAlphaScale).MaxValue = 0.0;
  return this;
}

// ~FGPUSpriteEmitterInfo @ 147319410

void __thiscall FGPUSpriteEmitterInfo::~FGPUSpriteEmitterInfo(FGPUSpriteEmitterInfo *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
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
  pFVar2 = (this->Resilience).LookupTable.Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PointAttractorStrength).LookupTable.Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DragCoefficient).LookupTable.Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->VectorFieldScale).LookupTable.Values.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SpawnModules).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

