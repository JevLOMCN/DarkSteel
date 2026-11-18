// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 24

// <lambda_1> @ 14ea94f20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

<lambda_1> * __thiscall
`FWmfMediaPlayer::InitializePlayer'::__l2::<lambda_1>::<lambda_1>(void *this,<lambda_1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  
  *(FArchive **)this = (param_1->Archive).Object;
  pTVar1 = (param_1->Archive).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 8) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString((FString *)((longlong)this + 0x10),&param_1->Url);
  *(bool *)((longlong)this + 0x20) = param_1->Precache;
  uVar2 = *(undefined8 *)&(param_1->LocalPlayerOptions).Tracks.Metadata;
  *(undefined8 *)((longlong)this + 0x28) = *(undefined8 *)&(param_1->LocalPlayerOptions).Tracks;
  *(undefined8 *)((longlong)this + 0x30) = uVar2;
  *(undefined8 *)((longlong)this + 0x38) =
       *(undefined8 *)&(param_1->LocalPlayerOptions).Tracks.Subtitle;
  *(int *)((longlong)this + 0x40) = (param_1->LocalPlayerOptions).Tracks.Video;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  *(FScriptContainerElement **)((longlong)this + 0x48) =
       (param_1->LocalPlayerOptions).TracksByLanguage.Video.Data.AllocatorInstance.Data;
  (param_1->LocalPlayerOptions).TracksByLanguage.Video.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(int *)((longlong)this + 0x50) =
       (param_1->LocalPlayerOptions).TracksByLanguage.Video.Data.ArrayNum;
  *(int *)((longlong)this + 0x54) =
       (param_1->LocalPlayerOptions).TracksByLanguage.Video.Data.ArrayMax;
  (param_1->LocalPlayerOptions).TracksByLanguage.Video.Data.ArrayNum = 0;
  (param_1->LocalPlayerOptions).TracksByLanguage.Video.Data.ArrayMax = 0;
  *(undefined8 *)((longlong)this + 0x58) = 0;
  *(FScriptContainerElement **)((longlong)this + 0x58) =
       (param_1->LocalPlayerOptions).TracksByLanguage.Audio.Data.AllocatorInstance.Data;
  (param_1->LocalPlayerOptions).TracksByLanguage.Audio.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(int *)((longlong)this + 0x60) =
       (param_1->LocalPlayerOptions).TracksByLanguage.Audio.Data.ArrayNum;
  *(int *)((longlong)this + 100) =
       (param_1->LocalPlayerOptions).TracksByLanguage.Audio.Data.ArrayMax;
  (param_1->LocalPlayerOptions).TracksByLanguage.Audio.Data.ArrayNum = 0;
  (param_1->LocalPlayerOptions).TracksByLanguage.Audio.Data.ArrayMax = 0;
  *(undefined8 *)((longlong)this + 0x68) = 0;
  *(FScriptContainerElement **)((longlong)this + 0x68) =
       (param_1->LocalPlayerOptions).TracksByLanguage.Subtitle.Data.AllocatorInstance.Data;
  (param_1->LocalPlayerOptions).TracksByLanguage.Subtitle.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(int *)((longlong)this + 0x70) =
       (param_1->LocalPlayerOptions).TracksByLanguage.Subtitle.Data.ArrayNum;
  *(int *)((longlong)this + 0x74) =
       (param_1->LocalPlayerOptions).TracksByLanguage.Subtitle.Data.ArrayMax;
  (param_1->LocalPlayerOptions).TracksByLanguage.Subtitle.Data.ArrayNum = 0;
  (param_1->LocalPlayerOptions).TracksByLanguage.Subtitle.Data.ArrayMax = 0;
  *(undefined8 *)((longlong)this + 0x78) = 0;
  *(FScriptContainerElement **)((longlong)this + 0x78) =
       (param_1->LocalPlayerOptions).TracksByLanguage.Caption.Data.AllocatorInstance.Data;
  (param_1->LocalPlayerOptions).TracksByLanguage.Caption.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(int *)((longlong)this + 0x80) =
       (param_1->LocalPlayerOptions).TracksByLanguage.Caption.Data.ArrayNum;
  *(int *)((longlong)this + 0x84) =
       (param_1->LocalPlayerOptions).TracksByLanguage.Caption.Data.ArrayMax;
  (param_1->LocalPlayerOptions).TracksByLanguage.Caption.Data.ArrayNum = 0;
  (param_1->LocalPlayerOptions).TracksByLanguage.Caption.Data.ArrayMax = 0;
  *(EMediaPlayerOptionTrackSelectMode *)((longlong)this + 0x88) =
       (param_1->LocalPlayerOptions).TrackSelection;
  *(long64 *)((longlong)this + 0x90) = (param_1->LocalPlayerOptions).SeekTime.Ticks;
  *(EMediaPlayerOptionSeekTimeType *)((longlong)this + 0x98) =
       (param_1->LocalPlayerOptions).SeekTimeType;
  *(EMediaPlayerOptionBooleanOverride *)((longlong)this + 0x99) =
       (param_1->LocalPlayerOptions).PlayOnOpen;
  *(EMediaPlayerOptionBooleanOverride *)((longlong)this + 0x9a) = (param_1->LocalPlayerOptions).Loop
  ;
  TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>::
  TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
              *)((longlong)this + 0xa0),
             (TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
              *)&(param_1->LocalPlayerOptions).InternalCustomOptions);
  *(FWmfMediaTracks **)((longlong)this + 0xf0) = (param_1->TracksPtr).Object;
  *(TReferenceControllerBase<1> **)((longlong)this + 0xf8) =
       (param_1->TracksPtr).WeakReferenceCount.ReferenceController;
  (param_1->TracksPtr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->TracksPtr).Object = (FWmfMediaTracks *)0x0;
  return this;
}

// FWmfMediaPlayer @ 14ea95390

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FWmfMediaPlayer * __thiscall
FWmfMediaPlayer::FWmfMediaPlayer(FWmfMediaPlayer *this,IMediaEventSink *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWmfMediaTracks *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  FWmfMediaSession *this_00;
  FWmfMediaSession *pFVar8;
  FWmfMediaPlayer *pFVar9;
  FWmfMediaSession *pFVar10;
  
  pFVar10 = (FWmfMediaSession *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IMediaPlayer__;
  this->_padding_ = (longlong)&_vftable__for__IMediaCache__;
  this->_padding_ = (longlong)&_vftable__for__IMediaView__;
  (this->Duration).Ticks = 0;
  this->EventSink = param_1;
  (this->MediaUrl).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MediaUrl).Data.ArrayNum = 0;
  (this->MediaUrl).Data.ArrayMax = 0;
  this_00 = ::operator_new(0x170);
  pFVar8 = pFVar10;
  if (this_00 != (FWmfMediaSession *)0x0) {
    pFVar8 = FWmfMediaSession::FWmfMediaSession(this_00);
  }
  (this->Session).RawPointer = pFVar8;
  if (pFVar8 != (FWmfMediaSession *)0x0) {
    (**(code **)(*(longlong *)pFVar8 + 8))();
  }
  pFVar8 = ::operator_new(0x308);
  if (pFVar8 != (FWmfMediaSession *)0x0) {
    *(undefined4 *)&pFVar8->field_0x8 = 1;
    *(undefined4 *)&pFVar8->field_0xc = 1;
    *(undefined ***)pFVar8 =
         &___7__TIntrusiveReferenceController_VFWmfMediaTracks___00_SharedPointerInternals__6B_;
    FWmfMediaTracks::FWmfMediaTracks((FWmfMediaTracks *)&pFVar8->CanScrub);
    pFVar10 = pFVar8;
  }
  if ((&pFVar10->CanScrub == (bool *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FWmfMediaPlayer *)(*pcVar6)();
    return pFVar9;
  }
  (this->Tracks).Object = (FWmfMediaTracks *)&pFVar10->CanScrub;
  (this->Tracks).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
  if (pFVar10 != (FWmfMediaSession *)0x0) {
    LOCK();
    *(int *)&pFVar10->field_0x8 = *(int *)&pFVar10->field_0x8 + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  if (((this->Session).RawPointer == (FWmfMediaSession *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Session != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Player\\WmfMediaPlayer.cpp"
                         ,0x1f,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FWmfMediaPlayer *)(*pcVar6)();
    return pFVar9;
  }
  if (((this->Tracks).Object == (FWmfMediaTracks *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Tracks.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Player\\WmfMediaPlayer.cpp"
                         ,0x20,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FWmfMediaPlayer *)(*pcVar6)();
    return pFVar9;
  }
  if (((this->Session).RawPointer == (FWmfMediaSession *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FWmfMediaPlayer *)(*pcVar6)();
    return pFVar9;
  }
  pFVar8 = (this->Session).RawPointer;
  pFVar3 = (this->Tracks).Object;
  pTVar4 = (this->Tracks).SharedReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  (pFVar8->Tracks).Object = pFVar3;
  if (pTVar4 != (pFVar8->Tracks).WeakReferenceCount.ReferenceController) {
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (pFVar8->Tracks).WeakReferenceCount.ReferenceController;
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
    (pFVar8->Tracks).WeakReferenceCount.ReferenceController = pTVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (((this->Tracks).Object == (FWmfMediaTracks *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FWmfMediaPlayer *)(*pcVar6)();
    return pFVar9;
  }
  ((this->Tracks).Object)->Session = (this->Session).RawPointer;
  return this;
}

// ~<lambda_1> @ 14ea95f50

void __thiscall `FWmfMediaPlayer::InitializePlayer'::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0xf8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FMediaPlayerOptions::~FMediaPlayerOptions((FMediaPlayerOptions *)((longlong)this + 0x28));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~FWmfMediaPlayer @ 14ea97680

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FWmfMediaPlayer::~FWmfMediaPlayer(FWmfMediaPlayer *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FWmfMediaSession *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 local_18;
  undefined8 local_10;
  
  this->_padding_ = (longlong)&_vftable__for__IMediaPlayer__;
  this->_padding_ = (longlong)&_vftable__for__IMediaCache__;
  this->_padding_ = (longlong)&_vftable__for__IMediaView__;
  if (((this->Session).RawPointer == (FWmfMediaSession *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (**(code **)(*(longlong *)&((this->Session).RawPointer)->field_0x8 + 0x18))();
  if (iVar6 != 0) {
    if (((this->Session).RawPointer == (FWmfMediaSession *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FWmfMediaSession::Shutdown((this->Session).RawPointer);
    (this->Duration).Ticks = 0;
    local_18 = 0;
    local_10 = 0;
    pFVar1 = &this->MediaUrl;
    if (pFVar1 != (FString *)&local_18) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->MediaUrl).Data.ArrayNum = 0;
      (this->MediaUrl).Data.ArrayMax = 0;
    }
    if (((this->Tracks).Object == (FWmfMediaTracks *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FWmfMediaTracks::Shutdown((this->Tracks).Object);
    (**(code **)*this->EventSink)(this->EventSink,10);
    (**(code **)*this->EventSink)(this->EventSink,2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Tracks).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->Session).RawPointer;
  if (pFVar3 != (FWmfMediaSession *)0x0) {
    (**(code **)(*(longlong *)pFVar3 + 0x10))();
  }
  pFVar2 = (this->MediaUrl).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IMediaView__6B_;
  this->_padding_ = (longlong)&___7IMediaCache__6B_;
  this->_padding_ = (longlong)&___7IMediaPlayer__6B_;
  return;
}

// operator() @ 14ea98950

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall `FWmfMediaPlayer::InitializePlayer'::__l2::<lambda_1>::operator()(void *this)

{
  FWmfMediaTracks *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  FWmfMediaTracks *this_00;
  FWmfMediaTracks *pFVar5;
  bool bVar6;
  FArchive *local_res8;
  FString local_28;
  
  this_00 = (FWmfMediaTracks *)0x0;
  pFVar1 = *(FWmfMediaTracks **)((longlong)this + 0xf8);
  pFVar5 = pFVar1;
  if (pFVar1 != (FWmfMediaTracks *)0x0) {
    iVar3 = (int)pFVar1->_padding_;
    do {
      pFVar5 = this_00;
      if (iVar3 == 0) goto LAB_14ea989ad;
      LOCK();
      iVar4 = (int)pFVar1->_padding_;
      bVar6 = iVar3 == iVar4;
      if (bVar6) {
        *(int *)&pFVar1->_padding_ = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar6);
    pFVar5 = pFVar1;
    if (pFVar1 != (FWmfMediaTracks *)0x0) {
      this_00 = *(FWmfMediaTracks **)((longlong)this + 0xf0);
    }
  }
LAB_14ea989ad:
  if (this_00 != (FWmfMediaTracks *)0x0) {
    local_28.Data.AllocatorInstance.Data = *(FScriptContainerElement **)this;
    local_28.Data._8_8_ = *(longlong *)((longlong)this + 8);
    if (local_28.Data._8_8_ != 0) {
      LOCK();
      *(int *)(local_28.Data._8_8_ + 8) = *(int *)(local_28.Data._8_8_ + 8) + 1;
      UNLOCK();
    }
    WmfMedia::ResolveMediaSource
              ((TSharedPtr<FArchive,1> *)&local_res8,&local_28,(bool)((char)this + '\x10'));
    if ((this_00 == (FWmfMediaTracks *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FWmfMediaTracks::Initialize
              (this_00,(IMFMediaSource *)local_res8,(FString *)((longlong)this + 0x10),
               (FMediaPlayerOptions *)((longlong)this + 0x28));
    if (local_res8 != (FArchive *)0x0) {
      (**(code **)((longlong)*(IMFMediaSource *)local_res8 + 0x10))(local_res8);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return;
}

// Close @ 14eaa1480

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FWmfMediaPlayer::Close(FWmfMediaPlayer *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((this->Session).RawPointer == (FWmfMediaSession *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RawPointer != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                       ,0x9f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (**(code **)(*(longlong *)&((this->Session).RawPointer)->field_0x8 + 0x18))();
  if (iVar5 != 0) {
    if ((this->Session).RawPointer == (FWmfMediaSession *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FWmfMediaSession::Shutdown((this->Session).RawPointer);
    (this->Duration).Ticks = 0;
    local_18 = 0;
    uStack_10 = 0;
    pFVar1 = &this->MediaUrl;
    if (pFVar1 != (FString *)&local_18) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->MediaUrl).Data.ArrayNum = 0;
      (this->MediaUrl).Data.ArrayMax = 0;
    }
    uStack_10 = 0;
    local_18 = 0;
    if ((this->Tracks).Object == (FWmfMediaTracks *)0x0) {
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
    FWmfMediaTracks::Shutdown((this->Tracks).Object);
    (**(code **)*this->EventSink)(this->EventSink,10);
    (**(code **)*this->EventSink)(this->EventSink,2);
  }
  return;
}

// FlushOnSeekCompleted @ 14eaac030

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FWmfMediaPlayer::FlushOnSeekCompleted(FWmfMediaPlayer *this)

{
  return false;
}

// FlushOnSeekStarted @ 14eaac040

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FWmfMediaPlayer::FlushOnSeekStarted(FWmfMediaPlayer *this)

{
  return true;
}

// GetCache @ 14eaac9a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

IMediaCache * __thiscall FWmfMediaPlayer::GetCache(FWmfMediaPlayer *this)

{
  return (IMediaCache *)&this->_padding_;
}

// GetControls @ 14eaacea0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

IMediaControls * __thiscall FWmfMediaPlayer::GetControls(FWmfMediaPlayer *this)

{
  return (IMediaControls *)&((this->Session).RawPointer)->field_0x8;
}

// GetInfo @ 14eaad7a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FString * __thiscall FWmfMediaPlayer::GetInfo(FWmfMediaPlayer *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if ((this->Tracks).Object == (FWmfMediaTracks *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::FString(__return_storage_ptr__,&((this->Tracks).Object)->Info);
  return __return_storage_ptr__;
}

// GetPlayerFeatureFlag @ 14eaaec00

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FWmfMediaPlayer::GetPlayerFeatureFlag(FWmfMediaPlayer *this,EFeatureFlag param_1)

{
  if ((param_1 != UsePlaybackTimingV2) && (param_1 != PlayerUsesInternalFlushOnSeek)) {
    return false;
  }
  return true;
}

// GetPlayerPluginGUID @ 14eaaec20

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FGuid * __thiscall
FWmfMediaPlayer::GetPlayerPluginGUID(FWmfMediaPlayer *this,FGuid *__return_storage_ptr__)

{
  *__return_storage_ptr__ = PlayerPluginGUID;
  return __return_storage_ptr__;
}

// GetSamples @ 14eaaf0a0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

IMediaSamples * __thiscall FWmfMediaPlayer::GetSamples(FWmfMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  IMediaSamples *pIVar3;
  
  if ((this->Tracks).Object != (FWmfMediaTracks *)0x0) {
    return (IMediaSamples *)(this->Tracks).Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IMediaSamples *)(*pcVar1)();
    return pIVar3;
  }
  return (IMediaSamples *)(this->Tracks).Object;
}

// GetStats @ 14eaaff70

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FString * __thiscall
FWmfMediaPlayer::GetStats(FWmfMediaPlayer *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if ((this->Tracks).Object == (FWmfMediaTracks *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  FWmfMediaTracks::AppendStats((this->Tracks).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTracks @ 14eab1270

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

IMediaTracks * __thiscall FWmfMediaPlayer::GetTracks(FWmfMediaPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  IMediaTracks *pIVar3;
  
  if ((this->Tracks).Object == (FWmfMediaTracks *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IMediaTracks *)(*pcVar1)();
      return pIVar3;
    }
  }
  return (IMediaTracks *)&((this->Tracks).Object)->_padding_;
}

// GetUrl @ 14eab1350

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FString * __thiscall FWmfMediaPlayer::GetUrl(FWmfMediaPlayer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->MediaUrl);
  return __return_storage_ptr__;
}

// GetView @ 14eab1630

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

IMediaView * __thiscall FWmfMediaPlayer::GetView(FWmfMediaPlayer *this)

{
  return (IMediaView *)&this->_padding_;
}

// InitializePlayer @ 14eab3f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWmfMediaPlayer::InitializePlayer
          (FWmfMediaPlayer *this,TSharedPtr<FArchive,1> *param_1,FString *param_2,bool param_3,
          FMediaPlayerOptions *param_4)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  UObject *pUVar3;
  FWmfMediaTracks *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  UClass *this_00;
  longlong lVar13;
  undefined1 auStackY_2d8 [32];
  undefined1 local_268 [16];
  TUniqueFunction<void___cdecl(void)> local_258;
  FMediaPlayerTrackOptions local_228;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  EMediaPlayerOptionTrackSelectMode local_1c8;
  long64 local_1c0;
  undefined2 local_1b8;
  EMediaPlayerOptionBooleanOverride local_1b6;
  undefined1 local_1b0 [32];
  void *local_190;
  ulonglong local_188;
  undefined8 uStack_180;
  ForElementType<FSetElementId> local_170;
  int local_168;
  <lambda_1> local_158;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  if (5 < (byte)LogWmfMedia._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
  this_00 = Z_Construct_UClass_UWmfMediaSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar3 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((pUVar3 == (UObject *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Player\\WmfMediaPlayer.cpp"
                          ,0x108,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  if (((this->Session).RawPointer == (FWmfMediaSession *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("RawPointer != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                          ,0x9f,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  bVar12 = FWmfMediaSession::Initialize((this->Session).RawPointer,(bool)pUVar3[1].field_0x1);
  bVar10 = false;
  if (bVar12) {
    ::FString::operator=(&this->MediaUrl,param_2);
    local_228.Audio = ___xmm_ffffffffffffffffffffffff00000000;
    local_228.Caption = _UNK_15076cba4;
    local_228.Metadata = _UNK_15076cba8;
    local_228.Script = _UNK_15076cbac;
    local_228.Subtitle = -1;
    local_228.Text = -1;
    local_228.Video = 0;
    local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.Data.ArrayNum = 0;
    local_208.Data.ArrayMax = 0;
    local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.Data.ArrayNum = 0;
    local_1f8.Data.ArrayMax = 0;
    local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.Data.ArrayNum = 0;
    local_1e8.Data.ArrayMax = 0;
    local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.Data.ArrayNum = 0;
    local_1d8.Data.ArrayMax = 0;
    local_1c8 = UseTrackOptionIndices;
    local_1c0 = 0;
    local_1b8 = 1;
    local_1b6 = UseMediaPlayerSetting;
    local_1b0._0_8_ = (FScriptContainerElement *)0x0;
    local_1b0._8_8_ = 0;
    local_190 = (void *)0x0;
    local_188 = ___xmm_00000000ffffffff0000008000000000;
    uStack_180 = _UNK_150631d98;
    local_170 = (ForElementType<FSetElementId>)0x0;
    local_168 = 0;
    if (param_4 != (FMediaPlayerOptions *)0x0) {
      local_228.Audio = (param_4->Tracks).Audio;
      local_228.Caption = (param_4->Tracks).Caption;
      local_228.Metadata = (param_4->Tracks).Metadata;
      local_228.Script = (param_4->Tracks).Script;
      local_228.Subtitle = (param_4->Tracks).Subtitle;
      local_228.Text = (param_4->Tracks).Text;
      local_228.Video = (param_4->Tracks).Video;
      ::FString::operator=(&local_208,&(param_4->TracksByLanguage).Video);
      ::FString::operator=(&local_1f8,&(param_4->TracksByLanguage).Audio);
      ::FString::operator=(&local_1e8,&(param_4->TracksByLanguage).Subtitle);
      ::FString::operator=(&local_1d8,&(param_4->TracksByLanguage).Caption);
      local_1c8 = param_4->TrackSelection;
      local_1c0 = (param_4->SeekTime).Ticks;
      local_1b8._0_1_ = param_4->SeekTimeType;
      local_1b8._1_1_ = param_4->PlayOnOpen;
      local_1b6 = param_4->Loop;
      TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
                   *)local_1b0,
                  (TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
                   *)&param_4->InternalCustomOptions);
    }
    local_258._0_8_ = 0;
    local_258._40_8_ = 0;
    pFVar4 = (this->Tracks).Object;
    pTVar5 = (this->Tracks).SharedReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_158.Archive.Object = param_1->Object;
    local_158.Archive.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_158.Archive.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_158.Archive.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_158.Archive.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    ::FString::FString(&local_158.Url,param_2);
    FVar9.Data = local_208.Data.AllocatorInstance.Data;
    local_158.LocalPlayerOptions.Tracks.Audio = local_228.Audio;
    local_158.LocalPlayerOptions.Tracks.Caption = local_228.Caption;
    local_158.LocalPlayerOptions.Tracks.Metadata = local_228.Metadata;
    local_158.LocalPlayerOptions.Tracks.Script = local_228.Script;
    local_158.LocalPlayerOptions.Tracks.Subtitle = local_228.Subtitle;
    local_158.LocalPlayerOptions.Tracks.Text = local_228.Text;
    local_158.LocalPlayerOptions.Tracks.Video = local_228.Video;
    local_158.LocalPlayerOptions.TracksByLanguage.Video.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    lVar13 = (longlong)local_208.Data.ArrayNum;
    local_158.LocalPlayerOptions.TracksByLanguage.Video.Data.ArrayNum = local_208.Data.ArrayNum;
    local_158.Precache = param_3;
    if (local_208.Data.ArrayNum == 0) {
      local_158.LocalPlayerOptions.TracksByLanguage.Video.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_208.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_158.LocalPlayerOptions.TracksByLanguage,
                 local_208.Data.ArrayNum,
                 (int *)((longlong)&local_158.LocalPlayerOptions.TracksByLanguage.Video.Data + 0xc))
      ;
      memcpy(local_158.LocalPlayerOptions.TracksByLanguage.Video.Data.AllocatorInstance.Data,
             FVar9.Data,lVar13 * 2);
    }
    FVar9.Data = local_1f8.Data.AllocatorInstance.Data;
    local_158.LocalPlayerOptions.TracksByLanguage.Audio.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    lVar13 = (longlong)local_1f8.Data.ArrayNum;
    local_158.LocalPlayerOptions.TracksByLanguage.Audio.Data.ArrayNum = local_1f8.Data.ArrayNum;
    if (local_1f8.Data.ArrayNum == 0) {
      local_158.LocalPlayerOptions.TracksByLanguage.Audio.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1f8.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_158.LocalPlayerOptions.TracksByLanguage.Audio,
                 local_1f8.Data.ArrayNum,
                 (int *)((longlong)&local_158.LocalPlayerOptions.TracksByLanguage.Audio.Data + 0xc))
      ;
      memcpy(local_158.LocalPlayerOptions.TracksByLanguage.Audio.Data.AllocatorInstance.Data,
             FVar9.Data,lVar13 * 2);
    }
    FVar9.Data = local_1e8.Data.AllocatorInstance.Data;
    local_158.LocalPlayerOptions.TracksByLanguage.Subtitle.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    lVar13 = (longlong)local_1e8.Data.ArrayNum;
    local_158.LocalPlayerOptions.TracksByLanguage.Subtitle.Data.ArrayNum = local_1e8.Data.ArrayNum;
    if (local_1e8.Data.ArrayNum == 0) {
      local_158.LocalPlayerOptions.TracksByLanguage.Subtitle.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1e8.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_158.LocalPlayerOptions.TracksByLanguage.Subtitle,
                 local_1e8.Data.ArrayNum,
                 (int *)((longlong)&local_158.LocalPlayerOptions.TracksByLanguage.Subtitle.Data +
                        0xc));
      memcpy(local_158.LocalPlayerOptions.TracksByLanguage.Subtitle.Data.AllocatorInstance.Data,
             FVar9.Data,lVar13 * 2);
    }
    FVar9.Data = local_1d8.Data.AllocatorInstance.Data;
    local_158.LocalPlayerOptions.TracksByLanguage.Caption.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    lVar13 = (longlong)local_1d8.Data.ArrayNum;
    local_158.LocalPlayerOptions.TracksByLanguage.Caption.Data.ArrayNum = local_1d8.Data.ArrayNum;
    if (local_1d8.Data.ArrayNum == 0) {
      local_158.LocalPlayerOptions.TracksByLanguage.Caption.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1d8.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_158.LocalPlayerOptions.TracksByLanguage.Caption,
                 local_1d8.Data.ArrayNum,
                 (int *)((longlong)&local_158.LocalPlayerOptions.TracksByLanguage.Caption.Data + 0xc
                        ));
      memcpy(local_158.LocalPlayerOptions.TracksByLanguage.Caption.Data.AllocatorInstance.Data,
             FVar9.Data,lVar13 * 2);
    }
    local_158.LocalPlayerOptions.TrackSelection = local_1c8;
    local_158.LocalPlayerOptions.SeekTime.Ticks = local_1c0;
    local_158.LocalPlayerOptions.SeekTimeType = (EMediaPlayerOptionSeekTimeType)local_1b8;
    local_158.LocalPlayerOptions.PlayOnOpen = local_1b8._1_1_;
    local_158.LocalPlayerOptions.Loop = local_1b6;
    local_158.LocalPlayerOptions.InternalCustomOptions._0_8_ = 0;
    local_158.LocalPlayerOptions.InternalCustomOptions._8_8_ = 0;
    local_158.LocalPlayerOptions.InternalCustomOptions._32_8_ = 0;
    local_158.LocalPlayerOptions.InternalCustomOptions._40_4_ = 0;
    local_158.LocalPlayerOptions.InternalCustomOptions._44_4_ = 0x80;
    local_158.LocalPlayerOptions.InternalCustomOptions._48_4_ = 0xffffffff;
    local_158.LocalPlayerOptions.InternalCustomOptions._52_4_ = 0;
    local_158.LocalPlayerOptions.InternalCustomOptions._64_8_ = 0;
    local_158.LocalPlayerOptions.InternalCustomOptions._72_4_ = 0;
    TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
                 *)&local_158.LocalPlayerOptions.InternalCustomOptions,
                (TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
                 *)local_1b0);
    local_158.TracksPtr.Object = pFVar4;
    local_158.TracksPtr.WeakReferenceCount.ReferenceController = pTVar5;
    Async<_FWmfMediaPlayer::InitializePlayer_::__l2::<lambda_1>_>
              ((TFuture<void> *)local_268,(param_3 ^ 1) * 2 + Thread,&local_158,&local_258);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_268._8_8_);
    if (local_158.TracksPtr.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_158.TracksPtr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_158.TracksPtr.WeakReferenceCount.ReferenceController)->_padding_ + 8))()
        ;
      }
    }
    FMediaPlayerOptions::~FMediaPlayerOptions(&local_158.LocalPlayerOptions);
    if (local_158.Url.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Url.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.Archive.SharedReferenceCount.ReferenceController);
    local_168 = 0;
    if (local_170 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_170);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_1b0,0,local_1b0._8_4_);
    iVar7 = SUB84(local_1b0._8_8_,4);
    local_1b0._8_8_ = local_1b0._8_8_ & 0xffffffff00000000;
    if (iVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_1b0,0,(int *)(local_1b0 + 0xc));
    }
    uStack_180 = 0xffffffff;
    uVar8 = local_188 >> 0x20;
    local_188 = local_188 & 0xffffffff00000000;
    if (0x80 < (uint)uVar8) {
      local_188 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_1b0 + 0x10),0);
    }
    if (local_190 != (void *)0x0) {
      FMemory::Free(local_190);
    }
    if ((FScriptContainerElement *)local_1b0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1b0._0_8_);
    }
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    bVar10 = true;
  }
  return bVar10;
}

// Open @ 14eab84f0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWmfMediaPlayer::Open
          (FWmfMediaPlayer *this,TSharedRef<FArchive,1> *param_1,FString *param_2,
          IMediaOptions *param_3)

{
  bool bVar1;
  longlong lVar2;
  FStaticBasicLogRecord *pFVar3;
  TSharedPtr<FArchive,1> local_18;
  
  (**(code **)this->_padding_)();
  lVar2 = (**(code **)(*(longlong *)param_1->Object + 0x30))();
  if (lVar2 == 0) {
    if ((byte)LogWmfMedia._0_1_ < 6) {
      return false;
    }
    pFVar3 = &::LOG_Static;
  }
  else {
    if (1 < (param_2->Data).ArrayNum) {
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
      bVar1 = InitializePlayer(this,&local_18,param_2,false,(FMediaPlayerOptions *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return bVar1;
    }
    if ((byte)LogWmfMedia._0_1_ < 6) {
      return false;
    }
    pFVar3 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<6>(pFVar3,(FLogCategoryBase *)&LogWmfMedia);
  return false;
}

// Open @ 14eab85d0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall FWmfMediaPlayer::Open(FWmfMediaPlayer *this,FString *param_1,IMediaOptions *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014eab85d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x50))();
  return (bool)uVar1;
}

// Open @ 14eab85e0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

bool __thiscall
FWmfMediaPlayer::Open
          (FWmfMediaPlayer *this,FString *param_1,IMediaOptions *param_2,
          FMediaPlayerOptions *param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  FName local_res8;
  TSharedPtr<FArchive,1> local_28;
  
  (**(code **)this->_padding_)();
  if ((param_1->Data).ArrayNum < 2) {
    bVar3 = false;
  }
  else {
    if (param_2 == (IMediaOptions *)0x0) {
      uVar2 = false;
    }
    else {
      pcVar1 = *(code **)((longlong)*param_2 + 0x30);
      ::FName::FName(&local_res8,"PrecacheFile");
      uVar2 = (*pcVar1)(param_2,&local_res8,0);
    }
    local_28.Object = (FArchive *)0x0;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar3 = InitializePlayer(this,&local_28,param_1,(bool)uVar2,param_3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return bVar3;
}

// Tick @ 14eac1aa0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FWmfMediaPlayer::Tick(FWmfMediaPlayer *this)

{
  FWindowsRecursiveMutex *pFVar1;
  bool bVar2;
  FWmfMediaTracks *pFVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  UClass *pUVar10;
  FString *pFVar11;
  FWmfMediaSession *pFVar12;
  FTimespan FVar13;
  wchar_t *pwVar14;
  TComPtr<IMFTopology> local_res10 [2];
  FString local_38;
  
  bVar8 = false;
  if (((this->Tracks).Object == (FWmfMediaTracks *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (this->Tracks).Object;
  pFVar1 = &pFVar3->CriticalSection;
  if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_14eac1eb6;
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
  bVar6 = pFVar3->MediaSourceChanged;
  bVar2 = pFVar3->SelectionChanged;
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  if (bVar6 != false) {
    (**(code **)*this->EventSink)();
  }
  if (bVar2 != false) {
    bVar7 = FWindowsPlatformMisc::VerifyWindowsVersion(10,0,0);
    if (bVar7) {
      pUVar10 = Z_Construct_UClass_UWmfMediaSettings_NoRegister();
      if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar10);
      }
      if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x3 != '\0') {
        pFVar11 = FHardwareInfo::GetHardwareInfo(&local_38,NAME_RHI);
        bVar8 = true;
        if ((pFVar11->Data).ArrayNum == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
        iVar9 = FGenericPlatformStricmp::Stricmp(pwVar14,"D3D11");
        if (iVar9 == 0) goto LAB_14eac1bf8;
      }
      pUVar10 = Z_Construct_UClass_UWmfMediaSettings_NoRegister();
      if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar10);
      }
      if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x4 != '\0')
      goto LAB_14eac1bf8;
      pFVar12 = TComPtr<FWmfMediaSession>::operator->(&this->Session);
      iVar9 = (**(code **)(*(longlong *)&pFVar12->field_0x8 + 0x18))();
      if (iVar9 == 1) goto LAB_14eac1bf8;
      bVar7 = false;
    }
    else {
LAB_14eac1bf8:
      bVar7 = true;
    }
    if ((bVar8) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pUVar10 = Z_Construct_UClass_UWmfMediaSettings_NoRegister();
      if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar10);
      }
      pUVar4 = (pUVar10->ClassDefaultObject).field0_0x0.DebugPtr;
      if ((pUVar4 == (UObject *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Settings != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WmfMedia\\Source\\WmfMedia\\Private\\Player\\WmfMediaPlayer.cpp"
                             ,0xba,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((this->Session).RawPointer == (FWmfMediaSession *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FWmfMediaSession::Initialize((this->Session).RawPointer,(bool)pUVar4[1].field_0x1);
      if (((this->Tracks).Object == (FWmfMediaTracks *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FWmfMediaTracks::ReInitialize((this->Tracks).Object);
    }
    if (((this->Tracks).Object == (FWmfMediaTracks *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (this->Tracks).Object;
    if ((pFVar3->MediaSource).RawPointer != (IMFMediaSource *)0x0) {
      if ((pFVar3 == (FWmfMediaTracks *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FWmfMediaTracks::CreateTopology((this->Tracks).Object);
      if (((this->Session).RawPointer == (FWmfMediaSession *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPointer != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                             ,0x9f,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar12 = (this->Session).RawPointer;
      if (((this->Tracks).Object == (FWmfMediaTracks *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar13 = FWmfMediaTracks::GetDuration((this->Tracks).Object);
                    /* WARNING: Load size is inaccurate */
      bVar8 = FWmfMediaSession::SetTopology(pFVar12,local_res10,(FTimespan)*FVar13.Ticks);
      if (local_res10[0].RawPointer != (IMFTopology *)0x0) {
        (**(code **)((longlong)*local_res10[0].RawPointer + 0x10))();
      }
      if (bVar8) goto LAB_14eac1e3e;
    }
    if (((this->Session).RawPointer == (FWmfMediaSession *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawPointer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                           ,0x9f,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FWmfMediaSession::Shutdown((this->Session).RawPointer);
    (**(code **)*this->EventSink)(this->EventSink,5);
  }
LAB_14eac1e3e:
  if ((bVar6 != false) || (bVar2 != false)) {
    if (((this->Tracks).Object == (FWmfMediaTracks *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (this->Tracks).Object;
    pFVar1 = &pFVar3->CriticalSection;
    if (pFVar1 == (FWindowsRecursiveMutex *)0x0) {
LAB_14eac1eb6:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    pFVar3->MediaSourceChanged = false;
    pFVar3->SelectionChanged = false;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
  }
  return;
}

// TickInput @ 14eac1ed0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
FWmfMediaPlayer::TickInput(FWmfMediaPlayer *this,FTimespan param_1,FTimespan param_2)

{
  FScriptContainerElement *pFVar1;
  FWmfMediaSession *pFVar2;
  TNode *pTVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TNode *pTVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  EMediaEvent local_38 [2];
  ForAnyElementType local_30;
  uint local_28;
  uint auStack_24 [3];
  
  Tick(this);
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  auStack_24[0] = 0;
  if (((this->Session).RawPointer == (FWmfMediaSession *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RawPointer != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Microsoft\\COMPointer.h"
                         ,0x9f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (this->Session).RawPointer;
  if (pFVar2->bIsWaitingForEnd != false) {
    pFVar2->bIsWaitingForEnd = false;
    pTVar7 = ::operator_new(0x10);
    if (pTVar7 != (TNode *)0x0) {
      pTVar7->NextNode = (TNode *)0x0;
      pTVar7->Item = PlaybackEndReached;
      pTVar3 = (pFVar2->DeferredEvents).Head;
      (pFVar2->DeferredEvents).Head = pTVar7;
      pTVar3->NextNode = pTVar7;
    }
  }
  while( true ) {
    uVar5 = local_28;
    pTVar7 = ((pFVar2->DeferredEvents).Tail)->NextNode;
    if (pTVar7 == (TNode *)0x0) {
      uVar8 = (ulonglong)(int)local_28;
      pFVar1 = local_30.Data + uVar8 * 4;
      FVar9.Data = local_30.Data;
      while( true ) {
        if ((uint)uVar8 != uVar5) {
          `TCheckedPointerIterator<enum_EMediaEvent,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (FVar9.Data == pFVar1) break;
        (**(code **)*this->EventSink)(this->EventSink,*(EMediaEvent *)FVar9.Data);
        FVar9.Data = FVar9.Data + 4;
        uVar8 = (ulonglong)local_28;
      }
      if (local_30.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data);
      }
      return;
    }
    local_38[0] = pTVar7->Item;
    pTVar3 = (pFVar2->DeferredEvents).Tail;
    (pFVar2->DeferredEvents).Tail = pTVar7;
    pTVar7->Item = MediaBuffering;
    ::operator_delete(pTVar3,0x10);
    if (((local_30.Data <= (FScriptContainerElement *)local_38) &&
        ((FScriptContainerElement *)local_38 < local_30.Data + (longlong)(int)auStack_24[0] * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) break;
    if (local_28 == auStack_24[0]) {
      local_28 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_30,(int *)auStack_24);
    }
    *(EMediaEvent *)(local_30.Data + (longlong)(int)local_28 * 4) = local_38[0];
    local_28 = local_28 + 1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

