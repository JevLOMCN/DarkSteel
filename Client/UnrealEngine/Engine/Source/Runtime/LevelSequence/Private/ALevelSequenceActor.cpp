// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 60

// StaticClass @ 146c45490

UClass * __cdecl ALevelSequenceActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelSequenceActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceActor",
               &Z_Registration_Info_UClass_ALevelSequenceActor.InnerSingleton,
               StaticRegisterNativesALevelSequenceActor,0x368,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALevelSequenceActor>,
               InternalVTableHelperCtorCaller<ALevelSequenceActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelSequenceActor.InnerSingleton;
}

// ALevelSequenceActor @ 146c4da70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALevelSequenceActor * __thiscall
ALevelSequenceActor::ALevelSequenceActor(ALevelSequenceActor *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  AActor::AActor((AActor *)this,param_1);
  (this->PlaybackSettings).bAutoPlay = 0;
  (this->PlaybackSettings).bRandomStartTime = 0;
  (this->PlaybackSettings).bDisableCameraCuts = 0;
  (this->PlaybackSettings).bHideHud = 0;
  (this->PlaybackSettings).bHidePlayer = 0;
  (this->PlaybackSettings).bDisableLookAtInput = 0;
  (this->PlaybackSettings).bDisableMovementInput = 0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlaybackClient__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneBindingOwnerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionObjectResolver__;
  (this->PlaybackSettings).LoopCount = 0;
  (this->PlaybackSettings).TickInterval.TickIntervalSeconds = 0.0;
  (this->PlaybackSettings).TickInterval.EvaluationBudgetMicroseconds = 0.0;
  puVar2 = &(this->PlaybackSettings).field_0x24;
  (this->PlaybackSettings).bPauseAtEnd = 0;
  (this->PlaybackSettings).bDynamicWeighting = 0;
  (this->PlaybackSettings).bInheritTickIntervalFromOwner = 1;
  (this->PlaybackSettings).TickInterval.bTickWhenPaused = false;
  (this->PlaybackSettings).TickInterval.bAllowRounding = true;
  (this->PlaybackSettings).PlayRate = 1.0;
  (this->PlaybackSettings).StartTime = 0.0;
  (this->PlaybackSettings).FinishCompletionStateOverride = None;
  (this->SequencePlayer).field0_0x0.DebugPtr = (ULevelSequencePlayer *)0x0;
  (this->LevelSequenceAsset).field0_0x0.DebugPtr = (ULevelSequence *)0x0;
  (this->CameraSettings).bOverrideAspectRatioAxisConstraint = true;
  (this->CameraSettings).AspectRatioAxisConstraint = '\x01';
  (this->BurnInOptions).field0_0x0.DebugPtr = (ULevelSequenceBurnInOptions *)0x0;
  (this->BindingOverrides).field0_0x0.DebugPtr = (UMovieSceneBindingOverrides *)0x0;
  (this->DefaultInstanceData).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->BurnInInstance).field0_0x0.DebugPtr = (ULevelSequenceBurnIn *)0x0;
  (this->WorldPartitionResolveData).ContainerID.Guid.A = 0;
  (this->WorldPartitionResolveData).ContainerID.Guid.B = 0;
  (this->WorldPartitionResolveData).ContainerID.Guid.C = 0;
  (this->WorldPartitionResolveData).ContainerID.Guid.D = 0;
  (this->WorldPartitionResolveData).SourceWorldAssetPath.PackageName.ComparisonIndex = 0;
  (this->WorldPartitionResolveData).SourceWorldAssetPath.PackageName.Number = 0;
  (this->WorldPartitionResolveData).SourceWorldAssetPath.AssetName.ComparisonIndex = 0;
  (this->WorldPartitionResolveData).SourceWorldAssetPath.AssetName.Number = 0;
  return this;
}

// ALevelSequenceActor @ 146c4db60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALevelSequenceActor * __thiscall
ALevelSequenceActor::ALevelSequenceActor(ALevelSequenceActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  FName FVar5;
  FName *pFVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  UMovieSceneBindingOverrides *pUVar9;
  ULevelSequenceBurnInOptions *pUVar10;
  ULevelSequencePlayer *pUVar11;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  (this->PlaybackSettings).bAutoPlay = 0;
  (this->PlaybackSettings).bRandomStartTime = 0;
  (this->PlaybackSettings).bDisableCameraCuts = 0;
  (this->PlaybackSettings).bHideHud = 0;
  (this->PlaybackSettings).bHidePlayer = 0;
  (this->PlaybackSettings).bDisableLookAtInput = 0;
  (this->PlaybackSettings).bDisableMovementInput = 0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  (this->PlaybackSettings).LoopCount = 0;
  (this->PlaybackSettings).TickInterval.TickIntervalSeconds = 0.0;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlaybackClient__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneBindingOwnerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionObjectResolver__;
  (this->PlaybackSettings).TickInterval.EvaluationBudgetMicroseconds = 0.0;
  (this->PlaybackSettings).FinishCompletionStateOverride = None;
  (this->SequencePlayer).field0_0x0.DebugPtr = (ULevelSequencePlayer *)0x0;
  (this->LevelSequenceAsset).field0_0x0.DebugPtr = (ULevelSequence *)0x0;
  (this->BurnInOptions).field0_0x0.DebugPtr = (ULevelSequenceBurnInOptions *)0x0;
  (this->BindingOverrides).field0_0x0.DebugPtr = (UMovieSceneBindingOverrides *)0x0;
  (this->DefaultInstanceData).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->BurnInInstance).field0_0x0.DebugPtr = (ULevelSequenceBurnIn *)0x0;
  (this->WorldPartitionResolveData).ContainerID.Guid.A = 0;
  (this->WorldPartitionResolveData).ContainerID.Guid.B = 0;
  (this->WorldPartitionResolveData).ContainerID.Guid.C = 0;
  (this->WorldPartitionResolveData).ContainerID.Guid.D = 0;
  (this->WorldPartitionResolveData).SourceWorldAssetPath.PackageName.ComparisonIndex = 0;
  (this->WorldPartitionResolveData).SourceWorldAssetPath.PackageName.Number = 0;
  (this->WorldPartitionResolveData).SourceWorldAssetPath.AssetName.ComparisonIndex = 0;
  (this->WorldPartitionResolveData).SourceWorldAssetPath.AssetName.Number = 0;
  puVar2 = &(this->PlaybackSettings).field_0x24;
  (this->PlaybackSettings).bPauseAtEnd = 0;
  (this->PlaybackSettings).bDynamicWeighting = 0;
  (this->PlaybackSettings).bInheritTickIntervalFromOwner = 1;
  (this->PlaybackSettings).TickInterval.bTickWhenPaused = false;
  (this->PlaybackSettings).TickInterval.bAllowRounding = true;
  (this->PlaybackSettings).PlayRate = 1.0;
  (this->PlaybackSettings).StartTime = 0.0;
  (this->CameraSettings).bOverrideAspectRatioAxisConstraint = true;
  (this->CameraSettings).AspectRatioAxisConstraint = '\x01';
  this->bShowBurnin = true;
  pFVar6 = ::FName::FName(&local_res8,L"SceneComp");
  FVar5 = *pFVar6;
  pUVar7 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar8 = UObject::CreateDefaultSubobject((UObject *)this,FVar5,pUVar7,pUVar7,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  this->_padding_ = (longlong)pUVar8;
  pFVar6 = ::FName::FName(&local_res8,"BindingOverrides");
  FVar5 = *pFVar6;
  pUVar7 = Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister();
  pUVar9 = (UMovieSceneBindingOverrides *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar5,pUVar7,pUVar7,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UMovieSceneBindingOverrides *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->BindingOverrides).field0_0x0.DebugPtr = pUVar9;
  pFVar6 = ::FName::FName(&local_res8,"BurnInOptions");
  FVar5 = *pFVar6;
  pUVar7 = ULevelSequenceBurnInOptions::StaticClass();
  pUVar10 = (ULevelSequenceBurnInOptions *)
            FObjectInitializer::CreateDefaultSubobject
                      (param_1,(UObject *)this,FVar5,pUVar7,pUVar7,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 != (ULevelSequenceBurnInOptions *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->BurnInOptions).field0_0x0.DebugPtr = pUVar10;
  pFVar6 = ::FName::FName(&local_res8,"InstanceData");
  FVar5 = *pFVar6;
  pUVar7 = UDefaultLevelSequenceInstanceData::StaticClass();
  pUVar8 = FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar5,pUVar7,pUVar7,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  (this->DefaultInstanceData).field0_0x0.DebugPtr = pUVar8;
  pFVar6 = ::FName::FName(&local_res8,"AnimationPlayer");
  FVar5 = *pFVar6;
  pUVar7 = ULevelSequencePlayer::StaticClass();
  pUVar11 = (ULevelSequencePlayer *)
            FObjectInitializer::CreateDefaultSubobject
                      (param_1,(UObject *)this,FVar5,pUVar7,pUVar7,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (ULevelSequencePlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->SequencePlayer).field0_0x0.DebugPtr = pUVar11;
  this->bAutoPlay_DEPRECATED = '\0';
  this->bReplicatePlayback = '\0';
  this->bOverrideInstanceData = '\0';
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 0x88;
  return this;
}

// ~ALevelSequenceActor @ 146c4edf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALevelSequenceActor::~ALevelSequenceActor(ALevelSequenceActor *this)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&___7IWorldPartitionObjectResolver__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneBindingOwnerInterface__6B_;
  this->_padding_ = (longlong)&___7IMovieScenePlaybackClient__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// AddBinding @ 146c508b0

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
ALevelSequenceActor::AddBinding
          (ALevelSequenceActor *this,FMovieSceneObjectBindingID *param_1,AActor *param_2,
          bool param_3)

{
  FTokenizedMessage *this_00;
  FMessageLog *this_01;
  FText *pFVar1;
  TSharedRef<FTokenizedMessage,1> *pTVar2;
  TSharedRef<FUObjectToken,1> *pTVar3;
  FMovieSceneEvaluationState *this_02;
  FName local_res10 [3];
  TSharedRef<IMessageToken,1> local_a8;
  FMovieSceneObjectBindingID local_98;
  TSharedRef<FTokenizedMessage,1> local_78;
  TSharedRef<FUObjectToken,1> local_68;
  FText local_58;
  TSharedRef<FTokenizedMessage,1> local_48;
  FMessageLog local_38;
  
  if ((((param_1->Guid).D == 0 && (param_1->Guid).C == 0) && (param_1->Guid).B == 0) &&
      (param_1->Guid).A == 0) {
    ::FName::FName(local_res10,"PIE");
    this_01 = FMessageLog::FMessageLog(&local_38,local_res10);
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_98,L"LevelSequenceActor",L"AddBinding_Warning",
                        L"The specified binding ID is not valid");
    pTVar2 = FMessageLog::Warning(this_01,&local_48,pFVar1);
    this_00 = pTVar2->Object;
    pFVar1 = FText::FText(&local_58);
    pTVar3 = FUObjectToken::Create(&local_68,(UObject *)this,pFVar1);
    local_a8.Object = (IMessageToken *)pTVar3->Object;
    local_a8.SharedReferenceCount.ReferenceController =
         (pTVar3->SharedReferenceCount).ReferenceController;
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTokenizedMessage::AddToken(this_00,&local_78,&local_a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    if ((longlong *)local_98.Guid._0_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_98.Guid._0_8_ + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_38);
    return;
  }
  local_98.Guid.A = (param_1->Guid).A;
  local_98.Guid.B = (param_1->Guid).B;
  local_98.Guid.C = (param_1->Guid).C;
  local_98.Guid.D = (param_1->Guid).D;
  local_98.SequenceID = param_1->SequenceID;
  local_98.ResolveParentIndex = param_1->ResolveParentIndex;
  UMovieSceneBindingOverrides::AddBinding
            ((this->BindingOverrides).field0_0x0.DebugPtr,&local_98,(UObject *)param_2,param_3);
  if ((this->SequencePlayer).field0_0x0.DebugPtr != (ULevelSequencePlayer *)0x0) {
    FMovieSceneObjectBindingID::ResolveSequenceID
              (param_1,(FMovieSceneSequenceID)(uint)local_res10,(IMovieScenePlayer *)0x0);
    this_02 = IMovieScenePlayer::GetEvaluationState
                        ((IMovieScenePlayer *)
                         &((this->SequencePlayer).field0_0x0.DebugPtr)->_padding_);
    FMovieSceneEvaluationState::Invalidate
              (this_02,&param_1->Guid,(FMovieSceneSequenceID *)local_res10);
  }
  return;
}

// AddBindingByTag @ 146c50af0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
ALevelSequenceActor::AddBindingByTag
          (ALevelSequenceActor *this,FName param_1,AActor *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ULevelSequence *pUVar3;
  FTokenizedMessage *this_00;
  longlong lVar4;
  FMovieSceneObjectBindingIDs *pFVar5;
  FMessageLog *this_01;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  TSharedRef<FTokenizedMessage,1> *pTVar9;
  TSharedRef<FUObjectToken,1> *pTVar10;
  FScriptContainerElement *pFVar11;
  FName local_res8;
  FName local_res10;
  TSharedRef<IMessageToken,1> local_108;
  undefined1 local_f8 [32];
  TSharedRef<FTokenizedMessage,1> local_d8;
  TSharedRef<FUObjectToken,1> local_c8;
  FText local_b8;
  TSharedRef<FTokenizedMessage,1> local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FMessageLog local_68;
  
  pUVar3 = (this->LevelSequenceAsset).field0_0x0.DebugPtr;
  local_res10 = param_1;
  if (pUVar3 != (ULevelSequence *)0x0) {
    lVar4 = (**(code **)(pUVar3->_padding_ + 0x2f8))();
    pFVar5 = TMapBase<FName,FMovieSceneObjectBindingIDs,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>_>
             ::Find((TMapBase<FName,FMovieSceneObjectBindingIDs,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>_>
                     *)(lVar4 + 0xa8),local_res10);
    if (pFVar5 != (FMovieSceneObjectBindingIDs *)0x0) {
      pFVar11 = (pFVar5->IDs).AllocatorInstance.Data;
      iVar2 = (pFVar5->IDs).ArrayNum;
      pFVar1 = pFVar11 + (longlong)iVar2 * 0x18;
      while( true ) {
        if ((pFVar5->IDs).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FMovieSceneObjectBindingID_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res8);
        }
        if (pFVar11 == pFVar1) break;
        local_f8._0_8_ = *(undefined8 *)pFVar11;
        local_f8._8_8_ = *(undefined8 *)(pFVar11 + 8);
        local_f8._16_8_ = *(undefined8 *)(pFVar11 + 0x10);
        AddBinding(this,(FMovieSceneObjectBindingID *)local_f8,param_2,param_3);
        pFVar11 = pFVar11 + 0x18;
      }
      return;
    }
  }
  if (LevelSequenceActorCVars::bInvalidBindingTagWarnings == false) {
    return;
  }
  ::FName::FName(&local_res8,"PIE");
  this_01 = FMessageLog::FMessageLog(&local_68,&local_res8);
  pFVar6 = FText::FromName(&local_78,&local_res10);
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_88,L"LevelSequenceActor",L"AddBindingByTag",
                      L"Sequence did not contain any bindings with the tag \'{0}\'");
  pFVar8 = FTextFormat::FTextFormat((FTextFormat *)local_f8,pFVar7,Default);
  pFVar6 = FText::Format<FText>(&local_98,pFVar8,pFVar6);
  pTVar9 = FMessageLog::Warning(this_01,&local_a8,pFVar6);
  this_00 = pTVar9->Object;
  pFVar6 = FText::FText(&local_b8);
  pTVar10 = FUObjectToken::Create(&local_c8,(UObject *)this,pFVar6);
  local_108.Object = (IMessageToken *)pTVar10->Object;
  local_108.SharedReferenceCount.ReferenceController =
       (pTVar10->SharedReferenceCount).ReferenceController;
  if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FTokenizedMessage::AddToken(this_00,&local_d8,&local_108);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_68);
  return;
}

