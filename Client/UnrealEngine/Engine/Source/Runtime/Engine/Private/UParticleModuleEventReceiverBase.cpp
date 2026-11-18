// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1472f7350

UClass * __cdecl UParticleModuleEventReceiverBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleEventReceiverBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleEventReceiverBase",
               &Z_Registration_Info_UClass_UParticleModuleEventReceiverBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleEventReceiverBase,0x40,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleEventReceiverBase>,
               InternalVTableHelperCtorCaller<UParticleModuleEventReceiverBase>,local_res8,
               UParticleModuleEventBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleEventReceiverBase.InnerSingleton;
}

// UParticleModuleEventReceiverBase @ 1472fd160

UParticleModuleEventReceiverBase * __thiscall
UParticleModuleEventReceiverBase::UParticleModuleEventReceiverBase
          (UParticleModuleEventReceiverBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleEventReceiverBase__6B_;
  (this->EventName).ComparisonIndex = 0;
  (this->EventName).Number = 0;
  return this;
}

// ~UParticleModuleEventReceiverBase @ 1472fde10

void __thiscall
UParticleModuleEventReceiverBase::~UParticleModuleEventReceiverBase
          (UParticleModuleEventReceiverBase *this)

{
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147300e40

UClass * __cdecl UParticleModuleEventReceiverBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleEventReceiverBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleEventReceiverBase",
               &Z_Registration_Info_UClass_UParticleModuleEventReceiverBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleEventReceiverBase,0x40,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleEventReceiverBase>,
               InternalVTableHelperCtorCaller<UParticleModuleEventReceiverBase>,local_res8,
               UParticleModuleEventBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleEventReceiverBase.InnerSingleton;
}

// ProcessParticleEvent @ 1473016b0

bool __thiscall
UParticleModuleEventReceiverBase::ProcessParticleEvent
          (UParticleModuleEventReceiverBase *this,FParticleEmitterInstance *param_1,
          FParticleEventData *param_2,float param_3)

{
  return false;
}

// StaticRegisterNativesUParticleModuleEventReceiverBase @ 1473018d0

void __cdecl
UParticleModuleEventReceiverBase::StaticRegisterNativesUParticleModuleEventReceiverBase(void)

{
  return;
}

// WillProcessParticleEvent @ 1473019b0

bool __thiscall
UParticleModuleEventReceiverBase::WillProcessParticleEvent
          (UParticleModuleEventReceiverBase *this,EParticleEventType param_1)

{
  byte bVar1;
  
  bVar1 = (this->EventGeneratorType).Value;
  if (bVar1 != 0) {
    return bVar1 == param_1;
  }
  return true;
}

// UParticleModuleEventReceiverBase @ 14815c1e0

UParticleModuleEventReceiverBase * __thiscall
UParticleModuleEventReceiverBase::UParticleModuleEventReceiverBase
          (UParticleModuleEventReceiverBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleEventReceiverBase__6B_;
  (this->EventName).ComparisonIndex = 0;
  (this->EventName).Number = 0;
  return this;
}

