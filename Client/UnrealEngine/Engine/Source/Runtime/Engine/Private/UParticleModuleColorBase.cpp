// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472f60b0

UClass * __cdecl UParticleModuleColorBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleColorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleColorBase",
               &Z_Registration_Info_UClass_UParticleModuleColorBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleColorBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleColorBase>,
               InternalVTableHelperCtorCaller<UParticleModuleColorBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleColorBase.InnerSingleton;
}

// UParticleModuleColorBase @ 1472fcf10

UParticleModuleColorBase * __thiscall
UParticleModuleColorBase::UParticleModuleColorBase
          (UParticleModuleColorBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleColorBase__6B_;
  return this;
}

// ~UParticleModuleColorBase @ 1472fdc70

void __thiscall UParticleModuleColorBase::~UParticleModuleColorBase(UParticleModuleColorBase *this)

{
  *(undefined ***)this = &___7UParticleModule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1473009c0

UClass * __cdecl UParticleModuleColorBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleColorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleColorBase",
               &Z_Registration_Info_UClass_UParticleModuleColorBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleColorBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleColorBase>,
               InternalVTableHelperCtorCaller<UParticleModuleColorBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleColorBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleColorBase @ 147301870

void __cdecl UParticleModuleColorBase::StaticRegisterNativesUParticleModuleColorBase(void)

{
  return;
}

// UParticleModuleColorBase @ 14815be60

UParticleModuleColorBase * __thiscall
UParticleModuleColorBase::UParticleModuleColorBase
          (UParticleModuleColorBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x29 = this->field_0x29 & 0xf3 | 3;
  this->field_0x28 = this->field_0x28 & 0x17 | 0x80;
  *(undefined ***)this = &___7UParticleModuleColorBase__6B_;
  return this;
}

