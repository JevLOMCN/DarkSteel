// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 23

// StaticClass @ 146c47750

UClass * __cdecl ALevelSequenceMediaController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelSequenceMediaController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceMediaController",
               &Z_Registration_Info_UClass_ALevelSequenceMediaController.InnerSingleton,
               StaticRegisterNativesALevelSequenceMediaController,0x2e8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALevelSequenceMediaController>,
               InternalVTableHelperCtorCaller<ALevelSequenceMediaController>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelSequenceMediaController.InnerSingleton;
}

// ALevelSequenceMediaController @ 146c4de30

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALevelSequenceMediaController * __thiscall
ALevelSequenceMediaController::ALevelSequenceMediaController
          (ALevelSequenceMediaController *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneCustomClockSource__;
  (this->Sequence).field0_0x0.DebugPtr = (ALevelSequenceActor *)0x0;
  (this->MediaComponent).field0_0x0.DebugPtr = (UMediaComponent *)0x0;
  return this;
}

// ALevelSequenceMediaController @ 146c4de80

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALevelSequenceMediaController * __thiscall
ALevelSequenceMediaController::ALevelSequenceMediaController
          (ALevelSequenceMediaController *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UMediaComponent *pUVar5;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 8;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->ServerStartTimeSeconds = -1.1754944e-38;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneCustomClockSource__;
  (this->Sequence).field0_0x0.DebugPtr = (ALevelSequenceActor *)0x0;
  (this->MediaComponent).field0_0x0.DebugPtr = (UMediaComponent *)0x0;
  this->SequencePositionSeconds = 0.0;
  pFVar3 = ::FName::FName(&local_res8,"MediaComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UMediaComponent_NoRegister();
  pUVar5 = (UMediaComponent *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UMediaComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->MediaComponent).field0_0x0.DebugPtr = pUVar5;
  AActor::AddOwnedComponent((AActor *)this,(UActorComponent *)pUVar5);
  return this;
}

// ~ALevelSequenceMediaController @ 146c4ee30

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ALevelSequenceMediaController::~ALevelSequenceMediaController(ALevelSequenceMediaController *this)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&___7IMovieSceneCustomClockSource__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// Client_ConditionallyForceTime @ 146c512d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
ALevelSequenceMediaController::Client_ConditionallyForceTime
          (ALevelSequenceMediaController *this,float param_1)

{
  float fVar1;
  uint uVar2;
  AGameStateBase *pAVar3;
  ALevelSequenceActor *pAVar4;
  ULevelSequencePlayer *pUVar5;
  FFrameRate FVar6;
  FFrameRate FVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  UWorld *pUVar12;
  FQualifiedFrameTime *pFVar13;
  longlong lVar14;
  int iVar15;
  double dVar16;
  FName local_res18;
  FName local_res20;
  FQualifiedFrameTime local_98;
  FMovieSceneSequencePlaybackParams local_88;
  
  pUVar12 = AActor::GetWorld((AActor *)this);
  if ((((pUVar12 != (UWorld *)0x0) &&
       (pAVar3 = (pUVar12->GameState).field0_0x0.DebugPtr, pAVar3 != (AGameStateBase *)0x0)) &&
      (pAVar4 = (this->Sequence).field0_0x0.DebugPtr, pAVar4 != (ALevelSequenceActor *)0x0)) &&
     (bVar10 = UMovieSceneSequencePlayer::IsPlaying
                         ((UMovieSceneSequencePlayer *)(pAVar4->SequencePlayer).field0_0x0.DebugPtr)
     , bVar10)) {
    pUVar5 = (((this->Sequence).field0_0x0.DebugPtr)->SequencePlayer).field0_0x0.DebugPtr;
    uVar2 = ((FFrameNumber *)&pUVar5->_padding_)->Value;
    FVar6 = ((FMovieScenePlaybackPosition *)&pUVar5->_padding_)->InputRate;
    local_res18.Number = 0;
    local_res18.ComparisonIndex.Value = uVar2;
    local_res20 = local_res18;
    pFVar13 = UMovieSceneSequencePlayer::GetCurrentTime
                        ((UMovieSceneSequencePlayer *)pUVar5,&local_98);
    local_res18.ComparisonIndex.Value = *(uint *)&(pFVar13->Time).FrameNumber;
    local_res18.Number = (uint)(pFVar13->Time).SubFrame;
    FVar7 = pFVar13->Rate;
    lVar14 = (longlong)(int)local_res18.ComparisonIndex.Value;
    iVar11 = FVar7.Denominator;
    fVar8 = (float)iVar11 * (float)local_res18.Number;
    iVar15 = FVar6.Denominator;
    fVar9 = (float)iVar15 * (float)local_res20.Number;
    fVar1 = this->ServerStartTimeSeconds;
    dVar16 = (double)(**(code **)(pAVar3->_padding_ + 0x768))(pAVar3);
    if (param_1 < (float)((uint)((float)dVar16 -
                                (((fVar8 + (float)(lVar14 * iVar11)) / (float)FVar7.Numerator -
                                 ((float)((longlong)(int)uVar2 * (longlong)iVar15) + fVar9) /
                                 (float)FVar6.Numerator) + fVar1)) &
                         __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      local_88.PositionType = Time;
      local_88.UpdateMethod = Jump;
      pUVar5 = (((this->Sequence).field0_0x0.DebugPtr)->SequencePlayer).field0_0x0.DebugPtr;
      FVar6 = ((FMovieScenePlaybackPosition *)&pUVar5->_padding_)->InputRate;
      local_res18.ComparisonIndex.Value = ((FFrameNumber *)&pUVar5->_padding_)->Value;
      local_res18.Number = 0;
      iVar11 = FVar6.Denominator;
      local_88.Frame.FrameNumber.Value = 0;
      local_88.Frame.SubFrame = 0.0;
      local_88.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Timecode.Seconds = 0;
      local_88.Timecode.Frames = 0;
      local_88.Timecode.Subframe = 0.0;
      local_88.Timecode.bDropFrameFormat = false;
      local_88.bHasJumped = false;
      local_88.Time =
           ((float)((longlong)(int)local_res18.ComparisonIndex.Value * (longlong)iVar11) +
           (float)iVar11 * 0.0) / (float)FVar6.Numerator +
           ((float)dVar16 - this->ServerStartTimeSeconds);
      local_88.MarkedFrame.Data.ArrayNum = 0;
      local_88.MarkedFrame.Data.ArrayMax = 0;
      local_88.Timecode.Hours = 0;
      local_88.Timecode.Minutes = 0;
      UMovieSceneSequencePlayer::SetPlaybackPosition((UMovieSceneSequencePlayer *)pUVar5,&local_88);
      if (2 < (byte)LogLevelSequence._0_1_) {
        local_res18 = (FName)((this->Sequence).field0_0x0.DebugPtr)->_padding_;
        ::FName::ToString(&local_res18,(FString *)&local_98);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLevelSequence);
        if (local_98.Time != (FFrameTime)0x0) {
          FMemory::Free((void *)local_98.Time);
        }
      }
    }
  }
  return;
}

// Client_Play @ 146c51600

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall ALevelSequenceMediaController::Client_Play(ALevelSequenceMediaController *this)

{
  AGameStateBase *pAVar1;
  ALevelSequenceActor *pAVar2;
  ULevelSequencePlayer *pUVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  longlong lVar7;
  bool bVar8;
  UWorld *pUVar9;
  int iVar10;
  float fVar11;
  FName local_res10;
  FString local_68;
  FMovieSceneSequencePlaybackParams local_58;
  
  if ((__real_80800000 == this->ServerStartTimeSeconds) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ServerStartTimeSeconds != -(1.175494351e-38F)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LevelSequence\\Private\\SequenceMediaController.cpp"
                         ,0x54,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->Sequence).field0_0x0.DebugPtr != (ALevelSequenceActor *)0x0) {
    fVar11 = 0.0;
    pUVar9 = AActor::GetWorld((AActor *)this);
    if ((pUVar9 != (UWorld *)0x0) &&
       (pAVar1 = (pUVar9->GameState).field0_0x0.DebugPtr, pAVar1 != (AGameStateBase *)0x0)) {
      fVar11 = this->ServerStartTimeSeconds;
      dVar6 = (double)(**(code **)(pAVar1->_padding_ + 0x768))();
      fVar11 = (float)(dVar6 - (double)fVar11);
    }
    pAVar2 = (this->Sequence).field0_0x0.DebugPtr;
    pUVar3 = (pAVar2->SequencePlayer).field0_0x0.DebugPtr;
    lVar4 = pUVar3->_padding_;
    lVar7 = pUVar3->_padding_;
    iVar10 = (int)((ulonglong)lVar4 >> 0x20);
    if (4 < (byte)LogLevelSequence._0_1_) {
      local_res10 = (FName)pAVar2->_padding_;
      ::FName::ToString(&local_res10,&local_68);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLevelSequence);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    local_58.Frame.FrameNumber.Value = 0;
    local_58.Frame.SubFrame = 0.0;
    local_58.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Timecode.Seconds = 0;
    local_58.Timecode.Frames = 0;
    local_58.Timecode.Subframe = 0.0;
    local_58.Timecode.bDropFrameFormat = false;
    local_58.bHasJumped = false;
    local_58.MarkedFrame.Data.ArrayNum = 0;
    local_58.MarkedFrame.Data.ArrayMax = 0;
    local_58.Timecode.Hours = 0;
    local_58.Timecode.Minutes = 0;
    local_58.PositionType = Time;
    local_58.UpdateMethod = Jump;
    local_58.Time =
         ((float)iVar10 * 0.0 + (float)((longlong)iVar10 * (longlong)(int)lVar7)) /
         (float)(int)lVar4 + fVar11;
    UMovieSceneSequencePlayer::SetPlaybackPosition
              ((UMovieSceneSequencePlayer *)
               (((this->Sequence).field0_0x0.DebugPtr)->SequencePlayer).field0_0x0.DebugPtr,
               &local_58);
    UMovieSceneSequencePlayer::Play
              ((UMovieSceneSequencePlayer *)
               (((this->Sequence).field0_0x0.DebugPtr)->SequencePlayer).field0_0x0.DebugPtr);
  }
  return;
}

