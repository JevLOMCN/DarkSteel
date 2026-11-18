// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147304fa0

UClass * __cdecl UParticleModuleParameterBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleParameterBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleParameterBase",
               &Z_Registration_Info_UClass_UParticleModuleParameterBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleParameterBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleParameterBase>,
               InternalVTableHelperCtorCaller<UParticleModuleParameterBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleParameterBase.InnerSingleton;
}

// UParticleModuleParameterBase @ 14730b190

UParticleModuleParameterBase * __thiscall
UParticleModuleParameterBase::UParticleModuleParameterBase
          (UParticleModuleParameterBase *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleParameterBase__6B_;
  return this;
}

// ~UParticleModuleParameterBase @ 14730be30

void __thiscall
UParticleModuleParameterBase::~UParticleModuleParameterBase(UParticleModuleParameterBase *this)

{
  *(undefined ***)this = &___7UParticleModuleParameterBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// CanTickInAnyThread @ 14730d840

bool __thiscall UParticleModuleParameterBase::CanTickInAnyThread(UParticleModuleParameterBase *this)

{
  return false;
}

// GetPrivateStaticClass @ 14730f1a0

UClass * __cdecl UParticleModuleParameterBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleParameterBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleParameterBase",
               &Z_Registration_Info_UClass_UParticleModuleParameterBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleParameterBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleParameterBase>,
               InternalVTableHelperCtorCaller<UParticleModuleParameterBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleParameterBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleParameterBase @ 14730ff20

void __cdecl UParticleModuleParameterBase::StaticRegisterNativesUParticleModuleParameterBase(void)

{
  return;
}

// UParticleModuleParameterBase @ 14815dbb0

UParticleModuleParameterBase * __thiscall
UParticleModuleParameterBase::UParticleModuleParameterBase
          (UParticleModuleParameterBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x29 = this->field_0x29 & 0xf3 | 3;
  this->field_0x28 = this->field_0x28 & 0x17 | 0x80;
  *(undefined ***)this = &___7UParticleModuleParameterBase__6B_;
  return this;
}

