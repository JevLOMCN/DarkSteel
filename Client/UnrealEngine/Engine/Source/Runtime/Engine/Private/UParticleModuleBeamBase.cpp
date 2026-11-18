// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1472f7d20

UClass * __cdecl UParticleModuleBeamBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleBeamBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleBeamBase",
               &Z_Registration_Info_UClass_UParticleModuleBeamBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleBeamBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleBeamBase>,
               InternalVTableHelperCtorCaller<UParticleModuleBeamBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleBeamBase.InnerSingleton;
}

// UParticleModuleBeamBase @ 1472fc690

UParticleModuleBeamBase * __thiscall
UParticleModuleBeamBase::UParticleModuleBeamBase
          (UParticleModuleBeamBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleBeamBase__6B_;
  return this;
}

// ~UParticleModuleBeamBase @ 1472fd8e0

void __thiscall UParticleModuleBeamBase::~UParticleModuleBeamBase(UParticleModuleBeamBase *this)

{
  *(undefined ***)this = &___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CanTickInAnyThread @ 1472ff530

bool __thiscall UParticleModuleBeamBase::CanTickInAnyThread(UParticleModuleBeamBase *this)

{
  return false;
}

// GetModuleType @ 1472ff850

EModuleType __thiscall UParticleModuleBeamBase::GetModuleType(UParticleModuleBeamBase *this)

{
  return EPMT_Beam;
}

// GetPrivateStaticClass @ 147300180

UClass * __cdecl UParticleModuleBeamBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleBeamBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleBeamBase",
               &Z_Registration_Info_UClass_UParticleModuleBeamBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleBeamBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleBeamBase>,
               InternalVTableHelperCtorCaller<UParticleModuleBeamBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleBeamBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleBeamBase @ 1473017c0

void __cdecl UParticleModuleBeamBase::StaticRegisterNativesUParticleModuleBeamBase(void)

{
  return;
}

// UParticleModuleBeamBase @ 1480f52f0

UParticleModuleBeamBase * __thiscall
UParticleModuleBeamBase::UParticleModuleBeamBase
          (UParticleModuleBeamBase *this,FObjectInitializer *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->field_0x28 = this->field_0x28 & 0xfc;
  *(undefined ***)this = &___7UParticleModuleBeamBase__6B_;
  return this;
}

