// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147314e00

UClass * __cdecl UParticleModuleVectorFieldRotation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVectorFieldRotation.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVectorFieldRotation",
               &Z_Registration_Info_UClass_UParticleModuleVectorFieldRotation.InnerSingleton,
               StaticRegisterNativesUParticleModuleVectorFieldRotation,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleVectorFieldRotation>,
               InternalVTableHelperCtorCaller<UParticleModuleVectorFieldRotation>,local_res8,
               UParticleModuleVectorFieldBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVectorFieldRotation.InnerSingleton;
}

// UParticleModuleVectorFieldRotation @ 147319000

UParticleModuleVectorFieldRotation * __thiscall
UParticleModuleVectorFieldRotation::UParticleModuleVectorFieldRotation
          (UParticleModuleVectorFieldRotation *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleVectorFieldRotation__6B_;
  return this;
}

// ~UParticleModuleVectorFieldRotation @ 147319a30

void __thiscall
UParticleModuleVectorFieldRotation::~UParticleModuleVectorFieldRotation
          (UParticleModuleVectorFieldRotation *this)

{
  this->_padding_ = (longlong)&___7UParticleModuleVectorFieldBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731c4f0

UClass * __cdecl UParticleModuleVectorFieldRotation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVectorFieldRotation.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVectorFieldRotation",
               &Z_Registration_Info_UClass_UParticleModuleVectorFieldRotation.InnerSingleton,
               StaticRegisterNativesUParticleModuleVectorFieldRotation,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleVectorFieldRotation>,
               InternalVTableHelperCtorCaller<UParticleModuleVectorFieldRotation>,local_res8,
               UParticleModuleVectorFieldBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVectorFieldRotation.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleVectorFieldRotation @ 14731d0b0

void __cdecl
UParticleModuleVectorFieldRotation::StaticRegisterNativesUParticleModuleVectorFieldRotation(void)

{
  return;
}

// UParticleModuleVectorFieldRotation @ 14815ea30

UParticleModuleVectorFieldRotation * __thiscall
UParticleModuleVectorFieldRotation::UParticleModuleVectorFieldRotation
          (UParticleModuleVectorFieldRotation *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleVectorFieldRotation__6B_;
  return this;
}

// CompileModule @ 14816a180

void __thiscall
UParticleModuleVectorFieldRotation::CompileModule
          (UParticleModuleVectorFieldRotation *this,FParticleEmitterBuildInfo *param_1)

{
  double dVar1;
  
  dVar1 = (this->MinInitialRotation).field0_0x0._s_0.Y;
  (param_1->LocalVectorFieldMinInitialRotation).field0_0x0._s_0.X =
       (this->MinInitialRotation).field0_0x0._s_0.X;
  (param_1->LocalVectorFieldMinInitialRotation).field0_0x0._s_0.Y = dVar1;
  (param_1->LocalVectorFieldMinInitialRotation).field0_0x0._s_0.Z =
       (this->MinInitialRotation).field0_0x0._s_0.Z;
  dVar1 = (this->MaxInitialRotation).field0_0x0._s_0.Y;
  (param_1->LocalVectorFieldMaxInitialRotation).field0_0x0._s_0.X =
       (this->MaxInitialRotation).field0_0x0._s_0.X;
  (param_1->LocalVectorFieldMaxInitialRotation).field0_0x0._s_0.Y = dVar1;
  (param_1->LocalVectorFieldMaxInitialRotation).field0_0x0._s_0.Z =
       (this->MaxInitialRotation).field0_0x0._s_0.Z;
  return;
}

