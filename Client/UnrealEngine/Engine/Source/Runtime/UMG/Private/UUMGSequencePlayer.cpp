// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 42

// StaticClass @ 1468da2f0

UClass * __cdecl UUMGSequencePlayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUMGSequencePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UMGSequencePlayer",
               &Z_Registration_Info_UClass_UUMGSequencePlayer.InnerSingleton,
               StaticRegisterNativesUUMGSequencePlayer,0x268,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UUMGSequencePlayer>,
               InternalVTableHelperCtorCaller<UUMGSequencePlayer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUMGSequencePlayer.InnerSingleton;
}

// UUMGSequencePlayer @ 1469021d0

/* WARNING: Enum "Type": Some values do not have unique names */

UUMGSequencePlayer * __thiscall
UUMGSequencePlayer::UUMGSequencePlayer(UUMGSequencePlayer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  IMovieScenePlayer::IMovieScenePlayer((IMovieScenePlayer *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->WidgetAnimationHandle).WeakState.Object = (FWidgetAnimationState *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlayer__;
  (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FMovieSceneRootEvaluationTemplateInstance::FMovieSceneRootEvaluationTemplateInstance
            (&this->RootTemplateInstance);
  *(undefined8 *)&this->OnSequenceFinishedPlayingEvent = 0;
  *(undefined8 *)&(this->OnSequenceFinishedPlayingEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnSequenceFinishedPlayingEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnSequenceFinishedPlayingEvent).field_0x18 = 2;
  return this;
}

// UUMGSequencePlayer @ 146902250

/* WARNING: Enum "Type": Some values do not have unique names */

UUMGSequencePlayer * __thiscall
UUMGSequencePlayer::UUMGSequencePlayer(UUMGSequencePlayer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  IMovieScenePlayer::IMovieScenePlayer((IMovieScenePlayer *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->WidgetAnimationHandle).WeakState.Object = (FWidgetAnimationState *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlayer__;
  (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FMovieSceneRootEvaluationTemplateInstance::FMovieSceneRootEvaluationTemplateInstance
            (&this->RootTemplateInstance);
  *(undefined8 *)&this->OnSequenceFinishedPlayingEvent = 0;
  *(undefined8 *)&(this->OnSequenceFinishedPlayingEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnSequenceFinishedPlayingEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnSequenceFinishedPlayingEvent).field_0x18 = 2;
  return this;
}

// ~UUMGSequencePlayer @ 146904d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUMGSequencePlayer::~UUMGSequencePlayer(UUMGSequencePlayer *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieScenePlayer__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSequenceFinishedPlayingEvent).field_0x8,
             *(int *)&(this->OnSequenceFinishedPlayingEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnSequenceFinishedPlayingEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSequenceFinishedPlayingEvent);
  FMovieSceneRootEvaluationTemplateInstance::~FMovieSceneRootEvaluationTemplateInstance
            (&this->RootTemplateInstance);
  pTVar4 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  IMovieScenePlayer::~IMovieScenePlayer((IMovieScenePlayer *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// AsUObject @ 14690c4c0

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall UUMGSequencePlayer::AsUObject(UUMGSequencePlayer *this)

{
  return (UObject *)&this[-1].RootTemplateInstance.bOwnsSharedPlaybackState;
}

// BeginDestroy @ 14690c6d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUMGSequencePlayer::BeginDestroy(UUMGSequencePlayer *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(UUMGSequencePlayer **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// BroadcastSequenceFinishedPlaying @ 14690dc10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUMGSequencePlayer::BroadcastSequenceFinishedPlaying(UUMGSequencePlayer *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnSequenceFinishedPlayingEvent,(FWriteAccessScope *)&local_38);
  puVar1 = &(this->OnSequenceFinishedPlayingEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->OnSequenceFinishedPlayingEvent).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->OnSequenceFinishedPlayingEvent).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->OnSequenceFinishedPlayingEvent).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->OnSequenceFinishedPlayingEvent).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->OnSequenceFinishedPlayingEvent,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// ConstructEntitySystemLinker @ 1469105c0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntitySystemLinker * __thiscall
UUMGSequencePlayer::ConstructEntitySystemLinker(UUMGSequencePlayer *this)

{
  undefined1 local_res10 [24];
  
  `UUMGSequencePlayer::ConstructEntitySystemLinker'::__l2::<lambda_1>::operator()(local_res10);
  return (UMovieSceneEntitySystemLinker *)0x0;
}

// GetAnimation @ 14691d900

/* WARNING: Enum "Type": Some values do not have unique names */

UWidgetAnimation * __thiscall UUMGSequencePlayer::GetAnimation(UUMGSequencePlayer *this)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FWidgetAnimationState *pFVar4;
  bool bVar5;
  
  pTVar1 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
  pFVar4 = (FWidgetAnimationState *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return (UWidgetAnimation *)0x0;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pFVar4 = (this->WidgetAnimationHandle).WeakState.Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pFVar4 == (FWidgetAnimationState *)0x0) {
    return (UWidgetAnimation *)0x0;
  }
  return (pFVar4->Animation).field0_0x0.DebugPtr;
}

// GetCurrentTime @ 14691dec0

/* WARNING: Enum "Type": Some values do not have unique names */

FQualifiedFrameTime * __thiscall
UUMGSequencePlayer::GetCurrentTime
          (UUMGSequencePlayer *this,FQualifiedFrameTime *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FFrameRate FVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FWidgetAnimationState *pFVar5;
  bool bVar6;
  FFrameTime local_res8;
  
  pFVar5 = (FWidgetAnimationState *)0x0;
  pTVar1 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_14691defa;
      }
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar6 = aVar3 == aVar4;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar6);
    pFVar5 = (this->WidgetAnimationHandle).WeakState.Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pFVar5 != (FWidgetAnimationState *)0x0) {
    FMovieScenePlaybackManager::GetCurrentTime(&pFVar5->PlaybackManager);
    FVar2 = (pFVar5->PlaybackManager).DisplayRate;
    __return_storage_ptr__->Time = local_res8;
    __return_storage_ptr__->Rate = FVar2;
    return __return_storage_ptr__;
  }
LAB_14691defa:
  (__return_storage_ptr__->Time).FrameNumber = 0;
  (__return_storage_ptr__->Time).SubFrame = 0.0;
  (__return_storage_ptr__->Rate).Numerator = 0x18;
  (__return_storage_ptr__->Rate).Denominator = 1;
  return __return_storage_ptr__;
}

// GetEvaluationTemplate @ 14691e350

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneRootEvaluationTemplateInstance * __thiscall
UUMGSequencePlayer::GetEvaluationTemplate(UUMGSequencePlayer *this)

{
  return (FMovieSceneRootEvaluationTemplateInstance *)&this->_padding_;
}

// GetPlaybackClient @ 146920b30

/* WARNING: Enum "Type": Some values do not have unique names */

IMovieScenePlaybackClient * __thiscall
UUMGSequencePlayer::GetPlaybackClient(UUMGSequencePlayer *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  int iVar4;
  atomic<int> aVar5;
  int iVar6;
  IMovieScenePlaybackClient *pIVar7;
  IMovieScenePlaybackClient IVar8;
  IMovieScenePlaybackClient IVar9;
  IMovieScenePlaybackClient IVar10;
  IMovieScenePlaybackClient IVar11;
  IMovieScenePlaybackClient IVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  byte local_res10;
  FPlaybackCapabilityPtr local_28;
  
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  IVar8 = (IMovieScenePlaybackClient)0x0;
  IVar9 = IVar8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return (IMovieScenePlaybackClient *)0x0;
      }
      LOCK();
      aVar5 = pTVar1->SharedReferenceCount;
      bVar13 = aVar3 == aVar5;
      if (bVar13) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar13);
    IVar9 = (IMovieScenePlaybackClient)this->_padding_;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (IVar9 == (IMovieScenePlaybackClient)0x0) {
    return (IMovieScenePlaybackClient *)0x0;
  }
  IVar12 = *(IMovieScenePlaybackClient *)((longlong)IVar9 + 0x30);
  IVar10 = IVar8;
  IVar11 = IVar12;
  if (IVar12 != (IMovieScenePlaybackClient)0x0) {
    iVar4 = *(int *)((longlong)IVar12 + 8);
    do {
      IVar11 = IVar8;
      if (iVar4 == 0) goto LAB_146920bb5;
      LOCK();
      iVar6 = *(int *)((longlong)IVar12 + 8);
      bVar13 = iVar4 == iVar6;
      if (bVar13) {
        *(int *)((longlong)IVar12 + 8) = iVar4 + 1;
        iVar6 = iVar4;
      }
      UNLOCK();
      iVar4 = iVar6;
    } while (!bVar13);
    IVar10 = *(IMovieScenePlaybackClient *)((longlong)IVar9 + 0x28);
    IVar11 = IVar12;
    if (IVar10 != (IMovieScenePlaybackClient)0x0) goto LAB_146920bdb;
  }
LAB_146920bb5:
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  IVar12 = IVar11;
  if (bVar13) {
    pcVar2 = (code *)swi(3);
    pIVar7 = (IMovieScenePlaybackClient *)(*pcVar2)();
    return pIVar7;
  }
LAB_146920bdb:
  bVar13 = IsInGameThread();
  if (!bVar13) {
    local_res8[0] = 0;
    `UE::MovieScene::FSharedPlaybackState::FindCapability<IMovieScenePlaybackClient>'::__l2::
    <lambda_1>::operator()(local_res8);
  }
  IMovieScenePlaybackClient::GetPlaybackCapabilityID();
  UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
            ((FPlaybackCapabilitiesImpl *)((longlong)IVar10 + 0x38),&local_28,
             1 << (local_res10 & 0x1f));
  IVar9 = IVar8;
  if (((IMovieScenePlaybackClient)local_28.Ptr != (IMovieScenePlaybackClient)0x0) &&
     (IVar9 = (IMovieScenePlaybackClient)local_28.Ptr, local_28.StorageMode != Inline)) {
    if ((local_28.StorageMode == RawPointer) || (local_28.StorageMode == SharedPointer)) {
      IVar9 = *(IMovieScenePlaybackClient *)local_28.Ptr;
    }
    else {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                          ,0x30,L"Unexpected playback capability storage mode");
      IVar9 = IVar8;
      if (bVar13) {
        pcVar2 = (code *)swi(3);
        pIVar7 = (IMovieScenePlaybackClient *)(*pcVar2)();
        return pIVar7;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)IVar12);
  return (IMovieScenePlaybackClient *)IVar9;
}

// GetPlaybackContext @ 146920ca0

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall UUMGSequencePlayer::GetPlaybackContext(UUMGSequencePlayer *this)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  UObject *pUVar4;
  longlong lVar5;
  bool bVar6;
  
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  lVar5 = 0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return (UObject *)0x0;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    lVar5 = this->_padding_;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (lVar5 == 0) {
    return (UObject *)0x0;
  }
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar5 + 0x20));
  return pUVar4;
}

// GetPlaybackStatus @ 146920d20

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall UUMGSequencePlayer::GetPlaybackStatus(UUMGSequencePlayer *this)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  longlong lVar4;
  bool bVar5;
  
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  lVar4 = 0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return Stopped;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    lVar4 = this->_padding_;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (lVar4 == 0) {
    return Stopped;
  }
  return *(Type *)(lVar4 + 0x9c);
}

