// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 1472f5da0

UClass * __cdecl UParticleModuleCollisionGPU::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleCollisionGPU.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleCollisionGPU",
               &Z_Registration_Info_UClass_UParticleModuleCollisionGPU.InnerSingleton,
               StaticRegisterNativesUParticleModuleCollisionGPU,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleCollisionGPU>,
               InternalVTableHelperCtorCaller<UParticleModuleCollisionGPU>,local_res8,
               UParticleModuleCollisionBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleCollisionGPU.InnerSingleton;
}

// UParticleModuleCollisionGPU @ 1472fcdf0

UParticleModuleCollisionGPU * __thiscall
UParticleModuleCollisionGPU::UParticleModuleCollisionGPU
          (UParticleModuleCollisionGPU *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleCollisionGPU__6B_;
  (this->Resilience)._padding_ = 0;
  (this->Resilience)._padding_ = 0;
  (this->Resilience)._padding_ = 0;
  *(undefined4 *)&(this->Resilience)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Resilience)._padding_ + 4) = 0;
  (this->Resilience).MinValue = 0.0;
  (this->Resilience).MaxValue = 0.0;
  (this->Resilience).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->ResilienceScaleOverLife)._padding_ = 0;
  (this->ResilienceScaleOverLife)._padding_ = 0;
  (this->ResilienceScaleOverLife)._padding_ = 0;
  *(undefined4 *)&(this->ResilienceScaleOverLife)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->ResilienceScaleOverLife)._padding_ + 4) = 0;
  (this->ResilienceScaleOverLife).MinValue = 0.0;
  (this->ResilienceScaleOverLife).MaxValue = 0.0;
  (this->ResilienceScaleOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// ~UParticleModuleCollisionGPU @ 1472fdbd0

void __thiscall
UParticleModuleCollisionGPU::~UParticleModuleCollisionGPU(UParticleModuleCollisionGPU *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleCollisionGPU__6B_;
  pvVar1 = (void *)(this->ResilienceScaleOverLife)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->Resilience)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147300840

UClass * __cdecl UParticleModuleCollisionGPU::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleCollisionGPU.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleCollisionGPU",
               &Z_Registration_Info_UClass_UParticleModuleCollisionGPU.InnerSingleton,
               StaticRegisterNativesUParticleModuleCollisionGPU,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleCollisionGPU>,
               InternalVTableHelperCtorCaller<UParticleModuleCollisionGPU>,local_res8,
               UParticleModuleCollisionBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleCollisionGPU.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleCollisionGPU @ 147301850

void __cdecl UParticleModuleCollisionGPU::StaticRegisterNativesUParticleModuleCollisionGPU(void)

{
  return;
}

// UParticleModuleCollisionGPU @ 14815bcf0

UParticleModuleCollisionGPU * __thiscall
UParticleModuleCollisionGPU::UParticleModuleCollisionGPU
          (UParticleModuleCollisionGPU *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  this->RandomDistribution = 2.0;
  this->RadiusScale = 1.0;
  this->RadiusBias = 0.0;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  this->_padding_ = (longlong)&___7UParticleModuleCollisionGPU__6B_;
  (this->Resilience)._padding_ = 0;
  (this->Resilience)._padding_ = 0;
  (this->Resilience)._padding_ = 0;
  *(undefined4 *)&(this->Resilience)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->Resilience)._padding_ + 4) = 0;
  (this->Resilience).MinValue = 0.0;
  (this->Resilience).MaxValue = 0.0;
  (this->Resilience).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  (this->ResilienceScaleOverLife)._padding_ = 0;
  (this->ResilienceScaleOverLife)._padding_ = 0;
  (this->ResilienceScaleOverLife)._padding_ = 0;
  *(undefined4 *)&(this->ResilienceScaleOverLife)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->ResilienceScaleOverLife)._padding_ + 4) = 0;
  (this->ResilienceScaleOverLife).MinValue = 0.0;
  (this->ResilienceScaleOverLife).MaxValue = 0.0;
  (this->ResilienceScaleOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  this->Friction = 0.0;
  this->RandomSpread = 0.0;
  (this->Response).Value = '\0';
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x14 | 0x80;
  return this;
}

