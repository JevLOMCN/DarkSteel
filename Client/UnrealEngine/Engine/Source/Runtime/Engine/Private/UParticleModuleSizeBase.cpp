// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14730fd30

UClass * __cdecl UParticleModuleSizeBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSizeBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSizeBase",
               &Z_Registration_Info_UClass_UParticleModuleSizeBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleSizeBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleSizeBase>,
               InternalVTableHelperCtorCaller<UParticleModuleSizeBase>,aFStackX_8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSizeBase.InnerSingleton;
}

// UParticleModuleSizeBase @ 147318820

UParticleModuleSizeBase * __thiscall
UParticleModuleSizeBase::UParticleModuleSizeBase
          (UParticleModuleSizeBase *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleSizeBase__6B_;
  return this;
}

// ~UParticleModuleSizeBase @ 1473194c0

void __thiscall UParticleModuleSizeBase::~UParticleModuleSizeBase(UParticleModuleSizeBase *this)

{
  *(undefined ***)this = &___7UParticleModuleSizeBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731b3b0

UClass * __cdecl UParticleModuleSizeBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSizeBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSizeBase",
               &Z_Registration_Info_UClass_UParticleModuleSizeBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleSizeBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleSizeBase>,
               InternalVTableHelperCtorCaller<UParticleModuleSizeBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSizeBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleSizeBase @ 14731cf40

void __cdecl UParticleModuleSizeBase::StaticRegisterNativesUParticleModuleSizeBase(void)

{
  return;
}

// UParticleModuleSizeBase @ 14815e1c0

UParticleModuleSizeBase * __thiscall
UParticleModuleSizeBase::UParticleModuleSizeBase
          (UParticleModuleSizeBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x29 = this->field_0x29 & 0xf3 | 3;
  this->field_0x28 = this->field_0x28 & 0x17 | 0x80;
  *(undefined ***)this = &___7UParticleModuleSizeBase__6B_;
  return this;
}

