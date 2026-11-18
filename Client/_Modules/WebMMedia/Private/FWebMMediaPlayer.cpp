// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMedia
// Functions: 46

// FWebMMediaPlayer @ 14f119d10

FWebMMediaPlayer * __thiscall
FWebMMediaPlayer::FWebMMediaPlayer(FWebMMediaPlayer *this,IMediaEventSink *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWebMMediaPlayer *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  this->EventSink = param_1;
  this->_padding_ = (longlong)&_vftable__for__IMediaPlayer__;
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  (this->OutEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IWebMSamplesSink__;
  (this->OutEvents).ArrayNum = 0;
  (this->OutEvents).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__IMediaCache__;
  this->_padding_ = (longlong)&_vftable__for__IMediaControls__;
  this->_padding_ = (longlong)&_vftable__for__IMediaTracks__;
  this->_padding_ = (longlong)&_vftable__for__IMediaView__;
  pTVar3 = ::operator_new(0x290);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->Samples).Object = (FMediaSamples *)0x10;
    (this->Samples).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFMediaSamples___00_SharedPointerInternals__6B_;
    FMediaSamples::FMediaSamples((FMediaSamples *)(pTVar3 + 1),4,4,4,4,4);
    if ((FMediaSamples *)(pTVar3 + 1) == (FMediaSamples *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FWebMMediaPlayer *)(*pcVar1)();
        return pFVar4;
      }
    }
    (this->Samples).Object = (FMediaSamples *)(pTVar3 + 1);
    (this->Samples).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  (this->VideoDecoder).Ptr = (FWebMVideoDecoder *)0x0;
  (this->AudioDecoder).Ptr = (FWebMAudioDecoder *)0x0;
  (this->VideoTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VideoTracks).ArrayNum = 0;
  (this->VideoTracks).ArrayMax = 0;
  (this->AudioTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioTracks).ArrayNum = 0;
  (this->AudioTracks).ArrayMax = 0;
  (this->MkvReader).Ptr = (FMkvFileReader *)0x0;
  (this->MkvSegment).Ptr = (Segment *)0x0;
  (this->MediaUrl).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MediaUrl).Data.ArrayNum = 0;
  (this->MediaUrl).Data.ArrayMax = 0;
  (this->CurrentTime).Ticks = 0;
  this->bNoMoreToRead = false;
  this->bLooping = false;
  this->MkvCurrentCluster = (Cluster *)0x0;
  this->MkvCurrentBlockEntry = (BlockEntry *)0x0;
  this->CurrentState = Closed;
  this->SelectedAudioTrack = -1;
  this->SelectedVideoTrack = -1;
  return this;
}

// ~FWebMMediaPlayer @ 14f11a330

void __thiscall FWebMMediaPlayer::~FWebMMediaPlayer(FWebMMediaPlayer *this)

{
  FScriptContainerElement *pFVar1;
  Segment *this_00;
  FMkvFileReader *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__IMediaPlayer__;
  this->_padding_ = (longlong)&_vftable__for__IWebMSamplesSink__;
  this->_padding_ = (longlong)&_vftable__for__IMediaCache__;
  this->_padding_ = (longlong)&_vftable__for__IMediaControls__;
  this->_padding_ = (longlong)&_vftable__for__IMediaTracks__;
  this->_padding_ = (longlong)&_vftable__for__IMediaView__;
  Close(this);
  pFVar1 = (this->MediaUrl).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this_00 = (this->MkvSegment).Ptr;
  if (this_00 != (Segment *)0x0) {
    mkvparser::Segment::~Segment(this_00);
    ::operator_delete(this_00,0xb8);
  }
  pFVar2 = (this->MkvReader).Ptr;
  if (pFVar2 != (FMkvFileReader *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x10))(pFVar2,1);
  }
  pFVar1 = (this->AudioTracks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VideoTracks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDefaultDelete<FWebMAudioDecoder>::operator()
            ((TDefaultDelete<FWebMAudioDecoder> *)&this->AudioDecoder,(this->AudioDecoder).Ptr);
  TDefaultDelete<FWebMVideoDecoder>::operator()
            ((TDefaultDelete<FWebMVideoDecoder> *)&this->VideoDecoder,(this->VideoDecoder).Ptr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Samples).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->OutEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMediaView__6B_;
  this->_padding_ = (longlong)&___7IMediaTracks__6B_;
  this->_padding_ = (longlong)&___7IMediaControls__6B_;
  this->_padding_ = (longlong)&___7IMediaCache__6B_;
  this->_padding_ = (longlong)&___7IWebMSamplesSink__6B_;
  this->_padding_ = (longlong)&___7IMediaPlayer__6B_;
  return;
}

// AddAudioSampleFromDecodingThread @ 14f11ba70

void __thiscall
FWebMMediaPlayer::AddAudioSampleFromDecodingThread
          (FWebMMediaPlayer *this,TSharedRef<FWebMMediaAudioSample,1> *param_1)

