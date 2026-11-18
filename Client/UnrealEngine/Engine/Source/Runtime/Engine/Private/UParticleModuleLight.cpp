// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// StaticClass @ 1472f8980

UClass * __cdecl UParticleModuleLight::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLight",
               &Z_Registration_Info_UClass_UParticleModuleLight.InnerSingleton,
               StaticRegisterNativesUParticleModuleLight,0x140,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleLight>,
               InternalVTableHelperCtorCaller<UParticleModuleLight>,local_res8,
               UParticleModuleLightBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLight.InnerSingleton;
}

// UParticleModuleLight @ 1472fd500

UParticleModuleLight * __thiscall
UParticleModuleLight::UParticleModuleLight(UParticleModuleLight *this,FVTableHelper *param_1)

{
  FLightingChannels *pFVar1;
  FLightingChannels *pFVar2;
  undefined8 uVar3;
  
  UParticleModuleLightBase::UParticleModuleLightBase((UParticleModuleLightBase *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleLight__6B_;
  (this->ColorScaleOverLife)._padding_ = 0;
  (this->ColorScaleOverLife)._padding_ = 0;
  *(undefined4 *)&(this->ColorScaleOverLife)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->ColorScaleOverLife)._padding_ + 4) = 0;
  (this->ColorScaleOverLife)._padding_ = 0;
  (this->ColorScaleOverLife).MinValue = 0.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ColorScaleOverLife).MaxValue = 0.0;
  (this->ColorScaleOverLife).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ColorScaleOverLife).MinValueVec.field0_0x0._s_0.Y = (double)uVar3;
  (this->ColorScaleOverLife).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ColorScaleOverLife).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ColorScaleOverLife).MaxValueVec.field0_0x0._s_0.Y = (double)uVar3;
  (this->ColorScaleOverLife).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ColorScaleOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->BrightnessOverLife)._padding_ = 0;
  (this->BrightnessOverLife)._padding_ = 0;
  (this->BrightnessOverLife)._padding_ = 0;
  *(undefined4 *)&(this->BrightnessOverLife)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->BrightnessOverLife)._padding_ + 4) = 0;
  (this->BrightnessOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->RadiusScale)._padding_ = 0;
  (this->RadiusScale)._padding_ = 0;
  (this->RadiusScale)._padding_ = 0;
  *(undefined4 *)&(this->RadiusScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->RadiusScale)._padding_ + 4) = 0;
  (this->RadiusScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->LightExponent)._padding_ = 0;
  (this->LightExponent)._padding_ = 0;
  (this->LightExponent)._padding_ = 0;
  *(undefined4 *)&(this->LightExponent)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->LightExponent)._padding_ + 4) = 0;
  (this->LightExponent).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  this->InverseExposureBlend = 0.0;
  (this->BrightnessOverLife).MinValue = 0.0;
  (this->BrightnessOverLife).MaxValue = 0.0;
  (this->RadiusScale).MinValue = 0.0;
  (this->RadiusScale).MaxValue = 0.0;
  (this->LightExponent).MinValue = 0.0;
  (this->LightExponent).MaxValue = 0.0;
  pFVar2 = &this->LightingChannels;
  pFVar2->bChannel0 = '\x01';
  pFVar2->bChannel2 = '\0';
  pFVar2->bChannel1 = '\0';
  return this;
}

// ~UParticleModuleLight @ 1472fe040

void __thiscall UParticleModuleLight::~UParticleModuleLight(UParticleModuleLight *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleLight__6B_;
  pvVar1 = (void *)(this->LightExponent)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->RadiusScale)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->BrightnessOverLife)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->ColorScaleOverLife)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UParticleModuleLightBase::~UParticleModuleLightBase((UParticleModuleLightBase *)this);
  return;
}

// GetModuleType @ 1472ff870

EModuleType __thiscall UParticleModuleLight::GetModuleType(UParticleModuleLight *this)

{
  return EPMT_Light;
}

// GetPrivateStaticClass @ 1473015b0

UClass * __cdecl UParticleModuleLight::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLight",
               &Z_Registration_Info_UClass_UParticleModuleLight.InnerSingleton,
               StaticRegisterNativesUParticleModuleLight,0x140,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleLight>,
               InternalVTableHelperCtorCaller<UParticleModuleLight>,local_res8,
               UParticleModuleLightBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLight.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleLight @ 147301970

void __cdecl UParticleModuleLight::StaticRegisterNativesUParticleModuleLight(void)

{
  return;
}

// UParticleModuleLight @ 14815c640

UParticleModuleLight * __thiscall
UParticleModuleLight::UParticleModuleLight(UParticleModuleLight *this,FObjectInitializer *param_1)

