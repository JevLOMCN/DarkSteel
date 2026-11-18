// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472f9210

UClass * __cdecl UParticleModuleCollisionBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleCollisionBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleCollisionBase",
               &Z_Registration_Info_UClass_UParticleModuleCollisionBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleCollisionBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleCollisionBase>,
               InternalVTableHelperCtorCaller<UParticleModuleCollisionBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleCollisionBase.InnerSingleton;
}

// UParticleModuleCollisionBase @ 1472fcdc0

UParticleModuleCollisionBase * __thiscall
UParticleModuleCollisionBase::UParticleModuleCollisionBase
          (UParticleModuleCollisionBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleCollisionBase__6B_;
  return this;
}

// ~UParticleModuleCollisionBase @ 1472fdbb0

void __thiscall
UParticleModuleCollisionBase::~UParticleModuleCollisionBase(UParticleModuleCollisionBase *this)

{
  *(undefined ***)this = &___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147300780

UClass * __cdecl UParticleModuleCollisionBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleCollisionBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleCollisionBase",
               &Z_Registration_Info_UClass_UParticleModuleCollisionBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleCollisionBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleCollisionBase>,
               InternalVTableHelperCtorCaller<UParticleModuleCollisionBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleCollisionBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleCollisionBase @ 147301840

void __cdecl UParticleModuleCollisionBase::StaticRegisterNativesUParticleModuleCollisionBase(void)

{
  return;
}

// UParticleModuleCollisionBase @ 14815bcb0

UParticleModuleCollisionBase * __thiscall
UParticleModuleCollisionBase::UParticleModuleCollisionBase
          (UParticleModuleCollisionBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x29 = this->field_0x29 & 0xf3 | 3;
  this->field_0x28 = this->field_0x28 & 0x17 | 0x80;
  *(undefined ***)this = &___7UParticleModuleCollisionBase__6B_;
  return this;
}