// BeginPlay @ 146c50e20

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

void __thiscall ALevelSequenceActor::BeginPlay(ALevelSequenceActor *this)

{
  ULevelSequencePlayer *pUVar1;
  code *pcVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  uint uStack_6c;
  code *local_68;
  longlong lStack_60;
  code *local_58;
  longlong lStack_50;
  code *local_48;
  longlong lStack_40;
  
  AActor::BeginPlay((AActor *)this);
  pUVar1 = (this->SequencePlayer).field0_0x0.DebugPtr;
  if (pUVar1 == (ULevelSequencePlayer *)0x0) goto LAB_146c510f0;
  AActor::AddReplicatedSubObject((AActor *)this,(UObject *)pUVar1,COND_None);
  pUVar1 = (this->SequencePlayer).field0_0x0.DebugPtr;
  pcVar4 = strstr("&ALevelSequenceActor::ShowBurnin","::");
  pcVar5 = &DAT_00000002;
  if (pcVar4 == (char *)0x0) {
LAB_146c50eca:
    pcVar6 = &DAT_00000002;
LAB_146c50ecd:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar4;
      pcVar4 = strstr(pcVar6 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_146c50eca;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_146c50ecd;
  }
  ::FName::FName(&local_res8,pcVar6);
  lStack_60 = (ulonglong)uStack_6c << 0x20;
  local_68 = ShowBurnin;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
  __Internal_AddDynamic<ALevelSequenceActor>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *)&pUVar1->_padding_,
             this,(pmf_a437835d *)&local_68,local_res8);
  pUVar1 = (this->SequencePlayer).field0_0x0.DebugPtr;
  pcVar4 = strstr("&ALevelSequenceActor::ShowBurnin","::");
  if (pcVar4 == (char *)0x0) {
LAB_146c50f8b:
    pcVar6 = &DAT_00000002;
LAB_146c50f8e:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar4;
      pcVar4 = strstr(pcVar6 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_146c50f8b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_146c50f8e;
  }
  ::FName::FName(&local_res10,pcVar6);
  lStack_50 = (ulonglong)uStack_6c << 0x20;
  local_58 = ShowBurnin;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
  __Internal_AddDynamic<ALevelSequenceActor>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *)&pUVar1->_padding_,
             this,(pmf_a437835d *)&local_58,local_res10);
  pUVar1 = (this->SequencePlayer).field0_0x0.DebugPtr;
  pcVar4 = strstr("&ALevelSequenceActor::HideBurnin","::");
  if (pcVar4 == (char *)0x0) {
LAB_146c5105a:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar4;
      pcVar4 = strstr(pcVar6 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if ((pcVar6 == (char *)0x0) || (pcVar5 = pcVar6 + 2, pcVar6[2] == '0')) goto LAB_146c5105a;
  }
  ::FName::FName(local_res18,pcVar5);
  lStack_40 = (ulonglong)uStack_6c << 0x20;
  local_48 = HideBurnin;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void>::
  __Internal_AddDynamic<ALevelSequenceActor>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void> *)&pUVar1->_padding_,
             this,(pmf_a437835d *)&local_48,local_res18[0]);
LAB_146c510f0:
  if ((this->PlaybackSettings).bAutoPlay != 0) {
    UMovieSceneSequencePlayer::Play
              ((UMovieSceneSequencePlayer *)(this->SequencePlayer).field0_0x0.DebugPtr);
  }
  return;
}

// EndPlay @ 146c528c0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall ALevelSequenceActor::EndPlay(ALevelSequenceActor *this,Type param_1)

