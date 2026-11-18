// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 23

// StaticClass @ 14ad19460

UClass * __cdecl ULegacyCameraShake::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULegacyCameraShake.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"LegacyCameraShake",
               &Z_Registration_Info_UClass_ULegacyCameraShake.InnerSingleton,
               StaticRegisterNativesULegacyCameraShake,0x1f0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULegacyCameraShake>,
               InternalVTableHelperCtorCaller<ULegacyCameraShake>,local_res8,
               UCameraShakeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULegacyCameraShake.InnerSingleton;
}

// ULegacyCameraShake @ 14ad1e730

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULegacyCameraShake * __thiscall
ULegacyCameraShake::ULegacyCameraShake(ULegacyCameraShake *this,FVTableHelper *param_1)

{
  UCameraShakeBase::UCameraShakeBase((UCameraShakeBase *)this,param_1);
  this->_padding_ = (longlong)&___7ULegacyCameraShake__6B_;
  (this->RotOscillation).Pitch.Amplitude = 0.0;
  (this->RotOscillation).Pitch.Frequency = 0.0;
  (this->RotOscillation).Pitch.InitialOffset = '\0';
  (this->RotOscillation).Pitch.Waveform = SineWave;
  (this->RotOscillation).Yaw.Amplitude = 0.0;
  (this->RotOscillation).Yaw.Frequency = 0.0;
  (this->RotOscillation).Yaw.InitialOffset = '\0';
  (this->RotOscillation).Yaw.Waveform = SineWave;
  (this->RotOscillation).Roll.Amplitude = 0.0;
  (this->RotOscillation).Roll.Frequency = 0.0;
  (this->RotOscillation).Roll.InitialOffset = '\0';
  (this->RotOscillation).Roll.Waveform = SineWave;
  (this->LocOscillation).X.Amplitude = 0.0;
  (this->LocOscillation).X.Frequency = 0.0;
  (this->LocOscillation).X.InitialOffset = '\0';
  (this->LocOscillation).X.Waveform = SineWave;
  (this->LocOscillation).Y.Amplitude = 0.0;
  (this->LocOscillation).Y.Frequency = 0.0;
  (this->LocOscillation).Y.InitialOffset = '\0';
  (this->LocOscillation).Y.Waveform = SineWave;
  (this->LocOscillation).Z.Amplitude = 0.0;
  (this->LocOscillation).Z.Frequency = 0.0;
  (this->LocOscillation).Z.InitialOffset = '\0';
  (this->LocOscillation).Z.Waveform = SineWave;
  (this->FOVOscillation).Amplitude = 0.0;
  (this->FOVOscillation).Frequency = 0.0;
  (this->FOVOscillation).InitialOffset = '\0';
  (this->FOVOscillation).Waveform = SineWave;
  (this->AnimSequence).field0_0x0.DebugPtr = (UCameraAnimationSequence *)0x0;
  (this->SequenceShakePattern).field0_0x0.DebugPtr = (USequenceCameraShakePattern *)0x0;
  return this;
}

// ULegacyCameraShake @ 14ad1e7d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULegacyCameraShake * __thiscall
ULegacyCameraShake::ULegacyCameraShake(ULegacyCameraShake *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,L"RootShakePattern");
  FVar1 = *pFVar2;
  pUVar3 = ULegacyCameraShakePattern::StaticClass();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar1,pUVar3,(TArrayView<FName_const_,int> *)0x0);
  UCameraShakeBase::UCameraShakeBase((UCameraShakeBase *)this,param_1);
  this->_padding_ = (longlong)&___7ULegacyCameraShake__6B_;
  (this->RotOscillation).Pitch.Amplitude = 0.0;
  (this->RotOscillation).Pitch.Frequency = 0.0;
  (this->RotOscillation).Pitch.InitialOffset = '\0';
  (this->RotOscillation).Pitch.Waveform = SineWave;
  (this->RotOscillation).Yaw.Amplitude = 0.0;
  (this->RotOscillation).Yaw.Frequency = 0.0;
  (this->RotOscillation).Yaw.InitialOffset = '\0';
  (this->RotOscillation).Yaw.Waveform = SineWave;
  (this->RotOscillation).Roll.Amplitude = 0.0;
  (this->RotOscillation).Roll.Frequency = 0.0;
  (this->RotOscillation).Roll.InitialOffset = '\0';
  (this->RotOscillation).Roll.Waveform = SineWave;
  (this->LocOscillation).X.Amplitude = 0.0;
  (this->LocOscillation).X.Frequency = 0.0;
  (this->LocOscillation).X.InitialOffset = '\0';
  (this->LocOscillation).X.Waveform = SineWave;
  (this->LocOscillation).Y.Amplitude = 0.0;
  (this->LocOscillation).Y.Frequency = 0.0;
  (this->LocOscillation).Y.InitialOffset = '\0';
  (this->LocOscillation).Y.Waveform = SineWave;
  (this->LocOscillation).Z.Amplitude = 0.0;
  (this->LocOscillation).Z.Frequency = 0.0;
  (this->LocOscillation).Z.InitialOffset = '\0';
  (this->LocOscillation).Z.Waveform = SineWave;
  (this->FOVOscillation).Amplitude = 0.0;
  (this->FOVOscillation).Frequency = 0.0;
  (this->FOVOscillation).InitialOffset = '\0';
  (this->FOVOscillation).Waveform = SineWave;
  (this->AnimSequence).field0_0x0.DebugPtr = (UCameraAnimationSequence *)0x0;
  (this->SequenceShakePattern).field0_0x0.DebugPtr = (USequenceCameraShakePattern *)0x0;
  this->AnimPlayRate = 1.0;
  this->AnimScale = 1.0;
  this->AnimBlendInTime = 0.2;
  this->AnimBlendOutTime = 0.2;
  this->OscillationBlendInTime = 0.1;
  this->OscillationBlendOutTime = 0.2;
  return this;
}

