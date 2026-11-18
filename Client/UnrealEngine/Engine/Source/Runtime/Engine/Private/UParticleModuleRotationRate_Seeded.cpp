// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147306510

UClass * __cdecl UParticleModuleRotationRate_Seeded::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleRotationRate_Seeded.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleRotationRate_Seeded",
               &Z_Registration_Info_UClass_UParticleModuleRotationRate_Seeded.InnerSingleton,
               StaticRegisterNativesUParticleModuleRotationRate_Seeded,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleRotationRate_Seeded>,
               InternalVTableHelperCtorCaller<UParticleModuleRotationRate_Seeded>,local_res8,
               UParticleModuleRotationRate::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleRotationRate_Seeded.InnerSingleton;
}

// UParticleModuleRotationRate_Seeded @ 14730b4c0

UParticleModuleRotationRate_Seeded * __thiscall
UParticleModuleRotationRate_Seeded::UParticleModuleRotationRate_Seeded
          (UParticleModuleRotationRate_Seeded *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleRotationRate_Seeded__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  puVar2 = &(this->RandomSeedInfo).field_0x8;
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

// ~UParticleModuleRotationRate_Seeded @ 14730c0f0

void __thiscall
UParticleModuleRotationRate_Seeded::~UParticleModuleRotationRate_Seeded
          (UParticleModuleRotationRate_Seeded *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleRotationRate_Seeded__6B_;
  pFVar1 = (this->RandomSeedInfo).RandomSeeds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleRotationRate__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UParticleModuleRotationRateBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730f9e0

UClass * __cdecl UParticleModuleRotationRate_Seeded::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleRotationRate_Seeded.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleRotationRate_Seeded",
               &Z_Registration_Info_UClass_UParticleModuleRotationRate_Seeded.InnerSingleton,
               StaticRegisterNativesUParticleModuleRotationRate_Seeded,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleRotationRate_Seeded>,
               InternalVTableHelperCtorCaller<UParticleModuleRotationRate_Seeded>,local_res8,
               UParticleModuleRotationRate::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleRotationRate_Seeded.InnerSingleton;
}

// GetRandomSeedInfo @ 14730fca0

FParticleRandomSeedInfo * __thiscall
UParticleModuleRotationRate_Seeded::GetRandomSeedInfo(UParticleModuleRotationRate_Seeded *this)

{
  return &this->RandomSeedInfo;
}

// StaticRegisterNativesUParticleModuleRotationRate_Seeded @ 14730ffd0

void __cdecl
UParticleModuleRotationRate_Seeded::StaticRegisterNativesUParticleModuleRotationRate_Seeded(void)

{
  return;
}

// UParticleModuleRotationRate_Seeded @ 14815e040

UParticleModuleRotationRate_Seeded * __thiscall
UParticleModuleRotationRate_Seeded::UParticleModuleRotationRate_Seeded
          (UParticleModuleRotationRate_Seeded *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  byte bVar4;
  longlong lVar5;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleRotationRate_Seeded__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  puVar2 = &(this->RandomSeedInfo).field_0x8;
  (this->RandomSeedInfo).bGetSeedFromInstance = '\0';
  (this->RandomSeedInfo).bRandomlySelectSeedArray = '\0';
  (this->RandomSeedInfo).bResetSeedOnEmitterLooping = '\x01';
  (this->RandomSeedInfo).bInstanceSeedIsIndex = '\0';
  lVar5 = this->_padding_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  pbVar3 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar3 = *pbVar3 | 0xf;
  *(byte *)&this->_padding_ = (byte)lVar5 & 0x16 | 0x81;
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

// EmitterLoopingNotify @ 148171e30

void __thiscall
UParticleModuleRotationRate_Seeded::EmitterLoopingNotify
          (UParticleModuleRotationRate_Seeded *this,FParticleEmitterInstance *param_1)

{
  FParticleRandomSeedInstancePayload *pFVar1;
  
  if ((this->RandomSeedInfo).bResetSeedOnEmitterLooping != '\0') {
    pFVar1 = FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                       (param_1,(UParticleModule *)this);
    (**(code **)(this->_padding_ + 0x378))(this,param_1,pFVar1,&this->RandomSeedInfo);
  }
  return;
}

