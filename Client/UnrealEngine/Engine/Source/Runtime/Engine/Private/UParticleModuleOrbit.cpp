// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 147304820

UClass * __cdecl UParticleModuleOrbit::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleOrbit.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleOrbit",
               &Z_Registration_Info_UClass_UParticleModuleOrbit.InnerSingleton,
               StaticRegisterNativesUParticleModuleOrbit,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleOrbit>,
               InternalVTableHelperCtorCaller<UParticleModuleOrbit>,local_res8,
               UParticleModuleOrbitBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleOrbit.InnerSingleton;
}

// UParticleModuleOrbit @ 14730af70

UParticleModuleOrbit * __thiscall
UParticleModuleOrbit::UParticleModuleOrbit(UParticleModuleOrbit *this,FVTableHelper *param_1)

{
  FOrbitOptions *pFVar1;
  FOrbitOptions *pFVar2;
  FOrbitOptions FVar3;
  undefined8 uVar4;
  
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleOrbit__6B_;
  (this->OffsetAmount)._padding_ = 0;
  (this->OffsetAmount)._padding_ = 0;
  (this->OffsetAmount)._padding_ = 0;
  *(undefined4 *)&(this->OffsetAmount)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->OffsetAmount)._padding_ + 4) = 0;
  (this->OffsetAmount).MinValue = 0.0;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->OffsetAmount).MaxValue = 0.0;
  (this->OffsetAmount).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OffsetAmount).MinValueVec.field0_0x0._s_0.Y = (double)uVar4;
  (this->OffsetAmount).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->OffsetAmount).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OffsetAmount).MaxValueVec.field0_0x0._s_0.Y = (double)uVar4;
  (this->OffsetAmount).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->OffsetAmount).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->RotationAmount)._padding_ = 0;
  (this->RotationAmount)._padding_ = 0;
  pFVar2 = &this->OffsetOptions;
  pFVar2->bProcessDuringSpawn = 1;
  pFVar2->bUseEmitterTime = 0;
  pFVar2->bProcessDuringUpdate = 0;
  (this->RotationAmount)._padding_ = 0;
  *(undefined4 *)&(this->RotationAmount)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->RotationAmount)._padding_ + 4) = 0;
  (this->RotationAmount).MinValue = 0.0;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RotationAmount).MaxValue = 0.0;
  (this->RotationAmount).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RotationAmount).MinValueVec.field0_0x0._s_0.Y = (double)uVar4;
  (this->RotationAmount).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RotationAmount).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RotationAmount).MaxValueVec.field0_0x0._s_0.Y = (double)uVar4;
  (this->RotationAmount).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->RotationAmount).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->RotationRateAmount)._padding_ = 0;
  (this->RotationRateAmount)._padding_ = 0;
  pFVar2 = &this->RotationOptions;
  pFVar2->bProcessDuringSpawn = 1;
  pFVar2->bUseEmitterTime = 0;
  pFVar2->bProcessDuringUpdate = 0;
  (this->RotationRateAmount)._padding_ = 0;
  *(undefined4 *)&(this->RotationRateAmount)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->RotationRateAmount)._padding_ + 4) = 0;
  (this->RotationRateAmount).MinValue = 0.0;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RotationRateAmount).MaxValue = 0.0;
  (this->RotationRateAmount).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RotationRateAmount).MinValueVec.field0_0x0._s_0.Y = (double)uVar4;
  (this->RotationRateAmount).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RotationRateAmount).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RotationRateAmount).MaxValueVec.field0_0x0._s_0.Y = (double)uVar4;
  (this->RotationRateAmount).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->RotationRateAmount).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  pFVar2 = &this->RotationRateOptions;
  pFVar2->bProcessDuringSpawn = 1;
  pFVar2->bUseEmitterTime = 0;
  pFVar2->bProcessDuringUpdate = 0;
  return this;
}

// ~UParticleModuleOrbit @ 14730bd70

void __thiscall UParticleModuleOrbit::~UParticleModuleOrbit(UParticleModuleOrbit *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleOrbit__6B_;
  pvVar1 = (void *)(this->RotationRateAmount)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->RotationAmount)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->OffsetAmount)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleOrbitBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730eea0