// ~ULegacyCameraShake @ 14ad1ef90

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULegacyCameraShake::~ULegacyCameraShake(ULegacyCameraShake *this)

{
  this->_padding_ = (longlong)&___7ULegacyCameraShake__6B_;
  UCameraShakeBase::~UCameraShakeBase((UCameraShakeBase *)this);
  return;
}

// BlueprintUpdateCameraShake @ 14ad1f6e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
ULegacyCameraShake::BlueprintUpdateCameraShake
          (ULegacyCameraShake *this,float param_1,float param_2,FMinimalViewInfo *param_3,
          FMinimalViewInfo *param_4)

{
  UFunction *pUVar1;
  undefined1 auStack_1218 [32];
  float local_11f8;
  float local_11f4;
  FMinimalViewInfo local_11e8;
  FMinimalViewInfo local_918;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1218;
  FMinimalViewInfo::FMinimalViewInfo(&local_11e8);
  FMinimalViewInfo::FMinimalViewInfo(&local_918);
  local_11f8 = param_1;
  local_11f4 = param_2;
  FMinimalViewInfo::operator=(&local_11e8,param_3);
  FMinimalViewInfo::operator=(&local_918,param_4);
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ULegacyCameraShake_BlueprintUpdateCameraShake);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_11f8);
  FMinimalViewInfo::operator=(param_4,&local_918);
  if (local_918.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_918.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data);
  }
  if (local_11e8.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_11e8.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data);
  }
  return;
}

// DoGetIsFinished @ 14ad20220

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall ULegacyCameraShake::DoGetIsFinished(ULegacyCameraShake *this)

{
  USequenceCameraShakePattern *this_00;
  bool bVar1;
  UFunction *this_01;
  UClass *pUVar2;
  char cVar3;
  char local_res8 [8];
  
  if (this->OscillatorTimeRemaining <= 0.0) {
    this_00 = (this->SequenceShakePattern).field0_0x0.DebugPtr;
    if ((this_00 != (USequenceCameraShakePattern *)0x0) &&
       (bVar1 = UCameraShakePattern::IsFinished((UCameraShakePattern *)this_00), !bVar1)) {
      return false;
    }
    this_01 = UObject::FindFunctionChecked
                        ((UObject *)this,NAME_ULegacyCameraShake_ReceiveIsFinished);
    pUVar2 = UField::GetOwnerClass((UField *)this_01);
    if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
      local_res8[0] = '\0';
      (**(code **)(this->_padding_ + 0x260))(this,this_01,local_res8);
      cVar3 = local_res8[0] != '\0';
    }
    else {
      cVar3 = (**(code **)(this->_padding_ + 0x2b0))(this);
    }
    if (cVar3 != '\0') {
      return true;
    }
  }
  return false;
}

// DoScrubShake @ 14ad202c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
ULegacyCameraShake::DoScrubShake
          (ULegacyCameraShake *this,FCameraShakePatternScrubParams *param_1,
          FCameraShakePatternUpdateResult *param_2)

{
  float fVar1;
  double dVar2;
  float fVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  float fVar8;
  undefined1 auStack_918 [32];
  FCameraShakePatternUpdateParams local_8f8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_918;
  fVar1 = param_1->AbsoluteTime;
  dVar5 = (this->InitialLocSinOffset).field0_0x0._s_0.Y;
  fVar3 = this->InitialFOVSinOffset;
  dVar2 = (this->InitialLocSinOffset).field0_0x0._s_0.Z;
  (this->LocSinOffset).field0_0x0._s_0.X = (this->InitialLocSinOffset).field0_0x0._s_0.X;
  (this->LocSinOffset).field0_0x0._s_0.Y = dVar5;
  this->FOVSinOffset = fVar3;
  dVar5 = (this->InitialRotSinOffset).field0_0x0._s_0.X;
  dVar6 = (this->InitialRotSinOffset).field0_0x0._s_0.Y;
  (this->LocSinOffset).field0_0x0._s_0.Z = dVar2;
  dVar2 = (this->InitialRotSinOffset).field0_0x0._s_0.Z;
  (this->RotSinOffset).field0_0x0._s_0.X = dVar5;
  (this->RotSinOffset).field0_0x0._s_0.Y = dVar6;
  fVar3 = this->ActualOscillationDuration;
  (this->RotSinOffset).field0_0x0._s_0.Z = dVar2;
  fVar8 = __real_7f7fffff;
  if (0.0 < fVar3) {
    fVar8 = fVar3;
  }
  this->OscillatorTimeRemaining = fVar8;
  if (0.0 < this->OscillationBlendInTime) {
    this->bBlendingIn = true;
    this->CurrentBlendInTime = 0.0;
  }
  fVar8 = this->OscillationBlendOutTime;
  if (0.0 < fVar8) {
    this->bBlendingOut = false;
    this->CurrentBlendOutTime = 0.0;
  }
  if (((0.0 < fVar3) && (0.0 < fVar8)) && (fVar3 - fVar8 < fVar1)) {
    this->bBlendingOut = true;
    this->CurrentBlendOutTime = fVar8 - (this->ActualOscillationDuration - fVar1);
  }
  FCameraShakePatternScrubParams::ToUpdateParams(param_1,&local_8f8);
  DoUpdateShake(this,&local_8f8,param_2);
  if (((param_2->Flags & ApplyAsAbsolute) == Default) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumHasAnyFlags(OutResult.Flags, ECameraShakePatternUpdateResultFlags::ApplyAsAbsolute)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Shakes\\LegacyCameraShake.cpp"
                         ,0x17d,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (local_8f8.POV.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8f8.POV.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data)
    ;
  }
  return;
}

