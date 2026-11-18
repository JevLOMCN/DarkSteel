// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147305e40

UClass * __cdecl UParticleModuleLocationPrimitiveCylinder_Seeded::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveCylinder_Seeded.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationPrimitiveCylinder_Seeded",
               &Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveCylinder_Seeded.
                InnerSingleton,StaticRegisterNativesUParticleModuleLocationPrimitiveCylinder_Seeded,
               0x158,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleLocationPrimitiveCylinder_Seeded>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationPrimitiveCylinder_Seeded>,
               local_res8,UParticleModuleLocationPrimitiveCylinder::StaticClass,
               UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveCylinder_Seeded.InnerSingleton;
}

// UParticleModuleLocationPrimitiveCylinder_Seeded @ 14730a900

UParticleModuleLocationPrimitiveCylinder_Seeded * __thiscall
UParticleModuleLocationPrimitiveCylinder_Seeded::UParticleModuleLocationPrimitiveCylinder_Seeded
          (UParticleModuleLocationPrimitiveCylinder_Seeded *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  
  UParticleModuleLocationPrimitiveCylinder::UParticleModuleLocationPrimitiveCylinder
            ((UParticleModuleLocationPrimitiveCylinder *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleLocationPrimitiveCylinder_Seeded__6B_;
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

// ~UParticleModuleLocationPrimitiveCylinder_Seeded @ 14730b890

void __thiscall
UParticleModuleLocationPrimitiveCylinder_Seeded::~UParticleModuleLocationPrimitiveCylinder_Seeded
          (UParticleModuleLocationPrimitiveCylinder_Seeded *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UParticleModuleLocationPrimitiveCylinder_Seeded__6B_;
  pFVar1 = (this->RandomSeedInfo).RandomSeeds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UParticleModuleLocationPrimitiveCylinder::~UParticleModuleLocationPrimitiveCylinder
            ((UParticleModuleLocationPrimitiveCylinder *)this);
  return;
}

// GetPrivateStaticClass @ 14730e2a0

UClass * __cdecl UParticleModuleLocationPrimitiveCylinder_Seeded::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveCylinder_Seeded.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationPrimitiveCylinder_Seeded",
               &Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveCylinder_Seeded.
                InnerSingleton,StaticRegisterNativesUParticleModuleLocationPrimitiveCylinder_Seeded,
               0x158,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleLocationPrimitiveCylinder_Seeded>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationPrimitiveCylinder_Seeded>,
               local_res8,UParticleModuleLocationPrimitiveCylinder::StaticClass,
               UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveCylinder_Seeded.InnerSingleton;
}

// GetRandomSeedInfo @ 14730fc30

FParticleRandomSeedInfo * __thiscall
UParticleModuleLocationPrimitiveCylinder_Seeded::GetRandomSeedInfo
          (UParticleModuleLocationPrimitiveCylinder_Seeded *this)

{
  return &this->RandomSeedInfo;
}

// StaticRegisterNativesUParticleModuleLocationPrimitiveCylinder_Seeded @ 14730fde0

void __cdecl
UParticleModuleLocationPrimitiveCylinder_Seeded::
StaticRegisterNativesUParticleModuleLocationPrimitiveCylinder_Seeded(void)

{
  return;
}

// UParticleModuleLocationPrimitiveCylinder_Seeded @ 14815cfd0

UParticleModuleLocationPrimitiveCylinder_Seeded * __thiscall
UParticleModuleLocationPrimitiveCylinder_Seeded::UParticleModuleLocationPrimitiveCylinder_Seeded
          (UParticleModuleLocationPrimitiveCylinder_Seeded *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  
  UParticleModuleLocationPrimitiveBase::UParticleModuleLocationPrimitiveBase
            ((UParticleModuleLocationPrimitiveBase *)this,param_1);
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x41;
  this->_padding_ = (longlong)&___7UParticleModuleLocationPrimitiveCylinder_Seeded__6B_;
  *(undefined1 *)&this->_padding_ = 2;
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

// EmitterLoopingNotify @ 148171b90

void __thiscall
UParticleModuleLocationPrimitiveCylinder_Seeded::EmitterLoopingNotify
          (UParticleModuleLocationPrimitiveCylinder_Seeded *this,FParticleEmitterInstance *param_1)

{
  FParticleRandomSeedInstancePayload *pFVar1;
  
  if ((this->RandomSeedInfo).bResetSeedOnEmitterLooping != '\0') {
    pFVar1 = FParticleEmitterInstance::GetModuleRandomSeedInstanceData
                       (param_1,(UParticleModule *)this);
    (**(code **)(this->_padding_ + 0x378))(this,param_1,pFVar1,&this->RandomSeedInfo);
  }
  return;
}

