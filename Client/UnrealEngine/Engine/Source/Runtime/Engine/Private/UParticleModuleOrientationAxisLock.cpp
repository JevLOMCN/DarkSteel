// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147304d20

UClass * __cdecl UParticleModuleOrientationAxisLock::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleOrientationAxisLock.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleOrientationAxisLock",
               &Z_Registration_Info_UClass_UParticleModuleOrientationAxisLock.InnerSingleton,
               StaticRegisterNativesUParticleModuleOrientationAxisLock,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleOrientationAxisLock>,
               InternalVTableHelperCtorCaller<UParticleModuleOrientationAxisLock>,local_res8,
               UParticleModuleOrientationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleOrientationAxisLock.InnerSingleton;
}

// UParticleModuleOrientationAxisLock @ 14730b130

UParticleModuleOrientationAxisLock * __thiscall
UParticleModuleOrientationAxisLock::UParticleModuleOrientationAxisLock
          (UParticleModuleOrientationAxisLock *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleOrientationAxisLock__6B_;
  return this;
}

// ~UParticleModuleOrientationAxisLock @ 14730bdf0

void __thiscall
UParticleModuleOrientationAxisLock::~UParticleModuleOrientationAxisLock
          (UParticleModuleOrientationAxisLock *this)

{
  this->_padding_ = (longlong)&___7UParticleModuleOrientationBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730f020

UClass * __cdecl UParticleModuleOrientationAxisLock::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleOrientationAxisLock.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleOrientationAxisLock",
               &Z_Registration_Info_UClass_UParticleModuleOrientationAxisLock.InnerSingleton,
               StaticRegisterNativesUParticleModuleOrientationAxisLock,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleOrientationAxisLock>,
               InternalVTableHelperCtorCaller<UParticleModuleOrientationAxisLock>,local_res8,
               UParticleModuleOrientationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleOrientationAxisLock.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleOrientationAxisLock @ 14730ff00

void __cdecl
UParticleModuleOrientationAxisLock::StaticRegisterNativesUParticleModuleOrientationAxisLock(void)

{
  return;
}

// UParticleModuleOrientationAxisLock @ 14815db30

UParticleModuleOrientationAxisLock * __thiscall
UParticleModuleOrientationAxisLock::UParticleModuleOrientationAxisLock
          (UParticleModuleOrientationAxisLock *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x14;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x83;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  this->_padding_ = (longlong)&___7UParticleModuleOrientationAxisLock__6B_;
  return this;
}

// SetLockAxis @ 1481966b0

void __thiscall
UParticleModuleOrientationAxisLock::SetLockAxis
          (UParticleModuleOrientationAxisLock *this,EParticleAxisLock param_1)

{
  (this->LockAxisFlags).Value = (uchar)param_1;
  return;
}

// Spawn @ 14819d590

void __thiscall
UParticleModuleOrientationAxisLock::Spawn
          (UParticleModuleOrientationAxisLock *this,FSpawnContext *param_1)

{
  return;
}

// Update @ 1481afa30

void __thiscall
UParticleModuleOrientationAxisLock::Update
          (UParticleModuleOrientationAxisLock *this,FUpdateContext *param_1)

{
  return;
}