// DoStartShake @ 14ad20450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
ULegacyCameraShake::DoStartShake(ULegacyCameraShake *this,FCameraShakePatternStartParams *param_1)

{
  double dVar1;
  undefined1 uVar2;
  UCameraAnimationSequence *pUVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  UClass *pUVar8;
  USequenceCameraShakePattern *pUVar9;
  UFunction *pUVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_108 [32];
  FName local_e8;
  FString local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (param_1->bOverrideDuration == false) {
    fVar14 = this->OscillationDuration;
  }
  else {
    fVar14 = param_1->DurationOverride;
  }
  this->ActualOscillationDuration = fVar14;
  fVar13 = __real_3949116d;
  if ((fVar14 <= 0.0) && (bVar4 = fVar14 == 0.0, fVar14 = __real_7f7fffff, bVar4))
  goto LAB_14ad206df;
  if (this->OscillatorTimeRemaining <= 0.0) {
    if ((this->RotOscillation).Pitch.InitialOffset.Value == '\0') {
      uVar7 = rand();
      fVar12 = (float)(uVar7 & 0x7fff) * fVar13;
    }
    else {
      fVar12 = 0.0;
    }
    (this->RotSinOffset).field0_0x0._s_0.X = (double)fVar12;
    if ((this->RotOscillation).Yaw.InitialOffset.Value == '\0') {
      uVar7 = rand();
      fVar12 = (float)(uVar7 & 0x7fff) * fVar13;
    }
    else {
      fVar12 = 0.0;
    }
    (this->RotSinOffset).field0_0x0._s_0.Y = (double)fVar12;
    if ((this->RotOscillation).Roll.InitialOffset.Value == '\0') {
      uVar7 = rand();
      fVar12 = (float)(uVar7 & 0x7fff) * fVar13;
    }
    else {
      fVar12 = 0.0;
    }
    (this->RotSinOffset).field0_0x0._s_0.Z = (double)fVar12;
    if ((this->LocOscillation).X.InitialOffset.Value == '\0') {
      uVar7 = rand();
      fVar12 = (float)(uVar7 & 0x7fff) * fVar13;
    }
    else {
      fVar12 = 0.0;
    }
    (this->LocSinOffset).field0_0x0._s_0.X = (double)fVar12;
    if ((this->LocOscillation).Y.InitialOffset.Value == '\0') {
      uVar7 = rand();
      fVar12 = (float)(uVar7 & 0x7fff) * fVar13;
    }
    else {
      fVar12 = 0.0;
    }
    (this->LocSinOffset).field0_0x0._s_0.Y = (double)fVar12;
    if ((this->LocOscillation).Z.InitialOffset.Value == '\0') {
      uVar7 = rand();
      fVar12 = (float)(uVar7 & 0x7fff) * fVar13;
    }
    else {
      fVar12 = 0.0;
    }
    (this->LocSinOffset).field0_0x0._s_0.Z = (double)fVar12;
    if ((this->FOVOscillation).InitialOffset.Value == '\0') {
      uVar7 = rand();
      fVar13 = (float)(uVar7 & 0x7fff) * fVar13;
    }
    else {
      fVar13 = 0.0;
    }
    fVar12 = this->OscillationBlendInTime;
    dVar5 = (this->LocSinOffset).field0_0x0._s_0.Y;
    dVar1 = (this->LocSinOffset).field0_0x0._s_0.Z;
    (this->InitialLocSinOffset).field0_0x0._s_0.X = (this->LocSinOffset).field0_0x0._s_0.X;
    (this->InitialLocSinOffset).field0_0x0._s_0.Y = dVar5;
    dVar5 = (this->RotSinOffset).field0_0x0._s_0.X;
    dVar6 = (this->RotSinOffset).field0_0x0._s_0.Y;
    (this->InitialLocSinOffset).field0_0x0._s_0.Z = dVar1;
    dVar1 = (this->RotSinOffset).field0_0x0._s_0.Z;
    (this->InitialRotSinOffset).field0_0x0._s_0.X = dVar5;
    (this->InitialRotSinOffset).field0_0x0._s_0.Y = dVar6;
    (this->InitialRotSinOffset).field0_0x0._s_0.Z = dVar1;
    this->FOVSinOffset = fVar13;
    this->InitialFOVSinOffset = fVar13;
    this->OscillatorTimeRemaining = fVar14;
    if (fVar12 <= 0.0) goto LAB_14ad206df;
    this->bBlendingIn = true;
  }
  else {
    uVar2 = this->field_0x1e8;
    this->OscillatorTimeRemaining = fVar14;
    if (!this->bBlendingOut) goto LAB_14ad206df;
    this->CurrentBlendOutTime = 0.0;
    if (0.0 < this->OscillationBlendInTime) {
      this->CurrentBlendInTime = this->OscillationBlendInTime;
      this->field_0x1e8 = uVar2 & 0xfd | 1;
      goto LAB_14ad206df;
    }
    this->field_0x1e8 = uVar2 & 0xfc;
  }
  this->CurrentBlendInTime = 0.0;
LAB_14ad206df:
  if ((this->AnimSequence).field0_0x0.DebugPtr != (UCameraAnimationSequence *)0x0) {
    pUVar9 = (this->SequenceShakePattern).field0_0x0.DebugPtr;
    if (pUVar9 == (USequenceCameraShakePattern *)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar8 = Z_Construct_UClass_USequenceCameraShakePattern_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_c8,pUVar8);
      local_c8._8_8_ = this;
      pUVar9 = (USequenceCameraShakePattern *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
      if (local_c8._64_8_ != 0) {
        plVar11 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar9 != (USequenceCameraShakePattern *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      (this->SequenceShakePattern).field0_0x0.DebugPtr = pUVar9;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 = (this->AnimSequence).field0_0x0.DebugPtr, pUVar3 != (UCameraAnimationSequence *)0x0
       )) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (pUVar9->Sequence).field0_0x0 = (this->AnimSequence).field0_0x0;
    ((this->SequenceShakePattern).field0_0x0.DebugPtr)->PlayRate = this->AnimPlayRate;
    ((this->SequenceShakePattern).field0_0x0.DebugPtr)->Scale = this->AnimScale;
    ((this->SequenceShakePattern).field0_0x0.DebugPtr)->BlendInTime = this->AnimBlendInTime;
    ((this->SequenceShakePattern).field0_0x0.DebugPtr)->BlendOutTime = this->AnimBlendOutTime;
    ((this->SequenceShakePattern).field0_0x0.DebugPtr)->RandomSegmentDuration =
         this->RandomAnimSegmentDuration;
    ((this->SequenceShakePattern).field0_0x0.DebugPtr)->bRandomSegment = this->bRandomAnimSegment;
    UCameraShakePattern::StartShakePattern
              ((UCameraShakePattern *)(this->SequenceShakePattern).field0_0x0.DebugPtr,param_1);
  }
  if (5 < (byte)LogLegacyCameraShake._0_1_) {
    local_e8 = (FName)this->_padding_;
    ::FName::ToString(&local_e8,&local_e0);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLegacyCameraShake);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  local_e8.ComparisonIndex.Value = *(uint *)((longlong)&this->_padding_ + 4);
  pUVar10 = UObject::FindFunctionChecked((UObject *)this,NAME_ULegacyCameraShake_ReceivePlayShake);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar10,&local_e8);
  return;
}

