// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1473043a0

UClass * __cdecl UParticleModuleLight_Seeded::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLight_Seeded.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLight_Seeded",
               &Z_Registration_Info_UClass_UParticleModuleLight_Seeded.InnerSingleton,
               StaticRegisterNativesUParticleModuleLight_Seeded,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleLight_Seeded>,
               InternalVTableHelperCtorCaller<UParticleModuleLight_Seeded>,local_res8,
               UParticleModuleLight::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLight_Seeded.InnerSingleton;
}

// UParticleModuleLight_Seeded @ 14730a460

UParticleModuleLight_Seeded * __thiscall
UParticleModuleLight_Seeded::UParticleModuleLight_Seeded
          (UParticleModuleLight_Seeded *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  
  UParticleModuleLight::UParticleModuleLight((UParticleModuleLight *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleLight_Seeded__6B_;
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

// ~UParticleModuleLight_Seeded @ 14730b620

void __thiscall
UParticleModuleLight_Seeded::~UParticleModuleLight_Seeded(UParticleModuleLight_Seeded *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleLight_Seeded__6B_;
  pFVar1 = (this->RandomSeedInfo).RandomSeeds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UParticleModuleLight::~UParticleModuleLight((UParticleModuleLight *)this);
  return;
}

// GetPrivateStaticClass @ 14730dbe0

UClass * __cdecl UParticleModuleLight_Seeded::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLight_Seeded.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLight_Seeded",
               &Z_Registration_Info_UClass_UParticleModuleLight_Seeded.InnerSingleton,
               StaticRegisterNativesUParticleModuleLight_Seeded,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleLight_Seeded>,
               InternalVTableHelperCtorCaller<UParticleModuleLight_Seeded>,local_res8,
               UParticleModuleLight::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLight_Seeded.InnerSingleton;
}

// GetRandomSeedInfo @ 14730fc20

FParticleRandomSeedInfo * __thiscall
UParticleModuleLight_Seeded::GetRandomSeedInfo(UParticleModuleLight_Seeded *this)

{
  return &this->RandomSeedInfo;
}

// StaticRegisterNativesUParticleModuleLight_Seeded @ 14730fd50

void __cdecl UParticleModuleLight_Seeded::StaticRegisterNativesUParticleModuleLight_Seeded(void)

{
  return;
}

// UParticleModuleLight_Seeded @ 14815c7d0

UParticleModuleLight_Seeded * __thiscall
UParticleModuleLight_Seeded::UParticleModuleLight_Seeded
          (UParticleModuleLight_Seeded *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleLight__6B_;
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
  bVar4 = *(byte *)((longlong)&this->_padding_ + 4);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x73;
  this->_padding_ = 0;
  *(byte *)((longlong)&this->_padding_ + 4) = bVar4 & 0xf9 | 1;
  this->_padding_ = (longlong)&___7UParticleModuleLight_Seeded__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0xc;
  puVar3 = &(this->RandomSeedInfo).field_0x8;
  (this->RandomSeedInfo).bGetSeedFromInstance = '\0';
  (this->RandomSeedInfo).bRandomlySelectSeedArray = '\0';
  (this->RandomSeedInfo).bResetSeedOnEmitterLooping = '\x01';
  (this->RandomSeedInfo).bInstanceSeedIsIndex = '\0';
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 0;
  (this->RandomSeedInfo).ParameterName.ComparisonIndex = 0;
  (this->RandomSeedInfo).ParameterName.Number = 0;
  (this->RandomSeedInfo).RandomSeeds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RandomSeedInfo).RandomSeeds.ArrayNum = 0;
  (this->RandomSeedInfo).RandomSeeds.ArrayMax = 0;
  return this;
}

// EmitterLoopingNotify @ 148171b30

void __thiscall
UParticleModuleLight_Seeded::EmitterLoopingNotify
          (UParticleModuleLight_Seeded *this,FParticleEmitterInstance *param_1)

{
  FParticleRandomSeedInstancePayload *pFVar1;
  
  if ((this->RandomSeedInfo).bResetSeedOnEmitterLooping != '\0') {
    pFVar1 = FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                       (param_1,(UParticleModule *)this);
    (**(code **)(this->_padding_ + 0x378))(this,param_1,pFVar1,&this->RandomSeedInfo);
  }
  return;
}

