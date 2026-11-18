// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472f7be0

UClass * __cdecl UParticleModuleKillBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleKillBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleKillBase",
               &Z_Registration_Info_UClass_UParticleModuleKillBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleKillBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleKillBase>,
               InternalVTableHelperCtorCaller<UParticleModuleKillBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleKillBase.InnerSingleton;
}

// UParticleModuleKillBase @ 1472fd2b0

UParticleModuleKillBase * __thiscall
UParticleModuleKillBase::UParticleModuleKillBase
          (UParticleModuleKillBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleKillBase__6B_;
  return this;
}

// ~UParticleModuleKillBase @ 1472fded0

void __thiscall UParticleModuleKillBase::~UParticleModuleKillBase(UParticleModuleKillBase *this)

{
  *(undefined ***)this = &___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147301130

UClass * __cdecl UParticleModuleKillBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleKillBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleKillBase",
               &Z_Registration_Info_UClass_UParticleModuleKillBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleKillBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleKillBase>,
               InternalVTableHelperCtorCaller<UParticleModuleKillBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleKillBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleKillBase @ 147301910

void __cdecl UParticleModuleKillBase::StaticRegisterNativesUParticleModuleKillBase(void)

{
  return;
}

// UParticleModuleKillBase @ 14815c380

UParticleModuleKillBase * __thiscall
UParticleModuleKillBase::UParticleModuleKillBase
          (UParticleModuleKillBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x29 = this->field_0x29 & 0xf3 | 3;
  this->field_0x28 = this->field_0x28 & 0x17 | 0x80;
  *(undefined ***)this = &___7UParticleModuleKillBase__6B_;
  return this;
}

