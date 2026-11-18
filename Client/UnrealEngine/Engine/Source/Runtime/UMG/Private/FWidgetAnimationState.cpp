// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 26

// FWidgetAnimationState @ 1468ffbb0

/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetAnimationState * __thiscall
FWidgetAnimationState::FWidgetAnimationState(FWidgetAnimationState *this)

{
  undefined1 *puVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Animation).field0_0x0.DebugPtr = (UWidgetAnimation *)0x0;
  (this->LegacyPlayer).field0_0x0.DebugPtr = (UUMGSequencePlayer *)0x0;
  (this->WeakUserWidget).WeakPtr = (FWeakObjectPtr)0x0;
  (this->WeakPlaybackState).Object = (FSharedPlaybackState *)0x0;
  (this->WeakPlaybackState).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PrivateLinker).field0_0x0.DebugPtr = (UMovieSceneEntitySystemLinker *)0x0;
  FMovieScenePlaybackManager::FMovieScenePlaybackManager(&this->PlaybackManager);
  *(undefined8 *)&this->OnWidgetAnimationFinishedEvent = 0;
  *(undefined8 *)&(this->OnWidgetAnimationFinishedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnWidgetAnimationFinishedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnWidgetAnimationFinishedEvent).field_0x18 = 2;
  this->bRestoreState = false;
  this->bIsPendingDelete = false;
  this->bIsStopping = false;
  this->bIsBeginningPlay = false;
  (this->UserTag).ComparisonIndex = 0;
  (this->UserTag).Number = 0;
  this->BlockedDeltaTimeCompensation = 0.0;
  return this;
}

// AddReferencedObjects @ 14690ad90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWidgetAnimationState::AddReferencedObjects
          (FWidgetAnimationState *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Animation,0,0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->LegacyPlayer,0,0);
                    /* WARNING: Could not recover jumptable at 0x00014690ade6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->PrivateLinker,0,0);
  return;
}

// FlushIfPrivateLinker @ 14691a7a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWidgetAnimationState::FlushIfPrivateLinker(FWidgetAnimationState *this)

{
  UMovieSceneEntitySystemLinker *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FMovieSceneEntitySystemRunner *this_01;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FMovieSceneEntitySystemRunner,1> *pTVar4;
  TSharedRef<FMovieSceneEntitySystemRunner,1> local_18;
  
  this_00 = (this->PrivateLinker).field0_0x0.DebugPtr;
  if (this_00 != (UMovieSceneEntitySystemLinker *)0x0) {
    pTVar4 = UMovieSceneEntitySystemLinker::GetRunner(this_00,&local_18);
    pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
    this_01 = pTVar4->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (this_01 == (FMovieSceneEntitySystemRunner *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FMovieSceneEntitySystemRunner::Flush(this_01,0.0,None);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// GetAnimationHandle @ 14691d970

/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetAnimationHandle * __thiscall
FWidgetAnimationState::GetAnimationHandle
          (FWidgetAnimationState *this,FWidgetAnimationHandle *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FWidgetAnimationState *pFVar2;
  TSharedRef<FWidgetAnimationState,1> *pTVar3;
  TSharedRef<FWidgetAnimationState,1> local_18;
  
  pTVar3 = TSharedFromThis<FWidgetAnimationState,1>::AsShared
                     ((TSharedFromThis<FWidgetAnimationState,1> *)this,&local_18);
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar3->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    (__return_storage_ptr__->WeakState).Object = pFVar2;
    (__return_storage_ptr__->WeakState).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    (__return_storage_ptr__->WeakState).Object = pFVar2;
    (__return_storage_ptr__->WeakState).WeakReferenceCount.ReferenceController = pTVar1;
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetCurrentTime @ 14691de70

/* WARNING: Enum "Type": Some values do not have unique names */

FQualifiedFrameTime * __thiscall
FWidgetAnimationState::GetCurrentTime
          (FWidgetAnimationState *this,FQualifiedFrameTime *__return_storage_ptr__)

{
  FFrameTime local_res8;
  
  FMovieScenePlaybackManager::GetCurrentTime(&this->PlaybackManager);
  __return_storage_ptr__->Time = local_res8;
  __return_storage_ptr__->Rate = (this->PlaybackManager).DisplayRate;
  return __return_storage_ptr__;
}

// GetLegacyPlayer @ 14691eb50

/* WARNING: Enum "Type": Some values do not have unique names */

UUMGSequencePlayer * __thiscall FWidgetAnimationState::GetLegacyPlayer(FWidgetAnimationState *this)

{
  return (this->LegacyPlayer).field0_0x0.DebugPtr;
}

// GetOrCreateLegacyPlayer @ 1469201b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UUMGSequencePlayer * __thiscall
FWidgetAnimationState::GetOrCreateLegacyPlayer(FWidgetAnimationState *this)

{
  UClass *pUVar1;
  UUMGSequencePlayer *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((this->LegacyPlayer).field0_0x0.DebugPtr == (UUMGSequencePlayer *)0x0) {
    local_98._8_8_ = FWeakObjectPtr::Get(&(this->WeakUserWidget).WeakPtr);
    if ((UObject *)local_98._8_8_ != (UObject *)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)local_98._8_8_,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar1 = UUMGSequencePlayer::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar1);
      pUVar2 = (UUMGSequencePlayer *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar3 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar3 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UUMGSequencePlayer *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (this->LegacyPlayer).field0_0x0.DebugPtr = pUVar2;
      UUMGSequencePlayer::InitSequencePlayer(pUVar2,this);
    }
    pUVar2 = (this->LegacyPlayer).field0_0x0.DebugPtr;
  }
  else {
    pUVar2 = (this->LegacyPlayer).field0_0x0.DebugPtr;
  }
  return pUVar2;
}

// GetPlaybackStatus @ 146920d10

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FWidgetAnimationState::GetPlaybackStatus(FWidgetAnimationState *this)

{
  return (this->PlaybackManager).PlaybackStatus;
}