// DoStopShake @ 14ad20900

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall ULegacyCameraShake::DoStopShake(ULegacyCameraShake *this,bool param_1)

{
  float fVar1;
  USequenceCameraShakePattern *this_00;
  UFunction *pUVar2;
  float fVar3;
  FName local_res8;
  FCameraShakePatternStopParams local_res10 [8];
  FString local_18;
  
  if (param_1) {
    fVar3 = 0.0;
  }
  else {
    fVar1 = this->OscillatorTimeRemaining;
    fVar3 = this->OscillationBlendOutTime;
    if ((0.0 < fVar1) && (fVar1 <= fVar3)) {
      fVar3 = fVar1;
    }
  }
  this->OscillatorTimeRemaining = fVar3;
  this_00 = (this->SequenceShakePattern).field0_0x0.DebugPtr;
  if (this_00 != (USequenceCameraShakePattern *)0x0) {
    local_res10[0].bImmediately = param_1;
    UCameraShakePattern::StopShakePattern((UCameraShakePattern *)this_00,local_res10);
  }
  if (5 < (byte)LogLegacyCameraShake._0_1_) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLegacyCameraShake);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  local_res10[0].bImmediately = param_1;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_ULegacyCameraShake_ReceiveStopShake);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,local_res10);
  return;
}

// DoTeardownShake @ 14ad209f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall ULegacyCameraShake::DoTeardownShake(ULegacyCameraShake *this)

{
  USequenceCameraShakePattern *pUVar1;
  
  pUVar1 = (this->SequenceShakePattern).field0_0x0.DebugPtr;
  if (pUVar1 == (USequenceCameraShakePattern *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014772dd03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0x2e0))();
  return;
}

