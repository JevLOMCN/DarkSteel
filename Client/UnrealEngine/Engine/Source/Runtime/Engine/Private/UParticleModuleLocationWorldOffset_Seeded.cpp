// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147306db0

UClass * __cdecl UParticleModuleLocationWorldOffset_Seeded::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationWorldOffset_Seeded.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationWorldOffset_Seeded",
               &Z_Registration_Info_UClass_UParticleModuleLocationWorldOffset_Seeded.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationWorldOffset_Seeded,0xb8,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleLocationWorldOffset_Seeded>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationWorldOffset_Seeded>,local_res8,
               UParticleModuleLocationWorldOffset::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationWorldOffset_Seeded.InnerSingleton;
}

// UParticleModuleLocationWorldOffset_Seeded @ 14730abc0

UParticleModuleLocationWorldOffset_Seeded * __thiscall
UParticleModuleLocationWorldOffset_Seeded::UParticleModuleLocationWorldOffset_Seeded
          (UParticleModuleLocationWorldOffset_Seeded *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  
  UParticleModuleLocation::UParticleModuleLocation((UParticleModuleLocation *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleLocationWorldOffset_Seeded__6B_;
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

// ~UParticleModuleLocationWorldOffset_Seeded @ 14730ba90

void __thiscall
UParticleModuleLocationWorldOffset_Seeded::~UParticleModuleLocationWorldOffset_Seeded
          (UParticleModuleLocationWorldOffset_Seeded *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleLocationWorldOffset_Seeded__6B_;
  pFVar1 = (this->RandomSeedInfo).RandomSeeds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleLocation__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UParticleModuleLocationBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730e720

UClass * __cdecl UParticleModuleLocationWorldOffset_Seeded::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationWorldOffset_Seeded.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationWorldOffset_Seeded",
               &Z_Registration_Info_UClass_UParticleModuleLocationWorldOffset_Seeded.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationWorldOffset_Seeded,0xb8,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleLocationWorldOffset_Seeded>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationWorldOffset_Seeded>,local_res8,
               UParticleModuleLocationWorldOffset::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationWorldOffset_Seeded.InnerSingleton;
}

// GetRandomSeedInfo @ 14730fc50

FParticleRandomSeedInfo * __thiscall
UParticleModuleLocationWorldOffset_Seeded::GetRandomSeedInfo
          (UParticleModuleLocationWorldOffset_Seeded *this)

{
  return &this->RandomSeedInfo;
}

// StaticRegisterNativesUParticleModuleLocationWorldOffset_Seeded @ 14730fe40

void __cdecl
UParticleModuleLocationWorldOffset_Seeded::
StaticRegisterNativesUParticleModuleLocationWorldOffset_Seeded(void)

{
  return;
}

// UParticleModuleLocationWorldOffset_Seeded @ 14815d3d0

UParticleModuleLocationWorldOffset_Seeded * __thiscall
UParticleModuleLocationWorldOffset_Seeded::UParticleModuleLocationWorldOffset_Seeded
          (UParticleModuleLocationWorldOffset_Seeded *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  
  UParticleModuleLocation::UParticleModuleLocation((UParticleModuleLocation *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  this->_padding_ = (longlong)&___7UParticleModuleLocationWorldOffset_Seeded__6B_;
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

// EmitterLoopingNotify @ 148171c50

void __thiscall
UParticleModuleLocationWorldOffset_Seeded::EmitterLoopingNotify
          (UParticleModuleLocationWorldOffset_Seeded *this,FParticleEmitterInstance *param_1)

{
  FParticleRandomSeedInstancePayload *pFVar1;
  
  if ((this->RandomSeedInfo).bResetSeedOnEmitterLooping != '\0') {
    pFVar1 = FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                       (param_1,(UParticleModule *)this);
    (**(code **)(this->_padding_ + 0x378))(this,param_1,pFVar1,&this->RandomSeedInfo);
  }
  return;
}