// Initialize @ 14692a3c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
FWidgetAnimationState::Initialize
          (FWidgetAnimationState *this,UWidgetAnimation *param_1,UUserWidget *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FInstanceRegistry *this_00;
  TReferenceControllerBase<1> *pTVar3;
  FSharedPlaybackState *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TObjectPtr<UMovieSceneCompiledData>_u_0 TVar6;
  UWidgetAnimation *pUVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  UMovieSceneEntitySystemLinker *pUVar14;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar15;
  UClass *pUVar16;
  longlong *plVar17;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  bool local_148;
  undefined1 local_147;
  undefined1 local_146 [2];
  ushort local_144 [2];
  undefined1 local_140 [48];
  char local_110;
  FSharedPlaybackState *local_108;
  TReferenceControllerBase<1> *local_100;
  FPlaybackCapabilityPtr local_f8;
  FSharedPlaybackState *local_e8;
  TObjectPtr<UMovieSceneCompiledData>_u_0 local_e0;
  FString local_d8;
  UUserWidget *local_c8;
  FSharedPlaybackState *local_c0;
  FWidgetAnimationState *local_b8;
  FSequenceInstance *local_b0;
  FName local_a8;
  FName local_a0;
  FString local_98;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_88;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_78;
  FPlaybackCapabilityPtr local_68;
  FPlaybackCapabilityPtr local_58;
  
  if (((param_1 == (UWidgetAnimation *)0x0) || (param_2 == (UUserWidget *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAnimation && InUserWidget",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\WidgetAnimationState.cpp"
                         ,0x49,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWidgetAnimation *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Animation).field0_0x0.DebugPtr = param_1;
  local_c8 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UUserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->WeakUserWidget).WeakPtr,(FObjectPtr)&local_c8);
  if (((param_2->AnimationTickManager).field0_0x0.DebugPtr == (UUMGSequenceTickManager *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserWidget->AnimationTickManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\WidgetAnimationState.cpp"
                         ,0x4e,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar12 = FWeakObjectPtr::Get(&(this->WeakUserWidget).WeakPtr);
  if (pUVar12 == (UObject *)0x0) {
LAB_14692a497:
    bVar9 = false;
  }
  else {
    cVar10 = (**(code **)(*(longlong *)pUVar12 + 800))(pUVar12);
    if (cVar10 == '\0') {
      pUVar16 = *(UClass **)&pUVar12->field_0x10;
      if (pUVar16 == (UClass *)0x0) goto LAB_14692a497;
      do {
        pUVar13 = Z_Construct_UClass_UUserWidget_NoRegister();
        if (pUVar16 == pUVar13) goto LAB_14692a497;
        if ((pUVar16->ClassFlags & CLASS_Native) != CLASS_None) {
          bVar9 = true;
          goto LAB_14692a4f6;
        }
        pUVar16 = (UClass *)pUVar16->_padding_;
      } while (pUVar16 != (UClass *)0x0);
      bVar9 = false;
    }
    else {
      bVar9 = cVar10 == '\x01';
    }
  }
LAB_14692a4f6:
  pUVar14 = (((param_2->AnimationTickManager).field0_0x0.DebugPtr)->Linker).field0_0x0.DebugPtr;
  if ((param_1->_padding_ & 0x2000000) != 0) {
    pUVar12 = (UObject *)(**(code **)(param_2->_padding_ + 0x180))(param_2);
    pUVar14 = UMovieSceneEntitySystemLinker::CreateLinker(pUVar12,UMG);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar14 != (UMovieSceneEntitySystemLinker *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    (this->PrivateLinker).field0_0x0.DebugPtr = pUVar14;
  }
  if (((pUVar14->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstanceRegistry.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                          ,0x96,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = (pUVar14->InstanceRegistry).Ptr;
  UE::MovieScene::FInstanceRegistry::AllocateRootInstance
            (this_00,(UMovieSceneSequence *)local_140,(UObject *)param_1,
             (UMovieSceneCompiledDataManager *)param_2);
  local_b0 = (FSequenceInstance *)
             (*(longlong *)&this_00->Instances + (ulonglong)(ushort)local_140._0_2_ * 0x140);
  pTVar3 = (local_b0->SharedPlaybackState).SharedReferenceCount.ReferenceController;
  pFVar4 = (local_b0->SharedPlaybackState).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->WeakPlaybackState).Object = pFVar4;
  local_c0 = pFVar4;
  if (pTVar3 != (this->WeakPlaybackState).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (this->WeakPlaybackState).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    (this->WeakPlaybackState).WeakReferenceCount.ReferenceController = pTVar3;
  }
  bVar11 = IsInGameThread();
  if (!bVar11) {
    local_res18[0] = bVar11;
    `UE::MovieScene::FSharedPlaybackState::AddCapability<FMovieSceneEvaluationState>'::__l2::
    <lambda_1>::operator()(local_res18);
  }
  FMovieSceneEvaluationState::GetPlaybackCapabilityID();
  local_140._24_8_ = &pFVar4->Capabilities;
  UE::MovieScene::FPlaybackCapabilitiesImpl::
  AddCapability<FMovieSceneEvaluationState,FMovieSceneEvaluationState>
            ((FPlaybackCapabilitiesImpl *)local_140._24_8_,
             (FPlaybackCapabilityPtr *)(local_140 + 0x28),1 << (local_140[4] & 0x1f));
  if (((longlong *)local_140._40_8_ == (longlong *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Ptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                          ,0x3a,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  plVar17 = (longlong *)local_140._40_8_;
  if (local_110 != '\0') {
    if ((local_110 == '\x01') || (local_110 == '\x02')) {
      plVar17 = *(longlong **)local_140._40_8_;
    }
    else {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                          ,0x44,L"Unexpected playback capability storage mode");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  local_140._32_8_ = *(undefined8 *)(*plVar17 + 8);
  pTVar15 = TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1>::AsShared
                      ((TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1> *)pFVar4,&local_88);
  pTVar5 = (pTVar15->SharedReferenceCount).ReferenceController;
  pFVar4 = pTVar15->Object;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_108 = pFVar4;
  local_100 = pTVar5;
  (*(code *)local_140._32_8_)(plVar17,&local_108);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  local_148 = false;
  bVar11 = IsInGameThread();
  if (!bVar11) {
    local_res20[0] = bVar11;
    `UE::MovieScene::FSharedPlaybackState::
    AddCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability,bool_const_&>'::__l2::
    <lambda_1>::operator()(local_res20);
  }
  UE::MovieScene::FSequenceDirectorPlaybackCapability::GetPlaybackCapabilityID();
  UE::MovieScene::FPlaybackCapabilitiesImpl::
  AddCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability,UE::MovieScene::FSequenceDirectorPlaybackCapability,bool_const_&>
            ((FPlaybackCapabilitiesImpl *)local_140._24_8_,&local_f8,1 << (local_140[8] & 0x1f),
             &local_148);
  if ((local_f8.Ptr == (longlong *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Ptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                          ,0x3a,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  plVar17 = local_f8.Ptr;
  if (local_f8.StorageMode != Inline) {
    if ((local_f8.StorageMode == RawPointer) || (local_f8.StorageMode == SharedPointer)) {
      plVar17 = *(longlong **)local_f8.Ptr;
    }
    else {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                          ,0x44,L"Unexpected playback capability storage mode");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  local_140._32_8_ = *(undefined8 *)(*plVar17 + 8);
  pTVar15 = TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1>::AsShared
                      ((TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1> *)local_c0,&local_78
                      );
  TVar6 = (TObjectPtr<UMovieSceneCompiledData>_u_0)
          (pTVar15->SharedReferenceCount).ReferenceController;
  pFVar4 = pTVar15->Object;
  if (TVar6.DebugPtr == (UMovieSceneCompiledData *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    *(atomic<int> *)&(TVar6.DebugPtr)->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&(TVar6.DebugPtr)->_padding_ + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    LOCK();
    *(atomic<int> *)&(TVar6.DebugPtr)->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&(TVar6.DebugPtr)->_padding_ + 1);
    UNLOCK();
  }
  local_e8 = pFVar4;
  local_e0 = TVar6;
  (*(code *)local_140._32_8_)(plVar17,&local_e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)TVar6.DebugPtr);
  if (bVar9) {
    GetOrCreateLegacyPlayer(this);
    if (((this->LegacyPlayer).field0_0x0.DebugPtr == (UUMGSequencePlayer *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("LegacyPlayer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\WidgetAnimationState.cpp"
                           ,0x6b,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_144[0] = (ushort)((this->LegacyPlayer).field0_0x0.DebugPtr)->_padding_;
    bVar9 = IsInGameThread();
    if (!bVar9) {
      local_147 = bVar9;
      `UE::MovieScene::FSharedPlaybackState::
      AddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>'::__l2::
      <lambda_1>::operator()(&local_147);
    }
    UE::MovieScene::FPlayerIndexPlaybackCapability::GetPlaybackCapabilityID();
    UE::MovieScene::FPlaybackCapabilitiesImpl::
    AddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>
              ((FPlaybackCapabilitiesImpl *)local_140._24_8_,&local_68,1 << (local_140[0xc] & 0x1f),
               local_144);
    if ((local_68.Ptr == (void *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x3a,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((((local_68.StorageMode != Inline) && (local_68.StorageMode != RawPointer)) &&
        (local_68.StorageMode != SharedPointer)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x44,L"Unexpected playback capability storage mode"), bVar9)) {
code_r0x00014692a9e8:
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    local_b8 = this;
    bVar9 = IsInGameThread();
    if (!bVar9) {
      local_146[0] = bVar9;
      `UE::MovieScene::FSharedPlaybackState::
      AddCapability<UE::UMG::FUMGLegacyPlayerProvider,FWidgetAnimationState_*>'::__l2::<lambda_1>::
      operator()(local_146);
    }
    UE::MovieScene::ILegacyPlayerProviderPlaybackCapability::GetPlaybackCapabilityID();
    UE::MovieScene::FPlaybackCapabilitiesImpl::
    AddCapability<UE::UMG::FUMGLegacyPlayerProvider,UE::MovieScene::ILegacyPlayerProviderPlaybackCapability,FWidgetAnimationState_*>
              ((FPlaybackCapabilitiesImpl *)local_140._24_8_,&local_58,1 << (local_140[0x10] & 0x1f)
               ,&local_b8);
    if ((local_58.Ptr == (void *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x3a,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((((local_58.StorageMode != Inline) && (local_58.StorageMode != RawPointer)) &&
        (local_58.StorageMode != SharedPointer)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x44,L"Unexpected playback capability storage mode"), bVar9))
    goto code_r0x00014692a9e8;
  }
  UE::MovieScene::FSequenceInstance::Initialize(local_b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FMovieScenePlaybackManager::Initialize(&this->PlaybackManager,(UMovieSceneSequence *)param_1);
  (this->PlaybackManager).DissectLooping = DissectOne;
  if ((UE::UMG::GVarAnimationDetailedLogging != false) && (4 < (byte)LogUMG._0_1_)) {
    local_a8 = (FName)param_2->_padding_;
    ::FName::ToString(&local_a8,&local_98);
    pUVar7 = (this->Animation).field0_0x0.DebugPtr;
    if (pUVar7 == (UWidgetAnimation *)0x0) {
      ::FString::FString(&local_d8,L"None");
    }
    else {
      local_a0 = (FName)pUVar7->_padding_;
      ::FName::ToString(&local_a0,&local_d8);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// IsPlayingForward @ 14692cb50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWidgetAnimationState::IsPlayingForward(FWidgetAnimationState *this)

{
  return (this->PlaybackManager).PlayDirection == Forwards;
}

// IsValid @ 14692d5e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWidgetAnimationState::IsValid(FWidgetAnimationState *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->WeakPlaybackState).Object != (FSharedPlaybackState *)0x0) &&
      (pTVar1 = (this->WeakPlaybackState).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// NeedsLegacyPlayer @ 14692dec0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWidgetAnimationState::NeedsLegacyPlayer(FWidgetAnimationState *this)

{
  UClass *pUVar1;
  char cVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  
  pUVar3 = FWeakObjectPtr::Get(&(this->WeakUserWidget).WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    cVar2 = (**(code **)(*(longlong *)pUVar3 + 800))(pUVar3);
    if (cVar2 != '\0') {
      return cVar2 == '\x01';
    }
    for (pUVar1 = *(UClass **)&pUVar3->field_0x10;
        (pUVar1 != (UClass *)0x0 &&
        (pUVar4 = Z_Construct_UClass_UUserWidget_NoRegister(), pUVar1 != pUVar4));
        pUVar1 = (UClass *)pUVar1->_padding_) {
      if ((pUVar1->ClassFlags & CLASS_Native) != CLASS_None) {
        return true;
      }
    }
  }
  return false;
}

// OnBegunPlay @ 14692e4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWidgetAnimationState::OnBegunPlay(FWidgetAnimationState *this)

{
  UWidgetAnimation *pUVar1;
  UObject *pUVar2;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  this->bIsBeginningPlay = false;
  if ((UE::UMG::GVarAnimationDetailedLogging != false) &&
     (pUVar2 = FWeakObjectPtr::Get(&(this->WeakUserWidget).WeakPtr), 4 < (byte)LogUMG._0_1_)) {
    if (pUVar2 == (UObject *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      local_res8.Number = *(uint *)&pUVar2->field_0x1c;
      ::FName::ToString(&local_res8,&local_18);
    }
    pUVar1 = (this->Animation).field0_0x0.DebugPtr;
    if (pUVar1 == (UWidgetAnimation *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res8 = (FName)pUVar1->_padding_;
      ::FName::ToString(&local_res8,&local_28);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnStopped @ 146930580

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall FWidgetAnimationState::OnStopped(FWidgetAnimationState *this)

{
  undefined1 *puVar1;
  int iVar2;
  UUMGSequencePlayer *pUVar3;
  FSharedPlaybackState *this_00;
  UWidgetAnimation *pUVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  atomic<int> aVar8;
  bool bVar9;
  char cVar10;
  ushort uVar11;
  atomic<int> aVar12;
  uint uVar13;
  uint uVar14;
  UObject *pUVar15;
  UUserWidget *this_01;
  ForAnyElementType FVar16;
  ForAnyElementType FVar17;
  longlong lVar18;
  wchar_t *pwVar19;
  TReferenceControllerBase<1> *pTVar20;
  wchar_t *pwVar21;
  bool bVar22;
  undefined1 auStack_1148 [32];
  UObject *local_1128;
  wchar_t *local_1120;
  wchar_t *local_1118;
  FString local_1108;
  FString local_10f8;
  FString local_10e8;
  FName local_10d8;
  FName local_10d0;
  FName local_10c8;
  FName local_10c0;
  FName local_10b8;
  FName local_10b0;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> local_10a8;
  FString local_1098;
  FString local_1088;
  FString local_1078;
  FDestructionSentinel local_1068;
  FDestructionSentinel local_1050;
  uchar local_1038 [4096];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x1469305a4;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1148;
  pTVar20 = (this->WeakPlaybackState).WeakReferenceCount.ReferenceController;
  if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
    aVar8 = pTVar20->SharedReferenceCount;
    do {
      if (aVar8 == (atomic<int>)0x0) {
        pTVar20 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469305f6;
      }
      LOCK();
      aVar12 = pTVar20->SharedReferenceCount;
      bVar22 = aVar8 == aVar12;
      if (bVar22) {
        pTVar20->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
        aVar12 = aVar8;
      }
      UNLOCK();
      aVar8 = aVar12;
    } while (!bVar22);
    this_00 = (this->WeakPlaybackState).Object;
    if (this_00 != (FSharedPlaybackState *)0x0) {
      UE::MovieScene::FSharedPlaybackState::GetRunner(this_00,&local_10a8);
      if ((local_10a8.Object == (FMovieSceneEntitySystemRunner *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar22 = FMovieSceneEntitySystemRunner::QueueFinalUpdate
                         (local_10a8.Object,*(FInstanceHandle *)&this_00->RootInstanceHandle);
      if (bVar22) {
        FlushIfPrivateLinker(this);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_10a8.SharedReferenceCount.ReferenceController);
      if (this->bRestoreState) {
        FMovieSceneInstancePreAnimatedState::RestorePreAnimatedState(&this_00->PreAnimatedState);
      }
    }
  }
LAB_1469305f6:
  this->bIsStopping = false;
  this->bIsPendingDelete = true;
  if ((UE::UMG::GVarAnimationDetailedLogging == false) ||
     (pUVar15 = FWeakObjectPtr::Get(&(this->WeakUserWidget).WeakPtr), (byte)LogUMG._0_1_ < 5))
  goto LAB_1469307b9;
  pUVar3 = (this->LegacyPlayer).field0_0x0.DebugPtr;
  if (pUVar3 == (UUMGSequencePlayer *)0x0) {
LAB_146930652:
    pwVar19 = L"";
  }
  else {
    bVar22 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                       ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                        &pUVar3->OnSequenceFinishedPlayingEvent);
    pwVar19 = L", OnSequenceFinishedPlaying bound";
    if (!bVar22) goto LAB_146930652;
  }
  bVar22 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                     ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                      &this->OnWidgetAnimationFinishedEvent);
  pwVar21 = L"";
  if (bVar22) {
    pwVar21 = L", OnWidgetAnimationFinishedEvent bound";
  }
  if (pUVar15 == (UObject *)0x0) {
    ::FString::FString(&local_10f8,L"None");
  }
  else {
    local_10d8.ComparisonIndex.Value = *(uint *)&pUVar15->field_0x18;
    local_10d8.Number = *(uint *)&pUVar15->field_0x1c;
    ::FName::ToString(&local_10d8,&local_10f8);
  }
  pUVar4 = (this->Animation).field0_0x0.DebugPtr;
  if (pUVar4 == (UWidgetAnimation *)0x0) {
    ::FString::FString(&local_1108,L"None");
  }
  else {
    local_10d0 = (FName)pUVar4->_padding_;
    ::FName::ToString(&local_10d0,&local_1108);
  }
  local_1128 = pUVar15;
  local_1120 = pwVar21;
  local_1118 = pwVar19;
  UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
  if (local_1108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1108.Data.AllocatorInstance.Data);
  }
  if (local_10f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_10f8.Data.AllocatorInstance.Data);
  }
LAB_1469307b9:
  this_01 = (UUserWidget *)FWeakObjectPtr::Get(&(this->WeakUserWidget).WeakPtr);
  if (this_01 != (UUserWidget *)0x0) {
    if ((UE::UMG::GVarAnimationMarkers != false) &&
       (pUVar4 = (this->Animation).field0_0x0.DebugPtr, pUVar4 != (UWidgetAnimation *)0x0)) {
      local_10c8 = (FName)pUVar4->_padding_;
      ::FName::ToString(&local_10c8,&local_1088);
      local_10c0 = (FName)this_01->_padding_;
      ::FName::ToString(&local_10c0,&local_1098);
      FCsvProfiler::RecordEventfInternal(0,L"Stop Animation [%s::%s]");
      if (local_1098.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1098.Data.AllocatorInstance.Data);
      }
      if (local_1088.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1088.Data.AllocatorInstance.Data);
      }
      if (-1 < BookmarkChannel->Enabled) {
        if (__BookmarkPoint353 == false) {
          FMiscTrace::OutputBookmarkSpec
                    (&__BookmarkPoint353,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\WidgetAnimationState.cpp"
                     ,0x161,L"Stop Animation [%s::%s]");
          __BookmarkPoint353 = true;
        }
        pUVar4 = (this->Animation).field0_0x0.DebugPtr;
        if (pUVar4 == (UWidgetAnimation *)0x0) {
          ::FString::FString(&local_10e8,L"None");
        }
        else {
          local_10b8 = (FName)pUVar4->_padding_;
          ::FName::ToString(&local_10b8,&local_10e8);
        }
        local_10b0 = (FName)this_01->_padding_;
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_10e8.Data.ArrayNum != 0) {
          FVar16.Data = local_10e8.Data.AllocatorInstance.Data;
        }
        ::FName::ToString(&local_10b0,&local_1078);
        FVar17.Data = (FScriptContainerElement *)L"";
        if (local_1078.Data.ArrayNum != 0) {
          FVar17.Data = local_1078.Data.AllocatorInstance.Data;
        }
        uVar13 = CallstackTrace_GetCurrentId();
        uVar11 = FFormatArgsTrace::EncodeArguments<4096,wchar_t_const_*,wchar_t_const_*>
                           (&local_1038,(wchar_t *)FVar17.Data,(wchar_t *)FVar16.Data);
        if (uVar11 != 0) {
          FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint353,uVar13,uVar11,local_1038);
        }
        if (local_1078.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1078.Data.AllocatorInstance.Data);
        }
        if (local_10e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_10e8.Data.AllocatorInstance.Data);
        }
      }
    }
    UUserWidget::BroadcastAnimationFinishedPlaying(this_01,this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnWidgetAnimationFinishedEvent,(FWriteAccessScope *)&local_1068);
  puVar1 = &(this->OnWidgetAnimationFinishedEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar22 = false;
  uVar13 = *(int *)&(this->OnWidgetAnimationFinishedEvent).field_0x10 - 1;
  if (-1 < (int)uVar13) {
    pUVar15 = (UObject *)(longlong)(int)uVar13;
    lVar18 = (longlong)pUVar15 << 4;
    bVar22 = false;
    do {
      iVar2 = *(int *)&(this->OnWidgetAnimationFinishedEvent).field_0x10;
      uVar14 = 0;
      if ((int)uVar13 < iVar2) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (local_1128 = pUVar15, local_1120 = (wchar_t *)(longlong)iVar2,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar5 = *(longlong *)&(this->OnWidgetAnimationFinishedEvent).field_0x8;
      if (((*(int *)(lVar18 + 8 + lVar5) == 0) ||
          (plVar6 = *(longlong **)(lVar18 + lVar5), plVar6 == (longlong *)0x0)) ||
         (cVar10 = (**(code **)(*plVar6 + 0x68))(), cVar10 == '\0')) {
        bVar22 = true;
      }
      pUVar15 = (UObject *)&pUVar15[-1].field_0x27;
      lVar18 = lVar18 + -0x10;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  puVar1 = &(this->OnWidgetAnimationFinishedEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar22) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnWidgetAnimationFinishedEvent,false);
  }
  if (local_1068.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1068.Accessor,&local_1068);
  }
  pUVar3 = (this->LegacyPlayer).field0_0x0.DebugPtr;
  if (pUVar3 != (UUMGSequencePlayer *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pUVar3->OnSequenceFinishedPlayingEvent,(FWriteAccessScope *)&local_1050);
    puVar1 = &(pUVar3->OnSequenceFinishedPlayingEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar22 = false;
    uVar13 = *(int *)&(pUVar3->OnSequenceFinishedPlayingEvent).field_0x10 - 1;
    if (-1 < (int)uVar13) {
      pUVar15 = (UObject *)(longlong)(int)uVar13;
      lVar18 = (longlong)pUVar15 << 4;
      bVar22 = false;
      do {
        iVar2 = *(int *)&(pUVar3->OnSequenceFinishedPlayingEvent).field_0x10;
        uVar14 = 0;
        if ((int)uVar13 < iVar2) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (local_1128 = pUVar15, local_1120 = (wchar_t *)(longlong)iVar2,
           bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = *(longlong *)&(pUVar3->OnSequenceFinishedPlayingEvent).field_0x8;
        if (((*(int *)(lVar18 + 8 + lVar5) == 0) ||
            (plVar6 = *(longlong **)(lVar18 + lVar5), plVar6 == (longlong *)0x0)) ||
           (cVar10 = (**(code **)(*plVar6 + 0x68))(), cVar10 == '\0')) {
          bVar22 = true;
        }
        pUVar15 = (UObject *)&pUVar15[-1].field_0x27;
        lVar18 = lVar18 + -0x10;
        uVar13 = uVar13 - 1;
      } while (-1 < (int)uVar13);
    }
    puVar1 = &(pUVar3->OnSequenceFinishedPlayingEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar22) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar3->OnSequenceFinishedPlayingEvent,false);
    }
    if (local_1050.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1050.Accessor,&local_1050);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  return;
}

// Pause @ 146930fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWidgetAnimationState::Pause(FWidgetAnimationState *this)

{
  FSharedPlaybackState *this_00;
  UWidgetAnimation *pUVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  UObject *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  FName local_res10;
  FName local_res18 [2];
  FString local_f8;
  FString local_e8;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> local_d8;
  FString local_c8;
  FMovieSceneContext local_b8;
  
  (this->PlaybackManager).PlaybackStatus = Stopped;
  pTVar6 = (this->WeakPlaybackState).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar6->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146931014;
      }
      LOCK();
      aVar4 = pTVar6->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    this_00 = (this->WeakPlaybackState).Object;
    if (this_00 != (FSharedPlaybackState *)0x0) {
      UE::MovieScene::FSharedPlaybackState::GetRunner(this_00,&local_d8);
      FMovieScenePlaybackManager::UpdateAtCurrentTime(&this->PlaybackManager,&local_b8);
      if ((local_d8.Object == (FMovieSceneEntitySystemRunner *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FMovieSceneEntitySystemRunner::QueueUpdate
                (local_d8.Object,&local_b8,*(FInstanceHandle *)&this_00->RootInstanceHandle,Flush);
      FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_b8.RootToSequenceWarpCounter);
      DestructItems<FMovieSceneNestedSequenceTransform,int>
                ((FMovieSceneNestedSequenceTransform *)
                 local_b8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
                 local_b8.RootToSequenceTransform.NestedTransforms.ArrayNum);
      if ((FMovieSceneNestedSequenceTransform *)
          local_b8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
          (FMovieSceneNestedSequenceTransform *)0x0) {
        FMemory::Free(local_b8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
  }
LAB_146931014:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if ((UE::UMG::GVarAnimationDetailedLogging != false) &&
     (pUVar5 = FWeakObjectPtr::Get(&(this->WeakUserWidget).WeakPtr), 4 < (byte)LogUMG._0_1_)) {
    FMovieScenePlaybackManager::GetCurrentTime(&this->PlaybackManager);
    ::FString::PrintfImpl(&local_c8,L"Frame: %d Subframe: %f");
    if (pUVar5 == (UObject *)0x0) {
      ::FString::FString(&local_e8,L"None");
    }
    else {
      local_res10.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
      local_res10.Number = *(uint *)&pUVar5->field_0x1c;
      ::FName::ToString(&local_res10,&local_e8);
    }
    pUVar1 = (this->Animation).field0_0x0.DebugPtr;
    if (pUVar1 == (UWidgetAnimation *)0x0) {
      ::FString::FString(&local_f8,L"None");
    }
    else {
      local_res18[0] = (FName)pUVar1->_padding_;
      ::FName::ToString(local_res18,&local_f8);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  FlushIfPrivateLinker(this);
  return;
}

// Play @ 1469312d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWidgetAnimationState::Play(FWidgetAnimationState *this,FWidgetAnimationStatePlayParams *param_1)

{
  Type TVar1;
  UWidgetAnimation *pUVar2;
  code *pcVar3;
  double dVar4;
  float fVar5;
  atomic<int> aVar6;
  double dVar7;
  double dVar8;
  ushort uVar9;
  atomic<int> aVar10;
  uint uVar11;
  UObject *pUVar12;
  FMovieSceneSequenceHierarchy *pFVar13;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar14;
  FFrameTime FVar15;
  int iVar16;
  int iVar17;
  FFrameTime *pFVar18;
  ForAnyElementType FVar19;
  FSharedPlaybackState *pFVar20;
  ForAnyElementType FVar21;
  TReferenceControllerBase<1> *pTVar22;
  bool bVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 in_XMM2 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auStackY_12a8 [32];
  FFrameTime local_1258;
  FFrameTime local_1250;
  FSharedPlaybackState *local_1248;
  FFrameTime local_1240;
  FFrameTime local_1238;
  undefined1 local_1230 [8];
  ForAnyElementType local_1228;
  int local_1220;
  FFrameTime local_1218;
  FFrameTime local_1210;
  FFrameTime local_1208;
  UObject *local_1200;
  FString local_11f8;
  FString local_11e8;
  FString local_11d8;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> local_11c8;
  FName local_11b8;
  FName local_11b0;
  FName local_11a8;
  FName local_11a0;
  FName local_1198;
  FName local_1190;
  FString local_1188;
  FString local_1178;
  FString local_1168;
  FString local_1158;
  FDestructionSentinel local_1148 [2];
  FMovieSceneContext local_1118;
  uchar local_1098 [4096];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_12a8;
  pTVar22 = (this->WeakPlaybackState).WeakReferenceCount.ReferenceController;
  if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar22->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar22 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146931335;
      }
      LOCK();
      aVar10 = pTVar22->SharedReferenceCount;
      bVar23 = aVar6 == aVar10;
      if (bVar23) {
        pTVar22->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar10 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar10;
    } while (!bVar23);
    pFVar20 = (this->WeakPlaybackState).Object;
    local_1248 = pFVar20;
    if (pFVar20 != (FSharedPlaybackState *)0x0) {
      pUVar12 = FWeakObjectPtr::Get(&(this->WeakUserWidget).WeakPtr);
      local_1200 = pUVar12;
      if (((UE::UMG::GVarAnimationMarkers != false) &&
          (pUVar2 = (this->Animation).field0_0x0.DebugPtr, pUVar2 != (UWidgetAnimation *)0x0)) &&
         (pUVar12 != (UObject *)0x0)) {
        local_11b8 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_11b8,&local_1178);
        local_11b0.ComparisonIndex.Value = *(uint *)&pUVar12->field_0x18;
        local_11b0.Number = *(uint *)&pUVar12->field_0x1c;
        ::FName::ToString(&local_11b0,&local_1188);
        FCsvProfiler::RecordEventfInternal(0,L"Play Animation [%s::%s]");
        if (local_1188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1188.Data.AllocatorInstance.Data);
        }
        if (local_1178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1178.Data.AllocatorInstance.Data);
        }
        pFVar20 = local_1248;
        if (-1 < BookmarkChannel->Enabled) {
          if (__BookmarkPoint450 == false) {
            FMiscTrace::OutputBookmarkSpec
                      (&__BookmarkPoint450,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\WidgetAnimationState.cpp"
                       ,0x1c2,L"Play Animation [%s::%s]");
            __BookmarkPoint450 = true;
          }
          pUVar2 = (this->Animation).field0_0x0.DebugPtr;
          if (pUVar2 == (UWidgetAnimation *)0x0) {
            ::FString::FString(&local_11f8,L"None");
          }
          else {
            local_11a8 = (FName)pUVar2->_padding_;
            ::FName::ToString(&local_11a8,&local_11f8);
          }
          local_11a0.ComparisonIndex.Value = *(uint *)&pUVar12->field_0x18;
          local_11a0.Number = *(uint *)&pUVar12->field_0x1c;
          FVar21.Data = (FScriptContainerElement *)L"";
          if (local_11f8.Data.ArrayNum != 0) {
            FVar21.Data = local_11f8.Data.AllocatorInstance.Data;
          }
          ::FName::ToString(&local_11a0,&local_1168);
          FVar19.Data = (FScriptContainerElement *)L"";
          if (local_1168.Data.ArrayNum != 0) {
            FVar19.Data = local_1168.Data.AllocatorInstance.Data;
          }
          uVar11 = CallstackTrace_GetCurrentId();
          uVar9 = FFormatArgsTrace::EncodeArguments<4096,wchar_t_const_*,wchar_t_const_*>
                            (&local_1098,(wchar_t *)FVar19.Data,(wchar_t *)FVar21.Data);
          if (uVar9 != 0) {
            FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint450,uVar11,uVar9,local_1098);
          }
          if (local_1168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1168.Data.AllocatorInstance.Data);
          }
          pFVar20 = local_1248;
          if (local_11f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_11f8.Data.AllocatorInstance.Data);
            pFVar20 = local_1248;
          }
        }
      }
      bVar23 = param_1->bRestoreState;
      this->field_0x108 = (this->bRestoreState ^ bVar23) & 1U ^ this->field_0x108;
      if ((bVar23 & 1U) != 0) {
        FMovieSceneInstancePreAnimatedState::EnableGlobalPreAnimatedStateCapture
                  (&pFVar20->PreAnimatedState);
      }
      this->bIsBeginningPlay = true;
      FVar15.FrameNumber.Value = (this->PlaybackManager).DisplayRate.Numerator;
      FVar15.SubFrame = (float)(this->PlaybackManager).DisplayRate.Denominator;
      local_1250 = (FFrameTime)((ulonglong)FVar15 >> 0x20);
      local_1218.FrameNumber.Value = 0;
      local_1218.SubFrame = 0.0;
      local_1238 = FVar15;
      FMovieScenePlaybackManager::SetStartOffset(&this->PlaybackManager,&local_1218);
      dVar8 = __real_c1e0000000000000;
      dVar7 = __real_41dfffffffc00000;
      uVar34 = SUB84(__real_41dfffffffc00000,0);
      uVar35 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
      uVar36 = SUB84(__real_c1e0000000000000,0);
      uVar37 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
      if ((param_1->StartOffset).bIsSet != false) {
        dVar4 = ((double)FVar15.FrameNumber.Value * (param_1->StartOffset).TypedValue) /
                (double)local_1250.FrameNumber.Value;
        auVar30._8_8_ = 0;
        auVar30._0_8_ = dVar4;
        in_XMM2 = roundpd(in_XMM2,auVar30,1);
        dVar29 = in_XMM2._0_8_;
        dVar4 = dVar4 - dVar29;
        if (__real_41dfffffffc00000 <= dVar29) {
          dVar29 = __real_41dfffffffc00000;
        }
        if (dVar29 <= __real_c1e0000000000000) {
          dVar29 = __real_c1e0000000000000;
        }
        iVar16 = (int)dVar4;
        local_1210.SubFrame = (float)dVar4 - (float)iVar16;
        if ((0.0 < local_1210.SubFrame) && (::FFrameTime::MaxSubframe <= local_1210.SubFrame)) {
          local_1210.SubFrame = ::FFrameTime::MaxSubframe;
        }
        if (::FFrameTime::MaxSubframe <= local_1210.SubFrame) {
          local_1210.SubFrame = ::FFrameTime::MaxSubframe;
        }
        if (local_1210.SubFrame <= 0.0) {
          local_1210.SubFrame = 0.0;
        }
        local_1210.FrameNumber.Value = (int)dVar29 + iVar16;
        local_1258.FrameNumber.Value = FVar15.FrameNumber.Value;
        FMovieScenePlaybackManager::SetStartOffset(&this->PlaybackManager,&local_1210);
      }
      local_1208.FrameNumber.Value = 0;
      local_1208.SubFrame = 0.0;
      local_1258.FrameNumber.Value = FVar15.FrameNumber.Value;
      FMovieScenePlaybackManager::SetEndOffset(&this->PlaybackManager,&local_1208);
      if ((param_1->EndOffset).bIsSet != false) {
        dVar4 = ((double)local_1258.FrameNumber.Value * (param_1->EndOffset).TypedValue) /
                (double)local_1250.FrameNumber.Value;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = dVar4;
        auVar30 = roundpd(in_XMM2,auVar25,1);
        dVar4 = dVar4 - auVar30._0_8_;
        uVar32 = auVar30._0_4_;
        uVar33 = auVar30._4_4_;
        if (dVar7 <= auVar30._0_8_) {
          uVar32 = uVar34;
          uVar33 = uVar35;
        }
        if ((double)CONCAT44(uVar33,uVar32) <= dVar8) {
          uVar32 = uVar36;
          uVar33 = uVar37;
        }
        local_1258.FrameNumber.Value = (int)dVar4;
        fVar31 = (float)dVar4 - (float)local_1258.FrameNumber.Value;
        if ((0.0 < fVar31) && (::FFrameTime::MaxSubframe <= fVar31)) {
          fVar31 = ::FFrameTime::MaxSubframe;
        }
        if (::FFrameTime::MaxSubframe <= fVar31) {
          fVar31 = ::FFrameTime::MaxSubframe;
        }
        if (fVar31 <= 0.0) {
          fVar31 = 0.0;
        }
        local_1240 = FMovieScenePlaybackManager::GetEndOffset(&this->PlaybackManager);
        local_1240 = *(FFrameTime *)local_1240;
        fVar31 = local_1240.SubFrame + fVar31;
        iVar16 = ((int)ROUND((fVar31 + fVar31) - __real_3f000000) >> 1) +
                 local_1258.FrameNumber.Value;
        iVar17 = (int)fVar31;
        fVar24 = fVar31;
        if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar31)) {
          auVar26._4_4_ = fVar31;
          auVar26._0_4_ = fVar31;
          auVar26._8_8_ = 0;
          uVar11 = movmskps(iVar16,auVar26);
          fVar24 = (float)(int)(iVar17 - (uVar11 & 1));
        }
        fVar5 = fVar31 - fVar24;
        if (::FFrameTime::MaxSubframe <= fVar31 - fVar24) {
          fVar5 = ::FFrameTime::MaxSubframe;
        }
        in_XMM2 = ZEXT416((uint)fVar5);
        if (fVar5 <= 0.0) {
          in_XMM2 = ZEXT816(0) << 0x20;
        }
        local_1250.SubFrame = in_XMM2._0_4_;
        local_1250.FrameNumber.Value =
             (int)(double)CONCAT44(uVar33,uVar32) + iVar16 + local_1240.FrameNumber.Value.Value;
        FMovieScenePlaybackManager::SetEndOffset(&this->PlaybackManager,&local_1250);
      }
      FMovieScenePlaybackManager::ClearPlaybackEndTime(&this->PlaybackManager);
      if ((param_1->EndAtTime).bIsSet != false) {
        dVar4 = ((double)FVar15.FrameNumber.Value * (param_1->EndAtTime).TypedValue) /
                (double)(int)local_1238.SubFrame;
        auVar27._8_8_ = 0;
        auVar27._0_8_ = dVar4;
        in_XMM2 = roundpd(in_XMM2,auVar27,1);
        dVar29 = in_XMM2._0_8_;
        dVar4 = dVar4 - dVar29;
        if (dVar7 <= dVar29) {
          dVar29 = dVar7;
        }
        if (dVar29 <= dVar8) {
          dVar29 = dVar8;
        }
        iVar16 = (int)dVar4;
        local_1258.SubFrame = (float)dVar4 - (float)iVar16;
        if ((0.0 < local_1258.SubFrame) && (::FFrameTime::MaxSubframe <= local_1258.SubFrame)) {
          local_1258.SubFrame = ::FFrameTime::MaxSubframe;
        }
        if (::FFrameTime::MaxSubframe <= local_1258.SubFrame) {
          local_1258.SubFrame = ::FFrameTime::MaxSubframe;
        }
        if (local_1258.SubFrame <= 0.0) {
          local_1258.SubFrame = 0.0;
        }
        local_1258.FrameNumber.Value = (int)dVar29 + iVar16;
        FMovieScenePlaybackManager::SetPlaybackEndTime(&this->PlaybackManager,&local_1258);
      }
      TVar1 = param_1->PlayMode;
      this->PlayMode = TVar1;
      dVar4 = ((double)FVar15.FrameNumber.Value * param_1->StartAtTime) /
              (double)(int)local_1238.SubFrame;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = dVar4;
      auVar30 = roundpd(in_XMM2,auVar28,1);
      dVar29 = auVar30._0_8_;
      dVar4 = dVar4 - dVar29;
      if (TVar1 == Reverse) {
        uVar32 = auVar30._0_4_;
        uVar33 = auVar30._4_4_;
        if (dVar7 <= dVar29) {
          uVar32 = uVar34;
          uVar33 = uVar35;
        }
        if ((double)CONCAT44(uVar33,uVar32) <= dVar8) {
          uVar32 = uVar36;
          uVar33 = uVar37;
        }
        fVar31 = (float)dVar4 - (float)(int)dVar4;
        if ((0.0 < fVar31) && (::FFrameTime::MaxSubframe <= fVar31)) {
          fVar31 = ::FFrameTime::MaxSubframe;
        }
        if (::FFrameTime::MaxSubframe <= fVar31) {
          fVar31 = ::FFrameTime::MaxSubframe;
        }
        if (fVar31 <= 0.0) {
          fVar31 = 0.0;
        }
        local_1240 = FMovieScenePlaybackManager::GetEffectiveEndTime(&this->PlaybackManager);
        local_1240 = *(FFrameTime *)local_1240;
        auVar30 = roundps(auVar30,ZEXT416((uint)(local_1240.SubFrame - fVar31)),1);
        local_1238.SubFrame = (local_1240.SubFrame - fVar31) - auVar30._0_4_;
        if (::FFrameTime::MaxSubframe <= local_1238.SubFrame) {
          local_1238.SubFrame = ::FFrameTime::MaxSubframe;
        }
        pFVar18 = &local_1238;
        if (local_1238.SubFrame <= 0.0) {
          local_1238.SubFrame = 0.0;
        }
        local_1238.FrameNumber.Value =
             (int)auVar30._0_4_ +
             ((local_1240.FrameNumber.Value.Value - (int)(double)CONCAT44(uVar33,uVar32)) -
             (int)dVar4);
      }
      else {
        if (dVar7 <= dVar29) {
          dVar29 = dVar7;
        }
        if (dVar29 <= dVar8) {
          dVar29 = dVar8;
        }
        local_1240.SubFrame = (float)dVar4 - (float)(int)dVar4;
        if ((0.0 < local_1240.SubFrame) && (::FFrameTime::MaxSubframe <= local_1240.SubFrame)) {
          local_1240.SubFrame = ::FFrameTime::MaxSubframe;
        }
        if (::FFrameTime::MaxSubframe <= local_1240.SubFrame) {
          local_1240.SubFrame = ::FFrameTime::MaxSubframe;
        }
        pFVar18 = &local_1240;
        if (local_1240.SubFrame <= 0.0) {
          local_1240.SubFrame = 0.0;
        }
        local_1240.FrameNumber.Value = (int)dVar29 + (int)dVar4;
      }
      FMovieScenePlaybackManager::SetCurrentTime(&this->PlaybackManager,pFVar18);
      (this->PlaybackManager).PlayDirection = Forwards;
      FMovieScenePlaybackManager::SetPingPongPlayback(&this->PlaybackManager,false);
      if (this->PlayMode == Reverse) {
        (this->PlaybackManager).PlayDirection = Backwards;
      }
      else if (this->PlayMode == PingPong) {
        FMovieScenePlaybackManager::SetPingPongPlayback(&this->PlaybackManager,true);
      }
      iVar16 = param_1->NumLoopsToPlay * 2;
      if (this->PlayMode != PingPong) {
        iVar16 = param_1->NumLoopsToPlay;
      }
      FMovieScenePlaybackManager::SetNumLoopsToPlay(&this->PlaybackManager,iVar16);
      pFVar20 = local_1248;
      (this->PlaybackManager).NumLoopsCompleted = 0;
      fVar31 = param_1->PlaybackSpeed;
      (this->PlaybackManager).PlaybackStatus = Playing;
      (this->PlaybackManager).PlayRate = (double)fVar31;
      pFVar13 = UE::MovieScene::FSharedPlaybackState::GetHierarchy(local_1248);
      if (pFVar13 != (FMovieSceneSequenceHierarchy *)0x0) {
        FMovieSceneSequenceTransform::operator=
                  (&(this->PlaybackManager).TimeTransform,&pFVar13->RootTransform);
      }
      (this->PlaybackManager).bTransformPlaybackTime =
           pFVar13 != (FMovieSceneSequenceHierarchy *)0x0;
      UE::MovieScene::FSharedPlaybackState::GetRunner(pFVar20,&local_11c8);
      if (local_11c8.Object != (FMovieSceneEntitySystemRunner *)0x0) {
        FMovieScenePlaybackManager::UpdateToNextTick(&this->PlaybackManager,&local_1118);
        if ((local_11c8.Object == (FMovieSceneEntitySystemRunner *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar23)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar14 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CreateSP<FWidgetAnimationState>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1230,
                             this,(pmf_dd17ee1e)0x14692e4c0);
        FMovieSceneEntitySystemRunner::QueueUpdate
                  (local_11c8.Object,&local_1118,*(FInstanceHandle *)&pFVar20->RootInstanceHandle,
                   pTVar14,Flush);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1230,
                   (FWriteAccessScope *)local_1148);
        if ((local_1220 != 0) && (local_1228.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_1228.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1228,0,0,0x10)
          ;
          local_1220 = 0;
        }
        if (local_1148[0].bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1148[0].Accessor,local_1148);
        }
        if (local_1228.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1228.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1230);
        FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_1118.RootToSequenceWarpCounter);
        DestructItems<FMovieSceneNestedSequenceTransform,int>
                  ((FMovieSceneNestedSequenceTransform *)
                   local_1118.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
                   local_1118.RootToSequenceTransform.NestedTransforms.ArrayNum);
        if ((FMovieSceneNestedSequenceTransform *)
            local_1118.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
            (FMovieSceneNestedSequenceTransform *)0x0) {
          FMemory::Free(local_1118.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
        }
      }
      if ((UE::UMG::GVarAnimationDetailedLogging != false) && (4 < (byte)LogUMG._0_1_)) {
        local_1258.FrameNumber.Value = (this->PlaybackManager).NumLoopsToPlay;
        FVar15 = FMovieScenePlaybackManager::GetCurrentTime(&this->PlaybackManager);
        local_1248 = *(FSharedPlaybackState **)FVar15;
        ::FString::PrintfImpl(&local_1158,L"Frame: %d Subframe: %f");
        if (local_1200 == (UObject *)0x0) {
          ::FString::FString(&local_11d8,L"None");
        }
        else {
          local_1198.ComparisonIndex.Value = *(uint *)&local_1200->field_0x18;
          local_1198.Number = *(uint *)&local_1200->field_0x1c;
          ::FName::ToString(&local_1198,&local_11d8);
        }
        pUVar2 = (this->Animation).field0_0x0.DebugPtr;
        if (pUVar2 == (UWidgetAnimation *)0x0) {
          ::FString::FString(&local_11e8,L"None");
        }
        else {
          local_1190 = (FName)pUVar2->_padding_;
          ::FName::ToString(&local_1190,&local_11e8);
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
        if (local_11e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_11e8.Data.AllocatorInstance.Data);
        }
        if (local_11d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_11d8.Data.AllocatorInstance.Data);
        }
        if (local_1158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1158.Data.AllocatorInstance.Data);
        }
      }
      FlushIfPrivateLinker(this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_11c8.SharedReferenceCount.ReferenceController);
      goto LAB_146931362;
    }
  }
LAB_146931335:
  bVar23 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_2551588329082584647>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\WidgetAnimationState.cpp"
                      ,0x1b9,"SharedPlaybackState");
  if (bVar23) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_146931362:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  return;
}

// RemoveEvaluationData @ 14693bf80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWidgetAnimationState::RemoveEvaluationData(FWidgetAnimationState *this)

{
  ushort uVar1;
  FSharedPlaybackState *pFVar2;
  UUMGSequencePlayer *pUVar3;
  UWidgetAnimation *pUVar4;
  code *pcVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  UMovieSceneEntitySystemLinker *this_00;
  FMovieSceneRootEvaluationTemplateInstance *this_01;
  UObject *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  FSequenceInstance *this_02;
  bool bVar10;
  FName local_res8;
  FName local_res10;
  FString local_48;
  FString local_38;
  TSharedRef<FMovieSceneEntitySystemRunner,1> local_28;
  
  pTVar9 = (this->WeakPlaybackState).WeakReferenceCount.ReferenceController;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
LAB_14693c091:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  else {
    aVar6 = pTVar9->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14693c091;
      }
      LOCK();
      aVar7 = pTVar9->SharedReferenceCount;
      bVar10 = aVar6 == aVar7;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar10);
    pFVar2 = (this->WeakPlaybackState).Object;
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    if (pFVar2 != (FSharedPlaybackState *)0x0) {
      this_00 = (UMovieSceneEntitySystemLinker *)FWeakObjectPtr::Get(&(pFVar2->WeakLinker).WeakPtr);
      uVar1 = *(ushort *)&pFVar2->RootInstanceHandle;
      if (((this_00->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InstanceRegistry.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                              ,0x96,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_02 = (FSequenceInstance *)
                ((ulonglong)uVar1 * 0x140 +
                *(longlong *)&((this_00->InstanceRegistry).Ptr)->Instances);
      UMovieSceneEntitySystemLinker::GetRunner(this_00,&local_28);
      bVar10 = FMovieSceneEntitySystemRunner::IsCurrentlyEvaluating(local_28.Object);
      if (bVar10) {
        FMovieSceneEntitySystemRunner::FlushOutstanding(local_28.Object,0.0,None);
      }
      UE::MovieScene::FEntityLedger::UnlinkEverything((FEntityLedger *)this_02,this_00,Normal);
      UE::MovieScene::FSequenceInstance::InvalidateCachedData(this_02,All);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  pUVar3 = (this->LegacyPlayer).field0_0x0.DebugPtr;
  if (pUVar3 != (UUMGSequencePlayer *)0x0) {
    this_01 = (FMovieSceneRootEvaluationTemplateInstance *)
              (**(code **)(pUVar3->_padding_ + 0x18))(&pUVar3->_padding_);
    FMovieSceneRootEvaluationTemplateInstance::ResetDirectorInstances(this_01);
  }
  if ((UE::UMG::GVarAnimationDetailedLogging != false) &&
     (pUVar8 = FWeakObjectPtr::Get(&(this->WeakUserWidget).WeakPtr), 4 < (byte)LogUMG._0_1_)) {
    if (pUVar8 == (UObject *)0x0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
      local_res8.Number = *(uint *)&pUVar8->field_0x1c;
      ::FName::ToString(&local_res8,&local_38);
    }
    pUVar4 = (this->Animation).field0_0x0.DebugPtr;
    if (pUVar4 == (UWidgetAnimation *)0x0) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      local_res10 = (FName)pUVar4->_padding_;
      ::FName::ToString(&local_res10,&local_48);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Reverse @ 14693e840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWidgetAnimationState::Reverse(FWidgetAnimationState *this)

{
  FMovieScenePlaybackManager::ReversePlayDirection(&this->PlaybackManager);
  return;
}

// SetCurrentTime @ 146942930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWidgetAnimationState::SetCurrentTime(FWidgetAnimationState *this,float param_1)

{
  FFrameRate FVar1;
  int iVar2;
  double dVar3;
  undefined1 in_XMM2 [16];
  undefined1 auVar4 [16];
  double dVar5;
  float fVar6;
  float fVar7;
  FFrameTime local_res8 [4];
  
  FVar1 = (this->PlaybackManager).DisplayRate;
  dVar5 = ((double)FVar1.Numerator * (double)param_1) / (double)FVar1.Denominator;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar5;
  auVar4 = roundpd(in_XMM2,auVar4,1);
  dVar3 = auVar4._0_8_;
  dVar5 = dVar5 - dVar3;
  if (__real_41dfffffffc00000 <= dVar3) {
    dVar3 = __real_41dfffffffc00000;
  }
  if (dVar3 <= __real_c1e0000000000000) {
    dVar3 = __real_c1e0000000000000;
  }
  iVar2 = (int)dVar5;
  fVar6 = (float)dVar5 - (float)iVar2;
  fVar7 = fVar6;
  if ((0.0 < fVar6) && (fVar7 = ::FFrameTime::MaxSubframe, fVar6 <= ::FFrameTime::MaxSubframe)) {
    fVar7 = fVar6;
  }
  local_res8[0].SubFrame = ::FFrameTime::MaxSubframe;
  if (fVar7 <= ::FFrameTime::MaxSubframe) {
    local_res8[0].SubFrame = fVar7;
  }
  if (local_res8[0].SubFrame <= 0.0) {
    local_res8[0].SubFrame = 0.0;
  }
  local_res8[0].FrameNumber.Value = (int)dVar3 + iVar2;
  FMovieScenePlaybackManager::SetCurrentTime(&this->PlaybackManager,local_res8);
  return;
}

// SetNumLoopsToPlay @ 1469436f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWidgetAnimationState::SetNumLoopsToPlay(FWidgetAnimationState *this,int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 2;
  if (this->PlayMode != PingPong) {
    iVar1 = param_1;
  }
  FMovieScenePlaybackManager::SetNumLoopsToPlay(&this->PlaybackManager,iVar1);
  return;
}

// SetPlaybackSpeed @ 146943c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWidgetAnimationState::SetPlaybackSpeed(FWidgetAnimationState *this,float param_1)

{
  (this->PlaybackManager).PlayRate = (double)param_1;
  return;
}

// SetPlaybackStatus @ 146943d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWidgetAnimationState::SetPlaybackStatus(FWidgetAnimationState *this,Type param_1)

{
  (this->PlaybackManager).PlaybackStatus = param_1;
  return;
}

// Stop @ 146945d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWidgetAnimationState::Stop(FWidgetAnimationState *this)

{
  FSharedPlaybackState *this_00;
  UWidgetAnimation *pUVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  atomic<int> aVar5;
  UObject *pUVar6;
  UMovieSceneEntitySystemLinker *this_01;
  FInstanceRegistry *pFVar7;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  FFrameTime local_res8;
  FName local_res10;
  FName local_res18 [2];
  undefined1 local_118 [8];
  ForAnyElementType local_110;
  int local_108;
  FString local_100;
  FString local_f0;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> local_e0;
  FDestructionSentinel local_d0;
  FMovieSceneContext local_b8;
  
  if ((this->PlaybackManager).PlaybackStatus == Stopped) {
    return;
  }
  (this->PlaybackManager).PlaybackStatus = Stopped;
  local_res8.FrameNumber.Value = 0;
  local_res8.SubFrame = 0.0;
  FMovieScenePlaybackManager::SetCurrentTimeOffset(&this->PlaybackManager,&local_res8);
  pTVar9 = (this->WeakPlaybackState).WeakReferenceCount.ReferenceController;
  bVar4 = false;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146945de0;
      }
      LOCK();
      aVar5 = pTVar9->SharedReferenceCount;
      bVar10 = aVar3 == aVar5;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar10);
    this_00 = (this->WeakPlaybackState).Object;
    if (this_00 != (FSharedPlaybackState *)0x0) {
      this_01 = (UMovieSceneEntitySystemLinker *)FWeakObjectPtr::Get(&(this_00->WeakLinker).WeakPtr)
      ;
      pFVar7 = UMovieSceneEntitySystemLinker::GetInstanceRegistry(this_01);
      if ((*(byte *)((ulonglong)*(ushort *)&this_00->RootInstanceHandle * 0x140 + 0x13e +
                    *(longlong *)&pFVar7->Instances) & 4) != 0) {
        UE::MovieScene::FSharedPlaybackState::GetRunner(this_00,&local_e0);
        FMovieScenePlaybackManager::UpdateAtCurrentTime(&this->PlaybackManager,&local_b8);
        if ((local_e0.Object == (FMovieSceneEntitySystemRunner *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar8 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                 CreateSP<FWidgetAnimationState>
                           ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_118,
                            this,(pmf_dd17ee1e)0x146930580);
        FMovieSceneEntitySystemRunner::QueueUpdate
                  (local_e0.Object,&local_b8,*(FInstanceHandle *)&this_00->RootInstanceHandle,pTVar8
                   ,Flush);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
                   (FWriteAccessScope *)&local_d0);
        if ((local_108 != 0) && (local_110.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_110.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_110,0,0,0x10);
          local_108 = 0;
        }
        if (local_d0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
        }
        if (local_110.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_118);
        this->bIsStopping = true;
        bVar4 = true;
        FMovieSceneWarpCounter::~FMovieSceneWarpCounter(&local_b8.RootToSequenceWarpCounter);
        DestructItems<FMovieSceneNestedSequenceTransform,int>
                  ((FMovieSceneNestedSequenceTransform *)
                   local_b8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
                   local_b8.RootToSequenceTransform.NestedTransforms.ArrayNum);
        if ((FMovieSceneNestedSequenceTransform *)
            local_b8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
            (FMovieSceneNestedSequenceTransform *)0x0) {
          FMemory::Free(local_b8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e0.SharedReferenceCount.ReferenceController);
        goto LAB_146945de8;
      }
    }
  }
LAB_146945de0:
  OnStopped(this);
LAB_146945de8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if ((UE::UMG::GVarAnimationDetailedLogging != false) &&
     (pUVar6 = FWeakObjectPtr::Get(&(this->WeakUserWidget).WeakPtr), 4 < (byte)LogUMG._0_1_)) {
    if (pUVar6 == (UObject *)0x0) {
      ::FString::FString(&local_f0,L"None");
    }
    else {
      local_res10.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      local_res10.Number = *(uint *)&pUVar6->field_0x1c;
      ::FName::ToString(&local_res10,&local_f0);
    }
    pUVar1 = (this->Animation).field0_0x0.DebugPtr;
    if (pUVar1 == (UWidgetAnimation *)0x0) {
      ::FString::FString(&local_100,L"None");
    }
    else {
      local_res18[0] = (FName)pUVar1->_padding_;
      ::FName::ToString(local_res18,&local_100);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
  }
  if (bVar4) {
    FlushIfPrivateLinker(this);
  }
  return;
}

// TearDown @ 146947cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWidgetAnimationState::TearDown(FWidgetAnimationState *this)

{
  TWeakPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  FSharedPlaybackState *pFVar4;
  UUMGSequencePlayer *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  UWidgetAnimation *pUVar7;
  atomic<int> aVar8;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  UObject *pUVar9;
  UMovieSceneEntitySystemLinker *pUVar10;
  UMovieSceneEntitySystemLinker *pUVar11;
  UMovieSceneEntitySystemLinker *this_01;
  short sVar12;
  bool bVar13;
  FName local_res8;
  FString local_58;
  FString local_48;
  longlong local_38 [2];
  
  pUVar11 = (UMovieSceneEntitySystemLinker *)
            (this->WeakPlaybackState).WeakReferenceCount.ReferenceController;
  pTVar1 = &this->WeakPlaybackState;
  local_res8.ComparisonIndex.Value = 0xffff;
  this_01 = (UMovieSceneEntitySystemLinker *)0x0;
  pUVar10 = pUVar11;
  if (pUVar11 == (UMovieSceneEntitySystemLinker *)0x0) {
LAB_146947d6d:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar10);
    pUVar11 = pUVar10;
    this_01 = (UMovieSceneEntitySystemLinker *)0x0;
    sVar12 = -1;
  }
  else {
    aVar3 = *(atomic<int> *)&pUVar11->_padding_;
    do {
      pUVar10 = (UMovieSceneEntitySystemLinker *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_146947d6d;
      LOCK();
      aVar8 = *(atomic<int> *)&pUVar11->_padding_;
      bVar13 = aVar3 == aVar8;
      if (bVar13) {
        *(atomic<int> *)&pUVar11->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar8 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar8;
    } while (!bVar13);
    pFVar4 = pTVar1->Object;
    LOCK();
    *(atomic<int> *)&pUVar11->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&pUVar11->_padding_ + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar11);
    sVar12 = -1;
    if (pFVar4 != (FSharedPlaybackState *)0x0) {
      local_res8.ComparisonIndex.Value = *(uint *)&pFVar4->RootInstanceHandle;
      this_01 = (UMovieSceneEntitySystemLinker *)FWeakObjectPtr::Get(&(pFVar4->WeakLinker).WeakPtr);
      sVar12 = (short)local_res8.ComparisonIndex.Value;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar11);
  pUVar5 = (this->LegacyPlayer).field0_0x0.DebugPtr;
  if (pUVar5 != (UUMGSequencePlayer *)0x0) {
    this_00 = (FMovieSceneRootEvaluationTemplateInstance *)
              (**(code **)(pUVar5->_padding_ + 0x18))(&pUVar5->_padding_);
    FMovieSceneRootEvaluationTemplateInstance::TearDown(this_00);
  }
  (this->LegacyPlayer).field0_0x0.DebugPtr = (UUMGSequencePlayer *)0x0;
  if (pTVar1 != (TWeakPtr<UE::MovieScene::FSharedPlaybackState,1> *)local_38) {
    pTVar6 = (this->WeakPlaybackState).WeakReferenceCount.ReferenceController;
    pTVar1->Object = (FSharedPlaybackState *)0x0;
    (this->WeakPlaybackState).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar6->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
  }
  if ((this_01 != (UMovieSceneEntitySystemLinker *)0x0) && (sVar12 != -1)) {
    UMovieSceneEntitySystemLinker::DestroyInstanceImmediately
              (this_01,(FRootInstanceHandle)local_res8.ComparisonIndex.Value);
  }
  if ((UE::UMG::GVarAnimationDetailedLogging != false) &&
     (pUVar9 = FWeakObjectPtr::Get(&(this->WeakUserWidget).WeakPtr), 4 < (byte)LogUMG._0_1_)) {
    if (pUVar9 == (UObject *)0x0) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar9->field_0x18;
      local_res8.Number = *(uint *)&pUVar9->field_0x1c;
      ::FName::ToString(&local_res8,&local_48);
    }
    pUVar7 = (this->Animation).field0_0x0.DebugPtr;
    if (pUVar7 == (UWidgetAnimation *)0x0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      local_res8 = (FName)pUVar7->_padding_;
      ::FName::ToString(&local_res8,&local_58);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Tick @ 146947f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWidgetAnimationState::Tick(FWidgetAnimationState *this,float param_1)

{
  int iVar1;
  UWidgetAnimation *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  Type TVar6;
  longlong lVar7;
  atomic<int> aVar8;
  uint uVar9;
  UObject *pUVar10;
  FMovieSceneSequenceHierarchy *pFVar11;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  UEnum *this_01;
  ForElementType<FMovieSceneContext> FVar12;
  ERunnerUpdateFlags EVar13;
  FMovieSceneContext *pFVar14;
  FSharedPlaybackState *this_02;
  bool bVar15;
  undefined1 auStackY_3a8 [32];
  uint local_358;
  undefined1 local_350 [8];
  ForAnyElementType local_348;
  int local_340;
  FSharedPlaybackState *local_338;
  Type local_330;
  ulonglong local_32c;
  UObject *local_320;
  TSharedPtr<FMovieSceneEntitySystemRunner,1> local_318;
  undefined1 local_308 [8];
  ForAnyElementType local_300;
  int local_2f8;
  longlong local_2f0;
  TReferenceControllerBase<1> *local_2e8;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FName local_280;
  FName local_278;
  FName local_270;
  ulonglong local_268;
  FName local_260;
  FName local_258;
  FName local_250;
  FName local_248;
  FName local_240;
  FName local_238;
  FName local_230;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FName local_1c8;
  FDestructionSentinel local_1c0;
  FDestructionSentinel local_1a8;
  FDestructionSentinel local_190;
  FDestructionSentinel local_178;
  TArray<FMovieSceneContext,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_160;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  pUVar10 = FWeakObjectPtr::Get(&(this->WeakUserWidget).WeakPtr);
  local_2e8 = (this->WeakPlaybackState).WeakReferenceCount.ReferenceController;
  local_338 = (FSharedPlaybackState *)0x0;
  if (local_2e8 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = local_2e8->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        local_2e8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146947fa6;
      }
      LOCK();
      aVar8 = local_2e8->SharedReferenceCount;
      bVar15 = aVar5 == aVar8;
      if (bVar15) {
        local_2e8->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar8 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar8;
    } while (!bVar15);
    local_338 = (this->WeakPlaybackState).Object;
  }
LAB_146947fa6:
  this_02 = local_338;
  local_320 = pUVar10;
  if ((pUVar10 == (UObject *)0x0) || (local_338 == (FSharedPlaybackState *)0x0)) {
    if ((UE::UMG::GVarAnimationDetailedLogging != false) && (4 < (byte)LogUMG._0_1_)) {
      if (pUVar10 == (UObject *)0x0) {
        ::FString::FString(&local_290,L"None");
      }
      else {
        local_230.ComparisonIndex.Value = *(uint *)&pUVar10->field_0x18;
        local_230.Number = *(uint *)&pUVar10->field_0x1c;
        ::FName::ToString(&local_230,&local_290);
      }
      pUVar2 = (this->Animation).field0_0x0.DebugPtr;
      if (pUVar2 == (UWidgetAnimation *)0x0) {
        ::FString::FString(&local_2a0,L"None");
      }
      else {
        local_1c8 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_1c8,&local_2a0);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
      if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
      }
      if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_146948930;
  }
  UE::MovieScene::FSharedPlaybackState::GetRunner(local_338,&local_318);
  if (local_318.Object == (FMovieSceneEntitySystemRunner *)0x0) {
    if ((UE::UMG::GVarAnimationDetailedLogging != false) && (4 < (byte)LogUMG._0_1_)) {
      local_280.ComparisonIndex.Value = *(uint *)&pUVar10->field_0x18;
      local_280.Number = *(uint *)&pUVar10->field_0x1c;
      ::FName::ToString(&local_280,&local_228);
      pUVar2 = (this->Animation).field0_0x0.DebugPtr;
      if (pUVar2 == (UWidgetAnimation *)0x0) {
        ::FString::FString(&local_2e0,L"None");
      }
      else {
        local_278 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_278,&local_2e0);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
      local_1d8.Data.AllocatorInstance.Data = local_228.Data.AllocatorInstance.Data;
      if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
        local_1d8.Data.AllocatorInstance.Data = local_228.Data.AllocatorInstance.Data;
      }
      goto LAB_146948846;
    }
  }
  else if (!this->bIsBeginningPlay && !this->bIsStopping) {
    if ((local_318.Object == (FMovieSceneEntitySystemRunner *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar15 = FMovieSceneEntitySystemRunner::IsCurrentlyEvaluating(local_318.Object);
    if (bVar15) {
      this->BlockedDeltaTimeCompensation = param_1 + this->BlockedDeltaTimeCompensation;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_318.SharedReferenceCount.ReferenceController);
      goto LAB_146948930;
    }
    if ((this->PlaybackManager).PlaybackStatus == Playing) {
      pFVar11 = UE::MovieScene::FSharedPlaybackState::GetHierarchy(this_02);
      if (pFVar11 != (FMovieSceneSequenceHierarchy *)0x0) {
        FMovieSceneSequenceTransform::operator=
                  (&(this->PlaybackManager).TimeTransform,&pFVar11->RootTransform);
      }
      local_160.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneContext>)0x0;
      local_160.ArrayNum = 0;
      local_160.ArrayMax = 2;
      FMovieScenePlaybackManager::Update(&this->PlaybackManager,param_1,&local_160);
      local_330 = (this->PlaybackManager).PlaybackStatus;
      local_358 = 0;
      if (0 < local_160.ArrayNum) {
        local_2f0 = 0;
        do {
          lVar7 = local_2f0;
          TVar6 = local_330;
          uVar9 = 0;
          if ((int)local_358 < local_160.ArrayNum) {
            uVar9 = ~local_358 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_350 = (undefined1  [8])0x0;
          local_348.Data = (FScriptContainerElement *)0x0;
          FVar12 = (ForElementType<FMovieSceneContext>)&local_160;
          if (local_160.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0)
          {
            FVar12 = local_160.AllocatorInstance.SecondaryData;
          }
          local_340 = 0;
          pFVar14 = (FMovieSceneContext *)((longlong)FVar12 + lVar7);
          EVar13 = None;
          if ((TVar6 == Stopped) && (EVar13 = None, local_358 == local_160.ArrayNum - 1U)) {
            this_00 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                      CreateSP<FWidgetAnimationState>
                                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                                 local_308,this,(pmf_dd17ee1e)0x146930580);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                       (FWriteAccessScope *)&local_1c0);
            pFVar3 = *(FScriptContainerElement **)&this_00->field_0x8;
            *(undefined8 *)&this_00->field_0x8 = 0;
            iVar1 = *(int *)&this_00->field_0x10;
            *(undefined4 *)&this_00->field_0x10 = 0;
            if (local_1c0.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_350,
                       (FWriteAccessScope *)&local_1a8);
            if (local_340 == 0) {
LAB_1469482d5:
              if (local_348.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_348.Data);
              }
            }
            else if (local_348.Data != (FScriptContainerElement *)0x0) {
              (*(code *)**(undefined8 **)local_348.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_348,0,0,0x10);
              local_340 = 0;
              goto LAB_1469482d5;
            }
            local_348.Data = pFVar3;
            local_340 = iVar1;
            if (local_1a8.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_308,
                       (FWriteAccessScope *)&local_190);
            if ((local_2f8 != 0) && (local_300.Data != (FScriptContainerElement *)0x0)) {
              (*(code *)**(undefined8 **)local_300.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_300,0,0,0x10);
              local_2f8 = 0;
            }
            if (local_190.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
            }
            if (local_300.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_300.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_308);
            this->bIsStopping = true;
            EVar13 = Flush;
            this_02 = local_338;
          }
          if ((local_318.Object == (FMovieSceneEntitySystemRunner *)0x0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FMovieSceneEntitySystemRunner::QueueUpdate
                    (local_318.Object,pFVar14,*(FInstanceHandle *)&this_02->RootInstanceHandle,
                     (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_350,EVar13);
          pUVar10 = local_320;
          if ((UE::UMG::GVarAnimationDetailedLogging != false) && (4 < (byte)LogUMG._0_1_)) {
            this_01 = StaticEnum<enum_EMovieScenePlayerStatus::Type>();
            if ((this_01 == (UEnum *)0x0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("EnumClass != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                    ,0xca4,L""), bVar15)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            UEnum::GetNameByValue(this_01,(long64)&local_270);
            ::FName::ToString(&local_270,&local_1f8);
            uVar9 = *(uint *)((longlong)&pFVar14->_padding_ + 4);
            if (uVar9 == 0x80000000) {
              if ((int)pFVar14->_padding_ == 0) {
                pFVar14 = (FMovieSceneContext *)((longlong)&pFVar14->_padding_ + 4);
              }
              if (((char)pFVar14->_padding_ == '\x02') &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Type != ERangeBoundTypes::Open",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                      ,99,L""), bVar15)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_32c = *(ulonglong *)((longlong)&pFVar14->_padding_ + 4);
            }
            else {
              local_32c = (ulonglong)uVar9;
            }
            local_268 = local_32c;
            ::FString::PrintfImpl(&local_208,L"Frame: %d Subframe: %f");
            pUVar10 = local_320;
            local_260.ComparisonIndex.Value = *(uint *)&local_320->field_0x18;
            local_260.Number = *(uint *)&local_320->field_0x1c;
            ::FName::ToString(&local_260,&local_218);
            pUVar2 = (this->Animation).field0_0x0.DebugPtr;
            if (pUVar2 == (UWidgetAnimation *)0x0) {
              ::FString::FString(&local_2d0,L"None");
            }
            else {
              local_258 = (FName)pUVar2->_padding_;
              ::FName::ToString(&local_258,&local_2d0);
            }
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
            if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
            }
            if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_218.Data.AllocatorInstance.Data);
            }
            if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_208.Data.AllocatorInstance.Data);
            }
            this_02 = local_338;
            if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
              this_02 = local_338;
            }
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_350,
                     (FWriteAccessScope *)&local_178);
          if ((local_340 != 0) && (local_348.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_348.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_348,0,0,0x10);
            local_340 = 0;
          }
          if (local_178.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
          }
          if (local_348.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_348.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_350);
          local_358 = local_358 + 1;
          local_2f0 = local_2f0 + 0x80;
        } while ((int)local_358 < local_160.ArrayNum);
      }
      if ((UE::UMG::GVarAnimationDetailedLogging != false) && (4 < (byte)LogUMG._0_1_)) {
        local_250.ComparisonIndex.Value = *(uint *)&pUVar10->field_0x18;
        local_250.Number = *(uint *)&pUVar10->field_0x1c;
        ::FName::ToString(&local_250,&local_1e8);
        pUVar2 = (this->Animation).field0_0x0.DebugPtr;
        if (pUVar2 == (UWidgetAnimation *)0x0) {
          ::FString::FString(&local_2c0,L"None");
        }
        else {
          local_248 = (FName)pUVar2->_padding_;
          ::FName::ToString(&local_248,&local_2c0);
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
        if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
        }
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
      }
      FlushIfPrivateLinker(this);
      FVar12 = (ForElementType<FMovieSceneContext>)&local_160;
      if (local_160.AllocatorInstance.SecondaryData != (ForElementType<FMovieSceneContext>)0x0) {
        FVar12 = local_160.AllocatorInstance.SecondaryData;
      }
      DestructItems<FMovieSceneContext,int>((FMovieSceneContext *)FVar12,local_160.ArrayNum);
      local_1d8.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)local_160.AllocatorInstance.SecondaryData;
    }
    else {
      if ((UE::UMG::GVarAnimationDetailedLogging == false) || ((byte)LogUMG._0_1_ < 5))
      goto LAB_146948850;
      local_240.ComparisonIndex.Value = *(uint *)&pUVar10->field_0x18;
      local_240.Number = *(uint *)&pUVar10->field_0x1c;
      ::FName::ToString(&local_240,&local_1d8);
      pUVar2 = (this->Animation).field0_0x0.DebugPtr;
      if (pUVar2 == (UWidgetAnimation *)0x0) {
        ::FString::FString(&local_2b0,L"None");
      }
      else {
        local_238 = (FName)pUVar2->_padding_;
        ::FName::ToString(&local_238,&local_2b0);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogUMG);
      if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
      }
    }
LAB_146948846:
    if ((ForElementType<FMovieSceneContext>)local_1d8.Data.AllocatorInstance.Data !=
        (ForElementType<FMovieSceneContext>)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
  }
LAB_146948850:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_318.SharedReferenceCount.ReferenceController);
LAB_146948930:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2e8);
  return;
}

// ~FWidgetAnimationState @ 146a581d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWidgetAnimationState::~FWidgetAnimationState(FWidgetAnimationState *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong *plVar8;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnWidgetAnimationFinishedEvent).field_0x8,
             *(int *)&(this->OnWidgetAnimationFinishedEvent).field_0x10);
  pvVar5 = *(void **)&(this->OnWidgetAnimationFinishedEvent).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWidgetAnimationFinishedEvent);
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)
             (this->PlaybackManager).TimeTransform.NestedTransforms.AllocatorInstance.Data,
             (this->PlaybackManager).TimeTransform.NestedTransforms.ArrayNum);
  pFVar6 = (this->PlaybackManager).TimeTransform.NestedTransforms.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pTVar7 = (this->WeakPlaybackState).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  plVar8 = (longlong *)this->_padding_;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  return;
}

