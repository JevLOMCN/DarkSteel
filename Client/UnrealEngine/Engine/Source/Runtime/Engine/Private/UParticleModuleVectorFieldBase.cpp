// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147314660

UClass * __cdecl UParticleModuleVectorFieldBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVectorFieldBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVectorFieldBase",
               &Z_Registration_Info_UClass_UParticleModuleVectorFieldBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleVectorFieldBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleVectorFieldBase>,
               InternalVTableHelperCtorCaller<UParticleModuleVectorFieldBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVectorFieldBase.InnerSingleton;
}

// UParticleModuleVectorFieldBase @ 147318f70

UParticleModuleVectorFieldBase * __thiscall
UParticleModuleVectorFieldBase::UParticleModuleVectorFieldBase
          (UParticleModuleVectorFieldBase *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleVectorFieldBase__6B_;
  return this;
}

// ~UParticleModuleVectorFieldBase @ 1473199d0

void __thiscall
UParticleModuleVectorFieldBase::~UParticleModuleVectorFieldBase
          (UParticleModuleVectorFieldBase *this)

{
  *(undefined ***)this = &___7UParticleModuleVectorFieldBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731c2b0

UClass * __cdecl UParticleModuleVectorFieldBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVectorFieldBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVectorFieldBase",
               &Z_Registration_Info_UClass_UParticleModuleVectorFieldBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleVectorFieldBase,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleVectorFieldBase>,
               InternalVTableHelperCtorCaller<UParticleModuleVectorFieldBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVectorFieldBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleVectorFieldBase @ 14731d080

void __cdecl
UParticleModuleVectorFieldBase::StaticRegisterNativesUParticleModuleVectorFieldBase(void)

{
  return;
}

// UParticleModuleVectorFieldBase @ 14815e940

UParticleModuleVectorFieldBase * __thiscall
UParticleModuleVectorFieldBase::UParticleModuleVectorFieldBase
          (UParticleModuleVectorFieldBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x29 = this->field_0x29 & 0xf3 | 3;
  this->field_0x28 = this->field_0x28 & 0x17 | 0x80;
  *(undefined ***)this = &___7UParticleModuleVectorFieldBase__6B_;
  return this;
}

