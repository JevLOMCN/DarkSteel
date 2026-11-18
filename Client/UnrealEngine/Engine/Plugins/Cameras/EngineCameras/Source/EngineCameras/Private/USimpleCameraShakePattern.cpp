// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 10

// StaticClass @ 14ad16710

UClass * __cdecl USimpleCameraShakePattern::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USimpleCameraShakePattern.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"SimpleCameraShakePattern",
               &Z_Registration_Info_UClass_USimpleCameraShakePattern.InnerSingleton,
               StaticRegisterNativesUSimpleCameraShakePattern,0x58,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USimpleCameraShakePattern>,
               InternalVTableHelperCtorCaller<USimpleCameraShakePattern>,local_res8,
               UCameraShakePattern::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USimpleCameraShakePattern.InnerSingleton;
}

// USimpleCameraShakePattern @ 14ad1ebb0

USimpleCameraShakePattern * __thiscall
USimpleCameraShakePattern::USimpleCameraShakePattern
          (USimpleCameraShakePattern *this,FVTableHelper *param_1)

{
  UCameraShakePattern::UCameraShakePattern((UCameraShakePattern *)this,param_1);
  this->Duration = 1.0;
  this->_padding_ = (longlong)&___7USimpleCameraShakePattern__6B_;
  this->BlendInTime = 0.2;
  this->BlendOutTime = 0.2;
  FCameraShakeState::FCameraShakeState(&this->State);
  return this;
}

// ~USimpleCameraShakePattern @ 14ad1f010

void __thiscall
USimpleCameraShakePattern::~USimpleCameraShakePattern(USimpleCameraShakePattern *this)

{
  this->_padding_ = (longlong)&___7USimpleCameraShakePattern__6B_;
  UCameraShakePattern::~UCameraShakePattern((UCameraShakePattern *)this);
  return;
}

// GetPrivateStaticClass @ 14ad221f0

UClass * __cdecl USimpleCameraShakePattern::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USimpleCameraShakePattern.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"SimpleCameraShakePattern",
               &Z_Registration_Info_UClass_USimpleCameraShakePattern.InnerSingleton,
               StaticRegisterNativesUSimpleCameraShakePattern,0x58,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USimpleCameraShakePattern>,
               InternalVTableHelperCtorCaller<USimpleCameraShakePattern>,local_res8,
               UCameraShakePattern::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USimpleCameraShakePattern.InnerSingleton;
}

// GetShakePatternInfoImpl @ 14ad22780

void __thiscall
USimpleCameraShakePattern::GetShakePatternInfoImpl
          (USimpleCameraShakePattern *this,FCameraShakeInfo *param_1)

{
  FCameraShakeDuration FVar1;
  uint uStackX_c;
  
  if (0.0 < this->Duration) {
    uStackX_c = (uint)uStackX_c._1_3_ << 8;
    FVar1._4_4_ = uStackX_c;
    FVar1.Duration = this->Duration;
    param_1->Duration = FVar1;
    param_1->BlendIn = this->BlendInTime;
    param_1->BlendOut = this->BlendOutTime;
    return;
  }
  uStackX_c = CONCAT31(uStackX_c._1_3_,1);
  param_1->Duration = (FCameraShakeDuration)((ulonglong)uStackX_c << 0x20);
  param_1->BlendIn = this->BlendInTime;
  param_1->BlendOut = this->BlendOutTime;
  return;
}

// IsFinishedImpl @ 14ad22ae0

bool __thiscall USimpleCameraShakePattern::IsFinishedImpl(USimpleCameraShakePattern *this)

{
  return (bool)((byte)~(this->State).field_0x1c >> 2 & 1);
}

// StartShakePatternImpl @ 14ad23c50

void __thiscall
USimpleCameraShakePattern::StartShakePatternImpl
          (USimpleCameraShakePattern *this,FCameraShakePatternStartParams *param_1)

{
  FCameraShakeState::Start(&this->State,(UCameraShakePattern *)this,param_1);
  return;
}

// StaticRegisterNativesUSimpleCameraShakePattern @ 14ad23fd0

void __cdecl USimpleCameraShakePattern::StaticRegisterNativesUSimpleCameraShakePattern(void)

{
  return;
}

// StopShakePatternImpl @ 14ad246e0

void __thiscall
USimpleCameraShakePattern::StopShakePatternImpl
          (USimpleCameraShakePattern *this,FCameraShakePatternStopParams *param_1)

{
  FCameraShakeState::Stop(&this->State,param_1->bImmediately);
  return;
}

// TeardownShakePatternImpl @ 14ad247d0

void __thiscall USimpleCameraShakePattern::TeardownShakePatternImpl(USimpleCameraShakePattern *this)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  FCameraShakeState *pFVar4;
  FCameraShakeState local_28;
  
  pFVar4 = FCameraShakeState::FCameraShakeState(&local_28);
  fVar1 = (pFVar4->ShakeInfo).BlendIn;
  fVar2 = (pFVar4->ShakeInfo).BlendOut;
  (this->State).ShakeInfo.Duration = (pFVar4->ShakeInfo).Duration;
  (this->State).ShakeInfo.BlendIn = fVar1;
  (this->State).ShakeInfo.BlendOut = fVar2;
  fVar1 = pFVar4->CurrentBlendInTime;
  fVar2 = pFVar4->CurrentBlendOutTime;
  uVar3 = *(undefined4 *)&pFVar4->field_0x1c;
  (this->State).ElapsedTime = pFVar4->ElapsedTime;
  (this->State).CurrentBlendInTime = fVar1;
  (this->State).CurrentBlendOutTime = fVar2;
  *(undefined4 *)&(this->State).field_0x1c = uVar3;
  return;
}