// CompileModule @ 148169570

void __thiscall
UParticleModuleCollisionGPU::CompileModule
          (UParticleModuleCollisionGPU *this,FParticleEmitterBuildInfo *param_1)

{
  param_1->bEnableCollision = true;
  param_1->CollisionMode = (this->CollisionMode).Value;
  param_1->CollisionResponse = (this->Response).Value;
  param_1->CollisionRadiusScale = this->RadiusScale;
  param_1->CollisionRadiusBias = this->RadiusBias;
  param_1->CollisionRandomSpread = this->RandomSpread;
  param_1->CollisionRandomDistribution = this->RandomDistribution;
  param_1->Friction = this->Friction;
  FComposableFloatDistribution::Initialize
            (&param_1->Resilience,(this->Resilience).Distribution.field0_0x0.DebugPtr);
  FComposableFloatDistribution::Initialize
            (&param_1->ResilienceScaleOverLife,
             (this->ResilienceScaleOverLife).Distribution.field0_0x0.DebugPtr);
  return;
}

// InitializeDefaults @ 1481833f0

void __thiscall UParticleModuleCollisionGPU::InitializeDefaults(UParticleModuleCollisionGPU *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionFloat::IsCreated(&this->Resilience);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"ResilienceDistribution");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Constant = 0.5;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Resilience).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  bVar1 = FRawDistributionFloat::IsCreated(&this->ResilienceScaleOverLife);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"ResilienceScaleOverLifeDistribution");
    pUVar3 = NewObject<UDistributionFloatConstant>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Constant = 1.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->ResilienceScaleOverLife).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  return;
}

// PostInitProperties @ 148189cc0

void __thiscall UParticleModuleCollisionGPU::PostInitProperties(UParticleModuleCollisionGPU *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatConstant *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionFloat::IsCreated(&this->Resilience);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"ResilienceDistribution");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar3->Constant = 0.5;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->Resilience).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
    bVar1 = FRawDistributionFloat::IsCreated(&this->ResilienceScaleOverLife);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"ResilienceScaleOverLifeDistribution");
      pUVar3 = NewObject<UDistributionFloatConstant>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar3->Constant = 1.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->ResilienceScaleOverLife).Distribution.field0_0x0.DebugPtr =
           (UDistributionFloat *)pUVar3;
    }
  }
  return;
}

// SetToSensibleDefaults @ 1481977f0

void __thiscall
UParticleModuleCollisionGPU::SetToSensibleDefaults
          (UParticleModuleCollisionGPU *this,UParticleEmitter *param_1)

{
  UDistributionFloat *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if ((this->Resilience).Distribution.field0_0x0.DebugPtr != (UDistributionFloat *)0x0) {
    pUVar3 = Z_Construct_UClass_UDistributionFloatConstant_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&(this->Resilience).Distribution,pUVar3);
    if ((bVar2) &&
       (pUVar1 = (this->Resilience).Distribution.field0_0x0.DebugPtr,
       pUVar1 != (UDistributionFloat *)0x0)) {
      *(undefined4 *)&pUVar1[1]._padding_ = 0x3f400000;
    }
  }
  if ((this->ResilienceScaleOverLife).Distribution.field0_0x0.DebugPtr != (UDistributionFloat *)0x0)
  {
    pUVar3 = Z_Construct_UClass_UDistributionFloatConstant_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&(this->ResilienceScaleOverLife).Distribution,pUVar3);
    if ((bVar2) &&
       (pUVar1 = (this->ResilienceScaleOverLife).Distribution.field0_0x0.DebugPtr,
       pUVar1 != (UDistributionFloat *)0x0)) {
      *(undefined4 *)&pUVar1[1]._padding_ = 0x3f800000;
    }
  }
  return;
}

