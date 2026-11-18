// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 14

// StaticClass @ 14ac63960

UClass * __cdecl USequenceCameraShakePattern::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USequenceCameraShakePattern.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"SequenceCameraShakePattern",
               &Z_Registration_Info_UClass_USequenceCameraShakePattern.InnerSingleton,
               StaticRegisterNativesUSequenceCameraShakePattern,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USequenceCameraShakePattern>,
               InternalVTableHelperCtorCaller<USequenceCameraShakePattern>,local_res8,
               UCameraShakePattern::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequenceCameraShakePattern.InnerSingleton;
}

// USequenceCameraShakePattern @ 14ac70400

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

USequenceCameraShakePattern * __thiscall
USequenceCameraShakePattern::USequenceCameraShakePattern
          (USequenceCameraShakePattern *this,FVTableHelper *param_1)

{
  UCameraShakePattern::UCameraShakePattern((UCameraShakePattern *)this,param_1);
  this->_padding_ = (longlong)&___7USequenceCameraShakePattern__6B_;
  (this->Sequence).field0_0x0.DebugPtr = (UCameraAnimationSequence *)0x0;
  (this->Player).field0_0x0.DebugPtr = (UCameraAnimationSequencePlayer *)0x0;
  (this->CameraStandIn).field0_0x0.DebugPtr = (UCameraAnimationSequenceCameraStandIn *)0x0;
  FCameraShakeState::FCameraShakeState(&this->State);
  return this;
}

// USequenceCameraShakePattern @ 14ac70440

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

USequenceCameraShakePattern * __thiscall
USequenceCameraShakePattern::USequenceCameraShakePattern
          (USequenceCameraShakePattern *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UCameraAnimationSequenceCameraStandIn *pUVar4;
  UCameraAnimationSequencePlayer *pUVar5;
  FName local_res8;
  
  UCameraShakePattern::UCameraShakePattern((UCameraShakePattern *)this,param_1);
  this->PlayRate = 1.0;
  this->_padding_ = (longlong)&___7USequenceCameraShakePattern__6B_;
  this->Scale = 1.0;
  (this->Sequence).field0_0x0.DebugPtr = (UCameraAnimationSequence *)0x0;
  this->bRandomSegment = false;
  (this->Player).field0_0x0.DebugPtr = (UCameraAnimationSequencePlayer *)0x0;
  (this->CameraStandIn).field0_0x0.DebugPtr = (UCameraAnimationSequenceCameraStandIn *)0x0;
  this->BlendInTime = 0.2;
  this->BlendOutTime = 0.4;
  this->RandomSegmentDuration = 0.0;
  FCameraShakeState::FCameraShakeState(&this->State);
  pFVar2 = ::FName::FName(&local_res8,L"CameraStandIn");
  FVar1 = *pFVar2;
  pUVar3 = UCameraAnimationSequenceCameraStandIn::StaticClass();
  pUVar4 = (UCameraAnimationSequenceCameraStandIn *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,true);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UCameraAnimationSequenceCameraStandIn *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->CameraStandIn).field0_0x0.DebugPtr = pUVar4;
  pFVar2 = ::FName::FName(&local_res8,L"CameraShakePlayer");
  FVar1 = *pFVar2;
  pUVar3 = UCameraAnimationSequencePlayer::StaticClass();
  pUVar5 = (UCameraAnimationSequencePlayer *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,true);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UCameraAnimationSequencePlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Player).field0_0x0.DebugPtr = pUVar5;
  return this;
}

// ~USequenceCameraShakePattern @ 14ac71640

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
USequenceCameraShakePattern::~USequenceCameraShakePattern(USequenceCameraShakePattern *this)

{
  this->_padding_ = (longlong)&___7USequenceCameraShakePattern__6B_;
  UCameraShakePattern::~UCameraShakePattern((UCameraShakePattern *)this);
  return;
}

// GetPrivateStaticClass @ 14ac77cb0

UClass * __cdecl USequenceCameraShakePattern::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USequenceCameraShakePattern.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"SequenceCameraShakePattern",
               &Z_Registration_Info_UClass_USequenceCameraShakePattern.InnerSingleton,
               StaticRegisterNativesUSequenceCameraShakePattern,0x78,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USequenceCameraShakePattern>,
               InternalVTableHelperCtorCaller<USequenceCameraShakePattern>,local_res8,
               UCameraShakePattern::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USequenceCameraShakePattern.InnerSingleton;
}

// GetShakePatternInfoImpl @ 14ac78510

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
USequenceCameraShakePattern::GetShakePatternInfoImpl
          (USequenceCameraShakePattern *this,FCameraShakeInfo *param_1)