{
  ULevelSequencePlayer *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FUObjectItem *pFVar4;
  uint uVar5;
  
  this_00 = (this->SequencePlayer).field0_0x0.DebugPtr;
  if (this_00 != (ULevelSequencePlayer *)0x0) {
    AActor::RemoveReplicatedSubObject((AActor *)this,(UObject *)this_00);
    UMovieSceneSequencePlayer::Stop((UMovieSceneSequencePlayer *)this_00);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this_00->_padding_,
               (UObject *)this);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this_00->_padding_,
               (UObject *)this);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this_00->_padding_,
               (UObject *)this);
    UMovieSceneSequencePlayer::TearDown((UMovieSceneSequencePlayer *)this_00);
    if ((LevelSequenceActorCVars::bMarkSequencePlayerAsGarbageOnDestroy != false) &&
       (param_1 == Destroyed)) {
      pFVar4 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
      if ((((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsRooted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                             ,0xb8,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_MirroredGarbage);
      pFVar4 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
      do {
        lVar1 = (pFVar4->field0_0x0).FlagsAndRefCount;
        uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
        if ((uVar5 >> 0x15 & 1) != 0) break;
        if (((ulonglong)pFVar4 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar3 = lVar1 == (pFVar4->field0_0x0).FlagsAndRefCount;
        if (bVar3) {
          (pFVar4->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar5 << 0x20 | (longlong)(int)lVar1 | 0x20000000000000;
        }
        UNLOCK();
      } while (!bVar3);
      pFVar4 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
      FUObjectItem::ClearRootFlags(pFVar4,Async);
    }
  }
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// FOnLevelSequenceLoaded_DelegateWrapper @ 146c52c30

void __cdecl
ALevelSequenceActor::FOnLevelSequenceLoaded_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *this;
  UFunction *pUVar3;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  bVar2 = FWeakObjectPtr::IsValid(&param_1->Object);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object.IsValid() != false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                       ,0x1bb,L"ProcessDelegate() called with no object bound to delegate!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->FunctionName == (FName)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FunctionName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                       ,0x1bc,L"ProcessDelegate() called with no function name set!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = FWeakObjectPtr::Get(&param_1->Object);
  pUVar3 = UObject::FindFunctionChecked(this,param_1->FunctionName);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar3,0);
  return;
}

// FindNamedBinding @ 146c530d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneObjectBindingID * __thiscall
ALevelSequenceActor::FindNamedBinding
          (ALevelSequenceActor *this,FMovieSceneObjectBindingID *__return_storage_ptr__,
          FName param_1)

{
  ULevelSequencePlayer *pUVar1;
  code *pcVar2;
  bool bVar3;
  FMovieSceneObjectBindingID *pFVar4;
  
  pUVar1 = (this->SequencePlayer).field0_0x0.DebugPtr;
  if (pUVar1 != (ULevelSequencePlayer *)0x0) {
    UMovieSceneSequence::FindBindingByTag
              ((UMovieSceneSequence *)pUVar1->_padding_,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7802630802759483964>,true,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LevelSequence\\Private\\LevelSequenceActor.cpp"
                     ,0x23c,"GetSequencePlayer()");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FMovieSceneObjectBindingID *)(*pcVar2)();
    return pFVar4;
  }
  __return_storage_ptr__->ResolveParentIndex = -1;
  (__return_storage_ptr__->Guid).A = 0;
  (__return_storage_ptr__->Guid).B = 0;
  (__return_storage_ptr__->Guid).C = 0;
  (__return_storage_ptr__->Guid).D = 0;
  __return_storage_ptr__->SequenceID = 0;
  return __return_storage_ptr__;
}

// FindNamedBindings @ 146c53150

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> * __thiscall
ALevelSequenceActor::FindNamedBindings(ALevelSequenceActor *this,FName param_1)

{
  ULevelSequencePlayer *pUVar1;
  code *pcVar2;
  bool bVar3;
  TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *pTVar4;
  
  pUVar1 = (this->SequencePlayer).field0_0x0.DebugPtr;
  if (pUVar1 != (ULevelSequencePlayer *)0x0) {
    pTVar4 = UMovieSceneSequence::FindBindingsByTag
                       ((UMovieSceneSequence *)pUVar1->_padding_,param_1);
    return pTVar4;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7802630802759483973>,true,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LevelSequence\\Private\\LevelSequenceActor.cpp"
                     ,0x245,"GetSequencePlayer()");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar4;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`ALevelSequenceActor::FindNamedBindings'::__l2::
             _dynamic_atexit_destructor_for__EmptyBindings__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &EmptyBindings;
}

// GetAspectRatioAxisConstraint @ 146c53630

TOptional<EAspectRatioAxisConstraint> __thiscall
ALevelSequenceActor::GetAspectRatioAxisConstraint(ALevelSequenceActor *this)

{
  TOptional<EAspectRatioAxisConstraint> in_RDX;
  undefined1 local_18 [24];
  
  *(undefined1 *)((longlong)in_RDX + 4) = 0;
  if (((char)this->_padding_ != '\0') && ((TOptional<EAspectRatioAxisConstraint>)local_18 != in_RDX)
     ) {
    *(uint *)in_RDX = (uint)*(byte *)((longlong)&this->_padding_ + 1);
    *(undefined1 *)((longlong)in_RDX + 4) = 1;
  }
  return in_RDX;
}

// GetInstanceData @ 146c54610

UObject * __thiscall ALevelSequenceActor::GetInstanceData(ALevelSequenceActor *this)

{
  UObject *pUVar1;
  
  if ((this->_padding_ & 2) != 0) {
    pUVar1 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    return pUVar1;
  }
  return (UObject *)0x0;
}

// GetIsReplicatedPlayback @ 146c54720

bool __thiscall ALevelSequenceActor::GetIsReplicatedPlayback(ALevelSequenceActor *this)

{
  return (bool)((byte)this->_padding_ >> 2 & 1);
}

// GetLifetimeReplicatedProps @ 146c54ba0

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
ALevelSequenceActor::GetLifetimeReplicatedProps
          (ALevelSequenceActor *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  FProperty *pFVar4;
  FName local_res18;
  FDoRepLifetimeParams local_28;
  
  AActor::GetLifetimeReplicatedProps((AActor *)this,param_1);
  pFVar2 = ::FName::FName(&local_res18,0xe,L"SequencePlayer",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_28);
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
  local_28._0_8_ = (void *)0x0;
  local_28.bIsPushBased = false;
  local_28._9_7_ = 0;
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_28);
  pFVar2 = ::FName::FName(&local_res18,0x12,L"LevelSequenceAsset",FNAME_Add);
  FVar1 = *pFVar2;
  pUVar3 = StaticClass();
  StaticClass();
  pFVar4 = FindFieldChecked<FProperty>((UStruct *)pUVar3,FVar1);
  if ((pFVar4->PropertyFlags & CPF_Net) == CPF_None) {
    FField::GetFullName((FField *)pFVar4,(FString *)&local_28);
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
  RegisterReplicatedLifetimeProperty(pFVar4,param_1,&local_28);
  return;
}

// GetPrivateStaticClass @ 146c552f0

UClass * __cdecl ALevelSequenceActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelSequenceActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceActor",
               &Z_Registration_Info_UClass_ALevelSequenceActor.InnerSingleton,
               StaticRegisterNativesALevelSequenceActor,0x368,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALevelSequenceActor>,
               InternalVTableHelperCtorCaller<ALevelSequenceActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelSequenceActor.InnerSingleton;
}

// GetSequence @ 146c56100

ULevelSequence * __thiscall ALevelSequenceActor::GetSequence(ALevelSequenceActor *this)

{
  return (this->LevelSequenceAsset).field0_0x0.DebugPtr;
}

// GetSequencePlayer @ 146c56430

ULevelSequencePlayer * __thiscall ALevelSequenceActor::GetSequencePlayer(ALevelSequenceActor *this)

{
  return (this->SequencePlayer).field0_0x0.DebugPtr;
}

// GetWorldPartitionResolveData @ 146c565a0

FWorldPartitionResolveData * __thiscall
ALevelSequenceActor::GetWorldPartitionResolveData(ALevelSequenceActor *this)

{
  return (FWorldPartitionResolveData *)((longlong)&this->_padding_ + 4);
}

// HideBurnin @ 146c56ef0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ALevelSequenceActor::HideBurnin(ALevelSequenceActor *this)

{
  ULevelSequenceBurnInOptions *pUVar1;
  ULevelSequencePlayer *this_00;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  ULevelSequenceBurnIn *pUVar5;
  UFunction *pUVar6;
  UClass *local_res10;
  TObjectPtr<ULevelSequenceBurnInInitSettings>_u_0 local_res18;
  TObjectPtr<ULevelSequenceBurnInInitSettings>_u_0 local_res20;
  
  this->bShowBurnin = false;
  pUVar5 = (this->BurnInInstance).field0_0x0.DebugPtr;
  if (pUVar5 != (ULevelSequenceBurnIn *)0x0) {
    (**(code **)(pUVar5->_padding_ + 0x2d0))();
    (this->BurnInInstance).field0_0x0.DebugPtr = (ULevelSequenceBurnIn *)0x0;
  }
  pUVar1 = (this->BurnInOptions).field0_0x0.DebugPtr;
  if ((((pUVar1 != (ULevelSequenceBurnInOptions *)0x0) && (pUVar1->bUseBurnIn != false)) &&
      (this->bShowBurnin != false)) &&
     (local_res10 = FSoftClassPath::TryLoadClass<ULevelSequenceBurnIn>(&pUVar1->BurnInClass),
     local_res10 != (UClass *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    pUVar4 = AActor::GetWorld((AActor *)this);
    pUVar5 = CreateWidget<ULevelSequenceBurnIn,UWorld_*>
                       (pUVar4,(TSubclassOf<UUserWidget>)&local_res10,(FName)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar5 == (ULevelSequenceBurnIn *)0x0)) {
      (this->BurnInInstance).field0_0x0.DebugPtr = pUVar5;
      if (pUVar5 == (ULevelSequenceBurnIn *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
      (this->BurnInInstance).field0_0x0.DebugPtr = pUVar5;
    }
    ULevelSequenceBurnInOptions::ResetSettings((this->BurnInOptions).field0_0x0.DebugPtr);
    pUVar5 = (this->BurnInInstance).field0_0x0.DebugPtr;
    local_res18 = (((this->BurnInOptions).field0_0x0.DebugPtr)->Settings).field0_0x0;
    pUVar6 = UObject::FindFunctionChecked((UObject *)pUVar5,NAME_ULevelSequenceBurnIn_SetSettings);
    (**(code **)(pUVar5->_padding_ + 0x260))(pUVar5,pUVar6,&local_res18);
    pUVar5 = (this->BurnInInstance).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    (pUVar5->LevelSequenceActor).field0_0x0.DebugPtr = this;
    this_00 = (this->SequencePlayer).field0_0x0.DebugPtr;
    if (this_00 == (ULevelSequencePlayer *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6238924104678768624>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LevelSequence\\Private\\LevelSequenceBurnIn.cpp"
                         ,0x10,"SequencePlayer");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      TMulticastDelegateRegistration<void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
      ::AddUObject<ULevelSequenceBurnIn>
                ((TMulticastDelegateRegistration<void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
                  *)&this_00->_padding_,(ULevelSequenceBurnIn *)&local_res20.ObjectPtr,
                 (pmf_1f503f94 *)pUVar5);
      ULevelSequencePlayer::TakeFrameSnapshot(this_00,&pUVar5->FrameInformation);
    }
    UUserWidget::AddToViewport((UUserWidget *)(this->BurnInInstance).field0_0x0.DebugPtr,0);
  }
  return;
}

// InitializePlayer @ 146c57760

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALevelSequenceActor::InitializePlayer(ALevelSequenceActor *this)

{
  ULevelSequencePlayer *pUVar1;
  ULevelSequence *pUVar2;
  bool bVar3;
  UWorld *this_00;
  FMovieSceneRootEvaluationTemplateInstance *this_01;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> *pTVar4;
  ULevel *pUVar5;
  bool bVar6;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> local_18;
  
  bVar6 = false;
  if ((this->LevelSequenceAsset).field0_0x0.DebugPtr == (ULevelSequence *)0x0) {
    return;
  }
  this_00 = AActor::GetWorld((AActor *)this);
  bVar3 = UWorld::IsGameWorld(this_00);
  if (!bVar3) {
    return;
  }
  pUVar1 = (this->SequencePlayer).field0_0x0.DebugPtr;
  pUVar2 = (this->LevelSequenceAsset).field0_0x0.DebugPtr;
  if (pUVar2 == (ULevelSequence *)0x0) {
    bVar3 = (ULevelSequence *)pUVar1->_padding_ == (ULevelSequence *)0x0;
  }
  else {
    bVar3 = pUVar2 == (ULevelSequence *)pUVar1->_padding_;
  }
  if (bVar3) {
    this_01 = (FMovieSceneRootEvaluationTemplateInstance *)
              (**(code **)(pUVar1->_padding_ + 0x18))(&pUVar1->_padding_);
    pTVar4 = FMovieSceneRootEvaluationTemplateInstance::GetRunner(this_01,&local_18);
    bVar6 = true;
    if (pTVar4->Object != (FMovieSceneEntitySystemRunner *)0x0) {
      bVar3 = false;
      goto LAB_146c577ed;
    }
  }
  bVar3 = true;
LAB_146c577ed:
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if (bVar3) {
    pUVar1 = (this->SequencePlayer).field0_0x0.DebugPtr;
    pUVar5 = AActor::GetLevel((AActor *)this);
    ULevelSequencePlayer::Initialize
              (pUVar1,(this->LevelSequenceAsset).field0_0x0.DebugPtr,pUVar5,&this->CameraSettings);
  }
  return;
}

// OnSequenceLoaded @ 146c57e70

void __thiscall
ALevelSequenceActor::OnSequenceLoaded
          (ALevelSequenceActor *this,FName *param_1,UPackage *param_2,Type param_3)

{
  return;
}

// PostInitProperties @ 146c58110

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

void __thiscall ALevelSequenceActor::PostInitProperties(ALevelSequenceActor *this)

{
  ULevelSequencePlayer *this_00;
  ALevelSequenceActor *local_18;
  longlong *local_10;
  
  AActor::PostInitProperties((AActor *)this);
  this_00 = (this->SequencePlayer).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_10 = &this->_padding_;
  if (this == (ALevelSequenceActor *)0x0) {
    local_10 = (longlong *)0x0;
  }
  local_18 = this;
  UMovieSceneSequencePlayer::SetPlaybackClient
            ((UMovieSceneSequencePlayer *)this_00,
             (TScriptInterface<IMovieScenePlaybackClient> *)&local_18);
  UMovieSceneSequencePlayer::SetPlaybackSettings
            ((UMovieSceneSequencePlayer *)(this->SequencePlayer).field0_0x0.DebugPtr,
             &this->PlaybackSettings);
  return;
}

// PostInitializeComponents @ 146c581b0

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

void __thiscall ALevelSequenceActor::PostInitializeComponents(ALevelSequenceActor *this)

{
  AActor::PostInitializeComponents((AActor *)this);
  if ((char)this->_padding_ == '\x03') {
    AActor::SetReplicates((AActor *)this,this->bReplicatePlayback);
  }
  UMovieSceneSequencePlayer::InitializeForTick
            ((UMovieSceneSequencePlayer *)(this->SequencePlayer).field0_0x0.DebugPtr,(UObject *)this
            );
  UMovieSceneSequencePlayer::SetPlaybackSettings
            ((UMovieSceneSequencePlayer *)(this->SequencePlayer).field0_0x0.DebugPtr,
             &this->PlaybackSettings);
  InitializePlayer(this);
  return;
}

// PostLoad @ 146c58220

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

void __thiscall ALevelSequenceActor::PostLoad(ALevelSequenceActor *this)

{
  FMovieSceneSequencePlaybackSettings *pFVar1;
  undefined1 uVar2;
  
  AActor::PostLoad((AActor *)this);
  uVar2 = this->field_0x328;
  pFVar1 = &this->PlaybackSettings;
  if (this->bAutoPlay_DEPRECATED != 0) {
    *(uint *)pFVar1 = *(uint *)pFVar1 ^ (this->bAutoPlay_DEPRECATED ^ pFVar1->bAutoPlay) & 1;
    this->field_0x328 = uVar2 & 0xfe;
  }
  UMovieSceneSequencePlayer::SetPlaybackSettings
            ((UMovieSceneSequencePlayer *)(this->SequencePlayer).field0_0x0.DebugPtr,pFVar1);
  return;
}

// PostNetReceive @ 146c58280

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALevelSequenceActor::PostNetReceive(ALevelSequenceActor *this)

{
  AActor::PostNetReceive((AActor *)this);
  InitializePlayer(this);
  return;
}

// PreInitializeComponents @ 146c58380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALevelSequenceActor::PreInitializeComponents(ALevelSequenceActor *this)

{
  FTopLevelAssetPath *pFVar1;
  FName FVar2;
  ULevelSequencePlayer *pUVar3;
  code *pcVar4;
  FName FVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  ULevel *this_00;
  ULevelStreaming *pUVar12;
  UWorld *pUVar13;
  UClass *pUVar14;
  FName *pFVar15;
  FTopLevelAssetPath *pFVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  ForAnyElementType FVar19;
  FName local_res8;
  UWorld *local_res10 [2];
  undefined1 local_res20 [8];
  FName local_98;
  FName local_90;
  FString local_88;
  FTopLevelAssetPath local_78;
  FTopLevelAssetPath local_68 [3];
  
  AActor::PreInitializeComponents((AActor *)this);
  pUVar13 = (UWorld *)0x0;
  local_68[0].PackageName.ComparisonIndex.Value = 0;
  local_68[0].PackageName.Number = 0;
  local_68[0].AssetName.ComparisonIndex.Value = 0;
  local_68[0].AssetName.Number = 0;
  this_00 = AActor::GetLevel((AActor *)this);
  if (this_00 != (ULevel *)0x0) {
    pUVar13 = (this_00->OwningWorld).field0_0x0.DebugPtr;
    pUVar12 = ULevelStreaming::FindStreamingLevel(this_00);
    if (pUVar12 != (ULevelStreaming *)0x0) {
      if (*(longlong *)&(this_00->WorldPartitionRuntimeCell).SoftObjectPtr.field_0x8 == 0) {
        pUVar14 = Z_Construct_UClass_UWorld_NoRegister();
        pUVar13 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar14)
        ;
      }
      else {
        pUVar13 = (UWorld *)(**(code **)(pUVar12->_padding_ + 0x308))(pUVar12);
        if ((pUVar13 == (UWorld *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StreamingWorld",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LevelSequence\\Private\\LevelSequenceActor.cpp"
                                ,0xba,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar12 = ULevelStreaming::FindStreamingLevel
                            ((pUVar13->PersistentLevel).field0_0x0.DebugPtr);
        if (pUVar12 == (ULevelStreaming *)0x0) goto LAB_146c58599;
      }
      if (pUVar12->PackageNameToLoad == (FName)0x0) {
        pFVar15 = (FName *)(**(code **)(pUVar12->_padding_ + 0x2e0))(pUVar12,local_res20);
      }
      else {
        pFVar15 = &local_res8;
        local_res8 = pUVar12->PackageNameToLoad;
      }
      ::FName::ToString(pFVar15,&local_88);
      pFVar18 = local_88.Data.AllocatorInstance.Data + (longlong)local_88.Data.ArrayNum * 2;
      do {
        if (pFVar18 == local_88.Data.AllocatorInstance.Data) goto LAB_146c58587;
        pFVar18 = pFVar18 + -2;
      } while (*(wchar_t *)pFVar18 != L'/');
      iVar17 = (int)((longlong)pFVar18 - (longlong)local_88.Data.AllocatorInstance.Data >> 1);
      if (iVar17 != -1) {
        iVar11 = local_88.Data.ArrayNum + -2;
        if (local_88.Data.ArrayNum == 0) {
          iVar11 = -1;
        }
        if (iVar17 < iVar11) {
          if ((((iVar17 + 1 < 0) || (local_88.Data.ArrayNum == 0)) ||
              (local_88.Data.ArrayNum + -1 <= iVar17 + 1)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                  ,0x107,
                                  L"String index out of bounds: Index %i from a string with a length of %i"
                                 ), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar15 = ::FName::FName(&local_98,
                                   (wchar_t *)
                                   (local_88.Data.AllocatorInstance.Data +
                                   ((longlong)iVar17 + 1) * 2));
          FVar19.Data = (FScriptContainerElement *)L"";
          if (local_88.Data.ArrayNum != 0) {
            FVar19.Data = local_88.Data.AllocatorInstance.Data;
          }
          FVar2 = *pFVar15;
          pFVar15 = ::FName::FName(&local_90,(wchar_t *)FVar19.Data);
          local_78.PackageName.ComparisonIndex.Value = 0;
          local_78.PackageName.Number = 0;
          local_78.AssetName.ComparisonIndex.Value = 0;
          local_78.AssetName.Number = 0;
          FTopLevelAssetPath::TrySetPath(&local_78,*pFVar15,FVar2);
          local_68[0].PackageName = local_78.PackageName;
          local_68[0].AssetName = local_78.AssetName;
        }
      }
LAB_146c58587:
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_146c58599:
  pUVar3 = (this->SequencePlayer).field0_0x0.DebugPtr;
  pFVar1 = &(this->WorldPartitionResolveData).SourceWorldAssetPath;
  uVar6 = (this->WorldPartitionResolveData).ContainerID.Guid.A;
  uVar7 = (this->WorldPartitionResolveData).ContainerID.Guid.B;
  uVar8 = (this->WorldPartitionResolveData).ContainerID.Guid.C;
  uVar9 = (this->WorldPartitionResolveData).ContainerID.Guid.D;
  pFVar16 = local_68;
  if (pFVar1->PackageName != (FName)0x0) {
    pFVar16 = pFVar1;
  }
  FVar2 = pFVar16->PackageName;
  FVar5 = pFVar16->AssetName;
  local_res10[0] = pUVar13;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  FWeakObjectPtr::operator=(&(pUVar3->WeakStreamingWorld).WeakPtr,(FObjectPtr)local_res10);
  (pUVar3->ContainerID).Guid.A = uVar6;
  (pUVar3->ContainerID).Guid.B = uVar7;
  (pUVar3->ContainerID).Guid.C = uVar8;
  (pUVar3->ContainerID).Guid.D = uVar9;
  (pUVar3->SourceAssetPath).PackageName = FVar2;
  (pUVar3->SourceAssetPath).AssetName = FVar5;
  return;
}

// RefreshBurnIn @ 146c58630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ALevelSequenceActor::RefreshBurnIn(ALevelSequenceActor *this)

{
  ULevelSequenceBurnInOptions *pUVar1;
  ULevelSequencePlayer *this_00;
  code *pcVar2;
  bool bVar3;
  UWorld *pUVar4;
  ULevelSequenceBurnIn *pUVar5;
  UFunction *pUVar6;
  UClass *local_res10;
  TObjectPtr<ULevelSequenceBurnInInitSettings>_u_0 local_res18;
  TObjectPtr<ULevelSequenceBurnInInitSettings>_u_0 local_res20;
  
  pUVar5 = (this->BurnInInstance).field0_0x0.DebugPtr;
  if (pUVar5 != (ULevelSequenceBurnIn *)0x0) {
    (**(code **)(pUVar5->_padding_ + 0x2d0))();
    (this->BurnInInstance).field0_0x0.DebugPtr = (ULevelSequenceBurnIn *)0x0;
  }
  pUVar1 = (this->BurnInOptions).field0_0x0.DebugPtr;
  if ((((pUVar1 != (ULevelSequenceBurnInOptions *)0x0) && (pUVar1->bUseBurnIn != false)) &&
      (this->bShowBurnin != false)) &&
     (local_res10 = FSoftClassPath::TryLoadClass<ULevelSequenceBurnIn>(&pUVar1->BurnInClass),
     local_res10 != (UClass *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    pUVar4 = AActor::GetWorld((AActor *)this);
    pUVar5 = CreateWidget<ULevelSequenceBurnIn,UWorld_*>
                       (pUVar4,(TSubclassOf<UUserWidget>)&local_res10,(FName)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar5 == (ULevelSequenceBurnIn *)0x0)) {
      (this->BurnInInstance).field0_0x0.DebugPtr = pUVar5;
      if (pUVar5 == (ULevelSequenceBurnIn *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
      (this->BurnInInstance).field0_0x0.DebugPtr = pUVar5;
    }
    ULevelSequenceBurnInOptions::ResetSettings((this->BurnInOptions).field0_0x0.DebugPtr);
    pUVar5 = (this->BurnInInstance).field0_0x0.DebugPtr;
    local_res18 = (((this->BurnInOptions).field0_0x0.DebugPtr)->Settings).field0_0x0;
    pUVar6 = UObject::FindFunctionChecked((UObject *)pUVar5,NAME_ULevelSequenceBurnIn_SetSettings);
    (**(code **)(pUVar5->_padding_ + 0x260))(pUVar5,pUVar6,&local_res18);
    pUVar5 = (this->BurnInInstance).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    (pUVar5->LevelSequenceActor).field0_0x0.DebugPtr = this;
    this_00 = (this->SequencePlayer).field0_0x0.DebugPtr;
    if (this_00 == (ULevelSequencePlayer *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6238924104678768624>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LevelSequence\\Private\\LevelSequenceBurnIn.cpp"
                         ,0x10,"SequencePlayer");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      TMulticastDelegateRegistration<void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
      ::AddUObject<ULevelSequenceBurnIn>
                ((TMulticastDelegateRegistration<void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
                  *)&this_00->_padding_,(ULevelSequenceBurnIn *)&local_res20.ObjectPtr,
                 (pmf_1f503f94 *)pUVar5);
      ULevelSequencePlayer::TakeFrameSnapshot(this_00,&pUVar5->FrameInformation);
    }
    UUserWidget::AddToViewport((UUserWidget *)(this->BurnInInstance).field0_0x0.DebugPtr,0);
  }
  return;
}

// RemoveBinding @ 146c589c0

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
ALevelSequenceActor::RemoveBinding
          (ALevelSequenceActor *this,FMovieSceneObjectBindingID *param_1,AActor *param_2)

{
  FTokenizedMessage *this_00;
  FMessageLog *this_01;
  FText *pFVar1;
  TSharedRef<FTokenizedMessage,1> *pTVar2;
  TSharedRef<FUObjectToken,1> *pTVar3;
  FMovieSceneEvaluationState *this_02;
  FName local_res10 [3];
  TSharedRef<IMessageToken,1> local_a8;
  FMovieSceneObjectBindingID local_98;
  TSharedRef<FTokenizedMessage,1> local_78;
  TSharedRef<FUObjectToken,1> local_68;
  FText local_58;
  TSharedRef<FTokenizedMessage,1> local_48;
  FMessageLog local_38;
  
  if ((((param_1->Guid).D == 0 && (param_1->Guid).C == 0) && (param_1->Guid).B == 0) &&
      (param_1->Guid).A == 0) {
    ::FName::FName(local_res10,"PIE");
    this_01 = FMessageLog::FMessageLog(&local_38,local_res10);
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_98,L"LevelSequenceActor",L"RemoveBinding_Warning",
                        L"The specified binding ID is not valid");
    pTVar2 = FMessageLog::Warning(this_01,&local_48,pFVar1);
    this_00 = pTVar2->Object;
    pFVar1 = FText::FText(&local_58);
    pTVar3 = FUObjectToken::Create(&local_68,(UObject *)this,pFVar1);
    local_a8.Object = (IMessageToken *)pTVar3->Object;
    local_a8.SharedReferenceCount.ReferenceController =
         (pTVar3->SharedReferenceCount).ReferenceController;
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTokenizedMessage::AddToken(this_00,&local_78,&local_a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    if ((longlong *)local_98.Guid._0_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_98.Guid._0_8_ + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_38);
    return;
  }
  local_98.Guid.A = (param_1->Guid).A;
  local_98.Guid.B = (param_1->Guid).B;
  local_98.Guid.C = (param_1->Guid).C;
  local_98.Guid.D = (param_1->Guid).D;
  local_98.SequenceID = param_1->SequenceID;
  local_98.ResolveParentIndex = param_1->ResolveParentIndex;
  UMovieSceneBindingOverrides::RemoveBinding
            ((this->BindingOverrides).field0_0x0.DebugPtr,&local_98,(UObject *)param_2);
  if ((this->SequencePlayer).field0_0x0.DebugPtr != (ULevelSequencePlayer *)0x0) {
    FMovieSceneObjectBindingID::ResolveSequenceID
              (param_1,(FMovieSceneSequenceID)(uint)local_res10,(IMovieScenePlayer *)0x0);
    this_02 = IMovieScenePlayer::GetEvaluationState
                        ((IMovieScenePlayer *)
                         &((this->SequencePlayer).field0_0x0.DebugPtr)->_padding_);
    FMovieSceneEvaluationState::Invalidate
              (this_02,&param_1->Guid,(FMovieSceneSequenceID *)local_res10);
  }
  return;
}

// RemoveBindingByTag @ 146c58b80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
ALevelSequenceActor::RemoveBindingByTag(ALevelSequenceActor *this,FName param_1,AActor *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ULevelSequence *pUVar3;
  FTokenizedMessage *this_00;
  longlong lVar4;
  FMovieSceneObjectBindingIDs *pFVar5;
  FMessageLog *this_01;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  TSharedRef<FTokenizedMessage,1> *pTVar9;
  TSharedRef<FUObjectToken,1> *pTVar10;
  FScriptContainerElement *pFVar11;
  FName local_res8;
  FName local_res10;
  TSharedRef<IMessageToken,1> local_f8;
  undefined1 local_e8 [32];
  TSharedRef<FTokenizedMessage,1> local_c8;
  TSharedRef<FUObjectToken,1> local_b8;
  FText local_a8;
  TSharedRef<FTokenizedMessage,1> local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FMessageLog local_58;
  
  pUVar3 = (this->LevelSequenceAsset).field0_0x0.DebugPtr;
  local_res10 = param_1;
  if (pUVar3 != (ULevelSequence *)0x0) {
    lVar4 = (**(code **)(pUVar3->_padding_ + 0x2f8))();
    pFVar5 = TMapBase<FName,FMovieSceneObjectBindingIDs,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>_>
             ::Find((TMapBase<FName,FMovieSceneObjectBindingIDs,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>_>
                     *)(lVar4 + 0xa8),local_res10);
    if (pFVar5 != (FMovieSceneObjectBindingIDs *)0x0) {
      pFVar11 = (pFVar5->IDs).AllocatorInstance.Data;
      iVar2 = (pFVar5->IDs).ArrayNum;
      pFVar1 = pFVar11 + (longlong)iVar2 * 0x18;
      while( true ) {
        if ((pFVar5->IDs).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FMovieSceneObjectBindingID_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res8);
        }
        if (pFVar11 == pFVar1) break;
        local_e8._0_8_ = *(undefined8 *)pFVar11;
        local_e8._8_8_ = *(undefined8 *)(pFVar11 + 8);
        local_e8._16_8_ = *(undefined8 *)(pFVar11 + 0x10);
        RemoveBinding(this,(FMovieSceneObjectBindingID *)local_e8,param_2);
        pFVar11 = pFVar11 + 0x18;
      }
      return;
    }
  }
  if (LevelSequenceActorCVars::bInvalidBindingTagWarnings == false) {
    return;
  }
  ::FName::FName(&local_res8,"PIE");
  this_01 = FMessageLog::FMessageLog(&local_58,&local_res8);
  pFVar6 = FText::FromName(&local_68,&local_res10);
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"LevelSequenceActor",L"RemoveBindingByTag",
                      L"Sequence did not contain any bindings with the tag \'{0}\'");
  pFVar8 = FTextFormat::FTextFormat((FTextFormat *)local_e8,pFVar7,Default);
  pFVar6 = FText::Format<FText>(&local_88,pFVar8,pFVar6);
  pTVar9 = FMessageLog::Warning(this_01,&local_98,pFVar6);
  this_00 = pTVar9->Object;
  pFVar6 = FText::FText(&local_a8);
  pTVar10 = FUObjectToken::Create(&local_b8,(UObject *)this,pFVar6);
  local_f8.Object = (IMessageToken *)pTVar10->Object;
  local_f8.SharedReferenceCount.ReferenceController =
       (pTVar10->SharedReferenceCount).ReferenceController;
  if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FTokenizedMessage::AddToken(this_00,&local_c8,&local_f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_58);
  return;
}

// ResetBinding @ 146c58f80

void __thiscall
ALevelSequenceActor::ResetBinding(ALevelSequenceActor *this,FMovieSceneObjectBindingID *param_1)

{
  FTokenizedMessage *this_00;
  FMessageLog *this_01;
  FText *pFVar1;
  TSharedRef<FTokenizedMessage,1> *pTVar2;
  TSharedRef<FUObjectToken,1> *pTVar3;
  FMovieSceneEvaluationState *this_02;
  FName local_res10 [3];
  TSharedRef<IMessageToken,1> local_a8;
  FMovieSceneObjectBindingID local_98;
  TSharedRef<FTokenizedMessage,1> local_78;
  TSharedRef<FUObjectToken,1> local_68;
  FText local_58;
  TSharedRef<FTokenizedMessage,1> local_48;
  FMessageLog local_38;
  
  if ((((param_1->Guid).D == 0 && (param_1->Guid).C == 0) && (param_1->Guid).B == 0) &&
      (param_1->Guid).A == 0) {
    ::FName::FName(local_res10,"PIE");
    this_01 = FMessageLog::FMessageLog(&local_38,local_res10);
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_98,L"LevelSequenceActor",L"ResetBinding_Warning",
                        L"The specified binding ID is not valid");
    pTVar2 = FMessageLog::Warning(this_01,&local_48,pFVar1);
    this_00 = pTVar2->Object;
    pFVar1 = FText::FText(&local_58);
    pTVar3 = FUObjectToken::Create(&local_68,(UObject *)this,pFVar1);
    local_a8.Object = (IMessageToken *)pTVar3->Object;
    local_a8.SharedReferenceCount.ReferenceController =
         (pTVar3->SharedReferenceCount).ReferenceController;
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTokenizedMessage::AddToken(this_00,&local_78,&local_a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    if ((longlong *)local_98.Guid._0_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_98.Guid._0_8_ + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_38);
    return;
  }
  local_98.Guid.A = (param_1->Guid).A;
  local_98.Guid.B = (param_1->Guid).B;
  local_98.Guid.C = (param_1->Guid).C;
  local_98.Guid.D = (param_1->Guid).D;
  local_98.SequenceID = param_1->SequenceID;
  local_98.ResolveParentIndex = param_1->ResolveParentIndex;
  UMovieSceneBindingOverrides::ResetBinding((this->BindingOverrides).field0_0x0.DebugPtr,&local_98);
  if ((this->SequencePlayer).field0_0x0.DebugPtr != (ULevelSequencePlayer *)0x0) {
    FMovieSceneObjectBindingID::ResolveSequenceID
              (param_1,(FMovieSceneSequenceID)(uint)local_res10,(IMovieScenePlayer *)0x0);
    this_02 = IMovieScenePlayer::GetEvaluationState
                        ((IMovieScenePlayer *)
                         &((this->SequencePlayer).field0_0x0.DebugPtr)->_padding_);
    FMovieSceneEvaluationState::Invalidate
              (this_02,&param_1->Guid,(FMovieSceneSequenceID *)local_res10);
  }
  return;
}

// ResetBindings @ 146c59140

void __thiscall ALevelSequenceActor::ResetBindings(ALevelSequenceActor *this)

{
  ULevelSequencePlayer *pUVar1;
  FMovieSceneEvaluationState *this_00;
  
  UMovieSceneBindingOverrides::ResetBindings((this->BindingOverrides).field0_0x0.DebugPtr);
  pUVar1 = (this->SequencePlayer).field0_0x0.DebugPtr;
  if (pUVar1 != (ULevelSequencePlayer *)0x0) {
    this_00 = IMovieScenePlayer::GetEvaluationState((IMovieScenePlayer *)&pUVar1->_padding_);
    FMovieSceneEvaluationState::ClearObjectCaches
              (this_00,(IMovieScenePlayer *)&((this->SequencePlayer).field0_0x0.DebugPtr)->_padding_
              );
    return;
  }
  return;
}

// RetrieveBindingOverrides @ 146c59ed0

bool __thiscall
ALevelSequenceActor::RetrieveBindingOverrides
          (ALevelSequenceActor *this,FGuid *param_1,FMovieSceneSequenceID param_2,
          TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  bool bVar1;
  
  bVar1 = UMovieSceneBindingOverrides::LocateBoundObjects
                    ((UMovieSceneBindingOverrides *)this->_padding_,param_1,param_2,param_3);
  return bVar1;
}

// RewindForReplay @ 146c59ee0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ALevelSequenceActor::RewindForReplay(ALevelSequenceActor *this)

{
  ULevelSequencePlayer *this_00;
  
  this_00 = (this->SequencePlayer).field0_0x0.DebugPtr;
  if (this_00 != (ULevelSequencePlayer *)0x0) {
    UMovieSceneSequencePlayer::Stop((UMovieSceneSequencePlayer *)this_00);
    (((FMovieSceneSequenceReplProperties *)((longlong)&this_00->_padding_ + 4))->LastKnownPosition).
    FrameNumber = 0;
    (((FMovieSceneSequenceReplProperties *)((longlong)&this_00->_padding_ + 4))->LastKnownPosition).
    SubFrame = 0.0;
    *(undefined1 *)((longlong)&this_00->_padding_ + 4) = 0;
    this_00->_padding_ = 0;
  }
  return;
}

// SetBinding @ 146c5b030

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
ALevelSequenceActor::SetBinding
          (ALevelSequenceActor *this,FMovieSceneObjectBindingID *param_1,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int iVar1;
  FTokenizedMessage *this_00;
  UMovieSceneBindingOverrides *this_01;
  FScriptContainerElement *pFVar2;
  FMessageLog *this_02;
  FText *pFVar3;
  TSharedRef<FTokenizedMessage,1> *pTVar4;
  TSharedRef<FUObjectToken,1> *pTVar5;
  FMovieSceneEvaluationState *this_03;
  FName local_res10;
  undefined1 local_c8 [8];
  FSharedReferencer<1> local_c0;
  FMovieSceneObjectBindingID local_b8;
  TSharedRef<FTokenizedMessage,1> local_98;
  TSharedRef<FUObjectToken,1> local_88;
  FText local_78;
  TSharedRef<FTokenizedMessage,1> local_68;
  FMessageLog local_58;
  
  if ((((param_1->Guid).D == 0 && (param_1->Guid).C == 0) && (param_1->Guid).B == 0) &&
      (param_1->Guid).A == 0) {
    ::FName::FName(&local_res10,"PIE");
    this_02 = FMessageLog::FMessageLog(&local_58,&local_res10);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_b8,L"LevelSequenceActor",L"SetBinding_Warning",
                        L"The specified binding ID is not valid");
    pTVar4 = FMessageLog::Warning(this_02,&local_68,pFVar3);
    this_00 = pTVar4->Object;
    pFVar3 = FText::FText(&local_78);
    pTVar5 = FUObjectToken::Create(&local_88,(UObject *)this,pFVar3);
    local_c8 = (undefined1  [8])pTVar5->Object;
    local_c0.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
    if (local_c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_c0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTokenizedMessage::AddToken(this_00,&local_98,(TSharedRef<IMessageToken,1> *)local_c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    if ((longlong *)local_b8.Guid._0_8_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_b8.Guid._0_8_ + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_58);
    return;
  }
  iVar1 = param_2->ArrayNum;
  this_01 = (this->BindingOverrides).field0_0x0.DebugPtr;
  pFVar2 = (param_2->AllocatorInstance).Data;
  local_c8 = (undefined1  [8])0x0;
  local_c0.ReferenceController._0_4_ = iVar1;
  if (iVar1 == 0) {
    local_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,(ForAnyElementType *)local_c8,iVar1,
               (int *)((longlong)&local_c0.ReferenceController + 4));
    ConstructItems<UObject_*,AActor_*,int>((void *)local_c8,(AActor **)pFVar2,iVar1);
  }
  local_b8.Guid.A = (param_1->Guid).A;
  local_b8.Guid.B = (param_1->Guid).B;
  local_b8.Guid.C = (param_1->Guid).C;
  local_b8.Guid.D = (param_1->Guid).D;
  local_b8.SequenceID = param_1->SequenceID;
  local_b8.ResolveParentIndex = param_1->ResolveParentIndex;
  UMovieSceneBindingOverrides::SetBinding
            (this_01,&local_b8,(TArray<UObject_*,TSizedDefaultAllocator<32>_> *)local_c8,param_3);
  if (local_c8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_c8);
  }
  if ((this->SequencePlayer).field0_0x0.DebugPtr != (ULevelSequencePlayer *)0x0) {
    FMovieSceneObjectBindingID::ResolveSequenceID
              (param_1,(FMovieSceneSequenceID)(uint)&local_res10,(IMovieScenePlayer *)0x0);
    this_03 = IMovieScenePlayer::GetEvaluationState
                        ((IMovieScenePlayer *)
                         &((this->SequencePlayer).field0_0x0.DebugPtr)->_padding_);
    FMovieSceneEvaluationState::Invalidate
              (this_03,&param_1->Guid,(FMovieSceneSequenceID *)&local_res10);
  }
  return;
}

// SetBindingByTag @ 146c5b260

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
ALevelSequenceActor::SetBindingByTag
          (ALevelSequenceActor *this,FName param_1,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ULevelSequence *pUVar3;
  FTokenizedMessage *this_00;
  longlong lVar4;
  FMovieSceneObjectBindingIDs *pFVar5;
  FMessageLog *this_01;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  TSharedRef<FTokenizedMessage,1> *pTVar9;
  TSharedRef<FUObjectToken,1> *pTVar10;
  FScriptContainerElement *pFVar11;
  FName local_res8;
  FName local_res10;
  TSharedRef<IMessageToken,1> local_108;
  undefined1 local_f8 [32];
  TSharedRef<FTokenizedMessage,1> local_d8;
  TSharedRef<FUObjectToken,1> local_c8;
  FText local_b8;
  TSharedRef<FTokenizedMessage,1> local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FMessageLog local_68;
  
  pUVar3 = (this->LevelSequenceAsset).field0_0x0.DebugPtr;
  local_res10 = param_1;
  if (pUVar3 != (ULevelSequence *)0x0) {
    lVar4 = (**(code **)(pUVar3->_padding_ + 0x2f8))();
    pFVar5 = TMapBase<FName,FMovieSceneObjectBindingIDs,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>_>
             ::Find((TMapBase<FName,FMovieSceneObjectBindingIDs,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieSceneObjectBindingIDs,0>_>
                     *)(lVar4 + 0xa8),local_res10);
    if (pFVar5 != (FMovieSceneObjectBindingIDs *)0x0) {
      pFVar11 = (pFVar5->IDs).AllocatorInstance.Data;
      iVar2 = (pFVar5->IDs).ArrayNum;
      pFVar1 = pFVar11 + (longlong)iVar2 * 0x18;
      while( true ) {
        if ((pFVar5->IDs).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FMovieSceneObjectBindingID_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res8);
        }
        if (pFVar11 == pFVar1) break;
        local_f8._0_8_ = *(undefined8 *)pFVar11;
        local_f8._8_8_ = *(undefined8 *)(pFVar11 + 8);
        local_f8._16_8_ = *(undefined8 *)(pFVar11 + 0x10);
        SetBinding(this,(FMovieSceneObjectBindingID *)local_f8,param_2,param_3);
        pFVar11 = pFVar11 + 0x18;
      }
      return;
    }
  }
  if (LevelSequenceActorCVars::bInvalidBindingTagWarnings == false) {
    return;
  }
  ::FName::FName(&local_res8,"PIE");
  this_01 = FMessageLog::FMessageLog(&local_68,&local_res8);
  pFVar6 = FText::FromName(&local_78,&local_res10);
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_88,L"LevelSequenceActor",L"SetBindingByTag",
                      L"Sequence did not contain any bindings with the tag \'{0}\'");
  pFVar8 = FTextFormat::FTextFormat((FTextFormat *)local_f8,pFVar7,Default);
  pFVar6 = FText::Format<FText>(&local_98,pFVar8,pFVar6);
  pTVar9 = FMessageLog::Warning(this_01,&local_a8,pFVar6);
  this_00 = pTVar9->Object;
  pFVar6 = FText::FText(&local_b8);
  pTVar10 = FUObjectToken::Create(&local_c8,(UObject *)this,pFVar6);
  local_108.Object = (IMessageToken *)pTVar10->Object;
  local_108.SharedReferenceCount.ReferenceController =
       (pTVar10->SharedReferenceCount).ReferenceController;
  if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FTokenizedMessage::AddToken(this_00,&local_d8,&local_108);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_68);
  return;
}

// SetReplicatePlayback @ 146c5b5b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALevelSequenceActor::SetReplicatePlayback(ALevelSequenceActor *this,bool param_1)

{
  this->bReplicatePlayback = '\0';
  this->field_0x328 = this->field_0x328 | param_1 << 2;
  AActor::SetReplicates((AActor *)this,param_1);
  return;
}

// SetSequence @ 146c5b5d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALevelSequenceActor::SetSequence(ALevelSequenceActor *this,ULevelSequence *param_1)

{
  ULevelSequencePlayer *this_00;
  bool bVar1;
  ULevel *pUVar2;
  
  bVar1 = UMovieSceneSequencePlayer::IsPlaying
                    ((UMovieSceneSequencePlayer *)(this->SequencePlayer).field0_0x0.DebugPtr);
  if (!bVar1) {
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_1 == (ULevelSequence *)0x0))
    {
      (this->LevelSequenceAsset).field0_0x0.DebugPtr = param_1;
      if (param_1 == (ULevelSequence *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)param_1);
      (this->LevelSequenceAsset).field0_0x0.DebugPtr = param_1;
    }
    this_00 = (this->SequencePlayer).field0_0x0.DebugPtr;
    pUVar2 = AActor::GetLevel((AActor *)this);
    ULevelSequencePlayer::Initialize(this_00,param_1,pUVar2,&this->CameraSettings);
  }
  return;
}

// ShowBurnin @ 146c5b750

void __thiscall ALevelSequenceActor::ShowBurnin(ALevelSequenceActor *this)

{
  this->bShowBurnin = true;
  RefreshBurnIn(this);
  return;
}

// StaticRegisterNativesALevelSequenceActor @ 146c5c4a0

void __cdecl ALevelSequenceActor::StaticRegisterNativesALevelSequenceActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x10;
  local_18.DataPtr = Z_Construct_UClass_ALevelSequenceActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ValidateGeneratedRepEnums @ 146c5d710

void __thiscall
ALevelSequenceActor::ValidateGeneratedRepEnums
          (ALevelSequenceActor *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  int *piVar5;
  FName FVar6;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&Name_SequencePlayer,L"SequencePlayer");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&Name_LevelSequenceAsset,L"LevelSequenceAsset");
    _Init_thread_footer(&::_TSS1);
  }
  if ((param_1->ArrayNum < 0xb) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xa0);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  FVar4 = FVar6;
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  if (Name_SequencePlayer == FVar4) {
    if ((param_1->ArrayNum < 0xc) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xb0);
    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
    if (bVar3) {
      FVar6 = *(FName *)((longlong)pvVar1 + 0x20);
    }
    if (Name_LevelSequenceAsset == FVar6) {
      return;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\LevelSequence\\UHT\\LevelSequenceActor.gen.cpp"
                     ,0x61a,
                     L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALevelSequenceActor"
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// _getUObject @ 146c5e3b0

UObject * __thiscall ALevelSequenceActor::_getUObject(ALevelSequenceActor *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 146c5e3c0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   ALevelSequenceActor::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall ALevelSequenceActor::_getUObject_adjustor_8__(ALevelSequenceActor *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((ALevelSequenceActor *)
                       &this[-1].WorldPartitionResolveData.SourceWorldAssetPath.AssetName.Number);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{16}' @ 146c5e3d0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   ALevelSequenceActor::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall ALevelSequenceActor::_getUObject_adjustor_16__(ALevelSequenceActor *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((ALevelSequenceActor *)
                       &this[-1].WorldPartitionResolveData.SourceWorldAssetPath.PackageName.Number);
  return (UObject *)pUVar1;
}

// execAddBinding @ 146c5e460

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ALevelSequenceActor::execAddBinding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  AActor *local_res20;
  FGuid local_48;
  int local_38;
  int iStack_34;
  FMovieSceneObjectBindingID local_28;
  
  iStack_34 = -1;
  local_48.A = 0;
  local_48.B = 0;
  local_48.C = 0;
  local_48.D = 0;
  local_38 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28.ResolveParentIndex = iStack_34;
  local_28.SequenceID = local_38;
  local_28.Guid.A = local_48.A;
  local_28.Guid.B = local_48.B;
  local_28.Guid.C = local_48.C;
  local_28.Guid.D = local_48.D;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddBinding((ALevelSequenceActor *)param_1,&local_28,local_res20,local_res10[0] != 0);
  return;
}

// execAddBindingByTag @ 146c5e5b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
ALevelSequenceActor::execAddBindingByTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  FName local_res20;
  AActor *local_18 [2];
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_18[0] = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddBindingByTag((ALevelSequenceActor *)param_1,local_res20,local_18[0],local_res10[0] != 0);
  return;
}

// execFindNamedBinding @ 146c5eef0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
ALevelSequenceActor::execFindNamedBinding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName local_res8;
  FMovieSceneObjectBindingID local_28;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x13].field_0x8 == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7802630802759483964>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LevelSequence\\Private\\LevelSequenceActor.cpp"
                       ,0x23c,"GetSequencePlayer()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_28.Guid.A = 0;
    local_28.Guid.B = 0;
    local_28.Guid.C = 0;
    local_28.Guid.D = 0;
    local_28.SequenceID = 0;
    local_28.ResolveParentIndex = -1;
  }
  else {
    UMovieSceneSequence::FindBindingByTag
              (*(UMovieSceneSequence **)(*(longlong *)&param_1[0x13].field_0x8 + 0x2d0),&local_28,
               local_res8);
  }
  *(undefined8 *)param_3 = local_28.Guid._0_8_;
  *(undefined8 *)((longlong)param_3 + 8) = local_28.Guid._8_8_;
  *(ulonglong *)((longlong)param_3 + 0x10) =
       CONCAT44(local_28.ResolveParentIndex,local_28.SequenceID);
  return;
}

// execFindNamedBindings @ 146c5f000

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
ALevelSequenceActor::execFindNamedBindings(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  TArray<FMovieSceneObjectBindingID,TSizedDefaultAllocator<32>_> *pTVar6;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x13].field_0x8 == 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7802630802759483973>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LevelSequence\\Private\\LevelSequenceActor.cpp"
                       ,0x245,"GetSequencePlayer()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`ALevelSequenceActor::FindNamedBindings'::__l2::
               _dynamic_atexit_destructor_for__EmptyBindings__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    pTVar6 = &EmptyBindings;
  }
  else {
    pTVar6 = UMovieSceneSequence::FindBindingsByTag
                       (*(UMovieSceneSequence **)(*(longlong *)&param_1[0x13].field_0x8 + 0x2d0),
                        local_res8);
  }
  if (param_3 != pTVar6) {
    iVar2 = pTVar6->ArrayNum;
    piVar1 = (int *)((longlong)param_3 + 0xc);
    _Src = (pTVar6->AllocatorInstance).Data;
    *(int *)((longlong)param_3 + 8) = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar2,*piVar1,param_3,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy(*(void **)param_3,_Src,(longlong)iVar2 * 0x18);
    }
  }
  return;
}