{
  FLightingChannels *pFVar1;
  FLightingChannels *pFVar2;
  FLightingChannels FVar3;
  undefined8 uVar4;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  (this->ColorScaleOverLife)._padding_ = 0;
  (this->ColorScaleOverLife)._padding_ = 0;
  *(undefined4 *)&(this->ColorScaleOverLife)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->ColorScaleOverLife)._padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UParticleModuleLight__6B_;
  (this->ColorScaleOverLife)._padding_ = 0;
  (this->ColorScaleOverLife).MinValue = 0.0;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ColorScaleOverLife).MaxValue = 0.0;
  (this->ColorScaleOverLife).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ColorScaleOverLife).MinValueVec.field0_0x0._s_0.Y = (double)uVar4;
  (this->ColorScaleOverLife).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ColorScaleOverLife).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ColorScaleOverLife).MaxValueVec.field0_0x0._s_0.Y = (double)uVar4;
  (this->ColorScaleOverLife).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ColorScaleOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->BrightnessOverLife)._padding_ = 0;
  (this->BrightnessOverLife)._padding_ = 0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x73;
  pFVar2 = &this->LightingChannels;
  pFVar2->bChannel0 = '\x01';
  pFVar2->bChannel2 = '\0';
  pFVar2->bChannel1 = '\0';
  (this->BrightnessOverLife)._padding_ = 0;
  *(undefined4 *)&(this->BrightnessOverLife)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->BrightnessOverLife)._padding_ + 4) = 0;
  (this->BrightnessOverLife).MinValue = 0.0;
  (this->BrightnessOverLife).MaxValue = 0.0;
  (this->BrightnessOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->RadiusScale)._padding_ = 0;
  (this->RadiusScale)._padding_ = 0;
  (this->RadiusScale)._padding_ = 0;
  *(undefined4 *)&(this->RadiusScale)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->RadiusScale)._padding_ + 4) = 0;
  (this->RadiusScale).MinValue = 0.0;
  (this->RadiusScale).MaxValue = 0.0;
  (this->RadiusScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->LightExponent)._padding_ = 0;
  (this->LightExponent)._padding_ = 0;
  (this->LightExponent)._padding_ = 0;
  *(undefined4 *)&(this->LightExponent)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->LightExponent)._padding_ + 4) = 0;
  (this->LightExponent).MinValue = 0.0;
  (this->LightExponent).MaxValue = 0.0;
  (this->LightExponent).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  this->InverseExposureBlend = 0.0;
  this->bUseInverseSquaredFalloff = true;
  this->SpawnFraction = 1.0;
  this->VolumetricScatteringIntensity = 0.0;
  return this;
}

// CanTickInAnyThread @ 148168a60

bool __thiscall UParticleModuleLight::CanTickInAnyThread(UParticleModuleLight *this)

{
  return this->bHighQualityLights == false;
}

// InitializeDefaults @ 148183aa0

void __thiscall UParticleModuleLight::InitializeDefaults(UParticleModuleLight *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorConstant *pUVar3;
  UDistributionFloatConstant *pUVar4;
  FName local_res8;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->ColorScaleOverLife);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionColorScaleOverLife");
    pUVar3 = NewObject<UDistributionVectorConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->ColorScaleOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->BrightnessOverLife);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionBrightnessOverLife");
    pUVar4 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDistributionFloatConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->BrightnessOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->RadiusScale);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionRadiusScale");
    pUVar4 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDistributionFloatConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->RadiusScale).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->LightExponent);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionLightExponent");
    pUVar4 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDistributionFloatConstant *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->LightExponent).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar4;
  }
  if (this->bHighQualityLights == false) {
    this->bShadowCastingLights = false;
  }
  return;
}

// PostInitProperties @ 14818a3e0

void __thiscall UParticleModuleLight::PostInitProperties(UParticleModuleLight *this)

{
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    InitializeDefaults(this);
    return;
  }
  return;
}

// Render3DPreview @ 14818fdc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UParticleModuleLight::Render3DPreview(UParticleModuleLight *this,FPreviewContext *param_1)

{
  return;
}

// RequiredBytes @ 148191840

uint __thiscall
UParticleModuleLight::RequiredBytes(UParticleModuleLight *this,UParticleModuleTypeDataBase *param_1)

{
  return 0x28;
}

// SetToSensibleDefaults @ 148197bd0

void __thiscall
UParticleModuleLight::SetToSensibleDefaults(UParticleModuleLight *this,UParticleEmitter *param_1)

{
  UDistributionVector *pUVar1;
  UDistributionFloat *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  if ((this->ColorScaleOverLife).Distribution.field0_0x0.DebugPtr != (UDistributionVector *)0x0) {
    pUVar4 = Z_Construct_UClass_UDistributionVectorConstant_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&(this->ColorScaleOverLife).Distribution,pUVar4);
    if ((bVar3) &&
       (pUVar1 = (this->ColorScaleOverLife).Distribution.field0_0x0.DebugPtr,
       pUVar1 != (UDistributionVector *)0x0)) {
      pUVar1[1]._padding_ = 0x3ff0000000000000;
      pUVar1[1]._padding_ = 0x3ff0000000000000;
      pUVar1[1]._padding_ = 0x3ff0000000000000;
      pUVar1->bIsDirty = '\x01';
    }
  }
  if ((this->BrightnessOverLife).Distribution.field0_0x0.DebugPtr != (UDistributionFloat *)0x0) {
    pUVar4 = Z_Construct_UClass_UDistributionFloatConstant_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&(this->BrightnessOverLife).Distribution,pUVar4);
    if ((bVar3) &&
       (pUVar2 = (this->BrightnessOverLife).Distribution.field0_0x0.DebugPtr,
       pUVar2 != (UDistributionFloat *)0x0)) {
      pUVar2->bIsDirty = '\x01';
      *(undefined4 *)&pUVar2[1]._padding_ = 0x42000000;
    }
  }
  if ((this->RadiusScale).Distribution.field0_0x0.DebugPtr != (UDistributionFloat *)0x0) {
    pUVar4 = Z_Construct_UClass_UDistributionFloatConstant_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&(this->RadiusScale).Distribution,pUVar4);
    if ((bVar3) &&
       (pUVar2 = (this->RadiusScale).Distribution.field0_0x0.DebugPtr,
       pUVar2 != (UDistributionFloat *)0x0)) {
      pUVar2->bIsDirty = '\x01';
      *(undefined4 *)&pUVar2[1]._padding_ = 0x41700000;
    }
  }
  if ((this->LightExponent).Distribution.field0_0x0.DebugPtr != (UDistributionFloat *)0x0) {
    pUVar4 = Z_Construct_UClass_UDistributionFloatConstant_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&(this->LightExponent).Distribution,pUVar4);
    if ((bVar3) &&
       (pUVar2 = (this->LightExponent).Distribution.field0_0x0.DebugPtr,
       pUVar2 != (UDistributionFloat *)0x0)) {
      pUVar2->bIsDirty = '\x01';
      *(undefined4 *)&pUVar2[1]._padding_ = 0x41800000;
    }
  }
  return;
}