{
  UCameraAnimationSequence *pUVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong lVar9;
  char cVar10;
  float fVar11;
  undefined4 uStackX_c;
  undefined4 uStackX_24;
  int iStack_4c;
  
  pUVar1 = (this->Sequence).field0_0x0.DebugPtr;
  if (pUVar1 != (UCameraAnimationSequence *)0x0) {
    lVar9 = (**(code **)(*(longlong *)pUVar1 + 0x2f8))();
    if (lVar9 != 0) {
      fVar11 = this->PlayRate;
      if (this->PlayRate <= 0.0) {
        fVar11 = __real_3f800000;
      }
      if (this->bRandomSegment == false) {
        cVar4 = *(char *)(lVar9 + 0x128);
        iVar5 = *(int *)(lVar9 + 300);
        iVar6 = *(int *)(lVar9 + 0x134);
        uVar2 = *(undefined8 *)(lVar9 + 0x138);
        cVar10 = (char)*(undefined8 *)(lVar9 + 0x130);
        if ((cVar4 == '\x02') || (cVar10 == '\x02')) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("LowerBound.IsClosed() && UpperBound.IsClosed()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Range.h"
                             ,0x1ad,L"");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (cVar4 == '\x02') {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (cVar10 == '\x02') {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iStack_4c = (int)((ulonglong)uVar2 >> 0x20);
        uVar7 = CONCAT44(uStackX_24,
                         (((float)iStack_4c * 0.0 +
                          (float)((longlong)(iVar6 - iVar5) * (longlong)iStack_4c)) /
                         (float)(int)uVar2) / fVar11);
      }
      else {
        uVar7 = CONCAT44(uStackX_c,this->RandomSegmentDuration / fVar11);
      }
      param_1->Duration = (FCameraShakeDuration)(uVar7 & 0xffffff00ffffffff);
      param_1->BlendIn = this->BlendInTime;
      param_1->BlendOut = this->BlendOutTime;
    }
  }
  return;
}

// IsFinishedImpl @ 14ac7a610

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall USequenceCameraShakePattern::IsFinishedImpl(USequenceCameraShakePattern *this)

{
  UCameraAnimationSequencePlayer *pUVar1;
  int iVar2;
  
  pUVar1 = (this->Player).field0_0x0.DebugPtr;
  if (pUVar1 != (UCameraAnimationSequencePlayer *)0x0) {
    iVar2 = (**(code **)(pUVar1->_padding_ + 0x40))(&pUVar1->_padding_);
    if (iVar2 != 0) {
      return false;
    }
  }
  return true;
}

// ScrubShakePatternImpl @ 14ac7fce0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
USequenceCameraShakePattern::ScrubShakePatternImpl
          (USequenceCameraShakePattern *this,FCameraShakePatternScrubParams *param_1,
          FCameraShakePatternUpdateResult *param_2)

{
  FFrameRate FVar1;
  code *pcVar2;
  FFrameTime FVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  undefined1 in_XMM2 [16];
  undefined1 auVar8 [16];
  double dVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = FCameraShakeState::Scrub(&this->State,param_1->AbsoluteTime);
  if ((this->State).bIsPlaying) {
    iVar5 = (**(code **)(((this->Player).field0_0x0.DebugPtr)->_padding_ + 0x40))();
    if (iVar5 != 1) {
      UCameraAnimationSequencePlayer::Play
                ((this->Player).field0_0x0.DebugPtr,this->bRandomSegment,this->bRandomSegment);
    }
    FVar1 = (((this->Player).field0_0x0.DebugPtr)->PlayPosition).InputRate;
    dVar9 = ((double)(this->PlayRate * param_1->AbsoluteTime) * (double)FVar1.Numerator) /
            (double)FVar1.Denominator;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar9;
    auVar8 = roundpd(in_XMM2,auVar8,1);
    dVar7 = auVar8._0_8_;
    dVar9 = dVar9 - dVar7;
    if (__real_41dfffffffc00000 <= dVar7) {
      dVar7 = __real_41dfffffffc00000;
    }
    if (dVar7 <= __real_c1e0000000000000) {
      dVar7 = __real_c1e0000000000000;
    }
    iVar5 = (int)dVar9;
    fVar10 = (float)dVar9 - (float)iVar5;
    fVar11 = fVar10;
    if ((0.0 < fVar10) && (fVar11 = ::FFrameTime::MaxSubframe, fVar10 <= ::FFrameTime::MaxSubframe))
    {
      fVar11 = fVar10;
    }
    fVar10 = ::FFrameTime::MaxSubframe;
    if (fVar11 <= ::FFrameTime::MaxSubframe) {
      fVar10 = fVar11;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    FVar3.SubFrame = fVar10;
    FVar3.FrameNumber.Value = (int)dVar7 + iVar5;
    UpdateCamera(this,FVar3,&param_1->POV,param_2);
    FCameraShakePatternUpdateResult::ApplyScale(param_2,fVar6);
  }
  else {
    if (((this->Player).field0_0x0.DebugPtr == (UCameraAnimationSequencePlayer *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Player",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\SequenceCameraShake.cpp"
                           ,0x7a,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UCameraAnimationSequencePlayer::Stop((this->Player).field0_0x0.DebugPtr);
  }
  return;
}

// StartShakePatternImpl @ 14ac80330

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
USequenceCameraShakePattern::StartShakePatternImpl
          (USequenceCameraShakePattern *this,FCameraShakePatternStartParams *param_1)

{
  UTemplateSequence *pUVar1;
  UCameraAnimationSequencePlayer *pUVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  UCameraAnimationSequenceCameraStandIn *local_res8;
  
  pUVar1 = (UTemplateSequence *)(this->Sequence).field0_0x0.DebugPtr;
  if (pUVar1 == (UTemplateSequence *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<342806289358782520>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\SequenceCameraShake.cpp"
                       ,0x38,"Sequence");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    UCameraAnimationSequenceCameraStandIn::Initialize
              ((this->CameraStandIn).field0_0x0.DebugPtr,pUVar1);
    pUVar2 = (this->Player).field0_0x0.DebugPtr;
    local_res8 = (this->CameraStandIn).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8 != (UCameraAnimationSequenceCameraStandIn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    (pUVar2->BoundObjectOverride).field0_0x0.DebugPtr = (UObject *)local_res8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8 != (UCameraAnimationSequenceCameraStandIn *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FWeakObjectPtr::operator=(&(pUVar2->SpawnRegister).SpawnedObject,(FObjectPtr)&local_res8);
    fVar5 = 0.0;
    if (param_1->bOverrideDuration != false) {
      fVar5 = param_1->DurationOverride;
    }
    UCameraAnimationSequencePlayer::Initialize
              ((this->Player).field0_0x0.DebugPtr,
               (UMovieSceneSequence *)(this->Sequence).field0_0x0.DebugPtr,0,fVar5);
    UCameraAnimationSequencePlayer::Play
              ((this->Player).field0_0x0.DebugPtr,this->bRandomSegment,this->bRandomSegment);
    FCameraShakeState::Start(&this->State,(UCameraShakePattern *)this,param_1);
  }
  return;
}

// StaticRegisterNativesUSequenceCameraShakePattern @ 14ac804f0

void __cdecl USequenceCameraShakePattern::StaticRegisterNativesUSequenceCameraShakePattern(void)

{
  return;
}

// StopShakePatternImpl @ 14ac806f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
USequenceCameraShakePattern::StopShakePatternImpl
          (USequenceCameraShakePattern *this,FCameraShakePatternStopParams *param_1)

{
  UCameraAnimationSequence *pUVar1;
  UCameraAnimationSequencePlayer *this_00;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  
  pUVar1 = (this->Sequence).field0_0x0.DebugPtr;
  if (pUVar1 == (UCameraAnimationSequence *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(longlong *)pUVar1 + 0x2f8))();
  }
  this_00 = (this->Player).field0_0x0.DebugPtr;
  if ((this_00 != (UCameraAnimationSequencePlayer *)0x0) && (lVar4 != 0)) {
    if (param_1->bImmediately != false) {
      UCameraAnimationSequencePlayer::Stop(this_00);
    }
    FCameraShakeState::Stop(&this->State,param_1->bImmediately);
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<342806289358782601>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\SequenceCameraShake.cpp"
                     ,0x89,"Player != nullptr && MovieScene != nullptr");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// TeardownShakePatternImpl @ 14ac80800

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
USequenceCameraShakePattern::TeardownShakePatternImpl(USequenceCameraShakePattern *this)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  FCameraShakeState *pFVar4;
  FCameraShakeState local_28;
  
  UCameraAnimationSequencePlayer::Stop((this->Player).field0_0x0.DebugPtr);
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

// UpdateCamera @ 14ac81770

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
USequenceCameraShakePattern::UpdateCamera
          (USequenceCameraShakePattern *this,FFrameTime param_1,FMinimalViewInfo *param_2,
          FCameraShakePatternUpdateResult *param_3)

{
  UCameraAnimationSequencePlayer *pUVar1;
  UCameraAnimationSequenceCameraStandIn *pUVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  bool bVar7;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  UMovieSceneEntitySystemLinker *pUVar8;
  FMovieSceneTracksComponentTypes *pFVar9;
  TRotator<double> *pTVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  TUpdateInitialPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,TIntegerSequence<int>_>
  local_res8 [8];
  TQuat<double> local_f8;
  TRotator<double> local_c0 [7];
  
  if ((this->Sequence).field0_0x0.DebugPtr == (UCameraAnimationSequence *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<342806289358782628>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\SequenceCameraShake.cpp"
                       ,0xa4,"Sequence");
    if (bVar7) {
code_r0x00014ac817fc:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pUVar1 = (this->Player).field0_0x0.DebugPtr;
    if (pUVar1 == (UCameraAnimationSequencePlayer *)0x0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<342806289358782633>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\SequenceCameraShake.cpp"
                         ,0xa9,"Player");
      if (bVar7) goto code_r0x00014ac817fc;
    }
    else {
      bVar7 = FMovieSceneRootEvaluationTemplateInstance::IsValid(&pUVar1->RootTemplateInstance);
      if (bVar7) {
        if (((this->CameraStandIn).field0_0x0.DebugPtr ==
             (UCameraAnimationSequenceCameraStandIn *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("CameraStandIn",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\SequenceCameraShake.cpp"
                               ,0xb0,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = (FMovieSceneRootEvaluationTemplateInstance *)
                  (**(code **)(((this->Player).field0_0x0.DebugPtr)->_padding_ + 0x18))();
        pUVar8 = FMovieSceneRootEvaluationTemplateInstance::GetEntitySystemLinker(this_00);
        pUVar2 = (this->CameraStandIn).field0_0x0.DebugPtr;
        pUVar2->field_0x2c =
             pUVar2->field_0x2c ^
             (pUVar2->bConstrainAspectRatio ^ param_2->bConstrainAspectRatio) & 1;
        pUVar2->AspectRatio = param_2->AspectRatio;
        pUVar2->FieldOfView = param_2->FOV;
        FPostProcessSettings::operator=(&pUVar2->PostProcessSettings,&param_2->PostProcessSettings);
        fVar11 = pUVar2->FieldOfView * __real_3c0efa35;
        pUVar2->PostProcessBlendWeight = param_2->PostProcessBlendWeight;
        fVar13 = (pUVar2->Filmback).SensorWidth * __real_3f000000;
        fVar11 = tanf(fVar11);
        pUVar2->CurrentFocalLength = fVar13 / fVar11;
        UCameraAnimationSequenceCameraStandIn::RecalcDerivedData(pUVar2);
        UE::MovieScene::FBuiltInComponentTypes::Get();
        pFVar9 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
        if ((pUVar8 == (UMovieSceneEntitySystemLinker *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Linker",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\CameraAnimationSequencePlayer.cpp"
                               ,0xb5,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UE::MovieScene::
        TUpdateInitialPropertyValuesImpl<UE::MovieScene::FFloatPropertyTraits,TIntegerSequence<int>_>
        ::Update(local_res8,pUVar8,&pFVar9->Float);
        fVar11 = ((this->CameraStandIn).field0_0x0.DebugPtr)->FieldOfView;
        UCameraAnimationSequencePlayer::Update((this->Player).field0_0x0.DebugPtr,param_1);
        UCameraAnimationSequenceCameraStandIn::RecalcDerivedData
                  ((this->CameraStandIn).field0_0x0.DebugPtr);
        pUVar2 = (this->CameraStandIn).field0_0x0.DebugPtr;
        dVar12 = (double)this->Scale;
        dVar5 = (pUVar2->Transform).Translation.XY.m128d_f64[1];
        dVar6 = (pUVar2->Transform).Translation.ZW.m128d_f64[0];
        local_f8.X = (pUVar2->Transform).Rotation.XY.m128d_f64[0];
        local_f8.Y = (pUVar2->Transform).Rotation.XY.m128d_f64[1];
        local_f8.Z = (pUVar2->Transform).Rotation.ZW.m128d_f64[0];
        local_f8.W = (pUVar2->Transform).Rotation.ZW.m128d_f64[1];
        (param_3->Location).field0_0x0._s_0.X =
             dVar12 * (pUVar2->Transform).Translation.XY.m128d_f64[0];
        (param_3->Location).field0_0x0._s_0.Y = dVar12 * dVar5;
        (param_3->Location).field0_0x0._s_0.Z = dVar12 * dVar6;
        pTVar10 = UE::Math::TQuat<double>::Rotator(&local_f8,local_c0);
        dVar5 = (double)this->Scale;
        dVar6 = dVar5 * pTVar10->Yaw;
        dVar12 = dVar5 * pTVar10->Roll;
        (param_3->Rotation).Pitch = dVar5 * pTVar10->Pitch;
        auVar4._8_4_ = SUB84(dVar12,0);
        auVar4._0_8_ = dVar6;
        auVar4._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        (param_3->Rotation).Yaw = dVar6;
        (param_3->Rotation).Roll = (double)auVar4._8_8_;
        param_3->FOV = (((this->CameraStandIn).field0_0x0.DebugPtr)->FieldOfView - fVar11) *
                       this->Scale;
        FPostProcessSettings::operator=
                  (&param_3->PostProcessSettings,
                   &((this->CameraStandIn).field0_0x0.DebugPtr)->PostProcessSettings);
        param_3->PostProcessBlendWeight =
             ((this->CameraStandIn).field0_0x0.DebugPtr)->PostProcessBlendWeight;
      }
    }
  }
  return;
}

// UpdateShakePatternImpl @ 14ac81af0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
USequenceCameraShakePattern::UpdateShakePatternImpl
          (USequenceCameraShakePattern *this,FCameraShakePatternUpdateParams *param_1,
          FCameraShakePatternUpdateResult *param_2)

{
  UCameraAnimationSequencePlayer *pUVar1;
  FFrameRate FVar2;
  FFrameTime FVar3;
  code *pcVar4;
  bool bVar5;
  FFrameNumber FVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar15;
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  double dVar16;
  float fVar17;
  FFrameTime local_res8;
  
  fVar10 = FCameraShakeState::Update(&this->State,param_1->DeltaTime);
  if ((this->State).bIsPlaying) {
    pUVar1 = (this->Player).field0_0x0.DebugPtr;
    FVar2 = (pUVar1->PlayPosition).InputRate;
    FVar3 = (pUVar1->PlayPosition).CurrentPosition;
    dVar16 = ((double)(this->PlayRate * param_1->DeltaTime) * (double)FVar2.Numerator) /
             (double)FVar2.Denominator;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = dVar16;
    auVar14 = roundpd(in_XMM2,auVar14,1);
    dVar16 = dVar16 - auVar14._0_8_;
    uVar13 = auVar14._0_4_;
    uVar15 = auVar14._4_4_;
    if (__real_41dfffffffc00000 <= auVar14._0_8_) {
      uVar13 = SUB84(__real_41dfffffffc00000,0);
      uVar15 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
    }
    if ((double)CONCAT44(uVar15,uVar13) <= __real_c1e0000000000000) {
      uVar13 = SUB84(__real_c1e0000000000000,0);
      uVar15 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
    }
    iVar9 = (int)dVar16;
    fVar17 = (float)dVar16 - (float)iVar9;
    fVar11 = fVar17;
    if ((0.0 < fVar17) && (fVar11 = ::FFrameTime::MaxSubframe, fVar17 <= ::FFrameTime::MaxSubframe))
    {
      fVar11 = fVar17;
    }
    fVar17 = ::FFrameTime::MaxSubframe;
    if (fVar11 <= ::FFrameTime::MaxSubframe) {
      fVar17 = fVar11;
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    local_res8.SubFrame = FVar3.SubFrame;
    fVar17 = fVar17 + local_res8.SubFrame;
    FVar6 = FVar3.FrameNumber.Value;
    iVar8 = (int)fVar17;
    fVar11 = fVar17;
    if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar17)) {
      auVar12._4_4_ = fVar17;
      auVar12._0_4_ = fVar17;
      auVar12._8_8_ = 0;
      uVar7 = movmskps(FVar6.Value,auVar12);
      fVar11 = (float)(int)(iVar8 - (uVar7 & 1));
    }
    local_res8.SubFrame = fVar17 - fVar11;
    if (::FFrameTime::MaxSubframe <= fVar17 - fVar11) {
      local_res8.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_res8.SubFrame <= 0.0) {
      local_res8.SubFrame = 0.0;
    }
    local_res8.FrameNumber.Value =
         (int)(double)CONCAT44(uVar15,uVar13) +
         ((int)ROUND((fVar17 + fVar17) - __real_3f000000) >> 1) + FVar6.Value + iVar9;
    UpdateCamera(this,local_res8,&param_1->POV,param_2);
    FCameraShakePatternUpdateResult::ApplyScale(param_2,fVar10);
  }
  else {
    if (((this->Player).field0_0x0.DebugPtr == (UCameraAnimationSequencePlayer *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Player",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\SequenceCameraShake.cpp"
                           ,0x62,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UCameraAnimationSequencePlayer::Stop((this->Player).field0_0x0.DebugPtr);
  }
  return;
}