UClass * __cdecl UParticleModuleOrbit::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleOrbit.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleOrbit",
               &Z_Registration_Info_UClass_UParticleModuleOrbit.InnerSingleton,
               StaticRegisterNativesUParticleModuleOrbit,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleOrbit>,
               InternalVTableHelperCtorCaller<UParticleModuleOrbit>,local_res8,
               UParticleModuleOrbitBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleOrbit.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleOrbit @ 14730fee0

void __cdecl UParticleModuleOrbit::StaticRegisterNativesUParticleModuleOrbit(void)

{
  return;
}

// UParticleModuleOrbit @ 14815d940

UParticleModuleOrbit * __thiscall
UParticleModuleOrbit::UParticleModuleOrbit(UParticleModuleOrbit *this,FObjectInitializer *param_1)

{
  FOrbitOptions *pFVar1;
  FOrbitOptions *pFVar2;
  FOrbitOptions FVar3;
  undefined8 uVar4;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleOrbit__6B_;
  (this->OffsetAmount)._padding_ = 0;
  (this->OffsetAmount)._padding_ = 0;
  (this->OffsetAmount)._padding_ = 0;
  *(undefined4 *)&(this->OffsetAmount)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->OffsetAmount)._padding_ + 4) = 0;
  (this->OffsetAmount).MinValue = 0.0;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->OffsetAmount).MaxValue = 0.0;
  (this->OffsetAmount).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OffsetAmount).MinValueVec.field0_0x0._s_0.Y = (double)uVar4;
  (this->OffsetAmount).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->OffsetAmount).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OffsetAmount).MaxValueVec.field0_0x0._s_0.Y = (double)uVar4;
  (this->OffsetAmount).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->OffsetAmount).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->RotationAmount)._padding_ = 0;
  (this->RotationAmount)._padding_ = 0;
  pFVar2 = &this->OffsetOptions;
  pFVar2->bProcessDuringSpawn = 1;
  pFVar2->bUseEmitterTime = 0;
  pFVar2->bProcessDuringUpdate = 0;
  (this->RotationAmount)._padding_ = 0;
  *(undefined4 *)&(this->RotationAmount)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->RotationAmount)._padding_ + 4) = 0;
  (this->RotationAmount).MinValue = 0.0;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RotationAmount).MaxValue = 0.0;
  (this->RotationAmount).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RotationAmount).MinValueVec.field0_0x0._s_0.Y = (double)uVar4;
  (this->RotationAmount).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RotationAmount).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RotationAmount).MaxValueVec.field0_0x0._s_0.Y = (double)uVar4;
  (this->RotationAmount).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->RotationAmount).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  (this->RotationRateAmount)._padding_ = 0;
  (this->RotationRateAmount)._padding_ = 0;
  pFVar2 = &this->RotationOptions;
  pFVar2->bProcessDuringSpawn = 1;
  pFVar2->bUseEmitterTime = 0;
  pFVar2->bProcessDuringUpdate = 0;
  (this->RotationRateAmount)._padding_ = 0;
  *(undefined4 *)&(this->RotationRateAmount)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->RotationRateAmount)._padding_ + 4) = 0;
  (this->RotationRateAmount).MinValue = 0.0;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RotationRateAmount).MaxValue = 0.0;
  (this->RotationRateAmount).MinValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RotationRateAmount).MinValueVec.field0_0x0._s_0.Y = (double)uVar4;
  (this->RotationRateAmount).MinValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RotationRateAmount).MaxValueVec.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RotationRateAmount).MaxValueVec.field0_0x0._s_0.Y = (double)uVar4;
  (this->RotationRateAmount).MaxValueVec.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->RotationRateAmount).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)0x0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  pFVar2 = &this->RotationRateOptions;
  pFVar2->bProcessDuringSpawn = 1;
  pFVar2->bUseEmitterTime = 0;
  pFVar2->bProcessDuringUpdate = 0;
  (this->ChainMode).Value = '\0';
  return this;
}

// CompileModule @ 148169b50

void __thiscall
UParticleModuleOrbit::CompileModule(UParticleModuleOrbit *this,FParticleEmitterBuildInfo *param_1)