// execGetSequence @ 146c60510

void __cdecl ALevelSequenceActor::execGetSequence(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x13].field_0x10;
  return;
}

// execGetSequencePlayer @ 146c605f0

void __cdecl
ALevelSequenceActor::execGetSequencePlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x13].field_0x8;
  return;
}

// execHideBurnin @ 146c60f10

void __cdecl ALevelSequenceActor::execHideBurnin(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  HideBurnin((ALevelSequenceActor *)param_1);
  return;
}

// execRemoveBinding @ 146c61080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ALevelSequenceActor::execRemoveBinding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  AActor *local_res10;
  FGuid local_48;
  int local_38;
  int iStack_34;
  FMovieSceneObjectBindingID local_28;
  
  iStack_34 = -1;
  local_48.A = 0;
  local_48.B = 0;
  local_48.C = 0;
  local_48.D = 0;
  local_38 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28.ResolveParentIndex = iStack_34;
  local_28.SequenceID = local_38;
  local_28.Guid.A = local_48.A;
  local_28.Guid.B = local_48.B;
  local_28.Guid.C = local_48.C;
  local_28.Guid.D = local_48.D;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveBinding((ALevelSequenceActor *)param_1,&local_28,local_res10);
  return;
}

// execRemoveBindingByTag @ 146c61180

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
ALevelSequenceActor::execRemoveBindingByTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  AActor *local_res20;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveBindingByTag((ALevelSequenceActor *)param_1,local_res10,local_res20);
  return;
}