// Spawn @ 14819ab20

void __thiscall UParticleModuleLight::Spawn(UParticleModuleLight *this,FSpawnContext *param_1)

{
  FRandomStream *pFVar1;
  
  pFVar1 = &FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                      ((FParticleEmitterInstance *)param_1->_padding_,(UParticleModule *)this)->
            RandomStream;
  if (pFVar1 == (FRandomStream *)0x0) {
    pFVar1 = (FRandomStream *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x120))();
  }
  SpawnEx(this,param_1,pFVar1);
  return;
}

// SpawnEx @ 14819e540

void __thiscall
UParticleModuleLight::SpawnEx
          (UParticleModuleLight *this,FSpawnContext *param_1,FRandomStream *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  FBaseParticle *pFVar4;
  FParticleEmitterInstance *pFVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  UObject *pUVar10;
  TVector<double> *pTVar11;
  ulong64 uVar12;
  longlong lVar13;
  FLightParticlePayload *pFVar14;
  float fVar15;
  TVector<double> local_58 [2];
  
  pTVar6 = CVarParticleLightQuality.Ref;
  bVar7 = IsInParallelGameThread();
  lVar13 = 4;
  if ((bVar7) || (bVar7 = IsInGameThread(), bVar7)) {
    lVar9 = 0;
  }
  else {
    lVar9 = 4;
  }
  iVar3 = *(int *)((longlong)pTVar6->ShadowedValue + lVar9);
  if (0 < iVar3) {
    pFVar4 = param_1->ParticleBase;
    pFVar14 = (FLightParticlePayload *)
              ((longlong)&(pFVar4->OldLocation).field0_0x0 + (ulonglong)(uint)param_1->Offset);
    pFVar5 = (FParticleEmitterInstance *)param_1->_padding_;
    pUVar10 = (UObject *)(**(code **)((longlong)*pFVar5->Component + 8))();
    fVar15 = FRawDistributionFloat::GetValue
                       (&this->BrightnessOverLife,pFVar4->RelativeTime,pUVar10,param_2);
    pUVar10 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
    pTVar11 = FRawDistributionVector::GetValue
                        (&this->ColorScaleOverLife,local_58,pFVar4->RelativeTime,pUVar10,0,param_2);
    dVar1 = (pTVar11->field0_0x0)._s_0.Y;
    dVar2 = (pTVar11->field0_0x0)._s_0.Z;
    (pFVar14->ColorScale).field0_0x0._s_0.X = (float)(pTVar11->field0_0x0)._s_0.X * fVar15;
    (pFVar14->ColorScale).field0_0x0._s_0.Y = (float)dVar1 * fVar15;
    (pFVar14->ColorScale).field0_0x0._s_0.Z = (float)dVar2 * fVar15;
    pUVar10 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
    fVar15 = FRawDistributionFloat::GetValue(&this->RadiusScale,pFVar5->EmitterTime,pUVar10,param_2)
    ;
    pFVar14->RadiusScale = fVar15;
    if (this->bUseInverseSquaredFalloff == false) {
      pUVar10 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
      fVar15 = FRawDistributionFloat::GetValue
                         (&this->LightExponent,pFVar5->EmitterTime,pUVar10,param_2);
    }
    else {
      fVar15 = 0.0;
    }
    pFVar14->LightExponent = fVar15;
    pTVar6 = CVarParticleDefaultLightInverseExposureBlend.Ref;
    if (this->bOverrideInverseExposureBlend == 0) {
      bVar7 = IsInParallelGameThread();
      if ((bVar7) || (bVar7 = IsInGameThread(), bVar7)) {
        lVar13 = 0;
      }
      fVar15 = (float)*(int *)((longlong)pTVar6->ShadowedValue + lVar13);
    }
    else {
      fVar15 = this->InverseExposureBlend;
    }
    pFVar14->InverseExposureBlend = fVar15;
    uVar8 = param_2->Seed * 0xbb38435 + 0x3619636b;
    param_2->Seed = uVar8;
    bVar7 = (float)(uVar8 >> 9 | 0x3f800000) - __real_3f800000 < this->SpawnFraction;
    pFVar14->bValid = bVar7;
    pFVar14->bAffectsTranslucency = this->bAffectsTranslucency;
    pFVar14->bHighQuality = this->bHighQualityLights;
    pFVar14->LightId = 0;
    if (((this->bHighQualityLights != false) && (1 < iVar3)) && (bVar7)) {
      uVar12 = SpawnHQLight(this,pFVar14,pFVar4,pFVar5);
      pFVar14->LightId = uVar12;
    }
  }
  return;
}

