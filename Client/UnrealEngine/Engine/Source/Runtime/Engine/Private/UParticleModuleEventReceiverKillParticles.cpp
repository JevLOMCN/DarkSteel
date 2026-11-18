// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472f7510

UClass * __cdecl UParticleModuleEventReceiverKillParticles::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleEventReceiverKillParticles.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleEventReceiverKillParticles",
               &Z_Registration_Info_UClass_UParticleModuleEventReceiverKillParticles.InnerSingleton,
               StaticRegisterNativesUParticleModuleEventReceiverKillParticles,0x48,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleEventReceiverKillParticles>,
               InternalVTableHelperCtorCaller<UParticleModuleEventReceiverKillParticles>,local_res8,
               UParticleModuleEventReceiverBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleEventReceiverKillParticles.InnerSingleton;
}

// UParticleModuleEventReceiverKillParticles @ 1472fd190

UParticleModuleEventReceiverKillParticles * __thiscall
UParticleModuleEventReceiverKillParticles::UParticleModuleEventReceiverKillParticles
          (UParticleModuleEventReceiverKillParticles *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UParticleModuleEventReceiverKillParticles__6B_;
  return this;
}

// ~UParticleModuleEventReceiverKillParticles @ 1472fde30

void __thiscall
UParticleModuleEventReceiverKillParticles::~UParticleModuleEventReceiverKillParticles
          (UParticleModuleEventReceiverKillParticles *this)

{
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147300f00

UClass * __cdecl UParticleModuleEventReceiverKillParticles::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleEventReceiverKillParticles.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleEventReceiverKillParticles",
               &Z_Registration_Info_UClass_UParticleModuleEventReceiverKillParticles.InnerSingleton,
               StaticRegisterNativesUParticleModuleEventReceiverKillParticles,0x48,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleEventReceiverKillParticles>,
               InternalVTableHelperCtorCaller<UParticleModuleEventReceiverKillParticles>,local_res8,
               UParticleModuleEventReceiverBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleEventReceiverKillParticles.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleEventReceiverKillParticles @ 1473018e0

void __cdecl
UParticleModuleEventReceiverKillParticles::
StaticRegisterNativesUParticleModuleEventReceiverKillParticles(void)

{
  return;
}

// UParticleModuleEventReceiverKillParticles @ 14815c230

UParticleModuleEventReceiverKillParticles * __thiscall
UParticleModuleEventReceiverKillParticles::UParticleModuleEventReceiverKillParticles
          (UParticleModuleEventReceiverKillParticles *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x14;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x83;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UParticleModuleEventReceiverKillParticles__6B_;
  return this;
}

// ProcessParticleEvent @ 14818dc30

bool __thiscall
UParticleModuleEventReceiverKillParticles::ProcessParticleEvent
          (UParticleModuleEventReceiverKillParticles *this,FParticleEmitterInstance *param_1,
          FParticleEventData *param_2,float param_3)

{
  byte bVar1;
  
  if ((param_2->EventName == *(FName *)((longlong)&this->_padding_ + 4)) &&
     ((bVar1 = (byte)this->_padding_, bVar1 == 0 || ((uint)bVar1 == param_2->Type)))) {
    (**(code **)(param_1->_padding_ + 0xf0))(param_1,1);
    if (this->bStopSpawning != 0) {
      (**(code **)(param_1->_padding_ + 0xf8))(param_1,1);
      (**(code **)(param_1->_padding_ + 0x100))(param_1,1);
    }
    return true;
  }
  return false;
}

