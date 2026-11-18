// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147315300

UClass * __cdecl UParticleModuleVelocityBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVelocityBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVelocityBase",
               &Z_Registration_Info_UClass_UParticleModuleVelocityBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleVelocityBase,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleVelocityBase>,
               InternalVTableHelperCtorCaller<UParticleModuleVelocityBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVelocityBase.InnerSingleton;
}

// UParticleModuleVelocityBase @ 1473191b0

UParticleModuleVelocityBase * __thiscall
UParticleModuleVelocityBase::UParticleModuleVelocityBase
          (UParticleModuleVelocityBase *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleVelocityBase__6B_;
  return this;
}

// ~UParticleModuleVelocityBase @ 147319b40

void __thiscall
UParticleModuleVelocityBase::~UParticleModuleVelocityBase(UParticleModuleVelocityBase *this)

{
  this->_padding_ = (longlong)&___7UParticleModuleVelocityBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731c8b0

UClass * __cdecl UParticleModuleVelocityBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVelocityBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVelocityBase",
               &Z_Registration_Info_UClass_UParticleModuleVelocityBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleVelocityBase,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleVelocityBase>,
               InternalVTableHelperCtorCaller<UParticleModuleVelocityBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVelocityBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleVelocityBase @ 14731d100

void __cdecl UParticleModuleVelocityBase::StaticRegisterNativesUParticleModuleVelocityBase(void)

{
  return;
}

// UParticleModuleVelocityBase @ 14815ec40

UParticleModuleVelocityBase * __thiscall
UParticleModuleVelocityBase::UParticleModuleVelocityBase
          (UParticleModuleVelocityBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleVelocityBase__6B_;
  return this;
}

