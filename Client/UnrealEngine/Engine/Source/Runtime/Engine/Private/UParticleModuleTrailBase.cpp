// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147314560

UClass * __cdecl UParticleModuleTrailBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleTrailBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleTrailBase",
               &Z_Registration_Info_UClass_UParticleModuleTrailBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleTrailBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleTrailBase>,
               InternalVTableHelperCtorCaller<UParticleModuleTrailBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleTrailBase.InnerSingleton;
}

// UParticleModuleTrailBase @ 147318c80

UParticleModuleTrailBase * __thiscall
UParticleModuleTrailBase::UParticleModuleTrailBase
          (UParticleModuleTrailBase *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleTrailBase__6B_;
  return this;
}

// ~UParticleModuleTrailBase @ 147319790

void __thiscall UParticleModuleTrailBase::~UParticleModuleTrailBase(UParticleModuleTrailBase *this)

{
  *(undefined ***)this = &___7UParticleModuleTrailBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// CanTickInAnyThread @ 14731b070

bool __thiscall UParticleModuleTrailBase::CanTickInAnyThread(UParticleModuleTrailBase *this)

{
  return true;
}

// GetModuleType @ 14731b350

EModuleType __thiscall UParticleModuleTrailBase::GetModuleType(UParticleModuleTrailBase *this)

{
  return EPMT_Trail;
}

// GetPrivateStaticClass @ 14731bcb0

UClass * __cdecl UParticleModuleTrailBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleTrailBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleTrailBase",
               &Z_Registration_Info_UClass_UParticleModuleTrailBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleTrailBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleTrailBase>,
               InternalVTableHelperCtorCaller<UParticleModuleTrailBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleTrailBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleTrailBase @ 14731d000

void __cdecl UParticleModuleTrailBase::StaticRegisterNativesUParticleModuleTrailBase(void)

{
  return;
}

// UParticleModuleTrailBase @ 1481c8540

UParticleModuleTrailBase * __thiscall
UParticleModuleTrailBase::UParticleModuleTrailBase
          (UParticleModuleTrailBase *this,FObjectInitializer *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->field_0x28 = this->field_0x28 & 0xfc;
  *(undefined ***)this = &___7UParticleModuleTrailBase__6B_;
  return this;
}

