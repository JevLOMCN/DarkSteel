// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 6

// SetOrAddCapabilityRaw<UE::MovieScene::FCameraCutPlaybackCapability> @ 146c4d2a0

FCameraCutPlaybackCapability * __thiscall
UE::MovieScene::FSharedPlaybackState::
SetOrAddCapabilityRaw<UE::MovieScene::FCameraCutPlaybackCapability>
          (FSharedPlaybackState *this,FCameraCutPlaybackCapability *param_1)

{
  code *pcVar1;
  bool bVar2;
  FCameraCutPlaybackCapability *pFVar3;
  FPlaybackCapabilities *this_00;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  uint local_res20;
  byte local_58;
  byte local_54;
  byte local_50;
  FCameraCutPlaybackCapability *local_48;
  FCameraCutPlaybackCapability *local_40;
  FPlaybackCapabilityPtr local_38;
  FPlaybackCapabilityPtr local_28;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    local_res8[0] = bVar2;
    `UE::MovieScene::FSharedPlaybackState::
    SetOrAddCapabilityRaw<UE::MovieScene::FCameraCutPlaybackCapability>'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    local_res18[0] = bVar2;
    `UE::MovieScene::FSharedPlaybackState::
    HasCapability<UE::MovieScene::FCameraCutPlaybackCapability>'::__l2::<lambda_1>::operator()
              (local_res18);
  }
  FCameraCutPlaybackCapability::GetPlaybackCapabilityID();
  this_00 = &this->Capabilities;
  if ((*(uint *)&(this->Capabilities).field_0x10 >> (local_res20 & 0x1f) & 1) == 0) {
    local_40 = param_1;
    FCameraCutPlaybackCapability::GetPlaybackCapabilityID();
    FPlaybackCapabilitiesImpl::
    AddCapability<UE::MovieScene::FCameraCutPlaybackCapability_*,UE::MovieScene::FCameraCutPlaybackCapability,UE::MovieScene::FCameraCutPlaybackCapability_*>
              ((FPlaybackCapabilitiesImpl *)this_00,&local_28,1 << (local_50 & 0x1f),&local_40);
    if ((local_28.Ptr == (FCameraCutPlaybackCapability *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x3a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCameraCutPlaybackCapability *)(*pcVar1)();
      return pFVar3;
    }
    if (local_28.StorageMode == Inline) {
      return local_28.Ptr;
    }
    local_38.Ptr = local_28.Ptr;
    if ((local_28.StorageMode != RawPointer) && (local_28.StorageMode != SharedPointer)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x44,L"Unexpected playback capability storage mode");
      if (!bVar2) {
        return local_28.Ptr;
      }
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCameraCutPlaybackCapability *)(*pcVar1)();
      return pFVar3;
    }
  }
  else {
    local_48 = param_1;
    FCameraCutPlaybackCapability::GetPlaybackCapabilityID();
    FPlaybackCapabilitiesImpl::
    OverwriteCapability<UE::MovieScene::FCameraCutPlaybackCapability_*,UE::MovieScene::FCameraCutPlaybackCapability,UE::MovieScene::FCameraCutPlaybackCapability_*>
              ((FPlaybackCapabilitiesImpl *)this_00,1 << (local_58 & 0x1f),&local_48);
    FCameraCutPlaybackCapability::GetPlaybackCapabilityID();
    FPlaybackCapabilitiesImpl::GetCapabilityChecked
              ((FPlaybackCapabilitiesImpl *)this_00,&local_38,1 << (local_54 & 0x1f));
    if ((local_38.Ptr == (FCameraCutPlaybackCapability *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x3a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCameraCutPlaybackCapability *)(*pcVar1)();
      return pFVar3;
    }
    if (local_38.StorageMode == Inline) {
      return local_38.Ptr;
    }
    if ((local_38.StorageMode != RawPointer) && (local_38.StorageMode != SharedPointer)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x44,L"Unexpected playback capability storage mode");
      if (!bVar2) {
        return local_38.Ptr;
      }
      pcVar1 = (code *)swi(3);
      pFVar3 = (FCameraCutPlaybackCapability *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FCameraCutPlaybackCapability *)*(FCameraCutPlaybackCapability *)local_38.Ptr;
}

// SetOrAddCapabilityRaw<FMovieSceneSpawnRegister> @ 146c4d480

FMovieSceneSpawnRegister * __thiscall
UE::MovieScene::FSharedPlaybackState::SetOrAddCapabilityRaw<FMovieSceneSpawnRegister>
          (FSharedPlaybackState *this,FMovieSceneSpawnRegister *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneSpawnRegister *pFVar3;
  FPlaybackCapabilities *this_00;
  undefined1 local_res8 [16];
  undefined1 local_res18 [8];
  uint local_res20;
  byte local_58;
  byte local_54;
  byte local_50;
  FMovieSceneSpawnRegister *local_48;
  FMovieSceneSpawnRegister *local_40;
  FPlaybackCapabilityPtr local_38;
  FPlaybackCapabilityPtr local_28;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    local_res8[0] = bVar2;
    `UE::MovieScene::FSharedPlaybackState::SetOrAddCapabilityRaw<FMovieSceneSpawnRegister>'::__l2::
    <lambda_1>::operator()(local_res8);
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    local_res18[0] = bVar2;
    `UE::MovieScene::FSharedPlaybackState::HasCapability<FMovieSceneSpawnRegister>'::__l2::
    <lambda_1>::operator()(local_res18);
  }
  FMovieSceneSpawnRegister::GetPlaybackCapabilityID();
  this_00 = &this->Capabilities;
  if ((*(uint *)&(this->Capabilities).field_0x10 >> (local_res20 & 0x1f) & 1) == 0) {
    local_40 = param_1;
    FMovieSceneSpawnRegister::GetPlaybackCapabilityID();
    FPlaybackCapabilitiesImpl::
    AddCapability<FMovieSceneSpawnRegister_*,FMovieSceneSpawnRegister,FMovieSceneSpawnRegister_*>
              ((FPlaybackCapabilitiesImpl *)this_00,&local_28,1 << (local_50 & 0x1f),&local_40);
    if ((local_28.Ptr == (FMovieSceneSpawnRegister *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x3a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMovieSceneSpawnRegister *)(*pcVar1)();
      return pFVar3;
    }
    if (local_28.StorageMode == Inline) {
      return local_28.Ptr;
    }
    local_38.Ptr = local_28.Ptr;
    if ((local_28.StorageMode != RawPointer) && (local_28.StorageMode != SharedPointer)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x44,L"Unexpected playback capability storage mode");
      if (!bVar2) {
        return local_28.Ptr;
      }
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMovieSceneSpawnRegister *)(*pcVar1)();
      return pFVar3;
    }
  }
  else {
    local_48 = param_1;
    FMovieSceneSpawnRegister::GetPlaybackCapabilityID();
    FPlaybackCapabilitiesImpl::
    OverwriteCapability<FMovieSceneSpawnRegister_*,FMovieSceneSpawnRegister,FMovieSceneSpawnRegister_*>
              ((FPlaybackCapabilitiesImpl *)this_00,1 << (local_58 & 0x1f),&local_48);
    FMovieSceneSpawnRegister::GetPlaybackCapabilityID();
    FPlaybackCapabilitiesImpl::GetCapabilityChecked
              ((FPlaybackCapabilitiesImpl *)this_00,&local_38,1 << (local_54 & 0x1f));
    if ((local_38.Ptr == (FMovieSceneSpawnRegister *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x3a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMovieSceneSpawnRegister *)(*pcVar1)();
      return pFVar3;
    }
    if (local_38.StorageMode == Inline) {
      return local_38.Ptr;
    }
    if ((local_38.StorageMode != RawPointer) && (local_38.StorageMode != SharedPointer)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x44,L"Unexpected playback capability storage mode");
      if (!bVar2) {
        return local_38.Ptr;
      }
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMovieSceneSpawnRegister *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FMovieSceneSpawnRegister *)((FMovieSceneSpawnRegister *)local_38.Ptr)->_padding_;
}

