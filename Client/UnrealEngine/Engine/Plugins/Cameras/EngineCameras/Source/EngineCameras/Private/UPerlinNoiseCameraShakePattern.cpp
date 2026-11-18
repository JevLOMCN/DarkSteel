// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 10

// StaticClass @ 14ad17480

UClass * __cdecl UPerlinNoiseCameraShakePattern::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPerlinNoiseCameraShakePattern.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"PerlinNoiseCameraShakePattern",
               &Z_Registration_Info_UClass_UPerlinNoiseCameraShakePattern.InnerSingleton,
               StaticRegisterNativesUPerlinNoiseCameraShakePattern,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPerlinNoiseCameraShakePattern>,
               InternalVTableHelperCtorCaller<UPerlinNoiseCameraShakePattern>,local_res8,
               USimpleCameraShakePattern::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPerlinNoiseCameraShakePattern.InnerSingleton;
}

// UPerlinNoiseCameraShakePattern @ 14ad1e9e0

UPerlinNoiseCameraShakePattern * __thiscall
UPerlinNoiseCameraShakePattern::UPerlinNoiseCameraShakePattern
          (UPerlinNoiseCameraShakePattern *this,FVTableHelper *param_1)

{
  UCameraShakePattern::UCameraShakePattern((UCameraShakePattern *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  this->_padding_ = (longlong)&___7USimpleCameraShakePattern__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3e4ccccd;
  *(undefined4 *)&this->_padding_ = 0x3e4ccccd;
  FCameraShakeState::FCameraShakeState((FCameraShakeState *)((longlong)&this->_padding_ + 4));
  this->LocationAmplitudeMultiplier = 1.0;
  this->_padding_ = (longlong)&___7UPerlinNoiseCameraShakePattern__6B_;
  (this->X).Amplitude = 1.0;
  (this->X).Frequency = 1.0;
  (this->Y).Amplitude = 1.0;
  (this->Y).Frequency = 1.0;
  (this->Z).Amplitude = 1.0;
  (this->Z).Frequency = 1.0;
  (this->Pitch).Amplitude = 1.0;
  (this->Pitch).Frequency = 1.0;
  (this->Yaw).Amplitude = 1.0;
  (this->Yaw).Frequency = 1.0;
  (this->Roll).Amplitude = 1.0;
  (this->Roll).Frequency = 1.0;
  (this->FOV).Amplitude = 1.0;
  (this->FOV).Frequency = 1.0;
  this->LocationFrequencyMultiplier = 1.0;
  this->RotationAmplitudeMultiplier = 1.0;
  this->RotationFrequencyMultiplier = 1.0;
  return this;
}

// UPerlinNoiseCameraShakePattern @ 14ad1ead0

UPerlinNoiseCameraShakePattern * __thiscall
UPerlinNoiseCameraShakePattern::UPerlinNoiseCameraShakePattern
          (UPerlinNoiseCameraShakePattern *this,FObjectInitializer *param_1)

{
  UCameraShakePattern::UCameraShakePattern((UCameraShakePattern *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  this->_padding_ = (longlong)&___7USimpleCameraShakePattern__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3e4ccccd;
  *(undefined4 *)&this->_padding_ = 0x3e4ccccd;
  FCameraShakeState::FCameraShakeState((FCameraShakeState *)((longlong)&this->_padding_ + 4));
  this->LocationAmplitudeMultiplier = 1.0;
  this->_padding_ = (longlong)&___7UPerlinNoiseCameraShakePattern__6B_;
  (this->X).Amplitude = 1.0;
  (this->X).Frequency = 1.0;
  (this->Y).Amplitude = 1.0;
  (this->Y).Frequency = 1.0;
  (this->Z).Amplitude = 1.0;
  *(undefined8 *)&(this->Z).Frequency = 0x3f800000;
  (this->Pitch).Amplitude = 1.0;
  (this->Pitch).Frequency = 1.0;
  (this->Yaw).Amplitude = 1.0;
  (this->Yaw).Frequency = 1.0;
  (this->Roll).Amplitude = 1.0;
  *(undefined8 *)&(this->Roll).Frequency = 0x3f800000;
  (this->FOV).Frequency = 1.0;
  this->LocationFrequencyMultiplier = 1.0;
  this->RotationFrequencyMultiplier = 1.0;
  return this;
}

// ~UPerlinNoiseCameraShakePattern @ 14ad1eff0

void __thiscall
UPerlinNoiseCameraShakePattern::~UPerlinNoiseCameraShakePattern
          (UPerlinNoiseCameraShakePattern *this)

{
  this->_padding_ = (longlong)&___7USimpleCameraShakePattern__6B_;
  UCameraShakePattern::~UCameraShakePattern((UCameraShakePattern *)this);
  return;
}

// GetPrivateStaticClass @ 14ad22130

UClass * __cdecl UPerlinNoiseCameraShakePattern::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPerlinNoiseCameraShakePattern.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"PerlinNoiseCameraShakePattern",
               &Z_Registration_Info_UClass_UPerlinNoiseCameraShakePattern.InnerSingleton,
               StaticRegisterNativesUPerlinNoiseCameraShakePattern,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPerlinNoiseCameraShakePattern>,
               InternalVTableHelperCtorCaller<UPerlinNoiseCameraShakePattern>,local_res8,
               USimpleCameraShakePattern::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPerlinNoiseCameraShakePattern.InnerSingleton;
}

// ScrubShakePatternImpl @ 14ad23640

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UPerlinNoiseCameraShakePattern::ScrubShakePatternImpl
          (UPerlinNoiseCameraShakePattern *this,FCameraShakePatternScrubParams *param_1,
          FCameraShakePatternUpdateResult *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (this->InitialLocationOffset).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->CurrentLocationOffset).field0_0x0 =
       *(undefined8 *)&(this->InitialLocationOffset).field0_0x0;
  uVar1 = *(undefined8 *)&(this->InitialRotationOffset).field0_0x0;
  (this->CurrentLocationOffset).field0_0x0._s_0.Z = fVar2;
  fVar2 = (this->InitialRotationOffset).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->CurrentRotationOffset).field0_0x0 = uVar1;
  (this->CurrentRotationOffset).field0_0x0._s_0.Z = fVar2;
  this->CurrentFOVOffset = this->InitialFOVOffset;
  UpdatePerlinNoise(this,param_1->AbsoluteTime,param_2);
  fVar2 = FCameraShakeState::Scrub
                    ((FCameraShakeState *)((longlong)&this->_padding_ + 4),param_1->AbsoluteTime);
  FCameraShakePatternUpdateResult::ApplyScale(param_2,fVar2);
  return;
}

// StartShakePatternImpl @ 14ad23a50

void __thiscall
UPerlinNoiseCameraShakePattern::StartShakePatternImpl
          (UPerlinNoiseCameraShakePattern *this,FCameraShakePatternStartParams *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  FCameraShakeState::Start
            ((FCameraShakeState *)((longlong)&this->_padding_ + 4),(UCameraShakePattern *)this,
             param_1);
  if (param_1->bIsRestarting == false) {
    uVar2 = rand();
    fVar1 = __real_3bff01fe;
    iVar6 = (int)((float)(uVar2 & 0x7fff) * __real_3bff01fe);
    uVar2 = rand();
    iVar5 = (int)((float)(uVar2 & 0x7fff) * fVar1);
    uVar2 = rand();
    iVar4 = (int)((float)(uVar2 & 0x7fff) * fVar1);
    iVar3 = 0xfe;
    if (iVar4 < 0xfe) {
      iVar3 = iVar4;
    }
    iVar4 = 0xfe;
    if (iVar5 < 0xfe) {
      iVar4 = iVar5;
    }
    (this->InitialLocationOffset).field0_0x0._s_0.X = (float)iVar3;
    iVar3 = 0xfe;
    if (iVar6 < 0xfe) {
      iVar3 = iVar6;
    }
    (this->InitialLocationOffset).field0_0x0._s_0.Y = (float)iVar4;
    (this->InitialLocationOffset).field0_0x0._s_0.Z = (float)iVar3;
    uVar2 = rand();
    iVar7 = (int)((float)(uVar2 & 0x7fff) * fVar1);
    uVar2 = rand();
    iVar6 = (int)((float)(uVar2 & 0x7fff) * fVar1);
    uVar2 = rand();
    iVar4 = 0xfe;
    iVar5 = (int)((float)(uVar2 & 0x7fff) * fVar1);
    iVar3 = 0xfe;
    if (iVar5 < 0xfe) {
      iVar3 = iVar5;
    }
    iVar5 = iVar4;
    if (iVar6 < 0xfe) {
      iVar5 = iVar6;
    }
    (this->InitialRotationOffset).field0_0x0._s_0.X = (float)iVar3;
    iVar3 = iVar4;
    if (iVar7 < 0xfe) {
      iVar3 = iVar7;
    }
    (this->InitialRotationOffset).field0_0x0._s_0.Y = (float)iVar5;
    (this->InitialRotationOffset).field0_0x0._s_0.Z = (float)iVar3;
    uVar2 = rand();
    iVar3 = (int)((float)(uVar2 & 0x7fff) * fVar1);
    *(undefined8 *)&(this->CurrentLocationOffset).field0_0x0 =
         *(undefined8 *)&(this->InitialLocationOffset).field0_0x0;
    if (iVar3 < 0xfe) {
      iVar4 = iVar3;
    }
    *(undefined8 *)&(this->CurrentRotationOffset).field0_0x0 =
         *(undefined8 *)&(this->InitialRotationOffset).field0_0x0;
    (this->CurrentLocationOffset).field0_0x0._s_0.Z =
         (this->InitialLocationOffset).field0_0x0._s_0.Z;
    (this->CurrentRotationOffset).field0_0x0._s_0.Z =
         (this->InitialRotationOffset).field0_0x0._s_0.Z;
    this->InitialFOVOffset = (float)iVar4;
    this->CurrentFOVOffset = (float)iVar4;
  }
  return;
}

// StaticRegisterNativesUPerlinNoiseCameraShakePattern @ 14ad23fc0

void __cdecl
UPerlinNoiseCameraShakePattern::StaticRegisterNativesUPerlinNoiseCameraShakePattern(void)

{
  return;
}

// UpdatePerlinNoise @ 14ad259e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UPerlinNoiseCameraShakePattern::UpdatePerlinNoise
          (UPerlinNoiseCameraShakePattern *this,float param_1,
          FCameraShakePatternUpdateResult *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = this->LocationAmplitudeMultiplier * (this->X).Amplitude;
  if (fVar2 == 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = param_1 * (this->X).Frequency * this->LocationFrequencyMultiplier +
            (this->CurrentLocationOffset).field0_0x0._s_0.X;
    (this->CurrentLocationOffset).field0_0x0._s_0.X = fVar1;
    fVar1 = FMath::PerlinNoise1D(fVar1);
    fVar1 = fVar1 * fVar2;
  }
  (param_2->Location).field0_0x0._s_0.X = (double)fVar1;
  fVar2 = (this->Y).Amplitude * this->LocationAmplitudeMultiplier;
  if (fVar2 == 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = param_1 * (this->Y).Frequency * this->LocationFrequencyMultiplier +
            (this->CurrentLocationOffset).field0_0x0._s_0.Y;
    (this->CurrentLocationOffset).field0_0x0._s_0.Y = fVar1;
    fVar1 = FMath::PerlinNoise1D(fVar1);
    fVar1 = fVar1 * fVar2;
  }
  (param_2->Location).field0_0x0._s_0.Y = (double)fVar1;
  fVar2 = (this->Z).Amplitude * this->LocationAmplitudeMultiplier;
  if (fVar2 == 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = param_1 * (this->Z).Frequency * this->LocationFrequencyMultiplier +
            (this->CurrentLocationOffset).field0_0x0._s_0.Z;
    (this->CurrentLocationOffset).field0_0x0._s_0.Z = fVar1;
    fVar1 = FMath::PerlinNoise1D(fVar1);
    fVar1 = fVar1 * fVar2;
  }
  (param_2->Location).field0_0x0._s_0.Z = (double)fVar1;
  fVar2 = (this->Pitch).Amplitude * this->RotationAmplitudeMultiplier;
  if (fVar2 == 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = param_1 * (this->Pitch).Frequency * this->RotationFrequencyMultiplier +
            (this->CurrentRotationOffset).field0_0x0._s_0.X;
    (this->CurrentRotationOffset).field0_0x0._s_0.X = fVar1;
    fVar1 = FMath::PerlinNoise1D(fVar1);
    fVar1 = fVar1 * fVar2;
  }
  (param_2->Rotation).Pitch = (double)fVar1;
  fVar2 = (this->Yaw).Amplitude * this->RotationAmplitudeMultiplier;
  if (fVar2 == 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = param_1 * (this->Yaw).Frequency * this->RotationFrequencyMultiplier +
            (this->CurrentRotationOffset).field0_0x0._s_0.Y;
    (this->CurrentRotationOffset).field0_0x0._s_0.Y = fVar1;
    fVar1 = FMath::PerlinNoise1D(fVar1);
    fVar1 = fVar1 * fVar2;
  }
  (param_2->Rotation).Yaw = (double)fVar1;
  fVar2 = this->RotationAmplitudeMultiplier * (this->Roll).Amplitude;
  if (fVar2 == 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = param_1 * (this->Roll).Frequency * this->RotationFrequencyMultiplier +
            (this->CurrentRotationOffset).field0_0x0._s_0.Z;
    (this->CurrentRotationOffset).field0_0x0._s_0.Z = fVar1;
    fVar1 = FMath::PerlinNoise1D(fVar1);
    fVar1 = fVar1 * fVar2;
  }
  (param_2->Rotation).Roll = (double)fVar1;
  fVar2 = (this->FOV).Amplitude;
  if (fVar2 == 0.0) {
    param_2->FOV = 0.0;
  }
  else {
    fVar1 = param_1 * (this->FOV).Frequency + this->CurrentFOVOffset;
    this->CurrentFOVOffset = fVar1;
    fVar1 = FMath::PerlinNoise1D(fVar1);
    param_2->FOV = fVar1 * fVar2;
  }
  return;
}

// UpdateShakePatternImpl @ 14ad26030

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UPerlinNoiseCameraShakePattern::UpdateShakePatternImpl
          (UPerlinNoiseCameraShakePattern *this,FCameraShakePatternUpdateParams *param_1,
          FCameraShakePatternUpdateResult *param_2)

{
  float fVar1;
  
  UpdatePerlinNoise(this,param_1->DeltaTime,param_2);
  fVar1 = FCameraShakeState::Update
                    ((FCameraShakeState *)((longlong)&this->_padding_ + 4),param_1->DeltaTime);
  FCameraShakePatternUpdateResult::ApplyScale(param_2,fVar1);
  return;
}

