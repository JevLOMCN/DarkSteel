// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147307080

UClass * __cdecl UParticleModulePivotOffset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModulePivotOffset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModulePivotOffset",
               &Z_Registration_Info_UClass_UParticleModulePivotOffset.InnerSingleton,
               StaticRegisterNativesUParticleModulePivotOffset,0x40,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UParticleModulePivotOffset>,
               InternalVTableHelperCtorCaller<UParticleModulePivotOffset>,local_res8,
               UParticleModuleLocationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModulePivotOffset.InnerSingleton;
}

// UParticleModulePivotOffset @ 14730b250

UParticleModulePivotOffset * __thiscall
UParticleModulePivotOffset::UParticleModulePivotOffset
          (UParticleModulePivotOffset *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModulePivotOffset__6B_;
  return this;
}

// ~UParticleModulePivotOffset @ 14730bf10

void __thiscall
UParticleModulePivotOffset::~UParticleModulePivotOffset(UParticleModulePivotOffset *this)

{
  this->_padding_ = (longlong)&___7UParticleModuleLocationBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730f3e0

UClass * __cdecl UParticleModulePivotOffset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModulePivotOffset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModulePivotOffset",
               &Z_Registration_Info_UClass_UParticleModulePivotOffset.InnerSingleton,
               StaticRegisterNativesUParticleModulePivotOffset,0x40,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UParticleModulePivotOffset>,
               InternalVTableHelperCtorCaller<UParticleModulePivotOffset>,local_res8,
               UParticleModuleLocationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModulePivotOffset.InnerSingleton;
}

// StaticRegisterNativesUParticleModulePivotOffset @ 14730ff50

void __cdecl UParticleModulePivotOffset::StaticRegisterNativesUParticleModulePivotOffset(void)

{
  return;
}

// UParticleModulePivotOffset @ 14815dca0

UParticleModulePivotOffset * __thiscall
UParticleModulePivotOffset::UParticleModulePivotOffset
          (UParticleModulePivotOffset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  this->_padding_ = (longlong)&___7UParticleModulePivotOffset__6B_;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x14 | 0x80;
  return this;
}

// CompileModule @ 148169c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UParticleModulePivotOffset::CompileModule
          (UParticleModulePivotOffset *this,FParticleEmitterBuildInfo *param_1)

{
  TVector2<double>_u_0 TVar1;
  double dVar2;
  
  dVar2 = (this->PivotOffset).field0_0x0._s_0.Y - _UNK_150689678;
  TVar1._8_4_ = SUB84(dVar2,0);
  TVar1._s_0.X = (this->PivotOffset).field0_0x0._s_0.X - ___xmm_3fe00000000000003fe0000000000000;
  TVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  (param_1->PivotOffset).field0_0x0 = TVar1;
  return;
}

// InitializeDefaults @ 148184860

void __thiscall UParticleModulePivotOffset::InitializeDefaults(UParticleModulePivotOffset *this)

{
  (this->PivotOffset).field0_0x0._s_0.X = 0.0;
  (this->PivotOffset).field0_0x0._s_0.Y = 0.0;
  return;
}

// PostInitProperties @ 14818b3e0

void __thiscall UParticleModulePivotOffset::PostInitProperties(UParticleModulePivotOffset *this)

{
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    (this->PivotOffset).field0_0x0._s_0.X = 0.0;
    (this->PivotOffset).field0_0x0._s_0.Y = 0.0;
  }
  return;
}

