// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 14

// FMovieSceneLegacyPlayer @ 1461fc780

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneLegacyPlayer * __thiscall
FMovieSceneLegacyPlayer::FMovieSceneLegacyPlayer
          (FMovieSceneLegacyPlayer *this,TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_1
          )

{
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_18;
  
  IMovieScenePlayer::IMovieScenePlayer((IMovieScenePlayer *)this);
  this->_padding_ = (longlong)&___7FMovieSceneLegacyPlayer__6B_;
  (this->SharedPlaybackState).Object = (FSharedPlaybackState *)0x0;
  (this->SharedPlaybackState).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FMovieSceneRootEvaluationTemplateInstance::FMovieSceneRootEvaluationTemplateInstance
            (&this->EvaluationTemplateInstance);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMovieSceneRootEvaluationTemplateInstance::Initialize(&this->EvaluationTemplateInstance,&local_18)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// FMovieSceneLegacyPlayer @ 1461fc810

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneLegacyPlayer * __thiscall
FMovieSceneLegacyPlayer::FMovieSceneLegacyPlayer(FMovieSceneLegacyPlayer *this)

{
  IMovieScenePlayer::IMovieScenePlayer((IMovieScenePlayer *)this);
  this->_padding_ = (longlong)&___7FMovieSceneLegacyPlayer__6B_;
  (this->SharedPlaybackState).Object = (FSharedPlaybackState *)0x0;
  (this->SharedPlaybackState).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FMovieSceneRootEvaluationTemplateInstance::FMovieSceneRootEvaluationTemplateInstance
            (&this->EvaluationTemplateInstance);
  return this;
}

// AsUObject @ 1462083d0

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall FMovieSceneLegacyPlayer::AsUObject(FMovieSceneLegacyPlayer *this)

{
  return (UObject *)0x0;
}

// ConstructEntitySystemLinker @ 14620be30

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntitySystemLinker * __thiscall
FMovieSceneLegacyPlayer::ConstructEntitySystemLinker(FMovieSceneLegacyPlayer *this)

{
  undefined1 local_res10 [24];
  
  `FMovieSceneLegacyPlayer::ConstructEntitySystemLinker'::__l2::<lambda_1>::operator()(local_res10);
  return (UMovieSceneEntitySystemLinker *)0x0;
}

// GetEvaluationTemplate @ 146218780

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneRootEvaluationTemplateInstance * __thiscall
FMovieSceneLegacyPlayer::GetEvaluationTemplate(FMovieSceneLegacyPlayer *this)

{
  return &this->EvaluationTemplateInstance;
}

// GetPlaybackClient @ 14621a9f0

/* WARNING: Enum "Type": Some values do not have unique names */

IMovieScenePlaybackClient * __thiscall
FMovieSceneLegacyPlayer::GetPlaybackClient(FMovieSceneLegacyPlayer *this)

{
  FSharedPlaybackState *pFVar1;
  code *pcVar2;
  bool bVar3;
  IMovieScenePlaybackClient *pIVar4;
  undefined1 local_res8 [32];
  FPlaybackCapabilityPtr local_18;
  
  pFVar1 = (this->SharedPlaybackState).Object;
  if (pFVar1 == (FSharedPlaybackState *)0x0) {
    return (IMovieScenePlaybackClient *)0x0;
  }
  bVar3 = IsInGameThread();
  if (!bVar3) {
    local_res8[0] = bVar3;
    `UE::MovieScene::FSharedPlaybackState::FindCapability<IMovieScenePlaybackClient>'::__l2::
    <lambda_1>::operator()(local_res8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::StaticID = (TPlaybackCapabilityID<IMovieScenePlaybackClient>)
                 UE::MovieScene::FPlaybackCapabilityID::Register(L"IMovieScenePlaybackClient");
    _Init_thread_footer(&::_TSS0);
  }
  UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
            ((FPlaybackCapabilitiesImpl *)&pFVar1->Capabilities,&local_18,
             1 << (::StaticID._0_1_ & 0x1f));
  if (local_18.Ptr != (IMovieScenePlaybackClient *)0x0) {
    if (local_18.StorageMode == Inline) {
      return local_18.Ptr;
    }
    if ((local_18.StorageMode == RawPointer) || (local_18.StorageMode == SharedPointer)) {
      return (IMovieScenePlaybackClient *)*(IMovieScenePlaybackClient *)local_18.Ptr;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                       ,0x30,L"Unexpected playback capability storage mode");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IMovieScenePlaybackClient *)(*pcVar2)();
      return pIVar4;
    }
  }
  return (IMovieScenePlaybackClient *)0x0;
}