// GetPrivateStaticClass @ 146922bd0

UClass * __cdecl UUMGSequencePlayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUMGSequencePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UMGSequencePlayer",
               &Z_Registration_Info_UClass_UUMGSequencePlayer.InnerSingleton,
               StaticRegisterNativesUUMGSequencePlayer,0x268,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UUMGSequencePlayer>,
               InternalVTableHelperCtorCaller<UUMGSequencePlayer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUMGSequencePlayer.InnerSingleton;
}

// GetSpawnRegister @ 1469242f0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneSpawnRegister * __thiscall UUMGSequencePlayer::GetSpawnRegister(UUMGSequencePlayer *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FMovieSceneSpawnRegister *pFVar4;
  FMovieSceneSpawnRegister *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  byte local_res10;
  FPlaybackCapabilityPtr local_28;
  
  pTVar6 = (TReferenceControllerBase<1> *)this->_padding_;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = pTVar8;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14692441d;
      }
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar10 = aVar2 == aVar3;
      if (bVar10) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar10);
    pTVar9 = (TReferenceControllerBase<1> *)this->_padding_;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) goto LAB_146924422;
  pTVar6 = (TReferenceControllerBase<1> *)pTVar9[3]._padding_;
  pTVar7 = pTVar6;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
LAB_146924375:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pTVar6 = pTVar7;
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieSceneSpawnRegister *)(*pcVar1)();
      return pFVar4;
    }
  }
  else {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar7 = pTVar8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146924375;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar10 = aVar2 == aVar3;
      if (bVar10) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar10);
    pTVar8 = *(TReferenceControllerBase<1> **)&pTVar9[2].SharedReferenceCount;
    pTVar7 = pTVar6;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_146924375;
  }
  bVar10 = IsInGameThread();
  if (!bVar10) {
    local_res8[0] = bVar10;
    `UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneSpawnRegister>'::__l2::
    <lambda_1>::operator()(local_res8);
  }
  FMovieSceneSpawnRegister::GetPlaybackCapabilityID();
  UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
            ((FPlaybackCapabilitiesImpl *)&pTVar8[3].SharedReferenceCount,&local_28,
             1 << (local_res10 & 0x1f));
  if (local_28.Ptr != (FMovieSceneSpawnRegister *)0x0) {
    pFVar4 = local_28.Ptr;
    if (local_28.StorageMode == Inline) {
LAB_14692444b:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      pFVar5 = (FMovieSceneSpawnRegister *)&this->_padding_;
      if (pFVar4 != (FMovieSceneSpawnRegister *)0x0) {
        pFVar5 = pFVar4;
      }
      return pFVar5;
    }
    if ((local_28.StorageMode == RawPointer) || (local_28.StorageMode == SharedPointer)) {
      pFVar4 = *(FMovieSceneSpawnRegister **)local_28.Ptr;
      goto LAB_14692444b;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                        ,0x30,L"Unexpected playback capability storage mode");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMovieSceneSpawnRegister *)(*pcVar1)();
      return pFVar4;
    }
  }
LAB_14692441d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_146924422:
  return (FMovieSceneSpawnRegister *)&this->_padding_;
}

// GetUserTag @ 146925340

/* WARNING: Enum "Type": Some values do not have unique names */

FName __thiscall UUMGSequencePlayer::GetUserTag(UUMGSequencePlayer *this)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FName in_RDX;
  FWidgetAnimationState *pFVar4;
  bool bVar5;
  
  pFVar4 = (FWidgetAnimationState *)0x0;
  pTVar1 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_14692537a;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pFVar4 = (this->WidgetAnimationHandle).WeakState.Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pFVar4 != (FWidgetAnimationState *)0x0) {
    *(FName *)in_RDX = pFVar4->UserTag;
    return in_RDX;
  }
LAB_14692537a:
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// InitSequencePlayer @ 146929b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UUMGSequencePlayer::InitSequencePlayer(UUMGSequencePlayer *this,FWidgetAnimationState *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWidgetAnimationState *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  atomic<int> aVar6;
  TSharedRef<FWidgetAnimationState,1> *pTVar7;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  FSharedPlaybackState *pFVar10;
  FSharedPlaybackState *pFVar11;
  bool bVar12;
  TSharedRef<FWidgetAnimationState,1> local_38;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_28;
  undefined8 local_18 [2];
  
  pTVar7 = TSharedFromThis<FWidgetAnimationState,1>::AsShared
                     ((TSharedFromThis<FWidgetAnimationState,1> *)param_1,&local_38);
  pTVar9 = (pTVar7->SharedReferenceCount).ReferenceController;
  pFVar3 = pTVar7->Object;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (&this->WidgetAnimationHandle == (FWidgetAnimationHandle *)local_18) {
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar9->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        lVar8 = pTVar9->_padding_;
        goto LAB_146929be4;
      }
    }
  }
  else {
    pTVar4 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
    (this->WidgetAnimationHandle).WeakState.Object = pFVar3;
    (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController = pTVar9;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        lVar8 = pTVar4->_padding_;
        pTVar9 = pTVar4;
LAB_146929be4:
        (**(code **)(lVar8 + 8))(pTVar9,1);
      }
    }
  }
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->WeakPlaybackState).WeakReferenceCount.ReferenceController;
  pFVar11 = (FSharedPlaybackState *)0x0;
  pFVar10 = (FSharedPlaybackState *)local_28.SharedReferenceCount.ReferenceController;
  if ((FSharedPlaybackState *)local_28.SharedReferenceCount.ReferenceController !=
      (FSharedPlaybackState *)0x0) {
    aVar2 = *(atomic<int> *)
             &((FSharedPlaybackState *)local_28.SharedReferenceCount.ReferenceController)->_padding_
    ;
    do {
      pFVar10 = pFVar11;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146929c15;
      LOCK();
      aVar6 = *(atomic<int> *)
               &((FSharedPlaybackState *)local_28.SharedReferenceCount.ReferenceController)->
                _padding_;
      bVar12 = aVar2 == aVar6;
      if (bVar12) {
        *(atomic<int> *)
         &((FSharedPlaybackState *)local_28.SharedReferenceCount.ReferenceController)->_padding_ =
             (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar12);
    pFVar11 = (param_1->WeakPlaybackState).Object;
    pFVar10 = (FSharedPlaybackState *)local_28.SharedReferenceCount.ReferenceController;
    if (pFVar11 != (FSharedPlaybackState *)0x0) goto LAB_146929c3b;
  }
LAB_146929c15:
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
  if (bVar12) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_146929c3b:
  local_28.Object = pFVar11;
  if ((pFVar11 == (FSharedPlaybackState *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FMovieSceneRootEvaluationTemplateInstance::Initialize(&this->RootTemplateInstance,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// InitSequencePlayer @ 146929cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UUMGSequencePlayer::InitSequencePlayer
          (UUMGSequencePlayer *this,UWidgetAnimation *param_1,UUserWidget *param_2)

{
  undefined1 local_res20 [8];
  
  `UUMGSequencePlayer::InitSequencePlayer'::__l2::<lambda_1>::operator()(local_res20);
  return;
}