// SpawnHQLight @ 1481a14e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ulong64 __thiscall
UParticleModuleLight::SpawnHQLight
          (UParticleModuleLight *this,FLightParticlePayload *param_1,FBaseParticle *param_2,
          FParticleEmitterInstance *param_3)

{
  int *piVar1;
  TArray<UPointLightComponent_*,TSizedDefaultAllocator<32>_> *pTVar2;
  UObject *pUVar3;
  FName *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  UClass *pUVar10;
  FName this_00;
  ulong64 uVar11;
  longlong *plVar12;
  USceneComponent *pUVar13;
  FName FVar14;
  undefined1 auStackY_198 [32];
  FName local_148;
  int local_140 [2];
  undefined8 local_138;
  undefined8 local_130;
  FBaseParticle *local_128;
  FLightParticlePayload *local_120;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_f8;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
  if ((((param_3 == (FParticleEmitterInstance *)0x0) ||
       (local_128 = param_2, local_120 = param_1,
       lVar9 = (**(code **)((longlong)*param_3->Component + 0x138))(), lVar9 == 0)) ||
      (pUVar3 = *(UObject **)(lVar9 + 0xa8), pUVar3 == (UObject *)0x0)) ||
     (((pUVar3[2].field_0xd & 2) != 0 || ((*(uint *)&pUVar3->field_0x8 >> 0x1e & 1) != 0)))) {
    return 0;
  }
  local_138 = 0;
  FObjectInitializer::AssertIfInConstructor
            (pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar10 = Z_Construct_UClass_UPointLightComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_d8,pUVar10);
  local_d8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_d8._56_8_ = (UPackage *)0x0;
  local_d8._16_4_ = 0;
  local_d8._20_4_ = 0;
  local_d8._24_4_ = RF_Transient;
  local_d8._40_8_ = (UObject *)0x0;
  local_d8[0x20] = false;
  local_d8._8_8_ = pUVar3;
  this_00 = (FName)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
  if (local_d8._64_8_ != 0) {
    plVar12 = (longlong *)(local_d8 + 0x50);
    if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_d8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (this_00 == (FName)0x0) {
    return 0;
  }
  pUVar13 = *(USceneComponent **)(pUVar3 + 0xb);
  local_148 = this_00;
  if (*(USceneComponent **)(lVar9 + 0xd0) == (USceneComponent *)0x0) {
    if (pUVar13 == (USceneComponent *)0x0) goto LAB_1481a1623;
    local_130 = 0;
  }
  else {
    FVar14 = *(FName *)(lVar9 + 0xd8);
    pUVar13 = *(USceneComponent **)(lVar9 + 0xd0);
  }
  USceneComponent::SetupAttachment((USceneComponent *)this_00,pUVar13,FVar14);
LAB_1481a1623:
  *(undefined1 *)((longlong)local_148 + 0xb9) = *(undefined1 *)(lVar9 + 0xb9);
  *(FLightingChannels *)((longlong)local_148 + 0x2ec) = this->LightingChannels;
  *(uint *)((longlong)local_148 + 0x3e0) =
       ((uint)this->bUseInverseSquaredFalloff ^ *(uint *)((longlong)local_148 + 0x3e0)) & 1 ^
       *(uint *)((longlong)local_148 + 0x3e0);
  *(uint *)((longlong)local_148 + 0x27c) =
       ((uint)this->bAffectsTranslucency << 4 ^ *(uint *)((longlong)local_148 + 0x27c)) & 0x10 ^
       *(uint *)((longlong)local_148 + 0x27c);
  *(float *)((longlong)local_148 + 0x290) = this->VolumetricScatteringIntensity;
  ULightComponentBase::SetCastShadows((ULightComponentBase *)local_148,this->bShadowCastingLights);
  UActorComponent::RegisterComponent((UActorComponent *)local_148);
  pTVar2 = &param_3->HighQualityLights;
  pFVar4 = (FName *)(pTVar2->AllocatorInstance).Data;
  if (((pFVar4 <= &local_148) && (&local_148 < pFVar4 + (param_3->HighQualityLights).ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return uVar11;
  }
  iVar8 = (param_3->HighQualityLights).ArrayNum;
  piVar1 = &(param_3->HighQualityLights).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  (param_3->HighQualityLights).ArrayNum = iVar8 + 1;
  *(FName *)(pFVar5 + (longlong)iVar8 * 8) = local_148;
  FParticleEmitterInstance::GetScreenAlignmentAndScale
            (param_3,local_140,(TVector<double> *)&local_118._s_0);
  bVar7 = FParticleEmitterInstance::UseLocalSpace(param_3);
  local_f8._s_0.X = local_118._s_0.X;
  local_f8._s_0.Y = local_118._s_0.Y;
  local_f8._s_0.Z = local_118._s_0.Z;
  UpdateHQLight(this,(UPointLightComponent *)local_148,local_120,local_128,local_140[0],
                (TVector<double> *)&local_f8._s_0,bVar7,(FSceneInterface *)0x0,false);
  return (ulong64)this_00;
}

// Update @ 1481ad780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UParticleModuleLight::Update(UParticleModuleLight *this,FUpdateContext *param_1)

{
  int *piVar1;
  TArray<UPointLightComponent_*,TSizedDefaultAllocator<32>_> *pTVar2;
  uint *puVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  UParticleLODLevel *pUVar16;
  UObject *pUVar17;
  TVector<double> *pTVar18;
  ulonglong uVar19;
  byte bVar20;
  int iVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  TSparseSetElement<unsigned___int64> *pTVar27;
  ForElementType<unsigned_int> FVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  FBaseParticle *pFVar32;
  FParticleEmitterInstance *this_00;
  FLightParticlePayload *pFVar33;
  longlong lVar34;
  float fVar35;
  undefined1 auStackY_1f8 [32];
  int local_19c;
  int local_198 [2];
  longlong local_190;
  int local_188;
  uint uStack_184;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_180;
  undefined4 local_178;
  int iStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  int local_164;
  FSceneInterface *local_158;
  UParticleModuleLight *local_150;
  FUpdateContext *local_148;
  FParticleEmitterInstance *local_140;
  longlong *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_130;
  FSparseArrayAllocationInfo local_110;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  TVector<double> local_c8;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined1 local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  this_00 = (FParticleEmitterInstance *)param_1->_padding_;
  if ((((this_00 != (FParticleEmitterInstance *)0x0) && (0 < this_00->ActiveParticles)) &&
      (this_00->ParticleData != (uchar *)0x0)) && (this_00->ParticleIndices != (ushort *)0x0)) {
    local_150 = this;
    local_148 = param_1;
    local_140 = this_00;
    local_158 = (FSceneInterface *)(**(code **)((longlong)*this_00->Component + 0x68))();
    local_7c = 0x80;
    local_a8._0_8_ = (FScriptContainerElement *)0x0;
    local_a8._8_8_ = 0;
    local_88 = (ForElementType<unsigned_int>)0x0;
    local_80 = 0;
    local_74 = 0;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = 0;
    local_78 = -1;
    pUVar16 = UParticleEmitter::GetCurrentLODLevel(this_00->SpriteTemplate,this_00);
    if ((pUVar16 == (UParticleLODLevel *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("LODLevel",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                            ,0xcae,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    bVar11 = FParticleEmitterInstance::UseLocalSpace(this_00);
    FParticleEmitterInstance::GetScreenAlignmentAndScale
              (this_00,local_198,(TVector<double> *)&local_100._s_0);
    lVar34 = param_1->_padding_;
    uVar14 = param_1->Offset;
    lVar24 = *(longlong *)(lVar34 + 0x168);
    iVar15 = *(int *)(lVar34 + 0x188);
    lVar6 = *(longlong *)(lVar34 + 0x170);
    iVar21 = *(int *)(lVar34 + 0x18c) + -1;
    lVar34 = (longlong)iVar21;
    local_190 = lVar24;
    if (-1 < iVar21) {
      do {
        pTVar27 = (TSparseSetElement<unsigned___int64> *)0x0;
        pFVar32 = (FBaseParticle *)
                  ((ulonglong)((uint)*(ushort *)(lVar6 + lVar34 * 2) * iVar15) + lVar24);
        if ((pFVar32->Flags & 0x4000000U) == 0) {
          pFVar33 = (FLightParticlePayload *)
                    ((longlong)&(pFVar32->OldLocation).field0_0x0 + (ulonglong)uVar14);
          pUVar17 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
          fVar35 = FRawDistributionFloat::GetValue
                             (&this->BrightnessOverLife,pFVar32->RelativeTime,pUVar17,
                              (FRandomStream *)0x0);
          pUVar17 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
          pTVar18 = FRawDistributionVector::GetValue
                              (&this->ColorScaleOverLife,&local_c8,pFVar32->RelativeTime,pUVar17,0,
                               (FRandomStream *)0x0);
          dVar4 = (pTVar18->field0_0x0)._s_0.Y;
          dVar5 = (pTVar18->field0_0x0)._s_0.Z;
          (pFVar33->ColorScale).field0_0x0._s_0.X = (float)(pTVar18->field0_0x0)._s_0.X * fVar35;
          (pFVar33->ColorScale).field0_0x0._s_0.Y = (float)dVar4 * fVar35;
          (pFVar33->ColorScale).field0_0x0._s_0.Z = (float)dVar5 * fVar35;
          lVar24 = local_190;
          if ((this->bHighQualityLights != false) && (pFVar33->LightId != 0)) {
            if (local_74 == 0) {
              iVar21 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x10,8,1,(ForAnyElementType *)local_a8,(int *)(local_a8 + 8),
                                  (int *)(local_a8 + 0xc));
              iVar13 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                 ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),1);
              FVar28 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
              if (local_88 != (ForElementType<unsigned_int>)0x0) {
                FVar28 = local_88;
              }
              bVar20 = (byte)iVar13 & 0x1f;
              if (iVar13 < 0) {
                iVar13 = iVar13 + 0x1f;
                bVar20 = bVar20 - 0x20;
              }
              puVar3 = (uint *)((longlong)FVar28 + (longlong)(iVar13 >> 5) * 4);
              *puVar3 = *puVar3 & ~(1 << (bVar20 & 0x1f));
              iVar13 = local_78;
            }
            else {
              local_74 = local_74 + -1;
              iVar13 = *(int *)(local_a8._0_8_ + (longlong)local_78 * 0x10 + 4);
              iVar21 = local_78;
              if (local_74 != 0) {
                *(undefined4 *)(local_a8._0_8_ + (longlong)iVar13 * 0x10) = 0xffffffff;
              }
            }
            local_78 = iVar13;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_a8,&local_110,iVar21);
            if (local_110.Pointer != (TSparseSetElement<unsigned___int64> *)0x0) {
              *(ulong64 *)local_110.Pointer = pFVar33->LightId;
              *(undefined4 *)((longlong)local_110.Pointer + 8) = 0xffffffff;
              pTVar27 = local_110.Pointer;
            }
            local_19c = local_110.Index;
            uVar26 = (int)((ulonglong)*(undefined8 *)pTVar27 >> 0x20) * 0x17 +
                     (int)*(undefined8 *)pTVar27;
            bVar12 = TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                     ::TryReplaceExisting
                               ((TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
                                 *)local_a8,uVar26,pTVar27,&local_19c,(bool *)0x0);
            if (!bVar12) {
              uVar25 = 1;
              uVar23 = local_a8._8_4_ - local_74;
              if (3 < uVar23) {
                uVar29 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
                lVar24 = 0x3f;
                if (uVar29 != 0) {
                  for (; uVar29 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                  }
                }
                local_168 = (undefined4)lVar24;
                uVar25 = 1 << ((byte)lVar24 & 0x1f);
              }
              if (((int)uVar23 < 1) || ((int)uVar25 <= (int)local_60)) {
                uVar26 = local_60 - 1 & uVar26;
                *(uint *)&pTVar27->field_0xc = uVar26;
                FVar22.Data = (FScriptContainerElement *)local_70;
                if ((ForElementType<FSetElementId>)local_68.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar22.Data = local_68.Data;
                }
                uVar29 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar26;
                *(undefined4 *)&pTVar27->field_0x8 =
                     *(undefined4 *)((longlong)FVar22.Data + uVar29 * 4);
                *(int *)((longlong)FVar22.Data + uVar29 * 4) = local_19c;
              }
              else {
                local_60 = uVar25;
                if ((ForElementType<FSetElementId>)local_68.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_68,0,0,4);
                }
                if (uVar25 != 0) {
                  uVar26 = uVar25;
                  if (uVar25 < 2) {
                    if ((ForElementType<FSetElementId>)local_68.Data !=
                        (ForElementType<FSetElementId>)0x0) {
                      uVar26 = 0;
                      goto LAB_1481adb75;
                    }
                  }
                  else {
LAB_1481adb75:
                    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                              (&local_68,0,uVar26,4);
                  }
                  if (0 < (int)uVar25) {
                    uVar30 = (ulonglong)uVar25;
                    uVar29 = 0;
                    do {
                      FVar22.Data = (FScriptContainerElement *)local_70;
                      if ((ForElementType<FSetElementId>)local_68.Data !=
                          (ForElementType<FSetElementId>)0x0) {
                        FVar22.Data = local_68.Data;
                      }
                      uVar19 = uVar29 & (longlong)(int)uVar25 - 1U;
                      uVar29 = uVar29 + 1;
                      *(undefined4 *)((longlong)FVar22.Data + uVar19 * 4) = 0xffffffff;
                      uVar30 = uVar30 - 1;
                    } while (uVar30 != 0);
                  }
                }
                if (local_60 != 0) {
                  pTStack_180 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
                  uStack_184 = 1;
                  local_188 = 0;
                  iStack_174 = 0;
                  iStack_170 = 0;
                  if (local_80 != 0) {
                    FVar28 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
                    if (local_88 != (ForElementType<unsigned_int>)0x0) {
                      FVar28 = local_88;
                    }
                    uVar26 = *(uint *)FVar28;
                    iStack_170 = 0;
                    local_188 = 0;
                    while (uVar26 == 0) {
                      iStack_170 = iStack_170 + 0x20;
                      lVar24 = (longlong)local_188;
                      local_188 = local_188 + 1;
                      if ((int)(local_80 + -1 + (local_80 + -1 >> 0x1f & 0x1fU)) >> 5 < local_188)
                      goto LAB_1481adc81;
                      uVar26 = ((uint *)((longlong)FVar28 + 4))[lVar24];
                    }
                    uStack_184 = -uVar26 & uVar26;
                    uVar29 = (ulonglong)uStack_184 * 2 + 1;
                    lVar24 = 0x3f;
                    if (uVar29 != 0) {
                      for (; uVar29 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                      }
                    }
                    local_164 = (int)lVar24;
                    iStack_174 = iStack_170 + -1 + local_164;
                    if (local_80 < iStack_174) {
LAB_1481adc81:
                      iStack_174 = local_80;
                    }
                  }
                  local_178 = 0xffffffff;
                  local_138 = (longlong *)local_a8;
                  local_130._padding_ = CONCAT44(uStack_184,local_188);
                  local_130.CurrentBitIndex = iStack_174;
                  local_130.UnvisitedBitMask = 0xffffffff;
                  local_130._28_4_ = uStack_16c;
                  local_130.BaseBitIndex = iStack_170;
                  local_130.Array = pTStack_180;
                  iVar21 = iStack_174;
                  if (iStack_174 < local_80) {
                    do {
                      lVar24 = *local_138;
                      lVar31 = (longlong)iVar21;
                      uVar7 = *(undefined8 *)(lVar24 + lVar31 * 0x10);
                      uVar26 = (int)((ulonglong)uVar7 >> 0x20) * 0x17 + (int)uVar7 & local_60 - 1;
                      *(uint *)(lVar24 + 0xc + lVar31 * 0x10) = uVar26;
                      FVar22.Data = (FScriptContainerElement *)local_70;
                      if ((ForElementType<FSetElementId>)local_68.Data !=
                          (ForElementType<FSetElementId>)0x0) {
                        FVar22.Data = local_68.Data;
                      }
                      uVar29 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar26;
                      *(undefined4 *)(lVar24 + 8 + lVar31 * 0x10) =
                           *(undefined4 *)((longlong)FVar22.Data + uVar29 * 4);
                      *(int *)((longlong)FVar22.Data + uVar29 * 4) = iVar21;
                      local_130.UnvisitedBitMask =
                           local_130.UnvisitedBitMask & ~local_130._padding_._4_4_;
                      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_130);
                      iVar21 = local_130.CurrentBitIndex;
                    } while (local_130.CurrentBitIndex < (local_130.Array)->NumBits);
                  }
                }
              }
            }
            this = local_150;
            local_e8._s_0.X = local_100._s_0.X;
            local_e8._s_0.Y = local_100._s_0.Y;
            local_e8._s_0.Z = local_100._s_0.Z;
            UpdateHQLight(local_150,(UPointLightComponent *)pFVar33->LightId,pFVar33,pFVar32,
                          local_198[0],(TVector<double> *)&local_e8._s_0,bVar11,local_158,true);
            lVar24 = local_190;
            param_1 = local_148;
          }
        }
        lVar34 = lVar34 + -1;
        this_00 = local_140;
      } while (-1 < lVar34);
    }
    uVar29 = 0;
    if ((this->bHighQualityLights != false) && (0 < (this_00->HighQualityLights).ArrayNum)) {
      pTVar2 = &this_00->HighQualityLights;
      uVar30 = uVar29;
      do {
        uVar26 = (uint)uVar29;
        uVar23 = ~uVar26 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar26 < (this_00->HighQualityLights).ArrayNum) {
          uVar14 = uVar23;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        plVar8 = *(longlong **)((pTVar2->AllocatorInstance).Data + uVar30);
        if (plVar8 != (longlong *)0x0) {
          if (local_a8._8_4_ != local_74) {
            FVar22.Data = (FScriptContainerElement *)local_70;
            if ((ForElementType<FSetElementId>)local_68.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar22.Data = local_68.Data;
            }
            for (iVar15 = *(int *)((longlong)FVar22.Data +
                                  (((ulonglong)plVar8 >> 0x20) * 0x17 + (longlong)plVar8 &
                                  (ulonglong)(local_60 - 1)) * 4); iVar15 != -1;
                iVar15 = *(int *)(local_a8._0_8_ + (longlong)iVar15 * 0x10 + 8)) {
              if (*(longlong **)(local_a8._0_8_ + (longlong)iVar15 * 0x10) == plVar8)
              goto LAB_1481adf96;
            }
          }
          (**(code **)(*plVar8 + 0x4a0))(plVar8,0);
          uVar14 = 0;
          if ((int)uVar26 < (this_00->HighQualityLights).ArrayNum) {
            uVar14 = uVar23;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar21 = (this_00->HighQualityLights).ArrayNum;
          pFVar9 = (pTVar2->AllocatorInstance).Data;
          iVar15 = ~uVar26 + iVar21;
          if (1 < iVar15) {
            iVar15 = 1;
          }
          if (iVar15 != 0) {
            memmove(pFVar9 + (longlong)(int)uVar26 * 8,pFVar9 + (longlong)(iVar21 - iVar15) * 8,
                    (longlong)iVar15 << 3);
          }
          piVar1 = &(this_00->HighQualityLights).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar2->AllocatorInstance,(this_00->HighQualityLights).ArrayNum,
                     &(this_00->HighQualityLights).ArrayMax);
          uVar26 = uVar26 - 1;
          uVar30 = uVar30 - 8;
        }
LAB_1481adf96:
        uVar29 = (ulonglong)(uVar26 + 1);
        uVar30 = uVar30 + 8;
      } while ((int)(uVar26 + 1) < (this_00->HighQualityLights).ArrayNum);
    }
    local_60 = 0;
    if ((ForElementType<FSetElementId>)local_68.Data != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free(local_68.Data);
    }
    TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_a8);
  }
  return;
}