// execResetBinding @ 146c612e0

void __cdecl ALevelSequenceActor::execResetBinding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FTokenizedMessage *this;
  FMessageLog *this_00;
  FText *pFVar2;
  TSharedRef<FTokenizedMessage,1> *pTVar3;
  TSharedRef<FUObjectToken,1> *pTVar4;
  FMovieSceneEvaluationState *this_01;
  FName local_res10;
  undefined8 local_e8;
  undefined8 uStack_e0;
  int local_d8;
  int iStack_d4;
  TSharedRef<IMessageToken,1> local_d0;
  FMovieSceneObjectBindingID local_b8;
  FMovieSceneObjectBindingID local_98;
  TSharedRef<FTokenizedMessage,1> local_78;
  TSharedRef<FUObjectToken,1> local_68;
  FText local_58;
  TSharedRef<FTokenizedMessage,1> local_48;
  FMessageLog local_38;
  
  iStack_d4 = -1;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_b8.ResolveParentIndex = iStack_d4;
  local_b8.SequenceID = local_d8;
  local_98.Guid.A = (uint)local_e8;
  local_98.Guid.B = local_e8._4_4_;
  local_98.Guid.C = (uint)uStack_e0;
  local_98.Guid.D = uStack_e0._4_4_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_98._16_8_ = local_b8._16_8_;
  if (((local_e8._4_4_ == 0 && uStack_e0._4_4_ == 0) && (uint)uStack_e0 == 0) && (uint)local_e8 == 0
     ) {
    ::FName::FName(&local_res10,"PIE");
    this_00 = FMessageLog::FMessageLog(&local_38,&local_res10);
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_b8,L"LevelSequenceActor",L"ResetBinding_Warning",
                        L"The specified binding ID is not valid");
    pTVar3 = FMessageLog::Warning(this_00,&local_48,pFVar2);
    this = pTVar3->Object;
    pFVar2 = FText::FText(&local_58);
    pTVar4 = FUObjectToken::Create(&local_68,param_1,pFVar2);
    local_d0.Object = (IMessageToken *)pTVar4->Object;
    local_d0.SharedReferenceCount.ReferenceController =
         (pTVar4->SharedReferenceCount).ReferenceController;
    if (local_d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTokenizedMessage::AddToken(this,&local_78,&local_d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    if ((longlong *)CONCAT44(local_b8.Guid.B,local_b8.Guid.A) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(local_b8.Guid.B,local_b8.Guid.A) + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_38);
  }
  else {
    local_b8.Guid.A = (uint)local_e8;
    local_b8.Guid.B = local_e8._4_4_;
    local_b8.Guid.C = (uint)uStack_e0;
    local_b8.Guid.D = uStack_e0._4_4_;
    UMovieSceneBindingOverrides::ResetBinding
              (*(UMovieSceneBindingOverrides **)(param_1 + 0x14),&local_b8);
    if (*(longlong *)&param_1[0x13].field_0x8 != 0) {
      FMovieSceneObjectBindingID::ResolveSequenceID
                (&local_98,(FMovieSceneSequenceID)(uint)&local_res10,(IMovieScenePlayer *)0x0);
      this_01 = IMovieScenePlayer::GetEvaluationState
                          ((IMovieScenePlayer *)(*(longlong *)&param_1[0x13].field_0x8 + 0x28));
      FMovieSceneEvaluationState::Invalidate
                (this_01,&local_98.Guid,(FMovieSceneSequenceID *)&local_res10);
    }
  }
  return;
}