// operator() @ 1504fa9b0

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::HasCapability<UE::MovieScene::FCameraCutPlaybackCapability>'
::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220269>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220269>,
                       &`public:___cdecl_`public:_bool___cdecl_UE::MovieScene::FSharedPlaybackState::HasCapability<UE::MovieScene::FCameraCutPlaybackCapability>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fa9f0

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::HasCapability<FMovieSceneSpawnRegister>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220269>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220269>,
                       &`public:___cdecl_`public:_bool___cdecl_UE::MovieScene::FSharedPlaybackState::HasCapability<FMovieSceneSpawnRegister>(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504faa30

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::
SetOrAddCapabilityRaw<UE::MovieScene::FCameraCutPlaybackCapability>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220167>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220167>,
                       &`public:___cdecl_`public:_struct_UE::MovieScene::FCameraCutPlaybackCapability&___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::SetOrAddCapabilityRaw<UE::MovieScene::FCameraCutPlaybackCapability>(UE::MovieScene::FCameraCutPlaybackCapability*___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504faa70

bool __thiscall
`UE::MovieScene::FSharedPlaybackState::SetOrAddCapabilityRaw<FMovieSceneSpawnRegister>'::__l2::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3092057427244220167>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3092057427244220167>,
                       &`public:___cdecl_`public:_class_FMovieSceneSpawnRegister&___ptr64___cdecl_UE::MovieScene::FSharedPlaybackState::SetOrAddCapabilityRaw<FMovieSceneSpawnRegister>(FMovieSceneSpawnRegister*___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

