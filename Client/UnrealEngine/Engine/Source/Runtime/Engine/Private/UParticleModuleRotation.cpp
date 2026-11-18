// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 147305ab0

UClass * __cdecl UParticleModuleRotation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleRotation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleRotation",
               &Z_Registration_Info_UClass_UParticleModuleRotation.InnerSingleton,
               StaticRegisterNativesUParticleModuleRotation,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleRotation>,
               InternalVTableHelperCtorCaller<UParticleModuleRotation>,local_res8,
               UParticleModuleRotationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleRotation.InnerSingleton;
}

// UParticleModuleRotation @ 14730b320

UParticleModuleRotation * __thiscall
UParticleModuleRotation::UParticleModuleRotation
          (UParticleModuleRotation *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleRotation__6B_;
  (this->StartRotation)._padding_ = 0;
  (this->StartRotation)._padding_ = 0;
  (this->StartRotation)._padding_ = 0;
  *(undefined4 *)&(this->StartRotation)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartRotation)._padding_ + 4) = 0;
  (this->StartRotation).MinValue = 0.0;
  (this->StartRotation).MaxValue = 0.0;
  (this->StartRotation).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// ~UParticleModuleRotation @ 14730bfb0

void __thiscall UParticleModuleRotation::~UParticleModuleRotation(UParticleModuleRotation *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleRotation__6B_;
  pvVar1 = (void *)(this->StartRotation)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleRotationBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730f560

UClass * __cdecl UParticleModuleRotation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleRotation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleRotation",
               &Z_Registration_Info_UClass_UParticleModuleRotation.InnerSingleton,
               StaticRegisterNativesUParticleModuleRotation,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UParticleModuleRotation>,
               InternalVTableHelperCtorCaller<UParticleModuleRotation>,local_res8,
               UParticleModuleRotationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleRotation.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleRotation @ 14730ff70

void __cdecl UParticleModuleRotation::StaticRegisterNativesUParticleModuleRotation(void)

{
  return;
}

// UParticleModuleRotation @ 14815de40

UParticleModuleRotation * __thiscall
UParticleModuleRotation::UParticleModuleRotation
          (UParticleModuleRotation *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x16;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  this->_padding_ = (longlong)&___7UParticleModuleRotation__6B_;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x81;
  (this->StartRotation)._padding_ = 0;
  (this->StartRotation)._padding_ = 0;
  (this->StartRotation)._padding_ = 0;
  *(undefined4 *)&(this->StartRotation)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->StartRotation)._padding_ + 4) = 0;
  (this->StartRotation).MinValue = 0.0;
  (this->StartRotation).MaxValue = 0.0;
  (this->StartRotation).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)0x0;
  return this;
}

// InitializeDefaults @ 148184900

void __thiscall UParticleModuleRotation::InitializeDefaults(UParticleModuleRotation *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatUniform *pUVar3;
  FName local_res8;
  
  bVar1 = FRawDistributionFloat::IsCreated(&this->StartRotation);
  if (!bVar1) {
    pFVar2 = ::FName::FName(&local_res8,L"DistributionStartRotation");
    pUVar3 = NewObject<UDistributionFloatUniform>
                       ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    pUVar3->Min = 0.0;
    pUVar3->Max = 1.0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->StartRotation).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
  }
  return;
}

// PostInitProperties @ 14818b4d0

void __thiscall UParticleModuleRotation::PostInitProperties(UParticleModuleRotation *this)

{
  bool bVar1;
  FName *pFVar2;
  UDistributionFloatUniform *pUVar3;
  FName local_res8;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    bVar1 = FRawDistributionFloat::IsCreated(&this->StartRotation);
    if (!bVar1) {
      pFVar2 = ::FName::FName(&local_res8,L"DistributionStartRotation");
      pUVar3 = NewObject<UDistributionFloatUniform>
                         ((UObject *)this,*pFVar2,RF_NoFlags,(UObject *)0x0,false,
                          (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      pUVar3->Min = 0.0;
      pUVar3->Max = 1.0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->StartRotation).Distribution.field0_0x0.DebugPtr = (UDistributionFloat *)pUVar3;
    }
  }
  return;
}

// Spawn @ 14819d5f0

void __thiscall UParticleModuleRotation::Spawn(UParticleModuleRotation *this,FSpawnContext *param_1)

{
  longlong lVar1;
  FBaseParticle *pFVar2;
  FRandomStream *pFVar3;
  UObject *pUVar4;
  float fVar5;
  
  pFVar3 = &FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                      ((FParticleEmitterInstance *)param_1->_padding_,(UParticleModule *)this)->
            RandomStream;
  if (pFVar3 == (FRandomStream *)0x0) {
    pFVar3 = (FRandomStream *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 0x120))();
  }
  lVar1 = param_1->_padding_;
  pFVar2 = param_1->ParticleBase;
  pUVar4 = (UObject *)(**(code **)(**(longlong **)(lVar1 + 0x10) + 8))();
  fVar5 = FRawDistributionFloat::GetValue
                    (&this->StartRotation,*(float *)(lVar1 + 0x1a0),pUVar4,pFVar3);
  pFVar2->Rotation = fVar5 * __real_40c90fdb + pFVar2->Rotation;
  return;
}

// SpawnEx @ 1481a0370

void __thiscall
UParticleModuleRotation::SpawnEx
          (UParticleModuleRotation *this,FSpawnContext *param_1,FRandomStream *param_2)

{
  longlong lVar1;
  FBaseParticle *pFVar2;
  UObject *pUVar3;
  float fVar4;
  
  lVar1 = param_1->_padding_;
  pFVar2 = param_1->ParticleBase;
  pUVar3 = (UObject *)(**(code **)(**(longlong **)(lVar1 + 0x10) + 8))();
  fVar4 = FRawDistributionFloat::GetValue
                    (&this->StartRotation,*(float *)(lVar1 + 0x1a0),pUVar3,param_2);
  pFVar2->Rotation = fVar4 * __real_40c90fdb + pFVar2->Rotation;
  return;
}

