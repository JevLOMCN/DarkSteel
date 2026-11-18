// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1472f8740

UClass * __cdecl UParticleModuleLifetime_Seeded::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLifetime_Seeded.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLifetime_Seeded",
               &Z_Registration_Info_UClass_UParticleModuleLifetime_Seeded.InnerSingleton,
               StaticRegisterNativesUParticleModuleLifetime_Seeded,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleLifetime_Seeded>,
               InternalVTableHelperCtorCaller<UParticleModuleLifetime_Seeded>,local_res8,
               UParticleModuleLifetime::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLifetime_Seeded.InnerSingleton;
}

// UParticleModuleLifetime_Seeded @ 1472fd4a0

UParticleModuleLifetime_Seeded * __thiscall
UParticleModuleLifetime_Seeded::UParticleModuleLifetime_Seeded
          (UParticleModuleLifetime_Seeded *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleLifetime_Seeded__6B_;
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

// ~UParticleModuleLifetime_Seeded @ 1472fdfe0

void __thiscall
UParticleModuleLifetime_Seeded::~UParticleModuleLifetime_Seeded
          (UParticleModuleLifetime_Seeded *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleLifetime_Seeded__6B_;
  pFVar1 = (this->RandomSeedInfo).RandomSeeds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleLifetime__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1473014f0

UClass * __cdecl UParticleModuleLifetime_Seeded::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLifetime_Seeded.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLifetime_Seeded",
               &Z_Registration_Info_UClass_UParticleModuleLifetime_Seeded.InnerSingleton,
               StaticRegisterNativesUParticleModuleLifetime_Seeded,0x80,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleLifetime_Seeded>,
               InternalVTableHelperCtorCaller<UParticleModuleLifetime_Seeded>,local_res8,
               UParticleModuleLifetime::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLifetime_Seeded.InnerSingleton;
}

// GetRandomSeedInfo @ 147301690

FParticleRandomSeedInfo * __thiscall
UParticleModuleLifetime_Seeded::GetRandomSeedInfo(UParticleModuleLifetime_Seeded *this)

{
  return &this->RandomSeedInfo;
}

// StaticRegisterNativesUParticleModuleLifetime_Seeded @ 147301960

void __cdecl
UParticleModuleLifetime_Seeded::StaticRegisterNativesUParticleModuleLifetime_Seeded(void)

{
  return;
}

// UParticleModuleLifetime_Seeded @ 14815c5d0

UParticleModuleLifetime_Seeded * __thiscall
UParticleModuleLifetime_Seeded::UParticleModuleLifetime_Seeded
          (UParticleModuleLifetime_Seeded *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  byte bVar4;
  longlong lVar5;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleLifetime_Seeded__6B_;
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

// EmitterLoopingNotify @ 148171ad0

void __thiscall
UParticleModuleLifetime_Seeded::EmitterLoopingNotify
          (UParticleModuleLifetime_Seeded *this,FParticleEmitterInstance *param_1)

{
  FParticleRandomSeedInstancePayload *pFVar1;
  
  if ((this->RandomSeedInfo).bResetSeedOnEmitterLooping != '\0') {
    pFVar1 = FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                       (param_1,(UParticleModule *)this);
    (**(code **)(this->_padding_ + 0x378))(this,param_1,pFVar1,&this->RandomSeedInfo);
  }
  return;
}

// GetLifetimeValue @ 14817a310

float __thiscall
UParticleModuleLifetime_Seeded::GetLifetimeValue
          (UParticleModuleLifetime_Seeded *this,FContext *param_1,float param_2,UObject *param_3)

{
  FRandomStream *pFVar1;
  float fVar2;
  
  pFVar1 = &FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                      (param_1->Owner,(UParticleModule *)this)->RandomStream;
  if (pFVar1 == (FRandomStream *)0x0) {
    pFVar1 = (FRandomStream *)(**(code **)((longlong)*param_1->Owner->Component + 0x120))();
  }
  fVar2 = FRawDistributionFloat::GetValue
                    ((FRawDistributionFloat *)&this->_padding_,param_2,param_3,pFVar1);
  return fVar2;
}

