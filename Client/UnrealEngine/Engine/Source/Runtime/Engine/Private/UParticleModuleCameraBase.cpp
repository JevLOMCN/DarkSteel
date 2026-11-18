// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472f8e40

UClass * __cdecl UParticleModuleCameraBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleCameraBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleCameraBase",
               &Z_Registration_Info_UClass_UParticleModuleCameraBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleCameraBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleCameraBase>,
               InternalVTableHelperCtorCaller<UParticleModuleCameraBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleCameraBase.InnerSingleton;
}

// UParticleModuleCameraBase @ 1472fcbb0

UParticleModuleCameraBase * __thiscall
UParticleModuleCameraBase::UParticleModuleCameraBase
          (UParticleModuleCameraBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleCameraBase__6B_;
  return this;
}

// ~UParticleModuleCameraBase @ 1472fdab0

void __thiscall
UParticleModuleCameraBase::~UParticleModuleCameraBase(UParticleModuleCameraBase *this)

{
  *(undefined ***)this = &___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CanTickInAnyThread @ 1472ff540

bool __thiscall UParticleModuleCameraBase::CanTickInAnyThread(UParticleModuleCameraBase *this)

{
  return false;
}

// GetPrivateStaticClass @ 147300540

UClass * __cdecl UParticleModuleCameraBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleCameraBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleCameraBase",
               &Z_Registration_Info_UClass_UParticleModuleCameraBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleCameraBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleCameraBase>,
               InternalVTableHelperCtorCaller<UParticleModuleCameraBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleCameraBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleCameraBase @ 147301810

void __cdecl UParticleModuleCameraBase::StaticRegisterNativesUParticleModuleCameraBase(void)

{
  return;
}

// UParticleModuleCameraBase @ 14815b970

UParticleModuleCameraBase * __thiscall
UParticleModuleCameraBase::UParticleModuleCameraBase
          (UParticleModuleCameraBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x29 = this->field_0x29 & 0xf3 | 3;
  this->field_0x28 = this->field_0x28 & 0x17 | 0x80;
  *(undefined ***)this = &___7UParticleModuleCameraBase__6B_;
  return this;
}