// InitializeRootInstance @ 14692bed0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UUMGSequencePlayer::InitializeRootInstance
          (UUMGSequencePlayer *this,TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_1)

{
  undefined1 local_res10 [24];
  
  `UUMGSequencePlayer::InitializeRootInstance'::__l2::<lambda_1>::operator()(local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// IsPlayingForward @ 14692cb70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UUMGSequencePlayer::IsPlayingForward(UUMGSequencePlayer *this)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FWidgetAnimationState *pFVar4;
  bool bVar5;
  
  pTVar1 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
  pFVar4 = (FWidgetAnimationState *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return true;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pFVar4 = (this->WidgetAnimationHandle).WeakState.Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pFVar4 == (FWidgetAnimationState *)0x0) {
    return true;
  }
  return (pFVar4->PlaybackManager).PlayDirection == Forwards;
}

// IsStopping @ 14692ce70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UUMGSequencePlayer::IsStopping(UUMGSequencePlayer *this)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FWidgetAnimationState *pFVar4;
  bool bVar5;
  
  pTVar1 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
  pFVar4 = (FWidgetAnimationState *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return false;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pFVar4 = (this->WidgetAnimationHandle).WeakState.Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pFVar4 == (FWidgetAnimationState *)0x0) {
    return false;
  }
  return pFVar4->bIsStopping;
}

// OnSequenceFinishedPlaying @ 14692feb0

/* WARNING: Enum "Type": Some values do not have unique names */

FOnSequenceFinishedPlaying * __thiscall
UUMGSequencePlayer::OnSequenceFinishedPlaying(UUMGSequencePlayer *this)

{
  return &this->OnSequenceFinishedPlayingEvent;
}

// Pause @ 146931210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUMGSequencePlayer::Pause(UUMGSequencePlayer *this)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FWidgetAnimationState *this_00;
  bool bVar4;
  
  pTVar1 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
  this_00 = (FWidgetAnimationState *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
    this_00 = (this->WidgetAnimationHandle).WeakState.Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (this_00 != (FWidgetAnimationState *)0x0) {
    FWidgetAnimationState::Pause(this_00);
    return;
  }
  return;
}

// Play @ 146931d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UUMGSequencePlayer::Play
          (UUMGSequencePlayer *this,float param_1,int param_2,Type param_3,float param_4,
          bool param_5)

{
  FWidgetAnimationState *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FWidgetAnimationState *pFVar4;
  FWidgetAnimationState *this_00;
  bool bVar5;
  FWidgetAnimationStatePlayParams local_68;
  
  pFVar1 = (FWidgetAnimationState *)
           (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
  this_00 = (FWidgetAnimationState *)0x0;
  pFVar4 = pFVar1;
  if (pFVar1 != (FWidgetAnimationState *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar4 = this_00;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146931d61;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->_padding_;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this_00 = (this->WidgetAnimationHandle).WeakState.Object;
    pFVar4 = pFVar1;
  }
LAB_146931d61:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  if (this_00 != (FWidgetAnimationState *)0x0) {
    local_68.EndAtTime.bIsSet = false;
    local_68.StartAtTime = (double)param_1;
    local_68.StartOffset.bIsSet = false;
    local_68.EndOffset.bIsSet = false;
    local_68.bRestoreState = param_5;
    local_68.PlaybackSpeed = param_4;
    local_68.NumLoopsToPlay = param_2;
    local_68.PlayMode = param_3;
    FWidgetAnimationState::Play(this_00,&local_68);
  }
  return;
}

// PlayTo @ 146931df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UUMGSequencePlayer::PlayTo
          (UUMGSequencePlayer *this,float param_1,float param_2,int param_3,Type param_4,
          float param_5,bool param_6)

{
  FWidgetAnimationState *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FWidgetAnimationState *pFVar4;
  FWidgetAnimationState *this_00;
  bool bVar5;
  FWidgetAnimationStatePlayParams local_78;
  
  pFVar1 = (FWidgetAnimationState *)
           (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
  this_00 = (FWidgetAnimationState *)0x0;
  pFVar4 = pFVar1;
  if (pFVar1 != (FWidgetAnimationState *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar4 = this_00;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146931e45;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar1->_padding_;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this_00 = (this->WidgetAnimationHandle).WeakState.Object;
    pFVar4 = pFVar1;
  }
LAB_146931e45:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  if (this_00 != (FWidgetAnimationState *)0x0) {
    local_78.PlayMode = param_4;
    local_78.StartAtTime = (double)param_1;
    local_78.EndAtTime.bIsSet = false;
    local_78.StartOffset.bIsSet = false;
    local_78.EndOffset.bIsSet = true;
    local_78.EndOffset.TypedValue = (double)param_2;
    local_78.bRestoreState = param_6;
    local_78.PlaybackSpeed = param_5;
    local_78.NumLoopsToPlay = param_3;
    FWidgetAnimationState::Play(this_00,&local_78);
  }
  return;
}

// RemoveEvaluationData @ 14693c1c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUMGSequencePlayer::RemoveEvaluationData(UUMGSequencePlayer *this)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FWidgetAnimationState *this_00;
  bool bVar4;
  
  pTVar1 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
  this_00 = (FWidgetAnimationState *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
    this_00 = (this->WidgetAnimationHandle).WeakState.Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (this_00 != (FWidgetAnimationState *)0x0) {
    FWidgetAnimationState::RemoveEvaluationData(this_00);
    return;
  }
  return;
}

// Reverse @ 14693e850

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUMGSequencePlayer::Reverse(UUMGSequencePlayer *this)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FWidgetAnimationState *pFVar4;
  bool bVar5;
  
  pTVar1 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
  pFVar4 = (FWidgetAnimationState *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pFVar4 = (this->WidgetAnimationHandle).WeakState.Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pFVar4 != (FWidgetAnimationState *)0x0) {
    FMovieScenePlaybackManager::ReversePlayDirection(&pFVar4->PlaybackManager);
    return;
  }
  return;
}

// SetCurrentTime @ 1469429e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUMGSequencePlayer::SetCurrentTime(UUMGSequencePlayer *this,float param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FFrameRate FVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  int iVar5;
  FWidgetAnimationState *pFVar6;
  bool bVar7;
  double dVar8;
  undefined1 in_XMM2 [16];
  undefined1 auVar9 [16];
  double dVar10;
  FFrameTime local_res8 [4];
  
  pTVar1 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
  pFVar6 = (FWidgetAnimationState *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return;
      }
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    pFVar6 = (this->WidgetAnimationHandle).WeakState.Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pFVar6 != (FWidgetAnimationState *)0x0) {
    FVar2 = (pFVar6->PlaybackManager).DisplayRate;
    dVar10 = ((double)FVar2.Numerator * (double)param_1) / (double)FVar2.Denominator;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar10;
    auVar9 = roundpd(in_XMM2,auVar9,1);
    dVar8 = auVar9._0_8_;
    dVar10 = dVar10 - dVar8;
    if (__real_41dfffffffc00000 <= dVar8) {
      dVar8 = __real_41dfffffffc00000;
    }
    if (dVar8 <= __real_c1e0000000000000) {
      dVar8 = __real_c1e0000000000000;
    }
    iVar5 = (int)dVar10;
    local_res8[0].SubFrame = (float)dVar10 - (float)iVar5;
    if ((0.0 < local_res8[0].SubFrame) && (::FFrameTime::MaxSubframe <= local_res8[0].SubFrame)) {
      local_res8[0].SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (::FFrameTime::MaxSubframe <= local_res8[0].SubFrame) {
      local_res8[0].SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_res8[0].SubFrame <= 0.0) {
      local_res8[0].SubFrame = 0.0;
    }
    local_res8[0].FrameNumber.Value = (int)dVar8 + iVar5;
    FMovieScenePlaybackManager::SetCurrentTime(&pFVar6->PlaybackManager,local_res8);
  }
  return;
}

// SetNumLoopsToPlay @ 146943710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUMGSequencePlayer::SetNumLoopsToPlay(UUMGSequencePlayer *this,int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  int iVar4;
  FWidgetAnimationState *pFVar5;
  bool bVar6;
  
  pTVar1 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
  pFVar5 = (FWidgetAnimationState *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    pFVar5 = (this->WidgetAnimationHandle).WeakState.Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pFVar5 != (FWidgetAnimationState *)0x0) {
    iVar4 = param_1 * 2;
    if (pFVar5->PlayMode != PingPong) {
      iVar4 = param_1;
    }
    FMovieScenePlaybackManager::SetNumLoopsToPlay(&pFVar5->PlaybackManager,iVar4);
  }
  return;
}

// SetPlaybackSpeed @ 146943cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUMGSequencePlayer::SetPlaybackSpeed(UUMGSequencePlayer *this,float param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FWidgetAnimationState *pFVar4;
  bool bVar5;
  
  pTVar1 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
  pFVar4 = (FWidgetAnimationState *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pFVar4 = (this->WidgetAnimationHandle).WeakState.Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pFVar4 != (FWidgetAnimationState *)0x0) {
    (pFVar4->PlaybackManager).PlayRate = (double)param_1;
  }
  return;
}

// SetPlaybackStatus @ 146943d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUMGSequencePlayer::SetPlaybackStatus(UUMGSequencePlayer *this,Type param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  longlong lVar4;
  bool bVar5;
  
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  lVar4 = 0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    lVar4 = this->_padding_;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (lVar4 != 0) {
    *(Type *)(lVar4 + 0x9c) = param_1;
  }
  return;
}

// SetUserTag @ 146944390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUMGSequencePlayer::SetUserTag(UUMGSequencePlayer *this,FName param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FWidgetAnimationState *pFVar4;
  bool bVar5;
  
  pFVar4 = (FWidgetAnimationState *)0x0;
  pTVar1 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pFVar4 = (this->WidgetAnimationHandle).WeakState.Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (pFVar4 != (FWidgetAnimationState *)0x0) {
    pFVar4->UserTag = param_1;
  }
  return;
}

// StaticRegisterNativesUUMGSequencePlayer @ 146945a60

void __cdecl UUMGSequencePlayer::StaticRegisterNativesUUMGSequencePlayer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UUMGSequencePlayer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Stop @ 146946080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUMGSequencePlayer::Stop(UUMGSequencePlayer *this)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FWidgetAnimationState *this_00;
  bool bVar4;
  
  pTVar1 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
  this_00 = (FWidgetAnimationState *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
    this_00 = (this->WidgetAnimationHandle).WeakState.Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (this_00 != (FWidgetAnimationState *)0x0) {
    FWidgetAnimationState::Stop(this_00);
    return;
  }
  return;
}

// TearDown @ 146947f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUMGSequencePlayer::TearDown(UUMGSequencePlayer *this)

{
  return;
}

// Tick @ 146948980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUMGSequencePlayer::Tick(UUMGSequencePlayer *this,float param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FWidgetAnimationState *this_00;
  bool bVar4;
  
  pTVar1 = (this->WidgetAnimationHandle).WeakState.WeakReferenceCount.ReferenceController;
  this_00 = (FWidgetAnimationState *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
    this_00 = (this->WidgetAnimationHandle).WeakState.Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (this_00 != (FWidgetAnimationState *)0x0) {
    FWidgetAnimationState::Tick(this_00,param_1);
  }
  return;
}

// execGetUserTag @ 146952790

void __cdecl UUMGSequencePlayer::execGetUserTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar4 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = *(TReferenceControllerBase<1> **)&param_1[0xd].field_0x18;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_1469527e5;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    lVar4 = *(longlong *)&param_1[0xd].field_0x10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (lVar4 != 0) {
    *(undefined8 *)param_3 = *(undefined8 *)(lVar4 + 0xfc);
    return;
  }
LAB_1469527e5:
  *(undefined8 *)param_3 = 0;
  return;
}

// execSetUserTag @ 146956600

void __cdecl UUMGSequencePlayer::execSetUserTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  atomic<int> aVar3;
  undefined8 uVar4;
  atomic<int> aVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 local_res8;
  
  lVar6 = 0;
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  uVar4 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = *(TReferenceControllerBase<1> **)&param_1[0xd].field_0x18;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar2->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return;
      }
      LOCK();
      aVar5 = pTVar2->SharedReferenceCount;
      bVar7 = aVar3 == aVar5;
      if (bVar7) {
        pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar7);
    lVar6 = *(longlong *)&param_1[0xd].field_0x10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0xfc) = uVar4;
  }
  return;
}

// operator() @ 1504f5c90

bool __thiscall
`UUMGSequencePlayer::ConstructEntitySystemLinker'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3076208989332045646>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3076208989332045646>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f5cd0

bool __thiscall `UUMGSequencePlayer::InitSequencePlayer'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3076208989332045794>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3076208989332045794>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f5d10

bool __thiscall
`UUMGSequencePlayer::InitializeRootInstance'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3076208989332045588>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3076208989332045588>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

