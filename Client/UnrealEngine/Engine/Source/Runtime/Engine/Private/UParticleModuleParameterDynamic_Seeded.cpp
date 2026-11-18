// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147306cf0

UClass * __cdecl UParticleModuleParameterDynamic_Seeded::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleParameterDynamic_Seeded.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleParameterDynamic_Seeded",
               &Z_Registration_Info_UClass_UParticleModuleParameterDynamic_Seeded.InnerSingleton,
               StaticRegisterNativesUParticleModuleParameterDynamic_Seeded,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleParameterDynamic_Seeded>,
               InternalVTableHelperCtorCaller<UParticleModuleParameterDynamic_Seeded>,local_res8,
               UParticleModuleParameterDynamic::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleParameterDynamic_Seeded.InnerSingleton;
}

// UParticleModuleParameterDynamic_Seeded @ 14730b200

UParticleModuleParameterDynamic_Seeded * __thiscall
UParticleModuleParameterDynamic_Seeded::UParticleModuleParameterDynamic_Seeded
          (UParticleModuleParameterDynamic_Seeded *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleParameterDynamic_Seeded__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  puVar2 = &(this->RandomSeedInfo).field_0x8;
  (this->RandomSeedInfo).bGetSeedFromInstance = '\0';
  (this->RandomSeedInfo).bRandomlySelectSeedArray = '\0';
  (this->RandomSeedInfo).bResetSeedOnEmitterLooping = '\x01';
  (this->RandomSeedInfo).bInstanceSeedIsIndex = '\0';
  (this->RandomSeedInfo).ParameterName.ComparisonIndex = 0;
  (this->RandomSeedInfo).ParameterName.Number = 0;
  (this->RandomSeedInfo).RandomSeeds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RandomSeedInfo).RandomSeeds.ArrayNum = 0;
  (this->RandomSeedInfo).RandomSeeds.ArrayMax = 0;
  return this;
}

// ~UParticleModuleParameterDynamic_Seeded @ 14730bea0

void __thiscall
UParticleModuleParameterDynamic_Seeded::~UParticleModuleParameterDynamic_Seeded
          (UParticleModuleParameterDynamic_Seeded *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleParameterDynamic_Seeded__6B_;
  pFVar1 = (this->RandomSeedInfo).RandomSeeds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UParticleModuleParameterDynamic__6B_;
  DestructItems<FEmitterDynamicParameter,int>
            ((FEmitterDynamicParameter *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UParticleModuleParameterBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730f320

UClass * __cdecl UParticleModuleParameterDynamic_Seeded::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleParameterDynamic_Seeded.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleParameterDynamic_Seeded",
               &Z_Registration_Info_UClass_UParticleModuleParameterDynamic_Seeded.InnerSingleton,
               StaticRegisterNativesUParticleModuleParameterDynamic_Seeded,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleParameterDynamic_Seeded>,
               InternalVTableHelperCtorCaller<UParticleModuleParameterDynamic_Seeded>,local_res8,
               UParticleModuleParameterDynamic::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleParameterDynamic_Seeded.InnerSingleton;
}

// GetRandomSeedInfo @ 14730fc90

FParticleRandomSeedInfo * __thiscall
UParticleModuleParameterDynamic_Seeded::GetRandomSeedInfo
          (UParticleModuleParameterDynamic_Seeded *this)

{
  return &this->RandomSeedInfo;
}

// StaticRegisterNativesUParticleModuleParameterDynamic_Seeded @ 14730ff40

void __cdecl
UParticleModuleParameterDynamic_Seeded::StaticRegisterNativesUParticleModuleParameterDynamic_Seeded
          (void)

{
  return;
}

// UParticleModuleParameterDynamic_Seeded @ 14815dc40

UParticleModuleParameterDynamic_Seeded * __thiscall
UParticleModuleParameterDynamic_Seeded::UParticleModuleParameterDynamic_Seeded
          (UParticleModuleParameterDynamic_Seeded *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  byte bVar4;
  longlong lVar5;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleParameterDynamic_Seeded__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  puVar2 = &(this->RandomSeedInfo).field_0x8;
  (this->RandomSeedInfo).bGetSeedFromInstance = '\0';
  (this->RandomSeedInfo).bRandomlySelectSeedArray = '\0';
  (this->RandomSeedInfo).bResetSeedOnEmitterLooping = '\x01';
  (this->RandomSeedInfo).bInstanceSeedIsIndex = '\0';
  lVar5 = this->_padding_;
  (this->RandomSeedInfo).ParameterName.ComparisonIndex = 0;
  (this->RandomSeedInfo).ParameterName.Number = 0;
  (this->RandomSeedInfo).RandomSeeds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pbVar3 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar3 = *pbVar3 | 0xf;
  *(byte *)&this->_padding_ = (byte)lVar5 & 0x14 | 0x83;
  (this->RandomSeedInfo).RandomSeeds.ArrayNum = 0;
  (this->RandomSeedInfo).RandomSeeds.ArrayMax = 0;
  return this;
}

// EmitterLoopingNotify @ 148171dd0

void __thiscall
UParticleModuleParameterDynamic_Seeded::EmitterLoopingNotify
          (UParticleModuleParameterDynamic_Seeded *this,FParticleEmitterInstance *param_1)

{
  uchar *puVar1;
  
  if ((this->RandomSeedInfo).bResetSeedOnEmitterLooping != '\0') {
    puVar1 = FParticleEmitterInstance::GetModuleInstanceData(param_1,(UParticleModule *)this);
    (**(code **)(this->_padding_ + 0x378))(this,param_1,puVar1,&this->RandomSeedInfo);
  }
  return;
}

