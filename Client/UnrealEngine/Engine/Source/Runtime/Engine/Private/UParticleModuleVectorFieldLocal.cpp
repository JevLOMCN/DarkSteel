// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147314a80

UClass * __cdecl UParticleModuleVectorFieldLocal::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVectorFieldLocal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVectorFieldLocal",
               &Z_Registration_Info_UClass_UParticleModuleVectorFieldLocal.InnerSingleton,
               StaticRegisterNativesUParticleModuleVectorFieldLocal,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleVectorFieldLocal>,
               InternalVTableHelperCtorCaller<UParticleModuleVectorFieldLocal>,local_res8,
               UParticleModuleVectorFieldBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVectorFieldLocal.InnerSingleton;
}

// UParticleModuleVectorFieldLocal @ 147318fd0

UParticleModuleVectorFieldLocal * __thiscall
UParticleModuleVectorFieldLocal::UParticleModuleVectorFieldLocal
          (UParticleModuleVectorFieldLocal *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleVectorFieldLocal__6B_;
  (this->VectorField).field0_0x0.DebugPtr = (UVectorField *)0x0;
  return this;
}

// ~UParticleModuleVectorFieldLocal @ 147319a10

void __thiscall
UParticleModuleVectorFieldLocal::~UParticleModuleVectorFieldLocal
          (UParticleModuleVectorFieldLocal *this)

{
  this->_padding_ = (longlong)&___7UParticleModuleVectorFieldBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14731c430

UClass * __cdecl UParticleModuleVectorFieldLocal::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleVectorFieldLocal.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleVectorFieldLocal",
               &Z_Registration_Info_UClass_UParticleModuleVectorFieldLocal.InnerSingleton,
               StaticRegisterNativesUParticleModuleVectorFieldLocal,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleVectorFieldLocal>,
               InternalVTableHelperCtorCaller<UParticleModuleVectorFieldLocal>,local_res8,
               UParticleModuleVectorFieldBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleVectorFieldLocal.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleVectorFieldLocal @ 14731d0a0

void __cdecl
UParticleModuleVectorFieldLocal::StaticRegisterNativesUParticleModuleVectorFieldLocal(void)

{
  return;
}

// UParticleModuleVectorFieldLocal @ 14815e9c0

UParticleModuleVectorFieldLocal * __thiscall
UParticleModuleVectorFieldLocal::UParticleModuleVectorFieldLocal
          (UParticleModuleVectorFieldLocal *this,FObjectInitializer *param_1)

{
  byte bVar1;
  
  UObject::UObject((UObject *)this,param_1);
  bVar1 = *(byte *)((longlong)&this->_padding_ + 1);
  (this->VectorField).field0_0x0.DebugPtr = (UVectorField *)0x0;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar1 & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleVectorFieldLocal__6B_;
  (this->RelativeScale3D).field0_0x0._s_0.X = 1.0;
  (this->RelativeScale3D).field0_0x0._s_0.Y = 1.0;
  (this->RelativeScale3D).field0_0x0._s_0.Z = 1.0;
  this->bUseFixDT = 1;
  this->Intensity = 1.0;
  this->Tightness = 0.0;
  return this;
}

// CompileModule @ 14816a080

void __thiscall
UParticleModuleVectorFieldLocal::CompileModule
          (UParticleModuleVectorFieldLocal *this,FParticleEmitterBuildInfo *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TQuat<double> *pTVar4;
  uint uVar5;
  TQuat<double> local_28;
  
  param_1->LocalVectorField = (UVectorField *)(this->VectorField).field0_0x0;
  dVar2 = (this->RelativeTranslation).field0_0x0._s_0.Y;
  dVar1 = (this->RelativeTranslation).field0_0x0._s_0.Z;
  (param_1->LocalVectorFieldTransform).Translation.XY.m128d_f64[0] =
       (this->RelativeTranslation).field0_0x0._s_0.X;
  (param_1->LocalVectorFieldTransform).Translation.XY.m128d_f64[1] = dVar2;
  (param_1->LocalVectorFieldTransform).Translation.ZW.m128d_f64[0] = dVar1;
  (param_1->LocalVectorFieldTransform).Translation.ZW.m128d_f64[1] = 0.0;
  pTVar4 = UE::Math::TRotator<double>::Quaternion(&this->RelativeRotation,&local_28);
  dVar1 = pTVar4->Y;
  dVar2 = pTVar4->Z;
  dVar3 = pTVar4->W;
  (param_1->LocalVectorFieldTransform).Rotation.XY.m128d_f64[0] = pTVar4->X;
  (param_1->LocalVectorFieldTransform).Rotation.XY.m128d_f64[1] = dVar1;
  (param_1->LocalVectorFieldTransform).Rotation.ZW.m128d_f64[0] = dVar2;
  (param_1->LocalVectorFieldTransform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->RelativeScale3D).field0_0x0._s_0.Y;
  dVar1 = (this->RelativeScale3D).field0_0x0._s_0.Z;
  (param_1->LocalVectorFieldTransform).Scale3D.XY.m128d_f64[0] =
       (this->RelativeScale3D).field0_0x0._s_0.X;
  (param_1->LocalVectorFieldTransform).Scale3D.XY.m128d_f64[1] = dVar2;
  (param_1->LocalVectorFieldTransform).Scale3D.ZW.m128d_f64[0] = dVar1;
  (param_1->LocalVectorFieldTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
  param_1->LocalVectorFieldIntensity = this->Intensity;
  param_1->LocalVectorFieldTightness = this->Tightness;
  uVar5 = (ZPULL(*(undefined4 *)&param_1->field_0x468,0,1) ^ this->bIgnoreComponentTransform) & 1 ^
          *(undefined4 *)&param_1->field_0x468;
  *(uint *)&param_1->field_0x468 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&this->field_0x88) & 2 ^ uVar5;
  *(uint *)&param_1->field_0x468 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&this->field_0x88) & 4 ^ uVar5;
  *(uint *)&param_1->field_0x468 = uVar5;
  uVar5 = (uVar5 ^ *(uint *)&this->field_0x88) & 8 ^ uVar5;
  *(uint *)&param_1->field_0x468 = uVar5;
  *(uint *)&param_1->field_0x468 = (uVar5 ^ *(uint *)&this->field_0x88) & 0x10 ^ uVar5;
  return;
}

