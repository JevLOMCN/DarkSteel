// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147303e00

UClass * __cdecl UParticleModuleRotationRateBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleRotationRateBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleRotationRateBase",
               &Z_Registration_Info_UClass_UParticleModuleRotationRateBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleRotationRateBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleRotationRateBase>,
               InternalVTableHelperCtorCaller<UParticleModuleRotationRateBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleRotationRateBase.InnerSingleton;
}

// UParticleModuleRotationRateBase @ 14730b440

UParticleModuleRotationRateBase * __thiscall
UParticleModuleRotationRateBase::UParticleModuleRotationRateBase
          (UParticleModuleRotationRateBase *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleRotationRateBase__6B_;
  return this;
}

// ~UParticleModuleRotationRateBase @ 14730c090

void __thiscall
UParticleModuleRotationRateBase::~UParticleModuleRotationRateBase
          (UParticleModuleRotationRateBase *this)

{
  *(undefined ***)this = &___7UParticleModuleRotationRateBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730f860

UClass * __cdecl UParticleModuleRotationRateBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleRotationRateBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleRotationRateBase",
               &Z_Registration_Info_UClass_UParticleModuleRotationRateBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleRotationRateBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleRotationRateBase>,
               InternalVTableHelperCtorCaller<UParticleModuleRotationRateBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleRotationRateBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleRotationRateBase @ 14730ffb0

void __cdecl
UParticleModuleRotationRateBase::StaticRegisterNativesUParticleModuleRotationRateBase(void)

{
  return;
}

// UParticleModuleRotationRateBase @ 14815dfa0

UParticleModuleRotationRateBase * __thiscall
UParticleModuleRotationRateBase::UParticleModuleRotationRateBase
          (UParticleModuleRotationRateBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x29 = this->field_0x29 & 0xf3 | 3;
  this->field_0x28 = this->field_0x28 & 0x17 | 0x80;
  *(undefined ***)this = &___7UParticleModuleRotationRateBase__6B_;
  return this;
}

