// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1473135c0

UClass * __cdecl UParticleModuleSubUVBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSubUVBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSubUVBase",
               &Z_Registration_Info_UClass_UParticleModuleSubUVBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleSubUVBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleSubUVBase>,
               InternalVTableHelperCtorCaller<UParticleModuleSubUVBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSubUVBase.InnerSingleton;
}

// UParticleModuleSubUVBase @ 147318bd0

UParticleModuleSubUVBase * __thiscall
UParticleModuleSubUVBase::UParticleModuleSubUVBase
          (UParticleModuleSubUVBase *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleSubUVBase__6B_;
  return this;
}

// ~UParticleModuleSubUVBase @ 147319710

void __thiscall UParticleModuleSubUVBase::~UParticleModuleSubUVBase(UParticleModuleSubUVBase *this)

{
  *(undefined ***)this = &___7UParticleModuleSubUVBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetModuleType @ 14731b340

EModuleType __thiscall UParticleModuleSubUVBase::GetModuleType(UParticleModuleSubUVBase *this)

{
  return EPMT_SubUV;
}

// GetPrivateStaticClass @ 14731bb30

UClass * __cdecl UParticleModuleSubUVBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleSubUVBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleSubUVBase",
               &Z_Registration_Info_UClass_UParticleModuleSubUVBase.InnerSingleton,
               StaticRegisterNativesUParticleModuleSubUVBase,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleSubUVBase>,
               InternalVTableHelperCtorCaller<UParticleModuleSubUVBase>,local_res8,
               UParticleModule::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleSubUVBase.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleSubUVBase @ 14731cfe0

void __cdecl UParticleModuleSubUVBase::StaticRegisterNativesUParticleModuleSubUVBase(void)

{
  return;
}

// UParticleModuleSubUVBase @ 14815e6f0

UParticleModuleSubUVBase * __thiscall
UParticleModuleSubUVBase::UParticleModuleSubUVBase
          (UParticleModuleSubUVBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->field_0x29 = this->field_0x29 & 0xf3 | 3;
  this->field_0x28 = this->field_0x28 & 0x17 | 0x80;
  *(undefined ***)this = &___7UParticleModuleSubUVBase__6B_;
  return this;
}

