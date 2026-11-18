// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472f6aa0

UClass * __cdecl UParticleModuleEventBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleEventBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleEventBase",
               &Z_Registration_Info_UClass_UParticleModuleEventBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleEventBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleEventBase>,
               InternalVTableHelperCtorCaller<UParticleModuleEventBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleEventBase.InnerSingleton;
}

// UParticleModuleEventBase @ 1472fd0f0

UParticleModuleEventBase * __thiscall
UParticleModuleEventBase::UParticleModuleEventBase
          (UParticleModuleEventBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleEventBase__6B_;
  return this;
}

// ~UParticleModuleEventBase @ 1472fdda0

void __thiscall UParticleModuleEventBase::~UParticleModuleEventBase(UParticleModuleEventBase *this)

{
  *(undefined ***)this = &___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetModuleType @ 1472ff860

EModuleType __thiscall UParticleModuleEventBase::GetModuleType(UParticleModuleEventBase *this)

{
  return EPMT_Event;
}

// GetPrivateStaticClass @ 147300cc0

UClass * __cdecl UParticleModuleEventBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleEventBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleEventBase",
               &Z_Registration_Info_UClass_UParticleModuleEventBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleEventBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleEventBase>,
               InternalVTableHelperCtorCaller<UParticleModuleEventBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleEventBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleEventBase @ 1473018b0

void __cdecl UParticleModuleEventBase::StaticRegisterNativesUParticleModuleEventBase(void)

{
  return;
}

// UParticleModuleEventBase @ 14815c150

UParticleModuleEventBase * __thiscall
UParticleModuleEventBase::UParticleModuleEventBase
          (UParticleModuleEventBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x29 = this->field_0x29 & 0xf3 | 3;
  this->field_0x28 = this->field_0x28 & 0x17 | 0x80;
  *(undefined ***)this = &___7UParticleModuleEventBase__6B_;
  return this;
}