// GetLifetimeReplicatedProps @ 146c54d20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ALevelSequenceMediaController::GetLifetimeReplicatedProps
          (ALevelSequenceMediaController *this,
          TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *this_00;
  FName local_res18 [2];
  FDoRepLifetimeParams local_28;
  
  AActor::GetLifetimeReplicatedProps((AActor *)this,param_1);
  pFVar2 = ::FName::FName(local_res18,0x16,L"ServerStartTimeSeconds",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  this_00 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((this_00->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)this_00,(FString *)&local_28);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`class_FProperty*___ptr64___cdecl_GetReplicatedProperty(UClass_const*___ptr64,UClass_const*___ptr64,FName_const&___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogNet);
    if ((void *)local_28._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_28.Condition = COND_None;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.bIsPushBased = false;
  local_28._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(this_00,param_1,&local_28);
  return;
}

// GetPrivateStaticClass @ 146c553b0

UClass * __cdecl ALevelSequenceMediaController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelSequenceMediaController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceMediaController",
               &Z_Registration_Info_UClass_ALevelSequenceMediaController.InnerSingleton,
               StaticRegisterNativesALevelSequenceMediaController,0x2e8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALevelSequenceMediaController>,
               InternalVTableHelperCtorCaller<ALevelSequenceMediaController>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelSequenceMediaController.InnerSingleton;
}

// OnRep_ServerStartTimeSeconds @ 146c57da0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
ALevelSequenceMediaController::OnRep_ServerStartTimeSeconds(ALevelSequenceMediaController *this)

{
  AGameStateBase *pAVar1;
  ALevelSequenceActor *pAVar2;
  ULevelSequencePlayer *pUVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  longlong lVar7;
  bool bVar8;
  UWorld *pUVar9;
  int iVar10;
  float fVar11;
  FName FStackX_10;
  FString FStack_68;
  FMovieSceneSequencePlaybackParams FStack_58;
  
  if (__real_80800000 == this->ServerStartTimeSeconds) {
    return;
  }
  if ((__real_80800000 == this->ServerStartTimeSeconds) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ServerStartTimeSeconds != -(1.175494351e-38F)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LevelSequence\\Private\\SequenceMediaController.cpp"
                         ,0x54,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->Sequence).field0_0x0.DebugPtr != (ALevelSequenceActor *)0x0) {
    fVar11 = 0.0;
    pUVar9 = AActor::GetWorld((AActor *)this);
    if ((pUVar9 != (UWorld *)0x0) &&
       (pAVar1 = (pUVar9->GameState).field0_0x0.DebugPtr, pAVar1 != (AGameStateBase *)0x0)) {
      fVar11 = this->ServerStartTimeSeconds;
      dVar6 = (double)(**(code **)(pAVar1->_padding_ + 0x768))();
      fVar11 = (float)(dVar6 - (double)fVar11);
    }
    pAVar2 = (this->Sequence).field0_0x0.DebugPtr;
    pUVar3 = (pAVar2->SequencePlayer).field0_0x0.DebugPtr;
    lVar4 = pUVar3->_padding_;
    lVar7 = pUVar3->_padding_;
    iVar10 = (int)((ulonglong)lVar4 >> 0x20);
    if (4 < (byte)LogLevelSequence._0_1_) {
      FStackX_10 = (FName)pAVar2->_padding_;
      ::FName::ToString(&FStackX_10,&FStack_68);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLevelSequence);
      if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
      }
    }
    FStack_58.Frame.FrameNumber.Value = 0;
    FStack_58.Frame.SubFrame = 0.0;
    FStack_58.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_58.Timecode.Seconds = 0;
    FStack_58.Timecode.Frames = 0;
    FStack_58.Timecode.Subframe = 0.0;
    FStack_58.Timecode.bDropFrameFormat = false;
    FStack_58.bHasJumped = false;
    FStack_58.MarkedFrame.Data.ArrayNum = 0;
    FStack_58.MarkedFrame.Data.ArrayMax = 0;
    FStack_58.Timecode.Hours = 0;
    FStack_58.Timecode.Minutes = 0;
    FStack_58.PositionType = Time;
    FStack_58.UpdateMethod = Jump;
    FStack_58.Time =
         ((float)iVar10 * 0.0 + (float)((longlong)iVar10 * (longlong)(int)lVar7)) /
         (float)(int)lVar4 + fVar11;
    UMovieSceneSequencePlayer::SetPlaybackPosition
              ((UMovieSceneSequencePlayer *)
               (((this->Sequence).field0_0x0.DebugPtr)->SequencePlayer).field0_0x0.DebugPtr,
               &FStack_58);
    UMovieSceneSequencePlayer::Play
              ((UMovieSceneSequencePlayer *)
               (((this->Sequence).field0_0x0.DebugPtr)->SequencePlayer).field0_0x0.DebugPtr);
  }
  return;
}

// OnRequestCurrentTime @ 146c57dc0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FFrameTime __thiscall
ALevelSequenceMediaController::OnRequestCurrentTime
          (ALevelSequenceMediaController *this,FQualifiedFrameTime *param_1,float param_2)

{
  int iVar1;
  longlong in_R8;
  double dVar2;
  undefined1 in_register_00001284 [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  float fVar6;
  float fVar7;
  
  auVar3._4_12_ = in_register_00001284;
  auVar3._0_4_ = param_2;
  dVar5 = ((double)(int)*(undefined8 *)(in_R8 + 8) * (double)this->_padding_) /
          (double)(int)((ulonglong)*(undefined8 *)(in_R8 + 8) >> 0x20);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar5;
  auVar4 = roundpd(auVar3,auVar4,1);
  dVar2 = auVar4._0_8_;
  dVar5 = dVar5 - dVar2;
  if (__real_41dfffffffc00000 <= dVar2) {
    dVar2 = __real_41dfffffffc00000;
  }
  if (dVar2 <= __real_c1e0000000000000) {
    dVar2 = __real_c1e0000000000000;
  }
  iVar1 = (int)dVar5;
  fVar6 = (float)dVar5 - (float)iVar1;
  fVar7 = fVar6;
  if ((0.0 < fVar6) && (fVar7 = ::FFrameTime::MaxSubframe, fVar6 <= ::FFrameTime::MaxSubframe)) {
    fVar7 = fVar6;
  }
  fVar6 = ::FFrameTime::MaxSubframe;
  if (fVar7 <= ::FFrameTime::MaxSubframe) {
    fVar6 = fVar7;
  }
  (param_1->Time).FrameNumber.Value = (int)dVar2 + iVar1;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  (param_1->Time).SubFrame = fVar6;
  return (FFrameTime)param_1;
}

// OnStartPlaying @ 146c57ea0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
ALevelSequenceMediaController::OnStartPlaying
          (ALevelSequenceMediaController *this,FQualifiedFrameTime *param_1)

{
  int iVar1;
  float fStackX_c;
  
  fStackX_c = (param_1->Time).SubFrame;
  iVar1 = (param_1->Rate).Denominator;
  this->_padding_ =
       (longlong)
       (((double)((longlong)iVar1 * (longlong)(param_1->Time).FrameNumber.Value) +
        (double)iVar1 * (double)fStackX_c) / (double)(param_1->Rate).Numerator);
  return;
}

// OnStopPlaying @ 146c57f20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
ALevelSequenceMediaController::OnStopPlaying
          (ALevelSequenceMediaController *this,FQualifiedFrameTime *param_1)

{
  return;
}

// OnTick @ 146c57f50

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
ALevelSequenceMediaController::OnTick
          (ALevelSequenceMediaController *this,float param_1,float param_2)

{
  bool bVar1;
  UMediaPlayer *this_00;
  FTimespan FVar2;
  float fVar3;
  double dVar4;
  
  this_00 = UMediaComponent::GetMediaPlayer((UMediaComponent *)this->_padding_);
  fVar3 = UMediaPlayer::GetRate(this_00);
  if (fVar3 == 0.0) {
    bVar1 = UMediaPlayer::IsPlaying(this_00);
    if (!bVar1) {
      dVar4 = (double)(param_1 * param_2) + (double)this->_padding_;
      goto LAB_146c57fc4;
    }
  }
  FVar2 = UMediaPlayer::GetTime(this_00);
  dVar4 = (double)*(longlong *)FVar2.Ticks * __real_3e7ad7f29abcaf48;
LAB_146c57fc4:
  this->_padding_ = (longlong)dVar4;
  return;
}

// Play @ 146c58000

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALevelSequenceMediaController::Play(ALevelSequenceMediaController *this)

{
  AGameStateBase *pAVar1;
  double dVar2;
  ENetMode EVar3;
  UWorld *pUVar4;
  ForAnyElementType FVar5;
  FName local_res8 [4];
  FString local_28;
  FString local_18;
  
  if ((char)this->_padding_ == '\x03') {
    pUVar4 = AActor::GetWorld((AActor *)this);
    if ((pUVar4 != (UWorld *)0x0) &&
       (pAVar1 = (pUVar4->GameState).field0_0x0.DebugPtr, pAVar1 != (AGameStateBase *)0x0)) {
      dVar2 = (double)(**(code **)(pAVar1->_padding_ + 0x768))();
      this->ServerStartTimeSeconds = (float)dVar2;
    }
    EVar3 = AActor::InternalGetNetMode((AActor *)this);
    if ((EVar3 != NM_DedicatedServer) && (__real_80800000 != this->ServerStartTimeSeconds)) {
      Client_Play(this);
      return;
    }
  }
  else {
    local_res8[0] = (FName)this->_padding_;
    ::FName::ToString(local_res8,&local_18);
    ::FString::PrintfImpl
              (&local_28,L"Cannot initiate playback when Sequence does not have authority (%s)");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar5.Data = local_28.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar5.Data,Warning,(FName)0x0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticRegisterNativesALevelSequenceMediaController @ 146c5c4e0

void __cdecl ALevelSequenceMediaController::StaticRegisterNativesALevelSequenceMediaController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_ALevelSequenceMediaController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeToServer @ 146c5c710

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ALevelSequenceMediaController::SynchronizeToServer
          (ALevelSequenceMediaController *this,float param_1)

{
  ForAnyElementType FVar1;
  FName local_res8 [4];
  FString local_28;
  FString local_18;
  
  if ((char)this->_padding_ != '\x03') {
    Client_ConditionallyForceTime(this,param_1);
    return;
  }
  local_res8[0] = (FName)this->_padding_;
  ::FName::ToString(local_res8,&local_18);
  ::FString::PrintfImpl(&local_28,L"Cannot synchronize when Sequence has authority (%s)");
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar1.Data = local_28.Data.AllocatorInstance.Data;
  }
  FFrame::KismetExecutionMessage((wchar_t *)FVar1.Data,Warning,(FName)0x0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// ValidateGeneratedRepEnums @ 146c5d8f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
ALevelSequenceMediaController::ValidateGeneratedRepEnums
          (ALevelSequenceMediaController *this,
          TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&Name_ServerStartTimeSeconds,L"ServerStartTimeSeconds");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_1->ArrayNum < 0xb) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xa0);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  else {
    FVar4.ComparisonIndex.Value = 0;
    FVar4.Number = 0;
  }
  if (Name_ServerStartTimeSeconds != FVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\LevelSequence\\UHT\\SequenceMediaController.gen.cpp"
                       ,0x196,
                       L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALevelSequenceMediaController"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// _getUObject @ 146c5e3e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

UObject * __thiscall ALevelSequenceMediaController::_getUObject(ALevelSequenceMediaController *this)

{
  return (UObject *)&this[-1]._padding_;
}

// execGetMediaComponent @ 146c603b0

void __cdecl
ALevelSequenceMediaController::execGetMediaComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x12);
  return;
}

// execGetSequence @ 146c60540

void __cdecl
ALevelSequenceMediaController::execGetSequence(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x11].field_0x20;
  return;
}

// execOnRep_ServerStartTimeSeconds @ 146c60f30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
ALevelSequenceMediaController::execOnRep_ServerStartTimeSeconds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  AGameStateBase *pAVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  UWorld *pUVar8;
  int iVar9;
  float fVar10;
  FName FStackX_10;
  FString FStack_68;
  FMovieSceneSequencePlaybackParams FStack_58;
  
  fVar10 = __real_80800000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (fVar10 == *(float *)&param_1[0x12].field_0x8) {
    return;
  }
  if ((__real_80800000 == *(float *)&param_1[0x12].field_0x8) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ServerStartTimeSeconds != -(1.175494351e-38F)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LevelSequence\\Private\\SequenceMediaController.cpp"
                         ,0x54,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(longlong *)&param_1[0x11].field_0x20 != 0) {
    fVar10 = 0.0;
    pUVar8 = AActor::GetWorld((AActor *)param_1);
    if ((pUVar8 != (UWorld *)0x0) &&
       (pAVar2 = (pUVar8->GameState).field0_0x0.DebugPtr, pAVar2 != (AGameStateBase *)0x0)) {
      fVar10 = *(float *)&param_1[0x12].field_0x8;
      dVar6 = (double)(**(code **)(pAVar2->_padding_ + 0x768))();
      fVar10 = (float)(dVar6 - (double)fVar10);
    }
    lVar3 = *(longlong *)(*(longlong *)&param_1[0x11].field_0x20 + 0x300);
    uVar4 = *(undefined8 *)(lVar3 + 0x340);
    iVar1 = *(int *)(lVar3 + 0x2d8);
    iVar9 = (int)((ulonglong)uVar4 >> 0x20);
    if (4 < (byte)LogLevelSequence._0_1_) {
      FStackX_10 = *(FName *)(*(longlong *)&param_1[0x11].field_0x20 + 0x18);
      ::FName::ToString(&FStackX_10,&FStack_68);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLevelSequence);
      if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
      }
    }
    FStack_58.Frame.FrameNumber.Value = 0;
    FStack_58.Frame.SubFrame = 0.0;
    FStack_58.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_58.Timecode.Seconds = 0;
    FStack_58.Timecode.Frames = 0;
    FStack_58.Timecode.Subframe = 0.0;
    FStack_58.Timecode.bDropFrameFormat = false;
    FStack_58.bHasJumped = false;
    FStack_58.MarkedFrame.Data.ArrayNum = 0;
    FStack_58.MarkedFrame.Data.ArrayMax = 0;
    FStack_58.Timecode.Hours = 0;
    FStack_58.Timecode.Minutes = 0;
    FStack_58.PositionType = Time;
    FStack_58.UpdateMethod = Jump;
    FStack_58.Time =
         ((float)iVar9 * 0.0 + (float)((longlong)iVar9 * (longlong)iVar1)) / (float)(int)uVar4 +
         fVar10;
    UMovieSceneSequencePlayer::SetPlaybackPosition
              (*(UMovieSceneSequencePlayer **)(*(longlong *)&param_1[0x11].field_0x20 + 0x300),
               &FStack_58);
    UMovieSceneSequencePlayer::Play
              (*(UMovieSceneSequencePlayer **)(*(longlong *)&param_1[0x11].field_0x20 + 0x300));
  }
  return;
}

// execPlay @ 146c60f70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl ALevelSequenceMediaController::execPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  AGameStateBase *pAVar1;
  double dVar2;
  ENetMode EVar3;
  UWorld *pUVar4;
  ForAnyElementType FVar5;
  FName local_res8 [4];
  FString local_28;
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(char *)(param_1 + 9) == '\x03') {
    pUVar4 = AActor::GetWorld((AActor *)param_1);
    if ((pUVar4 != (UWorld *)0x0) &&
       (pAVar1 = (pUVar4->GameState).field0_0x0.DebugPtr, pAVar1 != (AGameStateBase *)0x0)) {
      dVar2 = (double)(**(code **)(pAVar1->_padding_ + 0x768))();
      *(float *)&param_1[0x12].field_0x8 = (float)dVar2;
    }
    EVar3 = AActor::InternalGetNetMode((AActor *)param_1);
    if ((EVar3 != NM_DedicatedServer) && (__real_80800000 != *(float *)&param_1[0x12].field_0x8)) {
      Client_Play((ALevelSequenceMediaController *)param_1);
      return;
    }
  }
  else {
    local_res8[0].ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res8[0].Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(local_res8,&local_18);
    ::FString::PrintfImpl
              (&local_28,L"Cannot initiate playback when Sequence does not have authority (%s)");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar5.Data = local_28.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar5.Data,Warning,(FName)0x0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// execSynchronizeToServer @ 146c61e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __cdecl
ALevelSequenceMediaController::execSynchronizeToServer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ForAnyElementType FVar2;
  float local_res8 [2];
  FName local_res10;
  FString local_28;
  FString local_18;
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(char *)(param_1 + 9) == '\x03') {
    local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res10.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res10,&local_18);
    ::FString::PrintfImpl(&local_28,L"Cannot synchronize when Sequence has authority (%s)");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar2.Data = local_28.Data.AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage((wchar_t *)FVar2.Data,Warning,(FName)0x0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  else {
    Client_ConditionallyForceTime((ALevelSequenceMediaController *)param_1,local_res8[0]);
  }
  return;
}

