// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 7

// StaticClass @ 14ad152a0

UClass * __cdecl UConstantCameraShakePattern::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstantCameraShakePattern.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"ConstantCameraShakePattern",
               &Z_Registration_Info_UClass_UConstantCameraShakePattern.InnerSingleton,
               StaticRegisterNativesUConstantCameraShakePattern,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UConstantCameraShakePattern>,
               InternalVTableHelperCtorCaller<UConstantCameraShakePattern>,local_res8,
               USimpleCameraShakePattern::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstantCameraShakePattern.InnerSingleton;
}

// UConstantCameraShakePattern @ 14ad1e510

UConstantCameraShakePattern * __thiscall
UConstantCameraShakePattern::UConstantCameraShakePattern
          (UConstantCameraShakePattern *this,FVTableHelper *param_1)

{
  UCameraShakePattern::UCameraShakePattern((UCameraShakePattern *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  this->_padding_ = (longlong)&___7USimpleCameraShakePattern__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3e4ccccd;
  *(undefined4 *)&this->_padding_ = 0x3e4ccccd;
  FCameraShakeState::FCameraShakeState((FCameraShakeState *)((longlong)&this->_padding_ + 4));
  this->_padding_ = (longlong)&___7UConstantCameraShakePattern__6B_;
  return this;
}

// UConstantCameraShakePattern @ 14ad1e560

UConstantCameraShakePattern * __thiscall
UConstantCameraShakePattern::UConstantCameraShakePattern
          (UConstantCameraShakePattern *this,FObjectInitializer *param_1)

{
  UCameraShakePattern::UCameraShakePattern((UCameraShakePattern *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  this->_padding_ = (longlong)&___7USimpleCameraShakePattern__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3e4ccccd;
  *(undefined4 *)&this->_padding_ = 0x3e4ccccd;
  FCameraShakeState::FCameraShakeState((FCameraShakeState *)((longlong)&this->_padding_ + 4));
  this->_padding_ = (longlong)&___7UConstantCameraShakePattern__6B_;
  return this;
}

// ~UConstantCameraShakePattern @ 14ad1ef10

void __thiscall
UConstantCameraShakePattern::~UConstantCameraShakePattern(UConstantCameraShakePattern *this)

{
  this->_padding_ = (longlong)&___7USimpleCameraShakePattern__6B_;
  UCameraShakePattern::~UCameraShakePattern((UCameraShakePattern *)this);
  return;
}

// GetPrivateStaticClass @ 14ad21bf0

UClass * __cdecl UConstantCameraShakePattern::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstantCameraShakePattern.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"ConstantCameraShakePattern",
               &Z_Registration_Info_UClass_UConstantCameraShakePattern.InnerSingleton,
               StaticRegisterNativesUConstantCameraShakePattern,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UConstantCameraShakePattern>,
               InternalVTableHelperCtorCaller<UConstantCameraShakePattern>,local_res8,
               USimpleCameraShakePattern::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstantCameraShakePattern.InnerSingleton;
}

// StaticRegisterNativesUConstantCameraShakePattern @ 14ad23e90

void __cdecl UConstantCameraShakePattern::StaticRegisterNativesUConstantCameraShakePattern(void)

{
  return;
}

// UpdateShakePatternImpl @ 14ad25f60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UConstantCameraShakePattern::UpdateShakePatternImpl
          (UConstantCameraShakePattern *this,FCameraShakePatternUpdateParams *param_1,
          FCameraShakePatternUpdateResult *param_2)

{
  double dVar1;
  float fVar2;
  
  dVar1 = (this->LocationOffset).field0_0x0._s_0.Y;
  (param_2->Location).field0_0x0._s_0.X = (this->LocationOffset).field0_0x0._s_0.X;
  (param_2->Location).field0_0x0._s_0.Y = dVar1;
  (param_2->Location).field0_0x0._s_0.Z = (this->LocationOffset).field0_0x0._s_0.Z;
  dVar1 = (this->RotationOffset).Yaw;
  (param_2->Rotation).Pitch = (this->RotationOffset).Pitch;
  (param_2->Rotation).Yaw = dVar1;
  (param_2->Rotation).Roll = (this->RotationOffset).Roll;
  fVar2 = FCameraShakeState::Update
                    ((FCameraShakeState *)((longlong)&this->_padding_ + 4),param_1->DeltaTime);
  FCameraShakePatternUpdateResult::ApplyScale(param_2,fVar2);
  return;
}