// DoUpdateShake @ 14ad20a10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULegacyCameraShake::DoUpdateShake
          (ULegacyCameraShake *this,FCameraShakePatternUpdateParams *param_1,
          FCameraShakePatternUpdateResult *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  EOscillatorWaveform EVar4;
  USequenceCameraShakePattern *this_00;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  char cVar12;
  bool bVar13;
  UWorld *pUVar14;
  IXRTrackingSystem *pIVar15;
  UFunction *pUVar16;
  byte bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_2398 [32];
  double local_2378;
  double local_2370;
  double local_2368;
  FName local_2360;
  FString local_2358 [2];
  double local_2338;
  TVector<double>_u_0 local_2328;
  double local_2310;
  double dStack_2308;
  double local_2300;
  float local_22f8;
  FPostProcessSettings local_22e8;
  float local_1b78;
  undefined1 local_1b74;
  TVector<double>_u_0 local_1b68;
  double local_1b50;
  double dStack_1b48;
  double local_1b40;
  float local_1b38;
  void *local_1390;
  float local_1298;
  float local_1294;
  FMinimalViewInfo local_1288;
  FMinimalViewInfo local_9b8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_2398;
  fVar20 = this->OscillatorTimeRemaining;
  fVar1 = param_1->DeltaTime;
  if (0.0 < fVar20) {
    fVar20 = fVar20 - fVar1;
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    this->OscillatorTimeRemaining = fVar20;
  }
  bVar17 = this->field_0x1e8;
  if (this->bBlendingIn) {
    this->CurrentBlendInTime = fVar1 + this->CurrentBlendInTime;
  }
  if (this->bBlendingOut) {
    this->CurrentBlendOutTime = fVar1 + this->CurrentBlendOutTime;
  }
  bVar13 = false;
  if (0.0 < fVar20) {
    if (this->OscillationBlendOutTime <= fVar20) {
      if (this->ActualOscillationDuration <= 0.0 && this->ActualOscillationDuration != 0.0) {
        this->OscillatorTimeRemaining = 3.4028235e+38;
      }
    }
    else {
      bVar17 = bVar17 | 2;
      this->field_0x1e8 = bVar17;
      this->CurrentBlendOutTime = this->OscillationBlendOutTime - fVar20;
    }
  }
  else {
    bVar13 = true;
  }
  if (((bVar17 & 1) != 0) && (this->OscillationBlendInTime < this->CurrentBlendInTime)) {
    bVar17 = bVar17 & 0xfe;
    this->field_0x1e8 = bVar17;
  }
  if (((bVar17 & 2) != 0) && (this->OscillationBlendOutTime < this->CurrentBlendOutTime)) {
    this->CurrentBlendOutTime = this->OscillationBlendOutTime;
    goto LAB_14ad20f4b;
  }
  if (bVar13) goto LAB_14ad20f4b;
  fVar20 = __real_3f800000;
  if ((bVar17 & 1) != 0) {
    fVar20 = this->CurrentBlendInTime / this->OscillationBlendInTime;
  }
  fVar21 = __real_3f800000;
  if ((bVar17 & 2) != 0) {
    fVar21 = __real_3f800000 - this->CurrentBlendOutTime / this->OscillationBlendOutTime;
  }
  if (fVar20 <= fVar21) {
    fVar21 = fVar20;
  }
  if (fVar21 <= 0.0) goto LAB_14ad20f4b;
  fVar20 = FFOscillator::UpdateOffset(&(this->LocOscillation).X,(double *)&this->LocSinOffset,fVar1)
  ;
  fVar18 = FFOscillator::UpdateOffset
                     (&(this->LocOscillation).Y,&(this->LocSinOffset).field0_0x0._s_0.Y,fVar1);
  dVar2 = (double)fVar21;
  fVar19 = FFOscillator::UpdateOffset
                     (&(this->LocOscillation).Z,&(this->LocSinOffset).field0_0x0._s_0.Z,fVar1);
  (param_2->Location).field0_0x0._s_0.X = (double)fVar20 * dVar2;
  (param_2->Location).field0_0x0._s_0.Y = (double)fVar18 * dVar2;
  (param_2->Location).field0_0x0._s_0.Z = (double)fVar19 * dVar2;
  fVar20 = FFOscillator::UpdateOffset
                     (&(this->RotOscillation).Pitch,(double *)&this->RotSinOffset,fVar1);
  dVar2 = (double)(fVar20 * fVar21);
  fVar20 = FFOscillator::UpdateOffset
                     (&(this->RotOscillation).Yaw,&(this->RotSinOffset).field0_0x0._s_0.Y,fVar1);
  local_2368 = (double)(fVar20 * fVar21);
  fVar20 = FFOscillator::UpdateOffset
                     (&(this->RotOscillation).Roll,&(this->RotSinOffset).field0_0x0._s_0.Z,fVar1);
  local_2338 = (double)(fVar20 * fVar21);
  if ((AActor *)this->_padding_ == (AActor *)0x0) {
    pUVar14 = (UWorld *)0x0;
  }
  else {
    pUVar14 = AActor::GetWorld((AActor *)this->_padding_);
  }
  if ((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) {
LAB_14ad20d1d:
    dVar11 = __real_4076800000000000;
    dVar3 = FGenericPlatformMath::Fmod((param_1->POV).Rotation.Pitch,__real_4076800000000000);
    dVar10 = __real_4066800000000000;
    if (dVar3 < 0.0) {
      dVar3 = dVar3 + dVar11;
    }
    if (__real_4066800000000000 < dVar3) {
      dVar3 = dVar3 - dVar11;
    }
    dVar2 = FGenericPlatformMath::Fmod(dVar2,dVar11);
    if (dVar2 < 0.0) {
      dVar2 = dVar2 + dVar11;
    }
    if (dVar10 < dVar2) {
      dVar2 = dVar2 - dVar11;
    }
    dVar2 = (double)(float)dVar3 + dVar2;
    dVar6 = FGenericPlatformMath::Fmod(__real_40667999a0000000,dVar11);
    if (dVar6 < 0.0) {
      dVar6 = dVar6 + dVar11;
    }
    dVar6 = dVar6 * __real_3fe0000000000000;
    dVar7 = FGenericPlatformMath::Fmod(dVar6 - ___real_40567999a0000000,dVar11);
    if (dVar7 < 0.0) {
      dVar7 = dVar7 + dVar11;
    }
    dVar8 = FGenericPlatformMath::Fmod(dVar2 - dVar7,dVar11);
    if (dVar8 < 0.0) {
      dVar8 = dVar8 + dVar11;
    }
    if (dVar10 < dVar8) {
      dVar8 = dVar8 - dVar11;
    }
    if (dVar8 <= dVar6) {
      if (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^
                                   __xmm_80000000000000008000000000000000._4_4_,
                                   SUB84(dVar6,0) ^ (uint)__xmm_80000000000000008000000000000000)) {
        dVar2 = dVar7 - dVar6;
      }
    }
    else {
      dVar2 = dVar7 + dVar6;
    }
    dVar2 = FGenericPlatformMath::Fmod(dVar2,dVar11);
    if (dVar2 < 0.0) {
      dVar2 = dVar2 + dVar11;
    }
    if (dVar10 < dVar2) {
      dVar2 = dVar2 - dVar11;
    }
    dVar2 = dVar2 - (double)(float)dVar3;
  }
  else {
    pIVar15 = TSharedPtr<IXRTrackingSystem,1>::operator->(&GEngine->XRSystem);
    if (pUVar14 == (UWorld *)0x0) {
      cVar12 = (**(code **)((longlong)*pIVar15 + 0x148))(pIVar15);
    }
    else {
      cVar12 = (**(code **)((longlong)*pIVar15 + 0x150))(pIVar15,pUVar14);
    }
    if (cVar12 == '\0') goto LAB_14ad20d1d;
  }
  auVar9._8_4_ = SUB84(local_2368,0);
  auVar9._0_8_ = dVar2;
  auVar9._12_4_ = (int)((ulonglong)local_2368 >> 0x20);
  (param_2->Rotation).Pitch = dVar2;
  (param_2->Rotation).Yaw = (double)auVar9._8_8_;
  (param_2->Rotation).Roll = local_2338;
  dVar2 = (double)this->FOVSinOffset;
  if ((this->FOVOscillation).Amplitude == 0.0) {
    fVar20 = 0.0;
  }
  else {
    EVar4 = (this->FOVOscillation).Waveform;
    dVar2 = dVar2 + (double)(fVar1 * (this->FOVOscillation).Frequency);
    if ((EVar4 == SineWave) || (EVar4 != PerlinNoise)) {
      dVar3 = sin(dVar2);
      fVar20 = (float)dVar3 * (this->FOVOscillation).Amplitude;
    }
    else {
      fVar20 = FMath::PerlinNoise1D((float)dVar2);
      fVar20 = fVar20 * (this->FOVOscillation).Amplitude;
    }
  }
  this->FOVSinOffset = (float)dVar2;
  param_2->FOV = fVar20 * fVar21;
LAB_14ad20f4b:
  this_00 = (this->SequenceShakePattern).field0_0x0.DebugPtr;
  if ((this_00 != (USequenceCameraShakePattern *)0x0) &&
     (bVar13 = UCameraShakePattern::IsFinished((UCameraShakePattern *)this_00), !bVar13)) {
    local_22f8 = 0.0;
    local_2328._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_2328._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_2310 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    dStack_2308 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_2328._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_2300 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    FPostProcessSettings::FPostProcessSettings(&local_22e8);
    local_1b78 = 0.0;
    local_1b74 = 0;
    UCameraShakePattern::UpdateShakePattern
              ((UCameraShakePattern *)(this->SequenceShakePattern).field0_0x0.DebugPtr,param_1,
               (FCameraShakePatternUpdateResult *)&local_2328._s_0);
    dVar2 = (param_2->Location).field0_0x0._s_0.Y;
    (param_2->Location).field0_0x0._s_0.X =
         local_2328._s_0.X + (param_2->Location).field0_0x0._s_0.X;
    dVar3 = (param_2->Location).field0_0x0._s_0.Z;
    (param_2->Location).field0_0x0._s_0.Y = local_2328._s_0.Y + dVar2;
    (param_2->Location).field0_0x0._s_0.Z = local_2328._s_0.Z + dVar3;
    (param_2->Rotation).Pitch = local_2310 + (param_2->Rotation).Pitch;
    (param_2->Rotation).Yaw = dStack_2308 + (param_2->Rotation).Yaw;
    (param_2->Rotation).Roll = local_2300 + (param_2->Rotation).Roll;
    param_2->FOV = local_22f8 + param_2->FOV;
    FPostProcessSettings::operator=(&param_2->PostProcessSettings,&local_22e8);
    param_2->PostProcessBlendWeight = local_1b78;
    if (local_22e8.WeightedBlendables.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_22e8.WeightedBlendables.Array.AllocatorInstance.Data);
    }
  }
  if ((param_2->Flags != Default) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutResult.Flags == ECameraShakePatternUpdateResultFlags::Default",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Shakes\\LegacyCameraShake.cpp"
                          ,0x140,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar20 = param_1->ShakeScale * param_1->DynamicScale;
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  UCameraShakeBase::ApplyScale(fVar20,param_2);
  UCameraShakeBase::ApplyLimits(&param_1->POV,param_2);
  UCameraShakeBase::ApplyPlaySpace((UCameraShakeBase *)this,param_1,param_2);
  if (((param_2->Flags & ApplyAsAbsolute) == Default) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("EnumHasAnyFlags(OutResult.Flags, ECameraShakePatternUpdateResultFlags::ApplyAsAbsolute)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Shakes\\LegacyCameraShake.cpp"
                          ,0x144,L""), bVar13)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FMinimalViewInfo::FMinimalViewInfo((FMinimalViewInfo *)&local_1b68._s_0,&param_1->POV);
  local_1b68._s_0.X = (param_2->Location).field0_0x0._s_0.X;
  local_1b68._s_0.Y = (param_2->Location).field0_0x0._s_0.Y;
  local_1b68._s_0.Z = (param_2->Location).field0_0x0._s_0.Z;
  fVar20 = param_1->DynamicScale;
  local_1b50 = (param_2->Rotation).Pitch;
  dStack_1b48 = (param_2->Rotation).Yaw;
  local_1b40 = (param_2->Rotation).Roll;
  local_1b38 = param_2->FOV;
  FMinimalViewInfo::FMinimalViewInfo(&local_1288);
  FMinimalViewInfo::FMinimalViewInfo(&local_9b8);
  local_1298 = fVar1;
  local_1294 = fVar20;
  FMinimalViewInfo::operator=(&local_1288,(FMinimalViewInfo *)&local_1b68._s_0);
  FMinimalViewInfo::operator=(&local_9b8,(FMinimalViewInfo *)&local_1b68._s_0);
  pUVar16 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_ULegacyCameraShake_BlueprintUpdateCameraShake);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar16,&local_1298);
  FMinimalViewInfo::operator=((FMinimalViewInfo *)&local_1b68._s_0,&local_9b8);
  if (local_9b8.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9b8.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data);
  }
  if (local_1288.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1288.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data);
  }
  (param_2->Location).field0_0x0._s_0.X = local_1b68._s_0.X;
  (param_2->Location).field0_0x0._s_0.Y = local_1b68._s_0.Y;
  (param_2->Location).field0_0x0._s_0.Z = local_1b68._s_0.Z;
  (param_2->Rotation).Pitch = local_1b50;
  (param_2->Rotation).Yaw = dStack_1b48;
  param_2->FOV = local_1b38;
  (param_2->Rotation).Roll = local_1b40;
  if (local_1390 != (void *)0x0) {
    FMemory::Free(local_1390);
  }
  if (5 < (byte)LogLegacyCameraShake._0_1_) {
    fVar20 = this->OscillatorTimeRemaining;
    fVar1 = this->ActualOscillationDuration;
    local_2360 = (FName)this->_padding_;
    ::FName::ToString(&local_2360,local_2358);
    local_2378 = (double)fVar1;
    local_2370 = (double)fVar20;
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLegacyCameraShake);
    if (local_2358[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2358[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetPrivateStaticClass @ 14ad21ef0

UClass * __cdecl ULegacyCameraShake::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULegacyCameraShake.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"LegacyCameraShake",
               &Z_Registration_Info_UClass_ULegacyCameraShake.InnerSingleton,
               StaticRegisterNativesULegacyCameraShake,0x1f0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULegacyCameraShake>,
               InternalVTableHelperCtorCaller<ULegacyCameraShake>,local_res8,
               UCameraShakeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULegacyCameraShake.InnerSingleton;
}

// IsLooping @ 14ad22b00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall ULegacyCameraShake::IsLooping(ULegacyCameraShake *this)

{
  return this->ActualOscillationDuration <= 0.0 && this->ActualOscillationDuration != 0.0;
}

// ReceiveIsFinished @ 14ad23090

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall ULegacyCameraShake::ReceiveIsFinished(ULegacyCameraShake *this)

{
  undefined1 uVar1;
  UFunction *this_00;
  UClass *pUVar2;
  char local_res10 [24];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_ULegacyCameraShake_ReceiveIsFinished);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = '\0';
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res10);
    return local_res10[0] != '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x00014ad230f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x2b0))(this);
  return (bool)uVar1;
}

