// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1473016e0

UClass * __cdecl UParticleModuleLightBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLightBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLightBase",
               &Z_Registration_Info_UClass_UParticleModuleLightBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleLightBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleLightBase>,
               InternalVTableHelperCtorCaller<UParticleModuleLightBase>,aFStackX_8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLightBase.InnerSingleton;
}

// UParticleModuleLightBase @ 14730a430

UParticleModuleLightBase * __thiscall
UParticleModuleLightBase::UParticleModuleLightBase
          (UParticleModuleLightBase *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleLightBase__6B_;
  return this;
}

// ~UParticleModuleLightBase @ 14730b600

void __thiscall UParticleModuleLightBase::~UParticleModuleLightBase(UParticleModuleLightBase *this)

{
  *(undefined ***)this = &___7UParticleModuleLightBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// CanTickInAnyThread @ 14730d800

bool __thiscall UParticleModuleLightBase::CanTickInAnyThread(UParticleModuleLightBase *this)

{
  return false;
}

// GetPrivateStaticClass @ 14730db20

UClass * __cdecl UParticleModuleLightBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLightBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLightBase",
               &Z_Registration_Info_UClass_UParticleModuleLightBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleLightBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleLightBase>,
               InternalVTableHelperCtorCaller<UParticleModuleLightBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLightBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleLightBase @ 14730fd40

void __cdecl UParticleModuleLightBase::StaticRegisterNativesUParticleModuleLightBase(void)

{
  return;
}

// UParticleModuleLightBase @ 14815c790

UParticleModuleLightBase * __thiscall
UParticleModuleLightBase::UParticleModuleLightBase
          (UParticleModuleLightBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x29 = this->field_0x29 & 0xf3 | 3;
  this->field_0x28 = this->field_0x28 & 0x17 | 0x80;
  *(undefined ***)this = &___7UParticleModuleLightBase__6B_;
  return this;
}

