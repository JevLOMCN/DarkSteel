// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472f7110

UClass * __cdecl UParticleModuleAttractorBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleAttractorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleAttractorBase",
               &Z_Registration_Info_UClass_UParticleModuleAttractorBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleAttractorBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleAttractorBase>,
               InternalVTableHelperCtorCaller<UParticleModuleAttractorBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleAttractorBase.InnerSingleton;
}

// UParticleModuleAttractorBase @ 1472fc440

UParticleModuleAttractorBase * __thiscall
UParticleModuleAttractorBase::UParticleModuleAttractorBase
          (UParticleModuleAttractorBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleAttractorBase__6B_;
  return this;
}

// ~UParticleModuleAttractorBase @ 1472fd780

void __thiscall
UParticleModuleAttractorBase::~UParticleModuleAttractorBase(UParticleModuleAttractorBase *this)

{
  *(undefined ***)this = &___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1472ffdc0

UClass * __cdecl UParticleModuleAttractorBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleAttractorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleAttractorBase",
               &Z_Registration_Info_UClass_UParticleModuleAttractorBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleAttractorBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleAttractorBase>,
               InternalVTableHelperCtorCaller<UParticleModuleAttractorBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleAttractorBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleAttractorBase @ 147301770

void __cdecl UParticleModuleAttractorBase::StaticRegisterNativesUParticleModuleAttractorBase(void)

{
  return;
}

// UParticleModuleAttractorBase @ 14815b610

UParticleModuleAttractorBase * __thiscall
UParticleModuleAttractorBase::UParticleModuleAttractorBase
          (UParticleModuleAttractorBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x29 = this->field_0x29 & 0xf3 | 3;
  this->field_0x28 = this->field_0x28 & 0x17 | 0x80;
  *(undefined ***)this = &___7UParticleModuleAttractorBase__6B_;
  return this;
}