// ReceiveIsFinished_Implementation @ 14ad23110

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall ULegacyCameraShake::ReceiveIsFinished_Implementation(ULegacyCameraShake *this)

{
  return true;
}

// ReceivePlayShake @ 14ad23120

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall ULegacyCameraShake::ReceivePlayShake(ULegacyCameraShake *this,float param_1)

{
  UFunction *pUVar1;
  float local_res10 [6];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ULegacyCameraShake_ReceivePlayShake);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// ReceiveStopShake @ 14ad23160

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall ULegacyCameraShake::ReceiveStopShake(ULegacyCameraShake *this,bool param_1)

{
  UFunction *pUVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ULegacyCameraShake_ReceiveStopShake);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// StartLegacyCameraShake @ 14ad237a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

ULegacyCameraShake * __cdecl
ULegacyCameraShake::StartLegacyCameraShake
          (APlayerCameraManager *param_1,TSubclassOf<ULegacyCameraShake> param_2,float param_3,
          ECameraShakePlaySpace param_4,TRotator<double> *param_5)

{
  int iVar1;
  code *pcVar2;
  ULegacyCameraShake *pUVar3;
  UClass *pUVar4;
  UObject *local_res8;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  
  if (param_1 == (APlayerCameraManager *)0x0) {
    return (ULegacyCameraShake *)0x0;
  }
  local_res8 = *(UObject **)param_2.Class.field0_0x0;
  pcVar2 = *(code **)(param_1->_padding_ + 0x8d0);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  local_38 = *(undefined4 *)&param_5->Pitch;
  uStack_34 = *(undefined4 *)((longlong)&param_5->Pitch + 4);
  uStack_30 = *(undefined4 *)&param_5->Yaw;
  uStack_2c = *(undefined4 *)((longlong)&param_5->Yaw + 4);
  local_28 = param_5->Roll;
  pUVar3 = (ULegacyCameraShake *)(*pcVar2)(param_1,&local_res8,param_3,param_4,&local_38);
  if (pUVar3 != (ULegacyCameraShake *)0x0) {
    pUVar4 = StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      return pUVar3;
    }
  }
  return (ULegacyCameraShake *)0x0;
}

