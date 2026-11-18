// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1473042a0

UClass * __cdecl UParticleModuleMeshRotationRate_Seeded::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleMeshRotationRate_Seeded.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleMeshRotationRate_Seeded",
               &Z_Registration_Info_UClass_UParticleModuleMeshRotationRate_Seeded.InnerSingleton,
               StaticRegisterNativesUParticleModuleMeshRotationRate_Seeded,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleMeshRotationRate_Seeded>,
               InternalVTableHelperCtorCaller<UParticleModuleMeshRotationRate_Seeded>,local_res8,
               UParticleModuleMeshRotationRate::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleMeshRotationRate_Seeded.InnerSingleton;
}

// UParticleModuleMeshRotationRate_Seeded @ 14730aed0

UParticleModuleMeshRotationRate_Seeded * __thiscall
UParticleModuleMeshRotationRate_Seeded::UParticleModuleMeshRotationRate_Seeded
          (UParticleModuleMeshRotationRate_Seeded *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  
  UParticleModuleMeshRotationRate::UParticleModuleMeshRotationRate
            ((UParticleModuleMeshRotationRate *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleMeshRotationRate_Seeded__6B_;
  (this->RandomSeedInfo).ParameterName.ComparisonIndex = 0;
  (this->RandomSeedInfo).ParameterName.Number = 0;
  (this->RandomSeedInfo).RandomSeeds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  puVar2 = &(this->RandomSeedInfo).field_0x8;
  (this->RandomSeedInfo).bGetSeedFromInstance = '\0';
  (this->RandomSeedInfo).bRandomlySelectSeedArray = '\0';
  (this->RandomSeedInfo).bResetSeedOnEmitterLooping = '\x01';
  (this->RandomSeedInfo).bInstanceSeedIsIndex = '\0';
  (this->RandomSeedInfo).RandomSeeds.ArrayNum = 0;
  (this->RandomSeedInfo).RandomSeeds.ArrayMax = 0;
  return this;
}

// ~UParticleModuleMeshRotationRate_Seeded @ 14730bcb0

void __thiscall
UParticleModuleMeshRotationRate_Seeded::~UParticleModuleMeshRotationRate_Seeded
          (UParticleModuleMeshRotationRate_Seeded *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleMeshRotationRate_Seeded__6B_;
  pFVar1 = (this->RandomSeedInfo).RandomSeeds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleMeshRotationRate__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UParticleModuleRotationRateBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730ed20

UClass * __cdecl UParticleModuleMeshRotationRate_Seeded::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleMeshRotationRate_Seeded.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleMeshRotationRate_Seeded",
               &Z_Registration_Info_UClass_UParticleModuleMeshRotationRate_Seeded.InnerSingleton,
               StaticRegisterNativesUParticleModuleMeshRotationRate_Seeded,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleMeshRotationRate_Seeded>,
               InternalVTableHelperCtorCaller<UParticleModuleMeshRotationRate_Seeded>,local_res8,
               UParticleModuleMeshRotationRate::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleMeshRotationRate_Seeded.InnerSingleton;
}

// GetRandomSeedInfo @ 14730fc70

FParticleRandomSeedInfo * __thiscall
UParticleModuleMeshRotationRate_Seeded::GetRandomSeedInfo
          (UParticleModuleMeshRotationRate_Seeded *this)

{
  return &this->RandomSeedInfo;
}

// StaticRegisterNativesUParticleModuleMeshRotationRate_Seeded @ 14730fec0

void __cdecl
UParticleModuleMeshRotationRate_Seeded::StaticRegisterNativesUParticleModuleMeshRotationRate_Seeded
          (void)

{
  return;
}

// UParticleModuleMeshRotationRate_Seeded @ 14815d7a0

UParticleModuleMeshRotationRate_Seeded * __thiscall
UParticleModuleMeshRotationRate_Seeded::UParticleModuleMeshRotationRate_Seeded
          (UParticleModuleMeshRotationRate_Seeded *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleMeshRotationRate__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar5;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar5;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->_padding_ = 0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  this->_padding_ = (longlong)&___7UParticleModuleMeshRotationRate_Seeded__6B_;
  (this->RandomSeedInfo).ParameterName.ComparisonIndex = 0;
  (this->RandomSeedInfo).ParameterName.Number = 0;
  (this->RandomSeedInfo).RandomSeeds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0xc;
  puVar3 = &(this->RandomSeedInfo).field_0x8;
  (this->RandomSeedInfo).bGetSeedFromInstance = '\0';
  (this->RandomSeedInfo).bRandomlySelectSeedArray = '\0';
  (this->RandomSeedInfo).bResetSeedOnEmitterLooping = '\x01';
  (this->RandomSeedInfo).bInstanceSeedIsIndex = '\0';
  (this->RandomSeedInfo).RandomSeeds.ArrayNum = 0;
  (this->RandomSeedInfo).RandomSeeds.ArrayMax = 0;
  return this;
}

// EmitterLoopingNotify @ 148171d10

void __thiscall
UParticleModuleMeshRotationRate_Seeded::EmitterLoopingNotify
          (UParticleModuleMeshRotationRate_Seeded *this,FParticleEmitterInstance *param_1)

{
  FParticleRandomSeedInstancePayload *pFVar1;
  
  if ((this->RandomSeedInfo).bResetSeedOnEmitterLooping != '\0') {
    pFVar1 = FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                       (param_1,(UParticleModule *)this);
    (**(code **)(this->_padding_ + 0x378))(this,param_1,pFVar1,&this->RandomSeedInfo);
  }
  return;
}

