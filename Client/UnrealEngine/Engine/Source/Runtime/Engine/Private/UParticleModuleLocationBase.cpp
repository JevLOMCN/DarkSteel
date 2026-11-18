// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1473045a0

UClass * __cdecl UParticleModuleLocationBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationBase",
               &Z_Registration_Info_UClass_UParticleModuleLocationBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleLocationBase>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationBase.InnerSingleton;
}

// UParticleModuleLocationBase @ 14730a530

UParticleModuleLocationBase * __thiscall
UParticleModuleLocationBase::UParticleModuleLocationBase
          (UParticleModuleLocationBase *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleLocationBase__6B_;
  return this;
}

// ~UParticleModuleLocationBase @ 14730b6a0

void __thiscall
UParticleModuleLocationBase::~UParticleModuleLocationBase(UParticleModuleLocationBase *this)

{
  *(undefined ***)this = &___7UParticleModuleLocationBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730dd60

UClass * __cdecl UParticleModuleLocationBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationBase",
               &Z_Registration_Info_UClass_UParticleModuleLocationBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleLocationBase>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleLocationBase @ 14730fd70

void __cdecl UParticleModuleLocationBase::StaticRegisterNativesUParticleModuleLocationBase(void)

{
  return;
}

// UParticleModuleLocationBase @ 14815c9f0

UParticleModuleLocationBase * __thiscall
UParticleModuleLocationBase::UParticleModuleLocationBase
          (UParticleModuleLocationBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x29 = this->field_0x29 & 0xf3 | 3;
  this->field_0x28 = this->field_0x28 & 0x17 | 0x80;
  *(undefined ***)this = &___7UParticleModuleLocationBase__6B_;
  return this;
}