// StartLegacyCameraShakeFromSource @ 14ad23890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

ULegacyCameraShake * __cdecl
ULegacyCameraShake::StartLegacyCameraShakeFromSource
          (APlayerCameraManager *param_1,TSubclassOf<ULegacyCameraShake> param_2,
          UCameraShakeSourceComponent *param_3,float param_4,ECameraShakePlaySpace param_5,
          TRotator<double> *param_6)

{
  int iVar1;
  code *pcVar2;
  ULegacyCameraShake *pUVar3;
  UClass *pUVar4;
  UObject *local_res8;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  
  if (param_1 == (APlayerCameraManager *)0x0) {
    return (ULegacyCameraShake *)0x0;
  }
  local_res8 = *(UObject **)param_2.Class.field0_0x0;
  pcVar2 = *(code **)(param_1->_padding_ + 0x8d8);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  local_38 = *(undefined4 *)&param_6->Pitch;
  uStack_34 = *(undefined4 *)((longlong)&param_6->Pitch + 4);
  uStack_30 = *(undefined4 *)&param_6->Yaw;
  uStack_2c = *(undefined4 *)((longlong)&param_6->Yaw + 4);
  local_28 = param_6->Roll;
  pUVar3 = (ULegacyCameraShake *)(*pcVar2)(param_1,&local_res8,param_3,param_4,param_5,&local_38);
  if (pUVar3 != (ULegacyCameraShake *)0x0) {
    pUVar4 = StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      return pUVar3;
    }
  }
  return (ULegacyCameraShake *)0x0;
}