// GetPlaybackContext @ 14621ab50

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall FMovieSceneLegacyPlayer::GetPlaybackContext(FMovieSceneLegacyPlayer *this)

{
  FSharedPlaybackState *pFVar1;
  UObject *pUVar2;
  
  pFVar1 = (this->SharedPlaybackState).Object;
  if (pFVar1 != (FSharedPlaybackState *)0x0) {
    pUVar2 = FWeakObjectPtr::Get(&(pFVar1->WeakPlaybackContext).WeakPtr);
    return pUVar2;
  }
  return (UObject *)0x0;
}

// GetPlaybackStatus @ 14621af30

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FMovieSceneLegacyPlayer::GetPlaybackStatus(FMovieSceneLegacyPlayer *this)

{
  FRootInstanceHandle FVar1;
  FSharedPlaybackState *pFVar2;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  UObject *pUVar6;
  
  pFVar2 = (this->SharedPlaybackState).Object;
  if (pFVar2 == (FSharedPlaybackState *)0x0) {
    return Stopped;
  }
  FVar1 = pFVar2->RootInstanceHandle;
  pUVar6 = FWeakObjectPtr::Get(&(((this->SharedPlaybackState).Object)->WeakLinker).WeakPtr);
  if (*(longlong *)&pUVar6[0x23].field_0x8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5 = (*pcVar3)();
      return TVar5;
    }
  }
  return *(Type *)((ulonglong)((uint)FVar1 & 0xffff) * 0x140 + 0xd8 +
                  *(longlong *)(*(longlong *)&pUVar6[0x23].field_0x8 + 8));
}

// GetSpawnRegister @ 14621d3f0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneSpawnRegister * __thiscall
FMovieSceneLegacyPlayer::GetSpawnRegister(FMovieSceneLegacyPlayer *this)

{
  FSharedPlaybackState *pFVar1;
  code *pcVar2;
  bool bVar3;
  FMovieSceneSpawnRegister *pFVar4;
  undefined1 local_res8 [8];
  FPlaybackCapabilityPtr local_18;
  
  pFVar1 = (this->SharedPlaybackState).Object;
  if (pFVar1 != (FSharedPlaybackState *)0x0) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      local_res8[0] = bVar3;
      `UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneSpawnRegister>'::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::StaticID = (TPlaybackCapabilityID<FMovieSceneSpawnRegister>)
                     UE::MovieScene::FPlaybackCapabilityID::Register(L"FMovieSceneSpawnRegister");
        _Init_thread_footer(&::_TSS0);
      }
    }
    UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
              ((FPlaybackCapabilitiesImpl *)&pFVar1->Capabilities,&local_18,
               1 << (::StaticID._0_1_ & 0x1f));
    if (local_18.Ptr != (FMovieSceneSpawnRegister *)0x0) {
      if (local_18.StorageMode != Inline) {
        if ((local_18.StorageMode != RawPointer) && (local_18.StorageMode != SharedPointer)) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                             ,0x30,L"Unexpected playback capability storage mode");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar4 = (FMovieSceneSpawnRegister *)(*pcVar2)();
            return pFVar4;
          }
          goto LAB_14621d4ab;
        }
        local_18.Ptr = *(void **)local_18.Ptr;
      }
      pFVar4 = (FMovieSceneSpawnRegister *)&this->_padding_;
      if (local_18.Ptr != (FMovieSceneSpawnRegister *)0x0) {
        pFVar4 = local_18.Ptr;
      }
      return pFVar4;
    }
  }
LAB_14621d4ab:
  return (FMovieSceneSpawnRegister *)&this->_padding_;
}

// InitializeRootInstance @ 146220de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneLegacyPlayer::InitializeRootInstance
          (FMovieSceneLegacyPlayer *this,TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_1
          )

{
  undefined1 local_res10 [24];
  
  `FMovieSceneLegacyPlayer::InitializeRootInstance'::__l2::<lambda_1>::operator()(local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetPlaybackStatus @ 146235450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneLegacyPlayer::SetPlaybackStatus(FMovieSceneLegacyPlayer *this,Type param_1)

{
  undefined1 local_res18 [16];
  
  `FMovieSceneLegacyPlayer::SetPlaybackStatus'::__l2::<lambda_1>::operator()(local_res18);
  return;
}

// operator() @ 1504e6f30

bool __thiscall
`FMovieSceneLegacyPlayer::ConstructEntitySystemLinker'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7260805341040869341>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7260805341040869341>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e6f70

bool __thiscall
`FMovieSceneLegacyPlayer::InitializeRootInstance'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7260805341040869277>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7260805341040869277>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e7030

bool __thiscall
`FMovieSceneLegacyPlayer::SetPlaybackStatus'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7260805341040869313>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7260805341040869313>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