{
  uchar uVar1;
  
  uVar1 = (this->ChainMode).Value;
  if (uVar1 == '\0') {
    FComposableVectorDistribution::AddDistribution
              (&param_1->OrbitOffset,(this->OffsetAmount).Distribution.field0_0x0.DebugPtr);
    FComposableVectorDistribution::AddDistribution
              (&param_1->OrbitInitialRotation,
               (this->RotationAmount).Distribution.field0_0x0.DebugPtr);
    FComposableVectorDistribution::AddDistribution
              (&param_1->OrbitRotationRate,
               (this->RotationRateAmount).Distribution.field0_0x0.DebugPtr);
  }
  else {
    if (uVar1 == '\x01') {
      FComposableVectorDistribution::ScaleByVectorDistribution
                (&param_1->OrbitOffset,(this->OffsetAmount).Distribution.field0_0x0.DebugPtr);
      FComposableVectorDistribution::ScaleByVectorDistribution
                (&param_1->OrbitInitialRotation,
                 (this->RotationAmount).Distribution.field0_0x0.DebugPtr);
      FComposableVectorDistribution::ScaleByVectorDistribution
                (&param_1->OrbitRotationRate,
                 (this->RotationRateAmount).Distribution.field0_0x0.DebugPtr);
      return;
    }
    if (uVar1 == '\x02') {
      FComposableVectorDistribution::Initialize
                (&param_1->OrbitOffset,(this->OffsetAmount).Distribution.field0_0x0.DebugPtr);
      FComposableVectorDistribution::Initialize
                (&param_1->OrbitInitialRotation,
                 (this->RotationAmount).Distribution.field0_0x0.DebugPtr);
      FComposableVectorDistribution::Initialize
                (&param_1->OrbitRotationRate,
                 (this->RotationRateAmount).Distribution.field0_0x0.DebugPtr);
      return;
    }
  }
  return;
}

// InitializeDefaults @ 148184550

/* WARNING: Type propagation algorithm not settling */

void __thiscall UParticleModuleOrbit::InitializeDefaults(UParticleModuleOrbit *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorUniform *pUVar3;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  
  bVar1 = FRawDistributionVector::IsCreated(&this->OffsetAmount);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionOffsetAmount");
    pUVar3 = NewObject<UDistributionVectorUniform>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar3->Min).field0_0x0._s_0.X = 0.0;
    (pUVar3->Min).field0_0x0._s_0.Y = 0.0;
    (pUVar3->Min).field0_0x0._s_0.Z = 0.0;
    (pUVar3->Max).field0_0x0._s_0.X = 0.0;
    (pUVar3->Max).field0_0x0._s_0.Y = 50.0;
    (pUVar3->Max).field0_0x0._s_0.Z = 0.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorUniform *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->OffsetAmount).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  bVar1 = FRawDistributionVector::IsCreated(&this->RotationAmount);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res10,L"DistributionRotationAmount");
    pUVar3 = NewObject<UDistributionVectorUniform>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar3->Min).field0_0x0._s_0.X = 0.0;
    (pUVar3->Min).field0_0x0._s_0.Y = 0.0;
    (pUVar3->Min).field0_0x0._s_0.Z = 0.0;
    (pUVar3->Max).field0_0x0._s_0.X = 1.0;
    (pUVar3->Max).field0_0x0._s_0.Y = 1.0;
    (pUVar3->Max).field0_0x0._s_0.Z = 1.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorUniform *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->RotationAmount).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  bVar1 = FRawDistributionVector::IsCreated(&this->RotationRateAmount);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res18,L"DistributionRotationRateAmount");
    pUVar3 = NewObject<UDistributionVectorUniform>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar3->Min).field0_0x0._s_0.X = 0.0;
    (pUVar3->Min).field0_0x0._s_0.Y = 0.0;
    (pUVar3->Min).field0_0x0._s_0.Z = 0.0;
    (pUVar3->Max).field0_0x0._s_0.X = 1.0;
    (pUVar3->Max).field0_0x0._s_0.Y = 1.0;
    (pUVar3->Max).field0_0x0._s_0.Z = 1.0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDistributionVectorUniform *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->RotationRateAmount).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818ac50