// execResetBindings @ 146c61500

void __cdecl ALevelSequenceActor::execResetBindings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMovieSceneEvaluationState *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UMovieSceneBindingOverrides::ResetBindings(*(UMovieSceneBindingOverrides **)(param_1 + 0x14));
  if (*(longlong *)&param_1[0x13].field_0x8 != 0) {
    this = IMovieScenePlayer::GetEvaluationState
                     ((IMovieScenePlayer *)(*(longlong *)&param_1[0x13].field_0x8 + 0x28));
    FMovieSceneEvaluationState::ClearObjectCaches
              (this,(IMovieScenePlayer *)(*(longlong *)&param_1[0x13].field_0x8 + 0x28));
    return;
  }
  return;
}

// execSetBinding @ 146c61570

void __cdecl ALevelSequenceActor::execSetBinding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [2];
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_68;
  FGuid local_58;
  int local_48;
  int iStack_44;
  FMovieSceneObjectBindingID local_38;
  
  iStack_44 = -1;
  local_58.A = 0;
  local_58.B = 0;
  local_58.C = 0;
  local_58.D = 0;
  local_48 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 0;
  pTVar2 = &local_68;
  if ((TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38.ResolveParentIndex = iStack_44;
  local_38.SequenceID = local_48;
  local_38.Guid.A = local_58.A;
  local_38.Guid.B = local_58.B;
  local_38.Guid.C = local_58.C;
  local_38.Guid.D = local_58.D;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetBinding((ALevelSequenceActor *)param_1,&local_38,pTVar2,local_res10[0] != 0);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// execSetBindingByTag @ 146c616d0

void __cdecl
ALevelSequenceActor::execSetBindingByTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [4];
  FName local_res20;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_28;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  pTVar2 = &local_28;
  if ((TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetBindingByTag((ALevelSequenceActor *)param_1,local_res20,pTVar2,local_res10[0] != 0);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execSetReplicatePlayback @ 146c61cc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
ALevelSequenceActor::execSetReplicatePlayback(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x14].field_0x8 = param_1[0x14].field_0x8 & 0xfb;
  param_1[0x14].field_0x8 = param_1[0x14].field_0x8 | (local_res8[0] != 0) << 2;
  AActor::SetReplicates((AActor *)param_1,local_res8[0] != 0);
  return;
}

// execSetSequence @ 146c61d60

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ALevelSequenceActor::execSetSequence(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ULevelSequencePlayer *this;
  ULevelSequence *pUVar2;
  bool bVar3;
  ULevel *pUVar4;
  ULevelSequence *local_res8;
  
  local_res8 = (ULevelSequence *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = UMovieSceneSequencePlayer::IsPlaying
                    (*(UMovieSceneSequencePlayer **)&param_1[0x13].field_0x8);
  if (!bVar3) {
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar2 == (ULevelSequence *)0x0)) {
      *(ULevelSequence **)&param_1[0x13].field_0x10 = pUVar2;
      if (pUVar2 == (ULevelSequence *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
      *(ULevelSequence **)&param_1[0x13].field_0x10 = pUVar2;
    }
    this = *(ULevelSequencePlayer **)&param_1[0x13].field_0x8;
    pUVar4 = AActor::GetLevel((AActor *)param_1);
    ULevelSequencePlayer::Initialize
              (this,pUVar2,pUVar4,(FLevelSequenceCameraSettings *)&param_1[0x13].field_0x18);
  }
  return;
}

// execShowBurnin @ 146c61e50

void __cdecl ALevelSequenceActor::execShowBurnin(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x14].field_0x20 = 1;
  RefreshBurnIn((ALevelSequenceActor *)param_1);
  return;
}

