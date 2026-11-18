// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 26

// StaticClass @ 14dc9b2f0

UClass * __cdecl UMovieGraphSequenceDataSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphSequenceDataSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphSequenceDataSource",
               &Z_Registration_Info_UClass_UMovieGraphSequenceDataSource.InnerSingleton,
               StaticRegisterNativesUMovieGraphSequenceDataSource,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphSequenceDataSource>,
               InternalVTableHelperCtorCaller<UMovieGraphSequenceDataSource>,local_res8,
               UMovieGraphDataSourceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphSequenceDataSource.InnerSingleton;
}

// UMovieGraphSequenceDataSource @ 14dcb1150

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieGraphSequenceDataSource * __thiscall
UMovieGraphSequenceDataSource::UMovieGraphSequenceDataSource
          (UMovieGraphSequenceDataSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphSequenceDataSource__6B_;
  (this->LevelSequenceActor).field0_0x0.DebugPtr = (ALevelSequenceActor *)0x0;
  (this->CustomSequenceTimeController).Object = (FMovieGraphSequenceTimeController *)0x0;
  (this->CustomSequenceTimeController).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CachedSequenceHierarchyRoot).Object = (FCameraCutSubSectionHierarchyNode *)0x0;
  (this->CachedSequenceHierarchyRoot).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UMovieGraphSequenceDataSource @ 14dcb1190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieGraphSequenceDataSource * __thiscall
UMovieGraphSequenceDataSource::UMovieGraphSequenceDataSource(UMovieGraphSequenceDataSource *this)

{
  TSharedPtr<UE::MovieGraph::FMovieGraphSequenceTimeController,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FObjectInitializer *pFVar4;
  UMovieGraphSequenceDataSource *pUVar5;
  FMovieGraphSequenceTimeController *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FMovieGraphSequenceTimeController *local_28;
  FSharedReferencer<1> FStack_20;
  
  pFVar4 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar4);
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&___7UMovieGraphSequenceDataSource__6B_;
  pTVar1 = &this->CustomSequenceTimeController;
  (this->LevelSequenceActor).field0_0x0.DebugPtr = (ALevelSequenceActor *)0x0;
  pTVar1->Object = (FMovieGraphSequenceTimeController *)0x0;
  (this->CustomSequenceTimeController).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CachedSequenceHierarchyRoot).Object = (FCameraCutSubSectionHierarchyNode *)0x0;
  (this->CachedSequenceHierarchyRoot).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FStack_20.ReferenceController = ::operator_new(0x48);
  if (FStack_20.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_28 = ___xmm_00000000000000000000000000000010;
    pFVar6 = (FMovieGraphSequenceTimeController *)&DAT_00000010;
    FStack_20.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_20.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pFVar6 = (FMovieGraphSequenceTimeController *)(FStack_20.ReferenceController + 1);
    (FStack_20.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_20.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieGraphSequenceTimeController_MovieGraph_UE___00_SharedPointerInternals__6B_
    ;
    FStack_20.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[2]._padding_ = 0;
    *(undefined2 *)&FStack_20.ReferenceController[2].SharedReferenceCount.field_0x1 = 0;
    FStack_20.ReferenceController[2].SharedReferenceCount.field_0x3 = 0;
    FStack_20.ReferenceController[3]._padding_ = 1;
    *(undefined1 *)&FStack_20.ReferenceController[2].SharedReferenceCount = 0;
    FStack_20.ReferenceController[2].WeakReferenceCount = (atomic<int>)0xea60;
    FStack_20.ReferenceController[1]._padding_ =
         (longlong)&___7FMovieGraphSequenceTimeController_MovieGraph_UE__6B_;
    FStack_20.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    FStack_20.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&FStack_20.ReferenceController[4]._padding_ = 0x18;
    *(undefined4 *)((longlong)&FStack_20.ReferenceController[4]._padding_ + 4) = 1;
    if (pFVar6 == (FMovieGraphSequenceTimeController *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UMovieGraphSequenceDataSource *)(*pcVar2)();
        return pUVar5;
      }
    }
    LOCK();
    (FStack_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar7 = FStack_20.ReferenceController;
    local_28 = pFVar6;
  }
  if (pTVar1 != (TSharedPtr<UE::MovieGraph::FMovieGraphSequenceTimeController,1> *)&local_28) {
    pTVar1->Object = pFVar6;
    local_28 = (FMovieGraphSequenceTimeController *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CustomSequenceTimeController).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return this;
}

// ~UMovieGraphSequenceDataSource @ 14dcb33b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphSequenceDataSource::~UMovieGraphSequenceDataSource(UMovieGraphSequenceDataSource *this)

{
  this->_padding_ = (longlong)&___7UMovieGraphSequenceDataSource__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedSequenceHierarchyRoot).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CustomSequenceTimeController).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7UMovieGraphDataSourceBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CacheDataPreJob @ 14dcbdc00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphSequenceDataSource::CacheDataPreJob
          (UMovieGraphSequenceDataSource *this,FMovieGraphInitConfig *param_1)

{
  int iVar1;
  UWorld *this_00;
  UGameViewportClient *pUVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  ULevelSequence *pUVar5;
  uint uVar6;
  
  GAreScreenMessagesEnabled = false;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  pUVar2 = UWorld::GetGameViewport(this_00);
  if (pUVar2 != (UGameViewportClient *)0x0) {
    uVar6 = 0;
    if (param_1->bRenderViewport == false) {
      uVar6 = 2;
    }
    pUVar2->bDisableWorldRendering = uVar6 >> 1;
  }
  pUVar3 = UMovieGraphPipeline::StaticClass();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  pUVar5 = (ULevelSequence *)
           FSoftObjectPath::TryLoad
                     ((FSoftObjectPath *)(*(longlong *)&pUVar4[5].field_0x18 + 0x38),
                      (FUObjectSerializeContext *)0x0);
  if (pUVar5 != (ULevelSequence *)0x0) {
    pUVar3 = Z_Construct_UClass_ULevelSequence_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      CacheLevelSequenceData(this,pUVar5);
    }
  }
  return;
}

