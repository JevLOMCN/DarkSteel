// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147306150

UClass * __cdecl UParticleModuleLocationPrimitiveSphere_Seeded::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveSphere_Seeded.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationPrimitiveSphere_Seeded",
               &Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveSphere_Seeded.
                InnerSingleton,StaticRegisterNativesUParticleModuleLocationPrimitiveSphere_Seeded,
               0x118,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleLocationPrimitiveSphere_Seeded>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationPrimitiveSphere_Seeded>,
               local_res8,UParticleModuleLocationPrimitiveSphere::StaticClass,
               UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveSphere_Seeded.InnerSingleton;
}

// UParticleModuleLocationPrimitiveSphere_Seeded @ 14730a9b0

UParticleModuleLocationPrimitiveSphere_Seeded * __thiscall
UParticleModuleLocationPrimitiveSphere_Seeded::UParticleModuleLocationPrimitiveSphere_Seeded
          (UParticleModuleLocationPrimitiveSphere_Seeded *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  
  UParticleModuleLocationPrimitiveBase::UParticleModuleLocationPrimitiveBase
            ((UParticleModuleLocationPrimitiveBase *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleLocationPrimitiveSphere_Seeded__6B_;
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

// ~UParticleModuleLocationPrimitiveSphere_Seeded @ 14730b940

void __thiscall
UParticleModuleLocationPrimitiveSphere_Seeded::~UParticleModuleLocationPrimitiveSphere_Seeded
          (UParticleModuleLocationPrimitiveSphere_Seeded *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleLocationPrimitiveSphere_Seeded__6B_;
  pFVar1 = (this->RandomSeedInfo).RandomSeeds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UParticleModuleLocationPrimitiveSphere::~UParticleModuleLocationPrimitiveSphere
            ((UParticleModuleLocationPrimitiveSphere *)this);
  return;
}

// GetPrivateStaticClass @ 14730e420

UClass * __cdecl UParticleModuleLocationPrimitiveSphere_Seeded::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveSphere_Seeded.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationPrimitiveSphere_Seeded",
               &Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveSphere_Seeded.
                InnerSingleton,StaticRegisterNativesUParticleModuleLocationPrimitiveSphere_Seeded,
               0x118,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleLocationPrimitiveSphere_Seeded>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationPrimitiveSphere_Seeded>,
               local_res8,UParticleModuleLocationPrimitiveSphere::StaticClass,
               UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveSphere_Seeded.InnerSingleton;
}

// GetRandomSeedInfo @ 14730fc40

FParticleRandomSeedInfo * __thiscall
UParticleModuleLocationPrimitiveSphere_Seeded::GetRandomSeedInfo
          (UParticleModuleLocationPrimitiveSphere_Seeded *this)

{
  return &this->RandomSeedInfo;
}

// StaticRegisterNativesUParticleModuleLocationPrimitiveSphere_Seeded @ 14730fe00

void __cdecl
UParticleModuleLocationPrimitiveSphere_Seeded::
StaticRegisterNativesUParticleModuleLocationPrimitiveSphere_Seeded(void)

{
  return;
}

// UParticleModuleLocationPrimitiveSphere_Seeded @ 14815d100

UParticleModuleLocationPrimitiveSphere_Seeded * __thiscall
UParticleModuleLocationPrimitiveSphere_Seeded::UParticleModuleLocationPrimitiveSphere_Seeded
          (UParticleModuleLocationPrimitiveSphere_Seeded *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  
  UParticleModuleLocationPrimitiveBase::UParticleModuleLocationPrimitiveBase
            ((UParticleModuleLocationPrimitiveBase *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x41;
  this->_padding_ = (longlong)&___7UParticleModuleLocationPrimitiveSphere_Seeded__6B_;
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

// EmitterLoopingNotify @ 148171bf0

void __thiscall
UParticleModuleLocationPrimitiveSphere_Seeded::EmitterLoopingNotify
          (UParticleModuleLocationPrimitiveSphere_Seeded *this,FParticleEmitterInstance *param_1)

{
  FParticleRandomSeedInstancePayload *pFVar1;
  
  if ((this->RandomSeedInfo).bResetSeedOnEmitterLooping != '\0') {
    pFVar1 = FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                       (param_1,(UParticleModule *)this);
    (**(code **)(this->_padding_ + 0x378))(this,param_1,pFVar1,&this->RandomSeedInfo);
  }
  return;
}

