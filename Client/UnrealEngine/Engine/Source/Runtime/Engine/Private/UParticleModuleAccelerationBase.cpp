// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472f6530

UClass * __cdecl UParticleModuleAccelerationBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleAccelerationBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleAccelerationBase",
               &Z_Registration_Info_UClass_UParticleModuleAccelerationBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleAccelerationBase,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleAccelerationBase>,
               InternalVTableHelperCtorCaller<UParticleModuleAccelerationBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleAccelerationBase.InnerSingleton;
}

// UParticleModuleAccelerationBase @ 1472fc2c0

UParticleModuleAccelerationBase * __thiscall
UParticleModuleAccelerationBase::UParticleModuleAccelerationBase
          (UParticleModuleAccelerationBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleAccelerationBase__6B_;
  return this;
}

// ~UParticleModuleAccelerationBase @ 1472fd680

void __thiscall
UParticleModuleAccelerationBase::~UParticleModuleAccelerationBase
          (UParticleModuleAccelerationBase *this)

{
  this->_padding_ = (longlong)&___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1472ffa00

UClass * __cdecl UParticleModuleAccelerationBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleAccelerationBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleAccelerationBase",
               &Z_Registration_Info_UClass_UParticleModuleAccelerationBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleAccelerationBase,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleAccelerationBase>,
               InternalVTableHelperCtorCaller<UParticleModuleAccelerationBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleAccelerationBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleAccelerationBase @ 147301720

void __cdecl
UParticleModuleAccelerationBase::StaticRegisterNativesUParticleModuleAccelerationBase(void)

{
  return;
}

// UParticleModuleAccelerationBase @ 14815b430

UParticleModuleAccelerationBase * __thiscall
UParticleModuleAccelerationBase::UParticleModuleAccelerationBase
          (UParticleModuleAccelerationBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleAccelerationBase__6B_;
  return this;
}

// SetToSensibleDefaults @ 148197790

void __thiscall
UParticleModuleAccelerationBase::SetToSensibleDefaults
          (UParticleModuleAccelerationBase *this,UParticleEmitter *param_1)

{
  this->bAlwaysInWorldSpace = '\x01';
  return;
}

