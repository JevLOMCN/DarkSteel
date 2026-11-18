// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 1473123f0

UClass * __cdecl UParticleModuleSpawnBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSpawnBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSpawnBase",
               &Z_Registration_Info_UClass_UParticleModuleSpawnBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleSpawnBase,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleSpawnBase>,
               InternalVTableHelperCtorCaller<UParticleModuleSpawnBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSpawnBase.InnerSingleton;
}

// UParticleModuleSpawnBase @ 147318b00

UParticleModuleSpawnBase * __thiscall
UParticleModuleSpawnBase::UParticleModuleSpawnBase
          (UParticleModuleSpawnBase *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleSpawnBase__6B_;
  return this;
}

// ~UParticleModuleSpawnBase @ 147319670

void __thiscall UParticleModuleSpawnBase::~UParticleModuleSpawnBase(UParticleModuleSpawnBase *this)

{
  this->_padding_ = (longlong)&___7UParticleModuleSpawnBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetBurstCount @ 14731b2e0

bool __thiscall
UParticleModuleSpawnBase::GetBurstCount
          (UParticleModuleSpawnBase *this,FParticleEmitterInstance *param_1,int param_2,
          float param_3,float param_4,int *param_5)

{
  *param_5 = 0;
  return this->bProcessBurstList;
}

// GetEstimatedSpawnRate @ 14731b300

float __thiscall UParticleModuleSpawnBase::GetEstimatedSpawnRate(UParticleModuleSpawnBase *this)

{
  return 0.0;
}

// GetMaximumBurstCount @ 14731b310

int __thiscall UParticleModuleSpawnBase::GetMaximumBurstCount(UParticleModuleSpawnBase *this)

{
  return 0;
}

// GetMaximumSpawnRate @ 14731b320

float __thiscall UParticleModuleSpawnBase::GetMaximumSpawnRate(UParticleModuleSpawnBase *this)

{
  return 0.0;
}

// GetModuleType @ 14731b330

EModuleType __thiscall UParticleModuleSpawnBase::GetModuleType(UParticleModuleSpawnBase *this)

{
  return EPMT_Spawn;
}

// GetPrivateStaticClass @ 14731b8f0

UClass * __cdecl UParticleModuleSpawnBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSpawnBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSpawnBase",
               &Z_Registration_Info_UClass_UParticleModuleSpawnBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleSpawnBase,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleSpawnBase>,
               InternalVTableHelperCtorCaller<UParticleModuleSpawnBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSpawnBase.InnerSingleton;
}

// GetSpawnAmount @ 14731ce00

bool __thiscall
UParticleModuleSpawnBase::GetSpawnAmount
          (UParticleModuleSpawnBase *this,FContext *param_1,int param_2,float param_3,float param_4,
          int *param_5,float *param_6)

{
  return this->bProcessSpawnRate;
}

// StaticRegisterNativesUParticleModuleSpawnBase @ 14731cfb0

void __cdecl UParticleModuleSpawnBase::StaticRegisterNativesUParticleModuleSpawnBase(void)

{
  return;
}

// UParticleModuleSpawnBase @ 14815e5d0

UParticleModuleSpawnBase * __thiscall
UParticleModuleSpawnBase::UParticleModuleSpawnBase
          (UParticleModuleSpawnBase *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  this->bProcessSpawnRate = 1;
  this->bProcessBurstList = 1;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleSpawnBase__6B_;
  return this;
}

