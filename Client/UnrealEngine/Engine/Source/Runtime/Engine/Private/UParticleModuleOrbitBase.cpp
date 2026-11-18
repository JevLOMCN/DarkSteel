// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147304660

UClass * __cdecl UParticleModuleOrbitBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleOrbitBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleOrbitBase",
               &Z_Registration_Info_UClass_UParticleModuleOrbitBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleOrbitBase,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleOrbitBase>,
               InternalVTableHelperCtorCaller<UParticleModuleOrbitBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleOrbitBase.InnerSingleton;
}

// UParticleModuleOrbitBase @ 14730b100

UParticleModuleOrbitBase * __thiscall
UParticleModuleOrbitBase::UParticleModuleOrbitBase
          (UParticleModuleOrbitBase *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleOrbitBase__6B_;
  return this;
}

// ~UParticleModuleOrbitBase @ 14730bdd0

void __thiscall UParticleModuleOrbitBase::~UParticleModuleOrbitBase(UParticleModuleOrbitBase *this)

{
  this->_padding_ = (longlong)&___7UParticleModuleOrbitBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730ef60

UClass * __cdecl UParticleModuleOrbitBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleOrbitBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleOrbitBase",
               &Z_Registration_Info_UClass_UParticleModuleOrbitBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleOrbitBase,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleOrbitBase>,
               InternalVTableHelperCtorCaller<UParticleModuleOrbitBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleOrbitBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleOrbitBase @ 14730fef0

void __cdecl UParticleModuleOrbitBase::StaticRegisterNativesUParticleModuleOrbitBase(void)

{
  return;
}

// UParticleModuleOrbitBase @ 14815daf0

UParticleModuleOrbitBase * __thiscall
UParticleModuleOrbitBase::UParticleModuleOrbitBase
          (UParticleModuleOrbitBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleOrbitBase__6B_;
  return this;
}