{
  FMediaSamples *this_00;
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  TSharedRef<IMediaAudioSample,1> local_28;
  undefined1 local_18 [16];
  
  plVar3 = (longlong *)(**(code **)(param_1->Object->_padding_ + 0x30))(param_1->Object,local_18);
  if (*(longlong *)&this->SelectedVideoTrack <= *plVar3) {
    if (this->EventSink == (IMediaEventSink *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_28.Object = (IMediaAudioSample *)param_1->Object;
    this_00 = (FMediaSamples *)this->EventSink;
    local_28.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FMediaSamples::AddAudio(this_00,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddVideoSampleFromDecodingThread @ 14f11bb20

void __thiscall
FWebMMediaPlayer::AddVideoSampleFromDecodingThread
          (FWebMMediaPlayer *this,TSharedRef<FWebMMediaTextureSample,1> *param_1)

{
  FMediaSamples *this_00;
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  TSharedRef<IMediaTextureSample,1> local_28;
  undefined1 local_18 [16];
  
  plVar3 = (longlong *)(**(code **)(param_1->Object->_padding_ + 0x60))(param_1->Object,local_18);
  if (*(longlong *)&this->SelectedVideoTrack <= *plVar3) {
    if (this->EventSink == (IMediaEventSink *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_28.Object = (IMediaTextureSample *)param_1->Object;
    this_00 = (FMediaSamples *)this->EventSink;
    local_28.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FMediaSamples::AddVideo(this_00,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// CanControl @ 14f11bce0

bool __thiscall FWebMMediaPlayer::CanControl(FWebMMediaPlayer *this,EMediaControl param_1)

{
  if (param_1 == Pause) {
    return *(int *)&this->MkvCurrentBlockEntry == 3;
  }
  if (param_1 == Resume) {
    if ((*(int *)&this->MkvCurrentBlockEntry != 3) && (*(int *)&this->MkvCurrentBlockEntry != 5)) {
      return false;
    }
  }
  else {
    if (param_1 != Seek) {
      return false;
    }
    if (*(int *)&this->MkvCurrentBlockEntry == 0) {
      return false;
    }
    if (*(int *)&this->MkvCurrentBlockEntry == 1) {
      return false;
    }
  }
  return true;
}

// Close @ 14f11be30

void __thiscall FWebMMediaPlayer::Close(FWebMMediaPlayer *this)

{
  int *piVar1;
  FWebMVideoDecoder *pFVar2;
  FWebMAudioDecoder *pFVar3;
  FMkvFileReader *pFVar4;
  Segment *this_00;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined4 local_18;
  undefined4 local_14 [3];
  
  pFVar2 = (this->VideoDecoder).Ptr;
  if (pFVar2 != (FWebMVideoDecoder *)0x0) {
    (this->VideoDecoder).Ptr = (FWebMVideoDecoder *)0x0;
    TDefaultDelete<FWebMVideoDecoder>::operator()
              ((TDefaultDelete<FWebMVideoDecoder> *)&this->VideoDecoder,pFVar2);
  }
  pFVar3 = (this->AudioDecoder).Ptr;
  if (pFVar3 != (FWebMAudioDecoder *)0x0) {
    (this->AudioDecoder).Ptr = (FWebMAudioDecoder *)0x0;
    TDefaultDelete<FWebMAudioDecoder>::operator()
              ((TDefaultDelete<FWebMAudioDecoder> *)&this->AudioDecoder,pFVar3);
  }
  piVar1 = &(this->VideoTracks).ArrayMax;
  (this->VideoTracks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->VideoTracks).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->AudioTracks).ArrayMax;
  (this->AudioTracks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AudioTracks).AllocatorInstance,0,piVar1);
  }
  pFVar4 = (this->MkvReader).Ptr;
  if (pFVar4 != (FMkvFileReader *)0x0) {
    (this->MkvReader).Ptr = (FMkvFileReader *)0x0;
    (**(code **)(pFVar4->_padding_ + 0x10))(pFVar4,1);
  }
  this_00 = (this->MkvSegment).Ptr;
  if (this_00 != (Segment *)0x0) {
    (this->MkvSegment).Ptr = (Segment *)0x0;
    mkvparser::Segment::~Segment(this_00);
    ::operator_delete(this_00,0xb8);
  }
  this->MkvCurrentCluster = (Cluster *)0x0;
  this->MkvCurrentBlockEntry = (BlockEntry *)0x0;
  ::FString::Empty(&this->MediaUrl);
  this->SelectedAudioTrack = -1;
  this->SelectedVideoTrack = -1;
  (this->CurrentTime).Ticks = 0;
  this->bNoMoreToRead = false;
  this->bLooping = false;
  if (this->CurrentState != Closed) {
    this->CurrentState = Closed;
    pFVar5 = (this->OutEvents).AllocatorInstance.Data;
    local_18 = 10;
    if ((pFVar5 <= (FScriptContainerElement *)&local_18) &&
       ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)(this->OutEvents).ArrayMax * 4)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (this->OutEvents).ArrayNum;
    if (iVar8 == (this->OutEvents).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->OutEvents).AllocatorInstance,&(this->OutEvents).ArrayMax);
    }
    (this->OutEvents).ArrayNum = iVar8 + 1;
    local_14[0] = 2;
    *(undefined4 *)((this->OutEvents).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_18;
    pFVar5 = (this->OutEvents).AllocatorInstance.Data;
    if ((pFVar5 <= (FScriptContainerElement *)local_14) &&
       ((FScriptContainerElement *)local_14 < pFVar5 + (longlong)(this->OutEvents).ArrayMax * 4)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (this->OutEvents).ArrayNum;
    if (iVar8 == (this->OutEvents).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->OutEvents).AllocatorInstance,&(this->OutEvents).ArrayMax);
    }
    (this->OutEvents).ArrayNum = iVar8 + 1;
    *(undefined4 *)((this->OutEvents).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_14[0];
  }
  return;
}

// GetAudioTrackFormat @ 14f11e920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FWebMMediaPlayer::GetAudioTrackFormat
          (FWebMMediaPlayer *this,int param_1,int param_2,FMediaAudioTrackFormat *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  __int64 _Var6;
  char *pcVar7;
  TStringConversion<FUTF8ToTCHAR_Convert,128> *pTVar8;
  longlong lVar9;
  uint uVar10;
  double dVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_188;
  lVar9 = (longlong)param_1;
  if (((param_1 < 0) || (param_2 < 1)) || (*(int *)&(this->AudioDecoder).Ptr <= param_1)) {
    bVar3 = false;
  }
  else {
    iVar1 = *(int *)&(this->AudioDecoder).Ptr;
    uVar10 = (uint)~param_1 >> 0x1f;
    uVar5 = 0;
    if (param_1 < iVar1) {
      uVar5 = uVar10;
    }
    if (uVar5 == 0) {
      local_168 = lVar9;
      local_160 = (longlong)iVar1;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    _Var6 = mkvparser::AudioTrack::GetBitDepth
                      ((AudioTrack *)(&(((this->VideoDecoder).Ptr)->Context).name)[lVar9]);
    param_3->BitsPerSample = (uint)_Var6;
    iVar1 = *(int *)&(this->AudioDecoder).Ptr;
    uVar5 = 0;
    if (param_1 < iVar1) {
      uVar5 = uVar10;
    }
    if (uVar5 == 0) {
      local_168 = lVar9;
      local_160 = (longlong)iVar1;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    _Var6 = mkvparser::AudioTrack::GetChannels
                      ((AudioTrack *)(&(((this->VideoDecoder).Ptr)->Context).name)[lVar9]);
    param_3->NumChannels = (uint)_Var6;
    iVar1 = *(int *)&(this->AudioDecoder).Ptr;
    uVar5 = 0;
    if (param_1 < iVar1) {
      uVar5 = uVar10;
    }
    if (uVar5 == 0) {
      local_168 = lVar9;
      local_160 = (longlong)iVar1;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    dVar11 = mkvparser::AudioTrack::GetSamplingRate
                       ((AudioTrack *)(&(((this->VideoDecoder).Ptr)->Context).name)[lVar9]);
    param_3->SampleRate = (uint)(longlong)dVar11;
    iVar1 = *(int *)&(this->AudioDecoder).Ptr;
    uVar5 = 0;
    if (param_1 < iVar1) {
      uVar5 = uVar10;
    }
    if (uVar5 == 0) {
      local_168 = lVar9;
      local_160 = (longlong)iVar1;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pcVar7 = mkvparser::Track::GetCodecNameAsUTF8
                       ((Track *)(&(((this->VideoDecoder).Ptr)->Context).name)[lVar9]);
    pTVar8 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
             TStringConversion<FUTF8ToTCHAR_Convert,128>(&local_158,pcVar7);
    ::FString::operator=(&param_3->TypeName,pTVar8->Ptr);
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
    bVar3 = true;
  }
  return bVar3;
}

// GetCache @ 14f11eb50

IMediaCache * __thiscall FWebMMediaPlayer::GetCache(FWebMMediaPlayer *this)

{
  return (IMediaCache *)&this->_padding_;
}

// GetControls @ 14f11eb70

IMediaControls * __thiscall FWebMMediaPlayer::GetControls(FWebMMediaPlayer *this)

{
  return (IMediaControls *)&this->_padding_;
}

// GetDuration @ 14f11ed50

FTimespan __thiscall FWebMMediaPlayer::GetDuration(FWebMMediaPlayer *this)

{
  __int64 _Var1;
  longlong *in_RDX;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar2 [16];
  
  if ((*(int *)&this->MkvCurrentBlockEntry != 1) && (*(int *)&this->MkvCurrentBlockEntry != 0)) {
    _Var1 = mkvparser::Segment::GetDuration((Segment *)(this->AudioTracks).AllocatorInstance.Data);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (double)_Var1 * __real_3f847ae147ae147b + __real_3fe0000000000000;
    auVar2 = roundpd(extraout_XMM0,auVar2,1);
    *in_RDX = (longlong)auVar2._0_8_;
    return (FTimespan)(long64)in_RDX;
  }
  *in_RDX = 0;
  return (FTimespan)(long64)in_RDX;
}

// GetInfo @ 14f11ee20

FString * __thiscall
FWebMMediaPlayer::GetInfo(FWebMMediaPlayer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"WebMMedia information not implemented yet");
  return __return_storage_ptr__;
}

// GetNumTrackFormats @ 14f11ee50

int __thiscall
FWebMMediaPlayer::GetNumTrackFormats(FWebMMediaPlayer *this,EMediaTrackType param_1,int param_2)

{
  return 1;
}

// GetNumTracks @ 14f11ee60

int __thiscall FWebMMediaPlayer::GetNumTracks(FWebMMediaPlayer *this,EMediaTrackType param_1)

{
  if (param_1 == Audio) {
    return *(int *)&(this->AudioDecoder).Ptr;
  }
  if (param_1 == Video) {
    return *(int *)&(this->Samples).SharedReferenceCount.ReferenceController;
  }
  return 0;
}

// GetPlayerPluginGUID @ 14f11efa0

FGuid * __thiscall
FWebMMediaPlayer::GetPlayerPluginGUID(FWebMMediaPlayer *this,FGuid *__return_storage_ptr__)

{
  *__return_storage_ptr__ = PlayerPluginGUID;
  return __return_storage_ptr__;
}

// GetRate @ 14f11efc0

float __thiscall FWebMMediaPlayer::GetRate(FWebMMediaPlayer *this)

{
  if (*(int *)&this->MkvCurrentBlockEntry == 3) {
    return __real_3f800000;
  }
  return 0.0;
}

// GetSamples @ 14f11eff0

IMediaSamples * __thiscall FWebMMediaPlayer::GetSamples(FWebMMediaPlayer *this)

{
  return (IMediaSamples *)(this->Samples).Object;
}

// GetSelectedTrack @ 14f11f000

int __thiscall FWebMMediaPlayer::GetSelectedTrack(FWebMMediaPlayer *this,EMediaTrackType param_1)

{
  if (param_1 == Audio) {
    return *(int *)((longlong)&this->MkvCurrentCluster + 4);
  }
  if (param_1 == Video) {
    return *(int *)&this->MkvCurrentBlockEntry;
  }
  return -1;
}

// GetState @ 14f11f030

EMediaState __thiscall FWebMMediaPlayer::GetState(FWebMMediaPlayer *this)

{
  return *(EMediaState *)&this->MkvCurrentBlockEntry;
}

// GetStats @ 14f11f040

FString * __thiscall
FWebMMediaPlayer::GetStats(FWebMMediaPlayer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"WebMMedia stats information not implemented yet");
  return __return_storage_ptr__;
}

// GetStatus @ 14f11f070

EMediaStatus __thiscall FWebMMediaPlayer::GetStatus(FWebMMediaPlayer *this)

{
  return None;
}

// GetSupportedRates @ 14f11f0b0

TRangeSet<float> * __thiscall
FWebMMediaPlayer::GetSupportedRates
          (FWebMMediaPlayer *this,TRangeSet<float> *__return_storage_ptr__,
          EMediaRateThinning param_1)

{
  TRange<float> local_18;
  
  local_18.LowerBound.Type.Value = '\x01';
  local_18.LowerBound = (TRangeBound<float>)((ulonglong)local_18.LowerBound & 0xffffffff);
  local_18.UpperBound.Value = 0.0;
  local_18.UpperBound._1_3_ = local_18.UpperBound._1_3_;
  local_18.UpperBound.Type.Value = '\x01';
  (__return_storage_ptr__->Ranges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Ranges).ArrayNum = 0;
  (__return_storage_ptr__->Ranges).ArrayMax = 0;
  TRangeSet<float>::Add(__return_storage_ptr__,&local_18);
  local_18.LowerBound.Type.Value = '\x01';
  local_18.LowerBound.Value = 1.0;
  local_18.UpperBound.Type.Value = '\x01';
  local_18.UpperBound.Value = 1.0;
  TRangeSet<float>::Add(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// GetTime @ 14f11f190

FTimespan __thiscall FWebMMediaPlayer::GetTime(FWebMMediaPlayer *this)

{
  undefined8 *in_RDX;
  
  if ((*(int *)&this->MkvCurrentBlockEntry != 0) && (*(int *)&this->MkvCurrentBlockEntry != 1)) {
    *in_RDX = *(undefined8 *)&(this->MediaUrl).Data.ArrayNum;
    return (FTimespan)(long64)in_RDX;
  }
  *in_RDX = 0;
  return (FTimespan)(long64)in_RDX;
}

// GetTrackDisplayName @ 14f11f1e0

FText * __thiscall
FWebMMediaPlayer::GetTrackDisplayName
          (FWebMMediaPlayer *this,FText *__return_storage_ptr__,EMediaTrackType param_1,int param_2)

{
  FString *pFVar1;
  void *local_18 [2];
  
  pFVar1 = (FString *)(**(code **)(this->_padding_ + 0x38))(this,local_18);
  FText::FromString(__return_storage_ptr__,pFVar1);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// GetTrackFormat @ 14f11f220

int __thiscall
FWebMMediaPlayer::GetTrackFormat(FWebMMediaPlayer *this,EMediaTrackType param_1,int param_2)

{
  return 0;
}

// GetTrackLanguage @ 14f11f230

FString * __thiscall
FWebMMediaPlayer::GetTrackLanguage
          (FWebMMediaPlayer *this,FString *__return_storage_ptr__,EMediaTrackType param_1,
          int param_2)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&Language,L"Default");
      atexit(`FWebMMediaPlayer::GetTrackLanguage'::__l2::_dynamic_atexit_destructor_for__Language__)
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  _Src = Language.Data.AllocatorInstance;
  iVar2 = Language.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar2 * 2);
  return __return_storage_ptr__;
}

// GetTrackName @ 14f11f330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FWebMMediaPlayer::GetTrackName
          (FWebMMediaPlayer *this,FString *__return_storage_ptr__,EMediaTrackType param_1,
          int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  char *pcVar6;
  TStringConversion<FUTF8ToTCHAR_Convert,128> *pTVar7;
  longlong lVar8;
  undefined1 auStack_2f8 [32];
  longlong local_2d8;
  longlong local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_278;
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  lVar8 = (longlong)param_2;
  ::FString::FString(__return_storage_ptr__,L"None");
  if (param_2 != -1) {
    if (param_1 == Audio) {
      if (*(int *)&(this->AudioDecoder).Ptr <= param_2) {
        return __return_storage_ptr__;
      }
      iVar1 = *(int *)&(this->AudioDecoder).Ptr;
      uVar4 = 0;
      if (param_2 < iVar1) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (local_2d8 = lVar8, local_2d0 = (longlong)iVar1,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
      pcVar6 = mkvparser::Track::GetNameAsUTF8
                         ((Track *)(&(((this->VideoDecoder).Ptr)->Context).name)[lVar8]);
      if (pcVar6 == (char *)0x0) {
        ::FString::PrintfImpl(&local_2c0,L"Track %d");
        ::FString::operator=(__return_storage_ptr__,&local_2c0);
      }
      else {
        iVar1 = *(int *)&(this->AudioDecoder).Ptr;
        uVar4 = 0;
        if (param_2 < iVar1) {
          uVar4 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (local_2d8 = lVar8, local_2d0 = (longlong)iVar1,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FString *)(*pcVar2)();
          return pFVar5;
        }
        pcVar6 = mkvparser::Track::GetNameAsUTF8
                           ((Track *)(&(((this->VideoDecoder).Ptr)->Context).name)[lVar8]);
        pTVar7 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
                 TStringConversion<FUTF8ToTCHAR_Convert,128>(&local_278,pcVar6);
        pFVar5 = ::FString::FString(&local_2a0,pTVar7->Ptr);
        ::FString::operator=(__return_storage_ptr__,pFVar5);
        local_2c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_278._padding_;
        if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
          local_2c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_278._padding_;
        }
      }
    }
    else {
      if (param_1 != Video) {
        return __return_storage_ptr__;
      }
      if (*(int *)&(this->Samples).SharedReferenceCount.ReferenceController <= param_2) {
        return __return_storage_ptr__;
      }
      iVar1 = *(int *)&(this->Samples).SharedReferenceCount.ReferenceController;
      uVar4 = 0;
      if (param_2 < iVar1) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (local_2d8 = lVar8, local_2d0 = (longlong)iVar1,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
      pcVar6 = mkvparser::Track::GetNameAsUTF8
                         ((Track *)(&((this->Samples).Object)->_padding_)[lVar8]);
      if (pcVar6 == (char *)0x0) {
        ::FString::PrintfImpl(&local_2b0,L"Track %d");
        ::FString::operator=(__return_storage_ptr__,&local_2b0);
        local_2c0.Data.AllocatorInstance.Data = local_2b0.Data.AllocatorInstance.Data;
      }
      else {
        iVar1 = *(int *)&(this->Samples).SharedReferenceCount.ReferenceController;
        uVar4 = 0;
        if (param_2 < iVar1) {
          uVar4 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (local_2d8 = lVar8, local_2d0 = (longlong)iVar1,
           bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FString *)(*pcVar2)();
          return pFVar5;
        }
        pcVar6 = mkvparser::Track::GetNameAsUTF8
                           ((Track *)(&((this->Samples).Object)->_padding_)[lVar8]);
        pTVar7 = TStringConversion<FUTF8ToTCHAR_Convert,128>::
                 TStringConversion<FUTF8ToTCHAR_Convert,128>(&local_158,pcVar6);
        pFVar5 = ::FString::FString(&local_290,pTVar7->Ptr);
        ::FString::operator=(__return_storage_ptr__,pFVar5);
        local_2c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_158._padding_;
        if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_290.Data.AllocatorInstance.Data);
          local_2c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_158._padding_;
        }
      }
    }
    if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetTracks @ 14f11f610

IMediaTracks * __thiscall FWebMMediaPlayer::GetTracks(FWebMMediaPlayer *this)

{
  return (IMediaTracks *)&this->_padding_;
}

// GetUrl @ 14f11f620

FString * __thiscall
FWebMMediaPlayer::GetUrl(FWebMMediaPlayer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->MediaUrl);
  return __return_storage_ptr__;
}

// GetVideoTrackFormat @ 14f11f6c0

bool __thiscall
FWebMMediaPlayer::GetVideoTrackFormat
          (FWebMMediaPlayer *this,int param_1,int param_2,FMediaVideoTrackFormat *param_3)

{
  FString *pFVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TIntPoint<int>_u_0 TVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  __int64 _Var9;
  __int64 _Var10;
  char *pcVar11;
  uint uVar12;
  double dVar13;
  FString local_40;
  undefined4 local_30;
  uint uStack_28;
  
  if (((param_2 != 0) || (param_1 == -1)) ||
     (*(int *)&(this->Samples).SharedReferenceCount.ReferenceController <= param_1)) {
    return false;
  }
  uVar12 = (uint)~param_1 >> 0x1f;
  uVar8 = 0;
  if (param_1 < *(int *)&(this->Samples).SharedReferenceCount.ReferenceController) {
    uVar8 = uVar12;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  _Var9 = mkvparser::VideoTrack::GetHeight
                    ((VideoTrack *)(&((this->Samples).Object)->_padding_)[param_1]);
  uVar8 = 0;
  if (param_1 < *(int *)&(this->Samples).SharedReferenceCount.ReferenceController) {
    uVar8 = uVar12;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  _Var10 = mkvparser::VideoTrack::GetWidth
                     ((VideoTrack *)(&((this->Samples).Object)->_padding_)[param_1]);
  TVar5._s_0.Y = (int)_Var9;
  TVar5._s_0.X = (int)_Var10;
  (param_3->Dim).field0_0x0 = TVar5;
  uVar8 = 0;
  if (param_1 < *(int *)&(this->Samples).SharedReferenceCount.ReferenceController) {
    uVar8 = uVar12;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  dVar13 = mkvparser::VideoTrack::GetFrameRate
                     ((VideoTrack *)(&((this->Samples).Object)->_padding_)[param_1]);
  param_3->FrameRate = (float)dVar13;
  uVar8 = 0;
  if (param_1 < *(int *)&(this->Samples).SharedReferenceCount.ReferenceController) {
    uVar8 = uVar12;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pcVar11 = mkvparser::Track::GetCodecNameAsUTF8
                      ((Track *)(&((this->Samples).Object)->_padding_)[param_1]);
  ::FString::FString(&local_40,pcVar11);
  pFVar1 = &param_3->TypeName;
  if (pFVar1 != &local_40) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_40.Data.AllocatorInstance.Data;
    (param_3->TypeName).Data.ArrayNum = local_40.Data.ArrayNum;
    (param_3->TypeName).Data.ArrayMax = local_40.Data.ArrayMax;
    local_40.Data.ArrayNum = 0;
    local_40.Data.ArrayMax = 0;
    local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  fVar2 = param_3->FrameRate;
  local_30 = CONCAT31(local_30._1_3_,1);
  uStack_28 = uStack_28 & 0xffffff00;
  *(undefined4 *)&(param_3->FrameRates).LowerBound = local_30;
  (param_3->FrameRates).LowerBound.Value = fVar2;
  *(uint *)&(param_3->FrameRates).UpperBound = uStack_28;
  (param_3->FrameRates).UpperBound.Value = fVar2;
  return true;
}

// GetView @ 14f11f930

IMediaView * __thiscall FWebMMediaPlayer::GetView(FWebMMediaPlayer *this)

{
  return (IMediaView *)&this->_padding_;
}

// IsLooping @ 14f11ffe0

bool __thiscall FWebMMediaPlayer::IsLooping(FWebMMediaPlayer *this)

{
  return (bool)*(byte *)((longlong)&this->CurrentState + 1);
}

// MkvRead @ 14f1200c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWebMMediaPlayer::MkvRead(FWebMMediaPlayer *this)

{
  uint uVar1;
  int *piVar2;
  Segment *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  EBMLHeader *this_01;
  __int64 _Var10;
  Tracks *this_02;
  Track *this_03;
  char *pcVar11;
  uchar *puVar12;
  size_t sVar13;
  FStaticBasicLogRecord *pFVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  uint uVar17;
  ulong uVar18;
  undefined1 auStack_448 [32];
  Track **local_428;
  FScriptContainerElement *local_420;
  longlong local_418;
  longlong local_410;
  undefined8 local_408;
  Track *local_3f8;
  Track *local_3f0;
  __int64 local_3e8;
  TUniquePtr<mkvparser::Segment,TDefaultDelete<mkvparser::Segment>_> local_3e0;
  EBMLHeader local_3d8;
  FScriptContainerElement local_398 [256];
  ForAnyElementType local_298;
  FScriptContainerElement *local_290;
  int local_288;
  FScriptContainerElement local_278 [256];
  ForAnyElementType local_178;
  FScriptContainerElement *local_170;
  int local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_448;
  uVar18 = 0;
  local_3e8 = 0;
  this_01 = (EBMLHeader *)mkvparser::EBMLHeader::EBMLHeader(&local_3d8);
  _Var10 = mkvparser::EBMLHeader::Parse(this_01,(IMkvReader *)(this->MkvReader).Ptr,&local_3e8);
  mkvparser::EBMLHeader::~EBMLHeader(&local_3d8);
  if ((_Var10 == 0) &&
     (_Var10 = mkvparser::Segment::CreateInstance
                         ((IMkvReader *)(this->MkvReader).Ptr,local_3e8,&local_3e0.Ptr), _Var10 == 0
     )) {
    this_00 = (this->MkvSegment).Ptr;
    if ((this_00 != local_3e0.Ptr) &&
       ((this->MkvSegment).Ptr = local_3e0.Ptr, this_00 != (Segment *)0x0)) {
      mkvparser::Segment::~Segment(this_00);
      ::operator_delete(this_00,0xb8);
    }
    lVar7 = mkvparser::Segment::Load((this->MkvSegment).Ptr);
    if (-1 < lVar7) {
      this_02 = mkvparser::Segment::GetTracks((this->MkvSegment).Ptr);
      uVar8 = mkvparser::Tracks::GetTracksCount(this_02);
      if (uVar8 == 0) {
        if ((byte)LogWebMMedia._0_1_ < 3) {
          return false;
        }
        pFVar14 = &::LOG_Static;
      }
      else {
        if (0 < (int)uVar8) {
          do {
            this_03 = mkvparser::Tracks::GetTrackByIndex(this_02,uVar18);
            if ((this_03 == (Track *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Track",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Private\\Player\\WebMMediaPlayer.cpp"
                                   ,0x286,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            lVar7 = mkvparser::Track::GetType(this_03);
            if (lVar7 == 1) {
              pcVar11 = mkvparser::Track::GetCodecId(this_03);
              iVar9 = strcmp(pcVar11,"V_VP8");
              if (iVar9 != 0) {
                pcVar11 = mkvparser::Track::GetCodecId(this_03);
                iVar9 = strcmp(pcVar11,"V_VP9");
                if (iVar9 != 0) {
                  if ((byte)LogWebMMedia._0_1_ < 3) goto LAB_14f1206b2;
                  puVar12 = (uchar *)mkvparser::Track::GetCodecId(this_03);
                  local_298.Data = (FScriptContainerElement *)0x0;
                  if (puVar12 == (uchar *)0x0) {
                    local_290 = (FScriptContainerElement *)0x0;
                    local_288 = 0;
                  }
                  else {
                    sVar13 = strlen((char *)puVar12);
                    local_288 = UE::Core::Private::GetConvertedLength
                                          ((wchar_t *)0x0,puVar12,(int)sVar13);
                    uVar1 = local_288 + 1;
                    uVar17 = uVar1;
                    if (uVar1 < 0x81) {
                      if (local_298.Data != (FScriptContainerElement *)0x0) {
                        uVar17 = 0;
                        goto LAB_14f1202d0;
                      }
                    }
                    else {
LAB_14f1202d0:
                      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                (&local_298,0,uVar17,2);
                    }
                    local_290 = local_398;
                    if (local_298.Data != (FScriptContainerElement *)0x0) {
                      local_290 = local_298.Data;
                    }
                    UE::Core::Private::Convert((wchar_t *)local_290,uVar1,puVar12,(int)sVar13 + 1);
                  }
                  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWebMMedia)
                  ;
                  FVar15.Data = local_298.Data;
LAB_14f1206a8:
                  if (FVar15.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(FVar15.Data);
                  }
                  goto LAB_14f1206b2;
                }
              }
              pFVar3 = (this->VideoTracks).AllocatorInstance.Data;
              local_3f8 = this_03;
              if ((pFVar3 <= (FScriptContainerElement *)&local_3f8) &&
                 (lVar16 = (longlong)(this->VideoTracks).ArrayMax,
                 (FScriptContainerElement *)&local_3f8 < pFVar3 + lVar16 * 8)) {
                local_410 = (longlong)(this->VideoTracks).ArrayNum;
                local_408 = 8;
                local_428 = &local_3f8;
                local_420 = pFVar3;
                local_418 = lVar16;
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
              }
              iVar9 = (this->VideoTracks).ArrayNum;
              piVar2 = &(this->VideoTracks).ArrayMax;
              if (iVar9 == *piVar2) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&(this->VideoTracks).AllocatorInstance,piVar2);
              }
              (this->VideoTracks).ArrayNum = iVar9 + 1;
              *(Track **)((this->VideoTracks).AllocatorInstance.Data + (longlong)iVar9 * 8) =
                   local_3f8;
            }
            else {
              lVar7 = mkvparser::Track::GetType(this_03);
              if (lVar7 == 2) {
                pcVar11 = mkvparser::Track::GetCodecId(this_03);
                iVar9 = strcmp(pcVar11,"A_OPUS");
                if (iVar9 != 0) {
                  pcVar11 = mkvparser::Track::GetCodecId(this_03);
                  iVar9 = strcmp(pcVar11,"A_VORBIS");
                  if (iVar9 != 0) {
                    if ((byte)LogWebMMedia._0_1_ < 3) goto LAB_14f1206b2;
                    puVar12 = (uchar *)mkvparser::Track::GetCodecId(this_03);
                    local_178.Data = (FScriptContainerElement *)0x0;
                    if (puVar12 == (uchar *)0x0) {
                      local_170 = (FScriptContainerElement *)0x0;
                      local_168 = 0;
                    }
                    else {
                      sVar13 = strlen((char *)puVar12);
                      local_168 = UE::Core::Private::GetConvertedLength
                                            ((wchar_t *)0x0,puVar12,(int)sVar13);
                      uVar1 = local_168 + 1;
                      uVar17 = uVar1;
                      if (uVar1 < 0x81) {
                        if (local_178.Data != (FScriptContainerElement *)0x0) {
                          uVar17 = 0;
                          goto LAB_14f12049f;
                        }
                      }
                      else {
LAB_14f12049f:
                        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                  (&local_178,0,uVar17,2);
                      }
                      local_170 = local_278;
                      if (local_178.Data != (FScriptContainerElement *)0x0) {
                        local_170 = local_178.Data;
                      }
                      UE::Core::Private::Convert((wchar_t *)local_170,uVar1,puVar12,(int)sVar13 + 1)
                      ;
                    }
                    UE::Logging::Private::BasicLog<3>
                              (&::LOG_Static,(FLogCategoryBase *)&LogWebMMedia);
                    FVar15.Data = local_178.Data;
                    goto LAB_14f1206a8;
                  }
                }
                pFVar3 = (this->AudioTracks).AllocatorInstance.Data;
                local_3f0 = this_03;
                if ((pFVar3 <= (FScriptContainerElement *)&local_3f0) &&
                   (lVar16 = (longlong)(this->AudioTracks).ArrayMax,
                   (FScriptContainerElement *)&local_3f0 < pFVar3 + lVar16 * 8)) {
                  local_410 = (longlong)(this->AudioTracks).ArrayNum;
                  local_408 = 8;
                  local_428 = &local_3f0;
                  local_420 = pFVar3;
                  local_418 = lVar16;
                  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    );
                  if (bVar5) {
                    pcVar4 = (code *)swi(3);
                    uVar6 = (*pcVar4)();
                    return (bool)uVar6;
                  }
                }
                iVar9 = (this->AudioTracks).ArrayNum;
                piVar2 = &(this->AudioTracks).ArrayMax;
                if (iVar9 == *piVar2) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&(this->AudioTracks).AllocatorInstance,piVar2);
                }
                (this->AudioTracks).ArrayNum = iVar9 + 1;
                *(Track **)((this->AudioTracks).AllocatorInstance.Data + (longlong)iVar9 * 8) =
                     local_3f0;
              }
              else if (2 < (byte)LogWebMMedia._0_1_) {
                puVar12 = (uchar *)mkvparser::Track::GetCodecId(this_03);
                local_58.Data = (FScriptContainerElement *)0x0;
                if (puVar12 == (uchar *)0x0) {
                  local_50 = (FScriptContainerElement *)0x0;
                  local_48 = 0;
                }
                else {
                  sVar13 = strlen((char *)puVar12);
                  local_48 = UE::Core::Private::GetConvertedLength
                                       ((wchar_t *)0x0,puVar12,(int)sVar13);
                  uVar1 = local_48 + 1;
                  uVar17 = uVar1;
                  if (uVar1 < 0x81) {
                    if (local_58.Data != (FScriptContainerElement *)0x0) {
                      uVar17 = 0;
                      goto LAB_14f120634;
                    }
                  }
                  else {
LAB_14f120634:
                    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                              (&local_58,0,uVar17,2);
                  }
                  local_50 = local_158;
                  if (local_58.Data != (FScriptContainerElement *)0x0) {
                    local_50 = local_58.Data;
                  }
                  UE::Core::Private::Convert((wchar_t *)local_50,uVar1,puVar12,(int)sVar13 + 1);
                }
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWebMMedia);
                FVar15.Data = local_58.Data;
                goto LAB_14f1206a8;
              }
            }
LAB_14f1206b2:
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 < (int)uVar8);
        }
        if (((this->VideoTracks).ArrayNum != 0) && ((this->AudioTracks).ArrayNum != 0)) {
          return true;
        }
        if ((byte)LogWebMMedia._0_1_ < 3) {
          return false;
        }
        pFVar14 = &::LOG_Static;
      }
      UE::Logging::Private::BasicLog<3>(pFVar14,(FLogCategoryBase *)&LogWebMMedia);
    }
  }
  return false;
}

// MkvSeekToNextValidBlock @ 14f120740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWebMMediaPlayer::MkvSeekToNextValidBlock(FWebMMediaPlayer *this)

{
  BlockEntry **ppBVar1;
  Segment *this_00;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  Cluster *pCVar5;
  FStaticBasicLogRecord *pFVar6;
  
  ppBVar1 = &this->MkvCurrentBlockEntry;
  do {
    if (this->MkvCurrentCluster == (Cluster *)0x0) {
      pCVar5 = mkvparser::Segment::GetFirst((this->MkvSegment).Ptr);
      this->MkvCurrentCluster = pCVar5;
      *ppBVar1 = (BlockEntry *)0x0;
      if ((pCVar5 == (Cluster *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("MkvCurrentCluster",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Private\\Player\\WebMMediaPlayer.cpp"
                             ,0x2b8,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((*ppBVar1 == (BlockEntry *)0x0) || (bVar3 = mkvparser::BlockEntry::EOS(*ppBVar1), bVar3)) {
      lVar4 = mkvparser::Cluster::GetFirst(this->MkvCurrentCluster,ppBVar1);
      if (lVar4 != 0) {
        if (2 < (byte)LogWebMMedia._0_1_) {
          pFVar6 = &::LOG_Static;
          goto LAB_14f120886;
        }
        break;
      }
    }
    else {
      lVar4 = mkvparser::Cluster::GetNext(this->MkvCurrentCluster,*ppBVar1,ppBVar1);
      if (lVar4 != 0) {
        if (2 < (byte)LogWebMMedia._0_1_) {
          pFVar6 = &::LOG_Static;
LAB_14f120886:
          UE::Logging::Private::BasicLog<3>(pFVar6,(FLogCategoryBase *)&LogWebMMedia);
        }
        break;
      }
    }
    if ((*ppBVar1 != (BlockEntry *)0x0) && (bVar3 = mkvparser::BlockEntry::EOS(*ppBVar1), !bVar3)) {
      return;
    }
    this_00 = (this->MkvSegment).Ptr;
    *ppBVar1 = (BlockEntry *)0x0;
    pCVar5 = mkvparser::Segment::GetNext(this_00,this->MkvCurrentCluster);
    this->MkvCurrentCluster = pCVar5;
    if ((pCVar5 == (Cluster *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("MkvCurrentCluster",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Private\\Player\\WebMMediaPlayer.cpp"
                           ,0x2d2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = mkvparser::Cluster::EOS(this->MkvCurrentCluster);
  } while (!bVar3);
  this->bNoMoreToRead = true;
  return;
}

// MkvSeekToTime @ 14f1208c0

void __thiscall FWebMMediaPlayer::MkvSeekToTime(FWebMMediaPlayer *this,FTimespan *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  Cluster *pCVar4;
  double dVar5;
  
  lVar3 = 0;
  dVar5 = (double)param_1->Ticks * __real_4059000000000000;
  if ((__real_43e0000000000000 <= dVar5) &&
     (dVar5 = dVar5 - __real_43e0000000000000, dVar5 < __real_43e0000000000000)) {
    lVar3 = -0x8000000000000000;
  }
  pCVar4 = mkvparser::Segment::FindCluster((this->MkvSegment).Ptr,(longlong)dVar5 + lVar3);
  this->MkvCurrentCluster = pCVar4;
  this->MkvCurrentBlockEntry = (BlockEntry *)0x0;
  if ((this->Samples).Object == (FMediaSamples *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014f12095f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->Samples).Object)->_padding_ + 0x50))();
  return;
}

// Open @ 14f1211b0

bool __thiscall
FWebMMediaPlayer::Open
          (FWebMMediaPlayer *this,TSharedRef<FArchive,1> *param_1,FString *param_2,
          IMediaOptions *param_3)

{
  return false;
}

// Open @ 14f1211c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWebMMediaPlayer::Open(FWebMMediaPlayer *this,FString *param_1,IMediaOptions *param_2)

{
  int *piVar1;
  FString *pFVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FMkvFileReader *pFVar6;
  AudioTrack *this_00;
  FWebMAudioDecoder *this_01;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  FWebMVideoDecoder *pFVar13;
  FWebMVideoDecoder *this_02;
  TNode *pTVar14;
  FWebMVideoDecoder *pFVar15;
  TNode *pTVar16;
  uchar *puVar17;
  __int64 _Var18;
  char *pcVar19;
  FStaticBasicLogRecord *pFVar20;
  ForAnyElementType FVar21;
  FWebMVideoDecoder *pFVar22;
  TUniquePtr<FWebMVideoDecoder,TDefaultDelete<FWebMVideoDecoder>_> *this_03;
  TRawPtrProxy<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage>
  local_res20;
  undefined4 local_68;
  undefined4 local_64;
  TRawPtrProxy<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage>
  local_60;
  ulong64 local_58;
  FString local_50;
  
  if (this->CurrentState == Error) {
    return false;
  }
  (**(code **)this->_padding_)();
  iVar12 = (param_1->Data).ArrayNum;
  if (iVar12 < 2) {
    return false;
  }
  pFVar2 = &this->MediaUrl;
  if (pFVar2 != param_1) {
    pFVar5 = (param_1->Data).AllocatorInstance.Data;
    piVar1 = &(this->MediaUrl).Data.ArrayMax;
    iVar3 = *piVar1;
    (this->MediaUrl).Data.ArrayNum = iVar12;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar12,iVar3,(ForAnyElementType *)pFVar2,iVar12,piVar1);
    memcpy((pFVar2->Data).AllocatorInstance.Data,pFVar5,(longlong)iVar12 * 2);
  }
  bVar9 = ::FString::StartsWith(param_1,L"file://",7,IgnoreCase);
  if (!bVar9) {
    if ((byte)LogWebMMedia._0_1_ < 2) {
      return false;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWebMMedia);
    return false;
  }
  ::FString::RightChop(param_1,&local_50,7);
  FPaths::NormalizeFilename(&local_50);
  pFVar13 = ::operator_new(0x10);
  pFVar22 = (FWebMVideoDecoder *)0x0;
  pFVar15 = pFVar22;
  if (pFVar13 != (FWebMVideoDecoder *)0x0) {
    (pFVar13->Context).iface = (vpx_codec_iface *)0x0;
    (pFVar13->Context).name = (char *)&___7FMkvFileReader__6B_;
    pFVar15 = pFVar13;
  }
  pFVar13 = (FWebMVideoDecoder *)(this->MkvReader).Ptr;
  if ((pFVar13 != pFVar15) &&
     ((this->MkvReader).Ptr = (FMkvFileReader *)pFVar15, pFVar13 != (FWebMVideoDecoder *)0x0)) {
    (**(code **)((pFVar13->Context).name + 0x10))(pFVar13,1);
  }
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_50.Data.ArrayNum != 0) {
    FVar21.Data = local_50.Data.AllocatorInstance.Data;
  }
  bVar9 = FMkvFileReader::Open((this->MkvReader).Ptr,(wchar_t *)FVar21.Data);
  if (bVar9) {
    bVar9 = MkvRead(this);
    if (bVar9) {
      pFVar13 = ::operator_new(0x70);
      pFVar15 = pFVar22;
      if (pFVar13 != (FWebMVideoDecoder *)0x0) {
        this_02 = ::operator_new(0x10);
        if (this_02 != (FWebMVideoDecoder *)0x0) {
          local_res20.Object = ::operator_new(0x60);
          if (local_res20.Object == (TStorage *)0x0) {
            local_res20.Object = (TStorage *)0x0;
          }
          else {
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)local_res20.Object,4000);
            ((local_res20.Object)->Pool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            ((local_res20.Object)->Pool).ArrayNum = 0;
            ((local_res20.Object)->Pool).ArrayMax = 0;
            pTVar14 = ::operator_new(0x10);
            if (pTVar14 == (TNode *)0x0) {
              ((local_res20.Object)->WaitReadyForReuse).Tail = (TNode *)0x0;
              ((local_res20.Object)->WaitReadyForReuse).Head = (TNode *)0x0;
              (local_res20.Object)->ObjectAllocatorInstance =
                   (TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample> *)0x0;
            }
            else {
              pTVar14->NextNode = (TNode *)0x0;
              pTVar14->Item = (FWebMMediaTextureSample *)0x0;
              pTVar14->NextNode = (TNode *)0x0;
              ((local_res20.Object)->WaitReadyForReuse).Tail = pTVar14;
              ((local_res20.Object)->WaitReadyForReuse).Head = pTVar14;
              (local_res20.Object)->ObjectAllocatorInstance =
                   (TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample> *)0x0;
            }
          }
          TSharedRef<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage,1>
          ::
          TSharedRef<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage,1><TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage>
                    ((TSharedRef<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage,1>
                      *)this_02,&local_res20);
          pFVar15 = this_02;
        }
        (pFVar13->VideoSamplePool).Ptr = (FWebMMediaTextureSamplePool *)pFVar15;
        pFVar13->Samples = (IWebMSamplesSink *)&this->_padding_;
        (pFVar13->DecodedY).Reference = (FRHITexture *)0x0;
        (pFVar13->DecodedU).Reference = (FRHITexture *)0x0;
        (pFVar13->DecodedV).Reference = (FRHITexture *)0x0;
        (pFVar13->VideoDecodingTask).Reference = (FBaseGraphTask *)0x0;
        pFVar13->bTexturesCreated = false;
        pFVar13->bIsInitialized = false;
        pFVar15 = pFVar13;
      }
      this_03 = &this->VideoDecoder;
      pFVar13 = this_03->Ptr;
      if (pFVar13 != pFVar15) {
        this_03->Ptr = pFVar15;
        TDefaultDelete<FWebMVideoDecoder>::operator()
                  ((TDefaultDelete<FWebMVideoDecoder> *)this_03,pFVar13);
      }
      pFVar15 = ::operator_new(0x48);
      if (pFVar15 != (FWebMVideoDecoder *)0x0) {
        pFVar13 = ::operator_new(0x10);
        if (pFVar13 != (FWebMVideoDecoder *)0x0) {
          local_60.Object = ::operator_new(0x60);
          if (local_60.Object == (TStorage *)0x0) {
            local_60.Object = (TStorage *)0x0;
          }
          else {
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)local_60.Object,4000);
            ((local_60.Object)->Pool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            ((local_60.Object)->Pool).ArrayNum = 0;
            ((local_60.Object)->Pool).ArrayMax = 0;
            pTVar16 = ::operator_new(0x10);
            if (pTVar16 == (TNode *)0x0) {
              ((local_60.Object)->WaitReadyForReuse).Tail = (TNode *)0x0;
              ((local_60.Object)->WaitReadyForReuse).Head = (TNode *)0x0;
              (local_60.Object)->ObjectAllocatorInstance =
                   (TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample> *)0x0;
            }
            else {
              pTVar16->NextNode = (TNode *)0x0;
              pTVar16->Item = (FWebMMediaAudioSample *)0x0;
              pTVar16->NextNode = (TNode *)0x0;
              ((local_60.Object)->WaitReadyForReuse).Tail = pTVar16;
              ((local_60.Object)->WaitReadyForReuse).Head = pTVar16;
              (local_60.Object)->ObjectAllocatorInstance =
                   (TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample> *)0x0;
            }
          }
          TSharedRef<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage,1>
          ::
          TSharedRef<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage,1><TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage>
                    ((TSharedRef<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage,1>
                      *)pFVar13,&local_60);
          pFVar22 = pFVar13;
        }
        (pFVar15->Context).name = (char *)pFVar22;
        (pFVar15->Context).iface = (vpx_codec_iface *)0x0;
        *(undefined8 *)&(pFVar15->Context).err = 0;
        (pFVar15->Context).err_detail = (char *)0x0;
        *(undefined8 *)&(pFVar15->Context).init_flags = 0;
        (pFVar15->Context).config.dec = (vpx_codec_dec_cfg *)&this->_padding_;
        (pFVar15->Context).priv = (vpx_codec_priv *)0x0;
        pFVar22 = pFVar15;
      }
      pFVar15 = (FWebMVideoDecoder *)(this->AudioDecoder).Ptr;
      if (pFVar15 != pFVar22) {
        (this->AudioDecoder).Ptr = (FWebMAudioDecoder *)pFVar22;
        TDefaultDelete<FWebMAudioDecoder>::operator()
                  ((TDefaultDelete<FWebMAudioDecoder> *)&this->AudioDecoder,
                   (FWebMAudioDecoder *)pFVar15);
      }
      uVar4 = this->SelectedAudioTrack;
      if (uVar4 != 0xffffffff) {
        uVar11 = 0;
        if ((int)uVar4 < (this->AudioTracks).ArrayNum) {
          uVar11 = ~uVar4 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        this_00 = *(AudioTrack **)
                   ((this->AudioTracks).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
        puVar17 = mkvparser::Track::GetCodecPrivate((Track *)this_00,&local_58);
        this_01 = (this->AudioDecoder).Ptr;
        _Var18 = mkvparser::AudioTrack::GetChannels(this_00);
        dVar8 = mkvparser::AudioTrack::GetSamplingRate(this_00);
        pcVar19 = mkvparser::Track::GetCodecId((Track *)this_00);
        FWebMAudioDecoder::Initialize(this_01,pcVar19,(int)dVar8,(int)_Var18,puVar17,local_58);
      }
      uVar4 = this->SelectedVideoTrack;
      if (uVar4 != 0xffffffff) {
        uVar11 = 0;
        if ((int)uVar4 < (this->VideoTracks).ArrayNum) {
          uVar11 = ~uVar4 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        pFVar15 = (this->VideoDecoder).Ptr;
        pcVar19 = mkvparser::Track::GetCodecId
                            (*(Track **)
                              ((this->VideoTracks).AllocatorInstance.Data + (longlong)(int)uVar4 * 8
                              ));
        FWebMVideoDecoder::Initialize(pFVar15,pcVar19);
      }
      this->CurrentState = Stopped;
      this->bNoMoreToRead = false;
      pFVar5 = (this->OutEvents).AllocatorInstance.Data;
      local_68 = 10;
      if (((pFVar5 <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 < pFVar5 + (longlong)(this->OutEvents).ArrayMax * 4)
          ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      iVar12 = (this->OutEvents).ArrayNum;
      if (iVar12 == (this->OutEvents).ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(this->OutEvents).AllocatorInstance,&(this->OutEvents).ArrayMax);
      }
      (this->OutEvents).ArrayNum = iVar12 + 1;
      local_64 = 4;
      *(undefined4 *)((this->OutEvents).AllocatorInstance.Data + (longlong)iVar12 * 4) = local_68;
      pFVar5 = (this->OutEvents).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_64) &&
          ((FScriptContainerElement *)&local_64 < pFVar5 + (longlong)(this->OutEvents).ArrayMax * 4)
          ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      iVar12 = (this->OutEvents).ArrayNum;
      if (iVar12 == (this->OutEvents).ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(this->OutEvents).AllocatorInstance,&(this->OutEvents).ArrayMax);
      }
      bVar9 = true;
      (this->OutEvents).ArrayNum = iVar12 + 1;
      *(undefined4 *)((this->OutEvents).AllocatorInstance.Data + (longlong)iVar12 * 4) = local_64;
      goto LAB_14f1217eb;
    }
    pFVar6 = (this->MkvReader).Ptr;
    if (pFVar6 != (FMkvFileReader *)0x0) {
      (this->MkvReader).Ptr = (FMkvFileReader *)0x0;
      (**(code **)(pFVar6->_padding_ + 0x10))(pFVar6,1);
    }
    if (1 < (byte)LogWebMMedia._0_1_) {
      pFVar20 = &::LOG_Static;
      goto LAB_14f121384;
    }
  }
  else if (1 < (byte)LogWebMMedia._0_1_) {
    pFVar20 = &::LOG_Static;
LAB_14f121384:
    UE::Logging::Private::BasicLog<2>(pFVar20,(FLogCategoryBase *)&LogWebMMedia);
  }
  bVar9 = false;
LAB_14f1217eb:
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return bVar9;
}

// Pause @ 14f121820

void __thiscall FWebMMediaPlayer::Pause(FWebMMediaPlayer *this)

{
  TArray<EMediaEvent,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined4 local_18 [4];
  
  pTVar1 = &this->OutEvents;
  this->CurrentState = Paused;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_18[0] = 8;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->OutEvents).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OutEvents).ArrayNum;
  piVar2 = &(this->OutEvents).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->OutEvents).ArrayNum = iVar6 + 1;
  *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_18[0];
  return;
}

// Resume @ 14f122640

void __thiscall FWebMMediaPlayer::Resume(FWebMMediaPlayer *this)

{
  TArray<EMediaEvent,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined4 local_18 [4];
  
  pTVar1 = &this->OutEvents;
  this->CurrentState = Playing;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_18[0] = 7;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->OutEvents).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OutEvents).ArrayNum;
  piVar2 = &(this->OutEvents).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->OutEvents).ArrayNum = iVar6 + 1;
  *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_18[0];
  return;
}

// Seek @ 14f122700

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWebMMediaPlayer::Seek(FWebMMediaPlayer *this,FTimespan *param_1)

{
  int iVar1;
  uint uVar2;
  FWebMVideoDecoder *this_00;
  AudioTrack *this_01;
  FMediaSamples *this_02;
  long64 lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  Cluster *pCVar10;
  char *pcVar11;
  uchar *puVar12;
  __int64 _Var13;
  double dVar14;
  ulong64 local_res8;
  
  iVar1 = *(int *)&this->MkvCurrentBlockEntry;
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 4)) {
    lVar9 = 0;
    dVar14 = (double)param_1->Ticks * __real_4059000000000000;
    if ((__real_43e0000000000000 <= dVar14) &&
       (dVar14 = dVar14 - __real_43e0000000000000, dVar14 < __real_43e0000000000000)) {
      lVar9 = -0x8000000000000000;
    }
    pCVar10 = mkvparser::Segment::FindCluster
                        ((Segment *)(this->AudioTracks).AllocatorInstance.Data,
                         (longlong)dVar14 + lVar9);
    *(Cluster **)&(this->AudioTracks).ArrayNum = pCVar10;
    (this->MkvReader).Ptr = (FMkvFileReader *)0x0;
    if ((this->OutEvents).AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    (**(code **)(*(longlong *)(this->OutEvents).AllocatorInstance.Data + 0x50))();
    uVar2 = *(uint *)&(this->MediaUrl).Data.AllocatorInstance.Data;
    if (uVar2 != 0xffffffff) {
      uVar8 = 0;
      if ((int)uVar2 < *(int *)&(this->VideoDecoder).Ptr) {
        uVar8 = ~uVar2 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      this_00 = (FWebMVideoDecoder *)this->EventSink;
      pcVar11 = mkvparser::Track::GetCodecId
                          ((Track *)(&((this->Samples).SharedReferenceCount.ReferenceController)->
                                      _padding_)[(int)uVar2]);
      FWebMVideoDecoder::Initialize(this_00,pcVar11);
    }
    uVar2 = *(uint *)((longlong)&this->MkvCurrentBlockEntry + 4);
    if (uVar2 != 0xffffffff) {
      uVar8 = 0;
      if ((int)uVar2 < *(int *)&(this->VideoTracks).AllocatorInstance.Data) {
        uVar8 = ~uVar2 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      this_01 = (AudioTrack *)(&((this->AudioDecoder).Ptr)->AudioSamplePool)[(int)uVar2].Ptr;
      puVar12 = mkvparser::Track::GetCodecPrivate((Track *)this_01,&local_res8);
      this_02 = (this->Samples).Object;
      _Var13 = mkvparser::AudioTrack::GetChannels(this_01);
      dVar14 = mkvparser::AudioTrack::GetSamplingRate(this_01);
      pcVar11 = mkvparser::Track::GetCodecId((Track *)this_01);
      FWebMAudioDecoder::Initialize
                ((FWebMAudioDecoder *)this_02,pcVar11,(int)dVar14,(int)_Var13,puVar12,local_res8);
    }
    lVar3 = param_1->Ticks;
    puVar4 = (undefined8 *)this->_padding_;
    (this->MediaUrl).Data.ArrayNum = (int)lVar3;
    (this->MediaUrl).Data.ArrayMax = (int)((ulonglong)lVar3 >> 0x20);
    *(undefined1 *)&this->CurrentState = Closed;
    (**(code **)*puVar4)(puVar4,9);
    return true;
  }
  if (2 < (byte)LogWebMMedia._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWebMMedia);
  }
  return false;
}

// SelectTrack @ 14f122b00

bool __thiscall
FWebMMediaPlayer::SelectTrack(FWebMMediaPlayer *this,EMediaTrackType param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  AudioTrack *this_00;
  FWebMAudioDecoder *this_01;
  FWebMVideoDecoder *this_02;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uchar *puVar7;
  __int64 _Var8;
  char *pcVar9;
  uint uVar10;
  double dVar11;
  ulong64 local_res20;
  
  if (param_1 == Audio) {
    piVar1 = (int *)((longlong)&this->MkvCurrentCluster + 4);
    iVar2 = *piVar1;
    *piVar1 = param_2;
  }
  else {
    if (param_1 != Video) {
      return true;
    }
    iVar2 = *(int *)&this->MkvCurrentBlockEntry;
    *(int *)&this->MkvCurrentBlockEntry = param_2;
  }
  if (iVar2 != param_2) {
    if (*(int *)&this->MkvCurrentCluster == 3) {
      (**(code **)(*(longlong *)&this[-1].bNoMoreToRead + 0x48))(&this[-1].bNoMoreToRead);
    }
    if (*(int *)&this->MkvCurrentCluster != 0) {
      uVar3 = *(uint *)((longlong)&this->MkvCurrentCluster + 4);
      if (uVar3 != 0xffffffff) {
        uVar10 = 0;
        if ((int)uVar3 < *(int *)&(this->AudioDecoder).Ptr) {
          uVar10 = ~uVar3 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        this_00 = (AudioTrack *)(&(((this->VideoDecoder).Ptr)->Context).name)[(int)uVar3];
        puVar7 = mkvparser::Track::GetCodecPrivate((Track *)this_00,&local_res20);
        this_01 = (FWebMAudioDecoder *)this->EventSink;
        _Var8 = mkvparser::AudioTrack::GetChannels(this_00);
        dVar11 = mkvparser::AudioTrack::GetSamplingRate(this_00);
        pcVar9 = mkvparser::Track::GetCodecId((Track *)this_00);
        FWebMAudioDecoder::Initialize(this_01,pcVar9,(int)dVar11,(int)_Var8,puVar7,local_res20);
      }
      uVar3 = *(uint *)&this->MkvCurrentBlockEntry;
      if (uVar3 != 0xffffffff) {
        uVar10 = 0;
        if ((int)uVar3 < *(int *)&(this->Samples).SharedReferenceCount.ReferenceController) {
          uVar10 = ~uVar3 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        this_02 = *(FWebMVideoDecoder **)&(this->OutEvents).ArrayNum;
        pcVar9 = mkvparser::Track::GetCodecId
                           ((Track *)(&((this->Samples).Object)->_padding_)[(int)uVar3]);
        FWebMVideoDecoder::Initialize(this_02,pcVar9);
      }
      return true;
    }
  }
  return true;
}

// SetLooping @ 14f122cf0

bool __thiscall FWebMMediaPlayer::SetLooping(FWebMMediaPlayer *this,bool param_1)

{
  *(bool *)((longlong)&this->CurrentState + 1) = param_1;
  return true;
}

// SetRate @ 14f122d00

bool __thiscall FWebMMediaPlayer::SetRate(FWebMMediaPlayer *this,float param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 local_18 [4];
  
  if (param_1 == 0.0) {
    Pause((FWebMMediaPlayer *)&this[-1].SelectedVideoTrack);
    return true;
  }
  if (param_1 == __real_3f800000) {
    plVar1 = &this->_padding_;
    *(undefined4 *)&this->MkvCurrentBlockEntry = 3;
    local_18[0] = 7;
    if (((undefined4 *)*plVar1 <= local_18) &&
       (local_18 < (undefined4 *)*plVar1 + *(int *)((longlong)&this->_padding_ + 4))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    iVar6 = (int)this->_padding_;
    piVar2 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)plVar1,piVar2);
    }
    *(int *)&this->_padding_ = iVar6 + 1;
    *(undefined4 *)(*plVar1 + (longlong)iVar6 * 4) = local_18[0];
    return true;
  }
  return false;
}

// SetTrackFormat @ 14f122e00

bool __thiscall
FWebMMediaPlayer::SetTrackFormat
          (FWebMMediaPlayer *this,EMediaTrackType param_1,int param_2,int param_3)

{
  return param_3 == 0;
}

// Stop @ 14f122e50

void __thiscall FWebMMediaPlayer::Stop(FWebMMediaPlayer *this)

{
  TArray<EMediaEvent,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined4 auStack_18 [4];
  
  pTVar1 = &this->OutEvents;
  this->CurrentState = Paused;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  auStack_18[0] = 8;
  if ((pFVar3 <= (FScriptContainerElement *)auStack_18) &&
     ((FScriptContainerElement *)auStack_18 < pFVar3 + (longlong)(this->OutEvents).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OutEvents).ArrayNum;
  piVar2 = &(this->OutEvents).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->OutEvents).ArrayNum = iVar6 + 1;
  *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 4) = auStack_18[0];
  return;
}

// TickFetch @ 14f122e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWebMMediaPlayer::TickFetch(FWebMMediaPlayer *this,FTimespan param_1,FTimespan param_2)

{
  atomic<int> *paVar1;
  BlockEntry **ppBVar2;
  atomic<int> aVar3;
  uint uVar4;
  Segment *pSVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  TReferenceControllerBase<1> *pTVar10;
  FWebMFrame *pFVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  FWebMFrame *pFVar15;
  FSharedReferencer<1> FVar16;
  bool bVar17;
  int iVar18;
  long lVar19;
  FMediaSamples *pFVar20;
  __int64 _Var21;
  Cluster *pCVar22;
  Block *pBVar23;
  Frame *this_00;
  TReferenceControllerBase<1> *pTVar24;
  FStaticBasicLogRecord *pFVar25;
  FScriptContainerElement *pFVar26;
  longlong lVar27;
  uint uVar28;
  TReferenceControllerBase<1> *pTVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  int local_res8;
  longlong local_res20;
  undefined4 local_d8;
  undefined4 local_d4;
  TSharedPtr<FWebMFrame,1> local_d0;
  TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_> local_c0;
  TArray<TSharedPtr<FWebMFrame,1>,TSizedDefaultAllocator<32>_> local_b0 [7];
  undefined8 extraout_XMM0_Qb;
  
  if (this->CurrentState == Playing) {
    lVar27 = (this->CurrentTime).Ticks + param_1.Ticks;
    (this->CurrentTime).Ticks = lVar27;
    dVar14 = __real_3fe0000000000000;
    if (this->bNoMoreToRead == false) {
      auVar32._8_8_ = 0;
      auVar32._0_8_ = __real_416312d010000000;
      auVar32 = roundpd(auVar32,auVar32,1);
      local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.ArrayNum = 0;
      local_c0.ArrayMax = 0;
      local_b0[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b0[0].ArrayNum = 0;
      local_b0[0].ArrayMax = 0;
      uVar9 = __real_4114585755555555;
      pTVar10 = _UNK_150651568;
      pFVar11 = ___xmm_00000000000000000000000000000010;
      dVar12 = __real_416312d000000000;
      dVar13 = __real_3f847ae147ae147b;
      if (lVar27 < lVar27 - (longlong)((double)(longlong)auVar32._0_8_ * __real_3fe0000000000000)) {
        if (2 < (byte)LogWebMMedia._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWebMMedia);
        }
        if (((this->Samples).Object == (FMediaSamples *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (**(code **)(((this->Samples).Object)->_padding_ + 0x50))();
        uVar9 = __real_4114585755555555;
        pTVar10 = _UNK_150651568;
        pFVar11 = ___xmm_00000000000000000000000000000010;
        dVar12 = __real_416312d000000000;
        dVar13 = __real_3f847ae147ae147b;
      }
      do {
        if ((this->CurrentTime).Ticks + (longlong)auVar32._0_8_ <= lVar27) break;
        ppBVar2 = &this->MkvCurrentBlockEntry;
        do {
          if (this->MkvCurrentCluster == (Cluster *)0x0) {
            pCVar22 = mkvparser::Segment::GetFirst((this->MkvSegment).Ptr);
            this->MkvCurrentCluster = pCVar22;
            *ppBVar2 = (BlockEntry *)0x0;
            if ((pCVar22 == (Cluster *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("MkvCurrentCluster",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Private\\Player\\WebMMediaPlayer.cpp"
                                    ,0x2b8,L""), bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          if ((*ppBVar2 == (BlockEntry *)0x0) ||
             (bVar17 = mkvparser::BlockEntry::EOS(*ppBVar2), bVar17)) {
            lVar19 = mkvparser::Cluster::GetFirst(this->MkvCurrentCluster,ppBVar2);
            if (lVar19 != 0) {
              if (2 < (byte)LogWebMMedia._0_1_) {
                pFVar25 = &::LOG_Static;
                goto LAB_14f123354;
              }
              break;
            }
          }
          else {
            lVar19 = mkvparser::Cluster::GetNext(this->MkvCurrentCluster,*ppBVar2,ppBVar2);
            if (lVar19 != 0) {
              if (2 < (byte)LogWebMMedia._0_1_) {
                pFVar25 = &::LOG_Static;
LAB_14f123354:
                UE::Logging::Private::BasicLog<3>(pFVar25,(FLogCategoryBase *)&LogWebMMedia);
              }
              break;
            }
          }
          if ((*ppBVar2 != (BlockEntry *)0x0) &&
             (bVar17 = mkvparser::BlockEntry::EOS(*ppBVar2), !bVar17)) goto LAB_14f123368;
          pSVar5 = (this->MkvSegment).Ptr;
          *ppBVar2 = (BlockEntry *)0x0;
          pCVar22 = mkvparser::Segment::GetNext(pSVar5,this->MkvCurrentCluster);
          this->MkvCurrentCluster = pCVar22;
          if ((pCVar22 == (Cluster *)0x0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("MkvCurrentCluster",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\WebMMedia\\Source\\WebMMedia\\Private\\Player\\WebMMediaPlayer.cpp"
                                  ,0x2d2,L""), bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          bVar17 = mkvparser::Cluster::EOS(this->MkvCurrentCluster);
        } while (!bVar17);
        this->bNoMoreToRead = true;
LAB_14f123368:
        if (this->bNoMoreToRead != false) break;
        pBVar23 = (Block *)(**(code **)(this->MkvCurrentBlockEntry->_padding_ + 8))();
        _Var21 = mkvparser::Block::GetTime(pBVar23,this->MkvCurrentCluster);
        local_res8 = 0;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = (double)_Var21 * dVar13 + dVar14;
        auVar33 = roundpd(extraout_XMM0_00,auVar33,1);
        lVar27 = (longlong)auVar33._0_8_;
        pBVar23 = (Block *)(**(code **)(this->MkvCurrentBlockEntry->_padding_ + 8))();
        iVar18 = mkvparser::Block::GetFrameCount(pBVar23);
        if (0 < iVar18) {
          do {
            pTVar29 = (TReferenceControllerBase<1> *)0x0;
            pBVar23 = (Block *)(**(code **)(this->MkvCurrentBlockEntry->_padding_ + 8))();
            this_00 = mkvparser::Block::GetFrame(pBVar23,local_res8);
            pTVar24 = ::operator_new(0x30);
            pFVar15 = pFVar11;
            FVar16.ReferenceController = pTVar10;
            if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
              pTVar24->_padding_ =
                   (longlong)
                   &___7__TIntrusiveReferenceController_UFWebMFrame___00_SharedPointerInternals__6B_
              ;
              pTVar24->SharedReferenceCount = (atomic<int>)0x1;
              pTVar24->WeakReferenceCount = (atomic<int>)0x1;
              pTVar24[1]._padding_ = 0;
              pTVar24[2]._padding_ = 0;
              pTVar24[2].SharedReferenceCount = (atomic<int>)0x0;
              pTVar24[2].WeakReferenceCount = (atomic<int>)0x0;
              pTVar24[1].SharedReferenceCount = (atomic<int>)0x0;
              pTVar24[1].WeakReferenceCount = (atomic<int>)0x0;
              if (((FWebMFrame *)(pTVar24 + 1) == (FWebMFrame *)0x0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InObject != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x246,L""), bVar17)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              LOCK();
              pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
              UNLOCK();
              pTVar29 = pTVar24;
              pFVar15 = (FWebMFrame *)(pTVar24 + 1);
              FVar16.ReferenceController = pTVar24;
            }
            local_d0.SharedReferenceCount.ReferenceController = FVar16.ReferenceController;
            local_d0.Object = pFVar15;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar29);
            if ((local_d0.Object == (FWebMFrame *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            ((local_d0.Object)->Time).Ticks = lVar27;
            if ((local_d0.Object == (FWebMFrame *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar15 = local_d0.Object;
            aVar3 = *(atomic<int> *)&((local_d0.Object)->Data).ArrayNum;
            uVar4 = this_00->len;
            if ((int)aVar3 < (int)uVar4) {
              UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,uVar4 - (int)aVar3,(ForAnyElementType *)local_d0.Object,
                         (int *)&((local_d0.Object)->Data).ArrayNum,
                         (int *)&((local_d0.Object)->Data).ArrayMax);
            }
            else {
              if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
              }
              if ((int)uVar4 < (int)aVar3) {
                uVar28 = (int)aVar3 - uVar4;
                if (((int)(uVar4 | uVar28) < 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x458,
                                        L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if (uVar28 != 0) {
                  pFVar26 = (pFVar15->Data).AllocatorInstance.Data + (int)uVar4;
                  iVar18 = ((int)*(atomic<int> *)&(pFVar15->Data).ArrayNum - uVar4) - uVar28;
                  if (iVar18 != 0) {
                    memmove(pFVar26,pFVar26 + (int)uVar28,(longlong)iVar18);
                  }
                  paVar1 = (atomic<int> *)&(pFVar15->Data).ArrayNum;
                  *paVar1 = (atomic<int>)((int)*paVar1 - uVar28);
                  UE::Core::Private::
                  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,(ForAnyElementType *)pFVar15,
                             (int)*(atomic<int> *)&(pFVar15->Data).ArrayNum,
                             (int *)&(pFVar15->Data).ArrayMax);
                }
              }
            }
            if ((local_d0.Object == (FWebMFrame *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            mkvparser::Block::Frame::Read
                      (this_00,(IMkvReader *)(this->MkvReader).Ptr,
                       (uchar *)((local_d0.Object)->Data).AllocatorInstance.Data);
            pBVar23 = (Block *)(**(code **)(this->MkvCurrentBlockEntry->_padding_ + 8))();
            _Var21 = mkvparser::Block::GetTrackNumber(pBVar23);
            uVar4 = this->SelectedVideoTrack;
            if (uVar4 == 0xffffffff) {
LAB_14f123855:
              uVar4 = this->SelectedAudioTrack;
              if (uVar4 != 0xffffffff) {
                uVar28 = 0;
                if ((int)uVar4 < (this->AudioTracks).ArrayNum) {
                  uVar28 = ~uVar4 >> 0x1f;
                }
                if ((uVar28 == 0) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar17)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                lVar19 = mkvparser::Track::GetNumber
                                   (*(Track **)
                                     ((this->AudioTracks).AllocatorInstance.Data +
                                     (longlong)(int)uVar4 * 8));
                if (lVar19 == (int)_Var21) {
                  if (((local_b0[0].AllocatorInstance.Data <= &local_d0) &&
                      (&local_d0 <
                       (TSharedPtr<FWebMFrame,1> *)
                       (local_b0[0].AllocatorInstance.Data + (longlong)local_b0[0].ArrayMax * 0x10))
                      ) && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar17)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar18 = local_b0[0].ArrayNum;
                  if (local_b0[0].ArrayNum == local_b0[0].ArrayMax) {
                    iVar18 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&local_b0[0].AllocatorInstance,&local_b0[0].ArrayMax);
                  }
                  local_b0[0].ArrayNum = iVar18 + 1;
                  *(FWebMFrame **)
                   &local_b0[0].AllocatorInstance.Data[(longlong)iVar18 * 0x10].field_0x0 =
                       local_d0.Object;
                  *(TReferenceControllerBase<1> **)
                   (local_b0[0].AllocatorInstance.Data + (longlong)iVar18 * 0x10 + 8) =
                       local_d0.SharedReferenceCount.ReferenceController;
                  if (local_d0.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_d0.SharedReferenceCount.ReferenceController)->
                               SharedReferenceCount + 1);
                    UNLOCK();
                  }
                }
              }
            }
            else {
              uVar28 = 0;
              if ((int)uVar4 < (this->VideoTracks).ArrayNum) {
                uVar28 = ~uVar4 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar19 = mkvparser::Track::GetNumber
                                 (*(Track **)
                                   ((this->VideoTracks).AllocatorInstance.Data +
                                   (longlong)(int)uVar4 * 8));
              if (lVar19 != (int)_Var21) goto LAB_14f123855;
              uVar4 = this->SelectedVideoTrack;
              uVar28 = 0;
              if ((int)uVar4 < (this->VideoTracks).ArrayNum) {
                uVar28 = ~uVar4 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              auVar34._0_8_ =
                   mkvparser::VideoTrack::GetFrameRate
                             (*(VideoTrack **)
                               ((this->VideoTracks).AllocatorInstance.Data +
                               (longlong)(int)uVar4 * 8));
              auVar34._8_8_ = extraout_XMM0_Qb;
              if (auVar34._0_8_ <= 0.0) {
                auVar8._8_8_ = 0;
                auVar8._0_8_ = uVar9;
                auVar33 = roundpd(auVar34,auVar8,1);
                dVar30 = auVar33._0_8_;
              }
              else {
                auVar35._8_8_ = 0;
                auVar35._0_8_ = dVar12 / auVar34._0_8_ + dVar14;
                auVar33 = roundpd(auVar35,auVar35,1);
                dVar30 = auVar33._0_8_;
              }
              if ((local_d0.Object == (FWebMFrame *)0x0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar17)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              ((local_d0.Object)->Duration).Ticks = (longlong)dVar30;
              if (((local_c0.AllocatorInstance.Data <= &local_d0) &&
                  (&local_d0 <
                   (TSharedPtr<FWebMFrame,1> *)
                   (local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayMax * 0x10))) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar18 = local_c0.ArrayNum;
              if (local_c0.ArrayNum == local_c0.ArrayMax) {
                iVar18 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_c0.AllocatorInstance,&local_c0.ArrayMax);
              }
              local_c0.ArrayNum = iVar18 + 1;
              *(FWebMFrame **)&local_c0.AllocatorInstance.Data[(longlong)iVar18 * 0x10].field_0x0 =
                   local_d0.Object;
              *(TReferenceControllerBase<1> **)
               (local_c0.AllocatorInstance.Data + (longlong)iVar18 * 0x10 + 8) =
                   local_d0.SharedReferenceCount.ReferenceController;
              if (local_d0.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                     + 1);
                UNLOCK();
              }
              if ((local_d0.Object == (FWebMFrame *)0x0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar17)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar27 = lVar27 + ((local_d0.Object)->Duration).Ticks;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_d0.SharedReferenceCount.ReferenceController);
            local_res8 = local_res8 + 1;
            pBVar23 = (Block *)(**(code **)(this->MkvCurrentBlockEntry->_padding_ + 8))();
            iVar18 = mkvparser::Block::GetFrameCount(pBVar23);
          } while (local_res8 < iVar18);
        }
      } while (local_c0.ArrayNum < 0x15);
      if (0 < local_c0.ArrayNum) {
        FWebMVideoDecoder::DecodeVideoFramesAsync((this->VideoDecoder).Ptr,&local_c0);
      }
      if (0 < local_b0[0].ArrayNum) {
        FWebMAudioDecoder::DecodeAudioFramesAsync((this->AudioDecoder).Ptr,local_b0);
      }
      DestructItems<TSharedPtr<FWebMFrame,1>,int>
                ((TSharedPtr<FWebMFrame,1> *)local_b0[0].AllocatorInstance.Data,local_b0[0].ArrayNum
                );
      if ((TSharedPtr<FWebMFrame,1> *)local_b0[0].AllocatorInstance.Data !=
          (TSharedPtr<FWebMFrame,1> *)0x0) {
        FMemory::Free(local_b0[0].AllocatorInstance.Data);
      }
      DestructItems<TSharedPtr<FWebMFrame,1>,int>
                ((TSharedPtr<FWebMFrame,1> *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
      if ((TSharedPtr<FWebMFrame,1> *)local_c0.AllocatorInstance.Data !=
          (TSharedPtr<FWebMFrame,1> *)0x0) {
        FMemory::Free(local_c0.AllocatorInstance.Data);
      }
    }
    else {
      if (((this->Samples).Object == (FMediaSamples *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar18 = (**(code **)(((this->Samples).Object)->_padding_ + 0x118))();
      if (iVar18 == 0) {
        pFVar20 = TSharedPtr<FMediaSamples,1>::operator->(&this->Samples);
        iVar18 = (**(code **)(pFVar20->_padding_ + 0xf8))(pFVar20);
        if (iVar18 == 0) {
          if (this->bLooping != false) {
            auVar31._8_8_ = 0;
            auVar31._0_8_ = __real_3fe0000000000000;
            auVar32 = roundpd(auVar31,auVar31,1);
            local_res20 = (longlong)auVar32._0_8_;
            (**(code **)(this->_padding_ + 0x48))(&this->_padding_,&local_res20);
            return;
          }
          pSVar5 = (this->MkvSegment).Ptr;
          this->CurrentState = Stopped;
          _Var21 = mkvparser::Segment::GetDuration(pSVar5);
          local_d8 = 6;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (double)_Var21 * __real_3f847ae147ae147b + __real_3fe0000000000000;
          auVar32 = roundpd(extraout_XMM0,auVar7,1);
          (this->CurrentTime).Ticks = (longlong)auVar32._0_8_;
          pFVar26 = (this->OutEvents).AllocatorInstance.Data;
          if (((pFVar26 <= (FScriptContainerElement *)&local_d8) &&
              ((FScriptContainerElement *)&local_d8 <
               pFVar26 + (longlong)(this->OutEvents).ArrayMax * 4)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar18 = (this->OutEvents).ArrayNum;
          if (iVar18 == (this->OutEvents).ArrayMax) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(this->OutEvents).AllocatorInstance,
                                &(this->OutEvents).ArrayMax);
          }
          (this->OutEvents).ArrayNum = iVar18 + 1;
          local_d4 = 8;
          *(undefined4 *)((this->OutEvents).AllocatorInstance.Data + (longlong)iVar18 * 4) =
               local_d8;
          pFVar26 = (this->OutEvents).AllocatorInstance.Data;
          if (((pFVar26 <= (FScriptContainerElement *)&local_d4) &&
              ((FScriptContainerElement *)&local_d4 <
               pFVar26 + (longlong)(this->OutEvents).ArrayMax * 4)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar18 = (this->OutEvents).ArrayNum;
          if (iVar18 == (this->OutEvents).ArrayMax) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(this->OutEvents).AllocatorInstance,
                                &(this->OutEvents).ArrayMax);
          }
          (this->OutEvents).ArrayNum = iVar18 + 1;
          *(undefined4 *)((this->OutEvents).AllocatorInstance.Data + (longlong)iVar18 * 4) =
               local_d4;
          return;
        }
      }
    }
  }
  return;
}

// TickInput @ 14f123ab0

void __thiscall
FWebMMediaPlayer::TickInput(FWebMMediaPlayer *this,FTimespan param_1,FTimespan param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->OutEvents).AllocatorInstance.Data;
  iVar3 = (this->OutEvents).ArrayNum;
  pFVar2 = pFVar4 + (longlong)iVar3 * 4;
  while( true ) {
    if ((this->OutEvents).ArrayNum != iVar3) {
      `TCheckedPointerIterator<enum_EMediaEvent,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar2) break;
    (**(code **)*this->EventSink)(this->EventSink,*(undefined4 *)pFVar4);
    pFVar4 = pFVar4 + 4;
  }
  piVar1 = &(this->OutEvents).ArrayMax;
  (this->OutEvents).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->OutEvents).AllocatorInstance,0,piVar1);
  }
  return;
}