/* WARNING: Type propagation algorithm not settling */

void __thiscall UParticleModuleOrbit::PostInitProperties(UParticleModuleOrbit *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionVectorUniform *pUVar3;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionVector::IsCreated(&this->OffsetAmount);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionOffsetAmount");
      pUVar3 = NewObject<UDistributionVectorUniform>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      (pUVar3->Min).field0_0x0._s_0.X = 0.0;
      (pUVar3->Min).field0_0x0._s_0.Y = 0.0;
      (pUVar3->Min).field0_0x0._s_0.Z = 0.0;
      (pUVar3->Max).field0_0x0._s_0.X = 0.0;
      (pUVar3->Max).field0_0x0._s_0.Y = 50.0;
      (pUVar3->Max).field0_0x0._s_0.Z = 0.0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorUniform *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->OffsetAmount).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
    bVar1 = FRawDistributionVector::IsCreated(&this->RotationAmount);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res10,L"DistributionRotationAmount");
      pUVar3 = NewObject<UDistributionVectorUniform>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      (pUVar3->Min).field0_0x0._s_0.X = 0.0;
      (pUVar3->Min).field0_0x0._s_0.Y = 0.0;
      (pUVar3->Min).field0_0x0._s_0.Z = 0.0;
      (pUVar3->Max).field0_0x0._s_0.X = 1.0;
      (pUVar3->Max).field0_0x0._s_0.Y = 1.0;
      (pUVar3->Max).field0_0x0._s_0.Z = 1.0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorUniform *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->RotationAmount).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
    bVar1 = FRawDistributionVector::IsCreated(&this->RotationRateAmount);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res18,L"DistributionRotationRateAmount");
      pUVar3 = NewObject<UDistributionVectorUniform>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      (pUVar3->Min).field0_0x0._s_0.X = 0.0;
      (pUVar3->Min).field0_0x0._s_0.Y = 0.0;
      (pUVar3->Min).field0_0x0._s_0.Z = 0.0;
      (pUVar3->Max).field0_0x0._s_0.X = 1.0;
      (pUVar3->Max).field0_0x0._s_0.Y = 1.0;
      (pUVar3->Max).field0_0x0._s_0.Z = 1.0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDistributionVectorUniform *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->RotationRateAmount).Distribution.field0_0x0.DebugPtr = (UDistributionVector *)pUVar3;
    }
  }
  return;
}

// RequiredBytes @ 148191880

uint __thiscall
UParticleModuleOrbit::RequiredBytes(UParticleModuleOrbit *this,UParticleModuleTypeDataBase *param_1)

{
  return 0x48;
}

// RequiredBytesPerInstance @ 148191960

uint __thiscall UParticleModuleOrbit::RequiredBytesPerInstance(UParticleModuleOrbit *this)

{
  return 0;
}

// Spawn @ 14819d310

void __thiscall UParticleModuleOrbit::Spawn(UParticleModuleOrbit *this,FSpawnContext *param_1)

