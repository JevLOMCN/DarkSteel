// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 30

// StaticClass @ 14ac641c0

UClass * __cdecl UCameraAnimationSequencePlayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationSequencePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"CameraAnimationSequencePlayer",
               &Z_Registration_Info_UClass_UCameraAnimationSequencePlayer.InnerSingleton,
               StaticRegisterNativesUCameraAnimationSequencePlayer,0x330,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraAnimationSequencePlayer>,
               InternalVTableHelperCtorCaller<UCameraAnimationSequencePlayer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationSequencePlayer.InnerSingleton;
}

// UCameraAnimationSequencePlayer @ 14ac70160

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCameraAnimationSequencePlayer * __thiscall
UCameraAnimationSequencePlayer::UCameraAnimationSequencePlayer
          (UCameraAnimationSequencePlayer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  IMovieScenePlayer::IMovieScenePlayer((IMovieScenePlayer *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlayer__;
  FMovieSceneSpawnRegister::FMovieSceneSpawnRegister
            ((FMovieSceneSpawnRegister *)&this->SpawnRegister);
  (this->SpawnRegister)._padding_ = (longlong)&___7FSequenceCameraShakeSpawnRegister__6B_;
  (this->SpawnRegister).SpawnedObject.ObjectIndex = 0;
  (this->SpawnRegister).SpawnedObject.ObjectSerialNumber = 0;
  (this->BoundObjectOverride).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->Sequence).field0_0x0.DebugPtr = (UMovieSceneSequence *)0x0;
  FMovieSceneRootEvaluationTemplateInstance::FMovieSceneRootEvaluationTemplateInstance
            (&this->RootTemplateInstance);
  (this->PlayPosition).InputRate.Numerator = 0;
  (this->PlayPosition).InputRate.Denominator = 0;
  (this->PlayPosition).OutputRate.Numerator = 0;
  (this->PlayPosition).OutputRate.Denominator = 0;
  (this->PlayPosition).CurrentPosition.FrameNumber = 0;
  (this->PlayPosition).CurrentPosition.SubFrame = 0.0;
  (this->PlayPosition).PreviousPlayEvalPosition.bIsSet = false;
  (this->PlayPosition).LastRange.bIsSet = false;
  this->StartFrame = 0;
  (this->DurationFrames).FrameNumber = 0;
  *(undefined8 *)&(this->DurationFrames).SubFrame = 0;
  *(undefined8 *)&(this->TotalDurationFrames).SubFrame = 0;
  (this->PlayPosition).EvaluationType = WithSubFrames;
  return this;
}

// UCameraAnimationSequencePlayer @ 14ac70230

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCameraAnimationSequencePlayer * __thiscall
UCameraAnimationSequencePlayer::UCameraAnimationSequencePlayer
          (UCameraAnimationSequencePlayer *this,FObjectInitializer *param_1)

{
  FMovieScenePlaybackPosition *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  IMovieScenePlayer::IMovieScenePlayer((IMovieScenePlayer *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlayer__;
  FMovieSceneSpawnRegister::FMovieSceneSpawnRegister
            ((FMovieSceneSpawnRegister *)&this->SpawnRegister);
  (this->SpawnRegister)._padding_ = (longlong)&___7FSequenceCameraShakeSpawnRegister__6B_;
  (this->SpawnRegister).SpawnedObject.ObjectIndex = 0;
  (this->SpawnRegister).SpawnedObject.ObjectSerialNumber = 0;
  (this->BoundObjectOverride).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->Sequence).field0_0x0.DebugPtr = (UMovieSceneSequence *)0x0;
  FMovieSceneRootEvaluationTemplateInstance::FMovieSceneRootEvaluationTemplateInstance
            (&this->RootTemplateInstance);
  this_00 = &this->PlayPosition;
  this->StartFrame = 0;
  (this->DurationFrames).FrameNumber = 0;
  (this_00->InputRate).Numerator = 0;
  (this_00->InputRate).Denominator = 0;
  (this->PlayPosition).OutputRate.Numerator = 0;
  (this->PlayPosition).OutputRate.Denominator = 0;
  (this->PlayPosition).EvaluationType = WithSubFrames;
  (this->PlayPosition).CurrentPosition.FrameNumber = 0;
  (this->PlayPosition).CurrentPosition.SubFrame = 0.0;
  (this->PlayPosition).PreviousPlayEvalPosition.bIsSet = false;
  (this->PlayPosition).LastRange.bIsSet = false;
  *(undefined8 *)&(this->DurationFrames).SubFrame = 0;
  *(undefined8 *)&(this->TotalDurationFrames).SubFrame = 0;
  (this->Status).Value = '\0';
  FMovieScenePlaybackPosition::Reset(this_00,(FFrameTime)0x0);
  return this;
}

// ~UCameraAnimationSequencePlayer @ 14ac71590

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCameraAnimationSequencePlayer::~UCameraAnimationSequencePlayer
          (UCameraAnimationSequencePlayer *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlayer__;
  FMovieSceneRootEvaluationTemplateInstance::~FMovieSceneRootEvaluationTemplateInstance
            (&this->RootTemplateInstance);
  FMovieSceneSpawnRegister::~FMovieSceneSpawnRegister
            ((FMovieSceneSpawnRegister *)&this->SpawnRegister);
  IMovieScenePlayer::~IMovieScenePlayer((IMovieScenePlayer *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// AsUObject @ 14ac73880

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall UCameraAnimationSequencePlayer::AsUObject(UCameraAnimationSequencePlayer *this)

{
  return (UObject *)&this[-1].PlayPosition.LastRange.TypedValue.Direction;
}

// BeginDestroy @ 14ac73890

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCameraAnimationSequencePlayer::BeginDestroy(UCameraAnimationSequencePlayer *this)

{
  FMovieSceneRootEvaluationTemplateInstance::TearDown(&this->RootTemplateInstance);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CanUpdateCameraCut @ 14ac73d40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UCameraAnimationSequencePlayer::CanUpdateCameraCut(UCameraAnimationSequencePlayer *this)

{
  return false;
}

// ConstructEntitySystemLinker @ 14ac73d50

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntitySystemLinker * __thiscall
UCameraAnimationSequencePlayer::ConstructEntitySystemLinker(UCameraAnimationSequencePlayer *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  USubsystem *pUVar7;
  FName *pFVar8;
  UMovieSceneEntitySystemLinker *pUVar9;
  TSharedRef<FMovieSceneEntitySystemRunner,1> *pTVar10;
  char *pcVar11;
  UPackage *pUVar12;
  atomic<unsigned_char> *paVar13;
  int iVar14;
  FName local_res8;
  FName local_res10;
  FMovieSceneEntitySystemRunner *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<FMovieSceneEntitySystemRunner,1> local_18;
  
  lVar4 = (**(code **)(*(longlong *)&this[-1].PlayPosition.LastRange.TypedValue.Direction + 0x180))
                    (&this[-1].PlayPosition.LastRange.TypedValue.Direction);
  if (lVar4 != 0) {
    pUVar5 = UCameraAnimationSequenceSubsystem::StaticClass();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar5 != (UClass *)0x0) goto LAB_14ac73d99;
LAB_14ac73dc7:
      pUVar5 = (UClass *)0x0;
    }
    else {
      if (pUVar5 == (UClass *)0x0) goto LAB_14ac73dc7;
      UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_14ac73d99:
      pUVar6 = UCameraAnimationSequenceSubsystem::StaticClass();
      if (pUVar6 == (UClass *)0x0) goto LAB_14ac73dc7;
      iVar14 = (int)pUVar6->_padding_;
      if (((int)pUVar5->_padding_ < iVar14) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar14 * 8) !=
          &pUVar6->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14ac73dc7;
    }
    pUVar7 = FSubsystemCollectionBase::GetSubsystemInternal
                       ((FSubsystemCollectionBase *)(lVar4 + 0xac0),pUVar5);
    if (pUVar7 != (USubsystem *)0x0) {
      if (pUVar7[1]._padding_ == 0) {
        pFVar8 = ::FName::FName(&local_res8,L"CameraAnimationSequenceSubsystemLinker");
        pUVar9 = UCameraAnimationSequenceSubsystem::CreateLinker((UObject *)pUVar7,*pFVar8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar9 != (UMovieSceneEntitySystemLinker *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        pUVar7[1]._padding_ = (longlong)pUVar9;
        pTVar10 = UMovieSceneEntitySystemLinker::GetRunner(pUVar9,&local_18);
        local_20.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
        local_28 = pTVar10->Object;
        if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_20.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((FMovieSceneEntitySystemRunner **)&pUVar7[1]._padding_ != &local_28) {
          pUVar7[1]._padding_ = (longlong)local_28;
          local_28 = (FMovieSceneEntitySystemRunner *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)&pUVar7[1]._padding_,&local_20);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_20.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
      }
      if ((UMovieSceneEntitySystemLinker *)pUVar7[1]._padding_ !=
          (UMovieSceneEntitySystemLinker *)0x0) {
        return (UMovieSceneEntitySystemLinker *)pUVar7[1]._padding_;
      }
      pcVar11 = "Linker";
      iVar14 = 0x100;
      paVar13 = &bGEnsureHasExecuted<5017693477396283648>;
      goto LAB_14ac73ebe;
    }
  }
  pcVar11 = "Subsystem";
  iVar14 = 0xfd;
  paVar13 = &bGEnsureHasExecuted<5017693477396283645>;
LAB_14ac73ebe:
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar13,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\CameraAnimationSequencePlayer.cpp"
                     ,iVar14,pcVar11);
  if (!bVar3) {
    pFVar8 = ::FName::FName(&local_res10,L"StandaloneCameraAnimationLinker");
    FVar1 = *pFVar8;
    pUVar12 = GetTransientPackage();
    pUVar9 = UCameraAnimationSequenceSubsystem::CreateLinker((UObject *)pUVar12,FVar1);
    return pUVar9;
  }
  pcVar2 = (code *)swi(3);
  pUVar9 = (UMovieSceneEntitySystemLinker *)(*pcVar2)();
  return pUVar9;
}

// GetCurrentPosition @ 14ac77290

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FFrameTime __thiscall
UCameraAnimationSequencePlayer::GetCurrentPosition(UCameraAnimationSequencePlayer *this)

{
  FFrameTime in_RDX;
  
  *(FFrameTime *)in_RDX = (this->PlayPosition).CurrentPosition;
  return in_RDX;
}

// GetDuration @ 14ac772b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FFrameTime __thiscall
UCameraAnimationSequencePlayer::GetDuration(UCameraAnimationSequencePlayer *this)

{
  FFrameTime in_RDX;
  
  *(FFrameTime *)in_RDX = this->DurationFrames;
  return in_RDX;
}

// GetEvaluationTemplate @ 14ac772d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneRootEvaluationTemplateInstance * __thiscall
UCameraAnimationSequencePlayer::GetEvaluationTemplate(UCameraAnimationSequencePlayer *this)

{
  return (FMovieSceneRootEvaluationTemplateInstance *)&(this->SpawnRegister)._padding_;
}

// GetPlaybackStatus @ 14ac77580

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
UCameraAnimationSequencePlayer::GetPlaybackStatus(UCameraAnimationSequencePlayer *this)

{
  return (Type)(byte)(this->PlayPosition).LastRange.TypedValue.CurrentFrameRate.Denominator;
}

// GetPrivateStaticClass @ 14ac77a80

UClass * __cdecl UCameraAnimationSequencePlayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraAnimationSequencePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TemplateSequence",L"CameraAnimationSequencePlayer",
               &Z_Registration_Info_UClass_UCameraAnimationSequencePlayer.InnerSingleton,
               StaticRegisterNativesUCameraAnimationSequencePlayer,0x330,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraAnimationSequencePlayer>,
               InternalVTableHelperCtorCaller<UCameraAnimationSequencePlayer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraAnimationSequencePlayer.InnerSingleton;
}

// GetSpawnRegister @ 14ac78710

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneSpawnRegister * __thiscall
UCameraAnimationSequencePlayer::GetSpawnRegister(UCameraAnimationSequencePlayer *this)

{
  return (FMovieSceneSpawnRegister *)&this->_padding_;
}

// GetViewportSettings @ 14ac78740

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCameraAnimationSequencePlayer::GetViewportSettings
          (UCameraAnimationSequencePlayer *this,
          TMap<FViewportClient_*,EMovieSceneViewportParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FViewportClient_*,EMovieSceneViewportParams,0>_>
          *param_1)

{
  return;
}

// Initialize @ 14ac79530

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCameraAnimationSequencePlayer::Initialize
          (UCameraAnimationSequencePlayer *this,UMovieSceneSequence *param_1,int param_2,
          float param_3)

{
  int iVar1;
  FFrameRate FVar2;
  FFrameRate FVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  FFrameRate FVar7;
  FFrameRate FVar8;
  FFrameTime FVar9;
  bool bVar10;
  UMovieSceneEntitySystemLinker *pUVar11;
  longlong lVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  USubsystem *pUVar15;
  FFrameNumber FVar16;
  char cVar17;
  longlong lVar18;
  int iVar19;
  double dVar20;
  undefined1 in_XMM2 [16];
  undefined1 auVar21 [16];
  float fVar22;
  double dVar23;
  float fVar24;
  FFrameTime local_res8;
  FFrameTime local_res10;
  uint local_b8 [2];
  uint local_b0;
  undefined4 uStack_ac;
  uint local_a8;
  undefined4 uStack_a4;
  code *local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined1 local_88 [8];
  undefined1 local_80 [72];
  
  if ((param_1 == (UMovieSceneSequence *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InSequence",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\CameraAnimationSequencePlayer.cpp"
                          ,0x129,L"Invalid sequence given to player"), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->Sequence).field0_0x0.DebugPtr != (UMovieSceneSequence *)0x0) {
    Stop(this);
    pUVar11 = FMovieSceneRootEvaluationTemplateInstance::GetEntitySystemLinker
                        (&this->RootTemplateInstance);
    if (pUVar11 != (UMovieSceneEntitySystemLinker *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &(pUVar11->Events).AbandonLinker,this);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMovieSceneSequence *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Sequence).field0_0x0.DebugPtr = param_1;
  lVar12 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
  if (lVar12 == 0) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<5017693477396283704>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\CameraAnimationSequencePlayer.cpp"
                        ,0x138,"MovieScene");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_b8[0] = 0;
    (this->StartFrame).Value = 0;
    (this->DurationFrames).FrameNumber = 0;
    (this->DurationFrames).SubFrame = 0.0;
    (this->TotalDurationFrames).FrameNumber = 0;
    (this->TotalDurationFrames).SubFrame = 0.0;
    local_res10.FrameNumber.Value = 0;
    local_res10.SubFrame = 0.0;
    this->bDurationRequiresLooping = false;
  }
  else {
    FVar2 = *(FFrameRate *)(lVar12 + 0x140);
    FVar3 = *(FFrameRate *)(lVar12 + 0x138);
    FMovieScenePlaybackPosition::SetTimeBase
              (&this->PlayPosition,FVar2,FVar3,*(EMovieSceneEvaluationType *)(lVar12 + 0x148));
    iVar19 = *(int *)(lVar12 + 300);
    local_98 = *(code **)(lVar12 + 0x128);
    uStack_90 = *(undefined4 *)(lVar12 + 0x130);
    uVar6 = *(uint *)(lVar12 + 0x134);
    cVar17 = (char)*(undefined4 *)(lVar12 + 0x128);
    uStack_8c = uVar6;
    if ((cVar17 == '\x02') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InLowerBound.IsOpen()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                            ,0x2c,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar18 = 0;
    lVar12 = lVar18;
    if (cVar17 == '\0') {
      lVar12 = 4;
    }
    iVar1 = *(int *)((longlong)
                     &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                      ::__l2::Offsets + lVar12);
    if ((cVar17 == '\x02') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar7.Denominator = 0;
    FVar7.Numerator = iVar19 + iVar1;
    ConvertFrameTime((FFrameTime)local_b8,FVar7,FVar3);
    cVar17 = (char)uStack_90;
    if ((cVar17 == '\x02') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InUpperBound.IsOpen()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                            ,0x44,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (cVar17 == '\x01') {
      lVar18 = 4;
    }
    iVar19 = *(int *)((longlong)
                      &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                       ::__l2::Offsets + lVar18);
    if ((cVar17 == '\x02') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar8.Denominator = 0;
    FVar8.Numerator = uVar6 + iVar19;
    ConvertFrameTime((FFrameTime)local_88,FVar8,FVar3);
    if (0 < param_2) {
      local_b8[0] = local_b8[0] + param_2;
    }
    uStack_ac = 0;
    local_res10.SubFrame = 0.0;
    local_res10.FrameNumber.Value = local_b8[0];
    local_res8.SubFrame = local_88._4_4_;
    (this->StartFrame).Value = local_b8[0];
    auVar21 = roundps(in_XMM2,ZEXT416((uint)(local_res8.SubFrame - 0.0)),1);
    fVar22 = (local_res8.SubFrame - 0.0) - auVar21._0_4_;
    if (::FFrameTime::MaxSubframe <= fVar22) {
      fVar22 = ::FFrameTime::MaxSubframe;
    }
    FVar16.Value = (int)auVar21._0_4_ + (local_88._0_4_ - local_b8[0]);
    this->bDurationRequiresLooping = false;
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
    local_res8.SubFrame = fVar22;
    local_res8.FrameNumber.Value = FVar16.Value;
    this->DurationFrames = local_res8;
    this->TotalDurationFrames = local_res8;
    local_b0 = local_b8[0];
    if (0.0 < param_3) {
      dVar23 = ((double)FVar2.Numerator * (double)param_3) / (double)FVar2.Denominator;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = dVar23;
      auVar21 = roundpd(auVar21,auVar5,1);
      dVar20 = auVar21._0_8_;
      dVar23 = dVar23 - dVar20;
      if (__real_41dfffffffc00000 <= dVar20) {
        dVar20 = __real_41dfffffffc00000;
      }
      if (dVar20 <= __real_c1e0000000000000) {
        dVar20 = __real_c1e0000000000000;
      }
      iVar19 = (int)dVar23;
      fVar24 = (float)dVar23 - (float)iVar19;
      if ((0.0 < fVar24) && (::FFrameTime::MaxSubframe <= fVar24)) {
        fVar24 = ::FFrameTime::MaxSubframe;
      }
      if (::FFrameTime::MaxSubframe <= fVar24) {
        fVar24 = ::FFrameTime::MaxSubframe;
      }
      local_res10 = local_res8;
      if (fVar24 <= 0.0) {
        fVar24 = 0.0;
      }
      local_res8.FrameNumber.Value = iVar19 + (int)dVar20;
      local_res8.SubFrame = fVar24;
      if ((FVar16.Value < local_res8.FrameNumber.Value) ||
         ((local_res8.FrameNumber.Value == FVar16.Value && (fVar22 < fVar24)))) {
        this->TotalDurationFrames = local_res8;
        this->bDurationRequiresLooping = true;
      }
      else {
        this->DurationFrames = local_res8;
      }
    }
  }
  uStack_a4 = 0;
  FVar9.SubFrame = 0.0;
  FVar9.FrameNumber.Value = local_b8[0];
  local_a8 = local_b8[0];
  FMovieScenePlaybackPosition::Reset(&this->PlayPosition,FVar9);
  this->LoopsPlayed = 0;
  lVar12 = (**(code **)(this->_padding_ + 0x180))(this);
  if (lVar12 != 0) {
    pUVar13 = UCameraAnimationSequenceSubsystem::StaticClass();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar13 != (UClass *)0x0) goto LAB_14ac79a0e;
LAB_14ac79a3c:
      pUVar13 = (UClass *)0x0;
    }
    else {
      if (pUVar13 == (UClass *)0x0) goto LAB_14ac79a3c;
      UE::GC::MarkAsReachable((UObject *)pUVar13);
LAB_14ac79a0e:
      pUVar14 = UCameraAnimationSequenceSubsystem::StaticClass();
      if (pUVar14 == (UClass *)0x0) goto LAB_14ac79a3c;
      iVar19 = (int)pUVar14->_padding_;
      if (((int)pUVar13->_padding_ < iVar19) ||
         ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar19 * 8) !=
          &pUVar14->_padding_)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (!bVar10) goto LAB_14ac79a3c;
    }
    pUVar15 = FSubsystemCollectionBase::GetSubsystemInternal
                        ((FSubsystemCollectionBase *)(lVar12 + 0xac0),pUVar13);
    if (pUVar15 != (USubsystem *)0x0) goto LAB_14ac79a60;
  }
  `UCameraAnimationSequencePlayer::Initialize'::__l2::<lambda_1>::operator()(&local_res8);
LAB_14ac79a60:
  FMovieSceneRootEvaluationTemplateInstance::Initialize
            (&this->RootTemplateInstance,(this->Sequence).field0_0x0.DebugPtr,
             (IMovieScenePlayer *)&this->_padding_,(UMovieSceneCompiledDataManager *)0x0);
  pUVar11 = FMovieSceneRootEvaluationTemplateInstance::GetEntitySystemLinker
                      (&this->RootTemplateInstance);
  if (pUVar11 != (UMovieSceneEntitySystemLinker *)0x0) {
    uStack_90 = 0;
    local_98 = OnAbandonLinker;
    local_80._16_8_ = (ulonglong)uStack_8c << 0x20;
    local_80._8_8_ = OnAbandonLinker;
    TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
    ::AddUObject<UCameraAnimationSequencePlayer>
              ((TMulticastDelegateRegistration<void___cdecl(UMovieSceneEntitySystemLinker_*),FDefaultDelegateUserPolicy>
                *)&(pUVar11->Events).AbandonLinker,(UCameraAnimationSequencePlayer *)local_80,
               (pmf_c1589270 *)this);
  }
  return;
}

// IsDestructionThreadSafe @ 14ac7a600

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UCameraAnimationSequencePlayer::IsDestructionThreadSafe(UCameraAnimationSequencePlayer *this)

{
  return false;
}

// IsValid @ 14ac7a6c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UCameraAnimationSequencePlayer::IsValid(UCameraAnimationSequencePlayer *this)

{
  bool bVar1;
  
  bVar1 = FMovieSceneRootEvaluationTemplateInstance::IsValid(&this->RootTemplateInstance);
  return bVar1;
}

// Jump @ 14ac7a6e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCameraAnimationSequencePlayer::Jump(UCameraAnimationSequencePlayer *this,FFrameTime param_1)

{
  FMovieSceneEvaluationRange local_38;
  
  FMovieScenePlaybackPosition::JumpTo(&this->PlayPosition,&local_38,param_1,Forwards);
  return;
}

// OnAbandonLinker @ 14ac7ade0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCameraAnimationSequencePlayer::OnAbandonLinker
          (UCameraAnimationSequencePlayer *this,UMovieSceneEntitySystemLinker *param_1)

{
  FMovieSceneRootEvaluationTemplateInstance::TearDown(&this->RootTemplateInstance);
  return;
}

// Play @ 14ac7c6c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCameraAnimationSequencePlayer::Play(UCameraAnimationSequencePlayer *this,bool param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  FFrameTime FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (((this->Sequence).field0_0x0.DebugPtr == (UMovieSceneSequence *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Sequence",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\CameraAnimationSequencePlayer.cpp"
                         ,0x187,
                         L"No sequence is set on this player, did you forget to call Initialize?"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar4 = FMovieSceneRootEvaluationTemplateInstance::IsValid(&this->RootTemplateInstance);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RootTemplateInstance.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\CameraAnimationSequencePlayer.cpp"
                         ,0x188,
                         L"No evaluation template was created, did you forget to call Initialize?"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->Status).Value != '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Status == EMovieScenePlayerStatus::Stopped",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\CameraAnimationSequencePlayer.cpp"
                         ,0x189,L"This player must be stopped before it can play"), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2) {
    iVar1 = (this->DurationFrames).FrameNumber.Value;
    if (iVar1 < 1) {
      iVar7 = 0;
    }
    else {
      uVar5 = rand();
      iVar6 = (int)((float)(uVar5 & 0x7fff) * (float)iVar1 * __real_38000100);
      iVar7 = iVar1 + -1;
      if (iVar6 < iVar1 + -1) {
        iVar7 = iVar6;
      }
    }
    FVar3.SubFrame = 0.0;
    FVar3.FrameNumber.Value = (this->StartFrame).Value + iVar7;
    FMovieScenePlaybackPosition::Reset(&this->PlayPosition,FVar3);
  }
  this->bIsLooping = param_1;
  (this->Status).Value = '\x01';
  return;
}

// ResolveBoundObjects @ 14ac7ed20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCameraAnimationSequencePlayer::ResolveBoundObjects
          (UCameraAnimationSequencePlayer *this,FResolveParams *param_1,FGuid *param_2,
          FMovieSceneSequenceID param_3,UMovieSceneSequence *param_4,
          TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_5)

{
  ForElementType<UObject_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<UObject_*> FVar5;
  longlong local_18 [2];
  
  local_18[0] = (this->SpawnRegister)._padding_;
  if (local_18[0] != 0) {
    FVar1 = (param_5->AllocatorInstance).SecondaryData;
    FVar5 = (ForElementType<UObject_*>)param_5;
    if (FVar1 != (ForElementType<UObject_*>)0x0) {
      FVar5 = FVar1;
    }
    if ((ulonglong)FVar5 <= local_18) {
      FVar5 = (ForElementType<UObject_*>)param_5;
      if (FVar1 != (ForElementType<UObject_*>)0x0) {
        FVar5 = FVar1;
      }
      if ((local_18 < (longlong *)((longlong)FVar5 + (longlong)param_5->ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = param_5->ArrayNum;
    if (iVar4 == param_5->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                        (0x808,&param_5->AllocatorInstance,&param_5->ArrayMax);
    }
    param_5->ArrayNum = iVar4 + 1;
    FVar1 = (param_5->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<UObject_*>)0x0) {
      param_5 = (TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)FVar1;
    }
    *(longlong *)((longlong)param_5 + (longlong)iVar4 * 8) = local_18[0];
  }
  return;
}

// SetBoundObjectOverride @ 14ac7ffa0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCameraAnimationSequencePlayer::SetBoundObjectOverride
          (UCameraAnimationSequencePlayer *this,UObject *param_1)

{
  UObject *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  (this->BoundObjectOverride).field0_0x0.DebugPtr = param_1;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&(this->SpawnRegister).SpawnedObject,(FObjectPtr)&local_res8);
  return;
}

// SetPlaybackStatus @ 14ac801c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCameraAnimationSequencePlayer::SetPlaybackStatus(UCameraAnimationSequencePlayer *this,Type param_1)

{
  return;
}

// SetViewportSettings @ 14ac802d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCameraAnimationSequencePlayer::SetViewportSettings
          (UCameraAnimationSequencePlayer *this,
          TMap<FViewportClient_*,EMovieSceneViewportParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FViewportClient_*,EMovieSceneViewportParams,0>_>
          *param_1)

{
  return;
}

// StaticRegisterNativesUCameraAnimationSequencePlayer @ 14ac804c0

void __cdecl
UCameraAnimationSequencePlayer::StaticRegisterNativesUCameraAnimationSequencePlayer(void)

{
  return;
}

// Stop @ 14ac805e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCameraAnimationSequencePlayer::Stop(UCameraAnimationSequencePlayer *this)

{
  code *pcVar1;
  FFrameTime FVar2;
  FMovieSceneEntitySystemRunner *this_00;
  bool bVar3;
  FRootInstanceHandle FVar4;
  undefined4 extraout_var;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> local_18;
  
  if ((this->Status).Value != '\0') {
    (this->Status).Value = '\0';
    FVar2.SubFrame = 0.0;
    FVar2.FrameNumber.Value = (this->StartFrame).Value;
    FMovieScenePlaybackPosition::Reset(&this->PlayPosition,FVar2);
    FMovieSceneRootEvaluationTemplateInstance::GetRunner(&this->RootTemplateInstance,&local_18);
    if (local_18.Object != (FMovieSceneEntitySystemRunner *)0x0) {
      if ((local_18.Object == (FMovieSceneEntitySystemRunner *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = local_18.Object;
      FVar4 = FMovieSceneRootEvaluationTemplateInstance::GetRootInstanceHandle
                        (&this->RootTemplateInstance);
      bVar3 = FMovieSceneEntitySystemRunner::QueueFinalUpdate
                        (this_00,*(FInstanceHandle *)CONCAT44(extraout_var,FVar4));
      if (bVar3) {
        if ((local_18.Object == (FMovieSceneEntitySystemRunner *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FMovieSceneEntitySystemRunner::Flush(local_18.Object,0.0,None);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// Update @ 14ac81190

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCameraAnimationSequencePlayer::Update(UCameraAnimationSequencePlayer *this,FFrameTime param_1)

{
  byte bVar1;
  code *pcVar2;
  FFrameTime FVar3;
  FMovieSceneEntitySystemRunner *this_00;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FFrameNumber FVar8;
  FRootInstanceHandle FVar9;
  undefined4 extraout_var;
  int iVar10;
  int iVar11;
  char *this_01;
  FFrameTime FVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 in_XMM3 [16];
  undefined1 auVar24 [16];
  FFrameTime local_res10;
  FFrameTime local_148;
  float fStack_13c;
  float fStack_134;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> local_130;
  uint local_120;
  float fStack_11c;
  uint local_118;
  undefined4 uStack_114;
  FFrameTime local_110;
  FMovieSceneContext local_108;
  FMovieSceneEvaluationRange local_88 [2];
  
  if (((this->Status).Value != '\x01') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Status == EMovieScenePlayerStatus::Playing",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\CameraAnimationSequencePlayer.cpp"
                         ,0x19c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_01 = (char *)&this->RootTemplateInstance;
  bVar4 = FMovieSceneRootEvaluationTemplateInstance::IsValid
                    ((FMovieSceneRootEvaluationTemplateInstance *)this_01);
  if (!bVar4) {
    this_01 = "RootTemplateInstance.IsValid()";
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RootTemplateInstance.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\CameraAnimationSequencePlayer.cpp"
                       ,0x19d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  fVar15 = __real_3f000000;
  bVar4 = false;
  local_res10.FrameNumber = param_1.FrameNumber.Value;
  fStack_13c = param_1.SubFrame;
  if ((this->bIsLooping == false) && (this->bDurationRequiresLooping == false)) {
    iVar11 = (this->StartFrame).Value;
    FVar12 = this->DurationFrames;
    local_148.SubFrame = FVar12.SubFrame;
    fVar19 = local_148.SubFrame + 0.0;
    iVar6 = ((int)ROUND((fVar19 + fVar19) - __real_3f000000) >> 1) + FVar12.FrameNumber.Value.Value
            + iVar11;
    if (iVar6 < local_res10.FrameNumber.Value) {
LAB_14ac8130c:
      fVar14 = local_148.SubFrame + 0.0;
      local_res10.FrameNumber.Value =
           ((int)ROUND((fVar14 + fVar14) - __real_3f000000) >> 1) + FVar12.FrameNumber.Value.Value +
           iVar11;
      iVar11 = (int)fVar14;
      fVar19 = fVar14;
      if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar14)) {
        auVar17._4_4_ = fVar14;
        auVar17._0_4_ = fVar14;
        auVar17._8_8_ = 0;
        uVar7 = movmskps(local_res10.FrameNumber.Value,auVar17);
        fVar19 = (float)(int)(iVar11 - (uVar7 & 1));
      }
      bVar4 = true;
      local_148.SubFrame = fVar14 - fVar19;
      if (::FFrameTime::MaxSubframe <= fVar14 - fVar19) {
        local_148.SubFrame = ::FFrameTime::MaxSubframe;
      }
      if (local_148.SubFrame <= 0.0) {
        local_148.SubFrame = 0.0;
      }
      local_148.FrameNumber.Value = local_res10.FrameNumber.Value;
      param_1 = local_148;
    }
    else if (local_res10.FrameNumber.Value == iVar6) {
      iVar10 = (int)fVar19;
      fVar14 = fVar19;
      if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar19)) {
        auVar16._4_4_ = fVar19;
        auVar16._0_4_ = fVar19;
        auVar16._8_8_ = 0;
        uVar7 = movmskps(iVar6,auVar16);
        fVar14 = (float)(int)(iVar10 - (uVar7 & 1));
      }
      fVar20 = fVar19 - fVar14;
      if (::FFrameTime::MaxSubframe <= fVar19 - fVar14) {
        fVar20 = ::FFrameTime::MaxSubframe;
      }
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      if (fVar20 <= fStack_13c) goto LAB_14ac8130c;
    }
  }
  else {
    fStack_11c = 0.0;
    local_res10.SubFrame = fStack_13c;
    while( true ) {
      local_120 = (this->StartFrame).Value;
      FVar12 = this->DurationFrames;
      fStack_13c = FVar12.SubFrame;
      fVar14 = fStack_13c + fStack_11c;
      iVar11 = ((int)ROUND((fVar14 + fVar14) - fVar15) >> 1) + FVar12.FrameNumber.Value.Value +
               local_120;
      iVar6 = (int)fVar14;
      fVar19 = fVar14;
      if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar14)) {
        auVar24._4_4_ = fVar14;
        auVar24._0_4_ = fVar14;
        auVar24._8_8_ = 0;
        uVar7 = movmskps((int)this_01,auVar24);
        fVar19 = (float)(int)(iVar6 - (uVar7 & 1));
      }
      fVar20 = fVar14 - fVar19;
      if (::FFrameTime::MaxSubframe <= fVar14 - fVar19) {
        fVar20 = ::FFrameTime::MaxSubframe;
      }
      auVar24 = ZEXT416((uint)fVar20);
      if (fVar20 <= 0.0) {
        auVar24 = ZEXT816(0) << 0x20;
      }
      if ((local_res10.FrameNumber.Value <= iVar11) &&
         ((local_res10.FrameNumber.Value != iVar11 ||
          (fStack_134 = param_1.SubFrame, fStack_134 < auVar24._0_4_)))) break;
      uStack_114 = 0;
      FVar3.SubFrame = 0.0;
      FVar3.FrameNumber.Value = local_120;
      auVar24 = roundps(auVar24,ZEXT416((uint)(local_res10.SubFrame - fStack_13c)),1);
      local_res10.SubFrame = (local_res10.SubFrame - fStack_13c) - auVar24._0_4_;
      local_res10.FrameNumber.Value =
           (int)auVar24._0_4_ + (local_res10.FrameNumber.Value - FVar12.FrameNumber.Value);
      this_01 = (char *)&this->PlayPosition;
      local_118 = local_120;
      FMovieScenePlaybackPosition::Reset((FMovieScenePlaybackPosition *)this_01,FVar3);
      this->LoopsPlayed = this->LoopsPlayed + 1;
      param_1 = local_res10;
    }
  }
  if (this->bDurationRequiresLooping == false) goto LAB_14ac815d7;
  local_110.SubFrame = FVar12.SubFrame;
  dVar21 = ((double)FVar12.FrameNumber.Value.Value + (double)local_110.SubFrame) *
           (double)this->LoopsPlayed;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar21;
  auVar24 = roundpd(in_XMM3,auVar13,1);
  dVar22 = auVar24._0_8_;
  dVar23 = dVar22;
  if (__real_41dfffffffc00000 <= dVar22) {
    dVar23 = __real_41dfffffffc00000;
  }
  fVar19 = (float)(dVar21 - dVar22);
  if (dVar23 <= __real_c1e0000000000000) {
    dVar23 = __real_c1e0000000000000;
  }
  if (::FFrameTime::MaxSubframe <= fVar19) {
    fVar19 = ::FFrameTime::MaxSubframe;
  }
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  if (::FFrameTime::MaxSubframe <= fVar19) {
    fVar19 = ::FFrameTime::MaxSubframe;
  }
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  fStack_134 = param_1.SubFrame;
  fVar19 = fVar19 + fStack_134;
  iVar11 = (int)dVar23 +
           ((int)ROUND((fVar19 + fVar19) - fVar15) >> 1) + local_res10.FrameNumber.Value;
  FVar8 = (this->TotalDurationFrames).FrameNumber;
  local_110 = FVar12;
  if (iVar11 <= FVar8.Value) {
    if (iVar11 != FVar8.Value) goto LAB_14ac815d7;
    iVar11 = (int)fVar19;
    fVar15 = fVar19;
    if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar19)) {
      auVar18._4_4_ = fVar19;
      auVar18._0_4_ = fVar19;
      auVar18._8_8_ = 0;
      uVar7 = movmskps(FVar8.Value,auVar18);
      fVar15 = (float)(int)(iVar11 - (uVar7 & 1));
    }
    fVar14 = fVar19 - fVar15;
    if (::FFrameTime::MaxSubframe <= fVar19 - fVar15) {
      fVar14 = ::FFrameTime::MaxSubframe;
    }
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    fStack_134 = (this->TotalDurationFrames).SubFrame;
    if (fVar14 < fStack_134) goto LAB_14ac815d7;
  }
  bVar4 = true;
LAB_14ac815d7:
  FMovieSceneRootEvaluationTemplateInstance::GetRunner(&this->RootTemplateInstance,&local_130);
  if (local_130.Object != (FMovieSceneEntitySystemRunner *)0x0) {
    FMovieScenePlaybackPosition::PlayTo(&this->PlayPosition,local_88,param_1,Forwards);
    bVar1 = (this->Status).Value;
    local_108.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
    local_108.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
    local_108._padding_._0_1_ = local_88[0].EvaluationRange.LowerBound.Type.Value;
    local_108._padding_._1_3_ = local_88[0].EvaluationRange.LowerBound._1_3_;
    local_108._padding_._4_4_ = local_88[0].EvaluationRange.LowerBound.Value.FrameNumber.Value;
    local_108._padding_._0_4_ = local_88[0].EvaluationRange.LowerBound.Value.SubFrame;
    local_108._padding_._4_1_ = local_88[0].EvaluationRange.UpperBound.Type.Value;
    local_108._padding_._5_3_ = local_88[0].EvaluationRange.UpperBound._1_3_;
    local_108._padding_._0_4_ = local_88[0].Direction;
    local_108._padding_._4_4_ = local_88[0].TimeOverride.Value;
    local_108._padding_._0_4_ = local_88[0].EvaluationRange.UpperBound.Value.FrameNumber.Value;
    local_108._padding_._4_4_ = local_88[0].EvaluationRange.UpperBound.Value.SubFrame;
    local_108._padding_._0_4_ = local_88[0].CurrentFrameRate.Numerator;
    local_108._padding_._4_4_ = local_88[0].CurrentFrameRate.Denominator;
    local_108.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
    local_108.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_108.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
    local_108.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
    FMovieSceneWarpCounter::FMovieSceneWarpCounter(&local_108.RootToSequenceWarpCounter);
    local_108.bHasPostRollStartTime = false;
    local_108.bHasPreRollEndTime = false;
    local_108.bSectionPostRoll = false;
    local_108.bSectionPreRoll = false;
    local_108.bSilent = false;
    local_108.bHasLooped = false;
    local_108.bHasJumped = false;
    local_108.Status = (Type)bVar1;
    local_108.PrePostRollStartEndTime.Value = -0x80000000;
    local_108.HierarchicalBias = 0;
    if ((local_130.Object == (FMovieSceneEntitySystemRunner *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = local_130.Object;
    FVar9 = FMovieSceneRootEvaluationTemplateInstance::GetRootInstanceHandle
                      (&this->RootTemplateInstance);
    FMovieSceneEntitySystemRunner::QueueUpdate
              (this_00,&local_108,*(FInstanceHandle *)CONCAT44(extraout_var,FVar9),None);
    if ((local_130.Object == (FMovieSceneEntitySystemRunner *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FMovieSceneEntitySystemRunner::Flush(local_130.Object,0.0,None);
    FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_108.RootToSequenceWarpCounter);
    DestructItems<FMovieSceneNestedSequenceTransform,int>
              ((FMovieSceneNestedSequenceTransform *)
               local_108.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
               local_108.RootToSequenceTransform.NestedTransforms.ArrayNum);
    if ((FMovieSceneNestedSequenceTransform *)
        local_108.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
        (FMovieSceneNestedSequenceTransform *)0x0) {
      FMemory::Free(local_108.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_130.SharedReferenceCount.ReferenceController);
  if (bVar4) {
    Stop(this);
  }
  return;
}

// UpdateCameraCut @ 14ac81a70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCameraAnimationSequencePlayer::UpdateCameraCut
          (UCameraAnimationSequencePlayer *this,UObject *param_1,FMovieSceneCameraCutParams *param_2
          )

{
  return;
}

// operator() @ 15055a410

bool __thiscall
`UCameraAnimationSequencePlayer::Initialize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5017693477396283760>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5017693477396283760>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

