// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147315830

UClass * __cdecl UParticleModuleVelocity_Seeded::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVelocity_Seeded.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVelocity_Seeded",
               &Z_Registration_Info_UClass_UParticleModuleVelocity_Seeded.InnerSingleton,
               StaticRegisterNativesUParticleModuleVelocity_Seeded,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleVelocity_Seeded>,
               InternalVTableHelperCtorCaller<UParticleModuleVelocity_Seeded>,local_res8,
               UParticleModuleVelocity::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVelocity_Seeded.InnerSingleton;
}

// UParticleModuleVelocity_Seeded @ 147319350

UParticleModuleVelocity_Seeded * __thiscall
UParticleModuleVelocity_Seeded::UParticleModuleVelocity_Seeded
          (UParticleModuleVelocity_Seeded *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  
  UParticleModuleVelocity::UParticleModuleVelocity((UParticleModuleVelocity *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleVelocity_Seeded__6B_;
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

// ~UParticleModuleVelocity_Seeded @ 147319c30

void __thiscall
UParticleModuleVelocity_Seeded::~UParticleModuleVelocity_Seeded
          (UParticleModuleVelocity_Seeded *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleVelocity_Seeded__6B_;
  pFVar1 = (this->RandomSeedInfo).RandomSeeds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleVelocity__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UParticleModuleVelocityBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731cbb0

UClass * __cdecl UParticleModuleVelocity_Seeded::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVelocity_Seeded.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVelocity_Seeded",
               &Z_Registration_Info_UClass_UParticleModuleVelocity_Seeded.InnerSingleton,
               StaticRegisterNativesUParticleModuleVelocity_Seeded,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleVelocity_Seeded>,
               InternalVTableHelperCtorCaller<UParticleModuleVelocity_Seeded>,local_res8,
               UParticleModuleVelocity::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVelocity_Seeded.InnerSingleton;
}

// GetRandomSeedInfo @ 14731cdf0

FParticleRandomSeedInfo * __thiscall
UParticleModuleVelocity_Seeded::GetRandomSeedInfo(UParticleModuleVelocity_Seeded *this)

{
  return &this->RandomSeedInfo;
}

// StaticRegisterNativesUParticleModuleVelocity_Seeded @ 14731d140

void __cdecl
UParticleModuleVelocity_Seeded::StaticRegisterNativesUParticleModuleVelocity_Seeded(void)

{
  return;
}

// UParticleModuleVelocity_Seeded @ 14815ee60

UParticleModuleVelocity_Seeded * __thiscall
UParticleModuleVelocity_Seeded::UParticleModuleVelocity_Seeded
          (UParticleModuleVelocity_Seeded *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleVelocity__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
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
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  this->_padding_ = (longlong)&___7UParticleModuleVelocity_Seeded__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0xc;
  puVar3 = &(this->RandomSeedInfo).field_0x8;
  (this->RandomSeedInfo).bGetSeedFromInstance = '\0';
  (this->RandomSeedInfo).bRandomlySelectSeedArray = '\0';
  (this->RandomSeedInfo).bResetSeedOnEmitterLooping = '\x01';
  (this->RandomSeedInfo).bInstanceSeedIsIndex = '\0';
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->RandomSeedInfo).ParameterName.ComparisonIndex = 0;
  (this->RandomSeedInfo).ParameterName.Number = 0;
  (this->RandomSeedInfo).RandomSeeds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RandomSeedInfo).RandomSeeds.ArrayNum = 0;
  (this->RandomSeedInfo).RandomSeeds.ArrayMax = 0;
  return this;
}

// EmitterLoopingNotify @ 148171f50

void __thiscall
UParticleModuleVelocity_Seeded::EmitterLoopingNotify
          (UParticleModuleVelocity_Seeded *this,FParticleEmitterInstance *param_1)

{
  uchar *puVar1;
  
  if ((this->RandomSeedInfo).bResetSeedOnEmitterLooping != '\0') {
    puVar1 = FParticleEmitterInstance::GetModuleInstanceData(param_1,(UParticleModule *)this);
    (**(code **)(this->_padding_ + 0x378))(this,param_1,puVar1,&this->RandomSeedInfo);
  }
  return;
}