// StaticRegisterNativesULegacyCameraShake @ 14ad23f30

void __cdecl ULegacyCameraShake::StaticRegisterNativesULegacyCameraShake(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_ULegacyCameraShake_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execReceiveIsFinished @ 14ad27e30

void __cdecl
ULegacyCameraShake::execReceiveIsFinished(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execStartLegacyCameraShake @ 14ad27e70

void __cdecl
ULegacyCameraShake::execStartLegacyCameraShake(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  UObject *pUVar7;
  longlong *plVar8;
  longlong lVar9;
  UClass *pUVar10;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  UObject *local_res20;
  longlong *local_a8;
  UObject *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_a8 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pUVar7 = local_res20;
  uVar6 = local_res18[0];
  uVar5 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  plVar8 = local_a8;
  if (local_a8 == (longlong *)0x0) {
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_a0 = pUVar7;
  pcVar4 = *(code **)(*local_a8 + 0x8d0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_78 = local_98;
  uStack_70 = uStack_90;
  local_68 = local_88;
  lVar9 = (*pcVar4)(plVar8,&local_a0,uVar6,uVar5,&local_78);
  if (lVar9 != 0) {
    pUVar10 = StaticClass();
    iVar2 = (int)pUVar10->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar10->_padding_)) goto LAB_14ad28075;
  }
  lVar9 = 0;
LAB_14ad28075:
  *(longlong *)param_3 = lVar9;
  return;
}

// execStartLegacyCameraShakeFromSource @ 14ad280b0

void __cdecl
ULegacyCameraShake::execStartLegacyCameraShakeFromSource
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  UObject *pUVar8;
  longlong *plVar9;
  longlong lVar10;
  UClass *pUVar11;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  UObject *local_b8;
  longlong *local_b0;
  UObject *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  local_b0 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_b8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  pUVar8 = local_b8;
  uVar7 = local_res20;
  uVar6 = local_res18[0];
  uVar5 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_b8);
  }
  plVar9 = local_b0;
  if (local_b0 == (longlong *)0x0) {
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_a8 = pUVar8;
  pcVar4 = *(code **)(*local_b0 + 0x8d8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  local_88 = local_a0;
  uStack_80 = uStack_98;
  local_78 = local_90;
  lVar10 = (*pcVar4)(plVar9,&local_a8,uVar7,uVar6,uVar5,&local_88);
  if (lVar10 != 0) {
    pUVar11 = StaticClass();
    iVar2 = (int)pUVar11->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar2 * 8)
        == &pUVar11->_padding_)) goto LAB_14ad282ea;
  }
  lVar10 = 0;
LAB_14ad282ea:
  *(longlong *)param_3 = lVar10;
  return;
}

