// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1473148e0

UClass * __cdecl UParticleModuleVectorFieldGlobal::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVectorFieldGlobal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVectorFieldGlobal",
               &Z_Registration_Info_UClass_UParticleModuleVectorFieldGlobal.InnerSingleton,
               StaticRegisterNativesUParticleModuleVectorFieldGlobal,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleVectorFieldGlobal>,
               InternalVTableHelperCtorCaller<UParticleModuleVectorFieldGlobal>,local_res8,
               UParticleModuleVectorFieldBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVectorFieldGlobal.InnerSingleton;
}

// UParticleModuleVectorFieldGlobal @ 147318fa0

UParticleModuleVectorFieldGlobal * __thiscall
UParticleModuleVectorFieldGlobal::UParticleModuleVectorFieldGlobal
          (UParticleModuleVectorFieldGlobal *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleVectorFieldGlobal__6B_;
  return this;
}

// ~UParticleModuleVectorFieldGlobal @ 1473199f0

void __thiscall
UParticleModuleVectorFieldGlobal::~UParticleModuleVectorFieldGlobal
          (UParticleModuleVectorFieldGlobal *this)

{
  this->_padding_ = (longlong)&___7UParticleModuleVectorFieldBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731c370

UClass * __cdecl UParticleModuleVectorFieldGlobal::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVectorFieldGlobal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVectorFieldGlobal",
               &Z_Registration_Info_UClass_UParticleModuleVectorFieldGlobal.InnerSingleton,
               StaticRegisterNativesUParticleModuleVectorFieldGlobal,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleVectorFieldGlobal>,
               InternalVTableHelperCtorCaller<UParticleModuleVectorFieldGlobal>,local_res8,
               UParticleModuleVectorFieldBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVectorFieldGlobal.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleVectorFieldGlobal @ 14731d090

void __cdecl
UParticleModuleVectorFieldGlobal::StaticRegisterNativesUParticleModuleVectorFieldGlobal(void)

{
  return;
}

// UParticleModuleVectorFieldGlobal @ 14815e980

UParticleModuleVectorFieldGlobal * __thiscall
UParticleModuleVectorFieldGlobal::UParticleModuleVectorFieldGlobal
          (UParticleModuleVectorFieldGlobal *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleVectorFieldGlobal__6B_;
  return this;
}

// CompileModule @ 14816a060

void __thiscall
UParticleModuleVectorFieldGlobal::CompileModule
          (UParticleModuleVectorFieldGlobal *this,FParticleEmitterBuildInfo *param_1)

{
  param_1->GlobalVectorFieldScale = this->GlobalVectorFieldScale;
  param_1->GlobalVectorFieldTightness = this->GlobalVectorFieldTightness;
  return;
}

