// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147304c60

UClass * __cdecl UParticleModuleOrientationBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleOrientationBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleOrientationBase",
               &Z_Registration_Info_UClass_UParticleModuleOrientationBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleOrientationBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleOrientationBase>,
               InternalVTableHelperCtorCaller<UParticleModuleOrientationBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleOrientationBase.InnerSingleton;
}

// UParticleModuleOrientationBase @ 14730b160

UParticleModuleOrientationBase * __thiscall
UParticleModuleOrientationBase::UParticleModuleOrientationBase
          (UParticleModuleOrientationBase *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleOrientationBase__6B_;
  return this;
}

// ~UParticleModuleOrientationBase @ 14730be10

void __thiscall
UParticleModuleOrientationBase::~UParticleModuleOrientationBase
          (UParticleModuleOrientationBase *this)

{
  *(undefined ***)this = &___7UParticleModuleOrientationBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730f0e0

UClass * __cdecl UParticleModuleOrientationBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleOrientationBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleOrientationBase",
               &Z_Registration_Info_UClass_UParticleModuleOrientationBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleOrientationBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleOrientationBase>,
               InternalVTableHelperCtorCaller<UParticleModuleOrientationBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleOrientationBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleOrientationBase @ 14730ff10

void __cdecl
UParticleModuleOrientationBase::StaticRegisterNativesUParticleModuleOrientationBase(void)

{
  return;
}

// UParticleModuleOrientationBase @ 14815db70

UParticleModuleOrientationBase * __thiscall
UParticleModuleOrientationBase::UParticleModuleOrientationBase
          (UParticleModuleOrientationBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x29 = this->field_0x29 & 0xf3 | 3;
  this->field_0x28 = this->field_0x28 & 0x17 | 0x80;
  *(undefined ***)this = &___7UParticleModuleOrientationBase__6B_;
  return this;
}

