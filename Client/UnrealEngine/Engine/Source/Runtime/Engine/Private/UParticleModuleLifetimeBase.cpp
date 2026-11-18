// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1472f8430

UClass * __cdecl UParticleModuleLifetimeBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLifetimeBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLifetimeBase",
               &Z_Registration_Info_UClass_UParticleModuleLifetimeBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleLifetimeBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleLifetimeBase>,
               InternalVTableHelperCtorCaller<UParticleModuleLifetimeBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLifetimeBase.InnerSingleton;
}

// UParticleModuleLifetimeBase @ 1472fd470

UParticleModuleLifetimeBase * __thiscall
UParticleModuleLifetimeBase::UParticleModuleLifetimeBase
          (UParticleModuleLifetimeBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleLifetimeBase__6B_;
  return this;
}

// ~UParticleModuleLifetimeBase @ 1472fdfc0

void __thiscall
UParticleModuleLifetimeBase::~UParticleModuleLifetimeBase(UParticleModuleLifetimeBase *this)

{
  *(undefined ***)this = &___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetLifetimeValue @ 1472ff7f0

float __thiscall
UParticleModuleLifetimeBase::GetLifetimeValue
          (UParticleModuleLifetimeBase *this,FContext *param_1,float param_2,UObject *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\Lifetime\\ParticleModuleLifetimeBase.h"
             ,0x23,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// GetMaxLifetime @ 1472ff830

float __thiscall UParticleModuleLifetimeBase::GetMaxLifetime(UParticleModuleLifetimeBase *this)

{
  return 0.0;
}

// GetPrivateStaticClass @ 147301430

UClass * __cdecl UParticleModuleLifetimeBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLifetimeBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLifetimeBase",
               &Z_Registration_Info_UClass_UParticleModuleLifetimeBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleLifetimeBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleLifetimeBase>,
               InternalVTableHelperCtorCaller<UParticleModuleLifetimeBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLifetimeBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleLifetimeBase @ 147301950

void __cdecl UParticleModuleLifetimeBase::StaticRegisterNativesUParticleModuleLifetimeBase(void)

{
  return;
}

// UParticleModuleLifetimeBase @ 14815c590

UParticleModuleLifetimeBase * __thiscall
UParticleModuleLifetimeBase::UParticleModuleLifetimeBase
          (UParticleModuleLifetimeBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x29 = this->field_0x29 & 0xf3 | 3;
  this->field_0x28 = this->field_0x28 & 0x17 | 0x80;
  *(undefined ***)this = &___7UParticleModuleLifetimeBase__6B_;
  return this;
}

