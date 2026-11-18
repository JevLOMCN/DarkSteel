// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147307280

UClass * __cdecl UParticleModuleMaterialBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleMaterialBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleMaterialBase",
               &Z_Registration_Info_UClass_UParticleModuleMaterialBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleMaterialBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleMaterialBase>,
               InternalVTableHelperCtorCaller<UParticleModuleMaterialBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleMaterialBase.InnerSingleton;
}

// UParticleModuleMaterialBase @ 14730ac60

UParticleModuleMaterialBase * __thiscall
UParticleModuleMaterialBase::UParticleModuleMaterialBase
          (UParticleModuleMaterialBase *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleMaterialBase__6B_;
  return this;
}

// ~UParticleModuleMaterialBase @ 14730bb50

void __thiscall
UParticleModuleMaterialBase::~UParticleModuleMaterialBase(UParticleModuleMaterialBase *this)

{
  *(undefined ***)this = &___7UParticleModuleMaterialBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// CanTickInAnyThread @ 14730d830

bool __thiscall UParticleModuleMaterialBase::CanTickInAnyThread(UParticleModuleMaterialBase *this)

{
  return true;
}

// GetPrivateStaticClass @ 14730e8a0

UClass * __cdecl UParticleModuleMaterialBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleMaterialBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleMaterialBase",
               &Z_Registration_Info_UClass_UParticleModuleMaterialBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleMaterialBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleMaterialBase>,
               InternalVTableHelperCtorCaller<UParticleModuleMaterialBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleMaterialBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleMaterialBase @ 14730fe60

void __cdecl UParticleModuleMaterialBase::StaticRegisterNativesUParticleModuleMaterialBase(void)

{
  return;
}

// UParticleModuleMaterialBase @ 14815d490

UParticleModuleMaterialBase * __thiscall
UParticleModuleMaterialBase::UParticleModuleMaterialBase
          (UParticleModuleMaterialBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x29 = this->field_0x29 & 0xf3 | 3;
  this->field_0x28 = this->field_0x28 & 0x17 | 0x80;
  *(undefined ***)this = &___7UParticleModuleMaterialBase__6B_;
  return this;
}