// UpdateHQLight @ 1481b26c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UParticleModuleLight::UpdateHQLight
          (UParticleModuleLight *this,UPointLightComponent *param_1,FLightParticlePayload *param_2,
          FBaseParticle *param_3,int param_4,TVector<double> *param_5,bool param_6,
          FSceneInterface *param_7,bool param_8)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  TVector<float>_u_0 local_d8;
  FLinearColor_u_0 local_c8;
  FLinearColor_u_0 local_b8;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88 [5];
  
  dVar3 = (param_3->Location).field0_0x0._s_0.X;
  dVar4 = (param_3->Location).field0_0x0._s_0.Y;
  dVar1 = (param_3->Location).field0_0x0._s_0.Z;
  if (param_6) {
    local_a8._s_0.X = dVar3;
    local_a8._s_0.Y = dVar4;
    local_a8._s_0.Z = dVar1;
    USceneComponent::SetRelativeLocation
              ((USceneComponent *)param_1,(TVector<double> *)&local_a8._s_0,false,(FHitResult *)0x0,
               None);
  }
  else {
    local_88[0]._0_8_ = dVar3;
    local_88[0]._8_8_ = dVar4;
    local_88[0]._16_8_ = dVar1;
    USceneComponent::SetWorldLocation
              ((USceneComponent *)param_1,(TVector<double> *)&local_88[0]._s_0,false,
               (FHitResult *)0x0,None);
  }
  fVar6 = (param_3->Color).field0_0x0._s_0.A;
  local_d8._s_0.X =
       fVar6 * (param_3->Color).field0_0x0._s_0.R * (param_2->ColorScale).field0_0x0._s_0.X;
  local_d8._s_0.Y =
       fVar6 * (param_3->Color).field0_0x0._s_0.G * (param_2->ColorScale).field0_0x0._s_0.Y;
  local_d8._s_0.Z =
       fVar6 * (param_3->Color).field0_0x0._s_0.B * (param_2->ColorScale).field0_0x0._s_0.Z;
  FLinearColor::FLinearColor((FLinearColor *)&local_c8._s_0,(TVector<float> *)&local_d8._s_0);
  if (this->bUseInverseSquaredFalloff != false) {
    if ((param_1->field_0x3c0 != '\0') &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3979782576976956530>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules.cpp"
                           ,0xc72,"PointLightComponent->IntensityUnits == ELightUnits::Unitless"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      fVar6 = ULocalLightComponent::GetUnitsConversionFactor(Candelas,Unitless,__real_bf800000);
      ShaderUnitConversion = fVar6 * __real_38d1b717;
      _Init_thread_footer(&::_TSS0);
    }
    local_c8._s_0.R = local_c8._s_0.R * ShaderUnitConversion;
    local_c8._s_0.G = local_c8._s_0.G * ShaderUnitConversion;
    local_c8._s_0.B = local_c8._s_0.B * ShaderUnitConversion;
    local_c8._s_0.A = local_c8._s_0.A * ShaderUnitConversion;
  }
  fVar6 = local_c8._s_0.G * local_c8._s_0.G + local_c8._s_0.R * local_c8._s_0.R +
          local_c8._s_0.B * local_c8._s_0.B;
  uVar10 = local_c8._s_0.B;
  uVar12 = local_c8._s_0.R;
  uVar13 = local_c8._s_0.G;
  if (__real_322bcc77 < fVar6) {
    fVar9 = __real_3f800000 / SQRT(fVar6);
    uVar12 = fVar9 * local_c8._s_0.R;
    uVar13 = fVar9 * local_c8._s_0.G;
    uVar10 = fVar9 * local_c8._s_0.B;
  }
  fVar9 = param_2->RadiusScale;
  dVar1 = (double)(param_3->Size).field0_0x0._s_0.X * (param_5->field0_0x0)._s_0.X;
  uVar7 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar8 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  ULightComponent::SetIntensity((ULightComponent *)param_1,SQRT(fVar6));
  local_b8._s_0.A = 0.0;
  fVar6 = (float)uVar12 * __real_437f0000;
  if (__real_437f0000 <= (float)uVar12 * __real_437f0000) {
    fVar6 = __real_437f0000;
  }
  fVar14 = (float)uVar13 * __real_437f0000;
  if (__real_437f0000 <= (float)uVar13 * __real_437f0000) {
    fVar14 = __real_437f0000;
  }
  fVar11 = (float)uVar10 * __real_437f0000;
  if (__real_437f0000 <= (float)uVar10 * __real_437f0000) {
    fVar11 = __real_437f0000;
  }
  local_b8._s_0.R = FLinearColor::sRGBToLinearTable[(int)fVar6 & 0xff];
  local_b8._s_0.G = FLinearColor::sRGBToLinearTable[(int)fVar14 & 0xff];
  local_b8._s_0.B = FLinearColor::sRGBToLinearTable[(int)fVar11 & 0xff];
  ULightComponent::SetLightColor((ULightComponent *)param_1,(FLinearColor *)&local_b8._s_0,true);
  ULocalLightComponent::SetAttenuationRadius
            ((ULocalLightComponent *)param_1,(float)((double)fVar9 * (double)CONCAT44(uVar8,uVar7)))
  ;
  UPointLightComponent::SetLightFalloffExponent(param_1,param_2->LightExponent);
  UPointLightComponent::SetInverseExposureBlend(param_1,param_2->InverseExposureBlend);
  if ((param_7 != (FSceneInterface *)0x0) && (param_8)) {
    (**(code **)(param_7->_padding_ + 600))(param_7,param_1);
    (**(code **)(param_7->_padding_ + 0x260))(param_7,param_1);
  }
  return;
}

