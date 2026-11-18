// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// GetPlaybackCapabilityID @ 14621a870

TPlaybackCapabilityID<UE::MovieScene::FPlayerIndexPlaybackCapability> __cdecl
UE::MovieScene::FPlayerIndexPlaybackCapability::GetPlaybackCapabilityID(void)

{
  TPlaybackCapabilityID<UE::MovieScene::FPlayerIndexPlaybackCapability> *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::FPlayerIndexPlaybackCapability>)
                   FPlaybackCapabilityID::Register(L"FPlayerIndexPlaybackCapability");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *in_RCX = ::StaticID;
  return SUB84(in_RCX,0);
}

// GetPlayer @ 14621b020

IMovieScenePlayer * __cdecl
UE::MovieScene::FPlayerIndexPlaybackCapability::GetPlayer
          (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  FPlayerIndexPlaybackCapability *pFVar4;
  IMovieScenePlayer *pIVar5;
  longlong lVar6;
  
  pFVar4 = FSharedPlaybackState::FindCapability<UE::MovieScene::FPlayerIndexPlaybackCapability>
                     (param_1->Object);
  if (pFVar4 == (FPlayerIndexPlaybackCapability *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return (IMovieScenePlayer *)0x0;
  }
  uVar1 = pFVar4->PlayerIndex;
  AcquireSRWLockShared((PSRWLOCK)&GGlobalPlayerRegistryLock);
  if ((int)(uint)uVar1 < (int)GGlobalPlayerRegistry._40_4_) {
    lVar6 = 0x154bf1650;
    if (GGlobalPlayerRegistry._32_8_ != 0) {
      lVar6 = GGlobalPlayerRegistry._32_8_;
    }
    if ((*(uint *)(lVar6 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0)
    goto LAB_14621b0a5;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("UE::MovieScene::GGlobalPlayerRegistry.IsValidIndex(InUniqueIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScenePlayer.cpp"
                     ,0x52,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pIVar5 = (IMovieScenePlayer *)(*pcVar2)();
    return pIVar5;
  }
LAB_14621b0a5:
  pIVar5 = *(IMovieScenePlayer **)(GGlobalPlayerRegistry._0_8_ + (ulonglong)uVar1 * 8);
  ReleaseSRWLockShared((PSRWLOCK)&GGlobalPlayerRegistryLock);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pIVar5;
}

// GetPlayerIndex @ 14621b0f0

ushort __cdecl
UE::MovieScene::FPlayerIndexPlaybackCapability::GetPlayerIndex
          (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  ushort uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FPlayerIndexPlaybackCapability *pFVar3;
  
  pFVar3 = FSharedPlaybackState::FindCapability<UE::MovieScene::FPlayerIndexPlaybackCapability>
                     (param_1->Object);
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pFVar3 != (FPlayerIndexPlaybackCapability *)0x0) {
    uVar1 = pFVar3->PlayerIndex;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    return uVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return 0xffff;
}

