// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1473074c0

UClass * __cdecl UParticleModuleRotationBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleRotationBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleRotationBase",
               &Z_Registration_Info_UClass_UParticleModuleRotationBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleRotationBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleRotationBase>,
               InternalVTableHelperCtorCaller<UParticleModuleRotationBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleRotationBase.InnerSingleton;
}

// UParticleModuleRotationBase @ 14730b370

UParticleModuleRotationBase * __thiscall
UParticleModuleRotationBase::UParticleModuleRotationBase
          (UParticleModuleRotationBase *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleRotationBase__6B_;
  return this;
}

// ~UParticleModuleRotationBase @ 14730bff0

void __thiscall
UParticleModuleRotationBase::~UParticleModuleRotationBase(UParticleModuleRotationBase *this)

{
  *(undefined ***)this = &___7UParticleModuleRotationBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730f620

UClass * __cdecl UParticleModuleRotationBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleRotationBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleRotationBase",
               &Z_Registration_Info_UClass_UParticleModuleRotationBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleRotationBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleRotationBase>,
               InternalVTableHelperCtorCaller<UParticleModuleRotationBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleRotationBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleRotationBase @ 14730ff80

void __cdecl UParticleModuleRotationBase::StaticRegisterNativesUParticleModuleRotationBase(void)

{
  return;
}

// UParticleModuleRotationBase @ 14815dea0

UParticleModuleRotationBase * __thiscall
UParticleModuleRotationBase::UParticleModuleRotationBase
          (UParticleModuleRotationBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x29 = this->field_0x29 & 0xf3 | 3;
  this->field_0x28 = this->field_0x28 & 0x17 | 0x80;
  *(undefined ***)this = &___7UParticleModuleRotationBase__6B_;
  return this;
}