{
  float *pfVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  UObject *pUVar5;
  TVector<double> *pTVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  TVector<double> local_38;
  
  lVar3 = param_1->_padding_;
  pfVar7 = (float *)((longlong)&(param_1->ParticleBase->OldLocation).field0_0x0 +
                    (ulonglong)(uint)param_1->Offset);
  pfVar1 = &param_1->ParticleBase->RelativeTime;
  if ((this->OffsetOptions).bProcessDuringSpawn != 0) {
    if ((this->OffsetOptions).bUseEmitterTime == 0) {
      pUVar5 = (UObject *)(**(code **)(**(longlong **)(lVar3 + 0x10) + 8))();
      fVar8 = *pfVar1;
    }
    else {
      pUVar5 = (UObject *)(**(code **)(**(longlong **)(lVar3 + 0x10) + 8))();
      fVar8 = *(float *)(lVar3 + 0x1a0);
    }
    pTVar6 = FRawDistributionVector::GetValue
                       (&this->OffsetAmount,&local_38,fVar8,pUVar5,0,(FRandomStream *)0x0);
    local_38.field0_0x0._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
    fVar8 = (float)(pTVar6->field0_0x0)._s_0.X;
    fVar9 = (float)(pTVar6->field0_0x0)._s_0.Y;
    *pfVar7 = fVar8 + *pfVar7;
    pfVar7[1] = fVar9 + pfVar7[1];
    pfVar7[2] = (float)local_38.field0_0x0._s_0.Z + pfVar7[2];
    *(undefined8 *)(pfVar7 + 0xf) = *(undefined8 *)(pfVar7 + 3);
    pfVar7[0x11] = pfVar7[5];
    pfVar7[3] = fVar8 + pfVar7[3];
    pfVar7[4] = fVar9 + pfVar7[4];
    pfVar7[5] = (float)local_38.field0_0x0._s_0.Z + pfVar7[5];
  }
  if ((this->RotationOptions).bProcessDuringSpawn != 0) {
    lVar4 = **(longlong **)(param_1->_padding_ + 0x10);
    if ((this->RotationOptions).bUseEmitterTime == 0) {
      pUVar5 = (UObject *)(**(code **)(lVar4 + 8))();
      fVar8 = *pfVar1;
    }
    else {
      pUVar5 = (UObject *)(**(code **)(lVar4 + 8))();
      fVar8 = *(float *)(lVar3 + 0x1a0);
    }
    pTVar6 = FRawDistributionVector::GetValue
                       (&this->RotationAmount,&local_38,fVar8,pUVar5,0,(FRandomStream *)0x0);
    dVar2 = (pTVar6->field0_0x0)._s_0.Y;
    local_38.field0_0x0._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
    pfVar7[6] = (float)(pTVar6->field0_0x0)._s_0.X + pfVar7[6];
    pfVar7[7] = (float)dVar2 + pfVar7[7];
    pfVar7[8] = (float)local_38.field0_0x0._s_0.Z + pfVar7[8];
  }
  if ((this->RotationRateOptions).bProcessDuringSpawn != 0) {
    lVar4 = **(longlong **)(param_1->_padding_ + 0x10);
    if ((this->RotationRateOptions).bUseEmitterTime == 0) {
      pUVar5 = (UObject *)(**(code **)(lVar4 + 8))();
      fVar8 = *pfVar1;
    }
    else {
      pUVar5 = (UObject *)(**(code **)(lVar4 + 8))();
      fVar8 = *(float *)(lVar3 + 0x1a0);
    }
    pTVar6 = FRawDistributionVector::GetValue
                       (&this->RotationRateAmount,&local_38,fVar8,pUVar5,0,(FRandomStream *)0x0);
    dVar2 = (pTVar6->field0_0x0)._s_0.Z;
    fVar8 = (float)(pTVar6->field0_0x0)._s_0.X;
    fVar9 = (float)(pTVar6->field0_0x0)._s_0.Y;
    pfVar7[9] = fVar8 + pfVar7[9];
    fVar10 = (float)dVar2;
    pfVar7[10] = fVar9 + pfVar7[10];
    pfVar7[0xb] = fVar10 + pfVar7[0xb];
    pfVar7[0xc] = fVar8 + pfVar7[0xc];
    pfVar7[0xd] = fVar9 + pfVar7[0xd];
    pfVar7[0xe] = fVar10 + pfVar7[0xe];
  }
  return;
}

// Update @ 1481af770

