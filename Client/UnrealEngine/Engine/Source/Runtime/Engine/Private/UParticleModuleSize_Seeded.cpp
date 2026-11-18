// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147312fb0

UClass * __cdecl UParticleModuleSize_Seeded::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSize_Seeded.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSize_Seeded",
               &Z_Registration_Info_UClass_UParticleModuleSize_Seeded.InnerSingleton,
               StaticRegisterNativesUParticleModuleSize_Seeded,0xb0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UParticleModuleSize_Seeded>,
               InternalVTableHelperCtorCaller<UParticleModuleSize_Seeded>,local_res8,
               UParticleModuleSize::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSize_Seeded.InnerSingleton;
}

// UParticleModuleSize_Seeded @ 147318980

UParticleModuleSize_Seeded * __thiscall
UParticleModuleSize_Seeded::UParticleModuleSize_Seeded
          (UParticleModuleSize_Seeded *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  
  UParticleModuleSize::UParticleModuleSize((UParticleModuleSize *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleSize_Seeded__6B_;
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

// ~UParticleModuleSize_Seeded @ 147319580

void __thiscall
UParticleModuleSize_Seeded::~UParticleModuleSize_Seeded(UParticleModuleSize_Seeded *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleSize_Seeded__6B_;
  pFVar1 = (this->RandomSeedInfo).RandomSeeds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UParticleModuleSize::~UParticleModuleSize((UParticleModuleSize *)this);
  return;
}

// GetPrivateStaticClass @ 14731b6b0

UClass * __cdecl UParticleModuleSize_Seeded::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSize_Seeded.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSize_Seeded",
               &Z_Registration_Info_UClass_UParticleModuleSize_Seeded.InnerSingleton,
               StaticRegisterNativesUParticleModuleSize_Seeded,0xb0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UParticleModuleSize_Seeded>,
               InternalVTableHelperCtorCaller<UParticleModuleSize_Seeded>,local_res8,
               UParticleModuleSize::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSize_Seeded.InnerSingleton;
}

// GetRandomSeedInfo @ 14731cde0

FParticleRandomSeedInfo * __thiscall
UParticleModuleSize_Seeded::GetRandomSeedInfo(UParticleModuleSize_Seeded *this)

{
  return &this->RandomSeedInfo;
}

// StaticRegisterNativesUParticleModuleSize_Seeded @ 14731cf80

void __cdecl UParticleModuleSize_Seeded::StaticRegisterNativesUParticleModuleSize_Seeded(void)

{
  return;
}

// UParticleModuleSize_Seeded @ 14815e390

UParticleModuleSize_Seeded * __thiscall
UParticleModuleSize_Seeded::UParticleModuleSize_Seeded
          (UParticleModuleSize_Seeded *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleSize__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar6;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar6;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UParticleModuleSize_Seeded__6B_;
  (this->RandomSeedInfo).ParameterName.ComparisonIndex = 0;
  (this->RandomSeedInfo).ParameterName.Number = 0;
  (this->RandomSeedInfo).RandomSeeds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  puVar3 = &(this->RandomSeedInfo).field_0x8;
  (this->RandomSeedInfo).bGetSeedFromInstance = '\0';
  (this->RandomSeedInfo).bRandomlySelectSeedArray = '\0';
  (this->RandomSeedInfo).bResetSeedOnEmitterLooping = '\x01';
  (this->RandomSeedInfo).bInstanceSeedIsIndex = '\0';
  lVar5 = this->_padding_;
  (this->RandomSeedInfo).RandomSeeds.ArrayNum = 0;
  (this->RandomSeedInfo).RandomSeeds.ArrayMax = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0xc;
  *(byte *)&this->_padding_ = (byte)lVar5 & 0xfd | 1;
  return this;
}

// EmitterLoopingNotify @ 148171ef0

void __thiscall
UParticleModuleSize_Seeded::EmitterLoopingNotify
          (UParticleModuleSize_Seeded *this,FParticleEmitterInstance *param_1)

{
  FParticleRandomSeedInstancePayload *pFVar1;
  
  if ((this->RandomSeedInfo).bResetSeedOnEmitterLooping != '\0') {
    pFVar1 = FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                       (param_1,(UParticleModule *)this);
    (**(code **)(this->_padding_ + 0x378))(this,param_1,pFVar1,&this->RandomSeedInfo);
  }
  return;
}

