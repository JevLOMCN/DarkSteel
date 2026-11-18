// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 10

// StaticClass @ 14ad1b660

UClass * __cdecl UWaveOscillatorCameraShakePattern::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWaveOscillatorCameraShakePattern.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"WaveOscillatorCameraShakePattern",
               &Z_Registration_Info_UClass_UWaveOscillatorCameraShakePattern.InnerSingleton,
               StaticRegisterNativesUWaveOscillatorCameraShakePattern,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWaveOscillatorCameraShakePattern>,
               InternalVTableHelperCtorCaller<UWaveOscillatorCameraShakePattern>,local_res8,
               USimpleCameraShakePattern::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWaveOscillatorCameraShakePattern.InnerSingleton;
}

// UWaveOscillatorCameraShakePattern @ 14ad1ec60

UWaveOscillatorCameraShakePattern * __thiscall
UWaveOscillatorCameraShakePattern::UWaveOscillatorCameraShakePattern
          (UWaveOscillatorCameraShakePattern *this,FVTableHelper *param_1)

{
  UCameraShakePattern::UCameraShakePattern((UCameraShakePattern *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  this->_padding_ = (longlong)&___7USimpleCameraShakePattern__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3e4ccccd;
  *(undefined4 *)&this->_padding_ = 0x3e4ccccd;
  FCameraShakeState::FCameraShakeState((FCameraShakeState *)((longlong)&this->_padding_ + 4));
  this->LocationAmplitudeMultiplier = 1.0;
  this->_padding_ = (longlong)&___7UWaveOscillatorCameraShakePattern__6B_;
  (this->X).Amplitude = 1.0;
  (this->X).Frequency = 1.0;
  (this->X).InitialOffsetType = Random;
  (this->Y).Amplitude = 1.0;
  (this->Y).Frequency = 1.0;
  (this->Y).InitialOffsetType = Random;
  (this->Z).Amplitude = 1.0;
  (this->Z).Frequency = 1.0;
  (this->Z).InitialOffsetType = Random;
  (this->Pitch).Amplitude = 1.0;
  (this->Pitch).Frequency = 1.0;
  (this->Pitch).InitialOffsetType = Random;
  (this->Yaw).Amplitude = 1.0;
  (this->Yaw).Frequency = 1.0;
  (this->Yaw).InitialOffsetType = Random;
  (this->Roll).Amplitude = 1.0;
  (this->Roll).Frequency = 1.0;
  (this->Roll).InitialOffsetType = Random;
  (this->FOV).Amplitude = 1.0;
  (this->FOV).Frequency = 1.0;
  (this->FOV).InitialOffsetType = Random;
  this->LocationFrequencyMultiplier = 1.0;
  this->RotationAmplitudeMultiplier = 1.0;
  this->RotationFrequencyMultiplier = 1.0;
  return this;
}

// UWaveOscillatorCameraShakePattern @ 14ad1ed80

UWaveOscillatorCameraShakePattern * __thiscall
UWaveOscillatorCameraShakePattern::UWaveOscillatorCameraShakePattern
          (UWaveOscillatorCameraShakePattern *this,FObjectInitializer *param_1)

{
  UCameraShakePattern::UCameraShakePattern((UCameraShakePattern *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  this->_padding_ = (longlong)&___7USimpleCameraShakePattern__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3e4ccccd;
  *(undefined4 *)&this->_padding_ = 0x3e4ccccd;
  FCameraShakeState::FCameraShakeState((FCameraShakeState *)((longlong)&this->_padding_ + 4));
  this->LocationAmplitudeMultiplier = 1.0;
  this->_padding_ = (longlong)&___7UWaveOscillatorCameraShakePattern__6B_;
  this->RotationAmplitudeMultiplier = 0.0;
  (this->FOV).Amplitude = 0.0;
  this->LocationFrequencyMultiplier = 1.0;
  (this->X).Amplitude = 1.0;
  (this->X).Frequency = 1.0;
  (this->X).InitialOffsetType = Random;
  (this->Y).Amplitude = 1.0;
  (this->Y).Frequency = 1.0;
  (this->Y).InitialOffsetType = Random;
  (this->Z).Amplitude = 1.0;
  (this->Z).Frequency = 1.0;
  (this->Z).InitialOffsetType = Random;
  this->RotationFrequencyMultiplier = 1.0;
  (this->Pitch).Amplitude = 1.0;
  (this->Pitch).Frequency = 1.0;
  (this->Pitch).InitialOffsetType = Random;
  (this->Yaw).Amplitude = 1.0;
  (this->Yaw).Frequency = 1.0;
  (this->Yaw).InitialOffsetType = Random;
  (this->Roll).Amplitude = 1.0;
  (this->Roll).Frequency = 1.0;
  (this->Roll).InitialOffsetType = Random;
  (this->FOV).Frequency = 1.0;
  (this->FOV).InitialOffsetType = Random;
  return this;
}

// ~UWaveOscillatorCameraShakePattern @ 14ad1f050

void __thiscall
UWaveOscillatorCameraShakePattern::~UWaveOscillatorCameraShakePattern
          (UWaveOscillatorCameraShakePattern *this)

{
  this->_padding_ = (longlong)&___7USimpleCameraShakePattern__6B_;
  UCameraShakePattern::~UCameraShakePattern((UCameraShakePattern *)this);
  return;
}

// GetPrivateStaticClass @ 14ad22370

UClass * __cdecl UWaveOscillatorCameraShakePattern::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWaveOscillatorCameraShakePattern.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"WaveOscillatorCameraShakePattern",
               &Z_Registration_Info_UClass_UWaveOscillatorCameraShakePattern.InnerSingleton,
               StaticRegisterNativesUWaveOscillatorCameraShakePattern,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWaveOscillatorCameraShakePattern>,
               InternalVTableHelperCtorCaller<UWaveOscillatorCameraShakePattern>,local_res8,
               USimpleCameraShakePattern::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWaveOscillatorCameraShakePattern.InnerSingleton;
}

// ScrubShakePatternImpl @ 14ad236e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UWaveOscillatorCameraShakePattern::ScrubShakePatternImpl
          (UWaveOscillatorCameraShakePattern *this,FCameraShakePatternScrubParams *param_1,
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
  UpdateOscillators(this,param_1->AbsoluteTime,param_2);
  fVar2 = FCameraShakeState::Scrub
                    ((FCameraShakeState *)((longlong)&this->_padding_ + 4),param_1->AbsoluteTime);
  FCameraShakePatternUpdateResult::ApplyScale(param_2,fVar2);
  return;
}

// StartShakePatternImpl @ 14ad23c70

void __thiscall
UWaveOscillatorCameraShakePattern::StartShakePatternImpl
          (UWaveOscillatorCameraShakePattern *this,FCameraShakePatternStartParams *param_1)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  FCameraShakeState::Start
            ((FCameraShakeState *)((longlong)&this->_padding_ + 4),(UCameraShakePattern *)this,
             param_1);
  fVar1 = __real_3949116d;
  if (param_1->bIsRestarting == false) {
    fVar4 = 0.0;
    if ((this->X).InitialOffsetType == Random) {
      uVar2 = rand();
      fVar3 = (float)(uVar2 & 0x7fff) * fVar1;
    }
    else {
      fVar3 = 0.0;
    }
    (this->InitialLocationOffset).field0_0x0._s_0.X = fVar3;
    if ((this->Y).InitialOffsetType == Random) {
      uVar2 = rand();
      fVar3 = (float)(uVar2 & 0x7fff) * fVar1;
    }
    else {
      fVar3 = 0.0;
    }
    (this->InitialLocationOffset).field0_0x0._s_0.Y = fVar3;
    if ((this->Z).InitialOffsetType == Random) {
      uVar2 = rand();
      fVar3 = (float)(uVar2 & 0x7fff) * fVar1;
    }
    else {
      fVar3 = 0.0;
    }
    (this->InitialLocationOffset).field0_0x0._s_0.Z = fVar3;
    fVar3 = (this->InitialLocationOffset).field0_0x0._s_0.Z;
    *(undefined8 *)&(this->CurrentLocationOffset).field0_0x0 =
         *(undefined8 *)&(this->InitialLocationOffset).field0_0x0;
    (this->CurrentLocationOffset).field0_0x0._s_0.Z = fVar3;
    if ((this->Pitch).InitialOffsetType == Random) {
      uVar2 = rand();
      fVar3 = (float)(uVar2 & 0x7fff) * fVar1;
    }
    else {
      fVar3 = 0.0;
    }
    (this->InitialRotationOffset).field0_0x0._s_0.X = fVar3;
    if ((this->Yaw).InitialOffsetType == Random) {
      uVar2 = rand();
      fVar3 = (float)(uVar2 & 0x7fff) * fVar1;
    }
    else {
      fVar3 = 0.0;
    }
    (this->InitialRotationOffset).field0_0x0._s_0.Y = fVar3;
    if ((this->Roll).InitialOffsetType == Random) {
      uVar2 = rand();
      fVar3 = (float)(uVar2 & 0x7fff) * fVar1;
    }
    else {
      fVar3 = 0.0;
    }
    (this->InitialRotationOffset).field0_0x0._s_0.Z = fVar3;
    fVar3 = (this->InitialRotationOffset).field0_0x0._s_0.Z;
    *(undefined8 *)&(this->CurrentRotationOffset).field0_0x0 =
         *(undefined8 *)&(this->InitialRotationOffset).field0_0x0;
    (this->CurrentRotationOffset).field0_0x0._s_0.Z = fVar3;
    if ((this->FOV).InitialOffsetType == Random) {
      uVar2 = rand();
      fVar4 = (float)(uVar2 & 0x7fff) * fVar1;
    }
    this->InitialFOVOffset = fVar4;
    this->CurrentFOVOffset = fVar4;
  }
  return;
}

// StaticRegisterNativesUWaveOscillatorCameraShakePattern @ 14ad23ff0

void __cdecl
UWaveOscillatorCameraShakePattern::StaticRegisterNativesUWaveOscillatorCameraShakePattern(void)

{
  return;
}

// UpdateOscillators @ 14ad25730

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UWaveOscillatorCameraShakePattern::UpdateOscillators
          (UWaveOscillatorCameraShakePattern *this,float param_1,
          FCameraShakePatternUpdateResult *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = __real_40c90fdb;
  fVar3 = this->LocationAmplitudeMultiplier * (this->X).Amplitude;
  if (fVar3 == 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = param_1 * (this->X).Frequency * this->LocationFrequencyMultiplier * __real_40c90fdb +
            (this->CurrentLocationOffset).field0_0x0._s_0.X;
    (this->CurrentLocationOffset).field0_0x0._s_0.X = fVar1;
    fVar1 = sinf(fVar1);
    fVar1 = fVar1 * fVar3;
  }
  (param_2->Location).field0_0x0._s_0.X = (double)fVar1;
  fVar3 = (this->Y).Amplitude * this->LocationAmplitudeMultiplier;
  if (fVar3 == 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = param_1 * (this->Y).Frequency * this->LocationFrequencyMultiplier * fVar2 +
            (this->CurrentLocationOffset).field0_0x0._s_0.Y;
    (this->CurrentLocationOffset).field0_0x0._s_0.Y = fVar1;
    fVar1 = sinf(fVar1);
    fVar1 = fVar1 * fVar3;
  }
  (param_2->Location).field0_0x0._s_0.Y = (double)fVar1;
  fVar3 = (this->Z).Amplitude * this->LocationAmplitudeMultiplier;
  if (fVar3 == 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = param_1 * (this->Z).Frequency * this->LocationFrequencyMultiplier * fVar2 +
            (this->CurrentLocationOffset).field0_0x0._s_0.Z;
    (this->CurrentLocationOffset).field0_0x0._s_0.Z = fVar1;
    fVar1 = sinf(fVar1);
    fVar1 = fVar1 * fVar3;
  }
  (param_2->Location).field0_0x0._s_0.Z = (double)fVar1;
  fVar3 = this->RotationAmplitudeMultiplier * (this->Pitch).Amplitude;
  if (fVar3 == 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = param_1 * (this->Pitch).Frequency * this->RotationFrequencyMultiplier * fVar2 +
            (this->CurrentRotationOffset).field0_0x0._s_0.X;
    (this->CurrentRotationOffset).field0_0x0._s_0.X = fVar1;
    fVar1 = sinf(fVar1);
    fVar1 = fVar1 * fVar3;
  }
  (param_2->Rotation).Pitch = (double)fVar1;
  fVar3 = this->RotationAmplitudeMultiplier * (this->Yaw).Amplitude;
  if (fVar3 == 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = param_1 * (this->Yaw).Frequency * this->RotationFrequencyMultiplier * fVar2 +
            (this->CurrentRotationOffset).field0_0x0._s_0.Y;
    (this->CurrentRotationOffset).field0_0x0._s_0.Y = fVar1;
    fVar1 = sinf(fVar1);
    fVar1 = fVar1 * fVar3;
  }
  (param_2->Rotation).Yaw = (double)fVar1;
  fVar3 = this->RotationAmplitudeMultiplier * (this->Roll).Amplitude;
  if (fVar3 == 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = param_1 * (this->Roll).Frequency * this->RotationFrequencyMultiplier * fVar2 +
            (this->CurrentRotationOffset).field0_0x0._s_0.Z;
    (this->CurrentRotationOffset).field0_0x0._s_0.Z = fVar1;
    fVar1 = sinf(fVar1);
    fVar1 = fVar1 * fVar3;
  }
  (param_2->Rotation).Roll = (double)fVar1;
  fVar3 = (this->FOV).Amplitude;
  if (fVar3 == 0.0) {
    param_2->FOV = 0.0;
  }
  else {
    fVar2 = param_1 * (this->FOV).Frequency * fVar2 + this->CurrentFOVOffset;
    this->CurrentFOVOffset = fVar2;
    fVar2 = sinf(fVar2);
    param_2->FOV = fVar2 * fVar3;
  }
  return;
}

// UpdateShakePatternImpl @ 14ad26080

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UWaveOscillatorCameraShakePattern::UpdateShakePatternImpl
          (UWaveOscillatorCameraShakePattern *this,FCameraShakePatternUpdateParams *param_1,
          FCameraShakePatternUpdateResult *param_2)

{
  float fVar1;
  
  UpdateOscillators(this,param_1->DeltaTime,param_2);
  fVar1 = FCameraShakeState::Update
                    ((FCameraShakeState *)((longlong)&this->_padding_ + 4),param_1->DeltaTime);
  FCameraShakePatternUpdateResult::ApplyScale(param_2,fVar1);
  return;
}