void __thiscall UParticleModuleOrbit::Update(UParticleModuleOrbit *this,FUpdateContext *param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  UObject *pUVar11;
  TVector<double> *pTVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  TVector<double> local_50;
  
  lVar4 = param_1->_padding_;
  uVar2 = param_1->Offset;
  lVar5 = *(longlong *)(lVar4 + 0x170);
  iVar10 = *(int *)(lVar4 + 0x18c) + -1;
  iVar3 = *(int *)(lVar4 + 0x188);
  lVar6 = *(longlong *)(lVar4 + 0x168);
  lVar14 = (longlong)iVar10;
  if (-1 < iVar10) {
    do {
      lVar15 = (ulonglong)((uint)*(ushort *)(lVar5 + lVar14 * 2) * iVar3) + lVar6;
      if ((*(uint *)(lVar15 + 0x6c) & 0x4000000) == 0) {
        lVar13 = (ulonglong)uVar2 + lVar15;
        if ((this->OffsetOptions).bProcessDuringUpdate != 0) {
          lVar7 = **(longlong **)(param_1->_padding_ + 0x10);
          if ((this->OffsetOptions).bUseEmitterTime == 0) {
            pUVar11 = (UObject *)(**(code **)(lVar7 + 8))();
            fVar16 = *(float *)(lVar15 + 0x90);
          }
          else {
            pUVar11 = (UObject *)(**(code **)(lVar7 + 8))();
            fVar16 = *(float *)(lVar4 + 0x1a0);
          }
          pTVar12 = FRawDistributionVector::GetValue
                              (&this->OffsetAmount,&local_50,fVar16,pUVar11,0,(FRandomStream *)0x0);
          dVar1 = (pTVar12->field0_0x0)._s_0.Z;
          dVar8 = (pTVar12->field0_0x0)._s_0.X;
          dVar9 = (pTVar12->field0_0x0)._s_0.Y;
          *(undefined8 *)(lVar13 + 0x3c) = *(undefined8 *)(lVar13 + 0xc);
          *(undefined4 *)(lVar13 + 0x44) = *(undefined4 *)(lVar13 + 0x14);
          *(float *)(lVar13 + 0xc) = (float)dVar8 + *(float *)(lVar13 + 0xc);
          *(float *)(lVar13 + 0x10) = (float)dVar9 + *(float *)(lVar13 + 0x10);
          *(float *)(lVar13 + 0x14) = (float)dVar1 + *(float *)(lVar13 + 0x14);
        }
        if ((this->RotationOptions).bProcessDuringUpdate != 0) {
          lVar7 = **(longlong **)(param_1->_padding_ + 0x10);
          if ((this->RotationOptions).bUseEmitterTime == 0) {
            pUVar11 = (UObject *)(**(code **)(lVar7 + 8))();
            fVar16 = *(float *)(lVar15 + 0x90);
          }
          else {
            pUVar11 = (UObject *)(**(code **)(lVar7 + 8))();
            fVar16 = *(float *)(lVar4 + 0x1a0);
          }
          pTVar12 = FRawDistributionVector::GetValue
                              (&this->RotationAmount,&local_50,fVar16,pUVar11,0,(FRandomStream *)0x0
                              );
          dVar1 = (pTVar12->field0_0x0)._s_0.Z;
          dVar8 = (pTVar12->field0_0x0)._s_0.Y;
          *(float *)(lVar13 + 0x18) =
               (float)(pTVar12->field0_0x0)._s_0.X + *(float *)(lVar13 + 0x18);
          *(float *)(lVar13 + 0x1c) = (float)dVar8 + *(float *)(lVar13 + 0x1c);
          *(float *)(lVar13 + 0x20) = (float)dVar1 + *(float *)(lVar13 + 0x20);
        }
        if ((this->RotationRateOptions).bProcessDuringUpdate != 0) {
          lVar7 = **(longlong **)(param_1->_padding_ + 0x10);
          if ((this->RotationRateOptions).bUseEmitterTime == 0) {
            pUVar11 = (UObject *)(**(code **)(lVar7 + 8))();
            fVar16 = *(float *)(lVar15 + 0x90);
          }
          else {
            pUVar11 = (UObject *)(**(code **)(lVar7 + 8))();
            fVar16 = *(float *)(lVar4 + 0x1a0);
          }
          pTVar12 = FRawDistributionVector::GetValue
                              (&this->RotationRateAmount,&local_50,fVar16,pUVar11,0,
                               (FRandomStream *)0x0);
          dVar1 = (pTVar12->field0_0x0)._s_0.Z;
          dVar8 = (pTVar12->field0_0x0)._s_0.Y;
          *(float *)(lVar13 + 0x30) =
               (float)(pTVar12->field0_0x0)._s_0.X + *(float *)(lVar13 + 0x30);
          *(float *)(lVar13 + 0x34) = (float)dVar8 + *(float *)(lVar13 + 0x34);
          *(float *)(lVar13 + 0x38) = (float)dVar1 + *(float *)(lVar13 + 0x38);
        }
      }
      lVar14 = lVar14 + -1;
    } while (-1 < lVar14);
  }
  return;
}

