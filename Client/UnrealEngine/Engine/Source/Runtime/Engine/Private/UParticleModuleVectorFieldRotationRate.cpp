// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147314f00

UClass * __cdecl UParticleModuleVectorFieldRotationRate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVectorFieldRotationRate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVectorFieldRotationRate",
               &Z_Registration_Info_UClass_UParticleModuleVectorFieldRotationRate.InnerSingleton,
               StaticRegisterNativesUParticleModuleVectorFieldRotationRate,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleVectorFieldRotationRate>,
               InternalVTableHelperCtorCaller<UParticleModuleVectorFieldRotationRate>,local_res8,
               UParticleModuleVectorFieldBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVectorFieldRotationRate.InnerSingleton;
}

// UParticleModuleVectorFieldRotationRate @ 147319030

UParticleModuleVectorFieldRotationRate * __thiscall
UParticleModuleVectorFieldRotationRate::UParticleModuleVectorFieldRotationRate
          (UParticleModuleVectorFieldRotationRate *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleVectorFieldRotationRate__6B_;
  return this;
}

// ~UParticleModuleVectorFieldRotationRate @ 147319a50

void __thiscall
UParticleModuleVectorFieldRotationRate::~UParticleModuleVectorFieldRotationRate
          (UParticleModuleVectorFieldRotationRate *this)

{
  this->_padding_ = (longlong)&___7UParticleModuleVectorFieldBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731c5b0

UClass * __cdecl UParticleModuleVectorFieldRotationRate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVectorFieldRotationRate.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVectorFieldRotationRate",
               &Z_Registration_Info_UClass_UParticleModuleVectorFieldRotationRate.InnerSingleton,
               StaticRegisterNativesUParticleModuleVectorFieldRotationRate,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleVectorFieldRotationRate>,
               InternalVTableHelperCtorCaller<UParticleModuleVectorFieldRotationRate>,local_res8,
               UParticleModuleVectorFieldBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVectorFieldRotationRate.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleVectorFieldRotationRate @ 14731d0c0

void __cdecl
UParticleModuleVectorFieldRotationRate::StaticRegisterNativesUParticleModuleVectorFieldRotationRate
          (void)

{
  return;
}

// UParticleModuleVectorFieldRotationRate @ 14815ea70

UParticleModuleVectorFieldRotationRate * __thiscall
UParticleModuleVectorFieldRotationRate::UParticleModuleVectorFieldRotationRate
          (UParticleModuleVectorFieldRotationRate *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleVectorFieldRotationRate__6B_;
  return this;
}

// CompileModule @ 14816a1c0

void __thiscall
UParticleModuleVectorFieldRotationRate::CompileModule
          (UParticleModuleVectorFieldRotationRate *this,FParticleEmitterBuildInfo *param_1)

{
  (param_1->LocalVectorFieldRotationRate).field0_0x0._s_0.X =
       (param_1->LocalVectorFieldRotationRate).field0_0x0._s_0.X +
       (this->RotationRate).field0_0x0._s_0.X;
  (param_1->LocalVectorFieldRotationRate).field0_0x0._s_0.Y =
       (this->RotationRate).field0_0x0._s_0.Y +
       (param_1->LocalVectorFieldRotationRate).field0_0x0._s_0.Y;
  (param_1->LocalVectorFieldRotationRate).field0_0x0._s_0.Z =
       (this->RotationRate).field0_0x0._s_0.Z +
       (param_1->LocalVectorFieldRotationRate).field0_0x0._s_0.Z;
  return;
}