// CacheHierarchyForShot @ 14dcbdcd0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphSequenceDataSource::CacheHierarchyForShot
          (UMovieGraphSequenceDataSource *this,TObjectPtr<UMoviePipelineExecutorShot> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_18;
  
  pTVar1 = (((param_1->field0_0x0).DebugPtr)->ShotInfo).SubSectionHierarchy.SharedReferenceCount.
           ReferenceController;
  local_18.Object = (((param_1->field0_0x0).DebugPtr)->ShotInfo).SubSectionHierarchy.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  MoviePipeline::SaveOrRestoreSubSectionHierarchy(&local_18,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// CacheLevelSequenceData @ 14dcbdd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphSequenceDataSource::CacheLevelSequenceData
          (UMovieGraphSequenceDataSource *this,ULevelSequence *param_1)

{
  int *piVar1;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *pTVar2;
  FMovieSceneSequencePlaybackSettings *pFVar3;
  undefined1 *puVar4;
  int iVar5;
  longlong *plVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  UClass *pUVar10;
  UWorld *pUVar11;
  AActor *pAVar12;
  ALevelSequenceActor *this_00;
  ULevelSequence *pUVar13;
  TObjectPtr<ALevelSequenceActor>_u_0 TVar14;
  ULevelSequencePlayer *pUVar15;
  FActorSpawnParameters *pFVar16;
  TObjectPtr<ALevelSequenceActor>_u_0 TVar17;
  FString *pFVar18;
  longlong *plVar19;
  TObjectPtr<ALevelSequenceActor>_u_0 TVar20;
  wchar_t *pwVar21;
  FCameraCutSubSectionHierarchyNode *pFVar22;
  wchar_t *pwVar23;
  undefined1 auStackY_1b8 [32];
  FCameraCutSubSectionHierarchyNode *local_188;
  TObjectPtr<ALevelSequenceActor>_u_0 local_180;
  UClass *local_178;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_170;
  TSharedPtr<FMovieSceneTimeController,1> local_160;
  TActorIteratorBase<TActorIterator<ALevelSequenceActor>_> local_148;
  undefined1 local_e8 [24];
  FString local_d0;
  undefined1 local_b8 [112];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  TVar20.DebugPtr = (ALevelSequenceActor *)0x0;
  pUVar10 = Z_Construct_UClass_ALevelSequenceActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  pUVar11 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  local_148.Flags = OnlyActiveLevels|SkipPendingKill;
  local_148.State.bIsSet = false;
  local_178 = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  FActorIteratorState::FActorIteratorState
            (&local_148.State.TypedValue,pUVar11,(TSubclassOf<AActor>)&local_178);
  local_148.State.bIsSet = true;
  TVar14.DebugPtr = TVar20.DebugPtr;
  while( true ) {
    TActorIteratorBase<TActorIterator<ALevelSequenceActor>_>::operator++(&local_148);
    if ((local_148.State.bIsSet == false) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (local_148.State.TypedValue.ReachedEnd != false) break;
    if ((local_148.State.bIsSet == false) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pAVar12 = FActorIteratorState::GetActorChecked(&local_148.State.TypedValue);
    this_00 = CastChecked<ALevelSequenceActor,AActor>(pAVar12);
    pUVar13 = ALevelSequenceActor::GetSequence(this_00);
    if (pUVar13 == param_1) {
      if ((local_148.State.bIsSet == false) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pAVar12 = FActorIteratorState::GetActorChecked(&local_148.State.TypedValue);
      TVar14.DebugPtr = CastChecked<ALevelSequenceActor,AActor>(pAVar12);
      pUVar15 = ALevelSequenceActor::GetSequencePlayer(TVar14.DebugPtr);
      if (pUVar15 != (ULevelSequencePlayer *)0x0) {
        pUVar15 = ALevelSequenceActor::GetSequencePlayer(TVar14.DebugPtr);
        UMovieSceneSequencePlayer::Stop((UMovieSceneSequencePlayer *)pUVar15);
      }
    }
  }
  if (local_148.State.bIsSet != false) {
    UWorld::RemoveOnActorSpawnedHandler
              (local_148.State.TypedValue.CurrentWorld,
               local_148.State.TypedValue.ActorSpawnedDelegateHandle);
    if (local_148.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
    }
    if (local_148.State.TypedValue.ActorArray.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.State.TypedValue.ActorArray.AllocatorInstance.Data);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar14.DebugPtr != (ALevelSequenceActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar14.DebugPtr);
  }
  (this->LevelSequenceActor).field0_0x0.DebugPtr = (ALevelSequenceActor *)TVar14;
  if (TVar14.DebugPtr == (ALevelSequenceActor *)0x0) {
    pUVar11 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    pFVar16 = FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_b8);
    pUVar10 = Z_Construct_UClass_ALevelSequenceActor_NoRegister();
    TVar17.DebugPtr =
         (ALevelSequenceActor *)
         UWorld::SpawnActor(pUVar11,pUVar10,(TVector<double> *)0x0,(TRotator<double> *)0x0,pFVar16);
    TVar14.DebugPtr = TVar20.DebugPtr;
    if (TVar17.DebugPtr != (ALevelSequenceActor *)0x0) {
      pUVar10 = Z_Construct_UClass_ALevelSequenceActor_NoRegister();
      iVar5 = (int)pUVar10->_padding_;
      if ((*(int *)((TVar17.DebugPtr)->_padding_ + 0x38) < iVar5) ||
         (TVar14.DebugPtr = TVar17.DebugPtr,
         (longlong *)
         *(undefined1 **)(*(longlong *)((TVar17.DebugPtr)->_padding_ + 0x30) + (longlong)iVar5 * 8)
         != &pUVar10->_padding_)) {
        pFVar18 = GetTypeName<ALevelSequenceActor>((FString *)(local_e8 + 8));
        pwVar23 = L"";
        if ((pFVar18->Data).ArrayNum == 0) {
          pwVar21 = L"";
        }
        else {
          pwVar21 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
        }
        pFVar18 = GetFullNameForCastLogError<AActor>(&local_d0,(AActor *)TVar17.DebugPtr);
        if ((pFVar18->Data).ArrayNum != 0) {
          pwVar23 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar23,pwVar21);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar14.DebugPtr != (ALevelSequenceActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar14.DebugPtr);
    }
    (this->LevelSequenceActor).field0_0x0.DebugPtr = (ALevelSequenceActor *)TVar14;
    if (local_b8._64_8_ != 0) {
      plVar19 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar19 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    if (((this->LevelSequenceActor).field0_0x0.DebugPtr == (ALevelSequenceActor *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("LevelSequenceActor",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphSequenceDataSource.cpp"
                           ,0x8d,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  (((this->LevelSequenceActor).field0_0x0.DebugPtr)->PlaybackSettings).LoopCount.Value = 0;
  pFVar3->bAutoPlay = 0;
  (((this->LevelSequenceActor).field0_0x0.DebugPtr)->PlaybackSettings).bPauseAtEnd = 1;
  (((this->LevelSequenceActor).field0_0x0.DebugPtr)->PlaybackSettings).FinishCompletionStateOverride
       = ForceRestoreState;
  TVar14.DebugPtr = ::operator_new(0xa8);
  if (TVar14.DebugPtr == (ALevelSequenceActor *)0x0) {
    pFVar22 = (FCameraCutSubSectionHierarchyNode *)&DAT_00000010;
  }
  else {
    *(undefined4 *)&(TVar14.DebugPtr)->_padding_ = 1;
    pFVar22 = (FCameraCutSubSectionHierarchyNode *)&(TVar14.DebugPtr)->_padding_;
    *(undefined4 *)((longlong)&(TVar14.DebugPtr)->_padding_ + 4) = 1;
    (TVar14.DebugPtr)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFCameraCutSubSectionHierarchyNode_MoviePipeline___00_SharedPointerInternals__6B_
    ;
    (TVar14.DebugPtr)->_padding_ = 0;
    (TVar14.DebugPtr)->_padding_ = 0;
    (TVar14.DebugPtr)->_padding_ = 0;
    (TVar14.DebugPtr)->_padding_ = 0;
    (TVar14.DebugPtr)->_padding_ = 0;
    *(undefined1 *)&(TVar14.DebugPtr)->_padding_ = 2;
    *(undefined4 *)((longlong)&(TVar14.DebugPtr)->_padding_ + 4) = 0;
    *(undefined1 *)&(TVar14.DebugPtr)->_padding_ = 2;
    *(undefined8 *)((longlong)&(TVar14.DebugPtr)->_padding_ + 4) = 0;
    *(undefined1 *)((longlong)&(TVar14.DebugPtr)->_padding_ + 4) = 2;
    *(undefined4 *)&(TVar14.DebugPtr)->_padding_ = 0;
    *(undefined1 *)((longlong)&(TVar14.DebugPtr)->_padding_ + 4) = 2;
    *(undefined4 *)&(TVar14.DebugPtr)->_padding_ = 0;
    *(undefined1 *)((longlong)&(TVar14.DebugPtr)->_padding_ + 4) = 2;
    *(undefined4 *)&(TVar14.DebugPtr)->_padding_ = 0;
    *(undefined1 *)((longlong)&(TVar14.DebugPtr)->_padding_ + 4) = 2;
    *(undefined4 *)&(TVar14.DebugPtr)->_padding_ = 0;
    (TVar14.DebugPtr)->_padding_ = 0;
    (TVar14.DebugPtr)->_padding_ = 0;
    *(undefined4 *)((longlong)&(TVar14.DebugPtr)->_padding_ + 4) = 0xffffffff;
    *(undefined2 *)((longlong)&(TVar14.DebugPtr)->_padding_ + 4) = 0;
    *(undefined1 *)((longlong)&(TVar14.DebugPtr)->_padding_ + 6) = 0;
    *(undefined1 *)&(TVar14.DebugPtr)->_padding_ = 1;
    (TVar14.DebugPtr)->_padding_ = 0;
    (TVar14.DebugPtr)->_padding_ = 0;
    (TVar14.DebugPtr)->_padding_ = 0;
    (TVar14.DebugPtr)->_padding_ = 0;
    TVar20.DebugPtr = TVar14.DebugPtr;
    if (pFVar22 == (FCameraCutSubSectionHierarchyNode *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      goto LAB_14dcbe1ae;
    }
  }
  if (((pFVar22->_padding_ == 0) || (pFVar22->_padding_ == 0)) ||
     (*(int *)(pFVar22->_padding_ + 8) < 1)) {
    plVar19 = &pFVar22->_padding_;
    if (TVar20.DebugPtr != (ALevelSequenceActor *)0x0) {
      LOCK();
      *(int *)&(TVar20.DebugPtr)->_padding_ = (int)(TVar20.DebugPtr)->_padding_ + 1;
      UNLOCK();
    }
    pFVar22->_padding_ = (longlong)pFVar22;
    if (TVar20.DebugPtr != (ALevelSequenceActor *)*plVar19) {
      if (TVar20.DebugPtr != (ALevelSequenceActor *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)&(TVar20.DebugPtr)->_padding_ + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)*plVar19;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        lVar8 = (longlong)plVar6 + 0xc;
        iVar5 = *(int *)lVar8;
        *(int *)lVar8 = *(int *)lVar8 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *plVar19 = (longlong)TVar20;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar20.DebugPtr);
  }
LAB_14dcbe1ae:
  if (TVar20.DebugPtr != (ALevelSequenceActor *)0x0) {
    LOCK();
    *(int *)&(TVar20.DebugPtr)->_padding_ = (int)(TVar20.DebugPtr)->_padding_ + 1;
    UNLOCK();
  }
  pTVar2 = &this->CachedSequenceHierarchyRoot;
  local_188 = pFVar22;
  local_180 = TVar20;
  if (pTVar2 != (TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)&local_188) {
    pTVar2->Object = pFVar22;
    local_188 = (FCameraCutSubSectionHierarchyNode *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CachedSequenceHierarchyRoot).SharedReferenceCount,
               (FSharedReferencer<1> *)&local_180.ObjectPtr);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_180.DebugPtr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)TVar20.DebugPtr);
  local_170.Object = pTVar2->Object;
  local_170.SharedReferenceCount.ReferenceController =
       (this->CachedSequenceHierarchyRoot).SharedReferenceCount.ReferenceController;
  if (local_170.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_170.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_170.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  MoviePipeline::CacheCompleteSequenceHierarchy((UMovieSceneSequence *)param_1,&local_170);
  OverrideSequencePlaybackRangeFromGlobalOutputSettings(this,param_1);
  ALevelSequenceActor::SetSequence((this->LevelSequenceActor).field0_0x0.DebugPtr,param_1);
  pUVar15 = ALevelSequenceActor::GetSequencePlayer((this->LevelSequenceActor).field0_0x0.DebugPtr);
  local_160.Object = (FMovieSceneTimeController *)(this->CustomSequenceTimeController).Object;
  local_160.SharedReferenceCount.ReferenceController =
       (this->CustomSequenceTimeController).SharedReferenceCount.ReferenceController;
  if (local_160.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_160.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_160.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UMovieSceneSequencePlayer::SetTimeController((UMovieSceneSequencePlayer *)pUVar15,&local_160);
  pUVar15 = ALevelSequenceActor::GetSequencePlayer((this->LevelSequenceActor).field0_0x0.DebugPtr);
  UMovieSceneSequencePlayer::Stop((UMovieSceneSequencePlayer *)pUVar15);
  pUVar15 = ALevelSequenceActor::GetSequencePlayer((this->LevelSequenceActor).field0_0x0.DebugPtr);
  TMulticastDelegateRegistration<void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
  ::AddUObject<UMovieGraphSequenceDataSource>
            ((TMulticastDelegateRegistration<void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
              *)&pUVar15->_padding_,(UMovieGraphSequenceDataSource *)local_e8,(pmf_9cef2371)this);
  return;
}

// ExpandShot @ 14dcc7490

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphSequenceDataSource::ExpandShot
          (UMovieGraphSequenceDataSource *this,TObjectPtr<UMoviePipelineExecutorShot> *param_1,
          int param_2,int param_3,int param_4,bool param_5)

{
  TArray<TTuple<UMovieSceneSection_*,TRange<FFrameNumber>_>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  UMovieSceneSection *pUVar4;
  FScriptContainerElement *pFVar5;
  UMoviePipelineExecutorShot *pUVar6;
  TObjectPtr<UMoviePipelineExecutorShot> TVar7;
  code *pcVar8;
  undefined8 uVar9;
  uint uVar10;
  bool bVar11;
  char cVar12;
  longlong lVar13;
  UMovieScene *pUVar14;
  UObject *pUVar15;
  UObject *pUVar16;
  UMovieSceneSignedObject *pUVar17;
  FFrameNumber *pFVar18;
  undefined8 uVar19;
  int iVar20;
  FFrameNumber FVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  TRangeBound<FFrameNumber> *pTVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  FScriptContainerElement *pFVar29;
  int iVar30;
  int iVar31;
  ForAnyElementType FVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  undefined1 local_res8 [8];
  TObjectPtr<UMoviePipelineExecutorShot>_u_0 *local_res10;
  int local_res18;
  uint local_res20;
  float fStack_29c;
  FCameraCutSubSectionHierarchyNode *local_298;
  FSharedReferencer<1> FStack_290;
  undefined1 local_288 [16];
  TRangeBound<FFrameNumber> local_278;
  TRangeBound<FFrameNumber> TStack_270;
  FFrameRate local_268;
  FFrameRate local_260;
  TRange<FFrameNumber> local_258;
  FFrameNumber local_248 [2];
  undefined8 local_240;
  undefined8 local_238;
  uint local_230;
  undefined4 uStack_22c;
  uint local_228;
  undefined4 uStack_224;
  undefined4 local_220;
  int iStack_21c;
  uint local_218;
  int iStack_214;
  uint local_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  int iStack_204;
  uint local_200;
  int iStack_1fc;
  uint local_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  int iStack_1ec;
  uint local_1e8;
  int iStack_1e4;
  undefined4 local_1e0;
  int iStack_1dc;
  uint local_1d8;
  int iStack_1d4;
  uint local_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  int iStack_1c4;
  uint local_1c0;
  int iStack_1bc;
  uint local_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  int iStack_1ac;
  uint local_1a8;
  int iStack_1a4;
  uint local_1a0;
  int iStack_19c;
  TRangeBound<FFrameNumber> local_198;
  uint local_190;
  undefined4 uStack_18c;
  int local_188;
  undefined4 uStack_184;
  undefined8 local_180;
  int local_178;
  undefined4 uStack_174;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_170;
  undefined8 local_158;
  TRangeBound<FFrameNumber> TStack_150;
  UMovieSceneSection *local_148;
  TRangeBound<FFrameNumber> TStack_140;
  TRangeBound<FFrameNumber> TStack_138;
  ulonglong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  FSharedReferencer<1> local_110;
  ulonglong local_108;
  ulonglong local_100;
  TRange<FFrameNumber> local_f8;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  TRangeBound<FFrameNumber> local_c8;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  
  local_res10 = &param_1->field0_0x0;
  local_res18 = param_2;
  local_res20 = param_3;
  (**(code **)(this->_padding_ + 0x2b8))(this,&local_260);
  (**(code **)(this->_padding_ + 0x2b0))(this,&local_240);
  FStack_290.ReferenceController =
       (((param_1->field0_0x0).DebugPtr)->ShotInfo).SubSectionHierarchy.SharedReferenceCount.
       ReferenceController;
  local_298 = (((param_1->field0_0x0).DebugPtr)->ShotInfo).SubSectionHierarchy.Object;
  if (FStack_290.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_290.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_290.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_298 != (FCameraCutSubSectionHierarchyNode *)0x0) {
    uStack_184 = 0;
    iVar31 = param_2;
    local_188 = param_2;
    local_130 = (ulonglong)(uint)param_2;
    do {
      local_268.Numerator = (undefined4)local_240;
      local_268.Denominator = local_240._4_4_;
      iVar26 = (int)local_240;
      iVar20 = local_260.Numerator;
      iVar30 = local_260.Denominator;
      if ((iVar20 == iVar26) && (iVar30 == (int)((ulonglong)local_240 >> 0x20))) {
        local_180._4_4_ = 0.0;
        iVar31 = param_2;
        fVar33 = local_180._4_4_;
        local_180 = (ulonglong)(uint)param_2;
      }
      else {
        if ((iVar20 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("SourceRate.Numerator != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\FrameRate.h"
                                ,0x113,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar22 = (longlong)iVar30 * (longlong)iVar26;
        lVar23 = (longlong)local_268.Denominator * (longlong)iVar20;
        auVar36._0_8_ = (double)lVar22;
        auVar36._8_8_ = 0;
        lVar13 = (lVar22 * iVar31) / lVar23;
        dVar40 = (((double)lVar22 * (double)iVar31) / (double)lVar23 - (double)lVar13) +
                 (auVar36._0_8_ * 0.0) / (double)lVar23;
        auVar39._8_8_ = 0;
        auVar39._0_8_ = dVar40;
        auVar39 = roundpd(auVar36,auVar39,1);
        fVar33 = (float)(dVar40 - auVar39._0_8_);
        lVar13 = lVar13 + (longlong)auVar39._0_8_;
        if ((0.0 < fVar33) && (::FFrameTime::MaxSubframe <= fVar33)) {
          fVar33 = ::FFrameTime::MaxSubframe;
        }
        if (::FFrameTime::MaxSubframe <= fVar33) {
          fVar33 = ::FFrameTime::MaxSubframe;
        }
        lVar22 = 0x7fffffff;
        if (lVar13 < 0x7fffffff) {
          lVar22 = lVar13;
        }
        if (fVar33 <= 0.0) {
          fVar33 = 0.0;
        }
        iVar31 = -0x80000000;
        if (-0x80000000 < lVar22) {
          iVar31 = (int)lVar22;
        }
      }
      if (fVar33 != 0.0) {
        iVar31 = iVar31 + 1;
      }
      local_178 = param_4;
      uStack_174 = 0;
      local_128 = (ulonglong)(uint)param_4;
      iVar26 = (int)local_240;
      iVar20 = local_260.Numerator;
      iVar30 = (int)((ulonglong)local_240 >> 0x20);
      if ((iVar20 == iVar26) && (local_260.Denominator == iVar30)) {
        local_238._4_4_ = 0.0;
        fVar33 = local_238._4_4_;
        iVar30 = param_4;
        local_238 = local_128;
      }
      else {
        local_268 = local_260;
        if ((iVar20 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("SourceRate.Numerator != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\FrameRate.h"
                                ,0x113,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar22 = (longlong)local_268.Denominator * (longlong)iVar26;
        lVar23 = (longlong)iVar30 * (longlong)iVar20;
        auVar37._0_8_ = (double)lVar22;
        auVar37._8_8_ = 0;
        lVar13 = (lVar22 * param_4) / lVar23;
        dVar40 = (((double)lVar22 * (double)param_4) / (double)lVar23 - (double)lVar13) +
                 ((double)local_128._4_4_ * auVar37._0_8_) / (double)lVar23;
        auVar34._8_8_ = 0;
        auVar34._0_8_ = dVar40;
        auVar39 = roundpd(auVar37,auVar34,1);
        fVar33 = (float)(dVar40 - auVar39._0_8_);
        lVar13 = lVar13 + (longlong)auVar39._0_8_;
        if ((0.0 < fVar33) && (::FFrameTime::MaxSubframe <= fVar33)) {
          fVar33 = ::FFrameTime::MaxSubframe;
        }
        if (::FFrameTime::MaxSubframe <= fVar33) {
          fVar33 = ::FFrameTime::MaxSubframe;
        }
        lVar22 = 0x7fffffff;
        if (lVar13 < 0x7fffffff) {
          lVar22 = lVar13;
        }
        if (fVar33 <= 0.0) {
          fVar33 = 0.0;
        }
        iVar30 = -0x80000000;
        if (-0x80000000 < lVar22) {
          iVar30 = (int)lVar22;
        }
      }
      if (fVar33 != 0.0) {
        iVar30 = iVar30 + 1;
      }
      local_230 = local_res20;
      uStack_22c = 0;
      local_120 = (ulonglong)local_res20;
      iVar28 = (int)local_240;
      iVar26 = local_260.Numerator;
      iVar20 = (int)((ulonglong)local_240 >> 0x20);
      if ((iVar26 == iVar28) && (local_260.Denominator == iVar20)) {
        fStack_29c = 0.0;
        uVar27 = local_res20;
      }
      else {
        local_268 = local_260;
        if ((iVar26 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("SourceRate.Numerator != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\FrameRate.h"
                                ,0x113,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar22 = (longlong)local_268.Denominator * (longlong)iVar28;
        lVar23 = (longlong)iVar20 * (longlong)iVar26;
        auVar38._0_8_ = (double)lVar22;
        auVar38._8_8_ = 0;
        lVar13 = (lVar22 * (int)local_res20) / lVar23;
        dVar40 = (((double)lVar22 * (double)(int)local_res20) / (double)lVar23 - (double)lVar13) +
                 ((double)local_120._4_4_ * auVar38._0_8_) / (double)lVar23;
        auVar35._8_8_ = 0;
        auVar35._0_8_ = dVar40;
        auVar39 = roundpd(auVar38,auVar35,1);
        fStack_29c = (float)(dVar40 - auVar39._0_8_);
        lVar13 = lVar13 + (longlong)auVar39._0_8_;
        if ((0.0 < fStack_29c) && (::FFrameTime::MaxSubframe <= fStack_29c)) {
          fStack_29c = ::FFrameTime::MaxSubframe;
        }
        if (::FFrameTime::MaxSubframe <= fStack_29c) {
          fStack_29c = ::FFrameTime::MaxSubframe;
        }
        lVar22 = 0x7fffffff;
        if (lVar13 < 0x7fffffff) {
          lVar22 = lVar13;
        }
        if (fStack_29c <= 0.0) {
          fStack_29c = 0.0;
        }
        uVar27 = 0x80000000;
        if (-0x80000000 < lVar22) {
          uVar27 = (uint)lVar22;
        }
      }
      if (param_5) {
        if ((local_298 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        bVar11 = FWeakObjectPtr::IsValid(&(local_298->MovieScene).WeakPtr);
        if (bVar11) {
          if ((local_298 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pUVar14 = (UMovieScene *)FWeakObjectPtr::Get(&(local_298->MovieScene).WeakPtr);
          UMovieScene::GetAllSections(pUVar14,&local_170);
          iVar31 = local_170.ArrayNum;
          pFVar3 = local_170.AllocatorInstance.Data + (longlong)local_170.ArrayNum * 8;
          FVar32.Data = local_170.AllocatorInstance.Data;
          while( true ) {
            if (local_170.ArrayNum != iVar31) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<UMovieSceneSection_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res8);
            }
            if (FVar32.Data == pFVar3) break;
            pUVar4 = *(UMovieSceneSection **)FVar32.Data;
            if (pUVar4 != (UMovieSceneSection *)0x0) {
              if ((local_298 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              bVar11 = TWeakObjectPtr<UMovieSceneSubSection,FWeakObjectPtr>::
                       UEOpEquals<UMovieSceneSection,bool>(&local_298->Section,pUVar4);
              if (!bVar11) {
                if ((local_298 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar11)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                bVar11 = TWeakObjectPtr<UMovieSceneCameraCutSection,FWeakObjectPtr>::
                         UEOpEquals<UMovieSceneSection,bool>(&local_298->CameraCutSection,pUVar4);
                if ((!bVar11) && (pUVar4->bSupportsInfiniteRange != false)) {
                  if ((local_298 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar11)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  TStack_140 = (pUVar4->SectionRange).Value.LowerBound;
                  TStack_138 = (pUVar4->SectionRange).Value.UpperBound;
                  pTVar1 = &local_298->AdditionalSectionsToExpand;
                  pFVar29 = (pTVar1->AllocatorInstance).Data;
                  local_148 = pUVar4;
                  if (((pFVar29 <= (FScriptContainerElement *)&local_148) &&
                      ((FScriptContainerElement *)&local_148 <
                       pFVar29 + (longlong)(local_298->AdditionalSectionsToExpand).ArrayMax * 0x18))
                     && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar11)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar30 = (local_298->AdditionalSectionsToExpand).ArrayNum;
                  piVar2 = &(local_298->AdditionalSectionsToExpand).ArrayMax;
                  if (iVar30 == *piVar2) {
                    iVar30 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x818,&pTVar1->AllocatorInstance,piVar2);
                  }
                  (local_298->AdditionalSectionsToExpand).ArrayNum = iVar30 + 1;
                  pFVar5 = (pTVar1->AllocatorInstance).Data;
                  pFVar29 = pFVar5 + (longlong)iVar30 * 0x18;
                  *(UMovieSceneSection **)pFVar29 = local_148;
                  *(TRangeBound<FFrameNumber> *)(pFVar29 + 8) = TStack_140;
                  *(TRangeBound<FFrameNumber> *)(pFVar5 + (longlong)iVar30 * 0x18 + 0x10) =
                       TStack_138;
                }
              }
            }
            FVar32.Data = FVar32.Data + 8;
          }
          param_1 = (TObjectPtr<UMoviePipelineExecutorShot> *)local_res10;
          if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.AllocatorInstance.Data);
            param_1 = (TObjectPtr<UMoviePipelineExecutorShot> *)local_res10;
          }
        }
        pUVar6 = *(UMoviePipelineExecutorShot **)param_1;
        local_b8.Object = local_298;
        local_b8.SharedReferenceCount.ReferenceController = FStack_290.ReferenceController;
        if (FStack_290.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FStack_290.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FStack_290.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (fStack_29c != 0.0) {
          uVar27 = uVar27 + 1;
        }
        local_248[0].Value = uVar27;
        MoviePipeline::CheckPartialSectionEvaluationAndWarn(local_248,&local_b8,pUVar6,&local_260);
      }
      else {
        if ((local_298 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        bVar11 = FWeakObjectPtr::IsValid(&(local_298->CameraCutSection).WeakPtr);
        if (bVar11) {
          if ((local_298 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pUVar15 = FWeakObjectPtr::Get(&(local_298->CameraCutSection).WeakPtr);
          pcVar8 = *(code **)(*(longlong *)pUVar15 + 0x2c8);
          if ((local_298 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pUVar16 = FWeakObjectPtr::Get(&(local_298->CameraCutSection).WeakPtr);
          uVar10 = local_200;
          uVar24 = local_218;
          local_a8 = *(undefined1 (*) [16])&pUVar16[4].field_0x10;
          cVar12 = (char)*(undefined8 *)&pUVar16[4].field_0x18;
          if (cVar12 == '\x02') {
            uStack_224 = 0;
            local_228 = CONCAT31(local_228._1_3_,2);
            local_100 = (ulonglong)local_228;
          }
          else {
            iVar20 = (int)((ulonglong)*(undefined8 *)&pUVar16[4].field_0x18 >> 0x20) + iVar30;
            if (cVar12 == '\x01') {
              local_220 = CONCAT31(local_220._1_3_,1);
              local_100 = CONCAT44(iVar20,local_220);
              iStack_21c = iVar20;
              local_d8 = local_100;
            }
            else {
              local_218 = local_218 & 0xffffff00;
              local_100 = CONCAT44(iVar20,uVar24) & 0xffffffffffffff00;
              iStack_214 = iVar20;
              local_d8 = local_100;
            }
          }
          uVar24 = local_a8._0_4_ & 0xff;
          if (uVar24 == 2) {
            uStack_20c = 0;
            local_210 = CONCAT31(local_210._1_3_,local_a8[0]);
            local_108 = (ulonglong)local_210;
          }
          else {
            iVar20 = local_a8._4_4_ - iVar31;
            if (uVar24 == 1) {
              local_208 = CONCAT31(local_208._1_3_,local_a8[0]);
              local_108 = CONCAT44(iVar20,local_208);
              iStack_204 = iVar20;
            }
            else {
              local_200 = local_200 & 0xffffff00;
              local_108 = CONCAT44(iVar20,uVar10) & 0xffffffffffffff00;
              iStack_1fc = iVar20;
            }
          }
          (*pcVar8)(pUVar15,&local_108);
          if ((local_298 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pUVar17 = (UMovieSceneSignedObject *)
                    FWeakObjectPtr::Get(&(local_298->CameraCutSection).WeakPtr);
          UMovieSceneSignedObject::MarkAsChanged(pUVar17);
        }
        if ((local_298 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        bVar11 = FWeakObjectPtr::IsValid(&(local_298->Section).WeakPtr);
        if (bVar11) {
          if ((local_298 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pUVar15 = FWeakObjectPtr::Get(&(local_298->Section).WeakPtr);
          pcVar8 = *(code **)(*(longlong *)pUVar15 + 0x2c8);
          if ((local_298 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pUVar16 = FWeakObjectPtr::Get(&(local_298->Section).WeakPtr);
          uVar10 = local_1d8;
          uVar24 = local_1e8;
          local_98 = *(undefined1 (*) [16])&pUVar16[4].field_0x10;
          cVar12 = (char)*(undefined8 *)&pUVar16[4].field_0x18;
          if (cVar12 == '\x02') {
            uStack_1f4 = 0;
            local_1f8 = CONCAT31(local_1f8._1_3_,2);
            local_e0 = (ulonglong)local_1f8;
          }
          else {
            iVar20 = (int)((ulonglong)*(undefined8 *)&pUVar16[4].field_0x18 >> 0x20) + iVar30;
            if (cVar12 == '\x01') {
              local_1f0 = CONCAT31(local_1f0._1_3_,1);
              local_e0 = CONCAT44(iVar20,local_1f0);
              iStack_1ec = iVar20;
              local_d0 = local_e0;
            }
            else {
              local_1e8 = local_1e8 & 0xffffff00;
              local_e0 = CONCAT44(iVar20,uVar24) & 0xffffffffffffff00;
              iStack_1e4 = iVar20;
              local_d0 = local_e0;
            }
          }
          uVar24 = local_98._0_4_ & 0xff;
          if (uVar24 == 2) {
            uStack_1b4 = 0;
            local_1b8 = CONCAT31(local_1b8._1_3_,local_98[0]);
            local_e8 = (ulonglong)local_1b8;
          }
          else {
            iVar20 = local_98._4_4_ - iVar31;
            if (uVar24 == 1) {
              local_1e0 = CONCAT31(local_1e0._1_3_,local_98[0]);
              local_e8 = CONCAT44(iVar20,local_1e0);
              iStack_1dc = iVar20;
            }
            else {
              local_1d8 = local_1d8 & 0xffffff00;
              local_e8 = CONCAT44(iVar20,uVar10) & 0xffffffffffffff00;
              iStack_1d4 = iVar20;
            }
          }
          (*pcVar8)(pUVar15,&local_e8);
          if ((local_298 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pUVar17 = (UMovieSceneSignedObject *)FWeakObjectPtr::Get(&(local_298->Section).WeakPtr);
          UMovieSceneSignedObject::MarkAsChanged(pUVar17);
        }
        if ((local_298 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        bVar11 = FWeakObjectPtr::IsValid(&(local_298->MovieScene).WeakPtr);
        if (bVar11) {
          if ((local_298 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pUVar14 = (UMovieScene *)FWeakObjectPtr::Get(&(local_298->MovieScene).WeakPtr);
          if ((local_298 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pUVar15 = FWeakObjectPtr::Get(&(local_298->MovieScene).WeakPtr);
          uVar10 = local_1a8;
          uVar24 = local_1c0;
          local_88 = *(undefined1 (*) [16])&pUVar15[7].field_0x10;
          cVar12 = (char)*(undefined8 *)&pUVar15[7].field_0x18;
          if (cVar12 == '\x02') {
            uStack_1cc = 0;
            local_1d0 = CONCAT31(local_1d0._1_3_,2);
            local_f8.UpperBound.Value.Value = 0;
            local_f8.UpperBound._0_4_ = local_1d0;
          }
          else {
            FVar21.Value = iVar30 + (int)((ulonglong)*(undefined8 *)&pUVar15[7].field_0x18 >> 0x20);
            if (cVar12 == '\x01') {
              local_1c8 = CONCAT31(local_1c8._1_3_,1);
              local_f8.UpperBound.Value.Value = FVar21.Value;
              local_f8.UpperBound._0_4_ = local_1c8;
              iStack_1c4 = FVar21.Value;
              local_c8 = local_f8.UpperBound;
            }
            else {
              local_1c0 = local_1c0 & 0xffffff00;
              local_f8.UpperBound =
                   (TRangeBound<FFrameNumber>)(CONCAT44(FVar21.Value,uVar24) & 0xffffffffffffff00);
              iStack_1bc = FVar21.Value;
              local_c8 = local_f8.UpperBound;
            }
          }
          uVar24 = local_88._0_4_ & 0xff;
          if (uVar24 == 2) {
            uStack_18c = 0;
            local_190 = CONCAT31(local_190._1_3_,local_88[0]);
            local_f8.LowerBound.Value.Value = 0;
            local_f8.LowerBound._0_4_ = local_190;
          }
          else {
            FVar21.Value = local_88._4_4_ - iVar31;
            if (uVar24 == 1) {
              local_1b0 = CONCAT31(local_1b0._1_3_,local_88[0]);
              local_f8.LowerBound.Value.Value = FVar21.Value;
              local_f8.LowerBound._0_4_ = local_1b0;
              iStack_1ac = FVar21.Value;
            }
            else {
              local_1a8 = local_1a8 & 0xffffff00;
              local_f8.LowerBound =
                   (TRangeBound<FFrameNumber>)(CONCAT44(FVar21.Value,uVar10) & 0xffffffffffffff00);
              iStack_1a4 = FVar21.Value;
            }
          }
          UMovieScene::SetPlaybackRange(pUVar14,&local_f8,true);
          if ((local_298 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pUVar17 = (UMovieSceneSignedObject *)FWeakObjectPtr::Get(&(local_298->MovieScene).WeakPtr)
          ;
          UMovieSceneSignedObject::MarkAsChanged(pUVar17);
        }
        if (fStack_29c != 0.0) {
          uVar27 = uVar27 + 1;
        }
        TVar7.field0_0x0 = (TObjectPtr<UMoviePipelineExecutorShot>_u_0)param_1->field0_0x0;
        if ((*(char *)((longlong)TVar7.field0_0x0 + 0x110) == '\x02') &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar31 = *(int *)((longlong)TVar7.field0_0x0 + 0x114) - uVar27;
        pUVar6 = *(UMoviePipelineExecutorShot **)param_1;
        if (((pUVar6->ShotInfo).TotalOutputRangeRoot.LowerBound.Type.Value == '\x02') &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Type != ERangeBoundTypes::Open",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                ,99,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        TStack_270.Value.Value = (pUVar6->ShotInfo).TotalOutputRangeRoot.LowerBound.Value.Value;
        local_1a0 = local_1a0 & 0xffffff00;
        local_198.Type.Value = '\x01';
        local_278._0_4_ = local_1a0;
        TStack_270.Type.Value = '\x01';
        TStack_270._1_3_ = local_198._1_3_;
        local_278.Value.Value = iVar31;
        iStack_19c = iVar31;
        local_198.Value.Value = TStack_270.Value.Value;
        if ((local_298 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar31 = (local_298->AdditionalSectionsToExpand).ArrayNum;
        pFVar29 = (local_298->AdditionalSectionsToExpand).AllocatorInstance.Data;
        pFVar3 = pFVar29 + (longlong)iVar31 * 0x18;
        while( true ) {
          if ((local_298->AdditionalSectionsToExpand).ArrayNum != iVar31) {
            local_288[0] = 0;
            `TCheckedPointerIterator<TTuple<UMovieSceneSection_*,TRange<FFrameNumber>_>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_288);
          }
          if (pFVar29 == pFVar3) break;
          uVar19 = *(undefined8 *)(*(longlong *)pFVar29 + 0xb0);
          uVar9 = *(undefined8 *)(*(longlong *)pFVar29 + 0xb8);
          local_258.LowerBound._0_4_ = SUB84(uVar19,0);
          local_258.LowerBound.Value.Value = (int)((ulonglong)uVar19 >> 0x20);
          local_258.UpperBound._0_4_ = SUB84(uVar9,0);
          local_258.UpperBound.Value.Value = (int)((ulonglong)uVar9 >> 0x20);
          bVar11 = TRange<FFrameNumber>::IsEmpty(&local_258);
          FVar21.Value = TStack_270.Value.Value;
          if (bVar11) {
            local_158 = CONCAT44(local_278.Value.Value,local_278._0_4_);
            TStack_150.Value.Value = TStack_270.Value.Value;
            TStack_150.Type.Value = TStack_270.Type.Value;
            TStack_150._1_3_ = TStack_270._1_3_;
          }
          else {
            uVar19 = CONCAT44(local_278.Value.Value,local_278._0_4_);
            if ((local_278.Type.Value == '\x02') || (TStack_270.Type.Value == '\x02')) {
LAB_14dcc8355:
              if (local_258.UpperBound.Type.Value == '\x02') {
                pTVar25 = &local_258.UpperBound;
              }
              else if (TStack_270.Type.Value == '\x02') {
                pTVar25 = &TStack_270;
              }
              else if (TStack_270.Value.Value < local_258.UpperBound.Value.Value) {
                pTVar25 = &local_258.UpperBound;
              }
              else if (local_258.UpperBound.Value.Value < TStack_270.Value.Value) {
                pTVar25 = &TStack_270;
              }
              else {
                pTVar25 = &local_258.UpperBound;
                if (local_258.UpperBound.Type.Value != '\x01') {
                  pTVar25 = &TStack_270;
                }
              }
              uVar9 = CONCAT44(local_258.LowerBound.Value.Value,local_258.LowerBound._0_4_);
              local_158 = uVar9;
              if ((((local_258.LowerBound.Type.Value != '\x02') &&
                   (local_158 = uVar19, (char)uVar19 != '\x02')) &&
                  (local_158 = uVar9, local_278.Value.Value <= local_258.LowerBound.Value.Value)) &&
                 ((local_158 = uVar19, local_258.LowerBound.Value.Value <= local_278.Value.Value &&
                  (local_258.LowerBound.Type.Value == '\x01')))) {
                local_158 = uVar9;
              }
              TStack_150 = *pTVar25;
            }
            else {
              if ((local_278.Type.Value == '\x02') &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Type != ERangeBoundTypes::Open",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                      ,99,L""), bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if (local_278.Value.Value <= FVar21.Value) {
                pFVar18 = TRangeBound<FFrameNumber>::GetValue(&TStack_270);
                iVar30 = pFVar18->Value;
                pFVar18 = TRangeBound<FFrameNumber>::GetValue(&local_278);
                uVar19 = CONCAT44(local_278.Value.Value,local_278._0_4_);
                if ((pFVar18->Value != iVar30) ||
                   ((local_278.Type.Value != '\0' && (TStack_270.Type.Value != '\0'))))
                goto LAB_14dcc8355;
              }
              local_158 = CONCAT44(local_258.LowerBound.Value.Value,local_258.LowerBound._0_4_);
              TStack_150.Value.Value = local_258.UpperBound.Value.Value;
              TStack_150.Type.Value = local_258.UpperBound.Type.Value;
              TStack_150._1_3_ = local_258.UpperBound._1_3_;
            }
          }
          (**(code **)(**(longlong **)pFVar29 + 0x2c8))(*(longlong **)pFVar29,&local_158);
          UMovieSceneSignedObject::MarkAsChanged(*(UMovieSceneSignedObject **)pFVar29);
          pFVar29 = pFVar29 + 0x18;
        }
      }
      if ((local_298 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_110.ReferenceController = (local_298->Parent).SharedReferenceCount.ReferenceController;
      local_298 = (local_298->Parent).Object;
      if (local_110.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_110.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_110.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_118 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_290,&local_110);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_110.ReferenceController);
      iVar31 = local_res18;
    } while (local_298 != (FCameraCutSubSectionHierarchyNode *)0x0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_290.ReferenceController);
  return;
}

// GetCameraInformation @ 14dccb380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<UE::MovieGraph::FMinimalCameraInfo,TSizedDefaultAllocator<32>_> * __thiscall
UMovieGraphSequenceDataSource::GetCameraInformation
          (UMovieGraphSequenceDataSource *this,
          TArray<UE::MovieGraph::FMinimalCameraInfo,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,UMoviePipelineExecutorShot *param_1,bool param_2)

{
  FWeakObjectPtr *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  UWorld *this_00;
  APlayerController *pAVar9;
  FMinimalViewInfo *pFVar10;
  TArray<UE::MovieGraph::FMinimalCameraInfo,TSizedDefaultAllocator<32>_> *pTVar11;
  ULevelSequencePlayer *pUVar12;
  UCameraComponent *this_01;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStack_2448 [32];
  FWeakObjectPtr *local_2428;
  FWeakObjectPtr *local_2420;
  longlong local_2418;
  longlong local_2410;
  undefined8 local_2408;
  UMovieGraphSequenceDataSource *local_23f8;
  FMovieSceneSequenceID local_23f0 [2];
  undefined8 local_23e8;
  UObject *local_23e0;
  undefined8 local_23d8;
  UObject *local_23d0;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_23c8;
  FGuid local_23b8;
  FWeakObjectPtr local_23a8 [2];
  FMinimalViewInfo local_2398;
  FWeakObjectPtr local_1ac8 [2];
  FMinimalViewInfo local_1ab8;
  FMinimalViewInfo local_11e8;
  FMinimalViewInfo local_918;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2448;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_23f8 = this;
  if (param_2) {
    iVar5 = (param_1->SidecarCameras).ArrayNum;
    uVar14 = 0;
    if (0 < iVar5) {
      lVar15 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar14 < iVar5) {
          uVar6 = ~uVar14 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_2420 = (FWeakObjectPtr *)(longlong)iVar5;
          local_2428 = (FWeakObjectPtr *)(longlong)(int)uVar14;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar11 = (TArray<UE::MovieGraph::FMinimalCameraInfo,TSizedDefaultAllocator<32>_> *)
                      (*pcVar3)();
            return pTVar11;
          }
        }
        iVar5 = (param_1->SidecarCameras).ArrayNum;
        pFVar2 = (param_1->SidecarCameras).AllocatorInstance.Data + lVar15;
        local_23b8._0_8_ = *(undefined8 *)pFVar2;
        local_23b8._8_8_ = *(undefined8 *)(pFVar2 + 8);
        uVar6 = 0;
        if ((int)uVar14 < iVar5) {
          uVar6 = ~uVar14 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_2428 = (FWeakObjectPtr *)(longlong)(int)uVar14;
          local_2420 = (FWeakObjectPtr *)(longlong)iVar5;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar11 = (TArray<UE::MovieGraph::FMinimalCameraInfo,TSizedDefaultAllocator<32>_> *)
                      (*pcVar3)();
            return pTVar11;
          }
        }
        local_23f0[0].Value =
             *(uint *)((param_1->SidecarCameras).AllocatorInstance.Data + lVar15 + 0x10);
        pUVar12 = ALevelSequenceActor::GetSequencePlayer
                            ((this->LevelSequenceActor).field0_0x0.DebugPtr);
        IMovieScenePlayer::FindBoundObjects
                  ((IMovieScenePlayer *)&pUVar12->_padding_,&local_23c8,&local_23b8,local_23f0);
        if (0 < local_23c8.ArrayNum) {
          pUVar8 = FWeakObjectPtr::Get(&(local_23c8.DataPtr)->WeakPtr);
          this_01 = MovieSceneHelpers::CameraComponentFromRuntimeObject(pUVar8);
          this = local_23f8;
          if (this_01 != (UCameraComponent *)0x0) {
            FMinimalViewInfo::FMinimalViewInfo(&local_11e8);
            pcVar3 = *(code **)(this_01->_padding_ + 0x660);
            lVar13 = (**(code **)(local_23f8->_padding_ + 0x180))(local_23f8);
            (*pcVar3)(this_01,*(undefined4 *)(lVar13 + 0x91c),&local_11e8);
            local_1ac8[0].ObjectIndex = 0;
            local_1ac8[0].ObjectSerialNumber = 0;
            local_23d8 = 0;
            FWeakObjectPtr::operator=(local_1ac8,(FObjectPtr)&local_23d8);
            FMinimalViewInfo::FMinimalViewInfo(&local_1ab8);
            pUVar7 = Z_Construct_UClass_AActor_NoRegister();
            local_23d0 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_01,pUVar7);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_23d0 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_23d0);
            }
            FWeakObjectPtr::operator=(local_1ac8,(FObjectPtr)&local_23d0);
            FMinimalViewInfo::operator=(&local_1ab8,&local_11e8);
            pFVar1 = (FWeakObjectPtr *)(__return_storage_ptr__->AllocatorInstance).Data;
            if ((pFVar1 <= local_1ac8) &&
               (local_1ac8 < pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x11c)) {
              local_2410 = (longlong)__return_storage_ptr__->ArrayNum;
              local_2408 = 0x8e0;
              local_2428 = local_1ac8;
              local_2420 = pFVar1;
              local_2418 = (longlong)__return_storage_ptr__->ArrayMax;
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                pTVar11 = (TArray<UE::MovieGraph::FMinimalCameraInfo,TSizedDefaultAllocator<32>_> *)
                          (*pcVar3)();
                return pTVar11;
              }
            }
            iVar5 = __return_storage_ptr__->ArrayNum;
            if (iVar5 == __return_storage_ptr__->ArrayMax) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x8e0,0x10,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar5 + 1;
            pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
            *(FWeakObjectPtr *)(pFVar2 + (longlong)iVar5 * 0x8e0) = local_1ac8[0];
            FMinimalViewInfo::FMinimalViewInfo
                      ((FMinimalViewInfo *)(pFVar2 + (longlong)iVar5 * 0x8e0 + 0x10),&local_1ab8);
            if (local_1ab8.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1ab8.PostProcessSettings.WeightedBlendables.Array.
                            AllocatorInstance.Data);
            }
            this = local_23f8;
            if (local_11e8.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_11e8.PostProcessSettings.WeightedBlendables.Array.
                            AllocatorInstance.Data);
              this = local_23f8;
            }
          }
        }
        iVar5 = (param_1->SidecarCameras).ArrayNum;
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + 0x28;
      } while ((int)uVar14 < iVar5);
    }
  }
  else {
    pUVar7 = UMovieGraphPipeline::StaticClass();
    pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
    this_00 = (UWorld *)(**(code **)(*(longlong *)pUVar8 + 0x180))(pUVar8);
    pAVar9 = UWorld::GetFirstPlayerController(this_00);
    if (pAVar9 != (APlayerController *)0x0) {
      pFVar10 = (FMinimalViewInfo *)
                (**(code **)(((pAVar9->PlayerCameraManager).field0_0x0.DebugPtr)->_padding_ + 0x798)
                )();
      FMinimalViewInfo::FMinimalViewInfo(&local_918,pFVar10);
      local_23a8[0].ObjectIndex = 0;
      local_23a8[0].ObjectSerialNumber = 0;
      local_23e8 = 0;
      FWeakObjectPtr::operator=(local_23a8,(FObjectPtr)&local_23e8);
      FMinimalViewInfo::FMinimalViewInfo(&local_2398);
      local_23e0 = (UObject *)(**(code **)(pAVar9->_padding_ + 0x7e0))(pAVar9);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_23e0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_23e0);
      }
      FWeakObjectPtr::operator=(local_23a8,(FObjectPtr)&local_23e0);
      FMinimalViewInfo::operator=(&local_2398,&local_918);
      pFVar1 = (FWeakObjectPtr *)(__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar1 <= local_23a8) &&
         (local_23a8 < pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x11c)) {
        local_2410 = (longlong)__return_storage_ptr__->ArrayNum;
        local_2408 = 0x8e0;
        local_2428 = local_23a8;
        local_2420 = pFVar1;
        local_2418 = (longlong)__return_storage_ptr__->ArrayMax;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TArray<UE::MovieGraph::FMinimalCameraInfo,TSizedDefaultAllocator<32>_> *)
                    (*pcVar3)();
          return pTVar11;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8e0,0x10,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(FWeakObjectPtr *)(pFVar2 + (longlong)iVar5 * 0x8e0) = local_23a8[0];
      FMinimalViewInfo::FMinimalViewInfo
                ((FMinimalViewInfo *)(pFVar2 + (longlong)iVar5 * 0x8e0 + 0x10),&local_2398);
      if (local_2398.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2398.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data
                     );
      }
      if (local_918.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_918.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data)
        ;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetDisplayRate @ 14dcccd40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FFrameRate __thiscall
UMovieGraphSequenceDataSource::GetDisplayRate(UMovieGraphSequenceDataSource *this)

{
  ALevelSequenceActor *this_00;
  code *pcVar1;
  bool bVar2;
  ULevelSequence *pUVar3;
  longlong lVar4;
  FFrameRate FVar5;
  FFrameRate in_RDX;
  
  this_00 = (this->LevelSequenceActor).field0_0x0.DebugPtr;
  if (this_00 != (ALevelSequenceActor *)0x0) {
    pUVar3 = ALevelSequenceActor::GetSequence(this_00);
    if (pUVar3 != (ULevelSequence *)0x0) {
      pUVar3 = ALevelSequenceActor::GetSequence((this->LevelSequenceActor).field0_0x0.DebugPtr);
      lVar4 = (**(code **)(pUVar3->_padding_ + 0x2f8))(pUVar3);
      *(undefined8 *)in_RDX = *(undefined8 *)(lVar4 + 0x140);
      return in_RDX;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_967217143181475653>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphSequenceDataSource.cpp"
                     ,0xbb,"LevelSequenceActor && LevelSequenceActor->GetSequence()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    FVar5 = (FFrameRate)(*pcVar1)();
    return FVar5;
  }
  *(undefined4 *)in_RDX = 0x18;
  *(undefined4 *)((longlong)in_RDX + 4) = 1;
  return in_RDX;
}

// GetPrivateStaticClass @ 14dcd32f0

UClass * __cdecl UMovieGraphSequenceDataSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphSequenceDataSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphSequenceDataSource",
               &Z_Registration_Info_UClass_UMovieGraphSequenceDataSource.InnerSingleton,
               StaticRegisterNativesUMovieGraphSequenceDataSource,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphSequenceDataSource>,
               InternalVTableHelperCtorCaller<UMovieGraphSequenceDataSource>,local_res8,
               UMovieGraphDataSourceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphSequenceDataSource.InnerSingleton;
}

// GetTickResolution @ 14dcd3dc0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FFrameRate __thiscall
UMovieGraphSequenceDataSource::GetTickResolution(UMovieGraphSequenceDataSource *this)

{
  ALevelSequenceActor *this_00;
  code *pcVar1;
  bool bVar2;
  ULevelSequence *pUVar3;
  longlong lVar4;
  FFrameRate FVar5;
  FFrameRate in_RDX;
  
  this_00 = (this->LevelSequenceActor).field0_0x0.DebugPtr;
  if (this_00 != (ALevelSequenceActor *)0x0) {
    pUVar3 = ALevelSequenceActor::GetSequence(this_00);
    if (pUVar3 != (ULevelSequence *)0x0) {
      pUVar3 = ALevelSequenceActor::GetSequence((this->LevelSequenceActor).field0_0x0.DebugPtr);
      lVar4 = (**(code **)(pUVar3->_padding_ + 0x2f8))(pUVar3);
      *(undefined8 *)in_RDX = *(undefined8 *)(lVar4 + 0x138);
      return in_RDX;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_967217143181475663>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphSequenceDataSource.cpp"
                     ,0xb1,"LevelSequenceActor && LevelSequenceActor->GetSequence()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    FVar5 = (FFrameRate)(*pcVar1)();
    return FVar5;
  }
  *(undefined4 *)in_RDX = 24000;
  *(undefined4 *)((longlong)in_RDX + 4) = 1;
  return in_RDX;
}

// InitializeShot @ 14dcd5c20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphSequenceDataSource::InitializeShot
          (UMovieGraphSequenceDataSource *this,TObjectPtr<UMoviePipelineExecutorShot> *param_1,
          FFrameTime *param_2)

{
  (**(code **)(this->_padding_ + 0x2c0))(this,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014dcd5c4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e0))(this,param_2);
  return;
}

// JumpDataSource @ 14dcd7790

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieGraphSequenceDataSource::JumpDataSource
          (UMovieGraphSequenceDataSource *this,FFrameTime *param_1)

{
  ALevelSequenceActor *this_00;
  FFrameRate FVar1;
  ULevelSequencePlayer *pUVar2;
  ULevelSequence *pUVar3;
  longlong lVar4;
  FFrameTime local_res8;
  FMovieSceneSequencePlaybackParams local_48;
  
  this_00 = (this->LevelSequenceActor).field0_0x0.DebugPtr;
  if (this_00 != (ALevelSequenceActor *)0x0) {
    pUVar2 = ALevelSequenceActor::GetSequencePlayer(this_00);
    if (pUVar2 != (ULevelSequencePlayer *)0x0) {
      pUVar3 = ALevelSequenceActor::GetSequence((this->LevelSequenceActor).field0_0x0.DebugPtr);
      lVar4 = (**(code **)(pUVar3->_padding_ + 0x2f8))(pUVar3);
      FVar1 = *(FFrameRate *)(lVar4 + 0x138);
      pUVar3 = ALevelSequenceActor::GetSequence((this->LevelSequenceActor).field0_0x0.DebugPtr);
      (**(code **)(pUVar3->_padding_ + 0x2f8))(pUVar3);
      FFrameRate::TransformTime((FFrameTime)&local_res8,(FFrameRate)*param_1,FVar1);
      pUVar2 = ALevelSequenceActor::GetSequencePlayer
                         ((this->LevelSequenceActor).field0_0x0.DebugPtr);
      local_48.Frame = local_res8;
      local_48.Time = 0.0;
      local_48.MarkedFrame.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Timecode.Seconds = 0;
      local_48.Timecode.Frames = 0;
      local_48.Timecode.Subframe = 0.0;
      local_48.Timecode.bDropFrameFormat = false;
      local_48.bHasJumped = false;
      local_48.MarkedFrame.Data.ArrayNum = 0;
      local_48.MarkedFrame.Data.ArrayMax = 0;
      local_48.Timecode.Hours = 0;
      local_48.Timecode.Minutes = 0;
      local_48.PositionType = Frame;
      local_48.UpdateMethod = Jump;
      UMovieSceneSequencePlayer::SetPlaybackPosition((UMovieSceneSequencePlayer *)pUVar2,&local_48);
    }
  }
  return;
}

// MuteShot @ 14dcd8720

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphSequenceDataSource::MuteShot
          (UMovieGraphSequenceDataSource *this,TObjectPtr<UMoviePipelineExecutorShot> *param_1)

{
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_18;
  
  local_18.Object = (((param_1->field0_0x0).DebugPtr)->ShotInfo).SubSectionHierarchy.Object;
  local_18.SharedReferenceCount.ReferenceController =
       (((param_1->field0_0x0).DebugPtr)->ShotInfo).SubSectionHierarchy.SharedReferenceCount.
       ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  MoviePipeline::SetSubSectionHierarchyActive(&local_18,false);
  return;
}

// OnSequenceEvaluated @ 14dcd9d40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieGraphSequenceDataSource::OnSequenceEvaluated
          (UMovieGraphSequenceDataSource *this,UMovieSceneSequencePlayer *param_1,FFrameTime param_2
          ,FFrameTime param_3)

{
  FString local_30;
  FString local_20;
  
  if (6 < (byte)LogMovieRenderPipeline._0_1_) {
    ::FString::PrintfImpl(&local_20,L"Frame: %d Subframe: %f");
    ::FString::PrintfImpl(&local_30,L"Frame: %d Subframe: %f");
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OverrideSequencePlaybackRangeFromGlobalOutputSettings @ 14dcd9eb0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieGraphSequenceDataSource::OverrideSequencePlaybackRangeFromGlobalOutputSettings
          (UMovieGraphSequenceDataSource *this,ULevelSequence *param_1)

{
  code *pcVar1;
  FFrameRate FVar2;
  FFrameRate FVar3;
  bool bVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UMovieGraphConfig *this_00;
  UMovieGraphEvaluatedConfig *this_01;
  UMovieGraphGlobalOutputSettingNode *pUVar7;
  longlong lVar8;
  FFrameTime FVar9;
  UMovieScene *this_02;
  FFrameNumber *pFVar10;
  int iVar11;
  int iVar12;
  TRangeBound<FFrameNumber> local_178;
  TRangeBound<FFrameNumber> TStack_170;
  TRange<FFrameNumber> local_168;
  FString local_158;
  FMovieGraphTraversalContext local_148;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [8];
  undefined1 local_40 [24];
  
  local_148.ShotIndex = 0;
  local_148.ShotCount = 0;
  local_148.RenderDataIdentifier.RootBranchName.ComparisonIndex.Value = 0;
  local_148.RenderDataIdentifier.RootBranchName.Number = 0;
  local_148.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_148.RenderDataIdentifier.LayerName.Data.ArrayNum = 0;
  local_148.RenderDataIdentifier.LayerName.Data.ArrayMax = 0;
  local_148.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_148.RenderDataIdentifier.RendererName.Data.ArrayNum = 0;
  local_148.RenderDataIdentifier.RendererName.Data.ArrayMax = 0;
  local_148.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_148.RenderDataIdentifier.SubResourceName.Data.ArrayNum = 0;
  local_148.RenderDataIdentifier.SubResourceName.Data.ArrayMax = 0;
  local_148.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_148.Time.RenderedFrameNumber = 0;
  local_148.Time.FrameDeltaTime = 0.0;
  local_148.Time.WorldTimeDilation = 0.0;
  local_148.Time.bHasRelativeTimeBeenUsed = false;
  local_148.Time.WorldSeconds = 0.0;
  local_148.Time.MotionBlurFraction = 0.0;
  local_148.Time.FrameRate.Numerator = 0;
  local_148.Time.FrameRate.Denominator = 0;
  local_148.Time.bIsFirstTemporalSampleForFrame = false;
  local_148.Time.bIsLastTemporalSampleForFrame = false;
  local_148.Time.bDiscardOutput = false;
  local_148.Time.bRequiresAccumulator = false;
  local_148.Time.EvaluatedConfig.field0_0x0.DebugPtr =
       (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0)0x0;
  local_148.Time.RootTimeCode.Subframe = 0.0;
  local_148.Time.RootTimeCode.bDropFrameFormat = false;
  local_148.Time.RootFrameNumber.Value = 0;
  local_148.Time.ShotTimeCode.Hours = 0;
  local_148.Time.ShotTimeCode.Minutes = 0;
  local_148.Time.ShotTimeCode.Seconds = 0;
  local_148.Time.ShotTimeCode.Frames = 0;
  local_148.Time.ShotTimeCode.Subframe = 0.0;
  local_148.Time.ShotTimeCode.bDropFrameFormat = false;
  local_148.Time.ShotFrameNumber.Value = 0;
  local_148.Shot.field0_0x0.DebugPtr = (TObjectPtr<UMoviePipelineExecutorShot>_u_0)0x0;
  local_148.RootGraph.field0_0x0.DebugPtr = (TObjectPtr<UMovieGraphConfig>_u_0)0x0;
  local_148.RenderDataIdentifier.CameraName.Data.ArrayNum = 0;
  local_148.RenderDataIdentifier.CameraName.Data.ArrayMax = 0;
  local_148.Time.OutputFrameNumber = 0;
  local_148.Time.ShotOutputFrameNumber = 0;
  local_148.Time.TemporalSampleIndex = 0;
  local_148.Time.TemporalSampleCount = 0;
  local_148.Time.SpatialSampleIndex = 0;
  local_148.Time.SpatialSampleCount = 0;
  local_148.Time.RootTimeCode.Hours = 0;
  local_148.Time.RootTimeCode.Minutes = 0;
  local_148.Time.RootTimeCode.Seconds = 0;
  local_148.Time.RootTimeCode.Frames = 0;
  pUVar5 = UMovieGraphPipeline::StaticClass();
  pUVar6 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
  local_148.Job.field0_0x0 =
       (TObjectPtr<UMoviePipelineExecutorJob>_u_0)
       *(TObjectPtr<UMoviePipelineExecutorJob>_u_0 *)&pUVar6[5].field_0x18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_148.Job.field0_0x0.DebugPtr != (TObjectPtr<UMoviePipelineExecutorJob>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_148.Job.field0_0x0);
  }
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.Data.ArrayNum = 0;
  local_158.Data.ArrayMax = 0;
  this_00 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                      (&((UMoviePipelineExecutorJob *)local_148.Job.field0_0x0)->GraphPreset);
  this_01 = UMovieGraphConfig::CreateFlattenedGraph(this_00,&local_148,&local_158);
  if (this_01 != (UMovieGraphEvaluatedConfig *)0x0) {
    pUVar7 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                       (this_01,UMovieGraphNode::GlobalsPinName,true,false);
    lVar8 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    local_58 = *(undefined8 *)(lVar8 + 0x128);
    uStack_50 = *(undefined8 *)(lVar8 + 0x130);
    iVar12 = (int)((ulonglong)local_58 >> 0x20);
    if ((char)local_58 == '\x02') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar11 = (int)((ulonglong)uStack_50 >> 0x20);
    if ((char)uStack_50 == '\x02') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((pUVar7->bOverride_CustomPlaybackRangeStart != '\0') &&
       ((pUVar7->CustomPlaybackRangeStart).Type == Custom)) {
      (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
      lVar8 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
      FVar2.Denominator = 0;
      FVar2.Numerator = (pUVar7->CustomPlaybackRangeStart).Value;
      FVar9 = FFrameRate::TransformTime((FFrameTime)local_48,FVar2,*(FFrameRate *)(lVar8 + 0x140));
      iVar12 = *(int *)FVar9;
    }
    if ((pUVar7->bOverride_CustomPlaybackRangeEnd != '\0') &&
       ((pUVar7->CustomPlaybackRangeEnd).Type == Custom)) {
      (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
      lVar8 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
      FVar3.Denominator = 0;
      FVar3.Numerator = (pUVar7->CustomPlaybackRangeEnd).Value;
      FVar9 = FFrameRate::TransformTime((FFrameTime)local_40,FVar3,*(FFrameRate *)(lVar8 + 0x140));
      iVar11 = *(int *)FVar9;
      if (*(float *)((longlong)FVar9 + 4) != 0.0) {
        iVar11 = iVar11 + 1;
      }
    }
    local_168.LowerBound.Type.Value = '\x01';
    local_168.UpperBound.Type.Value = '\0';
    local_168.LowerBound.Value.Value = iVar12;
    local_168.UpperBound.Value.Value = iVar11;
    this_02 = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    UMovieScene::SetPlaybackRange(this_02,&local_168,true);
    lVar8 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    local_178._0_4_ = *(undefined4 *)(lVar8 + 0x128);
    local_178.Value.Value = *(int *)(lVar8 + 300);
    TStack_170._0_4_ = *(undefined4 *)(lVar8 + 0x130);
    iVar12 = *(int *)(lVar8 + 0x134);
    TStack_170.Value.Value = iVar12;
    if ((local_178.Type.Value != '\x02') && (TStack_170.Type.Value != '\x02')) {
      if (local_178.Type.Value == '\x02') {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L"");
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (local_178.Value.Value <= iVar12) {
        pFVar10 = TRangeBound<FFrameNumber>::GetValue(&TStack_170);
        iVar12 = pFVar10->Value;
        pFVar10 = TRangeBound<FFrameNumber>::GetValue(&local_178);
        if ((pFVar10->Value != iVar12) ||
           ((local_178.Type.Value != '\0' && (TStack_170.Type.Value != '\0')))) goto LAB_14dcda226;
      }
      if (1 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
    }
  }
LAB_14dcda226:
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (local_148.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data);
  }
  if (local_148.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data);
  }
  if (local_148.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data);
  }
  if (local_148.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data);
  }
  return;
}

// PauseDataSource @ 14dcda2b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieGraphSequenceDataSource::PauseDataSource(UMovieGraphSequenceDataSource *this)

{
  ALevelSequenceActor *this_00;
  ULevelSequencePlayer *pUVar1;
  
  this_00 = (this->LevelSequenceActor).field0_0x0.DebugPtr;
  if (this_00 != (ALevelSequenceActor *)0x0) {
    pUVar1 = ALevelSequenceActor::GetSequencePlayer(this_00);
    if (pUVar1 != (ULevelSequencePlayer *)0x0) {
      pUVar1 = ALevelSequenceActor::GetSequencePlayer
                         ((this->LevelSequenceActor).field0_0x0.DebugPtr);
      UMovieSceneSequencePlayer::Pause((UMovieSceneSequencePlayer *)pUVar1);
      return;
    }
  }
  return;
}

// PlayDataSource @ 14dcda300

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieGraphSequenceDataSource::PlayDataSource(UMovieGraphSequenceDataSource *this)

{
  ALevelSequenceActor *this_00;
  ULevelSequencePlayer *pUVar1;
  
  this_00 = (this->LevelSequenceActor).field0_0x0.DebugPtr;
  if (this_00 != (ALevelSequenceActor *)0x0) {
    pUVar1 = ALevelSequenceActor::GetSequencePlayer(this_00);
    if (pUVar1 != (ULevelSequencePlayer *)0x0) {
      pUVar1 = ALevelSequenceActor::GetSequencePlayer
                         ((this->LevelSequenceActor).field0_0x0.DebugPtr);
      UMovieSceneSequencePlayer::Play((UMovieSceneSequencePlayer *)pUVar1);
      return;
    }
  }
  return;
}

// RestoreCachedDataPostJob @ 14dce1f70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphSequenceDataSource::RestoreCachedDataPostJob(UMovieGraphSequenceDataSource *this)

{
  int iVar1;
  UWorld *this_00;
  UGameViewportClient *pUVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  UMovieSceneSequence *pUVar5;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_18;
  
  GAreScreenMessagesEnabled = true;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  pUVar2 = UWorld::GetGameViewport(this_00);
  if (pUVar2 != (UGameViewportClient *)0x0) {
    pUVar2->bDisableWorldRendering = 0;
  }
  pUVar3 = UMovieGraphPipeline::StaticClass();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  pUVar5 = (UMovieSceneSequence *)
           FSoftObjectPath::TryLoad
                     ((FSoftObjectPath *)(*(longlong *)&pUVar4[5].field_0x18 + 0x38),
                      (FUObjectSerializeContext *)0x0);
  if (pUVar5 != (UMovieSceneSequence *)0x0) {
    pUVar3 = Z_Construct_UClass_ULevelSequence_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14dce1ff0;
  }
  pUVar5 = (UMovieSceneSequence *)0x0;
LAB_14dce1ff0:
  local_18.Object = (this->CachedSequenceHierarchyRoot).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->CachedSequenceHierarchyRoot).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  MoviePipeline::RestoreCompleteSequenceHierarchy(pUVar5,&local_18);
  return;
}

// RestoreHierarchyForShot @ 14dce2040

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphSequenceDataSource::RestoreHierarchyForShot
          (UMovieGraphSequenceDataSource *this,TObjectPtr<UMoviePipelineExecutorShot> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_18;
  
  pTVar1 = (((param_1->field0_0x0).DebugPtr)->ShotInfo).SubSectionHierarchy.SharedReferenceCount.
           ReferenceController;
  local_18.Object = (((param_1->field0_0x0).DebugPtr)->ShotInfo).SubSectionHierarchy.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  MoviePipeline::SaveOrRestoreSubSectionHierarchy(&local_18,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// StaticRegisterNativesUMovieGraphSequenceDataSource @ 14dce6870

void __cdecl UMovieGraphSequenceDataSource::StaticRegisterNativesUMovieGraphSequenceDataSource(void)

{
  return;
}

// StopDataSource @ 14dce6b10

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMovieGraphSequenceDataSource::StopDataSource(UMovieGraphSequenceDataSource *this)

{
  ALevelSequenceActor *this_00;
  ULevelSequencePlayer *pUVar1;
  
  this_00 = (this->LevelSequenceActor).field0_0x0.DebugPtr;
  if (this_00 != (ALevelSequenceActor *)0x0) {
    pUVar1 = ALevelSequenceActor::GetSequencePlayer(this_00);
    if (pUVar1 != (ULevelSequencePlayer *)0x0) {
      pUVar1 = ALevelSequenceActor::GetSequencePlayer
                         ((this->LevelSequenceActor).field0_0x0.DebugPtr);
      UMovieSceneSequencePlayer::Stop((UMovieSceneSequencePlayer *)pUVar1);
      return;
    }
  }
  return;
}

// SyncDataSourceTime @ 14dce6b70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphSequenceDataSource::SyncDataSourceTime
          (UMovieGraphSequenceDataSource *this,FFrameTime *param_1)

{
  ALevelSequenceActor *this_00;
  FFrameRate FVar1;
  FMovieGraphSequenceTimeController *pFVar2;
  code *pcVar3;
  bool bVar4;
  ULevelSequencePlayer *pUVar5;
  ULevelSequence *pUVar6;
  longlong lVar7;
  
  this_00 = (this->LevelSequenceActor).field0_0x0.DebugPtr;
  if (this_00 != (ALevelSequenceActor *)0x0) {
    pUVar5 = ALevelSequenceActor::GetSequencePlayer(this_00);
    if (pUVar5 != (ULevelSequencePlayer *)0x0) {
      pUVar6 = ALevelSequenceActor::GetSequence((this->LevelSequenceActor).field0_0x0.DebugPtr);
      lVar7 = (**(code **)(pUVar6->_padding_ + 0x2f8))(pUVar6);
      FVar1 = *(FFrameRate *)(lVar7 + 0x138);
      if ((this->CustomSequenceTimeController).Object == (FMovieGraphSequenceTimeController *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this->CustomSequenceTimeController).Object;
      (pFVar2->TimeCache).Time = *param_1;
      (pFVar2->TimeCache).Rate = FVar1;
    }
  }
  return;
}

// UnmuteShot @ 14dcebe20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphSequenceDataSource::UnmuteShot
          (UMovieGraphSequenceDataSource *this,TObjectPtr<UMoviePipelineExecutorShot> *param_1)

{
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_18;
  
  local_18.Object = (((param_1->field0_0x0).DebugPtr)->ShotInfo).SubSectionHierarchy.Object;
  local_18.SharedReferenceCount.ReferenceController =
       (((param_1->field0_0x0).DebugPtr)->ShotInfo).SubSectionHierarchy.SharedReferenceCount.
       ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  MoviePipeline::SetSubSectionHierarchyActive(&local_18,true);
  return;
}

// UpdateShotList @ 14dcecd30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UMovieGraphSequenceDataSource::UpdateShotList(UMovieGraphSequenceDataSource *this)

{
  int iVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  ULevelSequence *pUVar4;
  bool local_res10 [24];
  
  pUVar2 = UMovieGraphPipeline::StaticClass();
  pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  pUVar4 = (ULevelSequence *)
           FSoftObjectPath::TryLoad
                     ((FSoftObjectPath *)(*(longlong *)&pUVar3[5].field_0x18 + 0x38),
                      (FUObjectSerializeContext *)0x0);
  if (pUVar4 != (ULevelSequence *)0x0) {
    pUVar2 = Z_Construct_UClass_ULevelSequence_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      local_res10[0] = false;
      pUVar2 = UMovieGraphPipeline::StaticClass();
      pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
      UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence
                (pUVar4,*(UMoviePipelineExecutorJob **)&pUVar3[5].field_0x18,local_res10);
    }
  }
  return;
}

